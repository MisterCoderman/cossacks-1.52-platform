#include "recomp.h"

/* crtGetLocaleInfoA @ 0x12dd01f0 (388 bytes, 118 insns) */
void f_12dd01f0(void) {
  FTRACE(0x12dd01f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd01f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd01f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd01f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd01f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd01fd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12dd0204 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dd020b:;
  /* 12dd020b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd020e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0211 jg 0x12dd0358 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd0358;
  /* 12dd0217 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd021a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd021d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd021e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0220 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dd0222 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd0225 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0228 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd022b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd022e cmp edx, dword ptr [ecx + 0x12dde520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12dde520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0234 jne 0x12dd032e */
  if (!C.zf) goto L_12dd032e;
  /* 12dd023a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd023d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0240 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0244 ja 0x12dd0267 */
  if ((!C.cf&&!C.zf)) goto L_12dd0267;
  /* 12dd0246 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd024a je 0x12dd02d9 */
  if (C.zf) goto L_12dd02d9;
  /* 12dd0250 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0254 je 0x12dd0284 */
  if (C.zf) goto L_12dd0284;
  /* 12dd0256 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd025a je 0x12dd02a6 */
  if (C.zf) goto L_12dd02a6;
  /* 12dd025c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0260 je 0x12dd02c8 */
  if (C.zf) goto L_12dd02c8;
  /* 12dd0262 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd0267:;
  /* 12dd0267 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd026e je 0x12dd0295 */
  if (C.zf) goto L_12dd0295;
  /* 12dd0270 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0277 je 0x12dd02b7 */
  if (C.zf) goto L_12dd02b7;
  /* 12dd0279 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0280 je 0x12dd02ea */
  if (C.zf) goto L_12dd02ea;
  /* 12dd0282 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd0284:;
  /* 12dd0284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0287 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd028a add ecx, 0x12dde524 */
  { uint32_t _a=(ECX),_b=(0x12dde524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0290 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd0293 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd0295:;
  /* 12dd0295 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0298 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd029b mov eax, dword ptr [edx + 0x12dde52c] */
  EAX = (r32((uint32_t)(EDX + 0x12dde52c)));
  /* 12dd02a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd02a4 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd02a6:;
  /* 12dd02a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd02a9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd02ac add ecx, 0x12dde530 */
  { uint32_t _a=(ECX),_b=(0x12dde530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd02b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd02b5 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd02b7:;
  /* 12dd02b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd02ba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd02bd mov eax, dword ptr [edx + 0x12dde534] */
  EAX = (r32((uint32_t)(EDX + 0x12dde534)));
  /* 12dd02c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd02c6 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd02c8:;
  /* 12dd02c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd02cb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd02ce add ecx, 0x12dde538 */
  { uint32_t _a=(ECX),_b=(0x12dde538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd02d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd02d7 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd02d9:;
  /* 12dd02d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd02dc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd02df add edx, 0x12dde53c */
  { uint32_t _a=(EDX),_b=(0x12dde53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd02e5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd02e8 jmp 0x12dd02f8 */
  goto L_12dd02f8;
L_12dd02ea:;
  /* 12dd02ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd02ed imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd02f0 add eax, 0x12dde544 */
  { uint32_t _a=(EAX),_b=(0x12dde544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd02f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dd02f8:;
  /* 12dd02f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd02fc je 0x12dd0304 */
  if (C.zf) goto L_12dd0304;
  /* 12dd02fe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0302 jge 0x12dd0306 */
  if ((C.sf==C.of)) goto L_12dd0306;
L_12dd0304:;
  /* 12dd0304 jmp 0x12dd0358 */
  goto L_12dd0358;
L_12dd0306:;
  /* 12dd0306 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0309 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd030c push ecx */
  push32((uint32_t)(ECX));
  /* 12dd030d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd0310 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0311 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0314 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0315 call 0x12dc7110 */
  push32(0x12dd031au); f_12dc7110();
  /* 12dd031a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd031d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0320 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0323 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12dd0327 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd032c jmp 0x12dd036e */
  goto L_12dd036e;
L_12dd032e:;
  /* 12dd032e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0331 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd0334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0337 cmp eax, dword ptr [edx + 0x12dde520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12dde520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd033d jae 0x12dd034a */
  if (!C.cf) goto L_12dd034a;
  /* 12dd033f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0342 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0345 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd0348 jmp 0x12dd0353 */
  goto L_12dd0353;
L_12dd034a:;
  /* 12dd034a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd034d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0350 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd0353:;
  /* 12dd0353 jmp 0x12dd020b */
  goto L_12dd020b;
L_12dd0358:;
  /* 12dd0358 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd035b push eax */
  push32((uint32_t)(EAX));
  /* 12dd035c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd035f push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0360 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0363 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0367 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0368 call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd036eu);
L_12dd036e:;
  /* 12dd036e mov esp, ebp */
  ESP = (EBP);
  /* 12dd0370 pop ebp */
  EBP = (pop32());
  /* 12dd0371 ret 0x10 */
  ESPCHK(0x12dd01f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010380 @ 0x12dd0380 (118 bytes, 42 insns) */
void f_12dd0380(void) {
  FTRACE(0x12dd0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0380 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0381 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dd038d:;
  /* 12dd038d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0390 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd0392 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12dd0395 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd0399 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd039c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd039f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd03a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd03a4 je 0x12dd03ef */
  if (C.zf) goto L_12dd03ef;
  /* 12dd03a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd03aa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd03ad jl 0x12dd03c2 */
  if ((C.sf!=C.of)) goto L_12dd03c2;
  /* 12dd03af movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd03b3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd03b6 jg 0x12dd03c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd03c2;
  /* 12dd03b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12dd03bb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd03bd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12dd03c0 jmp 0x12dd03dc */
  goto L_12dd03dc;
L_12dd03c2:;
  /* 12dd03c2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd03c6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd03c9 jl 0x12dd03dc */
  if ((C.sf!=C.of)) goto L_12dd03dc;
  /* 12dd03cb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd03cf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd03d2 jg 0x12dd03dc */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd03dc;
  /* 12dd03d4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12dd03d7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd03d9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12dd03dc:;
  /* 12dd03dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd03df shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dd03e2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd03e6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12dd03ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd03ed jmp 0x12dd038d */
  goto L_12dd038d;
L_12dd03ef:;
  /* 12dd03ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd03f2 mov esp, ebp */
  ESP = (EBP);
  /* 12dd03f4 pop ebp */
  EBP = (pop32());
  /* 12dd03f5 ret  */
  ESPCHK(0x12dd0380u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12dd0400 (101 bytes, 36 insns) */
void f_12dd0400(void) {
  FTRACE(0x12dd0400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0400 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0401 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0403 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0406 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd040d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0410 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd0412 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12dd0415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0418 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd041b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12dd041e:;
  /* 12dd041e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12dd0422 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0425 jl 0x12dd0430 */
  if ((C.sf!=C.of)) goto L_12dd0430;
  /* 12dd0427 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12dd042b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd042e jle 0x12dd0442 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd0442;
L_12dd0430:;
  /* 12dd0430 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12dd0434 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0437 jl 0x12dd045e */
  if ((C.sf!=C.of)) goto L_12dd045e;
  /* 12dd0439 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12dd043d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0440 jg 0x12dd045e */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd045e;
L_12dd0442:;
  /* 12dd0442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd0445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0448 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd044b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd044e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd0450 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12dd0453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0456 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0459 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dd045c jmp 0x12dd041e */
  goto L_12dd041e;
L_12dd045e:;
  /* 12dd045e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd0461 mov esp, ebp */
  ESP = (EBP);
  /* 12dd0463 pop ebp */
  EBP = (pop32());
  /* 12dd0464 ret  */
  ESPCHK(0x12dd0400u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x12dd0470 (122 bytes, 39 insns) */
void f_12dd0470(void) {
  FTRACE(0x12dd0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0470 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0471 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0473 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0477 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd047d jae 0x12dd04a1 */
  if (!C.cf) goto L_12dd04a1;
  /* 12dd047f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0482 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dd0485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0488 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd048b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd048e mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dd0495 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dd049a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd049d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd049f jne 0x12dd04bc */
  if (!C.zf) goto L_12dd04bc;
L_12dd04a1:;
  /* 12dd04a1 call 0x12dcb7c0 */
  push32(0x12dd04a6u); f_12dcb7c0();
  /* 12dd04a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dd04ac call 0x12dcb7d0 */
  push32(0x12dd04b1u); f_12dcb7d0();
  /* 12dd04b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dd04b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd04ba jmp 0x12dd04e6 */
  goto L_12dd04e6;
L_12dd04bc:;
  /* 12dd04bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd04bf push edx */
  push32((uint32_t)(EDX));
  /* 12dd04c0 call 0x12dccfe0 */
  push32(0x12dd04c5u); f_12dccfe0();
  /* 12dd04c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd04c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd04cb push eax */
  push32((uint32_t)(EAX));
  /* 12dd04cc call 0x12dd04f0 */
  push32(0x12dd04d1u); f_12dd04f0();
  /* 12dd04d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd04d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd04d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd04da push ecx */
  push32((uint32_t)(ECX));
  /* 12dd04db call 0x12dcd070 */
  push32(0x12dd04e0u); f_12dcd070();
  /* 12dd04e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd04e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dd04e6:;
  /* 12dd04e6 mov esp, ebp */
  ESP = (EBP);
  /* 12dd04e8 pop ebp */
  EBP = (pop32());
  /* 12dd04e9 ret  */
  ESPCHK(0x12dd0470u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12dd04f0 (170 bytes, 59 insns) */
void f_12dd04f0(void) {
  FTRACE(0x12dd04f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd04f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd04f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd04f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd04f4 push esi */
  push32((uint32_t)(ESI));
  /* 12dd04f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd04f8 push eax */
  push32((uint32_t)(EAX));
  /* 12dd04f9 call 0x12dcce60 */
  push32(0x12dd04feu); f_12dcce60();
  /* 12dd04fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0501 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0504 je 0x12dd0543 */
  if (C.zf) goto L_12dd0543;
  /* 12dd0506 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd050a je 0x12dd0512 */
  if (C.zf) goto L_12dd0512;
  /* 12dd050c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0510 jne 0x12dd052c */
  if (!C.zf) goto L_12dd052c;
L_12dd0512:;
  /* 12dd0512 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd0514 call 0x12dcce60 */
  push32(0x12dd0519u); f_12dcce60();
  /* 12dd0519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd051c mov esi, eax */
  ESI = (EAX);
  /* 12dd051e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd0520 call 0x12dcce60 */
  push32(0x12dd0525u); f_12dcce60();
  /* 12dd0525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0528 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd052a je 0x12dd0543 */
  if (C.zf) goto L_12dd0543;
L_12dd052c:;
  /* 12dd052c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd052f push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0530 call 0x12dcce60 */
  push32(0x12dd0535u); f_12dcce60();
  /* 12dd0535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0538 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0539 call dword ptr [0x12de22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c0))), 0x12dd053fu);
  /* 12dd053f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd0541 je 0x12dd054c */
  if (C.zf) goto L_12dd054c;
L_12dd0543:;
  /* 12dd0543 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd054a jmp 0x12dd0555 */
  goto L_12dd0555;
L_12dd054c:;
  /* 12dd054c call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dd0552u);
  /* 12dd0552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dd0555:;
  /* 12dd0555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0558 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0559 call 0x12dccd80 */
  push32(0x12dd055eu); f_12dccd80();
  /* 12dd055e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0564 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dd0567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd056a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dd056d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd0570 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dd0577 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12dd057c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0580 je 0x12dd0593 */
  if (C.zf) goto L_12dd0593;
  /* 12dd0582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd0585 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0586 call 0x12dcb720 */
  push32(0x12dd058bu); f_12dcb720();
  /* 12dd058b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd058e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0591 jmp 0x12dd0595 */
  goto L_12dd0595;
L_12dd0593:;
  /* 12dd0593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd0595:;
  /* 12dd0595 pop esi */
  ESI = (pop32());
  /* 12dd0596 mov esp, ebp */
  ESP = (EBP);
  /* 12dd0598 pop ebp */
  EBP = (pop32());
  /* 12dd0599 ret  */
  ESPCHK(0x12dd04f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105a0 @ 0x12dd05a0 (146 bytes, 52 insns) */
void f_12dd05a0(void) {
  FTRACE(0x12dd05a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd05a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd05a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd05a3 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd05a4 push esi */
  push32((uint32_t)(ESI));
  /* 12dd05a5 push edi */
  push32((uint32_t)(EDI));
L_12dd05a6:;
  /* 12dd05a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd05aa jne 0x12dd05ca */
  if (!C.zf) goto L_12dd05ca;
  /* 12dd05ac push 0x12ddb200 */
  push32((uint32_t)(0x12ddb200u));
  /* 12dd05b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd05b3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dd05b5 push 0x12ddb8c8 */
  push32((uint32_t)(0x12ddb8c8u));
  /* 12dd05ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd05bc call 0x12dc29b0 */
  push32(0x12dd05c1u); f_12dc29b0();
  /* 12dd05c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd05c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd05c7 jne 0x12dd05ca */
  if (!C.zf) goto L_12dd05ca;
  /* 12dd05c9 int3  */
  x86_unimpl("int3 @ 0x12dd05c9");
L_12dd05ca:;
  /* 12dd05ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd05cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd05ce jne 0x12dd05a6 */
  if (!C.zf) goto L_12dd05a6;
  /* 12dd05d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd05d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dd05d6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd05dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd05de je 0x12dd062d */
  if (C.zf) goto L_12dd062d;
  /* 12dd05e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd05e3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dd05e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd05e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd05eb je 0x12dd062d */
  if (C.zf) goto L_12dd062d;
  /* 12dd05ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd05ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd05f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dd05f5 push eax */
  push32((uint32_t)(EAX));
  /* 12dd05f6 call 0x12dc4380 */
  push32(0x12dd05fbu); f_12dc4380();
  /* 12dd05fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd05fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0601 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dd0604 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd060a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd060d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dd0610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0613 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12dd0619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd061c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12dd0623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0626 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12dd062d:;
  /* 12dd062d pop edi */
  EDI = (pop32());
  /* 12dd062e pop esi */
  ESI = (pop32());
  /* 12dd062f pop ebx */
  EBX = (pop32());
  /* 12dd0630 pop ebp */
  EBP = (pop32());
  /* 12dd0631 ret  */
  ESPCHK(0x12dd05a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010640 @ 0x12dd0640 (289 bytes, 97 insns) */
void f_12dd0640(void) {
  FTRACE(0x12dd0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0640 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0641 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0646 push esi */
  push32((uint32_t)(ESI));
  /* 12dd0647 mov eax, dword ptr [0x12ddec98] */
  EAX = (r32((uint32_t)(0x12ddec98)));
  /* 12dd064c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd064f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd0656 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd065d jmp 0x12dd0668 */
  goto L_12dd0668;
L_12dd065f:;
  /* 12dd065f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0665 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dd0668:;
  /* 12dd0668 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd066c jae 0x12dd06a1 */
  if (!C.cf) goto L_12dd06a1;
  /* 12dd066e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0671 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0674 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dd0677 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0678 call 0x12dc6720 */
  push32(0x12dd067du); f_12dc6720();
  /* 12dd067d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0680 mov esi, eax */
  ESI = (EAX);
  /* 12dd0682 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0688 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12dd068c push ecx */
  push32((uint32_t)(ECX));
  /* 12dd068d call 0x12dc6720 */
  push32(0x12dd0692u); f_12dc6720();
  /* 12dd0692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0695 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0698 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12dd069c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd069f jmp 0x12dd065f */
  goto L_12dd065f;
L_12dd06a1:;
  /* 12dd06a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd06a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd06a7 push eax */
  push32((uint32_t)(EAX));
  /* 12dd06a8 call 0x12dc38d0 */
  push32(0x12dd06adu); f_12dc38d0();
  /* 12dd06ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd06b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd06b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd06b7 je 0x12dd0759 */
  if (C.zf) goto L_12dd0759;
  /* 12dd06bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd06c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd06c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd06ca jmp 0x12dd06d5 */
  goto L_12dd06d5;
L_12dd06cc:;
  /* 12dd06cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd06cf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd06d2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd06d5:;
  /* 12dd06d5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd06d9 jae 0x12dd074a */
  if (!C.cf) goto L_12dd074a;
  /* 12dd06db mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd06de mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12dd06e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd06e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd06e7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd06ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd06ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd06f0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dd06f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd06f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd06f7 push edx */
  push32((uint32_t)(EDX));
  /* 12dd06f8 call 0x12dc68a0 */
  push32(0x12dd06fdu); f_12dc68a0();
  /* 12dd06fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0700 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0701 call 0x12dc6720 */
  push32(0x12dd0706u); f_12dc6720();
  /* 12dd0706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0709 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd070c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd070e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd0711 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0714 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12dd0717 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd071a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd071d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0720 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0723 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0726 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12dd072a push eax */
  push32((uint32_t)(EAX));
  /* 12dd072b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd072e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd072f call 0x12dc68a0 */
  push32(0x12dd0734u); f_12dc68a0();
  /* 12dd0734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0737 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0738 call 0x12dc6720 */
  push32(0x12dd073du); f_12dc6720();
  /* 12dd073d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0740 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0743 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0745 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0748 jmp 0x12dd06cc */
  goto L_12dd06cc;
L_12dd074a:;
  /* 12dd074a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd074d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dd0750 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0753 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0756 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12dd0759:;
  /* 12dd0759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd075c pop esi */
  ESI = (pop32());
  /* 12dd075d mov esp, ebp */
  ESP = (EBP);
  /* 12dd075f pop ebp */
  EBP = (pop32());
  /* 12dd0760 ret  */
  ESPCHK(0x12dd0640u, _esp0);
  ESP += 4; return;
}

/* FUN_10010770 @ 0x12dd0770 (291 bytes, 97 insns) */
void f_12dd0770(void) {
  FTRACE(0x12dd0770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0770 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0771 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0773 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0776 push esi */
  push32((uint32_t)(ESI));
  /* 12dd0777 mov eax, dword ptr [0x12ddec98] */
  EAX = (r32((uint32_t)(0x12ddec98)));
  /* 12dd077c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd077f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd0786 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd078d jmp 0x12dd0798 */
  goto L_12dd0798;
L_12dd078f:;
  /* 12dd078f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0792 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0795 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dd0798:;
  /* 12dd0798 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd079c jae 0x12dd07d2 */
  if (!C.cf) goto L_12dd07d2;
  /* 12dd079e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd07a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd07a4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12dd07a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd07a9 call 0x12dc6720 */
  push32(0x12dd07aeu); f_12dc6720();
  /* 12dd07ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd07b1 mov esi, eax */
  ESI = (EAX);
  /* 12dd07b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd07b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd07b9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12dd07bd push ecx */
  push32((uint32_t)(ECX));
  /* 12dd07be call 0x12dc6720 */
  push32(0x12dd07c3u); f_12dc6720();
  /* 12dd07c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd07c6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd07c9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12dd07cd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd07d0 jmp 0x12dd078f */
  goto L_12dd078f;
L_12dd07d2:;
  /* 12dd07d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd07d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd07d8 push eax */
  push32((uint32_t)(EAX));
  /* 12dd07d9 call 0x12dc38d0 */
  push32(0x12dd07deu); f_12dc38d0();
  /* 12dd07de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd07e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd07e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd07e8 je 0x12dd088b */
  if (C.zf) goto L_12dd088b;
  /* 12dd07ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd07f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd07f4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd07fb jmp 0x12dd0806 */
  goto L_12dd0806;
L_12dd07fd:;
  /* 12dd07fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0800 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0803 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd0806:;
  /* 12dd0806 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd080a jae 0x12dd087c */
  if (!C.cf) goto L_12dd087c;
  /* 12dd080c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd080f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12dd0812 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0815 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0818 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd081b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd081e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0821 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12dd0825 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0826 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0829 push edx */
  push32((uint32_t)(EDX));
  /* 12dd082a call 0x12dc68a0 */
  push32(0x12dd082fu); f_12dc68a0();
  /* 12dd082f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0832 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0833 call 0x12dc6720 */
  push32(0x12dd0838u); f_12dc6720();
  /* 12dd0838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd083b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd083e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0840 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd0843 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0846 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12dd0849 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd084c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd084f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0852 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0855 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0858 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12dd085c push eax */
  push32((uint32_t)(EAX));
  /* 12dd085d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0860 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0861 call 0x12dc68a0 */
  push32(0x12dd0866u); f_12dc68a0();
  /* 12dd0866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0869 push eax */
  push32((uint32_t)(EAX));
  /* 12dd086a call 0x12dc6720 */
  push32(0x12dd086fu); f_12dc6720();
  /* 12dd086f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0872 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0875 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0877 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd087a jmp 0x12dd07fd */
  goto L_12dd07fd;
L_12dd087c:;
  /* 12dd087c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd087f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dd0882 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0888 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12dd088b:;
  /* 12dd088b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd088e pop esi */
  ESI = (pop32());
  /* 12dd088f mov esp, ebp */
  ESP = (EBP);
  /* 12dd0891 pop ebp */
  EBP = (pop32());
  /* 12dd0892 ret  */
  ESPCHK(0x12dd0770u, _esp0);
  ESP += 4; return;
}

/* FUN_100108a0 @ 0x12dd08a0 (878 bytes, 273 insns) */
void f_12dd08a0(void) {
  FTRACE(0x12dd08a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd08a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd08a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd08a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd08a6 push esi */
  push32((uint32_t)(ESI));
  /* 12dd08a7 mov eax, dword ptr [0x12ddec98] */
  EAX = (r32((uint32_t)(0x12ddec98)));
  /* 12dd08ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd08af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd08b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd08bd jmp 0x12dd08c8 */
  goto L_12dd08c8;
L_12dd08bf:;
  /* 12dd08bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd08c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd08c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dd08c8:;
  /* 12dd08c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd08cc jae 0x12dd0901 */
  if (!C.cf) goto L_12dd0901;
  /* 12dd08ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd08d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd08d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dd08d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd08d8 call 0x12dc6720 */
  push32(0x12dd08ddu); f_12dc6720();
  /* 12dd08dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd08e0 mov esi, eax */
  ESI = (EAX);
  /* 12dd08e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd08e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd08e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12dd08ec push ecx */
  push32((uint32_t)(ECX));
  /* 12dd08ed call 0x12dc6720 */
  push32(0x12dd08f2u); f_12dc6720();
  /* 12dd08f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd08f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd08f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12dd08fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd08ff jmp 0x12dd08bf */
  goto L_12dd08bf;
L_12dd0901:;
  /* 12dd0901 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd0908 jmp 0x12dd0913 */
  goto L_12dd0913;
L_12dd090a:;
  /* 12dd090a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd090d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0910 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dd0913:;
  /* 12dd0913 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0917 jae 0x12dd094d */
  if (!C.cf) goto L_12dd094d;
  /* 12dd0919 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd091c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd091f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12dd0923 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0924 call 0x12dc6720 */
  push32(0x12dd0929u); f_12dc6720();
  /* 12dd0929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd092c mov esi, eax */
  ESI = (EAX);
  /* 12dd092e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0934 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12dd0938 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0939 call 0x12dc6720 */
  push32(0x12dd093eu); f_12dc6720();
  /* 12dd093e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0941 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0944 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12dd0948 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd094b jmp 0x12dd090a */
  goto L_12dd090a;
L_12dd094d:;
  /* 12dd094d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0950 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12dd0956 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0957 call 0x12dc6720 */
  push32(0x12dd095cu); f_12dc6720();
  /* 12dd095c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd095f mov esi, eax */
  ESI = (EAX);
  /* 12dd0961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0964 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12dd096a push edx */
  push32((uint32_t)(EDX));
  /* 12dd096b call 0x12dc6720 */
  push32(0x12dd0970u); f_12dc6720();
  /* 12dd0970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0973 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0976 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12dd097a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd097d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0980 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12dd0986 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0987 call 0x12dc6720 */
  push32(0x12dd098cu); f_12dc6720();
  /* 12dd098c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd098f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd0992 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd0996 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd0999 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd099c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12dd09a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd09a3 call 0x12dc6720 */
  push32(0x12dd09a8u); f_12dc6720();
  /* 12dd09a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd09ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd09ae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12dd09b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd09b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd09b8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12dd09be push edx */
  push32((uint32_t)(EDX));
  /* 12dd09bf call 0x12dc6720 */
  push32(0x12dd09c4u); f_12dc6720();
  /* 12dd09c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd09c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd09ca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd09ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd09d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd09d4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd09d9 push eax */
  push32((uint32_t)(EAX));
  /* 12dd09da call 0x12dc38d0 */
  push32(0x12dd09dfu); f_12dc38d0();
  /* 12dd09df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd09e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd09e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd09e9 je 0x12dd0c06 */
  if (C.zf) goto L_12dd0c06;
  /* 12dd09ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd09f2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dd09f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd09f8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd09fe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0a01 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12dd0a06 mov eax, dword ptr [0x12ddec98] */
  EAX = (r32((uint32_t)(0x12ddec98)));
  /* 12dd0a0b push eax */
  push32((uint32_t)(EAX));
  /* 12dd0a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd0a0f push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0a10 call 0x12dca1d0 */
  push32(0x12dd0a15u); f_12dca1d0();
  /* 12dd0a15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd0a1f jmp 0x12dd0a2a */
  goto L_12dd0a2a;
L_12dd0a21:;
  /* 12dd0a21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0a24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd0a2a:;
  /* 12dd0a2a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0a2e jae 0x12dd0a9e */
  if (!C.cf) goto L_12dd0a9e;
  /* 12dd0a30 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0a33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0a36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a39 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12dd0a3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0a3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0a42 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dd0a45 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0a46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a49 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0a4a call 0x12dc68a0 */
  push32(0x12dd0a4fu); f_12dc68a0();
  /* 12dd0a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a52 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0a53 call 0x12dc6720 */
  push32(0x12dd0a58u); f_12dc6720();
  /* 12dd0a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd0a62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0a65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0a68 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0a6b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a6e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12dd0a72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0a75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0a78 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12dd0a7c push edx */
  push32((uint32_t)(EDX));
  /* 12dd0a7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a80 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0a81 call 0x12dc68a0 */
  push32(0x12dd0a86u); f_12dc68a0();
  /* 12dd0a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a89 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0a8a call 0x12dc6720 */
  push32(0x12dd0a8fu); f_12dc6720();
  /* 12dd0a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0a92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0a95 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd0a99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0a9c jmp 0x12dd0a21 */
  goto L_12dd0a21;
L_12dd0a9e:;
  /* 12dd0a9e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd0aa5 jmp 0x12dd0ab0 */
  goto L_12dd0ab0;
L_12dd0aa7:;
  /* 12dd0aa7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0aaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0aad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dd0ab0:;
  /* 12dd0ab0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0ab4 jae 0x12dd0b26 */
  if (!C.cf) goto L_12dd0b26;
  /* 12dd0ab6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0ab9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0abc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0abf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12dd0ac3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0ac6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0ac9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12dd0acd push eax */
  push32((uint32_t)(EAX));
  /* 12dd0ace mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0ad2 call 0x12dc68a0 */
  push32(0x12dd0ad7u); f_12dc68a0();
  /* 12dd0ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0ada push eax */
  push32((uint32_t)(EAX));
  /* 12dd0adb call 0x12dc6720 */
  push32(0x12dd0ae0u); f_12dc6720();
  /* 12dd0ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0ae3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0ae6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12dd0aea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0aed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0af0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0af3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0af6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12dd0afa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0afd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0b00 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12dd0b04 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0b05 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0b09 call 0x12dc68a0 */
  push32(0x12dd0b0eu); f_12dc68a0();
  /* 12dd0b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b11 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0b12 call 0x12dc6720 */
  push32(0x12dd0b17u); f_12dc6720();
  /* 12dd0b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b1d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12dd0b21 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0b24 jmp 0x12dd0aa7 */
  goto L_12dd0aa7;
L_12dd0b26:;
  /* 12dd0b26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0b29 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b2c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12dd0b32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0b35 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12dd0b3b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0b3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b3f push edx */
  push32((uint32_t)(EDX));
  /* 12dd0b40 call 0x12dc68a0 */
  push32(0x12dd0b45u); f_12dc68a0();
  /* 12dd0b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b48 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0b49 call 0x12dc6720 */
  push32(0x12dd0b4eu); f_12dc6720();
  /* 12dd0b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b54 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd0b58 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0b5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0b5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b61 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12dd0b67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0b6a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12dd0b70 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0b71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0b75 call 0x12dc68a0 */
  push32(0x12dd0b7au); f_12dc68a0();
  /* 12dd0b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b7d push eax */
  push32((uint32_t)(EAX));
  /* 12dd0b7e call 0x12dc6720 */
  push32(0x12dd0b83u); f_12dc6720();
  /* 12dd0b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0b86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b89 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12dd0b8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0b90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0b93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0b96 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12dd0b9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0b9f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12dd0ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0ba6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0ba9 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0baa call 0x12dc68a0 */
  push32(0x12dd0bafu); f_12dc68a0();
  /* 12dd0baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0bb3 call 0x12dc6720 */
  push32(0x12dd0bb8u); f_12dc6720();
  /* 12dd0bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0bbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0bbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dd0bc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd0bc5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0bc8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0bcb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12dd0bd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0bd4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12dd0bda push eax */
  push32((uint32_t)(EAX));
  /* 12dd0bdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0bde push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0bdf call 0x12dc68a0 */
  push32(0x12dd0be4u); f_12dc68a0();
  /* 12dd0be4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0be7 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0be8 call 0x12dc6720 */
  push32(0x12dd0bedu); f_12dc6720();
  /* 12dd0bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0bf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0bf3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12dd0bf7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd0bfa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd0bfd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd0c00 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12dd0c06:;
  /* 12dd0c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd0c09 pop esi */
  ESI = (pop32());
  /* 12dd0c0a mov esp, ebp */
  ESP = (EBP);
  /* 12dd0c0c pop ebp */
  EBP = (pop32());
  /* 12dd0c0d ret  */
  ESPCHK(0x12dd08a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c10 @ 0x12dd0c10 (31 bytes, 15 insns) */
void f_12dd0c10(void) {
  FTRACE(0x12dd0c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0c11 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd0c15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0c18 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0c19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0c1c push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0c1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0c20 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0c21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0c24 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0c25 call 0x12dd0c30 */
  push32(0x12dd0c2au); f_12dd0c30();
  /* 12dd0c2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0c2d pop ebp */
  EBP = (pop32());
  /* 12dd0c2e ret  */
  ESPCHK(0x12dd0c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x12dd0c30 (394 bytes, 123 insns) */
void f_12dd0c30(void) {
  FTRACE(0x12dd0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0c31 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0c36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0c39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd0c3c push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd0c41 call dword ptr [0x12de2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2354))), 0x12dd0c47u);
  /* 12dd0c47 cmp dword ptr [0x12ddf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0c4e je 0x12dd0c6e */
  if (C.zf) goto L_12dd0c6e;
  /* 12dd0c50 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd0c55 call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dd0c5bu);
  /* 12dd0c5b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd0c5d call 0x12dc72f0 */
  push32(0x12dd0c62u); f_12dc72f0();
  /* 12dd0c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0c65 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dd0c6c jmp 0x12dd0c75 */
  goto L_12dd0c75;
L_12dd0c6e:;
  /* 12dd0c6e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dd0c75:;
  /* 12dd0c75 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0c79 jne 0x12dd0c86 */
  if (!C.zf) goto L_12dd0c86;
  /* 12dd0c7b mov ecx, dword ptr [0x12ddec98] */
  ECX = (r32((uint32_t)(0x12ddec98)));
  /* 12dd0c81 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dd0c84 jmp 0x12dd0c8c */
  goto L_12dd0c8c;
L_12dd0c86:;
  /* 12dd0c86 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0c89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd0c8c:;
  /* 12dd0c8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd0c8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dd0c92:;
  /* 12dd0c92 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0c96 jbe 0x12dd0d83 */
  if ((C.cf||C.zf)) goto L_12dd0d83;
  /* 12dd0c9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0c9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd0ca1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12dd0ca4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd0ca8 je 0x12dd0cb2 */
  if (C.zf) goto L_12dd0cb2;
  /* 12dd0caa cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd0cae je 0x12dd0cb7 */
  if (C.zf) goto L_12dd0cb7;
  /* 12dd0cb0 jmp 0x12dd0d11 */
  goto L_12dd0d11;
L_12dd0cb2:;
  /* 12dd0cb2 jmp 0x12dd0d83 */
  goto L_12dd0d83;
L_12dd0cb7:;
  /* 12dd0cb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0cba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0cbd mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12dd0cc0 mov dword ptr [0x12ddf898], 0 */
  w32((uint32_t)(0x12ddf898), (0x0u));
  /* 12dd0cca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0ccd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd0cd0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0cd3 jne 0x12dd0ce8 */
  if (!C.zf) goto L_12dd0ce8;
  /* 12dd0cd5 mov dword ptr [0x12ddf898], 1 */
  w32((uint32_t)(0x12ddf898), (0x1u));
  /* 12dd0cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0ce2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0ce5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12dd0ce8:;
  /* 12dd0ce8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd0ceb push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0cec lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12dd0cef push edx */
  push32((uint32_t)(EDX));
  /* 12dd0cf0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12dd0cf3 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0cf4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0cf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0cfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd0cfd push eax */
  push32((uint32_t)(EAX));
  /* 12dd0cfe call 0x12dd0dc0 */
  push32(0x12dd0d03u); f_12dd0dc0();
  /* 12dd0d03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dd0d0f jmp 0x12dd0d7e */
  goto L_12dd0d7e;
L_12dd0d11:;
  /* 12dd0d11 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0d16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd0d18 mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd0d1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd0d20 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd0d24 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd0d2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd0d2c je 0x12dd0d59 */
  if (C.zf) goto L_12dd0d59;
  /* 12dd0d2e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0d32 jbe 0x12dd0d59 */
  if ((C.cf||C.zf)) goto L_12dd0d59;
  /* 12dd0d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0d37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d3a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd0d3c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dd0d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0d41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d44 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd0d47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d4d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dd0d50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0d53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0d56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dd0d59:;
  /* 12dd0d59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0d5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d5f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd0d61 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dd0d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0d66 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd0d6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0d6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d72 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dd0d75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0d78 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0d7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dd0d7e:;
  /* 12dd0d7e jmp 0x12dd0c92 */
  goto L_12dd0c92;
L_12dd0d83:;
  /* 12dd0d83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0d87 je 0x12dd0d95 */
  if (C.zf) goto L_12dd0d95;
  /* 12dd0d89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd0d8b call 0x12dc7390 */
  push32(0x12dd0d90u); f_12dc7390();
  /* 12dd0d90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0d93 jmp 0x12dd0da0 */
  goto L_12dd0da0;
L_12dd0d95:;
  /* 12dd0d95 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd0d9a call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dd0da0u);
L_12dd0da0:;
  /* 12dd0da0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0da4 jbe 0x12dd0db4 */
  if ((C.cf||C.zf)) goto L_12dd0db4;
  /* 12dd0da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd0da9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dd0dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0daf sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0db2 jmp 0x12dd0db6 */
  goto L_12dd0db6;
L_12dd0db4:;
  /* 12dd0db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd0db6:;
  /* 12dd0db6 mov esp, ebp */
  ESP = (EBP);
  /* 12dd0db8 pop ebp */
  EBP = (pop32());
  /* 12dd0db9 ret  */
  ESPCHK(0x12dd0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dc0 @ 0x12dd0dc0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12dd0dc0(void) {
  FTRACE(0x12dd0dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0dc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0dc6 push esi */
  push32((uint32_t)(ESI));
  /* 12dd0dc7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12dd0dcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd0dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0dd1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0dd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd0dd7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0ddb ja 0x12dd1328 */
  if ((!C.cf&&!C.zf)) goto L_12dd1328;
  /* 12dd0de1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd0de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd0de6 mov dl, byte ptr [eax + 0x12dd1389] */
  DL = (r8((uint32_t)(EAX + 0x12dd1389)));
  /* 12dd0dec jmp dword ptr [edx*4 + 0x12dd132d] */
  switch (EDX) {
    case 0: goto L_12dd1306;
    case 1: goto L_12dd0e15;
    case 2: goto L_12dd0e5b;
    case 3: goto L_12dd0fa8;
    case 4: goto L_12dd0fd0;
    case 5: goto L_12dd106f;
    case 6: goto L_12dd10db;
    case 7: goto L_12dd1104;
    case 8: goto L_12dd1145;
    case 9: goto L_12dd1227;
    case 10: goto L_12dd128e;
    case 11: goto L_12dd12db;
    case 12: goto L_12dd0df3;
    case 13: goto L_12dd0e38;
    case 14: goto L_12dd0e7e;
    case 15: goto L_12dd0f7e;
    case 16: goto L_12dd1015;
    case 17: goto L_12dd1042;
    case 18: goto L_12dd1097;
    case 19: goto L_12dd111b;
    case 20: goto L_12dd11c9;
    case 21: goto L_12dd1258;
    case 22: goto L_12dd1328;
    default: x86_unimpl("switch@0x12dd0dec out of table"); return;
  }
L_12dd0df3:;
  /* 12dd0df3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0df6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0df7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0dfa push edx */
  push32((uint32_t)(EDX));
  /* 12dd0dfb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0dfe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12dd0e01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0e04 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dd0e07 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0e08 call 0x12dd13e0 */
  push32(0x12dd0e0du); f_12dd13e0();
  /* 12dd0e0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0e10 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0e15:;
  /* 12dd0e15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0e19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0e1c push edx */
  push32((uint32_t)(EDX));
  /* 12dd0e1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0e20 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12dd0e23 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0e26 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12dd0e2a push eax */
  push32((uint32_t)(EAX));
  /* 12dd0e2b call 0x12dd13e0 */
  push32(0x12dd0e30u); f_12dd13e0();
  /* 12dd0e30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0e33 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0e38:;
  /* 12dd0e38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0e3b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0e3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0e3f push edx */
  push32((uint32_t)(EDX));
  /* 12dd0e40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0e43 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dd0e46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0e49 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12dd0e4d push eax */
  push32((uint32_t)(EAX));
  /* 12dd0e4e call 0x12dd13e0 */
  push32(0x12dd0e53u); f_12dd13e0();
  /* 12dd0e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0e56 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0e5b:;
  /* 12dd0e5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0e5e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0e5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0e62 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0e63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0e66 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dd0e69 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0e6c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12dd0e70 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0e71 call 0x12dd13e0 */
  push32(0x12dd0e76u); f_12dd13e0();
  /* 12dd0e76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0e79 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0e7e:;
  /* 12dd0e7e cmp dword ptr [0x12ddf898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0e85 je 0x12dd0f06 */
  if (C.zf) goto L_12dd0f06;
  /* 12dd0e87 mov dword ptr [0x12ddf898], 0 */
  w32((uint32_t)(0x12ddf898), (0x0u));
  /* 12dd0e91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0e94 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0e95 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0e98 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0e99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0e9c push eax */
  push32((uint32_t)(EAX));
  /* 12dd0e9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0ea1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0ea4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12dd0eaa push eax */
  push32((uint32_t)(EAX));
  /* 12dd0eab call 0x12dd1590 */
  push32(0x12dd0eb0u); f_12dd1590();
  /* 12dd0eb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0eb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0eb6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0eb9 jne 0x12dd0ec0 */
  if (!C.zf) goto L_12dd0ec0;
  /* 12dd0ebb jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0ec0:;
  /* 12dd0ec0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0ec3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd0ec5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12dd0ec8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0ecb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd0ecd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0ed0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0ed3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd0ed5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0ed8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd0eda sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0edd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0ee0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd0ee2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0ee6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0ee9 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0eea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0eed push eax */
  push32((uint32_t)(EAX));
  /* 12dd0eee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0ef2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0ef5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12dd0efb push eax */
  push32((uint32_t)(EAX));
  /* 12dd0efc call 0x12dd1590 */
  push32(0x12dd0f01u); f_12dd1590();
  /* 12dd0f01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0f04 jmp 0x12dd0f79 */
  goto L_12dd0f79;
L_12dd0f06:;
  /* 12dd0f06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0f09 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0f0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f0d push edx */
  push32((uint32_t)(EDX));
  /* 12dd0f0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f11 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0f12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0f15 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0f16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0f19 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12dd0f1f push eax */
  push32((uint32_t)(EAX));
  /* 12dd0f20 call 0x12dd1590 */
  push32(0x12dd0f25u); f_12dd1590();
  /* 12dd0f25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0f28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f2b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0f2e jne 0x12dd0f35 */
  if (!C.zf) goto L_12dd0f35;
  /* 12dd0f30 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0f35:;
  /* 12dd0f35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd0f3a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12dd0f3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd0f42 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0f45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f48 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd0f4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd0f4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0f52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd0f57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0f5a push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0f5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f5e push edx */
  push32((uint32_t)(EDX));
  /* 12dd0f5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f62 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0f63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0f66 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0f67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd0f6a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12dd0f70 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0f71 call 0x12dd1590 */
  push32(0x12dd0f76u); f_12dd1590();
  /* 12dd0f76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd0f79:;
  /* 12dd0f79 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0f7e:;
  /* 12dd0f7e mov ecx, dword ptr [0x12ddf898] */
  ECX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd0f84 mov dword ptr [0x12ddf8a8], ecx */
  w32((uint32_t)(0x12ddf8a8), (ECX));
  /* 12dd0f8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0f8d push edx */
  push32((uint32_t)(EDX));
  /* 12dd0f8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0f91 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0f92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd0f94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0f97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dd0f9a push edx */
  push32((uint32_t)(EDX));
  /* 12dd0f9b call 0x12dd1430 */
  push32(0x12dd0fa0u); f_12dd1430();
  /* 12dd0fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0fa3 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0fa8:;
  /* 12dd0fa8 mov eax, dword ptr [0x12ddf898] */
  EAX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd0fad mov dword ptr [0x12ddf8a8], eax */
  w32((uint32_t)(0x12ddf8a8), (EAX));
  /* 12dd0fb2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0fb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd0fb9 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0fba push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd0fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0fbf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dd0fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd0fc3 call 0x12dd1430 */
  push32(0x12dd0fc8u); f_12dd1430();
  /* 12dd0fc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0fcb jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd0fd0:;
  /* 12dd0fd0 mov edx, dword ptr [0x12ddf898] */
  EDX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd0fd6 mov dword ptr [0x12ddf8a8], edx */
  w32((uint32_t)(0x12ddf8a8), (EDX));
  /* 12dd0fdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd0fdf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dd0fe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd0fe3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12dd0fe8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd0fea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd0fed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0ff1 jne 0x12dd0ffa */
  if (!C.zf) goto L_12dd0ffa;
  /* 12dd0ff3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12dd0ffa:;
  /* 12dd0ffa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd0ffd push edx */
  push32((uint32_t)(EDX));
  /* 12dd0ffe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1001 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1002 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1004 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1007 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1008 call 0x12dd1430 */
  push32(0x12dd100du); f_12dd1430();
  /* 12dd100d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1010 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1015:;
  /* 12dd1015 mov edx, dword ptr [0x12ddf898] */
  EDX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd101b mov dword ptr [0x12ddf8a8], edx */
  w32((uint32_t)(0x12ddf8a8), (EDX));
  /* 12dd1021 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1024 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1028 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1029 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dd102b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd102e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dd1031 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1034 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1035 call 0x12dd1430 */
  push32(0x12dd103au); f_12dd1430();
  /* 12dd103a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd103d jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1042:;
  /* 12dd1042 mov ecx, dword ptr [0x12ddf898] */
  ECX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd1048 mov dword ptr [0x12ddf8a8], ecx */
  w32((uint32_t)(0x12ddf8a8), (ECX));
  /* 12dd104e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1051 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1052 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1055 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1056 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1058 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd105b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dd105e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1061 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1062 call 0x12dd1430 */
  push32(0x12dd1067u); f_12dd1430();
  /* 12dd1067 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd106a jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd106f:;
  /* 12dd106f mov eax, dword ptr [0x12ddf898] */
  EAX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd1074 mov dword ptr [0x12ddf8a8], eax */
  w32((uint32_t)(0x12ddf8a8), (EAX));
  /* 12dd1079 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd107c push ecx */
  push32((uint32_t)(ECX));
  /* 12dd107d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1080 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1081 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1086 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dd1089 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd108a call 0x12dd1430 */
  push32(0x12dd108fu); f_12dd1430();
  /* 12dd108f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1092 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1097:;
  /* 12dd1097 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd109a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd109e jg 0x12dd10bc */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd10bc;
  /* 12dd10a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd10a3 push eax */
  push32((uint32_t)(EAX));
  /* 12dd10a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd10a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd10a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd10ab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12dd10b1 push eax */
  push32((uint32_t)(EAX));
  /* 12dd10b2 call 0x12dd13e0 */
  push32(0x12dd10b7u); f_12dd13e0();
  /* 12dd10b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd10ba jmp 0x12dd10d6 */
  goto L_12dd10d6;
L_12dd10bc:;
  /* 12dd10bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd10bf push ecx */
  push32((uint32_t)(ECX));
  /* 12dd10c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd10c3 push edx */
  push32((uint32_t)(EDX));
  /* 12dd10c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd10c7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12dd10cd push ecx */
  push32((uint32_t)(ECX));
  /* 12dd10ce call 0x12dd13e0 */
  push32(0x12dd10d3u); f_12dd13e0();
  /* 12dd10d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd10d6:;
  /* 12dd10d6 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd10db:;
  /* 12dd10db mov edx, dword ptr [0x12ddf898] */
  EDX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd10e1 mov dword ptr [0x12ddf8a8], edx */
  w32((uint32_t)(0x12ddf8a8), (EDX));
  /* 12dd10e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd10ea push eax */
  push32((uint32_t)(EAX));
  /* 12dd10eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd10ee push ecx */
  push32((uint32_t)(ECX));
  /* 12dd10ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd10f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd10f4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd10f6 push eax */
  push32((uint32_t)(EAX));
  /* 12dd10f7 call 0x12dd1430 */
  push32(0x12dd10fcu); f_12dd1430();
  /* 12dd10fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd10ff jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1104:;
  /* 12dd1104 mov ecx, dword ptr [0x12ddf898] */
  ECX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd110a mov dword ptr [0x12ddf8a8], ecx */
  w32((uint32_t)(0x12ddf8a8), (ECX));
  /* 12dd1110 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1113 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12dd1116 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd1119 jmp 0x12dd116d */
  goto L_12dd116d;
L_12dd111b:;
  /* 12dd111b mov ecx, dword ptr [0x12ddf898] */
  ECX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd1121 mov dword ptr [0x12ddf8a8], ecx */
  w32((uint32_t)(0x12ddf8a8), (ECX));
  /* 12dd1127 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd112a push edx */
  push32((uint32_t)(EDX));
  /* 12dd112b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd112e push eax */
  push32((uint32_t)(EAX));
  /* 12dd112f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd1131 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1134 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dd1137 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1138 call 0x12dd1430 */
  push32(0x12dd113du); f_12dd1430();
  /* 12dd113d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1140 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1145:;
  /* 12dd1145 mov eax, dword ptr [0x12ddf898] */
  EAX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd114a mov dword ptr [0x12ddf8a8], eax */
  w32((uint32_t)(0x12ddf8a8), (EAX));
  /* 12dd114f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1152 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1156 jne 0x12dd1161 */
  if (!C.zf) goto L_12dd1161;
  /* 12dd1158 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12dd115f jmp 0x12dd116d */
  goto L_12dd116d;
L_12dd1161:;
  /* 12dd1161 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1164 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12dd1167 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd116a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dd116d:;
  /* 12dd116d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1170 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12dd1173 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1176 jge 0x12dd1181 */
  if ((C.sf==C.of)) goto L_12dd1181;
  /* 12dd1178 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd117f jmp 0x12dd11ae */
  goto L_12dd11ae;
L_12dd1181:;
  /* 12dd1181 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1184 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dd1187 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd1188 mov ecx, 7 */
  ECX = (0x7u);
  /* 12dd118d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd118f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd1192 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1195 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dd1198 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd1199 mov ecx, 7 */
  ECX = (0x7u);
  /* 12dd119e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd11a0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd11a3 jl 0x12dd11ae */
  if ((C.sf!=C.of)) goto L_12dd11ae;
  /* 12dd11a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd11a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd11ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dd11ae:;
  /* 12dd11ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd11b1 push eax */
  push32((uint32_t)(EAX));
  /* 12dd11b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd11b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd11b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd11b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd11bb push edx */
  push32((uint32_t)(EDX));
  /* 12dd11bc call 0x12dd1430 */
  push32(0x12dd11c1u); f_12dd1430();
  /* 12dd11c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd11c4 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd11c9:;
  /* 12dd11c9 cmp dword ptr [0x12ddf898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd11d0 je 0x12dd1200 */
  if (C.zf) goto L_12dd1200;
  /* 12dd11d2 mov dword ptr [0x12ddf898], 0 */
  w32((uint32_t)(0x12ddf898), (0x0u));
  /* 12dd11dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd11df push eax */
  push32((uint32_t)(EAX));
  /* 12dd11e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd11e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd11e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd11e7 push edx */
  push32((uint32_t)(EDX));
  /* 12dd11e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd11eb push eax */
  push32((uint32_t)(EAX));
  /* 12dd11ec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd11ef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12dd11f5 push edx */
  push32((uint32_t)(EDX));
  /* 12dd11f6 call 0x12dd1590 */
  push32(0x12dd11fbu); f_12dd1590();
  /* 12dd11fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd11fe jmp 0x12dd1222 */
  goto L_12dd1222;
L_12dd1200:;
  /* 12dd1200 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1203 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1204 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1207 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1208 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd120b push edx */
  push32((uint32_t)(EDX));
  /* 12dd120c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd120f push eax */
  push32((uint32_t)(EAX));
  /* 12dd1210 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1213 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12dd1219 push edx */
  push32((uint32_t)(EDX));
  /* 12dd121a call 0x12dd1590 */
  push32(0x12dd121fu); f_12dd1590();
  /* 12dd121f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd1222:;
  /* 12dd1222 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1227:;
  /* 12dd1227 mov dword ptr [0x12ddf898], 0 */
  w32((uint32_t)(0x12ddf898), (0x0u));
  /* 12dd1231 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1234 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1235 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1238 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1239 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd123c push edx */
  push32((uint32_t)(EDX));
  /* 12dd123d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1240 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1241 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1244 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12dd124a push edx */
  push32((uint32_t)(EDX));
  /* 12dd124b call 0x12dd1590 */
  push32(0x12dd1250u); f_12dd1590();
  /* 12dd1250 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1253 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1258:;
  /* 12dd1258 mov eax, dword ptr [0x12ddf898] */
  EAX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd125d mov dword ptr [0x12ddf8a8], eax */
  w32((uint32_t)(0x12ddf8a8), (EAX));
  /* 12dd1262 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1265 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dd1268 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd1269 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12dd126e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd1270 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd1273 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1276 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1277 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd127a push eax */
  push32((uint32_t)(EAX));
  /* 12dd127b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd127d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1280 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1281 call 0x12dd1430 */
  push32(0x12dd1286u); f_12dd1430();
  /* 12dd1286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1289 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd128e:;
  /* 12dd128e mov edx, dword ptr [0x12ddf898] */
  EDX = (r32((uint32_t)(0x12ddf898)));
  /* 12dd1294 mov dword ptr [0x12ddf8a8], edx */
  w32((uint32_t)(0x12ddf8a8), (EDX));
  /* 12dd129a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd129d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dd12a0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd12a1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12dd12a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd12a8 mov ecx, eax */
  ECX = (EAX);
  /* 12dd12aa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd12ad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd12b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd12b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dd12b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd12b7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12dd12bc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd12be add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd12c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd12c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd12c6 push eax */
  push32((uint32_t)(EAX));
  /* 12dd12c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd12ca push ecx */
  push32((uint32_t)(ECX));
  /* 12dd12cb push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd12cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd12d0 push edx */
  push32((uint32_t)(EDX));
  /* 12dd12d1 call 0x12dd1430 */
  push32(0x12dd12d6u); f_12dd1430();
  /* 12dd12d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd12d9 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd12db:;
  /* 12dd12db call 0x12dd23f0 */
  push32(0x12dd12e0u); f_12dd23f0();
  /* 12dd12e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd12e3 push eax */
  push32((uint32_t)(EAX));
  /* 12dd12e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd12e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd12e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd12eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd12ed cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd12f1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12dd12f4 mov ecx, dword ptr [eax*4 + 0x12ddee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ddee1c)));
  /* 12dd12fb push ecx */
  push32((uint32_t)(ECX));
  /* 12dd12fc call 0x12dd13e0 */
  push32(0x12dd1301u); f_12dd13e0();
  /* 12dd1301 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1304 jmp 0x12dd1328 */
  goto L_12dd1328;
L_12dd1306:;
  /* 12dd1306 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1309 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd130b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12dd130e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1311 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1313 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1316 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1319 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd131b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd131e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1320 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1323 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1326 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dd1328:;
  /* 12dd1328 pop esi */
  ESI = (pop32());
  /* 12dd1329 mov esp, ebp */
  ESP = (EBP);
  /* 12dd132b pop ebp */
  EBP = (pop32());
  /* 12dd132c ret  */
  ESPCHK(0x12dd0dc0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12dd13e0 (72 bytes, 30 insns) */
void f_12dd13e0(void) {
  FTRACE(0x12dd13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd13e1 mov ebp, esp */
  EBP = (ESP);
L_12dd13e3:;
  /* 12dd13e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd13e6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd13e9 je 0x12dd1426 */
  if (C.zf) goto L_12dd1426;
  /* 12dd13eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd13ee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd13f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd13f3 je 0x12dd1426 */
  if (C.zf) goto L_12dd1426;
  /* 12dd13f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd13f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd13fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd13fd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd13ff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dd1401 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1404 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1406 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1409 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd140c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd140e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1411 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1414 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dd1417 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd141a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd141c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd141f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1422 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd1424 jmp 0x12dd13e3 */
  goto L_12dd13e3;
L_12dd1426:;
  /* 12dd1426 pop ebp */
  EBP = (pop32());
  /* 12dd1427 ret  */
  ESPCHK(0x12dd13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x12dd1430 (173 bytes, 64 insns) */
void f_12dd1430(void) {
  FTRACE(0x12dd1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1430 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1431 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1433 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd143b cmp dword ptr [0x12ddf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1442 je 0x12dd145a */
  if (C.zf) goto L_12dd145a;
  /* 12dd1444 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1447 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1448 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd144b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd144c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd144f push edx */
  push32((uint32_t)(EDX));
  /* 12dd1450 call 0x12dd14e0 */
  push32(0x12dd1455u); f_12dd14e0();
  /* 12dd1455 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1458 jmp 0x12dd14d9 */
  goto L_12dd14d9;
L_12dd145a:;
  /* 12dd145a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd145d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1460 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1462 jae 0x12dd14d0 */
  if (!C.cf) goto L_12dd14d0;
  /* 12dd1464 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1467 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd146a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12dd146d jmp 0x12dd1478 */
  goto L_12dd1478;
L_12dd146f:;
  /* 12dd146f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1472 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1475 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12dd1478:;
  /* 12dd1478 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd147b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd147e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd1480 je 0x12dd14b4 */
  if (C.zf) goto L_12dd14b4;
  /* 12dd1482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1485 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd1486 mov ecx, 0xa */
  ECX = (0xau);
  /* 12dd148b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd148d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1490 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd1495 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1498 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12dd149b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd149e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd149f mov ecx, 0xa */
  ECX = (0xau);
  /* 12dd14a4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd14a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd14a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd14ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd14af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd14b2 jmp 0x12dd146f */
  goto L_12dd146f;
L_12dd14b4:;
  /* 12dd14b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd14b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd14b9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd14bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd14bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dd14c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd14c4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd14c6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd14c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd14cc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dd14ce jmp 0x12dd14d9 */
  goto L_12dd14d9;
L_12dd14d0:;
  /* 12dd14d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd14d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12dd14d9:;
  /* 12dd14d9 mov esp, ebp */
  ESP = (EBP);
  /* 12dd14db pop ebp */
  EBP = (pop32());
  /* 12dd14dc ret  */
  ESPCHK(0x12dd1430u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12dd14e0 (172 bytes, 65 insns) */
void f_12dd14e0(void) {
  FTRACE(0x12dd14e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd14e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd14e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd14e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd14e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd14e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd14eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd14ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd14f1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd14f4 jbe 0x12dd153b */
  if ((C.cf||C.zf)) goto L_12dd153b;
L_12dd14f6:;
  /* 12dd14f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd14f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd14fa mov ecx, 0xa */
  ECX = (0xau);
  /* 12dd14ff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd1501 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1507 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dd1509 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd150c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd150f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd1512 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1515 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd1517 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd151a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd151d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd151f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1522 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd1523 mov ecx, 0xa */
  ECX = (0xau);
  /* 12dd1528 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd152a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd152d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1531 jle 0x12dd153b */
  if ((C.zf||C.sf!=C.of)) goto L_12dd153b;
  /* 12dd1533 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1536 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1539 ja 0x12dd14f6 */
  if ((!C.cf&&!C.zf)) goto L_12dd14f6;
L_12dd153b:;
  /* 12dd153b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd153e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd1540 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd1543 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1549 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dd154b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd154e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1551 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dd1554:;
  /* 12dd1554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1557 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd1559 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12dd155c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd155f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd1562 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd1564 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dd1566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1569 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd156c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd156f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd1572 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dd1575 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12dd1577 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd157a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd157d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd1580 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd1583 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1586 jb 0x12dd1554 */
  if (C.cf) goto L_12dd1554;
  /* 12dd1588 mov esp, ebp */
  ESP = (EBP);
  /* 12dd158a pop ebp */
  EBP = (pop32());
  /* 12dd158b ret  */
  ESPCHK(0x12dd14e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x12dd1590 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12dd1590(void) {
  FTRACE(0x12dd1590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1590 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1591 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1593 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12dd1596:;
  /* 12dd1596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1599 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd159c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd159e je 0x12dd1a0c */
  if (C.zf) goto L_12dd1a0c;
  /* 12dd15a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd15a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd15aa je 0x12dd1a0c */
  if (C.zf) goto L_12dd1a0c;
  /* 12dd15b0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd15b4 mov dword ptr [0x12ddf8a8], 0 */
  w32((uint32_t)(0x12ddf8a8), (0x0u));
  /* 12dd15be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dd15c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd15c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd15cb jmp 0x12dd15d6 */
  goto L_12dd15d6;
L_12dd15cd:;
  /* 12dd15cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd15d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd15d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dd15d6:;
  /* 12dd15d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd15d9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd15dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd15df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd15e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd15e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd15e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd15eb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd15ed jne 0x12dd15f1 */
  if (!C.zf) goto L_12dd15f1;
  /* 12dd15ef jmp 0x12dd15cd */
  goto L_12dd15cd;
L_12dd15f1:;
  /* 12dd15f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd15f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd15f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd15fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd15fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd1600 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd1603 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd1606 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1609 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dd160c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1610 ja 0x12dd1960 */
  if ((!C.cf&&!C.zf)) goto L_12dd1960;
  /* 12dd1616 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd1619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd161b mov al, byte ptr [ecx + 0x12dd1a3c] */
  AL = (r8((uint32_t)(ECX + 0x12dd1a3c)));
  /* 12dd1621 jmp dword ptr [eax*4 + 0x12dd1a10] */
  switch (EAX) {
    case 0: goto L_12dd187f;
    case 1: goto L_12dd1763;
    case 2: goto L_12dd16ee;
    case 3: goto L_12dd1628;
    case 4: goto L_12dd1666;
    case 5: goto L_12dd16c7;
    case 6: goto L_12dd1715;
    case 7: goto L_12dd173c;
    case 8: goto L_12dd17aa;
    case 9: goto L_12dd16a4;
    case 10: goto L_12dd1960;
    default: x86_unimpl("switch@0x12dd1621 out of table"); return;
  }
L_12dd1628:;
  /* 12dd1628 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd162b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dd162e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd1631 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1634 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dd1637 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd163b ja 0x12dd1661 */
  if ((!C.cf&&!C.zf)) goto L_12dd1661;
  /* 12dd163d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd1640 jmp dword ptr [ecx*4 + 0x12dd1a8f] */
  switch (ECX) {
    case 0: goto L_12dd1647;
    case 1: goto L_12dd1651;
    case 2: goto L_12dd1657;
    case 3: goto L_12dd165d;
    case 4: goto L_12dd1685;
    case 5: goto L_12dd168f;
    case 6: goto L_12dd1695;
    case 7: goto L_12dd169b;
    default: x86_unimpl("switch@0x12dd1640 out of table"); return;
  }
L_12dd1647:;
  /* 12dd1647 mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd1651:;
  /* 12dd1651 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12dd1655 jmp 0x12dd1661 */
  goto L_12dd1661;
L_12dd1657:;
  /* 12dd1657 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12dd165b jmp 0x12dd1661 */
  goto L_12dd1661;
L_12dd165d:;
  /* 12dd165d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12dd1661:;
  /* 12dd1661 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd1666:;
  /* 12dd1666 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1669 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dd166c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd166f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1672 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dd1675 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1679 ja 0x12dd169f */
  if ((!C.cf&&!C.zf)) goto L_12dd169f;
  /* 12dd167b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd167e jmp dword ptr [ecx*4 + 0x12dd1a9f] */
  switch (ECX) {
    case 0: goto L_12dd1685;
    case 1: goto L_12dd168f;
    case 2: goto L_12dd1695;
    case 3: goto L_12dd169b;
    default: x86_unimpl("switch@0x12dd167e out of table"); return;
  }
L_12dd1685:;
  /* 12dd1685 mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd168f:;
  /* 12dd168f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12dd1693 jmp 0x12dd169f */
  goto L_12dd169f;
L_12dd1695:;
  /* 12dd1695 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12dd1699 jmp 0x12dd169f */
  goto L_12dd169f;
L_12dd169b:;
  /* 12dd169b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12dd169f:;
  /* 12dd169f jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd16a4:;
  /* 12dd16a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd16a7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dd16aa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16ae je 0x12dd16b8 */
  if (C.zf) goto L_12dd16b8;
  /* 12dd16b0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16b4 je 0x12dd16be */
  if (C.zf) goto L_12dd16be;
  /* 12dd16b6 jmp 0x12dd16c2 */
  goto L_12dd16c2;
L_12dd16b8:;
  /* 12dd16b8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12dd16bc jmp 0x12dd16c2 */
  goto L_12dd16c2;
L_12dd16be:;
  /* 12dd16be mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12dd16c2:;
  /* 12dd16c2 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd16c7:;
  /* 12dd16c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd16ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dd16cd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16d1 je 0x12dd16db */
  if (C.zf) goto L_12dd16db;
  /* 12dd16d3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16d7 je 0x12dd16e5 */
  if (C.zf) goto L_12dd16e5;
  /* 12dd16d9 jmp 0x12dd16e9 */
  goto L_12dd16e9;
L_12dd16db:;
  /* 12dd16db mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd16e5:;
  /* 12dd16e5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12dd16e9:;
  /* 12dd16e9 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd16ee:;
  /* 12dd16ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd16f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12dd16f4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16f8 je 0x12dd1702 */
  if (C.zf) goto L_12dd1702;
  /* 12dd16fa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd16fe je 0x12dd170c */
  if (C.zf) goto L_12dd170c;
  /* 12dd1700 jmp 0x12dd1710 */
  goto L_12dd1710;
L_12dd1702:;
  /* 12dd1702 mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd170c:;
  /* 12dd170c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12dd1710:;
  /* 12dd1710 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd1715:;
  /* 12dd1715 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1718 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12dd171b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd171f je 0x12dd1729 */
  if (C.zf) goto L_12dd1729;
  /* 12dd1721 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1725 je 0x12dd1733 */
  if (C.zf) goto L_12dd1733;
  /* 12dd1727 jmp 0x12dd1737 */
  goto L_12dd1737;
L_12dd1729:;
  /* 12dd1729 mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd1733:;
  /* 12dd1733 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12dd1737:;
  /* 12dd1737 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd173c:;
  /* 12dd173c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd173f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12dd1742 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1746 je 0x12dd1750 */
  if (C.zf) goto L_12dd1750;
  /* 12dd1748 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd174c je 0x12dd175a */
  if (C.zf) goto L_12dd175a;
  /* 12dd174e jmp 0x12dd175e */
  goto L_12dd175e;
L_12dd1750:;
  /* 12dd1750 mov dword ptr [0x12ddf8a8], 1 */
  w32((uint32_t)(0x12ddf8a8), (0x1u));
L_12dd175a:;
  /* 12dd175a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12dd175e:;
  /* 12dd175e jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd1763:;
  /* 12dd1763 push 0x12ddb9fc */
  push32((uint32_t)(0x12ddb9fcu));
  /* 12dd1768 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd176b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd176c call 0x12dd1fc0 */
  push32(0x12dd1771u); f_12dd1fc0();
  /* 12dd1771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1776 jne 0x12dd1783 */
  if (!C.zf) goto L_12dd1783;
  /* 12dd1778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd177b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd177e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd1781 jmp 0x12dd17a1 */
  goto L_12dd17a1;
L_12dd1783:;
  /* 12dd1783 push 0x12ddb9f8 */
  push32((uint32_t)(0x12ddb9f8u));
  /* 12dd1788 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd178b push eax */
  push32((uint32_t)(EAX));
  /* 12dd178c call 0x12dd1fc0 */
  push32(0x12dd1791u); f_12dd1fc0();
  /* 12dd1791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1796 jne 0x12dd17a1 */
  if (!C.zf) goto L_12dd17a1;
  /* 12dd1798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd179b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd179e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dd17a1:;
  /* 12dd17a1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12dd17a5 jmp 0x12dd1960 */
  goto L_12dd1960;
L_12dd17aa:;
  /* 12dd17aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd17ad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd17b1 jg 0x12dd17c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd17c1;
  /* 12dd17b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd17b6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12dd17bc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dd17bf jmp 0x12dd17cd */
  goto L_12dd17cd;
L_12dd17c1:;
  /* 12dd17c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd17c4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12dd17ca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dd17cd:;
  /* 12dd17cd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd17d1 jle 0x12dd1874 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd1874;
  /* 12dd17d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd17da cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd17dd jbe 0x12dd1874 */
  if ((C.cf||C.zf)) goto L_12dd1874;
  /* 12dd17e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd17e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd17e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd17ea mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd17f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd17f2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd17f6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd17fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd17fe je 0x12dd1837 */
  if (C.zf) goto L_12dd1837;
  /* 12dd1800 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1803 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1806 jbe 0x12dd1837 */
  if ((C.cf||C.zf)) goto L_12dd1837;
  /* 12dd1808 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd180b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd180d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd1810 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd1812 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dd1814 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1817 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd1819 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd181c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd181f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd1821 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd1824 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1827 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dd182a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd182d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd182f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1832 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1835 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dd1837:;
  /* 12dd1837 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd183a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd183c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd183f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd1841 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dd1843 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1846 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1848 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd184b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd184e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd1850 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd1853 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1856 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dd1859 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd185c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd185e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1861 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1864 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd1866 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1869 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd186c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dd186f jmp 0x12dd17cd */
  goto L_12dd17cd;
L_12dd1874:;
  /* 12dd1874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1877 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd187a jmp 0x12dd1596 */
  goto L_12dd1596;
L_12dd187f:;
  /* 12dd187f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1882 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd1885 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd1887 je 0x12dd1952 */
  if (C.zf) goto L_12dd1952;
  /* 12dd188d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1890 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1893 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12dd1896:;
  /* 12dd1896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1899 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd189c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd189e je 0x12dd1950 */
  if (C.zf) goto L_12dd1950;
  /* 12dd18a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd18a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd18aa je 0x12dd1950 */
  if (C.zf) goto L_12dd1950;
  /* 12dd18b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd18b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd18b6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd18b9 jne 0x12dd18c9 */
  if (!C.zf) goto L_12dd18c9;
  /* 12dd18bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd18be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd18c1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dd18c4 jmp 0x12dd1950 */
  goto L_12dd1950;
L_12dd18c9:;
  /* 12dd18c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd18cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd18ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd18d0 mov edx, dword ptr [0x12dddc98] */
  EDX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd18d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd18d8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12dd18dc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12dd18e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd18e3 je 0x12dd191c */
  if (C.zf) goto L_12dd191c;
  /* 12dd18e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd18e8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd18eb jbe 0x12dd191c */
  if ((C.cf||C.zf)) goto L_12dd191c;
  /* 12dd18ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd18f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd18f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd18f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd18f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dd18f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd18fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd18fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1901 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1904 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dd1906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd190c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd190f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1912 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1914 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1917 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd191a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dd191c:;
  /* 12dd191c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd191f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd1921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1924 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd1926 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dd1928 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd192b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd192d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1933 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd1935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1938 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd193b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dd193e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1941 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd1943 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1946 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1949 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dd194b jmp 0x12dd1896 */
  goto L_12dd1896;
L_12dd1950:;
  /* 12dd1950 jmp 0x12dd195b */
  goto L_12dd195b;
L_12dd1952:;
  /* 12dd1952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1955 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1958 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dd195b:;
  /* 12dd195b jmp 0x12dd1596 */
  goto L_12dd1596;
L_12dd1960:;
  /* 12dd1960 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dd1964 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd1966 je 0x12dd198c */
  if (C.zf) goto L_12dd198c;
  /* 12dd1968 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd196b push edx */
  push32((uint32_t)(EDX));
  /* 12dd196c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd196f push eax */
  push32((uint32_t)(EAX));
  /* 12dd1970 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1973 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1974 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1977 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1978 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12dd197b push eax */
  push32((uint32_t)(EAX));
  /* 12dd197c call 0x12dd0dc0 */
  push32(0x12dd1981u); f_12dd0dc0();
  /* 12dd1981 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd1987 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dd198a jmp 0x12dd1a07 */
  goto L_12dd1a07;
L_12dd198c:;
  /* 12dd198c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd198f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1991 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd1993 mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd1999 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd199b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd199f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd19a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd19a7 je 0x12dd19d8 */
  if (C.zf) goto L_12dd19d8;
  /* 12dd19a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd19ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd19b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd19b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dd19b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd19ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd19bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dd19c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd19c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd19c8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dd19cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd19ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd19d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd19d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd19d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12dd19d8:;
  /* 12dd19d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd19dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd19e0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd19e2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dd19e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd19e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd19ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd19ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dd19f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd19f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd19f7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd19fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd19fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd19ff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1a02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1a05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dd1a07:;
  /* 12dd1a07 jmp 0x12dd1596 */
  goto L_12dd1596;
L_12dd1a0c:;
  /* 12dd1a0c mov esp, ebp */
  ESP = (EBP);
  /* 12dd1a0e pop ebp */
  EBP = (pop32());
  /* 12dd1a0f ret  */
  ESPCHK(0x12dd1590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ab0 @ 0x12dd1ab0 (650 bytes, 178 insns) */
void f_12dd1ab0(void) {
  FTRACE(0x12dd1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1ab3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd1ab9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1abd jne 0x12dd1c19 */
  if (!C.zf) goto L_12dd1c19;
  /* 12dd1ac3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1ac6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12dd1acc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12dd1ad2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd1ad5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd1adc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12dd1ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1ae8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12dd1aee push edx */
  push32((uint32_t)(EDX));
  /* 12dd1aef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1af2 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1af3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1af7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1afa push edx */
  push32((uint32_t)(EDX));
  /* 12dd1afb call 0x12dd2ed0 */
  push32(0x12dd1b00u); f_12dd2ed0();
  /* 12dd1b00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1b03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd1b06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1b0a jne 0x12dd1b9f */
  if (!C.zf) goto L_12dd1b9f;
  /* 12dd1b10 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dd1b16u);
  /* 12dd1b16 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1b19 je 0x12dd1b20 */
  if (C.zf) goto L_12dd1b20;
  /* 12dd1b1b jmp 0x12dd1bfd */
  goto L_12dd1bfd;
L_12dd1b20:;
  /* 12dd1b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1b26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1b29 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1b2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1b2d push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1b2e call 0x12dd2ed0 */
  push32(0x12dd1b33u); f_12dd2ed0();
  /* 12dd1b33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1b36 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12dd1b3c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1b43 jne 0x12dd1b4a */
  if (!C.zf) goto L_12dd1b4a;
  /* 12dd1b45 jmp 0x12dd1bfd */
  goto L_12dd1bfd;
L_12dd1b4a:;
  /* 12dd1b4a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12dd1b4c push 0x12ddba04 */
  push32((uint32_t)(0x12ddba04u));
  /* 12dd1b51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1b53 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12dd1b59 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1b5a call 0x12dc38f0 */
  push32(0x12dd1b5fu); f_12dc38f0();
  /* 12dd1b5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1b62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd1b65 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1b69 jne 0x12dd1b70 */
  if (!C.zf) goto L_12dd1b70;
  /* 12dd1b6b jmp 0x12dd1bfd */
  goto L_12dd1bfd;
L_12dd1b70:;
  /* 12dd1b70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dd1b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1b79 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12dd1b7f push eax */
  push32((uint32_t)(EAX));
  /* 12dd1b80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1b84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1b87 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1b8b push eax */
  push32((uint32_t)(EAX));
  /* 12dd1b8c call 0x12dd2ed0 */
  push32(0x12dd1b91u); f_12dd2ed0();
  /* 12dd1b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1b94 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd1b97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1b9b jne 0x12dd1b9f */
  if (!C.zf) goto L_12dd1b9f;
  /* 12dd1b9d jmp 0x12dd1bfd */
  goto L_12dd1bfd;
L_12dd1b9f:;
  /* 12dd1b9f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12dd1ba1 push 0x12ddba04 */
  push32((uint32_t)(0x12ddba04u));
  /* 12dd1ba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1ba8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd1bab push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1bac call 0x12dc38f0 */
  push32(0x12dd1bb1u); f_12dc38f0();
  /* 12dd1bb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1bb4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12dd1bba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dd1bbc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12dd1bc2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1bc5 jne 0x12dd1bc9 */
  if (!C.zf) goto L_12dd1bc9;
  /* 12dd1bc7 jmp 0x12dd1bfd */
  goto L_12dd1bfd;
L_12dd1bc9:;
  /* 12dd1bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd1bcc push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1bcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1bd0 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1bd1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12dd1bd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd1bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1bda call 0x12dc7110 */
  push32(0x12dd1bdfu); f_12dc7110();
  /* 12dd1bdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1be2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1be6 je 0x12dd1bf6 */
  if (C.zf) goto L_12dd1bf6;
  /* 12dd1be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1bea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1bed push edx */
  push32((uint32_t)(EDX));
  /* 12dd1bee call 0x12dc4380 */
  push32(0x12dd1bf3u); f_12dc4380();
  /* 12dd1bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd1bf6:;
  /* 12dd1bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1bf8 jmp 0x12dd1d36 */
  goto L_12dd1d36;
L_12dd1bfd:;
  /* 12dd1bfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1c01 je 0x12dd1c11 */
  if (C.zf) goto L_12dd1c11;
  /* 12dd1c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd1c05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd1c08 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1c09 call 0x12dc4380 */
  push32(0x12dd1c0eu); f_12dc4380();
  /* 12dd1c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd1c11:;
  /* 12dd1c11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1c14 jmp 0x12dd1d36 */
  goto L_12dd1d36;
L_12dd1c19:;
  /* 12dd1c19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1c1d jne 0x12dd1d33 */
  if (!C.zf) goto L_12dd1d33;
  /* 12dd1c23 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12dd1c2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1c30 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12dd1c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1c38 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dd1c3e push edx */
  push32((uint32_t)(EDX));
  /* 12dd1c3f push 0x12ddf7c0 */
  push32((uint32_t)(0x12ddf7c0u));
  /* 12dd1c44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1c47 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1c48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1c4b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1c4c call 0x12dd2d30 */
  push32(0x12dd1c51u); f_12dd2d30();
  /* 12dd1c51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1c56 jne 0x12dd1c60 */
  if (!C.zf) goto L_12dd1c60;
  /* 12dd1c58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1c5b jmp 0x12dd1d36 */
  goto L_12dd1d36;
L_12dd1c60:;
  /* 12dd1c60 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dd1c66 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dd1c69 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12dd1c73 jmp 0x12dd1c84 */
  goto L_12dd1c84;
L_12dd1c75:;
  /* 12dd1c75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dd1c7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1c7e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12dd1c84:;
  /* 12dd1c84 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1c8b jge 0x12dd1d2f */
  if ((C.sf==C.of)) goto L_12dd1d2f;
  /* 12dd1c91 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1c98 jle 0x12dd1ccb */
  if ((C.zf||C.sf!=C.of)) goto L_12dd1ccb;
  /* 12dd1c9a push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd1c9c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dd1ca2 mov dl, byte ptr [ecx*2 + 0x12ddf7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ddf7c0)));
  /* 12dd1ca9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12dd1caf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12dd1cb5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1cba push eax */
  push32((uint32_t)(EAX));
  /* 12dd1cbb call 0x12dc9900 */
  push32(0x12dd1cc0u); f_12dc9900();
  /* 12dd1cc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1cc3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12dd1cc9 jmp 0x12dd1cfe */
  goto L_12dd1cfe;
L_12dd1ccb:;
  /* 12dd1ccb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dd1cd1 mov dl, byte ptr [ecx*2 + 0x12ddf7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ddf7c0)));
  /* 12dd1cd8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12dd1cde mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12dd1ce4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1ce9 mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd1cef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd1cf1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd1cf5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd1cf8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12dd1cfe:;
  /* 12dd1cfe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1d05 je 0x12dd1d28 */
  if (C.zf) goto L_12dd1d28;
  /* 12dd1d07 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dd1d0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd1d10 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd1d13 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12dd1d1a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12dd1d1e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dd1d24 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dd1d26 jmp 0x12dd1d2a */
  goto L_12dd1d2a;
L_12dd1d28:;
  /* 12dd1d28 jmp 0x12dd1d2f */
  goto L_12dd1d2f;
L_12dd1d2a:;
  /* 12dd1d2a jmp 0x12dd1c75 */
  goto L_12dd1c75;
L_12dd1d2f:;
  /* 12dd1d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1d31 jmp 0x12dd1d36 */
  goto L_12dd1d36;
L_12dd1d33:;
  /* 12dd1d33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dd1d36:;
  /* 12dd1d36 mov esp, ebp */
  ESP = (EBP);
  /* 12dd1d38 pop ebp */
  EBP = (pop32());
  /* 12dd1d39 ret  */
  ESPCHK(0x12dd1ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d40 @ 0x12dd1d40 (10 bytes, 5 insns) */
void f_12dd1d40(void) {
  FTRACE(0x12dd1d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1d41 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1d43 mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dd1d48 pop ebp */
  EBP = (pop32());
  /* 12dd1d49 ret  */
  ESPCHK(0x12dd1d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d50 @ 0x12dd1d50 (575 bytes, 196 insns) */
void f_12dd1d50(void) {
  FTRACE(0x12dd1d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1d51 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1d53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd1d55 push 0x12ddba10 */
  push32((uint32_t)(0x12ddba10u));
  /* 12dd1d5a push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dd1d5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dd1d65 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1d66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dd1d6d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1d70 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd1d71 push esi */
  push32((uint32_t)(ESI));
  /* 12dd1d72 push edi */
  push32((uint32_t)(EDI));
  /* 12dd1d73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd1d76 cmp dword ptr [0x12ddf7cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1d7d jne 0x12dd1dce */
  if (!C.zf) goto L_12dd1dce;
  /* 12dd1d7f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12dd1d82 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd1d85 push 0x12ddb140 */
  push32((uint32_t)(0x12ddb140u));
  /* 12dd1d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd1d8c call dword ptr [0x12de22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ec))), 0x12dd1d92u);
  /* 12dd1d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1d94 je 0x12dd1da2 */
  if (C.zf) goto L_12dd1da2;
  /* 12dd1d96 mov dword ptr [0x12ddf7cc], 1 */
  w32((uint32_t)(0x12ddf7cc), (0x1u));
  /* 12dd1da0 jmp 0x12dd1dce */
  goto L_12dd1dce;
L_12dd1da2:;
  /* 12dd1da2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12dd1da5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1da6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd1da8 push 0x12ddb13c */
  push32((uint32_t)(0x12ddb13cu));
  /* 12dd1dad push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd1daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1db1 call dword ptr [0x12de22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22fc))), 0x12dd1db7u);
  /* 12dd1db7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1db9 je 0x12dd1dc7 */
  if (C.zf) goto L_12dd1dc7;
  /* 12dd1dbb mov dword ptr [0x12ddf7cc], 2 */
  w32((uint32_t)(0x12ddf7cc), (0x2u));
  /* 12dd1dc5 jmp 0x12dd1dce */
  goto L_12dd1dce;
L_12dd1dc7:;
  /* 12dd1dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1dc9 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1dce:;
  /* 12dd1dce cmp dword ptr [0x12ddf7cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1dd5 jne 0x12dd1df2 */
  if (!C.zf) goto L_12dd1df2;
  /* 12dd1dd7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1dda push edx */
  push32((uint32_t)(EDX));
  /* 12dd1ddb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1dde push eax */
  push32((uint32_t)(EAX));
  /* 12dd1ddf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1de2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1de3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1de6 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1de7 call dword ptr [0x12de22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ec))), 0x12dd1dedu);
  /* 12dd1ded jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1df2:;
  /* 12dd1df2 cmp dword ptr [0x12ddf7cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1df9 jne 0x12dd1fa7 */
  if (!C.zf) goto L_12dd1fa7;
  /* 12dd1dff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1e03 jne 0x12dd1e0d */
  if (!C.zf) goto L_12dd1e0d;
  /* 12dd1e05 mov eax, dword ptr [0x12ddf740] */
  EAX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd1e0a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12dd1e0d:;
  /* 12dd1e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1e19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1e1c push edx */
  push32((uint32_t)(EDX));
  /* 12dd1e1d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd1e22 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1e25 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1e26 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd1e2cu);
  /* 12dd1e2c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dd1e2f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1e33 jne 0x12dd1e3c */
  if (!C.zf) goto L_12dd1e3c;
  /* 12dd1e35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1e37 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1e3c:;
  /* 12dd1e3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd1e43 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd1e46 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1e49 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd1e4b call 0x12dc6a90 */
  push32(0x12dd1e50u); f_12dc6a90();
  /* 12dd1e50 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12dd1e53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd1e56 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dd1e59 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dd1e5c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd1e5f push edx */
  push32((uint32_t)(EDX));
  /* 12dd1e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e62 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dd1e65 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1e66 call 0x12dc7660 */
  push32(0x12dd1e6bu); f_12dc7660();
  /* 12dd1e6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1e6e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd1e75 jmp 0x12dd1e8e */
  goto L_12dd1e8e;
  /* 12dd1e77 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd1e7c ret  */
  ESPCHK(0x12dd1d50u, _esp0);
  ESP += 4; return;
  /* 12dd1e7d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd1e80 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12dd1e87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd1e8e:;
  /* 12dd1e8e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1e92 jne 0x12dd1e9b */
  if (!C.zf) goto L_12dd1e9b;
  /* 12dd1e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1e96 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1e9b:;
  /* 12dd1e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd1e9f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd1ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1ea3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dd1ea6 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1ea7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1eaa push eax */
  push32((uint32_t)(EAX));
  /* 12dd1eab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1eae push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1eaf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd1eb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd1eb7 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1eb8 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd1ebeu);
  /* 12dd1ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd1ec0 jne 0x12dd1ec9 */
  if (!C.zf) goto L_12dd1ec9;
  /* 12dd1ec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1ec4 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1ec9:;
  /* 12dd1ec9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dd1ed0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd1ed3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12dd1ed7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1eda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd1edc call 0x12dc6a90 */
  push32(0x12dd1ee1u); f_12dc6a90();
  /* 12dd1ee1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12dd1ee4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd1ee7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dd1eea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dd1eed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd1ef4 jmp 0x12dd1f0d */
  goto L_12dd1f0d;
  /* 12dd1ef6 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd1efb ret  */
  ESPCHK(0x12dd1d50u, _esp0);
  ESP += 4; return;
  /* 12dd1efc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd1eff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dd1f06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd1f0d:;
  /* 12dd1f0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1f11 jne 0x12dd1f1a */
  if (!C.zf) goto L_12dd1f1a;
  /* 12dd1f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1f15 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1f1a:;
  /* 12dd1f1a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1f1e jne 0x12dd1f29 */
  if (!C.zf) goto L_12dd1f29;
  /* 12dd1f20 mov edx, dword ptr [0x12ddf730] */
  EDX = (r32((uint32_t)(0x12ddf730)));
  /* 12dd1f26 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12dd1f29:;
  /* 12dd1f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1f2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f2f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12dd1f35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1f38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f3b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12dd1f42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f45 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1f46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd1f49 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1f4a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dd1f4d push eax */
  push32((uint32_t)(EAX));
  /* 12dd1f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1f51 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1f52 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd1f55 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1f56 call dword ptr [0x12de22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22fc))), 0x12dd1f5cu);
  /* 12dd1f5c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dd1f5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1f62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd1f67 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12dd1f6c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1f72 je 0x12dd1f88 */
  if (C.zf) goto L_12dd1f88;
  /* 12dd1f74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1f77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd1f7c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd1f80 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1f86 je 0x12dd1f8c */
  if (C.zf) goto L_12dd1f8c;
L_12dd1f88:;
  /* 12dd1f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd1f8a jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1f8c:;
  /* 12dd1f8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd1f8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dd1f91 push eax */
  push32((uint32_t)(EAX));
  /* 12dd1f92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd1f95 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd1f96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd1f99 push edx */
  push32((uint32_t)(EDX));
  /* 12dd1f9a call 0x12dcb7e0 */
  push32(0x12dd1f9fu); f_12dcb7e0();
  /* 12dd1f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd1fa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd1fa5 jmp 0x12dd1fa9 */
  goto L_12dd1fa9;
L_12dd1fa7:;
  /* 12dd1fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd1fa9:;
  /* 12dd1fa9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12dd1fac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd1faf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dd1fb6 pop edi */
  EDI = (pop32());
  /* 12dd1fb7 pop esi */
  ESI = (pop32());
  /* 12dd1fb8 pop ebx */
  EBX = (pop32());
  /* 12dd1fb9 mov esp, ebp */
  ESP = (EBP);
  /* 12dd1fbb pop ebp */
  EBP = (pop32());
  /* 12dd1fbc ret  */
  ESPCHK(0x12dd1d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x12dd1fc0 (208 bytes, 85 insns) */
void f_12dd1fc0(void) {
  FTRACE(0x12dd1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd1fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd1fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd1fc3 push edi */
  push32((uint32_t)(EDI));
  /* 12dd1fc4 push esi */
  push32((uint32_t)(ESI));
  /* 12dd1fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd1fc6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd1fc9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd1fcc lea eax, [0x12ddf728] */
  EAX = ((uint32_t)(0x12ddf728));
  /* 12dd1fd2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd1fd6 jne 0x12dd2013 */
  if (!C.zf) goto L_12dd2013;
  /* 12dd1fd8 mov al, 0xff */
  AL = (0xffu);
  /* 12dd1fda mov edi, edi */
  EDI = (EDI);
L_12dd1fdc:;
  /* 12dd1fdc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dd1fde je 0x12dd200e */
  if (C.zf) goto L_12dd200e;
  /* 12dd1fe0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dd1fe2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dd1fe3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12dd1fe5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dd1fe6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd1fe8 je 0x12dd1fdc */
  if (C.zf) goto L_12dd1fdc;
  /* 12dd1fea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dd1fec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd1fee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dd1ff0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dd1ff3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd1ff5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd1ff7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12dd1ff9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dd1ffb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd1ffd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dd1fff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dd2002 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd2004 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dd2006 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd2008 je 0x12dd1fdc */
  if (C.zf) goto L_12dd1fdc;
  /* 12dd200a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dd200c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12dd200e:;
  /* 12dd200e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12dd2011 jmp 0x12dd208b */
  goto L_12dd208b;
L_12dd2013:;
  /* 12dd2013 lock inc dword ptr [0x12ddf8bc] */
  x86_unimpl("lock inc @ 0x12dd2013");
  /* 12dd201a cmp dword ptr [0x12ddf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2021 jg 0x12dd2027 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd2027;
  /* 12dd2023 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2025 jmp 0x12dd203c */
  goto L_12dd203c;
L_12dd2027:;
  /* 12dd2027 lock dec dword ptr [0x12ddf8bc] */
  x86_unimpl("lock dec @ 0x12dd2027");
  /* 12dd202e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd2030 call 0x12dc72f0 */
  push32(0x12dd2035u); f_12dc72f0();
  /* 12dd2035 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12dd203c:;
  /* 12dd203c mov eax, 0xff */
  EAX = (0xffu);
  /* 12dd2041 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12dd2043 nop  */
  /* nop */
L_12dd2044:;
  /* 12dd2044 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dd2046 je 0x12dd206f */
  if (C.zf) goto L_12dd206f;
  /* 12dd2048 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dd204a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dd204b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12dd204d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dd204e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd2050 je 0x12dd2044 */
  if (C.zf) goto L_12dd2044;
  /* 12dd2052 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2053 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd2054 call 0x12dd3130 */
  push32(0x12dd2059u); f_12dd3130();
  /* 12dd2059 mov ebx, eax */
  EBX = (EAX);
  /* 12dd205b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd205e call 0x12dd3130 */
  push32(0x12dd2063u); f_12dd3130();
  /* 12dd2063 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2066 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd2068 je 0x12dd2044 */
  if (C.zf) goto L_12dd2044;
  /* 12dd206a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd206c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12dd206f:;
  /* 12dd206f mov ebx, eax */
  EBX = (EAX);
  /* 12dd2071 pop eax */
  EAX = (pop32());
  /* 12dd2072 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2074 jne 0x12dd207f */
  if (!C.zf) goto L_12dd207f;
  /* 12dd2076 lock dec dword ptr [0x12ddf8bc] */
  x86_unimpl("lock dec @ 0x12dd2076");
  /* 12dd207d jmp 0x12dd2089 */
  goto L_12dd2089;
L_12dd207f:;
  /* 12dd207f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd2081 call 0x12dc7390 */
  push32(0x12dd2086u); f_12dc7390();
  /* 12dd2086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd2089:;
  /* 12dd2089 mov eax, ebx */
  EAX = (EBX);
L_12dd208b:;
  /* 12dd208b pop ebx */
  EBX = (pop32());
  /* 12dd208c pop esi */
  ESI = (pop32());
  /* 12dd208d pop edi */
  EDI = (pop32());
  /* 12dd208e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dd208f ret  */
  ESPCHK(0x12dd1fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x12dd2090 (257 bytes, 103 insns) */
void f_12dd2090(void) {
  FTRACE(0x12dd2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2090 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2091 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2093 push edi */
  push32((uint32_t)(EDI));
  /* 12dd2094 push esi */
  push32((uint32_t)(ESI));
  /* 12dd2095 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd2096 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2099 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd209b je 0x12dd218a */
  if (C.zf) goto L_12dd218a;
  /* 12dd20a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd20a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd20a7 lea eax, [0x12ddf728] */
  EAX = ((uint32_t)(0x12ddf728));
  /* 12dd20ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd20b1 jne 0x12dd2101 */
  if (!C.zf) goto L_12dd2101;
  /* 12dd20b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12dd20b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12dd20b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12dd20b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dd20bc:;
  /* 12dd20bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12dd20be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dd20c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12dd20c2 je 0x12dd20e5 */
  if (C.zf) goto L_12dd20e5;
  /* 12dd20c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dd20c6 je 0x12dd20e5 */
  if (C.zf) goto L_12dd20e5;
  /* 12dd20c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dd20c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dd20ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20cc jb 0x12dd20d4 */
  if (C.cf) goto L_12dd20d4;
  /* 12dd20ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20d0 ja 0x12dd20d4 */
  if ((!C.cf&&!C.zf)) goto L_12dd20d4;
  /* 12dd20d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12dd20d4:;
  /* 12dd20d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20d6 jb 0x12dd20de */
  if (C.cf) goto L_12dd20de;
  /* 12dd20d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20da ja 0x12dd20de */
  if ((!C.cf&&!C.zf)) goto L_12dd20de;
  /* 12dd20dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12dd20de:;
  /* 12dd20de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20e0 jne 0x12dd20ef */
  if (!C.zf) goto L_12dd20ef;
  /* 12dd20e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dd20e3 jne 0x12dd20bc */
  if (!C.zf) goto L_12dd20bc;
L_12dd20e5:;
  /* 12dd20e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd20e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd20e9 je 0x12dd218a */
  if (C.zf) goto L_12dd218a;
L_12dd20ef:;
  /* 12dd20ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12dd20f4 jb 0x12dd218a */
  if (C.cf) goto L_12dd218a;
  /* 12dd20fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd20fc jmp 0x12dd218a */
  goto L_12dd218a;
L_12dd2101:;
  /* 12dd2101 lock inc dword ptr [0x12ddf8bc] */
  x86_unimpl("lock inc @ 0x12dd2101");
  /* 12dd2108 cmp dword ptr [0x12ddf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd210f jg 0x12dd2115 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd2115;
  /* 12dd2111 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2113 jmp 0x12dd212e */
  goto L_12dd212e;
L_12dd2115:;
  /* 12dd2115 lock dec dword ptr [0x12ddf8bc] */
  x86_unimpl("lock dec @ 0x12dd2115");
  /* 12dd211c mov ebx, ecx */
  EBX = (ECX);
  /* 12dd211e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd2120 call 0x12dc72f0 */
  push32(0x12dd2125u); f_12dc72f0();
  /* 12dd2125 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12dd212c mov ecx, ebx */
  ECX = (EBX);
L_12dd212e:;
  /* 12dd212e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2130 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12dd2132 mov edi, edi */
  EDI = (EDI);
L_12dd2134:;
  /* 12dd2134 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dd2136 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2138 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12dd213a je 0x12dd215f */
  if (C.zf) goto L_12dd215f;
  /* 12dd213c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12dd213e je 0x12dd215f */
  if (C.zf) goto L_12dd215f;
  /* 12dd2140 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dd2141 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dd2142 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2143 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2144 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd2145 call 0x12dd3130 */
  push32(0x12dd214au); f_12dd3130();
  /* 12dd214a mov ebx, eax */
  EBX = (EAX);
  /* 12dd214c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd214f call 0x12dd3130 */
  push32(0x12dd2154u); f_12dd3130();
  /* 12dd2154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2157 pop ecx */
  ECX = (pop32());
  /* 12dd2158 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd215a jne 0x12dd2165 */
  if (!C.zf) goto L_12dd2165;
  /* 12dd215c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dd215d jne 0x12dd2134 */
  if (!C.zf) goto L_12dd2134;
L_12dd215f:;
  /* 12dd215f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd2161 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2163 je 0x12dd216e */
  if (C.zf) goto L_12dd216e;
L_12dd2165:;
  /* 12dd2165 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12dd216a jb 0x12dd216e */
  if (C.cf) goto L_12dd216e;
  /* 12dd216c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12dd216e:;
  /* 12dd216e pop eax */
  EAX = (pop32());
  /* 12dd216f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2171 jne 0x12dd217c */
  if (!C.zf) goto L_12dd217c;
  /* 12dd2173 lock dec dword ptr [0x12ddf8bc] */
  x86_unimpl("lock dec @ 0x12dd2173");
  /* 12dd217a jmp 0x12dd218a */
  goto L_12dd218a;
L_12dd217c:;
  /* 12dd217c mov ebx, ecx */
  EBX = (ECX);
  /* 12dd217e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd2180 call 0x12dc7390 */
  push32(0x12dd2185u); f_12dc7390();
  /* 12dd2185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2188 mov ecx, ebx */
  ECX = (EBX);
L_12dd218a:;
  /* 12dd218a mov eax, ecx */
  EAX = (ECX);
  /* 12dd218c pop ebx */
  EBX = (pop32());
  /* 12dd218d pop esi */
  ESI = (pop32());
  /* 12dd218e pop edi */
  EDI = (pop32());
  /* 12dd218f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dd2190 ret  */
  ESPCHK(0x12dd2090u, _esp0);
  ESP += 4; return;
}

/* FUN_100121a0 @ 0x12dd21a0 (255 bytes, 88 insns) */
void f_12dd21a0(void) {
  FTRACE(0x12dd21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd21a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd21a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd21a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12dd21a6:;
  /* 12dd21a6 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd21ad jle 0x12dd21c6 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd21c6;
  /* 12dd21af push 8 */
  push32((uint32_t)(0x8u));
  /* 12dd21b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd21b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd21b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd21b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd21b9 call 0x12dc9900 */
  push32(0x12dd21beu); f_12dc9900();
  /* 12dd21be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd21c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dd21c4 jmp 0x12dd21df */
  goto L_12dd21df;
L_12dd21c6:;
  /* 12dd21c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd21c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd21cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd21cd mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd21d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd21d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd21d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd21dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd21df:;
  /* 12dd21df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd21e3 je 0x12dd21f0 */
  if (C.zf) goto L_12dd21f0;
  /* 12dd21e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd21e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd21eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd21ee jmp 0x12dd21a6 */
  goto L_12dd21a6;
L_12dd21f0:;
  /* 12dd21f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd21f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd21f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd21f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd21fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd21fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2200 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd2203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd2209 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd220d je 0x12dd2215 */
  if (C.zf) goto L_12dd2215;
  /* 12dd220f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2213 jne 0x12dd2228 */
  if (!C.zf) goto L_12dd2228;
L_12dd2215:;
  /* 12dd2215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd221a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd221c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd221f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2225 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dd2228:;
  /* 12dd2228 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dd222f:;
  /* 12dd222f cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2236 jle 0x12dd224b */
  if ((C.zf||C.sf!=C.of)) goto L_12dd224b;
  /* 12dd2238 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd223a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd223d push edx */
  push32((uint32_t)(EDX));
  /* 12dd223e call 0x12dc9900 */
  push32(0x12dd2243u); f_12dc9900();
  /* 12dd2243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2246 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd2249 jmp 0x12dd2260 */
  goto L_12dd2260;
L_12dd224b:;
  /* 12dd224b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd224e mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd2254 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2256 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd225a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd225d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12dd2260:;
  /* 12dd2260 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2264 je 0x12dd228b */
  if (C.zf) goto L_12dd228b;
  /* 12dd2266 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2269 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd226c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd226f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12dd2273 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd2276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2279 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd227b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd227d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd2280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2283 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2286 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dd2289 jmp 0x12dd222f */
  goto L_12dd222f;
L_12dd228b:;
  /* 12dd228b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd228f jne 0x12dd2298 */
  if (!C.zf) goto L_12dd2298;
  /* 12dd2291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2294 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd2296 jmp 0x12dd229b */
  goto L_12dd229b;
L_12dd2298:;
  /* 12dd2298 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dd229b:;
  /* 12dd229b mov esp, ebp */
  ESP = (EBP);
  /* 12dd229d pop ebp */
  EBP = (pop32());
  /* 12dd229e ret  */
  ESPCHK(0x12dd21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x12dd22a0 (17 bytes, 8 insns) */
void f_12dd22a0(void) {
  FTRACE(0x12dd22a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd22a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd22a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd22a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd22a6 push eax */
  push32((uint32_t)(EAX));
  /* 12dd22a7 call 0x12dd21a0 */
  push32(0x12dd22acu); f_12dd21a0();
  /* 12dd22ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd22af pop ebp */
  EBP = (pop32());
  /* 12dd22b0 ret  */
  ESPCHK(0x12dd22a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122c0 @ 0x12dd22c0 (297 bytes, 106 insns) */
void f_12dd22c0(void) {
  FTRACE(0x12dd22c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd22c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd22c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd22c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd22c6 push esi */
  push32((uint32_t)(ESI));
L_12dd22c7:;
  /* 12dd22c7 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd22ce jle 0x12dd22e7 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd22e7;
  /* 12dd22d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dd22d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd22d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd22d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd22d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd22da call 0x12dc9900 */
  push32(0x12dd22dfu); f_12dc9900();
  /* 12dd22df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd22e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd22e5 jmp 0x12dd2300 */
  goto L_12dd2300;
L_12dd22e7:;
  /* 12dd22e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd22ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd22ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd22ee mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd22f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd22f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd22fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd22fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12dd2300:;
  /* 12dd2300 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2304 je 0x12dd2311 */
  if (C.zf) goto L_12dd2311;
  /* 12dd2306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd230c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd230f jmp 0x12dd22c7 */
  goto L_12dd22c7;
L_12dd2311:;
  /* 12dd2311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2314 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2316 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd2318 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd231b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd231e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2321 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd2324 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2327 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dd232a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd232e je 0x12dd2336 */
  if (C.zf) goto L_12dd2336;
  /* 12dd2330 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2334 jne 0x12dd2349 */
  if (!C.zf) goto L_12dd2349;
L_12dd2336:;
  /* 12dd2336 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd233b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd233d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd2340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2343 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2346 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dd2349:;
  /* 12dd2349 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dd2350 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dd2357:;
  /* 12dd2357 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd235e jle 0x12dd2373 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2373;
  /* 12dd2360 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd2362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2365 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2366 call 0x12dc9900 */
  push32(0x12dd236bu); f_12dc9900();
  /* 12dd236b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd236e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dd2371 jmp 0x12dd2388 */
  goto L_12dd2388;
L_12dd2373:;
  /* 12dd2373 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2376 mov ecx, dword ptr [0x12dddc98] */
  ECX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd237c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd237e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12dd2382 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2385 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12dd2388:;
  /* 12dd2388 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd238c je 0x12dd23c9 */
  if (C.zf) goto L_12dd23c9;
  /* 12dd238e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2390 push 0xa */
  push32((uint32_t)(0xau));
  /* 12dd2392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2395 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2396 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2399 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd239a call 0x12dd3260 */
  push32(0x12dd239fu); f_12dd3260();
  /* 12dd239f mov ecx, eax */
  ECX = (EAX);
  /* 12dd23a1 mov esi, edx */
  ESI = (EDX);
  /* 12dd23a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd23a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd23a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd23aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd23ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd23ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd23b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12dd23b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd23b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd23b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd23bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd23be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd23c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd23c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dd23c7 jmp 0x12dd2357 */
  goto L_12dd2357;
L_12dd23c9:;
  /* 12dd23c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd23cd jne 0x12dd23de */
  if (!C.zf) goto L_12dd23de;
  /* 12dd23cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd23d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd23d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd23d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd23da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd23dc jmp 0x12dd23e4 */
  goto L_12dd23e4;
L_12dd23de:;
  /* 12dd23de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd23e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12dd23e4:;
  /* 12dd23e4 pop esi */
  ESI = (pop32());
  /* 12dd23e5 mov esp, ebp */
  ESP = (EBP);
  /* 12dd23e7 pop ebp */
  EBP = (pop32());
  /* 12dd23e8 ret  */
  ESPCHK(0x12dd22c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x12dd23f0 (61 bytes, 18 insns) */
void f_12dd23f0(void) {
  FTRACE(0x12dd23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd23f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd23f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd23f3 cmp dword ptr [0x12ddf888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd23fa jne 0x12dd242b */
  if (!C.zf) goto L_12dd242b;
  /* 12dd23fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd23fe call 0x12dc72f0 */
  push32(0x12dd2403u); f_12dc72f0();
  /* 12dd2403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2406 cmp dword ptr [0x12ddf888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd240d jne 0x12dd2421 */
  if (!C.zf) goto L_12dd2421;
  /* 12dd240f call 0x12dd2450 */
  push32(0x12dd2414u); f_12dd2450();
  /* 12dd2414 mov eax, dword ptr [0x12ddf888] */
  EAX = (r32((uint32_t)(0x12ddf888)));
  /* 12dd2419 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd241c mov dword ptr [0x12ddf888], eax */
  w32((uint32_t)(0x12ddf888), (EAX));
L_12dd2421:;
  /* 12dd2421 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd2423 call 0x12dc7390 */
  push32(0x12dd2428u); f_12dc7390();
  /* 12dd2428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd242b:;
  /* 12dd242b pop ebp */
  EBP = (pop32());
  /* 12dd242c ret  */
  ESPCHK(0x12dd23f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x12dd2430 (30 bytes, 11 insns) */
void f_12dd2430(void) {
  FTRACE(0x12dd2430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2430 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2431 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2433 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd2435 call 0x12dc72f0 */
  push32(0x12dd243au); f_12dc72f0();
  /* 12dd243a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd243d call 0x12dd2450 */
  push32(0x12dd2442u); f_12dd2450();
  /* 12dd2442 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd2444 call 0x12dc7390 */
  push32(0x12dd2449u); f_12dc7390();
  /* 12dd2449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd244c pop ebp */
  EBP = (pop32());
  /* 12dd244d ret  */
  ESPCHK(0x12dd2430u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x12dd2450 (939 bytes, 266 insns) */
void f_12dd2450(void) {
  FTRACE(0x12dd2450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2450 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2451 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2456 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd245d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd245f call 0x12dc72f0 */
  push32(0x12dd2464u); f_12dc72f0();
  /* 12dd2464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2467 mov dword ptr [0x12ddf7d0], 0 */
  w32((uint32_t)(0x12ddf7d0), (0x0u));
  /* 12dd2471 mov dword ptr [0x12ddee38], 0xffffffff */
  w32((uint32_t)(0x12ddee38), (0xffffffffu));
  /* 12dd247b mov eax, dword ptr [0x12ddee38] */
  EAX = (r32((uint32_t)(0x12ddee38)));
  /* 12dd2480 mov dword ptr [0x12ddee28], eax */
  w32((uint32_t)(0x12ddee28), (EAX));
  /* 12dd2485 push 0x12ddba70 */
  push32((uint32_t)(0x12ddba70u));
  /* 12dd248a call 0x12dd32d0 */
  push32(0x12dd248fu); f_12dd32d0();
  /* 12dd248f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2492 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd2495 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2499 jne 0x12dd25d3 */
  if (!C.zf) goto L_12dd25d3;
  /* 12dd249f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd24a1 call 0x12dc7390 */
  push32(0x12dd24a6u); f_12dc7390();
  /* 12dd24a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd24a9 push 0x12ddf7d8 */
  push32((uint32_t)(0x12ddf7d8u));
  /* 12dd24ae call dword ptr [0x12de22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22b0))), 0x12dd24b4u);
  /* 12dd24b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd24b7 je 0x12dd25ce */
  if (C.zf) goto L_12dd25ce;
  /* 12dd24bd mov dword ptr [0x12ddf7d0], 1 */
  w32((uint32_t)(0x12ddf7d0), (0x1u));
  /* 12dd24c7 mov ecx, dword ptr [0x12ddf7d8] */
  ECX = (r32((uint32_t)(0x12ddf7d8)));
  /* 12dd24cd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd24d0 mov dword ptr [0x12dded90], ecx */
  w32((uint32_t)(0x12dded90), (ECX));
  /* 12dd24d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd24d8 mov dx, word ptr [0x12ddf81e] */
  DX = (r16((uint32_t)(0x12ddf81e)));
  /* 12dd24df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd24e1 je 0x12dd24f9 */
  if (C.zf) goto L_12dd24f9;
  /* 12dd24e3 mov eax, dword ptr [0x12ddf82c] */
  EAX = (r32((uint32_t)(0x12ddf82c)));
  /* 12dd24e8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd24eb mov ecx, dword ptr [0x12dded90] */
  ECX = (r32((uint32_t)(0x12dded90)));
  /* 12dd24f1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd24f3 mov dword ptr [0x12dded90], ecx */
  w32((uint32_t)(0x12dded90), (ECX));
L_12dd24f9:;
  /* 12dd24f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd24fb mov dx, word ptr [0x12ddf872] */
  DX = (r16((uint32_t)(0x12ddf872)));
  /* 12dd2502 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd2504 je 0x12dd252e */
  if (C.zf) goto L_12dd252e;
  /* 12dd2506 cmp dword ptr [0x12ddf880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd250d je 0x12dd252e */
  if (C.zf) goto L_12dd252e;
  /* 12dd250f mov dword ptr [0x12dded94], 1 */
  w32((uint32_t)(0x12dded94), (0x1u));
  /* 12dd2519 mov eax, dword ptr [0x12ddf880] */
  EAX = (r32((uint32_t)(0x12ddf880)));
  /* 12dd251e sub eax, dword ptr [0x12ddf82c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddf82c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2524 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2527 mov dword ptr [0x12dded98], eax */
  w32((uint32_t)(0x12dded98), (EAX));
  /* 12dd252c jmp 0x12dd2542 */
  goto L_12dd2542;
L_12dd252e:;
  /* 12dd252e mov dword ptr [0x12dded94], 0 */
  w32((uint32_t)(0x12dded94), (0x0u));
  /* 12dd2538 mov dword ptr [0x12dded98], 0 */
  w32((uint32_t)(0x12dded98), (0x0u));
L_12dd2542:;
  /* 12dd2542 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12dd2545 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2548 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12dd254a mov edx, dword ptr [0x12ddee1c] */
  EDX = (r32((uint32_t)(0x12ddee1c)));
  /* 12dd2550 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2551 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2553 push 0x12ddf7dc */
  push32((uint32_t)(0x12ddf7dcu));
  /* 12dd2558 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd255d mov eax, dword ptr [0x12ddf740] */
  EAX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd2562 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2563 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd2569u);
  /* 12dd2569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd256b je 0x12dd257f */
  if (C.zf) goto L_12dd257f;
  /* 12dd256d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2571 jne 0x12dd257f */
  if (!C.zf) goto L_12dd257f;
  /* 12dd2573 mov ecx, dword ptr [0x12ddee1c] */
  ECX = (r32((uint32_t)(0x12ddee1c)));
  /* 12dd2579 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12dd257d jmp 0x12dd2588 */
  goto L_12dd2588;
L_12dd257f:;
  /* 12dd257f mov edx, dword ptr [0x12ddee1c] */
  EDX = (r32((uint32_t)(0x12ddee1c)));
  /* 12dd2585 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12dd2588:;
  /* 12dd2588 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12dd258b push eax */
  push32((uint32_t)(EAX));
  /* 12dd258c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd258e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12dd2590 mov ecx, dword ptr [0x12ddee20] */
  ECX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd2596 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2597 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2599 push 0x12ddf830 */
  push32((uint32_t)(0x12ddf830u));
  /* 12dd259e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd25a3 mov edx, dword ptr [0x12ddf740] */
  EDX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd25a9 push edx */
  push32((uint32_t)(EDX));
  /* 12dd25aa call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd25b0u);
  /* 12dd25b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd25b2 je 0x12dd25c5 */
  if (C.zf) goto L_12dd25c5;
  /* 12dd25b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd25b8 jne 0x12dd25c5 */
  if (!C.zf) goto L_12dd25c5;
  /* 12dd25ba mov eax, dword ptr [0x12ddee20] */
  EAX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd25bf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12dd25c3 jmp 0x12dd25ce */
  goto L_12dd25ce;
L_12dd25c5:;
  /* 12dd25c5 mov ecx, dword ptr [0x12ddee20] */
  ECX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd25cb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12dd25ce:;
  /* 12dd25ce jmp 0x12dd27f7 */
  goto L_12dd27f7;
L_12dd25d3:;
  /* 12dd25d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd25d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd25d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd25db je 0x12dd25fd */
  if (C.zf) goto L_12dd25fd;
  /* 12dd25dd cmp dword ptr [0x12ddf884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd25e4 je 0x12dd260c */
  if (C.zf) goto L_12dd260c;
  /* 12dd25e6 mov ecx, dword ptr [0x12ddf884] */
  ECX = (r32((uint32_t)(0x12ddf884)));
  /* 12dd25ec push ecx */
  push32((uint32_t)(ECX));
  /* 12dd25ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd25f0 push edx */
  push32((uint32_t)(EDX));
  /* 12dd25f1 call 0x12dcf580 */
  push32(0x12dd25f6u); f_12dcf580();
  /* 12dd25f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd25f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd25fb jne 0x12dd260c */
  if (!C.zf) goto L_12dd260c;
L_12dd25fd:;
  /* 12dd25fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd25ff call 0x12dc7390 */
  push32(0x12dd2604u); f_12dc7390();
  /* 12dd2604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2607 jmp 0x12dd27f7 */
  goto L_12dd27f7;
L_12dd260c:;
  /* 12dd260c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd260e mov eax, dword ptr [0x12ddf884] */
  EAX = (r32((uint32_t)(0x12ddf884)));
  /* 12dd2613 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2614 call 0x12dc4380 */
  push32(0x12dd2619u); f_12dc4380();
  /* 12dd2619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd261c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12dd2621 push 0x12ddba68 */
  push32((uint32_t)(0x12ddba68u));
  /* 12dd2626 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd2628 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd262b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd262c call 0x12dc6720 */
  push32(0x12dd2631u); f_12dc6720();
  /* 12dd2631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2637 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2638 call 0x12dc38f0 */
  push32(0x12dd263du); f_12dc38f0();
  /* 12dd263d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2640 mov dword ptr [0x12ddf884], eax */
  w32((uint32_t)(0x12ddf884), (EAX));
  /* 12dd2645 cmp dword ptr [0x12ddf884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd264c jne 0x12dd265d */
  if (!C.zf) goto L_12dd265d;
  /* 12dd264e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd2650 call 0x12dc7390 */
  push32(0x12dd2655u); f_12dc7390();
  /* 12dd2655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2658 jmp 0x12dd27f7 */
  goto L_12dd27f7;
L_12dd265d:;
  /* 12dd265d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2660 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2661 mov eax, dword ptr [0x12ddf884] */
  EAX = (r32((uint32_t)(0x12ddf884)));
  /* 12dd2666 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2667 call 0x12dc68a0 */
  push32(0x12dd266cu); f_12dc68a0();
  /* 12dd266c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd266f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd2671 call 0x12dc7390 */
  push32(0x12dd2676u); f_12dc7390();
  /* 12dd2676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2679 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dd267b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd267e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd267f mov edx, dword ptr [0x12ddee1c] */
  EDX = (r32((uint32_t)(0x12ddee1c)));
  /* 12dd2685 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2686 call 0x12dc7110 */
  push32(0x12dd268bu); f_12dc7110();
  /* 12dd268b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd268e mov eax, dword ptr [0x12ddee1c] */
  EAX = (r32((uint32_t)(0x12ddee1c)));
  /* 12dd2693 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12dd2697 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd269a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd269d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd26a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd26a6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd26a9 jne 0x12dd26bd */
  if (!C.zf) goto L_12dd26bd;
  /* 12dd26ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd26ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd26b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd26b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd26ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dd26bd:;
  /* 12dd26bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26c0 push eax */
  push32((uint32_t)(EAX));
  /* 12dd26c1 call 0x12dd21a0 */
  push32(0x12dd26c6u); f_12dd21a0();
  /* 12dd26c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd26c9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd26cf mov dword ptr [0x12dded90], eax */
  w32((uint32_t)(0x12dded90), (EAX));
L_12dd26d4:;
  /* 12dd26d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd26da cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd26dd je 0x12dd26f5 */
  if (C.zf) goto L_12dd26f5;
  /* 12dd26df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26e2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd26e5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd26e8 jl 0x12dd2700 */
  if ((C.sf!=C.of)) goto L_12dd2700;
  /* 12dd26ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd26f0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd26f3 jg 0x12dd2700 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd2700;
L_12dd26f5:;
  /* 12dd26f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd26f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd26fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd26fe jmp 0x12dd26d4 */
  goto L_12dd26d4;
L_12dd2700:;
  /* 12dd2700 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2703 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd2706 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2709 jne 0x12dd27a5 */
  if (!C.zf) goto L_12dd27a5;
  /* 12dd270f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2712 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2715 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd2718 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd271b push edx */
  push32((uint32_t)(EDX));
  /* 12dd271c call 0x12dd21a0 */
  push32(0x12dd2721u); f_12dd21a0();
  /* 12dd2721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2724 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2727 mov ecx, dword ptr [0x12dded90] */
  ECX = (r32((uint32_t)(0x12dded90)));
  /* 12dd272d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd272f mov dword ptr [0x12dded90], ecx */
  w32((uint32_t)(0x12dded90), (ECX));
L_12dd2735:;
  /* 12dd2735 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2738 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd273b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd273e jl 0x12dd2756 */
  if ((C.sf!=C.of)) goto L_12dd2756;
  /* 12dd2740 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2743 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd2746 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2749 jg 0x12dd2756 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd2756;
  /* 12dd274b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd274e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2751 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd2754 jmp 0x12dd2735 */
  goto L_12dd2735;
L_12dd2756:;
  /* 12dd2756 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2759 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd275c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd275f jne 0x12dd27a5 */
  if (!C.zf) goto L_12dd27a5;
  /* 12dd2761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2764 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2767 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd276a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd276d push ecx */
  push32((uint32_t)(ECX));
  /* 12dd276e call 0x12dd21a0 */
  push32(0x12dd2773u); f_12dd21a0();
  /* 12dd2773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2776 mov edx, dword ptr [0x12dded90] */
  EDX = (r32((uint32_t)(0x12dded90)));
  /* 12dd277c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd277e mov dword ptr [0x12dded90], edx */
  w32((uint32_t)(0x12dded90), (EDX));
L_12dd2784:;
  /* 12dd2784 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2787 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd278a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd278d jl 0x12dd27a5 */
  if ((C.sf!=C.of)) goto L_12dd27a5;
  /* 12dd278f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2792 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dd2795 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2798 jg 0x12dd27a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd27a5;
  /* 12dd279a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd279d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd27a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd27a3 jmp 0x12dd2784 */
  goto L_12dd2784;
L_12dd27a5:;
  /* 12dd27a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd27a9 je 0x12dd27b9 */
  if (C.zf) goto L_12dd27b9;
  /* 12dd27ab mov edx, dword ptr [0x12dded90] */
  EDX = (r32((uint32_t)(0x12dded90)));
  /* 12dd27b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd27b3 mov dword ptr [0x12dded90], edx */
  w32((uint32_t)(0x12dded90), (EDX));
L_12dd27b9:;
  /* 12dd27b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd27bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd27bf mov dword ptr [0x12dded94], ecx */
  w32((uint32_t)(0x12dded94), (ECX));
  /* 12dd27c5 cmp dword ptr [0x12dded94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dded94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd27cc je 0x12dd27ee */
  if (C.zf) goto L_12dd27ee;
  /* 12dd27ce push 3 */
  push32((uint32_t)(0x3u));
  /* 12dd27d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd27d3 push edx */
  push32((uint32_t)(EDX));
  /* 12dd27d4 mov eax, dword ptr [0x12ddee20] */
  EAX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd27d9 push eax */
  push32((uint32_t)(EAX));
  /* 12dd27da call 0x12dc7110 */
  push32(0x12dd27dfu); f_12dc7110();
  /* 12dd27df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd27e2 mov ecx, dword ptr [0x12ddee20] */
  ECX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd27e8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12dd27ec jmp 0x12dd27f7 */
  goto L_12dd27f7;
L_12dd27ee:;
  /* 12dd27ee mov edx, dword ptr [0x12ddee20] */
  EDX = (r32((uint32_t)(0x12ddee20)));
  /* 12dd27f4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12dd27f7:;
  /* 12dd27f7 mov esp, ebp */
  ESP = (EBP);
  /* 12dd27f9 pop ebp */
  EBP = (pop32());
  /* 12dd27fa ret  */
  ESPCHK(0x12dd2450u, _esp0);
  ESP += 4; return;
}

/* FUN_10012800 @ 0x12dd2800 (46 bytes, 18 insns) */
void f_12dd2800(void) {
  FTRACE(0x12dd2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2800 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2801 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2803 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2804 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd2806 call 0x12dc72f0 */
  push32(0x12dd280bu); f_12dc72f0();
  /* 12dd280b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd280e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2811 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2812 call 0x12dd2830 */
  push32(0x12dd2817u); f_12dd2830();
  /* 12dd2817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd281a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd281d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd281f call 0x12dc7390 */
  push32(0x12dd2824u); f_12dc7390();
  /* 12dd2824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd282a mov esp, ebp */
  ESP = (EBP);
  /* 12dd282c pop ebp */
  EBP = (pop32());
  /* 12dd282d ret  */
  ESPCHK(0x12dd2800u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x12dd2830 (762 bytes, 246 insns) */
void f_12dd2830(void) {
  FTRACE(0x12dd2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2830 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2831 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2833 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2834 cmp dword ptr [0x12dded94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dded94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd283b jne 0x12dd2844 */
  if (!C.zf) goto L_12dd2844;
  /* 12dd283d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd283f jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2844:;
  /* 12dd2844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2847 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dd284a cmp ecx, dword ptr [0x12ddee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2850 jne 0x12dd2864 */
  if (!C.zf) goto L_12dd2864;
  /* 12dd2852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2855 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dd2858 cmp eax, dword ptr [0x12ddee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd285e je 0x12dd2a2b */
  if (C.zf) goto L_12dd2a2b;
L_12dd2864:;
  /* 12dd2864 cmp dword ptr [0x12ddf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd286b je 0x12dd29e5 */
  if (C.zf) goto L_12dd29e5;
  /* 12dd2871 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd2873 mov cx, word ptr [0x12ddf870] */
  CX = (r16((uint32_t)(0x12ddf870)));
  /* 12dd287a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd287c jne 0x12dd28d9 */
  if (!C.zf) goto L_12dd28d9;
  /* 12dd287e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2880 mov dx, word ptr [0x12ddf87e] */
  DX = (r16((uint32_t)(0x12ddf87e)));
  /* 12dd2887 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd288a mov ax, word ptr [0x12ddf87c] */
  AX = (r16((uint32_t)(0x12ddf87c)));
  /* 12dd2890 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2891 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd2893 mov cx, word ptr [0x12ddf87a] */
  CX = (r16((uint32_t)(0x12ddf87a)));
  /* 12dd289a push ecx */
  push32((uint32_t)(ECX));
  /* 12dd289b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd289d mov dx, word ptr [0x12ddf878] */
  DX = (r16((uint32_t)(0x12ddf878)));
  /* 12dd28a4 push edx */
  push32((uint32_t)(EDX));
  /* 12dd28a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd28a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd28a9 mov ax, word ptr [0x12ddf874] */
  AX = (r16((uint32_t)(0x12ddf874)));
  /* 12dd28af push eax */
  push32((uint32_t)(EAX));
  /* 12dd28b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd28b2 mov cx, word ptr [0x12ddf876] */
  CX = (r16((uint32_t)(0x12ddf876)));
  /* 12dd28b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd28ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd28bc mov dx, word ptr [0x12ddf872] */
  DX = (r16((uint32_t)(0x12ddf872)));
  /* 12dd28c3 push edx */
  push32((uint32_t)(EDX));
  /* 12dd28c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd28c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dd28ca push ecx */
  push32((uint32_t)(ECX));
  /* 12dd28cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd28cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd28cf call 0x12dd2b30 */
  push32(0x12dd28d4u); f_12dd2b30();
  /* 12dd28d4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd28d7 jmp 0x12dd292a */
  goto L_12dd292a;
L_12dd28d9:;
  /* 12dd28d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd28db mov dx, word ptr [0x12ddf87e] */
  DX = (r16((uint32_t)(0x12ddf87e)));
  /* 12dd28e2 push edx */
  push32((uint32_t)(EDX));
  /* 12dd28e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd28e5 mov ax, word ptr [0x12ddf87c] */
  AX = (r16((uint32_t)(0x12ddf87c)));
  /* 12dd28eb push eax */
  push32((uint32_t)(EAX));
  /* 12dd28ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd28ee mov cx, word ptr [0x12ddf87a] */
  CX = (r16((uint32_t)(0x12ddf87a)));
  /* 12dd28f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd28f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd28f8 mov dx, word ptr [0x12ddf878] */
  DX = (r16((uint32_t)(0x12ddf878)));
  /* 12dd28ff push edx */
  push32((uint32_t)(EDX));
  /* 12dd2900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2902 mov ax, word ptr [0x12ddf876] */
  AX = (r16((uint32_t)(0x12ddf876)));
  /* 12dd2908 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2909 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd290b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd290d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd290f mov cx, word ptr [0x12ddf872] */
  CX = (r16((uint32_t)(0x12ddf872)));
  /* 12dd2916 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd291a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dd291d push eax */
  push32((uint32_t)(EAX));
  /* 12dd291e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2920 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2922 call 0x12dd2b30 */
  push32(0x12dd2927u); f_12dd2b30();
  /* 12dd2927 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd292a:;
  /* 12dd292a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd292c mov cx, word ptr [0x12ddf81c] */
  CX = (r16((uint32_t)(0x12ddf81c)));
  /* 12dd2933 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd2935 jne 0x12dd2992 */
  if (!C.zf) goto L_12dd2992;
  /* 12dd2937 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2939 mov dx, word ptr [0x12ddf82a] */
  DX = (r16((uint32_t)(0x12ddf82a)));
  /* 12dd2940 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2941 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2943 mov ax, word ptr [0x12ddf828] */
  AX = (r16((uint32_t)(0x12ddf828)));
  /* 12dd2949 push eax */
  push32((uint32_t)(EAX));
  /* 12dd294a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd294c mov cx, word ptr [0x12ddf826] */
  CX = (r16((uint32_t)(0x12ddf826)));
  /* 12dd2953 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2956 mov dx, word ptr [0x12ddf824] */
  DX = (r16((uint32_t)(0x12ddf824)));
  /* 12dd295d push edx */
  push32((uint32_t)(EDX));
  /* 12dd295e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2962 mov ax, word ptr [0x12ddf820] */
  AX = (r16((uint32_t)(0x12ddf820)));
  /* 12dd2968 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2969 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd296b mov cx, word ptr [0x12ddf822] */
  CX = (r16((uint32_t)(0x12ddf822)));
  /* 12dd2972 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2973 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2975 mov dx, word ptr [0x12ddf81e] */
  DX = (r16((uint32_t)(0x12ddf81e)));
  /* 12dd297c push edx */
  push32((uint32_t)(EDX));
  /* 12dd297d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2980 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dd2983 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2984 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2988 call 0x12dd2b30 */
  push32(0x12dd298du); f_12dd2b30();
  /* 12dd298d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2990 jmp 0x12dd29e3 */
  goto L_12dd29e3;
L_12dd2992:;
  /* 12dd2992 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2994 mov dx, word ptr [0x12ddf82a] */
  DX = (r16((uint32_t)(0x12ddf82a)));
  /* 12dd299b push edx */
  push32((uint32_t)(EDX));
  /* 12dd299c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd299e mov ax, word ptr [0x12ddf828] */
  AX = (r16((uint32_t)(0x12ddf828)));
  /* 12dd29a4 push eax */
  push32((uint32_t)(EAX));
  /* 12dd29a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd29a7 mov cx, word ptr [0x12ddf826] */
  CX = (r16((uint32_t)(0x12ddf826)));
  /* 12dd29ae push ecx */
  push32((uint32_t)(ECX));
  /* 12dd29af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd29b1 mov dx, word ptr [0x12ddf824] */
  DX = (r16((uint32_t)(0x12ddf824)));
  /* 12dd29b8 push edx */
  push32((uint32_t)(EDX));
  /* 12dd29b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd29bb mov ax, word ptr [0x12ddf822] */
  AX = (r16((uint32_t)(0x12ddf822)));
  /* 12dd29c1 push eax */
  push32((uint32_t)(EAX));
  /* 12dd29c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd29c8 mov cx, word ptr [0x12ddf81e] */
  CX = (r16((uint32_t)(0x12ddf81e)));
  /* 12dd29cf push ecx */
  push32((uint32_t)(ECX));
  /* 12dd29d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd29d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dd29d6 push eax */
  push32((uint32_t)(EAX));
  /* 12dd29d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29db call 0x12dd2b30 */
  push32(0x12dd29e0u); f_12dd2b30();
  /* 12dd29e0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd29e3:;
  /* 12dd29e3 jmp 0x12dd2a2b */
  goto L_12dd2a2b;
L_12dd29e5:;
  /* 12dd29e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd29ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd29f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd29f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd29f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd29f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dd29fb push edx */
  push32((uint32_t)(EDX));
  /* 12dd29fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd29fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2a00 call 0x12dd2b30 */
  push32(0x12dd2a05u); f_12dd2b30();
  /* 12dd2a05 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a0e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd2a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 12dd2a16 push 0xa */
  push32((uint32_t)(0xau));
  /* 12dd2a18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a1b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dd2a1e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2a23 call 0x12dd2b30 */
  push32(0x12dd2a28u); f_12dd2b30();
  /* 12dd2a28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd2a2b:;
  /* 12dd2a2b mov edx, dword ptr [0x12ddee2c] */
  EDX = (r32((uint32_t)(0x12ddee2c)));
  /* 12dd2a31 cmp edx, dword ptr [0x12ddee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a37 jge 0x12dd2a84 */
  if ((C.sf==C.of)) goto L_12dd2a84;
  /* 12dd2a39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a3c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dd2a3f cmp ecx, dword ptr [0x12ddee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a45 jl 0x12dd2a55 */
  if ((C.sf!=C.of)) goto L_12dd2a55;
  /* 12dd2a47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a4a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dd2a4d cmp eax, dword ptr [0x12ddee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a53 jle 0x12dd2a5c */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2a5c;
L_12dd2a55:;
  /* 12dd2a55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2a57 jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2a5c:;
  /* 12dd2a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a5f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12dd2a62 cmp edx, dword ptr [0x12ddee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a68 jle 0x12dd2a82 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2a82;
  /* 12dd2a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a6d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dd2a70 cmp ecx, dword ptr [0x12ddee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a76 jge 0x12dd2a82 */
  if ((C.sf==C.of)) goto L_12dd2a82;
  /* 12dd2a78 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2a7d jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2a82:;
  /* 12dd2a82 jmp 0x12dd2ac7 */
  goto L_12dd2ac7;
L_12dd2a84:;
  /* 12dd2a84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a87 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dd2a8a cmp eax, dword ptr [0x12ddee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a90 jl 0x12dd2aa0 */
  if ((C.sf!=C.of)) goto L_12dd2aa0;
  /* 12dd2a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2a95 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12dd2a98 cmp edx, dword ptr [0x12ddee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2a9e jle 0x12dd2aa7 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2aa7;
L_12dd2aa0:;
  /* 12dd2aa0 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2aa5 jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2aa7:;
  /* 12dd2aa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2aaa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dd2aad cmp ecx, dword ptr [0x12ddee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2ab3 jle 0x12dd2ac7 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2ac7;
  /* 12dd2ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2ab8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dd2abb cmp eax, dword ptr [0x12ddee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2ac1 jge 0x12dd2ac7 */
  if ((C.sf==C.of)) goto L_12dd2ac7;
  /* 12dd2ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2ac5 jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2ac7:;
  /* 12dd2ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2aca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dd2acd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2ad3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd2ad5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2ada mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dd2add imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2ae3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2ae5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd2aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2af1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12dd2af4 cmp edx, dword ptr [0x12ddee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2afa jne 0x12dd2b12 */
  if (!C.zf) goto L_12dd2b12;
  /* 12dd2afc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2aff cmp eax, dword ptr [0x12ddee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2b05 jl 0x12dd2b0e */
  if ((C.sf!=C.of)) goto L_12dd2b0e;
  /* 12dd2b07 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2b0c jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2b0e:;
  /* 12dd2b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2b10 jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2b12:;
  /* 12dd2b12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2b15 cmp ecx, dword ptr [0x12ddee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2b1b jge 0x12dd2b24 */
  if ((C.sf==C.of)) goto L_12dd2b24;
  /* 12dd2b1d mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2b22 jmp 0x12dd2b26 */
  goto L_12dd2b26;
L_12dd2b24:;
  /* 12dd2b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd2b26:;
  /* 12dd2b26 mov esp, ebp */
  ESP = (EBP);
  /* 12dd2b28 pop ebp */
  EBP = (pop32());
  /* 12dd2b29 ret  */
  ESPCHK(0x12dd2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x12dd2b30 (504 bytes, 145 insns) */
void f_12dd2b30(void) {
  FTRACE(0x12dd2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2b31 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2b36 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2b3a jne 0x12dd2c0c */
  if (!C.zf) goto L_12dd2c0c;
  /* 12dd2b40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2b43 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2b48 jne 0x12dd2b59 */
  if (!C.zf) goto L_12dd2b59;
  /* 12dd2b4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2b4d mov edx, dword ptr [ecx*4 + 0x12ddee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddee4c)));
  /* 12dd2b54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dd2b57 jmp 0x12dd2b66 */
  goto L_12dd2b66;
L_12dd2b59:;
  /* 12dd2b59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2b5c mov ecx, dword ptr [eax*4 + 0x12ddee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ddee80)));
  /* 12dd2b63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dd2b66:;
  /* 12dd2b66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd2b69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2b6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd2b6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2b72 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2b75 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2b7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2b7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2b83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2b86 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12dd2b89 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12dd2b8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dd2b8e mov ecx, 7 */
  ECX = (0x7u);
  /* 12dd2b93 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dd2b95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd2b98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd2b9b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2b9e jg 0x12dd2bb9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd2bb9;
  /* 12dd2ba0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd2ba3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2ba6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd2ba9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2bac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2baf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2bb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2bb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd2bb7 jmp 0x12dd2bcd */
  goto L_12dd2bcd;
L_12dd2bb9:;
  /* 12dd2bb9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd2bbc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2bbf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd2bc2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2bc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2bc8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2bca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dd2bcd:;
  /* 12dd2bcd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2bd1 jne 0x12dd2c0a */
  if (!C.zf) goto L_12dd2c0a;
  /* 12dd2bd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2bd6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd2bd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd2bdb jne 0x12dd2bec */
  if (!C.zf) goto L_12dd2bec;
  /* 12dd2bdd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2be0 mov eax, dword ptr [edx*4 + 0x12ddee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ddee50)));
  /* 12dd2be7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dd2bea jmp 0x12dd2bf9 */
  goto L_12dd2bf9;
L_12dd2bec:;
  /* 12dd2bec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2bef mov edx, dword ptr [ecx*4 + 0x12ddee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddee84)));
  /* 12dd2bf6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dd2bf9:;
  /* 12dd2bf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2bfc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2bff jle 0x12dd2c0a */
  if ((C.zf||C.sf!=C.of)) goto L_12dd2c0a;
  /* 12dd2c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2c04 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2c07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dd2c0a:;
  /* 12dd2c0a jmp 0x12dd2c41 */
  goto L_12dd2c41;
L_12dd2c0c:;
  /* 12dd2c0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2c0f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dd2c12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd2c14 jne 0x12dd2c25 */
  if (!C.zf) goto L_12dd2c25;
  /* 12dd2c16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2c19 mov ecx, dword ptr [eax*4 + 0x12ddee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ddee4c)));
  /* 12dd2c20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dd2c23 jmp 0x12dd2c32 */
  goto L_12dd2c32;
L_12dd2c25:;
  /* 12dd2c25 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2c28 mov eax, dword ptr [edx*4 + 0x12ddee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ddee80)));
  /* 12dd2c2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12dd2c32:;
  /* 12dd2c32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd2c35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dd2c38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2c3b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dd2c41:;
  /* 12dd2c41 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2c45 jne 0x12dd2c81 */
  if (!C.zf) goto L_12dd2c81;
  /* 12dd2c47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2c4a mov dword ptr [0x12ddee2c], eax */
  w32((uint32_t)(0x12ddee2c), (EAX));
  /* 12dd2c4f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12dd2c52 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2c55 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12dd2c58 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c5a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2c5d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12dd2c60 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c62 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2c68 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12dd2c6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c6d mov dword ptr [0x12ddee30], ecx */
  w32((uint32_t)(0x12ddee30), (ECX));
  /* 12dd2c73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2c76 mov dword ptr [0x12ddee28], edx */
  w32((uint32_t)(0x12ddee28), (EDX));
  /* 12dd2c7c jmp 0x12dd2d24 */
  goto L_12dd2d24;
L_12dd2c81:;
  /* 12dd2c81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd2c84 mov dword ptr [0x12ddee3c], eax */
  w32((uint32_t)(0x12ddee3c), (EAX));
  /* 12dd2c89 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12dd2c8c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2c8f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12dd2c92 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c94 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2c97 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12dd2c9a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2c9c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2ca2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12dd2ca5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2ca7 mov dword ptr [0x12ddee40], ecx */
  w32((uint32_t)(0x12ddee40), (ECX));
  /* 12dd2cad mov edx, dword ptr [0x12dded98] */
  EDX = (r32((uint32_t)(0x12dded98)));
  /* 12dd2cb3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dd2cb9 mov eax, dword ptr [0x12ddee40] */
  EAX = (r32((uint32_t)(0x12ddee40)));
  /* 12dd2cbe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2cc0 mov dword ptr [0x12ddee40], eax */
  w32((uint32_t)(0x12ddee40), (EAX));
  /* 12dd2cc5 cmp dword ptr [0x12ddee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2ccc jge 0x12dd2cf1 */
  if ((C.sf==C.of)) goto L_12dd2cf1;
  /* 12dd2cce mov ecx, dword ptr [0x12ddee40] */
  ECX = (r32((uint32_t)(0x12ddee40)));
  /* 12dd2cd4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2cda mov dword ptr [0x12ddee40], ecx */
  w32((uint32_t)(0x12ddee40), (ECX));
  /* 12dd2ce0 mov edx, dword ptr [0x12ddee3c] */
  EDX = (r32((uint32_t)(0x12ddee3c)));
  /* 12dd2ce6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2ce9 mov dword ptr [0x12ddee3c], edx */
  w32((uint32_t)(0x12ddee3c), (EDX));
  /* 12dd2cef jmp 0x12dd2d1b */
  goto L_12dd2d1b;
L_12dd2cf1:;
  /* 12dd2cf1 cmp dword ptr [0x12ddee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12ddee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2cfb jl 0x12dd2d1b */
  if ((C.sf!=C.of)) goto L_12dd2d1b;
  /* 12dd2cfd mov eax, dword ptr [0x12ddee40] */
  EAX = (r32((uint32_t)(0x12ddee40)));
  /* 12dd2d02 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd2d07 mov dword ptr [0x12ddee40], eax */
  w32((uint32_t)(0x12ddee40), (EAX));
  /* 12dd2d0c mov ecx, dword ptr [0x12ddee3c] */
  ECX = (r32((uint32_t)(0x12ddee3c)));
  /* 12dd2d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2d15 mov dword ptr [0x12ddee3c], ecx */
  w32((uint32_t)(0x12ddee3c), (ECX));
L_12dd2d1b:;
  /* 12dd2d1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2d1e mov dword ptr [0x12ddee38], edx */
  w32((uint32_t)(0x12ddee38), (EDX));
L_12dd2d24:;
  /* 12dd2d24 mov esp, ebp */
  ESP = (EBP);
  /* 12dd2d26 pop ebp */
  EBP = (pop32());
  /* 12dd2d27 ret  */
  ESPCHK(0x12dd2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x12dd2d30 (382 bytes, 135 insns) */
void f_12dd2d30(void) {
  FTRACE(0x12dd2d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2d31 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2d33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2d35 push 0x12ddba78 */
  push32((uint32_t)(0x12ddba78u));
  /* 12dd2d3a push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dd2d3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dd2d45 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2d46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dd2d4d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2d50 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd2d51 push esi */
  push32((uint32_t)(ESI));
  /* 12dd2d52 push edi */
  push32((uint32_t)(EDI));
  /* 12dd2d53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd2d56 cmp dword ptr [0x12ddf88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2d5d jne 0x12dd2da2 */
  if (!C.zf) goto L_12dd2da2;
  /* 12dd2d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d67 call dword ptr [0x12de22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ac))), 0x12dd2d6du);
  /* 12dd2d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2d6f je 0x12dd2d7d */
  if (C.zf) goto L_12dd2d7d;
  /* 12dd2d71 mov dword ptr [0x12ddf88c], 1 */
  w32((uint32_t)(0x12ddf88c), (0x1u));
  /* 12dd2d7b jmp 0x12dd2da2 */
  goto L_12dd2da2;
L_12dd2d7d:;
  /* 12dd2d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2d85 call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd2d8bu);
  /* 12dd2d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2d8d je 0x12dd2d9b */
  if (C.zf) goto L_12dd2d9b;
  /* 12dd2d8f mov dword ptr [0x12ddf88c], 2 */
  w32((uint32_t)(0x12ddf88c), (0x2u));
  /* 12dd2d99 jmp 0x12dd2da2 */
  goto L_12dd2da2;
L_12dd2d9b:;
  /* 12dd2d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2d9d jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2da2:;
  /* 12dd2da2 cmp dword ptr [0x12ddf88c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf88c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2da9 jne 0x12dd2dc6 */
  if (!C.zf) goto L_12dd2dc6;
  /* 12dd2dab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2dae push eax */
  push32((uint32_t)(EAX));
  /* 12dd2daf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2db2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2db3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2db6 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2db7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2dba push eax */
  push32((uint32_t)(EAX));
  /* 12dd2dbb call dword ptr [0x12de22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ac))), 0x12dd2dc1u);
  /* 12dd2dc1 jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2dc6:;
  /* 12dd2dc6 cmp dword ptr [0x12ddf88c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf88c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2dcd jne 0x12dd2eaf */
  if (!C.zf) goto L_12dd2eaf;
  /* 12dd2dd3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2dd7 jne 0x12dd2de2 */
  if (!C.zf) goto L_12dd2de2;
  /* 12dd2dd9 mov ecx, dword ptr [0x12ddf740] */
  ECX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd2ddf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12dd2de2:;
  /* 12dd2de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2de6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2de9 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2dea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2ded push eax */
  push32((uint32_t)(EAX));
  /* 12dd2dee call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd2df4u);
  /* 12dd2df4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dd2df7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2dfb jne 0x12dd2e04 */
  if (!C.zf) goto L_12dd2e04;
  /* 12dd2dfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2dff jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2e04:;
  /* 12dd2e04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd2e0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd2e0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2e11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd2e13 call 0x12dc6a90 */
  push32(0x12dd2e18u); f_12dc6a90();
  /* 12dd2e18 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12dd2e1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd2e1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd2e21 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dd2e24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd2e2b jmp 0x12dd2e44 */
  goto L_12dd2e44;
  /* 12dd2e2d mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2e32 ret  */
  ESPCHK(0x12dd2d30u, _esp0);
  ESP += 4; return;
  /* 12dd2e33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd2e36 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dd2e3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd2e44:;
  /* 12dd2e44 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2e48 jne 0x12dd2e4e */
  if (!C.zf) goto L_12dd2e4e;
  /* 12dd2e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2e4c jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2e4e:;
  /* 12dd2e4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd2e51 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2e52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd2e55 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2e56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2e59 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2e5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2e5d push edx */
  push32((uint32_t)(EDX));
  /* 12dd2e5e call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd2e64u);
  /* 12dd2e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2e66 jne 0x12dd2e6c */
  if (!C.zf) goto L_12dd2e6c;
  /* 12dd2e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2e6a jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2e6c:;
  /* 12dd2e6c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2e70 jne 0x12dd2e8d */
  if (!C.zf) goto L_12dd2e8d;
  /* 12dd2e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2e76 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2e78 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd2e7b push eax */
  push32((uint32_t)(EAX));
  /* 12dd2e7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2e7e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd2e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2e82 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd2e88u);
  /* 12dd2e88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dd2e8b jmp 0x12dd2eaa */
  goto L_12dd2eaa;
L_12dd2e8d:;
  /* 12dd2e8d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2e90 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2e91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2e94 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2e95 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2e97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd2e9a push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2e9b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2e9d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd2ea0 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2ea1 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd2ea7u);
  /* 12dd2ea7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dd2eaa:;
  /* 12dd2eaa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd2ead jmp 0x12dd2eb1 */
  goto L_12dd2eb1;
L_12dd2eaf:;
  /* 12dd2eaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd2eb1:;
  /* 12dd2eb1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12dd2eb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd2eb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dd2ebe pop edi */
  EDI = (pop32());
  /* 12dd2ebf pop esi */
  ESI = (pop32());
  /* 12dd2ec0 pop ebx */
  EBX = (pop32());
  /* 12dd2ec1 mov esp, ebp */
  ESP = (EBP);
  /* 12dd2ec3 pop ebp */
  EBP = (pop32());
  /* 12dd2ec4 ret  */
  ESPCHK(0x12dd2d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x12dd2ed0 (398 bytes, 140 insns) */
void f_12dd2ed0(void) {
  FTRACE(0x12dd2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd2ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd2ed5 push 0x12ddba88 */
  push32((uint32_t)(0x12ddba88u));
  /* 12dd2eda push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dd2edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dd2ee5 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dd2eed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd2ef1 push esi */
  push32((uint32_t)(ESI));
  /* 12dd2ef2 push edi */
  push32((uint32_t)(EDI));
  /* 12dd2ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd2ef6 cmp dword ptr [0x12ddf890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2efd jne 0x12dd2f42 */
  if (!C.zf) goto L_12dd2f42;
  /* 12dd2eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f07 call dword ptr [0x12de22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ac))), 0x12dd2f0du);
  /* 12dd2f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2f0f je 0x12dd2f1d */
  if (C.zf) goto L_12dd2f1d;
  /* 12dd2f11 mov dword ptr [0x12ddf890], 1 */
  w32((uint32_t)(0x12ddf890), (0x1u));
  /* 12dd2f1b jmp 0x12dd2f42 */
  goto L_12dd2f42;
L_12dd2f1d:;
  /* 12dd2f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd2f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f25 call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd2f2bu);
  /* 12dd2f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd2f2d je 0x12dd2f3b */
  if (C.zf) goto L_12dd2f3b;
  /* 12dd2f2f mov dword ptr [0x12ddf890], 2 */
  w32((uint32_t)(0x12ddf890), (0x2u));
  /* 12dd2f39 jmp 0x12dd2f42 */
  goto L_12dd2f42;
L_12dd2f3b:;
  /* 12dd2f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2f3d jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd2f42:;
  /* 12dd2f42 cmp dword ptr [0x12ddf890], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf890))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2f49 jne 0x12dd2f66 */
  if (!C.zf) goto L_12dd2f66;
  /* 12dd2f4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd2f4e push eax */
  push32((uint32_t)(EAX));
  /* 12dd2f4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd2f52 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2f56 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2f5a push eax */
  push32((uint32_t)(EAX));
  /* 12dd2f5b call dword ptr [0x12de22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c4))), 0x12dd2f61u);
  /* 12dd2f61 jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd2f66:;
  /* 12dd2f66 cmp dword ptr [0x12ddf890], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf890))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2f6d jne 0x12dd305f */
  if (!C.zf) goto L_12dd305f;
  /* 12dd2f73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2f77 jne 0x12dd2f82 */
  if (!C.zf) goto L_12dd2f82;
  /* 12dd2f79 mov ecx, dword ptr [0x12ddf740] */
  ECX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd2f7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12dd2f82:;
  /* 12dd2f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd2f86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2f89 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2f8d push eax */
  push32((uint32_t)(EAX));
  /* 12dd2f8e call dword ptr [0x12de22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ac))), 0x12dd2f94u);
  /* 12dd2f94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dd2f97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2f9b jne 0x12dd2fa4 */
  if (!C.zf) goto L_12dd2fa4;
  /* 12dd2f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2f9f jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd2fa4:;
  /* 12dd2fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd2fab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd2fae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dd2fb0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd2fb3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd2fb5 call 0x12dc6a90 */
  push32(0x12dd2fbau); f_12dc6a90();
  /* 12dd2fba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12dd2fbd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd2fc0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd2fc3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dd2fc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd2fcd jmp 0x12dd2fe6 */
  goto L_12dd2fe6;
  /* 12dd2fcf mov eax, 1 */
  EAX = (0x1u);
  /* 12dd2fd4 ret  */
  ESPCHK(0x12dd2ed0u, _esp0);
  ESP += 4; return;
  /* 12dd2fd5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd2fd8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dd2fdf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd2fe6:;
  /* 12dd2fe6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd2fea jne 0x12dd2ff0 */
  if (!C.zf) goto L_12dd2ff0;
  /* 12dd2fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd2fee jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd2ff0:;
  /* 12dd2ff0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd2ff3 push edx */
  push32((uint32_t)(EDX));
  /* 12dd2ff4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd2ff7 push eax */
  push32((uint32_t)(EAX));
  /* 12dd2ff8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd2ffb push ecx */
  push32((uint32_t)(ECX));
  /* 12dd2ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd2fff push edx */
  push32((uint32_t)(EDX));
  /* 12dd3000 call dword ptr [0x12de22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ac))), 0x12dd3006u);
  /* 12dd3006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3008 jne 0x12dd300e */
  if (!C.zf) goto L_12dd300e;
  /* 12dd300a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd300c jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd300e:;
  /* 12dd300e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3012 jne 0x12dd3036 */
  if (!C.zf) goto L_12dd3036;
  /* 12dd3014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3018 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd301a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd301c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd301e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd3021 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3022 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd3027 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd302a push ecx */
  push32((uint32_t)(ECX));
  /* 12dd302b call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd3031u);
  /* 12dd3031 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dd3034 jmp 0x12dd305a */
  goto L_12dd305a;
L_12dd3036:;
  /* 12dd3036 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3038 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd303a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd303d push edx */
  push32((uint32_t)(EDX));
  /* 12dd303e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd3041 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3042 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd3044 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd3047 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3048 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dd304d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd3050 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3051 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd3057u);
  /* 12dd3057 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dd305a:;
  /* 12dd305a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd305d jmp 0x12dd3061 */
  goto L_12dd3061;
L_12dd305f:;
  /* 12dd305f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd3061:;
  /* 12dd3061 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12dd3064 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3067 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dd306e pop edi */
  EDI = (pop32());
  /* 12dd306f pop esi */
  ESI = (pop32());
  /* 12dd3070 pop ebx */
  EBX = (pop32());
  /* 12dd3071 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3073 pop ebp */
  EBP = (pop32());
  /* 12dd3074 ret  */
  ESPCHK(0x12dd2ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x12dd3080 (11 bytes, 6 insns) */
void f_12dd3080(void) {
  FTRACE(0x12dd3080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3080 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3081 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3086 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3089 pop ebp */
  EBP = (pop32());
  /* 12dd308a ret  */
  ESPCHK(0x12dd3080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013090 @ 0x12dd3090 (147 bytes, 43 insns) */
void f_12dd3090(void) {
  FTRACE(0x12dd3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3090 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3091 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3093 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3094 cmp dword ptr [0x12ddf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd309b jne 0x12dd30b7 */
  if (!C.zf) goto L_12dd30b7;
  /* 12dd309d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd30a1 jl 0x12dd30b2 */
  if ((C.sf!=C.of)) goto L_12dd30b2;
  /* 12dd30a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd30a7 jg 0x12dd30b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd30b2;
  /* 12dd30a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd30ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd30af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dd30b2:;
  /* 12dd30b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd30b5 jmp 0x12dd311f */
  goto L_12dd311f;
L_12dd30b7:;
  /* 12dd30b7 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd30bc call dword ptr [0x12de2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2354))), 0x12dd30c2u);
  /* 12dd30c2 cmp dword ptr [0x12ddf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd30c9 je 0x12dd30e9 */
  if (C.zf) goto L_12dd30e9;
  /* 12dd30cb push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd30d0 call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dd30d6u);
  /* 12dd30d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd30d8 call 0x12dc72f0 */
  push32(0x12dd30ddu); f_12dc72f0();
  /* 12dd30dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd30e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dd30e7 jmp 0x12dd30f0 */
  goto L_12dd30f0;
L_12dd30e9:;
  /* 12dd30e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dd30f0:;
  /* 12dd30f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd30f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd30f4 call 0x12dd3130 */
  push32(0x12dd30f9u); f_12dd3130();
  /* 12dd30f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd30fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dd30ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3103 je 0x12dd3111 */
  if (C.zf) goto L_12dd3111;
  /* 12dd3105 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dd3107 call 0x12dc7390 */
  push32(0x12dd310cu); f_12dc7390();
  /* 12dd310c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd310f jmp 0x12dd311c */
  goto L_12dd311c;
L_12dd3111:;
  /* 12dd3111 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dd3116 call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dd311cu);
L_12dd311c:;
  /* 12dd311c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12dd311f:;
  /* 12dd311f mov esp, ebp */
  ESP = (EBP);
  /* 12dd3121 pop ebp */
  EBP = (pop32());
  /* 12dd3122 ret  */
  ESPCHK(0x12dd3090u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x12dd3130 (299 bytes, 91 insns) */
void f_12dd3130(void) {
  FTRACE(0x12dd3130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3130 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3131 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3133 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3136 cmp dword ptr [0x12ddf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd313d jne 0x12dd315c */
  if (!C.zf) goto L_12dd315c;
  /* 12dd313f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3143 jl 0x12dd3154 */
  if ((C.sf!=C.of)) goto L_12dd3154;
  /* 12dd3145 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3149 jg 0x12dd3154 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd3154;
  /* 12dd314b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd314e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3151 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dd3154:;
  /* 12dd3154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3157 jmp 0x12dd3257 */
  goto L_12dd3257;
L_12dd315c:;
  /* 12dd315c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3163 jge 0x12dd31a3 */
  if ((C.sf==C.of)) goto L_12dd31a3;
  /* 12dd3165 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd316c jle 0x12dd3181 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd3181;
  /* 12dd316e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd3170 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3173 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3174 call 0x12dc9900 */
  push32(0x12dd3179u); f_12dc9900();
  /* 12dd3179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd317c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dd317f jmp 0x12dd3195 */
  goto L_12dd3195;
L_12dd3181:;
  /* 12dd3181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3184 mov eax, dword ptr [0x12dddc98] */
  EAX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd3189 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd318b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12dd318f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3192 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dd3195:;
  /* 12dd3195 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3199 jne 0x12dd31a3 */
  if (!C.zf) goto L_12dd31a3;
  /* 12dd319b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd319e jmp 0x12dd3257 */
  goto L_12dd3257;
L_12dd31a3:;
  /* 12dd31a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd31a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12dd31a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd31af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd31b5 mov eax, dword ptr [0x12dddc98] */
  EAX = (r32((uint32_t)(0x12dddc98)));
  /* 12dd31ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd31bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12dd31c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd31c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd31c8 je 0x12dd31ec */
  if (C.zf) goto L_12dd31ec;
  /* 12dd31ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd31cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12dd31d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd31d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12dd31d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dd31dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12dd31df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12dd31e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12dd31ea jmp 0x12dd31fd */
  goto L_12dd31fd;
L_12dd31ec:;
  /* 12dd31ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dd31ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12dd31f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12dd31f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12dd31fd:;
  /* 12dd31fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd31ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3201 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dd3203 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12dd3206 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd320a push eax */
  push32((uint32_t)(EAX));
  /* 12dd320b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12dd320e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd320f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dd3214 mov edx, dword ptr [0x12ddf730] */
  EDX = (r32((uint32_t)(0x12ddf730)));
  /* 12dd321a push edx */
  push32((uint32_t)(EDX));
  /* 12dd321b call 0x12dcbce0 */
  push32(0x12dd3220u); f_12dcbce0();
  /* 12dd3220 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3223 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd3226 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd322a jne 0x12dd3231 */
  if (!C.zf) goto L_12dd3231;
  /* 12dd322c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd322f jmp 0x12dd3257 */
  goto L_12dd3257;
L_12dd3231:;
  /* 12dd3231 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3235 jne 0x12dd3241 */
  if (!C.zf) goto L_12dd3241;
  /* 12dd3237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd323a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd323f jmp 0x12dd3257 */
  goto L_12dd3257;
L_12dd3241:;
  /* 12dd3241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3244 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3249 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12dd324c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3252 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12dd3255 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12dd3257:;
  /* 12dd3257 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3259 pop ebp */
  EBP = (pop32());
  /* 12dd325a ret  */
  ESPCHK(0x12dd3130u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12dd3260 (52 bytes, 19 insns) */
void f_12dd3260(void) {
  FTRACE(0x12dd3260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3260 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dd3264 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dd3268 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd326a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dd326e jne 0x12dd3279 */
  if (!C.zf) goto L_12dd3279;
  /* 12dd3270 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dd3274 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dd3276 ret 0x10 */
  ESPCHK(0x12dd3260u, _esp0);
  ESP += 20; return;
L_12dd3279:;
  /* 12dd3279 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd327a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dd327c mov ebx, eax */
  EBX = (EAX);
  /* 12dd327e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dd3282 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dd3286 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3288 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dd328c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dd328e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3290 pop ebx */
  EBX = (pop32());
  /* 12dd3291 ret 0x10 */
  ESPCHK(0x12dd3260u, _esp0);
  ESP += 20; return;
}

/* FUN_100132a0 @ 0x12dd32a0 (46 bytes, 18 insns) */
void f_12dd32a0(void) {
  FTRACE(0x12dd32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd32a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd32a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd32a4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd32a6 call 0x12dc72f0 */
  push32(0x12dd32abu); f_12dc72f0();
  /* 12dd32ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd32ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd32b1 push eax */
  push32((uint32_t)(EAX));
  /* 12dd32b2 call 0x12dd32d0 */
  push32(0x12dd32b7u); f_12dd32d0();
  /* 12dd32b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd32ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd32bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12dd32bf call 0x12dc7390 */
  push32(0x12dd32c4u); f_12dc7390();
  /* 12dd32c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd32c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd32ca mov esp, ebp */
  ESP = (EBP);
  /* 12dd32cc pop ebp */
  EBP = (pop32());
  /* 12dd32cd ret  */
  ESPCHK(0x12dd32a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12dd32d0 (198 bytes, 69 insns) */
void f_12dd32d0(void) {
  FTRACE(0x12dd32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd32d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd32d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd32d6 mov eax, dword ptr [0x12ddf550] */
  EAX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd32db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd32de cmp dword ptr [0x12de1040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd32e5 jne 0x12dd32ee */
  if (!C.zf) goto L_12dd32ee;
  /* 12dd32e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd32e9 jmp 0x12dd3392 */
  goto L_12dd3392;
L_12dd32ee:;
  /* 12dd32ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd32f2 jne 0x12dd3316 */
  if (!C.zf) goto L_12dd3316;
  /* 12dd32f4 cmp dword ptr [0x12ddf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd32fb je 0x12dd3316 */
  if (C.zf) goto L_12dd3316;
  /* 12dd32fd call 0x12dd33f0 */
  push32(0x12dd3302u); f_12dd33f0();
  /* 12dd3302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3304 je 0x12dd330d */
  if (C.zf) goto L_12dd330d;
  /* 12dd3306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3308 jmp 0x12dd3392 */
  goto L_12dd3392;
L_12dd330d:;
  /* 12dd330d mov ecx, dword ptr [0x12ddf550] */
  ECX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd3313 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dd3316:;
  /* 12dd3316 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd331a je 0x12dd3390 */
  if (C.zf) goto L_12dd3390;
  /* 12dd331c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3320 je 0x12dd3390 */
  if (C.zf) goto L_12dd3390;
  /* 12dd3322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3325 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3326 call 0x12dc6720 */
  push32(0x12dd332bu); f_12dc6720();
  /* 12dd332b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd332e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dd3331:;
  /* 12dd3331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3334 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3337 je 0x12dd3390 */
  if (C.zf) goto L_12dd3390;
  /* 12dd3339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd333c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd333e push edx */
  push32((uint32_t)(EDX));
  /* 12dd333f call 0x12dc6720 */
  push32(0x12dd3344u); f_12dc6720();
  /* 12dd3344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3347 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd334a jbe 0x12dd3385 */
  if ((C.cf||C.zf)) goto L_12dd3385;
  /* 12dd334c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd334f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd3351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3354 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12dd3358 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd335b jne 0x12dd3385 */
  if (!C.zf) goto L_12dd3385;
  /* 12dd335d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3360 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3364 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3368 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd336a push ecx */
  push32((uint32_t)(ECX));
  /* 12dd336b call 0x12dd33a0 */
  push32(0x12dd3370u); f_12dd33a0();
  /* 12dd3370 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3373 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3375 jne 0x12dd3385 */
  if (!C.zf) goto L_12dd3385;
  /* 12dd3377 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd337a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd337c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd337f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12dd3383 jmp 0x12dd3392 */
  goto L_12dd3392;
L_12dd3385:;
  /* 12dd3385 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3388 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd338b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd338e jmp 0x12dd3331 */
  goto L_12dd3331;
L_12dd3390:;
  /* 12dd3390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd3392:;
  /* 12dd3392 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3394 pop ebp */
  EBP = (pop32());
  /* 12dd3395 ret  */
  ESPCHK(0x12dd32d0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12dd33a0 (79 bytes, 32 insns) */
void f_12dd33a0(void) {
  FTRACE(0x12dd33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd33a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd33a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd33a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd33a8 jne 0x12dd33ae */
  if (!C.zf) goto L_12dd33ae;
  /* 12dd33aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd33ac jmp 0x12dd33eb */
  goto L_12dd33eb;
L_12dd33ae:;
  /* 12dd33ae mov eax, dword ptr [0x12de0c04] */
  EAX = (r32((uint32_t)(0x12de0c04)));
  /* 12dd33b3 push eax */
  push32((uint32_t)(EAX));
  /* 12dd33b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd33b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd33b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd33bb push edx */
  push32((uint32_t)(EDX));
  /* 12dd33bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd33bf push eax */
  push32((uint32_t)(EAX));
  /* 12dd33c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd33c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd33c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd33c6 mov edx, dword ptr [0x12de0ea4] */
  EDX = (r32((uint32_t)(0x12de0ea4)));
  /* 12dd33cc push edx */
  push32((uint32_t)(EDX));
  /* 12dd33cd call 0x12dd34a0 */
  push32(0x12dd33d2u); f_12dd34a0();
  /* 12dd33d2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd33d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd33d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd33dc jne 0x12dd33e5 */
  if (!C.zf) goto L_12dd33e5;
  /* 12dd33de mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12dd33e3 jmp 0x12dd33eb */
  goto L_12dd33eb;
L_12dd33e5:;
  /* 12dd33e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd33e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12dd33eb:;
  /* 12dd33eb mov esp, ebp */
  ESP = (EBP);
  /* 12dd33ed pop ebp */
  EBP = (pop32());
  /* 12dd33ee ret  */
  ESPCHK(0x12dd33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x12dd33f0 (174 bytes, 66 insns) */
void f_12dd33f0(void) {
  FTRACE(0x12dd33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd33f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd33f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd33f6 mov eax, dword ptr [0x12ddf558] */
  EAX = (r32((uint32_t)(0x12ddf558)));
  /* 12dd33fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dd33fe:;
  /* 12dd33fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3401 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3404 je 0x12dd3498 */
  if (C.zf) goto L_12dd3498;
  /* 12dd340a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd340c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd340e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3412 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd3414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3417 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd3419 push eax */
  push32((uint32_t)(EAX));
  /* 12dd341a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd341c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd341e call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd3424u);
  /* 12dd3424 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd3427 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd342b jne 0x12dd3432 */
  if (!C.zf) goto L_12dd3432;
  /* 12dd342d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3430 jmp 0x12dd349a */
  goto L_12dd349a;
L_12dd3432:;
  /* 12dd3432 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12dd3434 push 0x12ddba94 */
  push32((uint32_t)(0x12ddba94u));
  /* 12dd3439 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd343b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd343e push ecx */
  push32((uint32_t)(ECX));
  /* 12dd343f call 0x12dc38f0 */
  push32(0x12dd3444u); f_12dc38f0();
  /* 12dd3444 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3447 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd344a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd344e jne 0x12dd3455 */
  if (!C.zf) goto L_12dd3455;
  /* 12dd3450 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3453 jmp 0x12dd349a */
  goto L_12dd349a;
L_12dd3455:;
  /* 12dd3455 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3457 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3459 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd345c push edx */
  push32((uint32_t)(EDX));
  /* 12dd345d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3460 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3461 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd3463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3466 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd3468 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3469 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd346b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd346d call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dd3473u);
  /* 12dd3473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3475 jne 0x12dd347c */
  if (!C.zf) goto L_12dd347c;
  /* 12dd3477 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd347a jmp 0x12dd349a */
  goto L_12dd349a;
L_12dd347c:;
  /* 12dd347c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd347e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3481 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3482 call 0x12dd38f0 */
  push32(0x12dd3487u); f_12dd38f0();
  /* 12dd3487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd348a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd348d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3490 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd3493 jmp 0x12dd33fe */
  goto L_12dd33fe;
L_12dd3498:;
  /* 12dd3498 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd349a:;
  /* 12dd349a mov esp, ebp */
  ESP = (EBP);
  /* 12dd349c pop ebp */
  EBP = (pop32());
  /* 12dd349d ret  */
  ESPCHK(0x12dd33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x12dd34a0 (970 bytes, 340 insns) */
void f_12dd34a0(void) {
  FTRACE(0x12dd34a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd34a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd34a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd34a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dd34a5 push 0x12ddbae8 */
  push32((uint32_t)(0x12ddbae8u));
  /* 12dd34aa push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dd34af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dd34b5 push eax */
  push32((uint32_t)(EAX));
  /* 12dd34b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dd34bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd34c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd34c1 push esi */
  push32((uint32_t)(ESI));
  /* 12dd34c2 push edi */
  push32((uint32_t)(EDI));
  /* 12dd34c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd34c6 cmp dword ptr [0x12ddf894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd34cd jne 0x12dd3526 */
  if (!C.zf) goto L_12dd3526;
  /* 12dd34cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd34d1 push 0x12ddb140 */
  push32((uint32_t)(0x12ddb140u));
  /* 12dd34d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd34d8 push 0x12ddb140 */
  push32((uint32_t)(0x12ddb140u));
  /* 12dd34dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd34df push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd34e1 call dword ptr [0x12de22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22a8))), 0x12dd34e7u);
  /* 12dd34e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd34e9 je 0x12dd34f7 */
  if (C.zf) goto L_12dd34f7;
  /* 12dd34eb mov dword ptr [0x12ddf894], 1 */
  w32((uint32_t)(0x12ddf894), (0x1u));
  /* 12dd34f5 jmp 0x12dd3526 */
  goto L_12dd3526;
L_12dd34f7:;
  /* 12dd34f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd34f9 push 0x12ddb13c */
  push32((uint32_t)(0x12ddb13cu));
  /* 12dd34fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd3500 push 0x12ddb13c */
  push32((uint32_t)(0x12ddb13cu));
  /* 12dd3505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3507 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3509 call dword ptr [0x12de22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22b4))), 0x12dd350fu);
  /* 12dd350f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3511 je 0x12dd351f */
  if (C.zf) goto L_12dd351f;
  /* 12dd3513 mov dword ptr [0x12ddf894], 2 */
  w32((uint32_t)(0x12ddf894), (0x2u));
  /* 12dd351d jmp 0x12dd3526 */
  goto L_12dd3526;
L_12dd351f:;
  /* 12dd351f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3521 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3526:;
  /* 12dd3526 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd352a jle 0x12dd353f */
  if ((C.zf||C.sf!=C.of)) goto L_12dd353f;
  /* 12dd352c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd352f push eax */
  push32((uint32_t)(EAX));
  /* 12dd3530 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd3533 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3534 call 0x12dd38a0 */
  push32(0x12dd3539u); f_12dd38a0();
  /* 12dd3539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd353c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12dd353f:;
  /* 12dd353f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3543 jle 0x12dd3558 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd3558;
  /* 12dd3545 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd3548 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3549 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd354c push eax */
  push32((uint32_t)(EAX));
  /* 12dd354d call 0x12dd38a0 */
  push32(0x12dd3552u); f_12dd38a0();
  /* 12dd3552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3555 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12dd3558:;
  /* 12dd3558 cmp dword ptr [0x12ddf894], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf894))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd355f jne 0x12dd3584 */
  if (!C.zf) goto L_12dd3584;
  /* 12dd3561 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd3564 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3565 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd3568 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3569 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd356c push eax */
  push32((uint32_t)(EAX));
  /* 12dd356d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd3570 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3574 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3578 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3579 call dword ptr [0x12de22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22b4))), 0x12dd357fu);
  /* 12dd357f jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3584:;
  /* 12dd3584 cmp dword ptr [0x12ddf894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd358b jne 0x12dd3882 */
  if (!C.zf) goto L_12dd3882;
  /* 12dd3591 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3595 jne 0x12dd35a0 */
  if (!C.zf) goto L_12dd35a0;
  /* 12dd3597 mov ecx, dword ptr [0x12ddf740] */
  ECX = (r32((uint32_t)(0x12ddf740)));
  /* 12dd359d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12dd35a0:;
  /* 12dd35a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35a4 je 0x12dd35b0 */
  if (C.zf) goto L_12dd35b0;
  /* 12dd35a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35aa jne 0x12dd372c */
  if (!C.zf) goto L_12dd372c;
L_12dd35b0:;
  /* 12dd35b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd35b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35b6 jne 0x12dd35c2 */
  if (!C.zf) goto L_12dd35c2;
  /* 12dd35b8 mov eax, 2 */
  EAX = (0x2u);
  /* 12dd35bd jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd35c2:;
  /* 12dd35c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35c6 jle 0x12dd35d2 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd35d2;
  /* 12dd35c8 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd35cd jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd35d2:;
  /* 12dd35d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35d6 jle 0x12dd35e2 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd35e2;
  /* 12dd35d8 mov eax, 3 */
  EAX = (0x3u);
  /* 12dd35dd jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd35e2:;
  /* 12dd35e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12dd35e5 push eax */
  push32((uint32_t)(EAX));
  /* 12dd35e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dd35e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd35ea call dword ptr [0x12de2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2300))), 0x12dd35f0u);
  /* 12dd35f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd35f2 jne 0x12dd35fb */
  if (!C.zf) goto L_12dd35fb;
  /* 12dd35f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd35f6 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd35fb:;
  /* 12dd35fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd35ff jne 0x12dd3607 */
  if (!C.zf) goto L_12dd3607;
  /* 12dd3601 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3605 je 0x12dd3634 */
  if (C.zf) goto L_12dd3634;
L_12dd3607:;
  /* 12dd3607 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd360b jne 0x12dd3613 */
  if (!C.zf) goto L_12dd3613;
  /* 12dd360d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3611 je 0x12dd3634 */
  if (C.zf) goto L_12dd3634;
L_12dd3613:;
  /* 12dd3613 push 0x12ddbaa8 */
  push32((uint32_t)(0x12ddbaa8u));
  /* 12dd3618 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd361a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12dd361f push 0x12ddbaa0 */
  push32((uint32_t)(0x12ddbaa0u));
  /* 12dd3624 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3626 call 0x12dc29b0 */
  push32(0x12dd362bu); f_12dc29b0();
  /* 12dd362b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd362e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3631 jne 0x12dd3634 */
  if (!C.zf) goto L_12dd3634;
  /* 12dd3633 int3  */
  x86_unimpl("int3 @ 0x12dd3633");
L_12dd3634:;
  /* 12dd3634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3636 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd3638 jne 0x12dd35fb */
  if (!C.zf) goto L_12dd35fb;
  /* 12dd363a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd363e jle 0x12dd36b3 */
  if ((C.zf||C.sf!=C.of)) goto L_12dd36b3;
  /* 12dd3640 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3644 jae 0x12dd3650 */
  if (!C.cf) goto L_12dd3650;
  /* 12dd3646 mov eax, 3 */
  EAX = (0x3u);
  /* 12dd364b jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3650:;
  /* 12dd3650 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12dd3653 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12dd3656 jmp 0x12dd3661 */
  goto L_12dd3661;
L_12dd3658:;
  /* 12dd3658 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd365b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd365e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12dd3661:;
  /* 12dd3661 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd3664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3666 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd3668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd366a je 0x12dd36a9 */
  if (C.zf) goto L_12dd36a9;
  /* 12dd366c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd366f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3671 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dd3674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd3676 je 0x12dd36a9 */
  if (C.zf) goto L_12dd36a9;
  /* 12dd3678 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd367b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd367d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd367f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd3682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3684 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd3686 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3688 jl 0x12dd36a7 */
  if ((C.sf!=C.of)) goto L_12dd36a7;
  /* 12dd368a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd368d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd368f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd3691 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd3694 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3696 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dd3699 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd369b jg 0x12dd36a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd36a7;
  /* 12dd369d mov eax, 2 */
  EAX = (0x2u);
  /* 12dd36a2 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd36a7:;
  /* 12dd36a7 jmp 0x12dd3658 */
  goto L_12dd3658;
L_12dd36a9:;
  /* 12dd36a9 mov eax, 3 */
  EAX = (0x3u);
  /* 12dd36ae jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd36b3:;
  /* 12dd36b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd36b7 jle 0x12dd372c */
  if ((C.zf||C.sf!=C.of)) goto L_12dd372c;
  /* 12dd36b9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd36bd jae 0x12dd36c9 */
  if (!C.cf) goto L_12dd36c9;
  /* 12dd36bf mov eax, 1 */
  EAX = (0x1u);
  /* 12dd36c4 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd36c9:;
  /* 12dd36c9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12dd36cc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12dd36cf jmp 0x12dd36da */
  goto L_12dd36da;
L_12dd36d1:;
  /* 12dd36d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd36d4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd36d7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12dd36da:;
  /* 12dd36da mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd36dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd36df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd36e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd36e3 je 0x12dd3722 */
  if (C.zf) goto L_12dd3722;
  /* 12dd36e5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd36e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd36ea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dd36ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd36ef je 0x12dd3722 */
  if (C.zf) goto L_12dd3722;
  /* 12dd36f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd36f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd36f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dd36f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd36fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd36fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dd36ff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3701 jl 0x12dd3720 */
  if ((C.sf!=C.of)) goto L_12dd3720;
  /* 12dd3703 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd3706 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3708 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd370a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12dd370d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd370f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dd3712 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3714 jg 0x12dd3720 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dd3720;
  /* 12dd3716 mov eax, 2 */
  EAX = (0x2u);
  /* 12dd371b jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3720:;
  /* 12dd3720 jmp 0x12dd36d1 */
  goto L_12dd36d1;
L_12dd3722:;
  /* 12dd3722 mov eax, 1 */
  EAX = (0x1u);
  /* 12dd3727 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd372c:;
  /* 12dd372c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd372e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd3730 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd3733 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3734 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd3737 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3738 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dd373a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dd373d push eax */
  push32((uint32_t)(EAX));
  /* 12dd373e call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd3744u);
  /* 12dd3744 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dd3747 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd374b jne 0x12dd3754 */
  if (!C.zf) goto L_12dd3754;
  /* 12dd374d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd374f jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3754:;
  /* 12dd3754 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dd375b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd375e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dd3760 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3763 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd3765 call 0x12dc6a90 */
  push32(0x12dd376au); f_12dc6a90();
  /* 12dd376a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12dd376d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd3770 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12dd3773 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dd3776 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd377d jmp 0x12dd3796 */
  goto L_12dd3796;
  /* 12dd377f mov eax, 1 */
  EAX = (0x1u);
  /* 12dd3784 ret  */
  ESPCHK(0x12dd34a0u, _esp0);
  ESP += 4; return;
  /* 12dd3785 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd3788 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dd378f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd3796:;
  /* 12dd3796 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd379a jne 0x12dd37a3 */
  if (!C.zf) goto L_12dd37a3;
  /* 12dd379c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd379e jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd37a3:;
  /* 12dd37a3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd37a6 push edx */
  push32((uint32_t)(EDX));
  /* 12dd37a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd37aa push eax */
  push32((uint32_t)(EAX));
  /* 12dd37ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dd37ae push ecx */
  push32((uint32_t)(ECX));
  /* 12dd37af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dd37b2 push edx */
  push32((uint32_t)(EDX));
  /* 12dd37b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd37b5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dd37b8 push eax */
  push32((uint32_t)(EAX));
  /* 12dd37b9 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd37bfu);
  /* 12dd37bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd37c1 jne 0x12dd37ca */
  if (!C.zf) goto L_12dd37ca;
  /* 12dd37c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd37c5 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd37ca:;
  /* 12dd37ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd37cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12dd37ce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd37d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd37d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd37d5 push edx */
  push32((uint32_t)(EDX));
  /* 12dd37d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dd37d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dd37db push eax */
  push32((uint32_t)(EAX));
  /* 12dd37dc call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd37e2u);
  /* 12dd37e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dd37e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd37e9 jne 0x12dd37f2 */
  if (!C.zf) goto L_12dd37f2;
  /* 12dd37eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd37ed jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd37f2:;
  /* 12dd37f2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dd37f9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd37fc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dd37fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3801 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dd3803 call 0x12dc6a90 */
  push32(0x12dd3808u); f_12dc6a90();
  /* 12dd3808 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12dd380b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dd380e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12dd3811 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12dd3814 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dd381b jmp 0x12dd3834 */
  goto L_12dd3834;
  /* 12dd381d mov eax, 1 */
  EAX = (0x1u);
  /* 12dd3822 ret  */
  ESPCHK(0x12dd34a0u, _esp0);
  ESP += 4; return;
  /* 12dd3823 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd3826 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12dd382d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dd3834:;
  /* 12dd3834 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3838 jne 0x12dd383e */
  if (!C.zf) goto L_12dd383e;
  /* 12dd383a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd383c jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd383e:;
  /* 12dd383e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd3841 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3842 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd3845 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3846 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dd3849 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd384a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dd384d push edx */
  push32((uint32_t)(EDX));
  /* 12dd384e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd3850 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dd3853 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3854 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dd385au);
  /* 12dd385a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd385c jne 0x12dd3862 */
  if (!C.zf) goto L_12dd3862;
  /* 12dd385e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3860 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3862:;
  /* 12dd3862 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dd3865 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3866 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dd3869 push edx */
  push32((uint32_t)(EDX));
  /* 12dd386a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dd386d push eax */
  push32((uint32_t)(EAX));
  /* 12dd386e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dd3871 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3875 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3879 push eax */
  push32((uint32_t)(EAX));
  /* 12dd387a call dword ptr [0x12de22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22a8))), 0x12dd3880u);
  /* 12dd3880 jmp 0x12dd3884 */
  goto L_12dd3884;
L_12dd3882:;
  /* 12dd3882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd3884:;
  /* 12dd3884 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12dd3887 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd388a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dd3891 pop edi */
  EDI = (pop32());
  /* 12dd3892 pop esi */
  ESI = (pop32());
  /* 12dd3893 pop ebx */
  EBX = (pop32());
  /* 12dd3894 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3896 pop ebp */
  EBP = (pop32());
  /* 12dd3897 ret  */
  ESPCHK(0x12dd34a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138a0 @ 0x12dd38a0 (80 bytes, 32 insns) */
void f_12dd38a0(void) {
  FTRACE(0x12dd38a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd38a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd38a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd38a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd38a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd38a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd38ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd38af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dd38b2:;
  /* 12dd38b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd38b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd38b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd38bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd38be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd38c0 je 0x12dd38d7 */
  if (C.zf) goto L_12dd38d7;
  /* 12dd38c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd38c5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd38c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd38ca je 0x12dd38d7 */
  if (C.zf) goto L_12dd38d7;
  /* 12dd38cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd38cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd38d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd38d5 jmp 0x12dd38b2 */
  goto L_12dd38b2;
L_12dd38d7:;
  /* 12dd38d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd38da movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dd38dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd38df jne 0x12dd38e9 */
  if (!C.zf) goto L_12dd38e9;
  /* 12dd38e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd38e4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd38e7 jmp 0x12dd38ec */
  goto L_12dd38ec;
L_12dd38e9:;
  /* 12dd38e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12dd38ec:;
  /* 12dd38ec mov esp, ebp */
  ESP = (EBP);
  /* 12dd38ee pop ebp */
  EBP = (pop32());
  /* 12dd38ef ret  */
  ESPCHK(0x12dd38a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138f0 @ 0x12dd38f0 (736 bytes, 224 insns) */
void f_12dd38f0(void) {
  FTRACE(0x12dd38f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd38f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd38f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd38f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd38f6 push esi */
  push32((uint32_t)(ESI));
  /* 12dd38f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd38fb je 0x12dd391c */
  if (C.zf) goto L_12dd391c;
  /* 12dd38fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12dd38ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3902 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3903 call 0x12dd3d40 */
  push32(0x12dd3908u); f_12dd3d40();
  /* 12dd3908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd390b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dd390e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3912 je 0x12dd391c */
  if (C.zf) goto L_12dd391c;
  /* 12dd3914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3917 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd391a jne 0x12dd3924 */
  if (!C.zf) goto L_12dd3924;
L_12dd391c:;
  /* 12dd391c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd391f jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3924:;
  /* 12dd3924 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd3927 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dd392b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd392d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd392f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12dd3930 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dd3933 mov ecx, dword ptr [0x12ddf550] */
  ECX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd3939 cmp ecx, dword ptr [0x12ddf554] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddf554))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd393f jne 0x12dd3955 */
  if (!C.zf) goto L_12dd3955;
  /* 12dd3941 mov edx, dword ptr [0x12ddf550] */
  EDX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd3947 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3948 call 0x12dd3c50 */
  push32(0x12dd394du); f_12dd3c50();
  /* 12dd394d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3950 mov dword ptr [0x12ddf550], eax */
  w32((uint32_t)(0x12ddf550), (EAX));
L_12dd3955:;
  /* 12dd3955 cmp dword ptr [0x12ddf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd395c jne 0x12dd3a15 */
  if (!C.zf) goto L_12dd3a15;
  /* 12dd3962 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3966 je 0x12dd3987 */
  if (C.zf) goto L_12dd3987;
  /* 12dd3968 cmp dword ptr [0x12ddf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd396f je 0x12dd3987 */
  if (C.zf) goto L_12dd3987;
  /* 12dd3971 call 0x12dd33f0 */
  push32(0x12dd3976u); f_12dd33f0();
  /* 12dd3976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3978 je 0x12dd3982 */
  if (C.zf) goto L_12dd3982;
  /* 12dd397a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd397d jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3982:;
  /* 12dd3982 jmp 0x12dd3a15 */
  goto L_12dd3a15;
L_12dd3987:;
  /* 12dd3987 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd398b je 0x12dd3994 */
  if (C.zf) goto L_12dd3994;
  /* 12dd398d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd398f jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3994:;
  /* 12dd3994 cmp dword ptr [0x12ddf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd399b jne 0x12dd39d4 */
  if (!C.zf) goto L_12dd39d4;
  /* 12dd399d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12dd39a2 push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd39a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd39a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd39ab call 0x12dc38f0 */
  push32(0x12dd39b0u); f_12dc38f0();
  /* 12dd39b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd39b3 mov dword ptr [0x12ddf550], eax */
  w32((uint32_t)(0x12ddf550), (EAX));
  /* 12dd39b8 cmp dword ptr [0x12ddf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd39bf jne 0x12dd39c9 */
  if (!C.zf) goto L_12dd39c9;
  /* 12dd39c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd39c4 jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd39c9:;
  /* 12dd39c9 mov eax, dword ptr [0x12ddf550] */
  EAX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd39ce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12dd39d4:;
  /* 12dd39d4 cmp dword ptr [0x12ddf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd39db jne 0x12dd3a15 */
  if (!C.zf) goto L_12dd3a15;
  /* 12dd39dd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12dd39e2 push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd39e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd39e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dd39eb call 0x12dc38f0 */
  push32(0x12dd39f0u); f_12dc38f0();
  /* 12dd39f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd39f3 mov dword ptr [0x12ddf558], eax */
  w32((uint32_t)(0x12ddf558), (EAX));
  /* 12dd39f8 cmp dword ptr [0x12ddf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd39ff jne 0x12dd3a09 */
  if (!C.zf) goto L_12dd3a09;
  /* 12dd3a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3a04 jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3a09:;
  /* 12dd3a09 mov ecx, dword ptr [0x12ddf558] */
  ECX = (r32((uint32_t)(0x12ddf558)));
  /* 12dd3a0f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12dd3a15:;
  /* 12dd3a15 mov edx, dword ptr [0x12ddf550] */
  EDX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd3a1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dd3a1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd3a21 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3a24 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3a29 call 0x12dd3bd0 */
  push32(0x12dd3a2eu); f_12dd3bd0();
  /* 12dd3a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3a31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd3a34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3a38 jl 0x12dd3ad1 */
  if ((C.sf!=C.of)) goto L_12dd3ad1;
  /* 12dd3a3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3a41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3a44 je 0x12dd3ad1 */
  if (C.zf) goto L_12dd3ad1;
  /* 12dd3a4a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3a4e je 0x12dd3ac3 */
  if (C.zf) goto L_12dd3ac3;
  /* 12dd3a50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3a58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dd3a5b push edx */
  push32((uint32_t)(EDX));
  /* 12dd3a5c call 0x12dc4380 */
  push32(0x12dd3a61u); f_12dc4380();
  /* 12dd3a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3a64 jmp 0x12dd3a6f */
  goto L_12dd3a6f;
L_12dd3a66:;
  /* 12dd3a66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3a6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dd3a6f:;
  /* 12dd3a6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3a75 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3a79 je 0x12dd3a90 */
  if (C.zf) goto L_12dd3a90;
  /* 12dd3a7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3a81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3a87 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12dd3a8b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12dd3a8e jmp 0x12dd3a66 */
  goto L_12dd3a66;
L_12dd3a90:;
  /* 12dd3a90 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12dd3a95 push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd3a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3a9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3a9f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12dd3aa2 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3aa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3aa7 call 0x12dc3d80 */
  push32(0x12dd3aacu); f_12dc3d80();
  /* 12dd3aac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3aaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd3ab2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3ab6 je 0x12dd3ac1 */
  if (C.zf) goto L_12dd3ac1;
  /* 12dd3ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3abb mov dword ptr [0x12ddf550], edx */
  w32((uint32_t)(0x12ddf550), (EDX));
L_12dd3ac1:;
  /* 12dd3ac1 jmp 0x12dd3acf */
  goto L_12dd3acf;
L_12dd3ac3:;
  /* 12dd3ac3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3ac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3acc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12dd3acf:;
  /* 12dd3acf jmp 0x12dd3b44 */
  goto L_12dd3b44;
L_12dd3ad1:;
  /* 12dd3ad1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3ad5 jne 0x12dd3b3d */
  if (!C.zf) goto L_12dd3b3d;
  /* 12dd3ad7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3adb jge 0x12dd3ae5 */
  if ((C.sf==C.of)) goto L_12dd3ae5;
  /* 12dd3add mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3ae0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd3ae2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dd3ae5:;
  /* 12dd3ae5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12dd3aea push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd3aef push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3af1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3af4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12dd3afb push edx */
  push32((uint32_t)(EDX));
  /* 12dd3afc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3aff push eax */
  push32((uint32_t)(EAX));
  /* 12dd3b00 call 0x12dc3d80 */
  push32(0x12dd3b05u); f_12dc3d80();
  /* 12dd3b05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b08 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd3b0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3b0f jne 0x12dd3b19 */
  if (!C.zf) goto L_12dd3b19;
  /* 12dd3b11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3b14 jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3b19:;
  /* 12dd3b19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3b1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3b22 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12dd3b25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3b28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3b2b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12dd3b33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3b36 mov dword ptr [0x12ddf550], eax */
  w32((uint32_t)(0x12ddf550), (EAX));
  /* 12dd3b3b jmp 0x12dd3b44 */
  goto L_12dd3b44;
L_12dd3b3d:;
  /* 12dd3b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3b3f jmp 0x12dd3bcb */
  goto L_12dd3bcb;
L_12dd3b44:;
  /* 12dd3b44 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3b48 je 0x12dd3bc9 */
  if (C.zf) goto L_12dd3bc9;
  /* 12dd3b4a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12dd3b4f push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd3b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3b56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3b59 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3b5a call 0x12dc6720 */
  push32(0x12dd3b5fu); f_12dc6720();
  /* 12dd3b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b62 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b65 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3b66 call 0x12dc38f0 */
  push32(0x12dd3b6bu); f_12dc38f0();
  /* 12dd3b6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b6e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dd3b71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3b75 je 0x12dd3bc9 */
  if (C.zf) goto L_12dd3bc9;
  /* 12dd3b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3b7a push edx */
  push32((uint32_t)(EDX));
  /* 12dd3b7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3b7e push eax */
  push32((uint32_t)(EAX));
  /* 12dd3b7f call 0x12dc68a0 */
  push32(0x12dd3b84u); f_12dc68a0();
  /* 12dd3b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dd3b8a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3b8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3b90 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3b92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dd3b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3b98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dd3b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3b9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3ba1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd3ba4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dd3ba7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dd3ba9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3bab not edx */
  EDX = (~(EDX));
  /* 12dd3bad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3bb0 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3bb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3bb5 call dword ptr [0x12de22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22a4))), 0x12dd3bbbu);
  /* 12dd3bbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3bbd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3bc1 call 0x12dc4380 */
  push32(0x12dd3bc6u); f_12dc4380();
  /* 12dd3bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd3bc9:;
  /* 12dd3bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd3bcb:;
  /* 12dd3bcb pop esi */
  ESI = (pop32());
  /* 12dd3bcc mov esp, ebp */
  ESP = (EBP);
  /* 12dd3bce pop ebp */
  EBP = (pop32());
  /* 12dd3bcf ret  */
  ESPCHK(0x12dd38f0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12dd3bd0 (124 bytes, 47 insns) */
void f_12dd3bd0(void) {
  FTRACE(0x12dd3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3bd4 mov eax, dword ptr [0x12ddf550] */
  EAX = (r32((uint32_t)(0x12ddf550)));
  /* 12dd3bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd3bdc jmp 0x12dd3be7 */
  goto L_12dd3be7;
L_12dd3bde:;
  /* 12dd3bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3be1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3be4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dd3be7:;
  /* 12dd3be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3bea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3bed je 0x12dd3c3a */
  if (C.zf) goto L_12dd3c3a;
  /* 12dd3bef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3bf2 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3bf6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd3bf8 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3bfc push eax */
  push32((uint32_t)(EAX));
  /* 12dd3bfd call 0x12dd33a0 */
  push32(0x12dd3c02u); f_12dd33a0();
  /* 12dd3c02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd3c07 jne 0x12dd3c38 */
  if (!C.zf) goto L_12dd3c38;
  /* 12dd3c09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3c0c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd3c0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3c11 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12dd3c15 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3c18 je 0x12dd3c2a */
  if (C.zf) goto L_12dd3c2a;
  /* 12dd3c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3c1d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd3c1f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3c22 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12dd3c26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd3c28 jne 0x12dd3c38 */
  if (!C.zf) goto L_12dd3c38;
L_12dd3c2a:;
  /* 12dd3c2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3c2d sub eax, dword ptr [0x12ddf550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddf550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3c33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12dd3c36 jmp 0x12dd3c48 */
  goto L_12dd3c48;
L_12dd3c38:;
  /* 12dd3c38 jmp 0x12dd3bde */
  goto L_12dd3bde;
L_12dd3c3a:;
  /* 12dd3c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3c3d sub eax, dword ptr [0x12ddf550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddf550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3c43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12dd3c46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12dd3c48:;
  /* 12dd3c48 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3c4a pop ebp */
  EBP = (pop32());
  /* 12dd3c4b ret  */
  ESPCHK(0x12dd3bd0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12dd3c50 (238 bytes, 80 insns) */
void f_12dd3c50(void) {
  FTRACE(0x12dd3c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3c51 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3c53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3c56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dd3c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3c60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd3c63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3c67 jne 0x12dd3c70 */
  if (!C.zf) goto L_12dd3c70;
  /* 12dd3c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3c6b jmp 0x12dd3d3a */
  goto L_12dd3d3a;
L_12dd3c70:;
  /* 12dd3c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3c73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd3c75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3c78 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3c7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dd3c7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd3c80 je 0x12dd3c8d */
  if (C.zf) goto L_12dd3c8d;
  /* 12dd3c82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3c88 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dd3c8b jmp 0x12dd3c70 */
  goto L_12dd3c70;
L_12dd3c8d:;
  /* 12dd3c8d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12dd3c92 push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd3c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3c99 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dd3c9c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12dd3ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3ca4 call 0x12dc38f0 */
  push32(0x12dd3ca9u); f_12dc38f0();
  /* 12dd3ca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3cac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dd3caf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3cb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dd3cb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3cb9 jne 0x12dd3cc5 */
  if (!C.zf) goto L_12dd3cc5;
  /* 12dd3cbb push 9 */
  push32((uint32_t)(0x9u));
  /* 12dd3cbd call 0x12dc2860 */
  push32(0x12dd3cc2u); f_12dc2860();
  /* 12dd3cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd3cc5:;
  /* 12dd3cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3cc8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dd3ccb:;
  /* 12dd3ccb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3cce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3cd1 je 0x12dd3d2e */
  if (C.zf) goto L_12dd3d2e;
  /* 12dd3cd3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12dd3cd8 push 0x12ddbb00 */
  push32((uint32_t)(0x12ddbb00u));
  /* 12dd3cdd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dd3cdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3ce2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dd3ce4 push edx */
  push32((uint32_t)(EDX));
  /* 12dd3ce5 call 0x12dc6720 */
  push32(0x12dd3ceau); f_12dc6720();
  /* 12dd3cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3ced add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3cf0 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3cf1 call 0x12dc38f0 */
  push32(0x12dd3cf6u); f_12dc38f0();
  /* 12dd3cf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3cf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3cfc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dd3cfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3d01 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3d04 je 0x12dd3d1a */
  if (C.zf) goto L_12dd3d1a;
  /* 12dd3d06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3d09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dd3d0b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3d0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3d0f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dd3d11 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3d12 call 0x12dc68a0 */
  push32(0x12dd3d17u); f_12dc68a0();
  /* 12dd3d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd3d1a:;
  /* 12dd3d1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dd3d1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3d20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dd3d23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3d26 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3d29 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dd3d2c jmp 0x12dd3ccb */
  goto L_12dd3ccb;
L_12dd3d2e:;
  /* 12dd3d2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd3d31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dd3d37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dd3d3a:;
  /* 12dd3d3a mov esp, ebp */
  ESP = (EBP);
  /* 12dd3d3c pop ebp */
  EBP = (pop32());
  /* 12dd3d3d ret  */
  ESPCHK(0x12dd3c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d40 @ 0x12dd3d40 (237 bytes, 81 insns) */
void f_12dd3d40(void) {
  FTRACE(0x12dd3d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd3d41 mov ebp, esp */
  EBP = (ESP);
  /* 12dd3d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3d44 cmp dword ptr [0x12de0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3d4b jne 0x12dd3d62 */
  if (!C.zf) goto L_12dd3d62;
  /* 12dd3d4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dd3d50 push eax */
  push32((uint32_t)(EAX));
  /* 12dd3d51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3d54 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd3d55 call 0x12dd3e40 */
  push32(0x12dd3d5au); f_12dd3e40();
  /* 12dd3d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3d5d jmp 0x12dd3e29 */
  goto L_12dd3e29;
L_12dd3d62:;
  /* 12dd3d62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dd3d64 call 0x12dc72f0 */
  push32(0x12dd3d69u); f_12dc72f0();
  /* 12dd3d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3d6c jmp 0x12dd3d77 */
  goto L_12dd3d77;
L_12dd3d6e:;
  /* 12dd3d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3d71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3d74 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12dd3d77:;
  /* 12dd3d77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3d7a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12dd3d7e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12dd3d82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3d85 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3d8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dd3d8d je 0x12dd3e0b */
  if (C.zf) goto L_12dd3e0b;
  /* 12dd3d8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3d92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3d97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3d99 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dd3d9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3da2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd3da4 je 0x12dd3df6 */
  if (C.zf) goto L_12dd3df6;
  /* 12dd3da6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3da9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3dac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dd3daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3db2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3db4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd3db6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd3db8 jne 0x12dd3dc8 */
  if (!C.zf) goto L_12dd3dc8;
  /* 12dd3dba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dd3dbc call 0x12dc7390 */
  push32(0x12dd3dc1u); f_12dc7390();
  /* 12dd3dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3dc6 jmp 0x12dd3e29 */
  goto L_12dd3e29;
L_12dd3dc8:;
  /* 12dd3dc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3dcb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3dd1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12dd3dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3dd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3dd9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dd3ddb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3ddd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3de0 jne 0x12dd3df4 */
  if (!C.zf) goto L_12dd3df4;
  /* 12dd3de2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dd3de4 call 0x12dc7390 */
  push32(0x12dd3de9u); f_12dc7390();
  /* 12dd3de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3def sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd3df2 jmp 0x12dd3e29 */
  goto L_12dd3e29;
L_12dd3df4:;
  /* 12dd3df4 jmp 0x12dd3e06 */
  goto L_12dd3e06;
L_12dd3df6:;
  /* 12dd3df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3df9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd3dff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3e02 jne 0x12dd3e06 */
  if (!C.zf) goto L_12dd3e06;
  /* 12dd3e04 jmp 0x12dd3e0b */
  goto L_12dd3e0b;
L_12dd3e06:;
  /* 12dd3e06 jmp 0x12dd3d6e */
  goto L_12dd3d6e;
L_12dd3e0b:;
  /* 12dd3e0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dd3e0d call 0x12dc7390 */
  push32(0x12dd3e12u); f_12dc7390();
  /* 12dd3e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd3e18 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3e1d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd3e20 jne 0x12dd3e27 */
  if (!C.zf) goto L_12dd3e27;
  /* 12dd3e22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd3e25 jmp 0x12dd3e29 */
  goto L_12dd3e29;
L_12dd3e27:;
  /* 12dd3e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dd3e29:;
  /* 12dd3e29 mov esp, ebp */
  ESP = (EBP);
  /* 12dd3e2b pop ebp */
  EBP = (pop32());
  /* 12dd3e2c ret  */
  ESPCHK(0x12dd3d40u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12dd3e40 (193 bytes, 87 insns) */
void f_12dd3e40(void) {
  FTRACE(0x12dd3e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd3e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3e42 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12dd3e46 push ebx */
  push32((uint32_t)(EBX));
  /* 12dd3e47 mov ebx, eax */
  EBX = (EAX);
  /* 12dd3e49 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12dd3e4c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dd3e50 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12dd3e56 je 0x12dd3e6b */
  if (C.zf) goto L_12dd3e6b;
L_12dd3e58:;
  /* 12dd3e58 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12dd3e5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12dd3e5b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd3e5d je 0x12dd3e30 */
  if (C.zf) { jmp_ind(0x12dd3e30u); return; }
  /* 12dd3e5f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12dd3e61 je 0x12dd3eb4 */
  if (C.zf) goto L_12dd3eb4;
  /* 12dd3e63 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12dd3e69 jne 0x12dd3e58 */
  if (!C.zf) goto L_12dd3e58;
L_12dd3e6b:;
  /* 12dd3e6b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12dd3e6d push edi */
  push32((uint32_t)(EDI));
  /* 12dd3e6e mov eax, ebx */
  EAX = (EBX);
  /* 12dd3e70 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12dd3e73 push esi */
  push32((uint32_t)(ESI));
  /* 12dd3e74 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12dd3e76:;
  /* 12dd3e76 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12dd3e78 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12dd3e7d mov eax, ecx */
  EAX = (ECX);
  /* 12dd3e7f mov esi, edi */
  ESI = (EDI);
  /* 12dd3e81 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3e83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3e85 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3e87 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3e8a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3e8d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3e8f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3e91 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd3e94 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12dd3e9a jne 0x12dd3eb8 */
  if (!C.zf) goto L_12dd3eb8;
  /* 12dd3e9c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3ea1 je 0x12dd3e76 */
  if (C.zf) goto L_12dd3e76;
  /* 12dd3ea3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3ea8 jne 0x12dd3eb2 */
  if (!C.zf) goto L_12dd3eb2;
  /* 12dd3eaa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12dd3eb0 jne 0x12dd3e76 */
  if (!C.zf) goto L_12dd3e76;
L_12dd3eb2:;
  /* 12dd3eb2 pop esi */
  ESI = (pop32());
  /* 12dd3eb3 pop edi */
  EDI = (pop32());
L_12dd3eb4:;
  /* 12dd3eb4 pop ebx */
  EBX = (pop32());
  /* 12dd3eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd3eb7 ret  */
  ESPCHK(0x12dd3e40u, _esp0);
  ESP += 4; return;
L_12dd3eb8:;
  /* 12dd3eb8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12dd3ebb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd3ebd je 0x12dd3ef5 */
  if (C.zf) goto L_12dd3ef5;
  /* 12dd3ebf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dd3ec1 je 0x12dd3eb2 */
  if (C.zf) goto L_12dd3eb2;
  /* 12dd3ec3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd3ec5 je 0x12dd3eee */
  if (C.zf) goto L_12dd3eee;
  /* 12dd3ec7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12dd3ec9 je 0x12dd3eb2 */
  if (C.zf) goto L_12dd3eb2;
  /* 12dd3ecb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dd3ece cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd3ed0 je 0x12dd3ee7 */
  if (C.zf) goto L_12dd3ee7;
  /* 12dd3ed2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dd3ed4 je 0x12dd3eb2 */
  if (C.zf) goto L_12dd3eb2;
  /* 12dd3ed6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dd3ed8 je 0x12dd3ee0 */
  if (C.zf) goto L_12dd3ee0;
  /* 12dd3eda test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12dd3edc je 0x12dd3eb2 */
  if (C.zf) goto L_12dd3eb2;
  /* 12dd3ede jmp 0x12dd3e76 */
  goto L_12dd3e76;
L_12dd3ee0:;
  /* 12dd3ee0 pop esi */
  ESI = (pop32());
  /* 12dd3ee1 pop edi */
  EDI = (pop32());
  /* 12dd3ee2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12dd3ee5 pop ebx */
  EBX = (pop32());
  /* 12dd3ee6 ret  */
  ESPCHK(0x12dd3e40u, _esp0);
  ESP += 4; return;
L_12dd3ee7:;
  /* 12dd3ee7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12dd3eea pop esi */
  ESI = (pop32());
  /* 12dd3eeb pop edi */
  EDI = (pop32());
  /* 12dd3eec pop ebx */
  EBX = (pop32());
  /* 12dd3eed ret  */
  ESPCHK(0x12dd3e40u, _esp0);
  ESP += 4; return;
L_12dd3eee:;
  /* 12dd3eee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12dd3ef1 pop esi */
  ESI = (pop32());
  /* 12dd3ef2 pop edi */
  EDI = (pop32());
  /* 12dd3ef3 pop ebx */
  EBX = (pop32());
  /* 12dd3ef4 ret  */
  ESPCHK(0x12dd3e40u, _esp0);
  ESP += 4; return;
L_12dd3ef5:;
  /* 12dd3ef5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12dd3ef8 pop esi */
  ESI = (pop32());
  /* 12dd3ef9 pop edi */
  EDI = (pop32());
  /* 12dd3efa pop ebx */
  EBX = (pop32());
  /* 12dd3efb ret  */
  ESPCHK(0x12dd3e40u, _esp0);
  ESP += 4; return;
  /* 12dd3efc jmp dword ptr [0x12de2330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12de2330)))); return;
}

/* RtlUnwind @ 0x12dd404c (6 bytes, 1 insns) */
void f_12dd404c(void) {
  FTRACE(0x12dd404cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd404c jmp dword ptr [0x12de22dc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12de22dc)))); return;
}

