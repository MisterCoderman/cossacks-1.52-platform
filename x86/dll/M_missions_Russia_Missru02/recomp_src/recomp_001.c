#include "recomp.h"

/* FUN_100091c0 @ 0x109c91c0 (490 bytes, 165 insns) */
void f_109c91c0(void) {
  FTRACE(0x109c91c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c91c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c91c1 mov ebp, esp */
  EBP = (ESP);
  /* 109c91c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c91c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c91ca jne 0x109c91dd */
  if (!C.zf) goto L_109c91dd;
  /* 109c91cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c91cf push eax */
  push32((uint32_t)(EAX));
  /* 109c91d0 call 0x109c9010 */
  push32(0x109c91d5u); f_109c9010();
  /* 109c91d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c91d8 jmp 0x109c93a6 */
  goto L_109c93a6;
L_109c91dd:;
  /* 109c91dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c91e1 jne 0x109c91f6 */
  if (!C.zf) goto L_109c91f6;
  /* 109c91e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c91e6 push ecx */
  push32((uint32_t)(ECX));
  /* 109c91e7 call 0x109c93b0 */
  push32(0x109c91ecu); f_109c93b0();
  /* 109c91ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c91ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c91f1 jmp 0x109c93a6 */
  goto L_109c93a6;
L_109c91f6:;
  /* 109c91f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c91fd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9201 ja 0x109c9379 */
  if ((!C.cf&&!C.zf)) goto L_109c9379;
  /* 109c9207 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9209 call 0x109c8c40 */
  push32(0x109c920eu); f_109c8c40();
  /* 109c920e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9214 push edx */
  push32((uint32_t)(EDX));
  /* 109c9215 call 0x109c9540 */
  push32(0x109c921au); f_109c9540();
  /* 109c921a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c921d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c9220 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9224 je 0x109c933c */
  if (C.zf) goto L_109c933c;
  /* 109c922a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c922d cmp eax, dword ptr [0x109efc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109efc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9233 ja 0x109c92b0 */
  if ((!C.cf&&!C.zf)) goto L_109c92b0;
  /* 109c9235 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9238 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c923c push edx */
  push32((uint32_t)(EDX));
  /* 109c923d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9240 push eax */
  push32((uint32_t)(EAX));
  /* 109c9241 call 0x109ca410 */
  push32(0x109c9246u); f_109ca410();
  /* 109c9246 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c924b je 0x109c9255 */
  if (C.zf) goto L_109c9255;
  /* 109c924d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9250 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c9253 jmp 0x109c92b0 */
  goto L_109c92b0;
L_109c9255:;
  /* 109c9255 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9258 push edx */
  push32((uint32_t)(EDX));
  /* 109c9259 call 0x109c9bd0 */
  push32(0x109c925eu); f_109c9bd0();
  /* 109c925e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9261 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c9264 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9268 je 0x109c92b0 */
  if (C.zf) goto L_109c92b0;
  /* 109c926a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c926d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 109c9270 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c9276 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9279 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c927c jae 0x109c9286 */
  if (!C.cf) goto L_109c9286;
  /* 109c927e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9281 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c9284 jmp 0x109c928c */
  goto L_109c928c;
L_109c9286:;
  /* 109c9286 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9289 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109c928c:;
  /* 109c928c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c928f push edx */
  push32((uint32_t)(EDX));
  /* 109c9290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9293 push eax */
  push32((uint32_t)(EAX));
  /* 109c9294 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9297 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9298 call 0x109cbb20 */
  push32(0x109c929du); f_109cbb20();
  /* 109c929d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c92a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c92a3 push edx */
  push32((uint32_t)(EDX));
  /* 109c92a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c92a7 push eax */
  push32((uint32_t)(EAX));
  /* 109c92a8 call 0x109c9600 */
  push32(0x109c92adu); f_109c9600();
  /* 109c92ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c92b0:;
  /* 109c92b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c92b4 jne 0x109c9330 */
  if (!C.zf) goto L_109c9330;
  /* 109c92b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c92ba jne 0x109c92c3 */
  if (!C.zf) goto L_109c92c3;
  /* 109c92bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_109c92c3:;
  /* 109c92c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c92c6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c92c9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 109c92cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109c92cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c92d2 push edx */
  push32((uint32_t)(EDX));
  /* 109c92d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c92d5 mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c92da push eax */
  push32((uint32_t)(EAX));
  /* 109c92db call dword ptr [0x109f430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f430c))), 0x109c92e1u);
  /* 109c92e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c92e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c92e8 je 0x109c9330 */
  if (C.zf) goto L_109c9330;
  /* 109c92ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c92ed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 109c92f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c92f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c92f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c92f9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c92fc jae 0x109c9306 */
  if (!C.cf) goto L_109c9306;
  /* 109c92fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9301 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109c9304 jmp 0x109c930c */
  goto L_109c930c;
L_109c9306:;
  /* 109c9306 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9309 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_109c930c:;
  /* 109c930c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c930f push eax */
  push32((uint32_t)(EAX));
  /* 109c9310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9313 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9317 push edx */
  push32((uint32_t)(EDX));
  /* 109c9318 call 0x109cbb20 */
  push32(0x109c931du); f_109cbb20();
  /* 109c931d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9323 push eax */
  push32((uint32_t)(EAX));
  /* 109c9324 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9327 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9328 call 0x109c9600 */
  push32(0x109c932du); f_109c9600();
  /* 109c932d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c9330:;
  /* 109c9330 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9332 call 0x109c8ce0 */
  push32(0x109c9337u); f_109c8ce0();
  /* 109c9337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c933a jmp 0x109c9379 */
  goto L_109c9379;
L_109c933c:;
  /* 109c933c push 9 */
  push32((uint32_t)(0x9u));
  /* 109c933e call 0x109c8ce0 */
  push32(0x109c9343u); f_109c8ce0();
  /* 109c9343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9346 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c934a jne 0x109c9353 */
  if (!C.zf) goto L_109c9353;
  /* 109c934c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_109c9353:;
  /* 109c9353 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9356 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9359 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 109c935c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 109c935f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9362 push eax */
  push32((uint32_t)(EAX));
  /* 109c9363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9366 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9367 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9369 mov edx, dword ptr [0x109f302c] */
  EDX = (r32((uint32_t)(0x109f302c)));
  /* 109c936f push edx */
  push32((uint32_t)(EDX));
  /* 109c9370 call dword ptr [0x109f4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4314))), 0x109c9376u);
  /* 109c9376 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109c9379:;
  /* 109c9379 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c937d jne 0x109c9388 */
  if (!C.zf) goto L_109c9388;
  /* 109c937f cmp dword ptr [0x109f1868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9386 jne 0x109c938d */
  if (!C.zf) goto L_109c938d;
L_109c9388:;
  /* 109c9388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c938b jmp 0x109c93a6 */
  goto L_109c93a6;
L_109c938d:;
  /* 109c938d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9390 push eax */
  push32((uint32_t)(EAX));
  /* 109c9391 call 0x109c8f80 */
  push32(0x109c9396u); f_109c8f80();
  /* 109c9396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c939b jne 0x109c93a1 */
  if (!C.zf) goto L_109c93a1;
  /* 109c939d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c939f jmp 0x109c93a6 */
  goto L_109c93a6;
L_109c93a1:;
  /* 109c93a1 jmp 0x109c91f6 */
  goto L_109c91f6;
L_109c93a6:;
  /* 109c93a6 mov esp, ebp */
  ESP = (EBP);
  /* 109c93a8 pop ebp */
  EBP = (pop32());
  /* 109c93a9 ret  */
  ESPCHK(0x109c91c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x109c93b0 (104 bytes, 38 insns) */
void f_109c93b0(void) {
  FTRACE(0x109c93b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c93b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c93b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c93b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c93b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c93b8 jne 0x109c93bc */
  if (!C.zf) goto L_109c93bc;
  /* 109c93ba jmp 0x109c9414 */
  goto L_109c9414;
L_109c93bc:;
  /* 109c93bc push 9 */
  push32((uint32_t)(0x9u));
  /* 109c93be call 0x109c8c40 */
  push32(0x109c93c3u); f_109c8c40();
  /* 109c93c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c93c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c93c9 push eax */
  push32((uint32_t)(EAX));
  /* 109c93ca call 0x109c9540 */
  push32(0x109c93cfu); f_109c9540();
  /* 109c93cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c93d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c93d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c93d9 je 0x109c93f7 */
  if (C.zf) goto L_109c93f7;
  /* 109c93db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c93de push ecx */
  push32((uint32_t)(ECX));
  /* 109c93df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c93e2 push edx */
  push32((uint32_t)(EDX));
  /* 109c93e3 call 0x109c9600 */
  push32(0x109c93e8u); f_109c9600();
  /* 109c93e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c93eb push 9 */
  push32((uint32_t)(0x9u));
  /* 109c93ed call 0x109c8ce0 */
  push32(0x109c93f2u); f_109c8ce0();
  /* 109c93f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c93f5 jmp 0x109c9414 */
  goto L_109c9414;
L_109c93f7:;
  /* 109c93f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c93f9 call 0x109c8ce0 */
  push32(0x109c93feu); f_109c8ce0();
  /* 109c93fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9404 push eax */
  push32((uint32_t)(EAX));
  /* 109c9405 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9407 mov ecx, dword ptr [0x109f302c] */
  ECX = (r32((uint32_t)(0x109f302c)));
  /* 109c940d push ecx */
  push32((uint32_t)(ECX));
  /* 109c940e call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109c9414u);
L_109c9414:;
  /* 109c9414 mov esp, ebp */
  ESP = (EBP);
  /* 109c9416 pop ebp */
  EBP = (pop32());
  /* 109c9417 ret  */
  ESPCHK(0x109c93b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x109c9420 (116 bytes, 34 insns) */
void f_109c9420(void) {
  FTRACE(0x109c9420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9420 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9421 mov ebp, esp */
  EBP = (ESP);
  /* 109c9423 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9424 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 109c942b push 9 */
  push32((uint32_t)(0x9u));
  /* 109c942d call 0x109c8c40 */
  push32(0x109c9432u); f_109c8c40();
  /* 109c9432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9435 call 0x109cab30 */
  push32(0x109c943au); f_109cab30();
  /* 109c943a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c943c jge 0x109c9445 */
  if ((C.sf==C.of)) goto L_109c9445;
  /* 109c943e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_109c9445:;
  /* 109c9445 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9447 call 0x109c8ce0 */
  push32(0x109c944cu); f_109c8ce0();
  /* 109c944c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c944f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9451 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9453 mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c9458 push eax */
  push32((uint32_t)(EAX));
  /* 109c9459 call dword ptr [0x109f43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a0))), 0x109c945fu);
  /* 109c945f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c9461 jne 0x109c948d */
  if (!C.zf) goto L_109c948d;
  /* 109c9463 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109c9469u);
  /* 109c9469 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c946c jne 0x109c9486 */
  if (!C.zf) goto L_109c9486;
  /* 109c946e call 0x109cd120 */
  push32(0x109c9473u); f_109cd120();
  /* 109c9473 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 109c9479 call 0x109cd110 */
  push32(0x109c947eu); f_109cd110();
  /* 109c947e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 109c9484 jmp 0x109c948d */
  goto L_109c948d;
L_109c9486:;
  /* 109c9486 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_109c948d:;
  /* 109c948d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9490 mov esp, ebp */
  ESP = (EBP);
  /* 109c9492 pop ebp */
  EBP = (pop32());
  /* 109c9493 ret  */
  ESPCHK(0x109c9420u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x109c94a0 (10 bytes, 5 insns) */
void f_109c94a0(void) {
  FTRACE(0x109c94a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c94a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c94a1 mov ebp, esp */
  EBP = (ESP);
  /* 109c94a3 call 0x109c9420 */
  push32(0x109c94a8u); f_109c9420();
  /* 109c94a8 pop ebp */
  EBP = (pop32());
  /* 109c94a9 ret  */
  ESPCHK(0x109c94a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x109c94b0 (10 bytes, 5 insns) */
void f_109c94b0(void) {
  FTRACE(0x109c94b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c94b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c94b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c94b3 mov eax, dword ptr [0x109efc94] */
  EAX = (r32((uint32_t)(0x109efc94)));
  /* 109c94b8 pop ebp */
  EBP = (pop32());
  /* 109c94b9 ret  */
  ESPCHK(0x109c94b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x109c94c0 (31 bytes, 11 insns) */
void f_109c94c0(void) {
  FTRACE(0x109c94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c94c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c94c1 mov ebp, esp */
  EBP = (ESP);
  /* 109c94c3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c94ca jbe 0x109c94d0 */
  if ((C.cf||C.zf)) goto L_109c94d0;
  /* 109c94cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c94ce jmp 0x109c94dd */
  goto L_109c94dd;
L_109c94d0:;
  /* 109c94d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c94d3 mov dword ptr [0x109efc94], eax */
  w32((uint32_t)(0x109efc94), (EAX));
  /* 109c94d8 mov eax, 1 */
  EAX = (0x1u);
L_109c94dd:;
  /* 109c94dd pop ebp */
  EBP = (pop32());
  /* 109c94de ret  */
  ESPCHK(0x109c94c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094e0 @ 0x109c94e0 (89 bytes, 20 insns) */
void f_109c94e0(void) {
  FTRACE(0x109c94e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c94e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c94e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c94e3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 109c94e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c94ea mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c94ef push eax */
  push32((uint32_t)(EAX));
  /* 109c94f0 call dword ptr [0x109f430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f430c))), 0x109c94f6u);
  /* 109c94f6 mov dword ptr [0x109f3028], eax */
  w32((uint32_t)(0x109f3028), (EAX));
  /* 109c94fb cmp dword ptr [0x109f3028], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f3028))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9502 jne 0x109c9508 */
  if (!C.zf) goto L_109c9508;
  /* 109c9504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9506 jmp 0x109c9537 */
  goto L_109c9537;
L_109c9508:;
  /* 109c9508 mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109c950e mov dword ptr [0x109f301c], ecx */
  w32((uint32_t)(0x109f301c), (ECX));
  /* 109c9514 mov dword ptr [0x109f3020], 0 */
  w32((uint32_t)(0x109f3020), (0x0u));
  /* 109c951e mov dword ptr [0x109f3024], 0 */
  w32((uint32_t)(0x109f3024), (0x0u));
  /* 109c9528 mov dword ptr [0x109f3008], 0x10 */
  w32((uint32_t)(0x109f3008), (0x10u));
  /* 109c9532 mov eax, 1 */
  EAX = (0x1u);
L_109c9537:;
  /* 109c9537 pop ebp */
  EBP = (pop32());
  /* 109c9538 ret  */
  ESPCHK(0x109c94e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x109c9540 (85 bytes, 29 insns) */
void f_109c9540(void) {
  FTRACE(0x109c9540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9540 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9541 mov ebp, esp */
  EBP = (ESP);
  /* 109c9543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9546 mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109c954b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c954e mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109c9554 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9556 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c9559 mov edx, dword ptr [0x109f3028] */
  EDX = (r32((uint32_t)(0x109f3028)));
  /* 109c955f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109c9562:;
  /* 109c9562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9565 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9568 jae 0x109c958f */
  if (!C.cf) goto L_109c958f;
  /* 109c956a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c956d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9570 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9573 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c9576 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c957d jae 0x109c9584 */
  if (!C.cf) goto L_109c9584;
  /* 109c957f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9582 jmp 0x109c9591 */
  goto L_109c9591;
L_109c9584:;
  /* 109c9584 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9587 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c958a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c958d jmp 0x109c9562 */
  goto L_109c9562;
L_109c958f:;
  /* 109c958f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c9591:;
  /* 109c9591 mov esp, ebp */
  ESP = (EBP);
  /* 109c9593 pop ebp */
  EBP = (pop32());
  /* 109c9594 ret  */
  ESPCHK(0x109c9540u, _esp0);
  ESP += 4; return;
}

/* FUN_100095a0 @ 0x109c95a0 (95 bytes, 33 insns) */
void f_109c95a0(void) {
  FTRACE(0x109c95a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c95a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c95a1 mov ebp, esp */
  EBP = (ESP);
  /* 109c95a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c95a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c95a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c95ac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c95af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c95b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c95b5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 109c95b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c95bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c95c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c95c3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c95c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c95c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109c95cb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109c95cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c95cf jne 0x109c95f1 */
  if (!C.zf) goto L_109c95f1;
  /* 109c95d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c95d4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 109c95d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c95d9 jne 0x109c95f1 */
  if (!C.zf) goto L_109c95f1;
  /* 109c95db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c95de and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c95e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c95e6 je 0x109c95f1 */
  if (C.zf) goto L_109c95f1;
  /* 109c95e8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 109c95ef jmp 0x109c95f8 */
  goto L_109c95f8;
L_109c95f1:;
  /* 109c95f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_109c95f8:;
  /* 109c95f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c95fb mov esp, ebp */
  ESP = (EBP);
  /* 109c95fd pop ebp */
  EBP = (pop32());
  /* 109c95fe ret  */
  ESPCHK(0x109c95a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x109c9600 (1485 bytes, 453 insns) */
void f_109c9600(void) {
  FTRACE(0x109c9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9600 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9601 mov ebp, esp */
  EBP = (ESP);
  /* 109c9603 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9609 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c960c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 109c960f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9612 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9615 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9618 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c961b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c961e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 109c9621 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c9624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9627 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c962d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9630 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 109c9637 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c963a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c963d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9640 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c9643 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9646 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c9648 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c964b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 109c964e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9651 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9654 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 109c9657 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c965a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c965c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109c965f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9662 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 109c9665 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c9668 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c966b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109c966e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9670 jne 0x109c9798 */
  if (!C.zf) goto L_109c9798;
  /* 109c9676 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c9679 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109c967c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c967f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109c9682 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9686 jbe 0x109c968f */
  if ((C.cf||C.zf)) goto L_109c968f;
  /* 109c9688 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_109c968f:;
  /* 109c968f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9692 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9695 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9698 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c969b jne 0x109c9771 */
  if (!C.zf) goto L_109c9771;
  /* 109c96a1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c96a5 jae 0x109c9706 */
  if (!C.cf) goto L_109c9706;
  /* 109c96a7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c96ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c96af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c96b1 not eax */
  EAX = (~(EAX));
  /* 109c96b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c96b6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c96b9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 109c96bd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c96bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c96c2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c96c5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 109c96c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c96cc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c96cf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 109c96d2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c96d5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c96d8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c96db mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 109c96de mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c96e1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c96e4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109c96e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c96ea jne 0x109c9704 */
  if (!C.zf) goto L_109c9704;
  /* 109c96ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c96f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c96f4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c96f6 not eax */
  EAX = (~(EAX));
  /* 109c96f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c96fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c96fd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109c96ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9702 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109c9704:;
  /* 109c9704 jmp 0x109c9771 */
  goto L_109c9771;
L_109c9706:;
  /* 109c9706 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9709 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c970c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9711 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9713 not edx */
  EDX = (~(EDX));
  /* 109c9715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9718 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c971b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 109c9722 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9727 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c972a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 109c9731 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9734 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9737 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c973a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c973d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9740 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9743 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 109c9746 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9749 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c974c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109c9750 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9752 jne 0x109c9771 */
  if (!C.zf) goto L_109c9771;
  /* 109c9754 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9757 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c975a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c975f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9761 not edx */
  EDX = (~(EDX));
  /* 109c9763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9766 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9769 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c976b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c976e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_109c9771:;
  /* 109c9771 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9774 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c9777 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c977a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c977d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109c9780 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9783 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c9786 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9789 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c978c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109c978f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9792 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9795 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_109c9798:;
  /* 109c9798 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c979b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 109c979e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c97a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109c97a4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c97a8 jbe 0x109c97b1 */
  if ((C.cf||C.zf)) goto L_109c97b1;
  /* 109c97aa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_109c97b1:;
  /* 109c97b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c97b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109c97b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c97b9 jne 0x109c9915 */
  if (!C.zf) goto L_109c9915;
  /* 109c97bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c97c2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c97c5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 109c97c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c97cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 109c97ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c97d1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 109c97d4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c97d8 jbe 0x109c97e1 */
  if ((C.cf||C.zf)) goto L_109c97e1;
  /* 109c97da mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_109c97e1:;
  /* 109c97e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c97e4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c97e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 109c97ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c97ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109c97f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c97f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 109c97f6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c97fa jbe 0x109c9803 */
  if ((C.cf||C.zf)) goto L_109c9803;
  /* 109c97fc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_109c9803:;
  /* 109c9803 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c9806 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9809 je 0x109c990f */
  if (C.zf) goto L_109c990f;
  /* 109c980f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9812 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9815 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c9818 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c981b jne 0x109c98f1 */
  if (!C.zf) goto L_109c98f1;
  /* 109c9821 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9825 jae 0x109c9886 */
  if (!C.cf) goto L_109c9886;
  /* 109c9827 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c982c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c982f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9831 not edx */
  EDX = (~(EDX));
  /* 109c9833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9836 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9839 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 109c983d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c983f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9842 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9845 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 109c9849 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c984c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c984f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c9852 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c9855 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9858 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c985b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 109c985e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9861 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9864 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109c9868 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c986a jne 0x109c9884 */
  if (!C.zf) goto L_109c9884;
  /* 109c986c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9871 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c9874 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9876 not edx */
  EDX = (~(EDX));
  /* 109c9878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c987b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c987d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c987f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9882 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c9884:;
  /* 109c9884 jmp 0x109c98f1 */
  goto L_109c98f1;
L_109c9886:;
  /* 109c9886 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c9889 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c988c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c9891 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9893 not eax */
  EAX = (~(EAX));
  /* 109c9895 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9898 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c989b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 109c98a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c98a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c98a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c98aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 109c98b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c98b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c98b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 109c98ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c98bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c98c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c98c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 109c98c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c98c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c98cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109c98d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c98d2 jne 0x109c98f1 */
  if (!C.zf) goto L_109c98f1;
  /* 109c98d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c98d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c98da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c98df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c98e1 not eax */
  EAX = (~(EAX));
  /* 109c98e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c98e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c98e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109c98eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c98ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109c98f1:;
  /* 109c98f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c98f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109c98f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c98fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c98fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109c9900 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9903 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c9906 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9909 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109c990c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_109c990f:;
  /* 109c990f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9912 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_109c9915:;
  /* 109c9915 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9918 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109c991b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c991d jne 0x109c992b */
  if (!C.zf) goto L_109c992b;
  /* 109c991f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c9922 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9925 je 0x109c9a3b */
  if (C.zf) goto L_109c9a3b;
L_109c992b:;
  /* 109c992b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c992e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9931 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 109c9934 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109c9937 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c993a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c993d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c9940 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109c9943 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9946 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9949 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 109c994c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c994f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9952 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 109c9955 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9958 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c995b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c995e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109c9961 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9964 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9967 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c996a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c996d jne 0x109c9a3b */
  if (!C.zf) goto L_109c9a3b;
  /* 109c9973 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9977 jae 0x109c99d4 */
  if (!C.cf) goto L_109c99d4;
  /* 109c9979 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c997c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c997f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109c9983 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9986 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9989 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c998c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 109c998f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9992 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9995 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 109c9998 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c999a jne 0x109c99b2 */
  if (!C.zf) goto L_109c99b2;
  /* 109c999c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c99a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c99a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c99a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c99a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c99ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c99ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c99b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c99b2:;
  /* 109c99b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c99b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c99ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c99bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c99bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c99c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 109c99c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c99c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c99cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c99ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 109c99d2 jmp 0x109c9a3b */
  goto L_109c9a3b;
L_109c99d4:;
  /* 109c99d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c99d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c99da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109c99de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c99e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c99e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c99e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 109c99ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c99ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c99f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 109c99f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c99f5 jne 0x109c9a12 */
  if (!C.zf) goto L_109c9a12;
  /* 109c99f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c99fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c99fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9a02 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9a07 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9a0a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9a0f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_109c9a12:;
  /* 109c9a12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c9a15 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9a18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c9a1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9a1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9a22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9a25 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 109c9a2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9a2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9a31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 109c9a34 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_109c9a3b:;
  /* 109c9a3b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9a3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9a41 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109c9a43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9a46 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9a49 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9a4c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 109c9a4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9a52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c9a54 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9a57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9a5a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c9a5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9a5f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9a62 jne 0x109c9bc9 */
  if (!C.zf) goto L_109c9bc9;
  /* 109c9a68 cmp dword ptr [0x109f3020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f3020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9a6f je 0x109c9bb8 */
  if (C.zf) goto L_109c9bb8;
  /* 109c9a75 mov eax, dword ptr [0x109f3018] */
  EAX = (r32((uint32_t)(0x109f3018)));
  /* 109c9a7a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 109c9a7d mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109c9a83 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109c9a86 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9a88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109c9a8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 109c9a90 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109c9a95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9a98 push eax */
  push32((uint32_t)(EAX));
  /* 109c9a99 call dword ptr [0x109f4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4328))), 0x109c9a9fu);
  /* 109c9a9f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9aa4 mov ecx, dword ptr [0x109f3018] */
  ECX = (r32((uint32_t)(0x109f3018)));
  /* 109c9aaa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9aac mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9ab1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c9ab4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9ab6 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9abc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109c9abf mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9ac4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c9ac7 mov edx, dword ptr [0x109f3018] */
  EDX = (r32((uint32_t)(0x109f3018)));
  /* 109c9acd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 109c9ad8 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9add mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c9ae0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 109c9ae3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c9ae6 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9aeb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c9aee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 109c9af1 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9af7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c9afa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 109c9afe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9b00 jne 0x109c9b16 */
  if (!C.zf) goto L_109c9b16;
  /* 109c9b02 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c9b0b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 109c9b0d mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b13 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_109c9b16:;
  /* 109c9b16 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b1c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9b20 jne 0x109c9bb8 */
  if (!C.zf) goto L_109c9bb8;
  /* 109c9b26 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109c9b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9b2d mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b32 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109c9b35 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9b36 call dword ptr [0x109f4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4328))), 0x109c9b3cu);
  /* 109c9b3c mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b42 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c9b45 push eax */
  push32((uint32_t)(EAX));
  /* 109c9b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c9b48 mov ecx, dword ptr [0x109f302c] */
  ECX = (r32((uint32_t)(0x109f302c)));
  /* 109c9b4e push ecx */
  push32((uint32_t)(ECX));
  /* 109c9b4f call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109c9b55u);
  /* 109c9b55 mov edx, dword ptr [0x109f3024] */
  EDX = (r32((uint32_t)(0x109f3024)));
  /* 109c9b5b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c9b5e mov eax, dword ptr [0x109f3028] */
  EAX = (r32((uint32_t)(0x109f3028)));
  /* 109c9b63 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9b65 mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b6b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9b6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9b70 push eax */
  push32((uint32_t)(EAX));
  /* 109c9b71 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b77 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9b7a push edx */
  push32((uint32_t)(EDX));
  /* 109c9b7b mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109c9b80 push eax */
  push32((uint32_t)(EAX));
  /* 109c9b81 call 0x109cd130 */
  push32(0x109c9b86u); f_109cd130();
  /* 109c9b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9b89 mov ecx, dword ptr [0x109f3024] */
  ECX = (r32((uint32_t)(0x109f3024)));
  /* 109c9b8f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9b92 mov dword ptr [0x109f3024], ecx */
  w32((uint32_t)(0x109f3024), (ECX));
  /* 109c9b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9b9b cmp edx, dword ptr [0x109f3020] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f3020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9ba1 jbe 0x109c9bac */
  if ((C.cf||C.zf)) goto L_109c9bac;
  /* 109c9ba3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9ba6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9ba9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109c9bac:;
  /* 109c9bac mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109c9bb2 mov dword ptr [0x109f301c], ecx */
  w32((uint32_t)(0x109f301c), (ECX));
L_109c9bb8:;
  /* 109c9bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9bbb mov dword ptr [0x109f3020], edx */
  w32((uint32_t)(0x109f3020), (EDX));
  /* 109c9bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9bc4 mov dword ptr [0x109f3018], eax */
  w32((uint32_t)(0x109f3018), (EAX));
L_109c9bc9:;
  /* 109c9bc9 mov esp, ebp */
  ESP = (EBP);
  /* 109c9bcb pop ebp */
  EBP = (pop32());
  /* 109c9bcc ret  */
  ESPCHK(0x109c9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x109c9bd0 (1334 bytes, 427 insns) */
void f_109c9bd0(void) {
  FTRACE(0x109c9bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9bd1 mov ebp, esp */
  EBP = (ESP);
  /* 109c9bd3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9bd6 push esi */
  push32((uint32_t)(ESI));
  /* 109c9bd7 mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109c9bdc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c9bdf mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109c9be5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9be7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109c9bea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9bed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9bf0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 109c9bf3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 109c9bf6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c9bf9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 109c9bfc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9bff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109c9c02 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9c06 jge 0x109c9c1c */
  if ((C.sf==C.of)) goto L_109c9c1c;
  /* 109c9c08 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c9c0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9c0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9c10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109c9c13 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 109c9c1a jmp 0x109c9c31 */
  goto L_109c9c31;
L_109c9c1c:;
  /* 109c9c1c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109c9c23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9c26 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9c29 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c9c2c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9c2e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_109c9c31:;
  /* 109c9c31 mov ecx, dword ptr [0x109f301c] */
  ECX = (r32((uint32_t)(0x109f301c)));
  /* 109c9c37 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_109c9c3a:;
  /* 109c9c3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c3d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9c40 jae 0x109c9c66 */
  if (!C.cf) goto L_109c9c66;
  /* 109c9c42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9c48 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 109c9c4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c4d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9c50 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 109c9c53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9c55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9c57 je 0x109c9c5b */
  if (C.zf) goto L_109c9c5b;
  /* 109c9c59 jmp 0x109c9c66 */
  goto L_109c9c66;
L_109c9c5b:;
  /* 109c9c5b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9c61 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109c9c64 jmp 0x109c9c3a */
  goto L_109c9c3a;
L_109c9c66:;
  /* 109c9c66 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c69 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9c6c jne 0x109c9d4d */
  if (!C.zf) goto L_109c9d4d;
  /* 109c9c72 mov eax, dword ptr [0x109f3028] */
  EAX = (r32((uint32_t)(0x109f3028)));
  /* 109c9c77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_109c9c7a:;
  /* 109c9c7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c7d cmp ecx, dword ptr [0x109f301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9c83 jae 0x109c9ca9 */
  if (!C.cf) goto L_109c9ca9;
  /* 109c9c85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9c8b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 109c9c8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9c90 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9c93 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 109c9c96 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c9c9a je 0x109c9c9e */
  if (C.zf) goto L_109c9c9e;
  /* 109c9c9c jmp 0x109c9ca9 */
  goto L_109c9ca9;
L_109c9c9e:;
  /* 109c9c9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9ca1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9ca4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c9ca7 jmp 0x109c9c7a */
  goto L_109c9c7a;
L_109c9ca9:;
  /* 109c9ca9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cac cmp ecx, dword ptr [0x109f301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cb2 jne 0x109c9d4d */
  if (!C.zf) goto L_109c9d4d;
L_109c9cb8:;
  /* 109c9cb8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cbb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cbe jae 0x109c9cd6 */
  if (!C.cf) goto L_109c9cd6;
  /* 109c9cc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cc3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cc7 je 0x109c9ccb */
  if (C.zf) goto L_109c9ccb;
  /* 109c9cc9 jmp 0x109c9cd6 */
  goto L_109c9cd6;
L_109c9ccb:;
  /* 109c9ccb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9cd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109c9cd4 jmp 0x109c9cb8 */
  goto L_109c9cb8;
L_109c9cd6:;
  /* 109c9cd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cdc jne 0x109c9d27 */
  if (!C.zf) goto L_109c9d27;
  /* 109c9cde mov eax, dword ptr [0x109f3028] */
  EAX = (r32((uint32_t)(0x109f3028)));
  /* 109c9ce3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_109c9ce6:;
  /* 109c9ce6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9ce9 cmp ecx, dword ptr [0x109f301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cef jae 0x109c9d07 */
  if (!C.cf) goto L_109c9d07;
  /* 109c9cf1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cf4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9cf8 je 0x109c9cfc */
  if (C.zf) goto L_109c9cfc;
  /* 109c9cfa jmp 0x109c9d07 */
  goto L_109c9d07;
L_109c9cfc:;
  /* 109c9cfc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9cff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9d02 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c9d05 jmp 0x109c9ce6 */
  goto L_109c9ce6;
L_109c9d07:;
  /* 109c9d07 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d0a cmp ecx, dword ptr [0x109f301c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f301c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9d10 jne 0x109c9d27 */
  if (!C.zf) goto L_109c9d27;
  /* 109c9d12 call 0x109ca110 */
  push32(0x109c9d17u); f_109ca110();
  /* 109c9d17 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c9d1a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9d1e jne 0x109c9d27 */
  if (!C.zf) goto L_109c9d27;
  /* 109c9d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9d22 jmp 0x109ca101 */
  goto L_109ca101;
L_109c9d27:;
  /* 109c9d27 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d2a push edx */
  push32((uint32_t)(EDX));
  /* 109c9d2b call 0x109ca220 */
  push32(0x109c9d30u); f_109ca220();
  /* 109c9d30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9d33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d36 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109c9d39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109c9d3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c9d41 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9d44 jne 0x109c9d4d */
  if (!C.zf) goto L_109c9d4d;
  /* 109c9d46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9d48 jmp 0x109ca101 */
  goto L_109ca101;
L_109c9d4d:;
  /* 109c9d4d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d50 mov dword ptr [0x109f301c], edx */
  w32((uint32_t)(0x109f301c), (EDX));
  /* 109c9d56 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9d59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c9d5c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 109c9d5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9d62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c9d64 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 109c9d67 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9d6b je 0x109c9d90 */
  if (C.zf) goto L_109c9d90;
  /* 109c9d6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9d70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9d73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9d76 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 109c9d7a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9d7d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9d80 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9d83 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 109c9d8a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 109c9d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c9d8e jne 0x109c9dc5 */
  if (!C.zf) goto L_109c9dc5;
L_109c9d90:;
  /* 109c9d90 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_109c9d97:;
  /* 109c9d97 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9d9a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9d9d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9da0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 109c9da4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9da7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9daa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9dad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 109c9db4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 109c9db6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c9db8 jne 0x109c9dc5 */
  if (!C.zf) goto L_109c9dc5;
  /* 109c9dba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9dbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9dc0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 109c9dc3 jmp 0x109c9d97 */
  goto L_109c9d97;
L_109c9dc5:;
  /* 109c9dc5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9dc8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c9dce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9dd1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109c9dd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c9ddb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109c9de2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9de5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9de8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c9deb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 109c9def mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c9df2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9df6 jne 0x109c9e12 */
  if (!C.zf) goto L_109c9e12;
  /* 109c9df8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 109c9dff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9e02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9e05 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 109c9e08 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 109c9e0f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_109c9e12:;
  /* 109c9e12 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9e16 jl 0x109c9e2b */
  if ((C.sf!=C.of)) goto L_109c9e2b;
  /* 109c9e18 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109c9e1b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109c9e1d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109c9e20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9e23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9e26 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109c9e29 jmp 0x109c9e12 */
  goto L_109c9e12;
L_109c9e2b:;
  /* 109c9e2b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9e2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9e31 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 109c9e35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109c9e38 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9e3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c9e3d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9e40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c9e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c9e46 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109c9e49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9e4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109c9e4f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9e53 jle 0x109c9e5c */
  if ((C.zf||C.sf!=C.of)) goto L_109c9e5c;
  /* 109c9e55 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_109c9e5c:;
  /* 109c9e5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c9e5f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9e62 je 0x109ca080 */
  if (C.zf) goto L_109ca080;
  /* 109c9e68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9e6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9e6e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9e71 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9e74 jne 0x109c9f4a */
  if (!C.zf) goto L_109c9f4a;
  /* 109c9e7a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9e7e jge 0x109c9edf */
  if ((C.sf==C.of)) goto L_109c9edf;
  /* 109c9e80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c9e85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9e88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9e8a not eax */
  EAX = (~(EAX));
  /* 109c9e8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9e8f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9e92 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 109c9e96 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9e98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9e9b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9e9e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 109c9ea2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9ea5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9ea8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 109c9eab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c9eae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9eb1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9eb4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 109c9eb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9eba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9ebd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109c9ec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c9ec3 jne 0x109c9edd */
  if (!C.zf) goto L_109c9edd;
  /* 109c9ec5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c9eca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9ecd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9ecf not eax */
  EAX = (~(EAX));
  /* 109c9ed1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9ed4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c9ed6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109c9ed8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9edb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109c9edd:;
  /* 109c9edd jmp 0x109c9f4a */
  goto L_109c9f4a;
L_109c9edf:;
  /* 109c9edf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9ee2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9ee5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9eea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9eec not edx */
  EDX = (~(EDX));
  /* 109c9eee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9ef1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9ef4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 109c9efb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c9efd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109c9f00 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9f03 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 109c9f0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9f0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9f10 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c9f13 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109c9f16 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9f19 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9f1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 109c9f1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9f22 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9f25 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109c9f29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9f2b jne 0x109c9f4a */
  if (!C.zf) goto L_109c9f4a;
  /* 109c9f2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c9f30 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9f33 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9f38 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109c9f3a not edx */
  EDX = (~(EDX));
  /* 109c9f3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9f3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9f42 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109c9f44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9f47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_109c9f4a:;
  /* 109c9f4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f4d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c9f50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c9f56 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109c9f59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f5c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c9f5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f62 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c9f65 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109c9f68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9f6c je 0x109ca080 */
  if (C.zf) goto L_109ca080;
  /* 109c9f72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c9f75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c9f78 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 109c9f7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c9f7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9f84 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9f87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109c9f8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9f90 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109c9f93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c9f96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f99 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109c9f9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9f9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9fa2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9fa5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109c9fa8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9fab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c9fae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c9fb1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9fb4 jne 0x109ca080 */
  if (!C.zf) goto L_109ca080;
  /* 109c9fba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9fbe jge 0x109ca01a */
  if ((C.sf==C.of)) goto L_109ca01a;
  /* 109c9fc0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9fc3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9fc6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109c9fca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9fcd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9fd0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 109c9fd3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109c9fd5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109c9fd8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9fdb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 109c9fde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c9fe0 jne 0x109c9ff8 */
  if (!C.zf) goto L_109c9ff8;
  /* 109c9fe2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109c9fe7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c9fea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109c9fec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9fef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c9ff1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109c9ff3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c9ff6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109c9ff8:;
  /* 109c9ff8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109c9ffd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca000 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca002 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca005 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca008 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 109ca00c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca00e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca011 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca014 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 109ca018 jmp 0x109ca080 */
  goto L_109ca080;
L_109ca01a:;
  /* 109ca01a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca01d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca020 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109ca024 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca027 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca02a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 109ca02d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca02f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca032 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca035 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 109ca038 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca03a jne 0x109ca057 */
  if (!C.zf) goto L_109ca057;
  /* 109ca03c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca03f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca042 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca047 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca049 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca04c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca04f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109ca051 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca054 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109ca057:;
  /* 109ca057 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca05a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca05d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca062 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca064 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca067 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca06a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 109ca071 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca073 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca076 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca079 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_109ca080:;
  /* 109ca080 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca084 je 0x109ca09a */
  if (C.zf) goto L_109ca09a;
  /* 109ca086 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ca08c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109ca08e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca091 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ca097 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_109ca09a:;
  /* 109ca09a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca09d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca0a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109ca0a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca0a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca0a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca0ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109ca0ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca0b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca0b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca0b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca0ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 109ca0bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca0c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109ca0c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca0c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109ca0c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca0ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca0cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109ca0cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca0d1 jne 0x109ca0f3 */
  if (!C.zf) goto L_109ca0f3;
  /* 109ca0d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca0d6 cmp eax, dword ptr [0x109f3020] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f3020))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca0dc jne 0x109ca0f3 */
  if (!C.zf) goto L_109ca0f3;
  /* 109ca0de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca0e1 cmp ecx, dword ptr [0x109f3018] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f3018))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca0e7 jne 0x109ca0f3 */
  if (!C.zf) goto L_109ca0f3;
  /* 109ca0e9 mov dword ptr [0x109f3020], 0 */
  w32((uint32_t)(0x109f3020), (0x0u));
L_109ca0f3:;
  /* 109ca0f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 109ca0f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca0f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109ca0fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca0fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_109ca101:;
  /* 109ca101 pop esi */
  ESI = (pop32());
  /* 109ca102 mov esp, ebp */
  ESP = (EBP);
  /* 109ca104 pop ebp */
  EBP = (pop32());
  /* 109ca105 ret  */
  ESPCHK(0x109c9bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x109ca110 (271 bytes, 78 insns) */
void f_109ca110(void) {
  FTRACE(0x109ca110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ca110 push ebp */
  push32((uint32_t)(EBP));
  /* 109ca111 mov ebp, esp */
  EBP = (ESP);
  /* 109ca113 push ecx */
  push32((uint32_t)(ECX));
  /* 109ca114 mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109ca119 cmp eax, dword ptr [0x109f3008] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f3008))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca11f jne 0x109ca16b */
  if (!C.zf) goto L_109ca16b;
  /* 109ca121 mov ecx, dword ptr [0x109f3008] */
  ECX = (r32((uint32_t)(0x109f3008)));
  /* 109ca127 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca12a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ca12d push ecx */
  push32((uint32_t)(ECX));
  /* 109ca12e mov edx, dword ptr [0x109f3028] */
  EDX = (r32((uint32_t)(0x109f3028)));
  /* 109ca134 push edx */
  push32((uint32_t)(EDX));
  /* 109ca135 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ca137 mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109ca13c push eax */
  push32((uint32_t)(EAX));
  /* 109ca13d call dword ptr [0x109f4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4314))), 0x109ca143u);
  /* 109ca143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ca146 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca14a jne 0x109ca153 */
  if (!C.zf) goto L_109ca153;
  /* 109ca14c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca14e jmp 0x109ca21b */
  goto L_109ca21b;
L_109ca153:;
  /* 109ca153 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca156 mov dword ptr [0x109f3028], ecx */
  w32((uint32_t)(0x109f3028), (ECX));
  /* 109ca15c mov edx, dword ptr [0x109f3008] */
  EDX = (r32((uint32_t)(0x109f3008)));
  /* 109ca162 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca165 mov dword ptr [0x109f3008], edx */
  w32((uint32_t)(0x109f3008), (EDX));
L_109ca16b:;
  /* 109ca16b mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109ca170 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ca173 mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109ca179 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca17b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109ca17e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 109ca183 push 8 */
  push32((uint32_t)(0x8u));
  /* 109ca185 mov edx, dword ptr [0x109f302c] */
  EDX = (r32((uint32_t)(0x109f302c)));
  /* 109ca18b push edx */
  push32((uint32_t)(EDX));
  /* 109ca18c call dword ptr [0x109f430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f430c))), 0x109ca192u);
  /* 109ca192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca195 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 109ca198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca19b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca19f jne 0x109ca1a5 */
  if (!C.zf) goto L_109ca1a5;
  /* 109ca1a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca1a3 jmp 0x109ca21b */
  goto L_109ca21b;
L_109ca1a5:;
  /* 109ca1a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109ca1a7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 109ca1ac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 109ca1b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ca1b3 call dword ptr [0x109f4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4304))), 0x109ca1b9u);
  /* 109ca1b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1bc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 109ca1bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1c2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca1c6 jne 0x109ca1e2 */
  if (!C.zf) goto L_109ca1e2;
  /* 109ca1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109ca1ce push ecx */
  push32((uint32_t)(ECX));
  /* 109ca1cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109ca1d1 mov edx, dword ptr [0x109f302c] */
  EDX = (r32((uint32_t)(0x109f302c)));
  /* 109ca1d7 push edx */
  push32((uint32_t)(EDX));
  /* 109ca1d8 call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109ca1deu);
  /* 109ca1de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca1e0 jmp 0x109ca21b */
  goto L_109ca21b;
L_109ca1e2:;
  /* 109ca1e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109ca1eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1ee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 109ca1f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca1f8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 109ca1ff mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109ca204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca207 mov dword ptr [0x109f3024], eax */
  w32((uint32_t)(0x109f3024), (EAX));
  /* 109ca20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca20f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109ca212 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 109ca218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109ca21b:;
  /* 109ca21b mov esp, ebp */
  ESP = (EBP);
  /* 109ca21d pop ebp */
  EBP = (pop32());
  /* 109ca21e ret  */
  ESPCHK(0x109ca110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a220 @ 0x109ca220 (494 bytes, 149 insns) */
void f_109ca220(void) {
  FTRACE(0x109ca220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ca220 push ebp */
  push32((uint32_t)(EBP));
  /* 109ca221 mov ebp, esp */
  EBP = (ESP);
  /* 109ca223 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca229 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109ca22c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109ca22f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca232 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109ca235 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109ca238 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_109ca23f:;
  /* 109ca23f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca243 jl 0x109ca258 */
  if ((C.sf!=C.of)) goto L_109ca258;
  /* 109ca245 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ca248 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109ca24a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109ca24d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca250 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca253 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 109ca256 jmp 0x109ca23f */
  goto L_109ca23f;
L_109ca258:;
  /* 109ca258 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca25b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ca261 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca264 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109ca26b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109ca26e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109ca275 jmp 0x109ca280 */
  goto L_109ca280;
L_109ca277:;
  /* 109ca277 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca27a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca27d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_109ca280:;
  /* 109ca280 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca284 jge 0x109ca2a6 */
  if ((C.sf==C.of)) goto L_109ca2a6;
  /* 109ca286 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca289 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ca28c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 109ca28f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109ca292 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca295 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca298 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109ca29b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca29e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca2a1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109ca2a4 jmp 0x109ca277 */
  goto L_109ca277;
L_109ca2a6:;
  /* 109ca2a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca2a9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 109ca2ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca2af mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109ca2b2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca2b4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109ca2b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109ca2b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109ca2be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109ca2c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca2c6 push edx */
  push32((uint32_t)(EDX));
  /* 109ca2c7 call dword ptr [0x109f4304] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4304))), 0x109ca2cdu);
  /* 109ca2cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ca2cf jne 0x109ca2d9 */
  if (!C.zf) goto L_109ca2d9;
  /* 109ca2d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ca2d4 jmp 0x109ca40a */
  goto L_109ca40a;
L_109ca2d9:;
  /* 109ca2d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca2dc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca2e1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109ca2e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca2e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109ca2ea jmp 0x109ca2f8 */
  goto L_109ca2f8;
L_109ca2ec:;
  /* 109ca2ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca2ef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca2f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109ca2f8:;
  /* 109ca2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca2fb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca2fe ja 0x109ca35d */
  if ((!C.cf&&!C.zf)) goto L_109ca35d;
  /* 109ca300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca303 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 109ca30a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca30d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 109ca317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca31a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca31d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109ca320 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca323 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 109ca329 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca32c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca332 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca335 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109ca338 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca33b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca341 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca344 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109ca347 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca34a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca34f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109ca352 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca355 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 109ca35b jmp 0x109ca2ec */
  goto L_109ca2ec;
L_109ca35d:;
  /* 109ca35d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ca360 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca366 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109ca369 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca36c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca36f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca372 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109ca375 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca378 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109ca37b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109ca37e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca381 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca384 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109ca387 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca38a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca38d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca390 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 109ca393 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca396 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109ca399 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109ca39c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca39f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca3a2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109ca3a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca3a8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca3ab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 109ca3b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca3b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca3b9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 109ca3c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca3c7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 109ca3cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca3ce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 109ca3d1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca3d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca3d7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 109ca3da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca3dc jne 0x109ca3ed */
  if (!C.zf) goto L_109ca3ed;
  /* 109ca3de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca3e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca3e4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109ca3e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca3ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109ca3ed:;
  /* 109ca3ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca3f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca3f5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca3f7 not edx */
  EDX = (~(EDX));
  /* 109ca3f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca3fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109ca3ff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca404 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109ca407 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_109ca40a:;
  /* 109ca40a mov esp, ebp */
  ESP = (EBP);
  /* 109ca40c pop ebp */
  EBP = (pop32());
  /* 109ca40d ret  */
  ESPCHK(0x109ca220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x109ca410 (1515 bytes, 489 insns) */
void f_109ca410(void) {
  FTRACE(0x109ca410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ca410 push ebp */
  push32((uint32_t)(EBP));
  /* 109ca411 mov ebp, esp */
  EBP = (ESP);
  /* 109ca413 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca416 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ca419 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca41c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 109ca41e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109ca421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca424 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109ca427 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 109ca42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca42d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ca430 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca433 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109ca436 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ca439 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 109ca43c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109ca43f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca442 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ca448 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca44b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109ca452 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109ca455 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ca458 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca45b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109ca45e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca461 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109ca463 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca466 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 109ca469 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca46c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca46f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 109ca472 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca475 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109ca477 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109ca47a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca47d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca480 jle 0x109ca736 */
  if ((C.zf||C.sf!=C.of)) goto L_109ca736;
  /* 109ca486 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca489 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109ca48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca48e jne 0x109ca49b */
  if (!C.zf) goto L_109ca49b;
  /* 109ca490 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca493 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca496 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca499 jle 0x109ca4a2 */
  if ((C.zf||C.sf!=C.of)) goto L_109ca4a2;
L_109ca49b:;
  /* 109ca49b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca49d jmp 0x109ca9f7 */
  goto L_109ca9f7;
L_109ca4a2:;
  /* 109ca4a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca4a5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 109ca4a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca4ab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109ca4ae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca4b2 jbe 0x109ca4bb */
  if ((C.cf||C.zf)) goto L_109ca4bb;
  /* 109ca4b4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_109ca4bb:;
  /* 109ca4bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca4be mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca4c1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca4c4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca4c7 jne 0x109ca59d */
  if (!C.zf) goto L_109ca59d;
  /* 109ca4cd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca4d1 jae 0x109ca532 */
  if (!C.cf) goto L_109ca532;
  /* 109ca4d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca4d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca4db shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca4dd not edx */
  EDX = (~(EDX));
  /* 109ca4df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca4e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca4e5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 109ca4e9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca4eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca4ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca4f1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 109ca4f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca4f8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca4fb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109ca4fe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109ca501 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca504 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca507 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 109ca50a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca50d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca510 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109ca514 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca516 jne 0x109ca530 */
  if (!C.zf) goto L_109ca530;
  /* 109ca518 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca51d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca520 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca522 not edx */
  EDX = (~(EDX));
  /* 109ca524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca527 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109ca529 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca52b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca52e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109ca530:;
  /* 109ca530 jmp 0x109ca59d */
  goto L_109ca59d;
L_109ca532:;
  /* 109ca532 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca535 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca538 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca53d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca53f not eax */
  EAX = (~(EAX));
  /* 109ca541 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca544 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca547 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 109ca54e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca550 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca553 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca556 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 109ca55d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca560 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca563 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 109ca566 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109ca569 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca56c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca56f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 109ca572 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca575 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca578 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ca57c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca57e jne 0x109ca59d */
  if (!C.zf) goto L_109ca59d;
  /* 109ca580 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca583 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca586 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca58b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca58d not eax */
  EAX = (~(EAX));
  /* 109ca58f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca592 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca595 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109ca597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca59a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109ca59d:;
  /* 109ca59d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca5a0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109ca5a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca5a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca5a9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109ca5ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca5af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109ca5b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca5b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109ca5b8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 109ca5bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca5be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca5c1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca5c4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109ca5c7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca5cb jle 0x109ca717 */
  if ((C.zf||C.sf!=C.of)) goto L_109ca717;
  /* 109ca5d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca5d4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca5d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109ca5da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca5dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109ca5e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca5e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109ca5e6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca5ea jbe 0x109ca5f3 */
  if ((C.cf||C.zf)) goto L_109ca5f3;
  /* 109ca5ec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_109ca5f3:;
  /* 109ca5f3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca5f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ca5f9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 109ca5fc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109ca5ff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca602 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca605 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca608 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109ca60b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca60e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca611 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 109ca614 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca617 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca61a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 109ca61d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca620 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca623 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca626 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109ca629 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca62c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca62f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca632 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca635 jne 0x109ca703 */
  if (!C.zf) goto L_109ca703;
  /* 109ca63b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca63f jae 0x109ca69c */
  if (!C.cf) goto L_109ca69c;
  /* 109ca641 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca644 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca647 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ca64b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca64e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca651 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109ca654 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca657 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca65a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca65d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 109ca660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca662 jne 0x109ca67a */
  if (!C.zf) goto L_109ca67a;
  /* 109ca664 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca669 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca66c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca671 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109ca673 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca678 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109ca67a:;
  /* 109ca67a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca67f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca682 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca687 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca68a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 109ca68e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca690 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca693 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca696 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 109ca69a jmp 0x109ca703 */
  goto L_109ca703;
L_109ca69c:;
  /* 109ca69c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca69f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca6a2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ca6a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca6a9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca6ac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109ca6af add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca6b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca6b5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca6b8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 109ca6bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca6bd jne 0x109ca6da */
  if (!C.zf) goto L_109ca6da;
  /* 109ca6bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca6c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca6c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca6ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca6cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca6cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca6d2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca6d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca6d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_109ca6da:;
  /* 109ca6da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca6dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca6e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca6e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca6e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca6ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca6ed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 109ca6f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca6f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca6f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca6fc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_109ca703:;
  /* 109ca703 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca706 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca709 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109ca70b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca70e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca711 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca714 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_109ca717:;
  /* 109ca717 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca71a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca71d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca720 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109ca722 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca728 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca72b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca72e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 109ca731 jmp 0x109ca9f2 */
  goto L_109ca9f2;
L_109ca736:;
  /* 109ca736 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca739 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca73c jge 0x109ca9f2 */
  if ((C.sf==C.of)) goto L_109ca9f2;
  /* 109ca742 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca748 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca74b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109ca74d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109ca750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca753 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca756 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca759 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 109ca75c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca75f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca762 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109ca765 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca768 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca76b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109ca76e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca771 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109ca774 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca777 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109ca77a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca77e jbe 0x109ca787 */
  if ((C.cf||C.zf)) goto L_109ca787;
  /* 109ca780 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_109ca787:;
  /* 109ca787 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca78a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109ca78d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca78f jne 0x109ca8d0 */
  if (!C.zf) goto L_109ca8d0;
  /* 109ca795 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ca798 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 109ca79b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca79e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109ca7a1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca7a5 jbe 0x109ca7ae */
  if ((C.cf||C.zf)) goto L_109ca7ae;
  /* 109ca7a7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_109ca7ae:;
  /* 109ca7ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca7b1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca7b4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca7b7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca7ba jne 0x109ca890 */
  if (!C.zf) goto L_109ca890;
  /* 109ca7c0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca7c4 jae 0x109ca825 */
  if (!C.cf) goto L_109ca825;
  /* 109ca7c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca7cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca7ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca7d0 not edx */
  EDX = (~(EDX));
  /* 109ca7d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca7d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca7d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 109ca7dc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca7e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca7e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 109ca7e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca7eb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca7ee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109ca7f1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109ca7f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca7f7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca7fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 109ca7fd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca800 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca803 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109ca807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca809 jne 0x109ca823 */
  if (!C.zf) goto L_109ca823;
  /* 109ca80b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca810 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca813 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca815 not edx */
  EDX = (~(EDX));
  /* 109ca817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca81a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109ca81c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca821 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109ca823:;
  /* 109ca823 jmp 0x109ca890 */
  goto L_109ca890;
L_109ca825:;
  /* 109ca825 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca828 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca82b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca830 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca832 not eax */
  EAX = (~(EAX));
  /* 109ca834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca837 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca83a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 109ca841 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109ca843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca846 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca849 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 109ca850 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca853 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca856 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 109ca859 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109ca85c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca85f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca862 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 109ca865 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca868 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca86b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ca86f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ca871 jne 0x109ca890 */
  if (!C.zf) goto L_109ca890;
  /* 109ca873 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ca876 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca879 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca87e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca880 not eax */
  EAX = (~(EAX));
  /* 109ca882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca885 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca888 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109ca88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca88d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109ca890:;
  /* 109ca890 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca893 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109ca896 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca899 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca89c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109ca89f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca8a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109ca8a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109ca8a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109ca8ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 109ca8ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca8b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca8b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109ca8b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca8ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109ca8bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca8c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109ca8c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca8c7 jbe 0x109ca8d0 */
  if ((C.cf||C.zf)) goto L_109ca8d0;
  /* 109ca8c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_109ca8d0:;
  /* 109ca8d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca8d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ca8d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 109ca8d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109ca8dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca8df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca8e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca8e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109ca8e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca8eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca8ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109ca8f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109ca8f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca8f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109ca8fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca8fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca900 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca903 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109ca906 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca909 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca90c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ca90f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca912 jne 0x109ca9de */
  if (!C.zf) goto L_109ca9de;
  /* 109ca918 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ca91c jae 0x109ca978 */
  if (!C.cf) goto L_109ca978;
  /* 109ca91e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca921 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca924 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109ca928 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca92b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca92e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 109ca931 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca933 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca936 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca939 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 109ca93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca93e jne 0x109ca956 */
  if (!C.zf) goto L_109ca956;
  /* 109ca940 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca945 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca948 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca94a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca94d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109ca94f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109ca951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca954 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109ca956:;
  /* 109ca956 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca95b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca95e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca960 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca963 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca966 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 109ca96a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca96c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca96f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca972 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 109ca976 jmp 0x109ca9de */
  goto L_109ca9de;
L_109ca978:;
  /* 109ca978 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca97b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca97e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 109ca982 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca985 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca988 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 109ca98b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109ca98d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca990 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca993 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 109ca996 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ca998 jne 0x109ca9b5 */
  if (!C.zf) goto L_109ca9b5;
  /* 109ca99a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca99d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca9a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 109ca9a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109ca9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca9aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109ca9ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109ca9af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ca9b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_109ca9b5:;
  /* 109ca9b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ca9b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ca9bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109ca9c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109ca9c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca9c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca9c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 109ca9cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109ca9d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ca9d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109ca9d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_109ca9de:;
  /* 109ca9de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca9e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca9e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109ca9e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109ca9e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ca9ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109ca9ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_109ca9f2:;
  /* 109ca9f2 mov eax, 1 */
  EAX = (0x1u);
L_109ca9f7:;
  /* 109ca9f7 mov esp, ebp */
  ESP = (EBP);
  /* 109ca9f9 pop ebp */
  EBP = (pop32());
  /* 109ca9fa ret  */
  ESPCHK(0x109ca410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa00 @ 0x109caa00 (304 bytes, 79 insns) */
void f_109caa00(void) {
  FTRACE(0x109caa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109caa00 push ebp */
  push32((uint32_t)(EBP));
  /* 109caa01 mov ebp, esp */
  EBP = (ESP);
  /* 109caa03 push ecx */
  push32((uint32_t)(ECX));
  /* 109caa04 cmp dword ptr [0x109f3020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f3020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caa0b je 0x109cab2c */
  if (C.zf) goto L_109cab2c;
  /* 109caa11 mov eax, dword ptr [0x109f3018] */
  EAX = (r32((uint32_t)(0x109f3018)));
  /* 109caa16 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 109caa19 mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109caa1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109caa22 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caa24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109caa27 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 109caa2c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109caa31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109caa34 push eax */
  push32((uint32_t)(EAX));
  /* 109caa35 call dword ptr [0x109f4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4328))), 0x109caa3bu);
  /* 109caa3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109caa40 mov ecx, dword ptr [0x109f3018] */
  ECX = (r32((uint32_t)(0x109f3018)));
  /* 109caa46 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109caa48 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109caa4d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109caa50 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 109caa52 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109caa58 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109caa5b mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109caa60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109caa63 mov edx, dword ptr [0x109f3018] */
  EDX = (r32((uint32_t)(0x109f3018)));
  /* 109caa69 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 109caa74 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109caa79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109caa7c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 109caa7f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109caa82 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109caa87 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109caa8a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 109caa8d mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109caa93 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109caa96 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 109caa9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109caa9c jne 0x109caab2 */
  if (!C.zf) goto L_109caab2;
  /* 109caa9e mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109caaa4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109caaa7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 109caaa9 mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109caaaf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_109caab2:;
  /* 109caab2 mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109caab8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caabc jne 0x109cab22 */
  if (!C.zf) goto L_109cab22;
  /* 109caabe cmp dword ptr [0x109f3024], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f3024))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caac5 jle 0x109cab22 */
  if ((C.zf||C.sf!=C.of)) goto L_109cab22;
  /* 109caac7 mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109caacc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109caacf push ecx */
  push32((uint32_t)(ECX));
  /* 109caad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109caad2 mov edx, dword ptr [0x109f302c] */
  EDX = (r32((uint32_t)(0x109f302c)));
  /* 109caad8 push edx */
  push32((uint32_t)(EDX));
  /* 109caad9 call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109caadfu);
  /* 109caadf mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109caae4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109caae7 mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109caaed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caaef mov edx, dword ptr [0x109f3020] */
  EDX = (r32((uint32_t)(0x109f3020)));
  /* 109caaf5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caaf8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109caafa push ecx */
  push32((uint32_t)(ECX));
  /* 109caafb mov eax, dword ptr [0x109f3020] */
  EAX = (r32((uint32_t)(0x109f3020)));
  /* 109cab00 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cab03 push eax */
  push32((uint32_t)(EAX));
  /* 109cab04 mov ecx, dword ptr [0x109f3020] */
  ECX = (r32((uint32_t)(0x109f3020)));
  /* 109cab0a push ecx */
  push32((uint32_t)(ECX));
  /* 109cab0b call 0x109cd130 */
  push32(0x109cab10u); f_109cd130();
  /* 109cab10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cab13 mov edx, dword ptr [0x109f3024] */
  EDX = (r32((uint32_t)(0x109f3024)));
  /* 109cab19 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cab1c mov dword ptr [0x109f3024], edx */
  w32((uint32_t)(0x109f3024), (EDX));
L_109cab22:;
  /* 109cab22 mov dword ptr [0x109f3020], 0 */
  w32((uint32_t)(0x109f3020), (0x0u));
L_109cab2c:;
  /* 109cab2c mov esp, ebp */
  ESP = (EBP);
  /* 109cab2e pop ebp */
  EBP = (pop32());
  /* 109cab2f ret  */
  ESPCHK(0x109caa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab30 @ 0x109cab30 (1565 bytes, 343 insns) */
void f_109cab30(void) {
  FTRACE(0x109cab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cab30 push ebp */
  push32((uint32_t)(EBP));
  /* 109cab31 mov ebp, esp */
  EBP = (ESP);
  /* 109cab33 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cab39 mov eax, dword ptr [0x109f3024] */
  EAX = (r32((uint32_t)(0x109f3024)));
  /* 109cab3e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cab41 push eax */
  push32((uint32_t)(EAX));
  /* 109cab42 mov ecx, dword ptr [0x109f3028] */
  ECX = (r32((uint32_t)(0x109f3028)));
  /* 109cab48 push ecx */
  push32((uint32_t)(ECX));
  /* 109cab49 call dword ptr [0x109f4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4378))), 0x109cab4fu);
  /* 109cab4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cab51 je 0x109cab5b */
  if (C.zf) goto L_109cab5b;
  /* 109cab53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cab56 jmp 0x109cb149 */
  goto L_109cb149;
L_109cab5b:;
  /* 109cab5b mov edx, dword ptr [0x109f3028] */
  EDX = (r32((uint32_t)(0x109f3028)));
  /* 109cab61 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 109cab67 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 109cab71 jmp 0x109cab82 */
  goto L_109cab82;
L_109cab73:;
  /* 109cab73 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 109cab79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cab7c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_109cab82:;
  /* 109cab82 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 109cab88 cmp ecx, dword ptr [0x109f3024] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f3024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cab8e jge 0x109cb147 */
  if ((C.sf==C.of)) goto L_109cb147;
  /* 109cab94 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cab9a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109cab9d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 109caba3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 109caba8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 109cabae push ecx */
  push32((uint32_t)(ECX));
  /* 109cabaf call dword ptr [0x109f4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4378))), 0x109cabb5u);
  /* 109cabb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cabb7 je 0x109cabc3 */
  if (C.zf) goto L_109cabc3;
  /* 109cabb9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 109cabbe jmp 0x109cb149 */
  goto L_109cb149;
L_109cabc3:;
  /* 109cabc3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cabc9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cabcc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 109cabd2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 109cabd8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cabde mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109cabe1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cabe7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cabea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cabed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 109cabf7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 109cac01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cac08 jmp 0x109cac13 */
  goto L_109cac13;
L_109cac0a:;
  /* 109cac0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cac0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cac10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109cac13:;
  /* 109cac13 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cac17 jge 0x109cb10b */
  if ((C.sf==C.of)) goto L_109cb10b;
  /* 109cac1d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 109cac27 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 109cac31 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 109cac3b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 109cac45 jmp 0x109cac56 */
  goto L_109cac56;
L_109cac47:;
  /* 109cac47 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 109cac4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cac50 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_109cac56:;
  /* 109cac56 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cac5d jge 0x109cac72 */
  if ((C.sf==C.of)) goto L_109cac72;
  /* 109cac5f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 109cac65 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 109cac70 jmp 0x109cac47 */
  goto L_109cac47;
L_109cac72:;
  /* 109cac72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cac76 jl 0x109cb0ad */
  if ((C.sf!=C.of)) goto L_109cb0ad;
  /* 109cac7c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109cac81 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 109cac87 push ecx */
  push32((uint32_t)(ECX));
  /* 109cac88 call dword ptr [0x109f4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4378))), 0x109cac8eu);
  /* 109cac8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cac90 je 0x109cac9c */
  if (C.zf) goto L_109cac9c;
  /* 109cac92 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 109cac97 jmp 0x109cb149 */
  goto L_109cb149;
L_109cac9c:;
  /* 109cac9c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 109caca2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109caca5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 109cacaf jmp 0x109cacc0 */
  goto L_109cacc0;
L_109cacb1:;
  /* 109cacb1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 109cacb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cacba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_109cacc0:;
  /* 109cacc0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cacc7 jge 0x109cae44 */
  if ((C.sf==C.of)) goto L_109cae44;
  /* 109caccd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cacd0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cacd3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 109cacd9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cacdf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cace5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 109caceb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cacf1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cacf5 jne 0x109cad02 */
  if (!C.zf) goto L_109cad02;
  /* 109cacf7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 109cacfd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cad00 je 0x109cad0c */
  if (C.zf) goto L_109cad0c;
L_109cad02:;
  /* 109cad02 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 109cad07 jmp 0x109cb149 */
  goto L_109cb149;
L_109cad0c:;
  /* 109cad0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cad12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109cad14 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 109cad1a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 109cad20 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 109cad26 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 109cad2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109cad2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cad31 je 0x109cad69 */
  if (C.zf) goto L_109cad69;
  /* 109cad33 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 109cad39 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cad3c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 109cad42 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cad4c jle 0x109cad58 */
  if ((C.zf||C.sf!=C.of)) goto L_109cad58;
  /* 109cad4e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 109cad53 jmp 0x109cb149 */
  goto L_109cb149;
L_109cad58:;
  /* 109cad58 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 109cad5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cad61 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 109cad67 jmp 0x109cadab */
  goto L_109cadab;
L_109cad69:;
  /* 109cad69 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 109cad6f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109cad72 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cad75 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 109cad7b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cad82 jle 0x109cad8e */
  if ((C.zf||C.sf!=C.of)) goto L_109cad8e;
  /* 109cad84 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_109cad8e:;
  /* 109cad8e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 109cad94 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 109cad9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cad9e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 109cada4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_109cadab:;
  /* 109cadab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cadb2 jl 0x109cadcd */
  if ((C.sf!=C.of)) goto L_109cadcd;
  /* 109cadb4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 109cadba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 109cadbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cadbf jne 0x109cadcd */
  if (!C.zf) goto L_109cadcd;
  /* 109cadc1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cadcb jle 0x109cadd7 */
  if ((C.zf||C.sf!=C.of)) goto L_109cadd7;
L_109cadcd:;
  /* 109cadcd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 109cadd2 jmp 0x109cb149 */
  goto L_109cb149;
L_109cadd7:;
  /* 109cadd7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 109caddd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cade3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 109cade6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cadec je 0x109cadf8 */
  if (C.zf) goto L_109cadf8;
  /* 109cadee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 109cadf3 jmp 0x109cb149 */
  goto L_109cb149;
L_109cadf8:;
  /* 109cadf8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cadfe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cae04 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 109cae0a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cae10 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cae16 jb 0x109cad0c */
  if (C.cf) goto L_109cad0c;
  /* 109cae1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cae22 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cae28 je 0x109cae34 */
  if (C.zf) goto L_109cae34;
  /* 109cae2a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 109cae2f jmp 0x109cb149 */
  goto L_109cb149;
L_109cae34:;
  /* 109cae34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cae37 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cae3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cae3f jmp 0x109cacb1 */
  goto L_109cacb1;
L_109cae44:;
  /* 109cae44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cae47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109cae49 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cae4f je 0x109cae5b */
  if (C.zf) goto L_109cae5b;
  /* 109cae51 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 109cae56 jmp 0x109cb149 */
  goto L_109cb149;
L_109cae5b:;
  /* 109cae5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cae5e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 109cae64 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 109cae6b jmp 0x109cae76 */
  goto L_109cae76;
L_109cae6d:;
  /* 109cae6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cae70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cae73 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_109cae76:;
  /* 109cae76 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cae7a jge 0x109cb0ad */
  if ((C.sf==C.of)) goto L_109cb0ad;
  /* 109cae80 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 109cae8a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 109cae90 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_109cae96:;
  /* 109cae96 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cae9c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109cae9f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 109caea5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109caeab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caeb1 je 0x109cafda */
  if (C.zf) goto L_109cafda;
  /* 109caeb7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109caeba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 109caec0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caec7 je 0x109cafda */
  if (C.zf) goto L_109cafda;
  /* 109caecd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109caed3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caed9 jb 0x109caeee */
  if (C.cf) goto L_109caeee;
  /* 109caedb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 109caee1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caee6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caeec jb 0x109caef8 */
  if (C.cf) goto L_109caef8;
L_109caeee:;
  /* 109caeee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 109caef3 jmp 0x109cb149 */
  goto L_109cb149;
L_109caef8:;
  /* 109caef8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109caefe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 109caf04 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 109caf0a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 109caf10 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caf13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109caf16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf19 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caf1e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_109caf24:;
  /* 109caf24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf27 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caf2d je 0x109caf4e */
  if (C.zf) goto L_109caf4e;
  /* 109caf2f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf32 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caf38 jne 0x109caf3c */
  if (!C.zf) goto L_109caf3c;
  /* 109caf3a jmp 0x109caf4e */
  goto L_109caf4e;
L_109caf3c:;
  /* 109caf3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109caf41 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 109caf44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf47 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109caf49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109caf4c jmp 0x109caf24 */
  goto L_109caf24;
L_109caf4e:;
  /* 109caf4e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109caf51 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caf57 jne 0x109caf63 */
  if (!C.zf) goto L_109caf63;
  /* 109caf59 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 109caf5e jmp 0x109cb149 */
  goto L_109cb149;
L_109caf63:;
  /* 109caf63 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109caf69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109caf6b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109caf6e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109caf71 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 109caf77 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caf7e jle 0x109caf8a */
  if ((C.zf||C.sf!=C.of)) goto L_109caf8a;
  /* 109caf80 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_109caf8a:;
  /* 109caf8a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 109caf90 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109caf93 je 0x109caf9f */
  if (C.zf) goto L_109caf9f;
  /* 109caf95 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 109caf9a jmp 0x109cb149 */
  goto L_109cb149;
L_109caf9f:;
  /* 109caf9f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109cafa5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109cafa8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cafae je 0x109cafba */
  if (C.zf) goto L_109cafba;
  /* 109cafb0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 109cafb5 jmp 0x109cb149 */
  goto L_109cb149;
L_109cafba:;
  /* 109cafba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 109cafc0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 109cafc6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 109cafcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cafcf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 109cafd5 jmp 0x109cae96 */
  goto L_109cae96;
L_109cafda:;
  /* 109cafda cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cafe1 je 0x109cb051 */
  if (C.zf) goto L_109cb051;
  /* 109cafe3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cafe7 jge 0x109cb01b */
  if ((C.sf==C.of)) goto L_109cb01b;
  /* 109cafe9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109cafee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109caff1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109caff3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 109caff9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109caffb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 109cb001 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109cb006 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cb009 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109cb00b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 109cb011 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb013 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 109cb019 jmp 0x109cb051 */
  goto L_109cb051;
L_109cb01b:;
  /* 109cb01b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cb01e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb021 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109cb026 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109cb028 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 109cb02e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb030 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 109cb036 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cb039 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb03c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109cb041 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109cb043 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 109cb049 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb04b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_109cb051:;
  /* 109cb051 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 109cb057 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109cb05a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb060 jne 0x109cb074 */
  if (!C.zf) goto L_109cb074;
  /* 109cb062 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cb065 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 109cb06b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb072 je 0x109cb07e */
  if (C.zf) goto L_109cb07e;
L_109cb074:;
  /* 109cb074 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 109cb079 jmp 0x109cb149 */
  goto L_109cb149;
L_109cb07e:;
  /* 109cb07e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 109cb084 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cb087 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb08d je 0x109cb099 */
  if (C.zf) goto L_109cb099;
  /* 109cb08f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 109cb094 jmp 0x109cb149 */
  goto L_109cb149;
L_109cb099:;
  /* 109cb099 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 109cb09f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb0a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 109cb0a8 jmp 0x109cae6d */
  goto L_109cae6d;
L_109cb0ad:;
  /* 109cb0ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb0b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 109cb0b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 109cb0bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb0c0 jne 0x109cb0da */
  if (!C.zf) goto L_109cb0da;
  /* 109cb0c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb0c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 109cb0cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 109cb0d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb0d8 je 0x109cb0e1 */
  if (C.zf) goto L_109cb0e1;
L_109cb0da:;
  /* 109cb0da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 109cb0df jmp 0x109cb149 */
  goto L_109cb149;
L_109cb0e1:;
  /* 109cb0e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 109cb0e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb0ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 109cb0f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cb0f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb0fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109cb0fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb101 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109cb103 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cb106 jmp 0x109cac0a */
  goto L_109cac0a;
L_109cb10b:;
  /* 109cb10b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cb111 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 109cb117 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb119 jne 0x109cb12c */
  if (!C.zf) goto L_109cb12c;
  /* 109cb11b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cb121 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 109cb127 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb12a je 0x109cb133 */
  if (C.zf) goto L_109cb133;
L_109cb12c:;
  /* 109cb12c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 109cb131 jmp 0x109cb149 */
  goto L_109cb149;
L_109cb133:;
  /* 109cb133 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 109cb139 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb13c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 109cb142 jmp 0x109cab73 */
  goto L_109cab73;
L_109cb147:;
  /* 109cb147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cb149:;
  /* 109cb149 mov esp, ebp */
  ESP = (EBP);
  /* 109cb14b pop ebp */
  EBP = (pop32());
  /* 109cb14c ret  */
  ESPCHK(0x109cab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b150 @ 0x109cb150 (250 bytes, 92 insns) */
void f_109cb150(void) {
  FTRACE(0x109cb150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb150 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb151 mov ebp, esp */
  EBP = (ESP);
  /* 109cb153 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb156 push ebx */
  push32((uint32_t)(EBX));
  /* 109cb157 push esi */
  push32((uint32_t)(ESI));
  /* 109cb158 push edi */
  push32((uint32_t)(EDI));
  /* 109cb159 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 109cb15c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109cb15f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 109cb162 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_109cb165:;
  /* 109cb165 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb169 jne 0x109cb189 */
  if (!C.zf) goto L_109cb189;
  /* 109cb16b push 0x109ed134 */
  push32((uint32_t)(0x109ed134u));
  /* 109cb170 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb172 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 109cb174 push 0x109ed128 */
  push32((uint32_t)(0x109ed128u));
  /* 109cb179 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cb17b call 0x109c4300 */
  push32(0x109cb180u); f_109c4300();
  /* 109cb180 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb183 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb186 jne 0x109cb189 */
  if (!C.zf) goto L_109cb189;
  /* 109cb188 int3  */
  x86_unimpl("int3 @ 0x109cb188");
L_109cb189:;
  /* 109cb189 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb18b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cb18d jne 0x109cb165 */
  if (!C.zf) goto L_109cb165;
L_109cb18f:;
  /* 109cb18f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb193 jne 0x109cb1b3 */
  if (!C.zf) goto L_109cb1b3;
  /* 109cb195 push 0x109ed118 */
  push32((uint32_t)(0x109ed118u));
  /* 109cb19a push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb19c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109cb19e push 0x109ed128 */
  push32((uint32_t)(0x109ed128u));
  /* 109cb1a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cb1a5 call 0x109c4300 */
  push32(0x109cb1aau); f_109c4300();
  /* 109cb1aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb1ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb1b0 jne 0x109cb1b3 */
  if (!C.zf) goto L_109cb1b3;
  /* 109cb1b2 int3  */
  x86_unimpl("int3 @ 0x109cb1b2");
L_109cb1b3:;
  /* 109cb1b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb1b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cb1b7 jne 0x109cb18f */
  if (!C.zf) goto L_109cb18f;
  /* 109cb1b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 109cb1c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb1c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109cb1cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb1d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109cb1d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1d7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 109cb1de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cb1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb1e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cb1e5 push edx */
  push32((uint32_t)(EDX));
  /* 109cb1e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1e9 push eax */
  push32((uint32_t)(EAX));
  /* 109cb1ea call 0x109cc1d0 */
  push32(0x109cb1efu); f_109cc1d0();
  /* 109cb1ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb1f2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109cb1f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb1f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109cb1fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb1fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb201 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109cb204 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb207 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb20b jl 0x109cb22f */
  if ((C.sf!=C.of)) goto L_109cb22f;
  /* 109cb20d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb210 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109cb212 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109cb215 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb217 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109cb21d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 109cb220 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb223 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109cb225 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb228 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb22b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109cb22d jmp 0x109cb240 */
  goto L_109cb240;
L_109cb22f:;
  /* 109cb22f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb232 push edx */
  push32((uint32_t)(EDX));
  /* 109cb233 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb235 call 0x109cbf50 */
  push32(0x109cb23au); f_109cbf50();
  /* 109cb23a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb23d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_109cb240:;
  /* 109cb240 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb243 pop edi */
  EDI = (pop32());
  /* 109cb244 pop esi */
  ESI = (pop32());
  /* 109cb245 pop ebx */
  EBX = (pop32());
  /* 109cb246 mov esp, ebp */
  ESP = (EBP);
  /* 109cb248 pop ebp */
  EBP = (pop32());
  /* 109cb249 ret  */
  ESPCHK(0x109cb150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x109cb250 (183 bytes, 58 insns) */
void f_109cb250(void) {
  FTRACE(0x109cb250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb250 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb251 mov ebp, esp */
  EBP = (ESP);
  /* 109cb253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb25c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb261 ja 0x109cb27a */
  if ((!C.cf&&!C.zf)) goto L_109cb27a;
  /* 109cb263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb266 mov edx, dword ptr [0x109efc98] */
  EDX = (r32((uint32_t)(0x109efc98)));
  /* 109cb26c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb26e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 109cb272 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 109cb275 jmp 0x109cb303 */
  goto L_109cb303;
L_109cb27a:;
  /* 109cb27a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb27d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 109cb280 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109cb286 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109cb28c mov edx, dword ptr [0x109efc98] */
  EDX = (r32((uint32_t)(0x109efc98)));
  /* 109cb292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb294 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 109cb298 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 109cb29d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cb29f je 0x109cb2c3 */
  if (C.zf) goto L_109cb2c3;
  /* 109cb2a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb2a4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 109cb2a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109cb2ad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 109cb2b0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 109cb2b3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 109cb2b6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 109cb2ba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 109cb2c1 jmp 0x109cb2d4 */
  goto L_109cb2d4;
L_109cb2c3:;
  /* 109cb2c3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 109cb2c6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 109cb2c9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 109cb2cd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_109cb2d4:;
  /* 109cb2d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cb2d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb2d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb2da lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 109cb2dd push ecx */
  push32((uint32_t)(ECX));
  /* 109cb2de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb2e1 push edx */
  push32((uint32_t)(EDX));
  /* 109cb2e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 109cb2e5 push eax */
  push32((uint32_t)(EAX));
  /* 109cb2e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cb2e8 call 0x109cd470 */
  push32(0x109cb2edu); f_109cd470();
  /* 109cb2ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb2f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cb2f2 jne 0x109cb2f8 */
  if (!C.zf) goto L_109cb2f8;
  /* 109cb2f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb2f6 jmp 0x109cb303 */
  goto L_109cb303;
L_109cb2f8:;
  /* 109cb2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb2fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cb300 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_109cb303:;
  /* 109cb303 mov esp, ebp */
  ESP = (EBP);
  /* 109cb305 pop ebp */
  EBP = (pop32());
  /* 109cb306 ret  */
  ESPCHK(0x109cb250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x109cb310 (836 bytes, 238 insns) */
void f_109cb310(void) {
  FTRACE(0x109cb310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb310 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb311 mov ebp, esp */
  EBP = (ESP);
  /* 109cb313 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb316 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb318 call 0x109c8c40 */
  push32(0x109cb31du); f_109c8c40();
  /* 109cb31d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb323 push eax */
  push32((uint32_t)(EAX));
  /* 109cb324 call 0x109cb660 */
  push32(0x109cb329u); f_109cb660();
  /* 109cb329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb32c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109cb32f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb332 cmp ecx, dword ptr [0x109f2d64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f2d64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb338 jne 0x109cb34b */
  if (!C.zf) goto L_109cb34b;
  /* 109cb33a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb33c call 0x109c8ce0 */
  push32(0x109cb341u); f_109c8ce0();
  /* 109cb341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb346 jmp 0x109cb650 */
  goto L_109cb650;
L_109cb34b:;
  /* 109cb34b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb34f jne 0x109cb36c */
  if (!C.zf) goto L_109cb36c;
  /* 109cb351 call 0x109cb740 */
  push32(0x109cb356u); f_109cb740();
  /* 109cb356 call 0x109cb7c0 */
  push32(0x109cb35bu); f_109cb7c0();
  /* 109cb35b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb35d call 0x109c8ce0 */
  push32(0x109cb362u); f_109c8ce0();
  /* 109cb362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb367 jmp 0x109cb650 */
  goto L_109cb650;
L_109cb36c:;
  /* 109cb36c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cb373 jmp 0x109cb37e */
  goto L_109cb37e;
L_109cb375:;
  /* 109cb375 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb378 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb37b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cb37e:;
  /* 109cb37e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb382 jae 0x109cb4cf */
  if (!C.cf) goto L_109cb4cf;
  /* 109cb388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb38b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cb38e mov ecx, dword ptr [eax + 0x109efeb8] */
  ECX = (r32((uint32_t)(EAX + 0x109efeb8)));
  /* 109cb394 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb397 jne 0x109cb4ca */
  if (!C.zf) goto L_109cb4ca;
  /* 109cb39d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109cb3a4 jmp 0x109cb3af */
  goto L_109cb3af;
L_109cb3a6:;
  /* 109cb3a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb3a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb3ac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_109cb3af:;
  /* 109cb3af cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb3b6 jae 0x109cb3c4 */
  if (!C.cf) goto L_109cb3c4;
  /* 109cb3b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb3bb mov byte ptr [eax + 0x109f2f00], 0 */
  w8((uint32_t)(EAX + 0x109f2f00), (0x0u));
  /* 109cb3c2 jmp 0x109cb3a6 */
  goto L_109cb3a6;
L_109cb3c4:;
  /* 109cb3c4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cb3cb jmp 0x109cb3d6 */
  goto L_109cb3d6;
L_109cb3cd:;
  /* 109cb3cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb3d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb3d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109cb3d6:;
  /* 109cb3d6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb3da jae 0x109cb457 */
  if (!C.cf) goto L_109cb457;
  /* 109cb3dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb3df imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cb3e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb3e5 lea ecx, [edx + eax*8 + 0x109efec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x109efec8));
  /* 109cb3ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109cb3ef jmp 0x109cb3fa */
  goto L_109cb3fa;
L_109cb3f1:;
  /* 109cb3f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb3f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb3f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109cb3fa:;
  /* 109cb3fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb3fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb3ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109cb401 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cb403 je 0x109cb452 */
  if (C.zf) goto L_109cb452;
  /* 109cb405 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb40a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109cb40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cb40f je 0x109cb452 */
  if (C.zf) goto L_109cb452;
  /* 109cb411 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb416 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109cb418 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109cb41b jmp 0x109cb426 */
  goto L_109cb426;
L_109cb41d:;
  /* 109cb41d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb423 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109cb426:;
  /* 109cb426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cb429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb42b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 109cb42e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb431 ja 0x109cb450 */
  if ((!C.cf&&!C.zf)) goto L_109cb450;
  /* 109cb433 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb436 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb439 mov dl, byte ptr [eax + 0x109f2f01] */
  DL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109cb43f or dl, byte ptr [ecx + 0x109efeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x109efeb0))); DL = (_r); fl_logic(_r,8); }
  /* 109cb445 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb448 mov byte ptr [eax + 0x109f2f01], dl */
  w8((uint32_t)(EAX + 0x109f2f01), (DL));
  /* 109cb44e jmp 0x109cb41d */
  goto L_109cb41d;
L_109cb450:;
  /* 109cb450 jmp 0x109cb3f1 */
  goto L_109cb3f1;
L_109cb452:;
  /* 109cb452 jmp 0x109cb3cd */
  goto L_109cb3cd;
L_109cb457:;
  /* 109cb457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb45a mov dword ptr [0x109f2d64], ecx */
  w32((uint32_t)(0x109f2d64), (ECX));
  /* 109cb460 mov dword ptr [0x109f2dec], 1 */
  w32((uint32_t)(0x109f2dec), (0x1u));
  /* 109cb46a mov edx, dword ptr [0x109f2d64] */
  EDX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb470 push edx */
  push32((uint32_t)(EDX));
  /* 109cb471 call 0x109cb6c0 */
  push32(0x109cb476u); f_109cb6c0();
  /* 109cb476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb479 mov dword ptr [0x109f3004], eax */
  w32((uint32_t)(0x109f3004), (EAX));
  /* 109cb47e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cb485 jmp 0x109cb490 */
  goto L_109cb490;
L_109cb487:;
  /* 109cb487 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb48a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb48d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109cb490:;
  /* 109cb490 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb494 jae 0x109cb4b4 */
  if (!C.cf) goto L_109cb4b4;
  /* 109cb496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb499 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cb49c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb49f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb4a2 mov cx, word ptr [ecx + eax*2 + 0x109efebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x109efebc)));
  /* 109cb4aa mov word ptr [edx*2 + 0x109f2de0], cx */
  w16((uint32_t)(EDX*2 + 0x109f2de0), (CX));
  /* 109cb4b2 jmp 0x109cb487 */
  goto L_109cb487;
L_109cb4b4:;
  /* 109cb4b4 call 0x109cb7c0 */
  push32(0x109cb4b9u); f_109cb7c0();
  /* 109cb4b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb4bb call 0x109c8ce0 */
  push32(0x109cb4c0u); f_109c8ce0();
  /* 109cb4c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb4c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb4c5 jmp 0x109cb650 */
  goto L_109cb650;
L_109cb4ca:;
  /* 109cb4ca jmp 0x109cb375 */
  goto L_109cb375;
L_109cb4cf:;
  /* 109cb4cf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 109cb4d2 push edx */
  push32((uint32_t)(EDX));
  /* 109cb4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb4d6 push eax */
  push32((uint32_t)(EAX));
  /* 109cb4d7 call dword ptr [0x109f4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4300))), 0x109cb4ddu);
  /* 109cb4dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb4e0 jne 0x109cb622 */
  if (!C.zf) goto L_109cb622;
  /* 109cb4e6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109cb4ed jmp 0x109cb4f8 */
  goto L_109cb4f8;
L_109cb4ef:;
  /* 109cb4ef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb4f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb4f5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_109cb4f8:;
  /* 109cb4f8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb4ff jae 0x109cb50d */
  if (!C.cf) goto L_109cb50d;
  /* 109cb501 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb504 mov byte ptr [edx + 0x109f2f00], 0 */
  w8((uint32_t)(EDX + 0x109f2f00), (0x0u));
  /* 109cb50b jmp 0x109cb4ef */
  goto L_109cb4ef;
L_109cb50d:;
  /* 109cb50d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb510 mov dword ptr [0x109f2d64], eax */
  w32((uint32_t)(0x109f2d64), (EAX));
  /* 109cb515 mov dword ptr [0x109f3004], 0 */
  w32((uint32_t)(0x109f3004), (0x0u));
  /* 109cb51f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb523 jbe 0x109cb5de */
  if ((C.cf||C.zf)) goto L_109cb5de;
  /* 109cb529 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 109cb52c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 109cb52f jmp 0x109cb53a */
  goto L_109cb53a;
L_109cb531:;
  /* 109cb531 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb534 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb537 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_109cb53a:;
  /* 109cb53a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb53d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb53f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109cb541 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cb543 je 0x109cb58c */
  if (C.zf) goto L_109cb58c;
  /* 109cb545 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb54a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109cb54d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cb54f je 0x109cb58c */
  if (C.zf) goto L_109cb58c;
  /* 109cb551 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb556 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109cb558 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109cb55b jmp 0x109cb566 */
  goto L_109cb566;
L_109cb55d:;
  /* 109cb55d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb563 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109cb566:;
  /* 109cb566 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cb569 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb56b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 109cb56e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb571 ja 0x109cb58a */
  if ((!C.cf&&!C.zf)) goto L_109cb58a;
  /* 109cb573 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb576 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109cb57c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 109cb57f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb582 mov byte ptr [edx + 0x109f2f01], cl */
  w8((uint32_t)(EDX + 0x109f2f01), (CL));
  /* 109cb588 jmp 0x109cb55d */
  goto L_109cb55d;
L_109cb58a:;
  /* 109cb58a jmp 0x109cb531 */
  goto L_109cb531;
L_109cb58c:;
  /* 109cb58c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 109cb593 jmp 0x109cb59e */
  goto L_109cb59e;
L_109cb595:;
  /* 109cb595 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb598 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb59b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109cb59e:;
  /* 109cb59e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb5a5 jae 0x109cb5be */
  if (!C.cf) goto L_109cb5be;
  /* 109cb5a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb5aa mov dl, byte ptr [ecx + 0x109f2f01] */
  DL = (r8((uint32_t)(ECX + 0x109f2f01)));
  /* 109cb5b0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 109cb5b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cb5b6 mov byte ptr [eax + 0x109f2f01], dl */
  w8((uint32_t)(EAX + 0x109f2f01), (DL));
  /* 109cb5bc jmp 0x109cb595 */
  goto L_109cb595;
L_109cb5be:;
  /* 109cb5be mov ecx, dword ptr [0x109f2d64] */
  ECX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb5c5 call 0x109cb6c0 */
  push32(0x109cb5cau); f_109cb6c0();
  /* 109cb5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb5cd mov dword ptr [0x109f3004], eax */
  w32((uint32_t)(0x109f3004), (EAX));
  /* 109cb5d2 mov dword ptr [0x109f2dec], 1 */
  w32((uint32_t)(0x109f2dec), (0x1u));
  /* 109cb5dc jmp 0x109cb5e8 */
  goto L_109cb5e8;
L_109cb5de:;
  /* 109cb5de mov dword ptr [0x109f2dec], 0 */
  w32((uint32_t)(0x109f2dec), (0x0u));
L_109cb5e8:;
  /* 109cb5e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cb5ef jmp 0x109cb5fa */
  goto L_109cb5fa;
L_109cb5f1:;
  /* 109cb5f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb5f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb5f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109cb5fa:;
  /* 109cb5fa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb5fe jae 0x109cb60f */
  if (!C.cf) goto L_109cb60f;
  /* 109cb600 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cb603 mov word ptr [eax*2 + 0x109f2de0], 0 */
  w16((uint32_t)(EAX*2 + 0x109f2de0), (0x0u));
  /* 109cb60d jmp 0x109cb5f1 */
  goto L_109cb5f1;
L_109cb60f:;
  /* 109cb60f call 0x109cb7c0 */
  push32(0x109cb614u); f_109cb7c0();
  /* 109cb614 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb616 call 0x109c8ce0 */
  push32(0x109cb61bu); f_109c8ce0();
  /* 109cb61b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb620 jmp 0x109cb650 */
  goto L_109cb650;
L_109cb622:;
  /* 109cb622 cmp dword ptr [0x109f1870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb629 je 0x109cb643 */
  if (C.zf) goto L_109cb643;
  /* 109cb62b call 0x109cb740 */
  push32(0x109cb630u); f_109cb740();
  /* 109cb630 call 0x109cb7c0 */
  push32(0x109cb635u); f_109cb7c0();
  /* 109cb635 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb637 call 0x109c8ce0 */
  push32(0x109cb63cu); f_109c8ce0();
  /* 109cb63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cb641 jmp 0x109cb650 */
  goto L_109cb650;
L_109cb643:;
  /* 109cb643 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109cb645 call 0x109c8ce0 */
  push32(0x109cb64au); f_109c8ce0();
  /* 109cb64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb64d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109cb650:;
  /* 109cb650 mov esp, ebp */
  ESP = (EBP);
  /* 109cb652 pop ebp */
  EBP = (pop32());
  /* 109cb653 ret  */
  ESPCHK(0x109cb310u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x109cb660 (89 bytes, 21 insns) */
void f_109cb660(void) {
  FTRACE(0x109cb660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb660 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb661 mov ebp, esp */
  EBP = (ESP);
  /* 109cb663 mov dword ptr [0x109f1870], 0 */
  w32((uint32_t)(0x109f1870), (0x0u));
  /* 109cb66d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb671 jne 0x109cb685 */
  if (!C.zf) goto L_109cb685;
  /* 109cb673 mov dword ptr [0x109f1870], 1 */
  w32((uint32_t)(0x109f1870), (0x1u));
  /* 109cb67d call dword ptr [0x109f42f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f8))), 0x109cb683u);
  /* 109cb683 jmp 0x109cb6b7 */
  goto L_109cb6b7;
L_109cb685:;
  /* 109cb685 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb689 jne 0x109cb69d */
  if (!C.zf) goto L_109cb69d;
  /* 109cb68b mov dword ptr [0x109f1870], 1 */
  w32((uint32_t)(0x109f1870), (0x1u));
  /* 109cb695 call dword ptr [0x109f4308] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4308))), 0x109cb69bu);
  /* 109cb69b jmp 0x109cb6b7 */
  goto L_109cb6b7;
L_109cb69d:;
  /* 109cb69d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb6a1 jne 0x109cb6b4 */
  if (!C.zf) goto L_109cb6b4;
  /* 109cb6a3 mov dword ptr [0x109f1870], 1 */
  w32((uint32_t)(0x109f1870), (0x1u));
  /* 109cb6ad mov eax, dword ptr [0x109f1890] */
  EAX = (r32((uint32_t)(0x109f1890)));
  /* 109cb6b2 jmp 0x109cb6b7 */
  goto L_109cb6b7;
L_109cb6b4:;
  /* 109cb6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_109cb6b7:;
  /* 109cb6b7 pop ebp */
  EBP = (pop32());
  /* 109cb6b8 ret  */
  ESPCHK(0x109cb660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x109cb6c0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_109cb6c0(void) {
  FTRACE(0x109cb6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb6c1 mov ebp, esp */
  EBP = (ESP);
  /* 109cb6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cb6c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cb6ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb6cd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb6d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cb6d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb6da ja 0x109cb70a */
  if ((!C.cf&&!C.zf)) goto L_109cb70a;
  /* 109cb6dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb6df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb6e1 mov dl, byte ptr [eax + 0x109cb724] */
  DL = (r8((uint32_t)(EAX + 0x109cb724)));
  /* 109cb6e7 jmp dword ptr [edx*4 + 0x109cb710] */
  switch (EDX) {
    case 0: goto L_109cb6ee;
    case 1: goto L_109cb6f5;
    case 2: goto L_109cb6fc;
    case 3: goto L_109cb703;
    case 4: goto L_109cb70a;
    default: x86_unimpl("switch@0x109cb6e7 out of table"); return;
  }
L_109cb6ee:;
  /* 109cb6ee mov eax, 0x411 */
  EAX = (0x411u);
  /* 109cb6f3 jmp 0x109cb70c */
  goto L_109cb70c;
L_109cb6f5:;
  /* 109cb6f5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 109cb6fa jmp 0x109cb70c */
  goto L_109cb70c;
L_109cb6fc:;
  /* 109cb6fc mov eax, 0x412 */
  EAX = (0x412u);
  /* 109cb701 jmp 0x109cb70c */
  goto L_109cb70c;
L_109cb703:;
  /* 109cb703 mov eax, 0x404 */
  EAX = (0x404u);
  /* 109cb708 jmp 0x109cb70c */
  goto L_109cb70c;
L_109cb70a:;
  /* 109cb70a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cb70c:;
  /* 109cb70c mov esp, ebp */
  ESP = (EBP);
  /* 109cb70e pop ebp */
  EBP = (pop32());
  /* 109cb70f ret  */
  ESPCHK(0x109cb6c0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x109cb740 (116 bytes, 29 insns) */
void f_109cb740(void) {
  FTRACE(0x109cb740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb740 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb741 mov ebp, esp */
  EBP = (ESP);
  /* 109cb743 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cb74b jmp 0x109cb756 */
  goto L_109cb756;
L_109cb74d:;
  /* 109cb74d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109cb756:;
  /* 109cb756 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb75d jge 0x109cb76b */
  if ((C.sf==C.of)) goto L_109cb76b;
  /* 109cb75f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb762 mov byte ptr [ecx + 0x109f2f00], 0 */
  w8((uint32_t)(ECX + 0x109f2f00), (0x0u));
  /* 109cb769 jmp 0x109cb74d */
  goto L_109cb74d;
L_109cb76b:;
  /* 109cb76b mov dword ptr [0x109f2d64], 0 */
  w32((uint32_t)(0x109f2d64), (0x0u));
  /* 109cb775 mov dword ptr [0x109f2dec], 0 */
  w32((uint32_t)(0x109f2dec), (0x0u));
  /* 109cb77f mov dword ptr [0x109f3004], 0 */
  w32((uint32_t)(0x109f3004), (0x0u));
  /* 109cb789 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cb790 jmp 0x109cb79b */
  goto L_109cb79b;
L_109cb792:;
  /* 109cb792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb795 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb798 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cb79b:;
  /* 109cb79b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb79f jge 0x109cb7b0 */
  if ((C.sf==C.of)) goto L_109cb7b0;
  /* 109cb7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb7a4 mov word ptr [eax*2 + 0x109f2de0], 0 */
  w16((uint32_t)(EAX*2 + 0x109f2de0), (0x0u));
  /* 109cb7ae jmp 0x109cb792 */
  goto L_109cb792;
L_109cb7b0:;
  /* 109cb7b0 mov esp, ebp */
  ESP = (EBP);
  /* 109cb7b2 pop ebp */
  EBP = (pop32());
  /* 109cb7b3 ret  */
  ESPCHK(0x109cb740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x109cb7c0 (770 bytes, 175 insns) */
void f_109cb7c0(void) {
  FTRACE(0x109cb7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cb7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cb7c1 mov ebp, esp */
  EBP = (ESP);
  /* 109cb7c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cb7c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 109cb7cf push eax */
  push32((uint32_t)(EAX));
  /* 109cb7d0 mov ecx, dword ptr [0x109f2d64] */
  ECX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb7d7 call dword ptr [0x109f4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4300))), 0x109cb7ddu);
  /* 109cb7dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb7e0 jne 0x109cb9f9 */
  if (!C.zf) goto L_109cb9f9;
  /* 109cb7e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 109cb7f0 jmp 0x109cb801 */
  goto L_109cb801;
L_109cb7f2:;
  /* 109cb7f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb7f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb7fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_109cb801:;
  /* 109cb801 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb80b jae 0x109cb822 */
  if (!C.cf) goto L_109cb822;
  /* 109cb80d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb813 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 109cb819 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 109cb820 jmp 0x109cb7f2 */
  goto L_109cb7f2;
L_109cb822:;
  /* 109cb822 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 109cb829 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 109cb82f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cb832 jmp 0x109cb83d */
  goto L_109cb83d;
L_109cb834:;
  /* 109cb834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb837 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb83a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109cb83d:;
  /* 109cb83d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb840 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb842 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109cb844 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cb846 je 0x109cb888 */
  if (C.zf) goto L_109cb888;
  /* 109cb848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb84b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb84d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109cb84f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 109cb855 jmp 0x109cb866 */
  goto L_109cb866;
L_109cb857:;
  /* 109cb857 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb85d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb860 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_109cb866:;
  /* 109cb866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cb869 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb86b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109cb86e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb874 ja 0x109cb886 */
  if ((!C.cf&&!C.zf)) goto L_109cb886;
  /* 109cb876 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb87c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 109cb884 jmp 0x109cb857 */
  goto L_109cb857;
L_109cb886:;
  /* 109cb886 jmp 0x109cb834 */
  goto L_109cb834;
L_109cb888:;
  /* 109cb888 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb88a mov eax, dword ptr [0x109f3004] */
  EAX = (r32((uint32_t)(0x109f3004)));
  /* 109cb88f push eax */
  push32((uint32_t)(EAX));
  /* 109cb890 mov ecx, dword ptr [0x109f2d64] */
  ECX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb896 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb897 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 109cb89d push edx */
  push32((uint32_t)(EDX));
  /* 109cb89e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb8a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 109cb8a9 push eax */
  push32((uint32_t)(EAX));
  /* 109cb8aa push 1 */
  push32((uint32_t)(0x1u));
  /* 109cb8ac call 0x109cd470 */
  push32(0x109cb8b1u); f_109cd470();
  /* 109cb8b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb8b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb8b6 mov ecx, dword ptr [0x109f2d64] */
  ECX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb8bc push ecx */
  push32((uint32_t)(ECX));
  /* 109cb8bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb8c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 109cb8c8 push edx */
  push32((uint32_t)(EDX));
  /* 109cb8c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb8ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 109cb8d4 push eax */
  push32((uint32_t)(EAX));
  /* 109cb8d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb8da mov ecx, dword ptr [0x109f3004] */
  ECX = (r32((uint32_t)(0x109f3004)));
  /* 109cb8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb8e1 call 0x109cd630 */
  push32(0x109cb8e6u); f_109cd630();
  /* 109cb8e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb8e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cb8eb mov edx, dword ptr [0x109f2d64] */
  EDX = (r32((uint32_t)(0x109f2d64)));
  /* 109cb8f1 push edx */
  push32((uint32_t)(EDX));
  /* 109cb8f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb8f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 109cb8fd push eax */
  push32((uint32_t)(EAX));
  /* 109cb8fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cb903 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 109cb909 push ecx */
  push32((uint32_t)(ECX));
  /* 109cb90a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 109cb90f mov edx, dword ptr [0x109f3004] */
  EDX = (r32((uint32_t)(0x109f3004)));
  /* 109cb915 push edx */
  push32((uint32_t)(EDX));
  /* 109cb916 call 0x109cd630 */
  push32(0x109cb91bu); f_109cd630();
  /* 109cb91b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb91e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 109cb928 jmp 0x109cb939 */
  goto L_109cb939;
L_109cb92a:;
  /* 109cb92a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb930 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cb933 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_109cb939:;
  /* 109cb939 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cb943 jae 0x109cb9f4 */
  if (!C.cf) goto L_109cb9f4;
  /* 109cb949 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb94f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cb951 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 109cb959 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109cb95c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cb95e je 0x109cb996 */
  if (C.zf) goto L_109cb996;
  /* 109cb960 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb966 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109cb96c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 109cb96f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb975 mov byte ptr [edx + 0x109f2f01], cl */
  w8((uint32_t)(EDX + 0x109f2f01), (CL));
  /* 109cb97b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb981 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb987 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 109cb98e mov byte ptr [eax + 0x109f2e00], dl */
  w8((uint32_t)(EAX + 0x109f2e00), (DL));
  /* 109cb994 jmp 0x109cb9ef */
  goto L_109cb9ef;
L_109cb996:;
  /* 109cb996 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb99c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cb99e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 109cb9a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 109cb9a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cb9ab je 0x109cb9e2 */
  if (C.zf) goto L_109cb9e2;
  /* 109cb9ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb9b3 mov al, byte ptr [edx + 0x109f2f01] */
  AL = (r8((uint32_t)(EDX + 0x109f2f01)));
  /* 109cb9b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 109cb9bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb9c1 mov byte ptr [ecx + 0x109f2f01], al */
  w8((uint32_t)(ECX + 0x109f2f01), (AL));
  /* 109cb9c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb9cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb9d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 109cb9da mov byte ptr [edx + 0x109f2e00], cl */
  w8((uint32_t)(EDX + 0x109f2e00), (CL));
  /* 109cb9e0 jmp 0x109cb9ef */
  goto L_109cb9ef;
L_109cb9e2:;
  /* 109cb9e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cb9e8 mov byte ptr [edx + 0x109f2e00], 0 */
  w8((uint32_t)(EDX + 0x109f2e00), (0x0u));
L_109cb9ef:;
  /* 109cb9ef jmp 0x109cb92a */
  goto L_109cb92a;
L_109cb9f4:;
  /* 109cb9f4 jmp 0x109cbabe */
  goto L_109cbabe;
L_109cb9f9:;
  /* 109cb9f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 109cba03 jmp 0x109cba14 */
  goto L_109cba14;
L_109cba05:;
  /* 109cba05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cba0e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_109cba14:;
  /* 109cba14 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cba1e jae 0x109cbabe */
  if (!C.cf) goto L_109cbabe;
  /* 109cba24 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cba2b jb 0x109cba68 */
  if (C.cf) goto L_109cba68;
  /* 109cba2d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cba34 ja 0x109cba68 */
  if ((!C.cf&&!C.zf)) goto L_109cba68;
  /* 109cba36 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba3c mov dl, byte ptr [ecx + 0x109f2f01] */
  DL = (r8((uint32_t)(ECX + 0x109f2f01)));
  /* 109cba42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 109cba45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba4b mov byte ptr [eax + 0x109f2f01], dl */
  w8((uint32_t)(EAX + 0x109f2f01), (DL));
  /* 109cba51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba57 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cba5a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba60 mov byte ptr [edx + 0x109f2e00], cl */
  w8((uint32_t)(EDX + 0x109f2e00), (CL));
  /* 109cba66 jmp 0x109cbab9 */
  goto L_109cbab9;
L_109cba68:;
  /* 109cba68 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cba6f jb 0x109cbaac */
  if (C.cf) goto L_109cbaac;
  /* 109cba71 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cba78 ja 0x109cbaac */
  if ((!C.cf&&!C.zf)) goto L_109cbaac;
  /* 109cba7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba80 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109cba86 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109cba89 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba8f mov byte ptr [edx + 0x109f2f01], cl */
  w8((uint32_t)(EDX + 0x109f2f01), (CL));
  /* 109cba95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cba9b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cba9e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cbaa4 mov byte ptr [ecx + 0x109f2e00], al */
  w8((uint32_t)(ECX + 0x109f2e00), (AL));
  /* 109cbaaa jmp 0x109cbab9 */
  goto L_109cbab9;
L_109cbaac:;
  /* 109cbaac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 109cbab2 mov byte ptr [edx + 0x109f2e00], 0 */
  w8((uint32_t)(EDX + 0x109f2e00), (0x0u));
L_109cbab9:;
  /* 109cbab9 jmp 0x109cba05 */
  goto L_109cba05;
L_109cbabe:;
  /* 109cbabe mov esp, ebp */
  ESP = (EBP);
  /* 109cbac0 pop ebp */
  EBP = (pop32());
  /* 109cbac1 ret  */
  ESPCHK(0x109cb7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bad0 @ 0x109cbad0 (23 bytes, 9 insns) */
void f_109cbad0(void) {
  FTRACE(0x109cbad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbad0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cbad1 mov ebp, esp */
  EBP = (ESP);
  /* 109cbad3 cmp dword ptr [0x109f2dec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f2dec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbada je 0x109cbae3 */
  if (C.zf) goto L_109cbae3;
  /* 109cbadc mov eax, dword ptr [0x109f2d64] */
  EAX = (r32((uint32_t)(0x109f2d64)));
  /* 109cbae1 jmp 0x109cbae5 */
  goto L_109cbae5;
L_109cbae3:;
  /* 109cbae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cbae5:;
  /* 109cbae5 pop ebp */
  EBP = (pop32());
  /* 109cbae6 ret  */
  ESPCHK(0x109cbad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baf0 @ 0x109cbaf0 (34 bytes, 10 insns) */
void f_109cbaf0(void) {
  FTRACE(0x109cbaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cbaf1 mov ebp, esp */
  EBP = (ESP);
  /* 109cbaf3 cmp dword ptr [0x109f31b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbafa jne 0x109cbb10 */
  if (!C.zf) goto L_109cbb10;
  /* 109cbafc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 109cbafe call 0x109cb310 */
  push32(0x109cbb03u); f_109cb310();
  /* 109cbb03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbb06 mov dword ptr [0x109f31b0], 1 */
  w32((uint32_t)(0x109f31b0), (0x1u));
L_109cbb10:;
  /* 109cbb10 pop ebp */
  EBP = (pop32());
  /* 109cbb11 ret  */
  ESPCHK(0x109cbaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x109cbb20 (664 bytes, 261 insns) [15 switch table(s)] */
void f_109cbb20(void) {
  FTRACE(0x109cbb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbb20 push ebp */
  push32((uint32_t)(EBP));
  /* 109cbb21 mov ebp, esp */
  EBP = (ESP);
  /* 109cbb23 push edi */
  push32((uint32_t)(EDI));
  /* 109cbb24 push esi */
  push32((uint32_t)(ESI));
  /* 109cbb25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109cbb28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cbb2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbb2e mov eax, ecx */
  EAX = (ECX);
  /* 109cbb30 mov edx, ecx */
  EDX = (ECX);
  /* 109cbb32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbb34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbb36 jbe 0x109cbb40 */
  if ((C.cf||C.zf)) goto L_109cbb40;
  /* 109cbb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbb3a jb 0x109cbcb8 */
  if (C.cf) goto L_109cbcb8;
L_109cbb40:;
  /* 109cbb40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109cbb46 jne 0x109cbb5c */
  if (!C.zf) goto L_109cbb5c;
  /* 109cbb48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbb4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109cbb4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbb51 jb 0x109cbb7c */
  if (C.cf) goto L_109cbb7c;
  /* 109cbb53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbb55 jmp dword ptr [edx*4 + 0x109cbc68] */
  switch (EDX) {
    case 0: goto L_109cbc78;
    case 1: goto L_109cbc80;
    case 2: goto L_109cbc8c;
    case 3: goto L_109cbca0;
    default: x86_unimpl("switch@0x109cbb55 out of table"); return;
  }
L_109cbb5c:;
  /* 109cbb5c mov eax, edi */
  EAX = (EDI);
  /* 109cbb5e mov edx, 3 */
  EDX = (0x3u);
  /* 109cbb63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbb66 jb 0x109cbb74 */
  if (C.cf) goto L_109cbb74;
  /* 109cbb68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109cbb6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbb6d jmp dword ptr [eax*4 + 0x109cbb80] */
  switch (EAX) {
    case 1: goto L_109cbb90;
    case 2: goto L_109cbbbc;
    case 3: goto L_109cbbe0;
    default: x86_unimpl("switch@0x109cbb6d out of table"); return;
  }
L_109cbb74:;
  /* 109cbb74 jmp dword ptr [ecx*4 + 0x109cbc78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109cbc78)))); return;
  /* 109cbb7b nop  */
  /* nop */
L_109cbb7c:;
  /* 109cbb7c jmp dword ptr [ecx*4 + 0x109cbbfc] */
  switch (ECX) {
    case 0: goto L_109cbc5f;
    case 1: goto L_109cbc4c;
    case 2: goto L_109cbc44;
    case 3: goto L_109cbc3c;
    case 4: goto L_109cbc34;
    case 5: goto L_109cbc2c;
    case 6: goto L_109cbc24;
    case 7: goto L_109cbc1c;
    default: x86_unimpl("switch@0x109cbb7c out of table"); return;
  }
  /* 109cbb83 nop  */
  /* nop */
L_109cbb90:;
  /* 109cbb90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbb92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbb94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbb96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbb99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbb9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbb9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbba2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbba5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbba8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbbab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbbae jb 0x109cbb7c */
  if (C.cf) goto L_109cbb7c;
  /* 109cbbb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbbb2 jmp dword ptr [edx*4 + 0x109cbc68] */
  switch (EDX) {
    case 0: goto L_109cbc78;
    case 1: goto L_109cbc80;
    case 2: goto L_109cbc8c;
    case 3: goto L_109cbca0;
    default: x86_unimpl("switch@0x109cbbb2 out of table"); return;
  }
  /* 109cbbb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbbbc:;
  /* 109cbbbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbbbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbbc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbbc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbbc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbbc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbbcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbbce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbbd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbbd4 jb 0x109cbb7c */
  if (C.cf) goto L_109cbb7c;
  /* 109cbbd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbbd8 jmp dword ptr [edx*4 + 0x109cbc68] */
  switch (EDX) {
    case 0: goto L_109cbc78;
    case 1: goto L_109cbc80;
    case 2: goto L_109cbc8c;
    case 3: goto L_109cbca0;
    default: x86_unimpl("switch@0x109cbbd8 out of table"); return;
  }
  /* 109cbbdf nop  */
  /* nop */
L_109cbbe0:;
  /* 109cbbe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbbe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbbe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbbe6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109cbbe7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbbea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109cbbeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbbee jb 0x109cbb7c */
  if (C.cf) goto L_109cbb7c;
  /* 109cbbf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbbf2 jmp dword ptr [edx*4 + 0x109cbc68] */
  switch (EDX) {
    case 0: goto L_109cbc78;
    case 1: goto L_109cbc80;
    case 2: goto L_109cbc8c;
    case 3: goto L_109cbca0;
    default: x86_unimpl("switch@0x109cbbf2 out of table"); return;
  }
  /* 109cbbf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbc1c:;
  /* 109cbc1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109cbc20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109cbc24:;
  /* 109cbc24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109cbc28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109cbc2c:;
  /* 109cbc2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 109cbc30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_109cbc34:;
  /* 109cbc34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 109cbc38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_109cbc3c:;
  /* 109cbc3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109cbc40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109cbc44:;
  /* 109cbc44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109cbc48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109cbc4c:;
  /* 109cbc4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109cbc50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109cbc54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109cbc5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbc5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109cbc5f:;
  /* 109cbc5f jmp dword ptr [edx*4 + 0x109cbc68] */
  switch (EDX) {
    case 0: goto L_109cbc78;
    case 1: goto L_109cbc80;
    case 2: goto L_109cbc8c;
    case 3: goto L_109cbca0;
    default: x86_unimpl("switch@0x109cbc5f out of table"); return;
  }
  /* 109cbc66 mov edi, edi */
  EDI = (EDI);
L_109cbc78:;
  /* 109cbc78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbc7b pop esi */
  ESI = (pop32());
  /* 109cbc7c pop edi */
  EDI = (pop32());
  /* 109cbc7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbc7e ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbc7f nop  */
  /* nop */
L_109cbc80:;
  /* 109cbc80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbc82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbc84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbc87 pop esi */
  ESI = (pop32());
  /* 109cbc88 pop edi */
  EDI = (pop32());
  /* 109cbc89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbc8a ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbc8b nop  */
  /* nop */
L_109cbc8c:;
  /* 109cbc8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbc8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbc90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbc93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbc99 pop esi */
  ESI = (pop32());
  /* 109cbc9a pop edi */
  EDI = (pop32());
  /* 109cbc9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbc9c ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbc9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbca0:;
  /* 109cbca0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cbca2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cbca4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbca7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbcaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbcad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbcb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbcb3 pop esi */
  ESI = (pop32());
  /* 109cbcb4 pop edi */
  EDI = (pop32());
  /* 109cbcb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbcb6 ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbcb7 nop  */
  /* nop */
L_109cbcb8:;
  /* 109cbcb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109cbcbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109cbcc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109cbcc6 jne 0x109cbcec */
  if (!C.zf) goto L_109cbcec;
  /* 109cbcc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbccb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109cbcce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbcd1 jb 0x109cbce0 */
  if (C.cf) goto L_109cbce0;
  /* 109cbcd3 std  */
  C.df=1;
  /* 109cbcd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbcd6 cld  */
  C.df=0;
  /* 109cbcd7 jmp dword ptr [edx*4 + 0x109cbe00] */
  switch (EDX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbcd7 out of table"); return;
  }
  /* 109cbcde mov edi, edi */
  EDI = (EDI);
L_109cbce0:;
  /* 109cbce0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cbce2 jmp dword ptr [ecx*4 + 0x109cbdb0] */
  switch (ECX) {
    case 0: goto L_109cbdf7;
    default: x86_unimpl("switch@0x109cbce2 out of table"); return;
  }
  /* 109cbce9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbcec:;
  /* 109cbcec mov eax, edi */
  EAX = (EDI);
  /* 109cbcee mov edx, 3 */
  EDX = (0x3u);
  /* 109cbcf3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbcf6 jb 0x109cbd04 */
  if (C.cf) goto L_109cbd04;
  /* 109cbcf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109cbcfb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbcfd jmp dword ptr [eax*4 + 0x109cbd08] */
  switch (EAX) {
    case 1: goto L_109cbd18;
    case 2: goto L_109cbd38;
    case 3: goto L_109cbd60;
    default: x86_unimpl("switch@0x109cbcfd out of table"); return;
  }
L_109cbd04:;
  /* 109cbd04 jmp dword ptr [ecx*4 + 0x109cbe00] */
  switch (ECX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbd04 out of table"); return;
  }
  /* 109cbd0b nop  */
  /* nop */
L_109cbd18:;
  /* 109cbd18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbd1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbd1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbd20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109cbd21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbd24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109cbd25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbd28 jb 0x109cbce0 */
  if (C.cf) goto L_109cbce0;
  /* 109cbd2a std  */
  C.df=1;
  /* 109cbd2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbd2d cld  */
  C.df=0;
  /* 109cbd2e jmp dword ptr [edx*4 + 0x109cbe00] */
  switch (EDX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbd2e out of table"); return;
  }
  /* 109cbd35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbd38:;
  /* 109cbd38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbd3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbd3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbd40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbd43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbd46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbd49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbd4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbd4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbd52 jb 0x109cbce0 */
  if (C.cf) goto L_109cbce0;
  /* 109cbd54 std  */
  C.df=1;
  /* 109cbd55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbd57 cld  */
  C.df=0;
  /* 109cbd58 jmp dword ptr [edx*4 + 0x109cbe00] */
  switch (EDX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbd58 out of table"); return;
  }
  /* 109cbd5f nop  */
  /* nop */
L_109cbd60:;
  /* 109cbd60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbd63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbd65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbd68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbd6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbd6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbd71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cbd74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbd77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbd7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbd7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbd80 jb 0x109cbce0 */
  if (C.cf) goto L_109cbce0;
  /* 109cbd86 std  */
  C.df=1;
  /* 109cbd87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cbd89 cld  */
  C.df=0;
  /* 109cbd8a jmp dword ptr [edx*4 + 0x109cbe00] */
  switch (EDX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbd8a out of table"); return;
  }
  /* 109cbd91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109cbd94 mov ah, 0xbd */
  AH = (0xbdu);
  /* 109cbd96 pushfd  */
  x86_unimpl("pushfd @ 0x109cbd96");
  /* 109cbd97 adc byte ptr [ebp + edi*4 - 0x423bef64], bh */
  { uint32_t _a=(r8((uint32_t)(EBP + EDI*4 + -0x423bef64))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDI*4 + -0x423bef64), (_r)); fl_add(_a,_b,_r,8); }
  /* 109cbd9e pushfd  */
  x86_unimpl("pushfd @ 0x109cbd9e");
  /* 109cbd9f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109cbda1 mov ebp, 0xbdd4109c */
  EBP = (0xbdd4109cu);
  /* 109cbda6 pushfd  */
  x86_unimpl("pushfd @ 0x109cbda6");
  /* 109cbda7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109cbda9 mov ebp, 0xbde4109c */
  EBP = (0xbde4109cu);
  /* 109cbdae pushfd  */
  x86_unimpl("pushfd @ 0x109cbdae");
  /* 109cbdb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109cbdb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109cbdbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109cbdc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109cbdc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109cbdc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109cbdcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109cbdd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109cbdd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109cbdd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109cbddc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109cbde0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109cbde4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109cbde8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109cbdec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109cbdf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbdf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109cbdf7:;
  /* 109cbdf7 jmp dword ptr [edx*4 + 0x109cbe00] */
  switch (EDX) {
    case 0: goto L_109cbe10;
    case 1: goto L_109cbe18;
    case 2: goto L_109cbe28;
    case 3: goto L_109cbe3c;
    default: x86_unimpl("switch@0x109cbdf7 out of table"); return;
  }
  /* 109cbdfe mov edi, edi */
  EDI = (EDI);
L_109cbe10:;
  /* 109cbe10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbe13 pop esi */
  ESI = (pop32());
  /* 109cbe14 pop edi */
  EDI = (pop32());
  /* 109cbe15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbe16 ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbe17 nop  */
  /* nop */
L_109cbe18:;
  /* 109cbe18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbe1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbe1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbe21 pop esi */
  ESI = (pop32());
  /* 109cbe22 pop edi */
  EDI = (pop32());
  /* 109cbe23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbe24 ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbe25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cbe28:;
  /* 109cbe28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbe2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbe2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbe31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbe34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbe37 pop esi */
  ESI = (pop32());
  /* 109cbe38 pop edi */
  EDI = (pop32());
  /* 109cbe39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbe3a ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
  /* 109cbe3b nop  */
  /* nop */
L_109cbe3c:;
  /* 109cbe3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cbe3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cbe42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cbe45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cbe48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cbe4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cbe4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cbe51 pop esi */
  ESI = (pop32());
  /* 109cbe52 pop edi */
  EDI = (pop32());
  /* 109cbe53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cbe54 ret  */
  ESPCHK(0x109cbb20u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x109cbe60 (104 bytes, 43 insns) */
void f_109cbe60(void) {
  FTRACE(0x109cbe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbe60 push ebx */
  push32((uint32_t)(EBX));
  /* 109cbe61 push esi */
  push32((uint32_t)(ESI));
  /* 109cbe62 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 109cbe66 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cbe68 jne 0x109cbe82 */
  if (!C.zf) goto L_109cbe82;
  /* 109cbe6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 109cbe6e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109cbe72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbe74 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbe76 mov ebx, eax */
  EBX = (EAX);
  /* 109cbe78 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 109cbe7c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbe7e mov edx, ebx */
  EDX = (EBX);
  /* 109cbe80 jmp 0x109cbec3 */
  goto L_109cbec3;
L_109cbe82:;
  /* 109cbe82 mov ecx, eax */
  ECX = (EAX);
  /* 109cbe84 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 109cbe88 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 109cbe8c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_109cbe90:;
  /* 109cbe90 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109cbe92 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 109cbe94 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 109cbe96 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 109cbe98 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cbe9a jne 0x109cbe90 */
  if (!C.zf) goto L_109cbe90;
  /* 109cbe9c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbe9e mov esi, eax */
  ESI = (EAX);
  /* 109cbea0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109cbea4 mov ecx, eax */
  ECX = (EAX);
  /* 109cbea6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 109cbeaa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109cbeac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbeae jb 0x109cbebe */
  if (C.cf) goto L_109cbebe;
  /* 109cbeb0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbeb4 ja 0x109cbebe */
  if ((!C.cf&&!C.zf)) goto L_109cbebe;
  /* 109cbeb6 jb 0x109cbebf */
  if (C.cf) goto L_109cbebf;
  /* 109cbeb8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbebc jbe 0x109cbebf */
  if ((C.cf||C.zf)) goto L_109cbebf;
L_109cbebe:;
  /* 109cbebe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_109cbebf:;
  /* 109cbebf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbec1 mov eax, esi */
  EAX = (ESI);
L_109cbec3:;
  /* 109cbec3 pop esi */
  ESI = (pop32());
  /* 109cbec4 pop ebx */
  EBX = (pop32());
  /* 109cbec5 ret 0x10 */
  ESPCHK(0x109cbe60u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x109cbed0 (117 bytes, 44 insns) */
void f_109cbed0(void) {
  FTRACE(0x109cbed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbed0 push ebx */
  push32((uint32_t)(EBX));
  /* 109cbed1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 109cbed5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cbed7 jne 0x109cbef1 */
  if (!C.zf) goto L_109cbef1;
  /* 109cbed9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 109cbedd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 109cbee1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbee3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbee5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109cbee9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbeeb mov eax, edx */
  EAX = (EDX);
  /* 109cbeed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109cbeef jmp 0x109cbf41 */
  goto L_109cbf41;
L_109cbef1:;
  /* 109cbef1 mov ecx, eax */
  ECX = (EAX);
  /* 109cbef3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 109cbef7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 109cbefb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_109cbeff:;
  /* 109cbeff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109cbf01 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 109cbf03 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 109cbf05 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 109cbf07 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cbf09 jne 0x109cbeff */
  if (!C.zf) goto L_109cbeff;
  /* 109cbf0b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109cbf0d mov ecx, eax */
  ECX = (EAX);
  /* 109cbf0f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109cbf13 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 109cbf14 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 109cbf18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbf1a jb 0x109cbf2a */
  if (C.cf) goto L_109cbf2a;
  /* 109cbf1c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbf20 ja 0x109cbf2a */
  if ((!C.cf&&!C.zf)) goto L_109cbf2a;
  /* 109cbf22 jb 0x109cbf32 */
  if (C.cf) goto L_109cbf32;
  /* 109cbf24 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbf28 jbe 0x109cbf32 */
  if ((C.cf||C.zf)) goto L_109cbf32;
L_109cbf2a:;
  /* 109cbf2a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbf2e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_109cbf32:;
  /* 109cbf32 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbf36 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbf3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cbf3c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cbf3e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_109cbf41:;
  /* 109cbf41 pop ebx */
  EBX = (pop32());
  /* 109cbf42 ret 0x10 */
  ESPCHK(0x109cbed0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000bf50 @ 0x109cbf50 (628 bytes, 214 insns) */
void f_109cbf50(void) {
  FTRACE(0x109cbf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cbf50 push ebp */
  push32((uint32_t)(EBP));
  /* 109cbf51 mov ebp, esp */
  EBP = (ESP);
  /* 109cbf53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cbf56 push ebx */
  push32((uint32_t)(EBX));
  /* 109cbf57 push esi */
  push32((uint32_t)(ESI));
  /* 109cbf58 push edi */
  push32((uint32_t)(EDI));
L_109cbf59:;
  /* 109cbf59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbf5d jne 0x109cbf7d */
  if (!C.zf) goto L_109cbf7d;
  /* 109cbf5f push 0x109ed1e0 */
  push32((uint32_t)(0x109ed1e0u));
  /* 109cbf64 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cbf66 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 109cbf68 push 0x109ed1d4 */
  push32((uint32_t)(0x109ed1d4u));
  /* 109cbf6d push 2 */
  push32((uint32_t)(0x2u));
  /* 109cbf6f call 0x109c4300 */
  push32(0x109cbf74u); f_109c4300();
  /* 109cbf74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cbf77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cbf7a jne 0x109cbf7d */
  if (!C.zf) goto L_109cbf7d;
  /* 109cbf7c int3  */
  x86_unimpl("int3 @ 0x109cbf7c");
L_109cbf7d:;
  /* 109cbf7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cbf7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cbf81 jne 0x109cbf59 */
  if (!C.zf) goto L_109cbf59;
  /* 109cbf83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cbf86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109cbf89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbf8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109cbf8f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109cbf92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbf95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cbf98 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 109cbf9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cbfa0 je 0x109cbfaf */
  if (C.zf) goto L_109cbfaf;
  /* 109cbfa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfa5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cbfa8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 109cbfab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cbfad je 0x109cbfc5 */
  if (C.zf) goto L_109cbfc5;
L_109cbfaf:;
  /* 109cbfaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfb2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cbfb5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 109cbfb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 109cbfbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cbfc0 jmp 0x109cc1bd */
  goto L_109cc1bd;
L_109cbfc5:;
  /* 109cbfc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfc8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cbfcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109cbfce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cbfd0 je 0x109cc01c */
  if (C.zf) goto L_109cc01c;
  /* 109cbfd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfd5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 109cbfdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfdf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cbfe2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 109cbfe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cbfe7 je 0x109cc005 */
  if (C.zf) goto L_109cc005;
  /* 109cbfe9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbfef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cbff2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109cbff4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cbff7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cbffa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 109cbffd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc000 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109cc003 jmp 0x109cc01c */
  goto L_109cc01c;
L_109cc005:;
  /* 109cc005 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc008 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cc00b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc00e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc011 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109cc014 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cc017 jmp 0x109cc1bd */
  goto L_109cc1bd;
L_109cc01c:;
  /* 109cc01c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc01f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cc022 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc028 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109cc02b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc02e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cc031 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 109cc034 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc037 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109cc03a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc03d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 109cc044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cc04b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc04e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109cc051 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc054 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cc057 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 109cc05d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cc05f jne 0x109cc08f */
  if (!C.zf) goto L_109cc08f;
  /* 109cc061 cmp dword ptr [ebp - 8], 0x109f0140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x109f0140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc068 je 0x109cc073 */
  if (C.zf) goto L_109cc073;
  /* 109cc06a cmp dword ptr [ebp - 8], 0x109f0160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x109f0160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc071 jne 0x109cc083 */
  if (!C.zf) goto L_109cc083;
L_109cc073:;
  /* 109cc073 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc076 push edx */
  push32((uint32_t)(EDX));
  /* 109cc077 call 0x109cdec0 */
  push32(0x109cc07cu); f_109cdec0();
  /* 109cc07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc07f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc081 jne 0x109cc08f */
  if (!C.zf) goto L_109cc08f;
L_109cc083:;
  /* 109cc083 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc086 push eax */
  push32((uint32_t)(EAX));
  /* 109cc087 call 0x109cddf0 */
  push32(0x109cc08cu); f_109cddf0();
  /* 109cc08c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cc08f:;
  /* 109cc08f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc092 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cc095 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc09b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc09d je 0x109cc17b */
  if (C.zf) goto L_109cc17b;
L_109cc0a3:;
  /* 109cc0a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 109cc0ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc0ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc0b0 jge 0x109cc0d3 */
  if ((C.sf==C.of)) goto L_109cc0d3;
  /* 109cc0b2 push 0x109ed194 */
  push32((uint32_t)(0x109ed194u));
  /* 109cc0b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cc0b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109cc0be push 0x109ed1d4 */
  push32((uint32_t)(0x109ed1d4u));
  /* 109cc0c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cc0c5 call 0x109c4300 */
  push32(0x109cc0cau); f_109c4300();
  /* 109cc0ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc0cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc0d0 jne 0x109cc0d3 */
  if (!C.zf) goto L_109cc0d3;
  /* 109cc0d2 int3  */
  x86_unimpl("int3 @ 0x109cc0d2");
L_109cc0d3:;
  /* 109cc0d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cc0d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc0d7 jne 0x109cc0a3 */
  if (!C.zf) goto L_109cc0a3;
  /* 109cc0d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109cc0e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc0e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cc0e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109cc0ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc0f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109cc0f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc0f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109cc0fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc0fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc101 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109cc104 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc108 jle 0x109cc126 */
  if ((C.zf||C.sf!=C.of)) goto L_109cc126;
  /* 109cc10a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc10d push ecx */
  push32((uint32_t)(ECX));
  /* 109cc10e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc111 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cc114 push eax */
  push32((uint32_t)(EAX));
  /* 109cc115 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc118 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc119 call 0x109cdae0 */
  push32(0x109cc11eu); f_109cdae0();
  /* 109cc11e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc121 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109cc124 jmp 0x109cc16e */
  goto L_109cc16e;
L_109cc126:;
  /* 109cc126 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc12a je 0x109cc149 */
  if (C.zf) goto L_109cc149;
  /* 109cc12c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc12f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 109cc132 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc135 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109cc138 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cc13b mov ecx, dword ptr [edx*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109cc142 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc144 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109cc147 jmp 0x109cc150 */
  goto L_109cc150;
L_109cc149:;
  /* 109cc149 mov dword ptr [ebp - 0x14], 0x109efa60 */
  w32((uint32_t)(EBP + -0x14), (0x109efa60u));
L_109cc150:;
  /* 109cc150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109cc153 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 109cc157 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc15c je 0x109cc16e */
  if (C.zf) goto L_109cc16e;
  /* 109cc15e push 2 */
  push32((uint32_t)(0x2u));
  /* 109cc160 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cc162 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc165 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc166 call 0x109cd990 */
  push32(0x109cc16bu); f_109cd990();
  /* 109cc16b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cc16e:;
  /* 109cc16e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc171 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cc174 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 109cc177 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 109cc179 jmp 0x109cc199 */
  goto L_109cc199;
L_109cc17b:;
  /* 109cc17b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109cc182 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc185 push edx */
  push32((uint32_t)(EDX));
  /* 109cc186 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 109cc189 push eax */
  push32((uint32_t)(EAX));
  /* 109cc18a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cc18d push ecx */
  push32((uint32_t)(ECX));
  /* 109cc18e call 0x109cdae0 */
  push32(0x109cc193u); f_109cdae0();
  /* 109cc193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc196 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109cc199:;
  /* 109cc199 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cc19c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc19f je 0x109cc1b5 */
  if (C.zf) goto L_109cc1b5;
  /* 109cc1a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc1a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cc1a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc1aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc1ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 109cc1b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cc1b3 jmp 0x109cc1bd */
  goto L_109cc1bd;
L_109cc1b5:;
  /* 109cc1b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cc1b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_109cc1bd:;
  /* 109cc1bd pop edi */
  EDI = (pop32());
  /* 109cc1be pop esi */
  ESI = (pop32());
  /* 109cc1bf pop ebx */
  EBX = (pop32());
  /* 109cc1c0 mov esp, ebp */
  ESP = (EBP);
  /* 109cc1c2 pop ebp */
  EBP = (pop32());
  /* 109cc1c3 ret  */
  ESPCHK(0x109cbf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x109cc1d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_109cc1d0(void) {
  FTRACE(0x109cc1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cc1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cc1d1 mov ebp, esp */
  EBP = (ESP);
  /* 109cc1d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 109cc1da push esi */
  push32((uint32_t)(ESI));
  /* 109cc1db push edi */
  push32((uint32_t)(EDI));
  /* 109cc1dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109cc1e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 109cc1ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_109cc1f4:;
  /* 109cc1f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc1f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109cc1f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 109cc1fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc200 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc203 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc206 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109cc209 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc20b je 0x109ccde7 */
  if (C.zf) goto L_109ccde7;
  /* 109cc211 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc218 jl 0x109ccde7 */
  if ((C.sf!=C.of)) goto L_109ccde7;
  /* 109cc21e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc222 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc225 jl 0x109cc246 */
  if ((C.sf!=C.of)) goto L_109cc246;
  /* 109cc227 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc22b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc22e jg 0x109cc246 */
  if ((!C.zf&&C.sf==C.of)) goto L_109cc246;
  /* 109cc230 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc234 movsx ecx, byte ptr [eax + 0x109ed1cc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x109ed1cc))));
  /* 109cc23b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 109cc23e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 109cc244 jmp 0x109cc250 */
  goto L_109cc250;
L_109cc246:;
  /* 109cc246 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_109cc250:;
  /* 109cc250 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 109cc256 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109cc259 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cc25c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cc25f movsx edx, byte ptr [ecx + eax*8 + 0x109ed1ec] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x109ed1ec))));
  /* 109cc267 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 109cc26a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109cc26d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cc270 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 109cc276 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc27d ja 0x109ccde2 */
  if ((!C.cf&&!C.zf)) goto L_109ccde2;
  /* 109cc283 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 109cc289 jmp dword ptr [ecx*4 + 0x109ccdf4] */
  switch (ECX) {
    case 0: goto L_109cc290;
    case 1: goto L_109cc32a;
    case 2: goto L_109cc36c;
    case 3: goto L_109cc3db;
    case 4: goto L_109cc433;
    case 5: goto L_109cc442;
    case 6: goto L_109cc48e;
    case 7: goto L_109cc521;
    case 8: goto L_109cc3b8;
    case 9: goto L_109cc3c3;
    case 10: goto L_109cc3ae;
    case 11: goto L_109cc3a3;
    case 12: goto L_109cc3ce;
    case 13: goto L_109cc3d6;
    default: x86_unimpl("switch@0x109cc289 out of table"); return;
  }
L_109cc290:;
  /* 109cc290 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 109cc297 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cc29a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109cc2a0 mov eax, dword ptr [0x109efc98] */
  EAX = (r32((uint32_t)(0x109efc98)));
  /* 109cc2a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cc2a7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 109cc2ab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc2b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cc2b3 je 0x109cc30d */
  if (C.zf) goto L_109cc30d;
  /* 109cc2b5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 109cc2bb push edx */
  push32((uint32_t)(EDX));
  /* 109cc2bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cc2bf push eax */
  push32((uint32_t)(EAX));
  /* 109cc2c0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc2c5 call 0x109ccf00 */
  push32(0x109cc2cau); f_109ccf00();
  /* 109cc2ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc2cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc2d0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109cc2d2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 109cc2d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc2d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc2db mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_109cc2de:;
  /* 109cc2de movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc2e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc2e4 jne 0x109cc307 */
  if (!C.zf) goto L_109cc307;
  /* 109cc2e6 push 0x109ed26c */
  push32((uint32_t)(0x109ed26cu));
  /* 109cc2eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109cc2ed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 109cc2f2 push 0x109ed260 */
  push32((uint32_t)(0x109ed260u));
  /* 109cc2f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cc2f9 call 0x109c4300 */
  push32(0x109cc2feu); f_109c4300();
  /* 109cc2fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc301 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc304 jne 0x109cc307 */
  if (!C.zf) goto L_109cc307;
  /* 109cc306 int3  */
  x86_unimpl("int3 @ 0x109cc306");
L_109cc307:;
  /* 109cc307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cc309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc30b jne 0x109cc2de */
  if (!C.zf) goto L_109cc2de;
L_109cc30d:;
  /* 109cc30d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 109cc313 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cc317 push edx */
  push32((uint32_t)(EDX));
  /* 109cc318 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc31c push eax */
  push32((uint32_t)(EAX));
  /* 109cc31d call 0x109ccf00 */
  push32(0x109cc322u); f_109ccf00();
  /* 109cc322 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc325 jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc32a:;
  /* 109cc32a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109cc331 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc334 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 109cc33a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 109cc340 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 109cc346 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 109cc34c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109cc34f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cc356 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 109cc360 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 109cc367 jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc36c:;
  /* 109cc36c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc370 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 109cc376 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 109cc37c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc37f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 109cc385 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc38c ja 0x109cc3d6 */
  if ((!C.cf&&!C.zf)) goto L_109cc3d6;
  /* 109cc38e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 109cc394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cc396 mov al, byte ptr [ecx + 0x109cce2c] */
  AL = (r8((uint32_t)(ECX + 0x109cce2c)));
  /* 109cc39c jmp dword ptr [eax*4 + 0x109cce14] */
  switch (EAX) {
    case 0: goto L_109cc3b8;
    case 1: goto L_109cc3c3;
    case 2: goto L_109cc3ae;
    case 3: goto L_109cc3a3;
    case 4: goto L_109cc3ce;
    case 5: goto L_109cc3d6;
    default: x86_unimpl("switch@0x109cc39c out of table"); return;
  }
L_109cc3a3:;
  /* 109cc3a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc3a6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc3a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cc3ac jmp 0x109cc3d6 */
  goto L_109cc3d6;
L_109cc3ae:;
  /* 109cc3ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc3b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 109cc3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cc3b6 jmp 0x109cc3d6 */
  goto L_109cc3d6;
L_109cc3b8:;
  /* 109cc3b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc3bb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc3be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cc3c1 jmp 0x109cc3d6 */
  goto L_109cc3d6;
L_109cc3c3:;
  /* 109cc3c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc3c6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 109cc3c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cc3cc jmp 0x109cc3d6 */
  goto L_109cc3d6;
L_109cc3ce:;
  /* 109cc3ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc3d1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 109cc3d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109cc3d6:;
  /* 109cc3d6 jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc3db:;
  /* 109cc3db movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc3df cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc3e2 jne 0x109cc417 */
  if (!C.zf) goto L_109cc417;
  /* 109cc3e4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 109cc3e7 push edx */
  push32((uint32_t)(EDX));
  /* 109cc3e8 call 0x109cd010 */
  push32(0x109cc3edu); f_109cd010();
  /* 109cc3ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc3f0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 109cc3f6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc3fd jge 0x109cc415 */
  if ((C.sf==C.of)) goto L_109cc415;
  /* 109cc3ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc402 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 109cc404 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cc407 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 109cc40d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cc40f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_109cc415:;
  /* 109cc415 jmp 0x109cc42e */
  goto L_109cc42e;
L_109cc417:;
  /* 109cc417 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 109cc41d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cc420 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc424 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 109cc428 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_109cc42e:;
  /* 109cc42e jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc433:;
  /* 109cc433 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 109cc43d jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc442:;
  /* 109cc442 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc446 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc449 jne 0x109cc472 */
  if (!C.zf) goto L_109cc472;
  /* 109cc44b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 109cc44e push eax */
  push32((uint32_t)(EAX));
  /* 109cc44f call 0x109cd010 */
  push32(0x109cc454u); f_109cd010();
  /* 109cc454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc457 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 109cc45d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc464 jge 0x109cc470 */
  if ((C.sf==C.of)) goto L_109cc470;
  /* 109cc466 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_109cc470:;
  /* 109cc470 jmp 0x109cc489 */
  goto L_109cc489;
L_109cc472:;
  /* 109cc472 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 109cc478 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cc47b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc47f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 109cc483 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_109cc489:;
  /* 109cc489 jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc48e:;
  /* 109cc48e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc492 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 109cc498 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 109cc49e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc4a1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 109cc4a7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc4ae ja 0x109cc51c */
  if ((!C.cf&&!C.zf)) goto L_109cc51c;
  /* 109cc4b0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 109cc4b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cc4b8 mov al, byte ptr [ecx + 0x109cce51] */
  AL = (r8((uint32_t)(ECX + 0x109cce51)));
  /* 109cc4be jmp dword ptr [eax*4 + 0x109cce3d] */
  switch (EAX) {
    case 0: goto L_109cc4d0;
    case 1: goto L_109cc509;
    case 2: goto L_109cc4c5;
    case 3: goto L_109cc513;
    case 4: goto L_109cc51c;
    default: x86_unimpl("switch@0x109cc4be out of table"); return;
  }
L_109cc4c5:;
  /* 109cc4c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc4c8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc4cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cc4ce jmp 0x109cc51c */
  goto L_109cc51c;
L_109cc4d0:;
  /* 109cc4d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc4d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cc4d6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc4d9 jne 0x109cc4fb */
  if (!C.zf) goto L_109cc4fb;
  /* 109cc4db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc4de movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109cc4e2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc4e5 jne 0x109cc4fb */
  if (!C.zf) goto L_109cc4fb;
  /* 109cc4e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cc4ea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc4ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109cc4f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc4f3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109cc4f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cc4f9 jmp 0x109cc507 */
  goto L_109cc507;
L_109cc4fb:;
  /* 109cc4fb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 109cc502 jmp 0x109cc290 */
  goto L_109cc290;
L_109cc507:;
  /* 109cc507 jmp 0x109cc51c */
  goto L_109cc51c;
L_109cc509:;
  /* 109cc509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc50c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 109cc50e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cc511 jmp 0x109cc51c */
  goto L_109cc51c;
L_109cc513:;
  /* 109cc513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc516 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 109cc519 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109cc51c:;
  /* 109cc51c jmp 0x109ccde2 */
  goto L_109ccde2;
L_109cc521:;
  /* 109cc521 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc525 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 109cc52b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 109cc531 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc534 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 109cc53a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc541 ja 0x109ccc07 */
  if ((!C.cf&&!C.zf)) goto L_109ccc07;
  /* 109cc547 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 109cc54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cc54f mov cl, byte ptr [edx + 0x109ccebc] */
  CL = (r8((uint32_t)(EDX + 0x109ccebc)));
  /* 109cc555 jmp dword ptr [ecx*4 + 0x109cce80] */
  switch (ECX) {
    case 0: goto L_109cc55c;
    case 1: goto L_109cc7f0;
    case 2: goto L_109cc680;
    case 3: goto L_109cc929;
    case 4: goto L_109cc5eb;
    case 5: goto L_109cc571;
    case 6: goto L_109cc8fb;
    case 7: goto L_109cc800;
    case 8: goto L_109cc7a5;
    case 9: goto L_109cc975;
    case 10: goto L_109cc91f;
    case 11: goto L_109cc696;
    case 12: goto L_109cc913;
    case 13: goto L_109cc935;
    case 14: goto L_109ccc07;
    default: x86_unimpl("switch@0x109cc555 out of table"); return;
  }
L_109cc55c:;
  /* 109cc55c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc55f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc566 jne 0x109cc571 */
  if (!C.zf) goto L_109cc571;
  /* 109cc568 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc56b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 109cc56e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109cc571:;
  /* 109cc571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc574 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc57a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc57c je 0x109cc5b7 */
  if (C.zf) goto L_109cc5b7;
  /* 109cc57e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 109cc581 push eax */
  push32((uint32_t)(EAX));
  /* 109cc582 call 0x109cd050 */
  push32(0x109cc587u); f_109cd050();
  /* 109cc587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc58a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 109cc58e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 109cc592 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc593 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 109cc599 push edx */
  push32((uint32_t)(EDX));
  /* 109cc59a call 0x109ce130 */
  push32(0x109cc59fu); f_109ce130();
  /* 109cc59f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc5a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109cc5a5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc5a9 jge 0x109cc5b5 */
  if ((C.sf==C.of)) goto L_109cc5b5;
  /* 109cc5ab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_109cc5b5:;
  /* 109cc5b5 jmp 0x109cc5dd */
  goto L_109cc5dd;
L_109cc5b7:;
  /* 109cc5b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 109cc5ba push eax */
  push32((uint32_t)(EAX));
  /* 109cc5bb call 0x109cd010 */
  push32(0x109cc5c0u); f_109cd010();
  /* 109cc5c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc5c3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 109cc5ca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 109cc5d0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 109cc5d6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_109cc5dd:;
  /* 109cc5dd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 109cc5e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109cc5e6 jmp 0x109ccc07 */
  goto L_109ccc07;
L_109cc5eb:;
  /* 109cc5eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 109cc5ee push eax */
  push32((uint32_t)(EAX));
  /* 109cc5ef call 0x109cd010 */
  push32(0x109cc5f4u); f_109cd010();
  /* 109cc5f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc5f7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 109cc5fd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc604 je 0x109cc612 */
  if (C.zf) goto L_109cc612;
  /* 109cc606 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 109cc60c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc610 jne 0x109cc62c */
  if (!C.zf) goto L_109cc62c;
L_109cc612:;
  /* 109cc612 mov edx, dword ptr [0x109effb0] */
  EDX = (r32((uint32_t)(0x109effb0)));
  /* 109cc618 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109cc61b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc61e push eax */
  push32((uint32_t)(EAX));
  /* 109cc61f call 0x109c8070 */
  push32(0x109cc624u); f_109c8070();
  /* 109cc624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc627 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109cc62a jmp 0x109cc67b */
  goto L_109cc67b;
L_109cc62c:;
  /* 109cc62c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc62f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cc637 je 0x109cc65c */
  if (C.zf) goto L_109cc65c;
  /* 109cc639 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 109cc63f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109cc642 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109cc645 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 109cc64b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 109cc64e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 109cc650 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109cc653 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 109cc65a jmp 0x109cc67b */
  goto L_109cc67b;
L_109cc65c:;
  /* 109cc65c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 109cc663 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 109cc669 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109cc66c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109cc66f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 109cc675 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 109cc678 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109cc67b:;
  /* 109cc67b jmp 0x109ccc07 */
  goto L_109ccc07;
L_109cc680:;
  /* 109cc680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc683 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc689 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cc68b jne 0x109cc696 */
  if (!C.zf) goto L_109cc696;
  /* 109cc68d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc690 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109cc693 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cc696:;
  /* 109cc696 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc69d jne 0x109cc6ab */
  if (!C.zf) goto L_109cc6ab;
  /* 109cc69f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 109cc6a9 jmp 0x109cc6b7 */
  goto L_109cc6b7;
L_109cc6ab:;
  /* 109cc6ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 109cc6b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_109cc6b7:;
  /* 109cc6b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 109cc6bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 109cc6c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 109cc6c6 push edx */
  push32((uint32_t)(EDX));
  /* 109cc6c7 call 0x109cd010 */
  push32(0x109cc6ccu); f_109cd010();
  /* 109cc6cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc6cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109cc6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc6d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc6da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc6dc je 0x109cc746 */
  if (C.zf) goto L_109cc746;
  /* 109cc6de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc6e2 jne 0x109cc6ed */
  if (!C.zf) goto L_109cc6ed;
  /* 109cc6e4 mov ecx, dword ptr [0x109effb4] */
  ECX = (r32((uint32_t)(0x109effb4)));
  /* 109cc6ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_109cc6ed:;
  /* 109cc6ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 109cc6f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc6f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_109cc6fd:;
  /* 109cc6fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 109cc703 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 109cc709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc70c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 109cc712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc714 je 0x109cc736 */
  if (C.zf) goto L_109cc736;
  /* 109cc716 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 109cc71c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cc71e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 109cc721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc723 je 0x109cc736 */
  if (C.zf) goto L_109cc736;
  /* 109cc725 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 109cc72b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc72e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 109cc734 jmp 0x109cc6fd */
  goto L_109cc6fd;
L_109cc736:;
  /* 109cc736 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 109cc73c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc73f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 109cc741 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 109cc744 jmp 0x109cc7a0 */
  goto L_109cc7a0;
L_109cc746:;
  /* 109cc746 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc74a jne 0x109cc754 */
  if (!C.zf) goto L_109cc754;
  /* 109cc74c mov eax, dword ptr [0x109effb0] */
  EAX = (r32((uint32_t)(0x109effb0)));
  /* 109cc751 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_109cc754:;
  /* 109cc754 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc757 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_109cc75d:;
  /* 109cc75d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 109cc763 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 109cc769 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc76c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 109cc772 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc774 je 0x109cc794 */
  if (C.zf) goto L_109cc794;
  /* 109cc776 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 109cc77c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109cc77f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc781 je 0x109cc794 */
  if (C.zf) goto L_109cc794;
  /* 109cc783 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 109cc789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc78c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 109cc792 jmp 0x109cc75d */
  goto L_109cc75d;
L_109cc794:;
  /* 109cc794 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 109cc79a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc79d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_109cc7a0:;
  /* 109cc7a0 jmp 0x109ccc07 */
  goto L_109ccc07;
L_109cc7a5:;
  /* 109cc7a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 109cc7a8 push edx */
  push32((uint32_t)(EDX));
  /* 109cc7a9 call 0x109cd010 */
  push32(0x109cc7aeu); f_109cd010();
  /* 109cc7ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc7b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 109cc7b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc7ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc7bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc7bf je 0x109cc7d3 */
  if (C.zf) goto L_109cc7d3;
  /* 109cc7c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 109cc7c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 109cc7ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 109cc7d1 jmp 0x109cc7e1 */
  goto L_109cc7e1;
L_109cc7d3:;
  /* 109cc7d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 109cc7d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 109cc7df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_109cc7e1:;
  /* 109cc7e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 109cc7eb jmp 0x109ccc07 */
  goto L_109ccc07;
L_109cc7f0:;
  /* 109cc7f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 109cc7f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 109cc7fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 109cc7fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_109cc800:;
  /* 109cc800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc803 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 109cc805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cc808 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 109cc80e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109cc811 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc818 jge 0x109cc826 */
  if ((C.sf==C.of)) goto L_109cc826;
  /* 109cc81a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 109cc824 jmp 0x109cc842 */
  goto L_109cc842;
L_109cc826:;
  /* 109cc826 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc82d jne 0x109cc842 */
  if (!C.zf) goto L_109cc842;
  /* 109cc82f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc833 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc836 jne 0x109cc842 */
  if (!C.zf) goto L_109cc842;
  /* 109cc838 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_109cc842:;
  /* 109cc842 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cc845 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc848 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 109cc84b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cc84e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cc851 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109cc853 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 109cc856 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 109cc85c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 109cc862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cc865 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc866 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 109cc86c push edx */
  push32((uint32_t)(EDX));
  /* 109cc86d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc871 push eax */
  push32((uint32_t)(EAX));
  /* 109cc872 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc875 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc876 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 109cc87c push edx */
  push32((uint32_t)(EDX));
  /* 109cc87d call dword ptr [0x109f03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f03a0))), 0x109cc883u);
  /* 109cc883 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc889 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc890 je 0x109cc8a8 */
  if (C.zf) goto L_109cc8a8;
  /* 109cc892 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc899 jne 0x109cc8a8 */
  if (!C.zf) goto L_109cc8a8;
  /* 109cc89b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc89e push ecx */
  push32((uint32_t)(ECX));
  /* 109cc89f call dword ptr [0x109f03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f03ac))), 0x109cc8a5u);
  /* 109cc8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cc8a8:;
  /* 109cc8a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 109cc8ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc8af jne 0x109cc8ca */
  if (!C.zf) goto L_109cc8ca;
  /* 109cc8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc8b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc8bb jne 0x109cc8ca */
  if (!C.zf) goto L_109cc8ca;
  /* 109cc8bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc8c1 call dword ptr [0x109f03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f03a4))), 0x109cc8c7u);
  /* 109cc8c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cc8ca:;
  /* 109cc8ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc8cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109cc8d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cc8d3 jne 0x109cc8e7 */
  if (!C.zf) goto L_109cc8e7;
  /* 109cc8d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc8d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 109cc8db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cc8de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc8e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc8e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_109cc8e7:;
  /* 109cc8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cc8ea push eax */
  push32((uint32_t)(EAX));
  /* 109cc8eb call 0x109c8070 */
  push32(0x109cc8f0u); f_109c8070();
  /* 109cc8f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc8f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109cc8f6 jmp 0x109ccc07 */
  goto L_109ccc07;
L_109cc8fb:;
  /* 109cc8fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc8fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc901 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cc904 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 109cc90e jmp 0x109cc995 */
  goto L_109cc995;
L_109cc913:;
  /* 109cc913 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 109cc91d jmp 0x109cc995 */
  goto L_109cc995;
L_109cc91f:;
  /* 109cc91f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_109cc929:;
  /* 109cc929 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 109cc933 jmp 0x109cc93f */
  goto L_109cc93f;
L_109cc935:;
  /* 109cc935 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_109cc93f:;
  /* 109cc93f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 109cc949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc94c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc952 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc954 je 0x109cc973 */
  if (C.zf) goto L_109cc973;
  /* 109cc956 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 109cc95d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 109cc963 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc966 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 109cc96c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_109cc973:;
  /* 109cc973 jmp 0x109cc995 */
  goto L_109cc995;
L_109cc975:;
  /* 109cc975 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 109cc97f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc982 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 109cc988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cc98a je 0x109cc995 */
  if (C.zf) goto L_109cc995;
  /* 109cc98c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc98f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109cc992 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cc995:;
  /* 109cc995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc998 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc99f je 0x109cc9be */
  if (C.zf) goto L_109cc9be;
  /* 109cc9a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 109cc9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc9a5 call 0x109cd030 */
  push32(0x109cc9aau); f_109cd030();
  /* 109cc9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc9ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 109cc9b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 109cc9b9 jmp 0x109cca4f */
  goto L_109cca4f;
L_109cc9be:;
  /* 109cc9be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc9c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 109cc9c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cc9c6 je 0x109cca10 */
  if (C.zf) goto L_109cca10;
  /* 109cc9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cc9cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 109cc9ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cc9d0 je 0x109cc9f0 */
  if (C.zf) goto L_109cc9f0;
  /* 109cc9d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 109cc9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cc9d6 call 0x109cd010 */
  push32(0x109cc9dbu); f_109cd010();
  /* 109cc9db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc9de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 109cc9e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109cc9e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 109cc9e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 109cc9ee jmp 0x109cca0e */
  goto L_109cca0e;
L_109cc9f0:;
  /* 109cc9f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 109cc9f3 push edx */
  push32((uint32_t)(EDX));
  /* 109cc9f4 call 0x109cd010 */
  push32(0x109cc9f9u); f_109cd010();
  /* 109cc9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cc9fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cca01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109cca02 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 109cca08 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_109cca0e:;
  /* 109cca0e jmp 0x109cca4f */
  goto L_109cca4f;
L_109cca10:;
  /* 109cca10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cca13 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 109cca16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cca18 je 0x109cca35 */
  if (C.zf) goto L_109cca35;
  /* 109cca1a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 109cca1d push ecx */
  push32((uint32_t)(ECX));
  /* 109cca1e call 0x109cd010 */
  push32(0x109cca23u); f_109cd010();
  /* 109cca23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cca26 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109cca27 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 109cca2d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 109cca33 jmp 0x109cca4f */
  goto L_109cca4f;
L_109cca35:;
  /* 109cca35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 109cca38 push edx */
  push32((uint32_t)(EDX));
  /* 109cca39 call 0x109cd010 */
  push32(0x109cca3eu); f_109cd010();
  /* 109cca3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cca41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cca43 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 109cca49 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_109cca4f:;
  /* 109cca4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cca52 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 109cca55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cca57 je 0x109cca97 */
  if (C.zf) goto L_109cca97;
  /* 109cca59 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cca60 jg 0x109cca97 */
  if ((!C.zf&&C.sf==C.of)) goto L_109cca97;
  /* 109cca62 jl 0x109cca6d */
  if ((C.sf!=C.of)) goto L_109cca6d;
  /* 109cca64 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cca6b jae 0x109cca97 */
  if (!C.cf) goto L_109cca97;
L_109cca6d:;
  /* 109cca6d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 109cca73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cca75 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 109cca7b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cca7e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cca80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 109cca86 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 109cca8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cca8f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109cca92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cca95 jmp 0x109ccaaf */
  goto L_109ccaaf;
L_109cca97:;
  /* 109cca97 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 109cca9d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 109ccaa3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 109ccaa9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_109ccaaf:;
  /* 109ccaaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccab2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 109ccab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccaba jne 0x109ccad7 */
  if (!C.zf) goto L_109ccad7;
  /* 109ccabc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 109ccac2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 109ccac8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 109ccacb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 109ccad1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_109ccad7:;
  /* 109ccad7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccade jge 0x109ccaec */
  if ((C.sf==C.of)) goto L_109ccaec;
  /* 109ccae0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 109ccaea jmp 0x109ccaf5 */
  goto L_109ccaf5;
L_109ccaec:;
  /* 109ccaec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccaef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 109ccaf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109ccaf5:;
  /* 109ccaf5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 109ccafb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 109ccb01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccb03 jne 0x109ccb0c */
  if (!C.zf) goto L_109ccb0c;
  /* 109ccb05 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109ccb0c:;
  /* 109ccb0c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 109ccb0f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_109ccb12:;
  /* 109ccb12 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 109ccb18 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 109ccb1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccb21 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 109ccb27 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccb29 jg 0x109ccb3f */
  if ((!C.zf&&C.sf==C.of)) goto L_109ccb3f;
  /* 109ccb2b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 109ccb31 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 109ccb37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ccb39 je 0x109ccbc0 */
  if (C.zf) goto L_109ccbc0;
L_109ccb3f:;
  /* 109ccb3f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 109ccb45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109ccb46 push edx */
  push32((uint32_t)(EDX));
  /* 109ccb47 push eax */
  push32((uint32_t)(EAX));
  /* 109ccb48 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 109ccb4e push edx */
  push32((uint32_t)(EDX));
  /* 109ccb4f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 109ccb55 push eax */
  push32((uint32_t)(EAX));
  /* 109ccb56 call 0x109cbed0 */
  push32(0x109ccb5bu); f_109cbed0();
  /* 109ccb5b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccb5e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 109ccb64 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 109ccb6a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109ccb6b push edx */
  push32((uint32_t)(EDX));
  /* 109ccb6c push eax */
  push32((uint32_t)(EAX));
  /* 109ccb6d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 109ccb73 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccb74 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 109ccb7a push edx */
  push32((uint32_t)(EDX));
  /* 109ccb7b call 0x109cbe60 */
  push32(0x109ccb80u); f_109cbe60();
  /* 109ccb80 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 109ccb86 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 109ccb8c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccb93 jle 0x109ccba7 */
  if ((C.zf||C.sf!=C.of)) goto L_109ccba7;
  /* 109ccb95 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 109ccb9b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccba1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_109ccba7:;
  /* 109ccba7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbaa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 109ccbb0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 109ccbb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbb5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccbb8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109ccbbb jmp 0x109ccb12 */
  goto L_109ccb12;
L_109ccbc0:;
  /* 109ccbc0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 109ccbc3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccbc6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109ccbc9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccbcf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109ccbd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccbd5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 109ccbda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccbdc je 0x109ccc07 */
  if (C.zf) goto L_109ccc07;
  /* 109ccbde mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbe1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109ccbe4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccbe7 jne 0x109ccbef */
  if (!C.zf) goto L_109ccbef;
  /* 109ccbe9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccbed jne 0x109ccc07 */
  if (!C.zf) goto L_109ccc07;
L_109ccbef:;
  /* 109ccbef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbf2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccbf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109ccbf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccbfb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 109ccbfe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ccc01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccc04 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_109ccc07:;
  /* 109ccc07 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccc0e jne 0x109ccde2 */
  if (!C.zf) goto L_109ccde2;
  /* 109ccc14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccc17 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 109ccc1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccc1c je 0x109ccc6d */
  if (C.zf) goto L_109ccc6d;
  /* 109ccc1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccc21 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 109ccc27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ccc29 je 0x109ccc3b */
  if (C.zf) goto L_109ccc3b;
  /* 109ccc2b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 109ccc32 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 109ccc39 jmp 0x109ccc6d */
  goto L_109ccc6d;
L_109ccc3b:;
  /* 109ccc3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccc3e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109ccc41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccc43 je 0x109ccc55 */
  if (C.zf) goto L_109ccc55;
  /* 109ccc45 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 109ccc4c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 109ccc53 jmp 0x109ccc6d */
  goto L_109ccc6d;
L_109ccc55:;
  /* 109ccc55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccc58 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 109ccc5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccc5d je 0x109ccc6d */
  if (C.zf) goto L_109ccc6d;
  /* 109ccc5f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 109ccc66 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_109ccc6d:;
  /* 109ccc6d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 109ccc73 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccc76 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccc79 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 109ccc7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccc82 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 109ccc85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccc87 jne 0x109ccca5 */
  if (!C.zf) goto L_109ccca5;
  /* 109ccc89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 109ccc8f push eax */
  push32((uint32_t)(EAX));
  /* 109ccc90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccc93 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccc94 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 109ccc9a push edx */
  push32((uint32_t)(EDX));
  /* 109ccc9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109ccc9d call 0x109ccf80 */
  push32(0x109ccca2u); f_109ccf80();
  /* 109ccca2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ccca5:;
  /* 109ccca5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 109cccab push eax */
  push32((uint32_t)(EAX));
  /* 109cccac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cccaf push ecx */
  push32((uint32_t)(ECX));
  /* 109cccb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cccb3 push edx */
  push32((uint32_t)(EDX));
  /* 109cccb4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 109cccba push eax */
  push32((uint32_t)(EAX));
  /* 109cccbb call 0x109ccfc0 */
  push32(0x109cccc0u); f_109ccfc0();
  /* 109cccc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cccc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cccc6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 109cccc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ccccb je 0x109cccf3 */
  if (C.zf) goto L_109cccf3;
  /* 109ccccd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cccd0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109cccd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cccd5 jne 0x109cccf3 */
  if (!C.zf) goto L_109cccf3;
  /* 109cccd7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 109cccdd push eax */
  push32((uint32_t)(EAX));
  /* 109cccde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccce1 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccce2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 109ccce8 push edx */
  push32((uint32_t)(EDX));
  /* 109ccce9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 109ccceb call 0x109ccf80 */
  push32(0x109cccf0u); f_109ccf80();
  /* 109cccf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cccf3:;
  /* 109cccf3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cccf7 je 0x109ccda1 */
  if (C.zf) goto L_109ccda1;
  /* 109cccfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccd01 jle 0x109ccda1 */
  if ((C.zf||C.sf!=C.of)) goto L_109ccda1;
  /* 109ccd07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccd0a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 109ccd10 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ccd13 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_109ccd19:;
  /* 109ccd19 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 109ccd1f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 109ccd25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccd28 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 109ccd2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccd30 je 0x109ccd9f */
  if (C.zf) goto L_109ccd9f;
  /* 109ccd32 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 109ccd38 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 109ccd3b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 109ccd42 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 109ccd49 push eax */
  push32((uint32_t)(EAX));
  /* 109ccd4a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 109ccd50 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccd51 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 109ccd57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccd5a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 109ccd60 call 0x109ce130 */
  push32(0x109ccd65u); f_109ce130();
  /* 109ccd65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccd68 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 109ccd6e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccd75 jg 0x109ccd79 */
  if ((!C.zf&&C.sf==C.of)) goto L_109ccd79;
  /* 109ccd77 jmp 0x109ccd9f */
  goto L_109ccd9f;
L_109ccd79:;
  /* 109ccd79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 109ccd7f push eax */
  push32((uint32_t)(EAX));
  /* 109ccd80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccd83 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccd84 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 109ccd8a push edx */
  push32((uint32_t)(EDX));
  /* 109ccd8b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 109ccd91 push eax */
  push32((uint32_t)(EAX));
  /* 109ccd92 call 0x109ccfc0 */
  push32(0x109ccd97u); f_109ccfc0();
  /* 109ccd97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccd9a jmp 0x109ccd19 */
  goto L_109ccd19;
L_109ccd9f:;
  /* 109ccd9f jmp 0x109ccdbc */
  goto L_109ccdbc;
L_109ccda1:;
  /* 109ccda1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 109ccda7 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccda8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccdab push edx */
  push32((uint32_t)(EDX));
  /* 109ccdac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109ccdaf push eax */
  push32((uint32_t)(EAX));
  /* 109ccdb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109ccdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccdb4 call 0x109ccfc0 */
  push32(0x109ccdb9u); f_109ccfc0();
  /* 109ccdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ccdbc:;
  /* 109ccdbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccdbf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109ccdc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ccdc4 je 0x109ccde2 */
  if (C.zf) goto L_109ccde2;
  /* 109ccdc6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 109ccdcc push eax */
  push32((uint32_t)(EAX));
  /* 109ccdcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccdd0 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccdd1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 109ccdd7 push edx */
  push32((uint32_t)(EDX));
  /* 109ccdd8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109ccdda call 0x109ccf80 */
  push32(0x109ccddfu); f_109ccf80();
  /* 109ccddf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ccde2:;
  /* 109ccde2 jmp 0x109cc1f4 */
  goto L_109cc1f4;
L_109ccde7:;
  /* 109ccde7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 109ccded pop edi */
  EDI = (pop32());
  /* 109ccdee pop esi */
  ESI = (pop32());
  /* 109ccdef pop ebx */
  EBX = (pop32());
  /* 109ccdf0 mov esp, ebp */
  ESP = (EBP);
  /* 109ccdf2 pop ebp */
  EBP = (pop32());
  /* 109ccdf3 ret  */
  ESPCHK(0x109cc1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x109ccf00 (119 bytes, 44 insns) */
void f_109ccf00(void) {
  FTRACE(0x109ccf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ccf00 push ebp */
  push32((uint32_t)(EBP));
  /* 109ccf01 mov ebp, esp */
  EBP = (ESP);
  /* 109ccf03 push ecx */
  push32((uint32_t)(ECX));
  /* 109ccf04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf07 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109ccf0a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccf0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf10 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109ccf13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf16 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccf1a jl 0x109ccf42 */
  if ((C.sf!=C.of)) goto L_109ccf42;
  /* 109ccf1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109ccf21 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 109ccf24 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 109ccf26 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 109ccf2a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109ccf30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109ccf33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf36 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109ccf38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccf3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109ccf40 jmp 0x109ccf55 */
  goto L_109ccf55;
L_109ccf42:;
  /* 109ccf42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf45 push edx */
  push32((uint32_t)(EDX));
  /* 109ccf46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccf49 push eax */
  push32((uint32_t)(EAX));
  /* 109ccf4a call 0x109cbf50 */
  push32(0x109ccf4fu); f_109cbf50();
  /* 109ccf4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccf52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109ccf55:;
  /* 109ccf55 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccf59 jne 0x109ccf66 */
  if (!C.zf) goto L_109ccf66;
  /* 109ccf5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ccf5e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 109ccf64 jmp 0x109ccf73 */
  goto L_109ccf73;
L_109ccf66:;
  /* 109ccf66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ccf69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109ccf6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccf6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ccf71 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_109ccf73:;
  /* 109ccf73 mov esp, ebp */
  ESP = (EBP);
  /* 109ccf75 pop ebp */
  EBP = (pop32());
  /* 109ccf76 ret  */
  ESPCHK(0x109ccf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf80 @ 0x109ccf80 (53 bytes, 23 insns) */
void f_109ccf80(void) {
  FTRACE(0x109ccf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ccf80 push ebp */
  push32((uint32_t)(EBP));
  /* 109ccf81 mov ebp, esp */
  EBP = (ESP);
L_109ccf83:;
  /* 109ccf83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccf89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccf8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109ccf8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccf91 jle 0x109ccfb3 */
  if ((C.zf||C.sf!=C.of)) goto L_109ccfb3;
  /* 109ccf93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109ccf96 push edx */
  push32((uint32_t)(EDX));
  /* 109ccf97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ccf9a push eax */
  push32((uint32_t)(EAX));
  /* 109ccf9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccf9e push ecx */
  push32((uint32_t)(ECX));
  /* 109ccf9f call 0x109ccf00 */
  push32(0x109ccfa4u); f_109ccf00();
  /* 109ccfa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccfa7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109ccfaa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ccfad jne 0x109ccfb1 */
  if (!C.zf) goto L_109ccfb1;
  /* 109ccfaf jmp 0x109ccfb3 */
  goto L_109ccfb3;
L_109ccfb1:;
  /* 109ccfb1 jmp 0x109ccf83 */
  goto L_109ccf83;
L_109ccfb3:;
  /* 109ccfb3 pop ebp */
  EBP = (pop32());
  /* 109ccfb4 ret  */
  ESPCHK(0x109ccf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x109ccfc0 (74 bytes, 31 insns) */
void f_109ccfc0(void) {
  FTRACE(0x109ccfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ccfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ccfc1 mov ebp, esp */
  EBP = (ESP);
  /* 109ccfc3 push ecx */
  push32((uint32_t)(ECX));
L_109ccfc4:;
  /* 109ccfc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccfc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ccfca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ccfcd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109ccfd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ccfd2 jle 0x109cd006 */
  if ((C.zf||C.sf!=C.of)) goto L_109cd006;
  /* 109ccfd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109ccfd7 push edx */
  push32((uint32_t)(EDX));
  /* 109ccfd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109ccfdb push eax */
  push32((uint32_t)(EAX));
  /* 109ccfdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccfdf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109ccfe2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109ccfe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ccfe8 push eax */
  push32((uint32_t)(EAX));
  /* 109ccfe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ccfec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccfef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109ccff2 call 0x109ccf00 */
  push32(0x109ccff7u); f_109ccf00();
  /* 109ccff7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ccffa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109ccffd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd000 jne 0x109cd004 */
  if (!C.zf) goto L_109cd004;
  /* 109cd002 jmp 0x109cd006 */
  goto L_109cd006;
L_109cd004:;
  /* 109cd004 jmp 0x109ccfc4 */
  goto L_109ccfc4;
L_109cd006:;
  /* 109cd006 mov esp, ebp */
  ESP = (EBP);
  /* 109cd008 pop ebp */
  EBP = (pop32());
  /* 109cd009 ret  */
  ESPCHK(0x109ccfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x109cd010 (26 bytes, 12 insns) */
void f_109cd010(void) {
  FTRACE(0x109cd010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd010 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd011 mov ebp, esp */
  EBP = (ESP);
  /* 109cd013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd016 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd018 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd01b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd01e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109cd020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd023 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd025 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 109cd028 pop ebp */
  EBP = (pop32());
  /* 109cd029 ret  */
  ESPCHK(0x109cd010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x109cd030 (31 bytes, 14 insns) */
void f_109cd030(void) {
  FTRACE(0x109cd030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd030 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd031 mov ebp, esp */
  EBP = (ESP);
  /* 109cd033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd036 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd038 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd03e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109cd040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd043 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd045 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd048 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109cd04a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109cd04d pop ebp */
  EBP = (pop32());
  /* 109cd04e ret  */
  ESPCHK(0x109cd030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d050 @ 0x109cd050 (27 bytes, 12 insns) */
void f_109cd050(void) {
  FTRACE(0x109cd050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd050 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd051 mov ebp, esp */
  EBP = (ESP);
  /* 109cd053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd056 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd058 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd05b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd05e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109cd060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109cd065 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 109cd069 pop ebp */
  EBP = (pop32());
  /* 109cd06a ret  */
  ESPCHK(0x109cd050u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x109cd070 (145 bytes, 42 insns) */
void f_109cd070(void) {
  FTRACE(0x109cd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd070 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd071 mov ebp, esp */
  EBP = (ESP);
  /* 109cd073 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd074 call 0x109cd120 */
  push32(0x109cd079u); f_109cd120();
  /* 109cd079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd07c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109cd07e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cd085 jmp 0x109cd090 */
  goto L_109cd090;
L_109cd087:;
  /* 109cd087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd08a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd08d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cd090:;
  /* 109cd090 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd094 jae 0x109cd0ba */
  if (!C.cf) goto L_109cd0ba;
  /* 109cd096 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd099 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd09c cmp ecx, dword ptr [eax*8 + 0x109effb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109effb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd0a3 jne 0x109cd0b8 */
  if (!C.zf) goto L_109cd0b8;
  /* 109cd0a5 call 0x109cd110 */
  push32(0x109cd0aau); f_109cd110();
  /* 109cd0aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd0ad mov ecx, dword ptr [edx*8 + 0x109effbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x109effbc)));
  /* 109cd0b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109cd0b6 jmp 0x109cd0fd */
  goto L_109cd0fd;
L_109cd0b8:;
  /* 109cd0b8 jmp 0x109cd087 */
  goto L_109cd087;
L_109cd0ba:;
  /* 109cd0ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd0be jb 0x109cd0d3 */
  if (C.cf) goto L_109cd0d3;
  /* 109cd0c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd0c4 ja 0x109cd0d3 */
  if ((!C.cf&&!C.zf)) goto L_109cd0d3;
  /* 109cd0c6 call 0x109cd110 */
  push32(0x109cd0cbu); f_109cd110();
  /* 109cd0cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 109cd0d1 jmp 0x109cd0fd */
  goto L_109cd0fd;
L_109cd0d3:;
  /* 109cd0d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd0da jb 0x109cd0f2 */
  if (C.cf) goto L_109cd0f2;
  /* 109cd0dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd0e3 ja 0x109cd0f2 */
  if ((!C.cf&&!C.zf)) goto L_109cd0f2;
  /* 109cd0e5 call 0x109cd110 */
  push32(0x109cd0eau); f_109cd110();
  /* 109cd0ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 109cd0f0 jmp 0x109cd0fd */
  goto L_109cd0fd;
L_109cd0f2:;
  /* 109cd0f2 call 0x109cd110 */
  push32(0x109cd0f7u); f_109cd110();
  /* 109cd0f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_109cd0fd:;
  /* 109cd0fd mov esp, ebp */
  ESP = (EBP);
  /* 109cd0ff pop ebp */
  EBP = (pop32());
  /* 109cd100 ret  */
  ESPCHK(0x109cd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x109cd110 (13 bytes, 6 insns) */
void f_109cd110(void) {
  FTRACE(0x109cd110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd110 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd111 mov ebp, esp */
  EBP = (ESP);
  /* 109cd113 call 0x109c4c80 */
  push32(0x109cd118u); f_109c4c80();
  /* 109cd118 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd11b pop ebp */
  EBP = (pop32());
  /* 109cd11c ret  */
  ESPCHK(0x109cd110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x109cd120 (13 bytes, 6 insns) */
void f_109cd120(void) {
  FTRACE(0x109cd120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd120 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd121 mov ebp, esp */
  EBP = (ESP);
  /* 109cd123 call 0x109c4c80 */
  push32(0x109cd128u); f_109c4c80();
  /* 109cd128 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd12b pop ebp */
  EBP = (pop32());
  /* 109cd12c ret  */
  ESPCHK(0x109cd120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d130 @ 0x109cd130 (664 bytes, 258 insns) [15 switch table(s)] */
void f_109cd130(void) {
  FTRACE(0x109cd130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd130 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd131 mov ebp, esp */
  EBP = (ESP);
  /* 109cd133 push edi */
  push32((uint32_t)(EDI));
  /* 109cd134 push esi */
  push32((uint32_t)(ESI));
  /* 109cd135 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd138 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd13b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd13e mov eax, ecx */
  EAX = (ECX);
  /* 109cd140 mov edx, ecx */
  EDX = (ECX);
  /* 109cd142 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd144 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd146 jbe 0x109cd150 */
  if ((C.cf||C.zf)) goto L_109cd150;
  /* 109cd148 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd14a jb 0x109cd2c8 */
  if (C.cf) goto L_109cd2c8;
L_109cd150:;
  /* 109cd150 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109cd156 jne 0x109cd16c */
  if (!C.zf) goto L_109cd16c;
  /* 109cd158 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd15b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109cd15e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd161 jb 0x109cd18c */
  if (C.cf) goto L_109cd18c;
  /* 109cd163 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd165 jmp dword ptr [edx*4 + 0x109cd278] */
  switch (EDX) {
    case 0: goto L_109cd288;
    case 1: goto L_109cd290;
    case 2: goto L_109cd29c;
    case 3: goto L_109cd2b0;
    default: x86_unimpl("switch@0x109cd165 out of table"); return;
  }
L_109cd16c:;
  /* 109cd16c mov eax, edi */
  EAX = (EDI);
  /* 109cd16e mov edx, 3 */
  EDX = (0x3u);
  /* 109cd173 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd176 jb 0x109cd184 */
  if (C.cf) goto L_109cd184;
  /* 109cd178 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109cd17b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd17d jmp dword ptr [eax*4 + 0x109cd190] */
  switch (EAX) {
    case 1: goto L_109cd1a0;
    case 2: goto L_109cd1cc;
    case 3: goto L_109cd1f0;
    default: x86_unimpl("switch@0x109cd17d out of table"); return;
  }
L_109cd184:;
  /* 109cd184 jmp dword ptr [ecx*4 + 0x109cd288] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109cd288)))); return;
  /* 109cd18b nop  */
  /* nop */
L_109cd18c:;
  /* 109cd18c jmp dword ptr [ecx*4 + 0x109cd20c] */
  switch (ECX) {
    case 0: goto L_109cd26f;
    case 1: goto L_109cd25c;
    case 2: goto L_109cd254;
    case 3: goto L_109cd24c;
    case 4: goto L_109cd244;
    case 5: goto L_109cd23c;
    case 6: goto L_109cd234;
    case 7: goto L_109cd22c;
    default: x86_unimpl("switch@0x109cd18c out of table"); return;
  }
  /* 109cd193 nop  */
  /* nop */
L_109cd1a0:;
  /* 109cd1a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd1a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd1a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd1a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd1a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd1ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd1af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd1b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd1b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd1b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd1bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd1be jb 0x109cd18c */
  if (C.cf) goto L_109cd18c;
  /* 109cd1c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd1c2 jmp dword ptr [edx*4 + 0x109cd278] */
  switch (EDX) {
    case 0: goto L_109cd288;
    case 1: goto L_109cd290;
    case 2: goto L_109cd29c;
    case 3: goto L_109cd2b0;
    default: x86_unimpl("switch@0x109cd1c2 out of table"); return;
  }
  /* 109cd1c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd1cc:;
  /* 109cd1cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd1ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd1d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd1d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd1d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd1d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd1db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd1de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd1e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd1e4 jb 0x109cd18c */
  if (C.cf) goto L_109cd18c;
  /* 109cd1e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd1e8 jmp dword ptr [edx*4 + 0x109cd278] */
  switch (EDX) {
    case 0: goto L_109cd288;
    case 1: goto L_109cd290;
    case 2: goto L_109cd29c;
    case 3: goto L_109cd2b0;
    default: x86_unimpl("switch@0x109cd1e8 out of table"); return;
  }
  /* 109cd1ef nop  */
  /* nop */
L_109cd1f0:;
  /* 109cd1f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd1f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd1f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd1f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109cd1f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd1fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109cd1fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd1fe jb 0x109cd18c */
  if (C.cf) goto L_109cd18c;
  /* 109cd200 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd202 jmp dword ptr [edx*4 + 0x109cd278] */
  switch (EDX) {
    case 0: goto L_109cd288;
    case 1: goto L_109cd290;
    case 2: goto L_109cd29c;
    case 3: goto L_109cd2b0;
    default: x86_unimpl("switch@0x109cd202 out of table"); return;
  }
  /* 109cd209 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd22c:;
  /* 109cd22c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109cd230 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109cd234:;
  /* 109cd234 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109cd238 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109cd23c:;
  /* 109cd23c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 109cd240 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_109cd244:;
  /* 109cd244 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 109cd248 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_109cd24c:;
  /* 109cd24c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109cd250 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109cd254:;
  /* 109cd254 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109cd258 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109cd25c:;
  /* 109cd25c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109cd260 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109cd264 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109cd26b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd26d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109cd26f:;
  /* 109cd26f jmp dword ptr [edx*4 + 0x109cd278] */
  switch (EDX) {
    case 0: goto L_109cd288;
    case 1: goto L_109cd290;
    case 2: goto L_109cd29c;
    case 3: goto L_109cd2b0;
    default: x86_unimpl("switch@0x109cd26f out of table"); return;
  }
  /* 109cd276 mov edi, edi */
  EDI = (EDI);
L_109cd288:;
  /* 109cd288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd28b pop esi */
  ESI = (pop32());
  /* 109cd28c pop edi */
  EDI = (pop32());
  /* 109cd28d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd28e ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd28f nop  */
  /* nop */
L_109cd290:;
  /* 109cd290 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd292 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd297 pop esi */
  ESI = (pop32());
  /* 109cd298 pop edi */
  EDI = (pop32());
  /* 109cd299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd29a ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd29b nop  */
  /* nop */
L_109cd29c:;
  /* 109cd29c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd29e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd2a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd2a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd2a9 pop esi */
  ESI = (pop32());
  /* 109cd2aa pop edi */
  EDI = (pop32());
  /* 109cd2ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd2ac ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd2ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd2b0:;
  /* 109cd2b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109cd2b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109cd2b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd2b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd2ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd2bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd2c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd2c3 pop esi */
  ESI = (pop32());
  /* 109cd2c4 pop edi */
  EDI = (pop32());
  /* 109cd2c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd2c6 ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd2c7 nop  */
  /* nop */
L_109cd2c8:;
  /* 109cd2c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109cd2cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109cd2d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109cd2d6 jne 0x109cd2fc */
  if (!C.zf) goto L_109cd2fc;
  /* 109cd2d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd2db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109cd2de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd2e1 jb 0x109cd2f0 */
  if (C.cf) goto L_109cd2f0;
  /* 109cd2e3 std  */
  C.df=1;
  /* 109cd2e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd2e6 cld  */
  C.df=0;
  /* 109cd2e7 jmp dword ptr [edx*4 + 0x109cd410] */
  switch (EDX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd2e7 out of table"); return;
  }
  /* 109cd2ee mov edi, edi */
  EDI = (EDI);
L_109cd2f0:;
  /* 109cd2f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cd2f2 jmp dword ptr [ecx*4 + 0x109cd3c0] */
  switch (ECX) {
    case 0: goto L_109cd407;
    default: x86_unimpl("switch@0x109cd2f2 out of table"); return;
  }
  /* 109cd2f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd2fc:;
  /* 109cd2fc mov eax, edi */
  EAX = (EDI);
  /* 109cd2fe mov edx, 3 */
  EDX = (0x3u);
  /* 109cd303 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd306 jb 0x109cd314 */
  if (C.cf) goto L_109cd314;
  /* 109cd308 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109cd30b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd30d jmp dword ptr [eax*4 + 0x109cd318] */
  switch (EAX) {
    case 1: goto L_109cd328;
    case 2: goto L_109cd348;
    case 3: goto L_109cd370;
    default: x86_unimpl("switch@0x109cd30d out of table"); return;
  }
L_109cd314:;
  /* 109cd314 jmp dword ptr [ecx*4 + 0x109cd410] */
  switch (ECX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd314 out of table"); return;
  }
  /* 109cd31b nop  */
  /* nop */
L_109cd328:;
  /* 109cd328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd32b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd32d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd330 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109cd331 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd334 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109cd335 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd338 jb 0x109cd2f0 */
  if (C.cf) goto L_109cd2f0;
  /* 109cd33a std  */
  C.df=1;
  /* 109cd33b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd33d cld  */
  C.df=0;
  /* 109cd33e jmp dword ptr [edx*4 + 0x109cd410] */
  switch (EDX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd33e out of table"); return;
  }
  /* 109cd345 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd348:;
  /* 109cd348 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd34b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd34d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd350 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd353 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd356 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd359 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd35c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd35f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd362 jb 0x109cd2f0 */
  if (C.cf) goto L_109cd2f0;
  /* 109cd364 std  */
  C.df=1;
  /* 109cd365 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd367 cld  */
  C.df=0;
  /* 109cd368 jmp dword ptr [edx*4 + 0x109cd410] */
  switch (EDX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd368 out of table"); return;
  }
  /* 109cd36f nop  */
  /* nop */
L_109cd370:;
  /* 109cd370 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd373 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109cd375 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd378 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd37b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd37e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd381 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109cd384 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd387 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd38a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd38d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd390 jb 0x109cd2f0 */
  if (C.cf) goto L_109cd2f0;
  /* 109cd396 std  */
  C.df=1;
  /* 109cd397 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109cd399 cld  */
  C.df=0;
  /* 109cd39a jmp dword ptr [edx*4 + 0x109cd410] */
  switch (EDX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd39a out of table"); return;
  }
  /* 109cd3a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109cd3a5 rcr dword ptr [eax + edx + 0x109cd3cc], cl */
  { uint32_t _v=(r32((uint32_t)(EAX + EDX*1 + 0x109cd3cc)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EAX + EDX*1 + 0x109cd3cc), (_v)); C.cf=_cf; }
  /* 109cd3ac aam 0xd3 */
  x86_unimpl("aam @ 0x109cd3ac");
  /* 109cd3ae pushfd  */
  x86_unimpl("pushfd @ 0x109cd3ae");
  /* 109cd3af adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109cd3b1 rcr dword ptr [eax + edx + 0x109cd3e4], cl */
  { uint32_t _v=(r32((uint32_t)(EAX + EDX*1 + 0x109cd3e4)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EAX + EDX*1 + 0x109cd3e4), (_v)); C.cf=_cf; }
  /* 109cd3b8 in al, dx */
  x86_unimpl("in @ 0x109cd3b8");
  /* 109cd3b9 rcr dword ptr [eax + edx + 0x109cd3f4], cl */
  { uint32_t _v=(r32((uint32_t)(EAX + EDX*1 + 0x109cd3f4)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } w32((uint32_t)(EAX + EDX*1 + 0x109cd3f4), (_v)); C.cf=_cf; }
  /* 109cd3c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109cd3c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109cd3cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109cd3d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109cd3d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109cd3d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109cd3dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109cd3e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109cd3e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109cd3e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109cd3ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109cd3f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109cd3f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109cd3f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109cd3fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109cd403 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd405 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109cd407:;
  /* 109cd407 jmp dword ptr [edx*4 + 0x109cd410] */
  switch (EDX) {
    case 0: goto L_109cd420;
    case 1: goto L_109cd428;
    case 2: goto L_109cd438;
    case 3: goto L_109cd44c;
    default: x86_unimpl("switch@0x109cd407 out of table"); return;
  }
  /* 109cd40e mov edi, edi */
  EDI = (EDI);
L_109cd420:;
  /* 109cd420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd423 pop esi */
  ESI = (pop32());
  /* 109cd424 pop edi */
  EDI = (pop32());
  /* 109cd425 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd426 ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd427 nop  */
  /* nop */
L_109cd428:;
  /* 109cd428 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd42b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd42e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd431 pop esi */
  ESI = (pop32());
  /* 109cd432 pop edi */
  EDI = (pop32());
  /* 109cd433 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd434 ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd435 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109cd438:;
  /* 109cd438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd43b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd43e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd441 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd447 pop esi */
  ESI = (pop32());
  /* 109cd448 pop edi */
  EDI = (pop32());
  /* 109cd449 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd44a ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
  /* 109cd44b nop  */
  /* nop */
L_109cd44c:;
  /* 109cd44c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109cd44f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109cd452 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109cd455 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109cd458 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109cd45b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109cd45e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd461 pop esi */
  ESI = (pop32());
  /* 109cd462 pop edi */
  EDI = (pop32());
  /* 109cd463 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109cd464 ret  */
  ESPCHK(0x109cd130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x109cd470 (421 bytes, 148 insns) */
void f_109cd470(void) {
  FTRACE(0x109cd470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd470 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd471 mov ebp, esp */
  EBP = (ESP);
  /* 109cd473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109cd475 push 0x109ed288 */
  push32((uint32_t)(0x109ed288u));
  /* 109cd47a push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109cd47f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109cd485 push eax */
  push32((uint32_t)(EAX));
  /* 109cd486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109cd48d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd490 push ebx */
  push32((uint32_t)(EBX));
  /* 109cd491 push esi */
  push32((uint32_t)(ESI));
  /* 109cd492 push edi */
  push32((uint32_t)(EDI));
  /* 109cd493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109cd496 cmp dword ptr [0x109f1874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd49d jne 0x109cd4ee */
  if (!C.zf) goto L_109cd4ee;
  /* 109cd49f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109cd4a2 push eax */
  push32((uint32_t)(EAX));
  /* 109cd4a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd4a5 push 0x109ed280 */
  push32((uint32_t)(0x109ed280u));
  /* 109cd4aa push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd4ac call dword ptr [0x109f42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ec))), 0x109cd4b2u);
  /* 109cd4b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd4b4 je 0x109cd4c2 */
  if (C.zf) goto L_109cd4c2;
  /* 109cd4b6 mov dword ptr [0x109f1874], 1 */
  w32((uint32_t)(0x109f1874), (0x1u));
  /* 109cd4c0 jmp 0x109cd4ee */
  goto L_109cd4ee;
L_109cd4c2:;
  /* 109cd4c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 109cd4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd4c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd4c8 push 0x109ed27c */
  push32((uint32_t)(0x109ed27cu));
  /* 109cd4cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd4cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd4d1 call dword ptr [0x109f42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42fc))), 0x109cd4d7u);
  /* 109cd4d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd4d9 je 0x109cd4e7 */
  if (C.zf) goto L_109cd4e7;
  /* 109cd4db mov dword ptr [0x109f1874], 2 */
  w32((uint32_t)(0x109f1874), (0x2u));
  /* 109cd4e5 jmp 0x109cd4ee */
  goto L_109cd4ee;
L_109cd4e7:;
  /* 109cd4e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd4e9 jmp 0x109cd618 */
  goto L_109cd618;
L_109cd4ee:;
  /* 109cd4ee cmp dword ptr [0x109f1874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f1874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd4f5 jne 0x109cd525 */
  if (!C.zf) goto L_109cd525;
  /* 109cd4f7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd4fb jne 0x109cd506 */
  if (!C.zf) goto L_109cd506;
  /* 109cd4fd mov edx, dword ptr [0x109f1880] */
  EDX = (r32((uint32_t)(0x109f1880)));
  /* 109cd503 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_109cd506:;
  /* 109cd506 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd509 push eax */
  push32((uint32_t)(EAX));
  /* 109cd50a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd50d push ecx */
  push32((uint32_t)(ECX));
  /* 109cd50e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd511 push edx */
  push32((uint32_t)(EDX));
  /* 109cd512 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd515 push eax */
  push32((uint32_t)(EAX));
  /* 109cd516 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109cd519 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd51a call dword ptr [0x109f42fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42fc))), 0x109cd520u);
  /* 109cd520 jmp 0x109cd618 */
  goto L_109cd618;
L_109cd525:;
  /* 109cd525 cmp dword ptr [0x109f1874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd52c jne 0x109cd616 */
  if (!C.zf) goto L_109cd616;
  /* 109cd532 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd536 jne 0x109cd541 */
  if (!C.zf) goto L_109cd541;
  /* 109cd538 mov edx, dword ptr [0x109f1890] */
  EDX = (r32((uint32_t)(0x109f1890)));
  /* 109cd53e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_109cd541:;
  /* 109cd541 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd543 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd545 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd548 push eax */
  push32((uint32_t)(EAX));
  /* 109cd549 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd54c push ecx */
  push32((uint32_t)(ECX));
  /* 109cd54d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 109cd550 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cd552 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd554 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 109cd557 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd55a push edx */
  push32((uint32_t)(EDX));
  /* 109cd55b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109cd55e push eax */
  push32((uint32_t)(EAX));
  /* 109cd55f call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109cd565u);
  /* 109cd565 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109cd568 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd56c jne 0x109cd575 */
  if (!C.zf) goto L_109cd575;
  /* 109cd56e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd570 jmp 0x109cd618 */
  goto L_109cd618;
L_109cd575:;
  /* 109cd575 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cd57c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd57f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109cd581 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd584 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109cd586 call 0x109c83e0 */
  push32(0x109cd58bu); f_109c83e0();
  /* 109cd58b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 109cd58e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109cd591 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cd594 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109cd597 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd59a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 109cd59c push edx */
  push32((uint32_t)(EDX));
  /* 109cd59d push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd59f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd5a2 push eax */
  push32((uint32_t)(EAX));
  /* 109cd5a3 call 0x109c8fb0 */
  push32(0x109cd5a8u); f_109c8fb0();
  /* 109cd5a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd5ab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109cd5b2 jmp 0x109cd5cb */
  goto L_109cd5cb;
  /* 109cd5b4 mov eax, 1 */
  EAX = (0x1u);
  /* 109cd5b9 ret  */
  ESPCHK(0x109cd470u, _esp0);
  ESP += 4; return;
  /* 109cd5ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109cd5bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109cd5c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cd5cb:;
  /* 109cd5cb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd5cf jne 0x109cd5d5 */
  if (!C.zf) goto L_109cd5d5;
  /* 109cd5d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd5d3 jmp 0x109cd618 */
  goto L_109cd618;
L_109cd5d5:;
  /* 109cd5d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd5d8 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd5d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd5dc push edx */
  push32((uint32_t)(EDX));
  /* 109cd5dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd5e0 push eax */
  push32((uint32_t)(EAX));
  /* 109cd5e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd5e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd5e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109cd5ea push edx */
  push32((uint32_t)(EDX));
  /* 109cd5eb call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109cd5f1u);
  /* 109cd5f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109cd5f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd5f8 jne 0x109cd5fe */
  if (!C.zf) goto L_109cd5fe;
  /* 109cd5fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd5fc jmp 0x109cd618 */
  goto L_109cd618;
L_109cd5fe:;
  /* 109cd5fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd601 push eax */
  push32((uint32_t)(EAX));
  /* 109cd602 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cd605 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd606 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd609 push edx */
  push32((uint32_t)(EDX));
  /* 109cd60a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd60d push eax */
  push32((uint32_t)(EAX));
  /* 109cd60e call dword ptr [0x109f42ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42ec))), 0x109cd614u);
  /* 109cd614 jmp 0x109cd618 */
  goto L_109cd618;
L_109cd616:;
  /* 109cd616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cd618:;
  /* 109cd618 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 109cd61b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cd61e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109cd625 pop edi */
  EDI = (pop32());
  /* 109cd626 pop esi */
  ESI = (pop32());
  /* 109cd627 pop ebx */
  EBX = (pop32());
  /* 109cd628 mov esp, ebp */
  ESP = (EBP);
  /* 109cd62a pop ebp */
  EBP = (pop32());
  /* 109cd62b ret  */
  ESPCHK(0x109cd470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d630 @ 0x109cd630 (727 bytes, 263 insns) */
void f_109cd630(void) {
  FTRACE(0x109cd630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd630 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd631 mov ebp, esp */
  EBP = (ESP);
  /* 109cd633 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109cd635 push 0x109ed298 */
  push32((uint32_t)(0x109ed298u));
  /* 109cd63a push 0x109ce348 */
  push32((uint32_t)(0x109ce348u));
  /* 109cd63f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109cd645 push eax */
  push32((uint32_t)(EAX));
  /* 109cd646 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109cd64d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd650 push ebx */
  push32((uint32_t)(EBX));
  /* 109cd651 push esi */
  push32((uint32_t)(ESI));
  /* 109cd652 push edi */
  push32((uint32_t)(EDI));
  /* 109cd653 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109cd656 cmp dword ptr [0x109f1898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd65d jne 0x109cd6b6 */
  if (!C.zf) goto L_109cd6b6;
  /* 109cd65f push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd661 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd663 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd665 push 0x109ed280 */
  push32((uint32_t)(0x109ed280u));
  /* 109cd66a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cd66f push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd671 call dword ptr [0x109f42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f0))), 0x109cd677u);
  /* 109cd677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd679 je 0x109cd687 */
  if (C.zf) goto L_109cd687;
  /* 109cd67b mov dword ptr [0x109f1898], 1 */
  w32((uint32_t)(0x109f1898), (0x1u));
  /* 109cd685 jmp 0x109cd6b6 */
  goto L_109cd6b6;
L_109cd687:;
  /* 109cd687 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd689 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd68b push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd68d push 0x109ed27c */
  push32((uint32_t)(0x109ed27cu));
  /* 109cd692 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109cd697 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd699 call dword ptr [0x109f42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e8))), 0x109cd69fu);
  /* 109cd69f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd6a1 je 0x109cd6af */
  if (C.zf) goto L_109cd6af;
  /* 109cd6a3 mov dword ptr [0x109f1898], 2 */
  w32((uint32_t)(0x109f1898), (0x2u));
  /* 109cd6ad jmp 0x109cd6b6 */
  goto L_109cd6b6;
L_109cd6af:;
  /* 109cd6af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd6b1 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd6b6:;
  /* 109cd6b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd6ba jle 0x109cd6cf */
  if ((C.zf||C.sf!=C.of)) goto L_109cd6cf;
  /* 109cd6bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd6bf push eax */
  push32((uint32_t)(EAX));
  /* 109cd6c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd6c4 call 0x109cd940 */
  push32(0x109cd6c9u); f_109cd940();
  /* 109cd6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd6cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_109cd6cf:;
  /* 109cd6cf cmp dword ptr [0x109f1898], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f1898))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd6d6 jne 0x109cd6fb */
  if (!C.zf) goto L_109cd6fb;
  /* 109cd6d8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109cd6db push edx */
  push32((uint32_t)(EDX));
  /* 109cd6dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109cd6df push eax */
  push32((uint32_t)(EAX));
  /* 109cd6e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd6e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd6e7 push edx */
  push32((uint32_t)(EDX));
  /* 109cd6e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd6eb push eax */
  push32((uint32_t)(EAX));
  /* 109cd6ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd6ef push ecx */
  push32((uint32_t)(ECX));
  /* 109cd6f0 call dword ptr [0x109f42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e8))), 0x109cd6f6u);
  /* 109cd6f6 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd6fb:;
  /* 109cd6fb cmp dword ptr [0x109f1898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd702 jne 0x109cd91f */
  if (!C.zf) goto L_109cd91f;
  /* 109cd708 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd70c jne 0x109cd717 */
  if (!C.zf) goto L_109cd717;
  /* 109cd70e mov edx, dword ptr [0x109f1890] */
  EDX = (r32((uint32_t)(0x109f1890)));
  /* 109cd714 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_109cd717:;
  /* 109cd717 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd719 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd71b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd71e push eax */
  push32((uint32_t)(EAX));
  /* 109cd71f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd722 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd723 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 109cd726 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109cd728 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd72a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 109cd72d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd730 push edx */
  push32((uint32_t)(EDX));
  /* 109cd731 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109cd734 push eax */
  push32((uint32_t)(EAX));
  /* 109cd735 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109cd73bu);
  /* 109cd73b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109cd73e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd742 jne 0x109cd74b */
  if (!C.zf) goto L_109cd74b;
  /* 109cd744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd746 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd74b:;
  /* 109cd74b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cd752 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109cd755 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109cd757 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd75a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109cd75c call 0x109c83e0 */
  push32(0x109cd761u); f_109c83e0();
  /* 109cd761 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 109cd764 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109cd767 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 109cd76a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109cd76d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109cd774 jmp 0x109cd78d */
  goto L_109cd78d;
  /* 109cd776 mov eax, 1 */
  EAX = (0x1u);
  /* 109cd77b ret  */
  ESPCHK(0x109cd630u, _esp0);
  ESP += 4; return;
  /* 109cd77c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109cd77f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 109cd786 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cd78d:;
  /* 109cd78d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd791 jne 0x109cd79a */
  if (!C.zf) goto L_109cd79a;
  /* 109cd793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd795 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd79a:;
  /* 109cd79a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109cd79d push edx */
  push32((uint32_t)(EDX));
  /* 109cd79e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd7a1 push eax */
  push32((uint32_t)(EAX));
  /* 109cd7a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cd7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd7a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd7a9 push edx */
  push32((uint32_t)(EDX));
  /* 109cd7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 109cd7ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109cd7af push eax */
  push32((uint32_t)(EAX));
  /* 109cd7b0 call dword ptr [0x109f42f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f4))), 0x109cd7b6u);
  /* 109cd7b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd7b8 jne 0x109cd7c1 */
  if (!C.zf) goto L_109cd7c1;
  /* 109cd7ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd7bc jmp 0x109cd921 */
  goto L_109cd921;
L_109cd7c1:;
  /* 109cd7c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd7c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd7c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109cd7c8 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd7c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd7cc push edx */
  push32((uint32_t)(EDX));
  /* 109cd7cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd7d0 push eax */
  push32((uint32_t)(EAX));
  /* 109cd7d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd7d4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd7d5 call dword ptr [0x109f42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f0))), 0x109cd7dbu);
  /* 109cd7db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109cd7de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd7e2 jne 0x109cd7eb */
  if (!C.zf) goto L_109cd7eb;
  /* 109cd7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd7e6 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd7eb:;
  /* 109cd7eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd7ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 109cd7f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cd7f6 je 0x109cd83b */
  if (C.zf) goto L_109cd83b;
  /* 109cd7f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd7fc je 0x109cd836 */
  if (C.zf) goto L_109cd836;
  /* 109cd7fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cd801 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd804 jle 0x109cd80d */
  if ((C.zf||C.sf!=C.of)) goto L_109cd80d;
  /* 109cd806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd808 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd80d:;
  /* 109cd80d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109cd810 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd811 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109cd814 push edx */
  push32((uint32_t)(EDX));
  /* 109cd815 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109cd818 push eax */
  push32((uint32_t)(EAX));
  /* 109cd819 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd81c push ecx */
  push32((uint32_t)(ECX));
  /* 109cd81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd820 push edx */
  push32((uint32_t)(EDX));
  /* 109cd821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd824 push eax */
  push32((uint32_t)(EAX));
  /* 109cd825 call dword ptr [0x109f42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f0))), 0x109cd82bu);
  /* 109cd82b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd82d jne 0x109cd836 */
  if (!C.zf) goto L_109cd836;
  /* 109cd82f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd831 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd836:;
  /* 109cd836 jmp 0x109cd91a */
  goto L_109cd91a;
L_109cd83b:;
  /* 109cd83b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cd83e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109cd841 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109cd848 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cd84b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109cd84d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd850 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109cd852 call 0x109c83e0 */
  push32(0x109cd857u); f_109c83e0();
  /* 109cd857 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 109cd85a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109cd85d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 109cd860 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 109cd863 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109cd86a jmp 0x109cd883 */
  goto L_109cd883;
  /* 109cd86c mov eax, 1 */
  EAX = (0x1u);
  /* 109cd871 ret  */
  ESPCHK(0x109cd630u, _esp0);
  ESP += 4; return;
  /* 109cd872 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109cd875 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109cd87c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cd883:;
  /* 109cd883 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd887 jne 0x109cd890 */
  if (!C.zf) goto L_109cd890;
  /* 109cd889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd88b jmp 0x109cd921 */
  goto L_109cd921;
L_109cd890:;
  /* 109cd890 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cd893 push eax */
  push32((uint32_t)(EAX));
  /* 109cd894 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd897 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd898 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109cd89b push edx */
  push32((uint32_t)(EDX));
  /* 109cd89c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109cd89f push eax */
  push32((uint32_t)(EAX));
  /* 109cd8a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd8a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd8a7 push edx */
  push32((uint32_t)(EDX));
  /* 109cd8a8 call dword ptr [0x109f42f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42f0))), 0x109cd8aeu);
  /* 109cd8ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cd8b0 jne 0x109cd8b6 */
  if (!C.zf) goto L_109cd8b6;
  /* 109cd8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd8b4 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd8b6:;
  /* 109cd8b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd8ba jne 0x109cd8ea */
  if (!C.zf) goto L_109cd8ea;
  /* 109cd8bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8be push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cd8c7 push eax */
  push32((uint32_t)(EAX));
  /* 109cd8c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd8cb push ecx */
  push32((uint32_t)(ECX));
  /* 109cd8cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109cd8d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 109cd8d4 push edx */
  push32((uint32_t)(EDX));
  /* 109cd8d5 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109cd8dbu);
  /* 109cd8db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109cd8de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd8e2 jne 0x109cd8e8 */
  if (!C.zf) goto L_109cd8e8;
  /* 109cd8e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd8e6 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd8e8:;
  /* 109cd8e8 jmp 0x109cd91a */
  goto L_109cd91a;
L_109cd8ea:;
  /* 109cd8ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8ec push 0 */
  push32((uint32_t)(0x0u));
  /* 109cd8ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109cd8f1 push eax */
  push32((uint32_t)(EAX));
  /* 109cd8f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109cd8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd8f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109cd8f9 push edx */
  push32((uint32_t)(EDX));
  /* 109cd8fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109cd8fd push eax */
  push32((uint32_t)(EAX));
  /* 109cd8fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109cd903 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 109cd906 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd907 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109cd90du);
  /* 109cd90d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109cd910 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd914 jne 0x109cd91a */
  if (!C.zf) goto L_109cd91a;
  /* 109cd916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cd918 jmp 0x109cd921 */
  goto L_109cd921;
L_109cd91a:;
  /* 109cd91a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109cd91d jmp 0x109cd921 */
  goto L_109cd921;
L_109cd91f:;
  /* 109cd91f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cd921:;
  /* 109cd921 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 109cd924 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cd927 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109cd92e pop edi */
  EDI = (pop32());
  /* 109cd92f pop esi */
  ESI = (pop32());
  /* 109cd930 pop ebx */
  EBX = (pop32());
  /* 109cd931 mov esp, ebp */
  ESP = (EBP);
  /* 109cd933 pop ebp */
  EBP = (pop32());
  /* 109cd934 ret  */
  ESPCHK(0x109cd630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d940 @ 0x109cd940 (80 bytes, 32 insns) */
void f_109cd940(void) {
  FTRACE(0x109cd940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd940 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd941 mov ebp, esp */
  EBP = (ESP);
  /* 109cd943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd949 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cd94c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd94f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109cd952:;
  /* 109cd952 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cd955 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cd958 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cd95e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cd960 je 0x109cd977 */
  if (C.zf) goto L_109cd977;
  /* 109cd962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd965 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109cd968 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cd96a je 0x109cd977 */
  if (C.zf) goto L_109cd977;
  /* 109cd96c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd96f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd972 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cd975 jmp 0x109cd952 */
  goto L_109cd952;
L_109cd977:;
  /* 109cd977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd97a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109cd97d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cd97f jne 0x109cd989 */
  if (!C.zf) goto L_109cd989;
  /* 109cd981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cd984 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cd987 jmp 0x109cd98c */
  goto L_109cd98c;
L_109cd989:;
  /* 109cd989 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_109cd98c:;
  /* 109cd98c mov esp, ebp */
  ESP = (EBP);
  /* 109cd98e pop ebp */
  EBP = (pop32());
  /* 109cd98f ret  */
  ESPCHK(0x109cd940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x109cd990 (130 bytes, 43 insns) */
void f_109cd990(void) {
  FTRACE(0x109cd990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cd990 push ebp */
  push32((uint32_t)(EBP));
  /* 109cd991 mov ebp, esp */
  EBP = (ESP);
  /* 109cd993 push ecx */
  push32((uint32_t)(ECX));
  /* 109cd994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd997 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cd99d jae 0x109cd9c1 */
  if (!C.cf) goto L_109cd9c1;
  /* 109cd99f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd9a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cd9a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd9a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cd9ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cd9ae mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cd9b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109cd9ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109cd9bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cd9bf jne 0x109cd9dc */
  if (!C.zf) goto L_109cd9dc;
L_109cd9c1:;
  /* 109cd9c1 call 0x109cd110 */
  push32(0x109cd9c6u); f_109cd110();
  /* 109cd9c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cd9cc call 0x109cd120 */
  push32(0x109cd9d1u); f_109cd120();
  /* 109cd9d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109cd9d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cd9da jmp 0x109cda0e */
  goto L_109cda0e;
L_109cd9dc:;
  /* 109cd9dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd9df push edx */
  push32((uint32_t)(EDX));
  /* 109cd9e0 call 0x109ce930 */
  push32(0x109cd9e5u); f_109ce930();
  /* 109cd9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd9e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cd9eb push eax */
  push32((uint32_t)(EAX));
  /* 109cd9ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cd9ef push ecx */
  push32((uint32_t)(ECX));
  /* 109cd9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cd9f3 push edx */
  push32((uint32_t)(EDX));
  /* 109cd9f4 call 0x109cda20 */
  push32(0x109cd9f9u); f_109cda20();
  /* 109cd9f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cd9fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cd9ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cda02 push eax */
  push32((uint32_t)(EAX));
  /* 109cda03 call 0x109ce9c0 */
  push32(0x109cda08u); f_109ce9c0();
  /* 109cda08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cda0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109cda0e:;
  /* 109cda0e mov esp, ebp */
  ESP = (EBP);
  /* 109cda10 pop ebp */
  EBP = (pop32());
  /* 109cda11 ret  */
  ESPCHK(0x109cd990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x109cda20 (178 bytes, 56 insns) */
void f_109cda20(void) {
  FTRACE(0x109cda20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cda20 push ebp */
  push32((uint32_t)(EBP));
  /* 109cda21 mov ebp, esp */
  EBP = (ESP);
  /* 109cda23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cda26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cda29 push eax */
  push32((uint32_t)(EAX));
  /* 109cda2a call 0x109ce7b0 */
  push32(0x109cda2fu); f_109ce7b0();
  /* 109cda2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cda32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109cda35 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cda39 jne 0x109cda4e */
  if (!C.zf) goto L_109cda4e;
  /* 109cda3b call 0x109cd110 */
  push32(0x109cda40u); f_109cd110();
  /* 109cda40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cda46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cda49 jmp 0x109cdace */
  goto L_109cdace;
L_109cda4e:;
  /* 109cda4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cda51 push ecx */
  push32((uint32_t)(ECX));
  /* 109cda52 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cda54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cda57 push edx */
  push32((uint32_t)(EDX));
  /* 109cda58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cda5b push eax */
  push32((uint32_t)(EAX));
  /* 109cda5c call dword ptr [0x109f42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e0))), 0x109cda62u);
  /* 109cda62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cda65 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cda69 jne 0x109cda76 */
  if (!C.zf) goto L_109cda76;
  /* 109cda6b call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109cda71u);
  /* 109cda71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cda74 jmp 0x109cda7d */
  goto L_109cda7d;
L_109cda76:;
  /* 109cda76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109cda7d:;
  /* 109cda7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cda81 je 0x109cda94 */
  if (C.zf) goto L_109cda94;
  /* 109cda83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cda86 push ecx */
  push32((uint32_t)(ECX));
  /* 109cda87 call 0x109cd070 */
  push32(0x109cda8cu); f_109cd070();
  /* 109cda8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cda8f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cda92 jmp 0x109cdace */
  goto L_109cdace;
L_109cda94:;
  /* 109cda94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cda97 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 109cda9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cda9d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109cdaa0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdaa3 mov ecx, dword ptr [edx*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109cdaaa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 109cdaae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 109cdab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdab4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cdab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdaba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109cdabd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdac0 mov eax, dword ptr [eax*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109cdac7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 109cdacb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109cdace:;
  /* 109cdace mov esp, ebp */
  ESP = (EBP);
  /* 109cdad0 pop ebp */
  EBP = (pop32());
  /* 109cdad1 ret  */
  ESPCHK(0x109cda20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x109cdae0 (130 bytes, 43 insns) */
void f_109cdae0(void) {
  FTRACE(0x109cdae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cdae0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cdae1 mov ebp, esp */
  EBP = (ESP);
  /* 109cdae3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cdae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdae7 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdaed jae 0x109cdb11 */
  if (!C.cf) goto L_109cdb11;
  /* 109cdaef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdaf2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cdaf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdaf8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cdafb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdafe mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cdb05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109cdb0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109cdb0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cdb0f jne 0x109cdb2c */
  if (!C.zf) goto L_109cdb2c;
L_109cdb11:;
  /* 109cdb11 call 0x109cd110 */
  push32(0x109cdb16u); f_109cd110();
  /* 109cdb16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cdb1c call 0x109cd120 */
  push32(0x109cdb21u); f_109cd120();
  /* 109cdb21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109cdb27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cdb2a jmp 0x109cdb5e */
  goto L_109cdb5e;
L_109cdb2c:;
  /* 109cdb2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdb2f push edx */
  push32((uint32_t)(EDX));
  /* 109cdb30 call 0x109ce930 */
  push32(0x109cdb35u); f_109ce930();
  /* 109cdb35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdb38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cdb3b push eax */
  push32((uint32_t)(EAX));
  /* 109cdb3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cdb3f push ecx */
  push32((uint32_t)(ECX));
  /* 109cdb40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdb43 push edx */
  push32((uint32_t)(EDX));
  /* 109cdb44 call 0x109cdb70 */
  push32(0x109cdb49u); f_109cdb70();
  /* 109cdb49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdb4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cdb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdb52 push eax */
  push32((uint32_t)(EAX));
  /* 109cdb53 call 0x109ce9c0 */
  push32(0x109cdb58u); f_109ce9c0();
  /* 109cdb58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdb5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109cdb5e:;
  /* 109cdb5e mov esp, ebp */
  ESP = (EBP);
  /* 109cdb60 pop ebp */
  EBP = (pop32());
  /* 109cdb61 ret  */
  ESPCHK(0x109cdae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db70 @ 0x109cdb70 (627 bytes, 182 insns) */
void f_109cdb70(void) {
  FTRACE(0x109cdb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cdb70 push ebp */
  push32((uint32_t)(EBP));
  /* 109cdb71 mov ebp, esp */
  EBP = (ESP);
  /* 109cdb73 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdb79 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109cdb80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cdb83 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 109cdb89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdb8d jne 0x109cdb96 */
  if (!C.zf) goto L_109cdb96;
  /* 109cdb8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cdb91 jmp 0x109cdddf */
  goto L_109cdddf;
L_109cdb96:;
  /* 109cdb96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdb99 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cdb9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdb9f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cdba2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdba5 mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cdbac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109cdbb1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 109cdbb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cdbb6 je 0x109cdbc8 */
  if (C.zf) goto L_109cdbc8;
  /* 109cdbb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cdbba push 0 */
  push32((uint32_t)(0x0u));
  /* 109cdbbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdbbf push edx */
  push32((uint32_t)(EDX));
  /* 109cdbc0 call 0x109cda20 */
  push32(0x109cdbc5u); f_109cda20();
  /* 109cdbc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cdbc8:;
  /* 109cdbc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdbcb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cdbce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdbd1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109cdbd4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdbd7 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109cdbde movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 109cdbe3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 109cdbe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cdbea je 0x109cdcfc */
  if (C.zf) goto L_109cdcfc;
  /* 109cdbf0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cdbf3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109cdbf6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_109cdbfd:;
  /* 109cdbfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdc00 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdc03 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdc06 jae 0x109cdcfa */
  if (!C.cf) goto L_109cdcfa;
  /* 109cdc0c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 109cdc12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109cdc15:;
  /* 109cdc15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc18 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 109cdc1e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdc20 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdc26 jge 0x109cdc87 */
  if ((C.sf==C.of)) goto L_109cdc87;
  /* 109cdc28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdc2b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdc2e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdc31 jae 0x109cdc87 */
  if (!C.cf) goto L_109cdc87;
  /* 109cdc33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdc36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109cdc38 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 109cdc3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdc41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdc44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cdc47 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 109cdc4e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdc51 jne 0x109cdc71 */
  if (!C.zf) goto L_109cdc71;
  /* 109cdc53 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 109cdc59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdc5c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 109cdc62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc65 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 109cdc68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdc6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109cdc71:;
  /* 109cdc71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc74 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 109cdc7a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 109cdc7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdc82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109cdc85 jmp 0x109cdc15 */
  goto L_109cdc15;
L_109cdc87:;
  /* 109cdc87 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cdc89 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 109cdc8f push edx */
  push32((uint32_t)(EDX));
  /* 109cdc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdc93 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 109cdc99 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdc9b push eax */
  push32((uint32_t)(EAX));
  /* 109cdc9c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 109cdca2 push edx */
  push32((uint32_t)(EDX));
  /* 109cdca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdca6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cdca9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdcac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109cdcaf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdcb2 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109cdcb9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 109cdcbc push eax */
  push32((uint32_t)(EAX));
  /* 109cdcbd call dword ptr [0x109f4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4340))), 0x109cdcc3u);
  /* 109cdcc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cdcc5 je 0x109cdcea */
  if (C.zf) goto L_109cdcea;
  /* 109cdcc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cdcca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdcd0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109cdcd3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cdcd6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 109cdcdc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cdcde cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdce4 jge 0x109cdce8 */
  if ((C.sf==C.of)) goto L_109cdce8;
  /* 109cdce6 jmp 0x109cdcfa */
  goto L_109cdcfa;
L_109cdce8:;
  /* 109cdce8 jmp 0x109cdcf5 */
  goto L_109cdcf5;
L_109cdcea:;
  /* 109cdcea call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109cdcf0u);
  /* 109cdcf0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109cdcf3 jmp 0x109cdcfa */
  goto L_109cdcfa;
L_109cdcf5:;
  /* 109cdcf5 jmp 0x109cdbfd */
  goto L_109cdbfd;
L_109cdcfa:;
  /* 109cdcfa jmp 0x109cdd4c */
  goto L_109cdd4c;
L_109cdcfc:;
  /* 109cdcfc push 0 */
  push32((uint32_t)(0x0u));
  /* 109cdcfe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 109cdd04 push ecx */
  push32((uint32_t)(ECX));
  /* 109cdd05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cdd08 push edx */
  push32((uint32_t)(EDX));
  /* 109cdd09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cdd0c push eax */
  push32((uint32_t)(EAX));
  /* 109cdd0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdd10 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cdd13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdd16 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cdd19 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdd1c mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cdd23 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 109cdd26 push ecx */
  push32((uint32_t)(ECX));
  /* 109cdd27 call dword ptr [0x109f4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4340))), 0x109cdd2du);
  /* 109cdd2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cdd2f je 0x109cdd43 */
  if (C.zf) goto L_109cdd43;
  /* 109cdd31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cdd38 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 109cdd3e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109cdd41 jmp 0x109cdd4c */
  goto L_109cdd4c;
L_109cdd43:;
  /* 109cdd43 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109cdd49u);
  /* 109cdd49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109cdd4c:;
  /* 109cdd4c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdd50 jne 0x109cddd6 */
  if (!C.zf) goto L_109cddd6;
  /* 109cdd56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdd5a je 0x109cdd8a */
  if (C.zf) goto L_109cdd8a;
  /* 109cdd5c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdd60 jne 0x109cdd79 */
  if (!C.zf) goto L_109cdd79;
  /* 109cdd62 call 0x109cd110 */
  push32(0x109cdd67u); f_109cd110();
  /* 109cdd67 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cdd6d call 0x109cd120 */
  push32(0x109cdd72u); f_109cd120();
  /* 109cdd72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cdd75 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109cdd77 jmp 0x109cdd85 */
  goto L_109cdd85;
L_109cdd79:;
  /* 109cdd79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cdd7c push edx */
  push32((uint32_t)(EDX));
  /* 109cdd7d call 0x109cd070 */
  push32(0x109cdd82u); f_109cd070();
  /* 109cdd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cdd85:;
  /* 109cdd85 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cdd88 jmp 0x109cdddf */
  goto L_109cdddf;
L_109cdd8a:;
  /* 109cdd8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdd8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cdd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdd93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109cdd96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdd99 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109cdda0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 109cdda5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 109cdda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cddaa je 0x109cddbb */
  if (C.zf) goto L_109cddbb;
  /* 109cddac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cddaf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109cddb2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cddb5 jne 0x109cddbb */
  if (!C.zf) goto L_109cddbb;
  /* 109cddb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cddb9 jmp 0x109cdddf */
  goto L_109cdddf;
L_109cddbb:;
  /* 109cddbb call 0x109cd110 */
  push32(0x109cddc0u); f_109cd110();
  /* 109cddc0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 109cddc6 call 0x109cd120 */
  push32(0x109cddcbu); f_109cd120();
  /* 109cddcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109cddd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cddd4 jmp 0x109cdddf */
  goto L_109cdddf;
L_109cddd6:;
  /* 109cddd6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cddd9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_109cdddf:;
  /* 109cdddf mov esp, ebp */
  ESP = (EBP);
  /* 109cdde1 pop ebp */
  EBP = (pop32());
  /* 109cdde2 ret  */
  ESPCHK(0x109cdb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x109cddf0 (199 bytes, 68 insns) */
void f_109cddf0(void) {
  FTRACE(0x109cddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cddf1 mov ebp, esp */
  EBP = (ESP);
  /* 109cddf3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cddf4 push ebx */
  push32((uint32_t)(EBX));
  /* 109cddf5 push esi */
  push32((uint32_t)(ESI));
  /* 109cddf6 push edi */
  push32((uint32_t)(EDI));
L_109cddf7:;
  /* 109cddf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cddfb jne 0x109cde1b */
  if (!C.zf) goto L_109cde1b;
  /* 109cddfd push 0x109ed1e0 */
  push32((uint32_t)(0x109ed1e0u));
  /* 109cde02 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cde04 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 109cde06 push 0x109ed2b0 */
  push32((uint32_t)(0x109ed2b0u));
  /* 109cde0b push 2 */
  push32((uint32_t)(0x2u));
  /* 109cde0d call 0x109c4300 */
  push32(0x109cde12u); f_109c4300();
  /* 109cde12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cde15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cde18 jne 0x109cde1b */
  if (!C.zf) goto L_109cde1b;
  /* 109cde1a int3  */
  x86_unimpl("int3 @ 0x109cde1a");
L_109cde1b:;
  /* 109cde1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cde1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cde1f jne 0x109cddf7 */
  if (!C.zf) goto L_109cddf7;
  /* 109cde21 mov ecx, dword ptr [0x109f189c] */
  ECX = (r32((uint32_t)(0x109f189c)));
  /* 109cde27 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cde2a mov dword ptr [0x109f189c], ecx */
  w32((uint32_t)(0x109f189c), (ECX));
  /* 109cde30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cde33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109cde36 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 109cde38 push 0x109ed2b0 */
  push32((uint32_t)(0x109ed2b0u));
  /* 109cde3d push 2 */
  push32((uint32_t)(0x2u));
  /* 109cde3f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109cde44 call 0x109c5240 */
  push32(0x109cde49u); f_109c5240();
  /* 109cde49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cde4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde4f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 109cde52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde55 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cde59 je 0x109cde76 */
  if (C.zf) goto L_109cde76;
  /* 109cde5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde5e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cde61 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 109cde64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde67 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 109cde6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde6d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 109cde74 jmp 0x109cde9b */
  goto L_109cde9b;
L_109cde76:;
  /* 109cde76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde79 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cde7c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109cde7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde82 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109cde85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde88 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cde8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde8e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109cde91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde94 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_109cde9b:;
  /* 109cde9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cde9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdea1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109cdea4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109cdea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdea9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 109cdeb0 pop edi */
  EDI = (pop32());
  /* 109cdeb1 pop esi */
  ESI = (pop32());
  /* 109cdeb2 pop ebx */
  EBX = (pop32());
  /* 109cdeb3 mov esp, ebp */
  ESP = (EBP);
  /* 109cdeb5 pop ebp */
  EBP = (pop32());
  /* 109cdeb6 ret  */
  ESPCHK(0x109cddf0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x109cdec0 (50 bytes, 17 insns) */
void f_109cdec0(void) {
  FTRACE(0x109cdec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cdec0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cdec1 mov ebp, esp */
  EBP = (ESP);
  /* 109cdec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdec6 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdecc jb 0x109cded2 */
  if (C.cf) goto L_109cded2;
  /* 109cdece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cded0 jmp 0x109cdef0 */
  goto L_109cdef0;
L_109cded2:;
  /* 109cded2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cded5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cded8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cdedb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cdede imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdee1 mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cdee8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109cdeed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_109cdef0:;
  /* 109cdef0 pop ebp */
  EBP = (pop32());
  /* 109cdef1 ret  */
  ESPCHK(0x109cdec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x109cdf00 (300 bytes, 80 insns) */
void f_109cdf00(void) {
  FTRACE(0x109cdf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cdf00 push ebp */
  push32((uint32_t)(EBP));
  /* 109cdf01 mov ebp, esp */
  EBP = (ESP);
  /* 109cdf03 push ecx */
  push32((uint32_t)(ECX));
  /* 109cdf04 cmp dword ptr [0x109f2d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f2d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdf0b jne 0x109cdf19 */
  if (!C.zf) goto L_109cdf19;
  /* 109cdf0d mov dword ptr [0x109f2d60], 0x200 */
  w32((uint32_t)(0x109f2d60), (0x200u));
  /* 109cdf17 jmp 0x109cdf2c */
  goto L_109cdf2c;
L_109cdf19:;
  /* 109cdf19 cmp dword ptr [0x109f2d60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x109f2d60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdf20 jge 0x109cdf2c */
  if ((C.sf==C.of)) goto L_109cdf2c;
  /* 109cdf22 mov dword ptr [0x109f2d60], 0x14 */
  w32((uint32_t)(0x109f2d60), (0x14u));
L_109cdf2c:;
  /* 109cdf2c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 109cdf31 push 0x109ed2bc */
  push32((uint32_t)(0x109ed2bcu));
  /* 109cdf36 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cdf38 push 4 */
  push32((uint32_t)(0x4u));
  /* 109cdf3a mov eax, dword ptr [0x109f2d60] */
  EAX = (r32((uint32_t)(0x109f2d60)));
  /* 109cdf3f push eax */
  push32((uint32_t)(EAX));
  /* 109cdf40 call 0x109c5650 */
  push32(0x109cdf45u); f_109c5650();
  /* 109cdf45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdf48 mov dword ptr [0x109f1a10], eax */
  w32((uint32_t)(0x109f1a10), (EAX));
  /* 109cdf4d cmp dword ptr [0x109f1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdf54 jne 0x109cdf95 */
  if (!C.zf) goto L_109cdf95;
  /* 109cdf56 mov dword ptr [0x109f2d60], 0x14 */
  w32((uint32_t)(0x109f2d60), (0x14u));
  /* 109cdf60 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 109cdf65 push 0x109ed2bc */
  push32((uint32_t)(0x109ed2bcu));
  /* 109cdf6a push 2 */
  push32((uint32_t)(0x2u));
  /* 109cdf6c push 4 */
  push32((uint32_t)(0x4u));
  /* 109cdf6e mov ecx, dword ptr [0x109f2d60] */
  ECX = (r32((uint32_t)(0x109f2d60)));
  /* 109cdf74 push ecx */
  push32((uint32_t)(ECX));
  /* 109cdf75 call 0x109c5650 */
  push32(0x109cdf7au); f_109c5650();
  /* 109cdf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdf7d mov dword ptr [0x109f1a10], eax */
  w32((uint32_t)(0x109f1a10), (EAX));
  /* 109cdf82 cmp dword ptr [0x109f1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdf89 jne 0x109cdf95 */
  if (!C.zf) goto L_109cdf95;
  /* 109cdf8b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 109cdf8d call 0x109c41b0 */
  push32(0x109cdf92u); f_109c41b0();
  /* 109cdf92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cdf95:;
  /* 109cdf95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cdf9c jmp 0x109cdfa7 */
  goto L_109cdfa7;
L_109cdf9e:;
  /* 109cdf9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfa1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdfa4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cdfa7:;
  /* 109cdfa7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdfab jge 0x109cdfc6 */
  if ((C.sf==C.of)) goto L_109cdfc6;
  /* 109cdfad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfb0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cdfb3 add eax, 0x109f0120 */
  { uint32_t _a=(EAX),_b=(0x109f0120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdfb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfbb mov edx, dword ptr [0x109f1a10] */
  EDX = (r32((uint32_t)(0x109f1a10)));
  /* 109cdfc1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 109cdfc4 jmp 0x109cdf9e */
  goto L_109cdf9e;
L_109cdfc6:;
  /* 109cdfc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cdfcd jmp 0x109cdfd8 */
  goto L_109cdfd8;
L_109cdfcf:;
  /* 109cdfcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfd2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cdfd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109cdfd8:;
  /* 109cdfd8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdfdc jge 0x109ce028 */
  if ((C.sf==C.of)) goto L_109ce028;
  /* 109cdfde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfe1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cdfe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdfe7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cdfea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cdfed mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cdff4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cdff8 je 0x109ce016 */
  if (C.zf) goto L_109ce016;
  /* 109cdffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cdffd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce000 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce003 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109ce006 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce009 mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109ce010 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce014 jne 0x109ce026 */
  if (!C.zf) goto L_109ce026;
L_109ce016:;
  /* 109ce016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce019 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce01c mov dword ptr [ecx + 0x109f0130], 0xffffffff */
  w32((uint32_t)(ECX + 0x109f0130), (0xffffffffu));
L_109ce026:;
  /* 109ce026 jmp 0x109cdfcf */
  goto L_109cdfcf;
L_109ce028:;
  /* 109ce028 mov esp, ebp */
  ESP = (EBP);
  /* 109ce02a pop ebp */
  EBP = (pop32());
  /* 109ce02b ret  */
  ESPCHK(0x109cdf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e030 @ 0x109ce030 (26 bytes, 9 insns) */
void f_109ce030(void) {
  FTRACE(0x109ce030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce030 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce031 mov ebp, esp */
  EBP = (ESP);
  /* 109ce033 call 0x109cec30 */
  push32(0x109ce038u); f_109cec30();
  /* 109ce038 movsx eax, byte ptr [0x109f16b8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x109f16b8))));
  /* 109ce03f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ce041 je 0x109ce048 */
  if (C.zf) goto L_109ce048;
  /* 109ce043 call 0x109ce9f0 */
  push32(0x109ce048u); f_109ce9f0();
L_109ce048:;
  /* 109ce048 pop ebp */
  EBP = (pop32());
  /* 109ce049 ret  */
  ESPCHK(0x109ce030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e050 @ 0x109ce050 (61 bytes, 20 insns) */
void f_109ce050(void) {
  FTRACE(0x109ce050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce050 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce051 mov ebp, esp */
  EBP = (ESP);
  /* 109ce053 cmp dword ptr [ebp + 8], 0x109f0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109f0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce05a jb 0x109ce07e */
  if (C.cf) goto L_109ce07e;
  /* 109ce05c cmp dword ptr [ebp + 8], 0x109f0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109f0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce063 ja 0x109ce07e */
  if ((!C.cf&&!C.zf)) goto L_109ce07e;
  /* 109ce065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce068 sub eax, 0x109f0120 */
  { uint32_t _a=(EAX),_b=(0x109f0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce06d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce070 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce073 push eax */
  push32((uint32_t)(EAX));
  /* 109ce074 call 0x109c8c40 */
  push32(0x109ce079u); f_109c8c40();
  /* 109ce079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce07c jmp 0x109ce08b */
  goto L_109ce08b;
L_109ce07e:;
  /* 109ce07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce081 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce084 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce085 call dword ptr [0x109f431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f431c))), 0x109ce08bu);
L_109ce08b:;
  /* 109ce08b pop ebp */
  EBP = (pop32());
  /* 109ce08c ret  */
  ESPCHK(0x109ce050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e090 @ 0x109ce090 (41 bytes, 16 insns) */
void f_109ce090(void) {
  FTRACE(0x109ce090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce090 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce091 mov ebp, esp */
  EBP = (ESP);
  /* 109ce093 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce097 jge 0x109ce0aa */
  if ((C.sf==C.of)) goto L_109ce0aa;
  /* 109ce099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce09c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce09f push eax */
  push32((uint32_t)(EAX));
  /* 109ce0a0 call 0x109c8c40 */
  push32(0x109ce0a5u); f_109c8c40();
  /* 109ce0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce0a8 jmp 0x109ce0b7 */
  goto L_109ce0b7;
L_109ce0aa:;
  /* 109ce0aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce0ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce0b1 call dword ptr [0x109f431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f431c))), 0x109ce0b7u);
L_109ce0b7:;
  /* 109ce0b7 pop ebp */
  EBP = (pop32());
  /* 109ce0b8 ret  */
  ESPCHK(0x109ce090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x109ce0c0 (61 bytes, 20 insns) */
void f_109ce0c0(void) {
  FTRACE(0x109ce0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce0c1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce0c3 cmp dword ptr [ebp + 8], 0x109f0120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109f0120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce0ca jb 0x109ce0ee */
  if (C.cf) goto L_109ce0ee;
  /* 109ce0cc cmp dword ptr [ebp + 8], 0x109f0380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x109f0380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce0d3 ja 0x109ce0ee */
  if ((!C.cf&&!C.zf)) goto L_109ce0ee;
  /* 109ce0d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce0d8 sub eax, 0x109f0120 */
  { uint32_t _a=(EAX),_b=(0x109f0120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce0dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce0e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce0e3 push eax */
  push32((uint32_t)(EAX));
  /* 109ce0e4 call 0x109c8ce0 */
  push32(0x109ce0e9u); f_109c8ce0();
  /* 109ce0e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce0ec jmp 0x109ce0fb */
  goto L_109ce0fb;
L_109ce0ee:;
  /* 109ce0ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce0f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce0f5 call dword ptr [0x109f4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4318))), 0x109ce0fbu);
L_109ce0fb:;
  /* 109ce0fb pop ebp */
  EBP = (pop32());
  /* 109ce0fc ret  */
  ESPCHK(0x109ce0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x109ce100 (41 bytes, 16 insns) */
void f_109ce100(void) {
  FTRACE(0x109ce100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce100 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce101 mov ebp, esp */
  EBP = (ESP);
  /* 109ce103 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce107 jge 0x109ce11a */
  if ((C.sf==C.of)) goto L_109ce11a;
  /* 109ce109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce10c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce10f push eax */
  push32((uint32_t)(EAX));
  /* 109ce110 call 0x109c8ce0 */
  push32(0x109ce115u); f_109c8ce0();
  /* 109ce115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce118 jmp 0x109ce127 */
  goto L_109ce127;
L_109ce11a:;
  /* 109ce11a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce11d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce120 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce121 call dword ptr [0x109f4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4318))), 0x109ce127u);
L_109ce127:;
  /* 109ce127 pop ebp */
  EBP = (pop32());
  /* 109ce128 ret  */
  ESPCHK(0x109ce100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x109ce130 (119 bytes, 34 insns) */
void f_109ce130(void) {
  FTRACE(0x109ce130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce130 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce131 mov ebp, esp */
  EBP = (ESP);
  /* 109ce133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce136 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109ce13b call dword ptr [0x109f4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4354))), 0x109ce141u);
  /* 109ce141 cmp dword ptr [0x109f19fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f19fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce148 je 0x109ce168 */
  if (C.zf) goto L_109ce168;
  /* 109ce14a push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109ce14f call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109ce155u);
  /* 109ce155 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109ce157 call 0x109c8c40 */
  push32(0x109ce15cu); f_109c8c40();
  /* 109ce15c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce15f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109ce166 jmp 0x109ce16f */
  goto L_109ce16f;
L_109ce168:;
  /* 109ce168 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109ce16f:;
  /* 109ce16f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 109ce173 push eax */
  push32((uint32_t)(EAX));
  /* 109ce174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce177 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce178 call 0x109ce1b0 */
  push32(0x109ce17du); f_109ce1b0();
  /* 109ce17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce180 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109ce183 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce187 je 0x109ce195 */
  if (C.zf) goto L_109ce195;
  /* 109ce189 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109ce18b call 0x109c8ce0 */
  push32(0x109ce190u); f_109c8ce0();
  /* 109ce190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce193 jmp 0x109ce1a0 */
  goto L_109ce1a0;
L_109ce195:;
  /* 109ce195 push 0x109f1a0c */
  push32((uint32_t)(0x109f1a0cu));
  /* 109ce19a call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109ce1a0u);
L_109ce1a0:;
  /* 109ce1a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce1a3 mov esp, ebp */
  ESP = (EBP);
  /* 109ce1a5 pop ebp */
  EBP = (pop32());
  /* 109ce1a6 ret  */
  ESPCHK(0x109ce130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x109ce1b0 (160 bytes, 50 insns) */
void f_109ce1b0(void) {
  FTRACE(0x109ce1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce1b1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce1b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce1b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce1ba jne 0x109ce1c3 */
  if (!C.zf) goto L_109ce1c3;
  /* 109ce1bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ce1be jmp 0x109ce24c */
  goto L_109ce24c;
L_109ce1c3:;
  /* 109ce1c3 cmp dword ptr [0x109f1880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce1ca jne 0x109ce1fa */
  if (!C.zf) goto L_109ce1fa;
  /* 109ce1cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce1cf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce1d4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce1d9 jle 0x109ce1eb */
  if ((C.zf||C.sf!=C.of)) goto L_109ce1eb;
  /* 109ce1db call 0x109cd110 */
  push32(0x109ce1e0u); f_109cd110();
  /* 109ce1e0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 109ce1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce1e9 jmp 0x109ce24c */
  goto L_109ce24c;
L_109ce1eb:;
  /* 109ce1eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce1ee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 109ce1f1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 109ce1f3 mov eax, 1 */
  EAX = (0x1u);
  /* 109ce1f8 jmp 0x109ce24c */
  goto L_109ce24c;
L_109ce1fa:;
  /* 109ce1fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109ce201 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109ce204 push eax */
  push32((uint32_t)(EAX));
  /* 109ce205 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce207 mov ecx, dword ptr [0x109efea4] */
  ECX = (r32((uint32_t)(0x109efea4)));
  /* 109ce20d push ecx */
  push32((uint32_t)(ECX));
  /* 109ce20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce211 push edx */
  push32((uint32_t)(EDX));
  /* 109ce212 push 1 */
  push32((uint32_t)(0x1u));
  /* 109ce214 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 109ce217 push eax */
  push32((uint32_t)(EAX));
  /* 109ce218 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109ce21d mov ecx, dword ptr [0x109f1890] */
  ECX = (r32((uint32_t)(0x109f1890)));
  /* 109ce223 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce224 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109ce22au);
  /* 109ce22a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ce22d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce231 je 0x109ce239 */
  if (C.zf) goto L_109ce239;
  /* 109ce233 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce237 je 0x109ce249 */
  if (C.zf) goto L_109ce249;
L_109ce239:;
  /* 109ce239 call 0x109cd110 */
  push32(0x109ce23eu); f_109cd110();
  /* 109ce23e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 109ce244 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce247 jmp 0x109ce24c */
  goto L_109ce24c;
L_109ce249:;
  /* 109ce249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109ce24c:;
  /* 109ce24c mov esp, ebp */
  ESP = (EBP);
  /* 109ce24e pop ebp */
  EBP = (pop32());
  /* 109ce24f ret  */
  ESPCHK(0x109ce1b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x109ce250 (32 bytes, 18 insns) */
void f_109ce250(void) {
  FTRACE(0x109ce250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce250 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce251 mov ebp, esp */
  EBP = (ESP);
  /* 109ce253 push ebx */
  push32((uint32_t)(EBX));
  /* 109ce254 push esi */
  push32((uint32_t)(ESI));
  /* 109ce255 push edi */
  push32((uint32_t)(EDI));
  /* 109ce256 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce257 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce259 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce25b push 0x109ce268 */
  push32((uint32_t)(0x109ce268u));
  /* 109ce260 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109ce263 call 0x109d599c */
  push32(0x109ce268u); f_109d599c();
  /* 109ce268 pop ebp */
  EBP = (pop32());
  /* 109ce269 pop edi */
  EDI = (pop32());
  /* 109ce26a pop esi */
  ESI = (pop32());
  /* 109ce26b pop ebx */
  EBX = (pop32());
  /* 109ce26c mov esp, ebp */
  ESP = (EBP);
  /* 109ce26e pop ebp */
  EBP = (pop32());
  /* 109ce26f ret  */
  ESPCHK(0x109ce250u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x109ce292 (104 bytes, 33 insns) */
void f_109ce292(void) {
  FTRACE(0x109ce292u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce292 push ebx */
  push32((uint32_t)(EBX));
  /* 109ce293 push esi */
  push32((uint32_t)(ESI));
  /* 109ce294 push edi */
  push32((uint32_t)(EDI));
  /* 109ce295 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109ce299 push eax */
  push32((uint32_t)(EAX));
  /* 109ce29a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 109ce29c push 0x109ce270 */
  push32((uint32_t)(0x109ce270u));
  /* 109ce2a1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 109ce2a8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_109ce2af:;
  /* 109ce2af mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 109ce2b3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 109ce2b6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 109ce2b9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce2bc je 0x109ce2ec */
  if (C.zf) goto L_109ce2ec;
  /* 109ce2be cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce2c2 je 0x109ce2ec */
  if (C.zf) goto L_109ce2ec;
  /* 109ce2c4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 109ce2c7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 109ce2ca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 109ce2ce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 109ce2d1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce2d6 jne 0x109ce2ea */
  if (!C.zf) goto L_109ce2ea;
  /* 109ce2d8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 109ce2dd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 109ce2e1 call 0x109ce326 */
  push32(0x109ce2e6u); f_109ce326();
  /* 109ce2e6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x109ce2eau);
L_109ce2ea:;
  /* 109ce2ea jmp 0x109ce2af */
  goto L_109ce2af;
L_109ce2ec:;
  /* 109ce2ec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 109ce2f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce2f6 pop edi */
  EDI = (pop32());
  /* 109ce2f7 pop esi */
  ESI = (pop32());
  /* 109ce2f8 pop ebx */
  EBX = (pop32());
  /* 109ce2f9 ret  */
  ESPCHK(0x109ce292u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e326 @ 0x109ce326 (24 bytes, 10 insns) */
void f_109ce326(void) {
  FTRACE(0x109ce326u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce326 push ebx */
  push32((uint32_t)(EBX));
  /* 109ce327 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce328 mov ebx, 0x109f03b8 */
  EBX = (0x109f03b8u);
  /* 109ce32d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce330 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 109ce333 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 109ce336 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 109ce339 pop ecx */
  ECX = (pop32());
  /* 109ce33a pop ebx */
  EBX = (pop32());
  /* 109ce33b ret 4 */
  ESPCHK(0x109ce326u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e405 @ 0x109ce405 (27 bytes, 11 insns) */
void f_109ce405(void) {
  FTRACE(0x109ce405u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce405 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce406 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 109ce40a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 109ce40c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109ce40f push eax */
  push32((uint32_t)(EAX));
  /* 109ce410 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 109ce413 push eax */
  push32((uint32_t)(EAX));
  /* 109ce414 call 0x109ce292 */
  push32(0x109ce419u); f_109ce292();
  /* 109ce419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce41c pop ebp */
  EBP = (pop32());
  /* 109ce41d ret 4 */
  ESPCHK(0x109ce405u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e420 @ 0x109ce420 (482 bytes, 138 insns) */
void f_109ce420(void) {
  FTRACE(0x109ce420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce420 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce421 mov ebp, esp */
  EBP = (ESP);
  /* 109ce423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce426 push esi */
  push32((uint32_t)(ESI));
  /* 109ce427 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 109ce42e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109ce430 call 0x109c8c40 */
  push32(0x109ce435u); f_109c8c40();
  /* 109ce435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce438 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109ce43f jmp 0x109ce44a */
  goto L_109ce44a;
L_109ce441:;
  /* 109ce441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce447 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109ce44a:;
  /* 109ce44a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce44e jge 0x109ce5f0 */
  if ((C.sf==C.of)) goto L_109ce5f0;
  /* 109ce454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce457 cmp dword ptr [ecx*4 + 0x109f3060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109f3060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce45f je 0x109ce556 */
  if (C.zf) goto L_109ce556;
  /* 109ce465 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce468 mov eax, dword ptr [edx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109ce46f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ce472 jmp 0x109ce47d */
  goto L_109ce47d;
L_109ce474:;
  /* 109ce474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce477 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce47a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109ce47d:;
  /* 109ce47d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce480 mov eax, dword ptr [edx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109ce487 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce48c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce48f jae 0x109ce546 */
  if (!C.cf) goto L_109ce546;
  /* 109ce495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce498 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ce49c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109ce49f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ce4a1 jne 0x109ce541 */
  if (!C.zf) goto L_109ce541;
  /* 109ce4a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4aa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce4ae jne 0x109ce4e9 */
  if (!C.zf) goto L_109ce4e9;
  /* 109ce4b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109ce4b2 call 0x109c8c40 */
  push32(0x109ce4b7u); f_109c8c40();
  /* 109ce4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce4ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4bd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce4c1 jne 0x109ce4df */
  if (!C.zf) goto L_109ce4df;
  /* 109ce4c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4c6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce4c9 push edx */
  push32((uint32_t)(EDX));
  /* 109ce4ca call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109ce4d0u);
  /* 109ce4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109ce4d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce4d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_109ce4df:;
  /* 109ce4df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109ce4e1 call 0x109c8ce0 */
  push32(0x109ce4e6u); f_109c8ce0();
  /* 109ce4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ce4e9:;
  /* 109ce4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce4ef push eax */
  push32((uint32_t)(EAX));
  /* 109ce4f0 call dword ptr [0x109f431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f431c))), 0x109ce4f6u);
  /* 109ce4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce4f9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 109ce4fd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109ce500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ce502 je 0x109ce516 */
  if (C.zf) goto L_109ce516;
  /* 109ce504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce507 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce50a push eax */
  push32((uint32_t)(EAX));
  /* 109ce50b call dword ptr [0x109f4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4318))), 0x109ce511u);
  /* 109ce511 jmp 0x109ce474 */
  goto L_109ce474;
L_109ce516:;
  /* 109ce516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce519 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 109ce51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce522 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce52b sub eax, dword ptr [edx*4 + 0x109f3060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x109f3060))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce532 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109ce533 mov esi, 0x24 */
  ESI = (0x24u);
  /* 109ce538 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109ce53a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce53c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109ce53f jmp 0x109ce546 */
  goto L_109ce546;
L_109ce541:;
  /* 109ce541 jmp 0x109ce474 */
  goto L_109ce474;
L_109ce546:;
  /* 109ce546 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce54a je 0x109ce551 */
  if (C.zf) goto L_109ce551;
  /* 109ce54c jmp 0x109ce5f0 */
  goto L_109ce5f0;
L_109ce551:;
  /* 109ce551 jmp 0x109ce5eb */
  goto L_109ce5eb;
L_109ce556:;
  /* 109ce556 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 109ce558 push 0x109ed2c4 */
  push32((uint32_t)(0x109ed2c4u));
  /* 109ce55d push 2 */
  push32((uint32_t)(0x2u));
  /* 109ce55f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109ce564 call 0x109c5240 */
  push32(0x109ce569u); f_109c5240();
  /* 109ce569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce56c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ce56f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce573 je 0x109ce5e9 */
  if (C.zf) goto L_109ce5e9;
  /* 109ce575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce57b mov dword ptr [eax*4 + 0x109f3060], ecx */
  w32((uint32_t)(EAX*4 + 0x109f3060), (ECX));
  /* 109ce582 mov edx, dword ptr [0x109f319c] */
  EDX = (r32((uint32_t)(0x109f319c)));
  /* 109ce588 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce58b mov dword ptr [0x109f319c], edx */
  w32((uint32_t)(0x109f319c), (EDX));
  /* 109ce591 jmp 0x109ce59c */
  goto L_109ce59c;
L_109ce593:;
  /* 109ce593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce596 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109ce59c:;
  /* 109ce59c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce59f mov edx, dword ptr [ecx*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109ce5a6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce5ac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce5af jae 0x109ce5d4 */
  if (!C.cf) goto L_109ce5d4;
  /* 109ce5b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce5b4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 109ce5b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce5bb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 109ce5c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce5c4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 109ce5c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce5cb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 109ce5d2 jmp 0x109ce593 */
  goto L_109ce593;
L_109ce5d4:;
  /* 109ce5d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ce5d7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce5da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109ce5dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce5e0 push edx */
  push32((uint32_t)(EDX));
  /* 109ce5e1 call 0x109ce930 */
  push32(0x109ce5e6u); f_109ce930();
  /* 109ce5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ce5e9:;
  /* 109ce5e9 jmp 0x109ce5f0 */
  goto L_109ce5f0;
L_109ce5eb:;
  /* 109ce5eb jmp 0x109ce441 */
  goto L_109ce441;
L_109ce5f0:;
  /* 109ce5f0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109ce5f2 call 0x109c8ce0 */
  push32(0x109ce5f7u); f_109c8ce0();
  /* 109ce5f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce5fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce5fd pop esi */
  ESI = (pop32());
  /* 109ce5fe mov esp, ebp */
  ESP = (EBP);
  /* 109ce600 pop ebp */
  EBP = (pop32());
  /* 109ce601 ret  */
  ESPCHK(0x109ce420u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x109ce610 (183 bytes, 57 insns) */
void f_109ce610(void) {
  FTRACE(0x109ce610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce610 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce611 mov ebp, esp */
  EBP = (ESP);
  /* 109ce613 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce617 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce61d jae 0x109ce6aa */
  if (!C.cf) goto L_109ce6aa;
  /* 109ce623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce626 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce62c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109ce62f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce632 mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109ce639 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce63d jne 0x109ce6aa */
  if (!C.zf) goto L_109ce6aa;
  /* 109ce63f cmp dword ptr [0x109f1678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce646 jne 0x109ce68a */
  if (!C.zf) goto L_109ce68a;
  /* 109ce648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce64b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109ce64e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce652 je 0x109ce662 */
  if (C.zf) goto L_109ce662;
  /* 109ce654 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce658 je 0x109ce670 */
  if (C.zf) goto L_109ce670;
  /* 109ce65a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce65e je 0x109ce67e */
  if (C.zf) goto L_109ce67e;
  /* 109ce660 jmp 0x109ce68a */
  goto L_109ce68a;
L_109ce662:;
  /* 109ce662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce665 push edx */
  push32((uint32_t)(EDX));
  /* 109ce666 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 109ce668 call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce66eu);
  /* 109ce66e jmp 0x109ce68a */
  goto L_109ce68a;
L_109ce670:;
  /* 109ce670 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce673 push eax */
  push32((uint32_t)(EAX));
  /* 109ce674 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 109ce676 call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce67cu);
  /* 109ce67c jmp 0x109ce68a */
  goto L_109ce68a;
L_109ce67e:;
  /* 109ce67e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce681 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce682 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 109ce684 call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce68au);
L_109ce68a:;
  /* 109ce68a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce68d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 109ce690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce693 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce696 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce699 mov ecx, dword ptr [edx*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109ce6a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce6a3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 109ce6a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ce6a8 jmp 0x109ce6c3 */
  goto L_109ce6c3;
L_109ce6aa:;
  /* 109ce6aa call 0x109cd110 */
  push32(0x109ce6afu); f_109cd110();
  /* 109ce6af mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109ce6b5 call 0x109cd120 */
  push32(0x109ce6bau); f_109cd120();
  /* 109ce6ba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109ce6c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109ce6c3:;
  /* 109ce6c3 mov esp, ebp */
  ESP = (EBP);
  /* 109ce6c5 pop ebp */
  EBP = (pop32());
  /* 109ce6c6 ret  */
  ESPCHK(0x109ce610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6d0 @ 0x109ce6d0 (216 bytes, 63 insns) */
void f_109ce6d0(void) {
  FTRACE(0x109ce6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce6d1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce6d7 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce6dd jae 0x109ce78b */
  if (!C.cf) goto L_109ce78b;
  /* 109ce6e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce6e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce6ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109ce6ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce6f2 mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109ce6f9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109ce6fe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109ce701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ce703 je 0x109ce78b */
  if (C.zf) goto L_109ce78b;
  /* 109ce709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce70c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 109ce70f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce712 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce715 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce718 mov ecx, dword ptr [edx*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109ce71f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce723 je 0x109ce78b */
  if (C.zf) goto L_109ce78b;
  /* 109ce725 cmp dword ptr [0x109f1678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce72c jne 0x109ce76a */
  if (!C.zf) goto L_109ce76a;
  /* 109ce72e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce731 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109ce734 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce738 je 0x109ce748 */
  if (C.zf) goto L_109ce748;
  /* 109ce73a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce73e je 0x109ce754 */
  if (C.zf) goto L_109ce754;
  /* 109ce740 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce744 je 0x109ce760 */
  if (C.zf) goto L_109ce760;
  /* 109ce746 jmp 0x109ce76a */
  goto L_109ce76a;
L_109ce748:;
  /* 109ce748 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce74a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 109ce74c call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce752u);
  /* 109ce752 jmp 0x109ce76a */
  goto L_109ce76a;
L_109ce754:;
  /* 109ce754 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce756 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 109ce758 call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce75eu);
  /* 109ce75e jmp 0x109ce76a */
  goto L_109ce76a;
L_109ce760:;
  /* 109ce760 push 0 */
  push32((uint32_t)(0x0u));
  /* 109ce762 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 109ce764 call dword ptr [0x109f42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42e4))), 0x109ce76au);
L_109ce76a:;
  /* 109ce76a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce76d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce770 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce773 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109ce776 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce779 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109ce780 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 109ce787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ce789 jmp 0x109ce7a4 */
  goto L_109ce7a4;
L_109ce78b:;
  /* 109ce78b call 0x109cd110 */
  push32(0x109ce790u); f_109cd110();
  /* 109ce790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109ce796 call 0x109cd120 */
  push32(0x109ce79bu); f_109cd120();
  /* 109ce79b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109ce7a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109ce7a4:;
  /* 109ce7a4 mov esp, ebp */
  ESP = (EBP);
  /* 109ce7a6 pop ebp */
  EBP = (pop32());
  /* 109ce7a7 ret  */
  ESPCHK(0x109ce6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x109ce7b0 (102 bytes, 30 insns) */
void f_109ce7b0(void) {
  FTRACE(0x109ce7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce7b1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce7b6 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce7bc jae 0x109ce7fb */
  if (!C.cf) goto L_109ce7fb;
  /* 109ce7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce7c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109ce7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce7c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109ce7ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce7cd mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109ce7d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109ce7d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109ce7dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ce7de je 0x109ce7fb */
  if (C.zf) goto L_109ce7fb;
  /* 109ce7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce7e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 109ce7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce7e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce7ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce7ef mov ecx, dword ptr [edx*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109ce7f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 109ce7f9 jmp 0x109ce814 */
  goto L_109ce814;
L_109ce7fb:;
  /* 109ce7fb call 0x109cd110 */
  push32(0x109ce800u); f_109cd110();
  /* 109ce800 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109ce806 call 0x109cd120 */
  push32(0x109ce80bu); f_109cd120();
  /* 109ce80b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109ce811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109ce814:;
  /* 109ce814 pop ebp */
  EBP = (pop32());
  /* 109ce815 ret  */
  ESPCHK(0x109ce7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x109ce820 (260 bytes, 83 insns) */
void f_109ce820(void) {
  FTRACE(0x109ce820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce820 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce821 mov ebp, esp */
  EBP = (ESP);
  /* 109ce823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce826 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 109ce82a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce82d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 109ce830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ce832 je 0x109ce83d */
  if (C.zf) goto L_109ce83d;
  /* 109ce834 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce837 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 109ce83a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_109ce83d:;
  /* 109ce83d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce840 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 109ce846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ce848 je 0x109ce852 */
  if (C.zf) goto L_109ce852;
  /* 109ce84a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce84d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 109ce84f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_109ce852:;
  /* 109ce852 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109ce855 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 109ce85b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ce85d je 0x109ce868 */
  if (C.zf) goto L_109ce868;
  /* 109ce85f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce862 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 109ce865 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_109ce868:;
  /* 109ce868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce86b push eax */
  push32((uint32_t)(EAX));
  /* 109ce86c call dword ptr [0x109f438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f438c))), 0x109ce872u);
  /* 109ce872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ce875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce879 jne 0x109ce892 */
  if (!C.zf) goto L_109ce892;
  /* 109ce87b call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109ce881u);
  /* 109ce881 push eax */
  push32((uint32_t)(EAX));
  /* 109ce882 call 0x109cd070 */
  push32(0x109ce887u); f_109cd070();
  /* 109ce887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce88a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce88d jmp 0x109ce920 */
  goto L_109ce920;
L_109ce892:;
  /* 109ce892 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce896 jne 0x109ce8a3 */
  if (!C.zf) goto L_109ce8a3;
  /* 109ce898 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce89b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 109ce89e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 109ce8a1 jmp 0x109ce8b2 */
  goto L_109ce8b2;
L_109ce8a3:;
  /* 109ce8a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce8a7 jne 0x109ce8b2 */
  if (!C.zf) goto L_109ce8b2;
  /* 109ce8a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce8ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 109ce8af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_109ce8b2:;
  /* 109ce8b2 call 0x109ce420 */
  push32(0x109ce8b7u); f_109ce420();
  /* 109ce8b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109ce8ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce8be jne 0x109ce8db */
  if (!C.zf) goto L_109ce8db;
  /* 109ce8c0 call 0x109cd110 */
  push32(0x109ce8c5u); f_109cd110();
  /* 109ce8c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 109ce8cb call 0x109cd120 */
  push32(0x109ce8d0u); f_109cd120();
  /* 109ce8d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109ce8d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ce8d9 jmp 0x109ce920 */
  goto L_109ce920;
L_109ce8db:;
  /* 109ce8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce8de push eax */
  push32((uint32_t)(EAX));
  /* 109ce8df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce8e3 call 0x109ce610 */
  push32(0x109ce8e8u); f_109ce610();
  /* 109ce8e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce8eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce8ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 109ce8f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 109ce8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce8f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce8fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce8fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109ce900 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce903 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109ce90a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 109ce90d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 109ce911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ce914 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce915 call 0x109ce9c0 */
  push32(0x109ce91au); f_109ce9c0();
  /* 109ce91a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce91d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109ce920:;
  /* 109ce920 mov esp, ebp */
  ESP = (EBP);
  /* 109ce922 pop ebp */
  EBP = (pop32());
  /* 109ce923 ret  */
  ESPCHK(0x109ce820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x109ce930 (134 bytes, 44 insns) */
void f_109ce930(void) {
  FTRACE(0x109ce930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce930 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce931 mov ebp, esp */
  EBP = (ESP);
  /* 109ce933 push ecx */
  push32((uint32_t)(ECX));
  /* 109ce934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce937 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce93a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce93d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109ce940 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce943 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109ce94a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce94c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109ce94f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce952 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce956 jne 0x109ce991 */
  if (!C.zf) goto L_109ce991;
  /* 109ce958 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109ce95a call 0x109c8c40 */
  push32(0x109ce95fu); f_109c8c40();
  /* 109ce95f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce965 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ce969 jne 0x109ce987 */
  if (!C.zf) goto L_109ce987;
  /* 109ce96b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce96e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce971 push edx */
  push32((uint32_t)(EDX));
  /* 109ce972 call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109ce978u);
  /* 109ce978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce97b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109ce97e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ce981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ce984 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_109ce987:;
  /* 109ce987 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109ce989 call 0x109c8ce0 */
  push32(0x109ce98eu); f_109c8ce0();
  /* 109ce98e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ce991:;
  /* 109ce991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce994 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce99a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109ce99d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce9a0 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109ce9a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 109ce9ab push eax */
  push32((uint32_t)(EAX));
  /* 109ce9ac call dword ptr [0x109f431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f431c))), 0x109ce9b2u);
  /* 109ce9b2 mov esp, ebp */
  ESP = (EBP);
  /* 109ce9b4 pop ebp */
  EBP = (pop32());
  /* 109ce9b5 ret  */
  ESPCHK(0x109ce930u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x109ce9c0 (38 bytes, 13 insns) */
void f_109ce9c0(void) {
  FTRACE(0x109ce9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce9c1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce9c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109ce9c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ce9cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109ce9cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109ce9d2 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109ce9d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 109ce9dd push eax */
  push32((uint32_t)(EAX));
  /* 109ce9de call dword ptr [0x109f4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4318))), 0x109ce9e4u);
  /* 109ce9e4 pop ebp */
  EBP = (pop32());
  /* 109ce9e5 ret  */
  ESPCHK(0x109ce9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9f0 @ 0x109ce9f0 (218 bytes, 63 insns) */
void f_109ce9f0(void) {
  FTRACE(0x109ce9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ce9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109ce9f1 mov ebp, esp */
  EBP = (ESP);
  /* 109ce9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ce9f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109ce9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109ce9ff call 0x109c8c40 */
  push32(0x109cea04u); f_109c8c40();
  /* 109cea04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cea07 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 109cea0e jmp 0x109cea19 */
  goto L_109cea19;
L_109cea10:;
  /* 109cea10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cea16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109cea19:;
  /* 109cea19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea1c cmp ecx, dword ptr [0x109f2d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f2d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cea22 jge 0x109ceab9 */
  if ((C.sf==C.of)) goto L_109ceab9;
  /* 109cea28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea2b mov eax, dword ptr [0x109f1a10] */
  EAX = (r32((uint32_t)(0x109f1a10)));
  /* 109cea30 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cea34 je 0x109ceab4 */
  if (C.zf) goto L_109ceab4;
  /* 109cea36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea39 mov edx, dword ptr [0x109f1a10] */
  EDX = (r32((uint32_t)(0x109f1a10)));
  /* 109cea3f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 109cea42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cea45 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 109cea4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cea4d je 0x109cea71 */
  if (C.zf) goto L_109cea71;
  /* 109cea4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea52 mov eax, dword ptr [0x109f1a10] */
  EAX = (r32((uint32_t)(0x109f1a10)));
  /* 109cea57 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109cea5a push ecx */
  push32((uint32_t)(ECX));
  /* 109cea5b call 0x109cf7e0 */
  push32(0x109cea60u); f_109cf7e0();
  /* 109cea60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cea63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cea66 je 0x109cea71 */
  if (C.zf) goto L_109cea71;
  /* 109cea68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cea6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cea6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109cea71:;
  /* 109cea71 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cea75 jl 0x109ceab4 */
  if ((C.sf!=C.of)) goto L_109ceab4;
  /* 109cea77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea7a mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109cea80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109cea83 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cea86 push edx */
  push32((uint32_t)(EDX));
  /* 109cea87 call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109cea8du);
  /* 109cea8d push 2 */
  push32((uint32_t)(0x2u));
  /* 109cea8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cea92 mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109cea98 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109cea9b push edx */
  push32((uint32_t)(EDX));
  /* 109cea9c call 0x109c5cd0 */
  push32(0x109ceaa1u); f_109c5cd0();
  /* 109ceaa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceaa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ceaa7 mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109ceaad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_109ceab4:;
  /* 109ceab4 jmp 0x109cea10 */
  goto L_109cea10;
L_109ceab9:;
  /* 109ceab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109ceabb call 0x109c8ce0 */
  push32(0x109ceac0u); f_109c8ce0();
  /* 109ceac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ceac6 mov esp, ebp */
  ESP = (EBP);
  /* 109ceac8 pop ebp */
  EBP = (pop32());
  /* 109ceac9 ret  */
  ESPCHK(0x109ce9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x109cead0 (68 bytes, 26 insns) */
void f_109cead0(void) {
  FTRACE(0x109cead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cead0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cead1 mov ebp, esp */
  EBP = (ESP);
  /* 109cead3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cead4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cead8 jne 0x109ceae6 */
  if (!C.zf) goto L_109ceae6;
  /* 109ceada push 0 */
  push32((uint32_t)(0x0u));
  /* 109ceadc call 0x109cec40 */
  push32(0x109ceae1u); f_109cec40();
  /* 109ceae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceae4 jmp 0x109ceb10 */
  goto L_109ceb10;
L_109ceae6:;
  /* 109ceae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceae9 push eax */
  push32((uint32_t)(EAX));
  /* 109ceaea call 0x109ce050 */
  push32(0x109ceaefu); f_109ce050();
  /* 109ceaef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceaf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 109ceaf6 call 0x109ceb20 */
  push32(0x109ceafbu); f_109ceb20();
  /* 109ceafb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceafe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109ceb01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceb04 push edx */
  push32((uint32_t)(EDX));
  /* 109ceb05 call 0x109ce0c0 */
  push32(0x109ceb0au); f_109ce0c0();
  /* 109ceb0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109ceb10:;
  /* 109ceb10 mov esp, ebp */
  ESP = (EBP);
  /* 109ceb12 pop ebp */
  EBP = (pop32());
  /* 109ceb13 ret  */
  ESPCHK(0x109cead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x109ceb20 (65 bytes, 26 insns) */
void f_109ceb20(void) {
  FTRACE(0x109ceb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ceb20 push ebp */
  push32((uint32_t)(EBP));
  /* 109ceb21 mov ebp, esp */
  EBP = (ESP);
  /* 109ceb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceb26 push eax */
  push32((uint32_t)(EAX));
  /* 109ceb27 call 0x109ceb70 */
  push32(0x109ceb2cu); f_109ceb70();
  /* 109ceb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceb2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109ceb31 je 0x109ceb38 */
  if (C.zf) goto L_109ceb38;
  /* 109ceb33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109ceb36 jmp 0x109ceb5f */
  goto L_109ceb5f;
L_109ceb38:;
  /* 109ceb38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceb3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109ceb3e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 109ceb44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ceb46 je 0x109ceb5d */
  if (C.zf) goto L_109ceb5d;
  /* 109ceb48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceb4b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109ceb4e push ecx */
  push32((uint32_t)(ECX));
  /* 109ceb4f call 0x109cf930 */
  push32(0x109ceb54u); f_109cf930();
  /* 109ceb54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceb57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109ceb59 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ceb5b jmp 0x109ceb5f */
  goto L_109ceb5f;
L_109ceb5d:;
  /* 109ceb5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109ceb5f:;
  /* 109ceb5f pop ebp */
  EBP = (pop32());
  /* 109ceb60 ret  */
  ESPCHK(0x109ceb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x109ceb70 (183 bytes, 62 insns) */
void f_109ceb70(void) {
  FTRACE(0x109ceb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ceb70 push ebp */
  push32((uint32_t)(EBP));
  /* 109ceb71 mov ebp, esp */
  EBP = (ESP);
  /* 109ceb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ceb76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109ceb7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109ceb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109ceb83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ceb86 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109ceb89 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109ceb8c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceb8f jne 0x109cec0b */
  if (!C.zf) goto L_109cec0b;
  /* 109ceb91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ceb94 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109ceb97 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 109ceb9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ceb9f je 0x109cec0b */
  if (C.zf) goto L_109cec0b;
  /* 109ceba1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ceba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109ceba7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 109ceba9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cebac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cebaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cebb3 jle 0x109cec0b */
  if ((C.zf||C.sf!=C.of)) goto L_109cec0b;
  /* 109cebb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cebb8 push edx */
  push32((uint32_t)(EDX));
  /* 109cebb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebbc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109cebbf push ecx */
  push32((uint32_t)(ECX));
  /* 109cebc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebc3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109cebc6 push eax */
  push32((uint32_t)(EAX));
  /* 109cebc7 call 0x109cdae0 */
  push32(0x109cebccu); f_109cdae0();
  /* 109cebcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cebcf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cebd2 jne 0x109cebf5 */
  if (!C.zf) goto L_109cebf5;
  /* 109cebd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cebda and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 109cebe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cebe2 je 0x109cebf3 */
  if (C.zf) goto L_109cebf3;
  /* 109cebe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebe7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cebea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 109cebed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebf0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_109cebf3:;
  /* 109cebf3 jmp 0x109cec0b */
  goto L_109cec0b;
L_109cebf5:;
  /* 109cebf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cebf8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109cebfb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 109cebfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cec01 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 109cec04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cec0b:;
  /* 109cec0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cec0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cec11 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109cec14 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109cec16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cec19 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 109cec20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cec23 mov esp, ebp */
  ESP = (EBP);
  /* 109cec25 pop ebp */
  EBP = (pop32());
  /* 109cec26 ret  */
  ESPCHK(0x109ceb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x109cec30 (15 bytes, 7 insns) */
void f_109cec30(void) {
  FTRACE(0x109cec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cec30 push ebp */
  push32((uint32_t)(EBP));
  /* 109cec31 mov ebp, esp */
  EBP = (ESP);
  /* 109cec33 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cec35 call 0x109cec40 */
  push32(0x109cec3au); f_109cec40();
  /* 109cec3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cec3d pop ebp */
  EBP = (pop32());
  /* 109cec3e ret  */
  ESPCHK(0x109cec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x109cec40 (319 bytes, 94 insns) */
void f_109cec40(void) {
  FTRACE(0x109cec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cec40 push ebp */
  push32((uint32_t)(EBP));
  /* 109cec41 mov ebp, esp */
  EBP = (ESP);
  /* 109cec43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cec46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cec4d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109cec54 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cec56 call 0x109c8c40 */
  push32(0x109cec5bu); f_109c8c40();
  /* 109cec5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cec5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cec65 jmp 0x109cec70 */
  goto L_109cec70;
L_109cec67:;
  /* 109cec67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cec6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cec6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109cec70:;
  /* 109cec70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cec73 cmp ecx, dword ptr [0x109f2d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f2d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cec79 jge 0x109ced63 */
  if ((C.sf==C.of)) goto L_109ced63;
  /* 109cec7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cec82 mov eax, dword ptr [0x109f1a10] */
  EAX = (r32((uint32_t)(0x109f1a10)));
  /* 109cec87 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cec8b je 0x109ced5e */
  if (C.zf) goto L_109ced5e;
  /* 109cec91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cec94 mov edx, dword ptr [0x109f1a10] */
  EDX = (r32((uint32_t)(0x109f1a10)));
  /* 109cec9a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 109cec9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109ceca0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 109ceca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109ceca8 je 0x109ced5e */
  if (C.zf) goto L_109ced5e;
  /* 109cecae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cecb1 mov eax, dword ptr [0x109f1a10] */
  EAX = (r32((uint32_t)(0x109f1a10)));
  /* 109cecb6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109cecb9 push ecx */
  push32((uint32_t)(ECX));
  /* 109cecba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cecbd push edx */
  push32((uint32_t)(EDX));
  /* 109cecbe call 0x109ce090 */
  push32(0x109cecc3u); f_109ce090();
  /* 109cecc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cecc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cecc9 mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109ceccf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109cecd2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cecd5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 109cecda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cecdc je 0x109ced45 */
  if (C.zf) goto L_109ced45;
  /* 109cecde cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cece2 jne 0x109ced09 */
  if (!C.zf) goto L_109ced09;
  /* 109cece4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cece7 mov edx, dword ptr [0x109f1a10] */
  EDX = (r32((uint32_t)(0x109f1a10)));
  /* 109ceced mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 109cecf0 push eax */
  push32((uint32_t)(EAX));
  /* 109cecf1 call 0x109ceb20 */
  push32(0x109cecf6u); f_109ceb20();
  /* 109cecf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cecf9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cecfc je 0x109ced07 */
  if (C.zf) goto L_109ced07;
  /* 109cecfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ced01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ced04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109ced07:;
  /* 109ced07 jmp 0x109ced45 */
  goto L_109ced45;
L_109ced09:;
  /* 109ced09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ced0d jne 0x109ced45 */
  if (!C.zf) goto L_109ced45;
  /* 109ced0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ced12 mov eax, dword ptr [0x109f1a10] */
  EAX = (r32((uint32_t)(0x109f1a10)));
  /* 109ced17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 109ced1a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109ced1d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 109ced20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109ced22 je 0x109ced45 */
  if (C.zf) goto L_109ced45;
  /* 109ced24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ced27 mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109ced2d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109ced30 push edx */
  push32((uint32_t)(EDX));
  /* 109ced31 call 0x109ceb20 */
  push32(0x109ced36u); f_109ceb20();
  /* 109ced36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ced39 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ced3c jne 0x109ced45 */
  if (!C.zf) goto L_109ced45;
  /* 109ced3e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_109ced45:;
  /* 109ced45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ced48 mov ecx, dword ptr [0x109f1a10] */
  ECX = (r32((uint32_t)(0x109f1a10)));
  /* 109ced4e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 109ced51 push edx */
  push32((uint32_t)(EDX));
  /* 109ced52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ced55 push eax */
  push32((uint32_t)(EAX));
  /* 109ced56 call 0x109ce100 */
  push32(0x109ced5bu); f_109ce100();
  /* 109ced5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109ced5e:;
  /* 109ced5e jmp 0x109cec67 */
  goto L_109cec67;
L_109ced63:;
  /* 109ced63 push 2 */
  push32((uint32_t)(0x2u));
  /* 109ced65 call 0x109c8ce0 */
  push32(0x109ced6au); f_109c8ce0();
  /* 109ced6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ced6d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ced71 jne 0x109ced78 */
  if (!C.zf) goto L_109ced78;
  /* 109ced73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109ced76 jmp 0x109ced7b */
  goto L_109ced7b;
L_109ced78:;
  /* 109ced78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109ced7b:;
  /* 109ced7b mov esp, ebp */
  ESP = (EBP);
  /* 109ced7d pop ebp */
  EBP = (pop32());
  /* 109ced7e ret  */
  ESPCHK(0x109cec40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x109ced80 (15 bytes, 7 insns) */
void f_109ced80(void) {
  FTRACE(0x109ced80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ced80 push ebp */
  push32((uint32_t)(EBP));
  /* 109ced81 mov ebp, esp */
  EBP = (ESP);
  /* 109ced83 push 2 */
  push32((uint32_t)(0x2u));
  /* 109ced85 call 0x109c41b0 */
  push32(0x109ced8au); f_109c41b0();
  /* 109ced8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ced8d pop ebp */
  EBP = (pop32());
  /* 109ced8e ret  */
  ESPCHK(0x109ced80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x109ced90 (1007 bytes, 269 insns) */
void f_109ced90(void) {
  FTRACE(0x109ced90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109ced90 push ebp */
  push32((uint32_t)(EBP));
  /* 109ced91 mov ebp, esp */
  EBP = (ESP);
  /* 109ced93 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ced99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ced9d jl 0x109ceda5 */
  if ((C.sf!=C.of)) goto L_109ceda5;
  /* 109ced9f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceda3 jle 0x109cedac */
  if ((C.zf||C.sf!=C.of)) goto L_109cedac;
L_109ceda5:;
  /* 109ceda5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ceda7 jmp 0x109cf17b */
  goto L_109cf17b;
L_109cedac:;
  /* 109cedac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109cedae call 0x109c8c40 */
  push32(0x109cedb3u); f_109c8c40();
  /* 109cedb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cedb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109cedbd mov eax, dword ptr [0x109f19fc] */
  EAX = (r32((uint32_t)(0x109f19fc)));
  /* 109cedc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cedc5 mov dword ptr [0x109f19fc], eax */
  w32((uint32_t)(0x109f19fc), (EAX));
L_109cedca:;
  /* 109cedca cmp dword ptr [0x109f1a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cedd1 je 0x109ceddd */
  if (C.zf) goto L_109ceddd;
  /* 109cedd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cedd5 call dword ptr [0x109f42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42d4))), 0x109ceddbu);
  /* 109ceddb jmp 0x109cedca */
  goto L_109cedca;
L_109ceddd:;
  /* 109ceddd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cede1 je 0x109cee21 */
  if (C.zf) goto L_109cee21;
  /* 109cede3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cede7 je 0x109cee01 */
  if (C.zf) goto L_109cee01;
  /* 109cede9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cedec push ecx */
  push32((uint32_t)(ECX));
  /* 109ceded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cedf0 push edx */
  push32((uint32_t)(EDX));
  /* 109cedf1 call 0x109cf180 */
  push32(0x109cedf6u); f_109cf180();
  /* 109cedf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cedf9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 109cedff jmp 0x109cee13 */
  goto L_109cee13;
L_109cee01:;
  /* 109cee01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cee04 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cee07 mov ecx, dword ptr [eax + 0x109f04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109f04dc)));
  /* 109cee0d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_109cee13:;
  /* 109cee13 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 109cee19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109cee1c jmp 0x109cf15b */
  goto L_109cf15b;
L_109cee21:;
  /* 109cee21 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 109cee28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cee2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cee33 je 0x109cf153 */
  if (C.zf) goto L_109cf153;
  /* 109cee39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cee3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cee3f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cee42 jne 0x109cf064 */
  if (!C.zf) goto L_109cf064;
  /* 109cee48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cee4b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109cee4f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cee52 jne 0x109cf064 */
  if (!C.zf) goto L_109cf064;
  /* 109cee58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cee5b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 109cee5f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cee62 jne 0x109cf064 */
  if (!C.zf) goto L_109cf064;
  /* 109cee68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cee6b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_109cee71:;
  /* 109cee71 push 0x109ed314 */
  push32((uint32_t)(0x109ed314u));
  /* 109cee76 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109cee7c push ecx */
  push32((uint32_t)(ECX));
  /* 109cee7d call 0x109d0fe0 */
  push32(0x109cee82u); f_109d0fe0();
  /* 109cee82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cee85 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 109cee8b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cee92 je 0x109ceebd */
  if (C.zf) goto L_109ceebd;
  /* 109cee94 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cee9a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ceea0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 109ceea6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceead je 0x109ceebd */
  if (C.zf) goto L_109ceebd;
  /* 109ceeaf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109ceeb5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109ceeb8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceebb jne 0x109ceee3 */
  if (!C.zf) goto L_109ceee3;
L_109ceebd:;
  /* 109ceebd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceec1 je 0x109ceedc */
  if (C.zf) goto L_109ceedc;
  /* 109ceec3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109ceec5 call 0x109c8ce0 */
  push32(0x109ceecau); f_109c8ce0();
  /* 109ceeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceecd mov edx, dword ptr [0x109f19fc] */
  EDX = (r32((uint32_t)(0x109f19fc)));
  /* 109ceed3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109ceed6 mov dword ptr [0x109f19fc], edx */
  w32((uint32_t)(0x109f19fc), (EDX));
L_109ceedc:;
  /* 109ceedc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109ceede jmp 0x109cf17b */
  goto L_109cf17b;
L_109ceee3:;
  /* 109ceee3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 109ceeea jmp 0x109ceef5 */
  goto L_109ceef5;
L_109ceeec:;
  /* 109ceeec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109ceeef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceef2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109ceef5:;
  /* 109ceef5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109ceef9 jg 0x109cef43 */
  if ((!C.zf&&C.sf==C.of)) goto L_109cef43;
  /* 109ceefb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109cef01 push ecx */
  push32((uint32_t)(ECX));
  /* 109cef02 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109cef08 push edx */
  push32((uint32_t)(EDX));
  /* 109cef09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cef0c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cef0f mov ecx, dword ptr [eax + 0x109f04d8] */
  ECX = (r32((uint32_t)(EAX + 0x109f04d8)));
  /* 109cef15 push ecx */
  push32((uint32_t)(ECX));
  /* 109cef16 call 0x109d0fa0 */
  push32(0x109cef1bu); f_109d0fa0();
  /* 109cef1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cef1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cef20 jne 0x109cef41 */
  if (!C.zf) goto L_109cef41;
  /* 109cef22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cef25 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cef28 mov eax, dword ptr [edx + 0x109f04d8] */
  EAX = (r32((uint32_t)(EDX + 0x109f04d8)));
  /* 109cef2e push eax */
  push32((uint32_t)(EAX));
  /* 109cef2f call 0x109c8070 */
  push32(0x109cef34u); f_109c8070();
  /* 109cef34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cef37 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cef3d jne 0x109cef41 */
  if (!C.zf) goto L_109cef41;
  /* 109cef3f jmp 0x109cef43 */
  goto L_109cef43;
L_109cef41:;
  /* 109cef41 jmp 0x109ceeec */
  goto L_109ceeec;
L_109cef43:;
  /* 109cef43 push 0x109ed310 */
  push32((uint32_t)(0x109ed310u));
  /* 109cef48 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cef4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cef51 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 109cef57 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cef5d push edx */
  push32((uint32_t)(EDX));
  /* 109cef5e call 0x109d0f60 */
  push32(0x109cef63u); f_109d0f60();
  /* 109cef63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cef66 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 109cef6c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cef73 jne 0x109cefa9 */
  if (!C.zf) goto L_109cefa9;
  /* 109cef75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cef7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cef7e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cef81 je 0x109cefa9 */
  if (C.zf) goto L_109cefa9;
  /* 109cef83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cef87 je 0x109cefa2 */
  if (C.zf) goto L_109cefa2;
  /* 109cef89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109cef8b call 0x109c8ce0 */
  push32(0x109cef90u); f_109c8ce0();
  /* 109cef90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cef93 mov edx, dword ptr [0x109f19fc] */
  EDX = (r32((uint32_t)(0x109f19fc)));
  /* 109cef99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cef9c mov dword ptr [0x109f19fc], edx */
  w32((uint32_t)(0x109f19fc), (EDX));
L_109cefa2:;
  /* 109cefa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cefa4 jmp 0x109cf17b */
  goto L_109cf17b;
L_109cefa9:;
  /* 109cefa9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cefad jg 0x109ceffa */
  if ((!C.zf&&C.sf==C.of)) goto L_109ceffa;
  /* 109cefaf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109cefb5 push eax */
  push32((uint32_t)(EAX));
  /* 109cefb6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cefbc push ecx */
  push32((uint32_t)(ECX));
  /* 109cefbd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 109cefc3 push edx */
  push32((uint32_t)(EDX));
  /* 109cefc4 call 0x109c8a60 */
  push32(0x109cefc9u); f_109c8a60();
  /* 109cefc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cefcc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 109cefd2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 109cefda lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 109cefe0 push ecx */
  push32((uint32_t)(ECX));
  /* 109cefe1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cefe4 push edx */
  push32((uint32_t)(EDX));
  /* 109cefe5 call 0x109cf180 */
  push32(0x109cefeau); f_109cf180();
  /* 109cefea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cefed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cefef je 0x109ceffa */
  if (C.zf) goto L_109ceffa;
  /* 109ceff1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109ceff4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109ceff7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109ceffa:;
  /* 109ceffa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cf000 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf006 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 109cf00c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109cf012 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109cf015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf017 je 0x109cf028 */
  if (C.zf) goto L_109cf028;
  /* 109cf019 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109cf01f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf022 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_109cf028:;
  /* 109cf028 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 109cf02e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109cf031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf033 jne 0x109cee71 */
  if (!C.zf) goto L_109cee71;
  /* 109cf039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf03d je 0x109cf04c */
  if (C.zf) goto L_109cf04c;
  /* 109cf03f call 0x109cf320 */
  push32(0x109cf044u); f_109cf320();
  /* 109cf044 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 109cf04a jmp 0x109cf056 */
  goto L_109cf056;
L_109cf04c:;
  /* 109cf04c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_109cf056:;
  /* 109cf056 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 109cf05c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109cf05f jmp 0x109cf151 */
  goto L_109cf151;
L_109cf064:;
  /* 109cf064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf067 push edx */
  push32((uint32_t)(EDX));
  /* 109cf068 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cf06a push 0 */
  push32((uint32_t)(0x0u));
  /* 109cf06c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 109cf072 push eax */
  push32((uint32_t)(EAX));
  /* 109cf073 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf076 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf077 call 0x109cf420 */
  push32(0x109cf07cu); f_109cf420();
  /* 109cf07c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf07f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cf082 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf086 je 0x109cf151 */
  if (C.zf) goto L_109cf151;
  /* 109cf08c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109cf093 jmp 0x109cf09e */
  goto L_109cf09e;
L_109cf095:;
  /* 109cf095 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cf098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf09b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109cf09e:;
  /* 109cf09e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf0a2 jg 0x109cf100 */
  if ((!C.zf&&C.sf==C.of)) goto L_109cf100;
  /* 109cf0a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf0a8 je 0x109cf0fe */
  if (C.zf) goto L_109cf0fe;
  /* 109cf0aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cf0ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf0b0 mov ecx, dword ptr [eax + 0x109f04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109f04dc)));
  /* 109cf0b6 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf0b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 109cf0bd push edx */
  push32((uint32_t)(EDX));
  /* 109cf0be call 0x109d0ed0 */
  push32(0x109cf0c3u); f_109d0ed0();
  /* 109cf0c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf0c8 je 0x109cf0f5 */
  if (C.zf) goto L_109cf0f5;
  /* 109cf0ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 109cf0d0 push eax */
  push32((uint32_t)(EAX));
  /* 109cf0d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109cf0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf0d5 call 0x109cf180 */
  push32(0x109cf0dau); f_109cf180();
  /* 109cf0da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf0dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf0df je 0x109cf0ec */
  if (C.zf) goto L_109cf0ec;
  /* 109cf0e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf0e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf0e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109cf0ea jmp 0x109cf0f3 */
  goto L_109cf0f3;
L_109cf0ec:;
  /* 109cf0ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_109cf0f3:;
  /* 109cf0f3 jmp 0x109cf0fe */
  goto L_109cf0fe;
L_109cf0f5:;
  /* 109cf0f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf0f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf0fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109cf0fe:;
  /* 109cf0fe jmp 0x109cf095 */
  goto L_109cf095;
L_109cf100:;
  /* 109cf100 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf104 je 0x109cf12b */
  if (C.zf) goto L_109cf12b;
  /* 109cf106 call 0x109cf320 */
  push32(0x109cf10bu); f_109cf320();
  /* 109cf10b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cf10e push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf110 mov ecx, dword ptr [0x109f04dc] */
  ECX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf116 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf117 call 0x109c5cd0 */
  push32(0x109cf11cu); f_109c5cd0();
  /* 109cf11c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf11f mov dword ptr [0x109f04dc], 0 */
  w32((uint32_t)(0x109f04dc), (0x0u));
  /* 109cf129 jmp 0x109cf151 */
  goto L_109cf151;
L_109cf12b:;
  /* 109cf12b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf12f je 0x109cf13e */
  if (C.zf) goto L_109cf13e;
  /* 109cf131 call 0x109cf320 */
  push32(0x109cf136u); f_109cf320();
  /* 109cf136 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 109cf13c jmp 0x109cf148 */
  goto L_109cf148;
L_109cf13e:;
  /* 109cf13e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_109cf148:;
  /* 109cf148 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 109cf14e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109cf151:;
  /* 109cf151 jmp 0x109cf15b */
  goto L_109cf15b;
L_109cf153:;
  /* 109cf153 call 0x109cf320 */
  push32(0x109cf158u); f_109cf320();
  /* 109cf158 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109cf15b:;
  /* 109cf15b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf15f je 0x109cf178 */
  if (C.zf) goto L_109cf178;
  /* 109cf161 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109cf163 call 0x109c8ce0 */
  push32(0x109cf168u); f_109c8ce0();
  /* 109cf168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf16b mov eax, dword ptr [0x109f19fc] */
  EAX = (r32((uint32_t)(0x109f19fc)));
  /* 109cf170 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf173 mov dword ptr [0x109f19fc], eax */
  w32((uint32_t)(0x109f19fc), (EAX));
L_109cf178:;
  /* 109cf178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109cf17b:;
  /* 109cf17b mov esp, ebp */
  ESP = (EBP);
  /* 109cf17d pop ebp */
  EBP = (pop32());
  /* 109cf17e ret  */
  ESPCHK(0x109ced90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x109cf180 (403 bytes, 117 insns) */
void f_109cf180(void) {
  FTRACE(0x109cf180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf180 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf181 mov ebp, esp */
  EBP = (ESP);
  /* 109cf183 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf18c push eax */
  push32((uint32_t)(EAX));
  /* 109cf18d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 109cf193 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf194 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 109cf19a push edx */
  push32((uint32_t)(EDX));
  /* 109cf19b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 109cf1a1 push eax */
  push32((uint32_t)(EAX));
  /* 109cf1a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf1a6 call 0x109cf420 */
  push32(0x109cf1abu); f_109cf420();
  /* 109cf1ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf1b0 jne 0x109cf1b9 */
  if (!C.zf) goto L_109cf1b9;
  /* 109cf1b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf1b4 jmp 0x109cf30f */
  goto L_109cf30f;
L_109cf1b9:;
  /* 109cf1b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 109cf1be push 0x109ed318 */
  push32((uint32_t)(0x109ed318u));
  /* 109cf1c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf1c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 109cf1cb push edx */
  push32((uint32_t)(EDX));
  /* 109cf1cc call 0x109c8070 */
  push32(0x109cf1d1u); f_109c8070();
  /* 109cf1d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf1d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf1d7 push eax */
  push32((uint32_t)(EAX));
  /* 109cf1d8 call 0x109c5240 */
  push32(0x109cf1ddu); f_109c5240();
  /* 109cf1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf1e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109cf1e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf1e7 jne 0x109cf1f0 */
  if (!C.zf) goto L_109cf1f0;
  /* 109cf1e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf1eb jmp 0x109cf30f */
  goto L_109cf30f;
L_109cf1f0:;
  /* 109cf1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf1f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf1f6 mov ecx, dword ptr [eax + 0x109f04dc] */
  ECX = (r32((uint32_t)(EAX + 0x109f04dc)));
  /* 109cf1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cf1ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf202 mov eax, dword ptr [edx*4 + 0x109f1878] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f1878)));
  /* 109cf209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf20c push 6 */
  push32((uint32_t)(0x6u));
  /* 109cf20e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf211 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf214 add ecx, 0x109f18c8 */
  { uint32_t _a=(ECX),_b=(0x109f18c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf21a push ecx */
  push32((uint32_t)(ECX));
  /* 109cf21b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 109cf21e push edx */
  push32((uint32_t)(EDX));
  /* 109cf21f call 0x109cbb20 */
  push32(0x109cf224u); f_109cbb20();
  /* 109cf224 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf227 mov eax, dword ptr [0x109f1890] */
  EAX = (r32((uint32_t)(0x109f1890)));
  /* 109cf22c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109cf22f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 109cf235 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf236 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf239 push edx */
  push32((uint32_t)(EDX));
  /* 109cf23a call 0x109c81f0 */
  push32(0x109cf23fu); f_109c81f0();
  /* 109cf23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf245 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf248 mov dword ptr [ecx + 0x109f04dc], eax */
  w32((uint32_t)(ECX + 0x109f04dc), (EAX));
  /* 109cf24e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 109cf254 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109cf25a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf25d mov dword ptr [eax*4 + 0x109f1878], edx */
  w32((uint32_t)(EAX*4 + 0x109f1878), (EDX));
  /* 109cf264 push 6 */
  push32((uint32_t)(0x6u));
  /* 109cf266 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 109cf26c push ecx */
  push32((uint32_t)(ECX));
  /* 109cf26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf270 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf273 add edx, 0x109f18c8 */
  { uint32_t _a=(EDX),_b=(0x109f18c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf279 push edx */
  push32((uint32_t)(EDX));
  /* 109cf27a call 0x109cbb20 */
  push32(0x109cf27fu); f_109cbb20();
  /* 109cf27f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf282 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf286 jne 0x109cf293 */
  if (!C.zf) goto L_109cf293;
  /* 109cf288 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cf28e mov dword ptr [0x109f1890], eax */
  w32((uint32_t)(0x109f1890), (EAX));
L_109cf293:;
  /* 109cf293 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf297 jne 0x109cf2a5 */
  if (!C.zf) goto L_109cf2a5;
  /* 109cf299 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 109cf29f mov dword ptr [0x109f1894], ecx */
  w32((uint32_t)(0x109f1894), (ECX));
L_109cf2a5:;
  /* 109cf2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf2a8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf2ab call dword ptr [edx + 0x109f04e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x109f04e0))), 0x109cf2b1u);
  /* 109cf2b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf2b3 je 0x109cf2ec */
  if (C.zf) goto L_109cf2ec;
  /* 109cf2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf2b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf2bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf2be mov dword ptr [eax + 0x109f04dc], ecx */
  w32((uint32_t)(EAX + 0x109f04dc), (ECX));
  /* 109cf2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf2c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf2c9 push edx */
  push32((uint32_t)(EDX));
  /* 109cf2ca call 0x109c5cd0 */
  push32(0x109cf2cfu); f_109c5cd0();
  /* 109cf2cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf2d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf2d8 mov dword ptr [eax*4 + 0x109f1878], ecx */
  w32((uint32_t)(EAX*4 + 0x109f1878), (ECX));
  /* 109cf2df mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109cf2e2 mov dword ptr [0x109f1890], edx */
  w32((uint32_t)(0x109f1890), (EDX));
  /* 109cf2e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf2ea jmp 0x109cf30f */
  goto L_109cf30f;
L_109cf2ec:;
  /* 109cf2ec cmp dword ptr [ebp - 0xc], 0x109f03c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x109f03c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf2f3 je 0x109cf303 */
  if (C.zf) goto L_109cf303;
  /* 109cf2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf2f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf2fa push eax */
  push32((uint32_t)(EAX));
  /* 109cf2fb call 0x109c5cd0 */
  push32(0x109cf300u); f_109c5cd0();
  /* 109cf300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf303:;
  /* 109cf303 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf306 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf309 mov eax, dword ptr [ecx + 0x109f04dc] */
  EAX = (r32((uint32_t)(ECX + 0x109f04dc)));
L_109cf30f:;
  /* 109cf30f mov esp, ebp */
  ESP = (EBP);
  /* 109cf311 pop ebp */
  EBP = (pop32());
  /* 109cf312 ret  */
  ESPCHK(0x109cf180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x109cf320 (256 bytes, 72 insns) */
void f_109cf320(void) {
  FTRACE(0x109cf320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf320 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf321 mov ebp, esp */
  EBP = (ESP);
  /* 109cf323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf326 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 109cf32d cmp dword ptr [0x109f04dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f04dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf334 jne 0x109cf354 */
  if (!C.zf) goto L_109cf354;
  /* 109cf336 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 109cf33b push 0x109ed318 */
  push32((uint32_t)(0x109ed318u));
  /* 109cf340 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf342 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 109cf347 call 0x109c5240 */
  push32(0x109cf34cu); f_109c5240();
  /* 109cf34c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf34f mov dword ptr [0x109f04dc], eax */
  w32((uint32_t)(0x109f04dc), (EAX));
L_109cf354:;
  /* 109cf354 mov eax, dword ptr [0x109f04dc] */
  EAX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf359 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109cf35c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109cf363 jmp 0x109cf36e */
  goto L_109cf36e;
L_109cf365:;
  /* 109cf365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf368 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf36b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109cf36e:;
  /* 109cf36e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf371 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf374 mov eax, dword ptr [edx + 0x109f04dc] */
  EAX = (r32((uint32_t)(EDX + 0x109f04dc)));
  /* 109cf37a push eax */
  push32((uint32_t)(EAX));
  /* 109cf37b push 0x109ed324 */
  push32((uint32_t)(0x109ed324u));
  /* 109cf380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf383 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf386 mov edx, dword ptr [ecx + 0x109f04d8] */
  EDX = (r32((uint32_t)(ECX + 0x109f04d8)));
  /* 109cf38c push edx */
  push32((uint32_t)(EDX));
  /* 109cf38d push 3 */
  push32((uint32_t)(0x3u));
  /* 109cf38f mov eax, dword ptr [0x109f04dc] */
  EAX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf394 push eax */
  push32((uint32_t)(EAX));
  /* 109cf395 call 0x109cf5c0 */
  push32(0x109cf39au); f_109cf5c0();
  /* 109cf39a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf39d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf3a1 jge 0x109cf3e9 */
  if ((C.sf==C.of)) goto L_109cf3e9;
  /* 109cf3a3 push 0x109ed310 */
  push32((uint32_t)(0x109ed310u));
  /* 109cf3a8 mov ecx, dword ptr [0x109f04dc] */
  ECX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf3ae push ecx */
  push32((uint32_t)(ECX));
  /* 109cf3af call 0x109c8200 */
  push32(0x109cf3b4u); f_109c8200();
  /* 109cf3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf3b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf3ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf3bd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf3c0 mov eax, dword ptr [edx + 0x109f04dc] */
  EAX = (r32((uint32_t)(EDX + 0x109f04dc)));
  /* 109cf3c6 push eax */
  push32((uint32_t)(EAX));
  /* 109cf3c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf3ca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf3cd mov edx, dword ptr [ecx + 0x109f04dc] */
  EDX = (r32((uint32_t)(ECX + 0x109f04dc)));
  /* 109cf3d3 push edx */
  push32((uint32_t)(EDX));
  /* 109cf3d4 call 0x109d0ed0 */
  push32(0x109cf3d9u); f_109d0ed0();
  /* 109cf3d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf3dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf3de je 0x109cf3e7 */
  if (C.zf) goto L_109cf3e7;
  /* 109cf3e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109cf3e7:;
  /* 109cf3e7 jmp 0x109cf417 */
  goto L_109cf417;
L_109cf3e9:;
  /* 109cf3e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf3ed jne 0x109cf3f6 */
  if (!C.zf) goto L_109cf3f6;
  /* 109cf3ef mov eax, dword ptr [0x109f04dc] */
  EAX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf3f4 jmp 0x109cf41c */
  goto L_109cf41c;
L_109cf3f6:;
  /* 109cf3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf3f8 mov eax, dword ptr [0x109f04dc] */
  EAX = (r32((uint32_t)(0x109f04dc)));
  /* 109cf3fd push eax */
  push32((uint32_t)(EAX));
  /* 109cf3fe call 0x109c5cd0 */
  push32(0x109cf403u); f_109c5cd0();
  /* 109cf403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf406 mov dword ptr [0x109f04dc], 0 */
  w32((uint32_t)(0x109f04dc), (0x0u));
  /* 109cf410 mov eax, dword ptr [0x109f04f4] */
  EAX = (r32((uint32_t)(0x109f04f4)));
  /* 109cf415 jmp 0x109cf41c */
  goto L_109cf41c;
L_109cf417:;
  /* 109cf417 jmp 0x109cf365 */
  goto L_109cf365;
L_109cf41c:;
  /* 109cf41c mov esp, ebp */
  ESP = (EBP);
  /* 109cf41e pop ebp */
  EBP = (pop32());
  /* 109cf41f ret  */
  ESPCHK(0x109cf320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f420 @ 0x109cf420 (388 bytes, 115 insns) */
void f_109cf420(void) {
  FTRACE(0x109cf420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf420 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf421 mov ebp, esp */
  EBP = (ESP);
  /* 109cf423 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf429 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf42d jne 0x109cf436 */
  if (!C.zf) goto L_109cf436;
  /* 109cf42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf431 jmp 0x109cf5a0 */
  goto L_109cf5a0;
L_109cf436:;
  /* 109cf436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cf43c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf43f jne 0x109cf490 */
  if (!C.zf) goto L_109cf490;
  /* 109cf441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf444 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109cf448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf44a jne 0x109cf490 */
  if (!C.zf) goto L_109cf490;
  /* 109cf44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf44f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 109cf452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf455 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 109cf459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf45d je 0x109cf479 */
  if (C.zf) goto L_109cf479;
  /* 109cf45f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cf462 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 109cf467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cf46a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 109cf470 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cf473 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_109cf479:;
  /* 109cf479 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf47d je 0x109cf488 */
  if (C.zf) goto L_109cf488;
  /* 109cf47f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cf482 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109cf488:;
  /* 109cf488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf48b jmp 0x109cf5a0 */
  goto L_109cf5a0;
L_109cf490:;
  /* 109cf490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf493 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf494 push 0x109f0450 */
  push32((uint32_t)(0x109f0450u));
  /* 109cf499 call 0x109d0ed0 */
  push32(0x109cf49eu); f_109d0ed0();
  /* 109cf49e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf4a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf4a3 je 0x109cf558 */
  if (C.zf) goto L_109cf558;
  /* 109cf4a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf4ac push edx */
  push32((uint32_t)(EDX));
  /* 109cf4ad push 0x109f03cc */
  push32((uint32_t)(0x109f03ccu));
  /* 109cf4b2 call 0x109d0ed0 */
  push32(0x109cf4b7u); f_109d0ed0();
  /* 109cf4b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf4ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf4bc je 0x109cf558 */
  if (C.zf) goto L_109cf558;
  /* 109cf4c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf4c5 push eax */
  push32((uint32_t)(EAX));
  /* 109cf4c6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 109cf4cc push ecx */
  push32((uint32_t)(ECX));
  /* 109cf4cd call 0x109cf610 */
  push32(0x109cf4d2u); f_109cf610();
  /* 109cf4d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf4d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf4d7 je 0x109cf4e0 */
  if (C.zf) goto L_109cf4e0;
  /* 109cf4d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf4db jmp 0x109cf5a0 */
  goto L_109cf5a0;
L_109cf4e0:;
  /* 109cf4e0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 109cf4e6 push edx */
  push32((uint32_t)(EDX));
  /* 109cf4e7 push 0x109f18a0 */
  push32((uint32_t)(0x109f18a0u));
  /* 109cf4ec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 109cf4f2 push eax */
  push32((uint32_t)(EAX));
  /* 109cf4f3 call 0x109d1020 */
  push32(0x109cf4f8u); f_109d1020();
  /* 109cf4f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf4fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf4fd jne 0x109cf506 */
  if (!C.zf) goto L_109cf506;
  /* 109cf4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf501 jmp 0x109cf5a0 */
  goto L_109cf5a0;
L_109cf506:;
  /* 109cf506 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cf508 mov cx, word ptr [0x109f18a4] */
  CX = (r16((uint32_t)(0x109f18a4)));
  /* 109cf50f mov dword ptr [0x109f18a8], ecx */
  w32((uint32_t)(0x109f18a8), (ECX));
  /* 109cf515 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 109cf51b push edx */
  push32((uint32_t)(EDX));
  /* 109cf51c push 0x109f0450 */
  push32((uint32_t)(0x109f0450u));
  /* 109cf521 call 0x109cf770 */
  push32(0x109cf526u); f_109cf770();
  /* 109cf526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf529 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf52c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cf52f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cf531 je 0x109cf546 */
  if (C.zf) goto L_109cf546;
  /* 109cf533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf536 push edx */
  push32((uint32_t)(EDX));
  /* 109cf537 push 0x109f03cc */
  push32((uint32_t)(0x109f03ccu));
  /* 109cf53c call 0x109c81f0 */
  push32(0x109cf541u); f_109c81f0();
  /* 109cf541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf544 jmp 0x109cf558 */
  goto L_109cf558;
L_109cf546:;
  /* 109cf546 push 0x109f0450 */
  push32((uint32_t)(0x109f0450u));
  /* 109cf54b push 0x109f03cc */
  push32((uint32_t)(0x109f03ccu));
  /* 109cf550 call 0x109c81f0 */
  push32(0x109cf555u); f_109c81f0();
  /* 109cf555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf558:;
  /* 109cf558 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf55c je 0x109cf571 */
  if (C.zf) goto L_109cf571;
  /* 109cf55e push 6 */
  push32((uint32_t)(0x6u));
  /* 109cf560 push 0x109f18a0 */
  push32((uint32_t)(0x109f18a0u));
  /* 109cf565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109cf568 push eax */
  push32((uint32_t)(EAX));
  /* 109cf569 call 0x109cbb20 */
  push32(0x109cf56eu); f_109cbb20();
  /* 109cf56e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf571:;
  /* 109cf571 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf575 je 0x109cf58a */
  if (C.zf) goto L_109cf58a;
  /* 109cf577 push 4 */
  push32((uint32_t)(0x4u));
  /* 109cf579 push 0x109f18a8 */
  push32((uint32_t)(0x109f18a8u));
  /* 109cf57e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109cf581 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf582 call 0x109cbb20 */
  push32(0x109cf587u); f_109cbb20();
  /* 109cf587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf58a:;
  /* 109cf58a push 0x109f0450 */
  push32((uint32_t)(0x109f0450u));
  /* 109cf58f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf592 push edx */
  push32((uint32_t)(EDX));
  /* 109cf593 call 0x109c81f0 */
  push32(0x109cf598u); f_109c81f0();
  /* 109cf598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf59b mov eax, 0x109f0450 */
  EAX = (0x109f0450u);
L_109cf5a0:;
  /* 109cf5a0 mov esp, ebp */
  ESP = (EBP);
  /* 109cf5a2 pop ebp */
  EBP = (pop32());
  /* 109cf5a3 ret  */
  ESPCHK(0x109cf420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x109cf5b0 (7 bytes, 5 insns) */
void f_109cf5b0(void) {
  FTRACE(0x109cf5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf5b1 mov ebp, esp */
  EBP = (ESP);
  /* 109cf5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf5b5 pop ebp */
  EBP = (pop32());
  /* 109cf5b6 ret  */
  ESPCHK(0x109cf5b0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x109cf5c0 (79 bytes, 28 insns) */
void f_109cf5c0(void) {
  FTRACE(0x109cf5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf5c1 mov ebp, esp */
  EBP = (ESP);
  /* 109cf5c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf5c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 109cf5c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf5cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109cf5d3 jmp 0x109cf5de */
  goto L_109cf5de;
L_109cf5d5:;
  /* 109cf5d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf5d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf5db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109cf5de:;
  /* 109cf5de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf5e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf5e4 jge 0x109cf604 */
  if ((C.sf==C.of)) goto L_109cf604;
  /* 109cf5e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf5e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf5ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf5ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf5f2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 109cf5f5 push edx */
  push32((uint32_t)(EDX));
  /* 109cf5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf5f9 push eax */
  push32((uint32_t)(EAX));
  /* 109cf5fa call 0x109c8200 */
  push32(0x109cf5ffu); f_109c8200();
  /* 109cf5ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf602 jmp 0x109cf5d5 */
  goto L_109cf5d5;
L_109cf604:;
  /* 109cf604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cf60b mov esp, ebp */
  ESP = (EBP);
  /* 109cf60d pop ebp */
  EBP = (pop32());
  /* 109cf60e ret  */
  ESPCHK(0x109cf5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f610 @ 0x109cf610 (349 bytes, 122 insns) */
void f_109cf610(void) {
  FTRACE(0x109cf610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf610 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf611 mov ebp, esp */
  EBP = (ESP);
  /* 109cf613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf616 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 109cf61b push 0 */
  push32((uint32_t)(0x0u));
  /* 109cf61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf620 push eax */
  push32((uint32_t)(EAX));
  /* 109cf621 call 0x109c8fb0 */
  push32(0x109cf626u); f_109c8fb0();
  /* 109cf626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf629 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf62c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109cf62f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cf631 jne 0x109cf63a */
  if (!C.zf) goto L_109cf63a;
  /* 109cf633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf635 jmp 0x109cf769 */
  goto L_109cf769;
L_109cf63a:;
  /* 109cf63a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf63d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109cf640 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf643 jne 0x109cf670 */
  if (!C.zf) goto L_109cf670;
  /* 109cf645 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf648 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109cf64c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf64e je 0x109cf670 */
  if (C.zf) goto L_109cf670;
  /* 109cf650 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf653 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf656 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf65a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf660 push edx */
  push32((uint32_t)(EDX));
  /* 109cf661 call 0x109c81f0 */
  push32(0x109cf666u); f_109c81f0();
  /* 109cf666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf66b jmp 0x109cf769 */
  goto L_109cf769;
L_109cf670:;
  /* 109cf670 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109cf677 jmp 0x109cf682 */
  goto L_109cf682;
L_109cf679:;
  /* 109cf679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf67c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf67f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109cf682:;
  /* 109cf682 push 0x109ed328 */
  push32((uint32_t)(0x109ed328u));
  /* 109cf687 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf68a push ecx */
  push32((uint32_t)(ECX));
  /* 109cf68b call 0x109d0f60 */
  push32(0x109cf690u); f_109d0f60();
  /* 109cf690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf693 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109cf696 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf69a jne 0x109cf6a4 */
  if (!C.zf) goto L_109cf6a4;
  /* 109cf69c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cf69f jmp 0x109cf769 */
  goto L_109cf769;
L_109cf6a4:;
  /* 109cf6a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf6a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf6aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109cf6ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 109cf6af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6b3 jne 0x109cf6da */
  if (!C.zf) goto L_109cf6da;
  /* 109cf6b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6b9 jge 0x109cf6da */
  if ((C.sf==C.of)) goto L_109cf6da;
  /* 109cf6bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf6bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6c2 je 0x109cf6da */
  if (C.zf) goto L_109cf6da;
  /* 109cf6c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf6c7 push edx */
  push32((uint32_t)(EDX));
  /* 109cf6c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf6cb push eax */
  push32((uint32_t)(EAX));
  /* 109cf6cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf6cf push ecx */
  push32((uint32_t)(ECX));
  /* 109cf6d0 call 0x109c8a60 */
  push32(0x109cf6d5u); f_109c8a60();
  /* 109cf6d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf6d8 jmp 0x109cf740 */
  goto L_109cf740;
L_109cf6da:;
  /* 109cf6da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6de jne 0x109cf708 */
  if (!C.zf) goto L_109cf708;
  /* 109cf6e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6e4 jge 0x109cf708 */
  if ((C.sf==C.of)) goto L_109cf708;
  /* 109cf6e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf6ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf6ed je 0x109cf708 */
  if (C.zf) goto L_109cf708;
  /* 109cf6ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf6f2 push eax */
  push32((uint32_t)(EAX));
  /* 109cf6f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf6f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf6fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf6fd push edx */
  push32((uint32_t)(EDX));
  /* 109cf6fe call 0x109c8a60 */
  push32(0x109cf703u); f_109c8a60();
  /* 109cf703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf706 jmp 0x109cf740 */
  goto L_109cf740;
L_109cf708:;
  /* 109cf708 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf70c jne 0x109cf73b */
  if (!C.zf) goto L_109cf73b;
  /* 109cf70e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf714 je 0x109cf71f */
  if (C.zf) goto L_109cf71f;
  /* 109cf716 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf71a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf71d jne 0x109cf73b */
  if (!C.zf) goto L_109cf73b;
L_109cf71f:;
  /* 109cf71f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf722 push edx */
  push32((uint32_t)(EDX));
  /* 109cf723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf726 push eax */
  push32((uint32_t)(EAX));
  /* 109cf727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf72a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf730 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf731 call 0x109c8a60 */
  push32(0x109cf736u); f_109c8a60();
  /* 109cf736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf739 jmp 0x109cf740 */
  goto L_109cf740;
L_109cf73b:;
  /* 109cf73b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cf73e jmp 0x109cf769 */
  goto L_109cf769;
L_109cf740:;
  /* 109cf740 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf744 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf747 jne 0x109cf74b */
  if (!C.zf) goto L_109cf74b;
  /* 109cf749 jmp 0x109cf767 */
  goto L_109cf767;
L_109cf74b:;
  /* 109cf74b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109cf74f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf751 jne 0x109cf755 */
  if (!C.zf) goto L_109cf755;
  /* 109cf753 jmp 0x109cf767 */
  goto L_109cf767;
L_109cf755:;
  /* 109cf755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cf758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf75b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 109cf75f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109cf762 jmp 0x109cf679 */
  goto L_109cf679;
L_109cf767:;
  /* 109cf767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cf769:;
  /* 109cf769 mov esp, ebp */
  ESP = (EBP);
  /* 109cf76b pop ebp */
  EBP = (pop32());
  /* 109cf76c ret  */
  ESPCHK(0x109cf610u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x109cf770 (101 bytes, 36 insns) */
void f_109cf770(void) {
  FTRACE(0x109cf770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf770 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf771 mov ebp, esp */
  EBP = (ESP);
  /* 109cf773 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf776 push eax */
  push32((uint32_t)(EAX));
  /* 109cf777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf77a push ecx */
  push32((uint32_t)(ECX));
  /* 109cf77b call 0x109c81f0 */
  push32(0x109cf780u); f_109c81f0();
  /* 109cf780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf786 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 109cf78a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf78c je 0x109cf7a8 */
  if (C.zf) goto L_109cf7a8;
  /* 109cf78e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf791 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf794 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf795 push 0x109ed330 */
  push32((uint32_t)(0x109ed330u));
  /* 109cf79a push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf79f push edx */
  push32((uint32_t)(EDX));
  /* 109cf7a0 call 0x109cf5c0 */
  push32(0x109cf7a5u); f_109cf5c0();
  /* 109cf7a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf7a8:;
  /* 109cf7a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf7ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 109cf7b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cf7b4 je 0x109cf7d3 */
  if (C.zf) goto L_109cf7d3;
  /* 109cf7b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109cf7b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf7bf push edx */
  push32((uint32_t)(EDX));
  /* 109cf7c0 push 0x109ed32c */
  push32((uint32_t)(0x109ed32cu));
  /* 109cf7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf7c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf7ca push eax */
  push32((uint32_t)(EAX));
  /* 109cf7cb call 0x109cf5c0 */
  push32(0x109cf7d0u); f_109cf5c0();
  /* 109cf7d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf7d3:;
  /* 109cf7d3 pop ebp */
  EBP = (pop32());
  /* 109cf7d4 ret  */
  ESPCHK(0x109cf770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7e0 @ 0x109cf7e0 (130 bytes, 50 insns) */
void f_109cf7e0(void) {
  FTRACE(0x109cf7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf7e1 mov ebp, esp */
  EBP = (ESP);
  /* 109cf7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf7e4 push ebx */
  push32((uint32_t)(EBX));
  /* 109cf7e5 push esi */
  push32((uint32_t)(ESI));
  /* 109cf7e6 push edi */
  push32((uint32_t)(EDI));
  /* 109cf7e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cf7ee:;
  /* 109cf7ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf7f2 jne 0x109cf812 */
  if (!C.zf) goto L_109cf812;
  /* 109cf7f4 push 0x109ed340 */
  push32((uint32_t)(0x109ed340u));
  /* 109cf7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cf7fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 109cf7fd push 0x109ed334 */
  push32((uint32_t)(0x109ed334u));
  /* 109cf802 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf804 call 0x109c4300 */
  push32(0x109cf809u); f_109c4300();
  /* 109cf809 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf80c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf80f jne 0x109cf812 */
  if (!C.zf) goto L_109cf812;
  /* 109cf811 int3  */
  x86_unimpl("int3 @ 0x109cf811");
L_109cf812:;
  /* 109cf812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cf814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf816 jne 0x109cf7ee */
  if (!C.zf) goto L_109cf7ee;
  /* 109cf818 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf81b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109cf81e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 109cf821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109cf823 je 0x109cf831 */
  if (C.zf) goto L_109cf831;
  /* 109cf825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf828 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 109cf82f jmp 0x109cf858 */
  goto L_109cf858;
L_109cf831:;
  /* 109cf831 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf834 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf835 call 0x109ce050 */
  push32(0x109cf83au); f_109ce050();
  /* 109cf83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf840 push edx */
  push32((uint32_t)(EDX));
  /* 109cf841 call 0x109cf870 */
  push32(0x109cf846u); f_109cf870();
  /* 109cf846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf84c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf84f push eax */
  push32((uint32_t)(EAX));
  /* 109cf850 call 0x109ce0c0 */
  push32(0x109cf855u); f_109ce0c0();
  /* 109cf855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109cf858:;
  /* 109cf858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf85b pop edi */
  EDI = (pop32());
  /* 109cf85c pop esi */
  ESI = (pop32());
  /* 109cf85d pop ebx */
  EBX = (pop32());
  /* 109cf85e mov esp, ebp */
  ESP = (EBP);
  /* 109cf860 pop ebp */
  EBP = (pop32());
  /* 109cf861 ret  */
  ESPCHK(0x109cf7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x109cf870 (190 bytes, 67 insns) */
void f_109cf870(void) {
  FTRACE(0x109cf870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf870 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf871 mov ebp, esp */
  EBP = (ESP);
  /* 109cf873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cf876 push ebx */
  push32((uint32_t)(EBX));
  /* 109cf877 push esi */
  push32((uint32_t)(ESI));
  /* 109cf878 push edi */
  push32((uint32_t)(EDI));
  /* 109cf879 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109cf880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109cf886:;
  /* 109cf886 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf88a jne 0x109cf8aa */
  if (!C.zf) goto L_109cf8aa;
  /* 109cf88c push 0x109ed1e0 */
  push32((uint32_t)(0x109ed1e0u));
  /* 109cf891 push 0 */
  push32((uint32_t)(0x0u));
  /* 109cf893 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 109cf895 push 0x109ed334 */
  push32((uint32_t)(0x109ed334u));
  /* 109cf89a push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf89c call 0x109c4300 */
  push32(0x109cf8a1u); f_109c4300();
  /* 109cf8a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf8a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf8a7 jne 0x109cf8aa */
  if (!C.zf) goto L_109cf8aa;
  /* 109cf8a9 int3  */
  x86_unimpl("int3 @ 0x109cf8a9");
L_109cf8aa:;
  /* 109cf8aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cf8ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cf8ae jne 0x109cf886 */
  if (!C.zf) goto L_109cf886;
  /* 109cf8b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf8b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109cf8b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 109cf8bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf8bd je 0x109cf91a */
  if (C.zf) goto L_109cf91a;
  /* 109cf8bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf8c2 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf8c3 call 0x109ceb70 */
  push32(0x109cf8c8u); f_109ceb70();
  /* 109cf8c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf8cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf8ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf8d1 push edx */
  push32((uint32_t)(EDX));
  /* 109cf8d2 call 0x109d1ef0 */
  push32(0x109cf8d7u); f_109d1ef0();
  /* 109cf8d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf8da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf8dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109cf8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf8e1 call 0x109d1dc0 */
  push32(0x109cf8e6u); f_109d1dc0();
  /* 109cf8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf8e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf8eb jge 0x109cf8f6 */
  if ((C.sf==C.of)) goto L_109cf8f6;
  /* 109cf8ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 109cf8f4 jmp 0x109cf91a */
  goto L_109cf91a;
L_109cf8f6:;
  /* 109cf8f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf8f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf8fd je 0x109cf91a */
  if (C.zf) goto L_109cf91a;
  /* 109cf8ff push 2 */
  push32((uint32_t)(0x2u));
  /* 109cf901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf904 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109cf907 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf908 call 0x109c5cd0 */
  push32(0x109cf90du); f_109c5cd0();
  /* 109cf90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf910 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf913 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_109cf91a:;
  /* 109cf91a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109cf91d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 109cf924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf927 pop edi */
  EDI = (pop32());
  /* 109cf928 pop esi */
  ESI = (pop32());
  /* 109cf929 pop ebx */
  EBX = (pop32());
  /* 109cf92a mov esp, ebp */
  ESP = (EBP);
  /* 109cf92c pop ebp */
  EBP = (pop32());
  /* 109cf92d ret  */
  ESPCHK(0x109cf870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x109cf930 (210 bytes, 63 insns) */
void f_109cf930(void) {
  FTRACE(0x109cf930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cf930 push ebp */
  push32((uint32_t)(EBP));
  /* 109cf931 mov ebp, esp */
  EBP = (ESP);
  /* 109cf933 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf937 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf93d jae 0x109cf961 */
  if (!C.cf) goto L_109cf961;
  /* 109cf93f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf942 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109cf945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf948 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109cf94b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf94e mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109cf955 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109cf95a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109cf95d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109cf95f jne 0x109cf974 */
  if (!C.zf) goto L_109cf974;
L_109cf961:;
  /* 109cf961 call 0x109cd110 */
  push32(0x109cf966u); f_109cd110();
  /* 109cf966 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cf96c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cf96f jmp 0x109cf9fe */
  goto L_109cf9fe;
L_109cf974:;
  /* 109cf974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf977 push edx */
  push32((uint32_t)(EDX));
  /* 109cf978 call 0x109ce930 */
  push32(0x109cf97du); f_109ce930();
  /* 109cf97d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf983 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109cf986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf989 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109cf98c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109cf98f mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109cf996 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 109cf99b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109cf99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf9a0 je 0x109cf9dd */
  if (C.zf) goto L_109cf9dd;
  /* 109cf9a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf9a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109cf9a6 call 0x109ce7b0 */
  push32(0x109cf9abu); f_109ce7b0();
  /* 109cf9ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf9ae push eax */
  push32((uint32_t)(EAX));
  /* 109cf9af call dword ptr [0x109f42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42d0))), 0x109cf9b5u);
  /* 109cf9b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cf9b7 jne 0x109cf9c4 */
  if (!C.zf) goto L_109cf9c4;
  /* 109cf9b9 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109cf9bfu);
  /* 109cf9bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cf9c2 jmp 0x109cf9cb */
  goto L_109cf9cb;
L_109cf9c4:;
  /* 109cf9c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109cf9cb:;
  /* 109cf9cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cf9cf jne 0x109cf9d3 */
  if (!C.zf) goto L_109cf9d3;
  /* 109cf9d1 jmp 0x109cf9ef */
  goto L_109cf9ef;
L_109cf9d3:;
  /* 109cf9d3 call 0x109cd120 */
  push32(0x109cf9d8u); f_109cd120();
  /* 109cf9d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cf9db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109cf9dd:;
  /* 109cf9dd call 0x109cd110 */
  push32(0x109cf9e2u); f_109cd110();
  /* 109cf9e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109cf9e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_109cf9ef:;
  /* 109cf9ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cf9f2 push eax */
  push32((uint32_t)(EAX));
  /* 109cf9f3 call 0x109ce9c0 */
  push32(0x109cf9f8u); f_109ce9c0();
  /* 109cf9f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cf9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109cf9fe:;
  /* 109cf9fe mov esp, ebp */
  ESP = (EBP);
  /* 109cfa00 pop ebp */
  EBP = (pop32());
  /* 109cfa01 ret  */
  ESPCHK(0x109cf930u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x109cfa10 (219 bytes, 64 insns) */
void f_109cfa10(void) {
  FTRACE(0x109cfa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cfa10 push ebp */
  push32((uint32_t)(EBP));
  /* 109cfa11 mov ebp, esp */
  EBP = (ESP);
  /* 109cfa13 push ecx */
  push32((uint32_t)(ECX));
  /* 109cfa14 cmp dword ptr [0x109f188c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f188c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cfa1b je 0x109cfab1 */
  if (C.zf) goto L_109cfab1;
  /* 109cfa21 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109cfa23 push 0x109ed350 */
  push32((uint32_t)(0x109ed350u));
  /* 109cfa28 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cfa2a push 0xac */
  push32((uint32_t)(0xacu));
  /* 109cfa2f push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfa31 call 0x109c5650 */
  push32(0x109cfa36u); f_109c5650();
  /* 109cfa36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfa39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cfa3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cfa40 jne 0x109cfa4c */
  if (!C.zf) goto L_109cfa4c;
  /* 109cfa42 mov eax, 1 */
  EAX = (0x1u);
  /* 109cfa47 jmp 0x109cfae7 */
  goto L_109cfae7;
L_109cfa4c:;
  /* 109cfa4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfa4f push eax */
  push32((uint32_t)(EAX));
  /* 109cfa50 call 0x109cfaf0 */
  push32(0x109cfa55u); f_109cfaf0();
  /* 109cfa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfa58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109cfa5a je 0x109cfa7d */
  if (C.zf) goto L_109cfa7d;
  /* 109cfa5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfa5f push ecx */
  push32((uint32_t)(ECX));
  /* 109cfa60 call 0x109d0080 */
  push32(0x109cfa65u); f_109d0080();
  /* 109cfa65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfa68 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cfa6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfa6d push edx */
  push32((uint32_t)(EDX));
  /* 109cfa6e call 0x109c5cd0 */
  push32(0x109cfa73u); f_109c5cd0();
  /* 109cfa73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfa76 mov eax, 1 */
  EAX = (0x1u);
  /* 109cfa7b jmp 0x109cfae7 */
  goto L_109cfae7;
L_109cfa7d:;
  /* 109cfa7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfa80 mov dword ptr [0x109f0c98], eax */
  w32((uint32_t)(0x109f0c98), (EAX));
  /* 109cfa85 mov ecx, dword ptr [0x109f18ac] */
  ECX = (r32((uint32_t)(0x109f18ac)));
  /* 109cfa8b push ecx */
  push32((uint32_t)(ECX));
  /* 109cfa8c call 0x109d0080 */
  push32(0x109cfa91u); f_109d0080();
  /* 109cfa91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfa94 push 2 */
  push32((uint32_t)(0x2u));
  /* 109cfa96 mov edx, dword ptr [0x109f18ac] */
  EDX = (r32((uint32_t)(0x109f18ac)));
  /* 109cfa9c push edx */
  push32((uint32_t)(EDX));
  /* 109cfa9d call 0x109c5cd0 */
  push32(0x109cfaa2u); f_109c5cd0();
  /* 109cfaa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfaa8 mov dword ptr [0x109f18ac], eax */
  w32((uint32_t)(0x109f18ac), (EAX));
  /* 109cfaad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cfaaf jmp 0x109cfae7 */
  goto L_109cfae7;
L_109cfab1:;
  /* 109cfab1 mov dword ptr [0x109f0c98], 0x109f0ca0 */
  w32((uint32_t)(0x109f0c98), (0x109f0ca0u));
  /* 109cfabb mov ecx, dword ptr [0x109f18ac] */
  ECX = (r32((uint32_t)(0x109f18ac)));
  /* 109cfac1 push ecx */
  push32((uint32_t)(ECX));
  /* 109cfac2 call 0x109d0080 */
  push32(0x109cfac7u); f_109d0080();
  /* 109cfac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfaca push 2 */
  push32((uint32_t)(0x2u));
  /* 109cfacc mov edx, dword ptr [0x109f18ac] */
  EDX = (r32((uint32_t)(0x109f18ac)));
  /* 109cfad2 push edx */
  push32((uint32_t)(EDX));
  /* 109cfad3 call 0x109c5cd0 */
  push32(0x109cfad8u); f_109c5cd0();
  /* 109cfad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfadb mov dword ptr [0x109f18ac], 0 */
  w32((uint32_t)(0x109f18ac), (0x0u));
  /* 109cfae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109cfae7:;
  /* 109cfae7 mov esp, ebp */
  ESP = (EBP);
  /* 109cfae9 pop ebp */
  EBP = (pop32());
  /* 109cfaea ret  */
  ESPCHK(0x109cfa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x109cfaf0 (1423 bytes, 533 insns) */
void f_109cfaf0(void) {
  FTRACE(0x109cfaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109cfaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 109cfaf1 mov ebp, esp */
  EBP = (ESP);
  /* 109cfaf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109cfaf6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109cfafd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109cfaff mov ax, word ptr [0x109f18e6] */
  AX = (r16((uint32_t)(0x109f18e6)));
  /* 109cfb05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109cfb08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfb0a mov cx, word ptr [0x109f18e8] */
  CX = (r16((uint32_t)(0x109f18e8)));
  /* 109cfb11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109cfb14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109cfb18 jne 0x109cfb22 */
  if (!C.zf) goto L_109cfb22;
  /* 109cfb1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109cfb1d jmp 0x109d007b */
  goto L_109d007b;
L_109cfb22:;
  /* 109cfb22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfb25 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb28 push edx */
  push32((uint32_t)(EDX));
  /* 109cfb29 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 109cfb2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfb2e push eax */
  push32((uint32_t)(EAX));
  /* 109cfb2f push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfb31 call 0x109d3400 */
  push32(0x109cfb36u); f_109d3400();
  /* 109cfb36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfb3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfb3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfb41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfb44 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb47 push edx */
  push32((uint32_t)(EDX));
  /* 109cfb48 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109cfb4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfb4d push eax */
  push32((uint32_t)(EAX));
  /* 109cfb4e push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfb50 call 0x109d3400 */
  push32(0x109cfb55u); f_109d3400();
  /* 109cfb55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfb5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfb5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfb60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfb63 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb66 push edx */
  push32((uint32_t)(EDX));
  /* 109cfb67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109cfb69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfb6c push eax */
  push32((uint32_t)(EAX));
  /* 109cfb6d push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfb6f call 0x109d3400 */
  push32(0x109cfb74u); f_109d3400();
  /* 109cfb74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfb7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfb7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfb7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfb82 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb85 push edx */
  push32((uint32_t)(EDX));
  /* 109cfb86 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 109cfb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfb8b push eax */
  push32((uint32_t)(EAX));
  /* 109cfb8c push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfb8e call 0x109d3400 */
  push32(0x109cfb93u); f_109d3400();
  /* 109cfb93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfb96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfb99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfb9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfb9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfba1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfba4 push edx */
  push32((uint32_t)(EDX));
  /* 109cfba5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 109cfba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfbaa push eax */
  push32((uint32_t)(EAX));
  /* 109cfbab push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfbad call 0x109d3400 */
  push32(0x109cfbb2u); f_109d3400();
  /* 109cfbb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfbb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfbb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfbba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfbbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfbc0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfbc3 push edx */
  push32((uint32_t)(EDX));
  /* 109cfbc4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 109cfbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfbc9 push eax */
  push32((uint32_t)(EAX));
  /* 109cfbca push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfbcc call 0x109d3400 */
  push32(0x109cfbd1u); f_109d3400();
  /* 109cfbd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfbd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfbd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfbd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfbdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfbdf push edx */
  push32((uint32_t)(EDX));
  /* 109cfbe0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 109cfbe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfbe5 push eax */
  push32((uint32_t)(EAX));
  /* 109cfbe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfbe8 call 0x109d3400 */
  push32(0x109cfbedu); f_109d3400();
  /* 109cfbed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfbf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfbf3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfbf5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfbf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfbfb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfbfe push edx */
  push32((uint32_t)(EDX));
  /* 109cfbff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 109cfc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc04 push eax */
  push32((uint32_t)(EAX));
  /* 109cfc05 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfc07 call 0x109d3400 */
  push32(0x109cfc0cu); f_109d3400();
  /* 109cfc0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfc12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfc14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfc17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfc1a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc1d push edx */
  push32((uint32_t)(EDX));
  /* 109cfc1e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109cfc20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc23 push eax */
  push32((uint32_t)(EAX));
  /* 109cfc24 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfc26 call 0x109d3400 */
  push32(0x109cfc2bu); f_109d3400();
  /* 109cfc2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfc31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfc33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfc36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfc39 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc3c push edx */
  push32((uint32_t)(EDX));
  /* 109cfc3d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 109cfc3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc42 push eax */
  push32((uint32_t)(EAX));
  /* 109cfc43 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfc45 call 0x109d3400 */
  push32(0x109cfc4au); f_109d3400();
  /* 109cfc4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfc50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfc52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfc55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfc58 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc5b push edx */
  push32((uint32_t)(EDX));
  /* 109cfc5c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 109cfc5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc61 push eax */
  push32((uint32_t)(EAX));
  /* 109cfc62 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfc64 call 0x109d3400 */
  push32(0x109cfc69u); f_109d3400();
  /* 109cfc69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfc6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfc71 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfc74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfc77 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc7a push edx */
  push32((uint32_t)(EDX));
  /* 109cfc7b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 109cfc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc80 push eax */
  push32((uint32_t)(EAX));
  /* 109cfc81 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfc83 call 0x109d3400 */
  push32(0x109cfc88u); f_109d3400();
  /* 109cfc88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfc8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfc90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfc93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfc96 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfc99 push edx */
  push32((uint32_t)(EDX));
  /* 109cfc9a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 109cfc9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfc9f push eax */
  push32((uint32_t)(EAX));
  /* 109cfca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfca2 call 0x109d3400 */
  push32(0x109cfca7u); f_109d3400();
  /* 109cfca7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfcaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfcad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfcaf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfcb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfcb5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfcb8 push edx */
  push32((uint32_t)(EDX));
  /* 109cfcb9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 109cfcbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfcbe push eax */
  push32((uint32_t)(EAX));
  /* 109cfcbf push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfcc1 call 0x109d3400 */
  push32(0x109cfcc6u); f_109d3400();
  /* 109cfcc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfcc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfccc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfcce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfcd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfcd4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfcd7 push edx */
  push32((uint32_t)(EDX));
  /* 109cfcd8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 109cfcda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfcdd push eax */
  push32((uint32_t)(EAX));
  /* 109cfcde push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfce0 call 0x109d3400 */
  push32(0x109cfce5u); f_109d3400();
  /* 109cfce5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfce8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfceb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfced mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfcf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfcf3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfcf6 push edx */
  push32((uint32_t)(EDX));
  /* 109cfcf7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 109cfcf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfcfc push eax */
  push32((uint32_t)(EAX));
  /* 109cfcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfcff call 0x109d3400 */
  push32(0x109cfd04u); f_109d3400();
  /* 109cfd04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfd0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfd0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfd0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfd12 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd15 push edx */
  push32((uint32_t)(EDX));
  /* 109cfd16 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 109cfd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfd1b push eax */
  push32((uint32_t)(EAX));
  /* 109cfd1c push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfd1e call 0x109d3400 */
  push32(0x109cfd23u); f_109d3400();
  /* 109cfd23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfd29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfd2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfd2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfd31 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd34 push edx */
  push32((uint32_t)(EDX));
  /* 109cfd35 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 109cfd37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfd3a push eax */
  push32((uint32_t)(EAX));
  /* 109cfd3b push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfd3d call 0x109d3400 */
  push32(0x109cfd42u); f_109d3400();
  /* 109cfd42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfd48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfd4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfd4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfd50 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd53 push edx */
  push32((uint32_t)(EDX));
  /* 109cfd54 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109cfd56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfd59 push eax */
  push32((uint32_t)(EAX));
  /* 109cfd5a push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfd5c call 0x109d3400 */
  push32(0x109cfd61u); f_109d3400();
  /* 109cfd61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfd67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfd69 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfd6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfd6f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd72 push edx */
  push32((uint32_t)(EDX));
  /* 109cfd73 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 109cfd75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfd78 push eax */
  push32((uint32_t)(EAX));
  /* 109cfd79 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfd7b call 0x109d3400 */
  push32(0x109cfd80u); f_109d3400();
  /* 109cfd80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfd86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfd88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfd8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfd8e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfd91 push edx */
  push32((uint32_t)(EDX));
  /* 109cfd92 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 109cfd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfd97 push eax */
  push32((uint32_t)(EAX));
  /* 109cfd98 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfd9a call 0x109d3400 */
  push32(0x109cfd9fu); f_109d3400();
  /* 109cfd9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfda2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfda5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfda7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfdaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfdad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfdb0 push edx */
  push32((uint32_t)(EDX));
  /* 109cfdb1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 109cfdb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfdb6 push eax */
  push32((uint32_t)(EAX));
  /* 109cfdb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfdb9 call 0x109d3400 */
  push32(0x109cfdbeu); f_109d3400();
  /* 109cfdbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfdc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfdc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfdc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfdc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfdcc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfdcf push edx */
  push32((uint32_t)(EDX));
  /* 109cfdd0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 109cfdd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfdd5 push eax */
  push32((uint32_t)(EAX));
  /* 109cfdd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfdd8 call 0x109d3400 */
  push32(0x109cfdddu); f_109d3400();
  /* 109cfddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfde0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfde3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfde5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfde8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfdeb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfdee push edx */
  push32((uint32_t)(EDX));
  /* 109cfdef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 109cfdf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfdf4 push eax */
  push32((uint32_t)(EAX));
  /* 109cfdf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfdf7 call 0x109d3400 */
  push32(0x109cfdfcu); f_109d3400();
  /* 109cfdfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfdff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfe07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfe0a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe0d push edx */
  push32((uint32_t)(EDX));
  /* 109cfe0e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 109cfe10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfe13 push eax */
  push32((uint32_t)(EAX));
  /* 109cfe14 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfe16 call 0x109d3400 */
  push32(0x109cfe1bu); f_109d3400();
  /* 109cfe1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfe26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfe29 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe2c push edx */
  push32((uint32_t)(EDX));
  /* 109cfe2d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 109cfe2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfe32 push eax */
  push32((uint32_t)(EAX));
  /* 109cfe33 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfe35 call 0x109d3400 */
  push32(0x109cfe3au); f_109d3400();
  /* 109cfe3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfe45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfe48 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe4b push edx */
  push32((uint32_t)(EDX));
  /* 109cfe4c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 109cfe4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfe51 push eax */
  push32((uint32_t)(EAX));
  /* 109cfe52 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfe54 call 0x109d3400 */
  push32(0x109cfe59u); f_109d3400();
  /* 109cfe59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfe64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfe67 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe6a push edx */
  push32((uint32_t)(EDX));
  /* 109cfe6b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 109cfe6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfe70 push eax */
  push32((uint32_t)(EAX));
  /* 109cfe71 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfe73 call 0x109d3400 */
  push32(0x109cfe78u); f_109d3400();
  /* 109cfe78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfe83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfe86 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe89 push edx */
  push32((uint32_t)(EDX));
  /* 109cfe8a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 109cfe8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfe8f push eax */
  push32((uint32_t)(EAX));
  /* 109cfe90 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfe92 call 0x109d3400 */
  push32(0x109cfe97u); f_109d3400();
  /* 109cfe97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfe9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfe9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfe9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfea5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfea8 push edx */
  push32((uint32_t)(EDX));
  /* 109cfea9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 109cfeab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfeae push eax */
  push32((uint32_t)(EAX));
  /* 109cfeaf push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfeb1 call 0x109d3400 */
  push32(0x109cfeb6u); f_109d3400();
  /* 109cfeb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfeb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfebc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfebe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfec4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfec7 push edx */
  push32((uint32_t)(EDX));
  /* 109cfec8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 109cfeca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfecd push eax */
  push32((uint32_t)(EAX));
  /* 109cfece push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfed0 call 0x109d3400 */
  push32(0x109cfed5u); f_109d3400();
  /* 109cfed5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfed8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfedb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfedd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfee3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfee6 push edx */
  push32((uint32_t)(EDX));
  /* 109cfee7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109cfee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfeec push eax */
  push32((uint32_t)(EAX));
  /* 109cfeed push 1 */
  push32((uint32_t)(0x1u));
  /* 109cfeef call 0x109d3400 */
  push32(0x109cfef4u); f_109d3400();
  /* 109cfef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cfefa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cfefc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cfeff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cff02 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff08 push edx */
  push32((uint32_t)(EDX));
  /* 109cff09 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 109cff0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cff0e push eax */
  push32((uint32_t)(EAX));
  /* 109cff0f push 1 */
  push32((uint32_t)(0x1u));
  /* 109cff11 call 0x109d3400 */
  push32(0x109cff16u); f_109d3400();
  /* 109cff16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cff1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cff1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cff21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cff24 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff2a push edx */
  push32((uint32_t)(EDX));
  /* 109cff2b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109cff2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cff30 push eax */
  push32((uint32_t)(EAX));
  /* 109cff31 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cff33 call 0x109d3400 */
  push32(0x109cff38u); f_109d3400();
  /* 109cff38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cff3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cff40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cff43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cff46 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff4c push edx */
  push32((uint32_t)(EDX));
  /* 109cff4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109cff4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cff52 push eax */
  push32((uint32_t)(EAX));
  /* 109cff53 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cff55 call 0x109d3400 */
  push32(0x109cff5au); f_109d3400();
  /* 109cff5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cff60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cff62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cff65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cff68 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff6e push edx */
  push32((uint32_t)(EDX));
  /* 109cff6f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 109cff71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cff74 push eax */
  push32((uint32_t)(EAX));
  /* 109cff75 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cff77 call 0x109d3400 */
  push32(0x109cff7cu); f_109d3400();
  /* 109cff7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cff82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cff84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cff87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cff8a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cff90 push edx */
  push32((uint32_t)(EDX));
  /* 109cff91 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 109cff93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cff96 push eax */
  push32((uint32_t)(EAX));
  /* 109cff97 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cff99 call 0x109d3400 */
  push32(0x109cff9eu); f_109d3400();
  /* 109cff9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cffa1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cffa4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cffa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cffa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cffac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cffb2 push edx */
  push32((uint32_t)(EDX));
  /* 109cffb3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 109cffb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cffb8 push eax */
  push32((uint32_t)(EAX));
  /* 109cffb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109cffbb call 0x109d3400 */
  push32(0x109cffc0u); f_109d3400();
  /* 109cffc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cffc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cffc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cffc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cffcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cffce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cffd4 push edx */
  push32((uint32_t)(EDX));
  /* 109cffd5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109cffd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cffda push eax */
  push32((uint32_t)(EAX));
  /* 109cffdb push 1 */
  push32((uint32_t)(0x1u));
  /* 109cffdd call 0x109d3400 */
  push32(0x109cffe2u); f_109d3400();
  /* 109cffe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109cffe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109cffe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109cffea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109cffed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109cfff0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109cfff6 push edx */
  push32((uint32_t)(EDX));
  /* 109cfff7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 109cfff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109cfffc push eax */
  push32((uint32_t)(EAX));
  /* 109cfffd push 1 */
  push32((uint32_t)(0x1u));
  /* 109cffff call 0x109d3400 */
  push32(0x109d0004u); f_109d3400();
  /* 109d0004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d000a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d000c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d000f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0012 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0018 push edx */
  push32((uint32_t)(EDX));
  /* 109d0019 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109d001b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d001e push eax */
  push32((uint32_t)(EAX));
  /* 109d001f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0021 call 0x109d3400 */
  push32(0x109d0026u); f_109d3400();
  /* 109d0026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0029 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d002c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d002e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d0031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0034 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d003a push edx */
  push32((uint32_t)(EDX));
  /* 109d003b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109d003d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0040 push eax */
  push32((uint32_t)(EAX));
  /* 109d0041 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0043 call 0x109d3400 */
  push32(0x109d0048u); f_109d3400();
  /* 109d0048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d004b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d004e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0050 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d0053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0056 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d005c push edx */
  push32((uint32_t)(EDX));
  /* 109d005d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 109d0062 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0065 push eax */
  push32((uint32_t)(EAX));
  /* 109d0066 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0068 call 0x109d3400 */
  push32(0x109d006du); f_109d3400();
  /* 109d006d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d0073 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0075 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109d0078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_109d007b:;
  /* 109d007b mov esp, ebp */
  ESP = (EBP);
  /* 109d007d pop ebp */
  EBP = (pop32());
  /* 109d007e ret  */
  ESPCHK(0x109cfaf0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x109d0080 (779 bytes, 265 insns) */
void f_109d0080(void) {
  FTRACE(0x109d0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0080 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0081 mov ebp, esp */
  EBP = (ESP);
  /* 109d0083 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0087 jne 0x109d008e */
  if (!C.zf) goto L_109d008e;
  /* 109d0089 jmp 0x109d0389 */
  goto L_109d0389;
L_109d008e:;
  /* 109d008e push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0093 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109d0096 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0097 call 0x109c5cd0 */
  push32(0x109d009cu); f_109c5cd0();
  /* 109d009c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d009f push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109d00a7 push eax */
  push32((uint32_t)(EAX));
  /* 109d00a8 call 0x109c5cd0 */
  push32(0x109d00adu); f_109c5cd0();
  /* 109d00ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d00b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109d00b8 push edx */
  push32((uint32_t)(EDX));
  /* 109d00b9 call 0x109c5cd0 */
  push32(0x109d00beu); f_109c5cd0();
  /* 109d00be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d00c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109d00c9 push ecx */
  push32((uint32_t)(ECX));
  /* 109d00ca call 0x109c5cd0 */
  push32(0x109d00cfu); f_109c5cd0();
  /* 109d00cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d00d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d00da push eax */
  push32((uint32_t)(EAX));
  /* 109d00db call 0x109c5cd0 */
  push32(0x109d00e0u); f_109c5cd0();
  /* 109d00e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d00e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109d00eb push edx */
  push32((uint32_t)(EDX));
  /* 109d00ec call 0x109c5cd0 */
  push32(0x109d00f1u); f_109c5cd0();
  /* 109d00f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d00f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d00f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d00f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d00fb push ecx */
  push32((uint32_t)(ECX));
  /* 109d00fc call 0x109c5cd0 */
  push32(0x109d0101u); f_109c5cd0();
  /* 109d0101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0104 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0109 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 109d010c push eax */
  push32((uint32_t)(EAX));
  /* 109d010d call 0x109c5cd0 */
  push32(0x109d0112u); f_109c5cd0();
  /* 109d0112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0115 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d011a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 109d011d push edx */
  push32((uint32_t)(EDX));
  /* 109d011e call 0x109c5cd0 */
  push32(0x109d0123u); f_109c5cd0();
  /* 109d0123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0126 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d012b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 109d012e push ecx */
  push32((uint32_t)(ECX));
  /* 109d012f call 0x109c5cd0 */
  push32(0x109d0134u); f_109c5cd0();
  /* 109d0134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0137 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d013c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 109d013f push eax */
  push32((uint32_t)(EAX));
  /* 109d0140 call 0x109c5cd0 */
  push32(0x109d0145u); f_109c5cd0();
  /* 109d0145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0148 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d014a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d014d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 109d0150 push edx */
  push32((uint32_t)(EDX));
  /* 109d0151 call 0x109c5cd0 */
  push32(0x109d0156u); f_109c5cd0();
  /* 109d0156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0159 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d015b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d015e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 109d0161 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0162 call 0x109c5cd0 */
  push32(0x109d0167u); f_109c5cd0();
  /* 109d0167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d016a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d016c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d016f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d0172 push eax */
  push32((uint32_t)(EAX));
  /* 109d0173 call 0x109c5cd0 */
  push32(0x109d0178u); f_109c5cd0();
  /* 109d0178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d017b push 2 */
  push32((uint32_t)(0x2u));
  /* 109d017d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0180 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 109d0183 push edx */
  push32((uint32_t)(EDX));
  /* 109d0184 call 0x109c5cd0 */
  push32(0x109d0189u); f_109c5cd0();
  /* 109d0189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d018c push 2 */
  push32((uint32_t)(0x2u));
  /* 109d018e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0191 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 109d0194 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0195 call 0x109c5cd0 */
  push32(0x109d019au); f_109c5cd0();
  /* 109d019a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d019d push 2 */
  push32((uint32_t)(0x2u));
  /* 109d019f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 109d01a5 push eax */
  push32((uint32_t)(EAX));
  /* 109d01a6 call 0x109c5cd0 */
  push32(0x109d01abu); f_109c5cd0();
  /* 109d01ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d01ae push 2 */
  push32((uint32_t)(0x2u));
  /* 109d01b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 109d01b6 push edx */
  push32((uint32_t)(EDX));
  /* 109d01b7 call 0x109c5cd0 */
  push32(0x109d01bcu); f_109c5cd0();
  /* 109d01bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d01bf push 2 */
  push32((uint32_t)(0x2u));
  /* 109d01c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 109d01c7 push ecx */
  push32((uint32_t)(ECX));
  /* 109d01c8 call 0x109c5cd0 */
  push32(0x109d01cdu); f_109c5cd0();
  /* 109d01cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d01d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d01d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 109d01d8 push eax */
  push32((uint32_t)(EAX));
  /* 109d01d9 call 0x109c5cd0 */
  push32(0x109d01deu); f_109c5cd0();
  /* 109d01de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d01e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d01e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109d01e9 push edx */
  push32((uint32_t)(EDX));
  /* 109d01ea call 0x109c5cd0 */
  push32(0x109d01efu); f_109c5cd0();
  /* 109d01ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d01f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d01f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d01f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 109d01fa push ecx */
  push32((uint32_t)(ECX));
  /* 109d01fb call 0x109c5cd0 */
  push32(0x109d0200u); f_109c5cd0();
  /* 109d0200 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0203 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0208 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 109d020b push eax */
  push32((uint32_t)(EAX));
  /* 109d020c call 0x109c5cd0 */
  push32(0x109d0211u); f_109c5cd0();
  /* 109d0211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0214 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0219 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 109d021c push edx */
  push32((uint32_t)(EDX));
  /* 109d021d call 0x109c5cd0 */
  push32(0x109d0222u); f_109c5cd0();
  /* 109d0222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0225 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0227 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d022a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 109d022d push ecx */
  push32((uint32_t)(ECX));
  /* 109d022e call 0x109c5cd0 */
  push32(0x109d0233u); f_109c5cd0();
  /* 109d0233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0236 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d023b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 109d023e push eax */
  push32((uint32_t)(EAX));
  /* 109d023f call 0x109c5cd0 */
  push32(0x109d0244u); f_109c5cd0();
  /* 109d0244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0247 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d024c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 109d024f push edx */
  push32((uint32_t)(EDX));
  /* 109d0250 call 0x109c5cd0 */
  push32(0x109d0255u); f_109c5cd0();
  /* 109d0255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0258 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d025a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d025d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 109d0260 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0261 call 0x109c5cd0 */
  push32(0x109d0266u); f_109c5cd0();
  /* 109d0266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0269 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d026b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d026e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 109d0271 push eax */
  push32((uint32_t)(EAX));
  /* 109d0272 call 0x109c5cd0 */
  push32(0x109d0277u); f_109c5cd0();
  /* 109d0277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d027a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d027c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d027f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 109d0282 push edx */
  push32((uint32_t)(EDX));
  /* 109d0283 call 0x109c5cd0 */
  push32(0x109d0288u); f_109c5cd0();
  /* 109d0288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d028b push 2 */
  push32((uint32_t)(0x2u));
  /* 109d028d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0290 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 109d0293 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0294 call 0x109c5cd0 */
  push32(0x109d0299u); f_109c5cd0();
  /* 109d0299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d029c push 2 */
  push32((uint32_t)(0x2u));
  /* 109d029e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d02a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 109d02a4 push eax */
  push32((uint32_t)(EAX));
  /* 109d02a5 call 0x109c5cd0 */
  push32(0x109d02aau); f_109c5cd0();
  /* 109d02aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d02ad push 2 */
  push32((uint32_t)(0x2u));
  /* 109d02af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d02b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 109d02b8 push edx */
  push32((uint32_t)(EDX));
  /* 109d02b9 call 0x109c5cd0 */
  push32(0x109d02beu); f_109c5cd0();
  /* 109d02be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d02c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d02c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d02c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 109d02cc push ecx */
  push32((uint32_t)(ECX));
  /* 109d02cd call 0x109c5cd0 */
  push32(0x109d02d2u); f_109c5cd0();
  /* 109d02d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d02d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d02d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d02da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 109d02e0 push eax */
  push32((uint32_t)(EAX));
  /* 109d02e1 call 0x109c5cd0 */
  push32(0x109d02e6u); f_109c5cd0();
  /* 109d02e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d02e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d02eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d02ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 109d02f4 push edx */
  push32((uint32_t)(EDX));
  /* 109d02f5 call 0x109c5cd0 */
  push32(0x109d02fau); f_109c5cd0();
  /* 109d02fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d02fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109d02ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0302 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 109d0308 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0309 call 0x109c5cd0 */
  push32(0x109d030eu); f_109c5cd0();
  /* 109d030e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0311 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0316 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 109d031c push eax */
  push32((uint32_t)(EAX));
  /* 109d031d call 0x109c5cd0 */
  push32(0x109d0322u); f_109c5cd0();
  /* 109d0322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0325 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d032a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 109d0330 push edx */
  push32((uint32_t)(EDX));
  /* 109d0331 call 0x109c5cd0 */
  push32(0x109d0336u); f_109c5cd0();
  /* 109d0336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0339 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d033b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d033e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 109d0344 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0345 call 0x109c5cd0 */
  push32(0x109d034au); f_109c5cd0();
  /* 109d034a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d034d push 2 */
  push32((uint32_t)(0x2u));
  /* 109d034f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0352 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 109d0358 push eax */
  push32((uint32_t)(EAX));
  /* 109d0359 call 0x109c5cd0 */
  push32(0x109d035eu); f_109c5cd0();
  /* 109d035e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0361 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0366 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 109d036c push edx */
  push32((uint32_t)(EDX));
  /* 109d036d call 0x109c5cd0 */
  push32(0x109d0372u); f_109c5cd0();
  /* 109d0372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0375 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d037a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 109d0380 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0381 call 0x109c5cd0 */
  push32(0x109d0386u); f_109c5cd0();
  /* 109d0386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d0389:;
  /* 109d0389 pop ebp */
  EBP = (pop32());
  /* 109d038a ret  */
  ESPCHK(0x109d0080u, _esp0);
  ESP += 4; return;
}

/* FUN_10010390 @ 0x109d0390 (678 bytes, 180 insns) */
void f_109d0390(void) {
  FTRACE(0x109d0390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0390 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0391 mov ebp, esp */
  EBP = (ESP);
  /* 109d0393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d0396 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d039d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d039f mov ax, word ptr [0x109f18e2] */
  AX = (r16((uint32_t)(0x109f18e2)));
  /* 109d03a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d03a8 cmp dword ptr [0x109f1888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d03af je 0x109d050a */
  if (C.zf) goto L_109d050a;
  /* 109d03b5 push 0x109f18b0 */
  push32((uint32_t)(0x109f18b0u));
  /* 109d03ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 109d03bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d03bf push ecx */
  push32((uint32_t)(ECX));
  /* 109d03c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d03c2 call 0x109d3400 */
  push32(0x109d03c7u); f_109d3400();
  /* 109d03c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d03ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d03cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 109d03cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d03d2 push 0x109f18b4 */
  push32((uint32_t)(0x109f18b4u));
  /* 109d03d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109d03d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d03dc push eax */
  push32((uint32_t)(EAX));
  /* 109d03dd push 1 */
  push32((uint32_t)(0x1u));
  /* 109d03df call 0x109d3400 */
  push32(0x109d03e4u); f_109d3400();
  /* 109d03e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d03e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d03ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d03ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d03ef push 0x109f18b8 */
  push32((uint32_t)(0x109f18b8u));
  /* 109d03f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109d03f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d03f9 push edx */
  push32((uint32_t)(EDX));
  /* 109d03fa push 1 */
  push32((uint32_t)(0x1u));
  /* 109d03fc call 0x109d3400 */
  push32(0x109d0401u); f_109d3400();
  /* 109d0401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0407 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0409 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d040c mov edx, dword ptr [0x109f18b8] */
  EDX = (r32((uint32_t)(0x109f18b8)));
  /* 109d0412 push edx */
  push32((uint32_t)(EDX));
  /* 109d0413 call 0x109d0640 */
  push32(0x109d0418u); f_109d0640();
  /* 109d0418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d041b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d041f je 0x109d0479 */
  if (C.zf) goto L_109d0479;
  /* 109d0421 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0423 mov eax, dword ptr [0x109f18b0] */
  EAX = (r32((uint32_t)(0x109f18b0)));
  /* 109d0428 push eax */
  push32((uint32_t)(EAX));
  /* 109d0429 call 0x109c5cd0 */
  push32(0x109d042eu); f_109c5cd0();
  /* 109d042e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0431 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0433 mov ecx, dword ptr [0x109f18b4] */
  ECX = (r32((uint32_t)(0x109f18b4)));
  /* 109d0439 push ecx */
  push32((uint32_t)(ECX));
  /* 109d043a call 0x109c5cd0 */
  push32(0x109d043fu); f_109c5cd0();
  /* 109d043f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0442 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0444 mov edx, dword ptr [0x109f18b8] */
  EDX = (r32((uint32_t)(0x109f18b8)));
  /* 109d044a push edx */
  push32((uint32_t)(EDX));
  /* 109d044b call 0x109c5cd0 */
  push32(0x109d0450u); f_109c5cd0();
  /* 109d0450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0453 mov dword ptr [0x109f18b0], 0 */
  w32((uint32_t)(0x109f18b0), (0x0u));
  /* 109d045d mov dword ptr [0x109f18b4], 0 */
  w32((uint32_t)(0x109f18b4), (0x0u));
  /* 109d0467 mov dword ptr [0x109f18b8], 0 */
  w32((uint32_t)(0x109f18b8), (0x0u));
  /* 109d0471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d0474 jmp 0x109d0632 */
  goto L_109d0632;
L_109d0479:;
  /* 109d0479 mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d047e cmp dword ptr [eax], 0x109f0d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x109f0d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0484 je 0x109d04c0 */
  if (C.zf) goto L_109d04c0;
  /* 109d0486 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0488 mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d048e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d0490 push edx */
  push32((uint32_t)(EDX));
  /* 109d0491 call 0x109c5cd0 */
  push32(0x109d0496u); f_109c5cd0();
  /* 109d0496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0499 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d049b mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109d04a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d04a4 call 0x109c5cd0 */
  push32(0x109d04a9u); f_109c5cd0();
  /* 109d04a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d04ac push 2 */
  push32((uint32_t)(0x2u));
  /* 109d04ae mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109d04b7 push eax */
  push32((uint32_t)(EAX));
  /* 109d04b8 call 0x109c5cd0 */
  push32(0x109d04bdu); f_109c5cd0();
  /* 109d04bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d04c0:;
  /* 109d04c0 mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04c6 mov edx, dword ptr [0x109f18b0] */
  EDX = (r32((uint32_t)(0x109f18b0)));
  /* 109d04cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109d04ce mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04d3 mov ecx, dword ptr [0x109f18b4] */
  ECX = (r32((uint32_t)(0x109f18b4)));
  /* 109d04d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109d04dc mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04e2 mov eax, dword ptr [0x109f18b8] */
  EAX = (r32((uint32_t)(0x109f18b8)));
  /* 109d04e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109d04ea mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d04f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d04f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d04f4 mov byte ptr [0x109efea8], al */
  w8((uint32_t)(0x109efea8), (AL));
  /* 109d04f9 mov dword ptr [0x109efeac], 1 */
  w32((uint32_t)(0x109efeac), (0x1u));
  /* 109d0503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0505 jmp 0x109d0632 */
  goto L_109d0632;
L_109d050a:;
  /* 109d050a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d050c mov ecx, dword ptr [0x109f18b0] */
  ECX = (r32((uint32_t)(0x109f18b0)));
  /* 109d0512 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0513 call 0x109c5cd0 */
  push32(0x109d0518u); f_109c5cd0();
  /* 109d0518 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d051b push 2 */
  push32((uint32_t)(0x2u));
  /* 109d051d mov edx, dword ptr [0x109f18b4] */
  EDX = (r32((uint32_t)(0x109f18b4)));
  /* 109d0523 push edx */
  push32((uint32_t)(EDX));
  /* 109d0524 call 0x109c5cd0 */
  push32(0x109d0529u); f_109c5cd0();
  /* 109d0529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d052c push 2 */
  push32((uint32_t)(0x2u));
  /* 109d052e mov eax, dword ptr [0x109f18b8] */
  EAX = (r32((uint32_t)(0x109f18b8)));
  /* 109d0533 push eax */
  push32((uint32_t)(EAX));
  /* 109d0534 call 0x109c5cd0 */
  push32(0x109d0539u); f_109c5cd0();
  /* 109d0539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d053c mov dword ptr [0x109f18b0], 0 */
  w32((uint32_t)(0x109f18b0), (0x0u));
  /* 109d0546 mov dword ptr [0x109f18b4], 0 */
  w32((uint32_t)(0x109f18b4), (0x0u));
  /* 109d0550 mov dword ptr [0x109f18b8], 0 */
  w32((uint32_t)(0x109f18b8), (0x0u));
  /* 109d055a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 109d055f push 0x109ed35c */
  push32((uint32_t)(0x109ed35cu));
  /* 109d0564 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0566 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0568 call 0x109c5240 */
  push32(0x109d056du); f_109c5240();
  /* 109d056d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0570 mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0576 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109d0578 mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d057e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0581 jne 0x109d058b */
  if (!C.zf) goto L_109d058b;
  /* 109d0583 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d0586 jmp 0x109d0632 */
  goto L_109d0632;
L_109d058b:;
  /* 109d058b push 0x109ed32c */
  push32((uint32_t)(0x109ed32cu));
  /* 109d0590 mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0595 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109d0597 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0598 call 0x109c81f0 */
  push32(0x109d059du); f_109c81f0();
  /* 109d059d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d05a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 109d05a5 push 0x109ed35c */
  push32((uint32_t)(0x109ed35cu));
  /* 109d05aa push 2 */
  push32((uint32_t)(0x2u));
  /* 109d05ac push 2 */
  push32((uint32_t)(0x2u));
  /* 109d05ae call 0x109c5240 */
  push32(0x109d05b3u); f_109c5240();
  /* 109d05b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d05b6 mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d05bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 109d05bf mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d05c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d05c8 jne 0x109d05cf */
  if (!C.zf) goto L_109d05cf;
  /* 109d05ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d05cd jmp 0x109d0632 */
  goto L_109d0632;
L_109d05cf:;
  /* 109d05cf mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d05d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109d05d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109d05db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 109d05e0 push 0x109ed35c */
  push32((uint32_t)(0x109ed35cu));
  /* 109d05e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d05e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d05e9 call 0x109c5240 */
  push32(0x109d05eeu); f_109c5240();
  /* 109d05ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d05f1 mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d05f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 109d05fa mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0600 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0604 jne 0x109d060b */
  if (!C.zf) goto L_109d060b;
  /* 109d0606 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d0609 jmp 0x109d0632 */
  goto L_109d0632;
L_109d060b:;
  /* 109d060b mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0610 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109d0613 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 109d0616 mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d061c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d061e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d0620 mov byte ptr [0x109efea8], cl */
  w8((uint32_t)(0x109efea8), (CL));
  /* 109d0626 mov dword ptr [0x109efeac], 1 */
  w32((uint32_t)(0x109efeac), (0x1u));
  /* 109d0630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d0632:;
  /* 109d0632 mov esp, ebp */
  ESP = (EBP);
  /* 109d0634 pop ebp */
  EBP = (pop32());
  /* 109d0635 ret  */
  ESPCHK(0x109d0390u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x109d0640 (125 bytes, 49 insns) */
void f_109d0640(void) {
  FTRACE(0x109d0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0640 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0641 mov ebp, esp */
  EBP = (ESP);
  /* 109d0643 push ecx */
  push32((uint32_t)(ECX));
L_109d0644:;
  /* 109d0644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d064a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d064c je 0x109d06b9 */
  if (C.zf) goto L_109d06b9;
  /* 109d064e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0651 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d0654 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0657 jl 0x109d067d */
  if ((C.sf!=C.of)) goto L_109d067d;
  /* 109d0659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d065c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d065f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0662 jg 0x109d067d */
  if ((!C.zf&&C.sf==C.of)) goto L_109d067d;
  /* 109d0664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0667 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d066a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d066d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0670 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109d0672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0675 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0678 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d067b jmp 0x109d06b7 */
  goto L_109d06b7;
L_109d067d:;
  /* 109d067d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0680 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d0683 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0686 jne 0x109d06ae */
  if (!C.zf) goto L_109d06ae;
  /* 109d0688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d068b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d068e:;
  /* 109d068e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0694 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109d0697 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d0699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d069c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d069f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d06a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d06a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d06a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d06aa jne 0x109d068e */
  if (!C.zf) goto L_109d068e;
  /* 109d06ac jmp 0x109d06b7 */
  goto L_109d06b7;
L_109d06ae:;
  /* 109d06ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d06b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d06b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109d06b7:;
  /* 109d06b7 jmp 0x109d0644 */
  goto L_109d0644;
L_109d06b9:;
  /* 109d06b9 mov esp, ebp */
  ESP = (EBP);
  /* 109d06bb pop ebp */
  EBP = (pop32());
  /* 109d06bc ret  */
  ESPCHK(0x109d0640u, _esp0);
  ESP += 4; return;
}

/* FUN_100106c0 @ 0x109d06c0 (304 bytes, 85 insns) */
void f_109d06c0(void) {
  FTRACE(0x109d06c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d06c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d06c1 mov ebp, esp */
  EBP = (ESP);
  /* 109d06c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d06c4 cmp dword ptr [0x109f1884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d06cb je 0x109d078c */
  if (C.zf) goto L_109d078c;
  /* 109d06d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 109d06d3 push 0x109ed368 */
  push32((uint32_t)(0x109ed368u));
  /* 109d06d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d06da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 109d06dc push 1 */
  push32((uint32_t)(0x1u));
  /* 109d06de call 0x109c5650 */
  push32(0x109d06e3u); f_109c5650();
  /* 109d06e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d06e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d06e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d06ed jne 0x109d06f9 */
  if (!C.zf) goto L_109d06f9;
  /* 109d06ef mov eax, 1 */
  EAX = (0x1u);
  /* 109d06f4 jmp 0x109d07ec */
  goto L_109d07ec;
L_109d06f9:;
  /* 109d06f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d06fc push eax */
  push32((uint32_t)(EAX));
  /* 109d06fd call 0x109d07f0 */
  push32(0x109d0702u); f_109d07f0();
  /* 109d0702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0707 je 0x109d072d */
  if (C.zf) goto L_109d072d;
  /* 109d0709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d070c push ecx */
  push32((uint32_t)(ECX));
  /* 109d070d call 0x109d0a80 */
  push32(0x109d0712u); f_109d0a80();
  /* 109d0712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0715 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d071a push edx */
  push32((uint32_t)(EDX));
  /* 109d071b call 0x109c5cd0 */
  push32(0x109d0720u); f_109c5cd0();
  /* 109d0720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0723 mov eax, 1 */
  EAX = (0x1u);
  /* 109d0728 jmp 0x109d07ec */
  goto L_109d07ec;
L_109d072d:;
  /* 109d072d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0730 mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d0738 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d073a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d073d mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0743 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109d0746 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109d0749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d074c mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0752 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109d0755 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 109d0758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d075b mov dword ptr [0x109f0d88], eax */
  w32((uint32_t)(0x109f0d88), (EAX));
  /* 109d0760 mov ecx, dword ptr [0x109f18bc] */
  ECX = (r32((uint32_t)(0x109f18bc)));
  /* 109d0766 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0767 call 0x109d0a80 */
  push32(0x109d076cu); f_109d0a80();
  /* 109d076c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d076f push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0771 mov edx, dword ptr [0x109f18bc] */
  EDX = (r32((uint32_t)(0x109f18bc)));
  /* 109d0777 push edx */
  push32((uint32_t)(EDX));
  /* 109d0778 call 0x109c5cd0 */
  push32(0x109d077du); f_109c5cd0();
  /* 109d077d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0783 mov dword ptr [0x109f18bc], eax */
  w32((uint32_t)(0x109f18bc), (EAX));
  /* 109d0788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d078a jmp 0x109d07ec */
  goto L_109d07ec;
L_109d078c:;
  /* 109d078c mov ecx, dword ptr [0x109f0d88] */
  ECX = (r32((uint32_t)(0x109f0d88)));
  /* 109d0792 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d0794 mov dword ptr [0x109f0d58], edx */
  w32((uint32_t)(0x109f0d58), (EDX));
  /* 109d079a mov eax, dword ptr [0x109f0d88] */
  EAX = (r32((uint32_t)(0x109f0d88)));
  /* 109d079f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109d07a2 mov dword ptr [0x109f0d5c], ecx */
  w32((uint32_t)(0x109f0d5c), (ECX));
  /* 109d07a8 mov edx, dword ptr [0x109f0d88] */
  EDX = (r32((uint32_t)(0x109f0d88)));
  /* 109d07ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109d07b1 mov dword ptr [0x109f0d60], eax */
  w32((uint32_t)(0x109f0d60), (EAX));
  /* 109d07b6 mov dword ptr [0x109f0d88], 0x109f0d58 */
  w32((uint32_t)(0x109f0d88), (0x109f0d58u));
  /* 109d07c0 mov ecx, dword ptr [0x109f18bc] */
  ECX = (r32((uint32_t)(0x109f18bc)));
  /* 109d07c6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d07c7 call 0x109d0a80 */
  push32(0x109d07ccu); f_109d0a80();
  /* 109d07cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d07cf push 2 */
  push32((uint32_t)(0x2u));
  /* 109d07d1 mov edx, dword ptr [0x109f18bc] */
  EDX = (r32((uint32_t)(0x109f18bc)));
  /* 109d07d7 push edx */
  push32((uint32_t)(EDX));
  /* 109d07d8 call 0x109c5cd0 */
  push32(0x109d07ddu); f_109c5cd0();
  /* 109d07dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d07e0 mov dword ptr [0x109f18bc], 0 */
  w32((uint32_t)(0x109f18bc), (0x0u));
  /* 109d07ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d07ec:;
  /* 109d07ec mov esp, ebp */
  ESP = (EBP);
  /* 109d07ee pop ebp */
  EBP = (pop32());
  /* 109d07ef ret  */
  ESPCHK(0x109d06c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x109d07f0 (525 bytes, 200 insns) */
void f_109d07f0(void) {
  FTRACE(0x109d07f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d07f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d07f1 mov ebp, esp */
  EBP = (ESP);
  /* 109d07f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d07f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d07fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d07ff mov ax, word ptr [0x109f18dc] */
  AX = (r16((uint32_t)(0x109f18dc)));
  /* 109d0805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d0808 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d080c jne 0x109d0816 */
  if (!C.zf) goto L_109d0816;
  /* 109d080e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d0811 jmp 0x109d09f9 */
  goto L_109d09f9;
L_109d0816:;
  /* 109d0816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0819 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d081c push ecx */
  push32((uint32_t)(ECX));
  /* 109d081d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109d081f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0822 push edx */
  push32((uint32_t)(EDX));
  /* 109d0823 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0825 call 0x109d3400 */
  push32(0x109d082au); f_109d3400();
  /* 109d082a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d082d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0832 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d0835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0838 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d083b push edx */
  push32((uint32_t)(EDX));
  /* 109d083c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109d083e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0841 push eax */
  push32((uint32_t)(EAX));
  /* 109d0842 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0844 call 0x109d3400 */
  push32(0x109d0849u); f_109d3400();
  /* 109d0849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d084c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d084f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0851 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d0854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0857 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d085a push edx */
  push32((uint32_t)(EDX));
  /* 109d085b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109d085d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0860 push eax */
  push32((uint32_t)(EAX));
  /* 109d0861 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0863 call 0x109d3400 */
  push32(0x109d0868u); f_109d3400();
  /* 109d0868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d086b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d086e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0870 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d0873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0876 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0879 push edx */
  push32((uint32_t)(EDX));
  /* 109d087a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109d087c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d087f push eax */
  push32((uint32_t)(EAX));
  /* 109d0880 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0882 call 0x109d3400 */
  push32(0x109d0887u); f_109d3400();
  /* 109d0887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d088a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d088d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d088f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d0892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0898 push edx */
  push32((uint32_t)(EDX));
  /* 109d0899 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109d089b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d089e push eax */
  push32((uint32_t)(EAX));
  /* 109d089f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d08a1 call 0x109d3400 */
  push32(0x109d08a6u); f_109d3400();
  /* 109d08a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d08ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d08ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d08b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d08b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 109d08b7 push eax */
  push32((uint32_t)(EAX));
  /* 109d08b8 call 0x109d0a00 */
  push32(0x109d08bdu); f_109d0a00();
  /* 109d08bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d08c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08c6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d08c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 109d08c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d08cc push edx */
  push32((uint32_t)(EDX));
  /* 109d08cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109d08cf call 0x109d3400 */
  push32(0x109d08d4u); f_109d3400();
  /* 109d08d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d08da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d08dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d08df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d08e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08e5 push edx */
  push32((uint32_t)(EDX));
  /* 109d08e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 109d08e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d08eb push eax */
  push32((uint32_t)(EAX));
  /* 109d08ec push 1 */
  push32((uint32_t)(0x1u));
  /* 109d08ee call 0x109d3400 */
  push32(0x109d08f3u); f_109d3400();
  /* 109d08f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d08f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d08f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d08fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d08fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0901 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0904 push edx */
  push32((uint32_t)(EDX));
  /* 109d0905 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 109d0907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d090a push eax */
  push32((uint32_t)(EAX));
  /* 109d090b push 0 */
  push32((uint32_t)(0x0u));
  /* 109d090d call 0x109d3400 */
  push32(0x109d0912u); f_109d3400();
  /* 109d0912 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0918 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d091a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d091d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0920 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0923 push edx */
  push32((uint32_t)(EDX));
  /* 109d0924 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109d0926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0929 push eax */
  push32((uint32_t)(EAX));
  /* 109d092a push 0 */
  push32((uint32_t)(0x0u));
  /* 109d092c call 0x109d3400 */
  push32(0x109d0931u); f_109d3400();
  /* 109d0931 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0937 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0939 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d093c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d093f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0942 push edx */
  push32((uint32_t)(EDX));
  /* 109d0943 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 109d0945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0948 push eax */
  push32((uint32_t)(EAX));
  /* 109d0949 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d094b call 0x109d3400 */
  push32(0x109d0950u); f_109d3400();
  /* 109d0950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0956 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0958 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d095b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d095e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0961 push edx */
  push32((uint32_t)(EDX));
  /* 109d0962 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 109d0964 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0967 push eax */
  push32((uint32_t)(EAX));
  /* 109d0968 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d096a call 0x109d3400 */
  push32(0x109d096fu); f_109d3400();
  /* 109d096f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0975 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0977 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d097a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d097d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0980 push edx */
  push32((uint32_t)(EDX));
  /* 109d0981 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 109d0983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0986 push eax */
  push32((uint32_t)(EAX));
  /* 109d0987 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0989 call 0x109d3400 */
  push32(0x109d098eu); f_109d3400();
  /* 109d098e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0991 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d0994 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0996 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d0999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d099c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d099f push edx */
  push32((uint32_t)(EDX));
  /* 109d09a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 109d09a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d09a5 push eax */
  push32((uint32_t)(EAX));
  /* 109d09a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d09a8 call 0x109d3400 */
  push32(0x109d09adu); f_109d3400();
  /* 109d09ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d09b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d09b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d09b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d09b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d09bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d09be push edx */
  push32((uint32_t)(EDX));
  /* 109d09bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 109d09c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d09c4 push eax */
  push32((uint32_t)(EAX));
  /* 109d09c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d09c7 call 0x109d3400 */
  push32(0x109d09ccu); f_109d3400();
  /* 109d09cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d09cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d09d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d09d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d09d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d09da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d09dd push edx */
  push32((uint32_t)(EDX));
  /* 109d09de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 109d09e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d09e3 push eax */
  push32((uint32_t)(EAX));
  /* 109d09e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d09e6 call 0x109d3400 */
  push32(0x109d09ebu); f_109d3400();
  /* 109d09eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d09ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d09f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 109d09f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d09f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109d09f9:;
  /* 109d09f9 mov esp, ebp */
  ESP = (EBP);
  /* 109d09fb pop ebp */
  EBP = (pop32());
  /* 109d09fc ret  */
  ESPCHK(0x109d07f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x109d0a00 (125 bytes, 49 insns) */
void f_109d0a00(void) {
  FTRACE(0x109d0a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0a00 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0a01 mov ebp, esp */
  EBP = (ESP);
  /* 109d0a03 push ecx */
  push32((uint32_t)(ECX));
L_109d0a04:;
  /* 109d0a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d0a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d0a0c je 0x109d0a79 */
  if (C.zf) goto L_109d0a79;
  /* 109d0a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d0a14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0a17 jl 0x109d0a3d */
  if ((C.sf!=C.of)) goto L_109d0a3d;
  /* 109d0a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d0a1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0a22 jg 0x109d0a3d */
  if ((!C.zf&&C.sf==C.of)) goto L_109d0a3d;
  /* 109d0a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d0a2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d0a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109d0a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0a38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d0a3b jmp 0x109d0a77 */
  goto L_109d0a77;
L_109d0a3d:;
  /* 109d0a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d0a43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0a46 jne 0x109d0a6e */
  if (!C.zf) goto L_109d0a6e;
  /* 109d0a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d0a4e:;
  /* 109d0a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0a54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109d0a57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109d0a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0a5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0a5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d0a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d0a65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d0a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0a6a jne 0x109d0a4e */
  if (!C.zf) goto L_109d0a4e;
  /* 109d0a6c jmp 0x109d0a77 */
  goto L_109d0a77;
L_109d0a6e:;
  /* 109d0a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0a74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_109d0a77:;
  /* 109d0a77 jmp 0x109d0a04 */
  goto L_109d0a04;
L_109d0a79:;
  /* 109d0a79 mov esp, ebp */
  ESP = (EBP);
  /* 109d0a7b pop ebp */
  EBP = (pop32());
  /* 109d0a7c ret  */
  ESPCHK(0x109d0a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x109d0a80 (147 bytes, 52 insns) */
void f_109d0a80(void) {
  FTRACE(0x109d0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0a81 mov ebp, esp */
  EBP = (ESP);
  /* 109d0a83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0a87 jne 0x109d0a8e */
  if (!C.zf) goto L_109d0a8e;
  /* 109d0a89 jmp 0x109d0b11 */
  goto L_109d0b11;
L_109d0a8e:;
  /* 109d0a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a91 cmp dword ptr [eax + 0xc], 0x109f1918 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x109f1918u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0a98 je 0x109d0b11 */
  if (C.zf) goto L_109d0b11;
  /* 109d0a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0a9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109d0aa2 push edx */
  push32((uint32_t)(EDX));
  /* 109d0aa3 call 0x109c5cd0 */
  push32(0x109d0aa8u); f_109c5cd0();
  /* 109d0aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0aab push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0ab0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109d0ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0ab4 call 0x109c5cd0 */
  push32(0x109d0ab9u); f_109c5cd0();
  /* 109d0ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0abc push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0ac1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109d0ac4 push eax */
  push32((uint32_t)(EAX));
  /* 109d0ac5 call 0x109c5cd0 */
  push32(0x109d0acau); f_109c5cd0();
  /* 109d0aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0acd push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0acf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0ad2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109d0ad5 push edx */
  push32((uint32_t)(EDX));
  /* 109d0ad6 call 0x109c5cd0 */
  push32(0x109d0adbu); f_109c5cd0();
  /* 109d0adb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0ade push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0ae3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 109d0ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0ae7 call 0x109c5cd0 */
  push32(0x109d0aecu); f_109c5cd0();
  /* 109d0aec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0aef push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0af1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0af4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 109d0af7 push eax */
  push32((uint32_t)(EAX));
  /* 109d0af8 call 0x109c5cd0 */
  push32(0x109d0afdu); f_109c5cd0();
  /* 109d0afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0b00 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0b05 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 109d0b08 push edx */
  push32((uint32_t)(EDX));
  /* 109d0b09 call 0x109c5cd0 */
  push32(0x109d0b0eu); f_109c5cd0();
  /* 109d0b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d0b11:;
  /* 109d0b11 pop ebp */
  EBP = (pop32());
  /* 109d0b12 ret  */
  ESPCHK(0x109d0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b20 @ 0x109d0b20 (928 bytes, 284 insns) */
void f_109d0b20(void) {
  FTRACE(0x109d0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0b21 mov ebp, esp */
  EBP = (ESP);
  /* 109d0b23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d0b26 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 109d0b2d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 109d0b34 cmp dword ptr [0x109f1880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0b3b je 0x109d0e71 */
  if (C.zf) goto L_109d0e71;
  /* 109d0b41 cmp dword ptr [0x109f1890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0b48 jne 0x109d0b70 */
  if (!C.zf) goto L_109d0b70;
  /* 109d0b4a push 0x109f1890 */
  push32((uint32_t)(0x109f1890u));
  /* 109d0b4f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 109d0b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0b56 mov ax, word ptr [0x109f18d4] */
  AX = (r16((uint32_t)(0x109f18d4)));
  /* 109d0b5c push eax */
  push32((uint32_t)(EAX));
  /* 109d0b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0b5f call 0x109d3400 */
  push32(0x109d0b64u); f_109d3400();
  /* 109d0b64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0b69 je 0x109d0b70 */
  if (C.zf) goto L_109d0b70;
  /* 109d0b6b jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0b70:;
  /* 109d0b70 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 109d0b72 push 0x109ed374 */
  push32((uint32_t)(0x109ed374u));
  /* 109d0b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0b79 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 109d0b7e call 0x109c5240 */
  push32(0x109d0b83u); f_109c5240();
  /* 109d0b83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0b86 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 109d0b89 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109d0b8b push 0x109ed374 */
  push32((uint32_t)(0x109ed374u));
  /* 109d0b90 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0b92 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 109d0b97 call 0x109c5240 */
  push32(0x109d0b9cu); f_109c5240();
  /* 109d0b9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0b9f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 109d0ba2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 109d0ba4 push 0x109ed374 */
  push32((uint32_t)(0x109ed374u));
  /* 109d0ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0bab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 109d0bb0 call 0x109c5240 */
  push32(0x109d0bb5u); f_109c5240();
  /* 109d0bb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0bb8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 109d0bbb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 109d0bbd push 0x109ed374 */
  push32((uint32_t)(0x109ed374u));
  /* 109d0bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0bc4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 109d0bc9 call 0x109c5240 */
  push32(0x109d0bceu); f_109c5240();
  /* 109d0bce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0bd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109d0bd4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0bd8 je 0x109d0bec */
  if (C.zf) goto L_109d0bec;
  /* 109d0bda cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0bde je 0x109d0bec */
  if (C.zf) goto L_109d0bec;
  /* 109d0be0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0be4 je 0x109d0bec */
  if (C.zf) goto L_109d0bec;
  /* 109d0be6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0bea jne 0x109d0bf1 */
  if (!C.zf) goto L_109d0bf1;
L_109d0bec:;
  /* 109d0bec jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0bf1:;
  /* 109d0bf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d0bf4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109d0bf7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109d0bfe jmp 0x109d0c09 */
  goto L_109d0c09;
L_109d0c00:;
  /* 109d0c00 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d0c03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0c06 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_109d0c09:;
  /* 109d0c09 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0c10 jge 0x109d0c25 */
  if ((C.sf==C.of)) goto L_109d0c25;
  /* 109d0c12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c15 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 109d0c18 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 109d0c1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0c20 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109d0c23 jmp 0x109d0c00 */
  goto L_109d0c00;
L_109d0c25:;
  /* 109d0c25 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 109d0c28 push eax */
  push32((uint32_t)(EAX));
  /* 109d0c29 mov ecx, dword ptr [0x109f1890] */
  ECX = (r32((uint32_t)(0x109f1890)));
  /* 109d0c2f push ecx */
  push32((uint32_t)(ECX));
  /* 109d0c30 call dword ptr [0x109f4300] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4300))), 0x109d0c36u);
  /* 109d0c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0c38 jne 0x109d0c3f */
  if (!C.zf) goto L_109d0c3f;
  /* 109d0c3a jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0c3f:;
  /* 109d0c3f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0c43 jbe 0x109d0c4a */
  if ((C.cf||C.zf)) goto L_109d0c4a;
  /* 109d0c45 jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0c4a:;
  /* 109d0c4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109d0c4d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d0c53 mov dword ptr [0x109efea4], edx */
  w32((uint32_t)(0x109efea4), (EDX));
  /* 109d0c59 cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0c60 jle 0x109d0cb9 */
  if ((C.zf||C.sf!=C.of)) goto L_109d0cb9;
  /* 109d0c62 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 109d0c65 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109d0c68 jmp 0x109d0c73 */
  goto L_109d0c73;
L_109d0c6a:;
  /* 109d0c6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c6d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0c70 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_109d0c73:;
  /* 109d0c73 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0c78 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d0c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0c7c je 0x109d0cb9 */
  if (C.zf) goto L_109d0cb9;
  /* 109d0c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d0c83 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 109d0c86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d0c88 je 0x109d0cb9 */
  if (C.zf) goto L_109d0cb9;
  /* 109d0c8a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0c8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d0c91 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109d0c94 jmp 0x109d0c9f */
  goto L_109d0c9f;
L_109d0c96:;
  /* 109d0c96 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d0c99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0c9c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_109d0c9f:;
  /* 109d0c9f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0ca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0ca4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109d0ca7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0caa jg 0x109d0cb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d0cb7;
  /* 109d0cac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d0caf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0cb2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109d0cb5 jmp 0x109d0c96 */
  goto L_109d0c96;
L_109d0cb7:;
  /* 109d0cb7 jmp 0x109d0c6a */
  goto L_109d0c6a;
L_109d0cb9:;
  /* 109d0cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0cbf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0cc2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0cc5 push eax */
  push32((uint32_t)(EAX));
  /* 109d0cc6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109d0ccb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d0cce push ecx */
  push32((uint32_t)(ECX));
  /* 109d0ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0cd1 call 0x109cd470 */
  push32(0x109d0cd6u); f_109cd470();
  /* 109d0cd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0cdb jne 0x109d0ce2 */
  if (!C.zf) goto L_109d0ce2;
  /* 109d0cdd jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0ce2:;
  /* 109d0ce2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0ce5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 109d0cea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d0ced mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109d0cf0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 109d0cf7 jmp 0x109d0d02 */
  goto L_109d0d02;
L_109d0cf9:;
  /* 109d0cf9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d0cfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0cff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_109d0d02:;
  /* 109d0d02 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0d09 jge 0x109d0d20 */
  if ((C.sf==C.of)) goto L_109d0d20;
  /* 109d0d0b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d0d0e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 109d0d12 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 109d0d15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109d0d18 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0d1b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 109d0d1e jmp 0x109d0cf9 */
  goto L_109d0cf9;
L_109d0d20:;
  /* 109d0d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d0d24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d0d27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0d2a push edx */
  push32((uint32_t)(EDX));
  /* 109d0d2b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 109d0d30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d0d33 push eax */
  push32((uint32_t)(EAX));
  /* 109d0d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d0d36 call 0x109d36a0 */
  push32(0x109d0d3bu); f_109d36a0();
  /* 109d0d3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d0d40 jne 0x109d0d47 */
  if (!C.zf) goto L_109d0d47;
  /* 109d0d42 jmp 0x109d0e32 */
  goto L_109d0e32;
L_109d0d47:;
  /* 109d0d47 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d0d4a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 109d0d4f cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0d56 jle 0x109d0db3 */
  if ((C.zf||C.sf!=C.of)) goto L_109d0db3;
  /* 109d0d58 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 109d0d5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109d0d5e jmp 0x109d0d69 */
  goto L_109d0d69;
L_109d0d60:;
  /* 109d0d60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0d63 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0d66 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_109d0d69:;
  /* 109d0d69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0d6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109d0d6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109d0d70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d0d72 je 0x109d0db3 */
  if (C.zf) goto L_109d0db3;
  /* 109d0d74 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0d77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0d79 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 109d0d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d0d7e je 0x109d0db3 */
  if (C.zf) goto L_109d0db3;
  /* 109d0d80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0d85 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d0d87 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109d0d8a jmp 0x109d0d95 */
  goto L_109d0d95;
L_109d0d8c:;
  /* 109d0d8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d0d8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0d92 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_109d0d95:;
  /* 109d0d95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109d0d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0d9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 109d0d9d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0da0 jg 0x109d0db1 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d0db1;
  /* 109d0da2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109d0da5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0da8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 109d0daf jmp 0x109d0d8c */
  goto L_109d0d8c;
L_109d0db1:;
  /* 109d0db1 jmp 0x109d0d60 */
  goto L_109d0d60;
L_109d0db3:;
  /* 109d0db3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0db6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0db9 mov dword ptr [0x109efc98], eax */
  w32((uint32_t)(0x109efc98), (EAX));
  /* 109d0dbe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d0dc1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0dc4 mov dword ptr [0x109efc9c], ecx */
  w32((uint32_t)(0x109efc9c), (ECX));
  /* 109d0dca cmp dword ptr [0x109f18c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0dd1 je 0x109d0de4 */
  if (C.zf) goto L_109d0de4;
  /* 109d0dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0dd5 mov edx, dword ptr [0x109f18c0] */
  EDX = (r32((uint32_t)(0x109f18c0)));
  /* 109d0ddb push edx */
  push32((uint32_t)(EDX));
  /* 109d0ddc call 0x109c5cd0 */
  push32(0x109d0de1u); f_109c5cd0();
  /* 109d0de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d0de4:;
  /* 109d0de4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0de7 mov dword ptr [0x109f18c0], eax */
  w32((uint32_t)(0x109f18c0), (EAX));
  /* 109d0dec cmp dword ptr [0x109f18c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d0df3 je 0x109d0e06 */
  if (C.zf) goto L_109d0e06;
  /* 109d0df5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0df7 mov ecx, dword ptr [0x109f18c4] */
  ECX = (r32((uint32_t)(0x109f18c4)));
  /* 109d0dfd push ecx */
  push32((uint32_t)(ECX));
  /* 109d0dfe call 0x109c5cd0 */
  push32(0x109d0e03u); f_109c5cd0();
  /* 109d0e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d0e06:;
  /* 109d0e06 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d0e09 mov dword ptr [0x109f18c4], edx */
  w32((uint32_t)(0x109f18c4), (EDX));
  /* 109d0e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e11 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d0e14 push eax */
  push32((uint32_t)(EAX));
  /* 109d0e15 call 0x109c5cd0 */
  push32(0x109d0e1au); f_109c5cd0();
  /* 109d0e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d0e22 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0e23 call 0x109c5cd0 */
  push32(0x109d0e28u); f_109c5cd0();
  /* 109d0e28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0e2d jmp 0x109d0ebc */
  goto L_109d0ebc;
L_109d0e32:;
  /* 109d0e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 109d0e37 push edx */
  push32((uint32_t)(EDX));
  /* 109d0e38 call 0x109c5cd0 */
  push32(0x109d0e3du); f_109c5cd0();
  /* 109d0e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e40 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 109d0e45 push eax */
  push32((uint32_t)(EAX));
  /* 109d0e46 call 0x109c5cd0 */
  push32(0x109d0e4bu); f_109c5cd0();
  /* 109d0e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109d0e53 push ecx */
  push32((uint32_t)(ECX));
  /* 109d0e54 call 0x109c5cd0 */
  push32(0x109d0e59u); f_109c5cd0();
  /* 109d0e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e5e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 109d0e61 push edx */
  push32((uint32_t)(EDX));
  /* 109d0e62 call 0x109c5cd0 */
  push32(0x109d0e67u); f_109c5cd0();
  /* 109d0e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e6a mov eax, 1 */
  EAX = (0x1u);
  /* 109d0e6f jmp 0x109d0ebc */
  goto L_109d0ebc;
L_109d0e71:;
  /* 109d0e71 mov dword ptr [0x109efc98], 0x109efca2 */
  w32((uint32_t)(0x109efc98), (0x109efca2u));
  /* 109d0e7b mov dword ptr [0x109efc9c], 0x109efca2 */
  w32((uint32_t)(0x109efc9c), (0x109efca2u));
  /* 109d0e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e87 mov eax, dword ptr [0x109f18c0] */
  EAX = (r32((uint32_t)(0x109f18c0)));
  /* 109d0e8c push eax */
  push32((uint32_t)(EAX));
  /* 109d0e8d call 0x109c5cd0 */
  push32(0x109d0e92u); f_109c5cd0();
  /* 109d0e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0e95 push 2 */
  push32((uint32_t)(0x2u));
  /* 109d0e97 mov ecx, dword ptr [0x109f18c4] */
  ECX = (r32((uint32_t)(0x109f18c4)));
  /* 109d0e9d push ecx */
  push32((uint32_t)(ECX));
  /* 109d0e9e call 0x109c5cd0 */
  push32(0x109d0ea3u); f_109c5cd0();
  /* 109d0ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0ea6 mov dword ptr [0x109f18c0], 0 */
  w32((uint32_t)(0x109f18c0), (0x0u));
  /* 109d0eb0 mov dword ptr [0x109f18c4], 0 */
  w32((uint32_t)(0x109f18c4), (0x0u));
  /* 109d0eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d0ebc:;
  /* 109d0ebc mov esp, ebp */
  ESP = (EBP);
  /* 109d0ebe pop ebp */
  EBP = (pop32());
  /* 109d0ebf ret  */
  ESPCHK(0x109d0b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ec0 @ 0x109d0ec0 (7 bytes, 5 insns) */
void f_109d0ec0(void) {
  FTRACE(0x109d0ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0ec1 mov ebp, esp */
  EBP = (ESP);
  /* 109d0ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0ec5 pop ebp */
  EBP = (pop32());
  /* 109d0ec6 ret  */
  ESPCHK(0x109d0ec0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x109d0ed0 (129 bytes, 56 insns) */
void f_109d0ed0(void) {
  FTRACE(0x109d0ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0ed0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 109d0ed4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 109d0ed8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 109d0ede jne 0x109d0f1c */
  if (!C.zf) goto L_109d0f1c;
L_109d0ee0:;
  /* 109d0ee0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109d0ee2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0ee4 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0ee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0ee8 je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0eea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0eed jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0eef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 109d0ef1 je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0ef3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109d0ef6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0ef9 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0efb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0efd je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0eff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0f02 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0f04 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0f07 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0f0a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 109d0f0c jne 0x109d0ee0 */
  if (!C.zf) goto L_109d0ee0;
  /* 109d0f0e mov edi, edi */
  EDI = (EDI);
L_109d0f10:;
  /* 109d0f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0f12 ret  */
  ESPCHK(0x109d0ed0u, _esp0);
  ESP += 4; return;
  /* 109d0f13 nop  */
  /* nop */
L_109d0f14:;
  /* 109d0f14 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d0f16 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d0f18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109d0f19 ret  */
  ESPCHK(0x109d0ed0u, _esp0);
  ESP += 4; return;
  /* 109d0f1a mov edi, edi */
  EDI = (EDI);
L_109d0f1c:;
  /* 109d0f1c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 109d0f22 je 0x109d0f38 */
  if (C.zf) goto L_109d0f38;
  /* 109d0f24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d0f26 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109d0f27 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0f29 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0f2b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109d0f2c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0f2e je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0f30 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 109d0f36 je 0x109d0ee0 */
  if (C.zf) goto L_109d0ee0;
L_109d0f38:;
  /* 109d0f38 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 109d0f3b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0f3e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0f40 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0f42 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0f44 je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0f46 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0f49 jne 0x109d0f14 */
  if (!C.zf) goto L_109d0f14;
  /* 109d0f4b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 109d0f4d je 0x109d0f10 */
  if (C.zf) goto L_109d0f10;
  /* 109d0f4f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0f52 jmp 0x109d0ee0 */
  goto L_109d0ee0;
}

/* FUN_10010f60 @ 0x109d0f60 (62 bytes, 35 insns) */
void f_109d0f60(void) {
  FTRACE(0x109d0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0f61 mov ebp, esp */
  EBP = (ESP);
  /* 109d0f63 push esi */
  push32((uint32_t)(ESI));
  /* 109d0f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0f66 push eax */
  push32((uint32_t)(EAX));
  /* 109d0f67 push eax */
  push32((uint32_t)(EAX));
  /* 109d0f68 push eax */
  push32((uint32_t)(EAX));
  /* 109d0f69 push eax */
  push32((uint32_t)(EAX));
  /* 109d0f6a push eax */
  push32((uint32_t)(EAX));
  /* 109d0f6b push eax */
  push32((uint32_t)(EAX));
  /* 109d0f6c push eax */
  push32((uint32_t)(EAX));
  /* 109d0f6d push eax */
  push32((uint32_t)(EAX));
  /* 109d0f6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d0f71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109d0f74:;
  /* 109d0f74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d0f76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0f78 je 0x109d0f81 */
  if (C.zf) goto L_109d0f81;
  /* 109d0f7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109d0f7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x109d0f7b");
  /* 109d0f7f jmp 0x109d0f74 */
  goto L_109d0f74;
L_109d0f81:;
  /* 109d0f81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0f84 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109d0f87 nop  */
  /* nop */
L_109d0f88:;
  /* 109d0f88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109d0f89 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109d0f8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0f8d je 0x109d0f96 */
  if (C.zf) goto L_109d0f96;
  /* 109d0f8f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d0f90 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x109d0f90");
  /* 109d0f94 jae 0x109d0f88 */
  if (!C.cf) goto L_109d0f88;
L_109d0f96:;
  /* 109d0f96 mov eax, ecx */
  EAX = (ECX);
  /* 109d0f98 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0f9b pop esi */
  ESI = (pop32());
  /* 109d0f9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109d0f9d ret  */
  ESPCHK(0x109d0f60u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x109d0fa0 (56 bytes, 31 insns) */
void f_109d0fa0(void) {
  FTRACE(0x109d0fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0fa1 mov ebp, esp */
  EBP = (ESP);
  /* 109d0fa3 push edi */
  push32((uint32_t)(EDI));
  /* 109d0fa4 push esi */
  push32((uint32_t)(ESI));
  /* 109d0fa5 push ebx */
  push32((uint32_t)(EBX));
  /* 109d0fa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d0fa9 jecxz 0x109d0fd1 */
  x86_unimpl("jecxz @ 0x109d0fa9");
  /* 109d0fab mov ebx, ecx */
  EBX = (ECX);
  /* 109d0fad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109d0fb0 mov esi, edi */
  ESI = (EDI);
  /* 109d0fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0fb4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 109d0fb6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d0fb8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d0fba mov edi, esi */
  EDI = (ESI);
  /* 109d0fbc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109d0fbf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 109d0fc1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 109d0fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d0fc6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109d0fc9 ja 0x109d0fcf */
  if ((!C.cf&&!C.zf)) goto L_109d0fcf;
  /* 109d0fcb je 0x109d0fd1 */
  if (C.zf) goto L_109d0fd1;
  /* 109d0fcd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109d0fce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_109d0fcf:;
  /* 109d0fcf not ecx */
  ECX = (~(ECX));
L_109d0fd1:;
  /* 109d0fd1 mov eax, ecx */
  EAX = (ECX);
  /* 109d0fd3 pop ebx */
  EBX = (pop32());
  /* 109d0fd4 pop esi */
  ESI = (pop32());
  /* 109d0fd5 pop edi */
  EDI = (pop32());
  /* 109d0fd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109d0fd7 ret  */
  ESPCHK(0x109d0fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x109d0fe0 (58 bytes, 32 insns) */
void f_109d0fe0(void) {
  FTRACE(0x109d0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 109d0fe3 push esi */
  push32((uint32_t)(ESI));
  /* 109d0fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d0fe6 push eax */
  push32((uint32_t)(EAX));
  /* 109d0fe7 push eax */
  push32((uint32_t)(EAX));
  /* 109d0fe8 push eax */
  push32((uint32_t)(EAX));
  /* 109d0fe9 push eax */
  push32((uint32_t)(EAX));
  /* 109d0fea push eax */
  push32((uint32_t)(EAX));
  /* 109d0feb push eax */
  push32((uint32_t)(EAX));
  /* 109d0fec push eax */
  push32((uint32_t)(EAX));
  /* 109d0fed push eax */
  push32((uint32_t)(EAX));
  /* 109d0fee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d0ff1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109d0ff4:;
  /* 109d0ff4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d0ff6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d0ff8 je 0x109d1001 */
  if (C.zf) goto L_109d1001;
  /* 109d0ffa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109d0ffb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x109d0ffb");
  /* 109d0fff jmp 0x109d0ff4 */
  goto L_109d0ff4;
L_109d1001:;
  /* 109d1001 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_109d1004:;
  /* 109d1004 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109d1006 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 109d1008 je 0x109d1014 */
  if (C.zf) goto L_109d1014;
  /* 109d100a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109d100b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x109d100b");
  /* 109d100f jae 0x109d1004 */
  if (!C.cf) goto L_109d1004;
  /* 109d1011 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_109d1014:;
  /* 109d1014 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1017 pop esi */
  ESI = (pop32());
  /* 109d1018 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109d1019 ret  */
  ESPCHK(0x109d0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011020 @ 0x109d1020 (512 bytes, 147 insns) */
void f_109d1020(void) {
  FTRACE(0x109d1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1020 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1021 mov ebp, esp */
  EBP = (ESP);
  /* 109d1023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1026 cmp dword ptr [0x109f190c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f190c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d102d jne 0x109d1052 */
  if (!C.zf) goto L_109d1052;
  /* 109d102f call 0x109d1af0 */
  push32(0x109d1034u); f_109d1af0();
  /* 109d1034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1036 je 0x109d1042 */
  if (C.zf) goto L_109d1042;
  /* 109d1038 mov eax, dword ptr [0x109f42c4] */
  EAX = (r32((uint32_t)(0x109f42c4)));
  /* 109d103d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d1040 jmp 0x109d1049 */
  goto L_109d1049;
L_109d1042:;
  /* 109d1042 mov dword ptr [ebp - 8], 0x109d1b40 */
  w32((uint32_t)(EBP + -0x8), (0x109d1b40u));
L_109d1049:;
  /* 109d1049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d104c mov dword ptr [0x109f190c], ecx */
  w32((uint32_t)(0x109f190c), (ECX));
L_109d1052:;
  /* 109d1052 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1056 jne 0x109d1062 */
  if (!C.zf) goto L_109d1062;
  /* 109d1058 call 0x109d1940 */
  push32(0x109d105du); f_109d1940();
  /* 109d105d jmp 0x109d112e */
  goto L_109d112e;
L_109d1062:;
  /* 109d1062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1065 mov dword ptr [0x109f18fc], edx */
  w32((uint32_t)(0x109f18fc), (EDX));
  /* 109d106b cmp dword ptr [0x109f18fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1072 je 0x109d1094 */
  if (C.zf) goto L_109d1094;
  /* 109d1074 mov eax, dword ptr [0x109f18fc] */
  EAX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1079 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d107c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d107e je 0x109d1094 */
  if (C.zf) goto L_109d1094;
  /* 109d1080 push 0x109f18fc */
  push32((uint32_t)(0x109f18fcu));
  /* 109d1085 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109d1087 push 0x109f0a90 */
  push32((uint32_t)(0x109f0a90u));
  /* 109d108c call 0x109d1220 */
  push32(0x109d1091u); f_109d1220();
  /* 109d1091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d1094:;
  /* 109d1094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1097 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d109a mov dword ptr [0x109f1900], edx */
  w32((uint32_t)(0x109f1900), (EDX));
  /* 109d10a0 cmp dword ptr [0x109f1900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d10a7 je 0x109d10c9 */
  if (C.zf) goto L_109d10c9;
  /* 109d10a9 mov eax, dword ptr [0x109f1900] */
  EAX = (r32((uint32_t)(0x109f1900)));
  /* 109d10ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d10b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d10b3 je 0x109d10c9 */
  if (C.zf) goto L_109d10c9;
  /* 109d10b5 push 0x109f1900 */
  push32((uint32_t)(0x109f1900u));
  /* 109d10ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109d10bc push 0x109f09d8 */
  push32((uint32_t)(0x109f09d8u));
  /* 109d10c1 call 0x109d1220 */
  push32(0x109d10c6u); f_109d1220();
  /* 109d10c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d10c9:;
  /* 109d10c9 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d10d3 cmp dword ptr [0x109f18fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d10da je 0x109d110d */
  if (C.zf) goto L_109d110d;
  /* 109d10dc mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d10e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109d10e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d10e7 je 0x109d110d */
  if (C.zf) goto L_109d110d;
  /* 109d10e9 cmp dword ptr [0x109f1900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d10f0 je 0x109d1106 */
  if (C.zf) goto L_109d1106;
  /* 109d10f2 mov ecx, dword ptr [0x109f1900] */
  ECX = (r32((uint32_t)(0x109f1900)));
  /* 109d10f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109d10fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d10fd je 0x109d1106 */
  if (C.zf) goto L_109d1106;
  /* 109d10ff call 0x109d12b0 */
  push32(0x109d1104u); f_109d12b0();
  /* 109d1104 jmp 0x109d110b */
  goto L_109d110b;
L_109d1106:;
  /* 109d1106 call 0x109d16a0 */
  push32(0x109d110bu); f_109d16a0();
L_109d110b:;
  /* 109d110b jmp 0x109d112e */
  goto L_109d112e;
L_109d110d:;
  /* 109d110d cmp dword ptr [0x109f1900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1114 je 0x109d1129 */
  if (C.zf) goto L_109d1129;
  /* 109d1116 mov eax, dword ptr [0x109f1900] */
  EAX = (r32((uint32_t)(0x109f1900)));
  /* 109d111b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d111e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d1120 je 0x109d1129 */
  if (C.zf) goto L_109d1129;
  /* 109d1122 call 0x109d1840 */
  push32(0x109d1127u); f_109d1840();
  /* 109d1127 jmp 0x109d112e */
  goto L_109d112e;
L_109d1129:;
  /* 109d1129 call 0x109d1940 */
  push32(0x109d112eu); f_109d1940();
L_109d112e:;
  /* 109d112e cmp dword ptr [0x109f1904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1135 jne 0x109d113e */
  if (!C.zf) goto L_109d113e;
  /* 109d1137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1139 jmp 0x109d121c */
  goto L_109d121c;
L_109d113e:;
  /* 109d113e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1141 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1147 push edx */
  push32((uint32_t)(EDX));
  /* 109d1148 call 0x109d1970 */
  push32(0x109d114du); f_109d1970();
  /* 109d114d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1150 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d1153 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1157 je 0x109d116c */
  if (C.zf) goto L_109d116c;
  /* 109d1159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d115c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1161 push eax */
  push32((uint32_t)(EAX));
  /* 109d1162 call dword ptr [0x109f42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c8))), 0x109d1168u);
  /* 109d1168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d116a jne 0x109d1173 */
  if (!C.zf) goto L_109d1173;
L_109d116c:;
  /* 109d116c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d116e jmp 0x109d121c */
  goto L_109d121c;
L_109d1173:;
  /* 109d1173 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1175 mov ecx, dword ptr [0x109f18ec] */
  ECX = (r32((uint32_t)(0x109f18ec)));
  /* 109d117b push ecx */
  push32((uint32_t)(ECX));
  /* 109d117c call dword ptr [0x109f42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42d8))), 0x109d1182u);
  /* 109d1182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1184 jne 0x109d118d */
  if (!C.zf) goto L_109d118d;
  /* 109d1186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1188 jmp 0x109d121c */
  goto L_109d121c;
L_109d118d:;
  /* 109d118d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1191 je 0x109d11b8 */
  if (C.zf) goto L_109d11b8;
  /* 109d1193 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d1196 mov ax, word ptr [0x109f18ec] */
  AX = (r16((uint32_t)(0x109f18ec)));
  /* 109d119c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 109d119f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d11a2 mov dx, word ptr [0x109f1908] */
  DX = (r16((uint32_t)(0x109f1908)));
  /* 109d11a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 109d11ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d11b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 109d11b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_109d11b8:;
  /* 109d11b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d11bc je 0x109d1217 */
  if (C.zf) goto L_109d1217;
  /* 109d11be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109d11c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d11c3 push edx */
  push32((uint32_t)(EDX));
  /* 109d11c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 109d11c9 mov eax, dword ptr [0x109f18ec] */
  EAX = (r32((uint32_t)(0x109f18ec)));
  /* 109d11ce push eax */
  push32((uint32_t)(EAX));
  /* 109d11cf call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d11d5u);
  /* 109d11d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d11d7 jne 0x109d11dd */
  if (!C.zf) goto L_109d11dd;
  /* 109d11d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d11db jmp 0x109d121c */
  goto L_109d121c;
L_109d11dd:;
  /* 109d11dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109d11df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d11e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d11e5 push ecx */
  push32((uint32_t)(ECX));
  /* 109d11e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 109d11eb mov edx, dword ptr [0x109f1908] */
  EDX = (r32((uint32_t)(0x109f1908)));
  /* 109d11f1 push edx */
  push32((uint32_t)(EDX));
  /* 109d11f2 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d11f8u);
  /* 109d11f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d11fa jne 0x109d1200 */
  if (!C.zf) goto L_109d1200;
  /* 109d11fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d11fe jmp 0x109d121c */
  goto L_109d121c;
L_109d1200:;
  /* 109d1200 push 0xa */
  push32((uint32_t)(0xau));
  /* 109d1202 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d1205 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d120a push eax */
  push32((uint32_t)(EAX));
  /* 109d120b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d120e push ecx */
  push32((uint32_t)(ECX));
  /* 109d120f call 0x109c7d80 */
  push32(0x109d1214u); f_109c7d80();
  /* 109d1214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d1217:;
  /* 109d1217 mov eax, 1 */
  EAX = (0x1u);
L_109d121c:;
  /* 109d121c mov esp, ebp */
  ESP = (EBP);
  /* 109d121e pop ebp */
  EBP = (pop32());
  /* 109d121f ret  */
  ESPCHK(0x109d1020u, _esp0);
  ESP += 4; return;
}

/* FUN_10011220 @ 0x109d1220 (130 bytes, 47 insns) */
void f_109d1220(void) {
  FTRACE(0x109d1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1220 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1221 mov ebp, esp */
  EBP = (ESP);
  /* 109d1223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1226 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 109d122d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_109d1234:;
  /* 109d1234 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1237 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d123a jg 0x109d129e */
  if ((!C.zf&&C.sf==C.of)) goto L_109d129e;
  /* 109d123c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1240 je 0x109d129e */
  if (C.zf) goto L_109d129e;
  /* 109d1242 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1245 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1248 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d1249 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d124b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d124d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d1250 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1253 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1256 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 109d1259 push eax */
  push32((uint32_t)(EAX));
  /* 109d125a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d125d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109d125f push edx */
  push32((uint32_t)(EDX));
  /* 109d1260 call 0x109d3910 */
  push32(0x109d1265u); f_109d3910();
  /* 109d1265 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1268 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d126b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d126f jne 0x109d1282 */
  if (!C.zf) goto L_109d1282;
  /* 109d1271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1277 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 109d127b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d127e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109d1280 jmp 0x109d129c */
  goto L_109d129c;
L_109d1282:;
  /* 109d1282 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1286 jge 0x109d1293 */
  if ((C.sf==C.of)) goto L_109d1293;
  /* 109d1288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d128b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d128e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109d1291 jmp 0x109d129c */
  goto L_109d129c;
L_109d1293:;
  /* 109d1293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1296 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1299 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109d129c:;
  /* 109d129c jmp 0x109d1234 */
  goto L_109d1234;
L_109d129e:;
  /* 109d129e mov esp, ebp */
  ESP = (EBP);
  /* 109d12a0 pop ebp */
  EBP = (pop32());
  /* 109d12a1 ret  */
  ESPCHK(0x109d1220u, _esp0);
  ESP += 4; return;
}

/* FUN_100112b0 @ 0x109d12b0 (186 bytes, 50 insns) */
void f_109d12b0(void) {
  FTRACE(0x109d12b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d12b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d12b1 mov ebp, esp */
  EBP = (ESP);
  /* 109d12b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d12b4 mov eax, dword ptr [0x109f18fc] */
  EAX = (r32((uint32_t)(0x109f18fc)));
  /* 109d12b9 push eax */
  push32((uint32_t)(EAX));
  /* 109d12ba call 0x109c8070 */
  push32(0x109d12bfu); f_109c8070();
  /* 109d12bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d12c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d12c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d12c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109d12ca mov dword ptr [0x109f18f8], ecx */
  w32((uint32_t)(0x109f18f8), (ECX));
  /* 109d12d0 mov edx, dword ptr [0x109f1900] */
  EDX = (r32((uint32_t)(0x109f1900)));
  /* 109d12d6 push edx */
  push32((uint32_t)(EDX));
  /* 109d12d7 call 0x109c8070 */
  push32(0x109d12dcu); f_109c8070();
  /* 109d12dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d12df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d12e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d12e4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109d12e7 mov dword ptr [0x109f18f0], ecx */
  w32((uint32_t)(0x109f18f0), (ECX));
  /* 109d12ed mov dword ptr [0x109f18ec], 0 */
  w32((uint32_t)(0x109f18ec), (0x0u));
  /* 109d12f7 cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d12fe je 0x109d1309 */
  if (C.zf) goto L_109d1309;
  /* 109d1300 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 109d1307 jmp 0x109d131b */
  goto L_109d131b;
L_109d1309:;
  /* 109d1309 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d130f push edx */
  push32((uint32_t)(EDX));
  /* 109d1310 call 0x109d1d50 */
  push32(0x109d1315u); f_109d1d50();
  /* 109d1315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1318 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d131b:;
  /* 109d131b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d131e mov dword ptr [0x109f18f4], eax */
  w32((uint32_t)(0x109f18f4), (EAX));
  /* 109d1323 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1325 push 0x109d1370 */
  push32((uint32_t)(0x109d1370u));
  /* 109d132a call dword ptr [0x109f42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42cc))), 0x109d1330u);
  /* 109d1330 mov ecx, dword ptr [0x109f1904] */
  ECX = (r32((uint32_t)(0x109f1904)));
  /* 109d1336 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 109d133c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d133e je 0x109d135c */
  if (C.zf) goto L_109d135c;
  /* 109d1340 mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d1346 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 109d134c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d134e je 0x109d135c */
  if (C.zf) goto L_109d135c;
  /* 109d1350 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1355 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 109d1358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d135a jne 0x109d1366 */
  if (!C.zf) goto L_109d1366;
L_109d135c:;
  /* 109d135c mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
L_109d1366:;
  /* 109d1366 mov esp, ebp */
  ESP = (EBP);
  /* 109d1368 pop ebp */
  EBP = (pop32());
  /* 109d1369 ret  */
  ESPCHK(0x109d12b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x109d1370 (804 bytes, 220 insns) */
void f_109d1370(void) {
  FTRACE(0x109d1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1370 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1371 mov ebp, esp */
  EBP = (ESP);
  /* 109d1373 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1379 push eax */
  push32((uint32_t)(EAX));
  /* 109d137a call 0x109d1cd0 */
  push32(0x109d137fu); f_109d1cd0();
  /* 109d137f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1382 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 109d1385 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d1387 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d138a push ecx */
  push32((uint32_t)(ECX));
  /* 109d138b mov edx, dword ptr [0x109f18f0] */
  EDX = (r32((uint32_t)(0x109f18f0)));
  /* 109d1391 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d1393 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1395 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 109d139b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d13a1 push edx */
  push32((uint32_t)(EDX));
  /* 109d13a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d13a5 push eax */
  push32((uint32_t)(EAX));
  /* 109d13a6 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d13acu);
  /* 109d13ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d13ae jne 0x109d13c4 */
  if (!C.zf) goto L_109d13c4;
  /* 109d13b0 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d13ba mov eax, 1 */
  EAX = (0x1u);
  /* 109d13bf jmp 0x109d168e */
  goto L_109d168e;
L_109d13c4:;
  /* 109d13c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d13c7 push ecx */
  push32((uint32_t)(ECX));
  /* 109d13c8 mov edx, dword ptr [0x109f1900] */
  EDX = (r32((uint32_t)(0x109f1900)));
  /* 109d13ce push edx */
  push32((uint32_t)(EDX));
  /* 109d13cf call 0x109d3910 */
  push32(0x109d13d4u); f_109d3910();
  /* 109d13d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d13d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d13d9 jne 0x109d14ff */
  if (!C.zf) goto L_109d14ff;
  /* 109d13df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d13e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109d13e4 push eax */
  push32((uint32_t)(EAX));
  /* 109d13e5 mov ecx, dword ptr [0x109f18f8] */
  ECX = (r32((uint32_t)(0x109f18f8)));
  /* 109d13eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d13ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d13ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 109d13f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d13fb push ecx */
  push32((uint32_t)(ECX));
  /* 109d13fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d13ff push edx */
  push32((uint32_t)(EDX));
  /* 109d1400 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d1406u);
  /* 109d1406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1408 jne 0x109d141e */
  if (!C.zf) goto L_109d141e;
  /* 109d140a mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d1414 mov eax, 1 */
  EAX = (0x1u);
  /* 109d1419 jmp 0x109d168e */
  goto L_109d168e;
L_109d141e:;
  /* 109d141e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109d1421 push eax */
  push32((uint32_t)(EAX));
  /* 109d1422 mov ecx, dword ptr [0x109f18fc] */
  ECX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1428 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1429 call 0x109d3910 */
  push32(0x109d142eu); f_109d3910();
  /* 109d142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1433 jne 0x109d1460 */
  if (!C.zf) goto L_109d1460;
  /* 109d1435 mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d143b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 109d1441 mov dword ptr [0x109f1904], edx */
  w32((uint32_t)(0x109f1904), (EDX));
  /* 109d1447 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d144a mov dword ptr [0x109f1908], eax */
  w32((uint32_t)(0x109f1908), (EAX));
  /* 109d144f mov ecx, dword ptr [0x109f1908] */
  ECX = (r32((uint32_t)(0x109f1908)));
  /* 109d1455 mov dword ptr [0x109f18ec], ecx */
  w32((uint32_t)(0x109f18ec), (ECX));
  /* 109d145b jmp 0x109d14ff */
  goto L_109d14ff;
L_109d1460:;
  /* 109d1460 mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d1466 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 109d1469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d146b jne 0x109d14ff */
  if (!C.zf) goto L_109d14ff;
  /* 109d1471 cmp dword ptr [0x109f18f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1478 je 0x109d14cd */
  if (C.zf) goto L_109d14cd;
  /* 109d147a mov eax, dword ptr [0x109f18f4] */
  EAX = (r32((uint32_t)(0x109f18f4)));
  /* 109d147f push eax */
  push32((uint32_t)(EAX));
  /* 109d1480 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d1483 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1484 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d148a push edx */
  push32((uint32_t)(EDX));
  /* 109d148b call 0x109d39e0 */
  push32(0x109d1490u); f_109d39e0();
  /* 109d1490 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1495 jne 0x109d14cd */
  if (!C.zf) goto L_109d14cd;
  /* 109d1497 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d149c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 109d149e mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d14a3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d14a6 mov dword ptr [0x109f1908], ecx */
  w32((uint32_t)(0x109f1908), (ECX));
  /* 109d14ac mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d14b2 push edx */
  push32((uint32_t)(EDX));
  /* 109d14b3 call 0x109c8070 */
  push32(0x109d14b8u); f_109c8070();
  /* 109d14b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d14bb cmp eax, dword ptr [0x109f18f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f18f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d14c1 jne 0x109d14cb */
  if (!C.zf) goto L_109d14cb;
  /* 109d14c3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d14c6 mov dword ptr [0x109f18ec], eax */
  w32((uint32_t)(0x109f18ec), (EAX));
L_109d14cb:;
  /* 109d14cb jmp 0x109d14ff */
  goto L_109d14ff;
L_109d14cd:;
  /* 109d14cd mov ecx, dword ptr [0x109f1904] */
  ECX = (r32((uint32_t)(0x109f1904)));
  /* 109d14d3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109d14d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d14d8 jne 0x109d14ff */
  if (!C.zf) goto L_109d14ff;
  /* 109d14da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d14dd push edx */
  push32((uint32_t)(EDX));
  /* 109d14de call 0x109d1a10 */
  push32(0x109d14e3u); f_109d1a10();
  /* 109d14e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d14e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d14e8 je 0x109d14ff */
  if (C.zf) goto L_109d14ff;
  /* 109d14ea mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d14ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 109d14f1 mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d14f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d14f9 mov dword ptr [0x109f1908], ecx */
  w32((uint32_t)(0x109f1908), (ECX));
L_109d14ff:;
  /* 109d14ff mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d1505 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 109d150b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1511 je 0x109d1681 */
  if (C.zf) goto L_109d1681;
  /* 109d1517 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d1519 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109d151c push eax */
  push32((uint32_t)(EAX));
  /* 109d151d mov ecx, dword ptr [0x109f18f8] */
  ECX = (r32((uint32_t)(0x109f18f8)));
  /* 109d1523 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d1525 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1527 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 109d152d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1533 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1534 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d1537 push edx */
  push32((uint32_t)(EDX));
  /* 109d1538 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d153eu);
  /* 109d153e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1540 jne 0x109d1556 */
  if (!C.zf) goto L_109d1556;
  /* 109d1542 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d154c mov eax, 1 */
  EAX = (0x1u);
  /* 109d1551 jmp 0x109d168e */
  goto L_109d168e;
L_109d1556:;
  /* 109d1556 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109d1559 push eax */
  push32((uint32_t)(EAX));
  /* 109d155a mov ecx, dword ptr [0x109f18fc] */
  ECX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1560 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1561 call 0x109d3910 */
  push32(0x109d1566u); f_109d3910();
  /* 109d1566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d156b jne 0x109d1620 */
  if (!C.zf) goto L_109d1620;
  /* 109d1571 mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d1577 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 109d157a mov dword ptr [0x109f1904], edx */
  w32((uint32_t)(0x109f1904), (EDX));
  /* 109d1580 cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1587 je 0x109d15aa */
  if (C.zf) goto L_109d15aa;
  /* 109d1589 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d158e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109d1591 mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d1596 cmp dword ptr [0x109f18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d159d jne 0x109d15a8 */
  if (!C.zf) goto L_109d15a8;
  /* 109d159f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d15a2 mov dword ptr [0x109f18ec], ecx */
  w32((uint32_t)(0x109f18ec), (ECX));
L_109d15a8:;
  /* 109d15a8 jmp 0x109d161e */
  goto L_109d161e;
L_109d15aa:;
  /* 109d15aa cmp dword ptr [0x109f18f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d15b1 je 0x109d15ff */
  if (C.zf) goto L_109d15ff;
  /* 109d15b3 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d15b9 push edx */
  push32((uint32_t)(EDX));
  /* 109d15ba call 0x109c8070 */
  push32(0x109d15bfu); f_109c8070();
  /* 109d15bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d15c2 cmp eax, dword ptr [0x109f18f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f18f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d15c8 jne 0x109d15ff */
  if (!C.zf) goto L_109d15ff;
  /* 109d15ca push 1 */
  push32((uint32_t)(0x1u));
  /* 109d15cc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d15cf push eax */
  push32((uint32_t)(EAX));
  /* 109d15d0 call 0x109d1a60 */
  push32(0x109d15d5u); f_109d1a60();
  /* 109d15d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d15d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d15da je 0x109d15fd */
  if (C.zf) goto L_109d15fd;
  /* 109d15dc mov ecx, dword ptr [0x109f1904] */
  ECX = (r32((uint32_t)(0x109f1904)));
  /* 109d15e2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 109d15e5 mov dword ptr [0x109f1904], ecx */
  w32((uint32_t)(0x109f1904), (ECX));
  /* 109d15eb cmp dword ptr [0x109f18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d15f2 jne 0x109d15fd */
  if (!C.zf) goto L_109d15fd;
  /* 109d15f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d15f7 mov dword ptr [0x109f18ec], edx */
  w32((uint32_t)(0x109f18ec), (EDX));
L_109d15fd:;
  /* 109d15fd jmp 0x109d161e */
  goto L_109d161e;
L_109d15ff:;
  /* 109d15ff mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1604 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109d1607 mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d160c cmp dword ptr [0x109f18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1613 jne 0x109d161e */
  if (!C.zf) goto L_109d161e;
  /* 109d1615 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d1618 mov dword ptr [0x109f18ec], ecx */
  w32((uint32_t)(0x109f18ec), (ECX));
L_109d161e:;
  /* 109d161e jmp 0x109d1681 */
  goto L_109d1681;
L_109d1620:;
  /* 109d1620 cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1627 jne 0x109d1681 */
  if (!C.zf) goto L_109d1681;
  /* 109d1629 cmp dword ptr [0x109f18f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1630 je 0x109d1681 */
  if (C.zf) goto L_109d1681;
  /* 109d1632 mov edx, dword ptr [0x109f18f4] */
  EDX = (r32((uint32_t)(0x109f18f4)));
  /* 109d1638 push edx */
  push32((uint32_t)(EDX));
  /* 109d1639 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 109d163c push eax */
  push32((uint32_t)(EAX));
  /* 109d163d mov ecx, dword ptr [0x109f18fc] */
  ECX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1643 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1644 call 0x109d39e0 */
  push32(0x109d1649u); f_109d39e0();
  /* 109d1649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d164e jne 0x109d1681 */
  if (!C.zf) goto L_109d1681;
  /* 109d1650 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d1652 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d1655 push edx */
  push32((uint32_t)(EDX));
  /* 109d1656 call 0x109d1a60 */
  push32(0x109d165bu); f_109d1a60();
  /* 109d165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d165e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1660 je 0x109d1681 */
  if (C.zf) goto L_109d1681;
  /* 109d1662 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1667 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 109d166a mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d166f cmp dword ptr [0x109f18ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1676 jne 0x109d1681 */
  if (!C.zf) goto L_109d1681;
  /* 109d1678 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d167b mov dword ptr [0x109f18ec], ecx */
  w32((uint32_t)(0x109f18ec), (ECX));
L_109d1681:;
  /* 109d1681 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1686 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109d1689 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d168b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d168d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109d168e:;
  /* 109d168e mov esp, ebp */
  ESP = (EBP);
  /* 109d1690 pop ebp */
  EBP = (pop32());
  /* 109d1691 ret 4 */
  ESPCHK(0x109d1370u, _esp0);
  ESP += 8; return;
}

/* FUN_100116a0 @ 0x109d16a0 (116 bytes, 33 insns) */
void f_109d16a0(void) {
  FTRACE(0x109d16a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d16a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d16a1 mov ebp, esp */
  EBP = (ESP);
  /* 109d16a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d16a4 mov eax, dword ptr [0x109f18fc] */
  EAX = (r32((uint32_t)(0x109f18fc)));
  /* 109d16a9 push eax */
  push32((uint32_t)(EAX));
  /* 109d16aa call 0x109c8070 */
  push32(0x109d16afu); f_109c8070();
  /* 109d16af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d16b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d16b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d16b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109d16ba mov dword ptr [0x109f18f8], ecx */
  w32((uint32_t)(0x109f18f8), (ECX));
  /* 109d16c0 cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d16c7 je 0x109d16d2 */
  if (C.zf) goto L_109d16d2;
  /* 109d16c9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 109d16d0 jmp 0x109d16e4 */
  goto L_109d16e4;
L_109d16d2:;
  /* 109d16d2 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d16d8 push edx */
  push32((uint32_t)(EDX));
  /* 109d16d9 call 0x109d1d50 */
  push32(0x109d16deu); f_109d1d50();
  /* 109d16de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d16e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d16e4:;
  /* 109d16e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d16e7 mov dword ptr [0x109f18f4], eax */
  w32((uint32_t)(0x109f18f4), (EAX));
  /* 109d16ec push 1 */
  push32((uint32_t)(0x1u));
  /* 109d16ee push 0x109d1720 */
  push32((uint32_t)(0x109d1720u));
  /* 109d16f3 call dword ptr [0x109f42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42cc))), 0x109d16f9u);
  /* 109d16f9 mov ecx, dword ptr [0x109f1904] */
  ECX = (r32((uint32_t)(0x109f1904)));
  /* 109d16ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109d1702 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d1704 jne 0x109d1710 */
  if (!C.zf) goto L_109d1710;
  /* 109d1706 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
L_109d1710:;
  /* 109d1710 mov esp, ebp */
  ESP = (EBP);
  /* 109d1712 pop ebp */
  EBP = (pop32());
  /* 109d1713 ret  */
  ESPCHK(0x109d16a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011720 @ 0x109d1720 (287 bytes, 86 insns) */
void f_109d1720(void) {
  FTRACE(0x109d1720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1720 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1721 mov ebp, esp */
  EBP = (ESP);
  /* 109d1723 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1729 push eax */
  push32((uint32_t)(EAX));
  /* 109d172a call 0x109d1cd0 */
  push32(0x109d172fu); f_109d1cd0();
  /* 109d172f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1732 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 109d1735 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d1737 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d173a push ecx */
  push32((uint32_t)(ECX));
  /* 109d173b mov edx, dword ptr [0x109f18f8] */
  EDX = (r32((uint32_t)(0x109f18f8)));
  /* 109d1741 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d1743 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1745 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 109d174b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1751 push edx */
  push32((uint32_t)(EDX));
  /* 109d1752 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d1755 push eax */
  push32((uint32_t)(EAX));
  /* 109d1756 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d175cu);
  /* 109d175c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d175e jne 0x109d1774 */
  if (!C.zf) goto L_109d1774;
  /* 109d1760 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d176a mov eax, 1 */
  EAX = (0x1u);
  /* 109d176f jmp 0x109d1839 */
  goto L_109d1839;
L_109d1774:;
  /* 109d1774 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d1777 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1778 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d177e push edx */
  push32((uint32_t)(EDX));
  /* 109d177f call 0x109d3910 */
  push32(0x109d1784u); f_109d3910();
  /* 109d1784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1789 jne 0x109d17c9 */
  if (!C.zf) goto L_109d17c9;
  /* 109d178b cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1792 jne 0x109d17a6 */
  if (!C.zf) goto L_109d17a6;
  /* 109d1794 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1796 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d1799 push eax */
  push32((uint32_t)(EAX));
  /* 109d179a call 0x109d1a60 */
  push32(0x109d179fu); f_109d1a60();
  /* 109d179f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d17a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d17a4 je 0x109d17c7 */
  if (C.zf) goto L_109d17c7;
L_109d17a6:;
  /* 109d17a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d17a9 mov dword ptr [0x109f1908], ecx */
  w32((uint32_t)(0x109f1908), (ECX));
  /* 109d17af mov edx, dword ptr [0x109f1908] */
  EDX = (r32((uint32_t)(0x109f1908)));
  /* 109d17b5 mov dword ptr [0x109f18ec], edx */
  w32((uint32_t)(0x109f18ec), (EDX));
  /* 109d17bb mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d17c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 109d17c2 mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
L_109d17c7:;
  /* 109d17c7 jmp 0x109d182c */
  goto L_109d182c;
L_109d17c9:;
  /* 109d17c9 cmp dword ptr [0x109f18f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d17d0 jne 0x109d182c */
  if (!C.zf) goto L_109d182c;
  /* 109d17d2 cmp dword ptr [0x109f18f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f18f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d17d9 je 0x109d182c */
  if (C.zf) goto L_109d182c;
  /* 109d17db mov ecx, dword ptr [0x109f18f4] */
  ECX = (r32((uint32_t)(0x109f18f4)));
  /* 109d17e1 push ecx */
  push32((uint32_t)(ECX));
  /* 109d17e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 109d17e5 push edx */
  push32((uint32_t)(EDX));
  /* 109d17e6 mov eax, dword ptr [0x109f18fc] */
  EAX = (r32((uint32_t)(0x109f18fc)));
  /* 109d17eb push eax */
  push32((uint32_t)(EAX));
  /* 109d17ec call 0x109d39e0 */
  push32(0x109d17f1u); f_109d39e0();
  /* 109d17f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d17f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d17f6 jne 0x109d182c */
  if (!C.zf) goto L_109d182c;
  /* 109d17f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d17fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d17fd push ecx */
  push32((uint32_t)(ECX));
  /* 109d17fe call 0x109d1a60 */
  push32(0x109d1803u); f_109d1a60();
  /* 109d1803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1808 je 0x109d182c */
  if (C.zf) goto L_109d182c;
  /* 109d180a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d180d mov dword ptr [0x109f1908], edx */
  w32((uint32_t)(0x109f1908), (EDX));
  /* 109d1813 mov eax, dword ptr [0x109f1908] */
  EAX = (r32((uint32_t)(0x109f1908)));
  /* 109d1818 mov dword ptr [0x109f18ec], eax */
  w32((uint32_t)(0x109f18ec), (EAX));
  /* 109d181d mov ecx, dword ptr [0x109f1904] */
  ECX = (r32((uint32_t)(0x109f1904)));
  /* 109d1823 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109d1826 mov dword ptr [0x109f1904], ecx */
  w32((uint32_t)(0x109f1904), (ECX));
L_109d182c:;
  /* 109d182c mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1831 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109d1834 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d1836 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1838 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109d1839:;
  /* 109d1839 mov esp, ebp */
  ESP = (EBP);
  /* 109d183b pop ebp */
  EBP = (pop32());
  /* 109d183c ret 4 */
  ESPCHK(0x109d1720u, _esp0);
  ESP += 8; return;
}

/* FUN_10011840 @ 0x109d1840 (69 bytes, 20 insns) */
void f_109d1840(void) {
  FTRACE(0x109d1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1840 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1841 mov ebp, esp */
  EBP = (ESP);
  /* 109d1843 mov eax, dword ptr [0x109f1900] */
  EAX = (r32((uint32_t)(0x109f1900)));
  /* 109d1848 push eax */
  push32((uint32_t)(EAX));
  /* 109d1849 call 0x109c8070 */
  push32(0x109d184eu); f_109c8070();
  /* 109d184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1851 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d1853 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1856 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 109d1859 mov dword ptr [0x109f18f0], ecx */
  w32((uint32_t)(0x109f18f0), (ECX));
  /* 109d185f push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1861 push 0x109d1890 */
  push32((uint32_t)(0x109d1890u));
  /* 109d1866 call dword ptr [0x109f42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42cc))), 0x109d186cu);
  /* 109d186c mov edx, dword ptr [0x109f1904] */
  EDX = (r32((uint32_t)(0x109f1904)));
  /* 109d1872 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109d1875 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d1877 jne 0x109d1883 */
  if (!C.zf) goto L_109d1883;
  /* 109d1879 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
L_109d1883:;
  /* 109d1883 pop ebp */
  EBP = (pop32());
  /* 109d1884 ret  */
  ESPCHK(0x109d1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x109d1890 (172 bytes, 54 insns) */
void f_109d1890(void) {
  FTRACE(0x109d1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1890 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1891 mov ebp, esp */
  EBP = (ESP);
  /* 109d1893 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1899 push eax */
  push32((uint32_t)(EAX));
  /* 109d189a call 0x109d1cd0 */
  push32(0x109d189fu); f_109d1cd0();
  /* 109d189f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d18a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 109d18a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d18a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d18aa push ecx */
  push32((uint32_t)(ECX));
  /* 109d18ab mov edx, dword ptr [0x109f18f0] */
  EDX = (r32((uint32_t)(0x109f18f0)));
  /* 109d18b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d18b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d18b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 109d18bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d18c1 push edx */
  push32((uint32_t)(EDX));
  /* 109d18c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d18c5 push eax */
  push32((uint32_t)(EAX));
  /* 109d18c6 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d18ccu);
  /* 109d18cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d18ce jne 0x109d18e1 */
  if (!C.zf) goto L_109d18e1;
  /* 109d18d0 mov dword ptr [0x109f1904], 0 */
  w32((uint32_t)(0x109f1904), (0x0u));
  /* 109d18da mov eax, 1 */
  EAX = (0x1u);
  /* 109d18df jmp 0x109d1936 */
  goto L_109d1936;
L_109d18e1:;
  /* 109d18e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 109d18e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109d18e5 mov edx, dword ptr [0x109f1900] */
  EDX = (r32((uint32_t)(0x109f1900)));
  /* 109d18eb push edx */
  push32((uint32_t)(EDX));
  /* 109d18ec call 0x109d3910 */
  push32(0x109d18f1u); f_109d3910();
  /* 109d18f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d18f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d18f6 jne 0x109d1929 */
  if (!C.zf) goto L_109d1929;
  /* 109d18f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d18fb push eax */
  push32((uint32_t)(EAX));
  /* 109d18fc call 0x109d1a10 */
  push32(0x109d1901u); f_109d1a10();
  /* 109d1901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1906 je 0x109d1929 */
  if (C.zf) goto L_109d1929;
  /* 109d1908 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 109d190b mov dword ptr [0x109f1908], ecx */
  w32((uint32_t)(0x109f1908), (ECX));
  /* 109d1911 mov edx, dword ptr [0x109f1908] */
  EDX = (r32((uint32_t)(0x109f1908)));
  /* 109d1917 mov dword ptr [0x109f18ec], edx */
  w32((uint32_t)(0x109f18ec), (EDX));
  /* 109d191d mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1922 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 109d1924 mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
L_109d1929:;
  /* 109d1929 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d192e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109d1931 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109d1933 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1935 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109d1936:;
  /* 109d1936 mov esp, ebp */
  ESP = (EBP);
  /* 109d1938 pop ebp */
  EBP = (pop32());
  /* 109d1939 ret 4 */
  ESPCHK(0x109d1890u, _esp0);
  ESP += 8; return;
}

/* FUN_10011940 @ 0x109d1940 (43 bytes, 11 insns) */
void f_109d1940(void) {
  FTRACE(0x109d1940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1940 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1941 mov ebp, esp */
  EBP = (ESP);
  /* 109d1943 mov eax, dword ptr [0x109f1904] */
  EAX = (r32((uint32_t)(0x109f1904)));
  /* 109d1948 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 109d194d mov dword ptr [0x109f1904], eax */
  w32((uint32_t)(0x109f1904), (EAX));
  /* 109d1952 call dword ptr [0x109f42bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42bc))), 0x109d1958u);
  /* 109d1958 mov dword ptr [0x109f1908], eax */
  w32((uint32_t)(0x109f1908), (EAX));
  /* 109d195d mov ecx, dword ptr [0x109f1908] */
  ECX = (r32((uint32_t)(0x109f1908)));
  /* 109d1963 mov dword ptr [0x109f18ec], ecx */
  w32((uint32_t)(0x109f18ec), (ECX));
  /* 109d1969 pop ebp */
  EBP = (pop32());
  /* 109d196a ret  */
  ESPCHK(0x109d1940u, _esp0);
  ESP += 4; return;
}

/* FUN_10011970 @ 0x109d1970 (155 bytes, 57 insns) */
void f_109d1970(void) {
  FTRACE(0x109d1970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1970 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1971 mov ebp, esp */
  EBP = (ESP);
  /* 109d1973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1976 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d197a je 0x109d199b */
  if (C.zf) goto L_109d199b;
  /* 109d197c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d197f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109d1982 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d1984 je 0x109d199b */
  if (C.zf) goto L_109d199b;
  /* 109d1986 push 0x109eda04 */
  push32((uint32_t)(0x109eda04u));
  /* 109d198b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d198e push edx */
  push32((uint32_t)(EDX));
  /* 109d198f call 0x109d0ed0 */
  push32(0x109d1994u); f_109d0ed0();
  /* 109d1994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1999 jne 0x109d19c3 */
  if (!C.zf) goto L_109d19c3;
L_109d199b:;
  /* 109d199b push 8 */
  push32((uint32_t)(0x8u));
  /* 109d199d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109d19a0 push eax */
  push32((uint32_t)(EAX));
  /* 109d19a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 109d19a6 mov ecx, dword ptr [0x109f1908] */
  ECX = (r32((uint32_t)(0x109f1908)));
  /* 109d19ac push ecx */
  push32((uint32_t)(ECX));
  /* 109d19ad call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d19b3u);
  /* 109d19b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d19b5 jne 0x109d19bb */
  if (!C.zf) goto L_109d19bb;
  /* 109d19b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d19b9 jmp 0x109d1a07 */
  goto L_109d1a07;
L_109d19bb:;
  /* 109d19bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 109d19be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109d19c1 jmp 0x109d19fb */
  goto L_109d19fb;
L_109d19c3:;
  /* 109d19c3 push 0x109eda00 */
  push32((uint32_t)(0x109eda00u));
  /* 109d19c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d19cb push eax */
  push32((uint32_t)(EAX));
  /* 109d19cc call 0x109d0ed0 */
  push32(0x109d19d1u); f_109d0ed0();
  /* 109d19d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d19d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d19d6 jne 0x109d19fb */
  if (!C.zf) goto L_109d19fb;
  /* 109d19d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 109d19da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 109d19dd push ecx */
  push32((uint32_t)(ECX));
  /* 109d19de push 0xb */
  push32((uint32_t)(0xbu));
  /* 109d19e0 mov edx, dword ptr [0x109f1908] */
  EDX = (r32((uint32_t)(0x109f1908)));
  /* 109d19e6 push edx */
  push32((uint32_t)(EDX));
  /* 109d19e7 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d19edu);
  /* 109d19ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d19ef jne 0x109d19f5 */
  if (!C.zf) goto L_109d19f5;
  /* 109d19f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d19f3 jmp 0x109d1a07 */
  goto L_109d1a07;
L_109d19f5:;
  /* 109d19f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109d19f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109d19fb:;
  /* 109d19fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d19fe push ecx */
  push32((uint32_t)(ECX));
  /* 109d19ff call 0x109d3af0 */
  push32(0x109d1a04u); f_109d3af0();
  /* 109d1a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109d1a07:;
  /* 109d1a07 mov esp, ebp */
  ESP = (EBP);
  /* 109d1a09 pop ebp */
  EBP = (pop32());
  /* 109d1a0a ret  */
  ESPCHK(0x109d1970u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x109d1a10 (79 bytes, 26 insns) */
void f_109d1a10(void) {
  FTRACE(0x109d1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1a11 mov ebp, esp */
  EBP = (ESP);
  /* 109d1a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1a16 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 109d1a1a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 109d1a1e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d1a25 jmp 0x109d1a30 */
  goto L_109d1a30;
L_109d1a27:;
  /* 109d1a27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1a2a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1a2d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109d1a30:;
  /* 109d1a30 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1a34 jae 0x109d1a56 */
  if (!C.cf) goto L_109d1a56;
  /* 109d1a36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1a39 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109d1a3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1a42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109d1a44 mov cx, word ptr [eax*2 + 0x109f09c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x109f09c4)));
  /* 109d1a4c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1a4e jne 0x109d1a54 */
  if (!C.zf) goto L_109d1a54;
  /* 109d1a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a52 jmp 0x109d1a5b */
  goto L_109d1a5b;
L_109d1a54:;
  /* 109d1a54 jmp 0x109d1a27 */
  goto L_109d1a27;
L_109d1a56:;
  /* 109d1a56 mov eax, 1 */
  EAX = (0x1u);
L_109d1a5b:;
  /* 109d1a5b mov esp, ebp */
  ESP = (EBP);
  /* 109d1a5d pop ebp */
  EBP = (pop32());
  /* 109d1a5e ret  */
  ESPCHK(0x109d1a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x109d1a60 (135 bytes, 48 insns) */
void f_109d1a60(void) {
  FTRACE(0x109d1a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1a60 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1a61 mov ebp, esp */
  EBP = (ESP);
  /* 109d1a63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1a66 push esi */
  push32((uint32_t)(ESI));
  /* 109d1a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1a6a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a6f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a79 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 109d1a7c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d1a84 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109d1a86 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 109d1a89 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1a8f push edx */
  push32((uint32_t)(EDX));
  /* 109d1a90 call dword ptr [0x109f190c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f190c))), 0x109d1a96u);
  /* 109d1a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1a98 jne 0x109d1a9e */
  if (!C.zf) goto L_109d1a9e;
  /* 109d1a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1a9c jmp 0x109d1ae2 */
  goto L_109d1ae2;
L_109d1a9e:;
  /* 109d1a9e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 109d1aa1 push eax */
  push32((uint32_t)(EAX));
  /* 109d1aa2 call 0x109d1cd0 */
  push32(0x109d1aa7u); f_109d1cd0();
  /* 109d1aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1aaa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1aad je 0x109d1add */
  if (C.zf) goto L_109d1add;
  /* 109d1aaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1ab3 je 0x109d1add */
  if (C.zf) goto L_109d1add;
  /* 109d1ab5 mov ecx, dword ptr [0x109f18fc] */
  ECX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1abb push ecx */
  push32((uint32_t)(ECX));
  /* 109d1abc call 0x109d1d50 */
  push32(0x109d1ac1u); f_109d1d50();
  /* 109d1ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1ac4 mov esi, eax */
  ESI = (EAX);
  /* 109d1ac6 mov edx, dword ptr [0x109f18fc] */
  EDX = (r32((uint32_t)(0x109f18fc)));
  /* 109d1acc push edx */
  push32((uint32_t)(EDX));
  /* 109d1acd call 0x109c8070 */
  push32(0x109d1ad2u); f_109c8070();
  /* 109d1ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1ad5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1ad7 jne 0x109d1add */
  if (!C.zf) goto L_109d1add;
  /* 109d1ad9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1adb jmp 0x109d1ae2 */
  goto L_109d1ae2;
L_109d1add:;
  /* 109d1add mov eax, 1 */
  EAX = (0x1u);
L_109d1ae2:;
  /* 109d1ae2 pop esi */
  ESI = (pop32());
  /* 109d1ae3 mov esp, ebp */
  ESP = (EBP);
  /* 109d1ae5 pop ebp */
  EBP = (pop32());
  /* 109d1ae6 ret  */
  ESPCHK(0x109d1a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x109d1af0 (77 bytes, 18 insns) */
void f_109d1af0(void) {
  FTRACE(0x109d1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1af1 mov ebp, esp */
  EBP = (ESP);
  /* 109d1af3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1af9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 109d1b03 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 109d1b09 push eax */
  push32((uint32_t)(EAX));
  /* 109d1b0a call dword ptr [0x109f42b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42b8))), 0x109d1b10u);
  /* 109d1b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1b12 je 0x109d1b29 */
  if (C.zf) goto L_109d1b29;
  /* 109d1b14 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1b1b jne 0x109d1b29 */
  if (!C.zf) goto L_109d1b29;
  /* 109d1b1d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 109d1b27 jmp 0x109d1b33 */
  goto L_109d1b33;
L_109d1b29:;
  /* 109d1b29 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_109d1b33:;
  /* 109d1b33 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 109d1b39 mov esp, ebp */
  ESP = (EBP);
  /* 109d1b3b pop ebp */
  EBP = (pop32());
  /* 109d1b3c ret  */
  ESPCHK(0x109d1af0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x109d1b40 (388 bytes, 118 insns) */
void f_109d1b40(void) {
  FTRACE(0x109d1b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1b40 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1b41 mov ebp, esp */
  EBP = (ESP);
  /* 109d1b43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1b46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 109d1b4d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 109d1b54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109d1b5b:;
  /* 109d1b5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d1b5e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1b61 jg 0x109d1ca8 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d1ca8;
  /* 109d1b67 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109d1b6a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1b6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 109d1b6e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1b70 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109d1b72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109d1b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1b78 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1b7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1b7e cmp edx, dword ptr [ecx + 0x109f0520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x109f0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1b84 jne 0x109d1c7e */
  if (!C.zf) goto L_109d1c7e;
  /* 109d1b8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d1b8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109d1b90 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1b94 ja 0x109d1bb7 */
  if ((!C.cf&&!C.zf)) goto L_109d1bb7;
  /* 109d1b96 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1b9a je 0x109d1c29 */
  if (C.zf) goto L_109d1c29;
  /* 109d1ba0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1ba4 je 0x109d1bd4 */
  if (C.zf) goto L_109d1bd4;
  /* 109d1ba6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1baa je 0x109d1bf6 */
  if (C.zf) goto L_109d1bf6;
  /* 109d1bac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1bb0 je 0x109d1c18 */
  if (C.zf) goto L_109d1c18;
  /* 109d1bb2 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1bb7:;
  /* 109d1bb7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1bbe je 0x109d1be5 */
  if (C.zf) goto L_109d1be5;
  /* 109d1bc0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1bc7 je 0x109d1c07 */
  if (C.zf) goto L_109d1c07;
  /* 109d1bc9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1bd0 je 0x109d1c3a */
  if (C.zf) goto L_109d1c3a;
  /* 109d1bd2 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1bd4:;
  /* 109d1bd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1bd7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1bda add ecx, 0x109f0524 */
  { uint32_t _a=(ECX),_b=(0x109f0524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d1be3 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1be5:;
  /* 109d1be5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1be8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1beb mov eax, dword ptr [edx + 0x109f052c] */
  EAX = (r32((uint32_t)(EDX + 0x109f052c)));
  /* 109d1bf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d1bf4 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1bf6:;
  /* 109d1bf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1bf9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1bfc add ecx, 0x109f0530 */
  { uint32_t _a=(ECX),_b=(0x109f0530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c02 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d1c05 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1c07:;
  /* 109d1c07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c0a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1c0d mov eax, dword ptr [edx + 0x109f0534] */
  EAX = (r32((uint32_t)(EDX + 0x109f0534)));
  /* 109d1c13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109d1c16 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1c18:;
  /* 109d1c18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c1b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1c1e add ecx, 0x109f0538 */
  { uint32_t _a=(ECX),_b=(0x109f0538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d1c27 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1c29:;
  /* 109d1c29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c2c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1c2f add edx, 0x109f053c */
  { uint32_t _a=(EDX),_b=(0x109f053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c35 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109d1c38 jmp 0x109d1c48 */
  goto L_109d1c48;
L_109d1c3a:;
  /* 109d1c3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c3d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1c40 add eax, 0x109f0544 */
  { uint32_t _a=(EAX),_b=(0x109f0544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109d1c48:;
  /* 109d1c48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1c4c je 0x109d1c54 */
  if (C.zf) goto L_109d1c54;
  /* 109d1c4e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1c52 jge 0x109d1c56 */
  if ((C.sf==C.of)) goto L_109d1c56;
L_109d1c54:;
  /* 109d1c54 jmp 0x109d1ca8 */
  goto L_109d1ca8;
L_109d1c56:;
  /* 109d1c56 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d1c59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1c5c push ecx */
  push32((uint32_t)(ECX));
  /* 109d1c5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1c60 push edx */
  push32((uint32_t)(EDX));
  /* 109d1c61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d1c64 push eax */
  push32((uint32_t)(EAX));
  /* 109d1c65 call 0x109c8a60 */
  push32(0x109d1c6au); f_109c8a60();
  /* 109d1c6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d1c70 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1c73 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 109d1c77 mov eax, 1 */
  EAX = (0x1u);
  /* 109d1c7c jmp 0x109d1cbe */
  goto L_109d1cbe;
L_109d1c7e:;
  /* 109d1c7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c81 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1c87 cmp eax, dword ptr [edx + 0x109f0520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x109f0520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1c8d jae 0x109d1c9a */
  if (!C.cf) goto L_109d1c9a;
  /* 109d1c8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c92 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1c95 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109d1c98 jmp 0x109d1ca3 */
  goto L_109d1ca3;
L_109d1c9a:;
  /* 109d1c9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109d1c9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1ca0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_109d1ca3:;
  /* 109d1ca3 jmp 0x109d1b5b */
  goto L_109d1b5b;
L_109d1ca8:;
  /* 109d1ca8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109d1cab push eax */
  push32((uint32_t)(EAX));
  /* 109d1cac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109d1caf push ecx */
  push32((uint32_t)(ECX));
  /* 109d1cb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109d1cb3 push edx */
  push32((uint32_t)(EDX));
  /* 109d1cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1cb7 push eax */
  push32((uint32_t)(EAX));
  /* 109d1cb8 call dword ptr [0x109f42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c4))), 0x109d1cbeu);
L_109d1cbe:;
  /* 109d1cbe mov esp, ebp */
  ESP = (EBP);
  /* 109d1cc0 pop ebp */
  EBP = (pop32());
  /* 109d1cc1 ret 0x10 */
  ESPCHK(0x109d1b40u, _esp0);
  ESP += 20; return;
}

/* FUN_10011cd0 @ 0x109d1cd0 (118 bytes, 42 insns) */
void f_109d1cd0(void) {
  FTRACE(0x109d1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 109d1cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1cd6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109d1cdd:;
  /* 109d1cdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1ce0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d1ce2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 109d1ce5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1ce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1cec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1cef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109d1cf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d1cf4 je 0x109d1d3f */
  if (C.zf) goto L_109d1d3f;
  /* 109d1cf6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1cfa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1cfd jl 0x109d1d12 */
  if ((C.sf!=C.of)) goto L_109d1d12;
  /* 109d1cff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1d03 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d06 jg 0x109d1d12 */
  if ((!C.zf&&C.sf==C.of)) goto L_109d1d12;
  /* 109d1d08 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 109d1d0b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d1d0d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 109d1d10 jmp 0x109d1d2c */
  goto L_109d1d2c;
L_109d1d12:;
  /* 109d1d12 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1d16 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d19 jl 0x109d1d2c */
  if ((C.sf!=C.of)) goto L_109d1d2c;
  /* 109d1d1b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1d1f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d22 jg 0x109d1d2c */
  if ((!C.zf&&C.sf==C.of)) goto L_109d1d2c;
  /* 109d1d24 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 109d1d27 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109d1d29 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_109d1d2c:;
  /* 109d1d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1d2f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109d1d32 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 109d1d36 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 109d1d3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d1d3d jmp 0x109d1cdd */
  goto L_109d1cdd;
L_109d1d3f:;
  /* 109d1d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1d42 mov esp, ebp */
  ESP = (EBP);
  /* 109d1d44 pop ebp */
  EBP = (pop32());
  /* 109d1d45 ret  */
  ESPCHK(0x109d1cd0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x109d1d50 (101 bytes, 36 insns) */
void f_109d1d50(void) {
  FTRACE(0x109d1d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1d50 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1d51 mov ebp, esp */
  EBP = (ESP);
  /* 109d1d53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109d1d56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109d1d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1d60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109d1d62 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 109d1d65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1d68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1d6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_109d1d6e:;
  /* 109d1d6e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109d1d72 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d75 jl 0x109d1d80 */
  if ((C.sf!=C.of)) goto L_109d1d80;
  /* 109d1d77 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109d1d7b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d7e jle 0x109d1d92 */
  if ((C.zf||C.sf!=C.of)) goto L_109d1d92;
L_109d1d80:;
  /* 109d1d80 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109d1d84 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d87 jl 0x109d1dae */
  if ((C.sf!=C.of)) goto L_109d1dae;
  /* 109d1d89 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 109d1d8d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1d90 jg 0x109d1dae */
  if ((!C.zf&&C.sf==C.of)) goto L_109d1dae;
L_109d1d92:;
  /* 109d1d92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1d95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1d98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109d1d9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1d9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109d1da0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 109d1da3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1da6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1da9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 109d1dac jmp 0x109d1d6e */
  goto L_109d1d6e;
L_109d1dae:;
  /* 109d1dae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109d1db1 mov esp, ebp */
  ESP = (EBP);
  /* 109d1db3 pop ebp */
  EBP = (pop32());
  /* 109d1db4 ret  */
  ESPCHK(0x109d1d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x109d1dc0 (122 bytes, 39 insns) */
void f_109d1dc0(void) {
  FTRACE(0x109d1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 109d1dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1dc7 cmp eax, dword ptr [0x109f319c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109f319c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1dcd jae 0x109d1df1 */
  if (!C.cf) goto L_109d1df1;
  /* 109d1dcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1dd2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109d1dd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1dd8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 109d1ddb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1dde mov eax, dword ptr [ecx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109d1de5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 109d1dea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109d1ded test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d1def jne 0x109d1e0c */
  if (!C.zf) goto L_109d1e0c;
L_109d1df1:;
  /* 109d1df1 call 0x109cd110 */
  push32(0x109d1df6u); f_109cd110();
  /* 109d1df6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 109d1dfc call 0x109cd120 */
  push32(0x109d1e01u); f_109cd120();
  /* 109d1e01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109d1e07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1e0a jmp 0x109d1e36 */
  goto L_109d1e36;
L_109d1e0c:;
  /* 109d1e0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1e0f push edx */
  push32((uint32_t)(EDX));
  /* 109d1e10 call 0x109ce930 */
  push32(0x109d1e15u); f_109ce930();
  /* 109d1e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1e1b push eax */
  push32((uint32_t)(EAX));
  /* 109d1e1c call 0x109d1e40 */
  push32(0x109d1e21u); f_109d1e40();
  /* 109d1e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109d1e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1e2a push ecx */
  push32((uint32_t)(ECX));
  /* 109d1e2b call 0x109ce9c0 */
  push32(0x109d1e30u); f_109ce9c0();
  /* 109d1e30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109d1e36:;
  /* 109d1e36 mov esp, ebp */
  ESP = (EBP);
  /* 109d1e38 pop ebp */
  EBP = (pop32());
  /* 109d1e39 ret  */
  ESPCHK(0x109d1dc0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x109d1e40 (170 bytes, 59 insns) */
void f_109d1e40(void) {
  FTRACE(0x109d1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1e41 mov ebp, esp */
  EBP = (ESP);
  /* 109d1e43 push ecx */
  push32((uint32_t)(ECX));
  /* 109d1e44 push esi */
  push32((uint32_t)(ESI));
  /* 109d1e45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1e48 push eax */
  push32((uint32_t)(EAX));
  /* 109d1e49 call 0x109ce7b0 */
  push32(0x109d1e4eu); f_109ce7b0();
  /* 109d1e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e51 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1e54 je 0x109d1e93 */
  if (C.zf) goto L_109d1e93;
  /* 109d1e56 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1e5a je 0x109d1e62 */
  if (C.zf) goto L_109d1e62;
  /* 109d1e5c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1e60 jne 0x109d1e7c */
  if (!C.zf) goto L_109d1e7c;
L_109d1e62:;
  /* 109d1e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 109d1e64 call 0x109ce7b0 */
  push32(0x109d1e69u); f_109ce7b0();
  /* 109d1e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e6c mov esi, eax */
  ESI = (EAX);
  /* 109d1e6e push 2 */
  push32((uint32_t)(0x2u));
  /* 109d1e70 call 0x109ce7b0 */
  push32(0x109d1e75u); f_109ce7b0();
  /* 109d1e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e78 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1e7a je 0x109d1e93 */
  if (C.zf) goto L_109d1e93;
L_109d1e7c:;
  /* 109d1e7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1e7f push ecx */
  push32((uint32_t)(ECX));
  /* 109d1e80 call 0x109ce7b0 */
  push32(0x109d1e85u); f_109ce7b0();
  /* 109d1e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1e88 push eax */
  push32((uint32_t)(EAX));
  /* 109d1e89 call dword ptr [0x109f42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42c0))), 0x109d1e8fu);
  /* 109d1e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1e91 je 0x109d1e9c */
  if (C.zf) goto L_109d1e9c;
L_109d1e93:;
  /* 109d1e93 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109d1e9a jmp 0x109d1ea5 */
  goto L_109d1ea5;
L_109d1e9c:;
  /* 109d1e9c call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109d1ea2u);
  /* 109d1ea2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109d1ea5:;
  /* 109d1ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1ea8 push edx */
  push32((uint32_t)(EDX));
  /* 109d1ea9 call 0x109ce6d0 */
  push32(0x109d1eaeu); f_109ce6d0();
  /* 109d1eae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1eb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1eb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109d1eb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1eba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109d1ebd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109d1ec0 mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109d1ec7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 109d1ecc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1ed0 je 0x109d1ee3 */
  if (C.zf) goto L_109d1ee3;
  /* 109d1ed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109d1ed5 push eax */
  push32((uint32_t)(EAX));
  /* 109d1ed6 call 0x109cd070 */
  push32(0x109d1edbu); f_109cd070();
  /* 109d1edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1ede or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109d1ee1 jmp 0x109d1ee5 */
  goto L_109d1ee5;
L_109d1ee3:;
  /* 109d1ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109d1ee5:;
  /* 109d1ee5 pop esi */
  ESI = (pop32());
  /* 109d1ee6 mov esp, ebp */
  ESP = (EBP);
  /* 109d1ee8 pop ebp */
  EBP = (pop32());
  /* 109d1ee9 ret  */
  ESPCHK(0x109d1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x109d1ef0 (146 bytes, 52 insns) */
void f_109d1ef0(void) {
  FTRACE(0x109d1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109d1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 109d1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 109d1ef3 push ebx */
  push32((uint32_t)(EBX));
  /* 109d1ef4 push esi */
  push32((uint32_t)(ESI));
  /* 109d1ef5 push edi */
  push32((uint32_t)(EDI));
L_109d1ef6:;
  /* 109d1ef6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1efa jne 0x109d1f1a */
  if (!C.zf) goto L_109d1f1a;
  /* 109d1efc push 0x109ed340 */
  push32((uint32_t)(0x109ed340u));
  /* 109d1f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 109d1f03 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 109d1f05 push 0x109eda08 */
  push32((uint32_t)(0x109eda08u));
  /* 109d1f0a push 2 */
  push32((uint32_t)(0x2u));
  /* 109d1f0c call 0x109c4300 */
  push32(0x109d1f11u); f_109c4300();
  /* 109d1f11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1f14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109d1f17 jne 0x109d1f1a */
  if (!C.zf) goto L_109d1f1a;
  /* 109d1f19 int3  */
  x86_unimpl("int3 @ 0x109d1f19");
L_109d1f1a:;
  /* 109d1f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109d1f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109d1f1e jne 0x109d1ef6 */
  if (!C.zf) goto L_109d1ef6;
  /* 109d1f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109d1f26 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 109d1f2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109d1f2e je 0x109d1f7d */
  if (C.zf) goto L_109d1f7d;
  /* 109d1f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f33 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109d1f36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 109d1f39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109d1f3b je 0x109d1f7d */
  if (C.zf) goto L_109d1f7d;
  /* 109d1f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 109d1f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109d1f45 push eax */
  push32((uint32_t)(EAX));
  /* 109d1f46 call 0x109c5cd0 */
  push32(0x109d1f4bu); f_109c5cd0();
  /* 109d1f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109d1f4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f51 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109d1f54 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 109d1f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f5d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 109d1f60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f63 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 109d1f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f6c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 109d1f73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109d1f76 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_109d1f7d:;
  /* 109d1f7d pop edi */
  EDI = (pop32());
  /* 109d1f7e pop esi */
  ESI = (pop32());
  /* 109d1f7f pop ebx */
  EBX = (pop32());
  /* 109d1f80 pop ebp */
  EBP = (pop32());
  /* 109d1f81 ret  */
  ESPCHK(0x109d1ef0u, _esp0);
  ESP += 4; return;
}

