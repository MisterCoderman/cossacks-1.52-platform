#include "recomp.h"

/* FUN_100101f0 @ 0x106701f0 (289 bytes, 97 insns) */
void f_106701f0(void) {
  FTRACE(0x106701f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106701f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106701f1 mov ebp, esp */
  EBP = (ESP);
  /* 106701f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106701f6 push esi */
  push32((uint32_t)(ESI));
  /* 106701f7 mov eax, dword ptr [0x1068ec98] */
  EAX = (r32((uint32_t)(0x1068ec98)));
  /* 106701fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106701ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10670206 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1067020d jmp 0x10670218 */
  goto L_10670218;
L_1067020f:;
  /* 1067020f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670215 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10670218:;
  /* 10670218 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067021c jae 0x10670251 */
  if (!C.cf) goto L_10670251;
  /* 1067021e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670224 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10670227 push ecx */
  push32((uint32_t)(ECX));
  /* 10670228 call 0x106662d0 */
  push32(0x1067022du); f_106662d0();
  /* 1067022d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670230 mov esi, eax */
  ESI = (EAX);
  /* 10670232 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670235 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670238 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1067023c push ecx */
  push32((uint32_t)(ECX));
  /* 1067023d call 0x106662d0 */
  push32(0x10670242u); f_106662d0();
  /* 10670242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670245 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670248 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1067024c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1067024f jmp 0x1067020f */
  goto L_1067020f;
L_10670251:;
  /* 10670251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10670254 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670257 push eax */
  push32((uint32_t)(EAX));
  /* 10670258 call 0x10663480 */
  push32(0x1067025du); f_10663480();
  /* 1067025d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670260 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10670263 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670267 je 0x10670309 */
  if (C.zf) goto L_10670309;
  /* 1067026d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670270 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10670273 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1067027a jmp 0x10670285 */
  goto L_10670285;
L_1067027c:;
  /* 1067027c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067027f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670282 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10670285:;
  /* 10670285 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670289 jae 0x106702fa */
  if (!C.cf) goto L_106702fa;
  /* 1067028b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067028e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10670291 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670294 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670297 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1067029a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067029d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106702a0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 106702a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106702a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702a7 push edx */
  push32((uint32_t)(EDX));
  /* 106702a8 call 0x10666450 */
  push32(0x106702adu); f_10666450();
  /* 106702ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106702b0 push eax */
  push32((uint32_t)(EAX));
  /* 106702b1 call 0x106662d0 */
  push32(0x106702b6u); f_106662d0();
  /* 106702b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106702b9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702bc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106702be mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106702c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702c4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106702c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106702cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106702d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106702d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106702d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106702da push eax */
  push32((uint32_t)(EAX));
  /* 106702db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702de push ecx */
  push32((uint32_t)(ECX));
  /* 106702df call 0x10666450 */
  push32(0x106702e4u); f_10666450();
  /* 106702e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106702e7 push eax */
  push32((uint32_t)(EAX));
  /* 106702e8 call 0x106662d0 */
  push32(0x106702edu); f_106662d0();
  /* 106702ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106702f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106702f5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106702f8 jmp 0x1067027c */
  goto L_1067027c;
L_106702fa:;
  /* 106702fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106702fd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10670300 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670303 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670306 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10670309:;
  /* 10670309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067030c pop esi */
  ESI = (pop32());
  /* 1067030d mov esp, ebp */
  ESP = (EBP);
  /* 1067030f pop ebp */
  EBP = (pop32());
  /* 10670310 ret  */
  ESPCHK(0x106701f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x10670320 (291 bytes, 97 insns) */
void f_10670320(void) {
  FTRACE(0x10670320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670320 push ebp */
  push32((uint32_t)(EBP));
  /* 10670321 mov ebp, esp */
  EBP = (ESP);
  /* 10670323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670326 push esi */
  push32((uint32_t)(ESI));
  /* 10670327 mov eax, dword ptr [0x1068ec98] */
  EAX = (r32((uint32_t)(0x1068ec98)));
  /* 1067032c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1067032f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10670336 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1067033d jmp 0x10670348 */
  goto L_10670348;
L_1067033f:;
  /* 1067033f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670342 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670345 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10670348:;
  /* 10670348 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067034c jae 0x10670382 */
  if (!C.cf) goto L_10670382;
  /* 1067034e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670351 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670354 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10670358 push ecx */
  push32((uint32_t)(ECX));
  /* 10670359 call 0x106662d0 */
  push32(0x1067035eu); f_106662d0();
  /* 1067035e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670361 mov esi, eax */
  ESI = (EAX);
  /* 10670363 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670366 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670369 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1067036d push ecx */
  push32((uint32_t)(ECX));
  /* 1067036e call 0x106662d0 */
  push32(0x10670373u); f_106662d0();
  /* 10670373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670376 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670379 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1067037d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10670380 jmp 0x1067033f */
  goto L_1067033f;
L_10670382:;
  /* 10670382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10670385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670388 push eax */
  push32((uint32_t)(EAX));
  /* 10670389 call 0x10663480 */
  push32(0x1067038eu); f_10663480();
  /* 1067038e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670391 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10670394 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670398 je 0x1067043b */
  if (C.zf) goto L_1067043b;
  /* 1067039e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106703a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106703a4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106703ab jmp 0x106703b6 */
  goto L_106703b6;
L_106703ad:;
  /* 106703ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106703b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106703b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106703b6:;
  /* 106703b6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106703ba jae 0x1067042c */
  if (!C.cf) goto L_1067042c;
  /* 106703bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703bf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 106703c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106703c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106703cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106703ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106703d1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 106703d5 push ecx */
  push32((uint32_t)(ECX));
  /* 106703d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703d9 push edx */
  push32((uint32_t)(EDX));
  /* 106703da call 0x10666450 */
  push32(0x106703dfu); f_10666450();
  /* 106703df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106703e2 push eax */
  push32((uint32_t)(EAX));
  /* 106703e3 call 0x106662d0 */
  push32(0x106703e8u); f_106662d0();
  /* 106703e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106703eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106703f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106703f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703f6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 106703f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106703fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106703ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10670402 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670408 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1067040c push eax */
  push32((uint32_t)(EAX));
  /* 1067040d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670410 push ecx */
  push32((uint32_t)(ECX));
  /* 10670411 call 0x10666450 */
  push32(0x10670416u); f_10666450();
  /* 10670416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670419 push eax */
  push32((uint32_t)(EAX));
  /* 1067041a call 0x106662d0 */
  push32(0x1067041fu); f_106662d0();
  /* 1067041f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670422 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670425 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670427 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1067042a jmp 0x106703ad */
  goto L_106703ad;
L_1067042c:;
  /* 1067042c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067042f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10670432 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670438 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1067043b:;
  /* 1067043b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067043e pop esi */
  ESI = (pop32());
  /* 1067043f mov esp, ebp */
  ESP = (EBP);
  /* 10670441 pop ebp */
  EBP = (pop32());
  /* 10670442 ret  */
  ESPCHK(0x10670320u, _esp0);
  ESP += 4; return;
}

/* FUN_10010450 @ 0x10670450 (878 bytes, 273 insns) */
void f_10670450(void) {
  FTRACE(0x10670450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670450 push ebp */
  push32((uint32_t)(EBP));
  /* 10670451 mov ebp, esp */
  EBP = (ESP);
  /* 10670453 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670456 push esi */
  push32((uint32_t)(ESI));
  /* 10670457 mov eax, dword ptr [0x1068ec98] */
  EAX = (r32((uint32_t)(0x1068ec98)));
  /* 1067045c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1067045f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10670466 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1067046d jmp 0x10670478 */
  goto L_10670478;
L_1067046f:;
  /* 1067046f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670472 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670475 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10670478:;
  /* 10670478 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067047c jae 0x106704b1 */
  if (!C.cf) goto L_106704b1;
  /* 1067047e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670481 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670484 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10670487 push ecx */
  push32((uint32_t)(ECX));
  /* 10670488 call 0x106662d0 */
  push32(0x1067048du); f_106662d0();
  /* 1067048d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670490 mov esi, eax */
  ESI = (EAX);
  /* 10670492 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670495 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670498 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1067049c push ecx */
  push32((uint32_t)(ECX));
  /* 1067049d call 0x106662d0 */
  push32(0x106704a2u); f_106662d0();
  /* 106704a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106704a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106704a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106704ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106704af jmp 0x1067046f */
  goto L_1067046f;
L_106704b1:;
  /* 106704b1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106704b8 jmp 0x106704c3 */
  goto L_106704c3;
L_106704ba:;
  /* 106704ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106704bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106704c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106704c3:;
  /* 106704c3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106704c7 jae 0x106704fd */
  if (!C.cf) goto L_106704fd;
  /* 106704c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106704cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106704cf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106704d3 push eax */
  push32((uint32_t)(EAX));
  /* 106704d4 call 0x106662d0 */
  push32(0x106704d9u); f_106662d0();
  /* 106704d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106704dc mov esi, eax */
  ESI = (EAX);
  /* 106704de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106704e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106704e4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106704e8 push eax */
  push32((uint32_t)(EAX));
  /* 106704e9 call 0x106662d0 */
  push32(0x106704eeu); f_106662d0();
  /* 106704ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106704f1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106704f4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 106704f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106704fb jmp 0x106704ba */
  goto L_106704ba;
L_106704fd:;
  /* 106704fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670500 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10670506 push eax */
  push32((uint32_t)(EAX));
  /* 10670507 call 0x106662d0 */
  push32(0x1067050cu); f_106662d0();
  /* 1067050c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067050f mov esi, eax */
  ESI = (EAX);
  /* 10670511 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670514 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1067051a push edx */
  push32((uint32_t)(EDX));
  /* 1067051b call 0x106662d0 */
  push32(0x10670520u); f_106662d0();
  /* 10670520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670523 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670526 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1067052a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1067052d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670530 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10670536 push edx */
  push32((uint32_t)(EDX));
  /* 10670537 call 0x106662d0 */
  push32(0x1067053cu); f_106662d0();
  /* 1067053c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067053f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10670542 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10670546 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10670549 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067054c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10670552 push ecx */
  push32((uint32_t)(ECX));
  /* 10670553 call 0x106662d0 */
  push32(0x10670558u); f_106662d0();
  /* 10670558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067055b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067055e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10670562 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10670565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670568 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1067056e push edx */
  push32((uint32_t)(EDX));
  /* 1067056f call 0x106662d0 */
  push32(0x10670574u); f_106662d0();
  /* 10670574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670577 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067057a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1067057e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10670581 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10670584 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670589 push eax */
  push32((uint32_t)(EAX));
  /* 1067058a call 0x10663480 */
  push32(0x1067058fu); f_10663480();
  /* 1067058f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10670595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670599 je 0x106707b6 */
  if (C.zf) goto L_106707b6;
  /* 1067059f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106705a2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106705a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106705a8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106705ae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106705b1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 106705b6 mov eax, dword ptr [0x1068ec98] */
  EAX = (r32((uint32_t)(0x1068ec98)));
  /* 106705bb push eax */
  push32((uint32_t)(EAX));
  /* 106705bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106705bf push ecx */
  push32((uint32_t)(ECX));
  /* 106705c0 call 0x10669d80 */
  push32(0x106705c5u); f_10669d80();
  /* 106705c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106705c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 106705cf jmp 0x106705da */
  goto L_106705da;
L_106705d1:;
  /* 106705d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106705d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106705d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106705da:;
  /* 106705da cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106705de jae 0x1067064e */
  if (!C.cf) goto L_1067064e;
  /* 106705e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106705e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106705e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106705e9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 106705ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106705ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106705f2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 106705f5 push edx */
  push32((uint32_t)(EDX));
  /* 106705f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106705f9 push eax */
  push32((uint32_t)(EAX));
  /* 106705fa call 0x10666450 */
  push32(0x106705ffu); f_10666450();
  /* 106705ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670602 push eax */
  push32((uint32_t)(EAX));
  /* 10670603 call 0x106662d0 */
  push32(0x10670608u); f_106662d0();
  /* 10670608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067060b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067060e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10670612 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10670615 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670618 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1067061b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067061e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10670622 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670628 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1067062c push edx */
  push32((uint32_t)(EDX));
  /* 1067062d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670630 push eax */
  push32((uint32_t)(EAX));
  /* 10670631 call 0x10666450 */
  push32(0x10670636u); f_10666450();
  /* 10670636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670639 push eax */
  push32((uint32_t)(EAX));
  /* 1067063a call 0x106662d0 */
  push32(0x1067063fu); f_106662d0();
  /* 1067063f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670642 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670645 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10670649 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1067064c jmp 0x106705d1 */
  goto L_106705d1;
L_1067064e:;
  /* 1067064e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10670655 jmp 0x10670660 */
  goto L_10670660;
L_10670657:;
  /* 10670657 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067065a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067065d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10670660:;
  /* 10670660 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670664 jae 0x106706d6 */
  if (!C.cf) goto L_106706d6;
  /* 10670666 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670669 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1067066c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067066f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10670673 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10670676 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670679 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1067067d push eax */
  push32((uint32_t)(EAX));
  /* 1067067e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670681 push ecx */
  push32((uint32_t)(ECX));
  /* 10670682 call 0x10666450 */
  push32(0x10670687u); f_10666450();
  /* 10670687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067068a push eax */
  push32((uint32_t)(EAX));
  /* 1067068b call 0x106662d0 */
  push32(0x10670690u); f_106662d0();
  /* 10670690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670693 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670696 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1067069a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1067069d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106706a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106706a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106706a6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 106706aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106706ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106706b0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 106706b4 push eax */
  push32((uint32_t)(EAX));
  /* 106706b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106706b8 push ecx */
  push32((uint32_t)(ECX));
  /* 106706b9 call 0x10666450 */
  push32(0x106706beu); f_10666450();
  /* 106706be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106706c1 push eax */
  push32((uint32_t)(EAX));
  /* 106706c2 call 0x106662d0 */
  push32(0x106706c7u); f_106662d0();
  /* 106706c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106706ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106706cd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106706d1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106706d4 jmp 0x10670657 */
  goto L_10670657;
L_106706d6:;
  /* 106706d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106706d9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106706dc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 106706e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106706e5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 106706eb push ecx */
  push32((uint32_t)(ECX));
  /* 106706ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106706ef push edx */
  push32((uint32_t)(EDX));
  /* 106706f0 call 0x10666450 */
  push32(0x106706f5u); f_10666450();
  /* 106706f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106706f8 push eax */
  push32((uint32_t)(EAX));
  /* 106706f9 call 0x106662d0 */
  push32(0x106706feu); f_106662d0();
  /* 106706fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670701 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670704 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10670708 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1067070b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1067070e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670711 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10670717 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067071a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10670720 push eax */
  push32((uint32_t)(EAX));
  /* 10670721 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670724 push ecx */
  push32((uint32_t)(ECX));
  /* 10670725 call 0x10666450 */
  push32(0x1067072au); f_10666450();
  /* 1067072a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067072d push eax */
  push32((uint32_t)(EAX));
  /* 1067072e call 0x106662d0 */
  push32(0x10670733u); f_106662d0();
  /* 10670733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670736 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670739 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1067073d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10670740 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10670743 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670746 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1067074c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067074f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10670755 push ecx */
  push32((uint32_t)(ECX));
  /* 10670756 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10670759 push edx */
  push32((uint32_t)(EDX));
  /* 1067075a call 0x10666450 */
  push32(0x1067075fu); f_10666450();
  /* 1067075f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670762 push eax */
  push32((uint32_t)(EAX));
  /* 10670763 call 0x106662d0 */
  push32(0x10670768u); f_106662d0();
  /* 10670768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067076b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067076e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10670772 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10670775 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10670778 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067077b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10670781 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670784 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1067078a push eax */
  push32((uint32_t)(EAX));
  /* 1067078b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1067078e push ecx */
  push32((uint32_t)(ECX));
  /* 1067078f call 0x10666450 */
  push32(0x10670794u); f_10666450();
  /* 10670794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670797 push eax */
  push32((uint32_t)(EAX));
  /* 10670798 call 0x106662d0 */
  push32(0x1067079du); f_106662d0();
  /* 1067079d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106707a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106707a3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 106707a7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106707aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106707ad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106707b0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_106707b6:;
  /* 106707b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106707b9 pop esi */
  ESI = (pop32());
  /* 106707ba mov esp, ebp */
  ESP = (EBP);
  /* 106707bc pop ebp */
  EBP = (pop32());
  /* 106707bd ret  */
  ESPCHK(0x10670450u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x106707c0 (31 bytes, 15 insns) */
void f_106707c0(void) {
  FTRACE(0x106707c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106707c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106707c1 mov ebp, esp */
  EBP = (ESP);
  /* 106707c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106707c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106707c8 push eax */
  push32((uint32_t)(EAX));
  /* 106707c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106707cc push ecx */
  push32((uint32_t)(ECX));
  /* 106707cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106707d0 push edx */
  push32((uint32_t)(EDX));
  /* 106707d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106707d4 push eax */
  push32((uint32_t)(EAX));
  /* 106707d5 call 0x106707e0 */
  push32(0x106707dau); f_106707e0();
  /* 106707da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106707dd pop ebp */
  EBP = (pop32());
  /* 106707de ret  */
  ESPCHK(0x106707c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x106707e0 (393 bytes, 123 insns) */
void f_106707e0(void) {
  FTRACE(0x106707e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106707e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106707e1 mov ebp, esp */
  EBP = (ESP);
  /* 106707e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106707e6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106707ea jne 0x106707f6 */
  if (!C.zf) goto L_106707f6;
  /* 106707ec mov eax, dword ptr [0x1068ec98] */
  EAX = (r32((uint32_t)(0x1068ec98)));
  /* 106707f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106707f4 jmp 0x106707fc */
  goto L_106707fc;
L_106707f6:;
  /* 106707f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106707f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106707fc:;
  /* 106707fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106707ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10670802 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670805 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10670808 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 1067080d call dword ptr [0x106912c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c8))), 0x10670813u);
  /* 10670813 cmp dword ptr [0x1068f7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067081a je 0x1067083a */
  if (C.zf) goto L_1067083a;
  /* 1067081c push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 10670821 call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x10670827u);
  /* 10670827 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10670829 call 0x10666ea0 */
  push32(0x1067082eu); f_10666ea0();
  /* 1067082e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670831 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10670838 jmp 0x10670841 */
  goto L_10670841;
L_1067083a:;
  /* 1067083a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10670841:;
  /* 10670841 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670845 jbe 0x10670932 */
  if ((C.cf||C.zf)) goto L_10670932;
  /* 1067084b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067084e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10670850 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10670853 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10670857 je 0x10670861 */
  if (C.zf) goto L_10670861;
  /* 10670859 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1067085d je 0x10670866 */
  if (C.zf) goto L_10670866;
  /* 1067085f jmp 0x106708c0 */
  goto L_106708c0;
L_10670861:;
  /* 10670861 jmp 0x10670932 */
  goto L_10670932;
L_10670866:;
  /* 10670866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670869 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067086c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1067086f mov dword ptr [0x1068f7e8], 0 */
  w32((uint32_t)(0x1068f7e8), (0x0u));
  /* 10670879 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067087c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1067087f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670882 jne 0x10670897 */
  if (!C.zf) goto L_10670897;
  /* 10670884 mov dword ptr [0x1068f7e8], 1 */
  w32((uint32_t)(0x1068f7e8), (0x1u));
  /* 1067088e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670891 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670894 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10670897:;
  /* 10670897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067089a push ecx */
  push32((uint32_t)(ECX));
  /* 1067089b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1067089e push edx */
  push32((uint32_t)(EDX));
  /* 1067089f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 106708a2 push eax */
  push32((uint32_t)(EAX));
  /* 106708a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106708a6 push ecx */
  push32((uint32_t)(ECX));
  /* 106708a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106708aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106708ac push eax */
  push32((uint32_t)(EAX));
  /* 106708ad call 0x10670970 */
  push32(0x106708b2u); f_10670970();
  /* 106708b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106708b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106708b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106708bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106708be jmp 0x1067092d */
  goto L_1067092d;
L_106708c0:;
  /* 106708c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106708c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106708c5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106708c7 mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 106708cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106708cf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106708d3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106708d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106708db je 0x10670908 */
  if (C.zf) goto L_10670908;
  /* 106708dd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106708e1 jbe 0x10670908 */
  if ((C.cf||C.zf)) goto L_10670908;
  /* 106708e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106708e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106708e9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106708eb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106708ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106708f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106708f3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106708f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106708f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106708fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106708ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670902 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670905 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10670908:;
  /* 10670908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067090b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067090e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10670910 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10670912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670915 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670918 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1067091b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067091e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670921 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10670924 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670927 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067092a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1067092d:;
  /* 1067092d jmp 0x10670841 */
  goto L_10670841;
L_10670932:;
  /* 10670932 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670936 je 0x10670944 */
  if (C.zf) goto L_10670944;
  /* 10670938 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1067093a call 0x10666f40 */
  push32(0x1067093fu); f_10666f40();
  /* 1067093f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670942 jmp 0x1067094f */
  goto L_1067094f;
L_10670944:;
  /* 10670944 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 10670949 call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x1067094fu);
L_1067094f:;
  /* 1067094f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670953 jbe 0x10670963 */
  if ((C.cf||C.zf)) goto L_10670963;
  /* 10670955 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670958 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1067095b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1067095e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670961 jmp 0x10670965 */
  goto L_10670965;
L_10670963:;
  /* 10670963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10670965:;
  /* 10670965 mov esp, ebp */
  ESP = (EBP);
  /* 10670967 pop ebp */
  EBP = (pop32());
  /* 10670968 ret  */
  ESPCHK(0x106707e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x10670970 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10670970(void) {
  FTRACE(0x10670970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670970 push ebp */
  push32((uint32_t)(EBP));
  /* 10670971 mov ebp, esp */
  EBP = (ESP);
  /* 10670973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670976 push esi */
  push32((uint32_t)(ESI));
  /* 10670977 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1067097b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1067097e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670981 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670984 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10670987 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067098b ja 0x10670ed8 */
  if ((!C.cf&&!C.zf)) goto L_10670ed8;
  /* 10670991 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10670994 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10670996 mov dl, byte ptr [eax + 0x10670f39] */
  DL = (r8((uint32_t)(EAX + 0x10670f39)));
  /* 1067099c jmp dword ptr [edx*4 + 0x10670edd] */
  switch (EDX) {
    case 0: goto L_10670eb6;
    case 1: goto L_106709c5;
    case 2: goto L_10670a0b;
    case 3: goto L_10670b58;
    case 4: goto L_10670b80;
    case 5: goto L_10670c1f;
    case 6: goto L_10670c8b;
    case 7: goto L_10670cb4;
    case 8: goto L_10670cf5;
    case 9: goto L_10670dd7;
    case 10: goto L_10670e3e;
    case 11: goto L_10670e8b;
    case 12: goto L_106709a3;
    case 13: goto L_106709e8;
    case 14: goto L_10670a2e;
    case 15: goto L_10670b2e;
    case 16: goto L_10670bc5;
    case 17: goto L_10670bf2;
    case 18: goto L_10670c47;
    case 19: goto L_10670ccb;
    case 20: goto L_10670d79;
    case 21: goto L_10670e08;
    case 22: goto L_10670ed8;
    default: x86_unimpl("switch@0x1067099c out of table"); return;
  }
L_106709a3:;
  /* 106709a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106709a6 push ecx */
  push32((uint32_t)(ECX));
  /* 106709a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106709aa push edx */
  push32((uint32_t)(EDX));
  /* 106709ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106709ae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106709b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106709b4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 106709b7 push eax */
  push32((uint32_t)(EAX));
  /* 106709b8 call 0x10670f90 */
  push32(0x106709bdu); f_10670f90();
  /* 106709bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106709c0 jmp 0x10670ed8 */
  goto L_10670ed8;
L_106709c5:;
  /* 106709c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106709c8 push ecx */
  push32((uint32_t)(ECX));
  /* 106709c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106709cc push edx */
  push32((uint32_t)(EDX));
  /* 106709cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106709d0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106709d3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106709d6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 106709da push eax */
  push32((uint32_t)(EAX));
  /* 106709db call 0x10670f90 */
  push32(0x106709e0u); f_10670f90();
  /* 106709e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106709e3 jmp 0x10670ed8 */
  goto L_10670ed8;
L_106709e8:;
  /* 106709e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106709eb push ecx */
  push32((uint32_t)(ECX));
  /* 106709ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106709ef push edx */
  push32((uint32_t)(EDX));
  /* 106709f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106709f3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106709f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106709f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 106709fd push eax */
  push32((uint32_t)(EAX));
  /* 106709fe call 0x10670f90 */
  push32(0x10670a03u); f_10670f90();
  /* 10670a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670a06 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670a0b:;
  /* 10670a0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a0e push ecx */
  push32((uint32_t)(ECX));
  /* 10670a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a12 push edx */
  push32((uint32_t)(EDX));
  /* 10670a13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670a16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10670a19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670a1c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10670a20 push eax */
  push32((uint32_t)(EAX));
  /* 10670a21 call 0x10670f90 */
  push32(0x10670a26u); f_10670f90();
  /* 10670a26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670a29 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670a2e:;
  /* 10670a2e cmp dword ptr [0x1068f7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670a35 je 0x10670ab6 */
  if (C.zf) goto L_10670ab6;
  /* 10670a37 mov dword ptr [0x1068f7e8], 0 */
  w32((uint32_t)(0x1068f7e8), (0x0u));
  /* 10670a41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670a44 push ecx */
  push32((uint32_t)(ECX));
  /* 10670a45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a48 push edx */
  push32((uint32_t)(EDX));
  /* 10670a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a4c push eax */
  push32((uint32_t)(EAX));
  /* 10670a4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670a50 push ecx */
  push32((uint32_t)(ECX));
  /* 10670a51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670a54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10670a5a push eax */
  push32((uint32_t)(EAX));
  /* 10670a5b call 0x10671140 */
  push32(0x10670a60u); f_10671140();
  /* 10670a60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670a63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670a69 jne 0x10670a70 */
  if (!C.zf) goto L_10670a70;
  /* 10670a6b jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670a70:;
  /* 10670a70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10670a75 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10670a78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670a7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670a80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670a85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670a8a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670a8d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670a92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670a95 push ecx */
  push32((uint32_t)(ECX));
  /* 10670a96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670a99 push edx */
  push32((uint32_t)(EDX));
  /* 10670a9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670a9d push eax */
  push32((uint32_t)(EAX));
  /* 10670a9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10670aa2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670aa5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10670aab push eax */
  push32((uint32_t)(EAX));
  /* 10670aac call 0x10671140 */
  push32(0x10670ab1u); f_10671140();
  /* 10670ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670ab4 jmp 0x10670b29 */
  goto L_10670b29;
L_10670ab6:;
  /* 10670ab6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 10670aba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670abd push edx */
  push32((uint32_t)(EDX));
  /* 10670abe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670ac1 push eax */
  push32((uint32_t)(EAX));
  /* 10670ac2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 10670ac6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670ac9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10670acf push eax */
  push32((uint32_t)(EAX));
  /* 10670ad0 call 0x10671140 */
  push32(0x10670ad5u); f_10671140();
  /* 10670ad5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670ad8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670adb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670ade jne 0x10670ae5 */
  if (!C.zf) goto L_10670ae5;
  /* 10670ae0 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670ae5:;
  /* 10670ae5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670ae8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10670aea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10670aed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670af0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670af2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670af5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670af8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670afa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670afd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670aff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670b02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670b05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670b07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670b0a push ecx */
  push32((uint32_t)(ECX));
  /* 10670b0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670b0e push edx */
  push32((uint32_t)(EDX));
  /* 10670b0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670b12 push eax */
  push32((uint32_t)(EAX));
  /* 10670b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670b16 push ecx */
  push32((uint32_t)(ECX));
  /* 10670b17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670b1a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10670b20 push eax */
  push32((uint32_t)(EAX));
  /* 10670b21 call 0x10671140 */
  push32(0x10670b26u); f_10671140();
  /* 10670b26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10670b29:;
  /* 10670b29 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670b2e:;
  /* 10670b2e mov ecx, dword ptr [0x1068f7e8] */
  ECX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670b34 mov dword ptr [0x1068f7f8], ecx */
  w32((uint32_t)(0x1068f7f8), (ECX));
  /* 10670b3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670b3d push edx */
  push32((uint32_t)(EDX));
  /* 10670b3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670b41 push eax */
  push32((uint32_t)(EAX));
  /* 10670b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10670b44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670b47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10670b4a push edx */
  push32((uint32_t)(EDX));
  /* 10670b4b call 0x10670fe0 */
  push32(0x10670b50u); f_10670fe0();
  /* 10670b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670b53 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670b58:;
  /* 10670b58 mov eax, dword ptr [0x1068f7e8] */
  EAX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670b5d mov dword ptr [0x1068f7f8], eax */
  w32((uint32_t)(0x1068f7f8), (EAX));
  /* 10670b62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10670b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670b69 push edx */
  push32((uint32_t)(EDX));
  /* 10670b6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10670b6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670b6f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10670b72 push ecx */
  push32((uint32_t)(ECX));
  /* 10670b73 call 0x10670fe0 */
  push32(0x10670b78u); f_10670fe0();
  /* 10670b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670b7b jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670b80:;
  /* 10670b80 mov edx, dword ptr [0x1068f7e8] */
  EDX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670b86 mov dword ptr [0x1068f7f8], edx */
  w32((uint32_t)(0x1068f7f8), (EDX));
  /* 10670b8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670b8f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10670b92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670b93 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10670b98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670b9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10670b9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670ba1 jne 0x10670baa */
  if (!C.zf) goto L_10670baa;
  /* 10670ba3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10670baa:;
  /* 10670baa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670bad push edx */
  push32((uint32_t)(EDX));
  /* 10670bae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670bb1 push eax */
  push32((uint32_t)(EAX));
  /* 10670bb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10670bb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10670bb8 call 0x10670fe0 */
  push32(0x10670bbdu); f_10670fe0();
  /* 10670bbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670bc0 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670bc5:;
  /* 10670bc5 mov edx, dword ptr [0x1068f7e8] */
  EDX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670bcb mov dword ptr [0x1068f7f8], edx */
  w32((uint32_t)(0x1068f7f8), (EDX));
  /* 10670bd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670bd4 push eax */
  push32((uint32_t)(EAX));
  /* 10670bd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10670bd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10670bdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670bde mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10670be1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670be4 push eax */
  push32((uint32_t)(EAX));
  /* 10670be5 call 0x10670fe0 */
  push32(0x10670beau); f_10670fe0();
  /* 10670bea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670bed jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670bf2:;
  /* 10670bf2 mov ecx, dword ptr [0x1068f7e8] */
  ECX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670bf8 mov dword ptr [0x1068f7f8], ecx */
  w32((uint32_t)(0x1068f7f8), (ECX));
  /* 10670bfe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670c01 push edx */
  push32((uint32_t)(EDX));
  /* 10670c02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670c05 push eax */
  push32((uint32_t)(EAX));
  /* 10670c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10670c08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670c0b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10670c0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670c11 push edx */
  push32((uint32_t)(EDX));
  /* 10670c12 call 0x10670fe0 */
  push32(0x10670c17u); f_10670fe0();
  /* 10670c17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670c1a jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670c1f:;
  /* 10670c1f mov eax, dword ptr [0x1068f7e8] */
  EAX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670c24 mov dword ptr [0x1068f7f8], eax */
  w32((uint32_t)(0x1068f7f8), (EAX));
  /* 10670c29 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670c2c push ecx */
  push32((uint32_t)(ECX));
  /* 10670c2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670c30 push edx */
  push32((uint32_t)(EDX));
  /* 10670c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10670c33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670c36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10670c39 push ecx */
  push32((uint32_t)(ECX));
  /* 10670c3a call 0x10670fe0 */
  push32(0x10670c3fu); f_10670fe0();
  /* 10670c3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670c42 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670c47:;
  /* 10670c47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670c4a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670c4e jg 0x10670c6c */
  if ((!C.zf&&C.sf==C.of)) goto L_10670c6c;
  /* 10670c50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670c53 push eax */
  push32((uint32_t)(EAX));
  /* 10670c54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670c57 push ecx */
  push32((uint32_t)(ECX));
  /* 10670c58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670c5b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10670c61 push eax */
  push32((uint32_t)(EAX));
  /* 10670c62 call 0x10670f90 */
  push32(0x10670c67u); f_10670f90();
  /* 10670c67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670c6a jmp 0x10670c86 */
  goto L_10670c86;
L_10670c6c:;
  /* 10670c6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670c6f push ecx */
  push32((uint32_t)(ECX));
  /* 10670c70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670c73 push edx */
  push32((uint32_t)(EDX));
  /* 10670c74 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670c77 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10670c7d push ecx */
  push32((uint32_t)(ECX));
  /* 10670c7e call 0x10670f90 */
  push32(0x10670c83u); f_10670f90();
  /* 10670c83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10670c86:;
  /* 10670c86 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670c8b:;
  /* 10670c8b mov edx, dword ptr [0x1068f7e8] */
  EDX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670c91 mov dword ptr [0x1068f7f8], edx */
  w32((uint32_t)(0x1068f7f8), (EDX));
  /* 10670c97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670c9a push eax */
  push32((uint32_t)(EAX));
  /* 10670c9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10670c9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10670ca1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670ca4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10670ca6 push eax */
  push32((uint32_t)(EAX));
  /* 10670ca7 call 0x10670fe0 */
  push32(0x10670cacu); f_10670fe0();
  /* 10670cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670caf jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670cb4:;
  /* 10670cb4 mov ecx, dword ptr [0x1068f7e8] */
  ECX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670cba mov dword ptr [0x1068f7f8], ecx */
  w32((uint32_t)(0x1068f7f8), (ECX));
  /* 10670cc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670cc3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10670cc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10670cc9 jmp 0x10670d1d */
  goto L_10670d1d;
L_10670ccb:;
  /* 10670ccb mov ecx, dword ptr [0x1068f7e8] */
  ECX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670cd1 mov dword ptr [0x1068f7f8], ecx */
  w32((uint32_t)(0x1068f7f8), (ECX));
  /* 10670cd7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670cda push edx */
  push32((uint32_t)(EDX));
  /* 10670cdb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670cde push eax */
  push32((uint32_t)(EAX));
  /* 10670cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 10670ce1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670ce4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10670ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10670ce8 call 0x10670fe0 */
  push32(0x10670cedu); f_10670fe0();
  /* 10670ced add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670cf0 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670cf5:;
  /* 10670cf5 mov eax, dword ptr [0x1068f7e8] */
  EAX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670cfa mov dword ptr [0x1068f7f8], eax */
  w32((uint32_t)(0x1068f7f8), (EAX));
  /* 10670cff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d02 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670d06 jne 0x10670d11 */
  if (!C.zf) goto L_10670d11;
  /* 10670d08 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10670d0f jmp 0x10670d1d */
  goto L_10670d1d;
L_10670d11:;
  /* 10670d11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d14 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10670d17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670d1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10670d1d:;
  /* 10670d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d20 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10670d23 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670d26 jge 0x10670d31 */
  if ((C.sf==C.of)) goto L_10670d31;
  /* 10670d28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10670d2f jmp 0x10670d5e */
  goto L_10670d5e;
L_10670d31:;
  /* 10670d31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d34 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10670d37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670d38 mov ecx, 7 */
  ECX = (0x7u);
  /* 10670d3d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670d3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10670d42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d45 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10670d48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670d49 mov ecx, 7 */
  ECX = (0x7u);
  /* 10670d4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670d50 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670d53 jl 0x10670d5e */
  if ((C.sf!=C.of)) goto L_10670d5e;
  /* 10670d55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670d58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670d5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10670d5e:;
  /* 10670d5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670d61 push eax */
  push32((uint32_t)(EAX));
  /* 10670d62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670d65 push ecx */
  push32((uint32_t)(ECX));
  /* 10670d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10670d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670d6b push edx */
  push32((uint32_t)(EDX));
  /* 10670d6c call 0x10670fe0 */
  push32(0x10670d71u); f_10670fe0();
  /* 10670d71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670d74 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670d79:;
  /* 10670d79 cmp dword ptr [0x1068f7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670d80 je 0x10670db0 */
  if (C.zf) goto L_10670db0;
  /* 10670d82 mov dword ptr [0x1068f7e8], 0 */
  w32((uint32_t)(0x1068f7e8), (0x0u));
  /* 10670d8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670d8f push eax */
  push32((uint32_t)(EAX));
  /* 10670d90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10670d94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670d97 push edx */
  push32((uint32_t)(EDX));
  /* 10670d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670d9b push eax */
  push32((uint32_t)(EAX));
  /* 10670d9c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670d9f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10670da5 push edx */
  push32((uint32_t)(EDX));
  /* 10670da6 call 0x10671140 */
  push32(0x10670dabu); f_10671140();
  /* 10670dab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670dae jmp 0x10670dd2 */
  goto L_10670dd2;
L_10670db0:;
  /* 10670db0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670db3 push eax */
  push32((uint32_t)(EAX));
  /* 10670db4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670db7 push ecx */
  push32((uint32_t)(ECX));
  /* 10670db8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670dbb push edx */
  push32((uint32_t)(EDX));
  /* 10670dbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670dbf push eax */
  push32((uint32_t)(EAX));
  /* 10670dc0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670dc3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10670dc9 push edx */
  push32((uint32_t)(EDX));
  /* 10670dca call 0x10671140 */
  push32(0x10670dcfu); f_10671140();
  /* 10670dcf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10670dd2:;
  /* 10670dd2 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670dd7:;
  /* 10670dd7 mov dword ptr [0x1068f7e8], 0 */
  w32((uint32_t)(0x1068f7e8), (0x0u));
  /* 10670de1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670de4 push eax */
  push32((uint32_t)(EAX));
  /* 10670de5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10670de9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670dec push edx */
  push32((uint32_t)(EDX));
  /* 10670ded mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670df0 push eax */
  push32((uint32_t)(EAX));
  /* 10670df1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10670df4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10670dfa push edx */
  push32((uint32_t)(EDX));
  /* 10670dfb call 0x10671140 */
  push32(0x10670e00u); f_10671140();
  /* 10670e00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670e03 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670e08:;
  /* 10670e08 mov eax, dword ptr [0x1068f7e8] */
  EAX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670e0d mov dword ptr [0x1068f7f8], eax */
  w32((uint32_t)(0x1068f7f8), (EAX));
  /* 10670e12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670e15 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10670e18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670e19 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10670e1e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670e20 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10670e23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670e26 push edx */
  push32((uint32_t)(EDX));
  /* 10670e27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670e2a push eax */
  push32((uint32_t)(EAX));
  /* 10670e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10670e2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10670e31 call 0x10670fe0 */
  push32(0x10670e36u); f_10670fe0();
  /* 10670e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670e39 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670e3e:;
  /* 10670e3e mov edx, dword ptr [0x1068f7e8] */
  EDX = (r32((uint32_t)(0x1068f7e8)));
  /* 10670e44 mov dword ptr [0x1068f7f8], edx */
  w32((uint32_t)(0x1068f7f8), (EDX));
  /* 10670e4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670e4d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10670e50 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670e51 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10670e56 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670e58 mov ecx, eax */
  ECX = (EAX);
  /* 10670e5a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670e5d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10670e60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670e63 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10670e66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10670e67 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10670e6c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10670e6e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670e70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10670e73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670e76 push eax */
  push32((uint32_t)(EAX));
  /* 10670e77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670e7a push ecx */
  push32((uint32_t)(ECX));
  /* 10670e7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10670e7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10670e80 push edx */
  push32((uint32_t)(EDX));
  /* 10670e81 call 0x10670fe0 */
  push32(0x10670e86u); f_10670fe0();
  /* 10670e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670e89 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670e8b:;
  /* 10670e8b call 0x10671fa0 */
  push32(0x10670e90u); f_10671fa0();
  /* 10670e90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670e93 push eax */
  push32((uint32_t)(EAX));
  /* 10670e94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10670e98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670e9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10670e9d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670ea1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10670ea4 mov ecx, dword ptr [eax*4 + 0x1068ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068ee1c)));
  /* 10670eab push ecx */
  push32((uint32_t)(ECX));
  /* 10670eac call 0x10670f90 */
  push32(0x10670eb1u); f_10670f90();
  /* 10670eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10670eb4 jmp 0x10670ed8 */
  goto L_10670ed8;
L_10670eb6:;
  /* 10670eb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670eb9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10670ebb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10670ebe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670ec1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670ec3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670ec9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670ecb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670ece mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670ed3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670ed6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10670ed8:;
  /* 10670ed8 pop esi */
  ESI = (pop32());
  /* 10670ed9 mov esp, ebp */
  ESP = (EBP);
  /* 10670edb pop ebp */
  EBP = (pop32());
  /* 10670edc ret  */
  ESPCHK(0x10670970u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10670f90 (72 bytes, 30 insns) */
void f_10670f90(void) {
  FTRACE(0x10670f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10670f91 mov ebp, esp */
  EBP = (ESP);
L_10670f93:;
  /* 10670f93 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670f96 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670f99 je 0x10670fd6 */
  if (C.zf) goto L_10670fd6;
  /* 10670f9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670f9e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10670fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10670fa3 je 0x10670fd6 */
  if (C.zf) goto L_10670fd6;
  /* 10670fa5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670fa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10670faa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670fad mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10670faf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10670fb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670fb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10670fb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670fb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10670fbc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10670fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670fc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10670fc4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10670fc7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670fca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10670fcc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10670fcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670fd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10670fd4 jmp 0x10670f93 */
  goto L_10670f93;
L_10670fd6:;
  /* 10670fd6 pop ebp */
  EBP = (pop32());
  /* 10670fd7 ret  */
  ESPCHK(0x10670f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x10670fe0 (173 bytes, 64 insns) */
void f_10670fe0(void) {
  FTRACE(0x10670fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10670fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10670fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10670fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10670fe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10670feb cmp dword ptr [0x1068f7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10670ff2 je 0x1067100a */
  if (C.zf) goto L_1067100a;
  /* 10670ff4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10670ff7 push eax */
  push32((uint32_t)(EAX));
  /* 10670ff8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10670ffb push ecx */
  push32((uint32_t)(ECX));
  /* 10670ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10670fff push edx */
  push32((uint32_t)(EDX));
  /* 10671000 call 0x10671090 */
  push32(0x10671005u); f_10671090();
  /* 10671005 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671008 jmp 0x10671089 */
  goto L_10671089;
L_1067100a:;
  /* 1067100a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067100d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671010 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671012 jae 0x10671080 */
  if (!C.cf) goto L_10671080;
  /* 10671014 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671017 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067101a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1067101d jmp 0x10671028 */
  goto L_10671028;
L_1067101f:;
  /* 1067101f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671022 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671025 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10671028:;
  /* 10671028 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1067102b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067102e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10671030 je 0x10671064 */
  if (C.zf) goto L_10671064;
  /* 10671032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671035 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10671036 mov ecx, 0xa */
  ECX = (0xau);
  /* 1067103b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1067103d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671040 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671043 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10671045 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671048 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1067104b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067104e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1067104f mov ecx, 0xa */
  ECX = (0xau);
  /* 10671054 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10671056 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10671059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067105c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067105f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10671062 jmp 0x1067101f */
  goto L_1067101f;
L_10671064:;
  /* 10671064 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671067 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10671069 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067106c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067106f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10671071 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671074 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10671076 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671079 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067107c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1067107e jmp 0x10671089 */
  goto L_10671089;
L_10671080:;
  /* 10671080 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671083 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10671089:;
  /* 10671089 mov esp, ebp */
  ESP = (EBP);
  /* 1067108b pop ebp */
  EBP = (pop32());
  /* 1067108c ret  */
  ESPCHK(0x10670fe0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10671090 (172 bytes, 65 insns) */
void f_10671090(void) {
  FTRACE(0x10671090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671090 push ebp */
  push32((uint32_t)(EBP));
  /* 10671091 mov ebp, esp */
  EBP = (ESP);
  /* 10671093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671099 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1067109b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1067109e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106710a1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106710a4 jbe 0x106710eb */
  if ((C.cf||C.zf)) goto L_106710eb;
L_106710a6:;
  /* 106710a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106710a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106710aa mov ecx, 0xa */
  ECX = (0xau);
  /* 106710af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106710b1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106710b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106710b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106710b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106710bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106710bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106710c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106710c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106710c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106710ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106710cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106710cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106710d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 106710d3 mov ecx, 0xa */
  ECX = (0xau);
  /* 106710d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106710da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106710dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106710e1 jle 0x106710eb */
  if ((C.zf||C.sf!=C.of)) goto L_106710eb;
  /* 106710e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106710e6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106710e9 ja 0x106710a6 */
  if ((!C.cf&&!C.zf)) goto L_106710a6;
L_106710eb:;
  /* 106710eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106710ee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106710f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106710f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106710f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106710f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106710fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106710fe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671101 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10671104:;
  /* 10671104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671107 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671109 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1067110c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067110f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671112 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671114 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10671116 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671119 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067111c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1067111f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671122 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10671125 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10671127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067112a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067112d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10671130 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671133 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671136 jb 0x10671104 */
  if (C.cf) goto L_10671104;
  /* 10671138 mov esp, ebp */
  ESP = (EBP);
  /* 1067113a pop ebp */
  EBP = (pop32());
  /* 1067113b ret  */
  ESPCHK(0x10671090u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x10671140 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10671140(void) {
  FTRACE(0x10671140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671140 push ebp */
  push32((uint32_t)(EBP));
  /* 10671141 mov ebp, esp */
  EBP = (ESP);
  /* 10671143 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10671146:;
  /* 10671146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671149 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1067114c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067114e je 0x106715bc */
  if (C.zf) goto L_106715bc;
  /* 10671154 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671157 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067115a je 0x106715bc */
  if (C.zf) goto L_106715bc;
  /* 10671160 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10671164 mov dword ptr [0x1068f7f8], 0 */
  w32((uint32_t)(0x1068f7f8), (0x0u));
  /* 1067116e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10671175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671178 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1067117b jmp 0x10671186 */
  goto L_10671186;
L_1067117d:;
  /* 1067117d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671180 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671183 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10671186:;
  /* 10671186 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671189 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1067118c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067118f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10671192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671195 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671198 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1067119b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067119d jne 0x106711a1 */
  if (!C.zf) goto L_106711a1;
  /* 1067119f jmp 0x1067117d */
  goto L_1067117d;
L_106711a1:;
  /* 106711a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106711a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106711a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106711aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106711ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106711b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106711b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106711b6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106711b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106711bc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106711c0 ja 0x10671510 */
  if ((!C.cf&&!C.zf)) goto L_10671510;
  /* 106711c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106711c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106711cb mov al, byte ptr [ecx + 0x106715ec] */
  AL = (r8((uint32_t)(ECX + 0x106715ec)));
  /* 106711d1 jmp dword ptr [eax*4 + 0x106715c0] */
  switch (EAX) {
    case 0: goto L_1067142f;
    case 1: goto L_10671313;
    case 2: goto L_1067129e;
    case 3: goto L_106711d8;
    case 4: goto L_10671216;
    case 5: goto L_10671277;
    case 6: goto L_106712c5;
    case 7: goto L_106712ec;
    case 8: goto L_1067135a;
    case 9: goto L_10671254;
    case 10: goto L_10671510;
    default: x86_unimpl("switch@0x106711d1 out of table"); return;
  }
L_106711d8:;
  /* 106711d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106711db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106711de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106711e1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106711e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106711e7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106711eb ja 0x10671211 */
  if ((!C.cf&&!C.zf)) goto L_10671211;
  /* 106711ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106711f0 jmp dword ptr [ecx*4 + 0x1067163f] */
  switch (ECX) {
    case 0: goto L_106711f7;
    case 1: goto L_10671201;
    case 2: goto L_10671207;
    case 3: goto L_1067120d;
    case 4: goto L_10671235;
    case 5: goto L_1067123f;
    case 6: goto L_10671245;
    case 7: goto L_1067124b;
    default: x86_unimpl("switch@0x106711f0 out of table"); return;
  }
L_106711f7:;
  /* 106711f7 mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_10671201:;
  /* 10671201 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10671205 jmp 0x10671211 */
  goto L_10671211;
L_10671207:;
  /* 10671207 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1067120b jmp 0x10671211 */
  goto L_10671211;
L_1067120d:;
  /* 1067120d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10671211:;
  /* 10671211 jmp 0x10671510 */
  goto L_10671510;
L_10671216:;
  /* 10671216 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671219 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1067121c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1067121f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671222 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10671225 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671229 ja 0x1067124f */
  if ((!C.cf&&!C.zf)) goto L_1067124f;
  /* 1067122b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1067122e jmp dword ptr [ecx*4 + 0x1067164f] */
  switch (ECX) {
    case 0: goto L_10671235;
    case 1: goto L_1067123f;
    case 2: goto L_10671245;
    case 3: goto L_1067124b;
    default: x86_unimpl("switch@0x1067122e out of table"); return;
  }
L_10671235:;
  /* 10671235 mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_1067123f:;
  /* 1067123f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10671243 jmp 0x1067124f */
  goto L_1067124f;
L_10671245:;
  /* 10671245 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10671249 jmp 0x1067124f */
  goto L_1067124f;
L_1067124b:;
  /* 1067124b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1067124f:;
  /* 1067124f jmp 0x10671510 */
  goto L_10671510;
L_10671254:;
  /* 10671254 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671257 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1067125a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067125e je 0x10671268 */
  if (C.zf) goto L_10671268;
  /* 10671260 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671264 je 0x1067126e */
  if (C.zf) goto L_1067126e;
  /* 10671266 jmp 0x10671272 */
  goto L_10671272;
L_10671268:;
  /* 10671268 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1067126c jmp 0x10671272 */
  goto L_10671272;
L_1067126e:;
  /* 1067126e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10671272:;
  /* 10671272 jmp 0x10671510 */
  goto L_10671510;
L_10671277:;
  /* 10671277 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067127a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1067127d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671281 je 0x1067128b */
  if (C.zf) goto L_1067128b;
  /* 10671283 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671287 je 0x10671295 */
  if (C.zf) goto L_10671295;
  /* 10671289 jmp 0x10671299 */
  goto L_10671299;
L_1067128b:;
  /* 1067128b mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_10671295:;
  /* 10671295 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10671299:;
  /* 10671299 jmp 0x10671510 */
  goto L_10671510;
L_1067129e:;
  /* 1067129e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106712a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106712a4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712a8 je 0x106712b2 */
  if (C.zf) goto L_106712b2;
  /* 106712aa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712ae je 0x106712bc */
  if (C.zf) goto L_106712bc;
  /* 106712b0 jmp 0x106712c0 */
  goto L_106712c0;
L_106712b2:;
  /* 106712b2 mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_106712bc:;
  /* 106712bc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_106712c0:;
  /* 106712c0 jmp 0x10671510 */
  goto L_10671510;
L_106712c5:;
  /* 106712c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106712c8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 106712cb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712cf je 0x106712d9 */
  if (C.zf) goto L_106712d9;
  /* 106712d1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712d5 je 0x106712e3 */
  if (C.zf) goto L_106712e3;
  /* 106712d7 jmp 0x106712e7 */
  goto L_106712e7;
L_106712d9:;
  /* 106712d9 mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_106712e3:;
  /* 106712e3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_106712e7:;
  /* 106712e7 jmp 0x10671510 */
  goto L_10671510;
L_106712ec:;
  /* 106712ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106712ef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 106712f2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712f6 je 0x10671300 */
  if (C.zf) goto L_10671300;
  /* 106712f8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106712fc je 0x1067130a */
  if (C.zf) goto L_1067130a;
  /* 106712fe jmp 0x1067130e */
  goto L_1067130e;
L_10671300:;
  /* 10671300 mov dword ptr [0x1068f7f8], 1 */
  w32((uint32_t)(0x1068f7f8), (0x1u));
L_1067130a:;
  /* 1067130a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1067130e:;
  /* 1067130e jmp 0x10671510 */
  goto L_10671510;
L_10671313:;
  /* 10671313 push 0x1068b8bc */
  push32((uint32_t)(0x1068b8bcu));
  /* 10671318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067131b push ecx */
  push32((uint32_t)(ECX));
  /* 1067131c call 0x10671b70 */
  push32(0x10671321u); f_10671b70();
  /* 10671321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671326 jne 0x10671333 */
  if (!C.zf) goto L_10671333;
  /* 10671328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067132b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067132e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10671331 jmp 0x10671351 */
  goto L_10671351;
L_10671333:;
  /* 10671333 push 0x1068b8b8 */
  push32((uint32_t)(0x1068b8b8u));
  /* 10671338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067133b push eax */
  push32((uint32_t)(EAX));
  /* 1067133c call 0x10671b70 */
  push32(0x10671341u); f_10671b70();
  /* 10671341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671346 jne 0x10671351 */
  if (!C.zf) goto L_10671351;
  /* 10671348 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067134b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067134e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10671351:;
  /* 10671351 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10671355 jmp 0x10671510 */
  goto L_10671510;
L_1067135a:;
  /* 1067135a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1067135d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671361 jg 0x10671371 */
  if ((!C.zf&&C.sf==C.of)) goto L_10671371;
  /* 10671363 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10671366 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1067136c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1067136f jmp 0x1067137d */
  goto L_1067137d;
L_10671371:;
  /* 10671371 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10671374 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1067137a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1067137d:;
  /* 1067137d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671381 jle 0x10671424 */
  if ((C.zf||C.sf!=C.of)) goto L_10671424;
  /* 10671387 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067138a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067138d jbe 0x10671424 */
  if ((C.cf||C.zf)) goto L_10671424;
  /* 10671393 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10671396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671398 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1067139a mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 106713a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106713a2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106713a6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 106713ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106713ae je 0x106713e7 */
  if (C.zf) goto L_106713e7;
  /* 106713b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106713b3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106713b6 jbe 0x106713e7 */
  if ((C.cf||C.zf)) goto L_106713e7;
  /* 106713b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106713bd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106713c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106713c2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106713c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106713c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106713cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106713d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106713d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106713d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106713da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106713dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106713df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106713e2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106713e5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106713e7:;
  /* 106713e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106713ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106713ef mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106713f1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106713f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106713f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106713fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106713fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10671400 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10671403 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671406 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10671409 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067140c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1067140e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671411 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671414 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10671416 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671419 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067141c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1067141f jmp 0x1067137d */
  goto L_1067137d;
L_10671424:;
  /* 10671424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671427 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1067142a jmp 0x10671146 */
  goto L_10671146;
L_1067142f:;
  /* 1067142f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671432 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10671435 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10671437 je 0x10671502 */
  if (C.zf) goto L_10671502;
  /* 1067143d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671440 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671443 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10671446:;
  /* 10671446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671449 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1067144c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067144e je 0x10671500 */
  if (C.zf) goto L_10671500;
  /* 10671454 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671457 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067145a je 0x10671500 */
  if (C.zf) goto L_10671500;
  /* 10671460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671463 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10671466 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671469 jne 0x10671479 */
  if (!C.zf) goto L_10671479;
  /* 1067146b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067146e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671471 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10671474 jmp 0x10671500 */
  goto L_10671500;
L_10671479:;
  /* 10671479 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067147c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1067147e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10671480 mov edx, dword ptr [0x1068dc98] */
  EDX = (r32((uint32_t)(0x1068dc98)));
  /* 10671486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671488 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1067148c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10671491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671493 je 0x106714cc */
  if (C.zf) goto L_106714cc;
  /* 10671495 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671498 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067149b jbe 0x106714cc */
  if ((C.cf||C.zf)) goto L_106714cc;
  /* 1067149d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106714a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106714a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106714a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106714a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106714ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106714b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106714b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106714b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106714bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106714bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106714c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106714c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106714c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106714ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106714cc:;
  /* 106714cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106714d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106714d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106714d6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106714d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106714dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106714e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106714e3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106714e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106714e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106714eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106714ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106714f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106714f3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106714f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106714f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106714fb jmp 0x10671446 */
  goto L_10671446;
L_10671500:;
  /* 10671500 jmp 0x1067150b */
  goto L_1067150b;
L_10671502:;
  /* 10671502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671505 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671508 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1067150b:;
  /* 1067150b jmp 0x10671146 */
  goto L_10671146;
L_10671510:;
  /* 10671510 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10671514 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10671516 je 0x1067153c */
  if (C.zf) goto L_1067153c;
  /* 10671518 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1067151b push edx */
  push32((uint32_t)(EDX));
  /* 1067151c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067151f push eax */
  push32((uint32_t)(EAX));
  /* 10671520 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671523 push ecx */
  push32((uint32_t)(ECX));
  /* 10671524 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671527 push edx */
  push32((uint32_t)(EDX));
  /* 10671528 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1067152b push eax */
  push32((uint32_t)(EAX));
  /* 1067152c call 0x10670970 */
  push32(0x10671531u); f_10670970();
  /* 10671531 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671537 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1067153a jmp 0x106715b7 */
  goto L_106715b7;
L_1067153c:;
  /* 1067153c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067153f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671541 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671543 mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 10671549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067154b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1067154f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10671555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10671557 je 0x10671588 */
  if (C.zf) goto L_10671588;
  /* 10671559 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067155c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1067155e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671561 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671563 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10671565 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671568 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1067156a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067156d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671570 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10671572 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671578 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1067157b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067157e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10671580 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671583 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671586 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10671588:;
  /* 10671588 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067158b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1067158d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671590 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10671592 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10671594 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671597 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10671599 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067159c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067159f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106715a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106715a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106715a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106715aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106715ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106715af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106715b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106715b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106715b7:;
  /* 106715b7 jmp 0x10671146 */
  goto L_10671146;
L_106715bc:;
  /* 106715bc mov esp, ebp */
  ESP = (EBP);
  /* 106715be pop ebp */
  EBP = (pop32());
  /* 106715bf ret  */
  ESPCHK(0x10671140u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x10671660 (650 bytes, 178 insns) */
void f_10671660(void) {
  FTRACE(0x10671660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671660 push ebp */
  push32((uint32_t)(EBP));
  /* 10671661 mov ebp, esp */
  EBP = (ESP);
  /* 10671663 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671669 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067166d jne 0x106717c9 */
  if (!C.zf) goto L_106717c9;
  /* 10671673 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671676 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1067167c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10671682 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10671685 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1067168c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10671696 push 0 */
  push32((uint32_t)(0x0u));
  /* 10671698 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1067169e push edx */
  push32((uint32_t)(EDX));
  /* 1067169f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106716a2 push eax */
  push32((uint32_t)(EAX));
  /* 106716a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106716a6 push ecx */
  push32((uint32_t)(ECX));
  /* 106716a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106716aa push edx */
  push32((uint32_t)(EDX));
  /* 106716ab call 0x10672a80 */
  push32(0x106716b0u); f_10672a80();
  /* 106716b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106716b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106716b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106716ba jne 0x1067174f */
  if (!C.zf) goto L_1067174f;
  /* 106716c0 call dword ptr [0x106912f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912f4))), 0x106716c6u);
  /* 106716c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106716c9 je 0x106716d0 */
  if (C.zf) goto L_106716d0;
  /* 106716cb jmp 0x106717ad */
  goto L_106717ad;
L_106716d0:;
  /* 106716d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106716d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106716d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106716d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106716d9 push eax */
  push32((uint32_t)(EAX));
  /* 106716da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106716dd push ecx */
  push32((uint32_t)(ECX));
  /* 106716de call 0x10672a80 */
  push32(0x106716e3u); f_10672a80();
  /* 106716e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106716e6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 106716ec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106716f3 jne 0x106716fa */
  if (!C.zf) goto L_106716fa;
  /* 106716f5 jmp 0x106717ad */
  goto L_106717ad;
L_106716fa:;
  /* 106716fa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 106716fc push 0x1068b8c4 */
  push32((uint32_t)(0x1068b8c4u));
  /* 10671701 push 2 */
  push32((uint32_t)(0x2u));
  /* 10671703 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10671709 push edx */
  push32((uint32_t)(EDX));
  /* 1067170a call 0x106634a0 */
  push32(0x1067170fu); f_106634a0();
  /* 1067170f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671712 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10671715 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671719 jne 0x10671720 */
  if (!C.zf) goto L_10671720;
  /* 1067171b jmp 0x106717ad */
  goto L_106717ad;
L_10671720:;
  /* 10671720 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10671727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10671729 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1067172f push eax */
  push32((uint32_t)(EAX));
  /* 10671730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671733 push ecx */
  push32((uint32_t)(ECX));
  /* 10671734 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671737 push edx */
  push32((uint32_t)(EDX));
  /* 10671738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1067173b push eax */
  push32((uint32_t)(EAX));
  /* 1067173c call 0x10672a80 */
  push32(0x10671741u); f_10672a80();
  /* 10671741 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671744 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10671747 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067174b jne 0x1067174f */
  if (!C.zf) goto L_1067174f;
  /* 1067174d jmp 0x106717ad */
  goto L_106717ad;
L_1067174f:;
  /* 1067174f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10671751 push 0x1068b8c4 */
  push32((uint32_t)(0x1068b8c4u));
  /* 10671756 push 2 */
  push32((uint32_t)(0x2u));
  /* 10671758 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067175b push ecx */
  push32((uint32_t)(ECX));
  /* 1067175c call 0x106634a0 */
  push32(0x10671761u); f_106634a0();
  /* 10671761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671764 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1067176a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1067176c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10671772 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671775 jne 0x10671779 */
  if (!C.zf) goto L_10671779;
  /* 10671777 jmp 0x106717ad */
  goto L_106717ad;
L_10671779:;
  /* 10671779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067177c push ecx */
  push32((uint32_t)(ECX));
  /* 1067177d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671780 push edx */
  push32((uint32_t)(EDX));
  /* 10671781 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10671787 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10671789 push ecx */
  push32((uint32_t)(ECX));
  /* 1067178a call 0x10666cc0 */
  push32(0x1067178fu); f_10666cc0();
  /* 1067178f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671792 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671796 je 0x106717a6 */
  if (C.zf) goto L_106717a6;
  /* 10671798 push 2 */
  push32((uint32_t)(0x2u));
  /* 1067179a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067179d push edx */
  push32((uint32_t)(EDX));
  /* 1067179e call 0x10663f30 */
  push32(0x106717a3u); f_10663f30();
  /* 106717a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106717a6:;
  /* 106717a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106717a8 jmp 0x106718e6 */
  goto L_106718e6;
L_106717ad:;
  /* 106717ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106717b1 je 0x106717c1 */
  if (C.zf) goto L_106717c1;
  /* 106717b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106717b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106717b8 push eax */
  push32((uint32_t)(EAX));
  /* 106717b9 call 0x10663f30 */
  push32(0x106717beu); f_10663f30();
  /* 106717be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106717c1:;
  /* 106717c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106717c4 jmp 0x106718e6 */
  goto L_106718e6;
L_106717c9:;
  /* 106717c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106717cd jne 0x106718e3 */
  if (!C.zf) goto L_106718e3;
  /* 106717d3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 106717dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106717e0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 106717e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106717e8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 106717ee push edx */
  push32((uint32_t)(EDX));
  /* 106717ef push 0x1068f710 */
  push32((uint32_t)(0x1068f710u));
  /* 106717f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106717f7 push eax */
  push32((uint32_t)(EAX));
  /* 106717f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106717fb push ecx */
  push32((uint32_t)(ECX));
  /* 106717fc call 0x106728e0 */
  push32(0x10671801u); f_106728e0();
  /* 10671801 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671806 jne 0x10671810 */
  if (!C.zf) goto L_10671810;
  /* 10671808 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1067180b jmp 0x106718e6 */
  goto L_106718e6;
L_10671810:;
  /* 10671810 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10671816 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10671819 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10671823 jmp 0x10671834 */
  goto L_10671834;
L_10671825:;
  /* 10671825 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1067182b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067182e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10671834:;
  /* 10671834 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067183b jge 0x106718df */
  if ((C.sf==C.of)) goto L_106718df;
  /* 10671841 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671848 jle 0x1067187b */
  if ((C.zf||C.sf!=C.of)) goto L_1067187b;
  /* 1067184a push 4 */
  push32((uint32_t)(0x4u));
  /* 1067184c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10671852 mov dl, byte ptr [ecx*2 + 0x1068f710] */
  DL = (r8((uint32_t)(ECX*2 + 0x1068f710)));
  /* 10671859 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1067185f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10671865 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1067186a push eax */
  push32((uint32_t)(EAX));
  /* 1067186b call 0x106694b0 */
  push32(0x10671870u); f_106694b0();
  /* 10671870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671873 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10671879 jmp 0x106718ae */
  goto L_106718ae;
L_1067187b:;
  /* 1067187b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10671881 mov dl, byte ptr [ecx*2 + 0x1068f710] */
  DL = (r8((uint32_t)(ECX*2 + 0x1068f710)));
  /* 10671888 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1067188e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10671894 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10671899 mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 1067189f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106718a1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 106718a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106718a8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_106718ae:;
  /* 106718ae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106718b5 je 0x106718d8 */
  if (C.zf) goto L_106718d8;
  /* 106718b7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106718bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106718c0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106718c3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 106718ca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 106718ce mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 106718d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106718d6 jmp 0x106718da */
  goto L_106718da;
L_106718d8:;
  /* 106718d8 jmp 0x106718df */
  goto L_106718df;
L_106718da:;
  /* 106718da jmp 0x10671825 */
  goto L_10671825;
L_106718df:;
  /* 106718df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106718e1 jmp 0x106718e6 */
  goto L_106718e6;
L_106718e3:;
  /* 106718e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106718e6:;
  /* 106718e6 mov esp, ebp */
  ESP = (EBP);
  /* 106718e8 pop ebp */
  EBP = (pop32());
  /* 106718e9 ret  */
  ESPCHK(0x10671660u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x106718f0 (10 bytes, 5 insns) */
void f_106718f0(void) {
  FTRACE(0x106718f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106718f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106718f1 mov ebp, esp */
  EBP = (ESP);
  /* 106718f3 mov eax, dword ptr [0x1068ed88] */
  EAX = (r32((uint32_t)(0x1068ed88)));
  /* 106718f8 pop ebp */
  EBP = (pop32());
  /* 106718f9 ret  */
  ESPCHK(0x106718f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011900 @ 0x10671900 (575 bytes, 196 insns) */
void f_10671900(void) {
  FTRACE(0x10671900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671900 push ebp */
  push32((uint32_t)(EBP));
  /* 10671901 mov ebp, esp */
  EBP = (ESP);
  /* 10671903 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10671905 push 0x1068b8d0 */
  push32((uint32_t)(0x1068b8d0u));
  /* 1067190a push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 1067190f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10671915 push eax */
  push32((uint32_t)(EAX));
  /* 10671916 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1067191d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671920 push ebx */
  push32((uint32_t)(EBX));
  /* 10671921 push esi */
  push32((uint32_t)(ESI));
  /* 10671922 push edi */
  push32((uint32_t)(EDI));
  /* 10671923 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10671926 cmp dword ptr [0x1068f71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067192d jne 0x1067197e */
  if (!C.zf) goto L_1067197e;
  /* 1067192f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10671932 push eax */
  push32((uint32_t)(EAX));
  /* 10671933 push 1 */
  push32((uint32_t)(0x1u));
  /* 10671935 push 0x1068b000 */
  push32((uint32_t)(0x1068b000u));
  /* 1067193a push 1 */
  push32((uint32_t)(0x1u));
  /* 1067193c call dword ptr [0x106912a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a0))), 0x10671942u);
  /* 10671942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671944 je 0x10671952 */
  if (C.zf) goto L_10671952;
  /* 10671946 mov dword ptr [0x1068f71c], 1 */
  w32((uint32_t)(0x1068f71c), (0x1u));
  /* 10671950 jmp 0x1067197e */
  goto L_1067197e;
L_10671952:;
  /* 10671952 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10671955 push ecx */
  push32((uint32_t)(ECX));
  /* 10671956 push 1 */
  push32((uint32_t)(0x1u));
  /* 10671958 push 0x1068affc */
  push32((uint32_t)(0x1068affcu));
  /* 1067195d push 1 */
  push32((uint32_t)(0x1u));
  /* 1067195f push 0 */
  push32((uint32_t)(0x0u));
  /* 10671961 call dword ptr [0x1069136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069136c))), 0x10671967u);
  /* 10671967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671969 je 0x10671977 */
  if (C.zf) goto L_10671977;
  /* 1067196b mov dword ptr [0x1068f71c], 2 */
  w32((uint32_t)(0x1068f71c), (0x2u));
  /* 10671975 jmp 0x1067197e */
  goto L_1067197e;
L_10671977:;
  /* 10671977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671979 jmp 0x10671b59 */
  goto L_10671b59;
L_1067197e:;
  /* 1067197e cmp dword ptr [0x1068f71c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f71c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671985 jne 0x106719a2 */
  if (!C.zf) goto L_106719a2;
  /* 10671987 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067198a push edx */
  push32((uint32_t)(EDX));
  /* 1067198b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067198e push eax */
  push32((uint32_t)(EAX));
  /* 1067198f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671992 push ecx */
  push32((uint32_t)(ECX));
  /* 10671993 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671996 push edx */
  push32((uint32_t)(EDX));
  /* 10671997 call dword ptr [0x106912a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912a0))), 0x1067199du);
  /* 1067199d jmp 0x10671b59 */
  goto L_10671b59;
L_106719a2:;
  /* 106719a2 cmp dword ptr [0x1068f71c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f71c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106719a9 jne 0x10671b57 */
  if (!C.zf) goto L_10671b57;
  /* 106719af cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106719b3 jne 0x106719bd */
  if (!C.zf) goto L_106719bd;
  /* 106719b5 mov eax, dword ptr [0x1068f690] */
  EAX = (r32((uint32_t)(0x1068f690)));
  /* 106719ba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_106719bd:;
  /* 106719bd push 0 */
  push32((uint32_t)(0x0u));
  /* 106719bf push 0 */
  push32((uint32_t)(0x0u));
  /* 106719c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106719c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106719c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106719c8 push ecx */
  push32((uint32_t)(ECX));
  /* 106719c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106719cc push edx */
  push32((uint32_t)(EDX));
  /* 106719cd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 106719d2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106719d5 push eax */
  push32((uint32_t)(EAX));
  /* 106719d6 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x106719dcu);
  /* 106719dc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106719df cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106719e3 jne 0x106719ec */
  if (!C.zf) goto L_106719ec;
  /* 106719e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106719e7 jmp 0x10671b59 */
  goto L_10671b59;
L_106719ec:;
  /* 106719ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106719f3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106719f6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106719f9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106719fb call 0x10666640 */
  push32(0x10671a00u); f_10666640();
  /* 10671a00 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10671a03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10671a06 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10671a09 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10671a0c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10671a0f push edx */
  push32((uint32_t)(EDX));
  /* 10671a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10671a12 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10671a15 push eax */
  push32((uint32_t)(EAX));
  /* 10671a16 call 0x10667210 */
  push32(0x10671a1bu); f_10667210();
  /* 10671a1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671a1e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10671a25 jmp 0x10671a3e */
  goto L_10671a3e;
  /* 10671a27 mov eax, 1 */
  EAX = (0x1u);
  /* 10671a2c ret  */
  ESPCHK(0x10671900u, _esp0);
  ESP += 4; return;
  /* 10671a2d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10671a30 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10671a37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10671a3e:;
  /* 10671a3e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671a42 jne 0x10671a4b */
  if (!C.zf) goto L_10671a4b;
  /* 10671a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671a46 jmp 0x10671b59 */
  goto L_10671b59;
L_10671a4b:;
  /* 10671a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10671a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10671a4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10671a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10671a53 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10671a56 push edx */
  push32((uint32_t)(EDX));
  /* 10671a57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671a5a push eax */
  push32((uint32_t)(EAX));
  /* 10671a5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10671a5e push ecx */
  push32((uint32_t)(ECX));
  /* 10671a5f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10671a64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10671a67 push edx */
  push32((uint32_t)(EDX));
  /* 10671a68 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10671a6eu);
  /* 10671a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10671a70 jne 0x10671a79 */
  if (!C.zf) goto L_10671a79;
  /* 10671a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671a74 jmp 0x10671b59 */
  goto L_10671b59;
L_10671a79:;
  /* 10671a79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10671a80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10671a83 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10671a87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671a8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10671a8c call 0x10666640 */
  push32(0x10671a91u); f_10666640();
  /* 10671a91 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10671a94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10671a97 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10671a9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10671a9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10671aa4 jmp 0x10671abd */
  goto L_10671abd;
  /* 10671aa6 mov eax, 1 */
  EAX = (0x1u);
  /* 10671aab ret  */
  ESPCHK(0x10671900u, _esp0);
  ESP += 4; return;
  /* 10671aac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10671aaf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10671ab6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10671abd:;
  /* 10671abd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671ac1 jne 0x10671aca */
  if (!C.zf) goto L_10671aca;
  /* 10671ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671ac5 jmp 0x10671b59 */
  goto L_10671b59;
L_10671aca:;
  /* 10671aca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671ace jne 0x10671ad9 */
  if (!C.zf) goto L_10671ad9;
  /* 10671ad0 mov edx, dword ptr [0x1068f680] */
  EDX = (r32((uint32_t)(0x1068f680)));
  /* 10671ad6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10671ad9:;
  /* 10671ad9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671adf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10671ae5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671ae8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671aeb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10671af2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10671af6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10671af9 push edx */
  push32((uint32_t)(EDX));
  /* 10671afa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10671afd push eax */
  push32((uint32_t)(EAX));
  /* 10671afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671b01 push ecx */
  push32((uint32_t)(ECX));
  /* 10671b02 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10671b05 push edx */
  push32((uint32_t)(EDX));
  /* 10671b06 call dword ptr [0x1069136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069136c))), 0x10671b0cu);
  /* 10671b0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10671b0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671b12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671b15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671b17 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10671b1c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671b22 je 0x10671b38 */
  if (C.zf) goto L_10671b38;
  /* 10671b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671b27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671b2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671b2c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10671b30 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671b36 je 0x10671b3c */
  if (C.zf) goto L_10671b3c;
L_10671b38:;
  /* 10671b38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671b3a jmp 0x10671b59 */
  goto L_10671b59;
L_10671b3c:;
  /* 10671b3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671b3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10671b41 push eax */
  push32((uint32_t)(EAX));
  /* 10671b42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10671b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10671b46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10671b49 push edx */
  push32((uint32_t)(EDX));
  /* 10671b4a call 0x1066b390 */
  push32(0x10671b4fu); f_1066b390();
  /* 10671b4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671b52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10671b55 jmp 0x10671b59 */
  goto L_10671b59;
L_10671b57:;
  /* 10671b57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10671b59:;
  /* 10671b59 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10671b5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10671b5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10671b66 pop edi */
  EDI = (pop32());
  /* 10671b67 pop esi */
  ESI = (pop32());
  /* 10671b68 pop ebx */
  EBX = (pop32());
  /* 10671b69 mov esp, ebp */
  ESP = (EBP);
  /* 10671b6b pop ebp */
  EBP = (pop32());
  /* 10671b6c ret  */
  ESPCHK(0x10671900u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x10671b70 (208 bytes, 85 insns) */
void f_10671b70(void) {
  FTRACE(0x10671b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10671b71 mov ebp, esp */
  EBP = (ESP);
  /* 10671b73 push edi */
  push32((uint32_t)(EDI));
  /* 10671b74 push esi */
  push32((uint32_t)(ESI));
  /* 10671b75 push ebx */
  push32((uint32_t)(EBX));
  /* 10671b76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10671b79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10671b7c lea eax, [0x1068f678] */
  EAX = ((uint32_t)(0x1068f678));
  /* 10671b82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671b86 jne 0x10671bc3 */
  if (!C.zf) goto L_10671bc3;
  /* 10671b88 mov al, 0xff */
  AL = (0xffu);
  /* 10671b8a mov edi, edi */
  EDI = (EDI);
L_10671b8c:;
  /* 10671b8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10671b8e je 0x10671bbe */
  if (C.zf) goto L_10671bbe;
  /* 10671b90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10671b92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10671b93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10671b95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10671b96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671b98 je 0x10671b8c */
  if (C.zf) goto L_10671b8c;
  /* 10671b9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10671b9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671b9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10671ba0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10671ba3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10671ba5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10671ba7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10671ba9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10671bab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671bad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10671baf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10671bb2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10671bb4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10671bb6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671bb8 je 0x10671b8c */
  if (C.zf) goto L_10671b8c;
  /* 10671bba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10671bbc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10671bbe:;
  /* 10671bbe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10671bc1 jmp 0x10671c3b */
  goto L_10671c3b;
L_10671bc3:;
  /* 10671bc3 lock inc dword ptr [0x1068f80c] */
  x86_unimpl("lock inc @ 0x10671bc3");
  /* 10671bca cmp dword ptr [0x1068f7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671bd1 jg 0x10671bd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10671bd7;
  /* 10671bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10671bd5 jmp 0x10671bec */
  goto L_10671bec;
L_10671bd7:;
  /* 10671bd7 lock dec dword ptr [0x1068f80c] */
  x86_unimpl("lock dec @ 0x10671bd7");
  /* 10671bde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10671be0 call 0x10666ea0 */
  push32(0x10671be5u); f_10666ea0();
  /* 10671be5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10671bec:;
  /* 10671bec mov eax, 0xff */
  EAX = (0xffu);
  /* 10671bf1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10671bf3 nop  */
  /* nop */
L_10671bf4:;
  /* 10671bf4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10671bf6 je 0x10671c1f */
  if (C.zf) goto L_10671c1f;
  /* 10671bf8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10671bfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10671bfb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10671bfd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10671bfe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c00 je 0x10671bf4 */
  if (C.zf) goto L_10671bf4;
  /* 10671c02 push eax */
  push32((uint32_t)(EAX));
  /* 10671c03 push ebx */
  push32((uint32_t)(EBX));
  /* 10671c04 call 0x10672ce0 */
  push32(0x10671c09u); f_10672ce0();
  /* 10671c09 mov ebx, eax */
  EBX = (EAX);
  /* 10671c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671c0e call 0x10672ce0 */
  push32(0x10671c13u); f_10672ce0();
  /* 10671c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671c16 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c18 je 0x10671bf4 */
  if (C.zf) goto L_10671bf4;
  /* 10671c1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671c1c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10671c1f:;
  /* 10671c1f mov ebx, eax */
  EBX = (EAX);
  /* 10671c21 pop eax */
  EAX = (pop32());
  /* 10671c22 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671c24 jne 0x10671c2f */
  if (!C.zf) goto L_10671c2f;
  /* 10671c26 lock dec dword ptr [0x1068f80c] */
  x86_unimpl("lock dec @ 0x10671c26");
  /* 10671c2d jmp 0x10671c39 */
  goto L_10671c39;
L_10671c2f:;
  /* 10671c2f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10671c31 call 0x10666f40 */
  push32(0x10671c36u); f_10666f40();
  /* 10671c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10671c39:;
  /* 10671c39 mov eax, ebx */
  EAX = (EBX);
L_10671c3b:;
  /* 10671c3b pop ebx */
  EBX = (pop32());
  /* 10671c3c pop esi */
  ESI = (pop32());
  /* 10671c3d pop edi */
  EDI = (pop32());
  /* 10671c3e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10671c3f ret  */
  ESPCHK(0x10671b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x10671c40 (257 bytes, 103 insns) */
void f_10671c40(void) {
  FTRACE(0x10671c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10671c41 mov ebp, esp */
  EBP = (ESP);
  /* 10671c43 push edi */
  push32((uint32_t)(EDI));
  /* 10671c44 push esi */
  push32((uint32_t)(ESI));
  /* 10671c45 push ebx */
  push32((uint32_t)(EBX));
  /* 10671c46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10671c49 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671c4b je 0x10671d3a */
  if (C.zf) goto L_10671d3a;
  /* 10671c51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10671c54 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10671c57 lea eax, [0x1068f678] */
  EAX = ((uint32_t)(0x1068f678));
  /* 10671c5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671c61 jne 0x10671cb1 */
  if (!C.zf) goto L_10671cb1;
  /* 10671c63 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10671c65 mov bl, 0x5a */
  BL = (0x5au);
  /* 10671c67 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10671c69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10671c6c:;
  /* 10671c6c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10671c6e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10671c70 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10671c72 je 0x10671c95 */
  if (C.zf) goto L_10671c95;
  /* 10671c74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10671c76 je 0x10671c95 */
  if (C.zf) goto L_10671c95;
  /* 10671c78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10671c79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10671c7a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c7c jb 0x10671c84 */
  if (C.cf) goto L_10671c84;
  /* 10671c7e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c80 ja 0x10671c84 */
  if ((!C.cf&&!C.zf)) goto L_10671c84;
  /* 10671c82 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10671c84:;
  /* 10671c84 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c86 jb 0x10671c8e */
  if (C.cf) goto L_10671c8e;
  /* 10671c88 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c8a ja 0x10671c8e */
  if ((!C.cf&&!C.zf)) goto L_10671c8e;
  /* 10671c8c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10671c8e:;
  /* 10671c8e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c90 jne 0x10671c9f */
  if (!C.zf) goto L_10671c9f;
  /* 10671c92 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10671c93 jne 0x10671c6c */
  if (!C.zf) goto L_10671c6c;
L_10671c95:;
  /* 10671c95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671c97 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10671c99 je 0x10671d3a */
  if (C.zf) goto L_10671d3a;
L_10671c9f:;
  /* 10671c9f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10671ca4 jb 0x10671d3a */
  if (C.cf) goto L_10671d3a;
  /* 10671caa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10671cac jmp 0x10671d3a */
  goto L_10671d3a;
L_10671cb1:;
  /* 10671cb1 lock inc dword ptr [0x1068f80c] */
  x86_unimpl("lock inc @ 0x10671cb1");
  /* 10671cb8 cmp dword ptr [0x1068f7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671cbf jg 0x10671cc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10671cc5;
  /* 10671cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10671cc3 jmp 0x10671cde */
  goto L_10671cde;
L_10671cc5:;
  /* 10671cc5 lock dec dword ptr [0x1068f80c] */
  x86_unimpl("lock dec @ 0x10671cc5");
  /* 10671ccc mov ebx, ecx */
  EBX = (ECX);
  /* 10671cce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10671cd0 call 0x10666ea0 */
  push32(0x10671cd5u); f_10666ea0();
  /* 10671cd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10671cdc mov ecx, ebx */
  ECX = (EBX);
L_10671cde:;
  /* 10671cde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671ce0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10671ce2 mov edi, edi */
  EDI = (EDI);
L_10671ce4:;
  /* 10671ce4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10671ce6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671ce8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10671cea je 0x10671d0f */
  if (C.zf) goto L_10671d0f;
  /* 10671cec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10671cee je 0x10671d0f */
  if (C.zf) goto L_10671d0f;
  /* 10671cf0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10671cf1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10671cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10671cf3 push eax */
  push32((uint32_t)(EAX));
  /* 10671cf4 push ebx */
  push32((uint32_t)(EBX));
  /* 10671cf5 call 0x10672ce0 */
  push32(0x10671cfau); f_10672ce0();
  /* 10671cfa mov ebx, eax */
  EBX = (EAX);
  /* 10671cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671cff call 0x10672ce0 */
  push32(0x10671d04u); f_10672ce0();
  /* 10671d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671d07 pop ecx */
  ECX = (pop32());
  /* 10671d08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671d0a jne 0x10671d15 */
  if (!C.zf) goto L_10671d15;
  /* 10671d0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10671d0d jne 0x10671ce4 */
  if (!C.zf) goto L_10671ce4;
L_10671d0f:;
  /* 10671d0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671d11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671d13 je 0x10671d1e */
  if (C.zf) goto L_10671d1e;
L_10671d15:;
  /* 10671d15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10671d1a jb 0x10671d1e */
  if (C.cf) goto L_10671d1e;
  /* 10671d1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10671d1e:;
  /* 10671d1e pop eax */
  EAX = (pop32());
  /* 10671d1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671d21 jne 0x10671d2c */
  if (!C.zf) goto L_10671d2c;
  /* 10671d23 lock dec dword ptr [0x1068f80c] */
  x86_unimpl("lock dec @ 0x10671d23");
  /* 10671d2a jmp 0x10671d3a */
  goto L_10671d3a;
L_10671d2c:;
  /* 10671d2c mov ebx, ecx */
  EBX = (ECX);
  /* 10671d2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10671d30 call 0x10666f40 */
  push32(0x10671d35u); f_10666f40();
  /* 10671d35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671d38 mov ecx, ebx */
  ECX = (EBX);
L_10671d3a:;
  /* 10671d3a mov eax, ecx */
  EAX = (ECX);
  /* 10671d3c pop ebx */
  EBX = (pop32());
  /* 10671d3d pop esi */
  ESI = (pop32());
  /* 10671d3e pop edi */
  EDI = (pop32());
  /* 10671d3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10671d40 ret  */
  ESPCHK(0x10671c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d50 @ 0x10671d50 (255 bytes, 88 insns) */
void f_10671d50(void) {
  FTRACE(0x10671d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10671d51 mov ebp, esp */
  EBP = (ESP);
  /* 10671d53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10671d56:;
  /* 10671d56 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671d5d jle 0x10671d76 */
  if ((C.zf||C.sf!=C.of)) goto L_10671d76;
  /* 10671d5f push 8 */
  push32((uint32_t)(0x8u));
  /* 10671d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671d64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671d66 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10671d68 push ecx */
  push32((uint32_t)(ECX));
  /* 10671d69 call 0x106694b0 */
  push32(0x10671d6eu); f_106694b0();
  /* 10671d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671d71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10671d74 jmp 0x10671d8f */
  goto L_10671d8f;
L_10671d76:;
  /* 10671d76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671d79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671d7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671d7d mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 10671d83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671d85 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10671d89 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10671d8c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10671d8f:;
  /* 10671d8f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671d93 je 0x10671da0 */
  if (C.zf) goto L_10671da0;
  /* 10671d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671d98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671d9b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10671d9e jmp 0x10671d56 */
  goto L_10671d56;
L_10671da0:;
  /* 10671da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671da3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671da5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10671da7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10671daa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671dad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671db0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10671db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671db6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10671db9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671dbd je 0x10671dc5 */
  if (C.zf) goto L_10671dc5;
  /* 10671dbf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671dc3 jne 0x10671dd8 */
  if (!C.zf) goto L_10671dd8;
L_10671dc5:;
  /* 10671dc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671dca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10671dcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671dd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671dd5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10671dd8:;
  /* 10671dd8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10671ddf:;
  /* 10671ddf cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671de6 jle 0x10671dfb */
  if ((C.zf||C.sf!=C.of)) goto L_10671dfb;
  /* 10671de8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10671dea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671ded push edx */
  push32((uint32_t)(EDX));
  /* 10671dee call 0x106694b0 */
  push32(0x10671df3u); f_106694b0();
  /* 10671df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671df6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10671df9 jmp 0x10671e10 */
  goto L_10671e10;
L_10671dfb:;
  /* 10671dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671dfe mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 10671e04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671e06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10671e0a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10671e0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10671e10:;
  /* 10671e10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671e14 je 0x10671e3b */
  if (C.zf) goto L_10671e3b;
  /* 10671e16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671e19 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10671e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671e1f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10671e23 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10671e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671e29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671e2b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10671e2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10671e30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671e33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671e36 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10671e39 jmp 0x10671ddf */
  goto L_10671ddf;
L_10671e3b:;
  /* 10671e3b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671e3f jne 0x10671e48 */
  if (!C.zf) goto L_10671e48;
  /* 10671e41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671e44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10671e46 jmp 0x10671e4b */
  goto L_10671e4b;
L_10671e48:;
  /* 10671e48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10671e4b:;
  /* 10671e4b mov esp, ebp */
  ESP = (EBP);
  /* 10671e4d pop ebp */
  EBP = (pop32());
  /* 10671e4e ret  */
  ESPCHK(0x10671d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x10671e50 (17 bytes, 8 insns) */
void f_10671e50(void) {
  FTRACE(0x10671e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10671e51 mov ebp, esp */
  EBP = (ESP);
  /* 10671e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671e56 push eax */
  push32((uint32_t)(EAX));
  /* 10671e57 call 0x10671d50 */
  push32(0x10671e5cu); f_10671d50();
  /* 10671e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671e5f pop ebp */
  EBP = (pop32());
  /* 10671e60 ret  */
  ESPCHK(0x10671e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e70 @ 0x10671e70 (297 bytes, 106 insns) */
void f_10671e70(void) {
  FTRACE(0x10671e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10671e71 mov ebp, esp */
  EBP = (ESP);
  /* 10671e73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671e76 push esi */
  push32((uint32_t)(ESI));
L_10671e77:;
  /* 10671e77 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671e7e jle 0x10671e97 */
  if ((C.zf||C.sf!=C.of)) goto L_10671e97;
  /* 10671e80 push 8 */
  push32((uint32_t)(0x8u));
  /* 10671e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10671e87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10671e89 push ecx */
  push32((uint32_t)(ECX));
  /* 10671e8a call 0x106694b0 */
  push32(0x10671e8fu); f_106694b0();
  /* 10671e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671e92 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10671e95 jmp 0x10671eb0 */
  goto L_10671eb0;
L_10671e97:;
  /* 10671e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671e9c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671e9e mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 10671ea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671ea6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10671eaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10671ead mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10671eb0:;
  /* 10671eb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671eb4 je 0x10671ec1 */
  if (C.zf) goto L_10671ec1;
  /* 10671eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671eb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671ebc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10671ebf jmp 0x10671e77 */
  goto L_10671e77;
L_10671ec1:;
  /* 10671ec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671ec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671ec6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10671ec8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10671ecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671ece add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671ed1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10671ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671ed7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10671eda cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671ede je 0x10671ee6 */
  if (C.zf) goto L_10671ee6;
  /* 10671ee0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671ee4 jne 0x10671ef9 */
  if (!C.zf) goto L_10671ef9;
L_10671ee6:;
  /* 10671ee6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671eeb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671eed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10671ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671ef3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671ef6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10671ef9:;
  /* 10671ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10671f00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10671f07:;
  /* 10671f07 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671f0e jle 0x10671f23 */
  if ((C.zf||C.sf!=C.of)) goto L_10671f23;
  /* 10671f10 push 4 */
  push32((uint32_t)(0x4u));
  /* 10671f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671f15 push edx */
  push32((uint32_t)(EDX));
  /* 10671f16 call 0x106694b0 */
  push32(0x10671f1bu); f_106694b0();
  /* 10671f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671f1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10671f21 jmp 0x10671f38 */
  goto L_10671f38;
L_10671f23:;
  /* 10671f23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671f26 mov ecx, dword ptr [0x1068dc98] */
  ECX = (r32((uint32_t)(0x1068dc98)));
  /* 10671f2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10671f2e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10671f32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10671f35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10671f38:;
  /* 10671f38 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671f3c je 0x10671f79 */
  if (C.zf) goto L_10671f79;
  /* 10671f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10671f40 push 0xa */
  push32((uint32_t)(0xau));
  /* 10671f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671f45 push eax */
  push32((uint32_t)(EAX));
  /* 10671f46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671f49 push ecx */
  push32((uint32_t)(ECX));
  /* 10671f4a call 0x10672e10 */
  push32(0x10671f4fu); f_10672e10();
  /* 10671f4f mov ecx, eax */
  ECX = (EAX);
  /* 10671f51 mov esi, edx */
  ESI = (EDX);
  /* 10671f53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10671f56 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10671f59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10671f5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671f5c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10671f5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10671f61 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10671f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10671f69 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10671f6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10671f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10671f71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671f74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10671f77 jmp 0x10671f07 */
  goto L_10671f07;
L_10671f79:;
  /* 10671f79 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671f7d jne 0x10671f8e */
  if (!C.zf) goto L_10671f8e;
  /* 10671f7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671f82 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10671f84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10671f87 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671f8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10671f8c jmp 0x10671f94 */
  goto L_10671f94;
L_10671f8e:;
  /* 10671f8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10671f91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10671f94:;
  /* 10671f94 pop esi */
  ESI = (pop32());
  /* 10671f95 mov esp, ebp */
  ESP = (EBP);
  /* 10671f97 pop ebp */
  EBP = (pop32());
  /* 10671f98 ret  */
  ESPCHK(0x10671e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fa0 @ 0x10671fa0 (61 bytes, 18 insns) */
void f_10671fa0(void) {
  FTRACE(0x10671fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10671fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10671fa3 cmp dword ptr [0x1068f7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671faa jne 0x10671fdb */
  if (!C.zf) goto L_10671fdb;
  /* 10671fac push 0xb */
  push32((uint32_t)(0xbu));
  /* 10671fae call 0x10666ea0 */
  push32(0x10671fb3u); f_10666ea0();
  /* 10671fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671fb6 cmp dword ptr [0x1068f7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10671fbd jne 0x10671fd1 */
  if (!C.zf) goto L_10671fd1;
  /* 10671fbf call 0x10672000 */
  push32(0x10671fc4u); f_10672000();
  /* 10671fc4 mov eax, dword ptr [0x1068f7d8] */
  EAX = (r32((uint32_t)(0x1068f7d8)));
  /* 10671fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10671fcc mov dword ptr [0x1068f7d8], eax */
  w32((uint32_t)(0x1068f7d8), (EAX));
L_10671fd1:;
  /* 10671fd1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10671fd3 call 0x10666f40 */
  push32(0x10671fd8u); f_10666f40();
  /* 10671fd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10671fdb:;
  /* 10671fdb pop ebp */
  EBP = (pop32());
  /* 10671fdc ret  */
  ESPCHK(0x10671fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fe0 @ 0x10671fe0 (30 bytes, 11 insns) */
void f_10671fe0(void) {
  FTRACE(0x10671fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10671fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10671fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10671fe3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10671fe5 call 0x10666ea0 */
  push32(0x10671feau); f_10666ea0();
  /* 10671fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671fed call 0x10672000 */
  push32(0x10671ff2u); f_10672000();
  /* 10671ff2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10671ff4 call 0x10666f40 */
  push32(0x10671ff9u); f_10666f40();
  /* 10671ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10671ffc pop ebp */
  EBP = (pop32());
  /* 10671ffd ret  */
  ESPCHK(0x10671fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012000 @ 0x10672000 (939 bytes, 266 insns) */
void f_10672000(void) {
  FTRACE(0x10672000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672000 push ebp */
  push32((uint32_t)(EBP));
  /* 10672001 mov ebp, esp */
  EBP = (ESP);
  /* 10672003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1067200d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1067200f call 0x10666ea0 */
  push32(0x10672014u); f_10666ea0();
  /* 10672014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672017 mov dword ptr [0x1068f720], 0 */
  w32((uint32_t)(0x1068f720), (0x0u));
  /* 10672021 mov dword ptr [0x1068ee38], 0xffffffff */
  w32((uint32_t)(0x1068ee38), (0xffffffffu));
  /* 1067202b mov eax, dword ptr [0x1068ee38] */
  EAX = (r32((uint32_t)(0x1068ee38)));
  /* 10672030 mov dword ptr [0x1068ee28], eax */
  w32((uint32_t)(0x1068ee28), (EAX));
  /* 10672035 push 0x1068b930 */
  push32((uint32_t)(0x1068b930u));
  /* 1067203a call 0x10672e80 */
  push32(0x1067203fu); f_10672e80();
  /* 1067203f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672042 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10672045 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672049 jne 0x10672183 */
  if (!C.zf) goto L_10672183;
  /* 1067204f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10672051 call 0x10666f40 */
  push32(0x10672056u); f_10666f40();
  /* 10672056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672059 push 0x1068f728 */
  push32((uint32_t)(0x1068f728u));
  /* 1067205e call dword ptr [0x10691264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691264))), 0x10672064u);
  /* 10672064 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672067 je 0x1067217e */
  if (C.zf) goto L_1067217e;
  /* 1067206d mov dword ptr [0x1068f720], 1 */
  w32((uint32_t)(0x1068f720), (0x1u));
  /* 10672077 mov ecx, dword ptr [0x1068f728] */
  ECX = (r32((uint32_t)(0x1068f728)));
  /* 1067207d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672080 mov dword ptr [0x1068ed90], ecx */
  w32((uint32_t)(0x1068ed90), (ECX));
  /* 10672086 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672088 mov dx, word ptr [0x1068f76e] */
  DX = (r16((uint32_t)(0x1068f76e)));
  /* 1067208f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10672091 je 0x106720a9 */
  if (C.zf) goto L_106720a9;
  /* 10672093 mov eax, dword ptr [0x1068f77c] */
  EAX = (r32((uint32_t)(0x1068f77c)));
  /* 10672098 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067209b mov ecx, dword ptr [0x1068ed90] */
  ECX = (r32((uint32_t)(0x1068ed90)));
  /* 106720a1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106720a3 mov dword ptr [0x1068ed90], ecx */
  w32((uint32_t)(0x1068ed90), (ECX));
L_106720a9:;
  /* 106720a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106720ab mov dx, word ptr [0x1068f7c2] */
  DX = (r16((uint32_t)(0x1068f7c2)));
  /* 106720b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106720b4 je 0x106720de */
  if (C.zf) goto L_106720de;
  /* 106720b6 cmp dword ptr [0x1068f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106720bd je 0x106720de */
  if (C.zf) goto L_106720de;
  /* 106720bf mov dword ptr [0x1068ed94], 1 */
  w32((uint32_t)(0x1068ed94), (0x1u));
  /* 106720c9 mov eax, dword ptr [0x1068f7d0] */
  EAX = (r32((uint32_t)(0x1068f7d0)));
  /* 106720ce sub eax, dword ptr [0x1068f77c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068f77c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106720d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106720d7 mov dword ptr [0x1068ed98], eax */
  w32((uint32_t)(0x1068ed98), (EAX));
  /* 106720dc jmp 0x106720f2 */
  goto L_106720f2;
L_106720de:;
  /* 106720de mov dword ptr [0x1068ed94], 0 */
  w32((uint32_t)(0x1068ed94), (0x0u));
  /* 106720e8 mov dword ptr [0x1068ed98], 0 */
  w32((uint32_t)(0x1068ed98), (0x0u));
L_106720f2:;
  /* 106720f2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 106720f5 push ecx */
  push32((uint32_t)(ECX));
  /* 106720f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106720f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 106720fa mov edx, dword ptr [0x1068ee1c] */
  EDX = (r32((uint32_t)(0x1068ee1c)));
  /* 10672100 push edx */
  push32((uint32_t)(EDX));
  /* 10672101 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672103 push 0x1068f72c */
  push32((uint32_t)(0x1068f72cu));
  /* 10672108 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1067210d mov eax, dword ptr [0x1068f690] */
  EAX = (r32((uint32_t)(0x1068f690)));
  /* 10672112 push eax */
  push32((uint32_t)(EAX));
  /* 10672113 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10672119u);
  /* 10672119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067211b je 0x1067212f */
  if (C.zf) goto L_1067212f;
  /* 1067211d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672121 jne 0x1067212f */
  if (!C.zf) goto L_1067212f;
  /* 10672123 mov ecx, dword ptr [0x1068ee1c] */
  ECX = (r32((uint32_t)(0x1068ee1c)));
  /* 10672129 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1067212d jmp 0x10672138 */
  goto L_10672138;
L_1067212f:;
  /* 1067212f mov edx, dword ptr [0x1068ee1c] */
  EDX = (r32((uint32_t)(0x1068ee1c)));
  /* 10672135 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10672138:;
  /* 10672138 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1067213b push eax */
  push32((uint32_t)(EAX));
  /* 1067213c push 0 */
  push32((uint32_t)(0x0u));
  /* 1067213e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10672140 mov ecx, dword ptr [0x1068ee20] */
  ECX = (r32((uint32_t)(0x1068ee20)));
  /* 10672146 push ecx */
  push32((uint32_t)(ECX));
  /* 10672147 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672149 push 0x1068f780 */
  push32((uint32_t)(0x1068f780u));
  /* 1067214e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10672153 mov edx, dword ptr [0x1068f690] */
  EDX = (r32((uint32_t)(0x1068f690)));
  /* 10672159 push edx */
  push32((uint32_t)(EDX));
  /* 1067215a call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10672160u);
  /* 10672160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672162 je 0x10672175 */
  if (C.zf) goto L_10672175;
  /* 10672164 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672168 jne 0x10672175 */
  if (!C.zf) goto L_10672175;
  /* 1067216a mov eax, dword ptr [0x1068ee20] */
  EAX = (r32((uint32_t)(0x1068ee20)));
  /* 1067216f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10672173 jmp 0x1067217e */
  goto L_1067217e;
L_10672175:;
  /* 10672175 mov ecx, dword ptr [0x1068ee20] */
  ECX = (r32((uint32_t)(0x1068ee20)));
  /* 1067217b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1067217e:;
  /* 1067217e jmp 0x106723a7 */
  goto L_106723a7;
L_10672183:;
  /* 10672183 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672186 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10672189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067218b je 0x106721ad */
  if (C.zf) goto L_106721ad;
  /* 1067218d cmp dword ptr [0x1068f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672194 je 0x106721bc */
  if (C.zf) goto L_106721bc;
  /* 10672196 mov ecx, dword ptr [0x1068f7d4] */
  ECX = (r32((uint32_t)(0x1068f7d4)));
  /* 1067219c push ecx */
  push32((uint32_t)(ECX));
  /* 1067219d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106721a0 push edx */
  push32((uint32_t)(EDX));
  /* 106721a1 call 0x1066f130 */
  push32(0x106721a6u); f_1066f130();
  /* 106721a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106721a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106721ab jne 0x106721bc */
  if (!C.zf) goto L_106721bc;
L_106721ad:;
  /* 106721ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 106721af call 0x10666f40 */
  push32(0x106721b4u); f_10666f40();
  /* 106721b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106721b7 jmp 0x106723a7 */
  goto L_106723a7;
L_106721bc:;
  /* 106721bc push 2 */
  push32((uint32_t)(0x2u));
  /* 106721be mov eax, dword ptr [0x1068f7d4] */
  EAX = (r32((uint32_t)(0x1068f7d4)));
  /* 106721c3 push eax */
  push32((uint32_t)(EAX));
  /* 106721c4 call 0x10663f30 */
  push32(0x106721c9u); f_10663f30();
  /* 106721c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106721cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 106721d1 push 0x1068b928 */
  push32((uint32_t)(0x1068b928u));
  /* 106721d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106721d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106721db push ecx */
  push32((uint32_t)(ECX));
  /* 106721dc call 0x106662d0 */
  push32(0x106721e1u); f_106662d0();
  /* 106721e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106721e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106721e7 push eax */
  push32((uint32_t)(EAX));
  /* 106721e8 call 0x106634a0 */
  push32(0x106721edu); f_106634a0();
  /* 106721ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106721f0 mov dword ptr [0x1068f7d4], eax */
  w32((uint32_t)(0x1068f7d4), (EAX));
  /* 106721f5 cmp dword ptr [0x1068f7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106721fc jne 0x1067220d */
  if (!C.zf) goto L_1067220d;
  /* 106721fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 10672200 call 0x10666f40 */
  push32(0x10672205u); f_10666f40();
  /* 10672205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672208 jmp 0x106723a7 */
  goto L_106723a7;
L_1067220d:;
  /* 1067220d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672210 push edx */
  push32((uint32_t)(EDX));
  /* 10672211 mov eax, dword ptr [0x1068f7d4] */
  EAX = (r32((uint32_t)(0x1068f7d4)));
  /* 10672216 push eax */
  push32((uint32_t)(EAX));
  /* 10672217 call 0x10666450 */
  push32(0x1067221cu); f_10666450();
  /* 1067221c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067221f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10672221 call 0x10666f40 */
  push32(0x10672226u); f_10666f40();
  /* 10672226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672229 push 3 */
  push32((uint32_t)(0x3u));
  /* 1067222b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067222e push ecx */
  push32((uint32_t)(ECX));
  /* 1067222f mov edx, dword ptr [0x1068ee1c] */
  EDX = (r32((uint32_t)(0x1068ee1c)));
  /* 10672235 push edx */
  push32((uint32_t)(EDX));
  /* 10672236 call 0x10666cc0 */
  push32(0x1067223bu); f_10666cc0();
  /* 1067223b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067223e mov eax, dword ptr [0x1068ee1c] */
  EAX = (r32((uint32_t)(0x1068ee1c)));
  /* 10672243 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10672247 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067224a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067224d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10672250 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672253 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10672256 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672259 jne 0x1067226d */
  if (!C.zf) goto L_1067226d;
  /* 1067225b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067225e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10672264 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672267 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067226a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1067226d:;
  /* 1067226d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672270 push eax */
  push32((uint32_t)(EAX));
  /* 10672271 call 0x10671d50 */
  push32(0x10672276u); f_10671d50();
  /* 10672276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672279 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067227f mov dword ptr [0x1068ed90], eax */
  w32((uint32_t)(0x1068ed90), (EAX));
L_10672284:;
  /* 10672284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672287 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1067228a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067228d je 0x106722a5 */
  if (C.zf) goto L_106722a5;
  /* 1067228f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672292 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10672295 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672298 jl 0x106722b0 */
  if ((C.sf!=C.of)) goto L_106722b0;
  /* 1067229a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067229d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106722a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106722a3 jg 0x106722b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_106722b0;
L_106722a5:;
  /* 106722a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106722ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106722ae jmp 0x10672284 */
  goto L_10672284;
L_106722b0:;
  /* 106722b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106722b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106722b9 jne 0x10672355 */
  if (!C.zf) goto L_10672355;
  /* 106722bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106722c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106722c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722cb push edx */
  push32((uint32_t)(EDX));
  /* 106722cc call 0x10671d50 */
  push32(0x106722d1u); f_10671d50();
  /* 106722d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106722d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106722d7 mov ecx, dword ptr [0x1068ed90] */
  ECX = (r32((uint32_t)(0x1068ed90)));
  /* 106722dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106722df mov dword ptr [0x1068ed90], ecx */
  w32((uint32_t)(0x1068ed90), (ECX));
L_106722e5:;
  /* 106722e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106722eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106722ee jl 0x10672306 */
  if ((C.sf!=C.of)) goto L_10672306;
  /* 106722f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106722f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106722f9 jg 0x10672306 */
  if ((!C.zf&&C.sf==C.of)) goto L_10672306;
  /* 106722fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106722fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672301 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10672304 jmp 0x106722e5 */
  goto L_106722e5;
L_10672306:;
  /* 10672306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672309 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1067230c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067230f jne 0x10672355 */
  if (!C.zf) goto L_10672355;
  /* 10672311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672317 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1067231a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067231d push ecx */
  push32((uint32_t)(ECX));
  /* 1067231e call 0x10671d50 */
  push32(0x10672323u); f_10671d50();
  /* 10672323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672326 mov edx, dword ptr [0x1068ed90] */
  EDX = (r32((uint32_t)(0x1068ed90)));
  /* 1067232c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067232e mov dword ptr [0x1068ed90], edx */
  w32((uint32_t)(0x1068ed90), (EDX));
L_10672334:;
  /* 10672334 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1067233a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067233d jl 0x10672355 */
  if ((C.sf!=C.of)) goto L_10672355;
  /* 1067233f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672342 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10672345 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672348 jg 0x10672355 */
  if ((!C.zf&&C.sf==C.of)) goto L_10672355;
  /* 1067234a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067234d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672350 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10672353 jmp 0x10672334 */
  goto L_10672334;
L_10672355:;
  /* 10672355 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672359 je 0x10672369 */
  if (C.zf) goto L_10672369;
  /* 1067235b mov edx, dword ptr [0x1068ed90] */
  EDX = (r32((uint32_t)(0x1068ed90)));
  /* 10672361 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10672363 mov dword ptr [0x1068ed90], edx */
  w32((uint32_t)(0x1068ed90), (EDX));
L_10672369:;
  /* 10672369 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067236c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1067236f mov dword ptr [0x1068ed94], ecx */
  w32((uint32_t)(0x1068ed94), (ECX));
  /* 10672375 cmp dword ptr [0x1068ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067237c je 0x1067239e */
  if (C.zf) goto L_1067239e;
  /* 1067237e push 3 */
  push32((uint32_t)(0x3u));
  /* 10672380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672383 push edx */
  push32((uint32_t)(EDX));
  /* 10672384 mov eax, dword ptr [0x1068ee20] */
  EAX = (r32((uint32_t)(0x1068ee20)));
  /* 10672389 push eax */
  push32((uint32_t)(EAX));
  /* 1067238a call 0x10666cc0 */
  push32(0x1067238fu); f_10666cc0();
  /* 1067238f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672392 mov ecx, dword ptr [0x1068ee20] */
  ECX = (r32((uint32_t)(0x1068ee20)));
  /* 10672398 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1067239c jmp 0x106723a7 */
  goto L_106723a7;
L_1067239e:;
  /* 1067239e mov edx, dword ptr [0x1068ee20] */
  EDX = (r32((uint32_t)(0x1068ee20)));
  /* 106723a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_106723a7:;
  /* 106723a7 mov esp, ebp */
  ESP = (EBP);
  /* 106723a9 pop ebp */
  EBP = (pop32());
  /* 106723aa ret  */
  ESPCHK(0x10672000u, _esp0);
  ESP += 4; return;
}

/* FUN_100123b0 @ 0x106723b0 (46 bytes, 18 insns) */
void f_106723b0(void) {
  FTRACE(0x106723b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106723b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106723b1 mov ebp, esp */
  EBP = (ESP);
  /* 106723b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106723b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 106723b6 call 0x10666ea0 */
  push32(0x106723bbu); f_10666ea0();
  /* 106723bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106723be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106723c1 push eax */
  push32((uint32_t)(EAX));
  /* 106723c2 call 0x106723e0 */
  push32(0x106723c7u); f_106723e0();
  /* 106723c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106723ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106723cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 106723cf call 0x10666f40 */
  push32(0x106723d4u); f_10666f40();
  /* 106723d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106723d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106723da mov esp, ebp */
  ESP = (EBP);
  /* 106723dc pop ebp */
  EBP = (pop32());
  /* 106723dd ret  */
  ESPCHK(0x106723b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x106723e0 (762 bytes, 246 insns) */
void f_106723e0(void) {
  FTRACE(0x106723e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106723e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106723e1 mov ebp, esp */
  EBP = (ESP);
  /* 106723e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106723e4 cmp dword ptr [0x1068ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106723eb jne 0x106723f4 */
  if (!C.zf) goto L_106723f4;
  /* 106723ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106723ef jmp 0x106726d6 */
  goto L_106726d6;
L_106723f4:;
  /* 106723f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106723f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106723fa cmp ecx, dword ptr [0x1068ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672400 jne 0x10672414 */
  if (!C.zf) goto L_10672414;
  /* 10672402 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672405 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10672408 cmp eax, dword ptr [0x1068ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067240e je 0x106725db */
  if (C.zf) goto L_106725db;
L_10672414:;
  /* 10672414 cmp dword ptr [0x1068f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067241b je 0x10672595 */
  if (C.zf) goto L_10672595;
  /* 10672421 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672423 mov cx, word ptr [0x1068f7c0] */
  CX = (r16((uint32_t)(0x1068f7c0)));
  /* 1067242a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067242c jne 0x10672489 */
  if (!C.zf) goto L_10672489;
  /* 1067242e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672430 mov dx, word ptr [0x1068f7ce] */
  DX = (r16((uint32_t)(0x1068f7ce)));
  /* 10672437 push edx */
  push32((uint32_t)(EDX));
  /* 10672438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067243a mov ax, word ptr [0x1068f7cc] */
  AX = (r16((uint32_t)(0x1068f7cc)));
  /* 10672440 push eax */
  push32((uint32_t)(EAX));
  /* 10672441 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672443 mov cx, word ptr [0x1068f7ca] */
  CX = (r16((uint32_t)(0x1068f7ca)));
  /* 1067244a push ecx */
  push32((uint32_t)(ECX));
  /* 1067244b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067244d mov dx, word ptr [0x1068f7c8] */
  DX = (r16((uint32_t)(0x1068f7c8)));
  /* 10672454 push edx */
  push32((uint32_t)(EDX));
  /* 10672455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672459 mov ax, word ptr [0x1068f7c4] */
  AX = (r16((uint32_t)(0x1068f7c4)));
  /* 1067245f push eax */
  push32((uint32_t)(EAX));
  /* 10672460 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672462 mov cx, word ptr [0x1068f7c6] */
  CX = (r16((uint32_t)(0x1068f7c6)));
  /* 10672469 push ecx */
  push32((uint32_t)(ECX));
  /* 1067246a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067246c mov dx, word ptr [0x1068f7c2] */
  DX = (r16((uint32_t)(0x1068f7c2)));
  /* 10672473 push edx */
  push32((uint32_t)(EDX));
  /* 10672474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672477 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1067247a push ecx */
  push32((uint32_t)(ECX));
  /* 1067247b push 1 */
  push32((uint32_t)(0x1u));
  /* 1067247d push 1 */
  push32((uint32_t)(0x1u));
  /* 1067247f call 0x106726e0 */
  push32(0x10672484u); f_106726e0();
  /* 10672484 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672487 jmp 0x106724da */
  goto L_106724da;
L_10672489:;
  /* 10672489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067248b mov dx, word ptr [0x1068f7ce] */
  DX = (r16((uint32_t)(0x1068f7ce)));
  /* 10672492 push edx */
  push32((uint32_t)(EDX));
  /* 10672493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672495 mov ax, word ptr [0x1068f7cc] */
  AX = (r16((uint32_t)(0x1068f7cc)));
  /* 1067249b push eax */
  push32((uint32_t)(EAX));
  /* 1067249c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1067249e mov cx, word ptr [0x1068f7ca] */
  CX = (r16((uint32_t)(0x1068f7ca)));
  /* 106724a5 push ecx */
  push32((uint32_t)(ECX));
  /* 106724a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106724a8 mov dx, word ptr [0x1068f7c8] */
  DX = (r16((uint32_t)(0x1068f7c8)));
  /* 106724af push edx */
  push32((uint32_t)(EDX));
  /* 106724b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106724b2 mov ax, word ptr [0x1068f7c6] */
  AX = (r16((uint32_t)(0x1068f7c6)));
  /* 106724b8 push eax */
  push32((uint32_t)(EAX));
  /* 106724b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106724bb push 0 */
  push32((uint32_t)(0x0u));
  /* 106724bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106724bf mov cx, word ptr [0x1068f7c2] */
  CX = (r16((uint32_t)(0x1068f7c2)));
  /* 106724c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106724c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106724ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106724cd push eax */
  push32((uint32_t)(EAX));
  /* 106724ce push 0 */
  push32((uint32_t)(0x0u));
  /* 106724d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106724d2 call 0x106726e0 */
  push32(0x106724d7u); f_106726e0();
  /* 106724d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106724da:;
  /* 106724da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106724dc mov cx, word ptr [0x1068f76c] */
  CX = (r16((uint32_t)(0x1068f76c)));
  /* 106724e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106724e5 jne 0x10672542 */
  if (!C.zf) goto L_10672542;
  /* 106724e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106724e9 mov dx, word ptr [0x1068f77a] */
  DX = (r16((uint32_t)(0x1068f77a)));
  /* 106724f0 push edx */
  push32((uint32_t)(EDX));
  /* 106724f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106724f3 mov ax, word ptr [0x1068f778] */
  AX = (r16((uint32_t)(0x1068f778)));
  /* 106724f9 push eax */
  push32((uint32_t)(EAX));
  /* 106724fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106724fc mov cx, word ptr [0x1068f776] */
  CX = (r16((uint32_t)(0x1068f776)));
  /* 10672503 push ecx */
  push32((uint32_t)(ECX));
  /* 10672504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672506 mov dx, word ptr [0x1068f774] */
  DX = (r16((uint32_t)(0x1068f774)));
  /* 1067250d push edx */
  push32((uint32_t)(EDX));
  /* 1067250e push 0 */
  push32((uint32_t)(0x0u));
  /* 10672510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672512 mov ax, word ptr [0x1068f770] */
  AX = (r16((uint32_t)(0x1068f770)));
  /* 10672518 push eax */
  push32((uint32_t)(EAX));
  /* 10672519 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1067251b mov cx, word ptr [0x1068f772] */
  CX = (r16((uint32_t)(0x1068f772)));
  /* 10672522 push ecx */
  push32((uint32_t)(ECX));
  /* 10672523 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672525 mov dx, word ptr [0x1068f76e] */
  DX = (r16((uint32_t)(0x1068f76e)));
  /* 1067252c push edx */
  push32((uint32_t)(EDX));
  /* 1067252d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672530 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10672533 push ecx */
  push32((uint32_t)(ECX));
  /* 10672534 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672538 call 0x106726e0 */
  push32(0x1067253du); f_106726e0();
  /* 1067253d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672540 jmp 0x10672593 */
  goto L_10672593;
L_10672542:;
  /* 10672542 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672544 mov dx, word ptr [0x1068f77a] */
  DX = (r16((uint32_t)(0x1068f77a)));
  /* 1067254b push edx */
  push32((uint32_t)(EDX));
  /* 1067254c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067254e mov ax, word ptr [0x1068f778] */
  AX = (r16((uint32_t)(0x1068f778)));
  /* 10672554 push eax */
  push32((uint32_t)(EAX));
  /* 10672555 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672557 mov cx, word ptr [0x1068f776] */
  CX = (r16((uint32_t)(0x1068f776)));
  /* 1067255e push ecx */
  push32((uint32_t)(ECX));
  /* 1067255f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10672561 mov dx, word ptr [0x1068f774] */
  DX = (r16((uint32_t)(0x1068f774)));
  /* 10672568 push edx */
  push32((uint32_t)(EDX));
  /* 10672569 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067256b mov ax, word ptr [0x1068f772] */
  AX = (r16((uint32_t)(0x1068f772)));
  /* 10672571 push eax */
  push32((uint32_t)(EAX));
  /* 10672572 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672574 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672576 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672578 mov cx, word ptr [0x1068f76e] */
  CX = (r16((uint32_t)(0x1068f76e)));
  /* 1067257f push ecx */
  push32((uint32_t)(ECX));
  /* 10672580 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672583 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10672586 push eax */
  push32((uint32_t)(EAX));
  /* 10672587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1067258b call 0x106726e0 */
  push32(0x10672590u); f_106726e0();
  /* 10672590 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10672593:;
  /* 10672593 jmp 0x106725db */
  goto L_106725db;
L_10672595:;
  /* 10672595 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672597 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1067259b push 2 */
  push32((uint32_t)(0x2u));
  /* 1067259d push 0 */
  push32((uint32_t)(0x0u));
  /* 1067259f push 0 */
  push32((uint32_t)(0x0u));
  /* 106725a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106725a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 106725a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106725a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106725ab push edx */
  push32((uint32_t)(EDX));
  /* 106725ac push 1 */
  push32((uint32_t)(0x1u));
  /* 106725ae push 1 */
  push32((uint32_t)(0x1u));
  /* 106725b0 call 0x106726e0 */
  push32(0x106725b5u); f_106726e0();
  /* 106725b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106725b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106725ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106725bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106725be push 2 */
  push32((uint32_t)(0x2u));
  /* 106725c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106725c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106725c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 106725c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 106725c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106725cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106725ce push ecx */
  push32((uint32_t)(ECX));
  /* 106725cf push 1 */
  push32((uint32_t)(0x1u));
  /* 106725d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106725d3 call 0x106726e0 */
  push32(0x106725d8u); f_106726e0();
  /* 106725d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106725db:;
  /* 106725db mov edx, dword ptr [0x1068ee2c] */
  EDX = (r32((uint32_t)(0x1068ee2c)));
  /* 106725e1 cmp edx, dword ptr [0x1068ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106725e7 jge 0x10672634 */
  if ((C.sf==C.of)) goto L_10672634;
  /* 106725e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106725ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 106725ef cmp ecx, dword ptr [0x1068ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106725f5 jl 0x10672605 */
  if ((C.sf!=C.of)) goto L_10672605;
  /* 106725f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106725fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 106725fd cmp eax, dword ptr [0x1068ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672603 jle 0x1067260c */
  if ((C.zf||C.sf!=C.of)) goto L_1067260c;
L_10672605:;
  /* 10672605 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672607 jmp 0x106726d6 */
  goto L_106726d6;
L_1067260c:;
  /* 1067260c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067260f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10672612 cmp edx, dword ptr [0x1068ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672618 jle 0x10672632 */
  if ((C.zf||C.sf!=C.of)) goto L_10672632;
  /* 1067261a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067261d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10672620 cmp ecx, dword ptr [0x1068ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672626 jge 0x10672632 */
  if ((C.sf==C.of)) goto L_10672632;
  /* 10672628 mov eax, 1 */
  EAX = (0x1u);
  /* 1067262d jmp 0x106726d6 */
  goto L_106726d6;
L_10672632:;
  /* 10672632 jmp 0x10672677 */
  goto L_10672677;
L_10672634:;
  /* 10672634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672637 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1067263a cmp eax, dword ptr [0x1068ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672640 jl 0x10672650 */
  if ((C.sf!=C.of)) goto L_10672650;
  /* 10672642 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672645 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10672648 cmp edx, dword ptr [0x1068ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067264e jle 0x10672657 */
  if ((C.zf||C.sf!=C.of)) goto L_10672657;
L_10672650:;
  /* 10672650 mov eax, 1 */
  EAX = (0x1u);
  /* 10672655 jmp 0x106726d6 */
  goto L_106726d6;
L_10672657:;
  /* 10672657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067265a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1067265d cmp ecx, dword ptr [0x1068ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672663 jle 0x10672677 */
  if ((C.zf||C.sf!=C.of)) goto L_10672677;
  /* 10672665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672668 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1067266b cmp eax, dword ptr [0x1068ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672671 jge 0x10672677 */
  if ((C.sf==C.of)) goto L_10672677;
  /* 10672673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672675 jmp 0x106726d6 */
  goto L_106726d6;
L_10672677:;
  /* 10672677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067267a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1067267d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672683 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10672685 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067268a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1067268d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672693 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672695 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067269b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1067269e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106726a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 106726a4 cmp edx, dword ptr [0x1068ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1068ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106726aa jne 0x106726c2 */
  if (!C.zf) goto L_106726c2;
  /* 106726ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106726af cmp eax, dword ptr [0x1068ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106726b5 jl 0x106726be */
  if ((C.sf!=C.of)) goto L_106726be;
  /* 106726b7 mov eax, 1 */
  EAX = (0x1u);
  /* 106726bc jmp 0x106726d6 */
  goto L_106726d6;
L_106726be:;
  /* 106726be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106726c0 jmp 0x106726d6 */
  goto L_106726d6;
L_106726c2:;
  /* 106726c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106726c5 cmp ecx, dword ptr [0x1068ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106726cb jge 0x106726d4 */
  if ((C.sf==C.of)) goto L_106726d4;
  /* 106726cd mov eax, 1 */
  EAX = (0x1u);
  /* 106726d2 jmp 0x106726d6 */
  goto L_106726d6;
L_106726d4:;
  /* 106726d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106726d6:;
  /* 106726d6 mov esp, ebp */
  ESP = (EBP);
  /* 106726d8 pop ebp */
  EBP = (pop32());
  /* 106726d9 ret  */
  ESPCHK(0x106723e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126e0 @ 0x106726e0 (504 bytes, 145 insns) */
void f_106726e0(void) {
  FTRACE(0x106726e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106726e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106726e1 mov ebp, esp */
  EBP = (ESP);
  /* 106726e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106726e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106726ea jne 0x106727bc */
  if (!C.zf) goto L_106727bc;
  /* 106726f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106726f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 106726f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106726f8 jne 0x10672709 */
  if (!C.zf) goto L_10672709;
  /* 106726fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106726fd mov edx, dword ptr [ecx*4 + 0x1068ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068ee4c)));
  /* 10672704 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10672707 jmp 0x10672716 */
  goto L_10672716;
L_10672709:;
  /* 10672709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067270c mov ecx, dword ptr [eax*4 + 0x1068ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068ee80)));
  /* 10672713 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10672716:;
  /* 10672716 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672719 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067271c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1067271f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672722 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672725 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067272b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067272e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672733 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672736 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10672739 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1067273d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1067273e mov ecx, 7 */
  ECX = (0x7u);
  /* 10672743 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10672745 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10672748 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067274b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067274e jge 0x10672769 */
  if ((C.sf==C.of)) goto L_10672769;
  /* 10672750 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10672753 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672756 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672759 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067275c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067275f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672762 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672764 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10672767 jmp 0x1067277d */
  goto L_1067277d;
L_10672769:;
  /* 10672769 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1067276c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067276f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672772 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672775 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672778 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067277a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1067277d:;
  /* 1067277d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672781 jne 0x106727ba */
  if (!C.zf) goto L_106727ba;
  /* 10672783 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672786 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10672789 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067278b jne 0x1067279c */
  if (!C.zf) goto L_1067279c;
  /* 1067278d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10672790 mov eax, dword ptr [edx*4 + 0x1068ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068ee50)));
  /* 10672797 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1067279a jmp 0x106727a9 */
  goto L_106727a9;
L_1067279c:;
  /* 1067279c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067279f mov edx, dword ptr [ecx*4 + 0x1068ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1068ee84)));
  /* 106727a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_106727a9:;
  /* 106727a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106727ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106727af jle 0x106727ba */
  if ((C.zf||C.sf!=C.of)) goto L_106727ba;
  /* 106727b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106727b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106727b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106727ba:;
  /* 106727ba jmp 0x106727f1 */
  goto L_106727f1;
L_106727bc:;
  /* 106727bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106727bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106727c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106727c4 jne 0x106727d5 */
  if (!C.zf) goto L_106727d5;
  /* 106727c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106727c9 mov ecx, dword ptr [eax*4 + 0x1068ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1068ee4c)));
  /* 106727d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106727d3 jmp 0x106727e2 */
  goto L_106727e2;
L_106727d5:;
  /* 106727d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106727d8 mov eax, dword ptr [edx*4 + 0x1068ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1068ee80)));
  /* 106727df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106727e2:;
  /* 106727e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106727e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106727e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106727eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106727ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106727f1:;
  /* 106727f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106727f5 jne 0x10672831 */
  if (!C.zf) goto L_10672831;
  /* 106727f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106727fa mov dword ptr [0x1068ee2c], eax */
  w32((uint32_t)(0x1068ee2c), (EAX));
  /* 106727ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10672802 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672805 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10672808 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067280a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067280d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10672810 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672812 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672818 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1067281b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067281d mov dword ptr [0x1068ee30], ecx */
  w32((uint32_t)(0x1068ee30), (ECX));
  /* 10672823 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672826 mov dword ptr [0x1068ee28], edx */
  w32((uint32_t)(0x1068ee28), (EDX));
  /* 1067282c jmp 0x106728d4 */
  goto L_106728d4;
L_10672831:;
  /* 10672831 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672834 mov dword ptr [0x1068ee3c], eax */
  w32((uint32_t)(0x1068ee3c), (EAX));
  /* 10672839 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1067283c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1067283f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10672842 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672844 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672847 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1067284a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067284c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672852 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10672855 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672857 mov dword ptr [0x1068ee40], ecx */
  w32((uint32_t)(0x1068ee40), (ECX));
  /* 1067285d mov edx, dword ptr [0x1068ed98] */
  EDX = (r32((uint32_t)(0x1068ed98)));
  /* 10672863 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10672869 mov eax, dword ptr [0x1068ee40] */
  EAX = (r32((uint32_t)(0x1068ee40)));
  /* 1067286e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672870 mov dword ptr [0x1068ee40], eax */
  w32((uint32_t)(0x1068ee40), (EAX));
  /* 10672875 cmp dword ptr [0x1068ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067287c jge 0x106728a1 */
  if ((C.sf==C.of)) goto L_106728a1;
  /* 1067287e mov ecx, dword ptr [0x1068ee40] */
  ECX = (r32((uint32_t)(0x1068ee40)));
  /* 10672884 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067288a mov dword ptr [0x1068ee40], ecx */
  w32((uint32_t)(0x1068ee40), (ECX));
  /* 10672890 mov edx, dword ptr [0x1068ee3c] */
  EDX = (r32((uint32_t)(0x1068ee3c)));
  /* 10672896 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672899 mov dword ptr [0x1068ee3c], edx */
  w32((uint32_t)(0x1068ee3c), (EDX));
  /* 1067289f jmp 0x106728cb */
  goto L_106728cb;
L_106728a1:;
  /* 106728a1 cmp dword ptr [0x1068ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1068ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106728ab jl 0x106728cb */
  if ((C.sf!=C.of)) goto L_106728cb;
  /* 106728ad mov eax, dword ptr [0x1068ee40] */
  EAX = (r32((uint32_t)(0x1068ee40)));
  /* 106728b2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106728b7 mov dword ptr [0x1068ee40], eax */
  w32((uint32_t)(0x1068ee40), (EAX));
  /* 106728bc mov ecx, dword ptr [0x1068ee3c] */
  ECX = (r32((uint32_t)(0x1068ee3c)));
  /* 106728c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106728c5 mov dword ptr [0x1068ee3c], ecx */
  w32((uint32_t)(0x1068ee3c), (ECX));
L_106728cb:;
  /* 106728cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106728ce mov dword ptr [0x1068ee38], edx */
  w32((uint32_t)(0x1068ee38), (EDX));
L_106728d4:;
  /* 106728d4 mov esp, ebp */
  ESP = (EBP);
  /* 106728d6 pop ebp */
  EBP = (pop32());
  /* 106728d7 ret  */
  ESPCHK(0x106726e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x106728e0 (382 bytes, 135 insns) */
void f_106728e0(void) {
  FTRACE(0x106728e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106728e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106728e1 mov ebp, esp */
  EBP = (ESP);
  /* 106728e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106728e5 push 0x1068b938 */
  push32((uint32_t)(0x1068b938u));
  /* 106728ea push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 106728ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 106728f5 push eax */
  push32((uint32_t)(EAX));
  /* 106728f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 106728fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672900 push ebx */
  push32((uint32_t)(EBX));
  /* 10672901 push esi */
  push32((uint32_t)(ESI));
  /* 10672902 push edi */
  push32((uint32_t)(EDI));
  /* 10672903 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10672906 cmp dword ptr [0x1068f7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067290d jne 0x10672952 */
  if (!C.zf) goto L_10672952;
  /* 1067290f push 0 */
  push32((uint32_t)(0x0u));
  /* 10672911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672917 call dword ptr [0x10691260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691260))), 0x1067291du);
  /* 1067291d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067291f je 0x1067292d */
  if (C.zf) goto L_1067292d;
  /* 10672921 mov dword ptr [0x1068f7dc], 1 */
  w32((uint32_t)(0x1068f7dc), (0x1u));
  /* 1067292b jmp 0x10672952 */
  goto L_10672952;
L_1067292d:;
  /* 1067292d push 0 */
  push32((uint32_t)(0x0u));
  /* 1067292f push 0 */
  push32((uint32_t)(0x0u));
  /* 10672931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672933 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672935 call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x1067293bu);
  /* 1067293b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067293d je 0x1067294b */
  if (C.zf) goto L_1067294b;
  /* 1067293f mov dword ptr [0x1068f7dc], 2 */
  w32((uint32_t)(0x1068f7dc), (0x2u));
  /* 10672949 jmp 0x10672952 */
  goto L_10672952;
L_1067294b:;
  /* 1067294b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067294d jmp 0x10672a61 */
  goto L_10672a61;
L_10672952:;
  /* 10672952 cmp dword ptr [0x1068f7dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672959 jne 0x10672976 */
  if (!C.zf) goto L_10672976;
  /* 1067295b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067295e push eax */
  push32((uint32_t)(EAX));
  /* 1067295f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672962 push ecx */
  push32((uint32_t)(ECX));
  /* 10672963 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672966 push edx */
  push32((uint32_t)(EDX));
  /* 10672967 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067296a push eax */
  push32((uint32_t)(EAX));
  /* 1067296b call dword ptr [0x10691260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691260))), 0x10672971u);
  /* 10672971 jmp 0x10672a61 */
  goto L_10672a61;
L_10672976:;
  /* 10672976 cmp dword ptr [0x1068f7dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067297d jne 0x10672a5f */
  if (!C.zf) goto L_10672a5f;
  /* 10672983 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672987 jne 0x10672992 */
  if (!C.zf) goto L_10672992;
  /* 10672989 mov ecx, dword ptr [0x1068f690] */
  ECX = (r32((uint32_t)(0x1068f690)));
  /* 1067298f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10672992:;
  /* 10672992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672996 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672999 push edx */
  push32((uint32_t)(EDX));
  /* 1067299a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067299d push eax */
  push32((uint32_t)(EAX));
  /* 1067299e call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x106729a4u);
  /* 106729a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106729a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106729ab jne 0x106729b4 */
  if (!C.zf) goto L_106729b4;
  /* 106729ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106729af jmp 0x10672a61 */
  goto L_10672a61;
L_106729b4:;
  /* 106729b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106729bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 106729be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106729c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106729c3 call 0x10666640 */
  push32(0x106729c8u); f_10666640();
  /* 106729c8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 106729cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106729ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 106729d1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106729d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106729db jmp 0x106729f4 */
  goto L_106729f4;
  /* 106729dd mov eax, 1 */
  EAX = (0x1u);
  /* 106729e2 ret  */
  ESPCHK(0x106728e0u, _esp0);
  ESP += 4; return;
  /* 106729e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106729e6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 106729ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106729f4:;
  /* 106729f4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106729f8 jne 0x106729fe */
  if (!C.zf) goto L_106729fe;
  /* 106729fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106729fc jmp 0x10672a61 */
  goto L_10672a61;
L_106729fe:;
  /* 106729fe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10672a01 push edx */
  push32((uint32_t)(EDX));
  /* 10672a02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672a05 push eax */
  push32((uint32_t)(EAX));
  /* 10672a06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672a09 push ecx */
  push32((uint32_t)(ECX));
  /* 10672a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672a0d push edx */
  push32((uint32_t)(EDX));
  /* 10672a0e call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x10672a14u);
  /* 10672a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672a16 jne 0x10672a1c */
  if (!C.zf) goto L_10672a1c;
  /* 10672a18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672a1a jmp 0x10672a61 */
  goto L_10672a61;
L_10672a1c:;
  /* 10672a1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672a20 jne 0x10672a3d */
  if (!C.zf) goto L_10672a3d;
  /* 10672a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672a26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672a28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672a2b push eax */
  push32((uint32_t)(EAX));
  /* 10672a2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10672a2e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672a31 push ecx */
  push32((uint32_t)(ECX));
  /* 10672a32 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x10672a38u);
  /* 10672a38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10672a3b jmp 0x10672a5a */
  goto L_10672a5a;
L_10672a3d:;
  /* 10672a3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10672a40 push edx */
  push32((uint32_t)(EDX));
  /* 10672a41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672a44 push eax */
  push32((uint32_t)(EAX));
  /* 10672a45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672a47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672a4a push ecx */
  push32((uint32_t)(ECX));
  /* 10672a4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10672a4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672a50 push edx */
  push32((uint32_t)(EDX));
  /* 10672a51 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x10672a57u);
  /* 10672a57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10672a5a:;
  /* 10672a5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10672a5d jmp 0x10672a61 */
  goto L_10672a61;
L_10672a5f:;
  /* 10672a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10672a61:;
  /* 10672a61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10672a64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10672a67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10672a6e pop edi */
  EDI = (pop32());
  /* 10672a6f pop esi */
  ESI = (pop32());
  /* 10672a70 pop ebx */
  EBX = (pop32());
  /* 10672a71 mov esp, ebp */
  ESP = (EBP);
  /* 10672a73 pop ebp */
  EBP = (pop32());
  /* 10672a74 ret  */
  ESPCHK(0x106728e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x10672a80 (398 bytes, 140 insns) */
void f_10672a80(void) {
  FTRACE(0x10672a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10672a81 mov ebp, esp */
  EBP = (ESP);
  /* 10672a83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672a85 push 0x1068b948 */
  push32((uint32_t)(0x1068b948u));
  /* 10672a8a push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 10672a8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10672a95 push eax */
  push32((uint32_t)(EAX));
  /* 10672a96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10672a9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672aa0 push ebx */
  push32((uint32_t)(EBX));
  /* 10672aa1 push esi */
  push32((uint32_t)(ESI));
  /* 10672aa2 push edi */
  push32((uint32_t)(EDI));
  /* 10672aa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10672aa6 cmp dword ptr [0x1068f7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672aad jne 0x10672af2 */
  if (!C.zf) goto L_10672af2;
  /* 10672aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10672ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672ab7 call dword ptr [0x10691260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691260))), 0x10672abdu);
  /* 10672abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672abf je 0x10672acd */
  if (C.zf) goto L_10672acd;
  /* 10672ac1 mov dword ptr [0x1068f7e0], 1 */
  w32((uint32_t)(0x1068f7e0), (0x1u));
  /* 10672acb jmp 0x10672af2 */
  goto L_10672af2;
L_10672acd:;
  /* 10672acd push 0 */
  push32((uint32_t)(0x0u));
  /* 10672acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10672ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672ad5 call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x10672adbu);
  /* 10672adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672add je 0x10672aeb */
  if (C.zf) goto L_10672aeb;
  /* 10672adf mov dword ptr [0x1068f7e0], 2 */
  w32((uint32_t)(0x1068f7e0), (0x2u));
  /* 10672ae9 jmp 0x10672af2 */
  goto L_10672af2;
L_10672aeb:;
  /* 10672aeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672aed jmp 0x10672c11 */
  goto L_10672c11;
L_10672af2:;
  /* 10672af2 cmp dword ptr [0x1068f7e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672af9 jne 0x10672b16 */
  if (!C.zf) goto L_10672b16;
  /* 10672afb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10672afe push eax */
  push32((uint32_t)(EAX));
  /* 10672aff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672b02 push ecx */
  push32((uint32_t)(ECX));
  /* 10672b03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672b06 push edx */
  push32((uint32_t)(EDX));
  /* 10672b07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672b0a push eax */
  push32((uint32_t)(EAX));
  /* 10672b0b call dword ptr [0x10691278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691278))), 0x10672b11u);
  /* 10672b11 jmp 0x10672c11 */
  goto L_10672c11;
L_10672b16:;
  /* 10672b16 cmp dword ptr [0x1068f7e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672b1d jne 0x10672c0f */
  if (!C.zf) goto L_10672c0f;
  /* 10672b23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672b27 jne 0x10672b32 */
  if (!C.zf) goto L_10672b32;
  /* 10672b29 mov ecx, dword ptr [0x1068f690] */
  ECX = (r32((uint32_t)(0x1068f690)));
  /* 10672b2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10672b32:;
  /* 10672b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672b36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672b39 push edx */
  push32((uint32_t)(EDX));
  /* 10672b3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672b3d push eax */
  push32((uint32_t)(EAX));
  /* 10672b3e call dword ptr [0x10691260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691260))), 0x10672b44u);
  /* 10672b44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10672b47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672b4b jne 0x10672b54 */
  if (!C.zf) goto L_10672b54;
  /* 10672b4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672b4f jmp 0x10672c11 */
  goto L_10672c11;
L_10672b54:;
  /* 10672b54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10672b5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10672b5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10672b60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672b63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10672b65 call 0x10666640 */
  push32(0x10672b6au); f_10666640();
  /* 10672b6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10672b6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10672b70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10672b73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10672b76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10672b7d jmp 0x10672b96 */
  goto L_10672b96;
  /* 10672b7f mov eax, 1 */
  EAX = (0x1u);
  /* 10672b84 ret  */
  ESPCHK(0x10672a80u, _esp0);
  ESP += 4; return;
  /* 10672b85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10672b88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10672b8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10672b96:;
  /* 10672b96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672b9a jne 0x10672ba0 */
  if (!C.zf) goto L_10672ba0;
  /* 10672b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672b9e jmp 0x10672c11 */
  goto L_10672c11;
L_10672ba0:;
  /* 10672ba0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10672ba3 push edx */
  push32((uint32_t)(EDX));
  /* 10672ba4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672ba7 push eax */
  push32((uint32_t)(EAX));
  /* 10672ba8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672bab push ecx */
  push32((uint32_t)(ECX));
  /* 10672bac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672baf push edx */
  push32((uint32_t)(EDX));
  /* 10672bb0 call dword ptr [0x10691260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691260))), 0x10672bb6u);
  /* 10672bb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672bb8 jne 0x10672bbe */
  if (!C.zf) goto L_10672bbe;
  /* 10672bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672bbc jmp 0x10672c11 */
  goto L_10672c11;
L_10672bbe:;
  /* 10672bbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672bc2 jne 0x10672be6 */
  if (!C.zf) goto L_10672be6;
  /* 10672bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672bca push 0 */
  push32((uint32_t)(0x0u));
  /* 10672bcc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672bce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672bd1 push eax */
  push32((uint32_t)(EAX));
  /* 10672bd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10672bd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672bda push ecx */
  push32((uint32_t)(ECX));
  /* 10672bdb call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10672be1u);
  /* 10672be1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10672be4 jmp 0x10672c0a */
  goto L_10672c0a;
L_10672be6:;
  /* 10672be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672bea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10672bed push edx */
  push32((uint32_t)(EDX));
  /* 10672bee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672bf1 push eax */
  push32((uint32_t)(EAX));
  /* 10672bf2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672bf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10672bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10672bf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10672bfd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10672c00 push edx */
  push32((uint32_t)(EDX));
  /* 10672c01 call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10672c07u);
  /* 10672c07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10672c0a:;
  /* 10672c0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10672c0d jmp 0x10672c11 */
  goto L_10672c11;
L_10672c0f:;
  /* 10672c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10672c11:;
  /* 10672c11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10672c14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10672c17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10672c1e pop edi */
  EDI = (pop32());
  /* 10672c1f pop esi */
  ESI = (pop32());
  /* 10672c20 pop ebx */
  EBX = (pop32());
  /* 10672c21 mov esp, ebp */
  ESP = (EBP);
  /* 10672c23 pop ebp */
  EBP = (pop32());
  /* 10672c24 ret  */
  ESPCHK(0x10672a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c30 @ 0x10672c30 (11 bytes, 6 insns) */
void f_10672c30(void) {
  FTRACE(0x10672c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10672c31 mov ebp, esp */
  EBP = (ESP);
  /* 10672c33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672c36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672c39 pop ebp */
  EBP = (pop32());
  /* 10672c3a ret  */
  ESPCHK(0x10672c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c40 @ 0x10672c40 (147 bytes, 43 insns) */
void f_10672c40(void) {
  FTRACE(0x10672c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10672c41 mov ebp, esp */
  EBP = (ESP);
  /* 10672c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10672c44 cmp dword ptr [0x1068f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672c4b jne 0x10672c67 */
  if (!C.zf) goto L_10672c67;
  /* 10672c4d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672c51 jl 0x10672c62 */
  if ((C.sf!=C.of)) goto L_10672c62;
  /* 10672c53 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672c57 jg 0x10672c62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10672c62;
  /* 10672c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672c5c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672c5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10672c62:;
  /* 10672c62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672c65 jmp 0x10672ccf */
  goto L_10672ccf;
L_10672c67:;
  /* 10672c67 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 10672c6c call dword ptr [0x106912c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912c8))), 0x10672c72u);
  /* 10672c72 cmp dword ptr [0x1068f7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672c79 je 0x10672c99 */
  if (C.zf) goto L_10672c99;
  /* 10672c7b push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 10672c80 call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x10672c86u);
  /* 10672c86 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10672c88 call 0x10666ea0 */
  push32(0x10672c8du); f_10666ea0();
  /* 10672c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672c90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10672c97 jmp 0x10672ca0 */
  goto L_10672ca0;
L_10672c99:;
  /* 10672c99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10672ca0:;
  /* 10672ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10672ca4 call 0x10672ce0 */
  push32(0x10672ca9u); f_10672ce0();
  /* 10672ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672cac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10672caf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672cb3 je 0x10672cc1 */
  if (C.zf) goto L_10672cc1;
  /* 10672cb5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10672cb7 call 0x10666f40 */
  push32(0x10672cbcu); f_10666f40();
  /* 10672cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672cbf jmp 0x10672ccc */
  goto L_10672ccc;
L_10672cc1:;
  /* 10672cc1 push 0x1068f80c */
  push32((uint32_t)(0x1068f80cu));
  /* 10672cc6 call dword ptr [0x106912b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106912b8))), 0x10672cccu);
L_10672ccc:;
  /* 10672ccc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10672ccf:;
  /* 10672ccf mov esp, ebp */
  ESP = (EBP);
  /* 10672cd1 pop ebp */
  EBP = (pop32());
  /* 10672cd2 ret  */
  ESPCHK(0x10672c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x10672ce0 (299 bytes, 91 insns) */
void f_10672ce0(void) {
  FTRACE(0x10672ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10672ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10672ce3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672ce6 cmp dword ptr [0x1068f680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672ced jne 0x10672d0c */
  if (!C.zf) goto L_10672d0c;
  /* 10672cef cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672cf3 jl 0x10672d04 */
  if ((C.sf!=C.of)) goto L_10672d04;
  /* 10672cf5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672cf9 jg 0x10672d04 */
  if ((!C.zf&&C.sf==C.of)) goto L_10672d04;
  /* 10672cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672cfe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672d01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10672d04:;
  /* 10672d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d07 jmp 0x10672e07 */
  goto L_10672e07;
L_10672d0c:;
  /* 10672d0c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672d13 jge 0x10672d53 */
  if ((C.sf==C.of)) goto L_10672d53;
  /* 10672d15 cmp dword ptr [0x1068dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672d1c jle 0x10672d31 */
  if ((C.zf||C.sf!=C.of)) goto L_10672d31;
  /* 10672d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10672d20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10672d24 call 0x106694b0 */
  push32(0x10672d29u); f_106694b0();
  /* 10672d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672d2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10672d2f jmp 0x10672d45 */
  goto L_10672d45;
L_10672d31:;
  /* 10672d31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d34 mov eax, dword ptr [0x1068dc98] */
  EAX = (r32((uint32_t)(0x1068dc98)));
  /* 10672d39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672d3b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10672d3f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10672d42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10672d45:;
  /* 10672d45 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672d49 jne 0x10672d53 */
  if (!C.zf) goto L_10672d53;
  /* 10672d4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d4e jmp 0x10672e07 */
  goto L_10672e07;
L_10672d53:;
  /* 10672d53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d56 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10672d59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10672d5f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10672d65 mov eax, dword ptr [0x1068dc98] */
  EAX = (r32((uint32_t)(0x1068dc98)));
  /* 10672d6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10672d6c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10672d70 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10672d76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10672d78 je 0x10672d9c */
  if (C.zf) goto L_10672d9c;
  /* 10672d7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672d7d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10672d80 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10672d86 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10672d89 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10672d8c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10672d8f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10672d93 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10672d9a jmp 0x10672dad */
  goto L_10672dad;
L_10672d9c:;
  /* 10672d9c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10672d9f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10672da2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10672da6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10672dad:;
  /* 10672dad push 1 */
  push32((uint32_t)(0x1u));
  /* 10672daf push 0 */
  push32((uint32_t)(0x0u));
  /* 10672db1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10672db3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10672db6 push edx */
  push32((uint32_t)(EDX));
  /* 10672db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672dba push eax */
  push32((uint32_t)(EAX));
  /* 10672dbb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10672dbe push ecx */
  push32((uint32_t)(ECX));
  /* 10672dbf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10672dc4 mov edx, dword ptr [0x1068f680] */
  EDX = (r32((uint32_t)(0x1068f680)));
  /* 10672dca push edx */
  push32((uint32_t)(EDX));
  /* 10672dcb call 0x1066b890 */
  push32(0x10672dd0u); f_1066b890();
  /* 10672dd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672dd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10672dd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672dda jne 0x10672de1 */
  if (!C.zf) goto L_10672de1;
  /* 10672ddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672ddf jmp 0x10672e07 */
  goto L_10672e07;
L_10672de1:;
  /* 10672de1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672de5 jne 0x10672df1 */
  if (!C.zf) goto L_10672df1;
  /* 10672de7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672dea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10672def jmp 0x10672e07 */
  goto L_10672e07;
L_10672df1:;
  /* 10672df1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672df4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10672df9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10672dfc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10672e02 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10672e05 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10672e07:;
  /* 10672e07 mov esp, ebp */
  ESP = (EBP);
  /* 10672e09 pop ebp */
  EBP = (pop32());
  /* 10672e0a ret  */
  ESPCHK(0x10672ce0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10672e10 (52 bytes, 19 insns) */
void f_10672e10(void) {
  FTRACE(0x10672e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672e10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10672e14 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10672e18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10672e1a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10672e1e jne 0x10672e29 */
  if (!C.zf) goto L_10672e29;
  /* 10672e20 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10672e24 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10672e26 ret 0x10 */
  ESPCHK(0x10672e10u, _esp0);
  ESP += 20; return;
L_10672e29:;
  /* 10672e29 push ebx */
  push32((uint32_t)(EBX));
  /* 10672e2a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10672e2c mov ebx, eax */
  EBX = (EAX);
  /* 10672e2e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10672e32 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10672e36 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672e38 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10672e3c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10672e3e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672e40 pop ebx */
  EBX = (pop32());
  /* 10672e41 ret 0x10 */
  ESPCHK(0x10672e10u, _esp0);
  ESP += 20; return;
}

/* FUN_10012e50 @ 0x10672e50 (46 bytes, 18 insns) */
void f_10672e50(void) {
  FTRACE(0x10672e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10672e51 mov ebp, esp */
  EBP = (ESP);
  /* 10672e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10672e54 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10672e56 call 0x10666ea0 */
  push32(0x10672e5bu); f_10666ea0();
  /* 10672e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672e61 push eax */
  push32((uint32_t)(EAX));
  /* 10672e62 call 0x10672e80 */
  push32(0x10672e67u); f_10672e80();
  /* 10672e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10672e6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10672e6f call 0x10666f40 */
  push32(0x10672e74u); f_10666f40();
  /* 10672e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672e7a mov esp, ebp */
  ESP = (EBP);
  /* 10672e7c pop ebp */
  EBP = (pop32());
  /* 10672e7d ret  */
  ESPCHK(0x10672e50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10672e80 (198 bytes, 69 insns) */
void f_10672e80(void) {
  FTRACE(0x10672e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10672e81 mov ebp, esp */
  EBP = (ESP);
  /* 10672e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672e86 mov eax, dword ptr [0x1068f49c] */
  EAX = (r32((uint32_t)(0x1068f49c)));
  /* 10672e8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10672e8e cmp dword ptr [0x10690fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672e95 jne 0x10672e9e */
  if (!C.zf) goto L_10672e9e;
  /* 10672e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672e99 jmp 0x10672f42 */
  goto L_10672f42;
L_10672e9e:;
  /* 10672e9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672ea2 jne 0x10672ec6 */
  if (!C.zf) goto L_10672ec6;
  /* 10672ea4 cmp dword ptr [0x1068f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672eab je 0x10672ec6 */
  if (C.zf) goto L_10672ec6;
  /* 10672ead call 0x10672fa0 */
  push32(0x10672eb2u); f_10672fa0();
  /* 10672eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672eb4 je 0x10672ebd */
  if (C.zf) goto L_10672ebd;
  /* 10672eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672eb8 jmp 0x10672f42 */
  goto L_10672f42;
L_10672ebd:;
  /* 10672ebd mov ecx, dword ptr [0x1068f49c] */
  ECX = (r32((uint32_t)(0x1068f49c)));
  /* 10672ec3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10672ec6:;
  /* 10672ec6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672eca je 0x10672f40 */
  if (C.zf) goto L_10672f40;
  /* 10672ecc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672ed0 je 0x10672f40 */
  if (C.zf) goto L_10672f40;
  /* 10672ed2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672ed5 push edx */
  push32((uint32_t)(EDX));
  /* 10672ed6 call 0x106662d0 */
  push32(0x10672edbu); f_106662d0();
  /* 10672edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672ede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10672ee1:;
  /* 10672ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672ee4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672ee7 je 0x10672f40 */
  if (C.zf) goto L_10672f40;
  /* 10672ee9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672eec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10672eee push edx */
  push32((uint32_t)(EDX));
  /* 10672eef call 0x106662d0 */
  push32(0x10672ef4u); f_106662d0();
  /* 10672ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672ef7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672efa jbe 0x10672f35 */
  if ((C.cf||C.zf)) goto L_10672f35;
  /* 10672efc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672eff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10672f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672f04 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10672f08 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672f0b jne 0x10672f35 */
  if (!C.zf) goto L_10672f35;
  /* 10672f0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672f10 push ecx */
  push32((uint32_t)(ECX));
  /* 10672f11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672f14 push edx */
  push32((uint32_t)(EDX));
  /* 10672f15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672f18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10672f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10672f1b call 0x10672f50 */
  push32(0x10672f20u); f_10672f50();
  /* 10672f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10672f25 jne 0x10672f35 */
  if (!C.zf) goto L_10672f35;
  /* 10672f27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672f2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10672f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672f2f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10672f33 jmp 0x10672f42 */
  goto L_10672f42;
L_10672f35:;
  /* 10672f35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10672f38 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10672f3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10672f3e jmp 0x10672ee1 */
  goto L_10672ee1;
L_10672f40:;
  /* 10672f40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10672f42:;
  /* 10672f42 mov esp, ebp */
  ESP = (EBP);
  /* 10672f44 pop ebp */
  EBP = (pop32());
  /* 10672f45 ret  */
  ESPCHK(0x10672e80u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10672f50 (79 bytes, 32 insns) */
void f_10672f50(void) {
  FTRACE(0x10672f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10672f51 mov ebp, esp */
  EBP = (ESP);
  /* 10672f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10672f54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672f58 jne 0x10672f5e */
  if (!C.zf) goto L_10672f5e;
  /* 10672f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10672f5c jmp 0x10672f9b */
  goto L_10672f9b;
L_10672f5e:;
  /* 10672f5e mov eax, dword ptr [0x10690b64] */
  EAX = (r32((uint32_t)(0x10690b64)));
  /* 10672f63 push eax */
  push32((uint32_t)(EAX));
  /* 10672f64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672f67 push ecx */
  push32((uint32_t)(ECX));
  /* 10672f68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10672f6b push edx */
  push32((uint32_t)(EDX));
  /* 10672f6c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10672f6f push eax */
  push32((uint32_t)(EAX));
  /* 10672f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10672f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10672f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10672f76 mov edx, dword ptr [0x10690e04] */
  EDX = (r32((uint32_t)(0x10690e04)));
  /* 10672f7c push edx */
  push32((uint32_t)(EDX));
  /* 10672f7d call 0x10673050 */
  push32(0x10672f82u); f_10673050();
  /* 10672f82 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672f85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10672f88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672f8c jne 0x10672f95 */
  if (!C.zf) goto L_10672f95;
  /* 10672f8e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10672f93 jmp 0x10672f9b */
  goto L_10672f9b;
L_10672f95:;
  /* 10672f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672f98 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10672f9b:;
  /* 10672f9b mov esp, ebp */
  ESP = (EBP);
  /* 10672f9d pop ebp */
  EBP = (pop32());
  /* 10672f9e ret  */
  ESPCHK(0x10672f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x10672fa0 (174 bytes, 66 insns) */
void f_10672fa0(void) {
  FTRACE(0x10672fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10672fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10672fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10672fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10672fa6 mov eax, dword ptr [0x1068f4a4] */
  EAX = (r32((uint32_t)(0x1068f4a4)));
  /* 10672fab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10672fae:;
  /* 10672fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672fb1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672fb4 je 0x10673048 */
  if (C.zf) goto L_10673048;
  /* 10672fba push 0 */
  push32((uint32_t)(0x0u));
  /* 10672fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10672fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10672fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10672fc2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10672fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10672fc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10672fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10672fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10672fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 10672fce call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10672fd4u);
  /* 10672fd4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10672fd7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672fdb jne 0x10672fe2 */
  if (!C.zf) goto L_10672fe2;
  /* 10672fdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10672fe0 jmp 0x1067304a */
  goto L_1067304a;
L_10672fe2:;
  /* 10672fe2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10672fe4 push 0x1068b954 */
  push32((uint32_t)(0x1068b954u));
  /* 10672fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10672feb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10672fee push ecx */
  push32((uint32_t)(ECX));
  /* 10672fef call 0x106634a0 */
  push32(0x10672ff4u); f_106634a0();
  /* 10672ff4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10672ff7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10672ffa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10672ffe jne 0x10673005 */
  if (!C.zf) goto L_10673005;
  /* 10673000 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10673003 jmp 0x1067304a */
  goto L_1067304a;
L_10673005:;
  /* 10673005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10673007 push 0 */
  push32((uint32_t)(0x0u));
  /* 10673009 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067300c push edx */
  push32((uint32_t)(EDX));
  /* 1067300d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673010 push eax */
  push32((uint32_t)(EAX));
  /* 10673011 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10673013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673016 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10673018 push edx */
  push32((uint32_t)(EDX));
  /* 10673019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1067301b push 1 */
  push32((uint32_t)(0x1u));
  /* 1067301d call dword ptr [0x10691320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691320))), 0x10673023u);
  /* 10673023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10673025 jne 0x1067302c */
  if (!C.zf) goto L_1067302c;
  /* 10673027 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1067302a jmp 0x1067304a */
  goto L_1067304a;
L_1067302c:;
  /* 1067302c push 0 */
  push32((uint32_t)(0x0u));
  /* 1067302e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673031 push eax */
  push32((uint32_t)(EAX));
  /* 10673032 call 0x106734a0 */
  push32(0x10673037u); f_106734a0();
  /* 10673037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067303a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067303d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10673043 jmp 0x10672fae */
  goto L_10672fae;
L_10673048:;
  /* 10673048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1067304a:;
  /* 1067304a mov esp, ebp */
  ESP = (EBP);
  /* 1067304c pop ebp */
  EBP = (pop32());
  /* 1067304d ret  */
  ESPCHK(0x10672fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013050 @ 0x10673050 (970 bytes, 340 insns) */
void f_10673050(void) {
  FTRACE(0x10673050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10673050 push ebp */
  push32((uint32_t)(EBP));
  /* 10673051 mov ebp, esp */
  EBP = (ESP);
  /* 10673053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10673055 push 0x1068b9a8 */
  push32((uint32_t)(0x1068b9a8u));
  /* 1067305a push 0x1066c5a8 */
  push32((uint32_t)(0x1066c5a8u));
  /* 1067305f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10673065 push eax */
  push32((uint32_t)(EAX));
  /* 10673066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1067306d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673070 push ebx */
  push32((uint32_t)(EBX));
  /* 10673071 push esi */
  push32((uint32_t)(ESI));
  /* 10673072 push edi */
  push32((uint32_t)(EDI));
  /* 10673073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10673076 cmp dword ptr [0x1068f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067307d jne 0x106730d6 */
  if (!C.zf) goto L_106730d6;
  /* 1067307f push 1 */
  push32((uint32_t)(0x1u));
  /* 10673081 push 0x1068b000 */
  push32((uint32_t)(0x1068b000u));
  /* 10673086 push 1 */
  push32((uint32_t)(0x1u));
  /* 10673088 push 0x1068b000 */
  push32((uint32_t)(0x1068b000u));
  /* 1067308d push 0 */
  push32((uint32_t)(0x0u));
  /* 1067308f push 0 */
  push32((uint32_t)(0x0u));
  /* 10673091 call dword ptr [0x1069125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069125c))), 0x10673097u);
  /* 10673097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10673099 je 0x106730a7 */
  if (C.zf) goto L_106730a7;
  /* 1067309b mov dword ptr [0x1068f7e4], 1 */
  w32((uint32_t)(0x1068f7e4), (0x1u));
  /* 106730a5 jmp 0x106730d6 */
  goto L_106730d6;
L_106730a7:;
  /* 106730a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106730a9 push 0x1068affc */
  push32((uint32_t)(0x1068affcu));
  /* 106730ae push 1 */
  push32((uint32_t)(0x1u));
  /* 106730b0 push 0x1068affc */
  push32((uint32_t)(0x1068affcu));
  /* 106730b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106730b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106730b9 call dword ptr [0x10691268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691268))), 0x106730bfu);
  /* 106730bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106730c1 je 0x106730cf */
  if (C.zf) goto L_106730cf;
  /* 106730c3 mov dword ptr [0x1068f7e4], 2 */
  w32((uint32_t)(0x1068f7e4), (0x2u));
  /* 106730cd jmp 0x106730d6 */
  goto L_106730d6;
L_106730cf:;
  /* 106730cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106730d1 jmp 0x10673434 */
  goto L_10673434;
L_106730d6:;
  /* 106730d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106730da jle 0x106730ef */
  if ((C.zf||C.sf!=C.of)) goto L_106730ef;
  /* 106730dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106730df push eax */
  push32((uint32_t)(EAX));
  /* 106730e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106730e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106730e4 call 0x10673450 */
  push32(0x106730e9u); f_10673450();
  /* 106730e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106730ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_106730ef:;
  /* 106730ef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106730f3 jle 0x10673108 */
  if ((C.zf||C.sf!=C.of)) goto L_10673108;
  /* 106730f5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106730f8 push edx */
  push32((uint32_t)(EDX));
  /* 106730f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106730fc push eax */
  push32((uint32_t)(EAX));
  /* 106730fd call 0x10673450 */
  push32(0x10673102u); f_10673450();
  /* 10673102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673105 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10673108:;
  /* 10673108 cmp dword ptr [0x1068f7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067310f jne 0x10673134 */
  if (!C.zf) goto L_10673134;
  /* 10673111 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10673114 push ecx */
  push32((uint32_t)(ECX));
  /* 10673115 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10673118 push edx */
  push32((uint32_t)(EDX));
  /* 10673119 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067311c push eax */
  push32((uint32_t)(EAX));
  /* 1067311d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10673120 push ecx */
  push32((uint32_t)(ECX));
  /* 10673121 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10673124 push edx */
  push32((uint32_t)(EDX));
  /* 10673125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673128 push eax */
  push32((uint32_t)(EAX));
  /* 10673129 call dword ptr [0x10691268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691268))), 0x1067312fu);
  /* 1067312f jmp 0x10673434 */
  goto L_10673434;
L_10673134:;
  /* 10673134 cmp dword ptr [0x1068f7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1068f7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067313b jne 0x10673432 */
  if (!C.zf) goto L_10673432;
  /* 10673141 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673145 jne 0x10673150 */
  if (!C.zf) goto L_10673150;
  /* 10673147 mov ecx, dword ptr [0x1068f690] */
  ECX = (r32((uint32_t)(0x1068f690)));
  /* 1067314d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10673150:;
  /* 10673150 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673154 je 0x10673160 */
  if (C.zf) goto L_10673160;
  /* 10673156 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067315a jne 0x106732dc */
  if (!C.zf) goto L_106732dc;
L_10673160:;
  /* 10673160 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10673163 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673166 jne 0x10673172 */
  if (!C.zf) goto L_10673172;
  /* 10673168 mov eax, 2 */
  EAX = (0x2u);
  /* 1067316d jmp 0x10673434 */
  goto L_10673434;
L_10673172:;
  /* 10673172 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673176 jle 0x10673182 */
  if ((C.zf||C.sf!=C.of)) goto L_10673182;
  /* 10673178 mov eax, 1 */
  EAX = (0x1u);
  /* 1067317d jmp 0x10673434 */
  goto L_10673434;
L_10673182:;
  /* 10673182 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673186 jle 0x10673192 */
  if ((C.zf||C.sf!=C.of)) goto L_10673192;
  /* 10673188 mov eax, 3 */
  EAX = (0x3u);
  /* 1067318d jmp 0x10673434 */
  goto L_10673434;
L_10673192:;
  /* 10673192 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10673195 push eax */
  push32((uint32_t)(EAX));
  /* 10673196 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10673199 push ecx */
  push32((uint32_t)(ECX));
  /* 1067319a call dword ptr [0x1069135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069135c))), 0x106731a0u);
  /* 106731a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106731a2 jne 0x106731ab */
  if (!C.zf) goto L_106731ab;
  /* 106731a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106731a6 jmp 0x10673434 */
  goto L_10673434;
L_106731ab:;
  /* 106731ab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731af jne 0x106731b7 */
  if (!C.zf) goto L_106731b7;
  /* 106731b1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731b5 je 0x106731e4 */
  if (C.zf) goto L_106731e4;
L_106731b7:;
  /* 106731b7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731bb jne 0x106731c3 */
  if (!C.zf) goto L_106731c3;
  /* 106731bd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731c1 je 0x106731e4 */
  if (C.zf) goto L_106731e4;
L_106731c3:;
  /* 106731c3 push 0x1068b968 */
  push32((uint32_t)(0x1068b968u));
  /* 106731c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106731ca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106731cf push 0x1068b960 */
  push32((uint32_t)(0x1068b960u));
  /* 106731d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106731d6 call 0x10662560 */
  push32(0x106731dbu); f_10662560();
  /* 106731db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106731de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731e1 jne 0x106731e4 */
  if (!C.zf) goto L_106731e4;
  /* 106731e3 int3  */
  x86_unimpl("int3 @ 0x106731e3");
L_106731e4:;
  /* 106731e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106731e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106731e8 jne 0x106731ab */
  if (!C.zf) goto L_106731ab;
  /* 106731ea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731ee jle 0x10673263 */
  if ((C.zf||C.sf!=C.of)) goto L_10673263;
  /* 106731f0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106731f4 jae 0x10673200 */
  if (!C.cf) goto L_10673200;
  /* 106731f6 mov eax, 3 */
  EAX = (0x3u);
  /* 106731fb jmp 0x10673434 */
  goto L_10673434;
L_10673200:;
  /* 10673200 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10673203 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10673206 jmp 0x10673211 */
  goto L_10673211;
L_10673208:;
  /* 10673208 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1067320b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067320e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10673211:;
  /* 10673211 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10673214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673216 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10673218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067321a je 0x10673259 */
  if (C.zf) goto L_10673259;
  /* 1067321c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1067321f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10673221 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10673224 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10673226 je 0x10673259 */
  if (C.zf) goto L_10673259;
  /* 10673228 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067322b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1067322d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1067322f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10673232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673234 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10673236 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673238 jl 0x10673257 */
  if ((C.sf!=C.of)) goto L_10673257;
  /* 1067323a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1067323d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067323f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10673241 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10673244 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10673246 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10673249 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067324b jg 0x10673257 */
  if ((!C.zf&&C.sf==C.of)) goto L_10673257;
  /* 1067324d mov eax, 2 */
  EAX = (0x2u);
  /* 10673252 jmp 0x10673434 */
  goto L_10673434;
L_10673257:;
  /* 10673257 jmp 0x10673208 */
  goto L_10673208;
L_10673259:;
  /* 10673259 mov eax, 3 */
  EAX = (0x3u);
  /* 1067325e jmp 0x10673434 */
  goto L_10673434;
L_10673263:;
  /* 10673263 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673267 jle 0x106732dc */
  if ((C.zf||C.sf!=C.of)) goto L_106732dc;
  /* 10673269 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067326d jae 0x10673279 */
  if (!C.cf) goto L_10673279;
  /* 1067326f mov eax, 1 */
  EAX = (0x1u);
  /* 10673274 jmp 0x10673434 */
  goto L_10673434;
L_10673279:;
  /* 10673279 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1067327c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1067327f jmp 0x1067328a */
  goto L_1067328a;
L_10673281:;
  /* 10673281 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10673284 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673287 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1067328a:;
  /* 1067328a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1067328d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1067328f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10673291 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10673293 je 0x106732d2 */
  if (C.zf) goto L_106732d2;
  /* 10673295 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10673298 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1067329a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1067329d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1067329f je 0x106732d2 */
  if (C.zf) goto L_106732d2;
  /* 106732a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106732a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106732a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106732a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 106732ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106732ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106732af cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106732b1 jl 0x106732d0 */
  if ((C.sf!=C.of)) goto L_106732d0;
  /* 106732b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106732b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106732b8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106732ba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 106732bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106732bf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 106732c2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106732c4 jg 0x106732d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_106732d0;
  /* 106732c6 mov eax, 2 */
  EAX = (0x2u);
  /* 106732cb jmp 0x10673434 */
  goto L_10673434;
L_106732d0:;
  /* 106732d0 jmp 0x10673281 */
  goto L_10673281;
L_106732d2:;
  /* 106732d2 mov eax, 1 */
  EAX = (0x1u);
  /* 106732d7 jmp 0x10673434 */
  goto L_10673434;
L_106732dc:;
  /* 106732dc push 0 */
  push32((uint32_t)(0x0u));
  /* 106732de push 0 */
  push32((uint32_t)(0x0u));
  /* 106732e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106732e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106732e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106732e7 push edx */
  push32((uint32_t)(EDX));
  /* 106732e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 106732ea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 106732ed push eax */
  push32((uint32_t)(EAX));
  /* 106732ee call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x106732f4u);
  /* 106732f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 106732f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106732fb jne 0x10673304 */
  if (!C.zf) goto L_10673304;
  /* 106732fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106732ff jmp 0x10673434 */
  goto L_10673434;
L_10673304:;
  /* 10673304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1067330b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1067330e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10673310 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673313 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10673315 call 0x10666640 */
  push32(0x1067331au); f_10666640();
  /* 1067331a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1067331d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10673320 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10673323 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10673326 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1067332d jmp 0x10673346 */
  goto L_10673346;
  /* 1067332f mov eax, 1 */
  EAX = (0x1u);
  /* 10673334 ret  */
  ESPCHK(0x10673050u, _esp0);
  ESP += 4; return;
  /* 10673335 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10673338 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1067333f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10673346:;
  /* 10673346 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067334a jne 0x10673353 */
  if (!C.zf) goto L_10673353;
  /* 1067334c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067334e jmp 0x10673434 */
  goto L_10673434;
L_10673353:;
  /* 10673353 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10673356 push edx */
  push32((uint32_t)(EDX));
  /* 10673357 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1067335a push eax */
  push32((uint32_t)(EAX));
  /* 1067335b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1067335e push ecx */
  push32((uint32_t)(ECX));
  /* 1067335f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10673362 push edx */
  push32((uint32_t)(EDX));
  /* 10673363 push 1 */
  push32((uint32_t)(0x1u));
  /* 10673365 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10673368 push eax */
  push32((uint32_t)(EAX));
  /* 10673369 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1067336fu);
  /* 1067336f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10673371 jne 0x1067337a */
  if (!C.zf) goto L_1067337a;
  /* 10673373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673375 jmp 0x10673434 */
  goto L_10673434;
L_1067337a:;
  /* 1067337a push 0 */
  push32((uint32_t)(0x0u));
  /* 1067337c push 0 */
  push32((uint32_t)(0x0u));
  /* 1067337e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10673381 push ecx */
  push32((uint32_t)(ECX));
  /* 10673382 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10673385 push edx */
  push32((uint32_t)(EDX));
  /* 10673386 push 9 */
  push32((uint32_t)(0x9u));
  /* 10673388 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1067338b push eax */
  push32((uint32_t)(EAX));
  /* 1067338c call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x10673392u);
  /* 10673392 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10673395 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673399 jne 0x106733a2 */
  if (!C.zf) goto L_106733a2;
  /* 1067339b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067339d jmp 0x10673434 */
  goto L_10673434;
L_106733a2:;
  /* 106733a2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106733a9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106733ac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106733ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106733b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 106733b3 call 0x10666640 */
  push32(0x106733b8u); f_10666640();
  /* 106733b8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 106733bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 106733be mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 106733c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 106733c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 106733cb jmp 0x106733e4 */
  goto L_106733e4;
  /* 106733cd mov eax, 1 */
  EAX = (0x1u);
  /* 106733d2 ret  */
  ESPCHK(0x10673050u, _esp0);
  ESP += 4; return;
  /* 106733d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 106733d6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 106733dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_106733e4:;
  /* 106733e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106733e8 jne 0x106733ee */
  if (!C.zf) goto L_106733ee;
  /* 106733ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106733ec jmp 0x10673434 */
  goto L_10673434;
L_106733ee:;
  /* 106733ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 106733f1 push edx */
  push32((uint32_t)(EDX));
  /* 106733f2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106733f5 push eax */
  push32((uint32_t)(EAX));
  /* 106733f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 106733f9 push ecx */
  push32((uint32_t)(ECX));
  /* 106733fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106733fd push edx */
  push32((uint32_t)(EDX));
  /* 106733fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10673400 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10673403 push eax */
  push32((uint32_t)(EAX));
  /* 10673404 call dword ptr [0x10691368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691368))), 0x1067340au);
  /* 1067340a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1067340c jne 0x10673412 */
  if (!C.zf) goto L_10673412;
  /* 1067340e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673410 jmp 0x10673434 */
  goto L_10673434;
L_10673412:;
  /* 10673412 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10673415 push ecx */
  push32((uint32_t)(ECX));
  /* 10673416 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10673419 push edx */
  push32((uint32_t)(EDX));
  /* 1067341a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1067341d push eax */
  push32((uint32_t)(EAX));
  /* 1067341e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10673421 push ecx */
  push32((uint32_t)(ECX));
  /* 10673422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10673425 push edx */
  push32((uint32_t)(EDX));
  /* 10673426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673429 push eax */
  push32((uint32_t)(EAX));
  /* 1067342a call dword ptr [0x1069125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1069125c))), 0x10673430u);
  /* 10673430 jmp 0x10673434 */
  goto L_10673434;
L_10673432:;
  /* 10673432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10673434:;
  /* 10673434 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10673437 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067343a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10673441 pop edi */
  EDI = (pop32());
  /* 10673442 pop esi */
  ESI = (pop32());
  /* 10673443 pop ebx */
  EBX = (pop32());
  /* 10673444 mov esp, ebp */
  ESP = (EBP);
  /* 10673446 pop ebp */
  EBP = (pop32());
  /* 10673447 ret  */
  ESPCHK(0x10673050u, _esp0);
  ESP += 4; return;
}

/* FUN_10013450 @ 0x10673450 (80 bytes, 32 insns) */
void f_10673450(void) {
  FTRACE(0x10673450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10673450 push ebp */
  push32((uint32_t)(EBP));
  /* 10673451 mov ebp, esp */
  EBP = (ESP);
  /* 10673453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10673456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10673459 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1067345c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067345f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10673462:;
  /* 10673462 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673465 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673468 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067346b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1067346e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10673470 je 0x10673487 */
  if (C.zf) goto L_10673487;
  /* 10673472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673475 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10673478 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1067347a je 0x10673487 */
  if (C.zf) goto L_10673487;
  /* 1067347c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067347f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673482 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10673485 jmp 0x10673462 */
  goto L_10673462;
L_10673487:;
  /* 10673487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067348a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1067348d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1067348f jne 0x10673499 */
  if (!C.zf) goto L_10673499;
  /* 10673491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673494 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10673497 jmp 0x1067349c */
  goto L_1067349c;
L_10673499:;
  /* 10673499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1067349c:;
  /* 1067349c mov esp, ebp */
  ESP = (EBP);
  /* 1067349e pop ebp */
  EBP = (pop32());
  /* 1067349f ret  */
  ESPCHK(0x10673450u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x106734a0 (736 bytes, 224 insns) */
void f_106734a0(void) {
  FTRACE(0x106734a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106734a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106734a1 mov ebp, esp */
  EBP = (ESP);
  /* 106734a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106734a6 push esi */
  push32((uint32_t)(ESI));
  /* 106734a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106734ab je 0x106734cc */
  if (C.zf) goto L_106734cc;
  /* 106734ad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 106734af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106734b2 push eax */
  push32((uint32_t)(EAX));
  /* 106734b3 call 0x106738f0 */
  push32(0x106734b8u); f_106738f0();
  /* 106734b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106734bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106734be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106734c2 je 0x106734cc */
  if (C.zf) goto L_106734cc;
  /* 106734c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106734c7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106734ca jne 0x106734d4 */
  if (!C.zf) goto L_106734d4;
L_106734cc:;
  /* 106734cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106734cf jmp 0x1067377b */
  goto L_1067377b;
L_106734d4:;
  /* 106734d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106734d7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106734db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106734dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106734df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 106734e0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106734e3 mov ecx, dword ptr [0x1068f49c] */
  ECX = (r32((uint32_t)(0x1068f49c)));
  /* 106734e9 cmp ecx, dword ptr [0x1068f4a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1068f4a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106734ef jne 0x10673505 */
  if (!C.zf) goto L_10673505;
  /* 106734f1 mov edx, dword ptr [0x1068f49c] */
  EDX = (r32((uint32_t)(0x1068f49c)));
  /* 106734f7 push edx */
  push32((uint32_t)(EDX));
  /* 106734f8 call 0x10673800 */
  push32(0x106734fdu); f_10673800();
  /* 106734fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673500 mov dword ptr [0x1068f49c], eax */
  w32((uint32_t)(0x1068f49c), (EAX));
L_10673505:;
  /* 10673505 cmp dword ptr [0x1068f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067350c jne 0x106735c5 */
  if (!C.zf) goto L_106735c5;
  /* 10673512 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673516 je 0x10673537 */
  if (C.zf) goto L_10673537;
  /* 10673518 cmp dword ptr [0x1068f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067351f je 0x10673537 */
  if (C.zf) goto L_10673537;
  /* 10673521 call 0x10672fa0 */
  push32(0x10673526u); f_10672fa0();
  /* 10673526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10673528 je 0x10673532 */
  if (C.zf) goto L_10673532;
  /* 1067352a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1067352d jmp 0x1067377b */
  goto L_1067377b;
L_10673532:;
  /* 10673532 jmp 0x106735c5 */
  goto L_106735c5;
L_10673537:;
  /* 10673537 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067353b je 0x10673544 */
  if (C.zf) goto L_10673544;
  /* 1067353d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067353f jmp 0x1067377b */
  goto L_1067377b;
L_10673544:;
  /* 10673544 cmp dword ptr [0x1068f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067354b jne 0x10673584 */
  if (!C.zf) goto L_10673584;
  /* 1067354d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10673552 push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 10673557 push 2 */
  push32((uint32_t)(0x2u));
  /* 10673559 push 4 */
  push32((uint32_t)(0x4u));
  /* 1067355b call 0x106634a0 */
  push32(0x10673560u); f_106634a0();
  /* 10673560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673563 mov dword ptr [0x1068f49c], eax */
  w32((uint32_t)(0x1068f49c), (EAX));
  /* 10673568 cmp dword ptr [0x1068f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067356f jne 0x10673579 */
  if (!C.zf) goto L_10673579;
  /* 10673571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10673574 jmp 0x1067377b */
  goto L_1067377b;
L_10673579:;
  /* 10673579 mov eax, dword ptr [0x1068f49c] */
  EAX = (r32((uint32_t)(0x1068f49c)));
  /* 1067357e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10673584:;
  /* 10673584 cmp dword ptr [0x1068f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067358b jne 0x106735c5 */
  if (!C.zf) goto L_106735c5;
  /* 1067358d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10673592 push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 10673597 push 2 */
  push32((uint32_t)(0x2u));
  /* 10673599 push 4 */
  push32((uint32_t)(0x4u));
  /* 1067359b call 0x106634a0 */
  push32(0x106735a0u); f_106634a0();
  /* 106735a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106735a3 mov dword ptr [0x1068f4a4], eax */
  w32((uint32_t)(0x1068f4a4), (EAX));
  /* 106735a8 cmp dword ptr [0x1068f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1068f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106735af jne 0x106735b9 */
  if (!C.zf) goto L_106735b9;
  /* 106735b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106735b4 jmp 0x1067377b */
  goto L_1067377b;
L_106735b9:;
  /* 106735b9 mov ecx, dword ptr [0x1068f4a4] */
  ECX = (r32((uint32_t)(0x1068f4a4)));
  /* 106735bf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_106735c5:;
  /* 106735c5 mov edx, dword ptr [0x1068f49c] */
  EDX = (r32((uint32_t)(0x1068f49c)));
  /* 106735cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106735ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106735d1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106735d4 push eax */
  push32((uint32_t)(EAX));
  /* 106735d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106735d8 push ecx */
  push32((uint32_t)(ECX));
  /* 106735d9 call 0x10673780 */
  push32(0x106735deu); f_10673780();
  /* 106735de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106735e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106735e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106735e8 jl 0x10673681 */
  if ((C.sf!=C.of)) goto L_10673681;
  /* 106735ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106735f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106735f4 je 0x10673681 */
  if (C.zf) goto L_10673681;
  /* 106735fa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106735fe je 0x10673673 */
  if (C.zf) goto L_10673673;
  /* 10673600 push 2 */
  push32((uint32_t)(0x2u));
  /* 10673602 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673608 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1067360b push edx */
  push32((uint32_t)(EDX));
  /* 1067360c call 0x10663f30 */
  push32(0x10673611u); f_10663f30();
  /* 10673611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673614 jmp 0x1067361f */
  goto L_1067361f;
L_10673616:;
  /* 10673616 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067361c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1067361f:;
  /* 1067361f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673622 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673625 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673629 je 0x10673640 */
  if (C.zf) goto L_10673640;
  /* 1067362b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067362e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673631 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673634 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10673637 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1067363b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1067363e jmp 0x10673616 */
  goto L_10673616;
L_10673640:;
  /* 10673640 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10673645 push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 1067364a push 2 */
  push32((uint32_t)(0x2u));
  /* 1067364c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1067364f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10673652 push eax */
  push32((uint32_t)(EAX));
  /* 10673653 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673656 push ecx */
  push32((uint32_t)(ECX));
  /* 10673657 call 0x10663930 */
  push32(0x1067365cu); f_10663930();
  /* 1067365c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067365f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10673662 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673666 je 0x10673671 */
  if (C.zf) goto L_10673671;
  /* 10673668 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067366b mov dword ptr [0x1068f49c], edx */
  w32((uint32_t)(0x1068f49c), (EDX));
L_10673671:;
  /* 10673671 jmp 0x1067367f */
  goto L_1067367f;
L_10673673:;
  /* 10673673 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067367c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1067367f:;
  /* 1067367f jmp 0x106736f4 */
  goto L_106736f4;
L_10673681:;
  /* 10673681 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673685 jne 0x106736ed */
  if (!C.zf) goto L_106736ed;
  /* 10673687 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067368b jge 0x10673695 */
  if ((C.sf==C.of)) goto L_10673695;
  /* 1067368d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673690 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10673692 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10673695:;
  /* 10673695 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1067369a push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 1067369f push 2 */
  push32((uint32_t)(0x2u));
  /* 106736a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106736a4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 106736ab push edx */
  push32((uint32_t)(EDX));
  /* 106736ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106736af push eax */
  push32((uint32_t)(EAX));
  /* 106736b0 call 0x10663930 */
  push32(0x106736b5u); f_10663930();
  /* 106736b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106736b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106736bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106736bf jne 0x106736c9 */
  if (!C.zf) goto L_106736c9;
  /* 106736c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106736c4 jmp 0x1067377b */
  goto L_1067377b;
L_106736c9:;
  /* 106736c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106736cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106736cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106736d2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 106736d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106736d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106736db mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 106736e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106736e6 mov dword ptr [0x1068f49c], eax */
  w32((uint32_t)(0x1068f49c), (EAX));
  /* 106736eb jmp 0x106736f4 */
  goto L_106736f4;
L_106736ed:;
  /* 106736ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106736ef jmp 0x1067377b */
  goto L_1067377b;
L_106736f4:;
  /* 106736f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106736f8 je 0x10673779 */
  if (C.zf) goto L_10673779;
  /* 106736fa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 106736ff push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 10673704 push 2 */
  push32((uint32_t)(0x2u));
  /* 10673706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673709 push ecx */
  push32((uint32_t)(ECX));
  /* 1067370a call 0x106662d0 */
  push32(0x1067370fu); f_106662d0();
  /* 1067370f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673712 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673715 push eax */
  push32((uint32_t)(EAX));
  /* 10673716 call 0x106634a0 */
  push32(0x1067371bu); f_106634a0();
  /* 1067371b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067371e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10673721 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673725 je 0x10673779 */
  if (C.zf) goto L_10673779;
  /* 10673727 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067372a push edx */
  push32((uint32_t)(EDX));
  /* 1067372b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067372e push eax */
  push32((uint32_t)(EAX));
  /* 1067372f call 0x10666450 */
  push32(0x10673734u); f_10666450();
  /* 10673734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673737 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1067373a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067373d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10673740 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673742 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10673745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673748 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1067374b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067374e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673751 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10673754 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10673757 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10673759 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1067375b not edx */
  EDX = (~(EDX));
  /* 1067375d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10673760 push edx */
  push32((uint32_t)(EDX));
  /* 10673761 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10673764 push eax */
  push32((uint32_t)(EAX));
  /* 10673765 call dword ptr [0x10691258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10691258))), 0x1067376bu);
  /* 1067376b push 2 */
  push32((uint32_t)(0x2u));
  /* 1067376d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10673770 push ecx */
  push32((uint32_t)(ECX));
  /* 10673771 call 0x10663f30 */
  push32(0x10673776u); f_10663f30();
  /* 10673776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10673779:;
  /* 10673779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1067377b:;
  /* 1067377b pop esi */
  ESI = (pop32());
  /* 1067377c mov esp, ebp */
  ESP = (EBP);
  /* 1067377e pop ebp */
  EBP = (pop32());
  /* 1067377f ret  */
  ESPCHK(0x106734a0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10673780 (124 bytes, 47 insns) */
void f_10673780(void) {
  FTRACE(0x10673780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10673780 push ebp */
  push32((uint32_t)(EBP));
  /* 10673781 mov ebp, esp */
  EBP = (ESP);
  /* 10673783 push ecx */
  push32((uint32_t)(ECX));
  /* 10673784 mov eax, dword ptr [0x1068f49c] */
  EAX = (r32((uint32_t)(0x1068f49c)));
  /* 10673789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1067378c jmp 0x10673797 */
  goto L_10673797;
L_1067378e:;
  /* 1067378e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673791 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673794 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10673797:;
  /* 10673797 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067379a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1067379d je 0x106737ea */
  if (C.zf) goto L_106737ea;
  /* 1067379f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106737a2 push eax */
  push32((uint32_t)(EAX));
  /* 106737a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106737a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106737a8 push edx */
  push32((uint32_t)(EDX));
  /* 106737a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106737ac push eax */
  push32((uint32_t)(EAX));
  /* 106737ad call 0x10672f50 */
  push32(0x106737b2u); f_10672f50();
  /* 106737b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106737b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106737b7 jne 0x106737e8 */
  if (!C.zf) goto L_106737e8;
  /* 106737b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106737bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106737be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106737c1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 106737c5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106737c8 je 0x106737da */
  if (C.zf) goto L_106737da;
  /* 106737ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106737cd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106737cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106737d2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 106737d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106737d8 jne 0x106737e8 */
  if (!C.zf) goto L_106737e8;
L_106737da:;
  /* 106737da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106737dd sub eax, dword ptr [0x1068f49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068f49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106737e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106737e6 jmp 0x106737f8 */
  goto L_106737f8;
L_106737e8:;
  /* 106737e8 jmp 0x1067378e */
  goto L_1067378e;
L_106737ea:;
  /* 106737ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106737ed sub eax, dword ptr [0x1068f49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1068f49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106737f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 106737f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_106737f8:;
  /* 106737f8 mov esp, ebp */
  ESP = (EBP);
  /* 106737fa pop ebp */
  EBP = (pop32());
  /* 106737fb ret  */
  ESPCHK(0x10673780u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10673800 (238 bytes, 80 insns) */
void f_10673800(void) {
  FTRACE(0x10673800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10673800 push ebp */
  push32((uint32_t)(EBP));
  /* 10673801 mov ebp, esp */
  EBP = (ESP);
  /* 10673803 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10673806 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1067380d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673810 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10673813 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673817 jne 0x10673820 */
  if (!C.zf) goto L_10673820;
  /* 10673819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1067381b jmp 0x106738ea */
  goto L_106738ea;
L_10673820:;
  /* 10673820 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673823 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10673825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673828 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067382b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1067382e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10673830 je 0x1067383d */
  if (C.zf) goto L_1067383d;
  /* 10673832 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10673835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673838 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1067383b jmp 0x10673820 */
  goto L_10673820;
L_1067383d:;
  /* 1067383d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10673842 push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 10673847 push 2 */
  push32((uint32_t)(0x2u));
  /* 10673849 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1067384c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10673853 push eax */
  push32((uint32_t)(EAX));
  /* 10673854 call 0x106634a0 */
  push32(0x10673859u); f_106634a0();
  /* 10673859 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067385c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1067385f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10673862 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10673865 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673869 jne 0x10673875 */
  if (!C.zf) goto L_10673875;
  /* 1067386b push 9 */
  push32((uint32_t)(0x9u));
  /* 1067386d call 0x10662410 */
  push32(0x10673872u); f_10662410();
  /* 10673872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10673875:;
  /* 10673875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673878 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1067387b:;
  /* 1067387b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1067387e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673881 je 0x106738de */
  if (C.zf) goto L_106738de;
  /* 10673883 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10673888 push 0x1068b9c0 */
  push32((uint32_t)(0x1068b9c0u));
  /* 1067388d push 2 */
  push32((uint32_t)(0x2u));
  /* 1067388f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10673892 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10673894 push edx */
  push32((uint32_t)(EDX));
  /* 10673895 call 0x106662d0 */
  push32(0x1067389au); f_106662d0();
  /* 1067389a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067389d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106738a0 push eax */
  push32((uint32_t)(EAX));
  /* 106738a1 call 0x106634a0 */
  push32(0x106738a6u); f_106634a0();
  /* 106738a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106738a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106738ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106738ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106738b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106738b4 je 0x106738ca */
  if (C.zf) goto L_106738ca;
  /* 106738b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106738b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106738bb push ecx */
  push32((uint32_t)(ECX));
  /* 106738bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106738bf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106738c1 push eax */
  push32((uint32_t)(EAX));
  /* 106738c2 call 0x10666450 */
  push32(0x106738c7u); f_10666450();
  /* 106738c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106738ca:;
  /* 106738ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106738cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106738d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106738d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106738d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106738d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106738dc jmp 0x1067387b */
  goto L_1067387b;
L_106738de:;
  /* 106738de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106738e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106738e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106738ea:;
  /* 106738ea mov esp, ebp */
  ESP = (EBP);
  /* 106738ec pop ebp */
  EBP = (pop32());
  /* 106738ed ret  */
  ESPCHK(0x10673800u, _esp0);
  ESP += 4; return;
}

/* FUN_100138f0 @ 0x106738f0 (237 bytes, 81 insns) */
void f_106738f0(void) {
  FTRACE(0x106738f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106738f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106738f1 mov ebp, esp */
  EBP = (ESP);
  /* 106738f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106738f4 cmp dword ptr [0x10690bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10690bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106738fb jne 0x10673912 */
  if (!C.zf) goto L_10673912;
  /* 106738fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10673900 push eax */
  push32((uint32_t)(EAX));
  /* 10673901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673904 push ecx */
  push32((uint32_t)(ECX));
  /* 10673905 call 0x106739f0 */
  push32(0x1067390au); f_106739f0();
  /* 1067390a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067390d jmp 0x106739d9 */
  goto L_106739d9;
L_10673912:;
  /* 10673912 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10673914 call 0x10666ea0 */
  push32(0x10673919u); f_10666ea0();
  /* 10673919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067391c jmp 0x10673927 */
  goto L_10673927;
L_1067391e:;
  /* 1067391e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673924 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10673927:;
  /* 10673927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067392a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1067392e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10673932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673935 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1067393b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1067393d je 0x106739bb */
  if (C.zf) goto L_106739bb;
  /* 1067393f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10673942 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10673947 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10673949 mov cl, byte ptr [eax + 0x10690d01] */
  CL = (r8((uint32_t)(EAX + 0x10690d01)));
  /* 1067394f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10673952 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10673954 je 0x106739a6 */
  if (C.zf) goto L_106739a6;
  /* 10673956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673959 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1067395c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1067395f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673962 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10673964 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10673966 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10673968 jne 0x10673978 */
  if (!C.zf) goto L_10673978;
  /* 1067396a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1067396c call 0x10666f40 */
  push32(0x10673971u); f_10666f40();
  /* 10673971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10673974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673976 jmp 0x106739d9 */
  goto L_106739d9;
L_10673978:;
  /* 10673978 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1067397b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10673981 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10673984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10673987 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10673989 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1067398b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1067398d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10673990 jne 0x106739a4 */
  if (!C.zf) goto L_106739a4;
  /* 10673992 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10673994 call 0x10666f40 */
  push32(0x10673999u); f_10666f40();
  /* 10673999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1067399c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1067399f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106739a2 jmp 0x106739d9 */
  goto L_106739d9;
L_106739a4:;
  /* 106739a4 jmp 0x106739b6 */
  goto L_106739b6;
L_106739a6:;
  /* 106739a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106739a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106739af cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106739b2 jne 0x106739b6 */
  if (!C.zf) goto L_106739b6;
  /* 106739b4 jmp 0x106739bb */
  goto L_106739bb;
L_106739b6:;
  /* 106739b6 jmp 0x1067391e */
  goto L_1067391e;
L_106739bb:;
  /* 106739bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 106739bd call 0x10666f40 */
  push32(0x106739c2u); f_10666f40();
  /* 106739c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106739c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106739c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106739cd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106739d0 jne 0x106739d7 */
  if (!C.zf) goto L_106739d7;
  /* 106739d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106739d5 jmp 0x106739d9 */
  goto L_106739d9;
L_106739d7:;
  /* 106739d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106739d9:;
  /* 106739d9 mov esp, ebp */
  ESP = (EBP);
  /* 106739db pop ebp */
  EBP = (pop32());
  /* 106739dc ret  */
  ESPCHK(0x106738f0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x106739f0 (193 bytes, 87 insns) */
void f_106739f0(void) {
  FTRACE(0x106739f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106739f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106739f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 106739f6 push ebx */
  push32((uint32_t)(EBX));
  /* 106739f7 mov ebx, eax */
  EBX = (EAX);
  /* 106739f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106739fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10673a00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10673a06 je 0x10673a1b */
  if (C.zf) goto L_10673a1b;
L_10673a08:;
  /* 10673a08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10673a0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10673a0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10673a0d je 0x106739e0 */
  if (C.zf) { jmp_ind(0x106739e0u); return; }
  /* 10673a0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10673a11 je 0x10673a64 */
  if (C.zf) goto L_10673a64;
  /* 10673a13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10673a19 jne 0x10673a08 */
  if (!C.zf) goto L_10673a08;
L_10673a1b:;
  /* 10673a1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10673a1d push edi */
  push32((uint32_t)(EDI));
  /* 10673a1e mov eax, ebx */
  EAX = (EBX);
  /* 10673a20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10673a23 push esi */
  push32((uint32_t)(ESI));
  /* 10673a24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10673a26:;
  /* 10673a26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10673a28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10673a2d mov eax, ecx */
  EAX = (ECX);
  /* 10673a2f mov esi, edi */
  ESI = (EDI);
  /* 10673a31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10673a33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10673a35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10673a37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10673a3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10673a3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10673a3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10673a41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10673a44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10673a4a jne 0x10673a68 */
  if (!C.zf) goto L_10673a68;
  /* 10673a4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10673a51 je 0x10673a26 */
  if (C.zf) goto L_10673a26;
  /* 10673a53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10673a58 jne 0x10673a62 */
  if (!C.zf) goto L_10673a62;
  /* 10673a5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10673a60 jne 0x10673a26 */
  if (!C.zf) goto L_10673a26;
L_10673a62:;
  /* 10673a62 pop esi */
  ESI = (pop32());
  /* 10673a63 pop edi */
  EDI = (pop32());
L_10673a64:;
  /* 10673a64 pop ebx */
  EBX = (pop32());
  /* 10673a65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10673a67 ret  */
  ESPCHK(0x106739f0u, _esp0);
  ESP += 4; return;
L_10673a68:;
  /* 10673a68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10673a6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10673a6d je 0x10673aa5 */
  if (C.zf) goto L_10673aa5;
  /* 10673a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10673a71 je 0x10673a62 */
  if (C.zf) goto L_10673a62;
  /* 10673a73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10673a75 je 0x10673a9e */
  if (C.zf) goto L_10673a9e;
  /* 10673a77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10673a79 je 0x10673a62 */
  if (C.zf) goto L_10673a62;
  /* 10673a7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10673a7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10673a80 je 0x10673a97 */
  if (C.zf) goto L_10673a97;
  /* 10673a82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10673a84 je 0x10673a62 */
  if (C.zf) goto L_10673a62;
  /* 10673a86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10673a88 je 0x10673a90 */
  if (C.zf) goto L_10673a90;
  /* 10673a8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10673a8c je 0x10673a62 */
  if (C.zf) goto L_10673a62;
  /* 10673a8e jmp 0x10673a26 */
  goto L_10673a26;
L_10673a90:;
  /* 10673a90 pop esi */
  ESI = (pop32());
  /* 10673a91 pop edi */
  EDI = (pop32());
  /* 10673a92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10673a95 pop ebx */
  EBX = (pop32());
  /* 10673a96 ret  */
  ESPCHK(0x106739f0u, _esp0);
  ESP += 4; return;
L_10673a97:;
  /* 10673a97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10673a9a pop esi */
  ESI = (pop32());
  /* 10673a9b pop edi */
  EDI = (pop32());
  /* 10673a9c pop ebx */
  EBX = (pop32());
  /* 10673a9d ret  */
  ESPCHK(0x106739f0u, _esp0);
  ESP += 4; return;
L_10673a9e:;
  /* 10673a9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10673aa1 pop esi */
  ESI = (pop32());
  /* 10673aa2 pop edi */
  EDI = (pop32());
  /* 10673aa3 pop ebx */
  EBX = (pop32());
  /* 10673aa4 ret  */
  ESPCHK(0x106739f0u, _esp0);
  ESP += 4; return;
L_10673aa5:;
  /* 10673aa5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10673aa8 pop esi */
  ESI = (pop32());
  /* 10673aa9 pop edi */
  EDI = (pop32());
  /* 10673aaa pop ebx */
  EBX = (pop32());
  /* 10673aab ret  */
  ESPCHK(0x106739f0u, _esp0);
  ESP += 4; return;
  /* 10673aac jmp dword ptr [0x106912a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x106912a4)))); return;
}

/* RtlUnwind @ 0x10673bfc (6 bytes, 1 insns) */
void f_10673bfc(void) {
  FTRACE(0x10673bfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10673bfc jmp dword ptr [0x10691290] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10691290)))); return;
}

