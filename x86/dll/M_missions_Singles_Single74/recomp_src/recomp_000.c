#include "recomp.h"

/* FUN_10001000 @ 0x11c61000 (157 bytes, 61 insns) */
void f_11c61000(void) {
  FTRACE(0x11c61000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c61000 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61003 push esi */
  push32((uint32_t)(ESI));
  /* 11c61004 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c61008 push edi */
  push32((uint32_t)(EDI));
  /* 11c61009 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11c6100d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6100f jne 0x11c61025 */
  if (!C.zf) goto L_11c61025;
  /* 11c61011 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c61013 jne 0x11c61025 */
  if (!C.zf) goto L_11c61025;
  /* 11c61015 mov eax, 0xc0 */
  EAX = (0xc0u);
  /* 11c6101a pop edi */
  EDI = (pop32());
  /* 11c6101b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c61020 pop esi */
  ESI = (pop32());
  /* 11c61021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61024 ret  */
  ESPCHK(0x11c61000u, _esp0);
  ESP += 4; return;
L_11c61025:;
  /* 11c61025 mov eax, esi */
  EAX = (ESI);
  /* 11c61027 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c61028 mov ecx, eax */
  ECX = (EAX);
  /* 11c6102a mov eax, edi */
  EAX = (EDI);
  /* 11c6102c xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6102e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61030 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c61031 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c61033 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61035 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c61037 jle 0x11c61057 */
  if ((C.zf||C.sf!=C.of)) goto L_11c61057;
  /* 11c61039 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c6103c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6103d push eax */
  push32((uint32_t)(EAX));
  /* 11c6103e call 0x11c63fc7 */
  push32(0x11c61043u); f_11c63fc7();
  /* 11c61043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61046 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c61048 mov cl, byte ptr [eax*2 + 0x11c736e8] */
  CL = (r8((uint32_t)(EAX*2 + 0x11c736e8)));
  /* 11c6104f mov dword ptr [esp + 0xc], edx */
  w32((uint32_t)(ESP + 0xc), (EDX));
  /* 11c61053 mov eax, ecx */
  EAX = (ECX);
  /* 11c61055 jmp 0x11c61078 */
  goto L_11c61078;
L_11c61057:;
  /* 11c61057 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c6105a push eax */
  push32((uint32_t)(EAX));
  /* 11c6105b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6105c call 0x11c63fc7 */
  push32(0x11c61061u); f_11c63fc7();
  /* 11c61061 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11c61065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c61067 mov dl, byte ptr [eax*2 + 0x11c736e8] */
  DL = (r8((uint32_t)(EAX*2 + 0x11c736e8)));
  /* 11c6106e mov eax, 0x40 */
  EAX = (0x40u);
  /* 11c61073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61076 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c61078:;
  /* 11c61078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6107a jge 0x11c61085 */
  if ((C.sf==C.of)) goto L_11c61085;
  /* 11c6107c mov ecx, 0x80 */
  ECX = (0x80u);
  /* 11c61081 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61083 mov eax, ecx */
  EAX = (ECX);
L_11c61085:;
  /* 11c61085 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c61087 jge 0x11c61092 */
  if ((C.sf==C.of)) goto L_11c61092;
  /* 11c61089 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11c6108e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61090 mov eax, edx */
  EAX = (EDX);
L_11c61092:;
  /* 11c61092 pop edi */
  EDI = (pop32());
  /* 11c61093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c61098 pop esi */
  ESI = (pop32());
  /* 11c61099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6109c ret  */
  ESPCHK(0x11c61000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11c61210 (2102 bytes, 552 insns) */
void f_11c61210(void) {
  FTRACE(0x11c61210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c61210 push ebx */
  push32((uint32_t)(EBX));
  /* 11c61211 push ebp */
  push32((uint32_t)(EBP));
  /* 11c61212 push esi */
  push32((uint32_t)(ESI));
  /* 11c61213 push edi */
  push32((uint32_t)(EDI));
  /* 11c61214 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61216 call 0x11c6401b */
  push32(0x11c6121bu); f_11c6401b();
  /* 11c6121b push eax */
  push32((uint32_t)(EAX));
  /* 11c6121c call 0x11c63fec */
  push32(0x11c61221u); f_11c63fec();
  /* 11c61221 mov esi, dword ptr [0x11c6e1a8] */
  ESI = (r32((uint32_t)(0x11c6e1a8)));
  /* 11c61227 push 0x11c703cc */
  push32((uint32_t)(0x11c703ccu));
  /* 11c6122c push 0x11c74100 */
  push32((uint32_t)(0x11c74100u));
  /* 11c61231 call esi */
  call_ind((uint32_t)(ESI), 0x11c61233u);
  /* 11c61233 push 0x11c703c0 */
  push32((uint32_t)(0x11c703c0u));
  /* 11c61238 push 0x11c73db8 */
  push32((uint32_t)(0x11c73db8u));
  /* 11c6123d call esi */
  call_ind((uint32_t)(ESI), 0x11c6123fu);
  /* 11c6123f push 0x11c703b4 */
  push32((uint32_t)(0x11c703b4u));
  /* 11c61244 push 0x11c740b0 */
  push32((uint32_t)(0x11c740b0u));
  /* 11c61249 call esi */
  call_ind((uint32_t)(ESI), 0x11c6124bu);
  /* 11c6124b push 0x11c703a8 */
  push32((uint32_t)(0x11c703a8u));
  /* 11c61250 push 0x11c83730 */
  push32((uint32_t)(0x11c83730u));
  /* 11c61255 call esi */
  call_ind((uint32_t)(ESI), 0x11c61257u);
  /* 11c61257 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c6125c mov esi, dword ptr [0x11c6e1ac] */
  ESI = (r32((uint32_t)(0x11c6e1ac)));
  /* 11c61262 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61264 push 0x11c74100 */
  push32((uint32_t)(0x11c74100u));
  /* 11c61269 push eax */
  push32((uint32_t)(EAX));
  /* 11c6126a call esi */
  call_ind((uint32_t)(ESI), 0x11c6126cu);
  /* 11c6126c mov cl, byte ptr [0x11c73d08] */
  CL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61272 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61274 push 0x11c73db8 */
  push32((uint32_t)(0x11c73db8u));
  /* 11c61279 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6127a call esi */
  call_ind((uint32_t)(ESI), 0x11c6127cu);
  /* 11c6127c mov dl, byte ptr [0x11c73d08] */
  DL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61282 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61285 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61287 push 0x11c740b0 */
  push32((uint32_t)(0x11c740b0u));
  /* 11c6128c push edx */
  push32((uint32_t)(EDX));
  /* 11c6128d call esi */
  call_ind((uint32_t)(ESI), 0x11c6128fu);
  /* 11c6128f mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61294 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61296 push 0x11c83730 */
  push32((uint32_t)(0x11c83730u));
  /* 11c6129b push eax */
  push32((uint32_t)(EAX));
  /* 11c6129c call esi */
  call_ind((uint32_t)(ESI), 0x11c6129eu);
  /* 11c6129e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11c612a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c612a5 call dword ptr [0x11c6e1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b0))), 0x11c612abu);
  /* 11c612ab mov edi, dword ptr [0x11c6e1b4] */
  EDI = (r32((uint32_t)(0x11c6e1b4)));
  /* 11c612b1 push 0x11c70398 */
  push32((uint32_t)(0x11c70398u));
  /* 11c612b6 push 0x11c83718 */
  push32((uint32_t)(0x11c83718u));
  /* 11c612bb call edi */
  call_ind((uint32_t)(EDI), 0x11c612bdu);
  /* 11c612bd mov cl, byte ptr [0x11c74108] */
  CL = (r8((uint32_t)(0x11c74108)));
  /* 11c612c3 mov ebx, dword ptr [0x11c6e1b8] */
  EBX = (r32((uint32_t)(0x11c6e1b8)));
  /* 11c612c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c612ca call ebx */
  call_ind((uint32_t)(EBX), 0x11c612ccu);
  /* 11c612cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c612ce push 0x11c83718 */
  push32((uint32_t)(0x11c83718u));
  /* 11c612d3 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c612d9u);
  /* 11c612d9 mov dl, byte ptr [0x11c74108] */
  DL = (r8((uint32_t)(0x11c74108)));
  /* 11c612df push 1 */
  push32((uint32_t)(0x1u));
  /* 11c612e1 push edx */
  push32((uint32_t)(EDX));
  /* 11c612e2 call dword ptr [0x11c6e1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1bc))), 0x11c612e8u);
  /* 11c612e8 mov esi, dword ptr [0x11c6e1c0] */
  ESI = (r32((uint32_t)(0x11c6e1c0)));
  /* 11c612ee push 0x11c70390 */
  push32((uint32_t)(0x11c70390u));
  /* 11c612f3 push 0x11c740c0 */
  push32((uint32_t)(0x11c740c0u));
  /* 11c612f8 call esi */
  call_ind((uint32_t)(ESI), 0x11c612fau);
  /* 11c612fa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c612fd push 0x11c70388 */
  push32((uint32_t)(0x11c70388u));
  /* 11c61302 push 0x11c740e0 */
  push32((uint32_t)(0x11c740e0u));
  /* 11c61307 call esi */
  call_ind((uint32_t)(ESI), 0x11c61309u);
  /* 11c61309 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c6130e mov esi, dword ptr [0x11c6e1c4] */
  ESI = (r32((uint32_t)(0x11c6e1c4)));
  /* 11c61314 push 0x11c740c0 */
  push32((uint32_t)(0x11c740c0u));
  /* 11c61319 push eax */
  push32((uint32_t)(EAX));
  /* 11c6131a call esi */
  call_ind((uint32_t)(ESI), 0x11c6131cu);
  /* 11c6131c mov cl, byte ptr [0x11c73d08] */
  CL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61322 push 0x11c740e0 */
  push32((uint32_t)(0x11c740e0u));
  /* 11c61327 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61328 call esi */
  call_ind((uint32_t)(ESI), 0x11c6132au);
  /* 11c6132a mov esi, dword ptr [0x11c6e1c8] */
  ESI = (r32((uint32_t)(0x11c6e1c8)));
  /* 11c61330 push 0x11c70378 */
  push32((uint32_t)(0x11c70378u));
  /* 11c61335 push 0x11c73df0 */
  push32((uint32_t)(0x11c73df0u));
  /* 11c6133a call esi */
  call_ind((uint32_t)(ESI), 0x11c6133cu);
  /* 11c6133c push 0x11c7036c */
  push32((uint32_t)(0x11c7036cu));
  /* 11c61341 push 0x11c740f8 */
  push32((uint32_t)(0x11c740f8u));
  /* 11c61346 call esi */
  call_ind((uint32_t)(ESI), 0x11c61348u);
  /* 11c61348 mov ebp, dword ptr [0x11c6e1cc] */
  EBP = (r32((uint32_t)(0x11c6e1cc)));
  /* 11c6134e push 4 */
  push32((uint32_t)(0x4u));
  /* 11c61350 push 0x11c8780c */
  push32((uint32_t)(0x11c8780cu));
  /* 11c61355 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61357u);
  /* 11c61357 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c61359 push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c6135e call ebp */
  call_ind((uint32_t)(EBP), 0x11c61360u);
  /* 11c61360 push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c61365 call dword ptr [0x11c6e1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d0))), 0x11c6136bu);
  /* 11c6136b push 0x11c70364 */
  push32((uint32_t)(0x11c70364u));
  /* 11c61370 push 0x11c74098 */
  push32((uint32_t)(0x11c74098u));
  /* 11c61375 call edi */
  call_ind((uint32_t)(EDI), 0x11c61377u);
  /* 11c61377 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6137a push 0x11c70354 */
  push32((uint32_t)(0x11c70354u));
  /* 11c6137f push 0x11c73cf8 */
  push32((uint32_t)(0x11c73cf8u));
  /* 11c61384 call edi */
  call_ind((uint32_t)(EDI), 0x11c61386u);
  /* 11c61386 push 0x11c70348 */
  push32((uint32_t)(0x11c70348u));
  /* 11c6138b push 0x11c83700 */
  push32((uint32_t)(0x11c83700u));
  /* 11c61390 call esi */
  call_ind((uint32_t)(ESI), 0x11c61392u);
  /* 11c61392 push 0x11c7033c */
  push32((uint32_t)(0x11c7033cu));
  /* 11c61397 push 0x11c83560 */
  push32((uint32_t)(0x11c83560u));
  /* 11c6139c call esi */
  call_ind((uint32_t)(ESI), 0x11c6139eu);
  /* 11c6139e push 8 */
  push32((uint32_t)(0x8u));
  /* 11c613a0 push 0x11c83588 */
  push32((uint32_t)(0x11c83588u));
  /* 11c613a5 call ebp */
  call_ind((uint32_t)(EBP), 0x11c613a7u);
  /* 11c613a7 push 0x11c70330 */
  push32((uint32_t)(0x11c70330u));
  /* 11c613ac push 0x11c740a8 */
  push32((uint32_t)(0x11c740a8u));
  /* 11c613b1 call edi */
  call_ind((uint32_t)(EDI), 0x11c613b3u);
  /* 11c613b3 push 0x11c70324 */
  push32((uint32_t)(0x11c70324u));
  /* 11c613b8 push 0x11c740b8 */
  push32((uint32_t)(0x11c740b8u));
  /* 11c613bd call edi */
  call_ind((uint32_t)(EDI), 0x11c613bfu);
  /* 11c613bf mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c613c5 push edx */
  push32((uint32_t)(EDX));
  /* 11c613c6 call ebx */
  call_ind((uint32_t)(EBX), 0x11c613c8u);
  /* 11c613c8 mov al, byte ptr [0x11c836f8] */
  AL = (r8((uint32_t)(0x11c836f8)));
  /* 11c613cd push eax */
  push32((uint32_t)(EAX));
  /* 11c613ce call ebx */
  call_ind((uint32_t)(EBX), 0x11c613d0u);
  /* 11c613d0 mov ebx, dword ptr [0x11c6e1d4] */
  EBX = (r32((uint32_t)(0x11c6e1d4)));
  /* 11c613d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c613d8 call ebx */
  call_ind((uint32_t)(EBX), 0x11c613dau);
  /* 11c613da add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c613dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c613e0 jg 0x11c613f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c613f2;
  /* 11c613e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c613e4 push 0x11c740b8 */
  push32((uint32_t)(0x11c740b8u));
  /* 11c613e9 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c613efu);
  /* 11c613ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c613f2:;
  /* 11c613f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c613f4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c613f6u);
  /* 11c613f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c613f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c613fb jne 0x11c6140d */
  if (!C.zf) goto L_11c6140d;
  /* 11c613fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c613ff push 0x11c740a8 */
  push32((uint32_t)(0x11c740a8u));
  /* 11c61404 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c6140au);
  /* 11c6140a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6140d:;
  /* 11c6140d mov cl, byte ptr [0x11c73de8] */
  CL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61413 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61414 call dword ptr [0x11c6e1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d8))), 0x11c6141au);
  /* 11c6141a mov dl, byte ptr [0x11c836f8] */
  DL = (r8((uint32_t)(0x11c836f8)));
  /* 11c61420 push edx */
  push32((uint32_t)(EDX));
  /* 11c61421 call dword ptr [0x11c6e1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d8))), 0x11c61427u);
  /* 11c61427 push 0x11c70318 */
  push32((uint32_t)(0x11c70318u));
  /* 11c6142c push 0x11c73dc8 */
  push32((uint32_t)(0x11c73dc8u));
  /* 11c61431 call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c61437u);
  /* 11c61437 push 0x11c7030c */
  push32((uint32_t)(0x11c7030cu));
  /* 11c6143c push 0x11c83580 */
  push32((uint32_t)(0x11c83580u));
  /* 11c61441 call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c61447u);
  /* 11c61447 push 0x11c70304 */
  push32((uint32_t)(0x11c70304u));
  /* 11c6144c push 0x11c83738 */
  push32((uint32_t)(0x11c83738u));
  /* 11c61451 call edi */
  call_ind((uint32_t)(EDI), 0x11c61453u);
  /* 11c61453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61455 push 0x11c83738 */
  push32((uint32_t)(0x11c83738u));
  /* 11c6145a call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c61460u);
  /* 11c61460 mov al, byte ptr [0x11c74108] */
  AL = (r8((uint32_t)(0x11c74108)));
  /* 11c61465 push eax */
  push32((uint32_t)(EAX));
  /* 11c61466 call dword ptr [0x11c6e1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1dc))), 0x11c6146cu);
  /* 11c6146c add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6146f mov ecx, 0x11c83720 */
  ECX = (0x11c83720u);
  /* 11c61474 push 0x11c73d08 */
  push32((uint32_t)(0x11c73d08u));
  /* 11c61479 call 0x11c63ed0 */
  push32(0x11c6147eu); f_11c63ed0();
  /* 11c6147e push 0x11c836f8 */
  push32((uint32_t)(0x11c836f8u));
  /* 11c61483 mov ecx, 0x11c73de8 */
  ECX = (0x11c73de8u);
  /* 11c61488 call 0x11c63ed0 */
  push32(0x11c6148du); f_11c63ed0();
  /* 11c6148d push 0x11c836f8 */
  push32((uint32_t)(0x11c836f8u));
  /* 11c61492 mov ecx, 0x11c83729 */
  ECX = (0x11c83729u);
  /* 11c61497 call 0x11c63ed0 */
  push32(0x11c6149cu); f_11c63ed0();
  /* 11c6149c push 0x11c836f8 */
  push32((uint32_t)(0x11c836f8u));
  /* 11c614a1 mov ecx, 0x11c740a0 */
  ECX = (0x11c740a0u);
  /* 11c614a6 call 0x11c63ed0 */
  push32(0x11c614abu); f_11c63ed0();
  /* 11c614ab mov ecx, 0x11c74108 */
  ECX = (0x11c74108u);
  /* 11c614b0 call 0x11c63f30 */
  push32(0x11c614b5u); f_11c63f30();
  /* 11c614b5 push 0x11c836f8 */
  push32((uint32_t)(0x11c836f8u));
  /* 11c614ba mov ecx, 0x11c74108 */
  ECX = (0x11c74108u);
  /* 11c614bf call 0x11c63f00 */
  push32(0x11c614c4u); f_11c63f00();
  /* 11c614c4 push 0x11c702fc */
  push32((uint32_t)(0x11c702fcu));
  /* 11c614c9 push 0x11c73dc0 */
  push32((uint32_t)(0x11c73dc0u));
  /* 11c614ce call esi */
  call_ind((uint32_t)(ESI), 0x11c614d0u);
  /* 11c614d0 push 0x11c702f0 */
  push32((uint32_t)(0x11c702f0u));
  /* 11c614d5 push 0x11c73de0 */
  push32((uint32_t)(0x11c73de0u));
  /* 11c614da call esi */
  call_ind((uint32_t)(ESI), 0x11c614dcu);
  /* 11c614dc push 0x11c702e8 */
  push32((uint32_t)(0x11c702e8u));
  /* 11c614e1 push 0x11c73d00 */
  push32((uint32_t)(0x11c73d00u));
  /* 11c614e6 call esi */
  call_ind((uint32_t)(ESI), 0x11c614e8u);
  /* 11c614e8 push 0x11c702e0 */
  push32((uint32_t)(0x11c702e0u));
  /* 11c614ed push 0x11c740e8 */
  push32((uint32_t)(0x11c740e8u));
  /* 11c614f2 call esi */
  call_ind((uint32_t)(ESI), 0x11c614f4u);
  /* 11c614f4 push 0x11c702d8 */
  push32((uint32_t)(0x11c702d8u));
  /* 11c614f9 push 0x11c740f0 */
  push32((uint32_t)(0x11c740f0u));
  /* 11c614fe call esi */
  call_ind((uint32_t)(ESI), 0x11c61500u);
  /* 11c61500 push 0x11c702d0 */
  push32((uint32_t)(0x11c702d0u));
  /* 11c61505 push 0x11c740c8 */
  push32((uint32_t)(0x11c740c8u));
  /* 11c6150a call esi */
  call_ind((uint32_t)(ESI), 0x11c6150cu);
  /* 11c6150c push 0x11c702c8 */
  push32((uint32_t)(0x11c702c8u));
  /* 11c61511 push 0x11c740d0 */
  push32((uint32_t)(0x11c740d0u));
  /* 11c61516 call esi */
  call_ind((uint32_t)(ESI), 0x11c61518u);
  /* 11c61518 push 0x11c702bc */
  push32((uint32_t)(0x11c702bcu));
  /* 11c6151d push 0x11c83558 */
  push32((uint32_t)(0x11c83558u));
  /* 11c61522 call esi */
  call_ind((uint32_t)(ESI), 0x11c61524u);
  /* 11c61524 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61527 push 0x11c702b0 */
  push32((uint32_t)(0x11c702b0u));
  /* 11c6152c push 0x11c83550 */
  push32((uint32_t)(0x11c83550u));
  /* 11c61531 call esi */
  call_ind((uint32_t)(ESI), 0x11c61533u);
  /* 11c61533 push 0x11c702a4 */
  push32((uint32_t)(0x11c702a4u));
  /* 11c61538 push 0x11c83548 */
  push32((uint32_t)(0x11c83548u));
  /* 11c6153d call esi */
  call_ind((uint32_t)(ESI), 0x11c6153fu);
  /* 11c6153f push 0x11c70298 */
  push32((uint32_t)(0x11c70298u));
  /* 11c61544 push 0x11c83540 */
  push32((uint32_t)(0x11c83540u));
  /* 11c61549 call esi */
  call_ind((uint32_t)(ESI), 0x11c6154bu);
  /* 11c6154b push 0x11c7028c */
  push32((uint32_t)(0x11c7028cu));
  /* 11c61550 push 0x11c73dd8 */
  push32((uint32_t)(0x11c73dd8u));
  /* 11c61555 call esi */
  call_ind((uint32_t)(ESI), 0x11c61557u);
  /* 11c61557 push 0x11c70280 */
  push32((uint32_t)(0x11c70280u));
  /* 11c6155c push 0x11c73dd0 */
  push32((uint32_t)(0x11c73dd0u));
  /* 11c61561 call esi */
  call_ind((uint32_t)(ESI), 0x11c61563u);
  /* 11c61563 push 0x11c7026c */
  push32((uint32_t)(0x11c7026cu));
  /* 11c61568 push 0x11c83ae8 */
  push32((uint32_t)(0x11c83ae8u));
  /* 11c6156d call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c61573u);
  /* 11c61573 push 0x11c70260 */
  push32((uint32_t)(0x11c70260u));
  /* 11c61578 push 0x11c877e8 */
  push32((uint32_t)(0x11c877e8u));
  /* 11c6157d call edi */
  call_ind((uint32_t)(EDI), 0x11c6157fu);
  /* 11c6157f push 0x11c70254 */
  push32((uint32_t)(0x11c70254u));
  /* 11c61584 push 0x11c83708 */
  push32((uint32_t)(0x11c83708u));
  /* 11c61589 call edi */
  call_ind((uint32_t)(EDI), 0x11c6158bu);
  /* 11c6158b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6158e push 0x11c70248 */
  push32((uint32_t)(0x11c70248u));
  /* 11c61593 push 0x11c83538 */
  push32((uint32_t)(0x11c83538u));
  /* 11c61598 call edi */
  call_ind((uint32_t)(EDI), 0x11c6159au);
  /* 11c6159a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c6159c push 0x11c83590 */
  push32((uint32_t)(0x11c83590u));
  /* 11c615a1 call ebp */
  call_ind((uint32_t)(EBP), 0x11c615a3u);
  /* 11c615a3 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c615a5 push 0x11c83608 */
  push32((uint32_t)(0x11c83608u));
  /* 11c615aa call ebp */
  call_ind((uint32_t)(EBP), 0x11c615acu);
  /* 11c615ac push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c615ae push 0x11c83680 */
  push32((uint32_t)(0x11c83680u));
  /* 11c615b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11c615b5u);
  /* 11c615b5 mov ecx, dword ptr [0x11c836f8] */
  ECX = (r32((uint32_t)(0x11c836f8)));
  /* 11c615bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c615be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c615c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c615c2 push 0x11c70238 */
  push32((uint32_t)(0x11c70238u));
  /* 11c615c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c615c8 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c615cd call 0x11c62860 */
  push32(0x11c615d2u); f_11c62860();
  /* 11c615d2 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c615d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c615d9 call ebx */
  call_ind((uint32_t)(EBX), 0x11c615dbu);
  /* 11c615db mov ecx, 4 */
  ECX = (0x4u);
  /* 11c615e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c615e3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c615e5 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11c615e8 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c615ed lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c615f0 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c615f3 push edx */
  push32((uint32_t)(EDX));
  /* 11c615f4 push 0x11c70220 */
  push32((uint32_t)(0x11c70220u));
  /* 11c615f9 call 0x11c62990 */
  push32(0x11c615feu); f_11c62990();
  /* 11c615fe push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c61603 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61605 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61607u);
  /* 11c61607 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c6160c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6160f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61611 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c61614 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61615 push 0x11c70208 */
  push32((uint32_t)(0x11c70208u));
  /* 11c6161a mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c6161f call 0x11c629c0 */
  push32(0x11c61624u); f_11c629c0();
  /* 11c61624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61626 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61628u);
  /* 11c61628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6162b add eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6162e mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c61633 push eax */
  push32((uint32_t)(EAX));
  /* 11c61634 call 0x11c62960 */
  push32(0x11c61639u); f_11c62960();
  /* 11c61639 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6163b mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c61640 call 0x11c62970 */
  push32(0x11c61645u); f_11c62970();
  /* 11c61645 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c6164a mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c6164f call 0x11c62980 */
  push32(0x11c61654u); f_11c62980();
  /* 11c61654 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c61656 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61658 push 0x11c701f8 */
  push32((uint32_t)(0x11c701f8u));
  /* 11c6165d push 5 */
  push32((uint32_t)(0x5u));
  /* 11c6165f mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c61664 call 0x11c62860 */
  push32(0x11c61669u); f_11c62860();
  /* 11c61669 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c6166e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61670 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61672u);
  /* 11c61672 mov ecx, 4 */
  ECX = (0x4u);
  /* 11c61677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6167a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6167c lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11c6167f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61682 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c61685 push edx */
  push32((uint32_t)(EDX));
  /* 11c61686 push 0x11c701dc */
  push32((uint32_t)(0x11c701dcu));
  /* 11c6168b mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c61690 call 0x11c62990 */
  push32(0x11c61695u); f_11c62990();
  /* 11c61695 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c6169a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6169c call ebx */
  call_ind((uint32_t)(EBX), 0x11c6169eu);
  /* 11c6169e mov ecx, 4 */
  ECX = (0x4u);
  /* 11c616a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c616a6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c616a8 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c616ab push ecx */
  push32((uint32_t)(ECX));
  /* 11c616ac push 0x11c701c4 */
  push32((uint32_t)(0x11c701c4u));
  /* 11c616b1 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c616b6 call 0x11c629c0 */
  push32(0x11c616bbu); f_11c629c0();
  /* 11c616bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c616bd call ebx */
  call_ind((uint32_t)(EBX), 0x11c616bfu);
  /* 11c616bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c616c2 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c616c5 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c616ca push eax */
  push32((uint32_t)(EAX));
  /* 11c616cb call 0x11c62960 */
  push32(0x11c616d0u); f_11c62960();
  /* 11c616d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c616d2 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c616d7 call 0x11c62970 */
  push32(0x11c616dcu); f_11c62970();
  /* 11c616dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c616e1 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c616e6 call 0x11c62980 */
  push32(0x11c616ebu); f_11c62980();
  /* 11c616eb mov edx, dword ptr [0x11c836f8] */
  EDX = (r32((uint32_t)(0x11c836f8)));
  /* 11c616f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c616f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c616f5 push 0x11c701b4 */
  push32((uint32_t)(0x11c701b4u));
  /* 11c616fa push edx */
  push32((uint32_t)(EDX));
  /* 11c616fb mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61700 call 0x11c62860 */
  push32(0x11c61705u); f_11c62860();
  /* 11c61705 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c6170a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6170c call ebx */
  call_ind((uint32_t)(EBX), 0x11c6170eu);
  /* 11c6170e mov ecx, 4 */
  ECX = (0x4u);
  /* 11c61713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61716 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61718 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11c6171b mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61720 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61723 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61726 push eax */
  push32((uint32_t)(EAX));
  /* 11c61727 push 0x11c7019c */
  push32((uint32_t)(0x11c7019cu));
  /* 11c6172c call 0x11c62990 */
  push32(0x11c61731u); f_11c62990();
  /* 11c61731 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 11c61736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61738 call ebx */
  call_ind((uint32_t)(EBX), 0x11c6173au);
  /* 11c6173a mov ecx, 4 */
  ECX = (0x4u);
  /* 11c6173f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61742 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c61744 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c61747 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61748 push 0x11c701c4 */
  push32((uint32_t)(0x11c701c4u));
  /* 11c6174d mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61752 call 0x11c629c0 */
  push32(0x11c61757u); f_11c629c0();
  /* 11c61757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61759 call ebx */
  call_ind((uint32_t)(EBX), 0x11c6175bu);
  /* 11c6175b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6175e add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61761 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61766 push eax */
  push32((uint32_t)(EAX));
  /* 11c61767 call 0x11c62960 */
  push32(0x11c6176cu); f_11c62960();
  /* 11c6176c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6176e mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61773 call 0x11c62970 */
  push32(0x11c61778u); f_11c62970();
  /* 11c61778 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c6177d mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c61782 call 0x11c62980 */
  push32(0x11c61787u); f_11c62980();
  /* 11c61787 call 0x11c62d40 */
  push32(0x11c6178cu); f_11c62d40();
  /* 11c6178c push 0x3a4 */
  push32((uint32_t)(0x3a4u));
  /* 11c61791 push 0x11c83740 */
  push32((uint32_t)(0x11c83740u));
  /* 11c61796 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61798u);
  /* 11c61798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6179b mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c617a0 push 0x11c70194 */
  push32((uint32_t)(0x11c70194u));
  /* 11c617a5 call 0x11c63020 */
  push32(0x11c617aau); f_11c63020();
  /* 11c617aa push 0x320 */
  push32((uint32_t)(0x320u));
  /* 11c617af push 0x320 */
  push32((uint32_t)(0x320u));
  /* 11c617b4 push 0x640 */
  push32((uint32_t)(0x640u));
  /* 11c617b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617bf mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c617c4 call 0x11c63060 */
  push32(0x11c617c9u); f_11c63060();
  /* 11c617c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617d1 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 11c617d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c617d8 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c617dd call 0x11c63090 */
  push32(0x11c617e2u); f_11c63090();
  /* 11c617e2 push 0x11c7018c */
  push32((uint32_t)(0x11c7018cu));
  /* 11c617e7 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c617ec call 0x11c63050 */
  push32(0x11c617f1u); f_11c63050();
  /* 11c617f1 push 0x11c70184 */
  push32((uint32_t)(0x11c70184u));
  /* 11c617f6 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c617fb call 0x11c63050 */
  push32(0x11c61800u); f_11c63050();
  /* 11c61800 push 0x11c7017c */
  push32((uint32_t)(0x11c7017cu));
  /* 11c61805 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c6180a call 0x11c63050 */
  push32(0x11c6180fu); f_11c63050();
  /* 11c6180f push 0x11c70170 */
  push32((uint32_t)(0x11c70170u));
  /* 11c61814 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61819 call 0x11c63050 */
  push32(0x11c6181eu); f_11c63050();
  /* 11c6181e push 0x11c70168 */
  push32((uint32_t)(0x11c70168u));
  /* 11c61823 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61828 call 0x11c63050 */
  push32(0x11c6182du); f_11c63050();
  /* 11c6182d push 0x11c70160 */
  push32((uint32_t)(0x11c70160u));
  /* 11c61832 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61837 call 0x11c63050 */
  push32(0x11c6183cu); f_11c63050();
  /* 11c6183c push 0x11c70158 */
  push32((uint32_t)(0x11c70158u));
  /* 11c61841 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61846 call 0x11c63050 */
  push32(0x11c6184bu); f_11c63050();
  /* 11c6184b push 0x11c70150 */
  push32((uint32_t)(0x11c70150u));
  /* 11c61850 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61855 call 0x11c63050 */
  push32(0x11c6185au); f_11c63050();
  /* 11c6185a push 0x11c70148 */
  push32((uint32_t)(0x11c70148u));
  /* 11c6185f mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61864 call 0x11c63050 */
  push32(0x11c61869u); f_11c63050();
  /* 11c61869 push 0x11c70140 */
  push32((uint32_t)(0x11c70140u));
  /* 11c6186e mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61873 call 0x11c63050 */
  push32(0x11c61878u); f_11c63050();
  /* 11c61878 push 0x11c70138 */
  push32((uint32_t)(0x11c70138u));
  /* 11c6187d mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61882 call 0x11c63050 */
  push32(0x11c61887u); f_11c63050();
  /* 11c61887 push 0x11c7012c */
  push32((uint32_t)(0x11c7012cu));
  /* 11c6188c mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c61891 call 0x11c63050 */
  push32(0x11c61896u); f_11c63050();
  /* 11c61896 push 0x11c70120 */
  push32((uint32_t)(0x11c70120u));
  /* 11c6189b mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c618a0 call 0x11c63050 */
  push32(0x11c618a5u); f_11c63050();
  /* 11c618a5 push 0x11c70114 */
  push32((uint32_t)(0x11c70114u));
  /* 11c618aa mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c618af call 0x11c63050 */
  push32(0x11c618b4u); f_11c63050();
  /* 11c618b4 push 0x11c70108 */
  push32((uint32_t)(0x11c70108u));
  /* 11c618b9 mov ecx, 0x11c83740 */
  ECX = (0x11c83740u);
  /* 11c618be call 0x11c63050 */
  push32(0x11c618c3u); f_11c63050();
  /* 11c618c3 mov ecx, 0x11c73e00 */
  ECX = (0x11c73e00u);
  /* 11c618c8 push 0x11c700fc */
  push32((uint32_t)(0x11c700fcu));
  /* 11c618cd mov dword ptr [0x11c83568], ecx */
  w32((uint32_t)(0x11c83568), (ECX));
  /* 11c618d3 call 0x11c62f00 */
  push32(0x11c618d8u); f_11c62f00();
  /* 11c618d8 mov ecx, dword ptr [0x11c83568] */
  ECX = (r32((uint32_t)(0x11c83568)));
  /* 11c618de push 0 */
  push32((uint32_t)(0x0u));
  /* 11c618e0 call 0x11c63a60 */
  push32(0x11c618e5u); f_11c63a60();
  /* 11c618e5 mov ecx, 0x11c74110 */
  ECX = (0x11c74110u);
  /* 11c618ea push 0x11c700f0 */
  push32((uint32_t)(0x11c700f0u));
  /* 11c618ef mov dword ptr [0x11c740d8], ecx */
  w32((uint32_t)(0x11c740d8), (ECX));
  /* 11c618f5 call 0x11c62f00 */
  push32(0x11c618fau); f_11c62f00();
  /* 11c618fa mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61900 push 0x11c700dc */
  push32((uint32_t)(0x11c700dcu));
  /* 11c61905 call 0x11c63140 */
  push32(0x11c6190au); f_11c63140();
  /* 11c6190a mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61910 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c61912 call 0x11c632f0 */
  push32(0x11c61917u); f_11c632f0();
  /* 11c61917 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6191d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6191f call 0x11c632c0 */
  push32(0x11c61924u); f_11c632c0();
  /* 11c61924 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61926 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c61928 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6192e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c61933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61935 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c61937 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61939 call 0x11c638e0 */
  push32(0x11c6193eu); f_11c638e0();
  /* 11c6193e mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61944 push 0x11c83740 */
  push32((uint32_t)(0x11c83740u));
  /* 11c61949 call 0x11c632d0 */
  push32(0x11c6194eu); f_11c632d0();
  /* 11c6194e mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61956 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11c6195b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11c61960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61962 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11c61967 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61969 call 0x11c62ed0 */
  push32(0x11c6196eu); f_11c62ed0();
  /* 11c6196e mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61974 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61976 call 0x11c635a0 */
  push32(0x11c6197bu); f_11c635a0();
  /* 11c6197b mov edx, dword ptr [0x11c740d8] */
  EDX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61981 mov dword ptr [edx + 0x185a], 1 */
  w32((uint32_t)(EDX + 0x185a), (0x1u));
  /* 11c6198b call 0x11c63ff9 */
  push32(0x11c61990u); f_11c63ff9();
  /* 11c61990 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61996 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c61999 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6199c push 0x11c700cc */
  push32((uint32_t)(0x11c700ccu));
  /* 11c619a1 push 0x11c877f0 */
  push32((uint32_t)(0x11c877f0u));
  /* 11c619a6 mov dword ptr [ecx + 0x185e], eax */
  w32((uint32_t)(ECX + 0x185e), (EAX));
  /* 11c619ac call edi */
  call_ind((uint32_t)(EDI), 0x11c619aeu);
  /* 11c619ae push 0x11c700c0 */
  push32((uint32_t)(0x11c700c0u));
  /* 11c619b3 push 0x11c83570 */
  push32((uint32_t)(0x11c83570u));
  /* 11c619b8 call edi */
  call_ind((uint32_t)(EDI), 0x11c619bau);
  /* 11c619ba push 0x11c700b8 */
  push32((uint32_t)(0x11c700b8u));
  /* 11c619bf push 0x11c877f8 */
  push32((uint32_t)(0x11c877f8u));
  /* 11c619c4 call edi */
  call_ind((uint32_t)(EDI), 0x11c619c6u);
  /* 11c619c6 push 0x11c700b0 */
  push32((uint32_t)(0x11c700b0u));
  /* 11c619cb push 0x11c87800 */
  push32((uint32_t)(0x11c87800u));
  /* 11c619d0 call edi */
  call_ind((uint32_t)(EDI), 0x11c619d2u);
  /* 11c619d2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c619d4 push 0x11c8356c */
  push32((uint32_t)(0x11c8356cu));
  /* 11c619d9 call ebp */
  call_ind((uint32_t)(EBP), 0x11c619dbu);
  /* 11c619db push 4 */
  push32((uint32_t)(0x4u));
  /* 11c619dd push 0x11c83af0 */
  push32((uint32_t)(0x11c83af0u));
  /* 11c619e2 call ebp */
  call_ind((uint32_t)(EBP), 0x11c619e4u);
  /* 11c619e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c619e6 call ebx */
  call_ind((uint32_t)(EBX), 0x11c619e8u);
  /* 11c619e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c619e9 mov esi, dword ptr [0x11c6e1e0] */
  ESI = (r32((uint32_t)(0x11c6e1e0)));
  /* 11c619ef mov edx, eax */
  EDX = (EAX);
  /* 11c619f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c619f3 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11c619f6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c619f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c619fa mov dword ptr [0x11c83af0], 0x1f40 */
  w32((uint32_t)(0x11c83af0), (0x1f40u));
  /* 11c61a04 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11c61a07 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c61a0a mov dword ptr [0x11c8356c], eax */
  w32((uint32_t)(0x11c8356c), (EAX));
  /* 11c61a0f call esi */
  call_ind((uint32_t)(ESI), 0x11c61a11u);
  /* 11c61a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c61a15 call esi */
  call_ind((uint32_t)(ESI), 0x11c61a17u);
  /* 11c61a17 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a1c push 3 */
  push32((uint32_t)(0x3u));
  /* 11c61a1e call esi */
  call_ind((uint32_t)(ESI), 0x11c61a20u);
  /* 11c61a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a22 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c61a24 call esi */
  call_ind((uint32_t)(ESI), 0x11c61a26u);
  /* 11c61a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a28 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61a2a call esi */
  call_ind((uint32_t)(ESI), 0x11c61a2cu);
  /* 11c61a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a2e push 6 */
  push32((uint32_t)(0x6u));
  /* 11c61a30 call esi */
  call_ind((uint32_t)(ESI), 0x11c61a32u);
  /* 11c61a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a34 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c61a36 call esi */
  call_ind((uint32_t)(ESI), 0x11c61a38u);
  /* 11c61a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a3a push 8 */
  push32((uint32_t)(0x8u));
  /* 11c61a3c call esi */
  call_ind((uint32_t)(ESI), 0x11c61a3eu);
  /* 11c61a3e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61a41 pop edi */
  EDI = (pop32());
  /* 11c61a42 pop esi */
  ESI = (pop32());
  /* 11c61a43 pop ebp */
  EBP = (pop32());
  /* 11c61a44 pop ebx */
  EBX = (pop32());
  /* 11c61a45 ret  */
  ESPCHK(0x11c61210u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x11c61a50 (64 bytes, 18 insns) */
void f_11c61a50(void) {
  FTRACE(0x11c61a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c61a50 push esi */
  push32((uint32_t)(ESI));
  /* 11c61a51 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c61a55 cmp dword ptr [esi*8 + 0x11c73d7c], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI*8 + 0x11c73d7c))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c61a60 je 0x11c61a73 */
  if (C.zf) goto L_11c61a73;
  /* 11c61a62 lea eax, [esi*8 + 0x11c73d78] */
  EAX = ((uint32_t)(ESI*8 + 0x11c73d78));
  /* 11c61a69 push eax */
  push32((uint32_t)(EAX));
  /* 11c61a6a call dword ptr [0x11c6e1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d0))), 0x11c61a70u);
  /* 11c61a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61a73:;
  /* 11c61a73 lea ecx, [esi*8 + 0x11c73d78] */
  ECX = ((uint32_t)(ESI*8 + 0x11c73d78));
  /* 11c61a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61a7c push ecx */
  push32((uint32_t)(ECX));
  /* 11c61a7d push esi */
  push32((uint32_t)(ESI));
  /* 11c61a7e call dword ptr [0x11c6e1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a4))), 0x11c61a84u);
  /* 11c61a84 push esi */
  push32((uint32_t)(ESI));
  /* 11c61a85 call dword ptr [0x11c6e1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b8))), 0x11c61a8bu);
  /* 11c61a8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61a8e pop esi */
  ESI = (pop32());
  /* 11c61a8f ret  */
  ESPCHK(0x11c61a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a90 @ 0x11c61a90 (33 bytes, 11 insns) */
void f_11c61a90(void) {
  FTRACE(0x11c61a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c61a90 push esi */
  push32((uint32_t)(ESI));
  /* 11c61a91 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c61a95 push esi */
  push32((uint32_t)(ESI));
  /* 11c61a96 call dword ptr [0x11c6e1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b8))), 0x11c61a9cu);
  /* 11c61a9c lea eax, [esi*8 + 0x11c73d78] */
  EAX = ((uint32_t)(ESI*8 + 0x11c73d78));
  /* 11c61aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61aa5 push eax */
  push32((uint32_t)(EAX));
  /* 11c61aa6 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c61aacu);
  /* 11c61aac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61aaf pop esi */
  ESI = (pop32());
  /* 11c61ab0 ret  */
  ESPCHK(0x11c61a90u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11c61ac0 (2317 bytes, 695 insns) */
void f_11c61ac0(void) {
  FTRACE(0x11c61ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c61ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61ac1 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c61ac7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c61ac8 push esi */
  push32((uint32_t)(ESI));
  /* 11c61ac9 mov esi, dword ptr [0x11c6e144] */
  ESI = (r32((uint32_t)(0x11c6e144)));
  /* 11c61acf push edi */
  push32((uint32_t)(EDI));
  /* 11c61ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11c61ad1 call esi */
  call_ind((uint32_t)(ESI), 0x11c61ad3u);
  /* 11c61ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61ad6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61ad8 je 0x11c61af2 */
  if (C.zf) goto L_11c61af2;
  /* 11c61ada mov ebp, dword ptr [0x11c6e148] */
  EBP = (r32((uint32_t)(0x11c6e148)));
  /* 11c61ae0 push 0x11c704e8 */
  push32((uint32_t)(0x11c704e8u));
  /* 11c61ae5 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61ae7u);
  /* 11c61ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61aea call dword ptr [0x11c6e14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e14c))), 0x11c61af0u);
  /* 11c61af0 jmp 0x11c61af8 */
  goto L_11c61af8;
L_11c61af2:;
  /* 11c61af2 mov ebp, dword ptr [0x11c6e148] */
  EBP = (r32((uint32_t)(0x11c6e148)));
L_11c61af8:;
  /* 11c61af8 mov cl, byte ptr [0x11c83729] */
  CL = (r8((uint32_t)(0x11c83729)));
  /* 11c61afe push ecx */
  push32((uint32_t)(ECX));
  /* 11c61aff call esi */
  call_ind((uint32_t)(ESI), 0x11c61b01u);
  /* 11c61b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b04 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61b06 je 0x11c61b37 */
  if (C.zf) goto L_11c61b37;
  /* 11c61b08 mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61b0e push edx */
  push32((uint32_t)(EDX));
  /* 11c61b0f call esi */
  call_ind((uint32_t)(ESI), 0x11c61b11u);
  /* 11c61b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61b16 je 0x11c61b37 */
  if (C.zf) goto L_11c61b37;
  /* 11c61b18 mov al, byte ptr [0x11c740a0] */
  AL = (r8((uint32_t)(0x11c740a0)));
  /* 11c61b1d push eax */
  push32((uint32_t)(EAX));
  /* 11c61b1e call esi */
  call_ind((uint32_t)(ESI), 0x11c61b20u);
  /* 11c61b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b23 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61b25 je 0x11c61b37 */
  if (C.zf) goto L_11c61b37;
  /* 11c61b27 push 0x11c704d8 */
  push32((uint32_t)(0x11c704d8u));
  /* 11c61b2c call ebp */
  call_ind((uint32_t)(EBP), 0x11c61b2eu);
  /* 11c61b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b31 call dword ptr [0x11c6e150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e150))), 0x11c61b37u);
L_11c61b37:;
  /* 11c61b37 mov esi, dword ptr [0x11c6e154] */
  ESI = (r32((uint32_t)(0x11c6e154)));
  /* 11c61b3d push 3 */
  push32((uint32_t)(0x3u));
  /* 11c61b3f call esi */
  call_ind((uint32_t)(ESI), 0x11c61b41u);
  /* 11c61b41 mov edi, dword ptr [0x11c6e1f0] */
  EDI = (r32((uint32_t)(0x11c6e1f0)));
  /* 11c61b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61b4c je 0x11c61c2b */
  if (C.zf) goto L_11c61c2b;
  /* 11c61b52 mov ecx, dword ptr [0x11c73d08] */
  ECX = (r32((uint32_t)(0x11c73d08)));
  /* 11c61b58 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61b59 call 0x11c61a50 */
  push32(0x11c61b5eu); f_11c61a50();
  /* 11c61b5e mov dl, byte ptr [0x11c73d08] */
  DL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61b66 push edx */
  push32((uint32_t)(EDX));
  /* 11c61b67 push 0x11c73dc8 */
  push32((uint32_t)(0x11c73dc8u));
  /* 11c61b6c call dword ptr [0x11c6e158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e158))), 0x11c61b72u);
  /* 11c61b72 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61b79 push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c61b7e push eax */
  push32((uint32_t)(EAX));
  /* 11c61b7f call dword ptr [0x11c6e1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a4))), 0x11c61b85u);
  /* 11c61b85 mov ecx, dword ptr [0x11c73d08] */
  ECX = (r32((uint32_t)(0x11c73d08)));
  /* 11c61b8b push ecx */
  push32((uint32_t)(ECX));
  /* 11c61b8c call 0x11c61a90 */
  push32(0x11c61b91u); f_11c61a90();
  /* 11c61b91 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61b93 call esi */
  call_ind((uint32_t)(ESI), 0x11c61b95u);
  /* 11c61b95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61b98 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61b9a je 0x11c61c2b */
  if (C.zf) goto L_11c61c2b;
  /* 11c61ba0 push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c61ba5 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c61babu);
  /* 11c61bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c61bb0 je 0x11c61c2b */
  if (C.zf) goto L_11c61c2b;
  /* 11c61bb2 mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61bb8 mov ebx, dword ptr [0x11c6e1b8] */
  EBX = (r32((uint32_t)(0x11c6e1b8)));
  /* 11c61bbe push edx */
  push32((uint32_t)(EDX));
  /* 11c61bbf call ebx */
  call_ind((uint32_t)(EBX), 0x11c61bc1u);
  /* 11c61bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61bc3 push 0x11c74098 */
  push32((uint32_t)(0x11c74098u));
  /* 11c61bc8 call edi */
  call_ind((uint32_t)(EDI), 0x11c61bcau);
  /* 11c61bca mov al, byte ptr [0x11c73de8] */
  AL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61bcf push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c61bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11c61bd5 call dword ptr [0x11c6e160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e160))), 0x11c61bdbu);
  /* 11c61bdb push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11c61be0 push 0x11c83710 */
  push32((uint32_t)(0x11c83710u));
  /* 11c61be5 push 0x11c83578 */
  push32((uint32_t)(0x11c83578u));
  /* 11c61bea call dword ptr [0x11c6e1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e8))), 0x11c61bf0u);
  /* 11c61bf0 mov cl, byte ptr [0x11c73de8] */
  CL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61bf7 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61bf9u);
  /* 11c61bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61bfb push 0x11c877f8 */
  push32((uint32_t)(0x11c877f8u));
  /* 11c61c00 call edi */
  call_ind((uint32_t)(EDI), 0x11c61c02u);
  /* 11c61c02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61c04 push 0x11c87800 */
  push32((uint32_t)(0x11c87800u));
  /* 11c61c09 call edi */
  call_ind((uint32_t)(EDI), 0x11c61c0bu);
  /* 11c61c0b add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61c10 call 0x11c63ff9 */
  push32(0x11c61c15u); f_11c63ff9();
  /* 11c61c15 mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61c1b push eax */
  push32((uint32_t)(EAX));
  /* 11c61c1c push 0x11c83578 */
  push32((uint32_t)(0x11c83578u));
  /* 11c61c21 push edx */
  push32((uint32_t)(EDX));
  /* 11c61c22 call dword ptr [0x11c6e1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e4))), 0x11c61c28u);
  /* 11c61c28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61c2b:;
  /* 11c61c2b push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61c2d call esi */
  call_ind((uint32_t)(ESI), 0x11c61c2fu);
  /* 11c61c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61c32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61c34 jne 0x11c61c9e */
  if (!C.zf) goto L_11c61c9e;
  /* 11c61c36 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61c3b push eax */
  push32((uint32_t)(EAX));
  /* 11c61c3c push 0x11c73dc8 */
  push32((uint32_t)(0x11c73dc8u));
  /* 11c61c41 call dword ptr [0x11c6e164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e164))), 0x11c61c47u);
  /* 11c61c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c61c4c je 0x11c61c9e */
  if (C.zf) goto L_11c61c9e;
  /* 11c61c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61c50 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61c52 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c61c58u);
  /* 11c61c58 push 0x11c704c8 */
  push32((uint32_t)(0x11c704c8u));
  /* 11c61c5d call ebp */
  call_ind((uint32_t)(EBP), 0x11c61c5fu);
  /* 11c61c5f push 0x11c704b8 */
  push32((uint32_t)(0x11c704b8u));
  /* 11c61c64 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61c66u);
  /* 11c61c66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c61c6a push 0x11c740f8 */
  push32((uint32_t)(0x11c740f8u));
  /* 11c61c6f call dword ptr [0x11c6e168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e168))), 0x11c61c75u);
  /* 11c61c75 mov cl, byte ptr [0x11c73de8] */
  CL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61c7b mov ebx, dword ptr [0x11c6e16c] */
  EBX = (r32((uint32_t)(0x11c6e16c)));
  /* 11c61c81 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c61c86 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c61c88 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61c89 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61c8bu);
  /* 11c61c8b mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61c91 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c61c96 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61c98 push edx */
  push32((uint32_t)(EDX));
  /* 11c61c99 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61c9bu);
  /* 11c61c9b add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61c9e:;
  /* 11c61c9e push 6 */
  push32((uint32_t)(0x6u));
  /* 11c61ca0 call esi */
  call_ind((uint32_t)(ESI), 0x11c61ca2u);
  /* 11c61ca2 mov ebx, dword ptr [0x11c6e170] */
  EBX = (r32((uint32_t)(0x11c6e170)));
  /* 11c61ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61cab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61cad jne 0x11c61d0c */
  if (!C.zf) goto L_11c61d0c;
  /* 11c61caf push 5 */
  push32((uint32_t)(0x5u));
  /* 11c61cb1 call esi */
  call_ind((uint32_t)(ESI), 0x11c61cb3u);
  /* 11c61cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61cb6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61cb8 je 0x11c61d0c */
  if (C.zf) goto L_11c61d0c;
  /* 11c61cba mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61cbf push eax */
  push32((uint32_t)(EAX));
  /* 11c61cc0 push 0x11c73df0 */
  push32((uint32_t)(0x11c73df0u));
  /* 11c61cc5 call dword ptr [0x11c6e174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e174))), 0x11c61ccbu);
  /* 11c61ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c61cd0 je 0x11c61d0c */
  if (C.zf) goto L_11c61d0c;
  /* 11c61cd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61cd4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c61cd6 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c61cdcu);
  /* 11c61cdc push 0x11c704a8 */
  push32((uint32_t)(0x11c704a8u));
  /* 11c61ce1 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61ce3u);
  /* 11c61ce3 push 0x11c70498 */
  push32((uint32_t)(0x11c70498u));
  /* 11c61ce8 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61ceau);
  /* 11c61cea push 0x11c70488 */
  push32((uint32_t)(0x11c70488u));
  /* 11c61cef call ebp */
  call_ind((uint32_t)(EBP), 0x11c61cf1u);
  /* 11c61cf1 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c61cf3 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61cf5u);
  /* 11c61cf5 mov esi, dword ptr [0x11c6e178] */
  ESI = (r32((uint32_t)(0x11c6e178)));
  /* 11c61cfb push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11c61cfd call esi */
  call_ind((uint32_t)(ESI), 0x11c61cffu);
  /* 11c61cff push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11c61d01 call esi */
  call_ind((uint32_t)(ESI), 0x11c61d03u);
  /* 11c61d03 mov esi, dword ptr [0x11c6e154] */
  ESI = (r32((uint32_t)(0x11c6e154)));
  /* 11c61d09 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61d0c:;
  /* 11c61d0c push 6 */
  push32((uint32_t)(0x6u));
  /* 11c61d0e call esi */
  call_ind((uint32_t)(ESI), 0x11c61d10u);
  /* 11c61d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61d13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61d15 je 0x11c61e30 */
  if (C.zf) goto L_11c61e30;
  /* 11c61d1b mov edx, dword ptr [0x11c740d8] */
  EDX = (r32((uint32_t)(0x11c740d8)));
  /* 11c61d21 mov cl, byte ptr [0x11c73d08] */
  CL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61d27 add edx, 0x3e9 */
  { uint32_t _a=(EDX),_b=(0x3e9u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61d2d push ecx */
  push32((uint32_t)(ECX));
  /* 11c61d2e push edx */
  push32((uint32_t)(EDX));
  /* 11c61d2f push 0x11c740f8 */
  push32((uint32_t)(0x11c740f8u));
  /* 11c61d34 call dword ptr [0x11c6e17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e17c))), 0x11c61d3au);
  /* 11c61d3a push 8 */
  push32((uint32_t)(0x8u));
  /* 11c61d3c mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 11c61d40 call esi */
  call_ind((uint32_t)(ESI), 0x11c61d42u);
  /* 11c61d42 mov esi, dword ptr [0x11c6e1b0] */
  ESI = (r32((uint32_t)(0x11c6e1b0)));
  /* 11c61d48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61d4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61d4d jne 0x11c61d7d */
  if (!C.zf) goto L_11c61d7d;
  /* 11c61d4f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c61d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c61d55 jle 0x11c61d7d */
  if ((C.zf||C.sf!=C.of)) goto L_11c61d7d;
  /* 11c61d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61d59 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c61d5b call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c61d61u);
  /* 11c61d61 push 0x11c70478 */
  push32((uint32_t)(0x11c70478u));
  /* 11c61d66 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61d68u);
  /* 11c61d68 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c61d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61d6f call esi */
  call_ind((uint32_t)(ESI), 0x11c61d71u);
  /* 11c61d71 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11c61d76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c61d78 call esi */
  call_ind((uint32_t)(ESI), 0x11c61d7au);
  /* 11c61d7a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61d7d:;
  /* 11c61d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c61d7f call dword ptr [0x11c6e180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e180))), 0x11c61d85u);
  /* 11c61d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61d88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61d8a je 0x11c61d9f */
  if (C.zf) goto L_11c61d9f;
  /* 11c61d8c push 0x11c70468 */
  push32((uint32_t)(0x11c70468u));
  /* 11c61d91 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61d93u);
  /* 11c61d93 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c61d98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c61d9a call esi */
  call_ind((uint32_t)(ESI), 0x11c61d9cu);
  /* 11c61d9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61d9f:;
  /* 11c61d9f push 8 */
  push32((uint32_t)(0x8u));
  /* 11c61da1 call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c61da7u);
  /* 11c61da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61daa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61dac je 0x11c61dd4 */
  if (C.zf) goto L_11c61dd4;
  /* 11c61dae mov eax, dword ptr [0x11c8780c] */
  EAX = (r32((uint32_t)(0x11c8780c)));
  /* 11c61db3 imul eax, dword ptr [esp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x10)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c61db8 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c61dbd jle 0x11c61dd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11c61dd4;
  /* 11c61dbf push eax */
  push32((uint32_t)(EAX));
  /* 11c61dc0 push 0x11c70458 */
  push32((uint32_t)(0x11c70458u));
  /* 11c61dc5 call dword ptr [0x11c6e184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e184))), 0x11c61dcbu);
  /* 11c61dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61dce call dword ptr [0x11c6e150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e150))), 0x11c61dd4u);
L_11c61dd4:;
  /* 11c61dd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61dd6 call dword ptr [0x11c6e180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e180))), 0x11c61ddcu);
  /* 11c61ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61ddf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61de1 je 0x11c61e15 */
  if (C.zf) goto L_11c61e15;
  /* 11c61de3 push 0x11c70448 */
  push32((uint32_t)(0x11c70448u));
  /* 11c61de8 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61deau);
  /* 11c61dea push 0x11c70438 */
  push32((uint32_t)(0x11c70438u));
  /* 11c61def call ebp */
  call_ind((uint32_t)(EBP), 0x11c61df1u);
  /* 11c61df1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c61df6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61df8 call esi */
  call_ind((uint32_t)(ESI), 0x11c61dfau);
  /* 11c61dfa push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11c61dff push 3 */
  push32((uint32_t)(0x3u));
  /* 11c61e01 call esi */
  call_ind((uint32_t)(ESI), 0x11c61e03u);
  /* 11c61e03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e06 mov ecx, 0x11c74108 */
  ECX = (0x11c74108u);
  /* 11c61e0b push 0x11c73d08 */
  push32((uint32_t)(0x11c73d08u));
  /* 11c61e10 call 0x11c63f00 */
  push32(0x11c61e15u); f_11c63f00();
L_11c61e15:;
  /* 11c61e15 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c61e17 call dword ptr [0x11c6e180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e180))), 0x11c61e1du);
  /* 11c61e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61e22 je 0x11c61e2a */
  if (C.zf) goto L_11c61e2a;
  /* 11c61e24 call dword ptr [0x11c6e14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e14c))), 0x11c61e2au);
L_11c61e2a:;
  /* 11c61e2a mov esi, dword ptr [0x11c6e154] */
  ESI = (r32((uint32_t)(0x11c6e154)));
L_11c61e30:;
  /* 11c61e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e32 call esi */
  call_ind((uint32_t)(ESI), 0x11c61e34u);
  /* 11c61e34 mov esi, dword ptr [0x11c6e1d4] */
  ESI = (r32((uint32_t)(0x11c6e1d4)));
  /* 11c61e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61e3f je 0x11c61feb */
  if (C.zf) goto L_11c61feb;
  /* 11c61e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e49 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c61e4fu);
  /* 11c61e4f push 0x11c70430 */
  push32((uint32_t)(0x11c70430u));
  /* 11c61e54 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61e56u);
  /* 11c61e56 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11c61e58 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e5au);
  /* 11c61e5a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c61e5c call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e5eu);
  /* 11c61e5e push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11c61e60 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e62u);
  /* 11c61e62 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11c61e64 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e66u);
  /* 11c61e66 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11c61e68 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e6au);
  /* 11c61e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e6c call esi */
  call_ind((uint32_t)(ESI), 0x11c61e6eu);
  /* 11c61e6e add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e71 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c61e74 jne 0x11c61e81 */
  if (!C.zf) goto L_11c61e81;
  /* 11c61e76 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11c61e78 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e7au);
  /* 11c61e7a push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11c61e7c call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e7eu);
  /* 11c61e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61e81:;
  /* 11c61e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e83 call esi */
  call_ind((uint32_t)(ESI), 0x11c61e85u);
  /* 11c61e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e88 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c61e8b jle 0x11c61e94 */
  if ((C.zf||C.sf!=C.of)) goto L_11c61e94;
  /* 11c61e8d push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11c61e8f call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e91u);
  /* 11c61e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61e94:;
  /* 11c61e94 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11c61e96 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61e98u);
  /* 11c61e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61e9a call esi */
  call_ind((uint32_t)(ESI), 0x11c61e9cu);
  /* 11c61e9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61e9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c61ea1 jle 0x11c61eaa */
  if ((C.zf||C.sf!=C.of)) goto L_11c61eaa;
  /* 11c61ea3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11c61ea5 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61ea7u);
  /* 11c61ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61eaa:;
  /* 11c61eaa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11c61eac call ebx */
  call_ind((uint32_t)(EBX), 0x11c61eaeu);
  /* 11c61eae push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11c61eb0 call ebx */
  call_ind((uint32_t)(EBX), 0x11c61eb2u);
  /* 11c61eb2 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61eb7 mov ebp, dword ptr [0x11c6e1ac] */
  EBP = (r32((uint32_t)(0x11c6e1ac)));
  /* 11c61ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61ebf push 0x11c73dc8 */
  push32((uint32_t)(0x11c73dc8u));
  /* 11c61ec4 push eax */
  push32((uint32_t)(EAX));
  /* 11c61ec5 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61ec7u);
  /* 11c61ec7 mov cl, byte ptr [0x11c73d08] */
  CL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61ecf push 0x11c83580 */
  push32((uint32_t)(0x11c83580u));
  /* 11c61ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61ed5 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61ed7u);
  /* 11c61ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61ed9 push 0x11c74098 */
  push32((uint32_t)(0x11c74098u));
  /* 11c61ede call edi */
  call_ind((uint32_t)(EDI), 0x11c61ee0u);
  /* 11c61ee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61ee2 push 0x11c73cf8 */
  push32((uint32_t)(0x11c73cf8u));
  /* 11c61ee7 call edi */
  call_ind((uint32_t)(EDI), 0x11c61ee9u);
  /* 11c61ee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61eeb push 0x11c877f8 */
  push32((uint32_t)(0x11c877f8u));
  /* 11c61ef0 call edi */
  call_ind((uint32_t)(EDI), 0x11c61ef2u);
  /* 11c61ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61ef4 push 0x11c87800 */
  push32((uint32_t)(0x11c87800u));
  /* 11c61ef9 call edi */
  call_ind((uint32_t)(EDI), 0x11c61efbu);
  /* 11c61efb mov dl, byte ptr [0x11c73de8] */
  DL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61f01 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61f04 push edx */
  push32((uint32_t)(EDX));
  /* 11c61f05 call dword ptr [0x11c6e188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e188))), 0x11c61f0bu);
  /* 11c61f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61f0e mov ecx, 0x11c73d08 */
  ECX = (0x11c73d08u);
  /* 11c61f13 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11c61f18 call 0x11c63e80 */
  push32(0x11c61f1du); f_11c63e80();
  /* 11c61f1d mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c61f22 mov ebp, dword ptr [0x11c6e18c] */
  EBP = (r32((uint32_t)(0x11c6e18c)));
  /* 11c61f28 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11c61f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61f2f push eax */
  push32((uint32_t)(EAX));
  /* 11c61f30 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61f32u);
  /* 11c61f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61f35 mov ecx, 0x11c73de8 */
  ECX = (0x11c73de8u);
  /* 11c61f3a push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 11c61f3f call 0x11c63e80 */
  push32(0x11c61f44u); f_11c63e80();
  /* 11c61f44 mov cl, byte ptr [0x11c73de8] */
  CL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61f4a push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11c61f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c61f51 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61f52 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61f54u);
  /* 11c61f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61f56 call esi */
  call_ind((uint32_t)(ESI), 0x11c61f58u);
  /* 11c61f58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61f5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c61f5c mov ecx, 0x11c83729 */
  ECX = (0x11c83729u);
  /* 11c61f61 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f64 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f67 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f6a shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c61f6d push edx */
  push32((uint32_t)(EDX));
  /* 11c61f6e call 0x11c63e80 */
  push32(0x11c61f73u); f_11c63e80();
  /* 11c61f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61f75 call esi */
  call_ind((uint32_t)(ESI), 0x11c61f77u);
  /* 11c61f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61f7a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c61f7b mov ecx, 0x11c740a0 */
  ECX = (0x11c740a0u);
  /* 11c61f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f86 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c61f89 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c61f8c push eax */
  push32((uint32_t)(EAX));
  /* 11c61f8d call 0x11c63e80 */
  push32(0x11c61f92u); f_11c63e80();
  /* 11c61f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61f94 call esi */
  call_ind((uint32_t)(ESI), 0x11c61f96u);
  /* 11c61f96 mov cl, byte ptr [0x11c73de8] */
  CL = (r8((uint32_t)(0x11c73de8)));
  /* 11c61f9c push eax */
  push32((uint32_t)(EAX));
  /* 11c61f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fa3 push 0x11c70428 */
  push32((uint32_t)(0x11c70428u));
  /* 11c61fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c61fa9 mov ebp, dword ptr [0x11c6e190] */
  EBP = (r32((uint32_t)(0x11c6e190)));
  /* 11c61faf call ebp */
  call_ind((uint32_t)(EBP), 0x11c61fb1u);
  /* 11c61fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fb3 call esi */
  call_ind((uint32_t)(ESI), 0x11c61fb5u);
  /* 11c61fb5 mov dl, byte ptr [0x11c83729] */
  DL = (r8((uint32_t)(0x11c83729)));
  /* 11c61fbb push eax */
  push32((uint32_t)(EAX));
  /* 11c61fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fc2 push 0x11c70428 */
  push32((uint32_t)(0x11c70428u));
  /* 11c61fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11c61fc8 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61fcau);
  /* 11c61fca push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fcc call esi */
  call_ind((uint32_t)(ESI), 0x11c61fceu);
  /* 11c61fce push eax */
  push32((uint32_t)(EAX));
  /* 11c61fcf mov al, byte ptr [0x11c740a0] */
  AL = (r8((uint32_t)(0x11c740a0)));
  /* 11c61fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61fda push 0x11c7041c */
  push32((uint32_t)(0x11c7041cu));
  /* 11c61fdf push eax */
  push32((uint32_t)(EAX));
  /* 11c61fe0 call ebp */
  call_ind((uint32_t)(EBP), 0x11c61fe2u);
  /* 11c61fe2 mov ebp, dword ptr [0x11c6e148] */
  EBP = (r32((uint32_t)(0x11c6e148)));
  /* 11c61fe8 add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c61feb:;
  /* 11c61feb push 4 */
  push32((uint32_t)(0x4u));
  /* 11c61fed call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c61ff3u);
  /* 11c61ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c61ff6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c61ff8 jne 0x11c6203f */
  if (!C.zf) goto L_11c6203f;
  /* 11c61ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 11c61ffc push 0x11c83ae8 */
  push32((uint32_t)(0x11c83ae8u));
  /* 11c62001 call dword ptr [0x11c6e194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e194))), 0x11c62007u);
  /* 11c62007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6200a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6200c je 0x11c6203f */
  if (C.zf) goto L_11c6203f;
  /* 11c6200e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62010 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c62012 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c62018u);
  /* 11c62018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6201b mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c62020 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62022 call 0x11c62980 */
  push32(0x11c62027u); f_11c62980();
  /* 11c62027 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62029 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c6202e call 0x11c62980 */
  push32(0x11c62033u); f_11c62980();
  /* 11c62033 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62035 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c6203a call 0x11c62980 */
  push32(0x11c6203fu); f_11c62980();
L_11c6203f:;
  /* 11c6203f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62041 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c62046 call 0x11c62950 */
  push32(0x11c6204bu); f_11c62950();
  /* 11c6204b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6204d mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c62052 call 0x11c62950 */
  push32(0x11c62057u); f_11c62950();
  /* 11c62057 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62059 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c6205e call 0x11c62950 */
  push32(0x11c62063u); f_11c62950();
  /* 11c62063 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c62068 call 0x11c62b20 */
  push32(0x11c6206du); f_11c62b20();
  /* 11c6206d cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62070 jge 0x11c6207e */
  if ((C.sf==C.of)) goto L_11c6207e;
  /* 11c62072 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c62074 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c62079 call 0x11c62950 */
  push32(0x11c6207eu); f_11c62950();
L_11c6207e:;
  /* 11c6207e mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c62083 call 0x11c62b20 */
  push32(0x11c62088u); f_11c62b20();
  /* 11c62088 cmp eax, 0x4b */
  { uint32_t _a=(EAX),_b=(0x4bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6208b jge 0x11c62099 */
  if ((C.sf==C.of)) goto L_11c62099;
  /* 11c6208d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6208f mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c62094 call 0x11c62950 */
  push32(0x11c62099u); f_11c62950();
L_11c62099:;
  /* 11c62099 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c6209e call 0x11c62b20 */
  push32(0x11c620a3u); f_11c62b20();
  /* 11c620a3 cmp eax, 0x55 */
  { uint32_t _a=(EAX),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c620a6 jge 0x11c620b4 */
  if ((C.sf==C.of)) goto L_11c620b4;
  /* 11c620a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c620aa mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c620af call 0x11c62950 */
  push32(0x11c620b4u); f_11c62950();
L_11c620b4:;
  /* 11c620b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c620b6 call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c620bcu);
  /* 11c620bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c620bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c620c1 je 0x11c620f2 */
  if (C.zf) goto L_11c620f2;
  /* 11c620c3 push 0x11c73d00 */
  push32((uint32_t)(0x11c73d00u));
  /* 11c620c8 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c620cd call 0x11c62bf0 */
  push32(0x11c620d2u); f_11c62bf0();
  /* 11c620d2 push 0x11c73de0 */
  push32((uint32_t)(0x11c73de0u));
  /* 11c620d7 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c620dc call 0x11c62bf0 */
  push32(0x11c620e1u); f_11c62bf0();
  /* 11c620e1 push 0x11c73dc0 */
  push32((uint32_t)(0x11c73dc0u));
  /* 11c620e6 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c620eb call 0x11c62bf0 */
  push32(0x11c620f0u); f_11c62bf0();
  /* 11c620f0 jmp 0x11c6212e */
  goto L_11c6212e;
L_11c620f2:;
  /* 11c620f2 push 0x11c73dd8 */
  push32((uint32_t)(0x11c73dd8u));
  /* 11c620f7 push 0x11c740e8 */
  push32((uint32_t)(0x11c740e8u));
  /* 11c620fc mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c62101 call 0x11c62c10 */
  push32(0x11c62106u); f_11c62c10();
  /* 11c62106 push 0x11c740e8 */
  push32((uint32_t)(0x11c740e8u));
  /* 11c6210b push 0x11c73dd0 */
  push32((uint32_t)(0x11c73dd0u));
  /* 11c62110 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c62115 call 0x11c62c10 */
  push32(0x11c6211au); f_11c62c10();
  /* 11c6211a push 0x11c73dd0 */
  push32((uint32_t)(0x11c73dd0u));
  /* 11c6211f push 0x11c83558 */
  push32((uint32_t)(0x11c83558u));
  /* 11c62124 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c62129 call 0x11c62c10 */
  push32(0x11c6212eu); f_11c62c10();
L_11c6212e:;
  /* 11c6212e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62130 call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c62136u);
  /* 11c62136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62139 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6213b jne 0x11c621ad */
  if (!C.zf) goto L_11c621ad;
  /* 11c6213d call dword ptr [0x11c6e198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e198))), 0x11c62143u);
  /* 11c62143 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62148 jle 0x11c621ad */
  if ((C.zf||C.sf!=C.of)) goto L_11c621ad;
  /* 11c6214a mov eax, dword ptr [0x11c740d8] */
  EAX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6214f mov ecx, dword ptr [eax + 0x1856] */
  ECX = (r32((uint32_t)(EAX + 0x1856)));
  /* 11c62155 mov edx, dword ptr [eax + 0x185a] */
  EDX = (r32((uint32_t)(EAX + 0x185a)));
  /* 11c6215b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6215d jne 0x11c621ad */
  if (!C.zf) goto L_11c621ad;
  /* 11c6215f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62161 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62163 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c62169u);
  /* 11c62169 push 0x11c70410 */
  push32((uint32_t)(0x11c70410u));
  /* 11c6216e call ebp */
  call_ind((uint32_t)(EBP), 0x11c62170u);
  /* 11c62170 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11c62172 call ebx */
  call_ind((uint32_t)(EBX), 0x11c62174u);
  /* 11c62174 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11c62176 call dword ptr [0x11c6e178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e178))), 0x11c6217cu);
  /* 11c6217c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6217e call esi */
  call_ind((uint32_t)(ESI), 0x11c62180u);
  /* 11c62180 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62183 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62186 jge 0x11c6219e */
  if ((C.sf==C.of)) goto L_11c6219e;
  /* 11c62188 mov esi, dword ptr [0x11c6e178] */
  ESI = (r32((uint32_t)(0x11c6e178)));
  /* 11c6218e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11c62190 call esi */
  call_ind((uint32_t)(ESI), 0x11c62192u);
  /* 11c62192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62195 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11c62197 call esi */
  call_ind((uint32_t)(ESI), 0x11c62199u);
  /* 11c62199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6219c jmp 0x11c621b3 */
  goto L_11c621b3;
L_11c6219e:;
  /* 11c6219e mov esi, dword ptr [0x11c6e178] */
  ESI = (r32((uint32_t)(0x11c6e178)));
  /* 11c621a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11c621a6 call esi */
  call_ind((uint32_t)(ESI), 0x11c621a8u);
  /* 11c621a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c621ab jmp 0x11c621b3 */
  goto L_11c621b3;
L_11c621ad:;
  /* 11c621ad mov esi, dword ptr [0x11c6e178] */
  ESI = (r32((uint32_t)(0x11c6e178)));
L_11c621b3:;
  /* 11c621b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c621b5 call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c621bbu);
  /* 11c621bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c621be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c621c0 je 0x11c62293 */
  if (C.zf) goto L_11c62293;
  /* 11c621c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c621c8 call dword ptr [0x11c6e180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e180))), 0x11c621ceu);
  /* 11c621ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c621d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c621d3 je 0x11c62293 */
  if (C.zf) goto L_11c62293;
  /* 11c621d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c621db push 2 */
  push32((uint32_t)(0x2u));
  /* 11c621dd call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c621e3u);
  /* 11c621e3 push 0x11c70404 */
  push32((uint32_t)(0x11c70404u));
  /* 11c621e8 call ebp */
  call_ind((uint32_t)(EBP), 0x11c621eau);
  /* 11c621ea mov eax, dword ptr [0x11c8356c] */
  EAX = (r32((uint32_t)(0x11c8356c)));
  /* 11c621ef lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11c621f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c621f3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c621f5 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c621f7 mov dword ptr [0x11c8356c], eax */
  w32((uint32_t)(0x11c8356c), (EAX));
  /* 11c621fc mov eax, dword ptr [0x11c83af0] */
  EAX = (r32((uint32_t)(0x11c83af0)));
  /* 11c62201 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c62204 mov eax, 0x2aaaaaab */
  EAX = (0x2aaaaaabu);
  /* 11c62209 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 11c6220b mov ecx, dword ptr [0x11c83720] */
  ECX = (r32((uint32_t)(0x11c83720)));
  /* 11c62211 mov eax, edx */
  EAX = (EDX);
  /* 11c62213 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 11c62216 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62218 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62219 mov dword ptr [0x11c83af0], edx */
  w32((uint32_t)(0x11c83af0), (EDX));
  /* 11c6221f call 0x11c61a50 */
  push32(0x11c62224u); f_11c61a50();
  /* 11c62224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62226 push 0x11c877e8 */
  push32((uint32_t)(0x11c877e8u));
  /* 11c6222b call edi */
  call_ind((uint32_t)(EDI), 0x11c6222du);
  /* 11c6222d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6222f push 0x11c83708 */
  push32((uint32_t)(0x11c83708u));
  /* 11c62234 call edi */
  call_ind((uint32_t)(EDI), 0x11c62236u);
  /* 11c62236 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62238 push 0x11c83538 */
  push32((uint32_t)(0x11c83538u));
  /* 11c6223d call edi */
  call_ind((uint32_t)(EDI), 0x11c6223fu);
  /* 11c6223f mov dl, byte ptr [0x11c836f8] */
  DL = (r8((uint32_t)(0x11c836f8)));
  /* 11c62245 mov al, byte ptr [0x11c83720] */
  AL = (r8((uint32_t)(0x11c83720)));
  /* 11c6224a push edx */
  push32((uint32_t)(EDX));
  /* 11c6224b push eax */
  push32((uint32_t)(EAX));
  /* 11c6224c call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c62252u);
  /* 11c62252 mov ecx, dword ptr [0x11c83720] */
  ECX = (r32((uint32_t)(0x11c83720)));
  /* 11c62258 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62259 call 0x11c61a90 */
  push32(0x11c6225eu); f_11c61a90();
  /* 11c6225e mov edx, dword ptr [0x11c836f8] */
  EDX = (r32((uint32_t)(0x11c836f8)));
  /* 11c62264 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62267 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c6226c push edx */
  push32((uint32_t)(EDX));
  /* 11c6226d call 0x11c62910 */
  push32(0x11c62272u); f_11c62910();
  /* 11c62272 mov eax, dword ptr [0x11c836f8] */
  EAX = (r32((uint32_t)(0x11c836f8)));
  /* 11c62277 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c6227c push eax */
  push32((uint32_t)(EAX));
  /* 11c6227d call 0x11c62910 */
  push32(0x11c62282u); f_11c62910();
  /* 11c62282 mov ecx, dword ptr [0x11c836f8] */
  ECX = (r32((uint32_t)(0x11c836f8)));
  /* 11c62288 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62289 mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c6228e call 0x11c62910 */
  push32(0x11c62293u); f_11c62910();
L_11c62293:;
  /* 11c62293 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c62295 call dword ptr [0x11c6e154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e154))), 0x11c6229bu);
  /* 11c6229b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6229e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c622a0 jne 0x11c622f7 */
  if (!C.zf) goto L_11c622f7;
  /* 11c622a2 call dword ptr [0x11c6e198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e198))), 0x11c622a8u);
  /* 11c622a8 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c622ad jle 0x11c622f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11c622f7;
  /* 11c622af mov eax, dword ptr [0x11c740d8] */
  EAX = (r32((uint32_t)(0x11c740d8)));
  /* 11c622b4 mov edx, dword ptr [eax + 0x1856] */
  EDX = (r32((uint32_t)(EAX + 0x1856)));
  /* 11c622ba mov ecx, dword ptr [eax + 0x185e] */
  ECX = (r32((uint32_t)(EAX + 0x185e)));
  /* 11c622c0 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c622c2 jne 0x11c622f7 */
  if (!C.zf) goto L_11c622f7;
  /* 11c622c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c622c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c622c8 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c622ceu);
  /* 11c622ce push 0x11c703f8 */
  push32((uint32_t)(0x11c703f8u));
  /* 11c622d3 call ebp */
  call_ind((uint32_t)(EBP), 0x11c622d5u);
  /* 11c622d5 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c622da push 1 */
  push32((uint32_t)(0x1u));
  /* 11c622dc push 0x11c73dc8 */
  push32((uint32_t)(0x11c73dc8u));
  /* 11c622e1 push eax */
  push32((uint32_t)(EAX));
  /* 11c622e2 call dword ptr [0x11c6e1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ac))), 0x11c622e8u);
  /* 11c622e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11c622ea call ebx */
  call_ind((uint32_t)(EBX), 0x11c622ecu);
  /* 11c622ec push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11c622ee call esi */
  call_ind((uint32_t)(ESI), 0x11c622f0u);
  /* 11c622f0 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11c622f2 call esi */
  call_ind((uint32_t)(ESI), 0x11c622f4u);
  /* 11c622f4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c622f7:;
  /* 11c622f7 mov ecx, dword ptr [0x11c83568] */
  ECX = (r32((uint32_t)(0x11c83568)));
  /* 11c622fd call 0x11c63a70 */
  push32(0x11c62302u); f_11c63a70();
  /* 11c62302 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62308 call 0x11c62f20 */
  push32(0x11c6230du); f_11c62f20();
  /* 11c6230d pop edi */
  EDI = (pop32());
  /* 11c6230e pop esi */
  ESI = (pop32());
  /* 11c6230f pop ebp */
  EBP = (pop32());
  /* 11c62310 pop ebx */
  EBX = (pop32());
  /* 11c62311 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62313 jne 0x11c6232b */
  if (!C.zf) goto L_11c6232b;
  /* 11c62315 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6231b cmp dword ptr [ecx + 0x1845], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1845))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62322 je 0x11c6232b */
  if (C.zf) goto L_11c6232b;
  /* 11c62324 mov eax, 1 */
  EAX = (0x1u);
  /* 11c62329 jmp 0x11c6232d */
  goto L_11c6232d;
L_11c6232b:;
  /* 11c6232b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6232d:;
  /* 11c6232d mov ecx, dword ptr [0x11c83568] */
  ECX = (r32((uint32_t)(0x11c83568)));
  /* 11c62333 push eax */
  push32((uint32_t)(EAX));
  /* 11c62334 call 0x11c62fd0 */
  push32(0x11c62339u); f_11c62fd0();
  /* 11c62339 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6233b je 0x11c6239b */
  if (C.zf) goto L_11c6239b;
  /* 11c6233d mov eax, dword ptr [0x11c740d8] */
  EAX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62342 mov edx, dword ptr [eax + 0x30] */
  EDX = (r32((uint32_t)(EAX + 0x30)));
  /* 11c62345 mov ecx, dword ptr [eax + 0x2c] */
  ECX = (r32((uint32_t)(EAX + 0x2c)));
  /* 11c62348 push edx */
  push32((uint32_t)(EDX));
  /* 11c62349 mov edx, dword ptr [eax + 0x28] */
  EDX = (r32((uint32_t)(EAX + 0x28)));
  /* 11c6234c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6234d mov ecx, dword ptr [eax + 0x24] */
  ECX = (r32((uint32_t)(EAX + 0x24)));
  /* 11c62350 push edx */
  push32((uint32_t)(EDX));
  /* 11c62351 mov edx, dword ptr [eax + 0x20] */
  EDX = (r32((uint32_t)(EAX + 0x20)));
  /* 11c62354 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11c62357 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62358 push edx */
  push32((uint32_t)(EDX));
  /* 11c62359 push eax */
  push32((uint32_t)(EAX));
  /* 11c6235a push 0x11c703e8 */
  push32((uint32_t)(0x11c703e8u));
  /* 11c6235f call dword ptr [0x11c6e184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e184))), 0x11c62365u);
  /* 11c62365 push 0x11c703d8 */
  push32((uint32_t)(0x11c703d8u));
  /* 11c6236a call dword ptr [0x11c6e1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a0))), 0x11c62370u);
  /* 11c62370 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62373 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62375 je 0x11c6239b */
  if (C.zf) goto L_11c6239b;
  /* 11c62377 mov ecx, dword ptr [0x11c83568] */
  ECX = (r32((uint32_t)(0x11c83568)));
  /* 11c6237d mov eax, dword ptr [ecx + 0x35] */
  EAX = (r32((uint32_t)(ECX + 0x35)));
  /* 11c62380 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c62383 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c62386 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c62389 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c6238c lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c6238f lea ecx, [edx*2 + 0x11c74110] */
  ECX = ((uint32_t)(EDX*2 + 0x11c74110));
  /* 11c62396 call 0x11c63160 */
  push32(0x11c6239bu); f_11c63160();
L_11c6239b:;
  /* 11c6239b mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c623a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c623a3 call 0x11c62fd0 */
  push32(0x11c623a8u); f_11c62fd0();
  /* 11c623a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c623aa je 0x11c623c0 */
  if (C.zf) goto L_11c623c0;
  /* 11c623ac mov eax, dword ptr [0x11c740d8] */
  EAX = (r32((uint32_t)(0x11c740d8)));
  /* 11c623b1 mov ecx, dword ptr [eax + 0x1845] */
  ECX = (r32((uint32_t)(EAX + 0x1845)));
  /* 11c623b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c623b9 jne 0x11c623c0 */
  if (!C.zf) goto L_11c623c0;
  /* 11c623bb call 0x11c623d0 */
  push32(0x11c623c0u); f_11c623d0();
L_11c623c0:;
  /* 11c623c0 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c623c6 call 0x11c635b0 */
  push32(0x11c623cbu); f_11c635b0();
  /* 11c623cb pop ecx */
  ECX = (pop32());
  /* 11c623cc ret  */
  ESPCHK(0x11c61ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023d0 @ 0x11c623d0 (990 bytes, 278 insns) */
void f_11c623d0(void) {
  FTRACE(0x11c623d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c623d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c623d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c623d2 push esi */
  push32((uint32_t)(ESI));
  /* 11c623d3 push edi */
  push32((uint32_t)(EDI));
  /* 11c623d4 mov edi, dword ptr [0x11c6e154] */
  EDI = (r32((uint32_t)(0x11c6e154)));
  /* 11c623da push 6 */
  push32((uint32_t)(0x6u));
  /* 11c623dc call edi */
  call_ind((uint32_t)(EDI), 0x11c623deu);
  /* 11c623de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c623e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c623e3 je 0x11c624c4 */
  if (C.zf) goto L_11c624c4;
  /* 11c623e9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c623eb call edi */
  call_ind((uint32_t)(EDI), 0x11c623edu);
  /* 11c623ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c623f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c623f2 jne 0x11c624c4 */
  if (!C.zf) goto L_11c624c4;
  /* 11c623f8 mov al, byte ptr [0x11c73d08] */
  AL = (r8((uint32_t)(0x11c73d08)));
  /* 11c623fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c623ff push eax */
  push32((uint32_t)(EAX));
  /* 11c62400 call dword ptr [0x11c6e138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e138))), 0x11c62406u);
  /* 11c62406 mov esi, eax */
  ESI = (EAX);
  /* 11c62408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6240b sub esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c62411 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c62413 jle 0x11c624b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11c624b6;
  /* 11c62419 push 0x11c705f0 */
  push32((uint32_t)(0x11c705f0u));
  /* 11c6241e call dword ptr [0x11c6e1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a0))), 0x11c62424u);
  /* 11c62424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62427 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62429 je 0x11c624c4 */
  if (C.zf) goto L_11c624c4;
  /* 11c6242f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62431 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c62433 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c62439u);
  /* 11c62439 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6243f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62442 mov dword ptr [ecx + 0x1845], 6 */
  w32((uint32_t)(ECX + 0x1845), (0x6u));
  /* 11c6244c mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62452 call 0x11c63360 */
  push32(0x11c62457u); f_11c63360();
  /* 11c62457 cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6245a jge 0x11c62477 */
  if ((C.sf==C.of)) goto L_11c62477;
L_11c6245c:;
  /* 11c6245c mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62462 call 0x11c63950 */
  push32(0x11c62467u); f_11c63950();
  /* 11c62467 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6246d call 0x11c63360 */
  push32(0x11c62472u); f_11c63360();
  /* 11c62472 cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62475 jl 0x11c6245c */
  if ((C.sf!=C.of)) goto L_11c6245c;
L_11c62477:;
  /* 11c62477 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6247d call 0x11c63360 */
  push32(0x11c62482u); f_11c63360();
  /* 11c62482 mov ecx, eax */
  ECX = (EAX);
  /* 11c62484 mov eax, esi */
  EAX = (ESI);
  /* 11c62486 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c62487 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c62489 mov dl, byte ptr [0x11c73d08] */
  DL = (r8((uint32_t)(0x11c73d08)));
  /* 11c6248f neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c62491 push esi */
  push32((uint32_t)(ESI));
  /* 11c62492 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62494 push edx */
  push32((uint32_t)(EDX));
  /* 11c62495 mov dword ptr [0x11c8780c], eax */
  w32((uint32_t)(0x11c8780c), (EAX));
  /* 11c6249a call dword ptr [0x11c6e16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e16c))), 0x11c624a0u);
  /* 11c624a0 mov eax, dword ptr [0x11c73d08] */
  EAX = (r32((uint32_t)(0x11c73d08)));
  /* 11c624a5 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c624ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c624ae push eax */
  push32((uint32_t)(EAX));
  /* 11c624af call 0x11c633b0 */
  push32(0x11c624b4u); f_11c633b0();
  /* 11c624b4 jmp 0x11c624c4 */
  goto L_11c624c4;
L_11c624b6:;
  /* 11c624b6 push 0x11c705e8 */
  push32((uint32_t)(0x11c705e8u));
  /* 11c624bb call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c624c1u);
  /* 11c624c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c624c4:;
  /* 11c624c4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c624c6 call edi */
  call_ind((uint32_t)(EDI), 0x11c624c8u);
  /* 11c624c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c624cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c624cd jne 0x11c627a9 */
  if (!C.zf) goto L_11c627a9;
  /* 11c624d3 mov ebx, dword ptr [0x11c6e13c] */
  EBX = (r32((uint32_t)(0x11c6e13c)));
  /* 11c624d9 mov ebp, dword ptr [0x11c6e1f0] */
  EBP = (r32((uint32_t)(0x11c6e1f0)));
L_11c624df:;
  /* 11c624df call ebx */
  call_ind((uint32_t)(EBX), 0x11c624e1u);
  /* 11c624e1 push 0x11c705b8 */
  push32((uint32_t)(0x11c705b8u));
  /* 11c624e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c624e8 push 0x11c705a4 */
  push32((uint32_t)(0x11c705a4u));
  /* 11c624ed push 9 */
  push32((uint32_t)(0x9u));
  /* 11c624ef call dword ptr [0x11c6e140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e140))), 0x11c624f5u);
  /* 11c624f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c624f8 mov esi, eax */
  ESI = (EAX);
  /* 11c624fa call ebx */
  call_ind((uint32_t)(EBX), 0x11c624fcu);
  /* 11c624fc mov eax, esi */
  EAX = (ESI);
  /* 11c624fe sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c62501 je 0x11c62670 */
  if (C.zf) goto L_11c62670;
  /* 11c62507 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c62508 jne 0x11c627a0 */
  if (!C.zf) goto L_11c627a0;
  /* 11c6250e mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62514 call 0x11c63360 */
  push32(0x11c62519u); f_11c63360();
  /* 11c62519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6251b jne 0x11c6252d */
  if (!C.zf) goto L_11c6252d;
  /* 11c6251d push 0x11c70594 */
  push32((uint32_t)(0x11c70594u));
  /* 11c62522 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c62528u);
  /* 11c62528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6252b jmp 0x11c624df */
  goto L_11c624df;
L_11c6252d:;
  /* 11c6252d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6252f call edi */
  call_ind((uint32_t)(EDI), 0x11c62531u);
  /* 11c62531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62534 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62536 je 0x11c62658 */
  if (C.zf) goto L_11c62658;
  /* 11c6253c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6253e call edi */
  call_ind((uint32_t)(EDI), 0x11c62540u);
  /* 11c62540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62543 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62545 jne 0x11c62658 */
  if (!C.zf) goto L_11c62658;
  /* 11c6254b mov ecx, dword ptr [0x11c8356c] */
  ECX = (r32((uint32_t)(0x11c8356c)));
  /* 11c62551 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62552 push 0x11c70588 */
  push32((uint32_t)(0x11c70588u));
  /* 11c62557 call dword ptr [0x11c6e184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e184))), 0x11c6255du);
  /* 11c6255d mov esi, dword ptr [0x11c6e1a0] */
  ESI = (r32((uint32_t)(0x11c6e1a0)));
  /* 11c62563 push 0x11c7057c */
  push32((uint32_t)(0x11c7057cu));
  /* 11c62568 call esi */
  call_ind((uint32_t)(ESI), 0x11c6256au);
  /* 11c6256a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6256d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6256f je 0x11c62658 */
  if (C.zf) goto L_11c62658;
  /* 11c62575 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62577 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62579 call dword ptr [0x11c6e138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e138))), 0x11c6257fu);
  /* 11c6257f mov ecx, dword ptr [0x11c8356c] */
  ECX = (r32((uint32_t)(0x11c8356c)));
  /* 11c62585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62588 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6258a jle 0x11c62646 */
  if ((C.zf||C.sf!=C.of)) goto L_11c62646;
  /* 11c62590 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c62592 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c62594 call dword ptr [0x11c6e1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e0))), 0x11c6259au);
  /* 11c6259a mov edx, dword ptr [0x11c83af0] */
  EDX = (r32((uint32_t)(0x11c83af0)));
  /* 11c625a0 push edx */
  push32((uint32_t)(EDX));
  /* 11c625a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c625a3 call dword ptr [0x11c6e1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b0))), 0x11c625a9u);
  /* 11c625a9 push 0x11c70570 */
  push32((uint32_t)(0x11c70570u));
  /* 11c625ae call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c625b4u);
  /* 11c625b4 mov eax, dword ptr [0x11c8356c] */
  EAX = (r32((uint32_t)(0x11c8356c)));
  /* 11c625b9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c625bb push eax */
  push32((uint32_t)(EAX));
  /* 11c625bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c625be push 0 */
  push32((uint32_t)(0x0u));
  /* 11c625c0 call dword ptr [0x11c6e16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e16c))), 0x11c625c6u);
  /* 11c625c6 mov ecx, dword ptr [0x11c836f8] */
  ECX = (r32((uint32_t)(0x11c836f8)));
  /* 11c625cc push ecx */
  push32((uint32_t)(ECX));
  /* 11c625cd call 0x11c61a50 */
  push32(0x11c625d2u); f_11c61a50();
  /* 11c625d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c625d4 push 0x11c877e8 */
  push32((uint32_t)(0x11c877e8u));
  /* 11c625d9 call ebp */
  call_ind((uint32_t)(EBP), 0x11c625dbu);
  /* 11c625db push 1 */
  push32((uint32_t)(0x1u));
  /* 11c625dd push 0x11c83708 */
  push32((uint32_t)(0x11c83708u));
  /* 11c625e2 call ebp */
  call_ind((uint32_t)(EBP), 0x11c625e4u);
  /* 11c625e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c625e6 push 0x11c83538 */
  push32((uint32_t)(0x11c83538u));
  /* 11c625eb call ebp */
  call_ind((uint32_t)(EBP), 0x11c625edu);
  /* 11c625ed mov dl, byte ptr [0x11c83720] */
  DL = (r8((uint32_t)(0x11c83720)));
  /* 11c625f3 mov al, byte ptr [0x11c836f8] */
  AL = (r8((uint32_t)(0x11c836f8)));
  /* 11c625f8 push edx */
  push32((uint32_t)(EDX));
  /* 11c625f9 push eax */
  push32((uint32_t)(EAX));
  /* 11c625fa call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c62600u);
  /* 11c62600 mov ecx, dword ptr [0x11c836f8] */
  ECX = (r32((uint32_t)(0x11c836f8)));
  /* 11c62606 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62609 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6260a call 0x11c61a90 */
  push32(0x11c6260fu); f_11c61a90();
  /* 11c6260f mov edx, dword ptr [0x11c83720] */
  EDX = (r32((uint32_t)(0x11c83720)));
  /* 11c62615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62618 mov ecx, 0x11c83590 */
  ECX = (0x11c83590u);
  /* 11c6261d push edx */
  push32((uint32_t)(EDX));
  /* 11c6261e call 0x11c62910 */
  push32(0x11c62623u); f_11c62910();
  /* 11c62623 mov eax, dword ptr [0x11c83720] */
  EAX = (r32((uint32_t)(0x11c83720)));
  /* 11c62628 mov ecx, 0x11c83608 */
  ECX = (0x11c83608u);
  /* 11c6262d push eax */
  push32((uint32_t)(EAX));
  /* 11c6262e call 0x11c62910 */
  push32(0x11c62633u); f_11c62910();
  /* 11c62633 mov ecx, dword ptr [0x11c83720] */
  ECX = (r32((uint32_t)(0x11c83720)));
  /* 11c62639 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6263a mov ecx, 0x11c83680 */
  ECX = (0x11c83680u);
  /* 11c6263f call 0x11c62910 */
  push32(0x11c62644u); f_11c62910();
  /* 11c62644 jmp 0x11c62658 */
  goto L_11c62658;
L_11c62646:;
  /* 11c62646 push 0x11c70564 */
  push32((uint32_t)(0x11c70564u));
  /* 11c6264b call esi */
  call_ind((uint32_t)(ESI), 0x11c6264du);
  /* 11c6264d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62650 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62652 jne 0x11c627a9 */
  if (!C.zf) goto L_11c627a9;
L_11c62658:;
  /* 11c62658 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c6265e call 0x11c639a0 */
  push32(0x11c62663u); f_11c639a0();
  /* 11c62663 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62665 jne 0x11c627a9 */
  if (!C.zf) goto L_11c627a9;
  /* 11c6266b jmp 0x11c624df */
  goto L_11c624df;
L_11c62670:;
  /* 11c62670 mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c62676 call 0x11c63360 */
  push32(0x11c6267bu); f_11c63360();
  /* 11c6267b mov esi, eax */
  ESI = (EAX);
  /* 11c6267d call ebx */
  call_ind((uint32_t)(EBX), 0x11c6267fu);
  /* 11c6267f push 0x11c70534 */
  push32((uint32_t)(0x11c70534u));
  /* 11c62684 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62686 push 0x11c70520 */
  push32((uint32_t)(0x11c70520u));
  /* 11c6268b push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6268d call dword ptr [0x11c6e140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e140))), 0x11c62693u);
  /* 11c62693 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62696 mov edi, eax */
  EDI = (EAX);
  /* 11c62698 call ebx */
  call_ind((uint32_t)(EBX), 0x11c6269au);
  /* 11c6269a mov eax, edi */
  EAX = (EDI);
  /* 11c6269c sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6269f je 0x11c626dc */
  if (C.zf) goto L_11c626dc;
  /* 11c626a1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c626a2 jne 0x11c6278c */
  if (!C.zf) goto L_11c6278c;
  /* 11c626a8 cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c626ab jge 0x11c626cc */
  if ((C.sf==C.of)) goto L_11c626cc;
  /* 11c626ad push 0x11c70514 */
  push32((uint32_t)(0x11c70514u));
  /* 11c626b2 call dword ptr [0x11c6e1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a0))), 0x11c626b8u);
  /* 11c626b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c626bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c626bd je 0x11c62670 */
  if (C.zf) goto L_11c62670;
  /* 11c626bf mov ecx, dword ptr [0x11c740d8] */
  ECX = (r32((uint32_t)(0x11c740d8)));
  /* 11c626c5 call 0x11c63950 */
  push32(0x11c626cau); f_11c63950();
  /* 11c626ca jmp 0x11c62670 */
  goto L_11c62670;
L_11c626cc:;
  /* 11c626cc push 0x11c70504 */
  push32((uint32_t)(0x11c70504u));
  /* 11c626d1 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c626d7u);
  /* 11c626d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c626da jmp 0x11c62670 */
  goto L_11c62670;
L_11c626dc:;
  /* 11c626dc mov eax, dword ptr [0x11c740d8] */
  EAX = (r32((uint32_t)(0x11c740d8)));
  /* 11c626e1 mov edx, dword ptr [eax + 0x8d] */
  EDX = (r32((uint32_t)(EAX + 0x8d)));
  /* 11c626e7 mov ecx, dword ptr [eax + 0x89] */
  ECX = (r32((uint32_t)(EAX + 0x89)));
  /* 11c626ed imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c626f0 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c626f3 push edx */
  push32((uint32_t)(EDX));
  /* 11c626f4 mov edx, dword ptr [eax + 0x85] */
  EDX = (r32((uint32_t)(EAX + 0x85)));
  /* 11c626fa push ecx */
  push32((uint32_t)(ECX));
  /* 11c626fb mov ecx, dword ptr [eax + 0x81] */
  ECX = (r32((uint32_t)(EAX + 0x81)));
  /* 11c62701 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62704 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62707 push edx */
  push32((uint32_t)(EDX));
  /* 11c62708 mov edx, dword ptr [eax + 0x7d] */
  EDX = (r32((uint32_t)(EAX + 0x7d)));
  /* 11c6270b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6270c mov ecx, dword ptr [eax + 0x79] */
  ECX = (r32((uint32_t)(EAX + 0x79)));
  /* 11c6270f imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62712 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62715 push edx */
  push32((uint32_t)(EDX));
  /* 11c62716 mov edx, dword ptr [eax + 0xa5] */
  EDX = (r32((uint32_t)(EAX + 0xa5)));
  /* 11c6271c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6271d mov ecx, dword ptr [eax + 0xa1] */
  ECX = (r32((uint32_t)(EAX + 0xa1)));
  /* 11c62723 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62726 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62729 push edx */
  push32((uint32_t)(EDX));
  /* 11c6272a mov edx, dword ptr [eax + 0x9d] */
  EDX = (r32((uint32_t)(EAX + 0x9d)));
  /* 11c62730 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62731 mov ecx, dword ptr [eax + 0x99] */
  ECX = (r32((uint32_t)(EAX + 0x99)));
  /* 11c62737 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6273a imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6273d push edx */
  push32((uint32_t)(EDX));
  /* 11c6273e mov edx, dword ptr [eax + 0x95] */
  EDX = (r32((uint32_t)(EAX + 0x95)));
  /* 11c62744 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62745 mov ecx, dword ptr [eax + 0x91] */
  ECX = (r32((uint32_t)(EAX + 0x91)));
  /* 11c6274b imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6274e imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c62751 push edx */
  push32((uint32_t)(EDX));
  /* 11c62752 mov edx, dword ptr [eax + 0x415] */
  EDX = (r32((uint32_t)(EAX + 0x415)));
  /* 11c62758 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62759 mov ecx, dword ptr [eax + 0x411] */
  ECX = (r32((uint32_t)(EAX + 0x411)));
  /* 11c6275f push edx */
  push32((uint32_t)(EDX));
  /* 11c62760 mov edx, dword ptr [eax + 0x40d] */
  EDX = (r32((uint32_t)(EAX + 0x40d)));
  /* 11c62766 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62767 mov ecx, dword ptr [eax + 0x409] */
  ECX = (r32((uint32_t)(EAX + 0x409)));
  /* 11c6276d push edx */
  push32((uint32_t)(EDX));
  /* 11c6276e mov edx, dword ptr [eax + 0x405] */
  EDX = (r32((uint32_t)(EAX + 0x405)));
  /* 11c62774 mov eax, dword ptr [eax + 0x401] */
  EAX = (r32((uint32_t)(EAX + 0x401)));
  /* 11c6277a push ecx */
  push32((uint32_t)(ECX));
  /* 11c6277b push edx */
  push32((uint32_t)(EDX));
  /* 11c6277c push eax */
  push32((uint32_t)(EAX));
  /* 11c6277d push esi */
  push32((uint32_t)(ESI));
  /* 11c6277e push 0x11c704f8 */
  push32((uint32_t)(0x11c704f8u));
  /* 11c62783 call dword ptr [0x11c6e184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e184))), 0x11c62789u);
  /* 11c62789 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6278c:;
  /* 11c6278c cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6278f jl 0x11c62670 */
  if ((C.sf!=C.of)) goto L_11c62670;
  /* 11c62795 mov edi, dword ptr [0x11c6e154] */
  EDI = (r32((uint32_t)(0x11c6e154)));
  /* 11c6279b jmp 0x11c624df */
  goto L_11c624df;
L_11c627a0:;
  /* 11c627a0 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c627a3 jl 0x11c624df */
  if ((C.sf!=C.of)) goto L_11c624df;
L_11c627a9:;
  /* 11c627a9 pop edi */
  EDI = (pop32());
  /* 11c627aa pop esi */
  ESI = (pop32());
  /* 11c627ab pop ebp */
  EBP = (pop32());
  /* 11c627ac pop ebx */
  EBX = (pop32());
  /* 11c627ad ret  */
  ESPCHK(0x11c623d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x11c627b0 (20 bytes, 6 insns) */
void f_11c627b0(void) {
  FTRACE(0x11c627b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c627b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c627b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c627b5 jne 0x11c627bc */
  if (!C.zf) goto L_11c627bc;
  /* 11c627b7 call 0x11c61210 */
  push32(0x11c627bcu); f_11c61210();
L_11c627bc:;
  /* 11c627bc mov eax, 1 */
  EAX = (0x1u);
  /* 11c627c1 ret 0xc */
  ESPCHK(0x11c627b0u, _esp0);
  ESP += 16; return;
}

/* FUN_100027e0 @ 0x11c627e0 (13 bytes, 4 insns) */
void f_11c627e0(void) {
  FTRACE(0x11c627e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c627e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c627e2 mov ecx, 0x11c73d10 */
  ECX = (0x11c73d10u);
  /* 11c627e7 call 0x11c6b991 */
  push32(0x11c627ecu); f_11c6b991();
  /* 11c627ec ret  */
  ESPCHK(0x11c627e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x11c627f0 (12 bytes, 4 insns) */
void f_11c627f0(void) {
  FTRACE(0x11c627f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c627f0 push 0x11c62800 */
  push32((uint32_t)(0x11c62800u));
  /* 11c627f5 call 0x11c64175 */
  push32(0x11c627fau); f_11c64175();
  /* 11c627fa pop ecx */
  ECX = (pop32());
  /* 11c627fb ret  */
  ESPCHK(0x11c627f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x11c62840 (22 bytes, 9 insns) */
void f_11c62840(void) {
  FTRACE(0x11c62840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62840 push esi */
  push32((uint32_t)(ESI));
  /* 11c62841 mov esi, ecx */
  ESI = (ECX);
  /* 11c62843 push 0x11c705f8 */
  push32((uint32_t)(0x11c705f8u));
  /* 11c62848 push esi */
  push32((uint32_t)(ESI));
  /* 11c62849 call dword ptr [0x11c6e134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e134))), 0x11c6284fu);
  /* 11c6284f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62852 mov eax, esi */
  EAX = (ESI);
  /* 11c62854 pop esi */
  ESI = (pop32());
  /* 11c62855 ret  */
  ESPCHK(0x11c62840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x11c62860 (162 bytes, 58 insns) */
void f_11c62860(void) {
  FTRACE(0x11c62860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62860 push ebx */
  push32((uint32_t)(EBX));
  /* 11c62861 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62862 push esi */
  push32((uint32_t)(ESI));
  /* 11c62863 push edi */
  push32((uint32_t)(EDI));
  /* 11c62864 mov esi, ecx */
  ESI = (ECX);
  /* 11c62866 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c62868 push esi */
  push32((uint32_t)(ESI));
  /* 11c62869 call dword ptr [0x11c6e1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1cc))), 0x11c6286fu);
  /* 11c6286f mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c62873 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c62877 lea ebx, [esi + 4] */
  EBX = ((uint32_t)(ESI + 0x4));
  /* 11c6287a push ecx */
  push32((uint32_t)(ECX));
  /* 11c6287b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6287c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6287e call dword ptr [0x11c6e1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b4))), 0x11c62884u);
  /* 11c62884 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c62888 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c6288a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6288d cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6288f je 0x11c628a7 */
  if (C.zf) goto L_11c628a7;
  /* 11c62891 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11c62894 push eax */
  push32((uint32_t)(EAX));
  /* 11c62895 push edi */
  push32((uint32_t)(EDI));
  /* 11c62896 call dword ptr [0x11c6e1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1c8))), 0x11c6289cu);
  /* 11c6289c push edi */
  push32((uint32_t)(EDI));
  /* 11c6289d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6289e call dword ptr [0x11c6e130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e130))), 0x11c628a4u);
  /* 11c628a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c628a7:;
  /* 11c628a7 mov edi, dword ptr [0x11c6e1d0] */
  EDI = (r32((uint32_t)(0x11c6e1d0)));
  /* 11c628ad lea edx, [esi + 0x14] */
  EDX = ((uint32_t)(ESI + 0x14));
  /* 11c628b0 push edx */
  push32((uint32_t)(EDX));
  /* 11c628b1 call edi */
  call_ind((uint32_t)(EDI), 0x11c628b3u);
  /* 11c628b3 lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11c628b6 push eax */
  push32((uint32_t)(EAX));
  /* 11c628b7 call edi */
  call_ind((uint32_t)(EDI), 0x11c628b9u);
  /* 11c628b9 lea ecx, [esi + 0x6c] */
  ECX = ((uint32_t)(ESI + 0x6c));
  /* 11c628bc push ecx */
  push32((uint32_t)(ECX));
  /* 11c628bd call edi */
  call_ind((uint32_t)(EDI), 0x11c628bfu);
  /* 11c628bf mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c628c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c628c6 mov eax, 1 */
  EAX = (0x1u);
  /* 11c628cb mov dword ptr [esi + 0x30], ebp */
  w32((uint32_t)(ESI + 0x30), (EBP));
  /* 11c628ce mov dword ptr [esi + 0x34], ebp */
  w32((uint32_t)(ESI + 0x34), (EBP));
  /* 11c628d1 mov dword ptr [esi + 0x38], 0x3c */
  w32((uint32_t)(ESI + 0x38), (0x3cu));
  /* 11c628d8 mov dword ptr [esi + 0x44], ebp */
  w32((uint32_t)(ESI + 0x44), (EBP));
  /* 11c628db mov dword ptr [esi + 0x48], ebp */
  w32((uint32_t)(ESI + 0x48), (EBP));
  /* 11c628de mov dword ptr [esi + 0x4c], 0x78 */
  w32((uint32_t)(ESI + 0x4c), (0x78u));
  /* 11c628e5 mov dword ptr [esi + 0x54], ebp */
  w32((uint32_t)(ESI + 0x54), (EBP));
  /* 11c628e8 mov dword ptr [esi + 0x50], eax */
  w32((uint32_t)(ESI + 0x50), (EAX));
  /* 11c628eb mov dword ptr [esi + 0x58], 0xa */
  w32((uint32_t)(ESI + 0x58), (0xau));
  /* 11c628f2 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 11c628f5 mov dword ptr [esi + 0x60], ebp */
  w32((uint32_t)(ESI + 0x60), (EBP));
  /* 11c628f8 mov dword ptr [esi + 0x24], edx */
  w32((uint32_t)(ESI + 0x24), (EDX));
  /* 11c628fb pop edi */
  EDI = (pop32());
  /* 11c628fc pop esi */
  ESI = (pop32());
  /* 11c628fd pop ebp */
  EBP = (pop32());
  /* 11c628fe pop ebx */
  EBX = (pop32());
  /* 11c628ff ret 0x10 */
  ESPCHK(0x11c62860u, _esp0);
  ESP += 20; return;
}

/* FUN_10002910 @ 0x11c62910 (56 bytes, 23 insns) */
void f_11c62910(void) {
  FTRACE(0x11c62910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62910 push esi */
  push32((uint32_t)(ESI));
  /* 11c62911 mov esi, ecx */
  ESI = (ECX);
  /* 11c62913 push edi */
  push32((uint32_t)(EDI));
  /* 11c62914 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c62916 push eax */
  push32((uint32_t)(EAX));
  /* 11c62917 call 0x11c61a50 */
  push32(0x11c6291cu); f_11c61a50();
  /* 11c6291c lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11c6291f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62921 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62922 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c62928u);
  /* 11c62928 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11c6292c mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c6292e push edi */
  push32((uint32_t)(EDI));
  /* 11c6292f push edx */
  push32((uint32_t)(EDX));
  /* 11c62930 call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c62936u);
  /* 11c62936 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c62938 push eax */
  push32((uint32_t)(EAX));
  /* 11c62939 call 0x11c61a90 */
  push32(0x11c6293eu); f_11c61a90();
  /* 11c6293e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62941 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c62943 pop edi */
  EDI = (pop32());
  /* 11c62944 pop esi */
  ESI = (pop32());
  /* 11c62945 ret 4 */
  ESPCHK(0x11c62910u, _esp0);
  ESP += 8; return;
}

/* FUN_10002950 @ 0x11c62950 (10 bytes, 3 insns) */
void f_11c62950(void) {
  FTRACE(0x11c62950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62950 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62954 mov dword ptr [ecx + 0x50], eax */
  w32((uint32_t)(ECX + 0x50), (EAX));
  /* 11c62957 ret 4 */
  ESPCHK(0x11c62950u, _esp0);
  ESP += 8; return;
}

/* FUN_10002960 @ 0x11c62960 (10 bytes, 3 insns) */
void f_11c62960(void) {
  FTRACE(0x11c62960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62960 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62964 mov dword ptr [ecx + 0x58], eax */
  w32((uint32_t)(ECX + 0x58), (EAX));
  /* 11c62967 ret 4 */
  ESPCHK(0x11c62960u, _esp0);
  ESP += 8; return;
}

/* FUN_10002970 @ 0x11c62970 (10 bytes, 3 insns) */
void f_11c62970(void) {
  FTRACE(0x11c62970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62970 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62974 mov dword ptr [ecx + 0x5c], eax */
  w32((uint32_t)(ECX + 0x5c), (EAX));
  /* 11c62977 ret 4 */
  ESPCHK(0x11c62970u, _esp0);
  ESP += 8; return;
}

/* FUN_10002980 @ 0x11c62980 (10 bytes, 3 insns) */
void f_11c62980(void) {
  FTRACE(0x11c62980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62980 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62984 mov dword ptr [ecx + 0x60], eax */
  w32((uint32_t)(ECX + 0x60), (EAX));
  /* 11c62987 ret 4 */
  ESPCHK(0x11c62980u, _esp0);
  ESP += 8; return;
}

/* FUN_10002990 @ 0x11c62990 (39 bytes, 14 insns) */
void f_11c62990(void) {
  FTRACE(0x11c62990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62990 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62994 push esi */
  push32((uint32_t)(ESI));
  /* 11c62995 mov esi, ecx */
  ESI = (ECX);
  /* 11c62997 push eax */
  push32((uint32_t)(EAX));
  /* 11c62998 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11c6299b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6299c call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c629a2u);
  /* 11c629a2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c629a6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c629aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c629ad mov dword ptr [esi + 0x30], edx */
  w32((uint32_t)(ESI + 0x30), (EDX));
  /* 11c629b0 mov dword ptr [esi + 0x34], eax */
  w32((uint32_t)(ESI + 0x34), (EAX));
  /* 11c629b3 pop esi */
  ESI = (pop32());
  /* 11c629b4 ret 0xc */
  ESPCHK(0x11c62990u, _esp0);
  ESP += 16; return;
}

/* FUN_100029c0 @ 0x11c629c0 (39 bytes, 14 insns) */
void f_11c629c0(void) {
  FTRACE(0x11c629c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c629c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c629c4 push esi */
  push32((uint32_t)(ESI));
  /* 11c629c5 mov esi, ecx */
  ESI = (ECX);
  /* 11c629c7 push eax */
  push32((uint32_t)(EAX));
  /* 11c629c8 lea ecx, [esi + 0x3c] */
  ECX = ((uint32_t)(ESI + 0x3c));
  /* 11c629cb push ecx */
  push32((uint32_t)(ECX));
  /* 11c629cc call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c629d2u);
  /* 11c629d2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c629d6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c629da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c629dd mov dword ptr [esi + 0x44], edx */
  w32((uint32_t)(ESI + 0x44), (EDX));
  /* 11c629e0 mov dword ptr [esi + 0x48], eax */
  w32((uint32_t)(ESI + 0x48), (EAX));
  /* 11c629e3 pop esi */
  ESI = (pop32());
  /* 11c629e4 ret 0xc */
  ESPCHK(0x11c629c0u, _esp0);
  ESP += 16; return;
}

/* FUN_100029f0 @ 0x11c629f0 (18 bytes, 6 insns) */
void f_11c629f0(void) {
  FTRACE(0x11c629f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c629f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c629f4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c629f6 mov dword ptr [ecx + 0x64], edx */
  w32((uint32_t)(ECX + 0x64), (EDX));
  /* 11c629f9 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c629fc mov dword ptr [ecx + 0x68], eax */
  w32((uint32_t)(ECX + 0x68), (EAX));
  /* 11c629ff ret 4 */
  ESPCHK(0x11c629f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002a10 @ 0x11c62a10 (20 bytes, 8 insns) */
void f_11c62a10(void) {
  FTRACE(0x11c62a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62a10 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62a14 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c62a1au);
  /* 11c62a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62a1d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c62a1f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c62a21 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c62a23 ret  */
  ESPCHK(0x11c62a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x11c62a30 (229 bytes, 92 insns) */
void f_11c62a30(void) {
  FTRACE(0x11c62a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62a31 push ebx */
  push32((uint32_t)(EBX));
  /* 11c62a32 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62a33 mov ebp, dword ptr [0x11c6e15c] */
  EBP = (r32((uint32_t)(0x11c6e15c)));
  /* 11c62a39 push esi */
  push32((uint32_t)(ESI));
  /* 11c62a3a mov esi, ecx */
  ESI = (ECX);
  /* 11c62a3c push edi */
  push32((uint32_t)(EDI));
  /* 11c62a3d lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
  /* 11c62a40 push ebx */
  push32((uint32_t)(EBX));
  /* 11c62a41 call ebp */
  call_ind((uint32_t)(EBP), 0x11c62a43u);
  /* 11c62a43 lea edi, [esi + 0x14] */
  EDI = ((uint32_t)(ESI + 0x14));
  /* 11c62a46 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11c62a4a push edi */
  push32((uint32_t)(EDI));
  /* 11c62a4b call ebp */
  call_ind((uint32_t)(EBP), 0x11c62a4du);
  /* 11c62a4d mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c62a51 mov ecx, dword ptr [esi + 0x24] */
  ECX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c62a54 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62a59 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62a5b jle 0x11c62a66 */
  if ((C.zf||C.sf!=C.of)) goto L_11c62a66;
  /* 11c62a5d pop edi */
  EDI = (pop32());
  /* 11c62a5e pop esi */
  ESI = (pop32());
  /* 11c62a5f pop ebp */
  EBP = (pop32());
  /* 11c62a60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c62a63 pop ebx */
  EBX = (pop32());
  /* 11c62a64 pop ecx */
  ECX = (pop32());
  /* 11c62a65 ret  */
  ESPCHK(0x11c62a30u, _esp0);
  ESP += 4; return;
L_11c62a66:;
  /* 11c62a66 mov ecx, esi */
  ECX = (ESI);
  /* 11c62a68 call 0x11c62a10 */
  push32(0x11c62a6du); f_11c62a10();
  /* 11c62a6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62a6f je 0x11c62b0d */
  if (C.zf) goto L_11c62b0d;
  /* 11c62a75 lea ebp, [esi + 4] */
  EBP = ((uint32_t)(ESI + 0x4));
  /* 11c62a78 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62a79 call dword ptr [0x11c6e128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e128))), 0x11c62a7fu);
  /* 11c62a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62a82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62a84 je 0x11c62b0d */
  if (C.zf) goto L_11c62b0d;
  /* 11c62a8a mov eax, dword ptr [esi + 0x54] */
  EAX = (r32((uint32_t)(ESI + 0x54)));
  /* 11c62a8d mov ecx, dword ptr [esi + 0x50] */
  ECX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c62a90 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62a92 jl 0x11c62a9f */
  if ((C.sf!=C.of)) goto L_11c62a9f;
  /* 11c62a94 mov edi, ebx */
  EDI = (EBX);
  /* 11c62a96 mov dword ptr [esi + 0x54], 0 */
  w32((uint32_t)(ESI + 0x54), (0x0u));
  /* 11c62a9d jmp 0x11c62aa3 */
  goto L_11c62aa3;
L_11c62a9f:;
  /* 11c62a9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c62aa0 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
L_11c62aa3:;
  /* 11c62aa3 mov ebx, dword ptr [0x11c6e198] */
  EBX = (r32((uint32_t)(0x11c6e198)));
  /* 11c62aa9 call ebx */
  call_ind((uint32_t)(EBX), 0x11c62aabu);
  /* 11c62aab cmp eax, dword ptr [esi + 0x60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62aae jle 0x11c62b0d */
  if ((C.zf||C.sf!=C.of)) goto L_11c62b0d;
  /* 11c62ab0 call ebx */
  call_ind((uint32_t)(EBX), 0x11c62ab2u);
  /* 11c62ab2 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
  /* 11c62ab5 call 0x11c63ff9 */
  push32(0x11c62abau); f_11c63ff9();
  /* 11c62aba mov ecx, dword ptr [esi + 0x34] */
  ECX = (r32((uint32_t)(ESI + 0x34)));
  /* 11c62abd mov ebx, dword ptr [0x11c6e12c] */
  EBX = (r32((uint32_t)(0x11c6e12c)));
  /* 11c62ac3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c62ac8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62aca jl 0x11c62ae4 */
  if ((C.sf!=C.of)) goto L_11c62ae4;
  /* 11c62acc push 3 */
  push32((uint32_t)(0x3u));
  /* 11c62ace lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11c62ad1 push edi */
  push32((uint32_t)(EDI));
  /* 11c62ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11c62ad3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62ad4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c62ad6u);
  /* 11c62ad6 mov ecx, dword ptr [esi + 0x30] */
  ECX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c62ad9 mov eax, dword ptr [esi + 0x60] */
  EAX = (r32((uint32_t)(ESI + 0x60)));
  /* 11c62adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62adf add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62ae1 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
L_11c62ae4:;
  /* 11c62ae4 call 0x11c63ff9 */
  push32(0x11c62ae9u); f_11c63ff9();
  /* 11c62ae9 mov ecx, dword ptr [esi + 0x48] */
  ECX = (r32((uint32_t)(ESI + 0x48)));
  /* 11c62aec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c62af1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62af3 jl 0x11c62b0d */
  if ((C.sf!=C.of)) goto L_11c62b0d;
  /* 11c62af5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c62af7 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 11c62afa push edi */
  push32((uint32_t)(EDI));
  /* 11c62afb push edx */
  push32((uint32_t)(EDX));
  /* 11c62afc push ebp */
  push32((uint32_t)(EBP));
  /* 11c62afd call ebx */
  call_ind((uint32_t)(EBX), 0x11c62affu);
  /* 11c62aff mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c62b02 mov ecx, dword ptr [esi + 0x60] */
  ECX = (r32((uint32_t)(ESI + 0x60)));
  /* 11c62b05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b08 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b0a mov dword ptr [esi + 0x60], ecx */
  w32((uint32_t)(ESI + 0x60), (ECX));
L_11c62b0d:;
  /* 11c62b0d pop edi */
  EDI = (pop32());
  /* 11c62b0e pop esi */
  ESI = (pop32());
  /* 11c62b0f pop ebp */
  EBP = (pop32());
  /* 11c62b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c62b12 pop ebx */
  EBX = (pop32());
  /* 11c62b13 pop ecx */
  ECX = (pop32());
  /* 11c62b14 ret  */
  ESPCHK(0x11c62a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x11c62b20 (14 bytes, 5 insns) */
void f_11c62b20(void) {
  FTRACE(0x11c62b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62b20 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62b24 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c62b2au);
  /* 11c62b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b2d ret  */
  ESPCHK(0x11c62b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x11c62b30 (43 bytes, 18 insns) */
void f_11c62b30(void) {
  FTRACE(0x11c62b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62b30 push esi */
  push32((uint32_t)(ESI));
  /* 11c62b31 mov esi, ecx */
  ESI = (ECX);
  /* 11c62b33 call 0x11c62a10 */
  push32(0x11c62b38u); f_11c62a10();
  /* 11c62b38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62b3a je 0x11c62b57 */
  if (C.zf) goto L_11c62b57;
  /* 11c62b3c lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11c62b3f push eax */
  push32((uint32_t)(EAX));
  /* 11c62b40 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c62b46u);
  /* 11c62b46 mov ecx, dword ptr [esi + 0x58] */
  ECX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c62b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b4c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62b4e jl 0x11c62b57 */
  if ((C.sf!=C.of)) goto L_11c62b57;
  /* 11c62b50 mov eax, 1 */
  EAX = (0x1u);
  /* 11c62b55 pop esi */
  ESI = (pop32());
  /* 11c62b56 ret  */
  ESPCHK(0x11c62b30u, _esp0);
  ESP += 4; return;
L_11c62b57:;
  /* 11c62b57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c62b59 pop esi */
  ESI = (pop32());
  /* 11c62b5a ret  */
  ESPCHK(0x11c62b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b60 @ 0x11c62b60 (42 bytes, 18 insns) */
void f_11c62b60(void) {
  FTRACE(0x11c62b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62b60 push esi */
  push32((uint32_t)(ESI));
  /* 11c62b61 mov esi, ecx */
  ESI = (ECX);
  /* 11c62b63 push edi */
  push32((uint32_t)(EDI));
  /* 11c62b64 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c62b67 push edi */
  push32((uint32_t)(EDI));
  /* 11c62b68 call dword ptr [0x11c6e1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f8))), 0x11c62b6eu);
  /* 11c62b6e lea eax, [esi + 0x6c] */
  EAX = ((uint32_t)(ESI + 0x6c));
  /* 11c62b71 push eax */
  push32((uint32_t)(EAX));
  /* 11c62b72 push edi */
  push32((uint32_t)(EDI));
  /* 11c62b73 call dword ptr [0x11c6e124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e124))), 0x11c62b79u);
  /* 11c62b79 mov ecx, dword ptr [esi + 0x5c] */
  ECX = (r32((uint32_t)(ESI + 0x5c)));
  /* 11c62b7c mov eax, dword ptr [esi + 0x58] */
  EAX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c62b7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b82 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62b84 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
  /* 11c62b87 pop edi */
  EDI = (pop32());
  /* 11c62b88 pop esi */
  ESI = (pop32());
  /* 11c62b89 ret  */
  ESPCHK(0x11c62b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x11c62b90 (94 bytes, 35 insns) */
void f_11c62b90(void) {
  FTRACE(0x11c62b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62b90 push esi */
  push32((uint32_t)(ESI));
  /* 11c62b91 mov esi, ecx */
  ESI = (ECX);
  /* 11c62b93 call 0x11c62a10 */
  push32(0x11c62b98u); f_11c62a10();
  /* 11c62b98 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62b9a je 0x11c62bec */
  if (C.zf) goto L_11c62bec;
  /* 11c62b9c mov ecx, esi */
  ECX = (ESI);
  /* 11c62b9e call 0x11c62a30 */
  push32(0x11c62ba3u); f_11c62a30();
  /* 11c62ba3 mov ecx, esi */
  ECX = (ESI);
  /* 11c62ba5 call 0x11c62b30 */
  push32(0x11c62baau); f_11c62b30();
  /* 11c62baa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62bac je 0x11c62bec */
  if (C.zf) goto L_11c62bec;
  /* 11c62bae mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c62bb0 push eax */
  push32((uint32_t)(EAX));
  /* 11c62bb1 call 0x11c61a50 */
  push32(0x11c62bb6u); f_11c61a50();
  /* 11c62bb6 lea ecx, [esi + 0x1c] */
  ECX = ((uint32_t)(ESI + 0x1c));
  /* 11c62bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62bbb push ecx */
  push32((uint32_t)(ECX));
  /* 11c62bbc call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c62bc2u);
  /* 11c62bc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62bc7 call 0x11c63ff9 */
  push32(0x11c62bccu); f_11c63ff9();
  /* 11c62bcc push eax */
  push32((uint32_t)(EAX));
  /* 11c62bcd mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c62bcf lea edx, [esi + 0x64] */
  EDX = ((uint32_t)(ESI + 0x64));
  /* 11c62bd2 push edx */
  push32((uint32_t)(EDX));
  /* 11c62bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11c62bd4 call dword ptr [0x11c6e1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e4))), 0x11c62bdau);
  /* 11c62bda mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c62bdc push ecx */
  push32((uint32_t)(ECX));
  /* 11c62bdd call 0x11c61a90 */
  push32(0x11c62be2u); f_11c61a90();
  /* 11c62be2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62be5 mov ecx, esi */
  ECX = (ESI);
  /* 11c62be7 call 0x11c62b60 */
  push32(0x11c62becu); f_11c62b60();
L_11c62bec:;
  /* 11c62bec pop esi */
  ESI = (pop32());
  /* 11c62bed ret  */
  ESPCHK(0x11c62b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf0 @ 0x11c62bf0 (24 bytes, 9 insns) */
void f_11c62bf0(void) {
  FTRACE(0x11c62bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62bf0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11c62bf5 mov esi, ecx */
  ESI = (ECX);
  /* 11c62bf7 push eax */
  push32((uint32_t)(EAX));
  /* 11c62bf8 call 0x11c629f0 */
  push32(0x11c62bfdu); f_11c629f0();
  /* 11c62bfd mov ecx, esi */
  ECX = (ESI);
  /* 11c62bff call 0x11c62b90 */
  push32(0x11c62c04u); f_11c62b90();
  /* 11c62c04 pop esi */
  ESI = (pop32());
  /* 11c62c05 ret 4 */
  ESPCHK(0x11c62bf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002c10 @ 0x11c62c10 (75 bytes, 25 insns) */
void f_11c62c10(void) {
  FTRACE(0x11c62c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62c10 push esi */
  push32((uint32_t)(ESI));
  /* 11c62c11 mov esi, ecx */
  ESI = (ECX);
  /* 11c62c13 call 0x11c62b30 */
  push32(0x11c62c18u); f_11c62b30();
  /* 11c62c18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62c1a je 0x11c62c50 */
  if (C.zf) goto L_11c62c50;
  /* 11c62c1c call 0x11c63ff9 */
  push32(0x11c62c21u); f_11c63ff9();
  /* 11c62c21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c62c26 cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62c2b jge 0x11c62c44 */
  if ((C.sf==C.of)) goto L_11c62c44;
  /* 11c62c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c62c31 mov ecx, esi */
  ECX = (ESI);
  /* 11c62c33 push eax */
  push32((uint32_t)(EAX));
  /* 11c62c34 call 0x11c629f0 */
  push32(0x11c62c39u); f_11c629f0();
  /* 11c62c39 mov ecx, esi */
  ECX = (ESI);
  /* 11c62c3b call 0x11c62b90 */
  push32(0x11c62c40u); f_11c62b90();
  /* 11c62c40 pop esi */
  ESI = (pop32());
  /* 11c62c41 ret 8 */
  ESPCHK(0x11c62c10u, _esp0);
  ESP += 12; return;
L_11c62c44:;
  /* 11c62c44 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c62c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62c49 mov ecx, esi */
  ECX = (ESI);
  /* 11c62c4b call 0x11c629f0 */
  push32(0x11c62c50u); f_11c629f0();
L_11c62c50:;
  /* 11c62c50 mov ecx, esi */
  ECX = (ESI);
  /* 11c62c52 call 0x11c62b90 */
  push32(0x11c62c57u); f_11c62b90();
  /* 11c62c57 pop esi */
  ESI = (pop32());
  /* 11c62c58 ret 8 */
  ESPCHK(0x11c62c10u, _esp0);
  ESP += 12; return;
}

/* FUN_10002c60 @ 0x11c62c60 (13 bytes, 3 insns) */
void f_11c62c60(void) {
  FTRACE(0x11c62c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62c60 mov eax, ecx */
  EAX = (ECX);
  /* 11c62c62 mov dword ptr [eax + 0x320], 0 */
  w32((uint32_t)(EAX + 0x320), (0x0u));
  /* 11c62c6c ret  */
  ESPCHK(0x11c62c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x11c62c70 (46 bytes, 15 insns) */
void f_11c62c70(void) {
  FTRACE(0x11c62c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62c70 mov eax, dword ptr [ecx + 0x320] */
  EAX = (r32((uint32_t)(ECX + 0x320)));
  /* 11c62c76 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62c79 jne 0x11c62c80 */
  if (!C.zf) goto L_11c62c80;
  /* 11c62c7b xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c62c7d ret 4 */
  ESPCHK(0x11c62c70u, _esp0);
  ESP += 8; return;
L_11c62c80:;
  /* 11c62c80 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11c62c83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c62c84 mov dword ptr [ecx + 0x320], eax */
  w32((uint32_t)(ECX + 0x320), (EAX));
  /* 11c62c8a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62c8e push eax */
  push32((uint32_t)(EAX));
  /* 11c62c8f push edx */
  push32((uint32_t)(EDX));
  /* 11c62c90 call dword ptr [0x11c6e1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1c8))), 0x11c62c96u);
  /* 11c62c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62c99 mov al, 1 */
  AL = (0x1u);
  /* 11c62c9b ret 4 */
  ESPCHK(0x11c62c70u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ca0 @ 0x11c62ca0 (10 bytes, 3 insns) */
void f_11c62ca0(void) {
  FTRACE(0x11c62ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62ca0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62ca4 lea eax, [ecx + eax*8] */
  EAX = ((uint32_t)(ECX + EAX*8));
  /* 11c62ca7 ret 4 */
  ESPCHK(0x11c62ca0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002d40 @ 0x11c62d40 (57 bytes, 17 insns) */
void f_11c62d40(void) {
  FTRACE(0x11c62d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62d40 push esi */
  push32((uint32_t)(ESI));
  /* 11c62d41 mov esi, dword ptr [0x11c6e1cc] */
  ESI = (r32((uint32_t)(0x11c6e1cc)));
  /* 11c62d47 push 0xf424 */
  push32((uint32_t)(0xf424u));
  /* 11c62d4c push 0x11c74110 */
  push32((uint32_t)(0x11c74110u));
  /* 11c62d51 call esi */
  call_ind((uint32_t)(ESI), 0x11c62d53u);
  /* 11c62d53 push 0x294 */
  push32((uint32_t)(0x294u));
  /* 11c62d58 push 0x11c73e00 */
  push32((uint32_t)(0x11c73e00u));
  /* 11c62d5d call esi */
  call_ind((uint32_t)(ESI), 0x11c62d5fu);
  /* 11c62d5f push 0x3cf0 */
  push32((uint32_t)(0x3cf0u));
  /* 11c62d64 push 0x11c83af8 */
  push32((uint32_t)(0x11c83af8u));
  /* 11c62d69 call esi */
  call_ind((uint32_t)(ESI), 0x11c62d6bu);
  /* 11c62d6b push 4 */
  push32((uint32_t)(0x4u));
  /* 11c62d6d push 0x11c87808 */
  push32((uint32_t)(0x11c87808u));
  /* 11c62d72 call esi */
  call_ind((uint32_t)(ESI), 0x11c62d74u);
  /* 11c62d74 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62d77 pop esi */
  ESI = (pop32());
  /* 11c62d78 ret  */
  ESPCHK(0x11c62d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d80 @ 0x11c62d80 (40 bytes, 16 insns) */
void f_11c62d80(void) {
  FTRACE(0x11c62d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62d80 push esi */
  push32((uint32_t)(ESI));
  /* 11c62d81 mov esi, ecx */
  ESI = (ECX);
  /* 11c62d83 push edi */
  push32((uint32_t)(EDI));
  /* 11c62d84 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c62d87 mov dword ptr [esi], 0 */
  w32((uint32_t)(ESI), (0x0u));
  /* 11c62d8d push eax */
  push32((uint32_t)(EAX));
  /* 11c62d8e call dword ptr [0x11c6e1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d0))), 0x11c62d94u);
  /* 11c62d94 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11c62d97 mov ecx, 6 */
  ECX = (0x6u);
  /* 11c62d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c62d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62da1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c62da3 mov eax, esi */
  EAX = (ESI);
  /* 11c62da5 pop edi */
  EDI = (pop32());
  /* 11c62da6 pop esi */
  ESI = (pop32());
  /* 11c62da7 ret  */
  ESPCHK(0x11c62d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x11c62db0 (202 bytes, 78 insns) */
void f_11c62db0(void) {
  FTRACE(0x11c62db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62db0 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c62db3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c62db4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62db5 mov ebp, ecx */
  EBP = (ECX);
  /* 11c62db7 push esi */
  push32((uint32_t)(ESI));
  /* 11c62db8 push edi */
  push32((uint32_t)(EDI));
  /* 11c62db9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c62dbb lea edi, [ebp + 0x1c] */
  EDI = ((uint32_t)(EBP + 0x1c));
  /* 11c62dbe mov ebx, edi */
  EBX = (EDI);
L_11c62dc0:;
  /* 11c62dc0 push esi */
  push32((uint32_t)(ESI));
  /* 11c62dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62dc3 call dword ptr [0x11c6e138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e138))), 0x11c62dc9u);
  /* 11c62dc9 mov ecx, dword ptr [ebx] */
  ECX = (r32((uint32_t)(EBX)));
  /* 11c62dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62dce cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62dd0 jl 0x11c62e60 */
  if ((C.sf!=C.of)) goto L_11c62e60;
  /* 11c62dd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c62dd7 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62dda cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62ddd jl 0x11c62dc0 */
  if ((C.sf!=C.of)) goto L_11c62dc0;
  /* 11c62ddf mov ebx, dword ptr [0x11c6e16c] */
  EBX = (r32((uint32_t)(0x11c6e16c)));
  /* 11c62de5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c62de7:;
  /* 11c62de7 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c62de9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c62deb push eax */
  push32((uint32_t)(EAX));
  /* 11c62dec push esi */
  push32((uint32_t)(ESI));
  /* 11c62ded push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62def call ebx */
  call_ind((uint32_t)(EBX), 0x11c62df1u);
  /* 11c62df1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62df4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c62df5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62df8 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62dfb jl 0x11c62de7 */
  if ((C.sf!=C.of)) goto L_11c62de7;
  /* 11c62dfd lea esi, [ebp + 0xc] */
  ESI = ((uint32_t)(EBP + 0xc));
  /* 11c62e00 call 0x11c63ff9 */
  push32(0x11c62e05u); f_11c63ff9();
  /* 11c62e05 mov ecx, dword ptr [esp + 0x40] */
  ECX = (r32((uint32_t)(ESP + 0x40)));
  /* 11c62e09 mov dl, byte ptr [ebp] */
  DL = (r8((uint32_t)(EBP)));
  /* 11c62e0c push eax */
  push32((uint32_t)(EAX));
  /* 11c62e0d push ecx */
  push32((uint32_t)(ECX));
  /* 11c62e0e add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e11 push edx */
  push32((uint32_t)(EDX));
  /* 11c62e12 push ebp */
  push32((uint32_t)(EBP));
  /* 11c62e13 push 0x11c73df8 */
  push32((uint32_t)(0x11c73df8u));
  /* 11c62e18 push esi */
  push32((uint32_t)(ESI));
  /* 11c62e19 call dword ptr [0x11c6e11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e11c))), 0x11c62e1fu);
  /* 11c62e1f lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 11c62e23 push eax */
  push32((uint32_t)(EAX));
  /* 11c62e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62e26 push esi */
  push32((uint32_t)(ESI));
  /* 11c62e27 call dword ptr [0x11c6e200] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e200))), 0x11c62e2du);
  /* 11c62e2d mov edi, dword ptr [esp + 0x48] */
  EDI = (r32((uint32_t)(ESP + 0x48)));
  /* 11c62e31 mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 11c62e35 mov eax, 0x64 */
  EAX = (0x64u);
  /* 11c62e3a lea ecx, [esp + 0x34] */
  ECX = ((uint32_t)(ESP + 0x34));
  /* 11c62e3e add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e42 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62e43 mov dword ptr [esp + 0x4c], edi */
  w32((uint32_t)(ESP + 0x4c), (EDI));
  /* 11c62e47 mov dword ptr [esp + 0x50], esi */
  w32((uint32_t)(ESP + 0x50), (ESI));
  /* 11c62e4b call dword ptr [0x11c6e120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e120))), 0x11c62e51u);
  /* 11c62e51 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e54 mov al, 1 */
  AL = (0x1u);
  /* 11c62e56 pop edi */
  EDI = (pop32());
  /* 11c62e57 pop esi */
  ESI = (pop32());
  /* 11c62e58 pop ebp */
  EBP = (pop32());
  /* 11c62e59 pop ebx */
  EBX = (pop32());
  /* 11c62e5a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e5d ret 4 */
  ESPCHK(0x11c62db0u, _esp0);
  ESP += 8; return;
L_11c62e60:;
  /* 11c62e60 push 0x11c70600 */
  push32((uint32_t)(0x11c70600u));
  /* 11c62e65 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c62e6bu);
  /* 11c62e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e6e xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c62e70 pop edi */
  EDI = (pop32());
  /* 11c62e71 pop esi */
  ESI = (pop32());
  /* 11c62e72 pop ebp */
  EBP = (pop32());
  /* 11c62e73 pop ebx */
  EBX = (pop32());
  /* 11c62e74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62e77 ret 4 */
  ESPCHK(0x11c62db0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002e80 @ 0x11c62e80 (67 bytes, 29 insns) */
void f_11c62e80(void) {
  FTRACE(0x11c62e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62e80 push esi */
  push32((uint32_t)(ESI));
  /* 11c62e81 mov esi, ecx */
  ESI = (ECX);
  /* 11c62e83 push edi */
  push32((uint32_t)(EDI));
  /* 11c62e84 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c62e88 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c62e8a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62e8c jne 0x11c62e95 */
  if (!C.zf) goto L_11c62e95;
  /* 11c62e8e pop edi */
  EDI = (pop32());
  /* 11c62e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c62e91 pop esi */
  ESI = (pop32());
  /* 11c62e92 ret 4 */
  ESPCHK(0x11c62e80u, _esp0);
  ESP += 8; return;
L_11c62e95:;
  /* 11c62e95 push eax */
  push32((uint32_t)(EAX));
  /* 11c62e96 call 0x11c61a50 */
  push32(0x11c62e9bu); f_11c61a50();
  /* 11c62e9b lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c62e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62ea0 push eax */
  push32((uint32_t)(EAX));
  /* 11c62ea1 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c62ea7u);
  /* 11c62ea7 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c62ea9 push edi */
  push32((uint32_t)(EDI));
  /* 11c62eaa push ecx */
  push32((uint32_t)(ECX));
  /* 11c62eab call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c62eb1u);
  /* 11c62eb1 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c62eb3 push edx */
  push32((uint32_t)(EDX));
  /* 11c62eb4 call 0x11c61a90 */
  push32(0x11c62eb9u); f_11c61a90();
  /* 11c62eb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62ebc mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c62ebe pop edi */
  EDI = (pop32());
  /* 11c62ebf pop esi */
  ESI = (pop32());
  /* 11c62ec0 ret 4 */
  ESPCHK(0x11c62e80u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ed0 @ 0x11c62ed0 (45 bytes, 13 insns) */
void f_11c62ed0(void) {
  FTRACE(0x11c62ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62ed0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62ed4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c62ed8 mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11c62edb mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c62edf mov dword ptr [ecx + 0x20], edx */
  w32((uint32_t)(ECX + 0x20), (EDX));
  /* 11c62ee2 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c62ee6 mov dword ptr [ecx + 0x24], eax */
  w32((uint32_t)(ECX + 0x24), (EAX));
  /* 11c62ee9 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c62eed mov dword ptr [ecx + 0x28], edx */
  w32((uint32_t)(ECX + 0x28), (EDX));
  /* 11c62ef0 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c62ef4 mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11c62ef7 mov dword ptr [ecx + 0x30], edx */
  w32((uint32_t)(ECX + 0x30), (EDX));
  /* 11c62efa ret 0x18 */
  ESPCHK(0x11c62ed0u, _esp0);
  ESP += 28; return;
}

/* FUN_10002f00 @ 0x11c62f00 (21 bytes, 7 insns) */
void f_11c62f00(void) {
  FTRACE(0x11c62f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62f00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c62f04 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f07 push eax */
  push32((uint32_t)(EAX));
  /* 11c62f08 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62f09 call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c62f0fu);
  /* 11c62f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f12 ret 4 */
  ESPCHK(0x11c62f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10002f20 @ 0x11c62f20 (23 bytes, 9 insns) */
void f_11c62f20(void) {
  FTRACE(0x11c62f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62f20 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11c62f24 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c62f2au);
  /* 11c62f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c62f2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c62f31 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c62f34 mov al, cl */
  AL = (CL);
  /* 11c62f36 ret  */
  ESPCHK(0x11c62f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x11c62f40 (127 bytes, 48 insns) */
void f_11c62f40(void) {
  FTRACE(0x11c62f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62f40 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c62f43 push esi */
  push32((uint32_t)(ESI));
  /* 11c62f44 push edi */
  push32((uint32_t)(EDI));
  /* 11c62f45 mov edi, ecx */
  EDI = (ECX);
  /* 11c62f47 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c62f49 lea esi, [eax*8 + 0x11c73d78] */
  ESI = ((uint32_t)(EAX*8 + 0x11c73d78));
  /* 11c62f50 mov eax, dword ptr [eax*8 + 0x11c73d7c] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11c73d7c)));
  /* 11c62f57 cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62f5c je 0x11c62f68 */
  if (C.zf) goto L_11c62f68;
  /* 11c62f5e push esi */
  push32((uint32_t)(ESI));
  /* 11c62f5f call dword ptr [0x11c6e1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d0))), 0x11c62f65u);
  /* 11c62f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c62f68:;
  /* 11c62f68 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c62f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62f6c push esi */
  push32((uint32_t)(ESI));
  /* 11c62f6d push ecx */
  push32((uint32_t)(ECX));
  /* 11c62f6e call dword ptr [0x11c6e1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a4))), 0x11c62f74u);
  /* 11c62f74 push esi */
  push32((uint32_t)(ESI));
  /* 11c62f75 call dword ptr [0x11c6e15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e15c))), 0x11c62f7bu);
  /* 11c62f7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c62f81 jne 0x11c62fb7 */
  if (!C.zf) goto L_11c62fb7;
  /* 11c62f83 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 11c62f87 add edi, 0xc */
  { uint32_t _a=(EDI),_b=(0xcu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62f8a push edx */
  push32((uint32_t)(EDX));
  /* 11c62f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62f8d push edi */
  push32((uint32_t)(EDI));
  /* 11c62f8e mov edi, dword ptr [0x11c6e200] */
  EDI = (r32((uint32_t)(0x11c6e200)));
  /* 11c62f94 call edi */
  call_ind((uint32_t)(EDI), 0x11c62f96u);
  /* 11c62f96 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 11c62f9a push eax */
  push32((uint32_t)(EAX));
  /* 11c62f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c62f9d push esi */
  push32((uint32_t)(ESI));
  /* 11c62f9e call edi */
  call_ind((uint32_t)(EDI), 0x11c62fa0u);
  /* 11c62fa0 mov cx, word ptr [esp + 0x20] */
  CX = (r16((uint32_t)(ESP + 0x20)));
  /* 11c62fa5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62fa8 cmp cx, word ptr [esp + 0x34] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(ESP + 0x34))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c62fad jne 0x11c62fb7 */
  if (!C.zf) goto L_11c62fb7;
  /* 11c62faf pop edi */
  EDI = (pop32());
  /* 11c62fb0 mov al, 1 */
  AL = (0x1u);
  /* 11c62fb2 pop esi */
  ESI = (pop32());
  /* 11c62fb3 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62fb6 ret  */
  ESPCHK(0x11c62f40u, _esp0);
  ESP += 4; return;
L_11c62fb7:;
  /* 11c62fb7 pop edi */
  EDI = (pop32());
  /* 11c62fb8 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c62fba pop esi */
  ESI = (pop32());
  /* 11c62fbb add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c62fbe ret  */
  ESPCHK(0x11c62f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x11c62fc0 (16 bytes, 7 insns) */
void f_11c62fc0(void) {
  FTRACE(0x11c62fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62fc0 push esi */
  push32((uint32_t)(ESI));
  /* 11c62fc1 mov esi, ecx */
  ESI = (ECX);
  /* 11c62fc3 call 0x11c62d80 */
  push32(0x11c62fc8u); f_11c62d80();
  /* 11c62fc8 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11c62fcc mov eax, esi */
  EAX = (ESI);
  /* 11c62fce pop esi */
  ESI = (pop32());
  /* 11c62fcf ret  */
  ESPCHK(0x11c62fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x11c62fd0 (58 bytes, 23 insns) */
void f_11c62fd0(void) {
  FTRACE(0x11c62fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c62fd0 push esi */
  push32((uint32_t)(ESI));
  /* 11c62fd1 mov esi, ecx */
  ESI = (ECX);
  /* 11c62fd3 call 0x11c62f20 */
  push32(0x11c62fd8u); f_11c62f20();
  /* 11c62fd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62fda je 0x11c63004 */
  if (C.zf) goto L_11c63004;
  /* 11c62fdc mov ecx, esi */
  ECX = (ESI);
  /* 11c62fde call 0x11c62f40 */
  push32(0x11c62fe3u); f_11c62f40();
  /* 11c62fe3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62fe5 je 0x11c63000 */
  if (C.zf) goto L_11c63000;
  /* 11c62fe7 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c62feb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62fed je 0x11c63000 */
  if (C.zf) goto L_11c63000;
  /* 11c62fef mov al, byte ptr [esi + 0x34] */
  AL = (r8((uint32_t)(ESI + 0x34)));
  /* 11c62ff2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c62ff4 je 0x11c63004 */
  if (C.zf) goto L_11c63004;
  /* 11c62ff6 mov byte ptr [esi + 0x34], 0 */
  w8((uint32_t)(ESI + 0x34), (0x0u));
  /* 11c62ffa mov al, 1 */
  AL = (0x1u);
  /* 11c62ffc pop esi */
  ESI = (pop32());
  /* 11c62ffd ret 4 */
  ESPCHK(0x11c62fd0u, _esp0);
  ESP += 8; return;
L_11c63000:;
  /* 11c63000 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
L_11c63004:;
  /* 11c63004 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c63006 pop esi */
  ESI = (pop32());
  /* 11c63007 ret 4 */
  ESPCHK(0x11c62fd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003010 @ 0x11c63010 (15 bytes, 5 insns) */
void f_11c63010(void) {
  FTRACE(0x11c63010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63010 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63014 push eax */
  push32((uint32_t)(EAX));
  /* 11c63015 call 0x11c62db0 */
  push32(0x11c6301au); f_11c62db0();
  /* 11c6301a mov al, 1 */
  AL = (0x1u);
  /* 11c6301c ret 4 */
  ESPCHK(0x11c63010u, _esp0);
  ESP += 8; return;
}

/* FUN_10003020 @ 0x11c63020 (43 bytes, 17 insns) */
void f_11c63020(void) {
  FTRACE(0x11c63020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63020 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63024 push esi */
  push32((uint32_t)(ESI));
  /* 11c63025 mov esi, ecx */
  ESI = (ECX);
  /* 11c63027 push edi */
  push32((uint32_t)(EDI));
  /* 11c63028 push eax */
  push32((uint32_t)(EAX));
  /* 11c63029 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11c6302c push edi */
  push32((uint32_t)(EDI));
  /* 11c6302d call dword ptr [0x11c6e1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1b4))), 0x11c63033u);
  /* 11c63033 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11c63038 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6303b push edi */
  push32((uint32_t)(EDI));
  /* 11c6303c push esi */
  push32((uint32_t)(ESI));
  /* 11c6303d call dword ptr [0x11c6e1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e8))), 0x11c63043u);
  /* 11c63043 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63046 pop edi */
  EDI = (pop32());
  /* 11c63047 pop esi */
  ESI = (pop32());
  /* 11c63048 ret 4 */
  ESPCHK(0x11c63020u, _esp0);
  ESP += 8; return;
}

/* FUN_10003050 @ 0x11c63050 (16 bytes, 5 insns) */
void f_11c63050(void) {
  FTRACE(0x11c63050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63050 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63054 add ecx, 0x7c */
  { uint32_t _a=(ECX),_b=(0x7cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63057 push eax */
  push32((uint32_t)(EAX));
  /* 11c63058 call 0x11c62c70 */
  push32(0x11c6305du); f_11c62c70();
  /* 11c6305d ret 4 */
  ESPCHK(0x11c63050u, _esp0);
  ESP += 8; return;
}

/* FUN_10003060 @ 0x11c63060 (45 bytes, 13 insns) */
void f_11c63060(void) {
  FTRACE(0x11c63060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63060 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63064 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c63068 mov dword ptr [ecx + 0x3c], eax */
  w32((uint32_t)(ECX + 0x3c), (EAX));
  /* 11c6306b mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6306f mov dword ptr [ecx + 0x40], edx */
  w32((uint32_t)(ECX + 0x40), (EDX));
  /* 11c63072 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c63076 mov dword ptr [ecx + 0x44], eax */
  w32((uint32_t)(ECX + 0x44), (EAX));
  /* 11c63079 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c6307d mov dword ptr [ecx + 0x48], edx */
  w32((uint32_t)(ECX + 0x48), (EDX));
  /* 11c63080 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c63084 mov dword ptr [ecx + 0x4c], eax */
  w32((uint32_t)(ECX + 0x4c), (EAX));
  /* 11c63087 mov dword ptr [ecx + 0x50], edx */
  w32((uint32_t)(ECX + 0x50), (EDX));
  /* 11c6308a ret 0x18 */
  ESPCHK(0x11c63060u, _esp0);
  ESP += 28; return;
}

/* FUN_10003090 @ 0x11c63090 (45 bytes, 13 insns) */
void f_11c63090(void) {
  FTRACE(0x11c63090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63090 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63094 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c63098 mov dword ptr [ecx + 0x54], eax */
  w32((uint32_t)(ECX + 0x54), (EAX));
  /* 11c6309b mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6309f mov dword ptr [ecx + 0x58], edx */
  w32((uint32_t)(ECX + 0x58), (EDX));
  /* 11c630a2 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c630a6 mov dword ptr [ecx + 0x5c], eax */
  w32((uint32_t)(ECX + 0x5c), (EAX));
  /* 11c630a9 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c630ad mov dword ptr [ecx + 0x60], edx */
  w32((uint32_t)(ECX + 0x60), (EDX));
  /* 11c630b0 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c630b4 mov dword ptr [ecx + 0x64], eax */
  w32((uint32_t)(ECX + 0x64), (EAX));
  /* 11c630b7 mov dword ptr [ecx + 0x68], edx */
  w32((uint32_t)(ECX + 0x68), (EDX));
  /* 11c630ba ret 0x18 */
  ESPCHK(0x11c63090u, _esp0);
  ESP += 28; return;
}

/* FUN_100030c0 @ 0x11c630c0 (126 bytes, 34 insns) */
void f_11c630c0(void) {
  FTRACE(0x11c630c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c630c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c630c1 push esi */
  push32((uint32_t)(ESI));
  /* 11c630c2 push edi */
  push32((uint32_t)(EDI));
  /* 11c630c3 mov esi, ecx */
  ESI = (ECX);
  /* 11c630c5 call 0x11c62fc0 */
  push32(0x11c630cau); f_11c62fc0();
  /* 11c630ca lea edi, [esi + 0x3d] */
  EDI = ((uint32_t)(ESI + 0x3d));
  /* 11c630cd mov ecx, edi */
  ECX = (EDI);
  /* 11c630cf call 0x11c62d80 */
  push32(0x11c630d4u); f_11c62d80();
  /* 11c630d4 lea ecx, [edi + 0x6c] */
  ECX = ((uint32_t)(EDI + 0x6c));
  /* 11c630d7 call 0x11c63bb0 */
  push32(0x11c630dcu); f_11c63bb0();
  /* 11c630dc lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
  /* 11c630e2 mov ebx, 0x64 */
  EBX = (0x64u);
L_11c630e7:;
  /* 11c630e7 mov ecx, edi */
  ECX = (EDI);
  /* 11c630e9 call 0x11c62d80 */
  push32(0x11c630eeu); f_11c62d80();
  /* 11c630ee add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c630f1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c630f2 jne 0x11c630e7 */
  if (!C.zf) goto L_11c630e7;
  /* 11c630f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c630f6 mov dword ptr [esi + 0x185a], 5 */
  w32((uint32_t)(ESI + 0x185a), (0x5u));
  /* 11c63100 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 11c63106 mov byte ptr [esi + 0x184d], al */
  w8((uint32_t)(ESI + 0x184d), (AL));
  /* 11c6310c mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 11c63112 mov dword ptr [esi + 0x1852], eax */
  w32((uint32_t)(ESI + 0x1852), (EAX));
  /* 11c63118 mov dword ptr [esi + 0x1856], eax */
  w32((uint32_t)(ESI + 0x1856), (EAX));
  /* 11c6311e lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 11c63124 push eax */
  push32((uint32_t)(EAX));
  /* 11c63125 mov dword ptr [esi + 0x185e], 0xa */
  w32((uint32_t)(ESI + 0x185e), (0xau));
  /* 11c6312f call dword ptr [0x11c6e1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1d0))), 0x11c63135u);
  /* 11c63135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63138 mov eax, esi */
  EAX = (ESI);
  /* 11c6313a pop edi */
  EDI = (pop32());
  /* 11c6313b pop esi */
  ESI = (pop32());
  /* 11c6313c pop ebx */
  EBX = (pop32());
  /* 11c6313d ret  */
  ESPCHK(0x11c630c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x11c63140 (21 bytes, 7 insns) */
void f_11c63140(void) {
  FTRACE(0x11c63140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63140 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63144 add ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63147 push eax */
  push32((uint32_t)(EAX));
  /* 11c63148 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63149 call dword ptr [0x11c6e1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a8))), 0x11c6314fu);
  /* 11c6314f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63152 ret 4 */
  ESPCHK(0x11c63140u, _esp0);
  ESP += 8; return;
}

/* FUN_10003160 @ 0x11c63160 (337 bytes, 125 insns) */
void f_11c63160(void) {
  FTRACE(0x11c63160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63160 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63163 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63164 mov ebx, dword ptr [0x11c6e138] */
  EBX = (r32((uint32_t)(0x11c6e138)));
  /* 11c6316a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6316b push esi */
  push32((uint32_t)(ESI));
  /* 11c6316c mov esi, ecx */
  ESI = (ECX);
  /* 11c6316e push edi */
  push32((uint32_t)(EDI));
  /* 11c6316f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c63171 lea ebp, [esi + 0x1c] */
  EBP = ((uint32_t)(ESI + 0x1c));
L_11c63174:;
  /* 11c63174 push edi */
  push32((uint32_t)(EDI));
  /* 11c63175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63177 call ebx */
  call_ind((uint32_t)(EBX), 0x11c63179u);
  /* 11c63179 mov ecx, dword ptr [ebp] */
  ECX = (r32((uint32_t)(EBP)));
  /* 11c6317c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6317f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63181 jl 0x11c63281 */
  if ((C.sf!=C.of)) goto L_11c63281;
  /* 11c63187 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c63188 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6318b cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6318e jl 0x11c63174 */
  if ((C.sf!=C.of)) goto L_11c63174;
  /* 11c63190 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c63192 lea eax, [esi + 0x35] */
  EAX = ((uint32_t)(ESI + 0x35));
  /* 11c63195 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63196 push eax */
  push32((uint32_t)(EAX));
  /* 11c63197 call dword ptr [0x11c6e164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e164))), 0x11c6319du);
  /* 11c6319d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c631a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c631a2 je 0x11c63299 */
  if (C.zf) goto L_11c63299;
  /* 11c631a8 mov ebp, dword ptr [0x11c6e16c] */
  EBP = (r32((uint32_t)(0x11c6e16c)));
  /* 11c631ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c631b0 lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
L_11c631b3:;
  /* 11c631b3 mov edx, dword ptr [ebx] */
  EDX = (r32((uint32_t)(EBX)));
  /* 11c631b5 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c631b7 push edx */
  push32((uint32_t)(EDX));
  /* 11c631b8 push edi */
  push32((uint32_t)(EDI));
  /* 11c631b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c631bb call ebp */
  call_ind((uint32_t)(EBP), 0x11c631bdu);
  /* 11c631bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c631c0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c631c1 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c631c4 cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c631c7 jl 0x11c631b3 */
  if ((C.sf!=C.of)) goto L_11c631b3;
  /* 11c631c9 mov edi, dword ptr [0x11c6e1d0] */
  EDI = (r32((uint32_t)(0x11c6e1d0)));
  /* 11c631cf lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11c631d3 push eax */
  push32((uint32_t)(EAX));
  /* 11c631d4 call edi */
  call_ind((uint32_t)(EDI), 0x11c631d6u);
  /* 11c631d6 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 11c631da push ecx */
  push32((uint32_t)(ECX));
  /* 11c631db call edi */
  call_ind((uint32_t)(EDI), 0x11c631ddu);
  /* 11c631dd mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c631df push edx */
  push32((uint32_t)(EDX));
  /* 11c631e0 call 0x11c61a50 */
  push32(0x11c631e5u); f_11c61a50();
  /* 11c631e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c631e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c631e9 push eax */
  push32((uint32_t)(EAX));
  /* 11c631ea lea eax, [esi + 0x35] */
  EAX = ((uint32_t)(ESI + 0x35));
  /* 11c631ed push eax */
  push32((uint32_t)(EAX));
  /* 11c631ee call dword ptr [0x11c6e158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e158))), 0x11c631f4u);
  /* 11c631f4 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c631f6 lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 11c631fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11c631fc push ecx */
  push32((uint32_t)(ECX));
  /* 11c631fd push edx */
  push32((uint32_t)(EDX));
  /* 11c631fe call dword ptr [0x11c6e1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a4))), 0x11c63204u);
  /* 11c63204 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c63206 push eax */
  push32((uint32_t)(EAX));
  /* 11c63207 call 0x11c61a50 */
  push32(0x11c6320cu); f_11c61a50();
  /* 11c6320c lea ecx, [esp + 0x48] */
  ECX = ((uint32_t)(ESP + 0x48));
  /* 11c63210 lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 11c63214 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63215 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63217 push edx */
  push32((uint32_t)(EDX));
  /* 11c63218 call dword ptr [0x11c6e200] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e200))), 0x11c6321eu);
  /* 11c6321e mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11c63222 lea ecx, [esp + 0x4c] */
  ECX = ((uint32_t)(ESP + 0x4c));
  /* 11c63226 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6322b push eax */
  push32((uint32_t)(EAX));
  /* 11c6322c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6322d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6322f call dword ptr [0x11c6e118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e118))), 0x11c63235u);
  /* 11c63235 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63237 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6323a lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11c6323d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6323f push edi */
  push32((uint32_t)(EDI));
  /* 11c63240 push edx */
  push32((uint32_t)(EDX));
  /* 11c63241 call dword ptr [0x11c6e1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ac))), 0x11c63247u);
  /* 11c63247 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c6324a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6324c push eax */
  push32((uint32_t)(EAX));
  /* 11c6324d lea ecx, [esp + 0x2c] */
  ECX = ((uint32_t)(ESP + 0x2c));
  /* 11c63251 push edi */
  push32((uint32_t)(EDI));
  /* 11c63252 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63253 call dword ptr [0x11c6e12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e12c))), 0x11c63259u);
  /* 11c63259 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6325c mov dword ptr [esi + 0x1845], 4 */
  w32((uint32_t)(ESI + 0x1845), (0x4u));
  /* 11c63266 mov byte ptr [esi + 0x184d], 1 */
  w8((uint32_t)(ESI + 0x184d), (0x1u));
  /* 11c6326d mov dword ptr [esi + 0x184e], 0 */
  w32((uint32_t)(ESI + 0x184e), (0x0u));
  /* 11c63277 pop edi */
  EDI = (pop32());
  /* 11c63278 pop esi */
  ESI = (pop32());
  /* 11c63279 pop ebp */
  EBP = (pop32());
  /* 11c6327a mov al, 1 */
  AL = (0x1u);
  /* 11c6327c pop ebx */
  EBX = (pop32());
  /* 11c6327d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63280 ret  */
  ESPCHK(0x11c63160u, _esp0);
  ESP += 4; return;
L_11c63281:;
  /* 11c63281 push 0x11c70600 */
  push32((uint32_t)(0x11c70600u));
  /* 11c63286 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c6328cu);
  /* 11c6328c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6328f xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c63291 pop edi */
  EDI = (pop32());
  /* 11c63292 pop esi */
  ESI = (pop32());
  /* 11c63293 pop ebp */
  EBP = (pop32());
  /* 11c63294 pop ebx */
  EBX = (pop32());
  /* 11c63295 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63298 ret  */
  ESPCHK(0x11c63160u, _esp0);
  ESP += 4; return;
L_11c63299:;
  /* 11c63299 push 0x11c70610 */
  push32((uint32_t)(0x11c70610u));
  /* 11c6329e call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c632a4u);
  /* 11c632a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c632a7 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c632a9 pop edi */
  EDI = (pop32());
  /* 11c632aa pop esi */
  ESI = (pop32());
  /* 11c632ab pop ebp */
  EBP = (pop32());
  /* 11c632ac pop ebx */
  EBX = (pop32());
  /* 11c632ad add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c632b0 ret  */
  ESPCHK(0x11c63160u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x11c632c0 (13 bytes, 3 insns) */
void f_11c632c0(void) {
  FTRACE(0x11c632c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c632c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c632c4 mov dword ptr [ecx + 0x3e1], eax */
  w32((uint32_t)(ECX + 0x3e1), (EAX));
  /* 11c632ca ret 4 */
  ESPCHK(0x11c632c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100032d0 @ 0x11c632d0 (21 bytes, 9 insns) */
void f_11c632d0(void) {
  FTRACE(0x11c632d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c632d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c632d1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c632d5 push edi */
  push32((uint32_t)(EDI));
  /* 11c632d6 lea edi, [ecx + 0x3d] */
  EDI = ((uint32_t)(ECX + 0x3d));
  /* 11c632d9 mov ecx, 0xe9 */
  ECX = (0xe9u);
  /* 11c632de rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c632e0 pop edi */
  EDI = (pop32());
  /* 11c632e1 pop esi */
  ESI = (pop32());
  /* 11c632e2 ret 4 */
  ESPCHK(0x11c632d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100032f0 @ 0x11c632f0 (13 bytes, 3 insns) */
void f_11c632f0(void) {
  FTRACE(0x11c632f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c632f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c632f4 mov dword ptr [ecx + 0x1841], eax */
  w32((uint32_t)(ECX + 0x1841), (EAX));
  /* 11c632fa ret 4 */
  ESPCHK(0x11c632f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003300 @ 0x11c63300 (87 bytes, 39 insns) */
void f_11c63300(void) {
  FTRACE(0x11c63300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63300 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63301 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63302 push esi */
  push32((uint32_t)(ESI));
  /* 11c63303 mov esi, ecx */
  ESI = (ECX);
  /* 11c63305 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c63307 push edi */
  push32((uint32_t)(EDI));
  /* 11c63308 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c6330e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63310 jle 0x11c63349 */
  if ((C.zf||C.sf!=C.of)) goto L_11c63349;
  /* 11c63312 mov ebp, dword ptr [0x11c6e1fc] */
  EBP = (r32((uint32_t)(0x11c6e1fc)));
  /* 11c63318 lea edi, [esi + 0x3f1] */
  EDI = ((uint32_t)(ESI + 0x3f1));
L_11c6331e:;
  /* 11c6331e lea ecx, [edi - 0xc] */
  ECX = ((uint32_t)(EDI + -0xc));
  /* 11c63321 call 0x11c62f20 */
  push32(0x11c63326u); f_11c62f20();
  /* 11c63326 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63328 je 0x11c6333b */
  if (C.zf) goto L_11c6333b;
  /* 11c6332a lea eax, [esi + 0x1839] */
  EAX = ((uint32_t)(ESI + 0x1839));
  /* 11c63330 push edi */
  push32((uint32_t)(EDI));
  /* 11c63331 push eax */
  push32((uint32_t)(EAX));
  /* 11c63332 call ebp */
  call_ind((uint32_t)(EBP), 0x11c63334u);
  /* 11c63334 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63337 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63339 je 0x11c63350 */
  if (C.zf) goto L_11c63350;
L_11c6333b:;
  /* 11c6333b mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c63341 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c63342 add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63345 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63347 jl 0x11c6331e */
  if ((C.sf!=C.of)) goto L_11c6331e;
L_11c63349:;
  /* 11c63349 pop edi */
  EDI = (pop32());
  /* 11c6334a pop esi */
  ESI = (pop32());
  /* 11c6334b pop ebp */
  EBP = (pop32());
  /* 11c6334c mov al, 1 */
  AL = (0x1u);
  /* 11c6334e pop ebx */
  EBX = (pop32());
  /* 11c6334f ret  */
  ESPCHK(0x11c63300u, _esp0);
  ESP += 4; return;
L_11c63350:;
  /* 11c63350 pop edi */
  EDI = (pop32());
  /* 11c63351 pop esi */
  ESI = (pop32());
  /* 11c63352 pop ebp */
  EBP = (pop32());
  /* 11c63353 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c63355 pop ebx */
  EBX = (pop32());
  /* 11c63356 ret  */
  ESPCHK(0x11c63300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x11c63360 (65 bytes, 32 insns) */
void f_11c63360(void) {
  FTRACE(0x11c63360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63360 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63361 push esi */
  push32((uint32_t)(ESI));
  /* 11c63362 push edi */
  push32((uint32_t)(EDI));
  /* 11c63363 mov edi, ecx */
  EDI = (ECX);
  /* 11c63365 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c63367 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c63369 mov eax, dword ptr [edi + 0x1835] */
  EAX = (r32((uint32_t)(EDI + 0x1835)));
  /* 11c6336f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63371 jle 0x11c6339b */
  if ((C.zf||C.sf!=C.of)) goto L_11c6339b;
  /* 11c63373 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63374 lea ebx, [edi + 0x3e5] */
  EBX = ((uint32_t)(EDI + 0x3e5));
L_11c6337a:;
  /* 11c6337a mov ecx, ebx */
  ECX = (EBX);
  /* 11c6337c call 0x11c62f20 */
  push32(0x11c63381u); f_11c62f20();
  /* 11c63381 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63383 je 0x11c63386 */
  if (C.zf) goto L_11c63386;
  /* 11c63385 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
L_11c63386:;
  /* 11c63386 mov eax, dword ptr [edi + 0x1835] */
  EAX = (r32((uint32_t)(EDI + 0x1835)));
  /* 11c6338c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6338d add ebx, 0x34 */
  { uint32_t _a=(EBX),_b=(0x34u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63390 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63392 jl 0x11c6337a */
  if ((C.sf!=C.of)) goto L_11c6337a;
  /* 11c63394 pop ebx */
  EBX = (pop32());
  /* 11c63395 pop edi */
  EDI = (pop32());
  /* 11c63396 mov eax, ebp */
  EAX = (EBP);
  /* 11c63398 pop esi */
  ESI = (pop32());
  /* 11c63399 pop ebp */
  EBP = (pop32());
  /* 11c6339a ret  */
  ESPCHK(0x11c63360u, _esp0);
  ESP += 4; return;
L_11c6339b:;
  /* 11c6339b pop edi */
  EDI = (pop32());
  /* 11c6339c mov eax, ebp */
  EAX = (EBP);
  /* 11c6339e pop esi */
  ESI = (pop32());
  /* 11c6339f pop ebp */
  EBP = (pop32());
  /* 11c633a0 ret  */
  ESPCHK(0x11c63360u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x11c633b0 (114 bytes, 43 insns) */
void f_11c633b0(void) {
  FTRACE(0x11c633b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c633b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c633b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c633b2 mov ebx, ecx */
  EBX = (ECX);
  /* 11c633b4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c633b5 push esi */
  push32((uint32_t)(ESI));
  /* 11c633b6 mov ebp, dword ptr [ebx + 0x3e5] */
  EBP = (r32((uint32_t)(EBX + 0x3e5)));
  /* 11c633bc lea esi, [ebx + 0x3e5] */
  ESI = ((uint32_t)(EBX + 0x3e5));
  /* 11c633c2 push edi */
  push32((uint32_t)(EDI));
  /* 11c633c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c633c4 mov dword ptr [esp + 0x14], ebp */
  w32((uint32_t)(ESP + 0x14), (EBP));
  /* 11c633c8 call 0x11c61a50 */
  push32(0x11c633cdu); f_11c61a50();
  /* 11c633cd mov eax, dword ptr [ebx + 0x1835] */
  EAX = (r32((uint32_t)(EBX + 0x1835)));
  /* 11c633d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c633d6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c633d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c633da jle 0x11c63405 */
  if ((C.zf||C.sf!=C.of)) goto L_11c63405;
  /* 11c633dc mov ebp, dword ptr [0x11c6e1f0] */
  EBP = (r32((uint32_t)(0x11c6e1f0)));
L_11c633e2:;
  /* 11c633e2 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c633e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c633e7 push eax */
  push32((uint32_t)(EAX));
  /* 11c633e8 call ebp */
  call_ind((uint32_t)(EBP), 0x11c633eau);
  /* 11c633ea mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c633ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c633f1 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c633f3 mov eax, dword ptr [ebx + 0x1835] */
  EAX = (r32((uint32_t)(EBX + 0x1835)));
  /* 11c633f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c633fa add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c633fd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c633ff jl 0x11c633e2 */
  if ((C.sf!=C.of)) goto L_11c633e2;
  /* 11c63401 mov ebp, dword ptr [esp + 0x10] */
  EBP = (r32((uint32_t)(ESP + 0x10)));
L_11c63405:;
  /* 11c63405 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11c63409 push edx */
  push32((uint32_t)(EDX));
  /* 11c6340a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6340b call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c63411u);
  /* 11c63411 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63412 call 0x11c61a90 */
  push32(0x11c63417u); f_11c61a90();
  /* 11c63417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6341a pop edi */
  EDI = (pop32());
  /* 11c6341b pop esi */
  ESI = (pop32());
  /* 11c6341c pop ebp */
  EBP = (pop32());
  /* 11c6341d pop ebx */
  EBX = (pop32());
  /* 11c6341e pop ecx */
  ECX = (pop32());
  /* 11c6341f ret 4 */
  ESPCHK(0x11c633b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003430 @ 0x11c63430 (181 bytes, 71 insns) */
void f_11c63430(void) {
  FTRACE(0x11c63430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63430 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63433 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63434 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63435 push esi */
  push32((uint32_t)(ESI));
  /* 11c63436 push edi */
  push32((uint32_t)(EDI));
  /* 11c63437 mov ebp, ecx */
  EBP = (ECX);
  /* 11c63439 call 0x11c63360 */
  push32(0x11c6343eu); f_11c63360();
  /* 11c6343e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63440 jne 0x11c6344c */
  if (!C.zf) goto L_11c6344c;
L_11c63442:;
  /* 11c63442 pop edi */
  EDI = (pop32());
  /* 11c63443 pop esi */
  ESI = (pop32());
  /* 11c63444 pop ebp */
  EBP = (pop32());
  /* 11c63445 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c63447 pop ebx */
  EBX = (pop32());
  /* 11c63448 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6344b ret  */
  ESPCHK(0x11c63430u, _esp0);
  ESP += 4; return;
L_11c6344c:;
  /* 11c6344c mov dword ptr [esp + 0x10], 0x186a0 */
  w32((uint32_t)(ESP + 0x10), (0x186a0u));
  /* 11c63454 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c63456 lea edi, [esp + 0x14] */
  EDI = ((uint32_t)(ESP + 0x14));
  /* 11c6345a lea ebx, [ebp + 0x91] */
  EBX = ((uint32_t)(EBP + 0x91));
L_11c63460:;
  /* 11c63460 cmp dword ptr [ebx], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63463 je 0x11c63484 */
  if (C.zf) goto L_11c63484;
  /* 11c63465 push esi */
  push32((uint32_t)(ESI));
  /* 11c63466 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63468 call dword ptr [0x11c6e138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e138))), 0x11c6346eu);
  /* 11c6346e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c6346f idiv dword ptr [ebx] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBX))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c63471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63476 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c63478 je 0x11c63442 */
  if (C.zf) goto L_11c63442;
  /* 11c6347a cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6347e jl 0x11c63484 */
  if ((C.sf!=C.of)) goto L_11c63484;
  /* 11c63480 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
L_11c63484:;
  /* 11c63484 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c63485 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63488 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6348b cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6348e jl 0x11c63460 */
  if ((C.sf!=C.of)) goto L_11c63460;
  /* 11c63490 mov ecx, ebp */
  ECX = (EBP);
  /* 11c63492 call 0x11c63360 */
  push32(0x11c63497u); f_11c63360();
  /* 11c63497 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6349b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6349d jge 0x11c634a8 */
  if ((C.sf==C.of)) goto L_11c634a8;
  /* 11c6349f mov ecx, ebp */
  ECX = (EBP);
  /* 11c634a1 call 0x11c63360 */
  push32(0x11c634a6u); f_11c63360();
  /* 11c634a6 jmp 0x11c634aa */
  goto L_11c634aa;
L_11c634a8:;
  /* 11c634a8 mov eax, ecx */
  EAX = (ECX);
L_11c634aa:;
  /* 11c634aa mov ebx, dword ptr [0x11c6e16c] */
  EBX = (r32((uint32_t)(0x11c6e16c)));
  /* 11c634b0 mov dword ptr [ebp + 0x184e], eax */
  w32((uint32_t)(EBP + 0x184e), (EAX));
  /* 11c634b6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c634b8 lea edi, [ebp + 0x91] */
  EDI = ((uint32_t)(EBP + 0x91));
L_11c634be:;
  /* 11c634be mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c634c0 imul eax, dword ptr [ebp + 0x184e] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x184e)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c634c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c634c9 push eax */
  push32((uint32_t)(EAX));
  /* 11c634ca push esi */
  push32((uint32_t)(ESI));
  /* 11c634cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c634cd call ebx */
  call_ind((uint32_t)(EBX), 0x11c634cfu);
  /* 11c634cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c634d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c634d3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c634d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c634d9 jl 0x11c634be */
  if ((C.sf!=C.of)) goto L_11c634be;
  /* 11c634db pop edi */
  EDI = (pop32());
  /* 11c634dc pop esi */
  ESI = (pop32());
  /* 11c634dd pop ebp */
  EBP = (pop32());
  /* 11c634de mov al, 1 */
  AL = (0x1u);
  /* 11c634e0 pop ebx */
  EBX = (pop32());
  /* 11c634e1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c634e4 ret  */
  ESPCHK(0x11c63430u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x11c634f0 (161 bytes, 56 insns) */
void f_11c634f0(void) {
  FTRACE(0x11c634f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c634f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c634f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c634f2 mov ebx, ecx */
  EBX = (ECX);
  /* 11c634f4 push esi */
  push32((uint32_t)(ESI));
  /* 11c634f5 push edi */
  push32((uint32_t)(EDI));
  /* 11c634f6 mov esi, dword ptr [ebx + 0x184e] */
  ESI = (r32((uint32_t)(EBX + 0x184e)));
  /* 11c634fc call 0x11c63360 */
  push32(0x11c63501u); f_11c63360();
  /* 11c63501 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63503 jl 0x11c6350e */
  if ((C.sf!=C.of)) goto L_11c6350e;
  /* 11c63505 mov ecx, ebx */
  ECX = (EBX);
  /* 11c63507 call 0x11c63360 */
  push32(0x11c6350cu); f_11c63360();
  /* 11c6350c mov esi, eax */
  ESI = (EAX);
L_11c6350e:;
  /* 11c6350e mov eax, dword ptr [ebx + 0x8d] */
  EAX = (r32((uint32_t)(EBX + 0x8d)));
  /* 11c63514 mov ecx, dword ptr [ebx + 0x89] */
  ECX = (r32((uint32_t)(EBX + 0x89)));
  /* 11c6351a mov edx, dword ptr [ebx + 0x85] */
  EDX = (r32((uint32_t)(EBX + 0x85)));
  /* 11c63520 imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c63523 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c63526 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c63529 push eax */
  push32((uint32_t)(EAX));
  /* 11c6352a mov eax, dword ptr [ebx + 0x81] */
  EAX = (r32((uint32_t)(EBX + 0x81)));
  /* 11c63530 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63531 mov ecx, dword ptr [ebx + 0x7d] */
  ECX = (r32((uint32_t)(EBX + 0x7d)));
  /* 11c63534 lea ebp, [ebx + 0x79] */
  EBP = ((uint32_t)(EBX + 0x79));
  /* 11c63537 push edx */
  push32((uint32_t)(EDX));
  /* 11c63538 imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6353b imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6353e mov edx, esi */
  EDX = (ESI);
  /* 11c63540 push eax */
  push32((uint32_t)(EAX));
  /* 11c63541 imul edx, dword ptr [ebp] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP)))*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c63545 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63546 push edx */
  push32((uint32_t)(EDX));
  /* 11c63547 push 0x11c7061c */
  push32((uint32_t)(0x11c7061cu));
  /* 11c6354c call dword ptr [0x11c6e184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e184))), 0x11c63552u);
  /* 11c63552 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63555 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c63557:;
  /* 11c63557 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 11c6355a imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6355d push eax */
  push32((uint32_t)(EAX));
  /* 11c6355e push edi */
  push32((uint32_t)(EDI));
  /* 11c6355f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63561 call dword ptr [0x11c6e16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e16c))), 0x11c63567u);
  /* 11c63567 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6356a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6356b add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6356e cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63571 jl 0x11c63557 */
  if ((C.sf!=C.of)) goto L_11c63557;
  /* 11c63573 mov eax, dword ptr [ebx + 0x1856] */
  EAX = (r32((uint32_t)(EBX + 0x1856)));
  /* 11c63579 pop edi */
  EDI = (pop32());
  /* 11c6357a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6357b pop esi */
  ESI = (pop32());
  /* 11c6357c mov dword ptr [ebx + 0x184e], 0 */
  w32((uint32_t)(EBX + 0x184e), (0x0u));
  /* 11c63586 mov dword ptr [ebx + 0x1856], eax */
  w32((uint32_t)(EBX + 0x1856), (EAX));
  /* 11c6358c pop ebp */
  EBP = (pop32());
  /* 11c6358d mov al, 1 */
  AL = (0x1u);
  /* 11c6358f pop ebx */
  EBX = (pop32());
  /* 11c63590 ret  */
  ESPCHK(0x11c634f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x11c635a0 (13 bytes, 3 insns) */
void f_11c635a0(void) {
  FTRACE(0x11c635a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c635a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c635a4 mov dword ptr [ecx + 0x1852], eax */
  w32((uint32_t)(ECX + 0x1852), (EAX));
  /* 11c635aa ret 4 */
  ESPCHK(0x11c635a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100035b0 @ 0x11c635b0 (788 bytes, 225 insns) [1 switch table(s)] */
void f_11c635b0(void) {
  FTRACE(0x11c635b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c635b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c635b1 push esi */
  push32((uint32_t)(ESI));
  /* 11c635b2 mov esi, ecx */
  ESI = (ECX);
  /* 11c635b4 push edi */
  push32((uint32_t)(EDI));
  /* 11c635b5 mov edi, 4 */
  EDI = (0x4u);
  /* 11c635ba cmp dword ptr [esi + 0x1845], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1845))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c635c0 jne 0x11c635d5 */
  if (!C.zf) goto L_11c635d5;
  /* 11c635c2 call 0x11c62f20 */
  push32(0x11c635c7u); f_11c62f20();
  /* 11c635c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c635c9 je 0x11c635d5 */
  if (C.zf) goto L_11c635d5;
  /* 11c635cb mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
L_11c635d5:;
  /* 11c635d5 mov ecx, esi */
  ECX = (ESI);
  /* 11c635d7 call 0x11c62f20 */
  push32(0x11c635dcu); f_11c62f20();
  /* 11c635dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c635de jne 0x11c6362c */
  if (!C.zf) goto L_11c6362c;
  /* 11c635e0 cmp dword ptr [esi + 0x1845], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1845))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c635e6 je 0x11c6362c */
  if (C.zf) goto L_11c6362c;
  /* 11c635e8 mov al, byte ptr [esi + 0x184d] */
  AL = (r8((uint32_t)(ESI + 0x184d)));
  /* 11c635ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c635f0 je 0x11c63618 */
  if (C.zf) goto L_11c63618;
  /* 11c635f2 push 0x11c70630 */
  push32((uint32_t)(0x11c70630u));
  /* 11c635f7 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c635fdu);
  /* 11c635fd lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 11c63603 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c63606 push eax */
  push32((uint32_t)(EAX));
  /* 11c63607 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63608 mov byte ptr [esi + 0x184d], 0 */
  w8((uint32_t)(ESI + 0x184d), (0x0u));
  /* 11c6360f call dword ptr [0x11c6e124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e124))), 0x11c63615u);
  /* 11c63615 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c63618:;
  /* 11c63618 mov dl, byte ptr [esi + 0x1852] */
  DL = (r8((uint32_t)(ESI + 0x1852)));
  /* 11c6361e push edx */
  push32((uint32_t)(EDX));
  /* 11c6361f call dword ptr [0x11c6e114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e114))), 0x11c63625u);
  /* 11c63625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63628 pop edi */
  EDI = (pop32());
  /* 11c63629 pop esi */
  ESI = (pop32());
  /* 11c6362a pop ecx */
  ECX = (pop32());
  /* 11c6362b ret  */
  ESPCHK(0x11c635b0u, _esp0);
  ESP += 4; return;
L_11c6362c:;
  /* 11c6362c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6362d push ebp */
  push32((uint32_t)(EBP));
  /* 11c6362e lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11c63631 lea ebp, [esi + 0x1839] */
  EBP = ((uint32_t)(ESI + 0x1839));
  /* 11c63637 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c63639 push edi */
  push32((uint32_t)(EDI));
  /* 11c6363a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6363b call dword ptr [0x11c6e1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e8))), 0x11c63641u);
  /* 11c63641 mov al, byte ptr [esi + 0x1852] */
  AL = (r8((uint32_t)(ESI + 0x1852)));
  /* 11c63647 push eax */
  push32((uint32_t)(EAX));
  /* 11c63648 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6364a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6364b call dword ptr [0x11c6e168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e168))), 0x11c63651u);
  /* 11c63651 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 11c63657 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6365a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6365d ja 0x11c6382e */
  if ((!C.cf&&!C.zf)) goto L_11c6382e;
  /* 11c63663 jmp dword ptr [eax*4 + 0x11c638c4] */
  switch (EAX) {
    case 0: goto L_11c636ce;
    case 1: goto L_11c6374b;
    case 2: goto L_11c63790;
    case 3: goto L_11c6366a;
    default: x86_unimpl("switch@0x11c63663 out of table"); return;
  }
L_11c6366a:;
  /* 11c6366a mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c63670 push edi */
  push32((uint32_t)(EDI));
  /* 11c63671 mov ecx, eax */
  ECX = (EAX);
  /* 11c63673 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c63676 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63678 lea edx, [ecx*2 + 0x11c73e39] */
  EDX = ((uint32_t)(ECX*2 + 0x11c73e39));
  /* 11c6367f push edx */
  push32((uint32_t)(EDX));
  /* 11c63680 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c63686u);
  /* 11c63686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6368b je 0x11c6369e */
  if (C.zf) goto L_11c6369e;
  /* 11c6368d mov ecx, esi */
  ECX = (ESI);
  /* 11c6368f call 0x11c634f0 */
  push32(0x11c63694u); f_11c634f0();
  /* 11c63694 mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
L_11c6369e:;
  /* 11c6369e mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c636a4 mov ecx, eax */
  ECX = (EAX);
  /* 11c636a6 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c636a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c636ab lea ecx, [ecx*2 + 0x11c73e00] */
  ECX = ((uint32_t)(ECX*2 + 0x11c73e00));
  /* 11c636b2 call 0x11c62f20 */
  push32(0x11c636b7u); f_11c62f20();
  /* 11c636b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c636b9 jne 0x11c6382e */
  if (!C.zf) goto L_11c6382e;
  /* 11c636bf mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
  /* 11c636c9 jmp 0x11c6382e */
  goto L_11c6382e;
L_11c636ce:;
  /* 11c636ce mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c636d4 push edi */
  push32((uint32_t)(EDI));
  /* 11c636d5 mov edx, eax */
  EDX = (EAX);
  /* 11c636d7 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11c636da add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c636dc lea eax, [edx*2 + 0x11c73e39] */
  EAX = ((uint32_t)(EDX*2 + 0x11c73e39));
  /* 11c636e3 push eax */
  push32((uint32_t)(EAX));
  /* 11c636e4 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c636eau);
  /* 11c636ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c636ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c636ef jne 0x11c6382e */
  if (!C.zf) goto L_11c6382e;
  /* 11c636f5 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 11c636fb push ecx */
  push32((uint32_t)(ECX));
  /* 11c636fc call 0x11c61a50 */
  push32(0x11c63701u); f_11c61a50();
  /* 11c63701 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63703 push edi */
  push32((uint32_t)(EDI));
  /* 11c63704 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c6370au);
  /* 11c6370a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6370d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6370f call 0x11c63ff9 */
  push32(0x11c63714u); f_11c63ff9();
  /* 11c63714 push eax */
  push32((uint32_t)(EAX));
  /* 11c63715 mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c6371b mov edx, eax */
  EDX = (EAX);
  /* 11c6371d mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 11c63723 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11c63726 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63728 lea eax, [edx*2 + 0x11c73e39] */
  EAX = ((uint32_t)(EDX*2 + 0x11c73e39));
  /* 11c6372f push eax */
  push32((uint32_t)(EAX));
  /* 11c63730 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63731 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63737u);
  /* 11c63737 mov edx, dword ptr [esi + 0x1841] */
  EDX = (r32((uint32_t)(ESI + 0x1841)));
  /* 11c6373d push edx */
  push32((uint32_t)(EDX));
  /* 11c6373e call 0x11c61a90 */
  push32(0x11c63743u); f_11c61a90();
  /* 11c63743 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63746 jmp 0x11c6382e */
  goto L_11c6382e;
L_11c6374b:;
  /* 11c6374b lea eax, [esi + 0x71] */
  EAX = ((uint32_t)(ESI + 0x71));
  /* 11c6374e push edi */
  push32((uint32_t)(EDI));
  /* 11c6374f push eax */
  push32((uint32_t)(EAX));
  /* 11c63750 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c63756u);
  /* 11c63756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6375b je 0x11c6382e */
  if (C.zf) goto L_11c6382e;
  /* 11c63761 mov ecx, esi */
  ECX = (ESI);
  /* 11c63763 call 0x11c63300 */
  push32(0x11c63768u); f_11c63300();
  /* 11c63768 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6376a je 0x11c6382e */
  if (C.zf) goto L_11c6382e;
  /* 11c63770 mov dword ptr [esi + 0x1845], 2 */
  w32((uint32_t)(ESI + 0x1845), (0x2u));
  /* 11c6377a call dword ptr [0x11c6e198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e198))), 0x11c63780u);
  /* 11c63780 add eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63785 mov dword ptr [esi + 0x1849], eax */
  w32((uint32_t)(ESI + 0x1849), (EAX));
  /* 11c6378b jmp 0x11c6382e */
  goto L_11c6382e;
L_11c63790:;
  /* 11c63790 call dword ptr [0x11c6e198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e198))), 0x11c63796u);
  /* 11c63796 cmp eax, dword ptr [esi + 0x1849] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x1849))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6379c jle 0x11c6382e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6382e;
  /* 11c637a2 mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c637a8 mov dword ptr [esi + 0x1845], 3 */
  w32((uint32_t)(ESI + 0x1845), (0x3u));
  /* 11c637b2 mov ecx, eax */
  ECX = (EAX);
  /* 11c637b4 lea ebx, [esi + 0xa9] */
  EBX = ((uint32_t)(ESI + 0xa9));
  /* 11c637ba shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c637bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c637bf mov edx, dword ptr [ecx*2 + 0x11c73e3d] */
  EDX = (r32((uint32_t)(ECX*2 + 0x11c73e3d)));
  /* 11c637c6 push edx */
  push32((uint32_t)(EDX));
  /* 11c637c7 mov eax, dword ptr [ecx*2 + 0x11c73e39] */
  EAX = (r32((uint32_t)(ECX*2 + 0x11c73e39)));
  /* 11c637ce mov ecx, ebx */
  ECX = (EBX);
  /* 11c637d0 push eax */
  push32((uint32_t)(EAX));
  /* 11c637d1 call 0x11c63bd0 */
  push32(0x11c637d6u); f_11c63bd0();
  /* 11c637d6 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 11c637dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c637de push ecx */
  push32((uint32_t)(ECX));
  /* 11c637df push esi */
  push32((uint32_t)(ESI));
  /* 11c637e0 mov ecx, ebx */
  ECX = (EBX);
  /* 11c637e2 call 0x11c63d20 */
  push32(0x11c637e7u); f_11c63d20();
  /* 11c637e7 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c637ed mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 11c637f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c637f7 jle 0x11c6382e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6382e;
  /* 11c637f9 lea ebp, [esi + 0x3e5] */
  EBP = ((uint32_t)(ESI + 0x3e5));
L_11c637ff:;
  /* 11c637ff mov ecx, ebp */
  ECX = (EBP);
  /* 11c63801 call 0x11c62f20 */
  push32(0x11c63806u); f_11c62f20();
  /* 11c63806 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63808 je 0x11c63818 */
  if (C.zf) goto L_11c63818;
  /* 11c6380a mov edx, dword ptr [ebp] */
  EDX = (r32((uint32_t)(EBP)));
  /* 11c6380d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6380f push edx */
  push32((uint32_t)(EDX));
  /* 11c63810 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63811 mov ecx, ebx */
  ECX = (EBX);
  /* 11c63813 call 0x11c63d20 */
  push32(0x11c63818u); f_11c63d20();
L_11c63818:;
  /* 11c63818 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6381c mov ecx, dword ptr [esi + 0x1835] */
  ECX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c63822 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c63823 add ebp, 0x34 */
  { uint32_t _a=(EBP),_b=(0x34u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63826 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63828 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c6382c jl 0x11c637ff */
  if ((C.sf!=C.of)) goto L_11c637ff;
L_11c6382e:;
  /* 11c6382e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c63830 push eax */
  push32((uint32_t)(EAX));
  /* 11c63831 call 0x11c61a50 */
  push32(0x11c63836u); f_11c61a50();
  /* 11c63836 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 11c6383c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6383d call 0x11c61a50 */
  push32(0x11c63842u); f_11c61a50();
  /* 11c63842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63844 push edi */
  push32((uint32_t)(EDI));
  /* 11c63845 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c6384bu);
  /* 11c6384b mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 11c63851 push edi */
  push32((uint32_t)(EDI));
  /* 11c63852 mov edx, eax */
  EDX = (EAX);
  /* 11c63854 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11c63857 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63859 lea eax, [edx*2 + 0x11c73e39] */
  EAX = ((uint32_t)(EDX*2 + 0x11c73e39));
  /* 11c63860 push eax */
  push32((uint32_t)(EAX));
  /* 11c63861 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c63867u);
  /* 11c63867 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6386a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6386c pop ebp */
  EBP = (pop32());
  /* 11c6386d pop ebx */
  EBX = (pop32());
  /* 11c6386e je 0x11c6387a */
  if (C.zf) goto L_11c6387a;
  /* 11c63870 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 11c63876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63878 je 0x11c63896 */
  if (C.zf) goto L_11c63896;
L_11c6387a:;
  /* 11c6387a mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 11c63880 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63883 je 0x11c63896 */
  if (C.zf) goto L_11c63896;
  /* 11c63885 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63888 je 0x11c63896 */
  if (C.zf) goto L_11c63896;
  /* 11c6388a mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 11c63890 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63892 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63893 push edx */
  push32((uint32_t)(EDX));
  /* 11c63894 jmp 0x11c638a0 */
  goto L_11c638a0;
L_11c63896:;
  /* 11c63896 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63898 mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 11c6389e push eax */
  push32((uint32_t)(EAX));
  /* 11c6389f push ecx */
  push32((uint32_t)(ECX));
L_11c638a0:;
  /* 11c638a0 call dword ptr [0x11c6e19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e19c))), 0x11c638a6u);
  /* 11c638a6 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c638a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c638ab push edx */
  push32((uint32_t)(EDX));
  /* 11c638ac call 0x11c61a90 */
  push32(0x11c638b1u); f_11c61a90();
  /* 11c638b1 mov eax, dword ptr [esi + 0x1841] */
  EAX = (r32((uint32_t)(ESI + 0x1841)));
  /* 11c638b7 push eax */
  push32((uint32_t)(EAX));
  /* 11c638b8 call 0x11c61a90 */
  push32(0x11c638bdu); f_11c61a90();
  /* 11c638bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c638c0 pop edi */
  EDI = (pop32());
  /* 11c638c1 pop esi */
  ESI = (pop32());
  /* 11c638c2 pop ecx */
  ECX = (pop32());
  /* 11c638c3 ret  */
  ESPCHK(0x11c635b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x11c638e0 (106 bytes, 40 insns) */
void f_11c638e0(void) {
  FTRACE(0x11c638e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c638e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c638e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c638e2 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c638e6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c638e7 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11c638eb push esi */
  push32((uint32_t)(ESI));
  /* 11c638ec push edi */
  push32((uint32_t)(EDI));
  /* 11c638ed mov edi, ecx */
  EDI = (ECX);
  /* 11c638ef mov dword ptr [esp + 0x10], 0x64 */
  w32((uint32_t)(ESP + 0x10), (0x64u));
  /* 11c638f7 lea esi, [edi + 0x3e5] */
  ESI = ((uint32_t)(EDI + 0x3e5));
L_11c638fd:;
  /* 11c638fd push 0x11c70640 */
  push32((uint32_t)(0x11c70640u));
  /* 11c63902 mov ecx, esi */
  ECX = (ESI);
  /* 11c63904 call 0x11c62f00 */
  push32(0x11c63909u); f_11c62f00();
  /* 11c63909 mov eax, dword ptr [edi + 0x1841] */
  EAX = (r32((uint32_t)(EDI + 0x1841)));
  /* 11c6390f mov ecx, esi */
  ECX = (ESI);
  /* 11c63911 push eax */
  push32((uint32_t)(EAX));
  /* 11c63912 call 0x11c62e80 */
  push32(0x11c63917u); f_11c62e80();
  /* 11c63917 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c6391b mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c6391f mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c63923 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63924 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63925 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63926 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c6392a push edx */
  push32((uint32_t)(EDX));
  /* 11c6392b push eax */
  push32((uint32_t)(EAX));
  /* 11c6392c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6392d mov ecx, esi */
  ECX = (ESI);
  /* 11c6392f call 0x11c62ed0 */
  push32(0x11c63934u); f_11c62ed0();
  /* 11c63934 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c63938 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6393b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6393c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c63940 jne 0x11c638fd */
  if (!C.zf) goto L_11c638fd;
  /* 11c63942 pop edi */
  EDI = (pop32());
  /* 11c63943 pop esi */
  ESI = (pop32());
  /* 11c63944 pop ebp */
  EBP = (pop32());
  /* 11c63945 pop ebx */
  EBX = (pop32());
  /* 11c63946 pop ecx */
  ECX = (pop32());
  /* 11c63947 ret 0x18 */
  ESPCHK(0x11c638e0u, _esp0);
  ESP += 28; return;
}

/* FUN_10003950 @ 0x11c63950 (78 bytes, 25 insns) */
void f_11c63950(void) {
  FTRACE(0x11c63950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63950 push esi */
  push32((uint32_t)(ESI));
  /* 11c63951 mov esi, ecx */
  ESI = (ECX);
  /* 11c63953 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c63959 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6395c je 0x11c6399a */
  if (C.zf) goto L_11c6399a;
  /* 11c6395e lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 11c63961 lea ecx, [esi + 0x1839] */
  ECX = ((uint32_t)(ESI + 0x1839));
  /* 11c63967 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63968 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11c6396b lea ecx, [esi + eax*4 + 0x3e5] */
  ECX = ((uint32_t)(ESI + EAX*4 + 0x3e5));
  /* 11c63972 call 0x11c63010 */
  push32(0x11c63977u); f_11c63010();
  /* 11c63977 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63979 je 0x11c6398c */
  if (C.zf) goto L_11c6398c;
  /* 11c6397b mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c63981 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c63982 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 11c63988 mov al, 1 */
  AL = (0x1u);
  /* 11c6398a pop esi */
  ESI = (pop32());
  /* 11c6398b ret  */
  ESPCHK(0x11c63950u, _esp0);
  ESP += 4; return;
L_11c6398c:;
  /* 11c6398c push 0x11c70600 */
  push32((uint32_t)(0x11c70600u));
  /* 11c63991 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c63997u);
  /* 11c63997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6399a:;
  /* 11c6399a xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6399c pop esi */
  ESI = (pop32());
  /* 11c6399d ret  */
  ESPCHK(0x11c63950u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x11c639a0 (150 bytes, 57 insns) */
void f_11c639a0(void) {
  FTRACE(0x11c639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c639a0 push esi */
  push32((uint32_t)(ESI));
  /* 11c639a1 mov esi, ecx */
  ESI = (ECX);
  /* 11c639a3 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 11c639a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c639ab jne 0x11c639c4 */
  if (!C.zf) goto L_11c639c4;
  /* 11c639ad call 0x11c63430 */
  push32(0x11c639b2u); f_11c63430();
  /* 11c639b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c639b4 jne 0x11c639c8 */
  if (!C.zf) goto L_11c639c8;
  /* 11c639b6 push 0x11c70600 */
  push32((uint32_t)(0x11c70600u));
  /* 11c639bb call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c639c1u);
  /* 11c639c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c639c4:;
  /* 11c639c4 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c639c6 pop esi */
  ESI = (pop32());
  /* 11c639c7 ret  */
  ESPCHK(0x11c639a0u, _esp0);
  ESP += 4; return;
L_11c639c8:;
  /* 11c639c8 mov eax, dword ptr [esi + 0x75] */
  EAX = (r32((uint32_t)(ESI + 0x75)));
  /* 11c639cb mov ecx, dword ptr [esi + 0x71] */
  ECX = (r32((uint32_t)(ESI + 0x71)));
  /* 11c639ce push ebx */
  push32((uint32_t)(EBX));
  /* 11c639cf push ebp */
  push32((uint32_t)(EBP));
  /* 11c639d0 lea ebp, [esi + 0xa9] */
  EBP = ((uint32_t)(ESI + 0xa9));
  /* 11c639d6 push eax */
  push32((uint32_t)(EAX));
  /* 11c639d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c639d8 mov ecx, ebp */
  ECX = (EBP);
  /* 11c639da mov dword ptr [esi + 0x1845], 1 */
  w32((uint32_t)(ESI + 0x1845), (0x1u));
  /* 11c639e4 call 0x11c63be0 */
  push32(0x11c639e9u); f_11c63be0();
  /* 11c639e9 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c639eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c639ed push edx */
  push32((uint32_t)(EDX));
  /* 11c639ee push esi */
  push32((uint32_t)(ESI));
  /* 11c639ef mov ecx, ebp */
  ECX = (EBP);
  /* 11c639f1 call 0x11c63c00 */
  push32(0x11c639f6u); f_11c63c00();
  /* 11c639f6 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c639fc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c639fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63a00 jle 0x11c63a30 */
  if ((C.zf||C.sf!=C.of)) goto L_11c63a30;
  /* 11c63a02 push edi */
  push32((uint32_t)(EDI));
  /* 11c63a03 lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
L_11c63a09:;
  /* 11c63a09 mov ecx, edi */
  ECX = (EDI);
  /* 11c63a0b call 0x11c62f20 */
  push32(0x11c63a10u); f_11c62f20();
  /* 11c63a10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63a12 je 0x11c63a21 */
  if (C.zf) goto L_11c63a21;
  /* 11c63a14 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c63a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c63a18 push eax */
  push32((uint32_t)(EAX));
  /* 11c63a19 push edi */
  push32((uint32_t)(EDI));
  /* 11c63a1a mov ecx, ebp */
  ECX = (EBP);
  /* 11c63a1c call 0x11c63c00 */
  push32(0x11c63a21u); f_11c63c00();
L_11c63a21:;
  /* 11c63a21 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 11c63a27 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c63a28 add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63a2b cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63a2d jl 0x11c63a09 */
  if ((C.sf!=C.of)) goto L_11c63a09;
  /* 11c63a2f pop edi */
  EDI = (pop32());
L_11c63a30:;
  /* 11c63a30 pop ebp */
  EBP = (pop32());
  /* 11c63a31 pop ebx */
  EBX = (pop32());
  /* 11c63a32 mov al, 1 */
  AL = (0x1u);
  /* 11c63a34 pop esi */
  ESI = (pop32());
  /* 11c63a35 ret  */
  ESPCHK(0x11c639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a40 @ 0x11c63a40 (20 bytes, 8 insns) */
void f_11c63a40(void) {
  FTRACE(0x11c63a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63a40 push esi */
  push32((uint32_t)(ESI));
  /* 11c63a41 mov esi, ecx */
  ESI = (ECX);
  /* 11c63a43 call 0x11c62fc0 */
  push32(0x11c63a48u); f_11c62fc0();
  /* 11c63a48 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 11c63a4c mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11c63a50 mov eax, esi */
  EAX = (ESI);
  /* 11c63a52 pop esi */
  ESI = (pop32());
  /* 11c63a53 ret  */
  ESPCHK(0x11c63a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a60 @ 0x11c63a60 (10 bytes, 3 insns) */
void f_11c63a60(void) {
  FTRACE(0x11c63a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63a60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63a64 mov dword ptr [ecx + 0x35], eax */
  w32((uint32_t)(ECX + 0x35), (EAX));
  /* 11c63a67 ret 4 */
  ESPCHK(0x11c63a60u, _esp0);
  ESP += 8; return;
}

/* FUN_10003a70 @ 0x11c63a70 (313 bytes, 111 insns) */
void f_11c63a70(void) {
  FTRACE(0x11c63a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63a70 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63a71 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63a72 push esi */
  push32((uint32_t)(ESI));
  /* 11c63a73 mov esi, ecx */
  ESI = (ECX);
  /* 11c63a75 mov ebp, dword ptr [0x11c6e194] */
  EBP = (r32((uint32_t)(0x11c6e194)));
  /* 11c63a7b push edi */
  push32((uint32_t)(EDI));
  /* 11c63a7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63a7e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11c63a81 mov byte ptr [esp + 0xc], al */
  w8((uint32_t)(ESP + 0xc), (AL));
  /* 11c63a85 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c63a89 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63a8a push edi */
  push32((uint32_t)(EDI));
  /* 11c63a8b call ebp */
  call_ind((uint32_t)(EBP), 0x11c63a8du);
  /* 11c63a8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63a92 je 0x11c63a9c */
  if (C.zf) goto L_11c63a9c;
  /* 11c63a94 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63a98 push edi */
  push32((uint32_t)(EDI));
  /* 11c63a99 push edx */
  push32((uint32_t)(EDX));
  /* 11c63a9a jmp 0x11c63aa2 */
  goto L_11c63aa2;
L_11c63a9c:;
  /* 11c63a9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c63aa0 push edi */
  push32((uint32_t)(EDI));
  /* 11c63aa1 push eax */
  push32((uint32_t)(EAX));
L_11c63aa2:;
  /* 11c63aa2 call dword ptr [0x11c6e1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ac))), 0x11c63aa8u);
  /* 11c63aa8 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c63aaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63aad push ecx */
  push32((uint32_t)(ECX));
  /* 11c63aae push edi */
  push32((uint32_t)(EDI));
  /* 11c63aaf call dword ptr [0x11c6e164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e164))), 0x11c63ab5u);
  /* 11c63ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63aba jne 0x11c63afb */
  if (!C.zf) goto L_11c63afb;
  /* 11c63abc mov al, byte ptr [esi + 0x41] */
  AL = (r8((uint32_t)(ESI + 0x41)));
  /* 11c63abf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63ac1 je 0x11c63ba4 */
  if (C.zf) goto L_11c63ba4;
  /* 11c63ac7 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 11c63acb mov esi, dword ptr [esi + 0x35] */
  ESI = (r32((uint32_t)(ESI + 0x35)));
  /* 11c63ace push 0x11c7065c */
  push32((uint32_t)(0x11c7065cu));
  /* 11c63ad3 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c63ad6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63ad9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63adc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63adf lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c63ae2 mov dword ptr [edx*2 + 0x11c75955], 5 */
  w32((uint32_t)(EDX*2 + 0x11c75955), (0x5u));
  /* 11c63aed call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c63af3u);
  /* 11c63af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63af6 pop edi */
  EDI = (pop32());
  /* 11c63af7 pop esi */
  ESI = (pop32());
  /* 11c63af8 pop ebp */
  EBP = (pop32());
  /* 11c63af9 pop ecx */
  ECX = (pop32());
  /* 11c63afa ret  */
  ESPCHK(0x11c63a70u, _esp0);
  ESP += 4; return;
L_11c63afb:;
  /* 11c63afb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63afd mov byte ptr [esp + 0xc], al */
  w8((uint32_t)(ESP + 0xc), (AL));
  /* 11c63b01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c63b05 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63b06 push edi */
  push32((uint32_t)(EDI));
  /* 11c63b07 call ebp */
  call_ind((uint32_t)(EBP), 0x11c63b09u);
  /* 11c63b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63b0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63b0f jg 0x11c63ba4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c63ba4;
  /* 11c63b15 mov al, byte ptr [esi + 0x41] */
  AL = (r8((uint32_t)(ESI + 0x41)));
  /* 11c63b18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63b1a jne 0x11c63b86 */
  if (!C.zf) goto L_11c63b86;
  /* 11c63b1c mov eax, dword ptr [esi + 0x35] */
  EAX = (r32((uint32_t)(ESI + 0x35)));
  /* 11c63b1f mov byte ptr [esi + 0x41], 1 */
  w8((uint32_t)(ESI + 0x41), (0x1u));
  /* 11c63b23 push 0x11c7064c */
  push32((uint32_t)(0x11c7064cu));
  /* 11c63b28 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b2b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b2e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b31 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b34 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b37 mov dword ptr [edx*2 + 0x11c75955], 0 */
  w32((uint32_t)(EDX*2 + 0x11c75955), (0x0u));
  /* 11c63b42 call dword ptr [0x11c6e148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e148))), 0x11c63b48u);
  /* 11c63b48 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c63b4a push eax */
  push32((uint32_t)(EAX));
  /* 11c63b4b call 0x11c61a50 */
  push32(0x11c63b50u); f_11c61a50();
  /* 11c63b50 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c63b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63b55 push edi */
  push32((uint32_t)(EDI));
  /* 11c63b56 call dword ptr [0x11c6e158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e158))), 0x11c63b5cu);
  /* 11c63b5c mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63b5e lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11c63b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63b63 push edi */
  push32((uint32_t)(EDI));
  /* 11c63b64 push edx */
  push32((uint32_t)(EDX));
  /* 11c63b65 call dword ptr [0x11c6e1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1a4))), 0x11c63b6bu);
  /* 11c63b6b push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11c63b70 lea eax, [esi + 0x39] */
  EAX = ((uint32_t)(ESI + 0x39));
  /* 11c63b73 push edi */
  push32((uint32_t)(EDI));
  /* 11c63b74 push eax */
  push32((uint32_t)(EAX));
  /* 11c63b75 call dword ptr [0x11c6e1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1e8))), 0x11c63b7bu);
  /* 11c63b7b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c63b7d push ecx */
  push32((uint32_t)(ECX));
  /* 11c63b7e call 0x11c61a90 */
  push32(0x11c63b83u); f_11c61a90();
  /* 11c63b83 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c63b86:;
  /* 11c63b86 mov esi, dword ptr [esi + 0x35] */
  ESI = (r32((uint32_t)(ESI + 0x35)));
  /* 11c63b89 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c63b8c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b8f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b92 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b95 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11c63b98 lea ecx, [edx*2 + 0x11c74110] */
  ECX = ((uint32_t)(EDX*2 + 0x11c74110));
  /* 11c63b9f call 0x11c62f20 */
  push32(0x11c63ba4u); f_11c62f20();
L_11c63ba4:;
  /* 11c63ba4 pop edi */
  EDI = (pop32());
  /* 11c63ba5 pop esi */
  ESI = (pop32());
  /* 11c63ba6 pop ebp */
  EBP = (pop32());
  /* 11c63ba7 pop ecx */
  ECX = (pop32());
  /* 11c63ba8 ret  */
  ESPCHK(0x11c63a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x11c63bb0 (25 bytes, 8 insns) */
void f_11c63bb0(void) {
  FTRACE(0x11c63bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63bb0 push esi */
  push32((uint32_t)(ESI));
  /* 11c63bb1 mov esi, ecx */
  ESI = (ECX);
  /* 11c63bb3 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11c63bb6 call 0x11c62c60 */
  push32(0x11c63bbbu); f_11c62c60();
  /* 11c63bbb mov dword ptr [esi + 0x334], 0 */
  w32((uint32_t)(ESI + 0x334), (0x0u));
  /* 11c63bc5 mov eax, esi */
  EAX = (ESI);
  /* 11c63bc7 pop esi */
  ESI = (pop32());
  /* 11c63bc8 ret  */
  ESPCHK(0x11c63bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x11c63bd0 (16 bytes, 5 insns) */
void f_11c63bd0(void) {
  FTRACE(0x11c63bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63bd0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63bd4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c63bd8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c63bda mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c63bdd ret 8 */
  ESPCHK(0x11c63bd0u, _esp0);
  ESP += 12; return;
}

/* FUN_10003be0 @ 0x11c63be0 (17 bytes, 5 insns) */
void f_11c63be0(void) {
  FTRACE(0x11c63be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63be0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63be4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c63be8 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11c63beb mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11c63bee ret 8 */
  ESPCHK(0x11c63be0u, _esp0);
  ESP += 12; return;
}

/* FUN_10003c00 @ 0x11c63c00 (284 bytes, 102 insns) */
void f_11c63c00(void) {
  FTRACE(0x11c63c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63c00 mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 11c63c04 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63c07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63c09 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63c0a mov ebx, ecx */
  EBX = (ECX);
  /* 11c63c0c je 0x11c63cfb */
  if (C.zf) goto L_11c63cfb;
  /* 11c63c12 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63c13 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 11c63c17 push esi */
  push32((uint32_t)(ESI));
  /* 11c63c18 push edi */
  push32((uint32_t)(EDI));
  /* 11c63c19 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63c1a call 0x11c61a50 */
  push32(0x11c63c1fu); f_11c61a50();
  /* 11c63c1f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c63c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63c25 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63c28 push eax */
  push32((uint32_t)(EAX));
  /* 11c63c29 call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c63c2fu);
  /* 11c63c2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63c32 lea edi, [ebx + 0x10] */
  EDI = ((uint32_t)(EBX + 0x10));
  /* 11c63c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63c37 call 0x11c63ff9 */
  push32(0x11c63c3cu); f_11c63ff9();
  /* 11c63c3c push eax */
  push32((uint32_t)(EAX));
  /* 11c63c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63c3f mov ecx, edi */
  ECX = (EDI);
  /* 11c63c41 call 0x11c62ca0 */
  push32(0x11c63c46u); f_11c62ca0();
  /* 11c63c46 push eax */
  push32((uint32_t)(EAX));
  /* 11c63c47 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63c48 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63c4eu);
  /* 11c63c4e mov eax, dword ptr [ebx + 0x330] */
  EAX = (r32((uint32_t)(EBX + 0x330)));
  /* 11c63c54 mov esi, 1 */
  ESI = (0x1u);
  /* 11c63c59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63c5c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63c5e jle 0x11c63cdc */
  if ((C.zf||C.sf!=C.of)) goto L_11c63cdc;
L_11c63c60:;
  /* 11c63c60 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 11c63c64 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 11c63c68 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63c69 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11c63c6c push edx */
  push32((uint32_t)(EDX));
  /* 11c63c6d push eax */
  push32((uint32_t)(EAX));
  /* 11c63c6e mov ecx, edi */
  ECX = (EDI);
  /* 11c63c70 call 0x11c62ca0 */
  push32(0x11c63c75u); f_11c62ca0();
  /* 11c63c75 push eax */
  push32((uint32_t)(EAX));
  /* 11c63c76 call dword ptr [0x11c6e1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ec))), 0x11c63c7cu);
  /* 11c63c7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63c7f lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11c63c83 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 11c63c87 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63c88 push edx */
  push32((uint32_t)(EDX));
  /* 11c63c89 push esi */
  push32((uint32_t)(ESI));
  /* 11c63c8a mov ecx, edi */
  ECX = (EDI);
  /* 11c63c8c call 0x11c62ca0 */
  push32(0x11c63c91u); f_11c62ca0();
  /* 11c63c91 push eax */
  push32((uint32_t)(EAX));
  /* 11c63c92 call dword ptr [0x11c6e1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ec))), 0x11c63c98u);
  /* 11c63c98 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 11c63c9c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11c63ca0 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c63ca4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63ca6 mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c63caa push eax */
  push32((uint32_t)(EAX));
  /* 11c63cab sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63cad push ecx */
  push32((uint32_t)(ECX));
  /* 11c63cae call 0x11c61000 */
  push32(0x11c63cb3u); f_11c61000();
  /* 11c63cb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63cb6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c63cbb mov ecx, edi */
  ECX = (EDI);
  /* 11c63cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11c63cbf push eax */
  push32((uint32_t)(EAX));
  /* 11c63cc0 push esi */
  push32((uint32_t)(ESI));
  /* 11c63cc1 call 0x11c62ca0 */
  push32(0x11c63cc6u); f_11c62ca0();
  /* 11c63cc6 push eax */
  push32((uint32_t)(EAX));
  /* 11c63cc7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63cc8 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63cceu);
  /* 11c63cce mov eax, dword ptr [ebx + 0x330] */
  EAX = (r32((uint32_t)(EBX + 0x330)));
  /* 11c63cd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63cd7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c63cd8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63cda jl 0x11c63c60 */
  if ((C.sf!=C.of)) goto L_11c63c60;
L_11c63cdc:;
  /* 11c63cdc push 2 */
  push32((uint32_t)(0x2u));
  /* 11c63cde call 0x11c63ff9 */
  push32(0x11c63ce3u); f_11c63ff9();
  /* 11c63ce3 lea edx, [ebx + 8] */
  EDX = ((uint32_t)(EBX + 0x8));
  /* 11c63ce6 push eax */
  push32((uint32_t)(EAX));
  /* 11c63ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11c63ce8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63ce9 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63cefu);
  /* 11c63cef push ebp */
  push32((uint32_t)(EBP));
  /* 11c63cf0 call 0x11c61a90 */
  push32(0x11c63cf5u); f_11c61a90();
  /* 11c63cf5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63cf8 pop edi */
  EDI = (pop32());
  /* 11c63cf9 pop esi */
  ESI = (pop32());
  /* 11c63cfa pop ebp */
  EBP = (pop32());
L_11c63cfb:;
  /* 11c63cfb mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c63cff add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d02 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d05 push eax */
  push32((uint32_t)(EAX));
  /* 11c63d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63d07 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c63d0du);
  /* 11c63d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63d12 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11c63d15 pop ebx */
  EBX = (pop32());
  /* 11c63d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d19 ret 0xc */
  ESPCHK(0x11c63c00u, _esp0);
  ESP += 16; return;
}

/* FUN_10003d20 @ 0x11c63d20 (277 bytes, 103 insns) */
void f_11c63d20(void) {
  FTRACE(0x11c63d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63d20 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63d23 mov al, byte ptr [esp + 0x18] */
  AL = (r8((uint32_t)(ESP + 0x18)));
  /* 11c63d27 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63d28 mov ebp, ecx */
  EBP = (ECX);
  /* 11c63d2a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c63d2c mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 11c63d30 je 0x11c63e17 */
  if (C.zf) goto L_11c63e17;
  /* 11c63d36 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63d37 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c63d3b push esi */
  push32((uint32_t)(ESI));
  /* 11c63d3c push edi */
  push32((uint32_t)(EDI));
  /* 11c63d3d push ebx */
  push32((uint32_t)(EBX));
  /* 11c63d3e call 0x11c61a50 */
  push32(0x11c63d43u); f_11c61a50();
  /* 11c63d43 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c63d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63d49 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d4c push eax */
  push32((uint32_t)(EAX));
  /* 11c63d4d call dword ptr [0x11c6e1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f0))), 0x11c63d53u);
  /* 11c63d53 mov esi, dword ptr [ebp + 0x330] */
  ESI = (r32((uint32_t)(EBP + 0x330)));
  /* 11c63d59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d5c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c63d5d lea edi, [ebp + 0x10] */
  EDI = ((uint32_t)(EBP + 0x10));
  /* 11c63d60 mov eax, esi */
  EAX = (ESI);
  /* 11c63d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63d66 push eax */
  push32((uint32_t)(EAX));
  /* 11c63d67 mov ecx, edi */
  ECX = (EDI);
  /* 11c63d69 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c63d6a call 0x11c62ca0 */
  push32(0x11c63d6fu); f_11c62ca0();
  /* 11c63d6f push eax */
  push32((uint32_t)(EAX));
  /* 11c63d70 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63d71 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63d77u);
  /* 11c63d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d7a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63d7d jle 0x11c63dfb */
  if ((C.zf||C.sf!=C.of)) goto L_11c63dfb;
  /* 11c63d7f lea ebp, [esi + 1] */
  EBP = ((uint32_t)(ESI + 0x1));
L_11c63d82:;
  /* 11c63d82 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11c63d86 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 11c63d8a push ecx */
  push32((uint32_t)(ECX));
  /* 11c63d8b push edx */
  push32((uint32_t)(EDX));
  /* 11c63d8c push ebp */
  push32((uint32_t)(EBP));
  /* 11c63d8d mov ecx, edi */
  ECX = (EDI);
  /* 11c63d8f call 0x11c62ca0 */
  push32(0x11c63d94u); f_11c62ca0();
  /* 11c63d94 push eax */
  push32((uint32_t)(EAX));
  /* 11c63d95 call dword ptr [0x11c6e1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ec))), 0x11c63d9bu);
  /* 11c63d9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63d9e lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 11c63da2 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 11c63da6 push eax */
  push32((uint32_t)(EAX));
  /* 11c63da7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63da8 push esi */
  push32((uint32_t)(ESI));
  /* 11c63da9 mov ecx, edi */
  ECX = (EDI);
  /* 11c63dab call 0x11c62ca0 */
  push32(0x11c63db0u); f_11c62ca0();
  /* 11c63db0 push eax */
  push32((uint32_t)(EAX));
  /* 11c63db1 call dword ptr [0x11c6e1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1ec))), 0x11c63db7u);
  /* 11c63db7 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11c63dbb mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 11c63dbf mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11c63dc3 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63dc5 push edx */
  push32((uint32_t)(EDX));
  /* 11c63dc6 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 11c63dca sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c63dcc push eax */
  push32((uint32_t)(EAX));
  /* 11c63dcd call 0x11c61000 */
  push32(0x11c63dd2u); f_11c61000();
  /* 11c63dd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63dd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c63dda mov ecx, edi */
  ECX = (EDI);
  /* 11c63ddc push 2 */
  push32((uint32_t)(0x2u));
  /* 11c63dde push eax */
  push32((uint32_t)(EAX));
  /* 11c63ddf push esi */
  push32((uint32_t)(ESI));
  /* 11c63de0 call 0x11c62ca0 */
  push32(0x11c63de5u); f_11c62ca0();
  /* 11c63de5 push eax */
  push32((uint32_t)(EAX));
  /* 11c63de6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63de7 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63dedu);
  /* 11c63ded add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63df0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c63df1 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 11c63df2 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63df5 jg 0x11c63d82 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c63d82;
  /* 11c63df7 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
L_11c63dfb:;
  /* 11c63dfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c63dfd call 0x11c63ff9 */
  push32(0x11c63e02u); f_11c63ff9();
  /* 11c63e02 push eax */
  push32((uint32_t)(EAX));
  /* 11c63e03 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63e04 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63e05 call dword ptr [0x11c6e1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1f4))), 0x11c63e0bu);
  /* 11c63e0b push ebx */
  push32((uint32_t)(EBX));
  /* 11c63e0c call 0x11c61a90 */
  push32(0x11c63e11u); f_11c61a90();
  /* 11c63e11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63e14 pop edi */
  EDI = (pop32());
  /* 11c63e15 pop esi */
  ESI = (pop32());
  /* 11c63e16 pop ebx */
  EBX = (pop32());
L_11c63e17:;
  /* 11c63e17 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c63e1b add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63e1e push ecx */
  push32((uint32_t)(ECX));
  /* 11c63e1f push ebp */
  push32((uint32_t)(EBP));
  /* 11c63e20 call dword ptr [0x11c6e1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1fc))), 0x11c63e26u);
  /* 11c63e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63e2b setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11c63e2e pop ebp */
  EBP = (pop32());
  /* 11c63e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63e32 ret 0xc */
  ESPCHK(0x11c63d20u, _esp0);
  ESP += 16; return;
}

/* FUN_10003e40 @ 0x11c63e40 (53 bytes, 21 insns) */
void f_11c63e40(void) {
  FTRACE(0x11c63e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63e40 push esi */
  push32((uint32_t)(ESI));
  /* 11c63e41 mov esi, ecx */
  ESI = (ECX);
  /* 11c63e43 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c63e45 push esi */
  push32((uint32_t)(ESI));
  /* 11c63e46 call dword ptr [0x11c6e1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e1cc))), 0x11c63e4cu);
  /* 11c63e4c mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c63e50 mov al, 1 */
  AL = (0x1u);
  /* 11c63e52 shl al, cl */
  AL = (sh_shl((uint32_t)(AL), (CL)&0x1f, 8));
  /* 11c63e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63e57 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c63e59 mov byte ptr [esi + 4], al */
  w8((uint32_t)(ESI + 0x4), (AL));
  /* 11c63e5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c63e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c63e62 je 0x11c63e6f */
  if (C.zf) goto L_11c63e6f;
  /* 11c63e64 push eax */
  push32((uint32_t)(EAX));
  /* 11c63e65 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63e66 call dword ptr [0x11c6e110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e110))), 0x11c63e6cu);
  /* 11c63e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c63e6f:;
  /* 11c63e6f mov eax, esi */
  EAX = (ESI);
  /* 11c63e71 pop esi */
  ESI = (pop32());
  /* 11c63e72 ret 8 */
  ESPCHK(0x11c63e40u, _esp0);
  ESP += 12; return;
}

/* FUN_10003e80 @ 0x11c63e80 (72 bytes, 41 insns) */
void f_11c63e80(void) {
  FTRACE(0x11c63e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63e80 push ebx */
  push32((uint32_t)(EBX));
  /* 11c63e81 mov ebx, dword ptr [0x11c6e18c] */
  EBX = (r32((uint32_t)(0x11c6e18c)));
  /* 11c63e87 push esi */
  push32((uint32_t)(ESI));
  /* 11c63e88 push edi */
  push32((uint32_t)(EDI));
  /* 11c63e89 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c63e8d mov esi, ecx */
  ESI = (ECX);
  /* 11c63e8f push edi */
  push32((uint32_t)(EDI));
  /* 11c63e90 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c63e92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63e94 push eax */
  push32((uint32_t)(EAX));
  /* 11c63e95 call ebx */
  call_ind((uint32_t)(EBX), 0x11c63e97u);
  /* 11c63e97 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c63e99 push edi */
  push32((uint32_t)(EDI));
  /* 11c63e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c63e9c push ecx */
  push32((uint32_t)(ECX));
  /* 11c63e9d call ebx */
  call_ind((uint32_t)(EBX), 0x11c63e9fu);
  /* 11c63e9f mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63ea1 push edi */
  push32((uint32_t)(EDI));
  /* 11c63ea2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c63ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11c63ea5 call ebx */
  call_ind((uint32_t)(EBX), 0x11c63ea7u);
  /* 11c63ea7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c63ea9 push edi */
  push32((uint32_t)(EDI));
  /* 11c63eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c63eac push eax */
  push32((uint32_t)(EAX));
  /* 11c63ead call ebx */
  call_ind((uint32_t)(EBX), 0x11c63eafu);
  /* 11c63eaf mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c63eb1 push edi */
  push32((uint32_t)(EDI));
  /* 11c63eb2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c63eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63eb5 call ebx */
  call_ind((uint32_t)(EBX), 0x11c63eb7u);
  /* 11c63eb7 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11c63eb9 push edi */
  push32((uint32_t)(EDI));
  /* 11c63eba push 5 */
  push32((uint32_t)(0x5u));
  /* 11c63ebc push edx */
  push32((uint32_t)(EDX));
  /* 11c63ebd call ebx */
  call_ind((uint32_t)(EBX), 0x11c63ebfu);
  /* 11c63ebf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63ec2 pop edi */
  EDI = (pop32());
  /* 11c63ec3 pop esi */
  ESI = (pop32());
  /* 11c63ec4 pop ebx */
  EBX = (pop32());
  /* 11c63ec5 ret 4 */
  ESPCHK(0x11c63e80u, _esp0);
  ESP += 8; return;
}

/* FUN_10003ed0 @ 0x11c63ed0 (36 bytes, 14 insns) */
void f_11c63ed0(void) {
  FTRACE(0x11c63ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63ed0 mov eax, ecx */
  EAX = (ECX);
  /* 11c63ed2 mov dl, 1 */
  DL = (0x1u);
  /* 11c63ed4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63ed8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c63eda shl dl, cl */
  DL = (sh_shl((uint32_t)(DL), (CL)&0x1f, 8));
  /* 11c63edc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11c63edf or cl, dl */
  { uint32_t _r=(CL)|(DL); CL = (_r); fl_logic(_r,8); }
  /* 11c63ee1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c63ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63ee4 push edx */
  push32((uint32_t)(EDX));
  /* 11c63ee5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11c63ee8 call dword ptr [0x11c6e10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e10c))), 0x11c63eeeu);
  /* 11c63eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63ef1 ret 4 */
  ESPCHK(0x11c63ed0u, _esp0);
  ESP += 8; return;
}

/* FUN_10003f00 @ 0x11c63f00 (38 bytes, 15 insns) */
void f_11c63f00(void) {
  FTRACE(0x11c63f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63f00 mov eax, ecx */
  EAX = (ECX);
  /* 11c63f02 mov dl, 1 */
  DL = (0x1u);
  /* 11c63f04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63f08 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c63f0a shl dl, cl */
  DL = (sh_shl((uint32_t)(DL), (CL)&0x1f, 8));
  /* 11c63f0c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11c63f0f not dl */
  DL = (~(DL));
  /* 11c63f11 and cl, dl */
  { uint32_t _r=(CL)&(DL); CL = (_r); fl_logic(_r,8); }
  /* 11c63f13 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c63f15 push ecx */
  push32((uint32_t)(ECX));
  /* 11c63f16 push edx */
  push32((uint32_t)(EDX));
  /* 11c63f17 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11c63f1a call dword ptr [0x11c6e10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e10c))), 0x11c63f20u);
  /* 11c63f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63f23 ret 4 */
  ESPCHK(0x11c63f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10003f30 @ 0x11c63f30 (22 bytes, 7 insns) */
void f_11c63f30(void) {
  FTRACE(0x11c63f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63f30 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c63f32 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c63f37 push eax */
  push32((uint32_t)(EAX));
  /* 11c63f38 mov byte ptr [ecx + 4], 0xff */
  w8((uint32_t)(ECX + 0x4), (0xffu));
  /* 11c63f3c call dword ptr [0x11c6e10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e10c))), 0x11c63f42u);
  /* 11c63f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63f45 ret  */
  ESPCHK(0x11c63f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f50 @ 0x11c63f50 (23 bytes, 6 insns) */
void f_11c63f50(void) {
  FTRACE(0x11c63f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63f50 call 0x11c63f68 */
  push32(0x11c63f55u); f_11c63f68();
  /* 11c63f55 call 0x11c643af */
  push32(0x11c63f5au); f_11c643af();
  /* 11c63f5a mov dword ptr [0x11c87814], eax */
  w32((uint32_t)(0x11c87814), (EAX));
  /* 11c63f5f call 0x11c6435f */
  push32(0x11c63f64u); f_11c6435f();
  /* 11c63f64 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11c63f66 ret  */
  ESPCHK(0x11c63f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f68 @ 0x11c63f68 (56 bytes, 8 insns) */
void f_11c63f68(void) {
  FTRACE(0x11c63f68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63f68 mov eax, 0x11c64788 */
  EAX = (0x11c64788u);
  /* 11c63f6d mov dword ptr [0x11c70684], 0x11c64432 */
  w32((uint32_t)(0x11c70684), (0x11c64432u));
  /* 11c63f77 mov dword ptr [0x11c70680], eax */
  w32((uint32_t)(0x11c70680), (EAX));
  /* 11c63f7c mov dword ptr [0x11c70688], 0x11c64498 */
  w32((uint32_t)(0x11c70688), (0x11c64498u));
  /* 11c63f86 mov dword ptr [0x11c7068c], 0x11c643d8 */
  w32((uint32_t)(0x11c7068c), (0x11c643d8u));
  /* 11c63f90 mov dword ptr [0x11c70690], 0x11c64480 */
  w32((uint32_t)(0x11c70690), (0x11c64480u));
  /* 11c63f9a mov dword ptr [0x11c70694], eax */
  w32((uint32_t)(0x11c70694), (EAX));
  /* 11c63f9f ret  */
  ESPCHK(0x11c63f68u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11c63fa0 (39 bytes, 16 insns) */
void f_11c63fa0(void) {
  FTRACE(0x11c63fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11c63fa3 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c63fa6 wait  */
  /* wait (no observable integer/reg state) */
  /* 11c63fa7 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11c63faa wait  */
  /* wait (no observable integer/reg state) */
  /* 11c63fab mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11c63faf or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11c63fb2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11c63fb6 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11c63fb9 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11c63fbc fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11c63fbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c63fc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c63fc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c63fc6 ret  */
  ESPCHK(0x11c63fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc7 @ 0x11c63fc7 (37 bytes, 18 insns) */
void f_11c63fc7(void) {
  FTRACE(0x11c63fc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63fc7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c63fc8 mov ebp, esp */
  EBP = (ESP);
  /* 11c63fca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c63fcd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c63fce idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c63fd1 mov ecx, eax */
  ECX = (EAX);
  /* 11c63fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c63fd6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c63fd7 idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c63fda cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c63fde jge 0x11c63fe8 */
  if ((C.sf==C.of)) goto L_11c63fe8;
  /* 11c63fe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c63fe2 jle 0x11c63fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c63fe8;
  /* 11c63fe4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c63fe5 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11c63fe8:;
  /* 11c63fe8 mov eax, ecx */
  EAX = (ECX);
  /* 11c63fea pop ebp */
  EBP = (pop32());
  /* 11c63feb ret  */
  ESPCHK(0x11c63fc7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fec @ 0x11c63fec (13 bytes, 4 insns) */
void f_11c63fec(void) {
  FTRACE(0x11c63fecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63fec call 0x11c64883 */
  push32(0x11c63ff1u); f_11c64883();
  /* 11c63ff1 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c63ff5 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11c63ff8 ret  */
  ESPCHK(0x11c63fecu, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11c63ff9 (34 bytes, 9 insns) */
void f_11c63ff9(void) {
  FTRACE(0x11c63ff9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c63ff9 call 0x11c64883 */
  push32(0x11c63ffeu); f_11c64883();
  /* 11c63ffe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11c64001 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c64007 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6400d mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11c64010 mov eax, ecx */
  EAX = (ECX);
  /* 11c64012 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c64015 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6401a ret  */
  ESPCHK(0x11c63ff9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000401b @ 0x11c6401b (220 bytes, 75 insns) */
void f_11c6401b(void) {
  FTRACE(0x11c6401bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6401b push ebp */
  push32((uint32_t)(EBP));
  /* 11c6401c mov ebp, esp */
  EBP = (ESP);
  /* 11c6401e sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64024 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c64027 push eax */
  push32((uint32_t)(EAX));
  /* 11c64028 call dword ptr [0x11c6e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0dc))), 0x11c6402eu);
  /* 11c6402e lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c64031 push eax */
  push32((uint32_t)(EAX));
  /* 11c64032 call dword ptr [0x11c6e0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0d8))), 0x11c64038u);
  /* 11c64038 mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11c6403c cmp ax, word ptr [0x11c8782a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c8782a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c64043 jne 0x11c64080 */
  if (!C.zf) goto L_11c64080;
  /* 11c64045 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11c64049 cmp ax, word ptr [0x11c87828] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c87828))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c64050 jne 0x11c64080 */
  if (!C.zf) goto L_11c64080;
  /* 11c64052 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11c64056 cmp ax, word ptr [0x11c87826] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c87826))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6405d jne 0x11c64080 */
  if (!C.zf) goto L_11c64080;
  /* 11c6405f mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11c64063 cmp ax, word ptr [0x11c87822] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c87822))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6406a jne 0x11c64080 */
  if (!C.zf) goto L_11c64080;
  /* 11c6406c mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11c64070 cmp ax, word ptr [0x11c87820] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11c87820))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c64077 jne 0x11c64080 */
  if (!C.zf) goto L_11c64080;
  /* 11c64079 mov eax, dword ptr [0x11c87818] */
  EAX = (r32((uint32_t)(0x11c87818)));
  /* 11c6407e jmp 0x11c640c5 */
  goto L_11c640c5;
L_11c64080:;
  /* 11c64080 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11c64086 push eax */
  push32((uint32_t)(EAX));
  /* 11c64087 call dword ptr [0x11c6e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0d4))), 0x11c6408du);
  /* 11c6408d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64090 je 0x11c640ad */
  if (C.zf) goto L_11c640ad;
  /* 11c64092 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64095 jne 0x11c640a9 */
  if (!C.zf) goto L_11c640a9;
  /* 11c64097 cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6409c je 0x11c640a9 */
  if (C.zf) goto L_11c640a9;
  /* 11c6409e cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c640a2 je 0x11c640a9 */
  if (C.zf) goto L_11c640a9;
  /* 11c640a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c640a6 pop eax */
  EAX = (pop32());
  /* 11c640a7 jmp 0x11c640b0 */
  goto L_11c640b0;
L_11c640a9:;
  /* 11c640a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c640ab jmp 0x11c640b0 */
  goto L_11c640b0;
L_11c640ad:;
  /* 11c640ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c640b0:;
  /* 11c640b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c640b1 push edi */
  push32((uint32_t)(EDI));
  /* 11c640b2 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11c640b5 mov edi, 0x11c87820 */
  EDI = (0x11c87820u);
  /* 11c640ba movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c640bb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c640bc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c640bd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c640be pop edi */
  EDI = (pop32());
  /* 11c640bf mov dword ptr [0x11c87818], eax */
  w32((uint32_t)(0x11c87818), (EAX));
  /* 11c640c4 pop esi */
  ESI = (pop32());
L_11c640c5:;
  /* 11c640c5 push eax */
  push32((uint32_t)(EAX));
  /* 11c640c6 movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11c640ca push eax */
  push32((uint32_t)(EAX));
  /* 11c640cb movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11c640cf push eax */
  push32((uint32_t)(EAX));
  /* 11c640d0 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11c640d4 push eax */
  push32((uint32_t)(EAX));
  /* 11c640d5 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11c640d9 push eax */
  push32((uint32_t)(EAX));
  /* 11c640da movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11c640de push eax */
  push32((uint32_t)(EAX));
  /* 11c640df movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11c640e3 push eax */
  push32((uint32_t)(EAX));
  /* 11c640e4 call 0x11c6498a */
  push32(0x11c640e9u); f_11c6498a();
  /* 11c640e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c640ec add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c640ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c640f1 je 0x11c640f5 */
  if (C.zf) goto L_11c640f5;
  /* 11c640f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c640f5:;
  /* 11c640f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c640f6 ret  */
  ESPCHK(0x11c6401bu, _esp0);
  ESP += 4; return;
}

/* FUN_100040f7 @ 0x11c640f7 (126 bytes, 37 insns) */
void f_11c640f7(void) {
  FTRACE(0x11c640f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c640f7 push esi */
  push32((uint32_t)(ESI));
  /* 11c640f8 call 0x11c64b3e */
  push32(0x11c640fdu); f_11c64b3e();
  /* 11c640fd push dword ptr [0x11c88f70] */
  push32((uint32_t)(r32((uint32_t)(0x11c88f70))));
  /* 11c64103 call 0x11c64e99 */
  push32(0x11c64108u); f_11c64e99();
  /* 11c64108 mov edx, dword ptr [0x11c88f70] */
  EDX = (r32((uint32_t)(0x11c88f70)));
  /* 11c6410e pop ecx */
  ECX = (pop32());
  /* 11c6410f mov ecx, dword ptr [0x11c88f6c] */
  ECX = (r32((uint32_t)(0x11c88f6c)));
  /* 11c64115 mov esi, ecx */
  ESI = (ECX);
  /* 11c64117 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64119 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6411c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6411e jae 0x11c6415d */
  if (!C.cf) goto L_11c6415d;
  /* 11c64120 push edx */
  push32((uint32_t)(EDX));
  /* 11c64121 call 0x11c64e99 */
  push32(0x11c64126u); f_11c64e99();
  /* 11c64126 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64129 push eax */
  push32((uint32_t)(EAX));
  /* 11c6412a push dword ptr [0x11c88f70] */
  push32((uint32_t)(r32((uint32_t)(0x11c88f70))));
  /* 11c64130 call 0x11c64b6a */
  push32(0x11c64135u); f_11c64b6a();
  /* 11c64135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6413a jne 0x11c64140 */
  if (!C.zf) goto L_11c64140;
  /* 11c6413c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6413e jmp 0x11c6416c */
  goto L_11c6416c;
L_11c64140:;
  /* 11c64140 mov ecx, dword ptr [0x11c88f6c] */
  ECX = (r32((uint32_t)(0x11c88f6c)));
  /* 11c64146 sub ecx, dword ptr [0x11c88f70] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c88f70))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6414c mov dword ptr [0x11c88f70], eax */
  w32((uint32_t)(0x11c88f70), (EAX));
  /* 11c64151 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c64154 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 11c64157 mov dword ptr [0x11c88f6c], ecx */
  w32((uint32_t)(0x11c88f6c), (ECX));
L_11c6415d:;
  /* 11c6415d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c64161 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c64163 add dword ptr [0x11c88f6c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x11c88f6c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x11c88f6c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6416a mov esi, eax */
  ESI = (EAX);
L_11c6416c:;
  /* 11c6416c call 0x11c64b47 */
  push32(0x11c64171u); f_11c64b47();
  /* 11c64171 mov eax, esi */
  EAX = (ESI);
  /* 11c64173 pop esi */
  ESI = (pop32());
  /* 11c64174 ret  */
  ESPCHK(0x11c640f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004175 @ 0x11c64175 (18 bytes, 8 insns) */
void f_11c64175(void) {
  FTRACE(0x11c64175u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64175 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c64179 call 0x11c640f7 */
  push32(0x11c6417eu); f_11c640f7();
  /* 11c6417e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c64180 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64182 pop ecx */
  ECX = (pop32());
  /* 11c64183 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c64185 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c64186 ret  */
  ESPCHK(0x11c64175u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b6 @ 0x11c641b6 (217 bytes, 57 insns) */
void f_11c641b6(void) {
  FTRACE(0x11c641b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c641b6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c641ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c641bd jne 0x11c6424b */
  if (!C.zf) goto L_11c6424b;
  /* 11c641c3 call dword ptr [0x11c6e0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0e4))), 0x11c641c9u);
  /* 11c641c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c641cb mov dword ptr [0x11c87848], eax */
  w32((uint32_t)(0x11c87848), (EAX));
  /* 11c641d0 call 0x11c6587e */
  push32(0x11c641d5u); f_11c6587e();
  /* 11c641d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c641d7 pop ecx */
  ECX = (pop32());
  /* 11c641d8 je 0x11c64216 */
  if (C.zf) goto L_11c64216;
  /* 11c641da mov eax, dword ptr [0x11c87848] */
  EAX = (r32((uint32_t)(0x11c87848)));
  /* 11c641df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c641e1 mov cl, byte ptr [0x11c87849] */
  CL = (r8((uint32_t)(0x11c87849)));
  /* 11c641e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c641ec shr dword ptr [0x11c87848], 0x10 */
  w32((uint32_t)(0x11c87848), (sh_shr((uint32_t)(r32((uint32_t)(0x11c87848))), (0x10u)&0x1f, 32)));
  /* 11c641f3 mov dword ptr [0x11c87850], eax */
  w32((uint32_t)(0x11c87850), (EAX));
  /* 11c641f8 mov dword ptr [0x11c87854], ecx */
  w32((uint32_t)(0x11c87854), (ECX));
  /* 11c641fe shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c64201 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64203 mov dword ptr [0x11c8784c], eax */
  w32((uint32_t)(0x11c8784c), (EAX));
  /* 11c64208 call 0x11c647fe */
  push32(0x11c6420du); f_11c647fe();
  /* 11c6420d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6420f jne 0x11c6421a */
  if (!C.zf) goto L_11c6421a;
  /* 11c64211 call 0x11c658db */
  push32(0x11c64216u); f_11c658db();
L_11c64216:;
  /* 11c64216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64218 jmp 0x11c6428c */
  goto L_11c6428c;
L_11c6421a:;
  /* 11c6421a call dword ptr [0x11c6e0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0e0))), 0x11c64220u);
  /* 11c64220 mov dword ptr [0x11c88f74], eax */
  w32((uint32_t)(0x11c88f74), (EAX));
  /* 11c64225 call 0x11c655d7 */
  push32(0x11c6422au); f_11c655d7();
  /* 11c6422a mov dword ptr [0x11c87834], eax */
  w32((uint32_t)(0x11c87834), (EAX));
  /* 11c6422f call 0x11c650c1 */
  push32(0x11c64234u); f_11c650c1();
  /* 11c64234 call 0x11c6538a */
  push32(0x11c64239u); f_11c6538a();
  /* 11c64239 call 0x11c652d1 */
  push32(0x11c6423eu); f_11c652d1();
  /* 11c6423e call 0x11c64a4c */
  push32(0x11c64243u); f_11c64a4c();
  /* 11c64243 inc dword ptr [0x11c87830] */
  { uint32_t _r=(r32((uint32_t)(0x11c87830)))+1; w32((uint32_t)(0x11c87830), (_r)); fl_inc(_r,32); }
  /* 11c64249 jmp 0x11c64289 */
  goto L_11c64289;
L_11c6424b:;
  /* 11c6424b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6424d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6424f jne 0x11c6427d */
  if (!C.zf) goto L_11c6427d;
  /* 11c64251 cmp dword ptr [0x11c87830], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c87830))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64257 jle 0x11c64216 */
  if ((C.zf||C.sf!=C.of)) goto L_11c64216;
  /* 11c64259 dec dword ptr [0x11c87830] */
  { uint32_t _r=(r32((uint32_t)(0x11c87830)))-1; w32((uint32_t)(0x11c87830), (_r)); fl_dec(_r,32); }
  /* 11c6425f cmp dword ptr [0x11c87880], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c87880))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64265 jne 0x11c6426c */
  if (!C.zf) goto L_11c6426c;
  /* 11c64267 call 0x11c64a8a */
  push32(0x11c6426cu); f_11c64a8a();
L_11c6426c:;
  /* 11c6426c call 0x11c6527d */
  push32(0x11c64271u); f_11c6527d();
  /* 11c64271 call 0x11c64852 */
  push32(0x11c64276u); f_11c64852();
  /* 11c64276 call 0x11c658db */
  push32(0x11c6427bu); f_11c658db();
  /* 11c6427b jmp 0x11c64289 */
  goto L_11c64289;
L_11c6427d:;
  /* 11c6427d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64280 jne 0x11c64289 */
  if (!C.zf) goto L_11c64289;
  /* 11c64282 push ecx */
  push32((uint32_t)(ECX));
  /* 11c64283 call 0x11c648ea */
  push32(0x11c64288u); f_11c648ea();
  /* 11c64288 pop ecx */
  ECX = (pop32());
L_11c64289:;
  /* 11c64289 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6428b pop eax */
  EAX = (pop32());
L_11c6428c:;
  /* 11c6428c ret 0xc */
  ESPCHK(0x11c641b6u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11c6428f (157 bytes, 73 insns) */
void f_11c6428f(void) {
  FTRACE(0x11c6428fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6428f push ebp */
  push32((uint32_t)(EBP));
  /* 11c64290 mov ebp, esp */
  EBP = (ESP);
  /* 11c64292 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64293 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64296 push esi */
  push32((uint32_t)(ESI));
  /* 11c64297 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6429a push edi */
  push32((uint32_t)(EDI));
  /* 11c6429b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6429e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c642a0 jne 0x11c642ab */
  if (!C.zf) goto L_11c642ab;
  /* 11c642a2 cmp dword ptr [0x11c87830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c642a9 jmp 0x11c642d1 */
  goto L_11c642d1;
L_11c642ab:;
  /* 11c642ab cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c642ae je 0x11c642b5 */
  if (C.zf) goto L_11c642b5;
  /* 11c642b0 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c642b3 jne 0x11c642d7 */
  if (!C.zf) goto L_11c642d7;
L_11c642b5:;
  /* 11c642b5 mov eax, dword ptr [0x11c88f78] */
  EAX = (r32((uint32_t)(0x11c88f78)));
  /* 11c642ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c642bc je 0x11c642c7 */
  if (C.zf) goto L_11c642c7;
  /* 11c642be push edi */
  push32((uint32_t)(EDI));
  /* 11c642bf push esi */
  push32((uint32_t)(ESI));
  /* 11c642c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c642c1 call eax */
  call_ind((uint32_t)(EAX), 0x11c642c3u);
  /* 11c642c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c642c5 je 0x11c642d3 */
  if (C.zf) goto L_11c642d3;
L_11c642c7:;
  /* 11c642c7 push edi */
  push32((uint32_t)(EDI));
  /* 11c642c8 push esi */
  push32((uint32_t)(ESI));
  /* 11c642c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c642ca call 0x11c641b6 */
  push32(0x11c642cfu); f_11c641b6();
  /* 11c642cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11c642d1:;
  /* 11c642d1 jne 0x11c642d7 */
  if (!C.zf) goto L_11c642d7;
L_11c642d3:;
  /* 11c642d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c642d5 jmp 0x11c64325 */
  goto L_11c64325;
L_11c642d7:;
  /* 11c642d7 push edi */
  push32((uint32_t)(EDI));
  /* 11c642d8 push esi */
  push32((uint32_t)(ESI));
  /* 11c642d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c642da call 0x11c627b0 */
  push32(0x11c642dfu); f_11c627b0();
  /* 11c642df cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c642e2 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c642e5 jne 0x11c642f3 */
  if (!C.zf) goto L_11c642f3;
  /* 11c642e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c642e9 jne 0x11c64322 */
  if (!C.zf) goto L_11c64322;
  /* 11c642eb push edi */
  push32((uint32_t)(EDI));
  /* 11c642ec push eax */
  push32((uint32_t)(EAX));
  /* 11c642ed push ebx */
  push32((uint32_t)(EBX));
  /* 11c642ee call 0x11c641b6 */
  push32(0x11c642f3u); f_11c641b6();
L_11c642f3:;
  /* 11c642f3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c642f5 je 0x11c642fc */
  if (C.zf) goto L_11c642fc;
  /* 11c642f7 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c642fa jne 0x11c64322 */
  if (!C.zf) goto L_11c64322;
L_11c642fc:;
  /* 11c642fc push edi */
  push32((uint32_t)(EDI));
  /* 11c642fd push esi */
  push32((uint32_t)(ESI));
  /* 11c642fe push ebx */
  push32((uint32_t)(EBX));
  /* 11c642ff call 0x11c641b6 */
  push32(0x11c64304u); f_11c641b6();
  /* 11c64304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64306 jne 0x11c6430b */
  if (!C.zf) goto L_11c6430b;
  /* 11c64308 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11c6430b:;
  /* 11c6430b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6430f je 0x11c64322 */
  if (C.zf) goto L_11c64322;
  /* 11c64311 mov eax, dword ptr [0x11c88f78] */
  EAX = (r32((uint32_t)(0x11c88f78)));
  /* 11c64316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64318 je 0x11c64322 */
  if (C.zf) goto L_11c64322;
  /* 11c6431a push edi */
  push32((uint32_t)(EDI));
  /* 11c6431b push esi */
  push32((uint32_t)(ESI));
  /* 11c6431c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6431d call eax */
  call_ind((uint32_t)(EAX), 0x11c6431fu);
  /* 11c6431f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11c64322:;
  /* 11c64322 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c64325:;
  /* 11c64325 pop edi */
  EDI = (pop32());
  /* 11c64326 pop esi */
  ESI = (pop32());
  /* 11c64327 pop ebx */
  EBX = (pop32());
  /* 11c64328 pop ebp */
  EBP = (pop32());
  /* 11c64329 ret 0xc */
  ESPCHK(0x11c6428fu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11c6432c (48 bytes, 15 insns) */
void f_11c6432c(void) {
  FTRACE(0x11c6432cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6432c mov eax, dword ptr [0x11c8783c] */
  EAX = (r32((uint32_t)(0x11c8783c)));
  /* 11c64331 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64334 je 0x11c64343 */
  if (C.zf) goto L_11c64343;
  /* 11c64336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64338 jne 0x11c64348 */
  if (!C.zf) goto L_11c64348;
  /* 11c6433a cmp dword ptr [0x11c87840], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c87840))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64341 jne 0x11c64348 */
  if (!C.zf) goto L_11c64348;
L_11c64343:;
  /* 11c64343 call 0x11c65983 */
  push32(0x11c64348u); f_11c65983();
L_11c64348:;
  /* 11c64348 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6434c call 0x11c659bc */
  push32(0x11c64351u); f_11c659bc();
  /* 11c64351 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c64356 call dword ptr [0x11c7067c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c7067c))), 0x11c6435cu);
  /* 11c6435c pop ecx */
  ECX = (pop32());
  /* 11c6435d pop ecx */
  ECX = (pop32());
  /* 11c6435e ret  */
  ESPCHK(0x11c6432cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000435f @ 0x11c6435f (18 bytes, 6 insns) */
void f_11c6435f(void) {
  FTRACE(0x11c6435fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6435f push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11c64364 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11c64369 call 0x11c65b44 */
  push32(0x11c6436eu); f_11c65b44();
  /* 11c6436e pop ecx */
  ECX = (pop32());
  /* 11c6436f pop ecx */
  ECX = (pop32());
  /* 11c64370 ret  */
  ESPCHK(0x11c6435fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004371 @ 0x11c64371 (62 bytes, 24 insns) */
void f_11c64371(void) {
  FTRACE(0x11c64371u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64371 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64372 mov ebp, esp */
  EBP = (ESP);
  /* 11c64374 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64377 fld qword ptr [0x11c6e218] */
  fpu_push(rf64((uint32_t)(0x11c6e218)));
  /* 11c6437d fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11c64380 fld qword ptr [0x11c6e210] */
  fpu_push(rf64((uint32_t)(0x11c6e210)));
  /* 11c64386 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11c64389 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11c6438c fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11c6438f fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11c64392 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11c64395 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11c64398 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11c6439b fcomp qword ptr [0x11c6e208] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11c6e208)));
  (void)fpu_pop();
  /* 11c643a1 fnstsw ax */
  AX = fpu_status();
  /* 11c643a3 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11c643a4 jbe 0x11c643ab */
  if ((C.cf||C.zf)) goto L_11c643ab;
  /* 11c643a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c643a8 pop eax */
  EAX = (pop32());
  /* 11c643a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c643aa ret  */
  ESPCHK(0x11c64371u, _esp0);
  ESP += 4; return;
L_11c643ab:;
  /* 11c643ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c643ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c643ae ret  */
  ESPCHK(0x11c64371u, _esp0);
  ESP += 4; return;
}

/* FUN_100043af @ 0x11c643af (41 bytes, 13 insns) */
void f_11c643af(void) {
  FTRACE(0x11c643afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c643af push 0x11c6e23c */
  push32((uint32_t)(0x11c6e23cu));
  /* 11c643b4 call dword ptr [0x11c6e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e004))), 0x11c643bau);
  /* 11c643ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c643bc je 0x11c643d3 */
  if (C.zf) goto L_11c643d3;
  /* 11c643be push 0x11c6e220 */
  push32((uint32_t)(0x11c6e220u));
  /* 11c643c3 push eax */
  push32((uint32_t)(EAX));
  /* 11c643c4 call dword ptr [0x11c6e0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0e8))), 0x11c643cau);
  /* 11c643ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c643cc je 0x11c643d3 */
  if (C.zf) goto L_11c643d3;
  /* 11c643ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11c643d0 call eax */
  call_ind((uint32_t)(EAX), 0x11c643d2u);
  /* 11c643d2 ret  */
  ESPCHK(0x11c643afu, _esp0);
  ESP += 4; return;
L_11c643d3:;
  /* 11c643d3 jmp 0x11c64371 */
  f_11c64371(); return;
}

/* FUN_100043d8 @ 0x11c643d8 (90 bytes, 37 insns) */
void f_11c643d8(void) {
  FTRACE(0x11c643d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c643d8 push esi */
  push32((uint32_t)(ESI));
  /* 11c643d9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c643dd movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c643e0 push eax */
  push32((uint32_t)(EAX));
  /* 11c643e1 call 0x11c65cea */
  push32(0x11c643e6u); f_11c65cea();
  /* 11c643e6 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c643e9 pop ecx */
  ECX = (pop32());
  /* 11c643ea je 0x11c64418 */
  if (C.zf) goto L_11c64418;
L_11c643ec:;
  /* 11c643ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c643ed cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c643f4 jle 0x11c64405 */
  if ((C.zf||C.sf!=C.of)) goto L_11c64405;
  /* 11c643f6 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c643f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c643fb push eax */
  push32((uint32_t)(EAX));
  /* 11c643fc call 0x11c65c75 */
  push32(0x11c64401u); f_11c65c75();
  /* 11c64401 pop ecx */
  ECX = (pop32());
  /* 11c64402 pop ecx */
  ECX = (pop32());
  /* 11c64403 jmp 0x11c64414 */
  goto L_11c64414;
L_11c64405:;
  /* 11c64405 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c64408 mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6440e mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c64411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c64414:;
  /* 11c64414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64416 jne 0x11c643ec */
  if (!C.zf) goto L_11c643ec;
L_11c64418:;
  /* 11c64418 mov cl, byte ptr [0x11c70764] */
  CL = (r8((uint32_t)(0x11c70764)));
  /* 11c6441e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c64420 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11c64422 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c64423:;
  /* 11c64423 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c64425 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11c64427 mov al, cl */
  AL = (CL);
  /* 11c64429 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11c6442b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6442c test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c6442e jne 0x11c64423 */
  if (!C.zf) goto L_11c64423;
  /* 11c64430 pop esi */
  ESI = (pop32());
  /* 11c64431 ret  */
  ESPCHK(0x11c643d8u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11c64498 (62 bytes, 29 insns) */
void f_11c64498(void) {
  FTRACE(0x11c64498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64498 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64499 mov ebp, esp */
  EBP = (ESP);
  /* 11c6449b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6449c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6449d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c644a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c644a4 je 0x11c644c1 */
  if (C.zf) goto L_11c644c1;
  /* 11c644a6 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c644a9 push eax */
  push32((uint32_t)(EAX));
  /* 11c644aa call 0x11c661b6 */
  push32(0x11c644afu); f_11c661b6();
  /* 11c644af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c644b2 pop ecx */
  ECX = (pop32());
  /* 11c644b3 pop ecx */
  ECX = (pop32());
  /* 11c644b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c644b7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c644b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c644bc mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c644bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c644c0 ret  */
  ESPCHK(0x11c64498u, _esp0);
  ESP += 4; return;
L_11c644c1:;
  /* 11c644c1 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11c644c4 push eax */
  push32((uint32_t)(EAX));
  /* 11c644c5 call 0x11c661e3 */
  push32(0x11c644cau); f_11c661e3();
  /* 11c644ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c644cd pop ecx */
  ECX = (pop32());
  /* 11c644ce pop ecx */
  ECX = (pop32());
  /* 11c644cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c644d2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c644d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c644d5 ret  */
  ESPCHK(0x11c64498u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d6 @ 0x11c644d6 (97 bytes, 42 insns) */
void f_11c644d6(void) {
  FTRACE(0x11c644d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c644d6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c644d7 mov ebp, esp */
  EBP = (ESP);
  /* 11c644d9 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c644dc lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c644df push esi */
  push32((uint32_t)(ESI));
  /* 11c644e0 push eax */
  push32((uint32_t)(EAX));
  /* 11c644e1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c644e4 push eax */
  push32((uint32_t)(EAX));
  /* 11c644e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c644e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c644e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c644ea fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c644ec fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c644ef call 0x11c66287 */
  push32(0x11c644f4u); f_11c66287();
  /* 11c644f4 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c644f7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c644fa push eax */
  push32((uint32_t)(EAX));
  /* 11c644fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c644fe lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11c64501 push eax */
  push32((uint32_t)(EAX));
  /* 11c64502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64504 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64508 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c6450b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6450d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6450f setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c64512 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64514 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64516 push ecx */
  push32((uint32_t)(ECX));
  /* 11c64517 call 0x11c66210 */
  push32(0x11c6451cu); f_11c66210();
  /* 11c6451c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6451f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64521 push eax */
  push32((uint32_t)(EAX));
  /* 11c64522 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c64525 push esi */
  push32((uint32_t)(ESI));
  /* 11c64526 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c64529 call 0x11c64537 */
  push32(0x11c6452eu); f_11c64537();
  /* 11c6452e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c64531 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64534 pop esi */
  ESI = (pop32());
  /* 11c64535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c64536 ret  */
  ESPCHK(0x11c644d6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004537 @ 0x11c64537 (194 bytes, 91 insns) */
void f_11c64537(void) {
  FTRACE(0x11c64537u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64537 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64538 mov ebp, esp */
  EBP = (ESP);
  /* 11c6453a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6453b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6453d cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c64540 push esi */
  push32((uint32_t)(ESI));
  /* 11c64541 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c64544 push edi */
  push32((uint32_t)(EDI));
  /* 11c64545 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64548 je 0x11c64565 */
  if (C.zf) goto L_11c64565;
  /* 11c6454a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6454c cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6454f setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11c64552 push eax */
  push32((uint32_t)(EAX));
  /* 11c64553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64555 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64558 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c6455b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6455d push eax */
  push32((uint32_t)(EAX));
  /* 11c6455e call 0x11c647d9 */
  push32(0x11c64563u); f_11c647d9();
  /* 11c64563 pop ecx */
  ECX = (pop32());
  /* 11c64564 pop ecx */
  ECX = (pop32());
L_11c64565:;
  /* 11c64565 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64568 mov eax, edi */
  EAX = (EDI);
  /* 11c6456a jne 0x11c64572 */
  if (!C.zf) goto L_11c64572;
  /* 11c6456c mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11c6456f lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11c64572:;
  /* 11c64572 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64575 jle 0x11c64589 */
  if ((C.zf||C.sf!=C.of)) goto L_11c64589;
  /* 11c64577 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c6457a lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c6457d mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c6457f mov eax, ecx */
  EAX = (ECX);
  /* 11c64581 mov cl, byte ptr [0x11c70764] */
  CL = (r8((uint32_t)(0x11c70764)));
  /* 11c64587 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11c64589:;
  /* 11c64589 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6458b cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6458e push 0x11c6e250 */
  push32((uint32_t)(0x11c6e250u));
  /* 11c64593 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11c64596 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64598 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6459b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6459c call 0x11c663a0 */
  push32(0x11c645a1u); f_11c663a0();
  /* 11c645a1 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c645a4 pop ecx */
  ECX = (pop32());
  /* 11c645a5 pop ecx */
  ECX = (pop32());
  /* 11c645a6 mov ecx, eax */
  ECX = (EAX);
  /* 11c645a8 je 0x11c645ad */
  if (C.zf) goto L_11c645ad;
  /* 11c645aa mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11c645ad:;
  /* 11c645ad mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c645b0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c645b1 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c645b4 je 0x11c645f2 */
  if (C.zf) goto L_11c645f2;
  /* 11c645b6 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c645b9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c645ba jns 0x11c645c1 */
  if (!C.sf) goto L_11c645c1;
  /* 11c645bc neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c645be mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11c645c1:;
  /* 11c645c1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c645c2 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c645c5 jl 0x11c645d8 */
  if ((C.sf!=C.of)) goto L_11c645d8;
  /* 11c645c7 mov eax, ebx */
  EAX = (EBX);
  /* 11c645c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11c645cb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c645cc pop esi */
  ESI = (pop32());
  /* 11c645cd idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c645cf add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11c645d1 mov eax, ebx */
  EAX = (EBX);
  /* 11c645d3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c645d4 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c645d6 mov ebx, edx */
  EBX = (EDX);
L_11c645d8:;
  /* 11c645d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c645d9 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c645dc jl 0x11c645ef */
  if ((C.sf!=C.of)) goto L_11c645ef;
  /* 11c645de mov eax, ebx */
  EAX = (EBX);
  /* 11c645e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c645e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c645e3 pop esi */
  ESI = (pop32());
  /* 11c645e4 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c645e6 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11c645e8 mov eax, ebx */
  EAX = (EBX);
  /* 11c645ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c645eb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c645ed mov ebx, edx */
  EBX = (EDX);
L_11c645ef:;
  /* 11c645ef add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11c645f2:;
  /* 11c645f2 mov eax, edi */
  EAX = (EDI);
  /* 11c645f4 pop edi */
  EDI = (pop32());
  /* 11c645f5 pop esi */
  ESI = (pop32());
  /* 11c645f6 pop ebx */
  EBX = (pop32());
  /* 11c645f7 pop ebp */
  EBP = (pop32());
  /* 11c645f8 ret  */
  ESPCHK(0x11c64537u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f9 @ 0x11c645f9 (85 bytes, 37 insns) */
void f_11c645f9(void) {
  FTRACE(0x11c645f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c645f9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c645fa mov ebp, esp */
  EBP = (ESP);
  /* 11c645fc sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c645ff lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c64602 push esi */
  push32((uint32_t)(ESI));
  /* 11c64603 push eax */
  push32((uint32_t)(EAX));
  /* 11c64604 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c64607 push eax */
  push32((uint32_t)(EAX));
  /* 11c64608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6460b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6460c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6460d fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c6460f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c64612 call 0x11c66287 */
  push32(0x11c64617u); f_11c66287();
  /* 11c64617 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6461a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6461d push eax */
  push32((uint32_t)(EAX));
  /* 11c6461e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c64621 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64623 push eax */
  push32((uint32_t)(EAX));
  /* 11c64624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64626 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6462a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c6462d add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64630 push eax */
  push32((uint32_t)(EAX));
  /* 11c64631 call 0x11c66210 */
  push32(0x11c64636u); f_11c66210();
  /* 11c64636 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c64639 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6463b push eax */
  push32((uint32_t)(EAX));
  /* 11c6463c push esi */
  push32((uint32_t)(ESI));
  /* 11c6463d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c64640 call 0x11c6464e */
  push32(0x11c64645u); f_11c6464e();
  /* 11c64645 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c64648 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6464b pop esi */
  ESI = (pop32());
  /* 11c6464c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6464d ret  */
  ESPCHK(0x11c645f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000464e @ 0x11c6464e (167 bytes, 73 insns) */
void f_11c6464e(void) {
  FTRACE(0x11c6464eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6464e push ebp */
  push32((uint32_t)(EBP));
  /* 11c6464f mov ebp, esp */
  EBP = (ESP);
  /* 11c64651 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64652 push esi */
  push32((uint32_t)(ESI));
  /* 11c64653 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c64656 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64659 push edi */
  push32((uint32_t)(EDI));
  /* 11c6465a mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6465d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6465e cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c64662 je 0x11c6467e */
  if (C.zf) goto L_11c6467e;
  /* 11c64664 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64667 jne 0x11c6467e */
  if (!C.zf) goto L_11c6467e;
  /* 11c64669 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6466b cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6466e sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11c64671 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64673 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64675 mov eax, ecx */
  EAX = (ECX);
  /* 11c64677 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c6467a and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11c6467e:;
  /* 11c6467e cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64681 mov edi, ebx */
  EDI = (EBX);
  /* 11c64683 jne 0x11c6468b */
  if (!C.zf) goto L_11c6468b;
  /* 11c64685 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11c64688 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11c6468b:;
  /* 11c6468b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6468e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64690 jg 0x11c646a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c646a2;
  /* 11c64692 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64694 push edi */
  push32((uint32_t)(EDI));
  /* 11c64695 call 0x11c647d9 */
  push32(0x11c6469au); f_11c647d9();
  /* 11c6469a pop ecx */
  ECX = (pop32());
  /* 11c6469b mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11c6469e pop ecx */
  ECX = (pop32());
  /* 11c6469f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c646a0 jmp 0x11c646a4 */
  goto L_11c646a4;
L_11c646a2:;
  /* 11c646a2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c646a4:;
  /* 11c646a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c646a8 jle 0x11c646ee */
  if ((C.zf||C.sf!=C.of)) goto L_11c646ee;
  /* 11c646aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c646ac push edi */
  push32((uint32_t)(EDI));
  /* 11c646ad call 0x11c647d9 */
  push32(0x11c646b2u); f_11c647d9();
  /* 11c646b2 mov al, byte ptr [0x11c70764] */
  AL = (r8((uint32_t)(0x11c70764)));
  /* 11c646b7 pop ecx */
  ECX = (pop32());
  /* 11c646b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c646ba mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c646bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c646be pop ecx */
  ECX = (pop32());
  /* 11c646bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c646c1 jge 0x11c646ee */
  if ((C.sf==C.of)) goto L_11c646ee;
  /* 11c646c3 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c646c7 je 0x11c646cd */
  if (C.zf) goto L_11c646cd;
  /* 11c646c9 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c646cb jmp 0x11c646d4 */
  goto L_11c646d4;
L_11c646cd:;
  /* 11c646cd neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c646cf cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c646d2 jl 0x11c646d7 */
  if ((C.sf!=C.of)) goto L_11c646d7;
L_11c646d4:;
  /* 11c646d4 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c646d7:;
  /* 11c646d7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c646da push edi */
  push32((uint32_t)(EDI));
  /* 11c646db call 0x11c647d9 */
  push32(0x11c646e0u); f_11c647d9();
  /* 11c646e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c646e3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11c646e5 push edi */
  push32((uint32_t)(EDI));
  /* 11c646e6 call 0x11c66490 */
  push32(0x11c646ebu); f_11c66490();
  /* 11c646eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c646ee:;
  /* 11c646ee pop edi */
  EDI = (pop32());
  /* 11c646ef mov eax, ebx */
  EAX = (EBX);
  /* 11c646f1 pop esi */
  ESI = (pop32());
  /* 11c646f2 pop ebx */
  EBX = (pop32());
  /* 11c646f3 pop ebp */
  EBP = (pop32());
  /* 11c646f4 ret  */
  ESPCHK(0x11c6464eu, _esp0);
  ESP += 4; return;
}

/* FUN_100046f5 @ 0x11c646f5 (147 bytes, 66 insns) */
void f_11c646f5(void) {
  FTRACE(0x11c646f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c646f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c646f6 mov ebp, esp */
  EBP = (ESP);
  /* 11c646f8 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c646fb push ebx */
  push32((uint32_t)(EBX));
  /* 11c646fc push esi */
  push32((uint32_t)(ESI));
  /* 11c646fd lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c64700 push edi */
  push32((uint32_t)(EDI));
  /* 11c64701 push eax */
  push32((uint32_t)(EAX));
  /* 11c64702 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c64705 push eax */
  push32((uint32_t)(EAX));
  /* 11c64706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64709 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6470a push ecx */
  push32((uint32_t)(ECX));
  /* 11c6470b fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11c6470d fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11c64710 call 0x11c66287 */
  push32(0x11c64715u); f_11c66287();
  /* 11c64715 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c64718 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6471b lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11c6471e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64720 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64724 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c64727 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6472a mov edi, eax */
  EDI = (EAX);
  /* 11c6472c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6472f push eax */
  push32((uint32_t)(EAX));
  /* 11c64730 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64731 push edi */
  push32((uint32_t)(EDI));
  /* 11c64732 call 0x11c66210 */
  push32(0x11c64737u); f_11c66210();
  /* 11c64737 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6473a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6473d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6473e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64740 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11c64743 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64746 jl 0x11c6476e */
  if ((C.sf!=C.of)) goto L_11c6476e;
  /* 11c64748 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6474a jge 0x11c6476e */
  if ((C.sf==C.of)) goto L_11c6476e;
  /* 11c6474c test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c6474e je 0x11c6475a */
  if (C.zf) goto L_11c6475a;
L_11c64750:;
  /* 11c64750 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c64752 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c64753 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c64755 jne 0x11c64750 */
  if (!C.zf) goto L_11c64750;
  /* 11c64757 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11c6475a:;
  /* 11c6475a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6475d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6475f push eax */
  push32((uint32_t)(EAX));
  /* 11c64760 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64761 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c64764 call 0x11c6464e */
  push32(0x11c64769u); f_11c6464e();
  /* 11c64769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6476c jmp 0x11c64783 */
  goto L_11c64783;
L_11c6476e:;
  /* 11c6476e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c64771 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64773 push eax */
  push32((uint32_t)(EAX));
  /* 11c64774 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c64777 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64778 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6477b call 0x11c64537 */
  push32(0x11c64780u); f_11c64537();
  /* 11c64780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c64783:;
  /* 11c64783 pop edi */
  EDI = (pop32());
  /* 11c64784 pop esi */
  ESI = (pop32());
  /* 11c64785 pop ebx */
  EBX = (pop32());
  /* 11c64786 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c64787 ret  */
  ESPCHK(0x11c646f5u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11c64788 (81 bytes, 29 insns) */
void f_11c64788(void) {
  FTRACE(0x11c64788u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64788 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64789 mov ebp, esp */
  EBP = (ESP);
  /* 11c6478b cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6478f je 0x11c647c3 */
  if (C.zf) goto L_11c647c3;
  /* 11c64791 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64795 je 0x11c647c3 */
  if (C.zf) goto L_11c647c3;
  /* 11c64797 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6479b jne 0x11c647b0 */
  if (!C.zf) goto L_11c647b0;
  /* 11c6479d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c647a0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c647a3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c647a6 call 0x11c645f9 */
  push32(0x11c647abu); f_11c645f9();
  /* 11c647ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c647ae pop ebp */
  EBP = (pop32());
  /* 11c647af ret  */
  ESPCHK(0x11c64788u, _esp0);
  ESP += 4; return;
L_11c647b0:;
  /* 11c647b0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c647b3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c647b6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c647b9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c647bc call 0x11c646f5 */
  push32(0x11c647c1u); f_11c646f5();
  /* 11c647c1 jmp 0x11c647d4 */
  goto L_11c647d4;
L_11c647c3:;
  /* 11c647c3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c647c6 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c647c9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c647cc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c647cf call 0x11c644d6 */
  push32(0x11c647d4u); f_11c644d6();
L_11c647d4:;
  /* 11c647d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c647d7 pop ebp */
  EBP = (pop32());
  /* 11c647d8 ret  */
  ESPCHK(0x11c64788u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d9 @ 0x11c647d9 (37 bytes, 18 insns) */
void f_11c647d9(void) {
  FTRACE(0x11c647d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c647d9 push edi */
  push32((uint32_t)(EDI));
  /* 11c647da mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c647de test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c647e0 je 0x11c647fc */
  if (C.zf) goto L_11c647fc;
  /* 11c647e2 push esi */
  push32((uint32_t)(ESI));
  /* 11c647e3 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c647e7 push esi */
  push32((uint32_t)(ESI));
  /* 11c647e8 call 0x11c66830 */
  push32(0x11c647edu); f_11c66830();
  /* 11c647ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c647ee push eax */
  push32((uint32_t)(EAX));
  /* 11c647ef push esi */
  push32((uint32_t)(ESI));
  /* 11c647f0 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c647f2 push esi */
  push32((uint32_t)(ESI));
  /* 11c647f3 call 0x11c664f0 */
  push32(0x11c647f8u); f_11c664f0();
  /* 11c647f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c647fb pop esi */
  ESI = (pop32());
L_11c647fc:;
  /* 11c647fc pop edi */
  EDI = (pop32());
  /* 11c647fd ret  */
  ESPCHK(0x11c647d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100047fe @ 0x11c647fe (84 bytes, 32 insns) */
void f_11c647fe(void) {
  FTRACE(0x11c647feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c647fe push esi */
  push32((uint32_t)(ESI));
  /* 11c647ff call 0x11c669f1 */
  push32(0x11c64804u); f_11c669f1();
  /* 11c64804 call dword ptr [0x11c6e0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0f4))), 0x11c6480au);
  /* 11c6480a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6480d mov dword ptr [0x11c70698], eax */
  w32((uint32_t)(0x11c70698), (EAX));
  /* 11c64812 je 0x11c6484e */
  if (C.zf) goto L_11c6484e;
  /* 11c64814 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c64816 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64818 call 0x11c668b4 */
  push32(0x11c6481du); f_11c668b4();
  /* 11c6481d mov esi, eax */
  ESI = (EAX);
  /* 11c6481f pop ecx */
  ECX = (pop32());
  /* 11c64820 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c64822 pop ecx */
  ECX = (pop32());
  /* 11c64823 je 0x11c6484e */
  if (C.zf) goto L_11c6484e;
  /* 11c64825 push esi */
  push32((uint32_t)(ESI));
  /* 11c64826 push dword ptr [0x11c70698] */
  push32((uint32_t)(r32((uint32_t)(0x11c70698))));
  /* 11c6482c call dword ptr [0x11c6e0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0f0))), 0x11c64832u);
  /* 11c64832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64834 je 0x11c6484e */
  if (C.zf) goto L_11c6484e;
  /* 11c64836 push esi */
  push32((uint32_t)(ESI));
  /* 11c64837 call 0x11c64870 */
  push32(0x11c6483cu); f_11c64870();
  /* 11c6483c pop ecx */
  ECX = (pop32());
  /* 11c6483d call dword ptr [0x11c6e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e000))), 0x11c64843u);
  /* 11c64843 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c64847 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64849 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6484b pop eax */
  EAX = (pop32());
  /* 11c6484c pop esi */
  ESI = (pop32());
  /* 11c6484d ret  */
  ESPCHK(0x11c647feu, _esp0);
  ESP += 4; return;
L_11c6484e:;
  /* 11c6484e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64850 pop esi */
  ESI = (pop32());
  /* 11c64851 ret  */
  ESPCHK(0x11c647feu, _esp0);
  ESP += 4; return;
}

/* FUN_10004852 @ 0x11c64852 (30 bytes, 8 insns) */
void f_11c64852(void) {
  FTRACE(0x11c64852u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64852 call 0x11c66a1a */
  push32(0x11c64857u); f_11c66a1a();
  /* 11c64857 mov eax, dword ptr [0x11c70698] */
  EAX = (r32((uint32_t)(0x11c70698)));
  /* 11c6485c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6485f je 0x11c6486f */
  if (C.zf) goto L_11c6486f;
  /* 11c64861 push eax */
  push32((uint32_t)(EAX));
  /* 11c64862 call dword ptr [0x11c6e0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0f8))), 0x11c64868u);
  /* 11c64868 or dword ptr [0x11c70698], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c70698)))|(0xffffffffu); w32((uint32_t)(0x11c70698), (_r)); fl_logic(_r,32); }
L_11c6486f:;
  /* 11c6486f ret  */
  ESPCHK(0x11c64852u, _esp0);
  ESP += 4; return;
}

/* FUN_10004870 @ 0x11c64870 (19 bytes, 4 insns) */
void f_11c64870(void) {
  FTRACE(0x11c64870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64870 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c64874 mov dword ptr [eax + 0x50], 0x11c70a70 */
  w32((uint32_t)(EAX + 0x50), (0x11c70a70u));
  /* 11c6487b mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11c64882 ret  */
  ESPCHK(0x11c64870u, _esp0);
  ESP += 4; return;
}

/* FUN_10004883 @ 0x11c64883 (103 bytes, 38 insns) */
void f_11c64883(void) {
  FTRACE(0x11c64883u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64883 push esi */
  push32((uint32_t)(ESI));
  /* 11c64884 push edi */
  push32((uint32_t)(EDI));
  /* 11c64885 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6488bu);
  /* 11c6488b push dword ptr [0x11c70698] */
  push32((uint32_t)(r32((uint32_t)(0x11c70698))));
  /* 11c64891 mov edi, eax */
  EDI = (EAX);
  /* 11c64893 call dword ptr [0x11c6e100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e100))), 0x11c64899u);
  /* 11c64899 mov esi, eax */
  ESI = (EAX);
  /* 11c6489b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6489d jne 0x11c648de */
  if (!C.zf) goto L_11c648de;
  /* 11c6489f push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c648a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c648a3 call 0x11c668b4 */
  push32(0x11c648a8u); f_11c668b4();
  /* 11c648a8 mov esi, eax */
  ESI = (EAX);
  /* 11c648aa pop ecx */
  ECX = (pop32());
  /* 11c648ab test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c648ad pop ecx */
  ECX = (pop32());
  /* 11c648ae je 0x11c648d6 */
  if (C.zf) goto L_11c648d6;
  /* 11c648b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c648b1 push dword ptr [0x11c70698] */
  push32((uint32_t)(r32((uint32_t)(0x11c70698))));
  /* 11c648b7 call dword ptr [0x11c6e0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0f0))), 0x11c648bdu);
  /* 11c648bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c648bf je 0x11c648d6 */
  if (C.zf) goto L_11c648d6;
  /* 11c648c1 push esi */
  push32((uint32_t)(ESI));
  /* 11c648c2 call 0x11c64870 */
  push32(0x11c648c7u); f_11c64870();
  /* 11c648c7 pop ecx */
  ECX = (pop32());
  /* 11c648c8 call dword ptr [0x11c6e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e000))), 0x11c648ceu);
  /* 11c648ce or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c648d2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c648d4 jmp 0x11c648de */
  goto L_11c648de;
L_11c648d6:;
  /* 11c648d6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c648d8 call 0x11c6432c */
  push32(0x11c648ddu); f_11c6432c();
  /* 11c648dd pop ecx */
  ECX = (pop32());
L_11c648de:;
  /* 11c648de push edi */
  push32((uint32_t)(EDI));
  /* 11c648df call dword ptr [0x11c6e0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0fc))), 0x11c648e5u);
  /* 11c648e5 mov eax, esi */
  EAX = (ESI);
  /* 11c648e7 pop edi */
  EDI = (pop32());
  /* 11c648e8 pop esi */
  ESI = (pop32());
  /* 11c648e9 ret  */
  ESPCHK(0x11c64883u, _esp0);
  ESP += 4; return;
}

/* FUN_100048ea @ 0x11c648ea (160 bytes, 62 insns) */
void f_11c648ea(void) {
  FTRACE(0x11c648eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c648ea mov eax, dword ptr [0x11c70698] */
  EAX = (r32((uint32_t)(0x11c70698)));
  /* 11c648ef cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c648f2 je 0x11c64989 */
  if (C.zf) goto L_11c64989;
  /* 11c648f8 push esi */
  push32((uint32_t)(ESI));
  /* 11c648f9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c648fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c648ff jne 0x11c6490e */
  if (!C.zf) goto L_11c6490e;
  /* 11c64901 push eax */
  push32((uint32_t)(EAX));
  /* 11c64902 call dword ptr [0x11c6e100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e100))), 0x11c64908u);
  /* 11c64908 mov esi, eax */
  ESI = (EAX);
  /* 11c6490a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6490c je 0x11c6497a */
  if (C.zf) goto L_11c6497a;
L_11c6490e:;
  /* 11c6490e mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c64911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64913 je 0x11c6491c */
  if (C.zf) goto L_11c6491c;
  /* 11c64915 push eax */
  push32((uint32_t)(EAX));
  /* 11c64916 call 0x11c66afc */
  push32(0x11c6491bu); f_11c66afc();
  /* 11c6491b pop ecx */
  ECX = (pop32());
L_11c6491c:;
  /* 11c6491c mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6491f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64921 je 0x11c6492a */
  if (C.zf) goto L_11c6492a;
  /* 11c64923 push eax */
  push32((uint32_t)(EAX));
  /* 11c64924 call 0x11c66afc */
  push32(0x11c64929u); f_11c66afc();
  /* 11c64929 pop ecx */
  ECX = (pop32());
L_11c6492a:;
  /* 11c6492a mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c6492d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6492f je 0x11c64938 */
  if (C.zf) goto L_11c64938;
  /* 11c64931 push eax */
  push32((uint32_t)(EAX));
  /* 11c64932 call 0x11c66afc */
  push32(0x11c64937u); f_11c66afc();
  /* 11c64937 pop ecx */
  ECX = (pop32());
L_11c64938:;
  /* 11c64938 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11c6493b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6493d je 0x11c64946 */
  if (C.zf) goto L_11c64946;
  /* 11c6493f push eax */
  push32((uint32_t)(EAX));
  /* 11c64940 call 0x11c66afc */
  push32(0x11c64945u); f_11c66afc();
  /* 11c64945 pop ecx */
  ECX = (pop32());
L_11c64946:;
  /* 11c64946 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11c64949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6494b je 0x11c64954 */
  if (C.zf) goto L_11c64954;
  /* 11c6494d push eax */
  push32((uint32_t)(EAX));
  /* 11c6494e call 0x11c66afc */
  push32(0x11c64953u); f_11c66afc();
  /* 11c64953 pop ecx */
  ECX = (pop32());
L_11c64954:;
  /* 11c64954 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c64957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64959 je 0x11c64962 */
  if (C.zf) goto L_11c64962;
  /* 11c6495b push eax */
  push32((uint32_t)(EAX));
  /* 11c6495c call 0x11c66afc */
  push32(0x11c64961u); f_11c66afc();
  /* 11c64961 pop ecx */
  ECX = (pop32());
L_11c64962:;
  /* 11c64962 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c64965 cmp eax, 0x11c70a70 */
  { uint32_t _a=(EAX),_b=(0x11c70a70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6496a je 0x11c64973 */
  if (C.zf) goto L_11c64973;
  /* 11c6496c push eax */
  push32((uint32_t)(EAX));
  /* 11c6496d call 0x11c66afc */
  push32(0x11c64972u); f_11c66afc();
  /* 11c64972 pop ecx */
  ECX = (pop32());
L_11c64973:;
  /* 11c64973 push esi */
  push32((uint32_t)(ESI));
  /* 11c64974 call 0x11c66afc */
  push32(0x11c64979u); f_11c66afc();
  /* 11c64979 pop ecx */
  ECX = (pop32());
L_11c6497a:;
  /* 11c6497a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6497c push dword ptr [0x11c70698] */
  push32((uint32_t)(r32((uint32_t)(0x11c70698))));
  /* 11c64982 call dword ptr [0x11c6e0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0f0))), 0x11c64988u);
  /* 11c64988 pop esi */
  ESI = (pop32());
L_11c64989:;
  /* 11c64989 ret  */
  ESPCHK(0x11c648eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000498a @ 0x11c6498a (194 bytes, 65 insns) */
void f_11c6498a(void) {
  FTRACE(0x11c6498au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6498a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6498b mov ebp, esp */
  EBP = (ESP);
  /* 11c6498d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64990 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64991 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64994 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6499a cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6499d jl 0x11c64a46 */
  if ((C.sf!=C.of)) goto L_11c64a46;
  /* 11c649a3 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c649a9 jg 0x11c64a46 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c64a46;
  /* 11c649af push esi */
  push32((uint32_t)(ESI));
  /* 11c649b0 push edi */
  push32((uint32_t)(EDI));
  /* 11c649b1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c649b4 mov esi, dword ptr [edi*4 + 0x11c70bdc] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11c70bdc)));
  /* 11c649bb add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c649be test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11c649c1 jne 0x11c649c9 */
  if (!C.zf) goto L_11c649c9;
  /* 11c649c3 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c649c6 jle 0x11c649c9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c649c9;
  /* 11c649c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c649c9:;
  /* 11c649c9 call 0x11c66be5 */
  push32(0x11c649ceu); f_11c66be5();
  /* 11c649ce mov eax, ebx */
  EAX = (EBX);
  /* 11c649d0 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11c649d3 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c649d9 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c649dc mov edx, esi */
  EDX = (ESI);
  /* 11c649de mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11c649e1 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c649e3 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c649e6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c649e8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c649eb lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11c649ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c649f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c649f4 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11c649f7 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c649fa add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c649fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c64a00 add ecx, dword ptr [0x11c70af8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c70af8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64a06 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c64a07 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64a0b mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11c64a0e pop edi */
  EDI = (pop32());
  /* 11c64a0f pop esi */
  ESI = (pop32());
  /* 11c64a10 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11c64a17 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c64a1a je 0x11c64a3c */
  if (C.zf) goto L_11c64a3c;
  /* 11c64a1c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64a20 jne 0x11c64a42 */
  if (!C.zf) goto L_11c64a42;
  /* 11c64a22 cmp dword ptr [0x11c70afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c70afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64a29 je 0x11c64a42 */
  if (C.zf) goto L_11c64a42;
  /* 11c64a2b lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c64a2e push eax */
  push32((uint32_t)(EAX));
  /* 11c64a2f call 0x11c66e9a */
  push32(0x11c64a34u); f_11c66e9a();
  /* 11c64a34 pop ecx */
  ECX = (pop32());
  /* 11c64a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64a3a je 0x11c64a42 */
  if (C.zf) goto L_11c64a42;
L_11c64a3c:;
  /* 11c64a3c add ecx, dword ptr [0x11c70b00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c70b00))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c64a42:;
  /* 11c64a42 mov eax, ecx */
  EAX = (ECX);
  /* 11c64a44 jmp 0x11c64a49 */
  goto L_11c64a49;
L_11c64a46:;
  /* 11c64a46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c64a49:;
  /* 11c64a49 pop ebx */
  EBX = (pop32());
  /* 11c64a4a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c64a4b ret  */
  ESPCHK(0x11c6498au, _esp0);
  ESP += 4; return;
}

/* FUN_10004a4c @ 0x11c64a4c (45 bytes, 12 insns) */
void f_11c64a4c(void) {
  FTRACE(0x11c64a4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64a4c mov eax, dword ptr [0x11c70670] */
  EAX = (r32((uint32_t)(0x11c70670)));
  /* 11c64a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64a53 je 0x11c64a57 */
  if (C.zf) goto L_11c64a57;
  /* 11c64a55 call eax */
  call_ind((uint32_t)(EAX), 0x11c64a57u);
L_11c64a57:;
  /* 11c64a57 push 0x11c70050 */
  push32((uint32_t)(0x11c70050u));
  /* 11c64a5c push 0x11c7003c */
  push32((uint32_t)(0x11c7003cu));
  /* 11c64a61 call 0x11c64b50 */
  push32(0x11c64a66u); f_11c64b50();
  /* 11c64a66 push 0x11c70038 */
  push32((uint32_t)(0x11c70038u));
  /* 11c64a6b push 0x11c70000 */
  push32((uint32_t)(0x11c70000u));
  /* 11c64a70 call 0x11c64b50 */
  push32(0x11c64a75u); f_11c64b50();
  /* 11c64a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64a78 ret  */
  ESPCHK(0x11c64a4cu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11c64a79 (17 bytes, 6 insns) */
void f_11c64a79(void) {
  FTRACE(0x11c64a79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64a7d push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c64a81 call 0x11c64a99 */
  push32(0x11c64a86u); f_11c64a99();
  /* 11c64a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64a89 ret  */
  ESPCHK(0x11c64a79u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a8a @ 0x11c64a8a (15 bytes, 6 insns) */
void f_11c64a8a(void) {
  FTRACE(0x11c64a8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64a90 call 0x11c64a99 */
  push32(0x11c64a95u); f_11c64a99();
  /* 11c64a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64a98 ret  */
  ESPCHK(0x11c64a8au, _esp0);
  ESP += 4; return;
}

/* FUN_10004a99 @ 0x11c64a99 (163 bytes, 53 insns) */
void f_11c64a99(void) {
  FTRACE(0x11c64a99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64a99 push edi */
  push32((uint32_t)(EDI));
  /* 11c64a9a call 0x11c64b3e */
  push32(0x11c64a9fu); f_11c64b3e();
  /* 11c64a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64aa1 pop edi */
  EDI = (pop32());
  /* 11c64aa2 cmp dword ptr [0x11c87884], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c87884))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64aa8 jne 0x11c64abb */
  if (!C.zf) goto L_11c64abb;
  /* 11c64aaa push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c64aae call dword ptr [0x11c6e0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0cc))), 0x11c64ab4u);
  /* 11c64ab4 push eax */
  push32((uint32_t)(EAX));
  /* 11c64ab5 call dword ptr [0x11c6e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0d0))), 0x11c64abbu);
L_11c64abb:;
  /* 11c64abb cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64ac1 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c64ac5 mov dword ptr [0x11c87880], edi */
  w32((uint32_t)(0x11c87880), (EDI));
  /* 11c64acb mov byte ptr [0x11c8787c], bl */
  w8((uint32_t)(0x11c8787c), (BL));
  /* 11c64ad1 jne 0x11c64b0f */
  if (!C.zf) goto L_11c64b0f;
  /* 11c64ad3 mov eax, dword ptr [0x11c88f70] */
  EAX = (r32((uint32_t)(0x11c88f70)));
  /* 11c64ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64ada je 0x11c64afe */
  if (C.zf) goto L_11c64afe;
  /* 11c64adc mov ecx, dword ptr [0x11c88f6c] */
  ECX = (r32((uint32_t)(0x11c88f6c)));
  /* 11c64ae2 push esi */
  push32((uint32_t)(ESI));
  /* 11c64ae3 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11c64ae6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ae8 jb 0x11c64afd */
  if (C.cf) goto L_11c64afd;
L_11c64aea:;
  /* 11c64aea mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c64aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64aee je 0x11c64af2 */
  if (C.zf) goto L_11c64af2;
  /* 11c64af0 call eax */
  call_ind((uint32_t)(EAX), 0x11c64af2u);
L_11c64af2:;
  /* 11c64af2 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64af5 cmp esi, dword ptr [0x11c88f70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88f70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64afb jae 0x11c64aea */
  if (!C.cf) goto L_11c64aea;
L_11c64afd:;
  /* 11c64afd pop esi */
  ESI = (pop32());
L_11c64afe:;
  /* 11c64afe push 0x11c7005c */
  push32((uint32_t)(0x11c7005cu));
  /* 11c64b03 push 0x11c70054 */
  push32((uint32_t)(0x11c70054u));
  /* 11c64b08 call 0x11c64b50 */
  push32(0x11c64b0du); f_11c64b50();
  /* 11c64b0d pop ecx */
  ECX = (pop32());
  /* 11c64b0e pop ecx */
  ECX = (pop32());
L_11c64b0f:;
  /* 11c64b0f push 0x11c70068 */
  push32((uint32_t)(0x11c70068u));
  /* 11c64b14 push 0x11c70060 */
  push32((uint32_t)(0x11c70060u));
  /* 11c64b19 call 0x11c64b50 */
  push32(0x11c64b1eu); f_11c64b50();
  /* 11c64b1e pop ecx */
  ECX = (pop32());
  /* 11c64b1f pop ecx */
  ECX = (pop32());
  /* 11c64b20 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c64b22 pop ebx */
  EBX = (pop32());
  /* 11c64b23 je 0x11c64b2c */
  if (C.zf) goto L_11c64b2c;
  /* 11c64b25 call 0x11c64b47 */
  push32(0x11c64b2au); f_11c64b47();
  /* 11c64b2a pop edi */
  EDI = (pop32());
  /* 11c64b2b ret  */
  ESPCHK(0x11c64a99u, _esp0);
  ESP += 4; return;
L_11c64b2c:;
  /* 11c64b2c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c64b30 mov dword ptr [0x11c87884], edi */
  w32((uint32_t)(0x11c87884), (EDI));
  /* 11c64b36 call dword ptr [0x11c6e0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0ec))), 0x11c64b3cu);
  /* 11c64b3c pop edi */
  EDI = (pop32());
  /* 11c64b3d ret  */
  ESPCHK(0x11c64a99u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b3e @ 0x11c64b3e (9 bytes, 4 insns) */
void f_11c64b3e(void) {
  FTRACE(0x11c64b3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64b3e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c64b40 call 0x11c66a86 */
  push32(0x11c64b45u); f_11c66a86();
  /* 11c64b45 pop ecx */
  ECX = (pop32());
  /* 11c64b46 ret  */
  ESPCHK(0x11c64b3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b47 @ 0x11c64b47 (9 bytes, 4 insns) */
void f_11c64b47(void) {
  FTRACE(0x11c64b47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64b47 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c64b49 call 0x11c66ae7 */
  push32(0x11c64b4eu); f_11c66ae7();
  /* 11c64b4e pop ecx */
  ECX = (pop32());
  /* 11c64b4f ret  */
  ESPCHK(0x11c64b47u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x11c64b50 (26 bytes, 12 insns) */
void f_11c64b50(void) {
  FTRACE(0x11c64b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64b50 push esi */
  push32((uint32_t)(ESI));
  /* 11c64b51 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11c64b55:;
  /* 11c64b55 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64b59 jae 0x11c64b68 */
  if (!C.cf) goto L_11c64b68;
  /* 11c64b5b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c64b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64b5f je 0x11c64b63 */
  if (C.zf) goto L_11c64b63;
  /* 11c64b61 call eax */
  call_ind((uint32_t)(EAX), 0x11c64b63u);
L_11c64b63:;
  /* 11c64b63 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64b66 jmp 0x11c64b55 */
  goto L_11c64b55;
L_11c64b68:;
  /* 11c64b68 pop esi */
  ESI = (pop32());
  /* 11c64b69 ret  */
  ESPCHK(0x11c64b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b6a @ 0x11c64b6a (781 bytes, 277 insns) */
void f_11c64b6a(void) {
  FTRACE(0x11c64b6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64b6a push ebp */
  push32((uint32_t)(EBP));
  /* 11c64b6b mov ebp, esp */
  EBP = (ESP);
  /* 11c64b6d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c64b6f push 0x11c6e258 */
  push32((uint32_t)(0x11c6e258u));
  /* 11c64b74 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c64b79 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c64b7f push eax */
  push32((uint32_t)(EAX));
  /* 11c64b80 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c64b87 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64b8a push ebx */
  push32((uint32_t)(EBX));
  /* 11c64b8b push esi */
  push32((uint32_t)(ESI));
  /* 11c64b8c push edi */
  push32((uint32_t)(EDI));
  /* 11c64b8d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64b90 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c64b92 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64b94 jne 0x11c64ba4 */
  if (!C.zf) goto L_11c64ba4;
  /* 11c64b96 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c64b99 call 0x11c64f87 */
  push32(0x11c64b9eu); f_11c64f87();
  /* 11c64b9e pop ecx */
  ECX = (pop32());
  /* 11c64b9f jmp 0x11c64e8a */
  jmp_ind(0x11c64e8au); return;
L_11c64ba4:;
  /* 11c64ba4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c64ba7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ba9 jne 0x11c64bb7 */
  if (!C.zf) goto L_11c64bb7;
  /* 11c64bab push ebx */
  push32((uint32_t)(EBX));
  /* 11c64bac call 0x11c66afc */
  push32(0x11c64bb1u); f_11c66afc();
  /* 11c64bb1 pop ecx */
  ECX = (pop32());
  /* 11c64bb2 jmp 0x11c64e88 */
  jmp_ind(0x11c64e88u); return;
L_11c64bb7:;
  /* 11c64bb7 mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c64bbc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64bbf jne 0x11c64cfe */
  if (!C.zf) goto L_11c64cfe;
L_11c64bc5:;
  /* 11c64bc5 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c64bc8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64bcb ja 0x11c64cc2 */
  if ((!C.cf&&!C.zf)) goto L_11c64cc2;
  /* 11c64bd1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64bd3 call 0x11c66a86 */
  push32(0x11c64bd8u); f_11c66a86();
  /* 11c64bd8 pop ecx */
  ECX = (pop32());
  /* 11c64bd9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c64bdc push ebx */
  push32((uint32_t)(EBX));
  /* 11c64bdd call 0x11c671ef */
  push32(0x11c64be2u); f_11c671ef();
  /* 11c64be2 pop ecx */
  ECX = (pop32());
  /* 11c64be3 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c64be6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64be8 je 0x11c64c92 */
  if (C.zf) goto L_11c64c92;
  /* 11c64bee cmp esi, dword ptr [0x11c88e3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64bf4 ja 0x11c64c42 */
  if ((!C.cf&&!C.zf)) goto L_11c64c42;
  /* 11c64bf6 push esi */
  push32((uint32_t)(ESI));
  /* 11c64bf7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11c64bf9 call 0x11c679f8 */
  push32(0x11c64bfeu); f_11c679f8();
  /* 11c64bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64c03 je 0x11c64c0a */
  if (C.zf) goto L_11c64c0a;
  /* 11c64c05 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11c64c08 jmp 0x11c64c42 */
  goto L_11c64c42;
L_11c64c0a:;
  /* 11c64c0a push esi */
  push32((uint32_t)(ESI));
  /* 11c64c0b call 0x11c67543 */
  push32(0x11c64c10u); f_11c67543();
  /* 11c64c10 pop ecx */
  ECX = (pop32());
  /* 11c64c11 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c64c14 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c16 je 0x11c64c42 */
  if (C.zf) goto L_11c64c42;
  /* 11c64c18 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11c64c1b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c64c1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c64c1f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c21 jb 0x11c64c25 */
  if (C.cf) goto L_11c64c25;
  /* 11c64c23 mov eax, esi */
  EAX = (ESI);
L_11c64c25:;
  /* 11c64c25 push eax */
  push32((uint32_t)(EAX));
  /* 11c64c26 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64c27 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c64c2a call 0x11c683e0 */
  push32(0x11c64c2fu); f_11c683e0();
  /* 11c64c2f push ebx */
  push32((uint32_t)(EBX));
  /* 11c64c30 call 0x11c671ef */
  push32(0x11c64c35u); f_11c671ef();
  /* 11c64c35 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c64c38 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64c39 push eax */
  push32((uint32_t)(EAX));
  /* 11c64c3a call 0x11c6721a */
  push32(0x11c64c3fu); f_11c6721a();
  /* 11c64c3f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c64c42:;
  /* 11c64c42 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c45 jne 0x11c64c92 */
  if (!C.zf) goto L_11c64c92;
  /* 11c64c47 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c49 jne 0x11c64c51 */
  if (!C.zf) goto L_11c64c51;
  /* 11c64c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64c4d pop esi */
  ESI = (pop32());
  /* 11c64c4e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c64c51:;
  /* 11c64c51 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64c54 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c64c57 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c64c5a push esi */
  push32((uint32_t)(ESI));
  /* 11c64c5b push edi */
  push32((uint32_t)(EDI));
  /* 11c64c5c push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64c62 call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c64c68u);
  /* 11c64c68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c64c6b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c6d je 0x11c64c92 */
  if (C.zf) goto L_11c64c92;
  /* 11c64c6f mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11c64c72 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c64c73 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c64c76 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c78 jb 0x11c64c7c */
  if (C.cf) goto L_11c64c7c;
  /* 11c64c7a mov eax, esi */
  EAX = (ESI);
L_11c64c7c:;
  /* 11c64c7c push eax */
  push32((uint32_t)(EAX));
  /* 11c64c7d push ebx */
  push32((uint32_t)(EBX));
  /* 11c64c7e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c64c81 call 0x11c683e0 */
  push32(0x11c64c86u); f_11c683e0();
  /* 11c64c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64c87 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11c64c8a call 0x11c6721a */
  push32(0x11c64c8fu); f_11c6721a();
  /* 11c64c8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c64c92:;
  /* 11c64c92 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c64c96 call 0x11c64cf5 */
  push32(0x11c64c9bu); f_11c64cf5();
  /* 11c64c9b cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64c9e jne 0x11c64cc2 */
  if (!C.zf) goto L_11c64cc2;
  /* 11c64ca0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ca2 jne 0x11c64ca7 */
  if (!C.zf) goto L_11c64ca7;
  /* 11c64ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64ca6 pop esi */
  ESI = (pop32());
L_11c64ca7:;
  /* 11c64ca7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64caa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c64cad mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c64cb0 push esi */
  push32((uint32_t)(ESI));
  /* 11c64cb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64cb2 push edi */
  push32((uint32_t)(EDI));
  /* 11c64cb3 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64cb9 call dword ptr [0x11c6e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c8))), 0x11c64cbfu);
  /* 11c64cbf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11c64cc2:;
  /* 11c64cc2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c64cc5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64cc7 jne 0x11c64e8a */
  if (!C.zf) { jmp_ind(0x11c64e8au); return; }
  /* 11c64ccd cmp dword ptr [0x11c87abc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c87abc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64cd3 je 0x11c64e8a */
  if (C.zf) { jmp_ind(0x11c64e8au); return; }
  /* 11c64cd9 push esi */
  push32((uint32_t)(ESI));
  /* 11c64cda call 0x11c683bb */
  push32(0x11c64cdfu); f_11c683bb();
  /* 11c64cdf pop ecx */
  ECX = (pop32());
  /* 11c64ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64ce2 jne 0x11c64bc5 */
  if (!C.zf) goto L_11c64bc5;
  /* 11c64ce8 jmp 0x11c64e88 */
  jmp_ind(0x11c64e88u); return;
  /* 11c64ced mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c64cf0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64cf3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c64cf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64cf7 call 0x11c66ae7 */
  push32(0x11c64cfcu); f_11c66ae7();
  /* 11c64cfc pop ecx */
  ECX = (pop32());
  /* 11c64cfd ret  */
  ESPCHK(0x11c64b6au, _esp0);
  ESP += 4; return;
L_11c64cfe:;
  /* 11c64cfe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d01 jne 0x11c64e4e */
  if (!C.zf) goto L_11c64e4e;
  /* 11c64d07 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d0a ja 0x11c64d1e */
  if ((!C.cf&&!C.zf)) goto L_11c64d1e;
  /* 11c64d0c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d0e jbe 0x11c64d18 */
  if ((C.cf||C.zf)) goto L_11c64d18;
  /* 11c64d10 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64d13 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c64d16 jmp 0x11c64d1b */
  goto L_11c64d1b;
L_11c64d18:;
  /* 11c64d18 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c64d1a pop esi */
  ESI = (pop32());
L_11c64d1b:;
  /* 11c64d1b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11c64d1e:;
  /* 11c64d1e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c64d21 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d24 ja 0x11c64e1d */
  if ((!C.cf&&!C.zf)) goto L_11c64e1d;
  /* 11c64d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64d2c call 0x11c66a86 */
  push32(0x11c64d31u); f_11c66a86();
  /* 11c64d31 pop ecx */
  ECX = (pop32());
  /* 11c64d32 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c64d39 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11c64d3c push eax */
  push32((uint32_t)(EAX));
  /* 11c64d3d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11c64d40 push eax */
  push32((uint32_t)(EAX));
  /* 11c64d41 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64d42 call 0x11c67f4a */
  push32(0x11c64d47u); f_11c67f4a();
  /* 11c64d47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64d4a mov edi, eax */
  EDI = (EAX);
  /* 11c64d4c mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11c64d4f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c64d51 je 0x11c64e01 */
  if (C.zf) goto L_11c64e01;
  /* 11c64d57 cmp esi, dword ptr [0x11c72c3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c72c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d5d jae 0x11c64dbb */
  if (!C.cf) goto L_11c64dbb;
  /* 11c64d5f mov ebx, esi */
  EBX = (ESI);
  /* 11c64d61 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11c64d64 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64d65 push edi */
  push32((uint32_t)(EDI));
  /* 11c64d66 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c64d69 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c64d6c call 0x11c68312 */
  push32(0x11c64d71u); f_11c68312();
  /* 11c64d71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64d76 je 0x11c64d80 */
  if (C.zf) goto L_11c64d80;
  /* 11c64d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64d7b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c64d7e jmp 0x11c64db8 */
  goto L_11c64db8;
L_11c64d80:;
  /* 11c64d80 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64d81 call 0x11c67fe6 */
  push32(0x11c64d86u); f_11c67fe6();
  /* 11c64d86 pop ecx */
  ECX = (pop32());
  /* 11c64d87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c64d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64d8c je 0x11c64db8 */
  if (C.zf) goto L_11c64db8;
  /* 11c64d8e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c64d91 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c64d94 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11c64d97 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64d99 jb 0x11c64d9d */
  if (C.cf) goto L_11c64d9d;
  /* 11c64d9b mov eax, esi */
  EAX = (ESI);
L_11c64d9d:;
  /* 11c64d9d push eax */
  push32((uint32_t)(EAX));
  /* 11c64d9e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c64da1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c64da4 call 0x11c683e0 */
  push32(0x11c64da9u); f_11c683e0();
  /* 11c64da9 push edi */
  push32((uint32_t)(EDI));
  /* 11c64daa push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c64dad push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c64db0 call 0x11c67fa1 */
  push32(0x11c64db5u); f_11c67fa1();
  /* 11c64db5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c64db8:;
  /* 11c64db8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c64dbb:;
  /* 11c64dbb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64dbf jne 0x11c64e14 */
  if (!C.zf) goto L_11c64e14;
  /* 11c64dc1 push esi */
  push32((uint32_t)(ESI));
  /* 11c64dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64dc4 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64dca call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c64dd0u);
  /* 11c64dd0 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c64dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64dd5 je 0x11c64e14 */
  if (C.zf) goto L_11c64e14;
  /* 11c64dd7 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c64dda shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c64ddd mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11c64de0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64de2 jb 0x11c64de6 */
  if (C.cf) goto L_11c64de6;
  /* 11c64de4 mov eax, esi */
  EAX = (ESI);
L_11c64de6:;
  /* 11c64de6 push eax */
  push32((uint32_t)(EAX));
  /* 11c64de7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64de8 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c64deb call 0x11c683e0 */
  push32(0x11c64df0u); f_11c683e0();
  /* 11c64df0 push edi */
  push32((uint32_t)(EDI));
  /* 11c64df1 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11c64df4 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11c64df7 call 0x11c67fa1 */
  push32(0x11c64dfcu); f_11c67fa1();
  /* 11c64dfc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64dff jmp 0x11c64e14 */
  goto L_11c64e14;
L_11c64e01:;
  /* 11c64e01 push esi */
  push32((uint32_t)(ESI));
  /* 11c64e02 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64e05 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64e0b call dword ptr [0x11c6e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c8))), 0x11c64e11u);
  /* 11c64e11 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11c64e14:;
  /* 11c64e14 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c64e18 call 0x11c64e43 */
  push32(0x11c64e1du); f_11c64e43();
L_11c64e1d:;
  /* 11c64e1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c64e20 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64e22 jne 0x11c64e8a */
  if (!C.zf) { jmp_ind(0x11c64e8au); return; }
  /* 11c64e24 cmp dword ptr [0x11c87abc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c87abc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64e2a je 0x11c64e8a */
  if (C.zf) { jmp_ind(0x11c64e8au); return; }
  /* 11c64e2c push esi */
  push32((uint32_t)(ESI));
  /* 11c64e2d call 0x11c683bb */
  push32(0x11c64e32u); f_11c683bb();
  /* 11c64e32 pop ecx */
  ECX = (pop32());
  /* 11c64e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64e35 jne 0x11c64d1e */
  if (!C.zf) goto L_11c64d1e;
  /* 11c64e3b jmp 0x11c64e88 */
  jmp_ind(0x11c64e88u); return;
  /* 11c64e3d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c64e40 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64e45 call 0x11c66ae7 */
  push32(0x11c64e4au); f_11c66ae7();
  /* 11c64e4a pop ecx */
  ECX = (pop32());
  /* 11c64e4b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c64e4d ret  */
  ESPCHK(0x11c64b6au, _esp0);
  ESP += 4; return;
L_11c64e4e:;
  /* 11c64e4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c64e50 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64e53 ja 0x11c64e71 */
  if ((!C.cf&&!C.zf)) goto L_11c64e71;
  /* 11c64e55 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64e57 jne 0x11c64e5c */
  if (!C.zf) goto L_11c64e5c;
  /* 11c64e59 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c64e5b pop esi */
  ESI = (pop32());
L_11c64e5c:;
  /* 11c64e5c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64e5f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c64e62 push esi */
  push32((uint32_t)(ESI));
  /* 11c64e63 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64e64 push edi */
  push32((uint32_t)(EDI));
  /* 11c64e65 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64e6b call dword ptr [0x11c6e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c8))), 0x11c64e71u);
L_11c64e71:;
  /* 11c64e71 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64e73 jne 0x11c64e8a */
  if (!C.zf) { jmp_ind(0x11c64e8au); return; }
}

/* FUN_10004cf5 @ 0x11c64cf5 (9 bytes, 4 insns) */
void f_11c64cf5(void) {
  FTRACE(0x11c64cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64cf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64cf7 call 0x11c66ae7 */
  push32(0x11c64cfcu); f_11c66ae7();
  /* 11c64cfc pop ecx */
  ECX = (pop32());
  /* 11c64cfd ret  */
  ESPCHK(0x11c64cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e43 @ 0x11c64e43 (11 bytes, 5 insns) */
void f_11c64e43(void) {
  FTRACE(0x11c64e43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64e45 call 0x11c66ae7 */
  push32(0x11c64e4au); f_11c66ae7();
  /* 11c64e4a pop ecx */
  ECX = (pop32());
  /* 11c64e4b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c64e4d ret  */
  ESPCHK(0x11c64e43u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e99 @ 0x11c64e99 (214 bytes, 72 insns) */
void f_11c64e99(void) {
  FTRACE(0x11c64e99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64e99 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64e9a mov ebp, esp */
  EBP = (ESP);
  /* 11c64e9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c64e9e push 0x11c6e270 */
  push32((uint32_t)(0x11c6e270u));
  /* 11c64ea3 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c64ea8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c64eae push eax */
  push32((uint32_t)(EAX));
  /* 11c64eaf mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c64eb6 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64eb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64eba push esi */
  push32((uint32_t)(ESI));
  /* 11c64ebb push edi */
  push32((uint32_t)(EDI));
  /* 11c64ebc mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c64ec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ec4 jne 0x11c64f0c */
  if (!C.zf) goto L_11c64f0c;
  /* 11c64ec6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64ec8 call 0x11c66a86 */
  push32(0x11c64ecdu); f_11c66a86();
  /* 11c64ecd pop ecx */
  ECX = (pop32());
  /* 11c64ece and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c64ed2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64ed5 push esi */
  push32((uint32_t)(ESI));
  /* 11c64ed6 call 0x11c671ef */
  push32(0x11c64edbu); f_11c671ef();
  /* 11c64edb pop ecx */
  ECX = (pop32());
  /* 11c64edc mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c64edf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64ee1 je 0x11c64eee */
  if (C.zf) goto L_11c64eee;
  /* 11c64ee3 mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 11c64ee6 sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64ee9 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c64eec jmp 0x11c64ef1 */
  goto L_11c64ef1;
L_11c64eee:;
  /* 11c64eee mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c64ef1:;
  /* 11c64ef1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c64ef5 call 0x11c64f03 */
  push32(0x11c64efau); f_11c64f03();
  /* 11c64efa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64efe jmp 0x11c64f55 */
  goto L_11c64f55;
  /* 11c64f00 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 11c64f03 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64f05 call 0x11c66ae7 */
  push32(0x11c64f0au); f_11c66ae7();
  /* 11c64f0a pop ecx */
  ECX = (pop32());
  /* 11c64f0b ret  */
  ESPCHK(0x11c64e99u, _esp0);
  ESP += 4; return;
L_11c64f0c:;
  /* 11c64f0c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64f0f jne 0x11c64f57 */
  if (!C.zf) goto L_11c64f57;
  /* 11c64f11 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64f13 call 0x11c66a86 */
  push32(0x11c64f18u); f_11c66a86();
  /* 11c64f18 pop ecx */
  ECX = (pop32());
  /* 11c64f19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c64f20 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c64f23 push eax */
  push32((uint32_t)(EAX));
  /* 11c64f24 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11c64f27 push eax */
  push32((uint32_t)(EAX));
  /* 11c64f28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c64f2b call 0x11c67f4a */
  push32(0x11c64f30u); f_11c67f4a();
  /* 11c64f30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c64f33 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c64f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64f38 je 0x11c64f45 */
  if (C.zf) goto L_11c64f45;
  /* 11c64f3a movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11c64f3d shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c64f40 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c64f43 jmp 0x11c64f48 */
  goto L_11c64f48;
L_11c64f45:;
  /* 11c64f45 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c64f48:;
  /* 11c64f48 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c64f4c call 0x11c64f7e */
  push32(0x11c64f51u); f_11c64f7e();
  /* 11c64f51 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c64f55:;
  /* 11c64f55 jne 0x11c64f6a */
  if (!C.zf) goto L_11c64f6a;
L_11c64f57:;
  /* 11c64f57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c64f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c64f5c push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c64f62 call dword ptr [0x11c6e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c0))), 0x11c64f68u);
  /* 11c64f68 mov esi, eax */
  ESI = (EAX);
L_11c64f6a:;
  /* 11c64f6a mov eax, esi */
  EAX = (ESI);
  /* 11c64f6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_10004f03 @ 0x11c64f03 (9 bytes, 4 insns) */
void f_11c64f03(void) {
  FTRACE(0x11c64f03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64f03 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64f05 call 0x11c66ae7 */
  push32(0x11c64f0au); f_11c66ae7();
  /* 11c64f0a pop ecx */
  ECX = (pop32());
  /* 11c64f0b ret  */
  ESPCHK(0x11c64f03u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f7e @ 0x11c64f7e (9 bytes, 4 insns) */
void f_11c64f7e(void) {
  FTRACE(0x11c64f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64f7e push 9 */
  push32((uint32_t)(0x9u));
  /* 11c64f80 call 0x11c66ae7 */
  push32(0x11c64f85u); f_11c66ae7();
  /* 11c64f85 pop ecx */
  ECX = (pop32());
  /* 11c64f86 ret  */
  ESPCHK(0x11c64f7eu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11c64f87 (18 bytes, 6 insns) */
void f_11c64f87(void) {
  FTRACE(0x11c64f87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64f87 push dword ptr [0x11c87abc] */
  push32((uint32_t)(r32((uint32_t)(0x11c87abc))));
  /* 11c64f8d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c64f91 call 0x11c64f99 */
  push32(0x11c64f96u); f_11c64f99();
  /* 11c64f96 pop ecx */
  ECX = (pop32());
  /* 11c64f97 pop ecx */
  ECX = (pop32());
  /* 11c64f98 ret  */
  ESPCHK(0x11c64f87u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11c64f99 (44 bytes, 16 insns) */
void f_11c64f99(void) {
  FTRACE(0x11c64f99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64f99 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64f9e ja 0x11c64fc2 */
  if ((!C.cf&&!C.zf)) goto L_11c64fc2;
L_11c64fa0:;
  /* 11c64fa0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c64fa4 call 0x11c64fc5 */
  push32(0x11c64fa9u); f_11c64fc5();
  /* 11c64fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64fab pop ecx */
  ECX = (pop32());
  /* 11c64fac jne 0x11c64fc4 */
  if (!C.zf) goto L_11c64fc4;
  /* 11c64fae cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64fb2 je 0x11c64fc4 */
  if (C.zf) goto L_11c64fc4;
  /* 11c64fb4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c64fb8 call 0x11c683bb */
  push32(0x11c64fbdu); f_11c683bb();
  /* 11c64fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c64fbf pop ecx */
  ECX = (pop32());
  /* 11c64fc0 jne 0x11c64fa0 */
  if (!C.zf) goto L_11c64fa0;
L_11c64fc2:;
  /* 11c64fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c64fc4:;
  /* 11c64fc4 ret  */
  ESPCHK(0x11c64f99u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc5 @ 0x11c64fc5 (231 bytes, 81 insns) */
void f_11c64fc5(void) {
  FTRACE(0x11c64fc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c64fc5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c64fc6 mov ebp, esp */
  EBP = (ESP);
  /* 11c64fc8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c64fca push 0x11c6e288 */
  push32((uint32_t)(0x11c6e288u));
  /* 11c64fcf push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c64fd4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c64fda push eax */
  push32((uint32_t)(EAX));
  /* 11c64fdb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c64fe2 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c64fe5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c64fe6 push esi */
  push32((uint32_t)(ESI));
  /* 11c64fe7 push edi */
  push32((uint32_t)(EDI));
  /* 11c64fe8 mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c64fed cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ff0 jne 0x11c65035 */
  if (!C.zf) goto L_11c65035;
  /* 11c64ff2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c64ff5 cmp esi, dword ptr [0x11c88e3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c64ffb ja 0x11c65094 */
  if ((!C.cf&&!C.zf)) goto L_11c65094;
  /* 11c65001 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c65003 call 0x11c66a86 */
  push32(0x11c65008u); f_11c66a86();
  /* 11c65008 pop ecx */
  ECX = (pop32());
  /* 11c65009 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6500d push esi */
  push32((uint32_t)(ESI));
  /* 11c6500e call 0x11c67543 */
  push32(0x11c65013u); f_11c67543();
  /* 11c65013 pop ecx */
  ECX = (pop32());
  /* 11c65014 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c65017 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6501b call 0x11c6502c */
  push32(0x11c65020u); f_11c6502c();
  /* 11c65020 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c65023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65025 je 0x11c65094 */
  if (C.zf) goto L_11c65094;
  /* 11c65027 jmp 0x11c650b2 */
  jmp_ind(0x11c650b2u); return;
  /* 11c6502c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6502e call 0x11c66ae7 */
  push32(0x11c65033u); f_11c66ae7();
  /* 11c65033 pop ecx */
  ECX = (pop32());
  /* 11c65034 ret  */
  ESPCHK(0x11c64fc5u, _esp0);
  ESP += 4; return;
L_11c65035:;
  /* 11c65035 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65038 jne 0x11c65094 */
  if (!C.zf) goto L_11c65094;
  /* 11c6503a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6503d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6503f je 0x11c65049 */
  if (C.zf) goto L_11c65049;
  /* 11c65041 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11c65044 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c65047 jmp 0x11c6504c */
  goto L_11c6504c;
L_11c65049:;
  /* 11c65049 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c6504b pop esi */
  ESI = (pop32());
L_11c6504c:;
  /* 11c6504c mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11c6504f cmp esi, dword ptr [0x11c72c3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c72c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65055 ja 0x11c65085 */
  if ((!C.cf&&!C.zf)) goto L_11c65085;
  /* 11c65057 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c65059 call 0x11c66a86 */
  push32(0x11c6505eu); f_11c66a86();
  /* 11c6505e pop ecx */
  ECX = (pop32());
  /* 11c6505f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c65066 mov eax, esi */
  EAX = (ESI);
  /* 11c65068 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c6506b push eax */
  push32((uint32_t)(EAX));
  /* 11c6506c call 0x11c67fe6 */
  push32(0x11c65071u); f_11c67fe6();
  /* 11c65071 pop ecx */
  ECX = (pop32());
  /* 11c65072 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c65075 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c65079 call 0x11c6508b */
  push32(0x11c6507eu); f_11c6508b();
  /* 11c6507e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c65081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65083 jne 0x11c650b2 */
  if (!C.zf) { jmp_ind(0x11c650b2u); return; }
L_11c65085:;
  /* 11c65085 push esi */
  push32((uint32_t)(ESI));
  /* 11c65086 jmp 0x11c650a4 */
  goto L_11c650a4;
  /* 11c65088 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6508b push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6508d call 0x11c66ae7 */
  push32(0x11c65092u); f_11c66ae7();
  /* 11c65092 pop ecx */
  ECX = (pop32());
  /* 11c65093 ret  */
  ESPCHK(0x11c64fc5u, _esp0);
  ESP += 4; return;
L_11c65094:;
  /* 11c65094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65099 jne 0x11c6509e */
  if (!C.zf) goto L_11c6509e;
  /* 11c6509b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6509d pop eax */
  EAX = (pop32());
L_11c6509e:;
  /* 11c6509e add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c650a1 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11c650a3 push eax */
  push32((uint32_t)(EAX));
L_11c650a4:;
  /* 11c650a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c650a6 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
}

