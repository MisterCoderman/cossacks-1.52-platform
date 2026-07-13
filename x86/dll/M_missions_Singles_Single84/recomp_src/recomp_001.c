#include "recomp.h"

/* FUN_100061b0 @ 0x11df61b0 (71 bytes, 30 insns) */
void f_11df61b0(void) {
  FTRACE(0x11df61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df61b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df61b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df61b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df61b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df61b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df61b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df61ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df61bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df61c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df61c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df61c9 pop ecx */
  ECX = (pop32());
  /* 11df61ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df61cd mov esi, esp */
  ESI = (ESP);
  /* 11df61cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df61d2 push eax */
  push32((uint32_t)(EAX));
  /* 11df61d3 call dword ptr [0x11e3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3353c))), 0x11df61d9u);
  /* 11df61d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df61dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df61de call 0x11df9b90 */
  push32(0x11df61e3u); f_11df9b90();
  /* 11df61e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df61e6 pop edi */
  EDI = (pop32());
  /* 11df61e7 pop esi */
  ESI = (pop32());
  /* 11df61e8 pop ebx */
  EBX = (pop32());
  /* 11df61e9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df61ec cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df61ee call 0x11df9b90 */
  push32(0x11df61f3u); f_11df9b90();
  /* 11df61f3 mov esp, ebp */
  ESP = (EBP);
  /* 11df61f5 pop ebp */
  EBP = (pop32());
  /* 11df61f6 ret  */
  ESPCHK(0x11df61b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x11df6210 (47 bytes, 22 insns) */
void f_11df6210(void) {
  FTRACE(0x11df6210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6210 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6211 mov ebp, esp */
  EBP = (ESP);
  /* 11df6213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6216 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6217 push esi */
  push32((uint32_t)(ESI));
  /* 11df6218 push edi */
  push32((uint32_t)(EDI));
  /* 11df6219 push ecx */
  push32((uint32_t)(ECX));
  /* 11df621a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df621d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6229 pop ecx */
  ECX = (pop32());
  /* 11df622a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df622d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6233 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11df6236 pop edi */
  EDI = (pop32());
  /* 11df6237 pop esi */
  ESI = (pop32());
  /* 11df6238 pop ebx */
  EBX = (pop32());
  /* 11df6239 mov esp, ebp */
  ESP = (EBP);
  /* 11df623b pop ebp */
  EBP = (pop32());
  /* 11df623c ret 4 */
  ESPCHK(0x11df6210u, _esp0);
  ESP += 8; return;
}

/* FUN_10006250 @ 0x11df6250 (94 bytes, 39 insns) */
void f_11df6250(void) {
  FTRACE(0x11df6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6250 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6251 mov ebp, esp */
  EBP = (ESP);
  /* 11df6253 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6256 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6257 push esi */
  push32((uint32_t)(ESI));
  /* 11df6258 push edi */
  push32((uint32_t)(EDI));
  /* 11df6259 push ecx */
  push32((uint32_t)(ECX));
  /* 11df625a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df625d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6269 pop ecx */
  ECX = (pop32());
  /* 11df626a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df626d mov esi, esp */
  ESI = (ESP);
  /* 11df626f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6272 push eax */
  push32((uint32_t)(EAX));
  /* 11df6273 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6276 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6277 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df627a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11df627d push eax */
  push32((uint32_t)(EAX));
  /* 11df627e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6281 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6284 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6285 call dword ptr [0x11e334ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334ac))), 0x11df628bu);
  /* 11df628b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df628e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6290 call 0x11df9b90 */
  push32(0x11df6295u); f_11df9b90();
  /* 11df6295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6298 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df629b pop edi */
  EDI = (pop32());
  /* 11df629c pop esi */
  ESI = (pop32());
  /* 11df629d pop ebx */
  EBX = (pop32());
  /* 11df629e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df62a1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df62a3 call 0x11df9b90 */
  push32(0x11df62a8u); f_11df9b90();
  /* 11df62a8 mov esp, ebp */
  ESP = (EBP);
  /* 11df62aa pop ebp */
  EBP = (pop32());
  /* 11df62ab ret 4 */
  ESPCHK(0x11df6250u, _esp0);
  ESP += 8; return;
}

/* FUN_100062d0 @ 0x11df62d0 (221 bytes, 81 insns) */
void f_11df62d0(void) {
  FTRACE(0x11df62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df62d1 mov ebp, esp */
  EBP = (ESP);
  /* 11df62d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df62d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df62d7 push esi */
  push32((uint32_t)(ESI));
  /* 11df62d8 push edi */
  push32((uint32_t)(EDI));
  /* 11df62d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df62da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df62dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df62e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df62e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df62e9 pop ecx */
  ECX = (pop32());
  /* 11df62ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df62ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df62f0 call 0x11df115e */
  push32(0x11df62f5u); f_11df115e();
  /* 11df62f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df62f7 jne 0x11df639a */
  if (!C.zf) goto L_11df639a;
  /* 11df62fd mov esi, esp */
  ESI = (ESP);
  /* 11df62ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6302 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11df6305 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6306 call dword ptr [0x11e33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33500))), 0x11df630cu);
  /* 11df630c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df630f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6311 call 0x11df9b90 */
  push32(0x11df6316u); f_11df9b90();
  /* 11df6316 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df631d jmp 0x11df6328 */
  goto L_11df6328;
L_11df631f:;
  /* 11df631f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df6322 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6325 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11df6328:;
  /* 11df6328 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df632b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df632e jge 0x11df637b */
  if ((C.sf==C.of)) goto L_11df637b;
  /* 11df6330 mov esi, esp */
  ESI = (ESP);
  /* 11df6332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6337 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6338 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df633b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11df633e push eax */
  push32((uint32_t)(EAX));
  /* 11df633f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6342 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11df6345 push edx */
  push32((uint32_t)(EDX));
  /* 11df6346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6349 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df634c push ecx */
  push32((uint32_t)(ECX));
  /* 11df634d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6350 push edx */
  push32((uint32_t)(EDX));
  /* 11df6351 call dword ptr [0x11e334a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a8))), 0x11df6357u);
  /* 11df6357 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df635a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df635c call 0x11df9b90 */
  push32(0x11df6361u); f_11df9b90();
  /* 11df6361 mov esi, esp */
  ESI = (ESP);
  /* 11df6363 push 1 */
  push32((uint32_t)(0x1u));
  /* 11df6365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6368 push eax */
  push32((uint32_t)(EAX));
  /* 11df6369 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df636fu);
  /* 11df636f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6372 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6374 call 0x11df9b90 */
  push32(0x11df6379u); f_11df9b90();
  /* 11df6379 jmp 0x11df631f */
  goto L_11df631f;
L_11df637b:;
  /* 11df637b mov esi, esp */
  ESI = (ESP);
  /* 11df637d push 0 */
  push32((uint32_t)(0x0u));
  /* 11df637f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6382 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6386 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11df6389 push eax */
  push32((uint32_t)(EAX));
  /* 11df638a call dword ptr [0x11e33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33544))), 0x11df6390u);
  /* 11df6390 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6395 call 0x11df9b90 */
  push32(0x11df639au); f_11df9b90();
L_11df639a:;
  /* 11df639a pop edi */
  EDI = (pop32());
  /* 11df639b pop esi */
  ESI = (pop32());
  /* 11df639c pop ebx */
  EBX = (pop32());
  /* 11df639d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df63a0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df63a2 call 0x11df9b90 */
  push32(0x11df63a7u); f_11df9b90();
  /* 11df63a7 mov esp, ebp */
  ESP = (EBP);
  /* 11df63a9 pop ebp */
  EBP = (pop32());
  /* 11df63aa ret 8 */
  ESPCHK(0x11df62d0u, _esp0);
  ESP += 12; return;
}

/* FUN_100063f0 @ 0x11df63f0 (47 bytes, 22 insns) */
void f_11df63f0(void) {
  FTRACE(0x11df63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df63f1 mov ebp, esp */
  EBP = (ESP);
  /* 11df63f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df63f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df63f7 push esi */
  push32((uint32_t)(ESI));
  /* 11df63f8 push edi */
  push32((uint32_t)(EDI));
  /* 11df63f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df63fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df63fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6409 pop ecx */
  ECX = (pop32());
  /* 11df640a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df640d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6413 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11df6416 pop edi */
  EDI = (pop32());
  /* 11df6417 pop esi */
  ESI = (pop32());
  /* 11df6418 pop ebx */
  EBX = (pop32());
  /* 11df6419 mov esp, ebp */
  ESP = (EBP);
  /* 11df641b pop ebp */
  EBP = (pop32());
  /* 11df641c ret 4 */
  ESPCHK(0x11df63f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006430 @ 0x11df6430 (47 bytes, 22 insns) */
void f_11df6430(void) {
  FTRACE(0x11df6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6430 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6431 mov ebp, esp */
  EBP = (ESP);
  /* 11df6433 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6436 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6437 push esi */
  push32((uint32_t)(ESI));
  /* 11df6438 push edi */
  push32((uint32_t)(EDI));
  /* 11df6439 push ecx */
  push32((uint32_t)(ECX));
  /* 11df643a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df643d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6442 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6447 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6449 pop ecx */
  ECX = (pop32());
  /* 11df644a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df644d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6453 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11df6456 pop edi */
  EDI = (pop32());
  /* 11df6457 pop esi */
  ESI = (pop32());
  /* 11df6458 pop ebx */
  EBX = (pop32());
  /* 11df6459 mov esp, ebp */
  ESP = (EBP);
  /* 11df645b pop ebp */
  EBP = (pop32());
  /* 11df645c ret 4 */
  ESPCHK(0x11df6430u, _esp0);
  ESP += 8; return;
}

/* FUN_10006470 @ 0x11df6470 (131 bytes, 48 insns) */
void f_11df6470(void) {
  FTRACE(0x11df6470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6470 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6471 mov ebp, esp */
  EBP = (ESP);
  /* 11df6473 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6476 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6477 push esi */
  push32((uint32_t)(ESI));
  /* 11df6478 push edi */
  push32((uint32_t)(EDI));
  /* 11df6479 push ecx */
  push32((uint32_t)(ECX));
  /* 11df647a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11df647d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11df6482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6489 pop ecx */
  ECX = (pop32());
  /* 11df648a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df648d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df6494 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11df649b jmp 0x11df64a6 */
  goto L_11df64a6;
L_11df649d:;
  /* 11df649d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11df64a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df64a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11df64a6:;
  /* 11df64a6 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df64aa jge 0x11df64d9 */
  if ((C.sf==C.of)) goto L_11df64d9;
  /* 11df64ac mov esi, esp */
  ESI = (ESP);
  /* 11df64ae mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11df64b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11df64b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df64b5 push edx */
  push32((uint32_t)(EDX));
  /* 11df64b6 call dword ptr [0x11e334b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334b4))), 0x11df64bcu);
  /* 11df64bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df64bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df64c1 call 0x11df9b90 */
  push32(0x11df64c6u); f_11df9b90();
  /* 11df64c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df64c8 jle 0x11df64d7 */
  if ((C.zf||C.sf!=C.of)) goto L_11df64d7;
  /* 11df64ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11df64cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11df64d0 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_11df64d7:;
  /* 11df64d7 jmp 0x11df649d */
  goto L_11df649d;
L_11df64d9:;
  /* 11df64d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df64dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df64df mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11df64e2 pop edi */
  EDI = (pop32());
  /* 11df64e3 pop esi */
  ESI = (pop32());
  /* 11df64e4 pop ebx */
  EBX = (pop32());
  /* 11df64e5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df64e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df64ea call 0x11df9b90 */
  push32(0x11df64efu); f_11df9b90();
  /* 11df64ef mov esp, ebp */
  ESP = (EBP);
  /* 11df64f1 pop ebp */
  EBP = (pop32());
  /* 11df64f2 ret  */
  ESPCHK(0x11df6470u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x11df6520 (47 bytes, 22 insns) */
void f_11df6520(void) {
  FTRACE(0x11df6520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6520 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6521 mov ebp, esp */
  EBP = (ESP);
  /* 11df6523 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6526 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6527 push esi */
  push32((uint32_t)(ESI));
  /* 11df6528 push edi */
  push32((uint32_t)(EDI));
  /* 11df6529 push ecx */
  push32((uint32_t)(ECX));
  /* 11df652a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df652d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6532 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6537 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6539 pop ecx */
  ECX = (pop32());
  /* 11df653a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df653d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6543 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11df6546 pop edi */
  EDI = (pop32());
  /* 11df6547 pop esi */
  ESI = (pop32());
  /* 11df6548 pop ebx */
  EBX = (pop32());
  /* 11df6549 mov esp, ebp */
  ESP = (EBP);
  /* 11df654b pop ebp */
  EBP = (pop32());
  /* 11df654c ret 4 */
  ESPCHK(0x11df6520u, _esp0);
  ESP += 8; return;
}

/* FUN_10006560 @ 0x11df6560 (65 bytes, 28 insns) */
void f_11df6560(void) {
  FTRACE(0x11df6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6560 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6561 mov ebp, esp */
  EBP = (ESP);
  /* 11df6563 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6566 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6567 push esi */
  push32((uint32_t)(ESI));
  /* 11df6568 push edi */
  push32((uint32_t)(EDI));
  /* 11df6569 push ecx */
  push32((uint32_t)(ECX));
  /* 11df656a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df656d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6572 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6577 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6579 pop ecx */
  ECX = (pop32());
  /* 11df657a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df657d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6583 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11df6586 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6589 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df658c mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 11df658f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6592 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df6595 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11df6598 pop edi */
  EDI = (pop32());
  /* 11df6599 pop esi */
  ESI = (pop32());
  /* 11df659a pop ebx */
  EBX = (pop32());
  /* 11df659b mov esp, ebp */
  ESP = (EBP);
  /* 11df659d pop ebp */
  EBP = (pop32());
  /* 11df659e ret 0xc */
  ESPCHK(0x11df6560u, _esp0);
  ESP += 16; return;
}

/* FUN_100065c0 @ 0x11df65c0 (166 bytes, 58 insns) */
void f_11df65c0(void) {
  FTRACE(0x11df65c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df65c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df65c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df65c3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df65c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df65c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df65c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df65c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df65ca lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 11df65cd mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 11df65d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df65d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df65d9 pop ecx */
  ECX = (pop32());
  /* 11df65da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df65dd mov esi, esp */
  ESI = (ESP);
  /* 11df65df lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df65e2 push eax */
  push32((uint32_t)(EAX));
  /* 11df65e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df65e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df65e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11df65e9 call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df65efu);
  /* 11df65ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df65f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df65f4 call 0x11df9b90 */
  push32(0x11df65f9u); f_11df9b90();
  /* 11df65f9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11df65fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11df6602 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6605 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11df6608 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df660d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df660f jge 0x11df661d */
  if ((C.sf==C.of)) goto L_11df661d;
  /* 11df6611 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11df6615 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11df6619 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11df661d:;
  /* 11df661d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11df6620 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11df6626 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6629 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11df662c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df6631 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6633 jl 0x11df663d */
  if ((C.sf!=C.of)) goto L_11df663d;
  /* 11df6635 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11df6639 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11df663d:;
  /* 11df663d mov esi, esp */
  ESI = (ESP);
  /* 11df663f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11df6642 push edx */
  push32((uint32_t)(EDX));
  /* 11df6643 call dword ptr [0x11e334a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a4))), 0x11df6649u);
  /* 11df6649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df664c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df664e call 0x11df9b90 */
  push32(0x11df6653u); f_11df9b90();
  /* 11df6653 pop edi */
  EDI = (pop32());
  /* 11df6654 pop esi */
  ESI = (pop32());
  /* 11df6655 pop ebx */
  EBX = (pop32());
  /* 11df6656 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6659 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df665b call 0x11df9b90 */
  push32(0x11df6660u); f_11df9b90();
  /* 11df6660 mov esp, ebp */
  ESP = (EBP);
  /* 11df6662 pop ebp */
  EBP = (pop32());
  /* 11df6663 ret 4 */
  ESPCHK(0x11df65c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006690 @ 0x11df6690 (114 bytes, 42 insns) */
void f_11df6690(void) {
  FTRACE(0x11df6690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6690 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6691 mov ebp, esp */
  EBP = (ESP);
  /* 11df6693 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6696 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6697 push esi */
  push32((uint32_t)(ESI));
  /* 11df6698 push edi */
  push32((uint32_t)(EDI));
  /* 11df6699 push ecx */
  push32((uint32_t)(ECX));
  /* 11df669a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11df669d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11df66a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df66a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df66a9 pop ecx */
  ECX = (pop32());
  /* 11df66aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df66ad mov esi, esp */
  ESI = (ESP);
  /* 11df66af lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df66b2 push eax */
  push32((uint32_t)(EAX));
  /* 11df66b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df66b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df66b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11df66b9 call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df66bfu);
  /* 11df66bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df66c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df66c4 call 0x11df9b90 */
  push32(0x11df66c9u); f_11df9b90();
  /* 11df66c9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11df66cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11df66d2 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11df66d5 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11df66d8 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11df66db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df66e0 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11df66e3 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11df66e6 fmul dword ptr [0x11e2a050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x11e2a050)));
  /* 11df66ec call 0x11df9e7c */
  push32(0x11df66f1u); f_11df9e7c();
  /* 11df66f1 pop edi */
  EDI = (pop32());
  /* 11df66f2 pop esi */
  ESI = (pop32());
  /* 11df66f3 pop ebx */
  EBX = (pop32());
  /* 11df66f4 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df66f7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df66f9 call 0x11df9b90 */
  push32(0x11df66feu); f_11df9b90();
  /* 11df66fe mov esp, ebp */
  ESP = (EBP);
  /* 11df6700 pop ebp */
  EBP = (pop32());
  /* 11df6701 ret  */
  ESPCHK(0x11df6690u, _esp0);
  ESP += 4; return;
}

/* FUN_10006720 @ 0x11df6720 (94 bytes, 37 insns) */
void f_11df6720(void) {
  FTRACE(0x11df6720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6720 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6721 mov ebp, esp */
  EBP = (ESP);
  /* 11df6723 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6726 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6727 push esi */
  push32((uint32_t)(ESI));
  /* 11df6728 push edi */
  push32((uint32_t)(EDI));
  /* 11df6729 push ecx */
  push32((uint32_t)(ECX));
  /* 11df672a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df672d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6739 pop ecx */
  ECX = (pop32());
  /* 11df673a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df673d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6740 call 0x11df1159 */
  push32(0x11df6745u); f_11df1159();
  /* 11df6745 mov esi, esp */
  ESI = (ESP);
  /* 11df6747 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11df674a push eax */
  push32((uint32_t)(EAX));
  /* 11df674b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df674e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11df6751 push edx */
  push32((uint32_t)(EDX));
  /* 11df6752 call dword ptr [0x11e334a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a0))), 0x11df6758u);
  /* 11df6758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df675b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df675d call 0x11df9b90 */
  push32(0x11df6762u); f_11df9b90();
  /* 11df6762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6765 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6768 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11df676b pop edi */
  EDI = (pop32());
  /* 11df676c pop esi */
  ESI = (pop32());
  /* 11df676d pop ebx */
  EBX = (pop32());
  /* 11df676e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6771 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6773 call 0x11df9b90 */
  push32(0x11df6778u); f_11df9b90();
  /* 11df6778 mov esp, ebp */
  ESP = (EBP);
  /* 11df677a pop ebp */
  EBP = (pop32());
  /* 11df677b ret 4 */
  ESPCHK(0x11df6720u, _esp0);
  ESP += 8; return;
}

/* FUN_100067a0 @ 0x11df67a0 (39 bytes, 20 insns) */
void f_11df67a0(void) {
  FTRACE(0x11df67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df67a1 mov ebp, esp */
  EBP = (ESP);
  /* 11df67a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df67a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df67a7 push esi */
  push32((uint32_t)(ESI));
  /* 11df67a8 push edi */
  push32((uint32_t)(EDI));
  /* 11df67a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df67aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df67ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df67b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df67b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df67b9 pop ecx */
  ECX = (pop32());
  /* 11df67ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df67bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df67c0 pop edi */
  EDI = (pop32());
  /* 11df67c1 pop esi */
  ESI = (pop32());
  /* 11df67c2 pop ebx */
  EBX = (pop32());
  /* 11df67c3 mov esp, ebp */
  ESP = (EBP);
  /* 11df67c5 pop ebp */
  EBP = (pop32());
  /* 11df67c6 ret  */
  ESPCHK(0x11df67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x11df67d0 (98 bytes, 39 insns) */
void f_11df67d0(void) {
  FTRACE(0x11df67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df67d1 mov ebp, esp */
  EBP = (ESP);
  /* 11df67d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df67d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df67d7 push esi */
  push32((uint32_t)(ESI));
  /* 11df67d8 push edi */
  push32((uint32_t)(EDI));
  /* 11df67d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df67da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df67dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df67e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df67e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df67e9 pop ecx */
  ECX = (pop32());
  /* 11df67ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df67ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df67f0 call 0x11df1159 */
  push32(0x11df67f5u); f_11df1159();
  /* 11df67f5 mov esi, esp */
  ESI = (ESP);
  /* 11df67f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df67f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df67fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df67fe push eax */
  push32((uint32_t)(EAX));
  /* 11df67ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6802 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11df6805 push edx */
  push32((uint32_t)(EDX));
  /* 11df6806 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df680cu);
  /* 11df680c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df680f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6811 call 0x11df9b90 */
  push32(0x11df6816u); f_11df9b90();
  /* 11df6816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df681c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11df681f pop edi */
  EDI = (pop32());
  /* 11df6820 pop esi */
  ESI = (pop32());
  /* 11df6821 pop ebx */
  EBX = (pop32());
  /* 11df6822 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6825 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6827 call 0x11df9b90 */
  push32(0x11df682cu); f_11df9b90();
  /* 11df682c mov esp, ebp */
  ESP = (EBP);
  /* 11df682e pop ebp */
  EBP = (pop32());
  /* 11df682f ret 4 */
  ESPCHK(0x11df67d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006850 @ 0x11df6850 (87 bytes, 35 insns) */
void f_11df6850(void) {
  FTRACE(0x11df6850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6850 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6851 mov ebp, esp */
  EBP = (ESP);
  /* 11df6853 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6856 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6857 push esi */
  push32((uint32_t)(ESI));
  /* 11df6858 push edi */
  push32((uint32_t)(EDI));
  /* 11df6859 push ecx */
  push32((uint32_t)(ECX));
  /* 11df685a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df685d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6862 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6867 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6869 pop ecx */
  ECX = (pop32());
  /* 11df686a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df686d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6870 call 0x11df1159 */
  push32(0x11df6875u); f_11df1159();
  /* 11df6875 mov esi, esp */
  ESI = (ESP);
  /* 11df6877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6879 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df687c push eax */
  push32((uint32_t)(EAX));
  /* 11df687d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6880 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11df6883 push edx */
  push32((uint32_t)(EDX));
  /* 11df6884 call dword ptr [0x11e3349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3349c))), 0x11df688au);
  /* 11df688a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df688d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df688f call 0x11df9b90 */
  push32(0x11df6894u); f_11df9b90();
  /* 11df6894 pop edi */
  EDI = (pop32());
  /* 11df6895 pop esi */
  ESI = (pop32());
  /* 11df6896 pop ebx */
  EBX = (pop32());
  /* 11df6897 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df689a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df689c call 0x11df9b90 */
  push32(0x11df68a1u); f_11df9b90();
  /* 11df68a1 mov esp, ebp */
  ESP = (EBP);
  /* 11df68a3 pop ebp */
  EBP = (pop32());
  /* 11df68a4 ret 4 */
  ESPCHK(0x11df6850u, _esp0);
  ESP += 8; return;
}

/* FUN_100068c0 @ 0x11df68c0 (90 bytes, 37 insns) */
void f_11df68c0(void) {
  FTRACE(0x11df68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df68c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df68c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df68c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df68c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df68c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df68c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df68ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df68cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df68d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df68d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df68d9 pop ecx */
  ECX = (pop32());
  /* 11df68da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df68dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df68e1 mov esi, esp */
  ESI = (ESP);
  /* 11df68e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df68e6 push eax */
  push32((uint32_t)(EAX));
  /* 11df68e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df68ea mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11df68ed push edx */
  push32((uint32_t)(EDX));
  /* 11df68ee call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df68f4u);
  /* 11df68f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df68f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df68f9 call 0x11df9b90 */
  push32(0x11df68feu); f_11df9b90();
  /* 11df68fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6900 jle 0x11df6906 */
  if ((C.zf||C.sf!=C.of)) goto L_11df6906;
  /* 11df6902 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df6906:;
  /* 11df6906 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df6909 pop edi */
  EDI = (pop32());
  /* 11df690a pop esi */
  ESI = (pop32());
  /* 11df690b pop ebx */
  EBX = (pop32());
  /* 11df690c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df690f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6911 call 0x11df9b90 */
  push32(0x11df6916u); f_11df9b90();
  /* 11df6916 mov esp, ebp */
  ESP = (EBP);
  /* 11df6918 pop ebp */
  EBP = (pop32());
  /* 11df6919 ret  */
  ESPCHK(0x11df68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x11df6930 (89 bytes, 36 insns) */
void f_11df6930(void) {
  FTRACE(0x11df6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6930 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6931 mov ebp, esp */
  EBP = (ESP);
  /* 11df6933 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6936 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6937 push esi */
  push32((uint32_t)(ESI));
  /* 11df6938 push edi */
  push32((uint32_t)(EDI));
  /* 11df6939 push ecx */
  push32((uint32_t)(ECX));
  /* 11df693a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df693d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df6942 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6947 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6949 pop ecx */
  ECX = (pop32());
  /* 11df694a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df694d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df6951 mov esi, esp */
  ESI = (ESP);
  /* 11df6953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6956 push eax */
  push32((uint32_t)(EAX));
  /* 11df6957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df695a push ecx */
  push32((uint32_t)(ECX));
  /* 11df695b call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df6961u);
  /* 11df6961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6966 call 0x11df9b90 */
  push32(0x11df696bu); f_11df9b90();
  /* 11df696b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df696d jle 0x11df6973 */
  if ((C.zf||C.sf!=C.of)) goto L_11df6973;
  /* 11df696f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df6973:;
  /* 11df6973 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df6976 pop edi */
  EDI = (pop32());
  /* 11df6977 pop esi */
  ESI = (pop32());
  /* 11df6978 pop ebx */
  EBX = (pop32());
  /* 11df6979 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df697c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df697e call 0x11df9b90 */
  push32(0x11df6983u); f_11df9b90();
  /* 11df6983 mov esp, ebp */
  ESP = (EBP);
  /* 11df6985 pop ebp */
  EBP = (pop32());
  /* 11df6986 ret 4 */
  ESPCHK(0x11df6930u, _esp0);
  ESP += 8; return;
}

/* FUN_100069a0 @ 0x11df69a0 (47 bytes, 22 insns) */
void f_11df69a0(void) {
  FTRACE(0x11df69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df69a1 mov ebp, esp */
  EBP = (ESP);
  /* 11df69a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df69a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df69a7 push esi */
  push32((uint32_t)(ESI));
  /* 11df69a8 push edi */
  push32((uint32_t)(EDI));
  /* 11df69a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df69aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df69ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df69b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df69b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df69b9 pop ecx */
  ECX = (pop32());
  /* 11df69ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df69bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df69c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df69c3 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11df69c6 pop edi */
  EDI = (pop32());
  /* 11df69c7 pop esi */
  ESI = (pop32());
  /* 11df69c8 pop ebx */
  EBX = (pop32());
  /* 11df69c9 mov esp, ebp */
  ESP = (EBP);
  /* 11df69cb pop ebp */
  EBP = (pop32());
  /* 11df69cc ret 4 */
  ESPCHK(0x11df69a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100069e0 @ 0x11df69e0 (81 bytes, 33 insns) */
void f_11df69e0(void) {
  FTRACE(0x11df69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df69e1 mov ebp, esp */
  EBP = (ESP);
  /* 11df69e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df69e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df69e7 push esi */
  push32((uint32_t)(ESI));
  /* 11df69e8 push edi */
  push32((uint32_t)(EDI));
  /* 11df69e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df69ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df69ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df69f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df69f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df69f9 pop ecx */
  ECX = (pop32());
  /* 11df69fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df69fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a00 call 0x11df1159 */
  push32(0x11df6a05u); f_11df1159();
  /* 11df6a05 mov esi, esp */
  ESI = (ESP);
  /* 11df6a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11df6a09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a0c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11df6a0f push ecx */
  push32((uint32_t)(ECX));
  /* 11df6a10 call dword ptr [0x11e33524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33524))), 0x11df6a16u);
  /* 11df6a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6a19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6a1b call 0x11df9b90 */
  push32(0x11df6a20u); f_11df9b90();
  /* 11df6a20 pop edi */
  EDI = (pop32());
  /* 11df6a21 pop esi */
  ESI = (pop32());
  /* 11df6a22 pop ebx */
  EBX = (pop32());
  /* 11df6a23 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6a26 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6a28 call 0x11df9b90 */
  push32(0x11df6a2du); f_11df9b90();
  /* 11df6a2d mov esp, ebp */
  ESP = (EBP);
  /* 11df6a2f pop ebp */
  EBP = (pop32());
  /* 11df6a30 ret  */
  ESPCHK(0x11df69e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x11df6a50 (99 bytes, 38 insns) */
void f_11df6a50(void) {
  FTRACE(0x11df6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6a51 mov ebp, esp */
  EBP = (ESP);
  /* 11df6a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6a57 push esi */
  push32((uint32_t)(ESI));
  /* 11df6a58 push edi */
  push32((uint32_t)(EDI));
  /* 11df6a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6a69 pop ecx */
  ECX = (pop32());
  /* 11df6a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a70 call 0x11df1028 */
  push32(0x11df6a75u); f_11df1028();
  /* 11df6a75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df6a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6a7c je 0x11df6aa2 */
  if (C.zf) goto L_11df6aa2;
  /* 11df6a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a81 call 0x11df1217 */
  push32(0x11df6a86u); f_11df1217();
  /* 11df6a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a89 call 0x11df1091 */
  push32(0x11df6a8eu); f_11df1091();
  /* 11df6a8e cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6a91 jge 0x11df6aa2 */
  if ((C.sf==C.of)) goto L_11df6aa2;
  /* 11df6a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a96 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11df6a99 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6a9d call 0x11df11c2 */
  push32(0x11df6aa2u); f_11df11c2();
L_11df6aa2:;
  /* 11df6aa2 pop edi */
  EDI = (pop32());
  /* 11df6aa3 pop esi */
  ESI = (pop32());
  /* 11df6aa4 pop ebx */
  EBX = (pop32());
  /* 11df6aa5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6aa8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6aaa call 0x11df9b90 */
  push32(0x11df6aafu); f_11df9b90();
  /* 11df6aaf mov esp, ebp */
  ESP = (EBP);
  /* 11df6ab1 pop ebp */
  EBP = (pop32());
  /* 11df6ab2 ret  */
  ESPCHK(0x11df6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x11df6ad0 (76 bytes, 32 insns) */
void f_11df6ad0(void) {
  FTRACE(0x11df6ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11df6ad3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6ad7 push esi */
  push32((uint32_t)(ESI));
  /* 11df6ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11df6ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6ada lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6add mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6ae2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6ae7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6ae9 pop ecx */
  ECX = (pop32());
  /* 11df6aea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6aed mov esi, esp */
  ESI = (ESP);
  /* 11df6aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6af4 push eax */
  push32((uint32_t)(EAX));
  /* 11df6af5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6af8 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6af9 call dword ptr [0x11e3352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3352c))), 0x11df6affu);
  /* 11df6aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6b04 call 0x11df9b90 */
  push32(0x11df6b09u); f_11df9b90();
  /* 11df6b09 pop edi */
  EDI = (pop32());
  /* 11df6b0a pop esi */
  ESI = (pop32());
  /* 11df6b0b pop ebx */
  EBX = (pop32());
  /* 11df6b0c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6b0f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6b11 call 0x11df9b90 */
  push32(0x11df6b16u); f_11df9b90();
  /* 11df6b16 mov esp, ebp */
  ESP = (EBP);
  /* 11df6b18 pop ebp */
  EBP = (pop32());
  /* 11df6b19 ret 4 */
  ESPCHK(0x11df6ad0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b30 @ 0x11df6b30 (95 bytes, 37 insns) */
void f_11df6b30(void) {
  FTRACE(0x11df6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6b31 mov ebp, esp */
  EBP = (ESP);
  /* 11df6b33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6b37 push esi */
  push32((uint32_t)(ESI));
  /* 11df6b38 push edi */
  push32((uint32_t)(EDI));
  /* 11df6b39 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6b3a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df6b3d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df6b42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6b47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6b49 pop ecx */
  ECX = (pop32());
  /* 11df6b4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6b4d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df6b51 mov esi, esp */
  ESI = (ESP);
  /* 11df6b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6b55 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11df6b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6b5d call 0x11df125d */
  push32(0x11df6b62u); f_11df125d();
  /* 11df6b62 push eax */
  push32((uint32_t)(EAX));
  /* 11df6b63 call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df6b69u);
  /* 11df6b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6b6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6b6e call 0x11df9b90 */
  push32(0x11df6b73u); f_11df9b90();
  /* 11df6b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6b75 jle 0x11df6b7b */
  if ((C.zf||C.sf!=C.of)) goto L_11df6b7b;
  /* 11df6b77 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df6b7b:;
  /* 11df6b7b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df6b7e pop edi */
  EDI = (pop32());
  /* 11df6b7f pop esi */
  ESI = (pop32());
  /* 11df6b80 pop ebx */
  EBX = (pop32());
  /* 11df6b81 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6b84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6b86 call 0x11df9b90 */
  push32(0x11df6b8bu); f_11df9b90();
  /* 11df6b8b mov esp, ebp */
  ESP = (EBP);
  /* 11df6b8d pop ebp */
  EBP = (pop32());
  /* 11df6b8e ret  */
  ESPCHK(0x11df6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x11df6bb0 (47 bytes, 22 insns) */
void f_11df6bb0(void) {
  FTRACE(0x11df6bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11df6bb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11df6bb8 push edi */
  push32((uint32_t)(EDI));
  /* 11df6bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6bba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6bbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6bc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6bc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6bc9 pop ecx */
  ECX = (pop32());
  /* 11df6bca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6bd3 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11df6bd6 pop edi */
  EDI = (pop32());
  /* 11df6bd7 pop esi */
  ESI = (pop32());
  /* 11df6bd8 pop ebx */
  EBX = (pop32());
  /* 11df6bd9 mov esp, ebp */
  ESP = (EBP);
  /* 11df6bdb pop ebp */
  EBP = (pop32());
  /* 11df6bdc ret 4 */
  ESPCHK(0x11df6bb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006bf0 @ 0x11df6bf0 (64 bytes, 27 insns) */
void f_11df6bf0(void) {
  FTRACE(0x11df6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11df6bf3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6bf7 push esi */
  push32((uint32_t)(ESI));
  /* 11df6bf8 push edi */
  push32((uint32_t)(EDI));
  /* 11df6bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6bfa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6bfd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6c02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6c07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6c09 pop ecx */
  ECX = (pop32());
  /* 11df6c0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6c0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6c10 call 0x11df11a4 */
  push32(0x11df6c15u); f_11df11a4();
  /* 11df6c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6c18 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11df6c1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6c1f pop edi */
  EDI = (pop32());
  /* 11df6c20 pop esi */
  ESI = (pop32());
  /* 11df6c21 pop ebx */
  EBX = (pop32());
  /* 11df6c22 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6c25 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6c27 call 0x11df9b90 */
  push32(0x11df6c2cu); f_11df9b90();
  /* 11df6c2c mov esp, ebp */
  ESP = (EBP);
  /* 11df6c2e pop ebp */
  EBP = (pop32());
  /* 11df6c2f ret  */
  ESPCHK(0x11df6bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x11df6c40 (57 bytes, 25 insns) */
void f_11df6c40(void) {
  FTRACE(0x11df6c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6c41 mov ebp, esp */
  EBP = (ESP);
  /* 11df6c43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6c47 push esi */
  push32((uint32_t)(ESI));
  /* 11df6c48 push edi */
  push32((uint32_t)(EDI));
  /* 11df6c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6c4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6c4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6c59 pop ecx */
  ECX = (pop32());
  /* 11df6c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6c5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6c60 call 0x11df1221 */
  push32(0x11df6c65u); f_11df1221();
  /* 11df6c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6c68 pop edi */
  EDI = (pop32());
  /* 11df6c69 pop esi */
  ESI = (pop32());
  /* 11df6c6a pop ebx */
  EBX = (pop32());
  /* 11df6c6b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6c6e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6c70 call 0x11df9b90 */
  push32(0x11df6c75u); f_11df9b90();
  /* 11df6c75 mov esp, ebp */
  ESP = (EBP);
  /* 11df6c77 pop ebp */
  EBP = (pop32());
  /* 11df6c78 ret  */
  ESPCHK(0x11df6c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x11df6c90 (56 bytes, 25 insns) */
void f_11df6c90(void) {
  FTRACE(0x11df6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6c91 mov ebp, esp */
  EBP = (ESP);
  /* 11df6c93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6c96 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6c97 push esi */
  push32((uint32_t)(ESI));
  /* 11df6c98 push edi */
  push32((uint32_t)(EDI));
  /* 11df6c99 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6c9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6c9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6ca9 pop ecx */
  ECX = (pop32());
  /* 11df6caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df6cb3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11df6cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6cb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df6cbc mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11df6cbf pop edi */
  EDI = (pop32());
  /* 11df6cc0 pop esi */
  ESI = (pop32());
  /* 11df6cc1 pop ebx */
  EBX = (pop32());
  /* 11df6cc2 mov esp, ebp */
  ESP = (EBP);
  /* 11df6cc4 pop ebp */
  EBP = (pop32());
  /* 11df6cc5 ret 8 */
  ESPCHK(0x11df6c90u, _esp0);
  ESP += 12; return;
}

/* FUN_10006ce0 @ 0x11df6ce0 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11df6ce0(void) {
  FTRACE(0x11df6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11df6ce3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11df6ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11df6ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6cea lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11df6ced mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11df6cf2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6cf7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6cf9 pop ecx */
  ECX = (pop32());
  /* 11df6cfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df6d02 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11df6d05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11df6d07 je 0x11df6f05 */
  if (C.zf) goto L_11df6f05;
  /* 11df6d0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d10 call 0x11df1028 */
  push32(0x11df6d15u); f_11df1028();
  /* 11df6d15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df6d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6d1c je 0x11df6f05 */
  if (C.zf) goto L_11df6f05;
  /* 11df6d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d25 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6d29 je 0x11df6f05 */
  if (C.zf) goto L_11df6f05;
  /* 11df6d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d32 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6d36 je 0x11df6d7d */
  if (C.zf) goto L_11df6d7d;
  /* 11df6d38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d3b call 0x11df1091 */
  push32(0x11df6d40u); f_11df1091();
  /* 11df6d40 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6d43 jge 0x11df6d4d */
  if ((C.sf==C.of)) goto L_11df6d4d;
  /* 11df6d45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d48 call 0x11df122b */
  push32(0x11df6d4du); f_11df122b();
L_11df6d4d:;
  /* 11df6d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d50 call 0x11df1230 */
  push32(0x11df6d55u); f_11df1230();
  /* 11df6d55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df6d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6d5c je 0x11df6d78 */
  if (C.zf) goto L_11df6d78;
  /* 11df6d5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d61 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d65 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11df6d68 push eax */
  push32((uint32_t)(EAX));
  /* 11df6d69 call 0x11df1253 */
  push32(0x11df6d6eu); f_11df1253();
  /* 11df6d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6d71 mov ecx, eax */
  ECX = (EAX);
  /* 11df6d73 call 0x11df119f */
  push32(0x11df6d78u); f_11df119f();
L_11df6d78:;
  /* 11df6d78 jmp 0x11df6f05 */
  goto L_11df6f05;
L_11df6d7d:;
  /* 11df6d7d mov esi, esp */
  ESI = (ESP);
  /* 11df6d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6d81 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11df6d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6d89 call 0x11df125d */
  push32(0x11df6d8eu); f_11df125d();
  /* 11df6d8e push eax */
  push32((uint32_t)(EAX));
  /* 11df6d8f call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df6d95u);
  /* 11df6d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6d9a call 0x11df9b90 */
  push32(0x11df6d9fu); f_11df9b90();
  /* 11df6d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df6da1 jle 0x11df6f05 */
  if ((C.zf||C.sf!=C.of)) goto L_11df6f05;
  /* 11df6da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6daa cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6dae je 0x11df6f05 */
  if (C.zf) goto L_11df6f05;
  /* 11df6db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6db7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11df6dba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11df6dbd cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6dc1 ja 0x11df6e92 */
  if ((!C.cf&&!C.zf)) goto L_11df6e92;
  /* 11df6dc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df6dca jmp dword ptr [ecx*4 + 0x11df6f16] */
  switch (ECX) {
    case 0: goto L_11df6dd1;
    case 1: goto L_11df6df4;
    case 2: goto L_11df6e14;
    case 3: goto L_11df6e34;
    case 4: goto L_11df6e54;
    case 5: goto L_11df6e74;
    default: x86_unimpl("switch@0x11df6dca out of table"); return;
  }
L_11df6dd1:;
  /* 11df6dd1 mov esi, esp */
  ESI = (ESP);
  /* 11df6dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6dd6 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11df6dd9 push eax */
  push32((uint32_t)(EAX));
  /* 11df6dda push 0x11e2a2fc */
  push32((uint32_t)(0x11e2a2fcu));
  /* 11df6ddf call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6de5u);
  /* 11df6de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6dea call 0x11df9b90 */
  push32(0x11df6defu); f_11df9b90();
  /* 11df6def jmp 0x11df6e92 */
  goto L_11df6e92;
L_11df6df4:;
  /* 11df6df4 mov esi, esp */
  ESI = (ESP);
  /* 11df6df6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6df9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11df6dfc push edx */
  push32((uint32_t)(EDX));
  /* 11df6dfd push 0x11e2a2f0 */
  push32((uint32_t)(0x11e2a2f0u));
  /* 11df6e02 call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6e08u);
  /* 11df6e08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6e0d call 0x11df9b90 */
  push32(0x11df6e12u); f_11df9b90();
  /* 11df6e12 jmp 0x11df6e92 */
  goto L_11df6e92;
L_11df6e14:;
  /* 11df6e14 mov esi, esp */
  ESI = (ESP);
  /* 11df6e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6e19 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11df6e1c push ecx */
  push32((uint32_t)(ECX));
  /* 11df6e1d push 0x11e2a2e4 */
  push32((uint32_t)(0x11e2a2e4u));
  /* 11df6e22 call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6e28u);
  /* 11df6e28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6e2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6e2d call 0x11df9b90 */
  push32(0x11df6e32u); f_11df9b90();
  /* 11df6e32 jmp 0x11df6e92 */
  goto L_11df6e92;
L_11df6e34:;
  /* 11df6e34 mov esi, esp */
  ESI = (ESP);
  /* 11df6e36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6e39 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11df6e3c push eax */
  push32((uint32_t)(EAX));
  /* 11df6e3d push 0x11e2a2d8 */
  push32((uint32_t)(0x11e2a2d8u));
  /* 11df6e42 call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6e48u);
  /* 11df6e48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6e4d call 0x11df9b90 */
  push32(0x11df6e52u); f_11df9b90();
  /* 11df6e52 jmp 0x11df6e92 */
  goto L_11df6e92;
L_11df6e54:;
  /* 11df6e54 mov esi, esp */
  ESI = (ESP);
  /* 11df6e56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6e59 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11df6e5c push edx */
  push32((uint32_t)(EDX));
  /* 11df6e5d push 0x11e2a2cc */
  push32((uint32_t)(0x11e2a2ccu));
  /* 11df6e62 call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6e68u);
  /* 11df6e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6e6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6e6d call 0x11df9b90 */
  push32(0x11df6e72u); f_11df9b90();
  /* 11df6e72 jmp 0x11df6e92 */
  goto L_11df6e92;
L_11df6e74:;
  /* 11df6e74 mov esi, esp */
  ESI = (ESP);
  /* 11df6e76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6e79 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11df6e7c push ecx */
  push32((uint32_t)(ECX));
  /* 11df6e7d push 0x11e2a2c0 */
  push32((uint32_t)(0x11e2a2c0u));
  /* 11df6e82 call dword ptr [0x11e33494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33494))), 0x11df6e88u);
  /* 11df6e88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6e8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6e8d call 0x11df9b90 */
  push32(0x11df6e92u); f_11df9b90();
L_11df6e92:;
  /* 11df6e92 mov esi, esp */
  ESI = (ESP);
  /* 11df6e94 push 0x11e2a2b0 */
  push32((uint32_t)(0x11e2a2b0u));
  /* 11df6e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6e9b push 0x11e2a1b8 */
  push32((uint32_t)(0x11e2a1b8u));
  /* 11df6ea0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11df6ea2 call dword ptr [0x11e33504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33504))), 0x11df6ea8u);
  /* 11df6ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6ead call 0x11df9b90 */
  push32(0x11df6eb2u); f_11df9b90();
  /* 11df6eb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11df6eb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6eb9 je 0x11df6ec3 */
  if (C.zf) goto L_11df6ec3;
  /* 11df6ebb cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6ebf je 0x11df6ecf */
  if (C.zf) goto L_11df6ecf;
  /* 11df6ec1 jmp 0x11df6ed7 */
  goto L_11df6ed7;
L_11df6ec3:;
  /* 11df6ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6ec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6ec8 call 0x11df10f5 */
  push32(0x11df6ecdu); f_11df10f5();
  /* 11df6ecd jmp 0x11df6ed7 */
  goto L_11df6ed7;
L_11df6ecf:;
  /* 11df6ecf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6ed2 call 0x11df1122 */
  push32(0x11df6ed7u); f_11df1122();
L_11df6ed7:;
  /* 11df6ed7 mov esi, esp */
  ESI = (ESP);
  /* 11df6ed9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6edc mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11df6edf push eax */
  push32((uint32_t)(EAX));
  /* 11df6ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6ee3 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11df6ee6 push edx */
  push32((uint32_t)(EDX));
  /* 11df6ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6ee9 call dword ptr [0x11e33498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33498))), 0x11df6eefu);
  /* 11df6eef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6ef2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6ef4 call 0x11df9b90 */
  push32(0x11df6ef9u); f_11df9b90();
  /* 11df6ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11df6efd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6f00 call 0x11df1181 */
  push32(0x11df6f05u); f_11df1181();
L_11df6f05:;
  /* 11df6f05 pop edi */
  EDI = (pop32());
  /* 11df6f06 pop esi */
  ESI = (pop32());
  /* 11df6f07 pop ebx */
  EBX = (pop32());
  /* 11df6f08 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df6f0b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df6f0d call 0x11df9b90 */
  push32(0x11df6f12u); f_11df9b90();
  /* 11df6f12 mov esp, ebp */
  ESP = (EBP);
  /* 11df6f14 pop ebp */
  EBP = (pop32());
  /* 11df6f15 ret  */
  ESPCHK(0x11df6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd0 @ 0x11df6fd0 (112 bytes, 43 insns) */
void f_11df6fd0(void) {
  FTRACE(0x11df6fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df6fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df6fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11df6fd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df6fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df6fd7 push esi */
  push32((uint32_t)(ESI));
  /* 11df6fd8 push edi */
  push32((uint32_t)(EDI));
  /* 11df6fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df6fda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df6fdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df6fe2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df6fe7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df6fe9 pop ecx */
  ECX = (pop32());
  /* 11df6fea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df6fed push 6 */
  push32((uint32_t)(0x6u));
  /* 11df6fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6ff2 call 0x11df10f5 */
  push32(0x11df6ff7u); f_11df10f5();
  /* 11df6ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df6ffa call 0x11df1159 */
  push32(0x11df6fffu); f_11df1159();
  /* 11df6fff mov esi, esp */
  ESI = (ESP);
  /* 11df7001 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7005 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11df7007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df700a call 0x11df125d */
  push32(0x11df700fu); f_11df125d();
  /* 11df700f push eax */
  push32((uint32_t)(EAX));
  /* 11df7010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7013 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11df7016 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7017 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df701du);
  /* 11df701d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7020 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7022 call 0x11df9b90 */
  push32(0x11df7027u); f_11df9b90();
  /* 11df7027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df702a call 0x11df1249 */
  push32(0x11df702fu); f_11df1249();
  /* 11df702f pop edi */
  EDI = (pop32());
  /* 11df7030 pop esi */
  ESI = (pop32());
  /* 11df7031 pop ebx */
  EBX = (pop32());
  /* 11df7032 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7035 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7037 call 0x11df9b90 */
  push32(0x11df703cu); f_11df9b90();
  /* 11df703c mov esp, ebp */
  ESP = (EBP);
  /* 11df703e pop ebp */
  EBP = (pop32());
  /* 11df703f ret  */
  ESPCHK(0x11df6fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x11df7060 (75 bytes, 32 insns) */
void f_11df7060(void) {
  FTRACE(0x11df7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7060 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7061 mov ebp, esp */
  EBP = (ESP);
  /* 11df7063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7066 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7067 push esi */
  push32((uint32_t)(ESI));
  /* 11df7068 push edi */
  push32((uint32_t)(EDI));
  /* 11df7069 push ecx */
  push32((uint32_t)(ECX));
  /* 11df706a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df706d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7072 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7077 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7079 pop ecx */
  ECX = (pop32());
  /* 11df707a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df707d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df7080 push eax */
  push32((uint32_t)(EAX));
  /* 11df7081 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df7084 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7088 push edx */
  push32((uint32_t)(EDX));
  /* 11df7089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df708c call 0x11df101e */
  push32(0x11df7091u); f_11df101e();
  /* 11df7091 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7094 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11df7098 pop edi */
  EDI = (pop32());
  /* 11df7099 pop esi */
  ESI = (pop32());
  /* 11df709a pop ebx */
  EBX = (pop32());
  /* 11df709b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df709e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df70a0 call 0x11df9b90 */
  push32(0x11df70a5u); f_11df9b90();
  /* 11df70a5 mov esp, ebp */
  ESP = (EBP);
  /* 11df70a7 pop ebp */
  EBP = (pop32());
  /* 11df70a8 ret 0xc */
  ESPCHK(0x11df7060u, _esp0);
  ESP += 16; return;
}

/* FUN_100070c0 @ 0x11df70c0 (95 bytes, 37 insns) */
void f_11df70c0(void) {
  FTRACE(0x11df70c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df70c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df70c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df70c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df70c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df70c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df70c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df70c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df70ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df70cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df70d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df70d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df70d9 pop ecx */
  ECX = (pop32());
  /* 11df70da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df70dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df70e1 mov esi, esp */
  ESI = (ESP);
  /* 11df70e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df70e5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11df70ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df70ed call 0x11df125d */
  push32(0x11df70f2u); f_11df125d();
  /* 11df70f2 push eax */
  push32((uint32_t)(EAX));
  /* 11df70f3 call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df70f9u);
  /* 11df70f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df70fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df70fe call 0x11df9b90 */
  push32(0x11df7103u); f_11df9b90();
  /* 11df7103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7105 jle 0x11df710b */
  if ((C.zf||C.sf!=C.of)) goto L_11df710b;
  /* 11df7107 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df710b:;
  /* 11df710b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df710e pop edi */
  EDI = (pop32());
  /* 11df710f pop esi */
  ESI = (pop32());
  /* 11df7110 pop ebx */
  EBX = (pop32());
  /* 11df7111 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7114 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7116 call 0x11df9b90 */
  push32(0x11df711bu); f_11df9b90();
  /* 11df711b mov esp, ebp */
  ESP = (EBP);
  /* 11df711d pop ebp */
  EBP = (pop32());
  /* 11df711e ret  */
  ESPCHK(0x11df70c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007140 @ 0x11df7140 (78 bytes, 28 insns) */
void f_11df7140(void) {
  FTRACE(0x11df7140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7140 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7141 mov ebp, esp */
  EBP = (ESP);
  /* 11df7143 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7146 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7147 push esi */
  push32((uint32_t)(ESI));
  /* 11df7148 push edi */
  push32((uint32_t)(EDI));
  /* 11df7149 push ecx */
  push32((uint32_t)(ECX));
  /* 11df714a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df714d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7152 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7157 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7159 pop ecx */
  ECX = (pop32());
  /* 11df715a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df715d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7163 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11df7166 mov edx, dword ptr [0x11e305bc] */
  EDX = (r32((uint32_t)(0x11e305bc)));
  /* 11df716c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df716f mov dword ptr [edx*4 + 0x11e3056c], eax */
  w32((uint32_t)(EDX*4 + 0x11e3056c), (EAX));
  /* 11df7176 mov ecx, dword ptr [0x11e305bc] */
  ECX = (r32((uint32_t)(0x11e305bc)));
  /* 11df717c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df717f mov dword ptr [0x11e305bc], ecx */
  w32((uint32_t)(0x11e305bc), (ECX));
  /* 11df7185 pop edi */
  EDI = (pop32());
  /* 11df7186 pop esi */
  ESI = (pop32());
  /* 11df7187 pop ebx */
  EBX = (pop32());
  /* 11df7188 mov esp, ebp */
  ESP = (EBP);
  /* 11df718a pop ebp */
  EBP = (pop32());
  /* 11df718b ret 4 */
  ESPCHK(0x11df7140u, _esp0);
  ESP += 8; return;
}

/* FUN_100071b0 @ 0x11df71b0 (128 bytes, 44 insns) */
void f_11df71b0(void) {
  FTRACE(0x11df71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df71b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df71b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df71b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df71b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df71b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df71b9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df71bc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df71c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df71c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df71c8 mov eax, dword ptr [0x11e3056c] */
  EAX = (r32((uint32_t)(0x11e3056c)));
  /* 11df71cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11df71d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df71d7 jmp 0x11df71e2 */
  goto L_11df71e2;
L_11df71d9:;
  /* 11df71d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df71dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df71df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11df71e2:;
  /* 11df71e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df71e5 cmp edx, dword ptr [0x11e305bc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e305bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df71eb jge 0x11df721c */
  if ((C.sf==C.of)) goto L_11df721c;
  /* 11df71ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df71f0 mov ecx, dword ptr [eax*4 + 0x11e3056c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e3056c)));
  /* 11df71f7 call 0x11df1104 */
  push32(0x11df71fcu); f_11df1104();
  /* 11df71fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df71fe mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11df7201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11df7206 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11df7209 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df720b jne 0x11df721a */
  if (!C.zf) goto L_11df721a;
  /* 11df720d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df7210 mov edx, dword ptr [ecx*4 + 0x11e3056c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e3056c)));
  /* 11df7217 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11df721a:;
  /* 11df721a jmp 0x11df71d9 */
  goto L_11df71d9;
L_11df721c:;
  /* 11df721c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df721f pop edi */
  EDI = (pop32());
  /* 11df7220 pop esi */
  ESI = (pop32());
  /* 11df7221 pop ebx */
  EBX = (pop32());
  /* 11df7222 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7225 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7227 call 0x11df9b90 */
  push32(0x11df722cu); f_11df9b90();
  /* 11df722c mov esp, ebp */
  ESP = (EBP);
  /* 11df722e pop ebp */
  EBP = (pop32());
  /* 11df722f ret  */
  ESPCHK(0x11df71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x11df7250 (47 bytes, 22 insns) */
void f_11df7250(void) {
  FTRACE(0x11df7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7250 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7251 mov ebp, esp */
  EBP = (ESP);
  /* 11df7253 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7256 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7257 push esi */
  push32((uint32_t)(ESI));
  /* 11df7258 push edi */
  push32((uint32_t)(EDI));
  /* 11df7259 push ecx */
  push32((uint32_t)(ECX));
  /* 11df725a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df725d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7269 pop ecx */
  ECX = (pop32());
  /* 11df726a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df726d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7270 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7273 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11df7276 pop edi */
  EDI = (pop32());
  /* 11df7277 pop esi */
  ESI = (pop32());
  /* 11df7278 pop ebx */
  EBX = (pop32());
  /* 11df7279 mov esp, ebp */
  ESP = (EBP);
  /* 11df727b pop ebp */
  EBP = (pop32());
  /* 11df727c ret 4 */
  ESPCHK(0x11df7250u, _esp0);
  ESP += 8; return;
}

/* FUN_10007290 @ 0x11df7290 (47 bytes, 22 insns) */
void f_11df7290(void) {
  FTRACE(0x11df7290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7290 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7291 mov ebp, esp */
  EBP = (ESP);
  /* 11df7293 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7296 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7297 push esi */
  push32((uint32_t)(ESI));
  /* 11df7298 push edi */
  push32((uint32_t)(EDI));
  /* 11df7299 push ecx */
  push32((uint32_t)(ECX));
  /* 11df729a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df729d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df72a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df72a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df72a9 pop ecx */
  ECX = (pop32());
  /* 11df72aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df72ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df72b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df72b3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11df72b6 pop edi */
  EDI = (pop32());
  /* 11df72b7 pop esi */
  ESI = (pop32());
  /* 11df72b8 pop ebx */
  EBX = (pop32());
  /* 11df72b9 mov esp, ebp */
  ESP = (EBP);
  /* 11df72bb pop ebp */
  EBP = (pop32());
  /* 11df72bc ret 4 */
  ESPCHK(0x11df7290u, _esp0);
  ESP += 8; return;
}

/* FUN_100072d0 @ 0x11df72d0 (47 bytes, 22 insns) */
void f_11df72d0(void) {
  FTRACE(0x11df72d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df72d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df72d1 mov ebp, esp */
  EBP = (ESP);
  /* 11df72d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df72d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df72d7 push esi */
  push32((uint32_t)(ESI));
  /* 11df72d8 push edi */
  push32((uint32_t)(EDI));
  /* 11df72d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df72da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df72dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df72e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df72e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df72e9 pop ecx */
  ECX = (pop32());
  /* 11df72ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df72ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df72f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df72f3 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11df72f6 pop edi */
  EDI = (pop32());
  /* 11df72f7 pop esi */
  ESI = (pop32());
  /* 11df72f8 pop ebx */
  EBX = (pop32());
  /* 11df72f9 mov esp, ebp */
  ESP = (EBP);
  /* 11df72fb pop ebp */
  EBP = (pop32());
  /* 11df72fc ret 4 */
  ESPCHK(0x11df72d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007310 @ 0x11df7310 (85 bytes, 35 insns) */
void f_11df7310(void) {
  FTRACE(0x11df7310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7310 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7311 mov ebp, esp */
  EBP = (ESP);
  /* 11df7313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7316 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7317 push esi */
  push32((uint32_t)(ESI));
  /* 11df7318 push edi */
  push32((uint32_t)(EDI));
  /* 11df7319 push ecx */
  push32((uint32_t)(ECX));
  /* 11df731a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df731d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7322 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7327 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7329 pop ecx */
  ECX = (pop32());
  /* 11df732a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df732d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7330 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11df7333 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7337 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11df733a push eax */
  push32((uint32_t)(EAX));
  /* 11df733b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df733e call 0x11df1181 */
  push32(0x11df7343u); f_11df1181();
  /* 11df7343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7346 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11df7349 push edx */
  push32((uint32_t)(EDX));
  /* 11df734a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df734d call 0x11df11c2 */
  push32(0x11df7352u); f_11df11c2();
  /* 11df7352 pop edi */
  EDI = (pop32());
  /* 11df7353 pop esi */
  ESI = (pop32());
  /* 11df7354 pop ebx */
  EBX = (pop32());
  /* 11df7355 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7358 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df735a call 0x11df9b90 */
  push32(0x11df735fu); f_11df9b90();
  /* 11df735f mov esp, ebp */
  ESP = (EBP);
  /* 11df7361 pop ebp */
  EBP = (pop32());
  /* 11df7362 ret 4 */
  ESPCHK(0x11df7310u, _esp0);
  ESP += 8; return;
}

/* FUN_10007380 @ 0x11df7380 (42 bytes, 21 insns) */
void f_11df7380(void) {
  FTRACE(0x11df7380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7380 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7381 mov ebp, esp */
  EBP = (ESP);
  /* 11df7383 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7386 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7387 push esi */
  push32((uint32_t)(ESI));
  /* 11df7388 push edi */
  push32((uint32_t)(EDI));
  /* 11df7389 push ecx */
  push32((uint32_t)(ECX));
  /* 11df738a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df738d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7392 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7397 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7399 pop ecx */
  ECX = (pop32());
  /* 11df739a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df739d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df73a0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11df73a3 pop edi */
  EDI = (pop32());
  /* 11df73a4 pop esi */
  ESI = (pop32());
  /* 11df73a5 pop ebx */
  EBX = (pop32());
  /* 11df73a6 mov esp, ebp */
  ESP = (EBP);
  /* 11df73a8 pop ebp */
  EBP = (pop32());
  /* 11df73a9 ret  */
  ESPCHK(0x11df7380u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x11df73c0 (39 bytes, 20 insns) */
void f_11df73c0(void) {
  FTRACE(0x11df73c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df73c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df73c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df73c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df73c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df73c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df73c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df73c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df73ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df73cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df73d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df73d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df73d9 pop ecx */
  ECX = (pop32());
  /* 11df73da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df73dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df73e0 pop edi */
  EDI = (pop32());
  /* 11df73e1 pop esi */
  ESI = (pop32());
  /* 11df73e2 pop ebx */
  EBX = (pop32());
  /* 11df73e3 mov esp, ebp */
  ESP = (EBP);
  /* 11df73e5 pop ebp */
  EBP = (pop32());
  /* 11df73e6 ret  */
  ESPCHK(0x11df73c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x11df73f0 (518 bytes, 176 insns) */
void f_11df73f0(void) {
  FTRACE(0x11df73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df73f1 mov ebp, esp */
  EBP = (ESP);
  /* 11df73f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df73f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df73f7 push esi */
  push32((uint32_t)(ESI));
  /* 11df73f8 push edi */
  push32((uint32_t)(EDI));
  /* 11df73f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df73fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df73fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7409 pop ecx */
  ECX = (pop32());
  /* 11df740a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df740d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7410 call 0x11df1172 */
  push32(0x11df7415u); f_11df1172();
  /* 11df7415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7417 jle 0x11df75e5 */
  if ((C.zf||C.sf!=C.of)) goto L_11df75e5;
  /* 11df741d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7420 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df7423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7426 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7429 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df742c jge 0x11df75e5 */
  if ((C.sf==C.of)) goto L_11df75e5;
  /* 11df7432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7435 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df7438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df743b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7440 jne 0x11df7509 */
  if (!C.zf) goto L_11df7509;
  /* 11df7446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7449 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df744c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df744f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11df7453 push eax */
  push32((uint32_t)(EAX));
  /* 11df7454 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7457 call 0x11df10aa */
  push32(0x11df745cu); f_11df10aa();
  /* 11df745c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7463 je 0x11df7490 */
  if (C.zf) goto L_11df7490;
  /* 11df7465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7468 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11df746b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df746e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11df7472 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7476 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11df7479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df747c mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11df7480 push edx */
  push32((uint32_t)(EDX));
  /* 11df7481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7484 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7487 push eax */
  push32((uint32_t)(EAX));
  /* 11df7488 call 0x11df105f */
  push32(0x11df748du); f_11df105f();
  /* 11df748d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11df7490:;
  /* 11df7490 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7493 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11df7496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7499 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11df749d push ecx */
  push32((uint32_t)(ECX));
  /* 11df749e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74a1 call 0x11df10aa */
  push32(0x11df74a6u); f_11df10aa();
  /* 11df74a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df74ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df74ad je 0x11df7504 */
  if (C.zf) goto L_11df7504;
  /* 11df74af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74b2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11df74b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df74b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74bb mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11df74be mov esi, esp */
  ESI = (ESP);
  /* 11df74c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df74c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74c5 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df74c8 push edx */
  push32((uint32_t)(EDX));
  /* 11df74c9 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df74cfu);
  /* 11df74cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df74d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df74d4 call 0x11df9b90 */
  push32(0x11df74d9u); f_11df9b90();
  /* 11df74d9 mov esi, esp */
  ESI = (ESP);
  /* 11df74db push 0 */
  push32((uint32_t)(0x0u));
  /* 11df74dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11df74df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74e2 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df74e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74e8 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11df74ec push eax */
  push32((uint32_t)(EAX));
  /* 11df74ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df74f0 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11df74f3 push edx */
  push32((uint32_t)(EDX));
  /* 11df74f4 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df74fau);
  /* 11df74fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df74fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df74ff call 0x11df9b90 */
  push32(0x11df7504u); f_11df9b90();
L_11df7504:;
  /* 11df7504 jmp 0x11df75e5 */
  goto L_11df75e5;
L_11df7509:;
  /* 11df7509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df750c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df750f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7512 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7517 je 0x11df7529 */
  if (C.zf) goto L_11df7529;
  /* 11df7519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df751c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11df751f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7522 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7527 jne 0x11df7580 */
  if (!C.zf) goto L_11df7580;
L_11df7529:;
  /* 11df7529 mov esi, esp */
  ESI = (ESP);
  /* 11df752b push 0 */
  push32((uint32_t)(0x0u));
  /* 11df752d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7530 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7533 push eax */
  push32((uint32_t)(EAX));
  /* 11df7534 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df753au);
  /* 11df753a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df753d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df753f call 0x11df9b90 */
  push32(0x11df7544u); f_11df9b90();
  /* 11df7544 mov esi, esp */
  ESI = (ESP);
  /* 11df7546 push 2 */
  push32((uint32_t)(0x2u));
  /* 11df7548 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df754a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df754d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11df7550 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7556 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11df7559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df755c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11df755f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7562 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11df7566 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df756a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11df756d push eax */
  push32((uint32_t)(EAX));
  /* 11df756e call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df7574u);
  /* 11df7574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7579 call 0x11df9b90 */
  push32(0x11df757eu); f_11df9b90();
  /* 11df757e jmp 0x11df75e5 */
  goto L_11df75e5;
L_11df7580:;
  /* 11df7580 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7583 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11df7586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7589 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df758e jne 0x11df75e5 */
  if (!C.zf) goto L_11df75e5;
  /* 11df7590 mov esi, esp */
  ESI = (ESP);
  /* 11df7592 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7594 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7597 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df759a push ecx */
  push32((uint32_t)(ECX));
  /* 11df759b call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df75a1u);
  /* 11df75a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df75a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df75a6 call 0x11df9b90 */
  push32(0x11df75abu); f_11df9b90();
  /* 11df75ab mov esi, esp */
  ESI = (ESP);
  /* 11df75ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11df75af push 0 */
  push32((uint32_t)(0x0u));
  /* 11df75b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df75b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11df75b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df75ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df75bd mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11df75c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df75c3 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11df75c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df75c9 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11df75cd push edx */
  push32((uint32_t)(EDX));
  /* 11df75ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df75d1 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11df75d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11df75d5 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df75dbu);
  /* 11df75db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df75de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df75e0 call 0x11df9b90 */
  push32(0x11df75e5u); f_11df9b90();
L_11df75e5:;
  /* 11df75e5 pop edi */
  EDI = (pop32());
  /* 11df75e6 pop esi */
  ESI = (pop32());
  /* 11df75e7 pop ebx */
  EBX = (pop32());
  /* 11df75e8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df75eb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df75ed call 0x11df9b90 */
  push32(0x11df75f2u); f_11df9b90();
  /* 11df75f2 mov esp, ebp */
  ESP = (EBP);
  /* 11df75f4 pop ebp */
  EBP = (pop32());
  /* 11df75f5 ret  */
  ESPCHK(0x11df73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007680 @ 0x11df7680 (38 bytes, 20 insns) */
void f_11df7680(void) {
  FTRACE(0x11df7680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7680 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7681 mov ebp, esp */
  EBP = (ESP);
  /* 11df7683 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7686 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7687 push esi */
  push32((uint32_t)(ESI));
  /* 11df7688 push edi */
  push32((uint32_t)(EDI));
  /* 11df7689 push ecx */
  push32((uint32_t)(ECX));
  /* 11df768a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df768d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7692 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7697 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7699 pop ecx */
  ECX = (pop32());
  /* 11df769a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df769d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11df769f pop edi */
  EDI = (pop32());
  /* 11df76a0 pop esi */
  ESI = (pop32());
  /* 11df76a1 pop ebx */
  EBX = (pop32());
  /* 11df76a2 mov esp, ebp */
  ESP = (EBP);
  /* 11df76a4 pop ebp */
  EBP = (pop32());
  /* 11df76a5 ret  */
  ESPCHK(0x11df7680u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x11df76b0 (85 bytes, 34 insns) */
void f_11df76b0(void) {
  FTRACE(0x11df76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df76b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df76b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df76b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df76b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df76b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df76b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df76ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df76bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df76c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df76c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df76c9 pop ecx */
  ECX = (pop32());
  /* 11df76ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df76cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76d0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11df76d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df76d9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11df76dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76e0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11df76e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df76e9 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 11df76ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76f0 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11df76f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df76f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df76f9 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11df76fc pop edi */
  EDI = (pop32());
  /* 11df76fd pop esi */
  ESI = (pop32());
  /* 11df76fe pop ebx */
  EBX = (pop32());
  /* 11df76ff mov esp, ebp */
  ESP = (EBP);
  /* 11df7701 pop ebp */
  EBP = (pop32());
  /* 11df7702 ret 8 */
  ESPCHK(0x11df76b0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007720 @ 0x11df7720 (86 bytes, 33 insns) */
void f_11df7720(void) {
  FTRACE(0x11df7720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7720 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7721 mov ebp, esp */
  EBP = (ESP);
  /* 11df7723 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7726 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7727 push esi */
  push32((uint32_t)(ESI));
  /* 11df7728 push edi */
  push32((uint32_t)(EDI));
  /* 11df7729 push ecx */
  push32((uint32_t)(ECX));
  /* 11df772a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df772d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7739 pop ecx */
  ECX = (pop32());
  /* 11df773a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df773d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7740 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11df7743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7749 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11df774d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7750 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11df7753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7756 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 11df775e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7761 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11df7764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df776a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11df776d pop edi */
  EDI = (pop32());
  /* 11df776e pop esi */
  ESI = (pop32());
  /* 11df776f pop ebx */
  EBX = (pop32());
  /* 11df7770 mov esp, ebp */
  ESP = (EBP);
  /* 11df7772 pop ebp */
  EBP = (pop32());
  /* 11df7773 ret 4 */
  ESPCHK(0x11df7720u, _esp0);
  ESP += 8; return;
}

/* FUN_10007790 @ 0x11df7790 (119 bytes, 43 insns) */
void f_11df7790(void) {
  FTRACE(0x11df7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7790 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7791 mov ebp, esp */
  EBP = (ESP);
  /* 11df7793 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7796 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7797 push esi */
  push32((uint32_t)(ESI));
  /* 11df7798 push edi */
  push32((uint32_t)(EDI));
  /* 11df7799 push ecx */
  push32((uint32_t)(ECX));
  /* 11df779a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df779d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df77a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df77a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df77a9 pop ecx */
  ECX = (pop32());
  /* 11df77aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df77ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77b0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df77b3 mov esi, esp */
  ESI = (ESP);
  /* 11df77b5 push eax */
  push32((uint32_t)(EAX));
  /* 11df77b6 call dword ptr [0x11e3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3353c))), 0x11df77bcu);
  /* 11df77bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df77bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df77c1 call 0x11df9b90 */
  push32(0x11df77c6u); f_11df9b90();
  /* 11df77c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df77cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11df77ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df77d4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11df77d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77da mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11df77e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77e4 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 11df77eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df77ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df77f1 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11df77f4 pop edi */
  EDI = (pop32());
  /* 11df77f5 pop esi */
  ESI = (pop32());
  /* 11df77f6 pop ebx */
  EBX = (pop32());
  /* 11df77f7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df77fa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df77fc call 0x11df9b90 */
  push32(0x11df7801u); f_11df9b90();
  /* 11df7801 mov esp, ebp */
  ESP = (EBP);
  /* 11df7803 pop ebp */
  EBP = (pop32());
  /* 11df7804 ret 0xc */
  ESPCHK(0x11df7790u, _esp0);
  ESP += 16; return;
}

/* FUN_10007830 @ 0x11df7830 (263 bytes, 93 insns) */
void f_11df7830(void) {
  FTRACE(0x11df7830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7830 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7831 mov ebp, esp */
  EBP = (ESP);
  /* 11df7833 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7836 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7837 push esi */
  push32((uint32_t)(ESI));
  /* 11df7838 push edi */
  push32((uint32_t)(EDI));
  /* 11df7839 push ecx */
  push32((uint32_t)(ECX));
  /* 11df783a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df783d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df7842 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7847 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7849 pop ecx */
  ECX = (pop32());
  /* 11df784a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df784d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7850 call 0x11df1172 */
  push32(0x11df7855u); f_11df1172();
  /* 11df7855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7857 jne 0x11df7924 */
  if (!C.zf) goto L_11df7924;
  /* 11df785d mov esi, esp */
  ESI = (ESP);
  /* 11df785f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7862 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11df7865 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7866 call dword ptr [0x11e33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33500))), 0x11df786cu);
  /* 11df786c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df786f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7871 call 0x11df9b90 */
  push32(0x11df7876u); f_11df9b90();
  /* 11df7876 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df787d jmp 0x11df7888 */
  goto L_11df7888;
L_11df787f:;
  /* 11df787f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df7882 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7885 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11df7888:;
  /* 11df7888 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df788b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df788e jge 0x11df78e0 */
  if ((C.sf==C.of)) goto L_11df78e0;
  /* 11df7890 mov esi, esp */
  ESI = (ESP);
  /* 11df7892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7894 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7897 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df789b mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11df789e push eax */
  push32((uint32_t)(EAX));
  /* 11df789f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11df78a4 push edx */
  push32((uint32_t)(EDX));
  /* 11df78a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78a8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11df78ab push ecx */
  push32((uint32_t)(ECX));
  /* 11df78ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78af add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78b2 push edx */
  push32((uint32_t)(EDX));
  /* 11df78b3 call dword ptr [0x11e334a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a8))), 0x11df78b9u);
  /* 11df78b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df78be call 0x11df9b90 */
  push32(0x11df78c3u); f_11df9b90();
  /* 11df78c3 mov esi, esp */
  ESI = (ESP);
  /* 11df78c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11df78c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78cd push eax */
  push32((uint32_t)(EAX));
  /* 11df78ce call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df78d4u);
  /* 11df78d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df78d9 call 0x11df9b90 */
  push32(0x11df78deu); f_11df9b90();
  /* 11df78de jmp 0x11df787f */
  goto L_11df787f;
L_11df78e0:;
  /* 11df78e0 mov esi, esp */
  ESI = (ESP);
  /* 11df78e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df78e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78e7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78ea push ecx */
  push32((uint32_t)(ECX));
  /* 11df78eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df78ee mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11df78f1 push eax */
  push32((uint32_t)(EAX));
  /* 11df78f2 call dword ptr [0x11e33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33544))), 0x11df78f8u);
  /* 11df78f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df78fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df78fd call 0x11df9b90 */
  push32(0x11df7902u); f_11df9b90();
  /* 11df7902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7905 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 11df790c push 0 */
  push32((uint32_t)(0x0u));
  /* 11df790e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7911 push edx */
  push32((uint32_t)(EDX));
  /* 11df7912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7915 call 0x11df1055 */
  push32(0x11df791au); f_11df1055();
  /* 11df791a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df791d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11df7924:;
  /* 11df7924 pop edi */
  EDI = (pop32());
  /* 11df7925 pop esi */
  ESI = (pop32());
  /* 11df7926 pop ebx */
  EBX = (pop32());
  /* 11df7927 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df792a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df792c call 0x11df9b90 */
  push32(0x11df7931u); f_11df9b90();
  /* 11df7931 mov esp, ebp */
  ESP = (EBP);
  /* 11df7933 pop ebp */
  EBP = (pop32());
  /* 11df7934 ret 8 */
  ESPCHK(0x11df7830u, _esp0);
  ESP += 12; return;
}

/* FUN_10007980 @ 0x11df7980 (42 bytes, 21 insns) */
void f_11df7980(void) {
  FTRACE(0x11df7980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7980 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7981 mov ebp, esp */
  EBP = (ESP);
  /* 11df7983 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7986 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7987 push esi */
  push32((uint32_t)(ESI));
  /* 11df7988 push edi */
  push32((uint32_t)(EDI));
  /* 11df7989 push ecx */
  push32((uint32_t)(ECX));
  /* 11df798a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df798d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7992 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7997 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7999 pop ecx */
  ECX = (pop32());
  /* 11df799a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df799d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df79a0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df79a3 pop edi */
  EDI = (pop32());
  /* 11df79a4 pop esi */
  ESI = (pop32());
  /* 11df79a5 pop ebx */
  EBX = (pop32());
  /* 11df79a6 mov esp, ebp */
  ESP = (EBP);
  /* 11df79a8 pop ebp */
  EBP = (pop32());
  /* 11df79a9 ret  */
  ESPCHK(0x11df7980u, _esp0);
  ESP += 4; return;
}

/* FUN_100079c0 @ 0x11df79c0 (78 bytes, 33 insns) */
void f_11df79c0(void) {
  FTRACE(0x11df79c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df79c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df79c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df79c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df79c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df79c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df79c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df79c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df79ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df79cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df79d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df79d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df79d9 pop ecx */
  ECX = (pop32());
  /* 11df79da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df79dd mov esi, esp */
  ESI = (ESP);
  /* 11df79df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df79e2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11df79e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11df79e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df79e9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df79ec push edx */
  push32((uint32_t)(EDX));
  /* 11df79ed call dword ptr [0x11e334b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334b4))), 0x11df79f3u);
  /* 11df79f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df79f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df79f8 call 0x11df9b90 */
  push32(0x11df79fdu); f_11df9b90();
  /* 11df79fd pop edi */
  EDI = (pop32());
  /* 11df79fe pop esi */
  ESI = (pop32());
  /* 11df79ff pop ebx */
  EBX = (pop32());
  /* 11df7a00 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7a03 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7a05 call 0x11df9b90 */
  push32(0x11df7a0au); f_11df9b90();
  /* 11df7a0a mov esp, ebp */
  ESP = (EBP);
  /* 11df7a0c pop ebp */
  EBP = (pop32());
  /* 11df7a0d ret  */
  ESPCHK(0x11df79c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x11df7a30 (102 bytes, 40 insns) */
void f_11df7a30(void) {
  FTRACE(0x11df7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7a31 mov ebp, esp */
  EBP = (ESP);
  /* 11df7a33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7a36 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7a37 push esi */
  push32((uint32_t)(ESI));
  /* 11df7a38 push edi */
  push32((uint32_t)(EDI));
  /* 11df7a39 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7a3a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df7a3d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df7a42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7a47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7a49 pop ecx */
  ECX = (pop32());
  /* 11df7a4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7a4d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df7a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7a54 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7a57 mov esi, esp */
  ESI = (ESP);
  /* 11df7a59 push eax */
  push32((uint32_t)(EAX));
  /* 11df7a5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7a5d push ecx */
  push32((uint32_t)(ECX));
  /* 11df7a5e call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df7a64u);
  /* 11df7a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7a69 call 0x11df9b90 */
  push32(0x11df7a6eu); f_11df9b90();
  /* 11df7a6e mov esi, eax */
  ESI = (EAX);
  /* 11df7a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7a73 call 0x11df1172 */
  push32(0x11df7a78u); f_11df1172();
  /* 11df7a78 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7a7a jne 0x11df7a80 */
  if (!C.zf) goto L_11df7a80;
  /* 11df7a7c mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df7a80:;
  /* 11df7a80 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df7a83 pop edi */
  EDI = (pop32());
  /* 11df7a84 pop esi */
  ESI = (pop32());
  /* 11df7a85 pop ebx */
  EBX = (pop32());
  /* 11df7a86 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7a89 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7a8b call 0x11df9b90 */
  push32(0x11df7a90u); f_11df9b90();
  /* 11df7a90 mov esp, ebp */
  ESP = (EBP);
  /* 11df7a92 pop ebp */
  EBP = (pop32());
  /* 11df7a93 ret 4 */
  ESPCHK(0x11df7a30u, _esp0);
  ESP += 8; return;
}

/* FUN_10007ab0 @ 0x11df7ab0 (117 bytes, 44 insns) */
void f_11df7ab0(void) {
  FTRACE(0x11df7ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11df7ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11df7ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11df7ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df7abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7ac9 pop ecx */
  ECX = (pop32());
  /* 11df7aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7acd mov esi, esp */
  ESI = (ESP);
  /* 11df7acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11df7ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ad6 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7ada call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df7ae0u);
  /* 11df7ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7ae5 call 0x11df9b90 */
  push32(0x11df7aeau); f_11df9b90();
  /* 11df7aea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7aed add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7af0 push edx */
  push32((uint32_t)(EDX));
  /* 11df7af1 call 0x11df104b */
  push32(0x11df7af6u); f_11df104b();
  /* 11df7af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7af9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7afc mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11df7aff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7b02 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11df7b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7b0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df7b0f mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11df7b12 pop edi */
  EDI = (pop32());
  /* 11df7b13 pop esi */
  ESI = (pop32());
  /* 11df7b14 pop ebx */
  EBX = (pop32());
  /* 11df7b15 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7b18 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7b1a call 0x11df9b90 */
  push32(0x11df7b1fu); f_11df9b90();
  /* 11df7b1f mov esp, ebp */
  ESP = (EBP);
  /* 11df7b21 pop ebp */
  EBP = (pop32());
  /* 11df7b22 ret 8 */
  ESPCHK(0x11df7ab0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007b50 @ 0x11df7b50 (56 bytes, 25 insns) */
void f_11df7b50(void) {
  FTRACE(0x11df7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7b51 mov ebp, esp */
  EBP = (ESP);
  /* 11df7b53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7b56 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7b57 push esi */
  push32((uint32_t)(ESI));
  /* 11df7b58 push edi */
  push32((uint32_t)(EDI));
  /* 11df7b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7b5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df7b5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df7b62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7b67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7b69 pop ecx */
  ECX = (pop32());
  /* 11df7b6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7b6d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df7b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7b74 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7b78 jne 0x11df7b7e */
  if (!C.zf) goto L_11df7b7e;
  /* 11df7b7a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df7b7e:;
  /* 11df7b7e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df7b81 pop edi */
  EDI = (pop32());
  /* 11df7b82 pop esi */
  ESI = (pop32());
  /* 11df7b83 pop ebx */
  EBX = (pop32());
  /* 11df7b84 mov esp, ebp */
  ESP = (EBP);
  /* 11df7b86 pop ebp */
  EBP = (pop32());
  /* 11df7b87 ret  */
  ESPCHK(0x11df7b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x11df7ba0 (163 bytes, 60 insns) */
void f_11df7ba0(void) {
  FTRACE(0x11df7ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11df7ba3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11df7ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11df7ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7baa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df7bad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7bb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7bb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7bb9 pop ecx */
  ECX = (pop32());
  /* 11df7bba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7bc0 call 0x11df10be */
  push32(0x11df7bc5u); f_11df10be();
  /* 11df7bc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7bcc je 0x11df7c30 */
  if (C.zf) goto L_11df7c30;
  /* 11df7bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df7bd4 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11df7bd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7bda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df7bdd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11df7bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7be2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df7be5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11df7be8 mov esi, esp */
  ESI = (ESP);
  /* 11df7bea push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7bef add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11df7bf3 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7bf9u);
  /* 11df7bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7bfe call 0x11df9b90 */
  push32(0x11df7c03u); f_11df9b90();
  /* 11df7c03 mov esi, esp */
  ESI = (ESP);
  /* 11df7c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7c09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7c0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11df7c0e push edx */
  push32((uint32_t)(EDX));
  /* 11df7c0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7c12 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11df7c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7c16 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df7c1cu);
  /* 11df7c1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7c1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7c21 call 0x11df9b90 */
  push32(0x11df7c26u); f_11df9b90();
  /* 11df7c26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7c29 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11df7c30:;
  /* 11df7c30 pop edi */
  EDI = (pop32());
  /* 11df7c31 pop esi */
  ESI = (pop32());
  /* 11df7c32 pop ebx */
  EBX = (pop32());
  /* 11df7c33 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7c36 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7c38 call 0x11df9b90 */
  push32(0x11df7c3du); f_11df9b90();
  /* 11df7c3d mov esp, ebp */
  ESP = (EBP);
  /* 11df7c3f pop ebp */
  EBP = (pop32());
  /* 11df7c40 ret 0xc */
  ESPCHK(0x11df7ba0u, _esp0);
  ESP += 16; return;
}

/* FUN_10007c70 @ 0x11df7c70 (140 bytes, 53 insns) */
void f_11df7c70(void) {
  FTRACE(0x11df7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7c71 mov ebp, esp */
  EBP = (ESP);
  /* 11df7c73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7c76 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7c77 push esi */
  push32((uint32_t)(ESI));
  /* 11df7c78 push edi */
  push32((uint32_t)(EDI));
  /* 11df7c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7c7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df7c7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df7c82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7c87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7c89 pop ecx */
  ECX = (pop32());
  /* 11df7c8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7c8d mov esi, esp */
  ESI = (ESP);
  /* 11df7c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7c91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7c94 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7c97 push eax */
  push32((uint32_t)(EAX));
  /* 11df7c98 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7c9eu);
  /* 11df7c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7ca1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7ca3 call 0x11df9b90 */
  push32(0x11df7ca8u); f_11df9b90();
  /* 11df7ca8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df7cac mov esi, esp */
  ESI = (ESP);
  /* 11df7cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7cb1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11df7cb4 push edx */
  push32((uint32_t)(EDX));
  /* 11df7cb5 call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df7cbbu);
  /* 11df7cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7cbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7cc0 call 0x11df9b90 */
  push32(0x11df7cc5u); f_11df9b90();
  /* 11df7cc5 mov esi, eax */
  ESI = (EAX);
  /* 11df7cc7 mov edi, esp */
  EDI = (ESP);
  /* 11df7cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ccc mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11df7ccf push ecx */
  push32((uint32_t)(ECX));
  /* 11df7cd0 call dword ptr [0x11e334e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334e8))), 0x11df7cd6u);
  /* 11df7cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7cd9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7cdb call 0x11df9b90 */
  push32(0x11df7ce0u); f_11df9b90();
  /* 11df7ce0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7ce2 jne 0x11df7ce8 */
  if (!C.zf) goto L_11df7ce8;
  /* 11df7ce4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df7ce8:;
  /* 11df7ce8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df7ceb pop edi */
  EDI = (pop32());
  /* 11df7cec pop esi */
  ESI = (pop32());
  /* 11df7ced pop ebx */
  EBX = (pop32());
  /* 11df7cee add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7cf1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7cf3 call 0x11df9b90 */
  push32(0x11df7cf8u); f_11df9b90();
  /* 11df7cf8 mov esp, ebp */
  ESP = (EBP);
  /* 11df7cfa pop ebp */
  EBP = (pop32());
  /* 11df7cfb ret  */
  ESPCHK(0x11df7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x11df7d20 (125 bytes, 48 insns) */
void f_11df7d20(void) {
  FTRACE(0x11df7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7d21 mov ebp, esp */
  EBP = (ESP);
  /* 11df7d23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7d26 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7d27 push esi */
  push32((uint32_t)(ESI));
  /* 11df7d28 push edi */
  push32((uint32_t)(EDI));
  /* 11df7d29 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7d2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df7d2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7d32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7d37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7d39 pop ecx */
  ECX = (pop32());
  /* 11df7d3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7d3d mov esi, esp */
  ESI = (ESP);
  /* 11df7d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7d44 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7d47 push eax */
  push32((uint32_t)(EAX));
  /* 11df7d48 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7d4eu);
  /* 11df7d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7d53 call 0x11df9b90 */
  push32(0x11df7d58u); f_11df9b90();
  /* 11df7d58 mov esi, esp */
  ESI = (ESP);
  /* 11df7d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11df7d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7d5f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11df7d62 push edx */
  push32((uint32_t)(EDX));
  /* 11df7d63 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7d69u);
  /* 11df7d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7d6e call 0x11df9b90 */
  push32(0x11df7d73u); f_11df9b90();
  /* 11df7d73 mov esi, esp */
  ESI = (ESP);
  /* 11df7d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7d78 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11df7d7b push ecx */
  push32((uint32_t)(ECX));
  /* 11df7d7c call dword ptr [0x11e334dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334dc))), 0x11df7d82u);
  /* 11df7d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7d87 call 0x11df9b90 */
  push32(0x11df7d8cu); f_11df9b90();
  /* 11df7d8c pop edi */
  EDI = (pop32());
  /* 11df7d8d pop esi */
  ESI = (pop32());
  /* 11df7d8e pop ebx */
  EBX = (pop32());
  /* 11df7d8f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7d92 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7d94 call 0x11df9b90 */
  push32(0x11df7d99u); f_11df9b90();
  /* 11df7d99 mov esp, ebp */
  ESP = (EBP);
  /* 11df7d9b pop ebp */
  EBP = (pop32());
  /* 11df7d9c ret  */
  ESPCHK(0x11df7d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dc0 @ 0x11df7dc0 (98 bytes, 39 insns) */
void f_11df7dc0(void) {
  FTRACE(0x11df7dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11df7dc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11df7dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11df7dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7dca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df7dcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df7dd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7dd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7dd9 pop ecx */
  ECX = (pop32());
  /* 11df7dda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7ddd mov esi, esp */
  ESI = (ESP);
  /* 11df7ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7de4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7de7 push eax */
  push32((uint32_t)(EAX));
  /* 11df7de8 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7deeu);
  /* 11df7dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7df3 call 0x11df9b90 */
  push32(0x11df7df8u); f_11df9b90();
  /* 11df7df8 mov esi, esp */
  ESI = (ESP);
  /* 11df7dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7dfd mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11df7e00 push edx */
  push32((uint32_t)(EDX));
  /* 11df7e01 call dword ptr [0x11e334ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334ec))), 0x11df7e07u);
  /* 11df7e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7e0c call 0x11df9b90 */
  push32(0x11df7e11u); f_11df9b90();
  /* 11df7e11 pop edi */
  EDI = (pop32());
  /* 11df7e12 pop esi */
  ESI = (pop32());
  /* 11df7e13 pop ebx */
  EBX = (pop32());
  /* 11df7e14 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7e17 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7e19 call 0x11df9b90 */
  push32(0x11df7e1eu); f_11df9b90();
  /* 11df7e1e mov esp, ebp */
  ESP = (EBP);
  /* 11df7e20 pop ebp */
  EBP = (pop32());
  /* 11df7e21 ret  */
  ESPCHK(0x11df7dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x11df7e40 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11df7e40(void) {
  FTRACE(0x11df7e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df7e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11df7e41 mov ebp, esp */
  EBP = (ESP);
  /* 11df7e43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7e46 push ebx */
  push32((uint32_t)(EBX));
  /* 11df7e47 push esi */
  push32((uint32_t)(ESI));
  /* 11df7e48 push edi */
  push32((uint32_t)(EDI));
  /* 11df7e49 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7e4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df7e4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df7e52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df7e57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df7e59 pop ecx */
  ECX = (pop32());
  /* 11df7e5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df7e5d mov esi, esp */
  ESI = (ESP);
  /* 11df7e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7e64 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7e67 push eax */
  push32((uint32_t)(EAX));
  /* 11df7e68 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df7e6eu);
  /* 11df7e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7e71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7e73 call 0x11df9b90 */
  push32(0x11df7e78u); f_11df9b90();
  /* 11df7e78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7e7b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11df7e7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11df7e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df7e84 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df7e87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11df7e8a cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7e8e ja 0x11df7fc1 */
  if ((!C.cf&&!C.zf)) goto L_11df7fc1;
  /* 11df7e94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df7e97 jmp dword ptr [ecx*4 + 0x11df7fd2] */
  switch (ECX) {
    case 0: goto L_11df7e9e;
    case 1: goto L_11df7ed7;
    case 2: goto L_11df7f1b;
    case 3: goto L_11df7f51;
    case 4: goto L_11df7f95;
    default: x86_unimpl("switch@0x11df7e97 out of table"); return;
  }
L_11df7e9e:;
  /* 11df7e9e mov esi, esp */
  ESI = (ESP);
  /* 11df7ea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ea3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11df7ea6 push eax */
  push32((uint32_t)(EAX));
  /* 11df7ea7 call dword ptr [0x11e334e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334e4))), 0x11df7eadu);
  /* 11df7ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7eb2 call 0x11df9b90 */
  push32(0x11df7eb7u); f_11df9b90();
  /* 11df7eb7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7ebe je 0x11df7ed2 */
  if (C.zf) goto L_11df7ed2;
  /* 11df7ec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ec3 call 0x11df11bd */
  push32(0x11df7ec8u); f_11df11bd();
  /* 11df7ec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ecb mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11df7ed2:;
  /* 11df7ed2 jmp 0x11df7fc1 */
  goto L_11df7fc1;
L_11df7ed7:;
  /* 11df7ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7eda call 0x11df1113 */
  push32(0x11df7edfu); f_11df1113();
  /* 11df7edf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7ee6 je 0x11df7f16 */
  if (C.zf) goto L_11df7f16;
  /* 11df7ee8 mov esi, esp */
  ESI = (ESP);
  /* 11df7eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11df7eee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ef1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11df7ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11df7ef5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7ef8 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11df7efb push edx */
  push32((uint32_t)(EDX));
  /* 11df7efc call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df7f02u);
  /* 11df7f02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7f07 call 0x11df9b90 */
  push32(0x11df7f0cu); f_11df9b90();
  /* 11df7f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f0f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11df7f16:;
  /* 11df7f16 jmp 0x11df7fc1 */
  goto L_11df7fc1;
L_11df7f1b:;
  /* 11df7f1b mov esi, esp */
  ESI = (ESP);
  /* 11df7f1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f20 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11df7f23 push edx */
  push32((uint32_t)(EDX));
  /* 11df7f24 call dword ptr [0x11e334e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334e4))), 0x11df7f2au);
  /* 11df7f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7f2f call 0x11df9b90 */
  push32(0x11df7f34u); f_11df9b90();
  /* 11df7f34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7f3b je 0x11df7f4f */
  if (C.zf) goto L_11df7f4f;
  /* 11df7f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f40 call 0x11df106e */
  push32(0x11df7f45u); f_11df106e();
  /* 11df7f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f48 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11df7f4f:;
  /* 11df7f4f jmp 0x11df7fc1 */
  goto L_11df7fc1;
L_11df7f51:;
  /* 11df7f51 mov esi, esp */
  ESI = (ESP);
  /* 11df7f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f56 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11df7f59 push edx */
  push32((uint32_t)(EDX));
  /* 11df7f5a call dword ptr [0x11e334e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334e8))), 0x11df7f60u);
  /* 11df7f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7f65 call 0x11df9b90 */
  push32(0x11df7f6au); f_11df9b90();
  /* 11df7f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7f6c jne 0x11df7f93 */
  if (!C.zf) goto L_11df7f93;
  /* 11df7f6e mov esi, esp */
  ESI = (ESP);
  /* 11df7f70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11df7f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f75 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11df7f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11df7f79 call dword ptr [0x11e334cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334cc))), 0x11df7f7fu);
  /* 11df7f7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7f84 call 0x11df9b90 */
  push32(0x11df7f89u); f_11df9b90();
  /* 11df7f89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f8c mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11df7f93:;
  /* 11df7f93 jmp 0x11df7fc1 */
  goto L_11df7fc1;
L_11df7f95:;
  /* 11df7f95 mov esi, esp */
  ESI = (ESP);
  /* 11df7f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7f9a mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11df7f9d push ecx */
  push32((uint32_t)(ECX));
  /* 11df7f9e call dword ptr [0x11e334d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334d0))), 0x11df7fa4u);
  /* 11df7fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7fa9 call 0x11df9b90 */
  push32(0x11df7faeu); f_11df9b90();
  /* 11df7fae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df7fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df7fb5 je 0x11df7fc1 */
  if (C.zf) goto L_11df7fc1;
  /* 11df7fb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df7fba mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11df7fc1:;
  /* 11df7fc1 pop edi */
  EDI = (pop32());
  /* 11df7fc2 pop esi */
  ESI = (pop32());
  /* 11df7fc3 pop ebx */
  EBX = (pop32());
  /* 11df7fc4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df7fc7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df7fc9 call 0x11df9b90 */
  push32(0x11df7fceu); f_11df9b90();
  /* 11df7fce mov esp, ebp */
  ESP = (EBP);
  /* 11df7fd0 pop ebp */
  EBP = (pop32());
  /* 11df7fd1 ret  */
  ESPCHK(0x11df7e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x11df8050 (39 bytes, 18 insns) */
void f_11df8050(void) {
  FTRACE(0x11df8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8050 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8051 mov ebp, esp */
  EBP = (ESP);
  /* 11df8053 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8056 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8057 push esi */
  push32((uint32_t)(ESI));
  /* 11df8058 push edi */
  push32((uint32_t)(EDI));
  /* 11df8059 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11df805c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11df8061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df806b mov dword ptr [0x11e305c0], eax */
  w32((uint32_t)(0x11e305c0), (EAX));
  /* 11df8070 pop edi */
  EDI = (pop32());
  /* 11df8071 pop esi */
  ESI = (pop32());
  /* 11df8072 pop ebx */
  EBX = (pop32());
  /* 11df8073 mov esp, ebp */
  ESP = (EBP);
  /* 11df8075 pop ebp */
  EBP = (pop32());
  /* 11df8076 ret  */
  ESPCHK(0x11df8050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008080 @ 0x11df8080 (93 bytes, 34 insns) */
void f_11df8080(void) {
  FTRACE(0x11df8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8080 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8081 mov ebp, esp */
  EBP = (ESP);
  /* 11df8083 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8086 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8087 push esi */
  push32((uint32_t)(ESI));
  /* 11df8088 push edi */
  push32((uint32_t)(EDI));
  /* 11df8089 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11df808c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11df8091 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8096 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8098 cmp dword ptr [0x11e305c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df809f je 0x11df80cc */
  if (C.zf) goto L_11df80cc;
  /* 11df80a1 mov ecx, dword ptr [0x11e305c0] */
  ECX = (r32((uint32_t)(0x11e305c0)));
  /* 11df80a7 call 0x11df10be */
  push32(0x11df80acu); f_11df10be();
  /* 11df80ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df80b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df80b3 je 0x11df80cc */
  if (C.zf) goto L_11df80cc;
  /* 11df80b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df80b8 push eax */
  push32((uint32_t)(EAX));
  /* 11df80b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df80bc push ecx */
  push32((uint32_t)(ECX));
  /* 11df80bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df80c0 push edx */
  push32((uint32_t)(EDX));
  /* 11df80c1 mov ecx, dword ptr [0x11e305c0] */
  ECX = (r32((uint32_t)(0x11e305c0)));
  /* 11df80c7 call 0x11df10f0 */
  push32(0x11df80ccu); f_11df10f0();
L_11df80cc:;
  /* 11df80cc pop edi */
  EDI = (pop32());
  /* 11df80cd pop esi */
  ESI = (pop32());
  /* 11df80ce pop ebx */
  EBX = (pop32());
  /* 11df80cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df80d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df80d4 call 0x11df9b90 */
  push32(0x11df80d9u); f_11df9b90();
  /* 11df80d9 mov esp, ebp */
  ESP = (EBP);
  /* 11df80db pop ebp */
  EBP = (pop32());
  /* 11df80dc ret  */
  ESPCHK(0x11df8080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008100 @ 0x11df8100 (437 bytes, 146 insns) */
void f_11df8100(void) {
  FTRACE(0x11df8100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8100 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8101 mov ebp, esp */
  EBP = (ESP);
  /* 11df8103 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8106 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8107 push esi */
  push32((uint32_t)(ESI));
  /* 11df8108 push edi */
  push32((uint32_t)(EDI));
  /* 11df8109 push ecx */
  push32((uint32_t)(ECX));
  /* 11df810a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df810d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8112 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8117 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8119 pop ecx */
  ECX = (pop32());
  /* 11df811a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df811d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8120 call 0x11df1050 */
  push32(0x11df8125u); f_11df1050();
  /* 11df8125 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df812a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df812c je 0x11df82a4 */
  if (C.zf) goto L_11df82a4;
  /* 11df8132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8135 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11df8138 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11df813b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11df813f je 0x11df81f9 */
  if (C.zf) goto L_11df81f9;
  /* 11df8145 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11df8149 je 0x11df8150 */
  if (C.zf) goto L_11df8150;
  /* 11df814b jmp 0x11df824f */
  goto L_11df824f;
L_11df8150:;
  /* 11df8150 cmp dword ptr [0x11e305c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8157 je 0x11df819f */
  if (C.zf) goto L_11df819f;
  /* 11df8159 mov esi, esp */
  ESI = (ESP);
  /* 11df815b push 3 */
  push32((uint32_t)(0x3u));
  /* 11df815d mov edx, dword ptr [0x11e305c8] */
  EDX = (r32((uint32_t)(0x11e305c8)));
  /* 11df8163 push edx */
  push32((uint32_t)(EDX));
  /* 11df8164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8167 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df816a push eax */
  push32((uint32_t)(EAX));
  /* 11df816b call dword ptr [0x11e3352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3352c))), 0x11df8171u);
  /* 11df8171 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8176 call 0x11df9b90 */
  push32(0x11df817bu); f_11df9b90();
  /* 11df817b mov esi, esp */
  ESI = (ESP);
  /* 11df817d push 0 */
  push32((uint32_t)(0x0u));
  /* 11df817f mov ecx, dword ptr [0x11e305c8] */
  ECX = (r32((uint32_t)(0x11e305c8)));
  /* 11df8185 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8186 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8189 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df818c push edx */
  push32((uint32_t)(EDX));
  /* 11df818d call dword ptr [0x11e3352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3352c))), 0x11df8193u);
  /* 11df8193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8196 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8198 call 0x11df9b90 */
  push32(0x11df819du); f_11df9b90();
  /* 11df819d jmp 0x11df81f4 */
  goto L_11df81f4;
L_11df819f:;
  /* 11df819f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df81a2 call 0x11df108c */
  push32(0x11df81a7u); f_11df108c();
  /* 11df81a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df81ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df81ae jne 0x11df81f4 */
  if (!C.zf) goto L_11df81f4;
  /* 11df81b0 mov esi, esp */
  ESI = (ESP);
  /* 11df81b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df81b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df81b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df81ba push eax */
  push32((uint32_t)(EAX));
  /* 11df81bb call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df81c1u);
  /* 11df81c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df81c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df81c6 call 0x11df9b90 */
  push32(0x11df81cbu); f_11df9b90();
  /* 11df81cb mov esi, esp */
  ESI = (ESP);
  /* 11df81cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11df81cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df81d2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11df81d5 push edx */
  push32((uint32_t)(EDX));
  /* 11df81d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df81d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df81dc push eax */
  push32((uint32_t)(EAX));
  /* 11df81dd mov cl, byte ptr [0x11e305c4] */
  CL = (r8((uint32_t)(0x11e305c4)));
  /* 11df81e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11df81e4 call dword ptr [0x11e33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33528))), 0x11df81eau);
  /* 11df81ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df81ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df81ef call 0x11df9b90 */
  push32(0x11df81f4u); f_11df9b90();
L_11df81f4:;
  /* 11df81f4 jmp 0x11df82a4 */
  goto L_11df82a4;
L_11df81f9:;
  /* 11df81f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df81fc call 0x11df108c */
  push32(0x11df8201u); f_11df108c();
  /* 11df8201 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df8206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8208 jne 0x11df824d */
  if (!C.zf) goto L_11df824d;
  /* 11df820a mov esi, esp */
  ESI = (ESP);
  /* 11df820c push 0 */
  push32((uint32_t)(0x0u));
  /* 11df820e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8211 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8214 push edx */
  push32((uint32_t)(EDX));
  /* 11df8215 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df821bu);
  /* 11df821b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df821e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8220 call 0x11df9b90 */
  push32(0x11df8225u); f_11df9b90();
  /* 11df8225 mov esi, esp */
  ESI = (ESP);
  /* 11df8227 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df822c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11df822f push ecx */
  push32((uint32_t)(ECX));
  /* 11df8230 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8233 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8236 push edx */
  push32((uint32_t)(EDX));
  /* 11df8237 mov al, byte ptr [0x11e305c4] */
  AL = (r8((uint32_t)(0x11e305c4)));
  /* 11df823c push eax */
  push32((uint32_t)(EAX));
  /* 11df823d call dword ptr [0x11e33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33528))), 0x11df8243u);
  /* 11df8243 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8246 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8248 call 0x11df9b90 */
  push32(0x11df824du); f_11df9b90();
L_11df824d:;
  /* 11df824d jmp 0x11df82a4 */
  goto L_11df82a4;
L_11df824f:;
  /* 11df824f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8252 call 0x11df108c */
  push32(0x11df8257u); f_11df108c();
  /* 11df8257 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df825c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df825e jne 0x11df82a4 */
  if (!C.zf) goto L_11df82a4;
  /* 11df8260 mov esi, esp */
  ESI = (ESP);
  /* 11df8262 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8267 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df826a push ecx */
  push32((uint32_t)(ECX));
  /* 11df826b call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df8271u);
  /* 11df8271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8276 call 0x11df9b90 */
  push32(0x11df827bu); f_11df9b90();
  /* 11df827b mov esi, esp */
  ESI = (ESP);
  /* 11df827d push 0 */
  push32((uint32_t)(0x0u));
  /* 11df827f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8282 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11df8285 push eax */
  push32((uint32_t)(EAX));
  /* 11df8286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8289 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df828c push ecx */
  push32((uint32_t)(ECX));
  /* 11df828d mov dl, byte ptr [0x11e305c4] */
  DL = (r8((uint32_t)(0x11e305c4)));
  /* 11df8293 push edx */
  push32((uint32_t)(EDX));
  /* 11df8294 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df829au);
  /* 11df829a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df829d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df829f call 0x11df9b90 */
  push32(0x11df82a4u); f_11df9b90();
L_11df82a4:;
  /* 11df82a4 pop edi */
  EDI = (pop32());
  /* 11df82a5 pop esi */
  ESI = (pop32());
  /* 11df82a6 pop ebx */
  EBX = (pop32());
  /* 11df82a7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df82aa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df82ac call 0x11df9b90 */
  push32(0x11df82b1u); f_11df9b90();
  /* 11df82b1 mov esp, ebp */
  ESP = (EBP);
  /* 11df82b3 pop ebp */
  EBP = (pop32());
  /* 11df82b4 ret  */
  ESPCHK(0x11df8100u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x11df8330 (235 bytes, 78 insns) */
void f_11df8330(void) {
  FTRACE(0x11df8330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8330 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8331 mov ebp, esp */
  EBP = (ESP);
  /* 11df8333 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8339 push ebx */
  push32((uint32_t)(EBX));
  /* 11df833a push esi */
  push32((uint32_t)(ESI));
  /* 11df833b push edi */
  push32((uint32_t)(EDI));
  /* 11df833c push ecx */
  push32((uint32_t)(ECX));
  /* 11df833d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11df8343 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11df8348 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df834d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df834f pop ecx */
  ECX = (pop32());
  /* 11df8350 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8353 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11df835a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11df8361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8364 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8367 mov esi, esp */
  ESI = (ESP);
  /* 11df8369 push eax */
  push32((uint32_t)(EAX));
  /* 11df836a call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8370u);
  /* 11df8370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8373 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8375 call 0x11df9b90 */
  push32(0x11df837au); f_11df9b90();
  /* 11df837a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11df837d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8381 jle 0x11df83f4 */
  if ((C.zf||C.sf!=C.of)) goto L_11df83f4;
  /* 11df8383 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11df838a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11df8391 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11df8398 jmp 0x11df83a3 */
  goto L_11df83a3;
L_11df839a:;
  /* 11df839a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df839d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df83a0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11df83a3:;
  /* 11df83a3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df83a6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df83a9 jge 0x11df83e0 */
  if ((C.sf==C.of)) goto L_11df83e0;
  /* 11df83ab mov esi, esp */
  ESI = (ESP);
  /* 11df83ad lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df83b0 push eax */
  push32((uint32_t)(EAX));
  /* 11df83b1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df83b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11df83b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df83b8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df83bb push edx */
  push32((uint32_t)(EDX));
  /* 11df83bc call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df83c2u);
  /* 11df83c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df83c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df83c7 call 0x11df9b90 */
  push32(0x11df83ccu); f_11df9b90();
  /* 11df83cc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11df83cf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df83d2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11df83d5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11df83d8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df83db mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11df83de jmp 0x11df839a */
  goto L_11df839a;
L_11df83e0:;
  /* 11df83e0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11df83e3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11df83e4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11df83e7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11df83ea mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11df83ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11df83ee idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11df83f1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11df83f4:;
  /* 11df83f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df83f7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11df83fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11df83fc mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11df83ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11df8402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8405 pop edi */
  EDI = (pop32());
  /* 11df8406 pop esi */
  ESI = (pop32());
  /* 11df8407 pop ebx */
  EBX = (pop32());
  /* 11df8408 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df840e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8410 call 0x11df9b90 */
  push32(0x11df8415u); f_11df9b90();
  /* 11df8415 mov esp, ebp */
  ESP = (EBP);
  /* 11df8417 pop ebp */
  EBP = (pop32());
  /* 11df8418 ret 4 */
  ESPCHK(0x11df8330u, _esp0);
  ESP += 8; return;
}

/* FUN_10008460 @ 0x11df8460 (120 bytes, 47 insns) */
void f_11df8460(void) {
  FTRACE(0x11df8460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8460 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8461 mov ebp, esp */
  EBP = (ESP);
  /* 11df8463 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8466 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8467 push esi */
  push32((uint32_t)(ESI));
  /* 11df8468 push edi */
  push32((uint32_t)(EDI));
  /* 11df8469 push ecx */
  push32((uint32_t)(ECX));
  /* 11df846a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df846d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8472 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8477 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8479 pop ecx */
  ECX = (pop32());
  /* 11df847a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df847d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8484 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8487 mov esi, esp */
  ESI = (ESP);
  /* 11df8489 push eax */
  push32((uint32_t)(EAX));
  /* 11df848a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df848d add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8490 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8491 call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df8497u);
  /* 11df8497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df849a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df849c call 0x11df9b90 */
  push32(0x11df84a1u); f_11df9b90();
  /* 11df84a1 mov esi, eax */
  ESI = (EAX);
  /* 11df84a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df84a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df84a9 mov edi, esp */
  EDI = (ESP);
  /* 11df84ab push edx */
  push32((uint32_t)(EDX));
  /* 11df84ac call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df84b2u);
  /* 11df84b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df84b5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df84b7 call 0x11df9b90 */
  push32(0x11df84bcu); f_11df9b90();
  /* 11df84bc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df84be jne 0x11df84c4 */
  if (!C.zf) goto L_11df84c4;
  /* 11df84c0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df84c4:;
  /* 11df84c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df84c7 pop edi */
  EDI = (pop32());
  /* 11df84c8 pop esi */
  ESI = (pop32());
  /* 11df84c9 pop ebx */
  EBX = (pop32());
  /* 11df84ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df84cd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df84cf call 0x11df9b90 */
  push32(0x11df84d4u); f_11df9b90();
  /* 11df84d4 mov esp, ebp */
  ESP = (EBP);
  /* 11df84d6 pop ebp */
  EBP = (pop32());
  /* 11df84d7 ret  */
  ESPCHK(0x11df8460u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x11df8500 (86 bytes, 35 insns) */
void f_11df8500(void) {
  FTRACE(0x11df8500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8500 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8501 mov ebp, esp */
  EBP = (ESP);
  /* 11df8503 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8506 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8507 push esi */
  push32((uint32_t)(ESI));
  /* 11df8508 push edi */
  push32((uint32_t)(EDI));
  /* 11df8509 push ecx */
  push32((uint32_t)(ECX));
  /* 11df850a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df850d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8519 pop ecx */
  ECX = (pop32());
  /* 11df851a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df851d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8524 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8527 mov esi, esp */
  ESI = (ESP);
  /* 11df8529 push eax */
  push32((uint32_t)(EAX));
  /* 11df852a call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8530u);
  /* 11df8530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8533 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8535 call 0x11df9b90 */
  push32(0x11df853au); f_11df9b90();
  /* 11df853a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df853c jle 0x11df8542 */
  if ((C.zf||C.sf!=C.of)) goto L_11df8542;
  /* 11df853e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df8542:;
  /* 11df8542 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df8545 pop edi */
  EDI = (pop32());
  /* 11df8546 pop esi */
  ESI = (pop32());
  /* 11df8547 pop ebx */
  EBX = (pop32());
  /* 11df8548 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df854b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df854d call 0x11df9b90 */
  push32(0x11df8552u); f_11df9b90();
  /* 11df8552 mov esp, ebp */
  ESP = (EBP);
  /* 11df8554 pop ebp */
  EBP = (pop32());
  /* 11df8555 ret  */
  ESPCHK(0x11df8500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x11df8570 (42 bytes, 21 insns) */
void f_11df8570(void) {
  FTRACE(0x11df8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8570 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8571 mov ebp, esp */
  EBP = (ESP);
  /* 11df8573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8576 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8577 push esi */
  push32((uint32_t)(ESI));
  /* 11df8578 push edi */
  push32((uint32_t)(EDI));
  /* 11df8579 push ecx */
  push32((uint32_t)(ECX));
  /* 11df857a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df857d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df8582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8589 pop ecx */
  ECX = (pop32());
  /* 11df858a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df858d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8590 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8593 pop edi */
  EDI = (pop32());
  /* 11df8594 pop esi */
  ESI = (pop32());
  /* 11df8595 pop ebx */
  EBX = (pop32());
  /* 11df8596 mov esp, ebp */
  ESP = (EBP);
  /* 11df8598 pop ebp */
  EBP = (pop32());
  /* 11df8599 ret  */
  ESPCHK(0x11df8570u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x11df85b0 (77 bytes, 32 insns) */
void f_11df85b0(void) {
  FTRACE(0x11df85b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df85b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df85b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df85b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df85b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df85b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df85b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df85b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df85ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df85bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df85c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df85c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df85c9 pop ecx */
  ECX = (pop32());
  /* 11df85ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df85cd mov esi, esp */
  ESI = (ESP);
  /* 11df85cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df85d2 push eax */
  push32((uint32_t)(EAX));
  /* 11df85d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df85d6 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df85d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df85da call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df85e0u);
  /* 11df85e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df85e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df85e5 call 0x11df9b90 */
  push32(0x11df85eau); f_11df9b90();
  /* 11df85ea pop edi */
  EDI = (pop32());
  /* 11df85eb pop esi */
  ESI = (pop32());
  /* 11df85ec pop ebx */
  EBX = (pop32());
  /* 11df85ed add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df85f0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df85f2 call 0x11df9b90 */
  push32(0x11df85f7u); f_11df9b90();
  /* 11df85f7 mov esp, ebp */
  ESP = (EBP);
  /* 11df85f9 pop ebp */
  EBP = (pop32());
  /* 11df85fa ret 4 */
  ESPCHK(0x11df85b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008610 @ 0x11df8610 (413 bytes, 143 insns) */
void f_11df8610(void) {
  FTRACE(0x11df8610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8610 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8611 mov ebp, esp */
  EBP = (ESP);
  /* 11df8613 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8616 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8617 push esi */
  push32((uint32_t)(ESI));
  /* 11df8618 push edi */
  push32((uint32_t)(EDI));
  /* 11df8619 push ecx */
  push32((uint32_t)(ECX));
  /* 11df861a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11df861d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11df8622 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8627 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8629 pop ecx */
  ECX = (pop32());
  /* 11df862a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df862d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8630 call 0x11df10b4 */
  push32(0x11df8635u); f_11df10b4();
  /* 11df8635 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df863a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df863c je 0x11df879c */
  if (C.zf) goto L_11df879c;
  /* 11df8642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df8647 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11df864a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df864d jne 0x11df86f8 */
  if (!C.zf) goto L_11df86f8;
  /* 11df8653 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11df8658 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11df865b push edx */
  push32((uint32_t)(EDX));
  /* 11df865c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df865f call 0x11df10a5 */
  push32(0x11df8664u); f_11df10a5();
  /* 11df8664 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11df8667 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8668 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11df866a push edx */
  push32((uint32_t)(EDX));
  /* 11df866b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df866e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8671 push eax */
  push32((uint32_t)(EAX));
  /* 11df8672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8675 call 0x11df1262 */
  push32(0x11df867au); f_11df1262();
  /* 11df867a mov esi, esp */
  ESI = (ESP);
  /* 11df867c push 0 */
  push32((uint32_t)(0x0u));
  /* 11df867e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8681 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8684 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8685 call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df868bu);
  /* 11df868b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df868e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8690 call 0x11df9b90 */
  push32(0x11df8695u); f_11df9b90();
  /* 11df8695 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8698 jge 0x11df86a3 */
  if ((C.sf==C.of)) goto L_11df86a3;
  /* 11df869a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df869d mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11df86a1 jmp 0x11df86f8 */
  goto L_11df86f8;
L_11df86a3:;
  /* 11df86a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df86a6 call 0x11df114a */
  push32(0x11df86abu); f_11df114a();
  /* 11df86ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df86b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df86b2 jne 0x11df86f8 */
  if (!C.zf) goto L_11df86f8;
  /* 11df86b4 mov esi, esp */
  ESI = (ESP);
  /* 11df86b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df86b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df86bb add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df86be push eax */
  push32((uint32_t)(EAX));
  /* 11df86bf call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df86c5u);
  /* 11df86c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df86c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df86ca call 0x11df9b90 */
  push32(0x11df86cfu); f_11df9b90();
  /* 11df86cf mov esi, esp */
  ESI = (ESP);
  /* 11df86d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df86d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df86d6 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11df86d9 push edx */
  push32((uint32_t)(EDX));
  /* 11df86da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df86dd add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df86e0 push eax */
  push32((uint32_t)(EAX));
  /* 11df86e1 mov cl, byte ptr [0x11e2dd6c] */
  CL = (r8((uint32_t)(0x11e2dd6c)));
  /* 11df86e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11df86e8 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df86eeu);
  /* 11df86ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df86f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df86f3 call 0x11df9b90 */
  push32(0x11df86f8u); f_11df9b90();
L_11df86f8:;
  /* 11df86f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df86fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11df86fd mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11df8700 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8703 jne 0x11df879c */
  if (!C.zf) goto L_11df879c;
  /* 11df8709 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11df870e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11df8711 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8712 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8715 call 0x11df10a5 */
  push32(0x11df871au); f_11df10a5();
  /* 11df871a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11df871d push edx */
  push32((uint32_t)(EDX));
  /* 11df871e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11df8720 push eax */
  push32((uint32_t)(EAX));
  /* 11df8721 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8724 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8727 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df872b call 0x11df1262 */
  push32(0x11df8730u); f_11df1262();
  /* 11df8730 mov esi, esp */
  ESI = (ESP);
  /* 11df8732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8737 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df873a push edx */
  push32((uint32_t)(EDX));
  /* 11df873b call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df8741u);
  /* 11df8741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8744 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8746 call 0x11df9b90 */
  push32(0x11df874bu); f_11df9b90();
  /* 11df874b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df874e jge 0x11df8795 */
  if ((C.sf==C.of)) goto L_11df8795;
  /* 11df8750 mov esi, esp */
  ESI = (ESP);
  /* 11df8752 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8757 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df875a push eax */
  push32((uint32_t)(EAX));
  /* 11df875b call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df8761u);
  /* 11df8761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8766 call 0x11df9b90 */
  push32(0x11df876bu); f_11df9b90();
  /* 11df876b mov esi, esp */
  ESI = (ESP);
  /* 11df876d push 0 */
  push32((uint32_t)(0x0u));
  /* 11df876f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8772 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11df8775 push edx */
  push32((uint32_t)(EDX));
  /* 11df8776 mov eax, dword ptr [0x11e305cc] */
  EAX = (r32((uint32_t)(0x11e305cc)));
  /* 11df877b push eax */
  push32((uint32_t)(EAX));
  /* 11df877c mov cl, byte ptr [0x11e2dd6c] */
  CL = (r8((uint32_t)(0x11e2dd6c)));
  /* 11df8782 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8783 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df8789u);
  /* 11df8789 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df878c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df878e call 0x11df9b90 */
  push32(0x11df8793u); f_11df9b90();
  /* 11df8793 jmp 0x11df879c */
  goto L_11df879c;
L_11df8795:;
  /* 11df8795 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8798 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11df879c:;
  /* 11df879c pop edi */
  EDI = (pop32());
  /* 11df879d pop esi */
  ESI = (pop32());
  /* 11df879e pop ebx */
  EBX = (pop32());
  /* 11df879f add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df87a2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df87a4 call 0x11df9b90 */
  push32(0x11df87a9u); f_11df9b90();
  /* 11df87a9 mov esp, ebp */
  ESP = (EBP);
  /* 11df87ab pop ebp */
  EBP = (pop32());
  /* 11df87ac ret  */
  ESPCHK(0x11df8610u, _esp0);
  ESP += 4; return;
}

/* FUN_10008820 @ 0x11df8820 (311 bytes, 104 insns) */
void f_11df8820(void) {
  FTRACE(0x11df8820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8820 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8821 mov ebp, esp */
  EBP = (ESP);
  /* 11df8823 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8829 push ebx */
  push32((uint32_t)(EBX));
  /* 11df882a push esi */
  push32((uint32_t)(ESI));
  /* 11df882b push edi */
  push32((uint32_t)(EDI));
  /* 11df882c push ecx */
  push32((uint32_t)(ECX));
  /* 11df882d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11df8833 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11df8838 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df883d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df883f pop ecx */
  ECX = (pop32());
  /* 11df8840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8846 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11df8849 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df884c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11df884f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11df8852 push edx */
  push32((uint32_t)(EDX));
  /* 11df8853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8856 call 0x11df10a5 */
  push32(0x11df885bu); f_11df10a5();
  /* 11df885b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11df885d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11df8860 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11df8863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11df8866 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11df8869 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11df886c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11df886f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11df8872 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11df8875 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8878 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11df887b fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11df887e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11df8881 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8884 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11df8887 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11df888a fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11df888c sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df888f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11df8892 call 0x11df9d44 */
  push32(0x11df8897u); f_11df9d44();
  /* 11df8897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df889a fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11df889d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11df88a0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df88a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11df88a5 jge 0x11df88b3 */
  if ((C.sf==C.of)) goto L_11df88b3;
  /* 11df88a7 fld qword ptr [0x11e2a040] */
  fpu_push(rf64((uint32_t)(0x11e2a040)));
  /* 11df88ad fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11df88b0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11df88b3:;
  /* 11df88b3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11df88b6 fmul qword ptr [0x11e2a030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11e2a030)));
  /* 11df88bc fdiv qword ptr [0x11e2a020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x11e2a020)));
  /* 11df88c2 call 0x11df9e7c */
  push32(0x11df88c7u); f_11df9e7c();
  /* 11df88c7 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11df88ca fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11df88cd fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11df88d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11df88d3 push edx */
  push32((uint32_t)(EDX));
  /* 11df88d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11df88d7 push eax */
  push32((uint32_t)(EAX));
  /* 11df88d8 call 0x11df9c94 */
  push32(0x11df88ddu); f_11df9c94();
  /* 11df88dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df88e0 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11df88e3 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11df88e6 call 0x11df9e7c */
  push32(0x11df88ebu); f_11df9e7c();
  /* 11df88eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11df88ee fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11df88f1 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11df88f4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11df88f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11df88f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11df88fb push edx */
  push32((uint32_t)(EDX));
  /* 11df88fc call 0x11df9be4 */
  push32(0x11df8901u); f_11df9be4();
  /* 11df8901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8904 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11df8907 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11df890a call 0x11df9e7c */
  push32(0x11df890fu); f_11df9e7c();
  /* 11df890f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11df8912 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11df8914 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11df8917 push eax */
  push32((uint32_t)(EAX));
  /* 11df8918 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11df891b push ecx */
  push32((uint32_t)(ECX));
  /* 11df891c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df891f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8922 push edx */
  push32((uint32_t)(EDX));
  /* 11df8923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8926 call 0x11df1262 */
  push32(0x11df892bu); f_11df1262();
  /* 11df892b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11df892e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8936 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11df8939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df893c call 0x11df11c7 */
  push32(0x11df8941u); f_11df11c7();
  /* 11df8941 pop edi */
  EDI = (pop32());
  /* 11df8942 pop esi */
  ESI = (pop32());
  /* 11df8943 pop ebx */
  EBX = (pop32());
  /* 11df8944 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df894a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df894c call 0x11df9b90 */
  push32(0x11df8951u); f_11df9b90();
  /* 11df8951 mov esp, ebp */
  ESP = (EBP);
  /* 11df8953 pop ebp */
  EBP = (pop32());
  /* 11df8954 ret 0xc */
  ESPCHK(0x11df8820u, _esp0);
  ESP += 16; return;
}

/* FUN_100089b0 @ 0x11df89b0 (198 bytes, 71 insns) */
void f_11df89b0(void) {
  FTRACE(0x11df89b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df89b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df89b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df89b3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df89b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df89b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df89b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df89b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df89ba lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11df89bd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11df89c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df89c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df89c9 pop ecx */
  ECX = (pop32());
  /* 11df89ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df89cd mov esi, esp */
  ESI = (ESP);
  /* 11df89cf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df89d2 push eax */
  push32((uint32_t)(EAX));
  /* 11df89d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df89d5 mov ecx, dword ptr [0x11e305d0] */
  ECX = (r32((uint32_t)(0x11e305d0)));
  /* 11df89db push ecx */
  push32((uint32_t)(ECX));
  /* 11df89dc call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df89e2u);
  /* 11df89e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df89e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df89e7 call 0x11df9b90 */
  push32(0x11df89ecu); f_11df9b90();
  /* 11df89ec mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11df89ef mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11df89f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11df89f5 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11df89f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df89fb mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11df89fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df8a01 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11df8a04 mov esi, esp */
  ESI = (ESP);
  /* 11df8a06 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df8a09 push eax */
  push32((uint32_t)(EAX));
  /* 11df8a0a call dword ptr [0x11e334a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a4))), 0x11df8a10u);
  /* 11df8a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8a13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8a15 call 0x11df9b90 */
  push32(0x11df8a1au); f_11df9b90();
  /* 11df8a1a mov esi, esp */
  ESI = (ESP);
  /* 11df8a1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11df8a1f push ecx */
  push32((uint32_t)(ECX));
  /* 11df8a20 mov edx, dword ptr [0x11e305d0] */
  EDX = (r32((uint32_t)(0x11e305d0)));
  /* 11df8a26 push edx */
  push32((uint32_t)(EDX));
  /* 11df8a27 mov eax, dword ptr [0x11e305cc] */
  EAX = (r32((uint32_t)(0x11e305cc)));
  /* 11df8a2c push eax */
  push32((uint32_t)(EAX));
  /* 11df8a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8a31 call dword ptr [0x11e334ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334ac))), 0x11df8a37u);
  /* 11df8a37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8a3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8a3c call 0x11df9b90 */
  push32(0x11df8a41u); f_11df9b90();
  /* 11df8a41 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11df8a44 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11df8a47 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11df8a4a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11df8a4d mov esi, esp */
  ESI = (ESP);
  /* 11df8a4f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11df8a52 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8a53 call dword ptr [0x11e334a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334a4))), 0x11df8a59u);
  /* 11df8a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8a5e call 0x11df9b90 */
  push32(0x11df8a63u); f_11df9b90();
  /* 11df8a63 pop edi */
  EDI = (pop32());
  /* 11df8a64 pop esi */
  ESI = (pop32());
  /* 11df8a65 pop ebx */
  EBX = (pop32());
  /* 11df8a66 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8a69 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8a6b call 0x11df9b90 */
  push32(0x11df8a70u); f_11df9b90();
  /* 11df8a70 mov esp, ebp */
  ESP = (EBP);
  /* 11df8a72 pop ebp */
  EBP = (pop32());
  /* 11df8a73 ret 0x10 */
  ESPCHK(0x11df89b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008ab0 @ 0x11df8ab0 (120 bytes, 47 insns) */
void f_11df8ab0(void) {
  FTRACE(0x11df8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11df8ab3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11df8ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11df8ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8aba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df8abd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8ac9 pop ecx */
  ECX = (pop32());
  /* 11df8aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8acd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8ad4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8ad7 mov esi, esp */
  ESI = (ESP);
  /* 11df8ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11df8ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8add add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8ae1 call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df8ae7u);
  /* 11df8ae7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8aec call 0x11df9b90 */
  push32(0x11df8af1u); f_11df9b90();
  /* 11df8af1 mov esi, eax */
  ESI = (EAX);
  /* 11df8af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8af6 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8af9 mov edi, esp */
  EDI = (ESP);
  /* 11df8afb push edx */
  push32((uint32_t)(EDX));
  /* 11df8afc call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8b02u);
  /* 11df8b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8b05 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8b07 call 0x11df9b90 */
  push32(0x11df8b0cu); f_11df9b90();
  /* 11df8b0c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8b0e jne 0x11df8b14 */
  if (!C.zf) goto L_11df8b14;
  /* 11df8b10 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df8b14:;
  /* 11df8b14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df8b17 pop edi */
  EDI = (pop32());
  /* 11df8b18 pop esi */
  ESI = (pop32());
  /* 11df8b19 pop ebx */
  EBX = (pop32());
  /* 11df8b1a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8b1d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8b1f call 0x11df9b90 */
  push32(0x11df8b24u); f_11df9b90();
  /* 11df8b24 mov esp, ebp */
  ESP = (EBP);
  /* 11df8b26 pop ebp */
  EBP = (pop32());
  /* 11df8b27 ret  */
  ESPCHK(0x11df8ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b50 @ 0x11df8b50 (86 bytes, 35 insns) */
void f_11df8b50(void) {
  FTRACE(0x11df8b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8b51 mov ebp, esp */
  EBP = (ESP);
  /* 11df8b53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8b56 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8b57 push esi */
  push32((uint32_t)(ESI));
  /* 11df8b58 push edi */
  push32((uint32_t)(EDI));
  /* 11df8b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8b5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df8b5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8b62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8b67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8b69 pop ecx */
  ECX = (pop32());
  /* 11df8b6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8b6d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8b74 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8b77 mov esi, esp */
  ESI = (ESP);
  /* 11df8b79 push eax */
  push32((uint32_t)(EAX));
  /* 11df8b7a call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8b80u);
  /* 11df8b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8b83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8b85 call 0x11df9b90 */
  push32(0x11df8b8au); f_11df9b90();
  /* 11df8b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8b8c jle 0x11df8b92 */
  if ((C.zf||C.sf!=C.of)) goto L_11df8b92;
  /* 11df8b8e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df8b92:;
  /* 11df8b92 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df8b95 pop edi */
  EDI = (pop32());
  /* 11df8b96 pop esi */
  ESI = (pop32());
  /* 11df8b97 pop ebx */
  EBX = (pop32());
  /* 11df8b98 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8b9b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8b9d call 0x11df9b90 */
  push32(0x11df8ba2u); f_11df9b90();
  /* 11df8ba2 mov esp, ebp */
  ESP = (EBP);
  /* 11df8ba4 pop ebp */
  EBP = (pop32());
  /* 11df8ba5 ret  */
  ESPCHK(0x11df8b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x11df8bc0 (42 bytes, 21 insns) */
void f_11df8bc0(void) {
  FTRACE(0x11df8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11df8bc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8bc7 push esi */
  push32((uint32_t)(ESI));
  /* 11df8bc8 push edi */
  push32((uint32_t)(EDI));
  /* 11df8bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8bca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df8bcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df8bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8bd9 pop ecx */
  ECX = (pop32());
  /* 11df8bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8be0 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8be3 pop edi */
  EDI = (pop32());
  /* 11df8be4 pop esi */
  ESI = (pop32());
  /* 11df8be5 pop ebx */
  EBX = (pop32());
  /* 11df8be6 mov esp, ebp */
  ESP = (EBP);
  /* 11df8be8 pop ebp */
  EBP = (pop32());
  /* 11df8be9 ret  */
  ESPCHK(0x11df8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x11df8c00 (235 bytes, 78 insns) */
void f_11df8c00(void) {
  FTRACE(0x11df8c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8c01 mov ebp, esp */
  EBP = (ESP);
  /* 11df8c03 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8c09 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8c0a push esi */
  push32((uint32_t)(ESI));
  /* 11df8c0b push edi */
  push32((uint32_t)(EDI));
  /* 11df8c0c push ecx */
  push32((uint32_t)(ECX));
  /* 11df8c0d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11df8c13 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11df8c18 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8c1d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8c1f pop ecx */
  ECX = (pop32());
  /* 11df8c20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8c23 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11df8c2a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11df8c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8c34 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8c37 mov esi, esp */
  ESI = (ESP);
  /* 11df8c39 push eax */
  push32((uint32_t)(EAX));
  /* 11df8c3a call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8c40u);
  /* 11df8c40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8c43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8c45 call 0x11df9b90 */
  push32(0x11df8c4au); f_11df9b90();
  /* 11df8c4a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11df8c4d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8c51 jle 0x11df8cc4 */
  if ((C.zf||C.sf!=C.of)) goto L_11df8cc4;
  /* 11df8c53 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11df8c5a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11df8c61 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11df8c68 jmp 0x11df8c73 */
  goto L_11df8c73;
L_11df8c6a:;
  /* 11df8c6a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df8c6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8c70 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11df8c73:;
  /* 11df8c73 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df8c76 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8c79 jge 0x11df8cb0 */
  if ((C.sf==C.of)) goto L_11df8cb0;
  /* 11df8c7b mov esi, esp */
  ESI = (ESP);
  /* 11df8c7d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11df8c80 push eax */
  push32((uint32_t)(EAX));
  /* 11df8c81 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11df8c84 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8c85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8c88 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8c8b push edx */
  push32((uint32_t)(EDX));
  /* 11df8c8c call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df8c92u);
  /* 11df8c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8c97 call 0x11df9b90 */
  push32(0x11df8c9cu); f_11df9b90();
  /* 11df8c9c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11df8c9f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8ca2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11df8ca5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11df8ca8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8cab mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11df8cae jmp 0x11df8c6a */
  goto L_11df8c6a;
L_11df8cb0:;
  /* 11df8cb0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11df8cb3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11df8cb4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11df8cb7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11df8cba mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11df8cbd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11df8cbe idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11df8cc1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11df8cc4:;
  /* 11df8cc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8cc7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11df8cca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11df8ccc mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11df8ccf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11df8cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8cd5 pop edi */
  EDI = (pop32());
  /* 11df8cd6 pop esi */
  ESI = (pop32());
  /* 11df8cd7 pop ebx */
  EBX = (pop32());
  /* 11df8cd8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8cde cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8ce0 call 0x11df9b90 */
  push32(0x11df8ce5u); f_11df9b90();
  /* 11df8ce5 mov esp, ebp */
  ESP = (EBP);
  /* 11df8ce7 pop ebp */
  EBP = (pop32());
  /* 11df8ce8 ret 4 */
  ESPCHK(0x11df8c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10008d30 @ 0x11df8d30 (250 bytes, 89 insns) */
void f_11df8d30(void) {
  FTRACE(0x11df8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8d31 mov ebp, esp */
  EBP = (ESP);
  /* 11df8d33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8d36 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8d37 push esi */
  push32((uint32_t)(ESI));
  /* 11df8d38 push edi */
  push32((uint32_t)(EDI));
  /* 11df8d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8d3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df8d3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df8d42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8d47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8d49 pop ecx */
  ECX = (pop32());
  /* 11df8d4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8d50 call 0x11df10dc */
  push32(0x11df8d55u); f_11df10dc();
  /* 11df8d55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df8d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8d5c je 0x11df8e19 */
  if (C.zf) goto L_11df8e19;
  /* 11df8d62 mov esi, esp */
  ESI = (ESP);
  /* 11df8d64 mov eax, dword ptr [0x11e2dd70] */
  EAX = (r32((uint32_t)(0x11e2dd70)));
  /* 11df8d69 push eax */
  push32((uint32_t)(EAX));
  /* 11df8d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8d6d push ecx */
  push32((uint32_t)(ECX));
  /* 11df8d6e mov edx, dword ptr [0x11e305d4] */
  EDX = (r32((uint32_t)(0x11e305d4)));
  /* 11df8d74 push edx */
  push32((uint32_t)(EDX));
  /* 11df8d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8d78 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8d7b push eax */
  push32((uint32_t)(EAX));
  /* 11df8d7c call dword ptr [0x11e334ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334ac))), 0x11df8d82u);
  /* 11df8d82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8d87 call 0x11df9b90 */
  push32(0x11df8d8cu); f_11df9b90();
  /* 11df8d8c mov esi, esp */
  ESI = (ESP);
  /* 11df8d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8d93 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8d96 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8d97 call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df8d9du);
  /* 11df8d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8da2 call 0x11df9b90 */
  push32(0x11df8da7u); f_11df9b90();
  /* 11df8da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8da9 jle 0x11df8dcc */
  if ((C.zf||C.sf!=C.of)) goto L_11df8dcc;
  /* 11df8dab mov esi, esp */
  ESI = (ESP);
  /* 11df8dad push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8db2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8db5 push edx */
  push32((uint32_t)(EDX));
  /* 11df8db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8db9 push eax */
  push32((uint32_t)(EAX));
  /* 11df8dba call dword ptr [0x11e3352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3352c))), 0x11df8dc0u);
  /* 11df8dc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8dc5 call 0x11df9b90 */
  push32(0x11df8dcau); f_11df9b90();
  /* 11df8dca jmp 0x11df8e19 */
  goto L_11df8e19;
L_11df8dcc:;
  /* 11df8dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8dcf call 0x11df11d6 */
  push32(0x11df8dd4u); f_11df11d6();
  /* 11df8dd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df8dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8ddb jne 0x11df8e19 */
  if (!C.zf) goto L_11df8e19;
  /* 11df8ddd mov esi, esp */
  ESI = (ESP);
  /* 11df8ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8de1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8de4 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8de5 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df8debu);
  /* 11df8deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8df0 call 0x11df9b90 */
  push32(0x11df8df5u); f_11df9b90();
  /* 11df8df5 mov esi, esp */
  ESI = (ESP);
  /* 11df8df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df8dfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8dfe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11df8e01 push eax */
  push32((uint32_t)(EAX));
  /* 11df8e02 mov cl, byte ptr [0x11e2dd74] */
  CL = (r8((uint32_t)(0x11e2dd74)));
  /* 11df8e08 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8e09 call dword ptr [0x11e33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33528))), 0x11df8e0fu);
  /* 11df8e0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8e14 call 0x11df9b90 */
  push32(0x11df8e19u); f_11df9b90();
L_11df8e19:;
  /* 11df8e19 pop edi */
  EDI = (pop32());
  /* 11df8e1a pop esi */
  ESI = (pop32());
  /* 11df8e1b pop ebx */
  EBX = (pop32());
  /* 11df8e1c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8e1f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8e21 call 0x11df9b90 */
  push32(0x11df8e26u); f_11df9b90();
  /* 11df8e26 mov esp, ebp */
  ESP = (EBP);
  /* 11df8e28 pop ebp */
  EBP = (pop32());
  /* 11df8e29 ret  */
  ESPCHK(0x11df8d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e70 @ 0x11df8e70 (74 bytes, 31 insns) */
void f_11df8e70(void) {
  FTRACE(0x11df8e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8e71 mov ebp, esp */
  EBP = (ESP);
  /* 11df8e73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8e76 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8e77 push esi */
  push32((uint32_t)(ESI));
  /* 11df8e78 push edi */
  push32((uint32_t)(EDI));
  /* 11df8e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8e7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df8e7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df8e82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8e87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8e89 pop ecx */
  ECX = (pop32());
  /* 11df8e8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8e8d mov esi, esp */
  ESI = (ESP);
  /* 11df8e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8e92 push eax */
  push32((uint32_t)(EAX));
  /* 11df8e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8e96 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8e97 call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df8e9du);
  /* 11df8e9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8ea2 call 0x11df9b90 */
  push32(0x11df8ea7u); f_11df9b90();
  /* 11df8ea7 pop edi */
  EDI = (pop32());
  /* 11df8ea8 pop esi */
  ESI = (pop32());
  /* 11df8ea9 pop ebx */
  EBX = (pop32());
  /* 11df8eaa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8ead cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8eaf call 0x11df9b90 */
  push32(0x11df8eb4u); f_11df9b90();
  /* 11df8eb4 mov esp, ebp */
  ESP = (EBP);
  /* 11df8eb6 pop ebp */
  EBP = (pop32());
  /* 11df8eb7 ret 4 */
  ESPCHK(0x11df8e70u, _esp0);
  ESP += 8; return;
}

/* FUN_10008ed0 @ 0x11df8ed0 (114 bytes, 45 insns) */
void f_11df8ed0(void) {
  FTRACE(0x11df8ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11df8ed3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8ed7 push esi */
  push32((uint32_t)(ESI));
  /* 11df8ed8 push edi */
  push32((uint32_t)(EDI));
  /* 11df8ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8eda lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df8edd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8ee2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8ee7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8ee9 pop ecx */
  ECX = (pop32());
  /* 11df8eea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8eed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8ef1 mov esi, esp */
  ESI = (ESP);
  /* 11df8ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8ef6 push eax */
  push32((uint32_t)(EAX));
  /* 11df8ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8efa mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11df8efd push edx */
  push32((uint32_t)(EDX));
  /* 11df8efe call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df8f04u);
  /* 11df8f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8f09 call 0x11df9b90 */
  push32(0x11df8f0eu); f_11df9b90();
  /* 11df8f0e mov esi, eax */
  ESI = (EAX);
  /* 11df8f10 mov edi, esp */
  EDI = (ESP);
  /* 11df8f12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8f15 push eax */
  push32((uint32_t)(EAX));
  /* 11df8f16 call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8f1cu);
  /* 11df8f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8f1f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8f21 call 0x11df9b90 */
  push32(0x11df8f26u); f_11df9b90();
  /* 11df8f26 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8f28 jne 0x11df8f2e */
  if (!C.zf) goto L_11df8f2e;
  /* 11df8f2a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df8f2e:;
  /* 11df8f2e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df8f31 pop edi */
  EDI = (pop32());
  /* 11df8f32 pop esi */
  ESI = (pop32());
  /* 11df8f33 pop ebx */
  EBX = (pop32());
  /* 11df8f34 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8f37 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8f39 call 0x11df9b90 */
  push32(0x11df8f3eu); f_11df9b90();
  /* 11df8f3e mov esp, ebp */
  ESP = (EBP);
  /* 11df8f40 pop ebp */
  EBP = (pop32());
  /* 11df8f41 ret  */
  ESPCHK(0x11df8ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f60 @ 0x11df8f60 (83 bytes, 34 insns) */
void f_11df8f60(void) {
  FTRACE(0x11df8f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8f61 mov ebp, esp */
  EBP = (ESP);
  /* 11df8f63 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8f66 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8f67 push esi */
  push32((uint32_t)(ESI));
  /* 11df8f68 push edi */
  push32((uint32_t)(EDI));
  /* 11df8f69 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8f6a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df8f6d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df8f72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8f77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8f79 pop ecx */
  ECX = (pop32());
  /* 11df8f7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8f7d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df8f81 mov esi, esp */
  ESI = (ESP);
  /* 11df8f83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8f86 push eax */
  push32((uint32_t)(EAX));
  /* 11df8f87 call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df8f8du);
  /* 11df8f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8f90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8f92 call 0x11df9b90 */
  push32(0x11df8f97u); f_11df9b90();
  /* 11df8f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df8f99 jle 0x11df8f9f */
  if ((C.zf||C.sf!=C.of)) goto L_11df8f9f;
  /* 11df8f9b mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df8f9f:;
  /* 11df8f9f mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df8fa2 pop edi */
  EDI = (pop32());
  /* 11df8fa3 pop esi */
  ESI = (pop32());
  /* 11df8fa4 pop ebx */
  EBX = (pop32());
  /* 11df8fa5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df8fa8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df8faa call 0x11df9b90 */
  push32(0x11df8fafu); f_11df9b90();
  /* 11df8faf mov esp, ebp */
  ESP = (EBP);
  /* 11df8fb1 pop ebp */
  EBP = (pop32());
  /* 11df8fb2 ret  */
  ESPCHK(0x11df8f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd0 @ 0x11df8fd0 (126 bytes, 48 insns) */
void f_11df8fd0(void) {
  FTRACE(0x11df8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11df8fd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df8fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df8fd7 push esi */
  push32((uint32_t)(ESI));
  /* 11df8fd8 push edi */
  push32((uint32_t)(EDI));
  /* 11df8fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df8fda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df8fdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df8fe2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df8fe7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df8fe9 pop ecx */
  ECX = (pop32());
  /* 11df8fea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df8fed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df8ff3 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11df8ff6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df8ff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df8ffc mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11df8fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9002 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9003 call 0x11df104b */
  push32(0x11df9008u); f_11df104b();
  /* 11df9008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df900b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df900e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11df9011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9014 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11df9017 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11df9019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df901c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11df901f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11df9022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9025 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9028 mov esi, esp */
  ESI = (ESP);
  /* 11df902a push ecx */
  push32((uint32_t)(ECX));
  /* 11df902b call dword ptr [0x11e3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3353c))), 0x11df9031u);
  /* 11df9031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9036 call 0x11df9b90 */
  push32(0x11df903bu); f_11df9b90();
  /* 11df903b pop edi */
  EDI = (pop32());
  /* 11df903c pop esi */
  ESI = (pop32());
  /* 11df903d pop ebx */
  EBX = (pop32());
  /* 11df903e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9041 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9043 call 0x11df9b90 */
  push32(0x11df9048u); f_11df9b90();
  /* 11df9048 mov esp, ebp */
  ESP = (EBP);
  /* 11df904a pop ebp */
  EBP = (pop32());
  /* 11df904b ret 0x10 */
  ESPCHK(0x11df8fd0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009070 @ 0x11df9070 (136 bytes, 54 insns) */
void f_11df9070(void) {
  FTRACE(0x11df9070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9070 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9071 mov ebp, esp */
  EBP = (ESP);
  /* 11df9073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9076 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9077 push esi */
  push32((uint32_t)(ESI));
  /* 11df9078 push edi */
  push32((uint32_t)(EDI));
  /* 11df9079 push ecx */
  push32((uint32_t)(ECX));
  /* 11df907a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df907d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9082 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9087 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9089 pop ecx */
  ECX = (pop32());
  /* 11df908a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df908d mov esi, esp */
  ESI = (ESP);
  /* 11df908f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9092 push eax */
  push32((uint32_t)(EAX));
  /* 11df9093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9096 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9099 push ecx */
  push32((uint32_t)(ECX));
  /* 11df909a call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df90a0u);
  /* 11df90a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df90a5 call 0x11df9b90 */
  push32(0x11df90aau); f_11df9b90();
  /* 11df90aa mov esi, esp */
  ESI = (ESP);
  /* 11df90ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df90af push edx */
  push32((uint32_t)(EDX));
  /* 11df90b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df90b3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90b6 push eax */
  push32((uint32_t)(EAX));
  /* 11df90b7 call dword ptr [0x11e33510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33510))), 0x11df90bdu);
  /* 11df90bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df90c2 call 0x11df9b90 */
  push32(0x11df90c7u); f_11df9b90();
  /* 11df90c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11df90ca push ecx */
  push32((uint32_t)(ECX));
  /* 11df90cb mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11df90ce push edx */
  push32((uint32_t)(EDX));
  /* 11df90cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df90d2 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90d5 push eax */
  push32((uint32_t)(EAX));
  /* 11df90d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df90d9 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90dc push ecx */
  push32((uint32_t)(ECX));
  /* 11df90dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df90e0 call 0x11df1069 */
  push32(0x11df90e5u); f_11df1069();
  /* 11df90e5 pop edi */
  EDI = (pop32());
  /* 11df90e6 pop esi */
  ESI = (pop32());
  /* 11df90e7 pop ebx */
  EBX = (pop32());
  /* 11df90e8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df90eb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df90ed call 0x11df9b90 */
  push32(0x11df90f2u); f_11df9b90();
  /* 11df90f2 mov esp, ebp */
  ESP = (EBP);
  /* 11df90f4 pop ebp */
  EBP = (pop32());
  /* 11df90f5 ret 0x10 */
  ESPCHK(0x11df9070u, _esp0);
  ESP += 20; return;
}

/* FUN_10009120 @ 0x11df9120 (150 bytes, 58 insns) */
void f_11df9120(void) {
  FTRACE(0x11df9120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9120 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9121 mov ebp, esp */
  EBP = (ESP);
  /* 11df9123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9126 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9127 push esi */
  push32((uint32_t)(ESI));
  /* 11df9128 push edi */
  push32((uint32_t)(EDI));
  /* 11df9129 push ecx */
  push32((uint32_t)(ECX));
  /* 11df912a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df912d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9132 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9137 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9139 pop ecx */
  ECX = (pop32());
  /* 11df913a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df913d mov esi, esp */
  ESI = (ESP);
  /* 11df913f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9142 push eax */
  push32((uint32_t)(EAX));
  /* 11df9143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9146 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9149 push ecx */
  push32((uint32_t)(ECX));
  /* 11df914a call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df9150u);
  /* 11df9150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9155 call 0x11df9b90 */
  push32(0x11df915au); f_11df9b90();
  /* 11df915a mov esi, esp */
  ESI = (ESP);
  /* 11df915c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11df9161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9164 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9167 push edx */
  push32((uint32_t)(EDX));
  /* 11df9168 mov eax, dword ptr [0x11e305d8] */
  EAX = (r32((uint32_t)(0x11e305d8)));
  /* 11df916d push eax */
  push32((uint32_t)(EAX));
  /* 11df916e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9171 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9174 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9175 call dword ptr [0x11e334ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334ac))), 0x11df917bu);
  /* 11df917b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df917e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9180 call 0x11df9b90 */
  push32(0x11df9185u); f_11df9b90();
  /* 11df9185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df9188 push edx */
  push32((uint32_t)(EDX));
  /* 11df9189 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11df918c push eax */
  push32((uint32_t)(EAX));
  /* 11df918d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9190 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9193 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9197 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df919a push edx */
  push32((uint32_t)(EDX));
  /* 11df919b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df919e call 0x11df1069 */
  push32(0x11df91a3u); f_11df1069();
  /* 11df91a3 pop edi */
  EDI = (pop32());
  /* 11df91a4 pop esi */
  ESI = (pop32());
  /* 11df91a5 pop ebx */
  EBX = (pop32());
  /* 11df91a6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df91a9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df91ab call 0x11df9b90 */
  push32(0x11df91b0u); f_11df9b90();
  /* 11df91b0 mov esp, ebp */
  ESP = (EBP);
  /* 11df91b2 pop ebp */
  EBP = (pop32());
  /* 11df91b3 ret 0xc */
  ESPCHK(0x11df9120u, _esp0);
  ESP += 16; return;
}

/* FUN_100091e0 @ 0x11df91e0 (255 bytes, 92 insns) */
void f_11df91e0(void) {
  FTRACE(0x11df91e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df91e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df91e1 mov ebp, esp */
  EBP = (ESP);
  /* 11df91e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df91e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df91e7 push esi */
  push32((uint32_t)(ESI));
  /* 11df91e8 push edi */
  push32((uint32_t)(EDI));
  /* 11df91e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df91ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df91ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df91f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df91f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df91f9 pop ecx */
  ECX = (pop32());
  /* 11df91fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df91fd mov esi, esp */
  ESI = (ESP);
  /* 11df91ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9202 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11df9205 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9206 call dword ptr [0x11e334b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334b8))), 0x11df920cu);
  /* 11df920c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df920f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9211 call 0x11df9b90 */
  push32(0x11df9216u); f_11df9b90();
  /* 11df9216 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df921b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df921d je 0x11df9265 */
  if (C.zf) goto L_11df9265;
  /* 11df921f mov esi, esp */
  ESI = (ESP);
  /* 11df9221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9224 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11df9226 push eax */
  push32((uint32_t)(EAX));
  /* 11df9227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df922a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11df922d push edx */
  push32((uint32_t)(EDX));
  /* 11df922e call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df9234u);
  /* 11df9234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9237 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9239 call 0x11df9b90 */
  push32(0x11df923eu); f_11df9b90();
  /* 11df923e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9240 jle 0x11df9265 */
  if ((C.zf||C.sf!=C.of)) goto L_11df9265;
  /* 11df9242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9245 call 0x11df124e */
  push32(0x11df924au); f_11df124e();
  /* 11df924a mov esi, esp */
  ESI = (ESP);
  /* 11df924c push 0 */
  push32((uint32_t)(0x0u));
  /* 11df924e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9251 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11df9254 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9255 call dword ptr [0x11e334c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334c8))), 0x11df925bu);
  /* 11df925b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df925e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9260 call 0x11df9b90 */
  push32(0x11df9265u); f_11df9b90();
L_11df9265:;
  /* 11df9265 mov esi, esp */
  ESI = (ESP);
  /* 11df9267 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df926a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11df926d push eax */
  push32((uint32_t)(EAX));
  /* 11df926e call dword ptr [0x11e334b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334b8))), 0x11df9274u);
  /* 11df9274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9279 call 0x11df9b90 */
  push32(0x11df927eu); f_11df9b90();
  /* 11df927e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df9283 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9285 jne 0x11df92ce */
  if (!C.zf) goto L_11df92ce;
  /* 11df9287 mov esi, esp */
  ESI = (ESP);
  /* 11df9289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df928c mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11df928e push edx */
  push32((uint32_t)(EDX));
  /* 11df928f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9292 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11df9295 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9296 call dword ptr [0x11e3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3351c))), 0x11df929cu);
  /* 11df929c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df929f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df92a1 call 0x11df9b90 */
  push32(0x11df92a6u); f_11df9b90();
  /* 11df92a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df92a9 jge 0x11df92ce */
  if ((C.sf==C.of)) goto L_11df92ce;
  /* 11df92ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df92ae call 0x11df10b9 */
  push32(0x11df92b3u); f_11df10b9();
  /* 11df92b3 mov esi, esp */
  ESI = (ESP);
  /* 11df92b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11df92b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df92ba mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11df92bd push eax */
  push32((uint32_t)(EAX));
  /* 11df92be call dword ptr [0x11e334c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e334c8))), 0x11df92c4u);
  /* 11df92c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df92c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df92c9 call 0x11df9b90 */
  push32(0x11df92ceu); f_11df9b90();
L_11df92ce:;
  /* 11df92ce pop edi */
  EDI = (pop32());
  /* 11df92cf pop esi */
  ESI = (pop32());
  /* 11df92d0 pop ebx */
  EBX = (pop32());
  /* 11df92d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df92d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df92d6 call 0x11df9b90 */
  push32(0x11df92dbu); f_11df9b90();
  /* 11df92db mov esp, ebp */
  ESP = (EBP);
  /* 11df92dd pop ebp */
  EBP = (pop32());
  /* 11df92de ret  */
  ESPCHK(0x11df91e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009320 @ 0x11df9320 (158 bytes, 60 insns) */
void f_11df9320(void) {
  FTRACE(0x11df9320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9320 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9321 mov ebp, esp */
  EBP = (ESP);
  /* 11df9323 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9326 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9327 push esi */
  push32((uint32_t)(ESI));
  /* 11df9328 push edi */
  push32((uint32_t)(EDI));
  /* 11df9329 push ecx */
  push32((uint32_t)(ECX));
  /* 11df932a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df932d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9332 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9337 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9339 pop ecx */
  ECX = (pop32());
  /* 11df933a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df933d mov esi, esp */
  ESI = (ESP);
  /* 11df933f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9344 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9347 push eax */
  push32((uint32_t)(EAX));
  /* 11df9348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df934b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11df934d push edx */
  push32((uint32_t)(EDX));
  /* 11df934e call dword ptr [0x11e33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33544))), 0x11df9354u);
  /* 11df9354 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9357 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9359 call 0x11df9b90 */
  push32(0x11df935eu); f_11df9b90();
  /* 11df935e mov esi, esp */
  ESI = (ESP);
  /* 11df9360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9365 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11df9368 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9369 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df936fu);
  /* 11df936f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9372 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9374 call 0x11df9b90 */
  push32(0x11df9379u); f_11df9b90();
  /* 11df9379 mov esi, esp */
  ESI = (ESP);
  /* 11df937b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df937e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11df9381 push eax */
  push32((uint32_t)(EAX));
  /* 11df9382 call dword ptr [0x11e33490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33490))), 0x11df9388u);
  /* 11df9388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df938b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df938d call 0x11df9b90 */
  push32(0x11df9392u); f_11df9b90();
  /* 11df9392 mov esi, esp */
  ESI = (ESP);
  /* 11df9394 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9396 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9399 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df939c push ecx */
  push32((uint32_t)(ECX));
  /* 11df939d call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df93a3u);
  /* 11df93a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df93a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df93a8 call 0x11df9b90 */
  push32(0x11df93adu); f_11df9b90();
  /* 11df93ad pop edi */
  EDI = (pop32());
  /* 11df93ae pop esi */
  ESI = (pop32());
  /* 11df93af pop ebx */
  EBX = (pop32());
  /* 11df93b0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df93b3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df93b5 call 0x11df9b90 */
  push32(0x11df93bau); f_11df9b90();
  /* 11df93ba mov esp, ebp */
  ESP = (EBP);
  /* 11df93bc pop ebp */
  EBP = (pop32());
  /* 11df93bd ret  */
  ESPCHK(0x11df9320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x11df93f0 (158 bytes, 60 insns) */
void f_11df93f0(void) {
  FTRACE(0x11df93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df93f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df93f1 mov ebp, esp */
  EBP = (ESP);
  /* 11df93f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df93f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df93f7 push esi */
  push32((uint32_t)(ESI));
  /* 11df93f8 push edi */
  push32((uint32_t)(EDI));
  /* 11df93f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df93fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df93fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9402 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9407 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9409 pop ecx */
  ECX = (pop32());
  /* 11df940a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df940d mov esi, esp */
  ESI = (ESP);
  /* 11df940f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9414 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9417 push eax */
  push32((uint32_t)(EAX));
  /* 11df9418 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df941b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11df941d push edx */
  push32((uint32_t)(EDX));
  /* 11df941e call dword ptr [0x11e33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33544))), 0x11df9424u);
  /* 11df9424 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9427 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9429 call 0x11df9b90 */
  push32(0x11df942eu); f_11df9b90();
  /* 11df942e mov esi, esp */
  ESI = (ESP);
  /* 11df9430 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9435 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11df9438 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9439 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df943fu);
  /* 11df943f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9444 call 0x11df9b90 */
  push32(0x11df9449u); f_11df9b90();
  /* 11df9449 mov esi, esp */
  ESI = (ESP);
  /* 11df944b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df944e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11df9451 push eax */
  push32((uint32_t)(EAX));
  /* 11df9452 call dword ptr [0x11e3348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3348c))), 0x11df9458u);
  /* 11df9458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df945b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df945d call 0x11df9b90 */
  push32(0x11df9462u); f_11df9b90();
  /* 11df9462 mov esi, esp */
  ESI = (ESP);
  /* 11df9464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9469 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df946c push ecx */
  push32((uint32_t)(ECX));
  /* 11df946d call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df9473u);
  /* 11df9473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9476 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9478 call 0x11df9b90 */
  push32(0x11df947du); f_11df9b90();
  /* 11df947d pop edi */
  EDI = (pop32());
  /* 11df947e pop esi */
  ESI = (pop32());
  /* 11df947f pop ebx */
  EBX = (pop32());
  /* 11df9480 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9483 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9485 call 0x11df9b90 */
  push32(0x11df948au); f_11df9b90();
  /* 11df948a mov esp, ebp */
  ESP = (EBP);
  /* 11df948c pop ebp */
  EBP = (pop32());
  /* 11df948d ret  */
  ESPCHK(0x11df93f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x11df94c0 (49 bytes, 22 insns) */
void f_11df94c0(void) {
  FTRACE(0x11df94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df94c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df94c1 mov ebp, esp */
  EBP = (ESP);
  /* 11df94c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df94c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df94c7 push esi */
  push32((uint32_t)(ESI));
  /* 11df94c8 push edi */
  push32((uint32_t)(EDI));
  /* 11df94c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df94ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df94cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df94d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df94d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df94d9 pop ecx */
  ECX = (pop32());
  /* 11df94da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df94dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df94e0 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11df94e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df94ea pop edi */
  EDI = (pop32());
  /* 11df94eb pop esi */
  ESI = (pop32());
  /* 11df94ec pop ebx */
  EBX = (pop32());
  /* 11df94ed mov esp, ebp */
  ESP = (EBP);
  /* 11df94ef pop ebp */
  EBP = (pop32());
  /* 11df94f0 ret  */
  ESPCHK(0x11df94c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009500 @ 0x11df9500 (77 bytes, 32 insns) */
void f_11df9500(void) {
  FTRACE(0x11df9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9500 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9501 mov ebp, esp */
  EBP = (ESP);
  /* 11df9503 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9506 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9507 push esi */
  push32((uint32_t)(ESI));
  /* 11df9508 push edi */
  push32((uint32_t)(EDI));
  /* 11df9509 push ecx */
  push32((uint32_t)(ECX));
  /* 11df950a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df950d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9519 pop ecx */
  ECX = (pop32());
  /* 11df951a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df951d mov esi, esp */
  ESI = (ESP);
  /* 11df951f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9522 push eax */
  push32((uint32_t)(EAX));
  /* 11df9523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9526 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9529 push ecx */
  push32((uint32_t)(ECX));
  /* 11df952a call dword ptr [0x11e33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33514))), 0x11df9530u);
  /* 11df9530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9533 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9535 call 0x11df9b90 */
  push32(0x11df953au); f_11df9b90();
  /* 11df953a pop edi */
  EDI = (pop32());
  /* 11df953b pop esi */
  ESI = (pop32());
  /* 11df953c pop ebx */
  EBX = (pop32());
  /* 11df953d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9540 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9542 call 0x11df9b90 */
  push32(0x11df9547u); f_11df9b90();
  /* 11df9547 mov esp, ebp */
  ESP = (EBP);
  /* 11df9549 pop ebp */
  EBP = (pop32());
  /* 11df954a ret 4 */
  ESPCHK(0x11df9500u, _esp0);
  ESP += 8; return;
}

/* FUN_10009560 @ 0x11df9560 (102 bytes, 40 insns) */
void f_11df9560(void) {
  FTRACE(0x11df9560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9560 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9561 mov ebp, esp */
  EBP = (ESP);
  /* 11df9563 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9566 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9567 push esi */
  push32((uint32_t)(ESI));
  /* 11df9568 push edi */
  push32((uint32_t)(EDI));
  /* 11df9569 push ecx */
  push32((uint32_t)(ECX));
  /* 11df956a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df956d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9572 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9577 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9579 pop ecx */
  ECX = (pop32());
  /* 11df957a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df957d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9580 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9583 mov esi, esp */
  ESI = (ESP);
  /* 11df9585 push eax */
  push32((uint32_t)(EAX));
  /* 11df9586 call dword ptr [0x11e3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3353c))), 0x11df958cu);
  /* 11df958c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df958f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9591 call 0x11df9b90 */
  push32(0x11df9596u); f_11df9b90();
  /* 11df9596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9599 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df959c mov esi, esp */
  ESI = (ESP);
  /* 11df959e push ecx */
  push32((uint32_t)(ECX));
  /* 11df959f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df95a2 push edx */
  push32((uint32_t)(EDX));
  /* 11df95a3 call dword ptr [0x11e33488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33488))), 0x11df95a9u);
  /* 11df95a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df95ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df95ae call 0x11df9b90 */
  push32(0x11df95b3u); f_11df9b90();
  /* 11df95b3 pop edi */
  EDI = (pop32());
  /* 11df95b4 pop esi */
  ESI = (pop32());
  /* 11df95b5 pop ebx */
  EBX = (pop32());
  /* 11df95b6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df95b9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df95bb call 0x11df9b90 */
  push32(0x11df95c0u); f_11df9b90();
  /* 11df95c0 mov esp, ebp */
  ESP = (EBP);
  /* 11df95c2 pop ebp */
  EBP = (pop32());
  /* 11df95c3 ret 4 */
  ESPCHK(0x11df9560u, _esp0);
  ESP += 8; return;
}

/* FUN_100095e0 @ 0x11df95e0 (184 bytes, 69 insns) */
void f_11df95e0(void) {
  FTRACE(0x11df95e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df95e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df95e1 mov ebp, esp */
  EBP = (ESP);
  /* 11df95e3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df95e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df95e7 push esi */
  push32((uint32_t)(ESI));
  /* 11df95e8 push edi */
  push32((uint32_t)(EDI));
  /* 11df95e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df95ea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df95ed mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df95f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df95f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df95f9 pop ecx */
  ECX = (pop32());
  /* 11df95fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df95fd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df9601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9604 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9608 jne 0x11df9637 */
  if (!C.zf) goto L_11df9637;
  /* 11df960a mov esi, esp */
  ESI = (ESP);
  /* 11df960c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df960f push ecx */
  push32((uint32_t)(ECX));
  /* 11df9610 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9612 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9615 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9618 push edx */
  push32((uint32_t)(EDX));
  /* 11df9619 call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df961fu);
  /* 11df961f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9624 call 0x11df9b90 */
  push32(0x11df9629u); f_11df9b90();
  /* 11df9629 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df962c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df962e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11df9631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9634 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_11df9637:;
  /* 11df9637 mov esi, esp */
  ESI = (ESP);
  /* 11df9639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df963c push eax */
  push32((uint32_t)(EAX));
  /* 11df963d call dword ptr [0x11e33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33548))), 0x11df9643u);
  /* 11df9643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9646 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9648 call 0x11df9b90 */
  push32(0x11df964du); f_11df9b90();
  /* 11df964d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9650 jne 0x11df9682 */
  if (!C.zf) goto L_11df9682;
  /* 11df9652 mov esi, esp */
  ESI = (ESP);
  /* 11df9654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9657 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df965a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df965d push edx */
  push32((uint32_t)(EDX));
  /* 11df965e call dword ptr [0x11e3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3354c))), 0x11df9664u);
  /* 11df9664 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9667 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9669 call 0x11df9b90 */
  push32(0x11df966eu); f_11df9b90();
  /* 11df966e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9671 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df9673 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11df9676 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9679 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df967c jne 0x11df9682 */
  if (!C.zf) goto L_11df9682;
  /* 11df967e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df9682:;
  /* 11df9682 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df9685 pop edi */
  EDI = (pop32());
  /* 11df9686 pop esi */
  ESI = (pop32());
  /* 11df9687 pop ebx */
  EBX = (pop32());
  /* 11df9688 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df968b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df968d call 0x11df9b90 */
  push32(0x11df9692u); f_11df9b90();
  /* 11df9692 mov esp, ebp */
  ESP = (EBP);
  /* 11df9694 pop ebp */
  EBP = (pop32());
  /* 11df9695 ret 4 */
  ESPCHK(0x11df95e0u, _esp0);
  ESP += 8; return;
}

/* FUN_100096d0 @ 0x11df96d0 (110 bytes, 43 insns) */
void f_11df96d0(void) {
  FTRACE(0x11df96d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df96d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df96d1 mov ebp, esp */
  EBP = (ESP);
  /* 11df96d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df96d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df96d7 push esi */
  push32((uint32_t)(ESI));
  /* 11df96d8 push edi */
  push32((uint32_t)(EDI));
  /* 11df96d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df96da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11df96dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11df96e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df96e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df96e9 pop ecx */
  ECX = (pop32());
  /* 11df96ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df96ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df96f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df96f4 push eax */
  push32((uint32_t)(EAX));
  /* 11df96f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df96f8 call 0x11df100a */
  push32(0x11df96fdu); f_11df100a();
  /* 11df96fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11df9702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9704 je 0x11df9728 */
  if (C.zf) goto L_11df9728;
  /* 11df9706 mov esi, esp */
  ESI = (ESP);
  /* 11df9708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df970b push ecx */
  push32((uint32_t)(ECX));
  /* 11df970c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df970f push edx */
  push32((uint32_t)(EDX));
  /* 11df9710 call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df9716u);
  /* 11df9716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df971b call 0x11df9b90 */
  push32(0x11df9720u); f_11df9b90();
  /* 11df9720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9722 jle 0x11df9728 */
  if ((C.zf||C.sf!=C.of)) goto L_11df9728;
  /* 11df9724 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df9728:;
  /* 11df9728 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df972b pop edi */
  EDI = (pop32());
  /* 11df972c pop esi */
  ESI = (pop32());
  /* 11df972d pop ebx */
  EBX = (pop32());
  /* 11df972e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9731 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9733 call 0x11df9b90 */
  push32(0x11df9738u); f_11df9b90();
  /* 11df9738 mov esp, ebp */
  ESP = (EBP);
  /* 11df973a pop ebp */
  EBP = (pop32());
  /* 11df973b ret 8 */
  ESPCHK(0x11df96d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10009760 @ 0x11df9760 (42 bytes, 21 insns) */
void f_11df9760(void) {
  FTRACE(0x11df9760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9760 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9761 mov ebp, esp */
  EBP = (ESP);
  /* 11df9763 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9766 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9767 push esi */
  push32((uint32_t)(ESI));
  /* 11df9768 push edi */
  push32((uint32_t)(EDI));
  /* 11df9769 push ecx */
  push32((uint32_t)(ECX));
  /* 11df976a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11df976d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11df9772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9779 pop ecx */
  ECX = (pop32());
  /* 11df977a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df977d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9780 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9783 pop edi */
  EDI = (pop32());
  /* 11df9784 pop esi */
  ESI = (pop32());
  /* 11df9785 pop ebx */
  EBX = (pop32());
  /* 11df9786 mov esp, ebp */
  ESP = (EBP);
  /* 11df9788 pop ebp */
  EBP = (pop32());
  /* 11df9789 ret  */
  ESPCHK(0x11df9760u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x11df97a0 (155 bytes, 58 insns) */
void f_11df97a0(void) {
  FTRACE(0x11df97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df97a1 mov ebp, esp */
  EBP = (ESP);
  /* 11df97a3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df97a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df97a7 push esi */
  push32((uint32_t)(ESI));
  /* 11df97a8 push edi */
  push32((uint32_t)(EDI));
  /* 11df97a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df97aa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11df97ad mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11df97b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df97b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df97b9 pop ecx */
  ECX = (pop32());
  /* 11df97ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df97bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df97c3 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 11df97c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97c9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11df97cc mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 11df97cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11df97d5 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 11df97d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11df97de mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11df97e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11df97e7 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 11df97ea mov esi, esp */
  ESI = (ESP);
  /* 11df97ec push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11df97f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df97f4 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11df97f7 push edx */
  push32((uint32_t)(EDX));
  /* 11df97f8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11df97fb push eax */
  push32((uint32_t)(EAX));
  /* 11df97fc call dword ptr [0x11e33538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33538))), 0x11df9802u);
  /* 11df9802 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9807 call 0x11df9b90 */
  push32(0x11df980cu); f_11df9b90();
  /* 11df980c mov esi, esp */
  ESI = (ESP);
  /* 11df980e push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9812 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11df9815 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9818 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df981eu);
  /* 11df981e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9823 call 0x11df9b90 */
  push32(0x11df9828u); f_11df9b90();
  /* 11df9828 pop edi */
  EDI = (pop32());
  /* 11df9829 pop esi */
  ESI = (pop32());
  /* 11df982a pop ebx */
  EBX = (pop32());
  /* 11df982b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df982e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9830 call 0x11df9b90 */
  push32(0x11df9835u); f_11df9b90();
  /* 11df9835 mov esp, ebp */
  ESP = (EBP);
  /* 11df9837 pop ebp */
  EBP = (pop32());
  /* 11df9838 ret 0x14 */
  ESPCHK(0x11df97a0u, _esp0);
  ESP += 24; return;
}

/* FUN_10009870 @ 0x11df9870 (252 bytes, 91 insns) */
void f_11df9870(void) {
  FTRACE(0x11df9870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9870 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9871 mov ebp, esp */
  EBP = (ESP);
  /* 11df9873 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9876 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9877 push esi */
  push32((uint32_t)(ESI));
  /* 11df9878 push edi */
  push32((uint32_t)(EDI));
  /* 11df9879 push ecx */
  push32((uint32_t)(ECX));
  /* 11df987a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11df987d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11df9882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df9887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df9889 pop ecx */
  ECX = (pop32());
  /* 11df988a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df988d mov esi, esp */
  ESI = (ESP);
  /* 11df988f push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9894 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 11df9897 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9898 call dword ptr [0x11e33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33520))), 0x11df989eu);
  /* 11df989e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df98a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df98a3 call 0x11df9b90 */
  push32(0x11df98a8u); f_11df9b90();
  /* 11df98a8 mov esi, esp */
  ESI = (ESP);
  /* 11df98aa push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11df98af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98b2 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 11df98b5 push eax */
  push32((uint32_t)(EAX));
  /* 11df98b6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11df98b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df98ba call dword ptr [0x11e33538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33538))), 0x11df98c0u);
  /* 11df98c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df98c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df98c5 call 0x11df9b90 */
  push32(0x11df98cau); f_11df9b90();
  /* 11df98ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98cd cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df98d1 je 0x11df98e2 */
  if (C.zf) goto L_11df98e2;
  /* 11df98d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98d6 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 11df98da add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11df98de mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11df98e2:;
  /* 11df98e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98e5 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df98e9 je 0x11df98f6 */
  if (C.zf) goto L_11df98f6;
  /* 11df98eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98ee mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 11df98f2 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11df98f6:;
  /* 11df98f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df98f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11df98fb mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 11df98fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9900 jne 0x11df9923 */
  if (!C.zf) goto L_11df9923;
  /* 11df9902 mov esi, esp */
  ESI = (ESP);
  /* 11df9904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9909 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 11df990c push edx */
  push32((uint32_t)(EDX));
  /* 11df990d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11df9910 push eax */
  push32((uint32_t)(EAX));
  /* 11df9911 push 3 */
  push32((uint32_t)(0x3u));
  /* 11df9913 call dword ptr [0x11e33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33530))), 0x11df9919u);
  /* 11df9919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df991c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df991e call 0x11df9b90 */
  push32(0x11df9923u); f_11df9b90();
L_11df9923:;
  /* 11df9923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9926 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11df9928 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 11df992b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df992e jne 0x11df9951 */
  if (!C.zf) goto L_11df9951;
  /* 11df9930 mov esi, esp */
  ESI = (ESP);
  /* 11df9932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9937 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 11df993a push ecx */
  push32((uint32_t)(ECX));
  /* 11df993b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11df993e push edx */
  push32((uint32_t)(EDX));
  /* 11df993f push 3 */
  push32((uint32_t)(0x3u));
  /* 11df9941 call dword ptr [0x11e33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33528))), 0x11df9947u);
  /* 11df9947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df994a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df994c call 0x11df9b90 */
  push32(0x11df9951u); f_11df9b90();
L_11df9951:;
  /* 11df9951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9954 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 11df995b pop edi */
  EDI = (pop32());
  /* 11df995c pop esi */
  ESI = (pop32());
  /* 11df995d pop ebx */
  EBX = (pop32());
  /* 11df995e add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9961 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9963 call 0x11df9b90 */
  push32(0x11df9968u); f_11df9b90();
  /* 11df9968 mov esp, ebp */
  ESP = (EBP);
  /* 11df996a pop ebp */
  EBP = (pop32());
  /* 11df996b ret  */
  ESPCHK(0x11df9870u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x11df99b0 (143 bytes, 53 insns) */
void f_11df99b0(void) {
  FTRACE(0x11df99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df99b1 mov ebp, esp */
  EBP = (ESP);
  /* 11df99b3 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df99b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df99b7 push esi */
  push32((uint32_t)(ESI));
  /* 11df99b8 push edi */
  push32((uint32_t)(EDI));
  /* 11df99b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11df99ba lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 11df99bd mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11df99c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11df99c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11df99c9 pop ecx */
  ECX = (pop32());
  /* 11df99ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11df99cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11df99d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df99d4 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df99d8 je 0x11df9a2b */
  if (C.zf) goto L_11df9a2b;
  /* 11df99da mov esi, esp */
  ESI = (ESP);
  /* 11df99dc push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11df99e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df99e4 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11df99e7 push edx */
  push32((uint32_t)(EDX));
  /* 11df99e8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11df99eb push eax */
  push32((uint32_t)(EAX));
  /* 11df99ec call dword ptr [0x11e33538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33538))), 0x11df99f2u);
  /* 11df99f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df99f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df99f7 call 0x11df9b90 */
  push32(0x11df99fcu); f_11df9b90();
  /* 11df99fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df99ff call 0x11df11ef */
  push32(0x11df9a04u); f_11df11ef();
  /* 11df9a04 mov esi, esp */
  ESI = (ESP);
  /* 11df9a06 push eax */
  push32((uint32_t)(EAX));
  /* 11df9a07 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11df9a0a push ecx */
  push32((uint32_t)(ECX));
  /* 11df9a0b call dword ptr [0x11e33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33534))), 0x11df9a11u);
  /* 11df9a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9a16 call 0x11df9b90 */
  push32(0x11df9a1bu); f_11df9b90();
  /* 11df9a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11df9a1d jle 0x11df9a2b */
  if ((C.zf||C.sf!=C.of)) goto L_11df9a2b;
  /* 11df9a1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9a22 call 0x11df1087 */
  push32(0x11df9a27u); f_11df1087();
  /* 11df9a27 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11df9a2b:;
  /* 11df9a2b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11df9a2e pop edi */
  EDI = (pop32());
  /* 11df9a2f pop esi */
  ESI = (pop32());
  /* 11df9a30 pop ebx */
  EBX = (pop32());
  /* 11df9a31 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9a34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9a36 call 0x11df9b90 */
  push32(0x11df9a3bu); f_11df9b90();
  /* 11df9a3b mov esp, ebp */
  ESP = (EBP);
  /* 11df9a3d pop ebp */
  EBP = (pop32());
  /* 11df9a3e ret  */
  ESPCHK(0x11df99b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11df9b90 (56 bytes, 28 insns) */
void f_11df9b90(void) {
  FTRACE(0x11df9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9b90 jne 0x11df9b93 */
  if (!C.zf) goto L_11df9b93;
  /* 11df9b92 ret  */
  ESPCHK(0x11df9b90u, _esp0);
  ESP += 4; return;
L_11df9b93:;
  /* 11df9b93 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9b94 mov ebp, esp */
  EBP = (ESP);
  /* 11df9b96 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9b99 push eax */
  push32((uint32_t)(EAX));
  /* 11df9b9a push edx */
  push32((uint32_t)(EDX));
  /* 11df9b9b push ebx */
  push32((uint32_t)(EBX));
  /* 11df9b9c push esi */
  push32((uint32_t)(ESI));
  /* 11df9b9d push edi */
  push32((uint32_t)(EDI));
  /* 11df9b9e push 0x11e2a31c */
  push32((uint32_t)(0x11e2a31cu));
  /* 11df9ba3 push 0x11e2a318 */
  push32((uint32_t)(0x11e2a318u));
  /* 11df9ba8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11df9baa push 0x11e2a308 */
  push32((uint32_t)(0x11e2a308u));
  /* 11df9baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11df9bb1 call 0x11dfaa10 */
  push32(0x11df9bb6u); f_11dfaa10();
  /* 11df9bb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9bb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9bbc jne 0x11df9bbf */
  if (!C.zf) goto L_11df9bbf;
  /* 11df9bbe int3  */
  x86_unimpl("int3 @ 0x11df9bbe");
L_11df9bbf:;
  /* 11df9bbf pop edi */
  EDI = (pop32());
  /* 11df9bc0 pop esi */
  ESI = (pop32());
  /* 11df9bc1 pop ebx */
  EBX = (pop32());
  /* 11df9bc2 pop edx */
  EDX = (pop32());
  /* 11df9bc3 pop eax */
  EAX = (pop32());
  /* 11df9bc4 mov esp, ebp */
  ESP = (EBP);
  /* 11df9bc6 pop ebp */
  EBP = (pop32());
  /* 11df9bc7 ret  */
  ESPCHK(0x11df9b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x11df9bd0 (20 bytes, 6 insns) */
void f_11df9bd0(void) {
  FTRACE(0x11df9bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9bd0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9bd3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11df9bd6 call 0x11dfb308 */
  push32(0x11df9bdbu); f_11dfb308();
  /* 11df9bdb call 0x11df9bed */
  push32(0x11df9be0u); f_11df9bed();
  /* 11df9be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9be3 ret  */
  ESPCHK(0x11df9bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be4 @ 0x11df9be4 (9 bytes, 2 insns) */
void f_11df9be4(void) {
  FTRACE(0x11df9be4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9be4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11df9be8 call 0x11dfb2c5 */
  push32(0x11df9bedu); f_11dfb2c5();
}

/* FUN_10009bed @ 0x11df9bed (145 bytes, 43 insns) */
void f_11df9bed(void) {
  FTRACE(0x11df9bedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9bed push edx */
  push32((uint32_t)(EDX));
  /* 11df9bee wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9bef fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11df9bf2 je 0x11df9c44 */
  if (C.zf) goto L_11df9c44;
  /* 11df9bf4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11df9bfa je 0x11df9c02 */
  if (C.zf) goto L_11df9c02;
  /* 11df9bfc fldcw word ptr [0x11e2a6a8] */
  C.fcw = r16((uint32_t)(0x11e2a6a8));
L_11df9c02:;
  /* 11df9c02 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11df9c04 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9c05 fnstsw ax */
  AX = fpu_status();
  /* 11df9c07 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11df9c08 jp 0x11df9c27 */
  if (C.pf) goto L_11df9c27;
L_11df9c0a:;
  /* 11df9c0a cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9c11 jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9c17 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11df9c1c lea ecx, [0x11e2dd80] */
  ECX = ((uint32_t)(0x11e2dd80));
  /* 11df9c22 jmp 0x11dfb32b */
  f_11dfb32b(); return;
L_11df9c27:;
  /* 11df9c27 fld xword ptr [0x11e2a6aa] */
  fpu_push(rf80((uint32_t)(0x11e2a6aa)));
  /* 11df9c2d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11df9c2f:;
  /* 11df9c2f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11df9c31 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9c32 fnstsw ax */
  AX = fpu_status();
  /* 11df9c34 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11df9c35 jp 0x11df9c2f */
  if (C.pf) goto L_11df9c2f;
  /* 11df9c37 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11df9c39 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11df9c3b jmp 0x11df9c0a */
  goto L_11df9c0a;
L_11df9c3d:;
  /* 11df9c3d call 0x11dfb2ac */
  push32(0x11df9c42u); f_11dfb2ac();
  /* 11df9c42 jmp 0x11df9c5f */
  goto L_11df9c5f;
L_11df9c44:;
  /* 11df9c44 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11df9c49 jne 0x11df9c3d */
  if (!C.zf) goto L_11df9c3d;
  /* 11df9c4b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9c50 jne 0x11df9c3d */
  if (!C.zf) goto L_11df9c3d;
  /* 11df9c52 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11df9c54 fld xword ptr [0x11e2de00] */
  fpu_push(rf80((uint32_t)(0x11e2de00)));
  /* 11df9c5a mov eax, 1 */
  EAX = (0x1u);
L_11df9c5f:;
  /* 11df9c5f cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9c66 jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9c6c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11df9c71 lea ecx, [0x11e2dd80] */
  ECX = ((uint32_t)(0x11e2dd80));
  /* 11df9c77 call 0x11dfb427 */
  push32(0x11df9c7cu); f_11dfb427();
  /* 11df9c7c pop edx */
  EDX = (pop32());
  /* 11df9c7d ret  */
  ESPCHK(0x11df9bedu, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x11df9c80 (20 bytes, 6 insns) */
void f_11df9c80(void) {
  FTRACE(0x11df9c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9c80 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9c83 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11df9c86 call 0x11dfb308 */
  push32(0x11df9c8bu); f_11dfb308();
  /* 11df9c8b call 0x11df9c9d */
  push32(0x11df9c90u); f_11df9c9d();
  /* 11df9c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9c93 ret  */
  ESPCHK(0x11df9c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c94 @ 0x11df9c94 (9 bytes, 2 insns) */
void f_11df9c94(void) {
  FTRACE(0x11df9c94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9c94 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11df9c98 call 0x11dfb2c5 */
  push32(0x11df9c9du); f_11dfb2c5();
}

/* FUN_10009c9d @ 0x11df9c9d (145 bytes, 43 insns) */
void f_11df9c9d(void) {
  FTRACE(0x11df9c9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9c9d push edx */
  push32((uint32_t)(EDX));
  /* 11df9c9e wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9c9f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11df9ca2 je 0x11df9cf4 */
  if (C.zf) goto L_11df9cf4;
  /* 11df9ca4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11df9caa je 0x11df9cb2 */
  if (C.zf) goto L_11df9cb2;
  /* 11df9cac fldcw word ptr [0x11e2a6a8] */
  C.fcw = r16((uint32_t)(0x11e2a6a8));
L_11df9cb2:;
  /* 11df9cb2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11df9cb4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9cb5 fnstsw ax */
  AX = fpu_status();
  /* 11df9cb7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11df9cb8 jp 0x11df9cd7 */
  if (C.pf) goto L_11df9cd7;
L_11df9cba:;
  /* 11df9cba cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9cc1 jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9cc7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11df9ccc lea ecx, [0x11e2dd90] */
  ECX = ((uint32_t)(0x11e2dd90));
  /* 11df9cd2 jmp 0x11dfb32b */
  f_11dfb32b(); return;
L_11df9cd7:;
  /* 11df9cd7 fld xword ptr [0x11e2a6aa] */
  fpu_push(rf80((uint32_t)(0x11e2a6aa)));
  /* 11df9cdd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11df9cdf:;
  /* 11df9cdf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11df9ce1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9ce2 fnstsw ax */
  AX = fpu_status();
  /* 11df9ce4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11df9ce5 jp 0x11df9cdf */
  if (C.pf) goto L_11df9cdf;
  /* 11df9ce7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11df9ce9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11df9ceb jmp 0x11df9cba */
  goto L_11df9cba;
L_11df9ced:;
  /* 11df9ced call 0x11dfb2ac */
  push32(0x11df9cf2u); f_11dfb2ac();
  /* 11df9cf2 jmp 0x11df9d0f */
  goto L_11df9d0f;
L_11df9cf4:;
  /* 11df9cf4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11df9cf9 jne 0x11df9ced */
  if (!C.zf) goto L_11df9ced;
  /* 11df9cfb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9d00 jne 0x11df9ced */
  if (!C.zf) goto L_11df9ced;
  /* 11df9d02 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11df9d04 fld xword ptr [0x11e2de00] */
  fpu_push(rf80((uint32_t)(0x11e2de00)));
  /* 11df9d0a mov eax, 1 */
  EAX = (0x1u);
L_11df9d0f:;
  /* 11df9d0f cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9d16 jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9d1c mov edx, 0x12 */
  EDX = (0x12u);
  /* 11df9d21 lea ecx, [0x11e2dd90] */
  ECX = ((uint32_t)(0x11e2dd90));
  /* 11df9d27 call 0x11dfb427 */
  push32(0x11df9d2cu); f_11dfb427();
  /* 11df9d2c pop edx */
  EDX = (pop32());
  /* 11df9d2d ret  */
  ESPCHK(0x11df9c9du, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x11df9d30 (20 bytes, 6 insns) */
void f_11df9d30(void) {
  FTRACE(0x11df9d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9d30 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9d33 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11df9d36 call 0x11dfb308 */
  push32(0x11df9d3bu); f_11dfb308();
  /* 11df9d3b call 0x11df9d4d */
  push32(0x11df9d40u); f_11df9d4d();
  /* 11df9d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9d43 ret  */
  ESPCHK(0x11df9d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d44 @ 0x11df9d44 (9 bytes, 2 insns) */
void f_11df9d44(void) {
  FTRACE(0x11df9d44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9d44 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11df9d48 call 0x11dfb2c5 */
  push32(0x11df9d4du); f_11dfb2c5();
}

/* FUN_10009d4d @ 0x11df9d4d (138 bytes, 40 insns) */
void f_11df9d4d(void) {
  FTRACE(0x11df9d4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9d4d push edx */
  push32((uint32_t)(EDX));
  /* 11df9d4e wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9d4f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11df9d52 je 0x11df9d8a */
  if (C.zf) goto L_11df9d8a;
  /* 11df9d54 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11df9d5a je 0x11df9d62 */
  if (C.zf) goto L_11df9d62;
  /* 11df9d5c fldcw word ptr [0x11e2a6a8] */
  C.fcw = r16((uint32_t)(0x11e2a6a8));
L_11df9d62:;
  /* 11df9d62 fld1  */
  fpu_push(1.0);
  /* 11df9d64 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11df9d66:;
  /* 11df9d66 cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9d6d jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9d73 mov edx, 0xf */
  EDX = (0xfu);
  /* 11df9d78 lea ecx, [0x11e2dda0] */
  ECX = ((uint32_t)(0x11e2dda0));
  /* 11df9d7e jmp 0x11dfb32b */
  f_11dfb32b(); return;
L_11df9d83:;
  /* 11df9d83 call 0x11dfb2ac */
  push32(0x11df9d88u); f_11dfb2ac();
  /* 11df9d88 jmp 0x11df9db0 */
  goto L_11df9db0;
L_11df9d8a:;
  /* 11df9d8a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11df9d8f jne 0x11df9d83 */
  if (!C.zf) goto L_11df9d83;
  /* 11df9d91 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9d96 jne 0x11df9d83 */
  if (!C.zf) goto L_11df9d83;
  /* 11df9d98 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11df9d9a fld xword ptr [0x11e2de0a] */
  fpu_push(rf80((uint32_t)(0x11e2de0a)));
  /* 11df9da0 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11df9da5 je 0x11df9d66 */
  if (C.zf) goto L_11df9d66;
  /* 11df9da7 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11df9da9 jmp 0x11df9d66 */
  goto L_11df9d66;
  /* 11df9dab mov eax, 1 */
  EAX = (0x1u);
L_11df9db0:;
  /* 11df9db0 cmp dword ptr [0x11e305f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9db7 jne 0x11dfb31e */
  if (!C.zf) { jmp_ind(0x11dfb31eu); return; }
  /* 11df9dbd mov edx, 0xf */
  EDX = (0xfu);
  /* 11df9dc2 lea ecx, [0x11e2dda0] */
  ECX = ((uint32_t)(0x11e2dda0));
  /* 11df9dc8 call 0x11dfb427 */
  push32(0x11df9dcdu); f_11dfb427();
  /* 11df9dcd pop edx */
  EDX = (pop32());
  /* 11df9dce ret  */
  ESPCHK(0x11df9d4du, _esp0);
  ESP += 4; return;
  /* 11df9dcf int3  */
  x86_unimpl("int3 @ 0x11df9dcf");
  /* 11df9dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11df9dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11df9dd5 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10009dd0 @ 0x11df9dd0 (33 bytes, 15 insns) */
void f_11df9dd0(void) {
  FTRACE(0x11df9dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11df9dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11df9dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11df9dd6 call 0x11df9e10 */
  push32(0x11df9ddbu); f_11df9e10();
  /* 11df9ddb call 0x11dfb4f0 */
  push32(0x11df9de0u); f_11dfb4f0();
  /* 11df9de0 mov dword ptr [0x11e305f8], eax */
  w32((uint32_t)(0x11e305f8), (EAX));
  /* 11df9de5 call 0x11dfb470 */
  push32(0x11df9deau); f_11dfb470();
  /* 11df9dea fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11df9dec pop edi */
  EDI = (pop32());
  /* 11df9ded pop esi */
  ESI = (pop32());
  /* 11df9dee pop ebx */
  EBX = (pop32());
  /* 11df9def pop ebp */
  EBP = (pop32());
  /* 11df9df0 ret  */
  ESPCHK(0x11df9dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x11df9e00 (5 bytes, 4 insns) */
void f_11df9e00(void) {
  FTRACE(0x11df9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9e01 mov ebp, esp */
  EBP = (ESP);
  /* 11df9e03 pop ebp */
  EBP = (pop32());
  /* 11df9e04 ret  */
  ESPCHK(0x11df9e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x11df9e10 (65 bytes, 10 insns) */
void f_11df9e10(void) {
  FTRACE(0x11df9e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9e11 mov ebp, esp */
  EBP = (ESP);
  /* 11df9e13 mov dword ptr [0x11e2de30], 0x11dfbbe0 */
  w32((uint32_t)(0x11e2de30), (0x11dfbbe0u));
  /* 11df9e1d mov dword ptr [0x11e2de34], 0x11dfb5f0 */
  w32((uint32_t)(0x11e2de34), (0x11dfb5f0u));
  /* 11df9e27 mov dword ptr [0x11e2de38], 0x11dfb700 */
  w32((uint32_t)(0x11e2de38), (0x11dfb700u));
  /* 11df9e31 mov dword ptr [0x11e2de3c], 0x11dfb540 */
  w32((uint32_t)(0x11e2de3c), (0x11dfb540u));
  /* 11df9e3b mov dword ptr [0x11e2de40], 0x11dfb6d0 */
  w32((uint32_t)(0x11e2de40), (0x11dfb6d0u));
  /* 11df9e45 mov dword ptr [0x11e2de44], 0x11dfbbe0 */
  w32((uint32_t)(0x11e2de44), (0x11dfbbe0u));
  /* 11df9e4f pop ebp */
  EBP = (pop32());
  /* 11df9e50 ret  */
  ESPCHK(0x11df9e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e60 @ 0x11df9e60 (28 bytes, 11 insns) */
void f_11df9e60(void) {
  FTRACE(0x11df9e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9e61 mov ebp, esp */
  EBP = (ESP);
  /* 11df9e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9e64 mov eax, dword ptr [0x11e305f4] */
  EAX = (r32((uint32_t)(0x11e305f4)));
  /* 11df9e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11df9e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9e6f mov dword ptr [0x11e305f4], ecx */
  w32((uint32_t)(0x11e305f4), (ECX));
  /* 11df9e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9e78 mov esp, ebp */
  ESP = (EBP);
  /* 11df9e7a pop ebp */
  EBP = (pop32());
  /* 11df9e7b ret  */
  ESPCHK(0x11df9e60u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11df9e7c (39 bytes, 16 insns) */
void f_11df9e7c(void) {
  FTRACE(0x11df9e7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9e7c push ebp */
  push32((uint32_t)(EBP));
  /* 11df9e7d mov ebp, esp */
  EBP = (ESP);
  /* 11df9e7f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9e82 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9e83 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11df9e86 wait  */
  /* wait (no observable integer/reg state) */
  /* 11df9e87 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11df9e8b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11df9e8e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11df9e92 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11df9e95 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11df9e98 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11df9e9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11df9e9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11df9ea1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11df9ea2 ret  */
  ESPCHK(0x11df9e7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009eb0 @ 0x11df9eb0 (161 bytes, 60 insns) */
void f_11df9eb0(void) {
  FTRACE(0x11df9eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11df9eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9eb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9eb5 push esi */
  push32((uint32_t)(ESI));
  /* 11df9eb6 push edi */
  push32((uint32_t)(EDI));
  /* 11df9eb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9ebb jne 0x11df9ec2 */
  if (!C.zf) goto L_11df9ec2;
  /* 11df9ebd jmp 0x11df9f4a */
  goto L_11df9f4a;
L_11df9ec2:;
  /* 11df9ec2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11df9ec4 call 0x11dfbd50 */
  push32(0x11df9ec9u); f_11dfbd50();
  /* 11df9ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9ecf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9ed2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11df9ed5:;
  /* 11df9ed5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9ed8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11df9edb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11df9ee1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9ee4 je 0x11df9f27 */
  if (C.zf) goto L_11df9f27;
  /* 11df9ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9ee9 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9eed je 0x11df9f27 */
  if (C.zf) goto L_11df9f27;
  /* 11df9eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9ef2 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11df9ef5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11df9efb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9efe je 0x11df9f27 */
  if (C.zf) goto L_11df9f27;
  /* 11df9f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9f03 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9f07 je 0x11df9f27 */
  if (C.zf) goto L_11df9f27;
  /* 11df9f09 push 0x11e2a404 */
  push32((uint32_t)(0x11e2a404u));
  /* 11df9f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11df9f10 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11df9f12 push 0x11e2a3f8 */
  push32((uint32_t)(0x11e2a3f8u));
  /* 11df9f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11df9f19 call 0x11dfaa10 */
  push32(0x11df9f1eu); f_11dfaa10();
  /* 11df9f1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9f21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11df9f24 jne 0x11df9f27 */
  if (!C.zf) goto L_11df9f27;
  /* 11df9f26 int3  */
  x86_unimpl("int3 @ 0x11df9f26");
L_11df9f27:;
  /* 11df9f27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11df9f29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11df9f2b jne 0x11df9ed5 */
  if (!C.zf) goto L_11df9ed5;
  /* 11df9f2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9f30 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11df9f33 push eax */
  push32((uint32_t)(EAX));
  /* 11df9f34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9f37 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9f38 call 0x11dfc8e0 */
  push32(0x11df9f3du); f_11dfc8e0();
  /* 11df9f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9f40 push 9 */
  push32((uint32_t)(0x9u));
  /* 11df9f42 call 0x11dfbdf0 */
  push32(0x11df9f47u); f_11dfbdf0();
  /* 11df9f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11df9f4a:;
  /* 11df9f4a pop edi */
  EDI = (pop32());
  /* 11df9f4b pop esi */
  ESI = (pop32());
  /* 11df9f4c pop ebx */
  EBX = (pop32());
  /* 11df9f4d mov esp, ebp */
  ESP = (EBP);
  /* 11df9f4f pop ebp */
  EBP = (pop32());
  /* 11df9f50 ret  */
  ESPCHK(0x11df9eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f60 @ 0x11df9f60 (19 bytes, 9 insns) */
void f_11df9f60(void) {
  FTRACE(0x11df9f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9f61 mov ebp, esp */
  EBP = (ESP);
  /* 11df9f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11df9f65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9f68 push eax */
  push32((uint32_t)(EAX));
  /* 11df9f69 call 0x11dfbe80 */
  push32(0x11df9f6eu); f_11dfbe80();
  /* 11df9f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9f71 pop ebp */
  EBP = (pop32());
  /* 11df9f72 ret  */
  ESPCHK(0x11df9f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f80 @ 0x11df9f80 (45 bytes, 17 insns) */
void f_11df9f80(void) {
  FTRACE(0x11df9f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9f81 mov ebp, esp */
  EBP = (ESP);
  /* 11df9f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11df9f84 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9f85 push esi */
  push32((uint32_t)(ESI));
  /* 11df9f86 push edi */
  push32((uint32_t)(EDI));
  /* 11df9f87 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df9f8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11df9f8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11df9f90 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11df9f97 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11df9f99 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11df9f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11df9fa2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11df9fa5 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11df9fa8 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11df9fab jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11df9fc0 (7 bytes, 4 insns) */
void f_11df9fc0(void) {
  FTRACE(0x11df9fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9fc0 pop eax */
  EAX = (pop32());
  /* 11df9fc1 pop ecx */
  ECX = (pop32());
  /* 11df9fc2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11df9fc5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009fd0 @ 0x11df9fd0 (7 bytes, 4 insns) */
void f_11df9fd0(void) {
  FTRACE(0x11df9fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9fd0 pop eax */
  EAX = (pop32());
  /* 11df9fd1 pop ecx */
  ECX = (pop32());
  /* 11df9fd2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11df9fd5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009fe0 @ 0x11df9fe0 (7 bytes, 4 insns) */
void f_11df9fe0(void) {
  FTRACE(0x11df9fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9fe0 pop eax */
  EAX = (pop32());
  /* 11df9fe1 pop ecx */
  ECX = (pop32());
  /* 11df9fe2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11df9fe5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009ff0 @ 0x11df9ff0 (86 bytes, 32 insns) */
void f_11df9ff0(void) {
  FTRACE(0x11df9ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11df9ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11df9ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11df9ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11df9ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 11df9ff7 push esi */
  push32((uint32_t)(ESI));
  /* 11df9ff8 push edi */
  push32((uint32_t)(EDI));
  /* 11df9ff9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11df9fff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfa002 mov dword ptr [ebp - 4], 0x11dfa01c */
  w32((uint32_t)(EBP + -0x4), (0x11dfa01cu));
  /* 11dfa009 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa00b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa00e push eax */
  push32((uint32_t)(EAX));
  /* 11dfa00f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa012 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa016 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa017 call 0x11e1121c */
  push32(0x11dfa01cu); f_11e1121c();
  /* 11dfa01c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa01f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfa022 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa025 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa028 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11dfa02b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfa031 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfa034 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11dfa036 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11dfa03d pop edi */
  EDI = (pop32());
  /* 11dfa03e pop esi */
  ESI = (pop32());
  /* 11dfa03f pop ebx */
  EBX = (pop32());
  /* 11dfa040 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa042 pop ebp */
  EBP = (pop32());
  /* 11dfa043 ret 8 */
  ESPCHK(0x11df9ff0u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11dfa050 (60 bytes, 31 insns) */
void f_11dfa050(void) {
  FTRACE(0x11dfa050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa050 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa051 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa056 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa057 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa058 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa059 cld  */
  C.df=0;
  /* 11dfa05a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfa05d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa05f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa061 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa063 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfa066 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa067 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfa06a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa06b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa06e push edx */
  push32((uint32_t)(EDX));
  /* 11dfa06f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa072 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa076 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa077 call 0x11dfddc0 */
  push32(0x11dfa07cu); f_11dfddc0();
  /* 11dfa07c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa07f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfa082 pop edi */
  EDI = (pop32());
  /* 11dfa083 pop esi */
  ESI = (pop32());
  /* 11dfa084 pop ebx */
  EBX = (pop32());
  /* 11dfa085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa088 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa08a pop ebp */
  EBP = (pop32());
  /* 11dfa08b ret  */
  ESPCHK(0x11dfa050u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11dfa090 (38 bytes, 16 insns) */
void f_11dfa090(void) {
  FTRACE(0x11dfa090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa090 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa091 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa096 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11dfa099 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa09a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa09d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11dfa0a0 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa0a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa0a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa0a6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfa0a9 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa0aa call 0x11dfe330 */
  push32(0x11dfa0afu); f_11dfe330();
  /* 11dfa0af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa0b2 pop ebp */
  EBP = (pop32());
  /* 11dfa0b3 ret 4 */
  ESPCHK(0x11dfa090u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a0c0 @ 0x11dfa0c0 (104 bytes, 36 insns) */
void f_11dfa0c0(void) {
  FTRACE(0x11dfa0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa0c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa0c7 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa0c8 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa0c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11dfa0d0 mov dword ptr [ebp - 0x10], 0x11dfa130 */
  w32((uint32_t)(EBP + -0x10), (0x11dfa130u));
  /* 11dfa0d7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa0da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfa0dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa0e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dfa0e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfa0e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa0e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfa0ec mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfa0f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11dfa0f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dfa0fb mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11dfa101 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfa104 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa105 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa108 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa109 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa10c push edx */
  push32((uint32_t)(EDX));
  /* 11dfa10d call 0x11dfea20 */
  push32(0x11dfa112u); f_11dfea20();
  /* 11dfa112 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11dfa115 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfa118 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11dfa11e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfa121 pop edi */
  EDI = (pop32());
  /* 11dfa122 pop esi */
  ESI = (pop32());
  /* 11dfa123 pop ebx */
  EBX = (pop32());
  /* 11dfa124 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa126 pop ebp */
  EBP = (pop32());
  /* 11dfa127 ret  */
  ESPCHK(0x11dfa0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x11dfa130 (57 bytes, 30 insns) */
void f_11dfa130(void) {
  FTRACE(0x11dfa130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa130 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa131 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa133 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa134 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa135 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa136 cld  */
  C.df=0;
  /* 11dfa137 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa13c push eax */
  push32((uint32_t)(EAX));
  /* 11dfa13d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa140 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dfa143 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa147 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfa14a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa14b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa14d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa150 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa151 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa154 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dfa157 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa158 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa15b push edx */
  push32((uint32_t)(EDX));
  /* 11dfa15c call 0x11dfddc0 */
  push32(0x11dfa161u); f_11dfddc0();
  /* 11dfa161 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa164 pop edi */
  EDI = (pop32());
  /* 11dfa165 pop esi */
  ESI = (pop32());
  /* 11dfa166 pop ebx */
  EBX = (pop32());
  /* 11dfa167 pop ebp */
  EBP = (pop32());
  /* 11dfa168 ret  */
  ESPCHK(0x11dfa130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a170 @ 0x11dfa170 (204 bytes, 58 insns) */
void f_11dfa170(void) {
  FTRACE(0x11dfa170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa170 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa171 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa173 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa176 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa177 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa178 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa179 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11dfa180 mov dword ptr [ebp - 0x24], 0x11dfa240 */
  w32((uint32_t)(EBP + -0x24), (0x11dfa240u));
  /* 11dfa187 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfa18a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dfa18d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa190 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11dfa193 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfa196 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11dfa199 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfa19c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11dfa19f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11dfa1a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11dfa1ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dfa1b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfa1bb mov dword ptr [ebp - 0x10], 0x11dfa20c */
  w32((uint32_t)(EBP + -0x10), (0x11dfa20cu));
  /* 11dfa1c2 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11dfa1c5 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11dfa1c8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfa1ce mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11dfa1d1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11dfa1d7 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11dfa1dd mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11dfa1e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa1e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11dfa1ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa1ed mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11dfa1f0 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11dfa1f3 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa1f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa1f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfa1f9 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa1fa call 0x11dfeb50 */
  push32(0x11dfa1ffu); f_11dfeb50();
  /* 11dfa1ff call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11dfa202u);
  /* 11dfa202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa205 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11dfa20c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa210 je 0x11dfa229 */
  if (C.zf) goto L_11dfa229;
  /* 11dfa212 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11dfa219 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11dfa21b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11dfa21e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11dfa220 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11dfa227 jmp 0x11dfa232 */
  goto L_11dfa232;
L_11dfa229:;
  /* 11dfa229 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11dfa22c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11dfa232:;
  /* 11dfa232 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11dfa235 pop edi */
  EDI = (pop32());
  /* 11dfa236 pop esi */
  ESI = (pop32());
  /* 11dfa237 pop ebx */
  EBX = (pop32());
  /* 11dfa238 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa23a pop ebp */
  EBP = (pop32());
  /* 11dfa23b ret  */
  ESPCHK(0x11dfa170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x11dfa240 (124 bytes, 53 insns) */
void f_11dfa240(void) {
  FTRACE(0x11dfa240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa240 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa241 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa243 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa244 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa245 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa246 cld  */
  C.df=0;
  /* 11dfa247 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa24a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfa24d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa250 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfa252 je 0x11dfa265 */
  if (C.zf) goto L_11dfa265;
  /* 11dfa254 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa257 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11dfa25e mov eax, 1 */
  EAX = (0x1u);
  /* 11dfa263 jmp 0x11dfa2bc */
  goto L_11dfa2bc;
L_11dfa265:;
  /* 11dfa265 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfa267 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa26a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfa26d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa26e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa271 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfa274 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa275 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa278 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dfa27b push edx */
  push32((uint32_t)(EDX));
  /* 11dfa27c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa27e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa281 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa282 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa285 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfa288 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa28c push eax */
  push32((uint32_t)(EAX));
  /* 11dfa28d call 0x11dfddc0 */
  push32(0x11dfa292u); f_11dfddc0();
  /* 11dfa292 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa295 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa298 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa29c jne 0x11dfa2ab */
  if (!C.zf) goto L_11dfa2ab;
  /* 11dfa29e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa2a1 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa2a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa2a5 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa2a6 call 0x11df9ff0 */
  push32(0x11dfa2abu); f_11df9ff0();
L_11dfa2ab:;
  /* 11dfa2ab mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa2ae mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11dfa2b1 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11dfa2b4 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11dfa2b7 mov eax, 1 */
  EAX = (0x1u);
L_11dfa2bc:;
  /* 11dfa2bc pop edi */
  EDI = (pop32());
  /* 11dfa2bd pop esi */
  ESI = (pop32());
  /* 11dfa2be pop ebx */
  EBX = (pop32());
  /* 11dfa2bf pop ebp */
  EBP = (pop32());
  /* 11dfa2c0 ret  */
  ESPCHK(0x11dfa240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d0 @ 0x11dfa2d0 (130 bytes, 57 insns) */
void f_11dfa2d0(void) {
  FTRACE(0x11dfa2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa2d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa2d8 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa2d9 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa2da mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfa2dd mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11dfa2e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfa2e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa2e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfa2e8 mov edi, esi */
  EDI = (ESI);
  /* 11dfa2ea mov ebx, esi */
  EBX = (ESI);
  /* 11dfa2ec jl 0x11dfa329 */
  if ((C.sf!=C.of)) goto L_11dfa329;
L_11dfa2ee:;
  /* 11dfa2ee cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa2f1 jne 0x11dfa2f8 */
  if (!C.zf) goto L_11dfa2f8;
  /* 11dfa2f3 call 0x11dfedd0 */
  push32(0x11dfa2f8u); f_11dfedd0();
L_11dfa2f8:;
  /* 11dfa2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa2fb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11dfa2fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa2ff lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11dfa302 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11dfa305 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa308 jge 0x11dfa30f */
  if ((C.sf==C.of)) goto L_11dfa30f;
  /* 11dfa30a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa30d jle 0x11dfa314 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfa314;
L_11dfa30f:;
  /* 11dfa30f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa312 jne 0x11dfa31f */
  if (!C.zf) goto L_11dfa31f;
L_11dfa314:;
  /* 11dfa314 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa317 mov edi, ebx */
  EDI = (EBX);
  /* 11dfa319 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dfa31a mov ebx, esi */
  EBX = (ESI);
  /* 11dfa31c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11dfa31f:;
  /* 11dfa31f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa322 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa324 jge 0x11dfa2ee */
  if ((C.sf==C.of)) goto L_11dfa2ee;
  /* 11dfa326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11dfa329:;
  /* 11dfa329 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfa32c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfa32f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11dfa330 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11dfa332 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11dfa334 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa337 ja 0x11dfa33d */
  if ((!C.cf&&!C.zf)) goto L_11dfa33d;
  /* 11dfa339 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa33b jbe 0x11dfa342 */
  if ((C.cf||C.zf)) goto L_11dfa342;
L_11dfa33d:;
  /* 11dfa33d call 0x11dfedd0 */
  push32(0x11dfa342u); f_11dfedd0();
L_11dfa342:;
  /* 11dfa342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa345 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11dfa348 pop edi */
  EDI = (pop32());
  /* 11dfa349 pop esi */
  ESI = (pop32());
  /* 11dfa34a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11dfa34d pop ebx */
  EBX = (pop32());
  /* 11dfa34e mov esp, ebp */
  ESP = (EBP);
  /* 11dfa350 pop ebp */
  EBP = (pop32());
  /* 11dfa351 ret  */
  ESPCHK(0x11dfa2d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11dfa360 (32 bytes, 18 insns) */
void f_11dfa360(void) {
  FTRACE(0x11dfa360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa360 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa361 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa363 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa364 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa365 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa366 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa367 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa369 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa36b push 0x11dfa378 */
  push32((uint32_t)(0x11dfa378u));
  /* 11dfa370 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11dfa373 call 0x11e1121c */
  push32(0x11dfa378u); f_11e1121c();
  /* 11dfa378 pop ebp */
  EBP = (pop32());
  /* 11dfa379 pop edi */
  EDI = (pop32());
  /* 11dfa37a pop esi */
  ESI = (pop32());
  /* 11dfa37b pop ebx */
  EBX = (pop32());
  /* 11dfa37c mov esp, ebp */
  ESP = (EBP);
  /* 11dfa37e pop ebp */
  EBP = (pop32());
  /* 11dfa37f ret  */
  ESPCHK(0x11dfa360u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11dfa3a2 (104 bytes, 33 insns) */
void f_11dfa3a2(void) {
  FTRACE(0x11dfa3a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa3a2 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa3a3 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa3a4 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa3a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11dfa3a9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa3aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11dfa3ac push 0x11dfa380 */
  push32((uint32_t)(0x11dfa380u));
  /* 11dfa3b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11dfa3b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11dfa3bf:;
  /* 11dfa3bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11dfa3c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfa3c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11dfa3c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa3cc je 0x11dfa3fc */
  if (C.zf) goto L_11dfa3fc;
  /* 11dfa3ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa3d2 je 0x11dfa3fc */
  if (C.zf) goto L_11dfa3fc;
  /* 11dfa3d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11dfa3d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11dfa3da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11dfa3de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11dfa3e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa3e6 jne 0x11dfa3fa */
  if (!C.zf) goto L_11dfa3fa;
  /* 11dfa3e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11dfa3ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11dfa3f1 call 0x11dfa436 */
  push32(0x11dfa3f6u); f_11dfa436();
  /* 11dfa3f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11dfa3fau);
L_11dfa3fa:;
  /* 11dfa3fa jmp 0x11dfa3bf */
  goto L_11dfa3bf;
L_11dfa3fc:;
  /* 11dfa3fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11dfa403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa406 pop edi */
  EDI = (pop32());
  /* 11dfa407 pop esi */
  ESI = (pop32());
  /* 11dfa408 pop ebx */
  EBX = (pop32());
  /* 11dfa409 ret  */
  ESPCHK(0x11dfa3a2u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11dfa40a (35 bytes, 10 insns) */
void f_11dfa40a(void) {
  FTRACE(0x11dfa40au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa40a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa40c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11dfa413 cmp dword ptr [ecx + 4], 0x11dfa380 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11dfa380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa41a jne 0x11dfa42c */
  if (!C.zf) goto L_11dfa42c;
  /* 11dfa41c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfa41f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfa422 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa425 jne 0x11dfa42c */
  if (!C.zf) goto L_11dfa42c;
  /* 11dfa427 mov eax, 1 */
  EAX = (0x1u);
L_11dfa42c:;
  /* 11dfa42c ret  */
  ESPCHK(0x11dfa40au, _esp0);
  ESP += 4; return;
}

