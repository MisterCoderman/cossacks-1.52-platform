#include "recomp.h"

/* FUN_10016220 @ 0x114d6220 (61 bytes, 18 insns) */
void f_114d6220(void) {
  FTRACE(0x114d6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6220 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6221 mov ebp, esp */
  EBP = (ESP);
  /* 114d6223 cmp dword ptr [0x114ff3e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d622a jne 0x114d625b */
  if (!C.zf) goto L_114d625b;
  /* 114d622c push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d622e call 0x114cb800 */
  push32(0x114d6233u); f_114cb800();
  /* 114d6233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6236 cmp dword ptr [0x114ff3e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d623d jne 0x114d6251 */
  if (!C.zf) goto L_114d6251;
  /* 114d623f call 0x114d6280 */
  push32(0x114d6244u); f_114d6280();
  /* 114d6244 mov eax, dword ptr [0x114ff3e8] */
  EAX = (r32((uint32_t)(0x114ff3e8)));
  /* 114d6249 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d624c mov dword ptr [0x114ff3e8], eax */
  w32((uint32_t)(0x114ff3e8), (EAX));
L_114d6251:;
  /* 114d6251 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d6253 call 0x114cb8a0 */
  push32(0x114d6258u); f_114cb8a0();
  /* 114d6258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d625b:;
  /* 114d625b pop ebp */
  EBP = (pop32());
  /* 114d625c ret  */
  ESPCHK(0x114d6220u, _esp0);
  ESP += 4; return;
}

/* FUN_10016260 @ 0x114d6260 (30 bytes, 11 insns) */
void f_114d6260(void) {
  FTRACE(0x114d6260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6260 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6261 mov ebp, esp */
  EBP = (ESP);
  /* 114d6263 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d6265 call 0x114cb800 */
  push32(0x114d626au); f_114cb800();
  /* 114d626a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d626d call 0x114d6280 */
  push32(0x114d6272u); f_114d6280();
  /* 114d6272 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d6274 call 0x114cb8a0 */
  push32(0x114d6279u); f_114cb8a0();
  /* 114d6279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d627c pop ebp */
  EBP = (pop32());
  /* 114d627d ret  */
  ESPCHK(0x114d6260u, _esp0);
  ESP += 4; return;
}

/* FUN_10016280 @ 0x114d6280 (939 bytes, 266 insns) */
void f_114d6280(void) {
  FTRACE(0x114d6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6280 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6281 mov ebp, esp */
  EBP = (ESP);
  /* 114d6283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6286 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d628d push 0xc */
  push32((uint32_t)(0xcu));
  /* 114d628f call 0x114cb800 */
  push32(0x114d6294u); f_114cb800();
  /* 114d6294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6297 mov dword ptr [0x114ff330], 0 */
  w32((uint32_t)(0x114ff330), (0x0u));
  /* 114d62a1 mov dword ptr [0x114fd658], 0xffffffff */
  w32((uint32_t)(0x114fd658), (0xffffffffu));
  /* 114d62ab mov eax, dword ptr [0x114fd658] */
  EAX = (r32((uint32_t)(0x114fd658)));
  /* 114d62b0 mov dword ptr [0x114fd648], eax */
  w32((uint32_t)(0x114fd648), (EAX));
  /* 114d62b5 push 0x114fa350 */
  push32((uint32_t)(0x114fa350u));
  /* 114d62ba call 0x114db3c0 */
  push32(0x114d62bfu); f_114db3c0();
  /* 114d62bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d62c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d62c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d62c9 jne 0x114d6403 */
  if (!C.zf) goto L_114d6403;
  /* 114d62cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 114d62d1 call 0x114cb8a0 */
  push32(0x114d62d6u); f_114cb8a0();
  /* 114d62d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d62d9 push 0x114ff338 */
  push32((uint32_t)(0x114ff338u));
  /* 114d62de call dword ptr [0x11501400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501400))), 0x114d62e4u);
  /* 114d62e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d62e7 je 0x114d63fe */
  if (C.zf) goto L_114d63fe;
  /* 114d62ed mov dword ptr [0x114ff330], 1 */
  w32((uint32_t)(0x114ff330), (0x1u));
  /* 114d62f7 mov ecx, dword ptr [0x114ff338] */
  ECX = (r32((uint32_t)(0x114ff338)));
  /* 114d62fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6300 mov dword ptr [0x114fd5b0], ecx */
  w32((uint32_t)(0x114fd5b0), (ECX));
  /* 114d6306 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6308 mov dx, word ptr [0x114ff37e] */
  DX = (r16((uint32_t)(0x114ff37e)));
  /* 114d630f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d6311 je 0x114d6329 */
  if (C.zf) goto L_114d6329;
  /* 114d6313 mov eax, dword ptr [0x114ff38c] */
  EAX = (r32((uint32_t)(0x114ff38c)));
  /* 114d6318 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d631b mov ecx, dword ptr [0x114fd5b0] */
  ECX = (r32((uint32_t)(0x114fd5b0)));
  /* 114d6321 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6323 mov dword ptr [0x114fd5b0], ecx */
  w32((uint32_t)(0x114fd5b0), (ECX));
L_114d6329:;
  /* 114d6329 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d632b mov dx, word ptr [0x114ff3d2] */
  DX = (r16((uint32_t)(0x114ff3d2)));
  /* 114d6332 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d6334 je 0x114d635e */
  if (C.zf) goto L_114d635e;
  /* 114d6336 cmp dword ptr [0x114ff3e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d633d je 0x114d635e */
  if (C.zf) goto L_114d635e;
  /* 114d633f mov dword ptr [0x114fd5b4], 1 */
  w32((uint32_t)(0x114fd5b4), (0x1u));
  /* 114d6349 mov eax, dword ptr [0x114ff3e0] */
  EAX = (r32((uint32_t)(0x114ff3e0)));
  /* 114d634e sub eax, dword ptr [0x114ff38c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114ff38c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6354 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6357 mov dword ptr [0x114fd5b8], eax */
  w32((uint32_t)(0x114fd5b8), (EAX));
  /* 114d635c jmp 0x114d6372 */
  goto L_114d6372;
L_114d635e:;
  /* 114d635e mov dword ptr [0x114fd5b4], 0 */
  w32((uint32_t)(0x114fd5b4), (0x0u));
  /* 114d6368 mov dword ptr [0x114fd5b8], 0 */
  w32((uint32_t)(0x114fd5b8), (0x0u));
L_114d6372:;
  /* 114d6372 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114d6375 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6376 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6378 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114d637a mov edx, dword ptr [0x114fd63c] */
  EDX = (r32((uint32_t)(0x114fd63c)));
  /* 114d6380 push edx */
  push32((uint32_t)(EDX));
  /* 114d6381 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114d6383 push 0x114ff33c */
  push32((uint32_t)(0x114ff33cu));
  /* 114d6388 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114d638d mov eax, dword ptr [0x114ff418] */
  EAX = (r32((uint32_t)(0x114ff418)));
  /* 114d6392 push eax */
  push32((uint32_t)(EAX));
  /* 114d6393 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d6399u);
  /* 114d6399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d639b je 0x114d63af */
  if (C.zf) goto L_114d63af;
  /* 114d639d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d63a1 jne 0x114d63af */
  if (!C.zf) goto L_114d63af;
  /* 114d63a3 mov ecx, dword ptr [0x114fd63c] */
  ECX = (r32((uint32_t)(0x114fd63c)));
  /* 114d63a9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 114d63ad jmp 0x114d63b8 */
  goto L_114d63b8;
L_114d63af:;
  /* 114d63af mov edx, dword ptr [0x114fd63c] */
  EDX = (r32((uint32_t)(0x114fd63c)));
  /* 114d63b5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_114d63b8:;
  /* 114d63b8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114d63bb push eax */
  push32((uint32_t)(EAX));
  /* 114d63bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114d63be push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114d63c0 mov ecx, dword ptr [0x114fd640] */
  ECX = (r32((uint32_t)(0x114fd640)));
  /* 114d63c6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d63c7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114d63c9 push 0x114ff390 */
  push32((uint32_t)(0x114ff390u));
  /* 114d63ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114d63d3 mov edx, dword ptr [0x114ff418] */
  EDX = (r32((uint32_t)(0x114ff418)));
  /* 114d63d9 push edx */
  push32((uint32_t)(EDX));
  /* 114d63da call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d63e0u);
  /* 114d63e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d63e2 je 0x114d63f5 */
  if (C.zf) goto L_114d63f5;
  /* 114d63e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d63e8 jne 0x114d63f5 */
  if (!C.zf) goto L_114d63f5;
  /* 114d63ea mov eax, dword ptr [0x114fd640] */
  EAX = (r32((uint32_t)(0x114fd640)));
  /* 114d63ef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 114d63f3 jmp 0x114d63fe */
  goto L_114d63fe;
L_114d63f5:;
  /* 114d63f5 mov ecx, dword ptr [0x114fd640] */
  ECX = (r32((uint32_t)(0x114fd640)));
  /* 114d63fb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_114d63fe:;
  /* 114d63fe jmp 0x114d6627 */
  goto L_114d6627;
L_114d6403:;
  /* 114d6403 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6406 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d6409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d640b je 0x114d642d */
  if (C.zf) goto L_114d642d;
  /* 114d640d cmp dword ptr [0x114ff3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6414 je 0x114d643c */
  if (C.zf) goto L_114d643c;
  /* 114d6416 mov ecx, dword ptr [0x114ff3e4] */
  ECX = (r32((uint32_t)(0x114ff3e4)));
  /* 114d641c push ecx */
  push32((uint32_t)(ECX));
  /* 114d641d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6420 push edx */
  push32((uint32_t)(EDX));
  /* 114d6421 call 0x114d54c0 */
  push32(0x114d6426u); f_114d54c0();
  /* 114d6426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d642b jne 0x114d643c */
  if (!C.zf) goto L_114d643c;
L_114d642d:;
  /* 114d642d push 0xc */
  push32((uint32_t)(0xcu));
  /* 114d642f call 0x114cb8a0 */
  push32(0x114d6434u); f_114cb8a0();
  /* 114d6434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6437 jmp 0x114d6627 */
  goto L_114d6627;
L_114d643c:;
  /* 114d643c push 2 */
  push32((uint32_t)(0x2u));
  /* 114d643e mov eax, dword ptr [0x114ff3e4] */
  EAX = (r32((uint32_t)(0x114ff3e4)));
  /* 114d6443 push eax */
  push32((uint32_t)(EAX));
  /* 114d6444 call 0x114cc390 */
  push32(0x114d6449u); f_114cc390();
  /* 114d6449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d644c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 114d6451 push 0x114fa348 */
  push32((uint32_t)(0x114fa348u));
  /* 114d6456 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d6458 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d645b push ecx */
  push32((uint32_t)(ECX));
  /* 114d645c call 0x114d0fb0 */
  push32(0x114d6461u); f_114d0fb0();
  /* 114d6461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6464 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6467 push eax */
  push32((uint32_t)(EAX));
  /* 114d6468 call 0x114cb900 */
  push32(0x114d646du); f_114cb900();
  /* 114d646d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6470 mov dword ptr [0x114ff3e4], eax */
  w32((uint32_t)(0x114ff3e4), (EAX));
  /* 114d6475 cmp dword ptr [0x114ff3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d647c jne 0x114d648d */
  if (!C.zf) goto L_114d648d;
  /* 114d647e push 0xc */
  push32((uint32_t)(0xcu));
  /* 114d6480 call 0x114cb8a0 */
  push32(0x114d6485u); f_114cb8a0();
  /* 114d6485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6488 jmp 0x114d6627 */
  goto L_114d6627;
L_114d648d:;
  /* 114d648d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6490 push edx */
  push32((uint32_t)(EDX));
  /* 114d6491 mov eax, dword ptr [0x114ff3e4] */
  EAX = (r32((uint32_t)(0x114ff3e4)));
  /* 114d6496 push eax */
  push32((uint32_t)(EAX));
  /* 114d6497 call 0x114d1130 */
  push32(0x114d649cu); f_114d1130();
  /* 114d649c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d649f push 0xc */
  push32((uint32_t)(0xcu));
  /* 114d64a1 call 0x114cb8a0 */
  push32(0x114d64a6u); f_114cb8a0();
  /* 114d64a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 114d64ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d64ae push ecx */
  push32((uint32_t)(ECX));
  /* 114d64af mov edx, dword ptr [0x114fd63c] */
  EDX = (r32((uint32_t)(0x114fd63c)));
  /* 114d64b5 push edx */
  push32((uint32_t)(EDX));
  /* 114d64b6 call 0x114d19a0 */
  push32(0x114d64bbu); f_114d19a0();
  /* 114d64bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64be mov eax, dword ptr [0x114fd63c] */
  EAX = (r32((uint32_t)(0x114fd63c)));
  /* 114d64c3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 114d64c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d64ca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d64d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d64d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d64d6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d64d9 jne 0x114d64ed */
  if (!C.zf) goto L_114d64ed;
  /* 114d64db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d64de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d64e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d64e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114d64ed:;
  /* 114d64ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d64f0 push eax */
  push32((uint32_t)(EAX));
  /* 114d64f1 call 0x114db140 */
  push32(0x114d64f6u); f_114db140();
  /* 114d64f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d64f9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d64ff mov dword ptr [0x114fd5b0], eax */
  w32((uint32_t)(0x114fd5b0), (EAX));
L_114d6504:;
  /* 114d6504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6507 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d650a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d650d je 0x114d6525 */
  if (C.zf) goto L_114d6525;
  /* 114d650f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6512 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d6515 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6518 jl 0x114d6530 */
  if ((C.sf!=C.of)) goto L_114d6530;
  /* 114d651a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d651d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d6520 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6523 jg 0x114d6530 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d6530;
L_114d6525:;
  /* 114d6525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d652b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d652e jmp 0x114d6504 */
  goto L_114d6504;
L_114d6530:;
  /* 114d6530 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6533 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d6536 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6539 jne 0x114d65d5 */
  if (!C.zf) goto L_114d65d5;
  /* 114d653f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6545 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d6548 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d654b push edx */
  push32((uint32_t)(EDX));
  /* 114d654c call 0x114db140 */
  push32(0x114d6551u); f_114db140();
  /* 114d6551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6554 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6557 mov ecx, dword ptr [0x114fd5b0] */
  ECX = (r32((uint32_t)(0x114fd5b0)));
  /* 114d655d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d655f mov dword ptr [0x114fd5b0], ecx */
  w32((uint32_t)(0x114fd5b0), (ECX));
L_114d6565:;
  /* 114d6565 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6568 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d656b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d656e jl 0x114d6586 */
  if ((C.sf!=C.of)) goto L_114d6586;
  /* 114d6570 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6573 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d6576 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6579 jg 0x114d6586 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d6586;
  /* 114d657b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d657e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6581 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d6584 jmp 0x114d6565 */
  goto L_114d6565;
L_114d6586:;
  /* 114d6586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6589 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d658c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d658f jne 0x114d65d5 */
  if (!C.zf) goto L_114d65d5;
  /* 114d6591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6597 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d659a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d659d push ecx */
  push32((uint32_t)(ECX));
  /* 114d659e call 0x114db140 */
  push32(0x114d65a3u); f_114db140();
  /* 114d65a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d65a6 mov edx, dword ptr [0x114fd5b0] */
  EDX = (r32((uint32_t)(0x114fd5b0)));
  /* 114d65ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d65ae mov dword ptr [0x114fd5b0], edx */
  w32((uint32_t)(0x114fd5b0), (EDX));
L_114d65b4:;
  /* 114d65b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d65b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d65ba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d65bd jl 0x114d65d5 */
  if ((C.sf!=C.of)) goto L_114d65d5;
  /* 114d65bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d65c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d65c5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d65c8 jg 0x114d65d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d65d5;
  /* 114d65ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d65cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d65d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d65d3 jmp 0x114d65b4 */
  goto L_114d65b4;
L_114d65d5:;
  /* 114d65d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d65d9 je 0x114d65e9 */
  if (C.zf) goto L_114d65e9;
  /* 114d65db mov edx, dword ptr [0x114fd5b0] */
  EDX = (r32((uint32_t)(0x114fd5b0)));
  /* 114d65e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d65e3 mov dword ptr [0x114fd5b0], edx */
  w32((uint32_t)(0x114fd5b0), (EDX));
L_114d65e9:;
  /* 114d65e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d65ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d65ef mov dword ptr [0x114fd5b4], ecx */
  w32((uint32_t)(0x114fd5b4), (ECX));
  /* 114d65f5 cmp dword ptr [0x114fd5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fd5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d65fc je 0x114d661e */
  if (C.zf) goto L_114d661e;
  /* 114d65fe push 3 */
  push32((uint32_t)(0x3u));
  /* 114d6600 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6603 push edx */
  push32((uint32_t)(EDX));
  /* 114d6604 mov eax, dword ptr [0x114fd640] */
  EAX = (r32((uint32_t)(0x114fd640)));
  /* 114d6609 push eax */
  push32((uint32_t)(EAX));
  /* 114d660a call 0x114d19a0 */
  push32(0x114d660fu); f_114d19a0();
  /* 114d660f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6612 mov ecx, dword ptr [0x114fd640] */
  ECX = (r32((uint32_t)(0x114fd640)));
  /* 114d6618 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 114d661c jmp 0x114d6627 */
  goto L_114d6627;
L_114d661e:;
  /* 114d661e mov edx, dword ptr [0x114fd640] */
  EDX = (r32((uint32_t)(0x114fd640)));
  /* 114d6624 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_114d6627:;
  /* 114d6627 mov esp, ebp */
  ESP = (EBP);
  /* 114d6629 pop ebp */
  EBP = (pop32());
  /* 114d662a ret  */
  ESPCHK(0x114d6280u, _esp0);
  ESP += 4; return;
}

/* FUN_10016630 @ 0x114d6630 (46 bytes, 18 insns) */
void f_114d6630(void) {
  FTRACE(0x114d6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6630 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6631 mov ebp, esp */
  EBP = (ESP);
  /* 114d6633 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6634 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d6636 call 0x114cb800 */
  push32(0x114d663bu); f_114cb800();
  /* 114d663b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d663e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6641 push eax */
  push32((uint32_t)(EAX));
  /* 114d6642 call 0x114d6660 */
  push32(0x114d6647u); f_114d6660();
  /* 114d6647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d664a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d664d push 0xb */
  push32((uint32_t)(0xbu));
  /* 114d664f call 0x114cb8a0 */
  push32(0x114d6654u); f_114cb8a0();
  /* 114d6654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d665a mov esp, ebp */
  ESP = (EBP);
  /* 114d665c pop ebp */
  EBP = (pop32());
  /* 114d665d ret  */
  ESPCHK(0x114d6630u, _esp0);
  ESP += 4; return;
}

/* FUN_10016660 @ 0x114d6660 (762 bytes, 246 insns) */
void f_114d6660(void) {
  FTRACE(0x114d6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6660 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6661 mov ebp, esp */
  EBP = (ESP);
  /* 114d6663 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6664 cmp dword ptr [0x114fd5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fd5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d666b jne 0x114d6674 */
  if (!C.zf) goto L_114d6674;
  /* 114d666d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d666f jmp 0x114d6956 */
  goto L_114d6956;
L_114d6674:;
  /* 114d6674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6677 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114d667a cmp ecx, dword ptr [0x114fd648] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd648))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6680 jne 0x114d6694 */
  if (!C.zf) goto L_114d6694;
  /* 114d6682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6685 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114d6688 cmp eax, dword ptr [0x114fd658] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d668e je 0x114d685b */
  if (C.zf) goto L_114d685b;
L_114d6694:;
  /* 114d6694 cmp dword ptr [0x114ff330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d669b je 0x114d6815 */
  if (C.zf) goto L_114d6815;
  /* 114d66a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d66a3 mov cx, word ptr [0x114ff3d0] */
  CX = (r16((uint32_t)(0x114ff3d0)));
  /* 114d66aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d66ac jne 0x114d6709 */
  if (!C.zf) goto L_114d6709;
  /* 114d66ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d66b0 mov dx, word ptr [0x114ff3de] */
  DX = (r16((uint32_t)(0x114ff3de)));
  /* 114d66b7 push edx */
  push32((uint32_t)(EDX));
  /* 114d66b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d66ba mov ax, word ptr [0x114ff3dc] */
  AX = (r16((uint32_t)(0x114ff3dc)));
  /* 114d66c0 push eax */
  push32((uint32_t)(EAX));
  /* 114d66c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d66c3 mov cx, word ptr [0x114ff3da] */
  CX = (r16((uint32_t)(0x114ff3da)));
  /* 114d66ca push ecx */
  push32((uint32_t)(ECX));
  /* 114d66cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d66cd mov dx, word ptr [0x114ff3d8] */
  DX = (r16((uint32_t)(0x114ff3d8)));
  /* 114d66d4 push edx */
  push32((uint32_t)(EDX));
  /* 114d66d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d66d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d66d9 mov ax, word ptr [0x114ff3d4] */
  AX = (r16((uint32_t)(0x114ff3d4)));
  /* 114d66df push eax */
  push32((uint32_t)(EAX));
  /* 114d66e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d66e2 mov cx, word ptr [0x114ff3d6] */
  CX = (r16((uint32_t)(0x114ff3d6)));
  /* 114d66e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114d66ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d66ec mov dx, word ptr [0x114ff3d2] */
  DX = (r16((uint32_t)(0x114ff3d2)));
  /* 114d66f3 push edx */
  push32((uint32_t)(EDX));
  /* 114d66f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d66f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114d66fa push ecx */
  push32((uint32_t)(ECX));
  /* 114d66fb push 1 */
  push32((uint32_t)(0x1u));
  /* 114d66fd push 1 */
  push32((uint32_t)(0x1u));
  /* 114d66ff call 0x114d6960 */
  push32(0x114d6704u); f_114d6960();
  /* 114d6704 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6707 jmp 0x114d675a */
  goto L_114d675a;
L_114d6709:;
  /* 114d6709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d670b mov dx, word ptr [0x114ff3de] */
  DX = (r16((uint32_t)(0x114ff3de)));
  /* 114d6712 push edx */
  push32((uint32_t)(EDX));
  /* 114d6713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6715 mov ax, word ptr [0x114ff3dc] */
  AX = (r16((uint32_t)(0x114ff3dc)));
  /* 114d671b push eax */
  push32((uint32_t)(EAX));
  /* 114d671c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d671e mov cx, word ptr [0x114ff3da] */
  CX = (r16((uint32_t)(0x114ff3da)));
  /* 114d6725 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6726 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6728 mov dx, word ptr [0x114ff3d8] */
  DX = (r16((uint32_t)(0x114ff3d8)));
  /* 114d672f push edx */
  push32((uint32_t)(EDX));
  /* 114d6730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6732 mov ax, word ptr [0x114ff3d6] */
  AX = (r16((uint32_t)(0x114ff3d6)));
  /* 114d6738 push eax */
  push32((uint32_t)(EAX));
  /* 114d6739 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d673b push 0 */
  push32((uint32_t)(0x0u));
  /* 114d673d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d673f mov cx, word ptr [0x114ff3d2] */
  CX = (r16((uint32_t)(0x114ff3d2)));
  /* 114d6746 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d674a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114d674d push eax */
  push32((uint32_t)(EAX));
  /* 114d674e push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6750 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d6752 call 0x114d6960 */
  push32(0x114d6757u); f_114d6960();
  /* 114d6757 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d675a:;
  /* 114d675a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d675c mov cx, word ptr [0x114ff37c] */
  CX = (r16((uint32_t)(0x114ff37c)));
  /* 114d6763 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d6765 jne 0x114d67c2 */
  if (!C.zf) goto L_114d67c2;
  /* 114d6767 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6769 mov dx, word ptr [0x114ff38a] */
  DX = (r16((uint32_t)(0x114ff38a)));
  /* 114d6770 push edx */
  push32((uint32_t)(EDX));
  /* 114d6771 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6773 mov ax, word ptr [0x114ff388] */
  AX = (r16((uint32_t)(0x114ff388)));
  /* 114d6779 push eax */
  push32((uint32_t)(EAX));
  /* 114d677a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d677c mov cx, word ptr [0x114ff386] */
  CX = (r16((uint32_t)(0x114ff386)));
  /* 114d6783 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6786 mov dx, word ptr [0x114ff384] */
  DX = (r16((uint32_t)(0x114ff384)));
  /* 114d678d push edx */
  push32((uint32_t)(EDX));
  /* 114d678e push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6792 mov ax, word ptr [0x114ff380] */
  AX = (r16((uint32_t)(0x114ff380)));
  /* 114d6798 push eax */
  push32((uint32_t)(EAX));
  /* 114d6799 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d679b mov cx, word ptr [0x114ff382] */
  CX = (r16((uint32_t)(0x114ff382)));
  /* 114d67a2 push ecx */
  push32((uint32_t)(ECX));
  /* 114d67a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d67a5 mov dx, word ptr [0x114ff37e] */
  DX = (r16((uint32_t)(0x114ff37e)));
  /* 114d67ac push edx */
  push32((uint32_t)(EDX));
  /* 114d67ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d67b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114d67b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d67b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d67b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d67b8 call 0x114d6960 */
  push32(0x114d67bdu); f_114d6960();
  /* 114d67bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d67c0 jmp 0x114d6813 */
  goto L_114d6813;
L_114d67c2:;
  /* 114d67c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d67c4 mov dx, word ptr [0x114ff38a] */
  DX = (r16((uint32_t)(0x114ff38a)));
  /* 114d67cb push edx */
  push32((uint32_t)(EDX));
  /* 114d67cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d67ce mov ax, word ptr [0x114ff388] */
  AX = (r16((uint32_t)(0x114ff388)));
  /* 114d67d4 push eax */
  push32((uint32_t)(EAX));
  /* 114d67d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d67d7 mov cx, word ptr [0x114ff386] */
  CX = (r16((uint32_t)(0x114ff386)));
  /* 114d67de push ecx */
  push32((uint32_t)(ECX));
  /* 114d67df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d67e1 mov dx, word ptr [0x114ff384] */
  DX = (r16((uint32_t)(0x114ff384)));
  /* 114d67e8 push edx */
  push32((uint32_t)(EDX));
  /* 114d67e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d67eb mov ax, word ptr [0x114ff382] */
  AX = (r16((uint32_t)(0x114ff382)));
  /* 114d67f1 push eax */
  push32((uint32_t)(EAX));
  /* 114d67f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d67f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d67f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d67f8 mov cx, word ptr [0x114ff37e] */
  CX = (r16((uint32_t)(0x114ff37e)));
  /* 114d67ff push ecx */
  push32((uint32_t)(ECX));
  /* 114d6800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6803 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114d6806 push eax */
  push32((uint32_t)(EAX));
  /* 114d6807 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6809 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d680b call 0x114d6960 */
  push32(0x114d6810u); f_114d6960();
  /* 114d6810 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d6813:;
  /* 114d6813 jmp 0x114d685b */
  goto L_114d685b;
L_114d6815:;
  /* 114d6815 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6817 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6819 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d681b push 2 */
  push32((uint32_t)(0x2u));
  /* 114d681d push 0 */
  push32((uint32_t)(0x0u));
  /* 114d681f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6821 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d6823 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d6825 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6828 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 114d682b push edx */
  push32((uint32_t)(EDX));
  /* 114d682c push 1 */
  push32((uint32_t)(0x1u));
  /* 114d682e push 1 */
  push32((uint32_t)(0x1u));
  /* 114d6830 call 0x114d6960 */
  push32(0x114d6835u); f_114d6960();
  /* 114d6835 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6838 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d683a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d683c push 0 */
  push32((uint32_t)(0x0u));
  /* 114d683e push 2 */
  push32((uint32_t)(0x2u));
  /* 114d6840 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6842 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6844 push 5 */
  push32((uint32_t)(0x5u));
  /* 114d6846 push 0xa */
  push32((uint32_t)(0xau));
  /* 114d6848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d684b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114d684e push ecx */
  push32((uint32_t)(ECX));
  /* 114d684f push 1 */
  push32((uint32_t)(0x1u));
  /* 114d6851 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d6853 call 0x114d6960 */
  push32(0x114d6858u); f_114d6960();
  /* 114d6858 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d685b:;
  /* 114d685b mov edx, dword ptr [0x114fd64c] */
  EDX = (r32((uint32_t)(0x114fd64c)));
  /* 114d6861 cmp edx, dword ptr [0x114fd65c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6867 jge 0x114d68b4 */
  if ((C.sf==C.of)) goto L_114d68b4;
  /* 114d6869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d686c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114d686f cmp ecx, dword ptr [0x114fd64c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd64c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6875 jl 0x114d6885 */
  if ((C.sf!=C.of)) goto L_114d6885;
  /* 114d6877 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d687a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114d687d cmp eax, dword ptr [0x114fd65c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6883 jle 0x114d688c */
  if ((C.zf||C.sf!=C.of)) goto L_114d688c;
L_114d6885:;
  /* 114d6885 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6887 jmp 0x114d6956 */
  goto L_114d6956;
L_114d688c:;
  /* 114d688c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d688f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114d6892 cmp edx, dword ptr [0x114fd64c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd64c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6898 jle 0x114d68b2 */
  if ((C.zf||C.sf!=C.of)) goto L_114d68b2;
  /* 114d689a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d689d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114d68a0 cmp ecx, dword ptr [0x114fd65c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d68a6 jge 0x114d68b2 */
  if ((C.sf==C.of)) goto L_114d68b2;
  /* 114d68a8 mov eax, 1 */
  EAX = (0x1u);
  /* 114d68ad jmp 0x114d6956 */
  goto L_114d6956;
L_114d68b2:;
  /* 114d68b2 jmp 0x114d68f7 */
  goto L_114d68f7;
L_114d68b4:;
  /* 114d68b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d68b7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114d68ba cmp eax, dword ptr [0x114fd65c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d68c0 jl 0x114d68d0 */
  if ((C.sf!=C.of)) goto L_114d68d0;
  /* 114d68c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d68c5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114d68c8 cmp edx, dword ptr [0x114fd64c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd64c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d68ce jle 0x114d68d7 */
  if ((C.zf||C.sf!=C.of)) goto L_114d68d7;
L_114d68d0:;
  /* 114d68d0 mov eax, 1 */
  EAX = (0x1u);
  /* 114d68d5 jmp 0x114d6956 */
  goto L_114d6956;
L_114d68d7:;
  /* 114d68d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d68da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114d68dd cmp ecx, dword ptr [0x114fd65c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d68e3 jle 0x114d68f7 */
  if ((C.zf||C.sf!=C.of)) goto L_114d68f7;
  /* 114d68e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d68e8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114d68eb cmp eax, dword ptr [0x114fd64c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd64c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d68f1 jge 0x114d68f7 */
  if ((C.sf==C.of)) goto L_114d68f7;
  /* 114d68f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d68f5 jmp 0x114d6956 */
  goto L_114d6956;
L_114d68f7:;
  /* 114d68f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d68fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d68fd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d6905 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d690a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d690d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6913 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6915 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d691b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d691e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6921 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114d6924 cmp edx, dword ptr [0x114fd64c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114fd64c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d692a jne 0x114d6942 */
  if (!C.zf) goto L_114d6942;
  /* 114d692c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d692f cmp eax, dword ptr [0x114fd650] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114fd650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6935 jl 0x114d693e */
  if ((C.sf!=C.of)) goto L_114d693e;
  /* 114d6937 mov eax, 1 */
  EAX = (0x1u);
  /* 114d693c jmp 0x114d6956 */
  goto L_114d6956;
L_114d693e:;
  /* 114d693e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6940 jmp 0x114d6956 */
  goto L_114d6956;
L_114d6942:;
  /* 114d6942 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6945 cmp ecx, dword ptr [0x114fd660] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114fd660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d694b jge 0x114d6954 */
  if ((C.sf==C.of)) goto L_114d6954;
  /* 114d694d mov eax, 1 */
  EAX = (0x1u);
  /* 114d6952 jmp 0x114d6956 */
  goto L_114d6956;
L_114d6954:;
  /* 114d6954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d6956:;
  /* 114d6956 mov esp, ebp */
  ESP = (EBP);
  /* 114d6958 pop ebp */
  EBP = (pop32());
  /* 114d6959 ret  */
  ESPCHK(0x114d6660u, _esp0);
  ESP += 4; return;
}

/* FUN_10016960 @ 0x114d6960 (504 bytes, 145 insns) */
void f_114d6960(void) {
  FTRACE(0x114d6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6960 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6961 mov ebp, esp */
  EBP = (ESP);
  /* 114d6963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6966 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d696a jne 0x114d6a3c */
  if (!C.zf) goto L_114d6a3c;
  /* 114d6970 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d6973 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d6976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d6978 jne 0x114d6989 */
  if (!C.zf) goto L_114d6989;
  /* 114d697a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d697d mov edx, dword ptr [ecx*4 + 0x114fd660] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fd660)));
  /* 114d6984 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d6987 jmp 0x114d6996 */
  goto L_114d6996;
L_114d6989:;
  /* 114d6989 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d698c mov ecx, dword ptr [eax*4 + 0x114fd694] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fd694)));
  /* 114d6993 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114d6996:;
  /* 114d6996 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6999 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d699c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d699f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d69a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d69a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d69ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d69ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d69b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d69b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d69b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 114d69b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 114d69bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114d69be mov ecx, 7 */
  ECX = (0x7u);
  /* 114d69c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114d69c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d69c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d69cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d69ce jge 0x114d69e9 */
  if ((C.sf==C.of)) goto L_114d69e9;
  /* 114d69d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d69d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d69d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d69d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d69dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d69df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d69e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d69e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d69e7 jmp 0x114d69fd */
  goto L_114d69fd;
L_114d69e9:;
  /* 114d69e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d69ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d69ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d69f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d69f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d69f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d69fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d69fd:;
  /* 114d69fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6a01 jne 0x114d6a3a */
  if (!C.zf) goto L_114d6a3a;
  /* 114d6a03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d6a06 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114d6a09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d6a0b jne 0x114d6a1c */
  if (!C.zf) goto L_114d6a1c;
  /* 114d6a0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d6a10 mov eax, dword ptr [edx*4 + 0x114fd664] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114fd664)));
  /* 114d6a17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114d6a1a jmp 0x114d6a29 */
  goto L_114d6a29;
L_114d6a1c:;
  /* 114d6a1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d6a1f mov edx, dword ptr [ecx*4 + 0x114fd698] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114fd698)));
  /* 114d6a26 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114d6a29:;
  /* 114d6a29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6a2c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6a2f jle 0x114d6a3a */
  if ((C.zf||C.sf!=C.of)) goto L_114d6a3a;
  /* 114d6a31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6a34 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6a37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114d6a3a:;
  /* 114d6a3a jmp 0x114d6a71 */
  goto L_114d6a71;
L_114d6a3c:;
  /* 114d6a3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d6a3f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d6a42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d6a44 jne 0x114d6a55 */
  if (!C.zf) goto L_114d6a55;
  /* 114d6a46 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d6a49 mov ecx, dword ptr [eax*4 + 0x114fd660] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fd660)));
  /* 114d6a50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d6a53 jmp 0x114d6a62 */
  goto L_114d6a62;
L_114d6a55:;
  /* 114d6a55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d6a58 mov eax, dword ptr [edx*4 + 0x114fd694] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114fd694)));
  /* 114d6a5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114d6a62:;
  /* 114d6a62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d6a65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d6a68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6a6b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6a6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d6a71:;
  /* 114d6a71 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6a75 jne 0x114d6ab1 */
  if (!C.zf) goto L_114d6ab1;
  /* 114d6a77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6a7a mov dword ptr [0x114fd64c], eax */
  w32((uint32_t)(0x114fd64c), (EAX));
  /* 114d6a7f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 114d6a82 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6a85 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d6a88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6a8a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6a8d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 114d6a90 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6a92 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6a98 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 114d6a9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6a9d mov dword ptr [0x114fd650], ecx */
  w32((uint32_t)(0x114fd650), (ECX));
  /* 114d6aa3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d6aa6 mov dword ptr [0x114fd648], edx */
  w32((uint32_t)(0x114fd648), (EDX));
  /* 114d6aac jmp 0x114d6b54 */
  goto L_114d6b54;
L_114d6ab1:;
  /* 114d6ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6ab4 mov dword ptr [0x114fd65c], eax */
  w32((uint32_t)(0x114fd65c), (EAX));
  /* 114d6ab9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 114d6abc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6abf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d6ac2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6ac4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6ac7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 114d6aca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6acc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6ad2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 114d6ad5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6ad7 mov dword ptr [0x114fd660], ecx */
  w32((uint32_t)(0x114fd660), (ECX));
  /* 114d6add mov edx, dword ptr [0x114fd5b8] */
  EDX = (r32((uint32_t)(0x114fd5b8)));
  /* 114d6ae3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6ae9 mov eax, dword ptr [0x114fd660] */
  EAX = (r32((uint32_t)(0x114fd660)));
  /* 114d6aee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6af0 mov dword ptr [0x114fd660], eax */
  w32((uint32_t)(0x114fd660), (EAX));
  /* 114d6af5 cmp dword ptr [0x114fd660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fd660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6afc jge 0x114d6b21 */
  if ((C.sf==C.of)) goto L_114d6b21;
  /* 114d6afe mov ecx, dword ptr [0x114fd660] */
  ECX = (r32((uint32_t)(0x114fd660)));
  /* 114d6b04 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6b0a mov dword ptr [0x114fd660], ecx */
  w32((uint32_t)(0x114fd660), (ECX));
  /* 114d6b10 mov edx, dword ptr [0x114fd65c] */
  EDX = (r32((uint32_t)(0x114fd65c)));
  /* 114d6b16 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6b19 mov dword ptr [0x114fd65c], edx */
  w32((uint32_t)(0x114fd65c), (EDX));
  /* 114d6b1f jmp 0x114d6b4b */
  goto L_114d6b4b;
L_114d6b21:;
  /* 114d6b21 cmp dword ptr [0x114fd660], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x114fd660))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6b2b jl 0x114d6b4b */
  if ((C.sf!=C.of)) goto L_114d6b4b;
  /* 114d6b2d mov eax, dword ptr [0x114fd660] */
  EAX = (r32((uint32_t)(0x114fd660)));
  /* 114d6b32 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6b37 mov dword ptr [0x114fd660], eax */
  w32((uint32_t)(0x114fd660), (EAX));
  /* 114d6b3c mov ecx, dword ptr [0x114fd65c] */
  ECX = (r32((uint32_t)(0x114fd65c)));
  /* 114d6b42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6b45 mov dword ptr [0x114fd65c], ecx */
  w32((uint32_t)(0x114fd65c), (ECX));
L_114d6b4b:;
  /* 114d6b4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d6b4e mov dword ptr [0x114fd658], edx */
  w32((uint32_t)(0x114fd658), (EDX));
L_114d6b54:;
  /* 114d6b54 mov esp, ebp */
  ESP = (EBP);
  /* 114d6b56 pop ebp */
  EBP = (pop32());
  /* 114d6b57 ret  */
  ESPCHK(0x114d6960u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b60 @ 0x114d6b60 (836 bytes, 238 insns) */
void f_114d6b60(void) {
  FTRACE(0x114d6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6b60 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6b61 mov ebp, esp */
  EBP = (ESP);
  /* 114d6b63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6b66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6b68 call 0x114cb800 */
  push32(0x114d6b6du); f_114cb800();
  /* 114d6b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6b73 push eax */
  push32((uint32_t)(EAX));
  /* 114d6b74 call 0x114d6eb0 */
  push32(0x114d6b79u); f_114d6eb0();
  /* 114d6b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6b7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114d6b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6b82 cmp ecx, dword ptr [0x114ff4cc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114ff4cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6b88 jne 0x114d6b9b */
  if (!C.zf) goto L_114d6b9b;
  /* 114d6b8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6b8c call 0x114cb8a0 */
  push32(0x114d6b91u); f_114cb8a0();
  /* 114d6b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6b96 jmp 0x114d6ea0 */
  goto L_114d6ea0;
L_114d6b9b:;
  /* 114d6b9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6b9f jne 0x114d6bbc */
  if (!C.zf) goto L_114d6bbc;
  /* 114d6ba1 call 0x114d6f90 */
  push32(0x114d6ba6u); f_114d6f90();
  /* 114d6ba6 call 0x114d7010 */
  push32(0x114d6babu); f_114d7010();
  /* 114d6bab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6bad call 0x114cb8a0 */
  push32(0x114d6bb2u); f_114cb8a0();
  /* 114d6bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6bb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6bb7 jmp 0x114d6ea0 */
  goto L_114d6ea0;
L_114d6bbc:;
  /* 114d6bbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d6bc3 jmp 0x114d6bce */
  goto L_114d6bce;
L_114d6bc5:;
  /* 114d6bc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6bc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6bcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d6bce:;
  /* 114d6bce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6bd2 jae 0x114d6d1f */
  if (!C.cf) goto L_114d6d1f;
  /* 114d6bd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6bdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6bde mov ecx, dword ptr [eax + 0x114fd6d8] */
  ECX = (r32((uint32_t)(EAX + 0x114fd6d8)));
  /* 114d6be4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6be7 jne 0x114d6d1a */
  if (!C.zf) goto L_114d6d1a;
  /* 114d6bed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114d6bf4 jmp 0x114d6bff */
  goto L_114d6bff;
L_114d6bf6:;
  /* 114d6bf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6bf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6bfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_114d6bff:;
  /* 114d6bff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6c06 jae 0x114d6c14 */
  if (!C.cf) goto L_114d6c14;
  /* 114d6c08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6c0b mov byte ptr [eax + 0x114ff660], 0 */
  w8((uint32_t)(EAX + 0x114ff660), (0x0u));
  /* 114d6c12 jmp 0x114d6bf6 */
  goto L_114d6bf6;
L_114d6c14:;
  /* 114d6c14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d6c1b jmp 0x114d6c26 */
  goto L_114d6c26;
L_114d6c1d:;
  /* 114d6c1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6c20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6c23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_114d6c26:;
  /* 114d6c26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6c2a jae 0x114d6ca7 */
  if (!C.cf) goto L_114d6ca7;
  /* 114d6c2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6c2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6c32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6c35 lea ecx, [edx + eax*8 + 0x114fd6e8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x114fd6e8));
  /* 114d6c3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d6c3f jmp 0x114d6c4a */
  goto L_114d6c4a;
L_114d6c41:;
  /* 114d6c41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6c44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6c47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d6c4a:;
  /* 114d6c4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6c4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d6c4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d6c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d6c53 je 0x114d6ca2 */
  if (C.zf) goto L_114d6ca2;
  /* 114d6c55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6c5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114d6c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d6c5f je 0x114d6ca2 */
  if (C.zf) goto L_114d6ca2;
  /* 114d6c61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6c66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d6c68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114d6c6b jmp 0x114d6c76 */
  goto L_114d6c76;
L_114d6c6d:;
  /* 114d6c6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6c73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114d6c76:;
  /* 114d6c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d6c79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6c7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 114d6c7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6c81 ja 0x114d6ca0 */
  if ((!C.cf&&!C.zf)) goto L_114d6ca0;
  /* 114d6c83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6c86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6c89 mov dl, byte ptr [eax + 0x114ff661] */
  DL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d6c8f or dl, byte ptr [ecx + 0x114fd6d0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x114fd6d0))); DL = (_r); fl_logic(_r,8); }
  /* 114d6c95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6c98 mov byte ptr [eax + 0x114ff661], dl */
  w8((uint32_t)(EAX + 0x114ff661), (DL));
  /* 114d6c9e jmp 0x114d6c6d */
  goto L_114d6c6d;
L_114d6ca0:;
  /* 114d6ca0 jmp 0x114d6c41 */
  goto L_114d6c41;
L_114d6ca2:;
  /* 114d6ca2 jmp 0x114d6c1d */
  goto L_114d6c1d;
L_114d6ca7:;
  /* 114d6ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6caa mov dword ptr [0x114ff4cc], ecx */
  w32((uint32_t)(0x114ff4cc), (ECX));
  /* 114d6cb0 mov dword ptr [0x114ff55c], 1 */
  w32((uint32_t)(0x114ff55c), (0x1u));
  /* 114d6cba mov edx, dword ptr [0x114ff4cc] */
  EDX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d6cc0 push edx */
  push32((uint32_t)(EDX));
  /* 114d6cc1 call 0x114d6f10 */
  push32(0x114d6cc6u); f_114d6f10();
  /* 114d6cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6cc9 mov dword ptr [0x114ff764], eax */
  w32((uint32_t)(0x114ff764), (EAX));
  /* 114d6cce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d6cd5 jmp 0x114d6ce0 */
  goto L_114d6ce0;
L_114d6cd7:;
  /* 114d6cd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6cda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6cdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d6ce0:;
  /* 114d6ce0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6ce4 jae 0x114d6d04 */
  if (!C.cf) goto L_114d6d04;
  /* 114d6ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6ce9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d6cec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6cef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6cf2 mov cx, word ptr [ecx + eax*2 + 0x114fd6dc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x114fd6dc)));
  /* 114d6cfa mov word ptr [edx*2 + 0x114ff550], cx */
  w16((uint32_t)(EDX*2 + 0x114ff550), (CX));
  /* 114d6d02 jmp 0x114d6cd7 */
  goto L_114d6cd7;
L_114d6d04:;
  /* 114d6d04 call 0x114d7010 */
  push32(0x114d6d09u); f_114d7010();
  /* 114d6d09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6d0b call 0x114cb8a0 */
  push32(0x114d6d10u); f_114cb8a0();
  /* 114d6d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6d15 jmp 0x114d6ea0 */
  goto L_114d6ea0;
L_114d6d1a:;
  /* 114d6d1a jmp 0x114d6bc5 */
  goto L_114d6bc5;
L_114d6d1f:;
  /* 114d6d1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 114d6d22 push edx */
  push32((uint32_t)(EDX));
  /* 114d6d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6d26 push eax */
  push32((uint32_t)(EAX));
  /* 114d6d27 call dword ptr [0x11501374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501374))), 0x114d6d2du);
  /* 114d6d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6d30 jne 0x114d6e72 */
  if (!C.zf) goto L_114d6e72;
  /* 114d6d36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114d6d3d jmp 0x114d6d48 */
  goto L_114d6d48;
L_114d6d3f:;
  /* 114d6d3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6d45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_114d6d48:;
  /* 114d6d48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6d4f jae 0x114d6d5d */
  if (!C.cf) goto L_114d6d5d;
  /* 114d6d51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6d54 mov byte ptr [edx + 0x114ff660], 0 */
  w8((uint32_t)(EDX + 0x114ff660), (0x0u));
  /* 114d6d5b jmp 0x114d6d3f */
  goto L_114d6d3f;
L_114d6d5d:;
  /* 114d6d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6d60 mov dword ptr [0x114ff4cc], eax */
  w32((uint32_t)(0x114ff4cc), (EAX));
  /* 114d6d65 mov dword ptr [0x114ff764], 0 */
  w32((uint32_t)(0x114ff764), (0x0u));
  /* 114d6d6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6d73 jbe 0x114d6e2e */
  if ((C.cf||C.zf)) goto L_114d6e2e;
  /* 114d6d79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 114d6d7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114d6d7f jmp 0x114d6d8a */
  goto L_114d6d8a;
L_114d6d81:;
  /* 114d6d81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d6d84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6d87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_114d6d8a:;
  /* 114d6d8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d6d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d6d8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d6d91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d6d93 je 0x114d6ddc */
  if (C.zf) goto L_114d6ddc;
  /* 114d6d95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d6d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6d9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114d6d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d6d9f je 0x114d6ddc */
  if (C.zf) goto L_114d6ddc;
  /* 114d6da1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d6da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d6da8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114d6dab jmp 0x114d6db6 */
  goto L_114d6db6;
L_114d6dad:;
  /* 114d6dad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6db3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114d6db6:;
  /* 114d6db6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d6db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6dbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 114d6dbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6dc1 ja 0x114d6dda */
  if ((!C.cf&&!C.zf)) goto L_114d6dda;
  /* 114d6dc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6dc6 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d6dcc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 114d6dcf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6dd2 mov byte ptr [edx + 0x114ff661], cl */
  w8((uint32_t)(EDX + 0x114ff661), (CL));
  /* 114d6dd8 jmp 0x114d6dad */
  goto L_114d6dad;
L_114d6dda:;
  /* 114d6dda jmp 0x114d6d81 */
  goto L_114d6d81;
L_114d6ddc:;
  /* 114d6ddc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 114d6de3 jmp 0x114d6dee */
  goto L_114d6dee;
L_114d6de5:;
  /* 114d6de5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6de8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6deb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_114d6dee:;
  /* 114d6dee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6df5 jae 0x114d6e0e */
  if (!C.cf) goto L_114d6e0e;
  /* 114d6df7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6dfa mov dl, byte ptr [ecx + 0x114ff661] */
  DL = (r8((uint32_t)(ECX + 0x114ff661)));
  /* 114d6e00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 114d6e03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d6e06 mov byte ptr [eax + 0x114ff661], dl */
  w8((uint32_t)(EAX + 0x114ff661), (DL));
  /* 114d6e0c jmp 0x114d6de5 */
  goto L_114d6de5;
L_114d6e0e:;
  /* 114d6e0e mov ecx, dword ptr [0x114ff4cc] */
  ECX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d6e14 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6e15 call 0x114d6f10 */
  push32(0x114d6e1au); f_114d6f10();
  /* 114d6e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6e1d mov dword ptr [0x114ff764], eax */
  w32((uint32_t)(0x114ff764), (EAX));
  /* 114d6e22 mov dword ptr [0x114ff55c], 1 */
  w32((uint32_t)(0x114ff55c), (0x1u));
  /* 114d6e2c jmp 0x114d6e38 */
  goto L_114d6e38;
L_114d6e2e:;
  /* 114d6e2e mov dword ptr [0x114ff55c], 0 */
  w32((uint32_t)(0x114ff55c), (0x0u));
L_114d6e38:;
  /* 114d6e38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d6e3f jmp 0x114d6e4a */
  goto L_114d6e4a;
L_114d6e41:;
  /* 114d6e41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6e44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6e47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114d6e4a:;
  /* 114d6e4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6e4e jae 0x114d6e5f */
  if (!C.cf) goto L_114d6e5f;
  /* 114d6e50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d6e53 mov word ptr [eax*2 + 0x114ff550], 0 */
  w16((uint32_t)(EAX*2 + 0x114ff550), (0x0u));
  /* 114d6e5d jmp 0x114d6e41 */
  goto L_114d6e41;
L_114d6e5f:;
  /* 114d6e5f call 0x114d7010 */
  push32(0x114d6e64u); f_114d7010();
  /* 114d6e64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6e66 call 0x114cb8a0 */
  push32(0x114d6e6bu); f_114cb8a0();
  /* 114d6e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6e6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6e70 jmp 0x114d6ea0 */
  goto L_114d6ea0;
L_114d6e72:;
  /* 114d6e72 cmp dword ptr [0x114ff3ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6e79 je 0x114d6e93 */
  if (C.zf) goto L_114d6e93;
  /* 114d6e7b call 0x114d6f90 */
  push32(0x114d6e80u); f_114d6f90();
  /* 114d6e80 call 0x114d7010 */
  push32(0x114d6e85u); f_114d7010();
  /* 114d6e85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6e87 call 0x114cb8a0 */
  push32(0x114d6e8cu); f_114cb8a0();
  /* 114d6e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d6e91 jmp 0x114d6ea0 */
  goto L_114d6ea0;
L_114d6e93:;
  /* 114d6e93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114d6e95 call 0x114cb8a0 */
  push32(0x114d6e9au); f_114cb8a0();
  /* 114d6e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6e9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114d6ea0:;
  /* 114d6ea0 mov esp, ebp */
  ESP = (EBP);
  /* 114d6ea2 pop ebp */
  EBP = (pop32());
  /* 114d6ea3 ret  */
  ESPCHK(0x114d6b60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x114d6eb0 (89 bytes, 21 insns) */
void f_114d6eb0(void) {
  FTRACE(0x114d6eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6eb1 mov ebp, esp */
  EBP = (ESP);
  /* 114d6eb3 mov dword ptr [0x114ff3ec], 0 */
  w32((uint32_t)(0x114ff3ec), (0x0u));
  /* 114d6ebd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6ec1 jne 0x114d6ed5 */
  if (!C.zf) goto L_114d6ed5;
  /* 114d6ec3 mov dword ptr [0x114ff3ec], 1 */
  w32((uint32_t)(0x114ff3ec), (0x1u));
  /* 114d6ecd call dword ptr [0x11501378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501378))), 0x114d6ed3u);
  /* 114d6ed3 jmp 0x114d6f07 */
  goto L_114d6f07;
L_114d6ed5:;
  /* 114d6ed5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6ed9 jne 0x114d6eed */
  if (!C.zf) goto L_114d6eed;
  /* 114d6edb mov dword ptr [0x114ff3ec], 1 */
  w32((uint32_t)(0x114ff3ec), (0x1u));
  /* 114d6ee5 call dword ptr [0x11501370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501370))), 0x114d6eebu);
  /* 114d6eeb jmp 0x114d6f07 */
  goto L_114d6f07;
L_114d6eed:;
  /* 114d6eed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6ef1 jne 0x114d6f04 */
  if (!C.zf) goto L_114d6f04;
  /* 114d6ef3 mov dword ptr [0x114ff3ec], 1 */
  w32((uint32_t)(0x114ff3ec), (0x1u));
  /* 114d6efd mov eax, dword ptr [0x114ff418] */
  EAX = (r32((uint32_t)(0x114ff418)));
  /* 114d6f02 jmp 0x114d6f07 */
  goto L_114d6f07;
L_114d6f04:;
  /* 114d6f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_114d6f07:;
  /* 114d6f07 pop ebp */
  EBP = (pop32());
  /* 114d6f08 ret  */
  ESPCHK(0x114d6eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f10 @ 0x114d6f10 (80 bytes, 26 insns) [1 switch table(s)] */
void f_114d6f10(void) {
  FTRACE(0x114d6f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6f10 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6f11 mov ebp, esp */
  EBP = (ESP);
  /* 114d6f13 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d6f17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d6f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6f1d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d6f23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d6f26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6f2a ja 0x114d6f5a */
  if ((!C.cf&&!C.zf)) goto L_114d6f5a;
  /* 114d6f2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6f2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d6f31 mov dl, byte ptr [eax + 0x114d6f74] */
  DL = (r8((uint32_t)(EAX + 0x114d6f74)));
  /* 114d6f37 jmp dword ptr [edx*4 + 0x114d6f60] */
  switch (EDX) {
    case 0: goto L_114d6f3e;
    case 1: goto L_114d6f45;
    case 2: goto L_114d6f4c;
    case 3: goto L_114d6f53;
    case 4: goto L_114d6f5a;
    default: x86_unimpl("switch@0x114d6f37 out of table"); return;
  }
L_114d6f3e:;
  /* 114d6f3e mov eax, 0x411 */
  EAX = (0x411u);
  /* 114d6f43 jmp 0x114d6f5c */
  goto L_114d6f5c;
L_114d6f45:;
  /* 114d6f45 mov eax, 0x804 */
  EAX = (0x804u);
  /* 114d6f4a jmp 0x114d6f5c */
  goto L_114d6f5c;
L_114d6f4c:;
  /* 114d6f4c mov eax, 0x412 */
  EAX = (0x412u);
  /* 114d6f51 jmp 0x114d6f5c */
  goto L_114d6f5c;
L_114d6f53:;
  /* 114d6f53 mov eax, 0x404 */
  EAX = (0x404u);
  /* 114d6f58 jmp 0x114d6f5c */
  goto L_114d6f5c;
L_114d6f5a:;
  /* 114d6f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d6f5c:;
  /* 114d6f5c mov esp, ebp */
  ESP = (EBP);
  /* 114d6f5e pop ebp */
  EBP = (pop32());
  /* 114d6f5f ret  */
  ESPCHK(0x114d6f10u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x114d6f90 (116 bytes, 29 insns) */
void f_114d6f90(void) {
  FTRACE(0x114d6f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d6f90 push ebp */
  push32((uint32_t)(EBP));
  /* 114d6f91 mov ebp, esp */
  EBP = (ESP);
  /* 114d6f93 push ecx */
  push32((uint32_t)(ECX));
  /* 114d6f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d6f9b jmp 0x114d6fa6 */
  goto L_114d6fa6;
L_114d6f9d:;
  /* 114d6f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6fa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d6fa6:;
  /* 114d6fa6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6fad jge 0x114d6fbb */
  if ((C.sf==C.of)) goto L_114d6fbb;
  /* 114d6faf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6fb2 mov byte ptr [ecx + 0x114ff660], 0 */
  w8((uint32_t)(ECX + 0x114ff660), (0x0u));
  /* 114d6fb9 jmp 0x114d6f9d */
  goto L_114d6f9d;
L_114d6fbb:;
  /* 114d6fbb mov dword ptr [0x114ff4cc], 0 */
  w32((uint32_t)(0x114ff4cc), (0x0u));
  /* 114d6fc5 mov dword ptr [0x114ff55c], 0 */
  w32((uint32_t)(0x114ff55c), (0x0u));
  /* 114d6fcf mov dword ptr [0x114ff764], 0 */
  w32((uint32_t)(0x114ff764), (0x0u));
  /* 114d6fd9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d6fe0 jmp 0x114d6feb */
  goto L_114d6feb;
L_114d6fe2:;
  /* 114d6fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6fe5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d6fe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d6feb:;
  /* 114d6feb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d6fef jge 0x114d7000 */
  if ((C.sf==C.of)) goto L_114d7000;
  /* 114d6ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d6ff4 mov word ptr [eax*2 + 0x114ff550], 0 */
  w16((uint32_t)(EAX*2 + 0x114ff550), (0x0u));
  /* 114d6ffe jmp 0x114d6fe2 */
  goto L_114d6fe2;
L_114d7000:;
  /* 114d7000 mov esp, ebp */
  ESP = (EBP);
  /* 114d7002 pop ebp */
  EBP = (pop32());
  /* 114d7003 ret  */
  ESPCHK(0x114d6f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017010 @ 0x114d7010 (770 bytes, 175 insns) */
void f_114d7010(void) {
  FTRACE(0x114d7010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7010 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7011 mov ebp, esp */
  EBP = (ESP);
  /* 114d7013 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7019 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 114d701f push eax */
  push32((uint32_t)(EAX));
  /* 114d7020 mov ecx, dword ptr [0x114ff4cc] */
  ECX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d7026 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7027 call dword ptr [0x11501374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501374))), 0x114d702du);
  /* 114d702d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7030 jne 0x114d7249 */
  if (!C.zf) goto L_114d7249;
  /* 114d7036 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 114d7040 jmp 0x114d7051 */
  goto L_114d7051;
L_114d7042:;
  /* 114d7042 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d704b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_114d7051:;
  /* 114d7051 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d705b jae 0x114d7072 */
  if (!C.cf) goto L_114d7072;
  /* 114d705d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7063 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 114d7069 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 114d7070 jmp 0x114d7042 */
  goto L_114d7042;
L_114d7072:;
  /* 114d7072 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 114d7079 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 114d707f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d7082 jmp 0x114d708d */
  goto L_114d708d;
L_114d7084:;
  /* 114d7084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d7087 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d708a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d708d:;
  /* 114d708d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d7090 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d7092 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d7094 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7096 je 0x114d70d8 */
  if (C.zf) goto L_114d70d8;
  /* 114d7098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d709b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d709d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d709f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 114d70a5 jmp 0x114d70b6 */
  goto L_114d70b6;
L_114d70a7:;
  /* 114d70a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d70ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d70b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_114d70b6:;
  /* 114d70b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d70b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d70bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114d70be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d70c4 ja 0x114d70d6 */
  if ((!C.cf&&!C.zf)) goto L_114d70d6;
  /* 114d70c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d70cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 114d70d4 jmp 0x114d70a7 */
  goto L_114d70a7;
L_114d70d6:;
  /* 114d70d6 jmp 0x114d7084 */
  goto L_114d7084;
L_114d70d8:;
  /* 114d70d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d70da mov eax, dword ptr [0x114ff764] */
  EAX = (r32((uint32_t)(0x114ff764)));
  /* 114d70df push eax */
  push32((uint32_t)(EAX));
  /* 114d70e0 mov ecx, dword ptr [0x114ff4cc] */
  ECX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d70e6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d70e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 114d70ed push edx */
  push32((uint32_t)(EDX));
  /* 114d70ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d70f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 114d70f9 push eax */
  push32((uint32_t)(EAX));
  /* 114d70fa push 1 */
  push32((uint32_t)(0x1u));
  /* 114d70fc call 0x114d84d0 */
  push32(0x114d7101u); f_114d84d0();
  /* 114d7101 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7104 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d7106 mov ecx, dword ptr [0x114ff4cc] */
  ECX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d710c push ecx */
  push32((uint32_t)(ECX));
  /* 114d710d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d7112 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 114d7118 push edx */
  push32((uint32_t)(EDX));
  /* 114d7119 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d711e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 114d7124 push eax */
  push32((uint32_t)(EAX));
  /* 114d7125 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d712a mov ecx, dword ptr [0x114ff764] */
  ECX = (r32((uint32_t)(0x114ff764)));
  /* 114d7130 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7131 call 0x114d90e0 */
  push32(0x114d7136u); f_114d90e0();
  /* 114d7136 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7139 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d713b mov edx, dword ptr [0x114ff4cc] */
  EDX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d7141 push edx */
  push32((uint32_t)(EDX));
  /* 114d7142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d7147 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 114d714d push eax */
  push32((uint32_t)(EAX));
  /* 114d714e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d7153 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 114d7159 push ecx */
  push32((uint32_t)(ECX));
  /* 114d715a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 114d715f mov edx, dword ptr [0x114ff764] */
  EDX = (r32((uint32_t)(0x114ff764)));
  /* 114d7165 push edx */
  push32((uint32_t)(EDX));
  /* 114d7166 call 0x114d90e0 */
  push32(0x114d716bu); f_114d90e0();
  /* 114d716b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d716e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 114d7178 jmp 0x114d7189 */
  goto L_114d7189;
L_114d717a:;
  /* 114d717a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7183 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_114d7189:;
  /* 114d7189 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7193 jae 0x114d7244 */
  if (!C.cf) goto L_114d7244;
  /* 114d7199 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d719f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d71a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 114d71a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d71ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d71ae je 0x114d71e6 */
  if (C.zf) goto L_114d71e6;
  /* 114d71b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d71b6 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d71bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 114d71bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d71c5 mov byte ptr [edx + 0x114ff661], cl */
  w8((uint32_t)(EDX + 0x114ff661), (CL));
  /* 114d71cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d71d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d71d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 114d71de mov byte ptr [eax + 0x114ff560], dl */
  w8((uint32_t)(EAX + 0x114ff560), (DL));
  /* 114d71e4 jmp 0x114d723f */
  goto L_114d723f;
L_114d71e6:;
  /* 114d71e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d71ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d71ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 114d71f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d71f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d71fb je 0x114d7232 */
  if (C.zf) goto L_114d7232;
  /* 114d71fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7203 mov al, byte ptr [edx + 0x114ff661] */
  AL = (r8((uint32_t)(EDX + 0x114ff661)));
  /* 114d7209 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 114d720b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7211 mov byte ptr [ecx + 0x114ff661], al */
  w8((uint32_t)(ECX + 0x114ff661), (AL));
  /* 114d7217 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d721d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7223 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 114d722a mov byte ptr [edx + 0x114ff560], cl */
  w8((uint32_t)(EDX + 0x114ff560), (CL));
  /* 114d7230 jmp 0x114d723f */
  goto L_114d723f;
L_114d7232:;
  /* 114d7232 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7238 mov byte ptr [edx + 0x114ff560], 0 */
  w8((uint32_t)(EDX + 0x114ff560), (0x0u));
L_114d723f:;
  /* 114d723f jmp 0x114d717a */
  goto L_114d717a;
L_114d7244:;
  /* 114d7244 jmp 0x114d730e */
  goto L_114d730e;
L_114d7249:;
  /* 114d7249 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 114d7253 jmp 0x114d7264 */
  goto L_114d7264;
L_114d7255:;
  /* 114d7255 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d725b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d725e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_114d7264:;
  /* 114d7264 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d726e jae 0x114d730e */
  if (!C.cf) goto L_114d730e;
  /* 114d7274 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d727b jb 0x114d72b8 */
  if (C.cf) goto L_114d72b8;
  /* 114d727d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7284 ja 0x114d72b8 */
  if ((!C.cf&&!C.zf)) goto L_114d72b8;
  /* 114d7286 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d728c mov dl, byte ptr [ecx + 0x114ff661] */
  DL = (r8((uint32_t)(ECX + 0x114ff661)));
  /* 114d7292 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 114d7295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d729b mov byte ptr [eax + 0x114ff661], dl */
  w8((uint32_t)(EAX + 0x114ff661), (DL));
  /* 114d72a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d72aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72b0 mov byte ptr [edx + 0x114ff560], cl */
  w8((uint32_t)(EDX + 0x114ff560), (CL));
  /* 114d72b6 jmp 0x114d7309 */
  goto L_114d7309;
L_114d72b8:;
  /* 114d72b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d72bf jb 0x114d72fc */
  if (C.cf) goto L_114d72fc;
  /* 114d72c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d72c8 ja 0x114d72fc */
  if ((!C.cf&&!C.zf)) goto L_114d72fc;
  /* 114d72ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72d0 mov cl, byte ptr [eax + 0x114ff661] */
  CL = (r8((uint32_t)(EAX + 0x114ff661)));
  /* 114d72d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 114d72d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72df mov byte ptr [edx + 0x114ff661], cl */
  w8((uint32_t)(EDX + 0x114ff661), (CL));
  /* 114d72e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d72ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d72f4 mov byte ptr [ecx + 0x114ff560], al */
  w8((uint32_t)(ECX + 0x114ff560), (AL));
  /* 114d72fa jmp 0x114d7309 */
  goto L_114d7309;
L_114d72fc:;
  /* 114d72fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 114d7302 mov byte ptr [edx + 0x114ff560], 0 */
  w8((uint32_t)(EDX + 0x114ff560), (0x0u));
L_114d7309:;
  /* 114d7309 jmp 0x114d7255 */
  goto L_114d7255;
L_114d730e:;
  /* 114d730e mov esp, ebp */
  ESP = (EBP);
  /* 114d7310 pop ebp */
  EBP = (pop32());
  /* 114d7311 ret  */
  ESPCHK(0x114d7010u, _esp0);
  ESP += 4; return;
}

/* FUN_10017320 @ 0x114d7320 (23 bytes, 9 insns) */
void f_114d7320(void) {
  FTRACE(0x114d7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7320 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7321 mov ebp, esp */
  EBP = (ESP);
  /* 114d7323 cmp dword ptr [0x114ff55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d732a je 0x114d7333 */
  if (C.zf) goto L_114d7333;
  /* 114d732c mov eax, dword ptr [0x114ff4cc] */
  EAX = (r32((uint32_t)(0x114ff4cc)));
  /* 114d7331 jmp 0x114d7335 */
  goto L_114d7335;
L_114d7333:;
  /* 114d7333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d7335:;
  /* 114d7335 pop ebp */
  EBP = (pop32());
  /* 114d7336 ret  */
  ESPCHK(0x114d7320u, _esp0);
  ESP += 4; return;
}

/* FUN_10017340 @ 0x114d7340 (34 bytes, 10 insns) */
void f_114d7340(void) {
  FTRACE(0x114d7340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7340 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7341 mov ebp, esp */
  EBP = (ESP);
  /* 114d7343 cmp dword ptr [0x11500c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d734a jne 0x114d7360 */
  if (!C.zf) goto L_114d7360;
  /* 114d734c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 114d734e call 0x114d6b60 */
  push32(0x114d7353u); f_114d6b60();
  /* 114d7353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7356 mov dword ptr [0x11500c50], 1 */
  w32((uint32_t)(0x11500c50), (0x1u));
L_114d7360:;
  /* 114d7360 pop ebp */
  EBP = (pop32());
  /* 114d7361 ret  */
  ESPCHK(0x114d7340u, _esp0);
  ESP += 4; return;
}

/* FUN_10017370 @ 0x114d7370 (664 bytes, 265 insns) [15 switch table(s)] */
void f_114d7370(void) {
  FTRACE(0x114d7370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7370 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7371 mov ebp, esp */
  EBP = (ESP);
  /* 114d7373 push edi */
  push32((uint32_t)(EDI));
  /* 114d7374 push esi */
  push32((uint32_t)(ESI));
  /* 114d7375 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d737b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114d737e mov eax, ecx */
  EAX = (ECX);
  /* 114d7380 mov edx, ecx */
  EDX = (ECX);
  /* 114d7382 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7384 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7386 jbe 0x114d7390 */
  if ((C.cf||C.zf)) goto L_114d7390;
  /* 114d7388 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d738a jb 0x114d7508 */
  if (C.cf) goto L_114d7508;
L_114d7390:;
  /* 114d7390 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d7396 jne 0x114d73ac */
  if (!C.zf) goto L_114d73ac;
  /* 114d7398 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d739b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d739e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d73a1 jb 0x114d73cc */
  if (C.cf) goto L_114d73cc;
  /* 114d73a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d73a5 jmp dword ptr [edx*4 + 0x114d74b8] */
  switch (EDX) {
    case 0: goto L_114d74c8;
    case 1: goto L_114d74d0;
    case 2: goto L_114d74dc;
    case 3: goto L_114d74f0;
    default: x86_unimpl("switch@0x114d73a5 out of table"); return;
  }
L_114d73ac:;
  /* 114d73ac mov eax, edi */
  EAX = (EDI);
  /* 114d73ae mov edx, 3 */
  EDX = (0x3u);
  /* 114d73b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d73b6 jb 0x114d73c4 */
  if (C.cf) goto L_114d73c4;
  /* 114d73b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d73bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d73bd jmp dword ptr [eax*4 + 0x114d73d0] */
  switch (EAX) {
    case 1: goto L_114d73e0;
    case 2: goto L_114d740c;
    case 3: goto L_114d7430;
    default: x86_unimpl("switch@0x114d73bd out of table"); return;
  }
L_114d73c4:;
  /* 114d73c4 jmp dword ptr [ecx*4 + 0x114d74c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x114d74c8)))); return;
  /* 114d73cb nop  */
  /* nop */
L_114d73cc:;
  /* 114d73cc jmp dword ptr [ecx*4 + 0x114d744c] */
  switch (ECX) {
    case 0: goto L_114d74af;
    case 1: goto L_114d749c;
    case 2: goto L_114d7494;
    case 3: goto L_114d748c;
    case 4: goto L_114d7484;
    case 5: goto L_114d747c;
    case 6: goto L_114d7474;
    case 7: goto L_114d746c;
    default: x86_unimpl("switch@0x114d73cc out of table"); return;
  }
  /* 114d73d3 nop  */
  /* nop */
L_114d73e0:;
  /* 114d73e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d73e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d73e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d73e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d73e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d73ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d73ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d73f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d73f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d73f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d73fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d73fe jb 0x114d73cc */
  if (C.cf) goto L_114d73cc;
  /* 114d7400 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d7402 jmp dword ptr [edx*4 + 0x114d74b8] */
  switch (EDX) {
    case 0: goto L_114d74c8;
    case 1: goto L_114d74d0;
    case 2: goto L_114d74dc;
    case 3: goto L_114d74f0;
    default: x86_unimpl("switch@0x114d7402 out of table"); return;
  }
  /* 114d7409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d740c:;
  /* 114d740c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d740e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d7410 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d7412 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d7415 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d7418 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d741b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d741e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7421 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7424 jb 0x114d73cc */
  if (C.cf) goto L_114d73cc;
  /* 114d7426 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d7428 jmp dword ptr [edx*4 + 0x114d74b8] */
  switch (EDX) {
    case 0: goto L_114d74c8;
    case 1: goto L_114d74d0;
    case 2: goto L_114d74dc;
    case 3: goto L_114d74f0;
    default: x86_unimpl("switch@0x114d7428 out of table"); return;
  }
  /* 114d742f nop  */
  /* nop */
L_114d7430:;
  /* 114d7430 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d7432 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d7434 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d7436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114d7437 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d743a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114d743b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d743e jb 0x114d73cc */
  if (C.cf) goto L_114d73cc;
  /* 114d7440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d7442 jmp dword ptr [edx*4 + 0x114d74b8] */
  switch (EDX) {
    case 0: goto L_114d74c8;
    case 1: goto L_114d74d0;
    case 2: goto L_114d74dc;
    case 3: goto L_114d74f0;
    default: x86_unimpl("switch@0x114d7442 out of table"); return;
  }
  /* 114d7449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d746c:;
  /* 114d746c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 114d7470 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_114d7474:;
  /* 114d7474 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 114d7478 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_114d747c:;
  /* 114d747c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 114d7480 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_114d7484:;
  /* 114d7484 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 114d7488 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_114d748c:;
  /* 114d748c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 114d7490 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_114d7494:;
  /* 114d7494 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 114d7498 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_114d749c:;
  /* 114d749c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 114d74a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 114d74a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114d74ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d74ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114d74af:;
  /* 114d74af jmp dword ptr [edx*4 + 0x114d74b8] */
  switch (EDX) {
    case 0: goto L_114d74c8;
    case 1: goto L_114d74d0;
    case 2: goto L_114d74dc;
    case 3: goto L_114d74f0;
    default: x86_unimpl("switch@0x114d74af out of table"); return;
  }
  /* 114d74b6 mov edi, edi */
  EDI = (EDI);
L_114d74c8:;
  /* 114d74c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d74cb pop esi */
  ESI = (pop32());
  /* 114d74cc pop edi */
  EDI = (pop32());
  /* 114d74cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d74ce ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d74cf nop  */
  /* nop */
L_114d74d0:;
  /* 114d74d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d74d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d74d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d74d7 pop esi */
  ESI = (pop32());
  /* 114d74d8 pop edi */
  EDI = (pop32());
  /* 114d74d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d74da ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d74db nop  */
  /* nop */
L_114d74dc:;
  /* 114d74dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d74de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d74e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d74e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d74e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d74e9 pop esi */
  ESI = (pop32());
  /* 114d74ea pop edi */
  EDI = (pop32());
  /* 114d74eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d74ec ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d74ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d74f0:;
  /* 114d74f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114d74f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114d74f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d74f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d74fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d74fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d7500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7503 pop esi */
  ESI = (pop32());
  /* 114d7504 pop edi */
  EDI = (pop32());
  /* 114d7505 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d7506 ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d7507 nop  */
  /* nop */
L_114d7508:;
  /* 114d7508 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 114d750c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 114d7510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114d7516 jne 0x114d753c */
  if (!C.zf) goto L_114d753c;
  /* 114d7518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d751b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d751e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7521 jb 0x114d7530 */
  if (C.cf) goto L_114d7530;
  /* 114d7523 std  */
  C.df=1;
  /* 114d7524 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d7526 cld  */
  C.df=0;
  /* 114d7527 jmp dword ptr [edx*4 + 0x114d7650] */
  switch (EDX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d7527 out of table"); return;
  }
  /* 114d752e mov edi, edi */
  EDI = (EDI);
L_114d7530:;
  /* 114d7530 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7532 jmp dword ptr [ecx*4 + 0x114d7600] */
  switch (ECX) {
    case 0: goto L_114d7647;
    default: x86_unimpl("switch@0x114d7532 out of table"); return;
  }
  /* 114d7539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d753c:;
  /* 114d753c mov eax, edi */
  EAX = (EDI);
  /* 114d753e mov edx, 3 */
  EDX = (0x3u);
  /* 114d7543 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7546 jb 0x114d7554 */
  if (C.cf) goto L_114d7554;
  /* 114d7548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d754b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d754d jmp dword ptr [eax*4 + 0x114d7558] */
  switch (EAX) {
    case 1: goto L_114d7568;
    case 2: goto L_114d7588;
    case 3: goto L_114d75b0;
    default: x86_unimpl("switch@0x114d754d out of table"); return;
  }
L_114d7554:;
  /* 114d7554 jmp dword ptr [ecx*4 + 0x114d7650] */
  switch (ECX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d7554 out of table"); return;
  }
  /* 114d755b nop  */
  /* nop */
L_114d7568:;
  /* 114d7568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d756b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d756d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d7570 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 114d7571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d7574 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 114d7575 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7578 jb 0x114d7530 */
  if (C.cf) goto L_114d7530;
  /* 114d757a std  */
  C.df=1;
  /* 114d757b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d757d cld  */
  C.df=0;
  /* 114d757e jmp dword ptr [edx*4 + 0x114d7650] */
  switch (EDX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d757e out of table"); return;
  }
  /* 114d7585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d7588:;
  /* 114d7588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d758b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d758d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d7590 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d7593 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d7596 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d7599 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d759c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d759f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d75a2 jb 0x114d7530 */
  if (C.cf) goto L_114d7530;
  /* 114d75a4 std  */
  C.df=1;
  /* 114d75a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d75a7 cld  */
  C.df=0;
  /* 114d75a8 jmp dword ptr [edx*4 + 0x114d7650] */
  switch (EDX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d75a8 out of table"); return;
  }
  /* 114d75af nop  */
  /* nop */
L_114d75b0:;
  /* 114d75b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d75b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d75b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d75b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d75bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d75be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d75c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d75c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d75c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d75ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d75cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d75d0 jb 0x114d7530 */
  if (C.cf) goto L_114d7530;
  /* 114d75d6 std  */
  C.df=1;
  /* 114d75d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114d75d9 cld  */
  C.df=0;
  /* 114d75da jmp dword ptr [edx*4 + 0x114d7650] */
  switch (EDX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d75da out of table"); return;
  }
  /* 114d75e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 114d75e4 add al, 0x76 */
  { uint32_t _a=(AL),_b=(0x76u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d75e6 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75e7 adc dword ptr [esi + esi*2], ecx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75ea dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75eb adc dword ptr [esi + esi*2], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75ee dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75ef adc dword ptr [esi + esi*2], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75f2 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75f3 adc dword ptr [esi + esi*2], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75f6 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75f7 adc dword ptr [esi + esi*2], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75fa dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d75fb adc dword ptr [esi + esi*2], esi */
  { uint32_t _a=(r32((uint32_t)(ESI + ESI*2))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + ESI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 114d75fe dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 114d7604 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 114d7608 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 114d760c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 114d7610 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 114d7614 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 114d7618 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 114d761c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 114d7620 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 114d7624 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 114d7628 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 114d762c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 114d7630 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 114d7634 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 114d7638 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 114d763c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114d7643 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7645 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114d7647:;
  /* 114d7647 jmp dword ptr [edx*4 + 0x114d7650] */
  switch (EDX) {
    case 0: goto L_114d7660;
    case 1: goto L_114d7668;
    case 2: goto L_114d7678;
    case 3: goto L_114d768c;
    default: x86_unimpl("switch@0x114d7647 out of table"); return;
  }
  /* 114d764e mov edi, edi */
  EDI = (EDI);
L_114d7660:;
  /* 114d7660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7663 pop esi */
  ESI = (pop32());
  /* 114d7664 pop edi */
  EDI = (pop32());
  /* 114d7665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d7666 ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d7667 nop  */
  /* nop */
L_114d7668:;
  /* 114d7668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d766b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d766e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7671 pop esi */
  ESI = (pop32());
  /* 114d7672 pop edi */
  EDI = (pop32());
  /* 114d7673 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d7674 ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d7675 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114d7678:;
  /* 114d7678 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d767b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d767e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d7681 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d7684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7687 pop esi */
  ESI = (pop32());
  /* 114d7688 pop edi */
  EDI = (pop32());
  /* 114d7689 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d768a ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
  /* 114d768b nop  */
  /* nop */
L_114d768c:;
  /* 114d768c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114d768f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114d7692 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 114d7695 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114d7698 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114d769b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114d769e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d76a1 pop esi */
  ESI = (pop32());
  /* 114d76a2 pop edi */
  EDI = (pop32());
  /* 114d76a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114d76a4 ret  */
  ESPCHK(0x114d7370u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x114d76b0 (145 bytes, 42 insns) */
void f_114d76b0(void) {
  FTRACE(0x114d76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d76b1 mov ebp, esp */
  EBP = (ESP);
  /* 114d76b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d76b4 call 0x114d7760 */
  push32(0x114d76b9u); f_114d7760();
  /* 114d76b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d76bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d76be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d76c5 jmp 0x114d76d0 */
  goto L_114d76d0;
L_114d76c7:;
  /* 114d76c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d76ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d76cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d76d0:;
  /* 114d76d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d76d4 jae 0x114d76fa */
  if (!C.cf) goto L_114d76fa;
  /* 114d76d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d76d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d76dc cmp ecx, dword ptr [eax*8 + 0x114fd7d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114fd7d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d76e3 jne 0x114d76f8 */
  if (!C.zf) goto L_114d76f8;
  /* 114d76e5 call 0x114d7750 */
  push32(0x114d76eau); f_114d7750();
  /* 114d76ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d76ed mov ecx, dword ptr [edx*8 + 0x114fd7d4] */
  ECX = (r32((uint32_t)(EDX*8 + 0x114fd7d4)));
  /* 114d76f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114d76f6 jmp 0x114d773d */
  goto L_114d773d;
L_114d76f8:;
  /* 114d76f8 jmp 0x114d76c7 */
  goto L_114d76c7;
L_114d76fa:;
  /* 114d76fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d76fe jb 0x114d7713 */
  if (C.cf) goto L_114d7713;
  /* 114d7700 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7704 ja 0x114d7713 */
  if ((!C.cf&&!C.zf)) goto L_114d7713;
  /* 114d7706 call 0x114d7750 */
  push32(0x114d770bu); f_114d7750();
  /* 114d770b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 114d7711 jmp 0x114d773d */
  goto L_114d773d;
L_114d7713:;
  /* 114d7713 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d771a jb 0x114d7732 */
  if (C.cf) goto L_114d7732;
  /* 114d771c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7723 ja 0x114d7732 */
  if ((!C.cf&&!C.zf)) goto L_114d7732;
  /* 114d7725 call 0x114d7750 */
  push32(0x114d772au); f_114d7750();
  /* 114d772a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 114d7730 jmp 0x114d773d */
  goto L_114d773d;
L_114d7732:;
  /* 114d7732 call 0x114d7750 */
  push32(0x114d7737u); f_114d7750();
  /* 114d7737 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_114d773d:;
  /* 114d773d mov esp, ebp */
  ESP = (EBP);
  /* 114d773f pop ebp */
  EBP = (pop32());
  /* 114d7740 ret  */
  ESPCHK(0x114d76b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017750 @ 0x114d7750 (13 bytes, 6 insns) */
void f_114d7750(void) {
  FTRACE(0x114d7750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7750 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7751 mov ebp, esp */
  EBP = (ESP);
  /* 114d7753 call 0x114ce600 */
  push32(0x114d7758u); f_114ce600();
  /* 114d7758 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d775b pop ebp */
  EBP = (pop32());
  /* 114d775c ret  */
  ESPCHK(0x114d7750u, _esp0);
  ESP += 4; return;
}

/* FUN_10017760 @ 0x114d7760 (13 bytes, 6 insns) */
void f_114d7760(void) {
  FTRACE(0x114d7760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7760 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7761 mov ebp, esp */
  EBP = (ESP);
  /* 114d7763 call 0x114ce600 */
  push32(0x114d7768u); f_114ce600();
  /* 114d7768 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d776b pop ebp */
  EBP = (pop32());
  /* 114d776c ret  */
  ESPCHK(0x114d7760u, _esp0);
  ESP += 4; return;
}

/* FUN_10017770 @ 0x114d7770 (85 bytes, 32 insns) */
void f_114d7770(void) {
  FTRACE(0x114d7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7770 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7771 mov ebp, esp */
  EBP = (ESP);
  /* 114d7773 cmp dword ptr [0x114fda10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fda10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d777a jne 0x114d77a4 */
  if (!C.zf) goto L_114d77a4;
  /* 114d777c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d777f push eax */
  push32((uint32_t)(EAX));
  /* 114d7780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7783 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7784 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7787 push edx */
  push32((uint32_t)(EDX));
  /* 114d7788 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d778a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d778c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d778f push eax */
  push32((uint32_t)(EAX));
  /* 114d7790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7793 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7797 push edx */
  push32((uint32_t)(EDX));
  /* 114d7798 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d779a call 0x114d8220 */
  push32(0x114d779fu); f_114d8220();
  /* 114d779f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d77a2 jmp 0x114d77c3 */
  goto L_114d77c3;
L_114d77a4:;
  /* 114d77a4 call 0x114d7750 */
  push32(0x114d77a9u); f_114d7750();
  /* 114d77a9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 114d77af push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d77b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d77b7 push eax */
  push32((uint32_t)(EAX));
  /* 114d77b8 call 0x114d8410 */
  push32(0x114d77bdu); f_114d8410();
  /* 114d77bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d77c0 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_114d77c3:;
  /* 114d77c3 pop ebp */
  EBP = (pop32());
  /* 114d77c4 ret  */
  ESPCHK(0x114d7770u, _esp0);
  ESP += 4; return;
}

/* FUN_100177d0 @ 0x114d77d0 (103 bytes, 39 insns) */
void f_114d77d0(void) {
  FTRACE(0x114d77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d77d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d77d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d77d6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 114d77d9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 114d77dc fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 114d77df cmp dword ptr [0x114fda10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fda10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d77e6 jne 0x114d7814 */
  if (!C.zf) goto L_114d7814;
  /* 114d77e8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d77eb push eax */
  push32((uint32_t)(EAX));
  /* 114d77ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d77ef push ecx */
  push32((uint32_t)(ECX));
  /* 114d77f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d77f3 push edx */
  push32((uint32_t)(EDX));
  /* 114d77f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d77f7 push eax */
  push32((uint32_t)(EAX));
  /* 114d77f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d77fb push ecx */
  push32((uint32_t)(ECX));
  /* 114d77fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d77ff push edx */
  push32((uint32_t)(EDX));
  /* 114d7800 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7803 push eax */
  push32((uint32_t)(EAX));
  /* 114d7804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7807 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7808 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d780a call 0x114d8220 */
  push32(0x114d780fu); f_114d8220();
  /* 114d780f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7812 jmp 0x114d7833 */
  goto L_114d7833;
L_114d7814:;
  /* 114d7814 call 0x114d7750 */
  push32(0x114d7819u); f_114d7750();
  /* 114d7819 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 114d781f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d7824 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d7827 push edx */
  push32((uint32_t)(EDX));
  /* 114d7828 call 0x114d8410 */
  push32(0x114d782du); f_114d8410();
  /* 114d782d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7830 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_114d7833:;
  /* 114d7833 mov esp, ebp */
  ESP = (EBP);
  /* 114d7835 pop ebp */
  EBP = (pop32());
  /* 114d7836 ret  */
  ESPCHK(0x114d77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017840 @ 0x114d7840 (178 bytes, 71 insns) */
void f_114d7840(void) {
  FTRACE(0x114d7840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7840 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7841 mov ebp, esp */
  EBP = (ESP);
  /* 114d7843 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7846 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d7849 push eax */
  push32((uint32_t)(EAX));
  /* 114d784a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 114d784d push ecx */
  push32((uint32_t)(ECX));
  /* 114d784e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7851 push edx */
  push32((uint32_t)(EDX));
  /* 114d7852 call 0x114d7ea0 */
  push32(0x114d7857u); f_114d7ea0();
  /* 114d7857 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d785a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d785c jne 0x114d7886 */
  if (!C.zf) goto L_114d7886;
  /* 114d785e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d7861 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 114d7863 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d7866 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 114d7869 push ecx */
  push32((uint32_t)(ECX));
  /* 114d786a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114d786d push edx */
  push32((uint32_t)(EDX));
  /* 114d786e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7871 push eax */
  push32((uint32_t)(EAX));
  /* 114d7872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7875 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7876 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 114d7879 push edx */
  push32((uint32_t)(EDX));
  /* 114d787a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 114d787d push eax */
  push32((uint32_t)(EAX));
  /* 114d787e call 0x114d79d0 */
  push32(0x114d7883u); f_114d79d0();
  /* 114d7883 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d7886:;
  /* 114d7886 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7889 push ecx */
  push32((uint32_t)(ECX));
  /* 114d788a call 0x114d8340 */
  push32(0x114d788fu); f_114d8340();
  /* 114d788f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7892 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d7895 cmp dword ptr [0x114fda10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fda10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d789c jne 0x114d78ce */
  if (!C.zf) goto L_114d78ce;
  /* 114d789e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d78a2 je 0x114d78ce */
  if (C.zf) goto L_114d78ce;
  /* 114d78a4 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d78a7 push edx */
  push32((uint32_t)(EDX));
  /* 114d78a8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d78ab push eax */
  push32((uint32_t)(EAX));
  /* 114d78ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d78af push ecx */
  push32((uint32_t)(ECX));
  /* 114d78b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d78b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d78b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d78b7 push edx */
  push32((uint32_t)(EDX));
  /* 114d78b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d78bb push eax */
  push32((uint32_t)(EAX));
  /* 114d78bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d78bf push ecx */
  push32((uint32_t)(ECX));
  /* 114d78c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d78c3 push edx */
  push32((uint32_t)(EDX));
  /* 114d78c4 call 0x114d8220 */
  push32(0x114d78c9u); f_114d8220();
  /* 114d78c9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d78cc jmp 0x114d78ee */
  goto L_114d78ee;
L_114d78ce:;
  /* 114d78ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d78d1 push eax */
  push32((uint32_t)(EAX));
  /* 114d78d2 call 0x114d82c0 */
  push32(0x114d78d7u); f_114d82c0();
  /* 114d78d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d78da push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d78df mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d78e2 push ecx */
  push32((uint32_t)(ECX));
  /* 114d78e3 call 0x114d8410 */
  push32(0x114d78e8u); f_114d8410();
  /* 114d78e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d78eb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_114d78ee:;
  /* 114d78ee mov esp, ebp */
  ESP = (EBP);
  /* 114d78f0 pop ebp */
  EBP = (pop32());
  /* 114d78f1 ret  */
  ESPCHK(0x114d7840u, _esp0);
  ESP += 4; return;
}

/* FUN_10017900 @ 0x114d7900 (206 bytes, 81 insns) */
void f_114d7900(void) {
  FTRACE(0x114d7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7900 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7901 mov ebp, esp */
  EBP = (ESP);
  /* 114d7903 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7906 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d7909 push eax */
  push32((uint32_t)(EAX));
  /* 114d790a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 114d790d push ecx */
  push32((uint32_t)(ECX));
  /* 114d790e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7911 push edx */
  push32((uint32_t)(EDX));
  /* 114d7912 call 0x114d7ea0 */
  push32(0x114d7917u); f_114d7ea0();
  /* 114d7917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d791a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d791c jne 0x114d795e */
  if (!C.zf) goto L_114d795e;
  /* 114d791e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d7921 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114d7923 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d7926 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d7929 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d792c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d792f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114d7932 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d7935 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 114d7938 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d793b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 114d793e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 114d7941 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7942 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114d7945 push edx */
  push32((uint32_t)(EDX));
  /* 114d7946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7949 push eax */
  push32((uint32_t)(EAX));
  /* 114d794a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d794d push ecx */
  push32((uint32_t)(ECX));
  /* 114d794e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 114d7951 push edx */
  push32((uint32_t)(EDX));
  /* 114d7952 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 114d7955 push eax */
  push32((uint32_t)(EAX));
  /* 114d7956 call 0x114d79d0 */
  push32(0x114d795bu); f_114d79d0();
  /* 114d795b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d795e:;
  /* 114d795e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7961 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7962 call 0x114d8340 */
  push32(0x114d7967u); f_114d8340();
  /* 114d7967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d796a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d796d cmp dword ptr [0x114fda10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fda10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7974 jne 0x114d79aa */
  if (!C.zf) goto L_114d79aa;
  /* 114d7976 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d797a je 0x114d79aa */
  if (C.zf) goto L_114d79aa;
  /* 114d797c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d797f push edx */
  push32((uint32_t)(EDX));
  /* 114d7980 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 114d7983 push eax */
  push32((uint32_t)(EAX));
  /* 114d7984 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d7987 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7988 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d798b push edx */
  push32((uint32_t)(EDX));
  /* 114d798c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d798f push eax */
  push32((uint32_t)(EAX));
  /* 114d7990 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d7993 push ecx */
  push32((uint32_t)(ECX));
  /* 114d7994 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7997 push edx */
  push32((uint32_t)(EDX));
  /* 114d7998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d799b push eax */
  push32((uint32_t)(EAX));
  /* 114d799c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d799f push ecx */
  push32((uint32_t)(ECX));
  /* 114d79a0 call 0x114d8220 */
  push32(0x114d79a5u); f_114d8220();
  /* 114d79a5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d79a8 jmp 0x114d79ca */
  goto L_114d79ca;
L_114d79aa:;
  /* 114d79aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d79ad push edx */
  push32((uint32_t)(EDX));
  /* 114d79ae call 0x114d82c0 */
  push32(0x114d79b3u); f_114d82c0();
  /* 114d79b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d79b6 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d79bb mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d79be push eax */
  push32((uint32_t)(EAX));
  /* 114d79bf call 0x114d8410 */
  push32(0x114d79c4u); f_114d8410();
  /* 114d79c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d79c7 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_114d79ca:;
  /* 114d79ca mov esp, ebp */
  ESP = (EBP);
  /* 114d79cc pop ebp */
  EBP = (pop32());
  /* 114d79cd ret  */
  ESPCHK(0x114d7900u, _esp0);
  ESP += 4; return;
}

/* FUN_100179d0 @ 0x114d79d0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_114d79d0(void) {
  FTRACE(0x114d79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d79d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d79d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d79d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d79d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114d79e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d79e3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 114d79ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d79ed mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 114d79f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d79f7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d79fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d79fc je 0x114d7a14 */
  if (C.zf) goto L_114d7a14;
  /* 114d79fe mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 114d7a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d7a0b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7a0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d7a14:;
  /* 114d7a14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7a17 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7a1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7a1c je 0x114d7a33 */
  if (C.zf) goto L_114d7a33;
  /* 114d7a1e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 114d7a25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d7a2b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 114d7a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_114d7a33:;
  /* 114d7a33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7a36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7a3b je 0x114d7a53 */
  if (C.zf) goto L_114d7a53;
  /* 114d7a3d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 114d7a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d7a4a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7a4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a50 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_114d7a53:;
  /* 114d7a53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7a56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d7a5b je 0x114d7a73 */
  if (C.zf) goto L_114d7a73;
  /* 114d7a5d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 114d7a64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a67 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d7a6a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_114d7a73:;
  /* 114d7a73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7a76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7a79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7a7b je 0x114d7a92 */
  if (C.zf) goto L_114d7a92;
  /* 114d7a7d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 114d7a84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d7a8a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 114d7a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7a8f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_114d7a92:;
  /* 114d7a92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7a95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7a97 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7a9a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7a9c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7a9e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114d7a9f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7aa2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114d7aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7aa8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d7aab and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7aae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d7ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ab3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d7ab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7ab9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7abb and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7abe neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7ac0 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7ac2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114d7ac3 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7ac6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 114d7ac9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7acc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d7acf and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7ad2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d7ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ad7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d7ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7add mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7adf and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7ae2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7ae4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7ae6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114d7ae7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7aea shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114d7aed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7af0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d7af3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 114d7af5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114d7af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7afa mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114d7afd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7b00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7b02 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7b05 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7b07 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7b09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114d7b0a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7b0d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d7b0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b12 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d7b15 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b18 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b1d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d7b20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7b23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7b25 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b28 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d7b2a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7b2c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114d7b2d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d7b36 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 114d7b39 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d7b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b3e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114d7b41 call 0x114d83d0 */
  push32(0x114d7b46u); f_114d83d0();
  /* 114d7b46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d7b49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d7b4c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7b4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d7b51 je 0x114d7b62 */
  if (C.zf) goto L_114d7b62;
  /* 114d7b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b56 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d7b59 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b5f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_114d7b62:;
  /* 114d7b62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d7b65 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7b68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7b6a je 0x114d7b7a */
  if (C.zf) goto L_114d7b7a;
  /* 114d7b6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b6f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114d7b72 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 114d7b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b77 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_114d7b7a:;
  /* 114d7b7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d7b7d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7b80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7b82 je 0x114d7b93 */
  if (C.zf) goto L_114d7b93;
  /* 114d7b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b87 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114d7b8a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7b90 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_114d7b93:;
  /* 114d7b93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d7b96 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d7b9b je 0x114d7bac */
  if (C.zf) goto L_114d7bac;
  /* 114d7b9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ba0 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114d7ba3 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ba9 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_114d7bac:;
  /* 114d7bac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d7baf and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7bb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7bb4 je 0x114d7bc4 */
  if (C.zf) goto L_114d7bc4;
  /* 114d7bb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7bb9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114d7bbc or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114d7bbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7bc1 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_114d7bc4:;
  /* 114d7bc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7bc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7bc9 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7bce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d7bd1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7bd8 ja 0x114d7bf4 */
  if ((!C.cf&&!C.zf)) goto L_114d7bf4;
  /* 114d7bda cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7be1 je 0x114d7c0e */
  if (C.zf) goto L_114d7c0e;
  /* 114d7be3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7be7 je 0x114d7c32 */
  if (C.zf) goto L_114d7c32;
  /* 114d7be9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7bf0 je 0x114d7c20 */
  if (C.zf) goto L_114d7c20;
  /* 114d7bf2 jmp 0x114d7c3f */
  goto L_114d7c3f;
L_114d7bf4:;
  /* 114d7bf4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7bfb je 0x114d7bff */
  if (C.zf) goto L_114d7bff;
  /* 114d7bfd jmp 0x114d7c3f */
  goto L_114d7c3f;
L_114d7bff:;
  /* 114d7bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7c04 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c0a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7c0c jmp 0x114d7c3f */
  goto L_114d7c3f;
L_114d7c0e:;
  /* 114d7c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7c13 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c16 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7c1e jmp 0x114d7c3f */
  goto L_114d7c3f;
L_114d7c20:;
  /* 114d7c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7c25 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c28 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7c30 jmp 0x114d7c3f */
  goto L_114d7c3f;
L_114d7c32:;
  /* 114d7c32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7c37 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c3d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d7c3f:;
  /* 114d7c3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7c42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7c44 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7c4a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114d7c4d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7c51 je 0x114d7c88 */
  if (C.zf) goto L_114d7c88;
  /* 114d7c53 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7c5a je 0x114d7c76 */
  if (C.zf) goto L_114d7c76;
  /* 114d7c5c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7c63 je 0x114d7c67 */
  if (C.zf) goto L_114d7c67;
  /* 114d7c65 jmp 0x114d7c98 */
  goto L_114d7c98;
L_114d7c67:;
  /* 114d7c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7c6c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7c6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d7c74 jmp 0x114d7c98 */
  goto L_114d7c98;
L_114d7c76:;
  /* 114d7c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7c7b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7c7e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7c81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114d7c86 jmp 0x114d7c98 */
  goto L_114d7c98;
L_114d7c88:;
  /* 114d7c88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c8b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7c8d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7c90 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7c96 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d7c98:;
  /* 114d7c98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d7c9b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d7ca0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114d7ca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ca6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7ca8 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 114d7cae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114d7cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7cb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cb8 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114d7cbb or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7cbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cc1 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 114d7cc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cc7 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 114d7cca and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7ccd or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7cd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cd3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 114d7cd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cd9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d7cdc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7cde mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 114d7ce1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d7ce4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 114d7ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cea mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 114d7ced or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7cf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cf3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 114d7cf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7cf9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 114d7cfc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7cff or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7d02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d05 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 114d7d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d0b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d7d0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7d10 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 114d7d13 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d7d16 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 114d7d19 call 0x114d83f0 */
  push32(0x114d7d1eu); f_114d83f0();
  /* 114d7d1e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 114d7d21 push edx */
  push32((uint32_t)(EDX));
  /* 114d7d22 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d7d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d7d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d7d29 push eax */
  push32((uint32_t)(EAX));
  /* 114d7d2a call dword ptr [0x11501368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501368))), 0x114d7d30u);
  /* 114d7d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d7d36 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114d7d39 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7d3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7d3e je 0x114d7d4d */
  if (C.zf) goto L_114d7d4d;
  /* 114d7d40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7d45 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 114d7d48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d7d4d:;
  /* 114d7d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d50 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d7d53 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 114d7d56 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7d59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7d5b je 0x114d7d69 */
  if (C.zf) goto L_114d7d69;
  /* 114d7d5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7d62 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 114d7d64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d67 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114d7d69:;
  /* 114d7d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d6c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d7d6f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114d7d72 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d7d77 je 0x114d7d86 */
  if (C.zf) goto L_114d7d86;
  /* 114d7d79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7d7e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7d81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d7d86:;
  /* 114d7d86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7d89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d7d8c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d7d8e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7d91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7d93 je 0x114d7da2 */
  if (C.zf) goto L_114d7da2;
  /* 114d7d95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7d98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d7d9a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 114d7d9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7da0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114d7da2:;
  /* 114d7da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7da5 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d7da8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7dab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7dad je 0x114d7dbb */
  if (C.zf) goto L_114d7dbb;
  /* 114d7daf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7db2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7db4 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 114d7db6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7db9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114d7dbb:;
  /* 114d7dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7dbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7dc0 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7dc3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d7dc6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7dca ja 0x114d7e19 */
  if ((!C.cf&&!C.zf)) goto L_114d7e19;
  /* 114d7dcc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d7dcf jmp dword ptr [ecx*4 + 0x114d7e81] */
  switch (ECX) {
    case 0: goto L_114d7e0c;
    case 1: goto L_114d7dfa;
    case 2: goto L_114d7de8;
    case 3: goto L_114d7dd6;
    default: x86_unimpl("switch@0x114d7dcf out of table"); return;
  }
L_114d7dd6:;
  /* 114d7dd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7dd9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7ddb and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 114d7dde or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 114d7de1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7de4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d7de6 jmp 0x114d7e19 */
  goto L_114d7e19;
L_114d7de8:;
  /* 114d7de8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7deb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7ded and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 114d7df0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 114d7df3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7df6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d7df8 jmp 0x114d7e19 */
  goto L_114d7e19;
L_114d7dfa:;
  /* 114d7dfa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7dfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7dff and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 114d7e02 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 114d7e05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e08 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114d7e0a jmp 0x114d7e19 */
  goto L_114d7e19;
L_114d7e0c:;
  /* 114d7e0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e0f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7e11 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 114d7e14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e17 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114d7e19:;
  /* 114d7e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7e1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d7e1e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114d7e21 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7e24 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d7e27 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7e2b je 0x114d7e3b */
  if (C.zf) goto L_114d7e3b;
  /* 114d7e2d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7e31 je 0x114d7e4d */
  if (C.zf) goto L_114d7e4d;
  /* 114d7e33 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7e37 je 0x114d7e5f */
  if (C.zf) goto L_114d7e5f;
  /* 114d7e39 jmp 0x114d7e6c */
  goto L_114d7e6c;
L_114d7e3b:;
  /* 114d7e3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7e40 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d7e43 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d7e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e49 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7e4b jmp 0x114d7e6c */
  goto L_114d7e6c;
L_114d7e4d:;
  /* 114d7e4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7e52 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d7e55 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d7e58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d7e5d jmp 0x114d7e6c */
  goto L_114d7e6c;
L_114d7e5f:;
  /* 114d7e5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d7e64 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114d7e67 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7e6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114d7e6c:;
  /* 114d7e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7e6f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d7e72 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 114d7e75 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d7e77 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 114d7e7a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d7e7d mov esp, ebp */
  ESP = (EBP);
  /* 114d7e7f pop ebp */
  EBP = (pop32());
  /* 114d7e80 ret  */
  ESPCHK(0x114d79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ea0 @ 0x114d7ea0 (882 bytes, 268 insns) */
void f_114d7ea0(void) {
  FTRACE(0x114d7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 114d7ea3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d7ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7ea9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114d7eac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d7eaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7eb2 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7eb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7eb7 je 0x114d7eda */
  if (C.zf) goto L_114d7eda;
  /* 114d7eb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7ebc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7ebf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7ec1 je 0x114d7eda */
  if (C.zf) goto L_114d7eda;
  /* 114d7ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d7ec5 call 0x114d8450 */
  push32(0x114d7ecau); f_114d8450();
  /* 114d7eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d7ed0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 114d7ed2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d7ed5 jmp 0x114d81de */
  goto L_114d81de;
L_114d7eda:;
  /* 114d7eda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7edd and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7ee0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7ee2 je 0x114d7f05 */
  if (C.zf) goto L_114d7f05;
  /* 114d7ee4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7ee7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7eea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7eec je 0x114d7f05 */
  if (C.zf) goto L_114d7f05;
  /* 114d7eee push 4 */
  push32((uint32_t)(0x4u));
  /* 114d7ef0 call 0x114d8450 */
  push32(0x114d7ef5u); f_114d8450();
  /* 114d7ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d7efb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 114d7efd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d7f00 jmp 0x114d81de */
  goto L_114d81de;
L_114d7f05:;
  /* 114d7f05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d7f08 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d7f0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d7f0d je 0x114d8081 */
  if (C.zf) goto L_114d8081;
  /* 114d7f13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7f16 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d7f19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d7f1b je 0x114d8081 */
  if (C.zf) goto L_114d8081;
  /* 114d7f21 push 8 */
  push32((uint32_t)(0x8u));
  /* 114d7f23 call 0x114d8450 */
  push32(0x114d7f28u); f_114d8450();
  /* 114d7f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d7f2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d7f2e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 114d7f33 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d7f36 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7f3d ja 0x114d7f60 */
  if ((!C.cf&&!C.zf)) goto L_114d7f60;
  /* 114d7f3f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7f46 je 0x114d7fb5 */
  if (C.zf) goto L_114d7fb5;
  /* 114d7f48 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7f4c je 0x114d7f72 */
  if (C.zf) goto L_114d7f72;
  /* 114d7f4e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7f55 je 0x114d7ff5 */
  if (C.zf) goto L_114d7ff5;
  /* 114d7f5b jmp 0x114d8073 */
  goto L_114d8073;
L_114d7f60:;
  /* 114d7f60 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d7f67 je 0x114d8035 */
  if (C.zf) goto L_114d8035;
  /* 114d7f6d jmp 0x114d8073 */
  goto L_114d8073;
L_114d7f72:;
  /* 114d7f72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7f75 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 114d7f77 fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d7f7d fnstsw ax */
  AX = fpu_status();
  /* 114d7f7f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 114d7f82 jne 0x114d7f97 */
  if (!C.zf) goto L_114d7f97;
  /* 114d7f84 mov edx, dword ptr [0x114fdb80] */
  EDX = (r32((uint32_t)(0x114fdb80)));
  /* 114d7f8a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 114d7f8d mov eax, dword ptr [0x114fdb84] */
  EAX = (r32((uint32_t)(0x114fdb84)));
  /* 114d7f92 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114d7f95 jmp 0x114d7fa2 */
  goto L_114d7fa2;
L_114d7f97:;
  /* 114d7f97 fld qword ptr [0x114fdb80] */
  fpu_push(rf64((uint32_t)(0x114fdb80)));
  /* 114d7f9d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114d7f9f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_114d7fa2:;
  /* 114d7fa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7fa5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d7fa8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d7faa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d7fad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d7fb0 jmp 0x114d8073 */
  goto L_114d8073;
L_114d7fb5:;
  /* 114d7fb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7fb8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 114d7fba fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d7fc0 fnstsw ax */
  AX = fpu_status();
  /* 114d7fc2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 114d7fc5 jne 0x114d7fda */
  if (!C.zf) goto L_114d7fda;
  /* 114d7fc7 mov edx, dword ptr [0x114fdb80] */
  EDX = (r32((uint32_t)(0x114fdb80)));
  /* 114d7fcd mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 114d7fd0 mov eax, dword ptr [0x114fdb84] */
  EAX = (r32((uint32_t)(0x114fdb84)));
  /* 114d7fd5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114d7fd8 jmp 0x114d7fe5 */
  goto L_114d7fe5;
L_114d7fda:;
  /* 114d7fda fld qword ptr [0x114fdb90] */
  fpu_push(rf64((uint32_t)(0x114fdb90)));
  /* 114d7fe0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114d7fe2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_114d7fe5:;
  /* 114d7fe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7fe8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d7feb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d7fed mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d7ff0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d7ff3 jmp 0x114d8073 */
  goto L_114d8073;
L_114d7ff5:;
  /* 114d7ff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d7ff8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 114d7ffa fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d8000 fnstsw ax */
  AX = fpu_status();
  /* 114d8002 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 114d8005 jne 0x114d801a */
  if (!C.zf) goto L_114d801a;
  /* 114d8007 mov edx, dword ptr [0x114fdb90] */
  EDX = (r32((uint32_t)(0x114fdb90)));
  /* 114d800d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 114d8010 mov eax, dword ptr [0x114fdb94] */
  EAX = (r32((uint32_t)(0x114fdb94)));
  /* 114d8015 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 114d8018 jmp 0x114d8025 */
  goto L_114d8025;
L_114d801a:;
  /* 114d801a fld qword ptr [0x114fdb80] */
  fpu_push(rf64((uint32_t)(0x114fdb80)));
  /* 114d8020 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114d8022 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_114d8025:;
  /* 114d8025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8028 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 114d802b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d802d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d8030 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114d8033 jmp 0x114d8073 */
  goto L_114d8073;
L_114d8035:;
  /* 114d8035 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8038 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 114d803a fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d8040 fnstsw ax */
  AX = fpu_status();
  /* 114d8042 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 114d8045 jne 0x114d805a */
  if (!C.zf) goto L_114d805a;
  /* 114d8047 mov edx, dword ptr [0x114fdb90] */
  EDX = (r32((uint32_t)(0x114fdb90)));
  /* 114d804d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 114d8050 mov eax, dword ptr [0x114fdb94] */
  EAX = (r32((uint32_t)(0x114fdb94)));
  /* 114d8055 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 114d8058 jmp 0x114d8065 */
  goto L_114d8065;
L_114d805a:;
  /* 114d805a fld qword ptr [0x114fdb90] */
  fpu_push(rf64((uint32_t)(0x114fdb90)));
  /* 114d8060 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114d8062 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_114d8065:;
  /* 114d8065 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8068 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114d806b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d806d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d8070 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_114d8073:;
  /* 114d8073 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8076 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 114d8079 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d807c jmp 0x114d81de */
  goto L_114d81de;
L_114d8081:;
  /* 114d8081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8084 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114d8087 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d8089 je 0x114d81de */
  if (C.zf) goto L_114d81de;
  /* 114d808f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8092 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d8095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8097 je 0x114d81de */
  if (C.zf) goto L_114d81de;
  /* 114d809d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d80a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d80a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114d80aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d80ac je 0x114d80b5 */
  if (C.zf) goto L_114d80b5;
  /* 114d80ae mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_114d80b5:;
  /* 114d80b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d80b8 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 114d80ba fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d80c0 fnstsw ax */
  AX = fpu_status();
  /* 114d80c2 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 114d80c5 jne 0x114d81be */
  if (!C.zf) goto L_114d81be;
  /* 114d80cb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 114d80ce push eax */
  push32((uint32_t)(EAX));
  /* 114d80cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d80d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d80d5 push edx */
  push32((uint32_t)(EDX));
  /* 114d80d6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114d80d8 push eax */
  push32((uint32_t)(EAX));
  /* 114d80d9 call 0x114db600 */
  push32(0x114d80deu); f_114db600();
  /* 114d80de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d80e1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 114d80e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d80e7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d80ed mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114d80f0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d80f7 jge 0x114d8111 */
  if ((C.sf==C.of)) goto L_114d8111;
  /* 114d80f9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 114d80fc fmul qword ptr [0x114f9728] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x114f9728)));
  /* 114d8102 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 114d8105 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114d810c jmp 0x114d81ae */
  goto L_114d81ae;
L_114d8111:;
  /* 114d8111 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 114d8114 fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114d811a fnstsw ax */
  AX = fpu_status();
  /* 114d811c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 114d811f je 0x114d812a */
  if (C.zf) goto L_114d812a;
  /* 114d8121 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 114d8128 jmp 0x114d8131 */
  goto L_114d8131;
L_114d812a:;
  /* 114d812a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_114d8131:;
  /* 114d8131 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 114d8134 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 114d8137 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 114d813b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 114d813f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 114d8143 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 114d8147 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 114d814a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 114d814e jmp 0x114d8159 */
  goto L_114d8159;
L_114d8150:;
  /* 114d8150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d8153 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8156 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114d8159:;
  /* 114d8159 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8160 jge 0x114d81a0 */
  if ((C.sf==C.of)) goto L_114d81a0;
  /* 114d8162 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d8165 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d8168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d816a je 0x114d8179 */
  if (C.zf) goto L_114d8179;
  /* 114d816c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8170 jne 0x114d8179 */
  if (!C.zf) goto L_114d8179;
  /* 114d8172 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_114d8179:;
  /* 114d8179 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d817c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d817e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d8181 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8184 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114d8187 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d8189 je 0x114d8196 */
  if (C.zf) goto L_114d8196;
  /* 114d818b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d818e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d8193 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114d8196:;
  /* 114d8196 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8199 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114d819b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d819e jmp 0x114d8150 */
  goto L_114d8150;
L_114d81a0:;
  /* 114d81a0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d81a4 je 0x114d81ae */
  if (C.zf) goto L_114d81ae;
  /* 114d81a6 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 114d81a9 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 114d81ab fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_114d81ae:;
  /* 114d81ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d81b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d81b4 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114d81b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d81b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 114d81bc jmp 0x114d81c5 */
  goto L_114d81c5;
L_114d81be:;
  /* 114d81be mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_114d81c5:;
  /* 114d81c5 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d81c9 je 0x114d81d5 */
  if (C.zf) goto L_114d81d5;
  /* 114d81cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 114d81cd call 0x114d8450 */
  push32(0x114d81d2u); f_114d8450();
  /* 114d81d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d81d5:;
  /* 114d81d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d81d8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 114d81db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d81de:;
  /* 114d81de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d81e1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114d81e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d81e6 je 0x114d8205 */
  if (C.zf) goto L_114d8205;
  /* 114d81e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d81eb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114d81ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d81f0 je 0x114d8205 */
  if (C.zf) goto L_114d8205;
  /* 114d81f2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114d81f4 call 0x114d8450 */
  push32(0x114d81f9u); f_114d8450();
  /* 114d81f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d81fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d81ff and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 114d8202 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d8205:;
  /* 114d8205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8207 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d820b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114d820e mov esp, ebp */
  ESP = (EBP);
  /* 114d8210 pop ebp */
  EBP = (pop32());
  /* 114d8211 ret  */
  ESPCHK(0x114d7ea0u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x114d8220 (155 bytes, 54 insns) */
void f_114d8220(void) {
  FTRACE(0x114d8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8220 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8221 mov ebp, esp */
  EBP = (ESP);
  /* 114d8223 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8226 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8229 push eax */
  push32((uint32_t)(EAX));
  /* 114d822a call 0x114d8300 */
  push32(0x114d822fu); f_114d8300();
  /* 114d822f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8232 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114d8235 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8239 je 0x114d8297 */
  if (C.zf) goto L_114d8297;
  /* 114d823b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d823e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114d8241 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8244 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114d8247 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d824a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d824d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d8250 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114d8253 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d8256 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d8259 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d825c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d825f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 114d8262 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d8265 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d826a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d826d push edx */
  push32((uint32_t)(EDX));
  /* 114d826e call 0x114d8410 */
  push32(0x114d8273u); f_114d8410();
  /* 114d8273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8276 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 114d8279 push eax */
  push32((uint32_t)(EAX));
  /* 114d827a call 0x114d83c0 */
  push32(0x114d827fu); f_114d83c0();
  /* 114d827f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8284 jne 0x114d8292 */
  if (!C.zf) goto L_114d8292;
  /* 114d8286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8289 push ecx */
  push32((uint32_t)(ECX));
  /* 114d828a call 0x114d82c0 */
  push32(0x114d828fu); f_114d82c0();
  /* 114d828f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d8292:;
  /* 114d8292 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 114d8295 jmp 0x114d82b7 */
  goto L_114d82b7;
L_114d8297:;
  /* 114d8297 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 114d829c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 114d829f push edx */
  push32((uint32_t)(EDX));
  /* 114d82a0 call 0x114d8410 */
  push32(0x114d82a5u); f_114d8410();
  /* 114d82a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d82a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d82ab push eax */
  push32((uint32_t)(EAX));
  /* 114d82ac call 0x114d82c0 */
  push32(0x114d82b1u); f_114d82c0();
  /* 114d82b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d82b4 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_114d82b7:;
  /* 114d82b7 mov esp, ebp */
  ESP = (EBP);
  /* 114d82b9 pop ebp */
  EBP = (pop32());
  /* 114d82ba ret  */
  ESPCHK(0x114d8220u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x114d82c0 (58 bytes, 20 insns) */
void f_114d82c0(void) {
  FTRACE(0x114d82c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d82c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d82c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d82c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d82c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d82c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d82ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d82ce je 0x114d82de */
  if (C.zf) goto L_114d82de;
  /* 114d82d0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d82d4 jle 0x114d82f6 */
  if ((C.zf||C.sf!=C.of)) goto L_114d82f6;
  /* 114d82d6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d82da jle 0x114d82eb */
  if ((C.zf||C.sf!=C.of)) goto L_114d82eb;
  /* 114d82dc jmp 0x114d82f6 */
  goto L_114d82f6;
L_114d82de:;
  /* 114d82de call 0x114d7750 */
  push32(0x114d82e3u); f_114d7750();
  /* 114d82e3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 114d82e9 jmp 0x114d82f6 */
  goto L_114d82f6;
L_114d82eb:;
  /* 114d82eb call 0x114d7750 */
  push32(0x114d82f0u); f_114d7750();
  /* 114d82f0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_114d82f6:;
  /* 114d82f6 mov esp, ebp */
  ESP = (EBP);
  /* 114d82f8 pop ebp */
  EBP = (pop32());
  /* 114d82f9 ret  */
  ESPCHK(0x114d82c0u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x114d8300 (63 bytes, 22 insns) */
void f_114d8300(void) {
  FTRACE(0x114d8300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8300 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8301 mov ebp, esp */
  EBP = (ESP);
  /* 114d8303 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d830b jmp 0x114d8316 */
  goto L_114d8316;
L_114d830d:;
  /* 114d830d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d8316:;
  /* 114d8316 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d831a jge 0x114d8339 */
  if ((C.sf==C.of)) goto L_114d8339;
  /* 114d831c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d831f mov edx, dword ptr [ecx*8 + 0x114fd938] */
  EDX = (r32((uint32_t)(ECX*8 + 0x114fd938)));
  /* 114d8326 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8329 jne 0x114d8337 */
  if (!C.zf) goto L_114d8337;
  /* 114d832b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d832e mov eax, dword ptr [eax*8 + 0x114fd93c] */
  EAX = (r32((uint32_t)(EAX*8 + 0x114fd93c)));
  /* 114d8335 jmp 0x114d833b */
  goto L_114d833b;
L_114d8337:;
  /* 114d8337 jmp 0x114d830d */
  goto L_114d830d;
L_114d8339:;
  /* 114d8339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d833b:;
  /* 114d833b mov esp, ebp */
  ESP = (EBP);
  /* 114d833d pop ebp */
  EBP = (pop32());
  /* 114d833e ret  */
  ESPCHK(0x114d8300u, _esp0);
  ESP += 4; return;
}

/* FUN_10018340 @ 0x114d8340 (113 bytes, 38 insns) */
void f_114d8340(void) {
  FTRACE(0x114d8340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8340 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8341 mov ebp, esp */
  EBP = (ESP);
  /* 114d8343 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8347 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 114d834a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d834c je 0x114d8357 */
  if (C.zf) goto L_114d8357;
  /* 114d834e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 114d8355 jmp 0x114d83aa */
  goto L_114d83aa;
L_114d8357:;
  /* 114d8357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d835a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d835d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d835f je 0x114d836a */
  if (C.zf) goto L_114d836a;
  /* 114d8361 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d8368 jmp 0x114d83aa */
  goto L_114d83aa;
L_114d836a:;
  /* 114d836a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d836d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d8370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d8372 je 0x114d837d */
  if (C.zf) goto L_114d837d;
  /* 114d8374 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114d837b jmp 0x114d83aa */
  goto L_114d83aa;
L_114d837d:;
  /* 114d837d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8380 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d8383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8385 je 0x114d8390 */
  if (C.zf) goto L_114d8390;
  /* 114d8387 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 114d838e jmp 0x114d83aa */
  goto L_114d83aa;
L_114d8390:;
  /* 114d8390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8393 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114d8396 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d8398 je 0x114d83a3 */
  if (C.zf) goto L_114d83a3;
  /* 114d839a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 114d83a1 jmp 0x114d83aa */
  goto L_114d83aa;
L_114d83a3:;
  /* 114d83a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114d83aa:;
  /* 114d83aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d83ad mov esp, ebp */
  ESP = (EBP);
  /* 114d83af pop ebp */
  EBP = (pop32());
  /* 114d83b0 ret  */
  ESPCHK(0x114d8340u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x114d83c0 (7 bytes, 5 insns) */
void f_114d83c0(void) {
  FTRACE(0x114d83c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d83c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d83c1 mov ebp, esp */
  EBP = (ESP);
  /* 114d83c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d83c5 pop ebp */
  EBP = (pop32());
  /* 114d83c6 ret  */
  ESPCHK(0x114d83c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100183d0 @ 0x114d83d0 (22 bytes, 15 insns) */
void f_114d83d0(void) {
  FTRACE(0x114d83d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d83d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d83d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d83d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d83d4 push ebx */
  push32((uint32_t)(EBX));
  /* 114d83d5 push esi */
  push32((uint32_t)(ESI));
  /* 114d83d6 push edi */
  push32((uint32_t)(EDI));
  /* 114d83d7 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d83d8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 114d83db movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 114d83df pop edi */
  EDI = (pop32());
  /* 114d83e0 pop esi */
  ESI = (pop32());
  /* 114d83e1 pop ebx */
  EBX = (pop32());
  /* 114d83e2 mov esp, ebp */
  ESP = (EBP);
  /* 114d83e4 pop ebp */
  EBP = (pop32());
  /* 114d83e5 ret  */
  ESPCHK(0x114d83d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100183f0 @ 0x114d83f0 (23 bytes, 15 insns) */
void f_114d83f0(void) {
  FTRACE(0x114d83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d83f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d83f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114d83f4 push ebx */
  push32((uint32_t)(EBX));
  /* 114d83f5 push esi */
  push32((uint32_t)(ESI));
  /* 114d83f6 push edi */
  push32((uint32_t)(EDI));
  /* 114d83f7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 114d83fa fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 114d83fc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 114d8400 pop edi */
  EDI = (pop32());
  /* 114d8401 pop esi */
  ESI = (pop32());
  /* 114d8402 pop ebx */
  EBX = (pop32());
  /* 114d8403 mov esp, ebp */
  ESP = (EBP);
  /* 114d8405 pop ebp */
  EBP = (pop32());
  /* 114d8406 ret  */
  ESPCHK(0x114d83f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018410 @ 0x114d8410 (50 bytes, 24 insns) */
void f_114d8410(void) {
  FTRACE(0x114d8410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8410 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8411 mov ebp, esp */
  EBP = (ESP);
  /* 114d8413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8416 push ebx */
  push32((uint32_t)(EBX));
  /* 114d8417 push esi */
  push32((uint32_t)(ESI));
  /* 114d8418 push edi */
  push32((uint32_t)(EDI));
  /* 114d8419 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d841a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 114d841d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8420 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 114d8423 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 114d8427 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d842a not edx */
  EDX = (~(EDX));
  /* 114d842c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114d842e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8430 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114d8434 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 114d8437 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 114d843b pop edi */
  EDI = (pop32());
  /* 114d843c pop esi */
  ESI = (pop32());
  /* 114d843d pop ebx */
  EBX = (pop32());
  /* 114d843e mov esp, ebp */
  ESP = (EBP);
  /* 114d8440 pop ebp */
  EBP = (pop32());
  /* 114d8441 ret  */
  ESPCHK(0x114d8410u, _esp0);
  ESP += 4; return;
}

/* FUN_10018450 @ 0x114d8450 (117 bytes, 53 insns) */
void f_114d8450(void) {
  FTRACE(0x114d8450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8450 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8451 mov ebp, esp */
  EBP = (ESP);
  /* 114d8453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8456 push ebx */
  push32((uint32_t)(EBX));
  /* 114d8457 push esi */
  push32((uint32_t)(ESI));
  /* 114d8458 push edi */
  push32((uint32_t)(EDI));
  /* 114d8459 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d845c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d845f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8461 je 0x114d846d */
  if (C.zf) goto L_114d846d;
  /* 114d8463 fld xword ptr [0x114fda14] */
  fpu_push(rf80((uint32_t)(0x114fda14)));
  /* 114d8469 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 114d846c wait  */
  /* wait (no observable integer/reg state) */
L_114d846d:;
  /* 114d846d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8470 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 114d8473 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d8475 je 0x114d8487 */
  if (C.zf) goto L_114d8487;
  /* 114d8477 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d8478 fnstsw ax */
  AX = fpu_status();
  /* 114d847a fld xword ptr [0x114fda14] */
  fpu_push(rf80((uint32_t)(0x114fda14)));
  /* 114d8480 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 114d8483 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d8484 wait  */
  /* wait (no observable integer/reg state) */
  /* 114d8485 fnstsw ax */
  AX = fpu_status();
L_114d8487:;
  /* 114d8487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d848a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 114d848d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d848f je 0x114d849b */
  if (C.zf) goto L_114d849b;
  /* 114d8491 fld xword ptr [0x114fda20] */
  fpu_push(rf80((uint32_t)(0x114fda20)));
  /* 114d8497 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 114d849a wait  */
  /* wait (no observable integer/reg state) */
L_114d849b:;
  /* 114d849b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d849e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114d84a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d84a3 je 0x114d84ae */
  if (C.zf) goto L_114d84ae;
  /* 114d84a5 fldz  */
  fpu_push(0.0);
  /* 114d84a7 fld1  */
  fpu_push(1.0);
  /* 114d84a9 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 114d84ab fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 114d84ad wait  */
  /* wait (no observable integer/reg state) */
L_114d84ae:;
  /* 114d84ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d84b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114d84b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d84b6 je 0x114d84be */
  if (C.zf) goto L_114d84be;
  /* 114d84b8 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 114d84ba fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 114d84bd wait  */
  /* wait (no observable integer/reg state) */
L_114d84be:;
  /* 114d84be pop edi */
  EDI = (pop32());
  /* 114d84bf pop esi */
  ESI = (pop32());
  /* 114d84c0 pop ebx */
  EBX = (pop32());
  /* 114d84c1 mov esp, ebp */
  ESP = (EBP);
  /* 114d84c3 pop ebp */
  EBP = (pop32());
  /* 114d84c4 ret  */
  ESPCHK(0x114d8450u, _esp0);
  ESP += 4; return;
}

/* FUN_100184d0 @ 0x114d84d0 (421 bytes, 148 insns) */
void f_114d84d0(void) {
  FTRACE(0x114d84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d84d1 mov ebp, esp */
  EBP = (ESP);
  /* 114d84d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114d84d5 push 0x114fa410 */
  push32((uint32_t)(0x114fa410u));
  /* 114d84da push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114d84df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114d84e5 push eax */
  push32((uint32_t)(EAX));
  /* 114d84e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114d84ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d84f0 push ebx */
  push32((uint32_t)(EBX));
  /* 114d84f1 push esi */
  push32((uint32_t)(ESI));
  /* 114d84f2 push edi */
  push32((uint32_t)(EDI));
  /* 114d84f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114d84f6 cmp dword ptr [0x114ff3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d84fd jne 0x114d854e */
  if (!C.zf) goto L_114d854e;
  /* 114d84ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 114d8502 push eax */
  push32((uint32_t)(EAX));
  /* 114d8503 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d8505 push 0x114fa40c */
  push32((uint32_t)(0x114fa40cu));
  /* 114d850a push 1 */
  push32((uint32_t)(0x1u));
  /* 114d850c call dword ptr [0x1150135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150135c))), 0x114d8512u);
  /* 114d8512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8514 je 0x114d8522 */
  if (C.zf) goto L_114d8522;
  /* 114d8516 mov dword ptr [0x114ff3f0], 1 */
  w32((uint32_t)(0x114ff3f0), (0x1u));
  /* 114d8520 jmp 0x114d854e */
  goto L_114d854e;
L_114d8522:;
  /* 114d8522 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 114d8525 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8526 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d8528 push 0x114fa408 */
  push32((uint32_t)(0x114fa408u));
  /* 114d852d push 1 */
  push32((uint32_t)(0x1u));
  /* 114d852f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d8531 call dword ptr [0x1150136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150136c))), 0x114d8537u);
  /* 114d8537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8539 je 0x114d8547 */
  if (C.zf) goto L_114d8547;
  /* 114d853b mov dword ptr [0x114ff3f0], 2 */
  w32((uint32_t)(0x114ff3f0), (0x2u));
  /* 114d8545 jmp 0x114d854e */
  goto L_114d854e;
L_114d8547:;
  /* 114d8547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8549 jmp 0x114d8678 */
  goto L_114d8678;
L_114d854e:;
  /* 114d854e cmp dword ptr [0x114ff3f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8555 jne 0x114d8585 */
  if (!C.zf) goto L_114d8585;
  /* 114d8557 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d855b jne 0x114d8566 */
  if (!C.zf) goto L_114d8566;
  /* 114d855d mov edx, dword ptr [0x114ff408] */
  EDX = (r32((uint32_t)(0x114ff408)));
  /* 114d8563 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_114d8566:;
  /* 114d8566 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d8569 push eax */
  push32((uint32_t)(EAX));
  /* 114d856a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d856d push ecx */
  push32((uint32_t)(ECX));
  /* 114d856e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8571 push edx */
  push32((uint32_t)(EDX));
  /* 114d8572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8575 push eax */
  push32((uint32_t)(EAX));
  /* 114d8576 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d8579 push ecx */
  push32((uint32_t)(ECX));
  /* 114d857a call dword ptr [0x1150136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150136c))), 0x114d8580u);
  /* 114d8580 jmp 0x114d8678 */
  goto L_114d8678;
L_114d8585:;
  /* 114d8585 cmp dword ptr [0x114ff3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d858c jne 0x114d8676 */
  if (!C.zf) goto L_114d8676;
  /* 114d8592 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8596 jne 0x114d85a1 */
  if (!C.zf) goto L_114d85a1;
  /* 114d8598 mov edx, dword ptr [0x114ff418] */
  EDX = (r32((uint32_t)(0x114ff418)));
  /* 114d859e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_114d85a1:;
  /* 114d85a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d85a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d85a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d85a8 push eax */
  push32((uint32_t)(EAX));
  /* 114d85a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d85ac push ecx */
  push32((uint32_t)(ECX));
  /* 114d85ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d85b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d85b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d85b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d85b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d85ba push edx */
  push32((uint32_t)(EDX));
  /* 114d85bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d85be push eax */
  push32((uint32_t)(EAX));
  /* 114d85bf call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114d85c5u);
  /* 114d85c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114d85c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d85cc jne 0x114d85d5 */
  if (!C.zf) goto L_114d85d5;
  /* 114d85ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d85d0 jmp 0x114d8678 */
  goto L_114d8678;
L_114d85d5:;
  /* 114d85d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d85dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d85df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d85e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d85e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114d85e6 call 0x114d1320 */
  push32(0x114d85ebu); f_114d1320();
  /* 114d85eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 114d85ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114d85f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d85f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114d85f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d85fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d85fc push edx */
  push32((uint32_t)(EDX));
  /* 114d85fd push 0 */
  push32((uint32_t)(0x0u));
  /* 114d85ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d8602 push eax */
  push32((uint32_t)(EAX));
  /* 114d8603 call 0x114d2e30 */
  push32(0x114d8608u); f_114d2e30();
  /* 114d8608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d860b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114d8612 jmp 0x114d862b */
  goto L_114d862b;
  /* 114d8614 mov eax, 1 */
  EAX = (0x1u);
  /* 114d8619 ret  */
  ESPCHK(0x114d84d0u, _esp0);
  ESP += 4; return;
  /* 114d861a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114d861d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114d8624 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114d862b:;
  /* 114d862b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d862f jne 0x114d8635 */
  if (!C.zf) goto L_114d8635;
  /* 114d8631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8633 jmp 0x114d8678 */
  goto L_114d8678;
L_114d8635:;
  /* 114d8635 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d8638 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8639 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d863c push edx */
  push32((uint32_t)(EDX));
  /* 114d863d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8640 push eax */
  push32((uint32_t)(EAX));
  /* 114d8641 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8644 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8645 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d8647 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d864a push edx */
  push32((uint32_t)(EDX));
  /* 114d864b call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114d8651u);
  /* 114d8651 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d8654 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8658 jne 0x114d865e */
  if (!C.zf) goto L_114d865e;
  /* 114d865a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d865c jmp 0x114d8678 */
  goto L_114d8678;
L_114d865e:;
  /* 114d865e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d8661 push eax */
  push32((uint32_t)(EAX));
  /* 114d8662 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d8665 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8666 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d8669 push edx */
  push32((uint32_t)(EDX));
  /* 114d866a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d866d push eax */
  push32((uint32_t)(EAX));
  /* 114d866e call dword ptr [0x1150135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150135c))), 0x114d8674u);
  /* 114d8674 jmp 0x114d8678 */
  goto L_114d8678;
L_114d8676:;
  /* 114d8676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d8678:;
  /* 114d8678 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 114d867b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d867e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114d8685 pop edi */
  EDI = (pop32());
  /* 114d8686 pop esi */
  ESI = (pop32());
  /* 114d8687 pop ebx */
  EBX = (pop32());
  /* 114d8688 mov esp, ebp */
  ESP = (EBP);
  /* 114d868a pop ebp */
  EBP = (pop32());
  /* 114d868b ret  */
  ESPCHK(0x114d84d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018690 @ 0x114d8690 (1007 bytes, 269 insns) */
void f_114d8690(void) {
  FTRACE(0x114d8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8690 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8691 mov ebp, esp */
  EBP = (ESP);
  /* 114d8693 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d869d jl 0x114d86a5 */
  if ((C.sf!=C.of)) goto L_114d86a5;
  /* 114d869f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d86a3 jle 0x114d86ac */
  if ((C.zf||C.sf!=C.of)) goto L_114d86ac;
L_114d86a5:;
  /* 114d86a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d86a7 jmp 0x114d8a7b */
  goto L_114d8a7b;
L_114d86ac:;
  /* 114d86ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d86ae call 0x114cb800 */
  push32(0x114d86b3u); f_114cb800();
  /* 114d86b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d86b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d86bd mov eax, dword ptr [0x114ff4b8] */
  EAX = (r32((uint32_t)(0x114ff4b8)));
  /* 114d86c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d86c5 mov dword ptr [0x114ff4b8], eax */
  w32((uint32_t)(0x114ff4b8), (EAX));
L_114d86ca:;
  /* 114d86ca cmp dword ptr [0x114ff4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d86d1 je 0x114d86dd */
  if (C.zf) goto L_114d86dd;
  /* 114d86d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d86d5 call dword ptr [0x11501358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501358))), 0x114d86dbu);
  /* 114d86db jmp 0x114d86ca */
  goto L_114d86ca;
L_114d86dd:;
  /* 114d86dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d86e1 je 0x114d8721 */
  if (C.zf) goto L_114d8721;
  /* 114d86e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d86e7 je 0x114d8701 */
  if (C.zf) goto L_114d8701;
  /* 114d86e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d86ec push ecx */
  push32((uint32_t)(ECX));
  /* 114d86ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d86f0 push edx */
  push32((uint32_t)(EDX));
  /* 114d86f1 call 0x114d8a80 */
  push32(0x114d86f6u); f_114d8a80();
  /* 114d86f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d86f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 114d86ff jmp 0x114d8713 */
  goto L_114d8713;
L_114d8701:;
  /* 114d8701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8704 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8707 mov ecx, dword ptr [eax + 0x114fdb3c] */
  ECX = (r32((uint32_t)(EAX + 0x114fdb3c)));
  /* 114d870d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_114d8713:;
  /* 114d8713 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 114d8719 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114d871c jmp 0x114d8a5b */
  goto L_114d8a5b;
L_114d8721:;
  /* 114d8721 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 114d8728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d872f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8733 je 0x114d8a53 */
  if (C.zf) goto L_114d8a53;
  /* 114d8739 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d873c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d873f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8742 jne 0x114d8964 */
  if (!C.zf) goto L_114d8964;
  /* 114d8748 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d874b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114d874f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8752 jne 0x114d8964 */
  if (!C.zf) goto L_114d8964;
  /* 114d8758 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d875b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 114d875f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8762 jne 0x114d8964 */
  if (!C.zf) goto L_114d8964;
  /* 114d8768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d876b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_114d8771:;
  /* 114d8771 push 0x114fa460 */
  push32((uint32_t)(0x114fa460u));
  /* 114d8776 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d877c push ecx */
  push32((uint32_t)(ECX));
  /* 114d877d call 0x114dcc80 */
  push32(0x114d8782u); f_114dcc80();
  /* 114d8782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8785 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 114d878b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8792 je 0x114d87bd */
  if (C.zf) goto L_114d87bd;
  /* 114d8794 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d879a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d87a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 114d87a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d87ad je 0x114d87bd */
  if (C.zf) goto L_114d87bd;
  /* 114d87af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d87b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d87b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d87bb jne 0x114d87e3 */
  if (!C.zf) goto L_114d87e3;
L_114d87bd:;
  /* 114d87bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d87c1 je 0x114d87dc */
  if (C.zf) goto L_114d87dc;
  /* 114d87c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d87c5 call 0x114cb8a0 */
  push32(0x114d87cau); f_114cb8a0();
  /* 114d87ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d87cd mov edx, dword ptr [0x114ff4b8] */
  EDX = (r32((uint32_t)(0x114ff4b8)));
  /* 114d87d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d87d6 mov dword ptr [0x114ff4b8], edx */
  w32((uint32_t)(0x114ff4b8), (EDX));
L_114d87dc:;
  /* 114d87dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d87de jmp 0x114d8a7b */
  goto L_114d8a7b;
L_114d87e3:;
  /* 114d87e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 114d87ea jmp 0x114d87f5 */
  goto L_114d87f5;
L_114d87ec:;
  /* 114d87ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d87ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d87f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114d87f5:;
  /* 114d87f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d87f9 jg 0x114d8843 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d8843;
  /* 114d87fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 114d8801 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8802 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d8808 push edx */
  push32((uint32_t)(EDX));
  /* 114d8809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d880c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d880f mov ecx, dword ptr [eax + 0x114fdb38] */
  ECX = (r32((uint32_t)(EAX + 0x114fdb38)));
  /* 114d8815 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8816 call 0x114dcc40 */
  push32(0x114d881bu); f_114dcc40();
  /* 114d881b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d881e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8820 jne 0x114d8841 */
  if (!C.zf) goto L_114d8841;
  /* 114d8822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d8825 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8828 mov eax, dword ptr [edx + 0x114fdb38] */
  EAX = (r32((uint32_t)(EDX + 0x114fdb38)));
  /* 114d882e push eax */
  push32((uint32_t)(EAX));
  /* 114d882f call 0x114d0fb0 */
  push32(0x114d8834u); f_114d0fb0();
  /* 114d8834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8837 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d883d jne 0x114d8841 */
  if (!C.zf) goto L_114d8841;
  /* 114d883f jmp 0x114d8843 */
  goto L_114d8843;
L_114d8841:;
  /* 114d8841 jmp 0x114d87ec */
  goto L_114d87ec;
L_114d8843:;
  /* 114d8843 push 0x114fa45c */
  push32((uint32_t)(0x114fa45cu));
  /* 114d8848 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d884e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8851 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 114d8857 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d885d push edx */
  push32((uint32_t)(EDX));
  /* 114d885e call 0x114dcc00 */
  push32(0x114d8863u); f_114dcc00();
  /* 114d8863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8866 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 114d886c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8873 jne 0x114d88a9 */
  if (!C.zf) goto L_114d88a9;
  /* 114d8875 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d887b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d887e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8881 je 0x114d88a9 */
  if (C.zf) goto L_114d88a9;
  /* 114d8883 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8887 je 0x114d88a2 */
  if (C.zf) goto L_114d88a2;
  /* 114d8889 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d888b call 0x114cb8a0 */
  push32(0x114d8890u); f_114cb8a0();
  /* 114d8890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8893 mov edx, dword ptr [0x114ff4b8] */
  EDX = (r32((uint32_t)(0x114ff4b8)));
  /* 114d8899 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d889c mov dword ptr [0x114ff4b8], edx */
  w32((uint32_t)(0x114ff4b8), (EDX));
L_114d88a2:;
  /* 114d88a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d88a4 jmp 0x114d8a7b */
  goto L_114d8a7b;
L_114d88a9:;
  /* 114d88a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d88ad jg 0x114d88fa */
  if ((!C.zf&&C.sf==C.of)) goto L_114d88fa;
  /* 114d88af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 114d88b5 push eax */
  push32((uint32_t)(EAX));
  /* 114d88b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d88bc push ecx */
  push32((uint32_t)(ECX));
  /* 114d88bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 114d88c3 push edx */
  push32((uint32_t)(EDX));
  /* 114d88c4 call 0x114d19a0 */
  push32(0x114d88c9u); f_114d19a0();
  /* 114d88c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d88cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 114d88d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 114d88da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 114d88e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114d88e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d88e4 push edx */
  push32((uint32_t)(EDX));
  /* 114d88e5 call 0x114d8a80 */
  push32(0x114d88eau); f_114d8a80();
  /* 114d88ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d88ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d88ef je 0x114d88fa */
  if (C.zf) goto L_114d88fa;
  /* 114d88f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d88f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d88f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d88fa:;
  /* 114d88fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d8900 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8906 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 114d890c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d8912 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d8915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8917 je 0x114d8928 */
  if (C.zf) goto L_114d8928;
  /* 114d8919 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d891f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8922 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_114d8928:;
  /* 114d8928 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d892e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d8931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8933 jne 0x114d8771 */
  if (!C.zf) goto L_114d8771;
  /* 114d8939 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d893d je 0x114d894c */
  if (C.zf) goto L_114d894c;
  /* 114d893f call 0x114d8c20 */
  push32(0x114d8944u); f_114d8c20();
  /* 114d8944 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 114d894a jmp 0x114d8956 */
  goto L_114d8956;
L_114d894c:;
  /* 114d894c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_114d8956:;
  /* 114d8956 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 114d895c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d895f jmp 0x114d8a51 */
  goto L_114d8a51;
L_114d8964:;
  /* 114d8964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8967 push edx */
  push32((uint32_t)(EDX));
  /* 114d8968 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d896a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d896c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 114d8972 push eax */
  push32((uint32_t)(EAX));
  /* 114d8973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8976 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8977 call 0x114d8d20 */
  push32(0x114d897cu); f_114d8d20();
  /* 114d897c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d897f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d8982 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8986 je 0x114d8a51 */
  if (C.zf) goto L_114d8a51;
  /* 114d898c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114d8993 jmp 0x114d899e */
  goto L_114d899e;
L_114d8995:;
  /* 114d8995 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d8998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d899b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114d899e:;
  /* 114d899e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d89a2 jg 0x114d8a00 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d8a00;
  /* 114d89a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d89a8 je 0x114d89fe */
  if (C.zf) goto L_114d89fe;
  /* 114d89aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d89ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d89b0 mov ecx, dword ptr [eax + 0x114fdb3c] */
  ECX = (r32((uint32_t)(EAX + 0x114fdb3c)));
  /* 114d89b6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d89b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 114d89bd push edx */
  push32((uint32_t)(EDX));
  /* 114d89be call 0x114d54c0 */
  push32(0x114d89c3u); f_114d54c0();
  /* 114d89c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d89c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d89c8 je 0x114d89f5 */
  if (C.zf) goto L_114d89f5;
  /* 114d89ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 114d89d0 push eax */
  push32((uint32_t)(EAX));
  /* 114d89d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d89d4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d89d5 call 0x114d8a80 */
  push32(0x114d89dau); f_114d8a80();
  /* 114d89da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d89dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d89df je 0x114d89ec */
  if (C.zf) goto L_114d89ec;
  /* 114d89e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d89e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d89e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114d89ea jmp 0x114d89f3 */
  goto L_114d89f3;
L_114d89ec:;
  /* 114d89ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_114d89f3:;
  /* 114d89f3 jmp 0x114d89fe */
  goto L_114d89fe;
L_114d89f5:;
  /* 114d89f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d89f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d89fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114d89fe:;
  /* 114d89fe jmp 0x114d8995 */
  goto L_114d8995;
L_114d8a00:;
  /* 114d8a00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8a04 je 0x114d8a2b */
  if (C.zf) goto L_114d8a2b;
  /* 114d8a06 call 0x114d8c20 */
  push32(0x114d8a0bu); f_114d8c20();
  /* 114d8a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d8a0e push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8a10 mov ecx, dword ptr [0x114fdb3c] */
  ECX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8a16 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8a17 call 0x114cc390 */
  push32(0x114d8a1cu); f_114cc390();
  /* 114d8a1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8a1f mov dword ptr [0x114fdb3c], 0 */
  w32((uint32_t)(0x114fdb3c), (0x0u));
  /* 114d8a29 jmp 0x114d8a51 */
  goto L_114d8a51;
L_114d8a2b:;
  /* 114d8a2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8a2f je 0x114d8a3e */
  if (C.zf) goto L_114d8a3e;
  /* 114d8a31 call 0x114d8c20 */
  push32(0x114d8a36u); f_114d8c20();
  /* 114d8a36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 114d8a3c jmp 0x114d8a48 */
  goto L_114d8a48;
L_114d8a3e:;
  /* 114d8a3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_114d8a48:;
  /* 114d8a48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 114d8a4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114d8a51:;
  /* 114d8a51 jmp 0x114d8a5b */
  goto L_114d8a5b;
L_114d8a53:;
  /* 114d8a53 call 0x114d8c20 */
  push32(0x114d8a58u); f_114d8c20();
  /* 114d8a58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d8a5b:;
  /* 114d8a5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8a5f je 0x114d8a78 */
  if (C.zf) goto L_114d8a78;
  /* 114d8a61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114d8a63 call 0x114cb8a0 */
  push32(0x114d8a68u); f_114cb8a0();
  /* 114d8a68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8a6b mov eax, dword ptr [0x114ff4b8] */
  EAX = (r32((uint32_t)(0x114ff4b8)));
  /* 114d8a70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8a73 mov dword ptr [0x114ff4b8], eax */
  w32((uint32_t)(0x114ff4b8), (EAX));
L_114d8a78:;
  /* 114d8a78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114d8a7b:;
  /* 114d8a7b mov esp, ebp */
  ESP = (EBP);
  /* 114d8a7d pop ebp */
  EBP = (pop32());
  /* 114d8a7e ret  */
  ESPCHK(0x114d8690u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a80 @ 0x114d8a80 (403 bytes, 117 insns) */
void f_114d8a80(void) {
  FTRACE(0x114d8a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8a80 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8a81 mov ebp, esp */
  EBP = (ESP);
  /* 114d8a83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8a89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8a8c push eax */
  push32((uint32_t)(EAX));
  /* 114d8a8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 114d8a93 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8a94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 114d8a9a push edx */
  push32((uint32_t)(EDX));
  /* 114d8a9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 114d8aa1 push eax */
  push32((uint32_t)(EAX));
  /* 114d8aa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8aa6 call 0x114d8d20 */
  push32(0x114d8aabu); f_114d8d20();
  /* 114d8aab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8ab0 jne 0x114d8ab9 */
  if (!C.zf) goto L_114d8ab9;
  /* 114d8ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8ab4 jmp 0x114d8c0f */
  goto L_114d8c0f;
L_114d8ab9:;
  /* 114d8ab9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 114d8abe push 0x114fa464 */
  push32((uint32_t)(0x114fa464u));
  /* 114d8ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8ac5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 114d8acb push edx */
  push32((uint32_t)(EDX));
  /* 114d8acc call 0x114d0fb0 */
  push32(0x114d8ad1u); f_114d0fb0();
  /* 114d8ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8ad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8ad7 push eax */
  push32((uint32_t)(EAX));
  /* 114d8ad8 call 0x114cb900 */
  push32(0x114d8addu); f_114cb900();
  /* 114d8add add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8ae0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d8ae3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8ae7 jne 0x114d8af0 */
  if (!C.zf) goto L_114d8af0;
  /* 114d8ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8aeb jmp 0x114d8c0f */
  goto L_114d8c0f;
L_114d8af0:;
  /* 114d8af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8af3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8af6 mov ecx, dword ptr [eax + 0x114fdb3c] */
  ECX = (r32((uint32_t)(EAX + 0x114fdb3c)));
  /* 114d8afc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114d8aff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8b02 mov eax, dword ptr [edx*4 + 0x114ff400] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114ff400)));
  /* 114d8b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d8b0c push 6 */
  push32((uint32_t)(0x6u));
  /* 114d8b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8b11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8b14 add ecx, 0x114ff440 */
  { uint32_t _a=(ECX),_b=(0x114ff440u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8b1a push ecx */
  push32((uint32_t)(ECX));
  /* 114d8b1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 114d8b1e push edx */
  push32((uint32_t)(EDX));
  /* 114d8b1f call 0x114d7370 */
  push32(0x114d8b24u); f_114d7370();
  /* 114d8b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8b27 mov eax, dword ptr [0x114ff418] */
  EAX = (r32((uint32_t)(0x114ff418)));
  /* 114d8b2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114d8b2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 114d8b35 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8b36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d8b39 push edx */
  push32((uint32_t)(EDX));
  /* 114d8b3a call 0x114d1130 */
  push32(0x114d8b3fu); f_114d1130();
  /* 114d8b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8b42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8b45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8b48 mov dword ptr [ecx + 0x114fdb3c], eax */
  w32((uint32_t)(ECX + 0x114fdb3c), (EAX));
  /* 114d8b4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 114d8b54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d8b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8b5d mov dword ptr [eax*4 + 0x114ff400], edx */
  w32((uint32_t)(EAX*4 + 0x114ff400), (EDX));
  /* 114d8b64 push 6 */
  push32((uint32_t)(0x6u));
  /* 114d8b66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 114d8b6c push ecx */
  push32((uint32_t)(ECX));
  /* 114d8b6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8b70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8b73 add edx, 0x114ff440 */
  { uint32_t _a=(EDX),_b=(0x114ff440u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8b79 push edx */
  push32((uint32_t)(EDX));
  /* 114d8b7a call 0x114d7370 */
  push32(0x114d8b7fu); f_114d7370();
  /* 114d8b7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8b82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8b86 jne 0x114d8b93 */
  if (!C.zf) goto L_114d8b93;
  /* 114d8b88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d8b8e mov dword ptr [0x114ff418], eax */
  w32((uint32_t)(0x114ff418), (EAX));
L_114d8b93:;
  /* 114d8b93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8b97 jne 0x114d8ba5 */
  if (!C.zf) goto L_114d8ba5;
  /* 114d8b99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114d8b9f mov dword ptr [0x114ff41c], ecx */
  w32((uint32_t)(0x114ff41c), (ECX));
L_114d8ba5:;
  /* 114d8ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8ba8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8bab call dword ptr [edx + 0x114fdb40] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x114fdb40))), 0x114d8bb1u);
  /* 114d8bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8bb3 je 0x114d8bec */
  if (C.zf) goto L_114d8bec;
  /* 114d8bb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8bb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8bbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8bbe mov dword ptr [eax + 0x114fdb3c], ecx */
  w32((uint32_t)(EAX + 0x114fdb3c), (ECX));
  /* 114d8bc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8bc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d8bc9 push edx */
  push32((uint32_t)(EDX));
  /* 114d8bca call 0x114cc390 */
  push32(0x114d8bcfu); f_114cc390();
  /* 114d8bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8bd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8bd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8bd8 mov dword ptr [eax*4 + 0x114ff400], ecx */
  w32((uint32_t)(EAX*4 + 0x114ff400), (ECX));
  /* 114d8bdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114d8be2 mov dword ptr [0x114ff418], edx */
  w32((uint32_t)(0x114ff418), (EDX));
  /* 114d8be8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8bea jmp 0x114d8c0f */
  goto L_114d8c0f;
L_114d8bec:;
  /* 114d8bec cmp dword ptr [ebp - 0xc], 0x114fda2c */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x114fda2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8bf3 je 0x114d8c03 */
  if (C.zf) goto L_114d8c03;
  /* 114d8bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8bfa push eax */
  push32((uint32_t)(EAX));
  /* 114d8bfb call 0x114cc390 */
  push32(0x114d8c00u); f_114cc390();
  /* 114d8c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d8c03:;
  /* 114d8c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8c06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8c09 mov eax, dword ptr [ecx + 0x114fdb3c] */
  EAX = (r32((uint32_t)(ECX + 0x114fdb3c)));
L_114d8c0f:;
  /* 114d8c0f mov esp, ebp */
  ESP = (EBP);
  /* 114d8c11 pop ebp */
  EBP = (pop32());
  /* 114d8c12 ret  */
  ESPCHK(0x114d8a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c20 @ 0x114d8c20 (256 bytes, 72 insns) */
void f_114d8c20(void) {
  FTRACE(0x114d8c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8c20 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8c21 mov ebp, esp */
  EBP = (ESP);
  /* 114d8c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8c26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114d8c2d cmp dword ptr [0x114fdb3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114fdb3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8c34 jne 0x114d8c54 */
  if (!C.zf) goto L_114d8c54;
  /* 114d8c36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 114d8c3b push 0x114fa464 */
  push32((uint32_t)(0x114fa464u));
  /* 114d8c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8c42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 114d8c47 call 0x114cb900 */
  push32(0x114d8c4cu); f_114cb900();
  /* 114d8c4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8c4f mov dword ptr [0x114fdb3c], eax */
  w32((uint32_t)(0x114fdb3c), (EAX));
L_114d8c54:;
  /* 114d8c54 mov eax, dword ptr [0x114fdb3c] */
  EAX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8c59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114d8c5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d8c63 jmp 0x114d8c6e */
  goto L_114d8c6e;
L_114d8c65:;
  /* 114d8c65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8c68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8c6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d8c6e:;
  /* 114d8c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8c71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8c74 mov eax, dword ptr [edx + 0x114fdb3c] */
  EAX = (r32((uint32_t)(EDX + 0x114fdb3c)));
  /* 114d8c7a push eax */
  push32((uint32_t)(EAX));
  /* 114d8c7b push 0x114fa470 */
  push32((uint32_t)(0x114fa470u));
  /* 114d8c80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8c83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8c86 mov edx, dword ptr [ecx + 0x114fdb38] */
  EDX = (r32((uint32_t)(ECX + 0x114fdb38)));
  /* 114d8c8c push edx */
  push32((uint32_t)(EDX));
  /* 114d8c8d push 3 */
  push32((uint32_t)(0x3u));
  /* 114d8c8f mov eax, dword ptr [0x114fdb3c] */
  EAX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8c94 push eax */
  push32((uint32_t)(EAX));
  /* 114d8c95 call 0x114d8ec0 */
  push32(0x114d8c9au); f_114d8ec0();
  /* 114d8c9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8c9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8ca1 jge 0x114d8ce9 */
  if ((C.sf==C.of)) goto L_114d8ce9;
  /* 114d8ca3 push 0x114fa45c */
  push32((uint32_t)(0x114fa45cu));
  /* 114d8ca8 mov ecx, dword ptr [0x114fdb3c] */
  ECX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8cae push ecx */
  push32((uint32_t)(ECX));
  /* 114d8caf call 0x114d1140 */
  push32(0x114d8cb4u); f_114d1140();
  /* 114d8cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8cb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8cba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8cbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8cc0 mov eax, dword ptr [edx + 0x114fdb3c] */
  EAX = (r32((uint32_t)(EDX + 0x114fdb3c)));
  /* 114d8cc6 push eax */
  push32((uint32_t)(EAX));
  /* 114d8cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8cca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d8ccd mov edx, dword ptr [ecx + 0x114fdb3c] */
  EDX = (r32((uint32_t)(ECX + 0x114fdb3c)));
  /* 114d8cd3 push edx */
  push32((uint32_t)(EDX));
  /* 114d8cd4 call 0x114d54c0 */
  push32(0x114d8cd9u); f_114d54c0();
  /* 114d8cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8cde je 0x114d8ce7 */
  if (C.zf) goto L_114d8ce7;
  /* 114d8ce0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114d8ce7:;
  /* 114d8ce7 jmp 0x114d8d17 */
  goto L_114d8d17;
L_114d8ce9:;
  /* 114d8ce9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8ced jne 0x114d8cf6 */
  if (!C.zf) goto L_114d8cf6;
  /* 114d8cef mov eax, dword ptr [0x114fdb3c] */
  EAX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8cf4 jmp 0x114d8d1c */
  goto L_114d8d1c;
L_114d8cf6:;
  /* 114d8cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d8cf8 mov eax, dword ptr [0x114fdb3c] */
  EAX = (r32((uint32_t)(0x114fdb3c)));
  /* 114d8cfd push eax */
  push32((uint32_t)(EAX));
  /* 114d8cfe call 0x114cc390 */
  push32(0x114d8d03u); f_114cc390();
  /* 114d8d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8d06 mov dword ptr [0x114fdb3c], 0 */
  w32((uint32_t)(0x114fdb3c), (0x0u));
  /* 114d8d10 mov eax, dword ptr [0x114fdb54] */
  EAX = (r32((uint32_t)(0x114fdb54)));
  /* 114d8d15 jmp 0x114d8d1c */
  goto L_114d8d1c;
L_114d8d17:;
  /* 114d8d17 jmp 0x114d8c65 */
  goto L_114d8c65;
L_114d8d1c:;
  /* 114d8d1c mov esp, ebp */
  ESP = (EBP);
  /* 114d8d1e pop ebp */
  EBP = (pop32());
  /* 114d8d1f ret  */
  ESPCHK(0x114d8c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018d20 @ 0x114d8d20 (388 bytes, 115 insns) */
void f_114d8d20(void) {
  FTRACE(0x114d8d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8d20 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8d21 mov ebp, esp */
  EBP = (ESP);
  /* 114d8d23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8d29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8d2d jne 0x114d8d36 */
  if (!C.zf) goto L_114d8d36;
  /* 114d8d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8d31 jmp 0x114d8ea0 */
  goto L_114d8ea0;
L_114d8d36:;
  /* 114d8d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8d39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d8d3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8d3f jne 0x114d8d90 */
  if (!C.zf) goto L_114d8d90;
  /* 114d8d41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8d44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114d8d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8d4a jne 0x114d8d90 */
  if (!C.zf) goto L_114d8d90;
  /* 114d8d4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8d4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 114d8d52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8d55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 114d8d59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8d5d je 0x114d8d79 */
  if (C.zf) goto L_114d8d79;
  /* 114d8d5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8d62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 114d8d67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8d6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 114d8d70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8d73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_114d8d79:;
  /* 114d8d79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8d7d je 0x114d8d88 */
  if (C.zf) goto L_114d8d88;
  /* 114d8d7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d8d82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_114d8d88:;
  /* 114d8d88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8d8b jmp 0x114d8ea0 */
  goto L_114d8ea0;
L_114d8d90:;
  /* 114d8d90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8d93 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8d94 push 0x114fdab4 */
  push32((uint32_t)(0x114fdab4u));
  /* 114d8d99 call 0x114d54c0 */
  push32(0x114d8d9eu); f_114d54c0();
  /* 114d8d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8da3 je 0x114d8e58 */
  if (C.zf) goto L_114d8e58;
  /* 114d8da9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8dac push edx */
  push32((uint32_t)(EDX));
  /* 114d8dad push 0x114fda30 */
  push32((uint32_t)(0x114fda30u));
  /* 114d8db2 call 0x114d54c0 */
  push32(0x114d8db7u); f_114d54c0();
  /* 114d8db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8dbc je 0x114d8e58 */
  if (C.zf) goto L_114d8e58;
  /* 114d8dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8dc5 push eax */
  push32((uint32_t)(EAX));
  /* 114d8dc6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 114d8dcc push ecx */
  push32((uint32_t)(ECX));
  /* 114d8dcd call 0x114d8f10 */
  push32(0x114d8dd2u); f_114d8f10();
  /* 114d8dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8dd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8dd7 je 0x114d8de0 */
  if (C.zf) goto L_114d8de0;
  /* 114d8dd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8ddb jmp 0x114d8ea0 */
  goto L_114d8ea0;
L_114d8de0:;
  /* 114d8de0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 114d8de6 push edx */
  push32((uint32_t)(EDX));
  /* 114d8de7 push 0x114ff3f4 */
  push32((uint32_t)(0x114ff3f4u));
  /* 114d8dec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 114d8df2 push eax */
  push32((uint32_t)(EAX));
  /* 114d8df3 call 0x114dccc0 */
  push32(0x114d8df8u); f_114dccc0();
  /* 114d8df8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8dfd jne 0x114d8e06 */
  if (!C.zf) goto L_114d8e06;
  /* 114d8dff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8e01 jmp 0x114d8ea0 */
  goto L_114d8ea0;
L_114d8e06:;
  /* 114d8e06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d8e08 mov cx, word ptr [0x114ff3f8] */
  CX = (r16((uint32_t)(0x114ff3f8)));
  /* 114d8e0f mov dword ptr [0x114ff3fc], ecx */
  w32((uint32_t)(0x114ff3fc), (ECX));
  /* 114d8e15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 114d8e1b push edx */
  push32((uint32_t)(EDX));
  /* 114d8e1c push 0x114fdab4 */
  push32((uint32_t)(0x114fdab4u));
  /* 114d8e21 call 0x114d9070 */
  push32(0x114d8e26u); f_114d9070();
  /* 114d8e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8e2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d8e2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d8e31 je 0x114d8e46 */
  if (C.zf) goto L_114d8e46;
  /* 114d8e33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8e36 push edx */
  push32((uint32_t)(EDX));
  /* 114d8e37 push 0x114fda30 */
  push32((uint32_t)(0x114fda30u));
  /* 114d8e3c call 0x114d1130 */
  push32(0x114d8e41u); f_114d1130();
  /* 114d8e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8e44 jmp 0x114d8e58 */
  goto L_114d8e58;
L_114d8e46:;
  /* 114d8e46 push 0x114fdab4 */
  push32((uint32_t)(0x114fdab4u));
  /* 114d8e4b push 0x114fda30 */
  push32((uint32_t)(0x114fda30u));
  /* 114d8e50 call 0x114d1130 */
  push32(0x114d8e55u); f_114d1130();
  /* 114d8e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d8e58:;
  /* 114d8e58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8e5c je 0x114d8e71 */
  if (C.zf) goto L_114d8e71;
  /* 114d8e5e push 6 */
  push32((uint32_t)(0x6u));
  /* 114d8e60 push 0x114ff3f4 */
  push32((uint32_t)(0x114ff3f4u));
  /* 114d8e65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d8e68 push eax */
  push32((uint32_t)(EAX));
  /* 114d8e69 call 0x114d7370 */
  push32(0x114d8e6eu); f_114d7370();
  /* 114d8e6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d8e71:;
  /* 114d8e71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8e75 je 0x114d8e8a */
  if (C.zf) goto L_114d8e8a;
  /* 114d8e77 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d8e79 push 0x114ff3fc */
  push32((uint32_t)(0x114ff3fcu));
  /* 114d8e7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d8e81 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8e82 call 0x114d7370 */
  push32(0x114d8e87u); f_114d7370();
  /* 114d8e87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d8e8a:;
  /* 114d8e8a push 0x114fdab4 */
  push32((uint32_t)(0x114fdab4u));
  /* 114d8e8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8e92 push edx */
  push32((uint32_t)(EDX));
  /* 114d8e93 call 0x114d1130 */
  push32(0x114d8e98u); f_114d1130();
  /* 114d8e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8e9b mov eax, 0x114fdab4 */
  EAX = (0x114fdab4u);
L_114d8ea0:;
  /* 114d8ea0 mov esp, ebp */
  ESP = (EBP);
  /* 114d8ea2 pop ebp */
  EBP = (pop32());
  /* 114d8ea3 ret  */
  ESPCHK(0x114d8d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10018eb0 @ 0x114d8eb0 (7 bytes, 5 insns) */
void f_114d8eb0(void) {
  FTRACE(0x114d8eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8eb1 mov ebp, esp */
  EBP = (ESP);
  /* 114d8eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8eb5 pop ebp */
  EBP = (pop32());
  /* 114d8eb6 ret  */
  ESPCHK(0x114d8eb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x114d8ec0 (79 bytes, 28 insns) */
void f_114d8ec0(void) {
  FTRACE(0x114d8ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8ec1 mov ebp, esp */
  EBP = (ESP);
  /* 114d8ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8ec6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114d8ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d8ecc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d8ed3 jmp 0x114d8ede */
  goto L_114d8ede;
L_114d8ed5:;
  /* 114d8ed5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d8ed8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8edb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114d8ede:;
  /* 114d8ede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d8ee1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8ee4 jge 0x114d8f04 */
  if ((C.sf==C.of)) goto L_114d8f04;
  /* 114d8ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8ee9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8eec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d8eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8ef2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 114d8ef5 push edx */
  push32((uint32_t)(EDX));
  /* 114d8ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8ef9 push eax */
  push32((uint32_t)(EAX));
  /* 114d8efa call 0x114d1140 */
  push32(0x114d8effu); f_114d1140();
  /* 114d8eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f02 jmp 0x114d8ed5 */
  goto L_114d8ed5;
L_114d8f04:;
  /* 114d8f04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d8f0b mov esp, ebp */
  ESP = (EBP);
  /* 114d8f0d pop ebp */
  EBP = (pop32());
  /* 114d8f0e ret  */
  ESPCHK(0x114d8ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f10 @ 0x114d8f10 (349 bytes, 122 insns) */
void f_114d8f10(void) {
  FTRACE(0x114d8f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d8f10 push ebp */
  push32((uint32_t)(EBP));
  /* 114d8f11 mov ebp, esp */
  EBP = (ESP);
  /* 114d8f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d8f16 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 114d8f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 114d8f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8f20 push eax */
  push32((uint32_t)(EAX));
  /* 114d8f21 call 0x114d2e30 */
  push32(0x114d8f26u); f_114d2e30();
  /* 114d8f26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8f2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d8f2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d8f31 jne 0x114d8f3a */
  if (!C.zf) goto L_114d8f3a;
  /* 114d8f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8f35 jmp 0x114d9069 */
  goto L_114d9069;
L_114d8f3a:;
  /* 114d8f3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8f3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d8f40 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8f43 jne 0x114d8f70 */
  if (!C.zf) goto L_114d8f70;
  /* 114d8f45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8f48 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114d8f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d8f4e je 0x114d8f70 */
  if (C.zf) goto L_114d8f70;
  /* 114d8f50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8f53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f56 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8f57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8f5a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f60 push edx */
  push32((uint32_t)(EDX));
  /* 114d8f61 call 0x114d1130 */
  push32(0x114d8f66u); f_114d1130();
  /* 114d8f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d8f6b jmp 0x114d9069 */
  goto L_114d9069;
L_114d8f70:;
  /* 114d8f70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d8f77 jmp 0x114d8f82 */
  goto L_114d8f82;
L_114d8f79:;
  /* 114d8f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d8f7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d8f82:;
  /* 114d8f82 push 0x114fa474 */
  push32((uint32_t)(0x114fa474u));
  /* 114d8f87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8f8a push ecx */
  push32((uint32_t)(ECX));
  /* 114d8f8b call 0x114dcc00 */
  push32(0x114d8f90u); f_114dcc00();
  /* 114d8f90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8f93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d8f96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8f9a jne 0x114d8fa4 */
  if (!C.zf) goto L_114d8fa4;
  /* 114d8f9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d8f9f jmp 0x114d9069 */
  goto L_114d9069;
L_114d8fa4:;
  /* 114d8fa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8fa7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8faa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d8fac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 114d8faf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fb3 jne 0x114d8fda */
  if (!C.zf) goto L_114d8fda;
  /* 114d8fb5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fb9 jge 0x114d8fda */
  if ((C.sf==C.of)) goto L_114d8fda;
  /* 114d8fbb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d8fbf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fc2 je 0x114d8fda */
  if (C.zf) goto L_114d8fda;
  /* 114d8fc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8fc7 push edx */
  push32((uint32_t)(EDX));
  /* 114d8fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8fcb push eax */
  push32((uint32_t)(EAX));
  /* 114d8fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8fcf push ecx */
  push32((uint32_t)(ECX));
  /* 114d8fd0 call 0x114d19a0 */
  push32(0x114d8fd5u); f_114d19a0();
  /* 114d8fd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8fd8 jmp 0x114d9040 */
  goto L_114d9040;
L_114d8fda:;
  /* 114d8fda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fde jne 0x114d9008 */
  if (!C.zf) goto L_114d9008;
  /* 114d8fe0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fe4 jge 0x114d9008 */
  if ((C.sf==C.of)) goto L_114d9008;
  /* 114d8fe6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d8fea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d8fed je 0x114d9008 */
  if (C.zf) goto L_114d9008;
  /* 114d8fef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d8ff2 push eax */
  push32((uint32_t)(EAX));
  /* 114d8ff3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d8ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d8ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d8ffa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d8ffd push edx */
  push32((uint32_t)(EDX));
  /* 114d8ffe call 0x114d19a0 */
  push32(0x114d9003u); f_114d19a0();
  /* 114d9003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9006 jmp 0x114d9040 */
  goto L_114d9040;
L_114d9008:;
  /* 114d9008 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d900c jne 0x114d903b */
  if (!C.zf) goto L_114d903b;
  /* 114d900e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d9012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9014 je 0x114d901f */
  if (C.zf) goto L_114d901f;
  /* 114d9016 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d901a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d901d jne 0x114d903b */
  if (!C.zf) goto L_114d903b;
L_114d901f:;
  /* 114d901f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d9022 push edx */
  push32((uint32_t)(EDX));
  /* 114d9023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9026 push eax */
  push32((uint32_t)(EAX));
  /* 114d9027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d902a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9030 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9031 call 0x114d19a0 */
  push32(0x114d9036u); f_114d19a0();
  /* 114d9036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9039 jmp 0x114d9040 */
  goto L_114d9040;
L_114d903b:;
  /* 114d903b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d903e jmp 0x114d9069 */
  goto L_114d9069;
L_114d9040:;
  /* 114d9040 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d9044 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9047 jne 0x114d904b */
  if (!C.zf) goto L_114d904b;
  /* 114d9049 jmp 0x114d9067 */
  goto L_114d9067;
L_114d904b:;
  /* 114d904b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114d904f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9051 jne 0x114d9055 */
  if (!C.zf) goto L_114d9055;
  /* 114d9053 jmp 0x114d9067 */
  goto L_114d9067;
L_114d9055:;
  /* 114d9055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114d9058 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d905b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 114d905f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114d9062 jmp 0x114d8f79 */
  goto L_114d8f79;
L_114d9067:;
  /* 114d9067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d9069:;
  /* 114d9069 mov esp, ebp */
  ESP = (EBP);
  /* 114d906b pop ebp */
  EBP = (pop32());
  /* 114d906c ret  */
  ESPCHK(0x114d8f10u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x114d9070 (101 bytes, 36 insns) */
void f_114d9070(void) {
  FTRACE(0x114d9070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9070 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9071 mov ebp, esp */
  EBP = (ESP);
  /* 114d9073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9076 push eax */
  push32((uint32_t)(EAX));
  /* 114d9077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d907a push ecx */
  push32((uint32_t)(ECX));
  /* 114d907b call 0x114d1130 */
  push32(0x114d9080u); f_114d1130();
  /* 114d9080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9086 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 114d908a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d908c je 0x114d90a8 */
  if (C.zf) goto L_114d90a8;
  /* 114d908e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9091 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9094 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9095 push 0x114fa47c */
  push32((uint32_t)(0x114fa47cu));
  /* 114d909a push 2 */
  push32((uint32_t)(0x2u));
  /* 114d909c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d909f push edx */
  push32((uint32_t)(EDX));
  /* 114d90a0 call 0x114d8ec0 */
  push32(0x114d90a5u); f_114d8ec0();
  /* 114d90a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d90a8:;
  /* 114d90a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d90ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 114d90b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d90b4 je 0x114d90d3 */
  if (C.zf) goto L_114d90d3;
  /* 114d90b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d90b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d90bf push edx */
  push32((uint32_t)(EDX));
  /* 114d90c0 push 0x114fa478 */
  push32((uint32_t)(0x114fa478u));
  /* 114d90c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114d90c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d90ca push eax */
  push32((uint32_t)(EAX));
  /* 114d90cb call 0x114d8ec0 */
  push32(0x114d90d0u); f_114d8ec0();
  /* 114d90d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114d90d3:;
  /* 114d90d3 pop ebp */
  EBP = (pop32());
  /* 114d90d4 ret  */
  ESPCHK(0x114d9070u, _esp0);
  ESP += 4; return;
}

/* FUN_100190e0 @ 0x114d90e0 (727 bytes, 263 insns) */
void f_114d90e0(void) {
  FTRACE(0x114d90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d90e1 mov ebp, esp */
  EBP = (ESP);
  /* 114d90e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114d90e5 push 0x114fa480 */
  push32((uint32_t)(0x114fa480u));
  /* 114d90ea push 0x114d554c */
  push32((uint32_t)(0x114d554cu));
  /* 114d90ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114d90f5 push eax */
  push32((uint32_t)(EAX));
  /* 114d90f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114d90fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9100 push ebx */
  push32((uint32_t)(EBX));
  /* 114d9101 push esi */
  push32((uint32_t)(ESI));
  /* 114d9102 push edi */
  push32((uint32_t)(EDI));
  /* 114d9103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114d9106 cmp dword ptr [0x114ff420], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff420))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d910d jne 0x114d9166 */
  if (!C.zf) goto L_114d9166;
  /* 114d910f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9111 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9113 push 1 */
  push32((uint32_t)(0x1u));
  /* 114d9115 push 0x114fa40c */
  push32((uint32_t)(0x114fa40cu));
  /* 114d911a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d911f push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9121 call dword ptr [0x11501350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501350))), 0x114d9127u);
  /* 114d9127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9129 je 0x114d9137 */
  if (C.zf) goto L_114d9137;
  /* 114d912b mov dword ptr [0x114ff420], 1 */
  w32((uint32_t)(0x114ff420), (0x1u));
  /* 114d9135 jmp 0x114d9166 */
  goto L_114d9166;
L_114d9137:;
  /* 114d9137 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9139 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d913b push 1 */
  push32((uint32_t)(0x1u));
  /* 114d913d push 0x114fa408 */
  push32((uint32_t)(0x114fa408u));
  /* 114d9142 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114d9147 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9149 call dword ptr [0x11501360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501360))), 0x114d914fu);
  /* 114d914f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9151 je 0x114d915f */
  if (C.zf) goto L_114d915f;
  /* 114d9153 mov dword ptr [0x114ff420], 2 */
  w32((uint32_t)(0x114ff420), (0x2u));
  /* 114d915d jmp 0x114d9166 */
  goto L_114d9166;
L_114d915f:;
  /* 114d915f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9161 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d9166:;
  /* 114d9166 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d916a jle 0x114d917f */
  if ((C.zf||C.sf!=C.of)) goto L_114d917f;
  /* 114d916c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d916f push eax */
  push32((uint32_t)(EAX));
  /* 114d9170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9173 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9174 call 0x114d93f0 */
  push32(0x114d9179u); f_114d93f0();
  /* 114d9179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d917c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_114d917f:;
  /* 114d917f cmp dword ptr [0x114ff420], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114ff420))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9186 jne 0x114d91ab */
  if (!C.zf) goto L_114d91ab;
  /* 114d9188 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d918b push edx */
  push32((uint32_t)(EDX));
  /* 114d918c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d918f push eax */
  push32((uint32_t)(EAX));
  /* 114d9190 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d9193 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9194 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9197 push edx */
  push32((uint32_t)(EDX));
  /* 114d9198 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d919b push eax */
  push32((uint32_t)(EAX));
  /* 114d919c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d919f push ecx */
  push32((uint32_t)(ECX));
  /* 114d91a0 call dword ptr [0x11501360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501360))), 0x114d91a6u);
  /* 114d91a6 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d91ab:;
  /* 114d91ab cmp dword ptr [0x114ff420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d91b2 jne 0x114d93cf */
  if (!C.zf) goto L_114d93cf;
  /* 114d91b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d91bc jne 0x114d91c7 */
  if (!C.zf) goto L_114d91c7;
  /* 114d91be mov edx, dword ptr [0x114ff418] */
  EDX = (r32((uint32_t)(0x114ff418)));
  /* 114d91c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_114d91c7:;
  /* 114d91c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d91c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d91cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d91ce push eax */
  push32((uint32_t)(EAX));
  /* 114d91cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d91d2 push ecx */
  push32((uint32_t)(ECX));
  /* 114d91d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114d91d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d91d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d91da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114d91dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d91e0 push edx */
  push32((uint32_t)(EDX));
  /* 114d91e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d91e4 push eax */
  push32((uint32_t)(EAX));
  /* 114d91e5 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114d91ebu);
  /* 114d91eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114d91ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d91f2 jne 0x114d91fb */
  if (!C.zf) goto L_114d91fb;
  /* 114d91f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d91f6 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d91fb:;
  /* 114d91fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d9202 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d9205 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d9207 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d920a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114d920c call 0x114d1320 */
  push32(0x114d9211u); f_114d1320();
  /* 114d9211 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 114d9214 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114d9217 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114d921a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114d921d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114d9224 jmp 0x114d923d */
  goto L_114d923d;
  /* 114d9226 mov eax, 1 */
  EAX = (0x1u);
  /* 114d922b ret  */
  ESPCHK(0x114d90e0u, _esp0);
  ESP += 4; return;
  /* 114d922c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114d922f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114d9236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114d923d:;
  /* 114d923d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9241 jne 0x114d924a */
  if (!C.zf) goto L_114d924a;
  /* 114d9243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9245 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d924a:;
  /* 114d924a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d924d push edx */
  push32((uint32_t)(EDX));
  /* 114d924e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d9251 push eax */
  push32((uint32_t)(EAX));
  /* 114d9252 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114d9255 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9256 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9259 push edx */
  push32((uint32_t)(EDX));
  /* 114d925a push 1 */
  push32((uint32_t)(0x1u));
  /* 114d925c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d925f push eax */
  push32((uint32_t)(EAX));
  /* 114d9260 call dword ptr [0x11501364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501364))), 0x114d9266u);
  /* 114d9266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9268 jne 0x114d9271 */
  if (!C.zf) goto L_114d9271;
  /* 114d926a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d926c jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d9271:;
  /* 114d9271 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9273 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9275 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d9278 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9279 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d927c push edx */
  push32((uint32_t)(EDX));
  /* 114d927d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9280 push eax */
  push32((uint32_t)(EAX));
  /* 114d9281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9284 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9285 call dword ptr [0x11501350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501350))), 0x114d928bu);
  /* 114d928b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d928e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9292 jne 0x114d929b */
  if (!C.zf) goto L_114d929b;
  /* 114d9294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9296 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d929b:;
  /* 114d929b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d929e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 114d92a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d92a6 je 0x114d92eb */
  if (C.zf) goto L_114d92eb;
  /* 114d92a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d92ac je 0x114d92e6 */
  if (C.zf) goto L_114d92e6;
  /* 114d92ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d92b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d92b4 jle 0x114d92bd */
  if ((C.zf||C.sf!=C.of)) goto L_114d92bd;
  /* 114d92b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d92b8 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d92bd:;
  /* 114d92bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d92c0 push ecx */
  push32((uint32_t)(ECX));
  /* 114d92c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d92c4 push edx */
  push32((uint32_t)(EDX));
  /* 114d92c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d92c8 push eax */
  push32((uint32_t)(EAX));
  /* 114d92c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d92cc push ecx */
  push32((uint32_t)(ECX));
  /* 114d92cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d92d0 push edx */
  push32((uint32_t)(EDX));
  /* 114d92d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d92d4 push eax */
  push32((uint32_t)(EAX));
  /* 114d92d5 call dword ptr [0x11501350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501350))), 0x114d92dbu);
  /* 114d92db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d92dd jne 0x114d92e6 */
  if (!C.zf) goto L_114d92e6;
  /* 114d92df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d92e1 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d92e6:;
  /* 114d92e6 jmp 0x114d93ca */
  goto L_114d93ca;
L_114d92eb:;
  /* 114d92eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d92ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 114d92f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114d92f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d92fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114d92fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9300 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114d9302 call 0x114d1320 */
  push32(0x114d9307u); f_114d1320();
  /* 114d9307 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 114d930a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114d930d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 114d9310 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114d9313 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114d931a jmp 0x114d9333 */
  goto L_114d9333;
  /* 114d931c mov eax, 1 */
  EAX = (0x1u);
  /* 114d9321 ret  */
  ESPCHK(0x114d90e0u, _esp0);
  ESP += 4; return;
  /* 114d9322 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114d9325 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114d932c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114d9333:;
  /* 114d9333 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9337 jne 0x114d9340 */
  if (!C.zf) goto L_114d9340;
  /* 114d9339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d933b jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d9340:;
  /* 114d9340 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d9343 push eax */
  push32((uint32_t)(EAX));
  /* 114d9344 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d9347 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9348 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114d934b push edx */
  push32((uint32_t)(EDX));
  /* 114d934c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114d934f push eax */
  push32((uint32_t)(EAX));
  /* 114d9350 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9353 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9357 push edx */
  push32((uint32_t)(EDX));
  /* 114d9358 call dword ptr [0x11501350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501350))), 0x114d935eu);
  /* 114d935e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9360 jne 0x114d9366 */
  if (!C.zf) goto L_114d9366;
  /* 114d9362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9364 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d9366:;
  /* 114d9366 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d936a jne 0x114d939a */
  if (!C.zf) goto L_114d939a;
  /* 114d936c push 0 */
  push32((uint32_t)(0x0u));
  /* 114d936e push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9370 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9372 push 0 */
  push32((uint32_t)(0x0u));
  /* 114d9374 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d9377 push eax */
  push32((uint32_t)(EAX));
  /* 114d9378 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d937b push ecx */
  push32((uint32_t)(ECX));
  /* 114d937c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114d9381 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d9384 push edx */
  push32((uint32_t)(EDX));
  /* 114d9385 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d938bu);
  /* 114d938b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d938e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9392 jne 0x114d9398 */
  if (!C.zf) goto L_114d9398;
  /* 114d9394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9396 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d9398:;
  /* 114d9398 jmp 0x114d93ca */
  goto L_114d93ca;
L_114d939a:;
  /* 114d939a push 0 */
  push32((uint32_t)(0x0u));
  /* 114d939c push 0 */
  push32((uint32_t)(0x0u));
  /* 114d939e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114d93a1 push eax */
  push32((uint32_t)(EAX));
  /* 114d93a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114d93a5 push ecx */
  push32((uint32_t)(ECX));
  /* 114d93a6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114d93a9 push edx */
  push32((uint32_t)(EDX));
  /* 114d93aa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114d93ad push eax */
  push32((uint32_t)(EAX));
  /* 114d93ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114d93b3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114d93b6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d93b7 call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114d93bdu);
  /* 114d93bd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114d93c0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d93c4 jne 0x114d93ca */
  if (!C.zf) goto L_114d93ca;
  /* 114d93c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d93c8 jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d93ca:;
  /* 114d93ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114d93cd jmp 0x114d93d1 */
  goto L_114d93d1;
L_114d93cf:;
  /* 114d93cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114d93d1:;
  /* 114d93d1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 114d93d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114d93d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114d93de pop edi */
  EDI = (pop32());
  /* 114d93df pop esi */
  ESI = (pop32());
  /* 114d93e0 pop ebx */
  EBX = (pop32());
  /* 114d93e1 mov esp, ebp */
  ESP = (EBP);
  /* 114d93e3 pop ebp */
  EBP = (pop32());
  /* 114d93e4 ret  */
  ESPCHK(0x114d90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100193f0 @ 0x114d93f0 (80 bytes, 32 insns) */
void f_114d93f0(void) {
  FTRACE(0x114d93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d93f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114d93f1 mov ebp, esp */
  EBP = (ESP);
  /* 114d93f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d93f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d93f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d93fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d93ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d9402:;
  /* 114d9402 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d9405 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d9408 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d940b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d940e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d9410 je 0x114d9427 */
  if (C.zf) goto L_114d9427;
  /* 114d9412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9415 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d9418 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d941a je 0x114d9427 */
  if (C.zf) goto L_114d9427;
  /* 114d941c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d941f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9422 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d9425 jmp 0x114d9402 */
  goto L_114d9402;
L_114d9427:;
  /* 114d9427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d942a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d942d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114d942f jne 0x114d9439 */
  if (!C.zf) goto L_114d9439;
  /* 114d9431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9434 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9437 jmp 0x114d943c */
  goto L_114d943c;
L_114d9439:;
  /* 114d9439 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_114d943c:;
  /* 114d943c mov esp, ebp */
  ESP = (EBP);
  /* 114d943e pop ebp */
  EBP = (pop32());
  /* 114d943f ret  */
  ESPCHK(0x114d93f0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x114d9440 (62 bytes, 23 insns) */
void f_114d9440(void) {
  FTRACE(0x114d9440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9440 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9441 mov ebp, esp */
  EBP = (ESP);
  /* 114d9443 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9446 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d944d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9450 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9453 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d9456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9459 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d945c jb 0x114d9466 */
  if (C.cf) goto L_114d9466;
  /* 114d945e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9461 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9464 jae 0x114d946f */
  if (!C.cf) goto L_114d946f;
L_114d9466:;
  /* 114d9466 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d9469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d946c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114d946f:;
  /* 114d946f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9475 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d9477 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114d947a mov esp, ebp */
  ESP = (EBP);
  /* 114d947c pop ebp */
  EBP = (pop32());
  /* 114d947d ret  */
  ESPCHK(0x114d9440u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x114d9480 (173 bytes, 66 insns) */
void f_114d9480(void) {
  FTRACE(0x114d9480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9480 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9481 mov ebp, esp */
  EBP = (ESP);
  /* 114d9483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9489 push eax */
  push32((uint32_t)(EAX));
  /* 114d948a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d948d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d948f push edx */
  push32((uint32_t)(EDX));
  /* 114d9490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d9495 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9496 call 0x114d9440 */
  push32(0x114d949bu); f_114d9440();
  /* 114d949b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d949e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d94a1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d94a5 je 0x114d94d7 */
  if (C.zf) goto L_114d94d7;
  /* 114d94a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94aa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d94ad push edx */
  push32((uint32_t)(EDX));
  /* 114d94ae push 1 */
  push32((uint32_t)(0x1u));
  /* 114d94b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d94b6 push ecx */
  push32((uint32_t)(ECX));
  /* 114d94b7 call 0x114d9440 */
  push32(0x114d94bcu); f_114d9440();
  /* 114d94bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d94bf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d94c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d94c6 je 0x114d94d7 */
  if (C.zf) goto L_114d94d7;
  /* 114d94c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94cb mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d94ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d94d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94d4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_114d94d7:;
  /* 114d94d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94da add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d94dd push edx */
  push32((uint32_t)(EDX));
  /* 114d94de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d94e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114d94e4 push ecx */
  push32((uint32_t)(ECX));
  /* 114d94e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d94e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d94eb push eax */
  push32((uint32_t)(EAX));
  /* 114d94ec call 0x114d9440 */
  push32(0x114d94f1u); f_114d9440();
  /* 114d94f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d94f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d94f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d94fb je 0x114d950c */
  if (C.zf) goto L_114d950c;
  /* 114d94fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9500 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d9503 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9509 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_114d950c:;
  /* 114d950c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d950f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9512 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9513 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9516 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d9519 push eax */
  push32((uint32_t)(EAX));
  /* 114d951a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d951d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d9520 push edx */
  push32((uint32_t)(EDX));
  /* 114d9521 call 0x114d9440 */
  push32(0x114d9526u); f_114d9440();
  /* 114d9526 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9529 mov esp, ebp */
  ESP = (EBP);
  /* 114d952b pop ebp */
  EBP = (pop32());
  /* 114d952c ret  */
  ESPCHK(0x114d9480u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x114d9530 (96 bytes, 37 insns) */
void f_114d9530(void) {
  FTRACE(0x114d9530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9530 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9531 mov ebp, esp */
  EBP = (ESP);
  /* 114d9533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9539 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d953b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d9541 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d9543 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9545 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d9547 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d954a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d954d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d9550 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d9555 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d9557 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9559 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d955b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114d955e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9561 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d9563 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d9565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9568 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d956a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d956d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d9570 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d9572 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 114d9575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9578 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d957b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d957e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d9581 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d9583 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 114d9586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9589 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d958c mov esp, ebp */
  ESP = (EBP);
  /* 114d958e pop ebp */
  EBP = (pop32());
  /* 114d958f ret  */
  ESPCHK(0x114d9530u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x114d9590 (99 bytes, 37 insns) */
void f_114d9590(void) {
  FTRACE(0x114d9590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9590 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9591 mov ebp, esp */
  EBP = (ESP);
  /* 114d9593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9599 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114d959c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114d959f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d95a1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d95a3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114d95a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d95ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d95b2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114d95b5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d95b7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d95b9 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d95be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d95c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114d95c7 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d95c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d95cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d95d5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d95d7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 114d95da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d95e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d95e5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114d95e7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 114d95ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d95ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d95ef mov esp, ebp */
  ESP = (EBP);
  /* 114d95f1 pop ebp */
  EBP = (pop32());
  /* 114d95f2 ret  */
  ESPCHK(0x114d9590u, _esp0);
  ESP += 4; return;
}

/* FUN_10019600 @ 0x114d9600 (315 bytes, 101 insns) */
void f_114d9600(void) {
  FTRACE(0x114d9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9600 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9601 mov ebp, esp */
  EBP = (ESP);
  /* 114d9603 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9606 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 114d960c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d960f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114d9615 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9618 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114d961f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9622 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 114d9629 jmp 0x114d963d */
  goto L_114d963d;
L_114d962b:;
  /* 114d962b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d962e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9631 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114d9634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d9637 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d963a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114d963d:;
  /* 114d963d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9641 jbe 0x114d96b7 */
  if ((C.cf||C.zf)) goto L_114d96b7;
  /* 114d9643 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9646 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114d9648 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d964b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 114d964e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114d9651 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d9654 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9657 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d965a push eax */
  push32((uint32_t)(EAX));
  /* 114d965b call 0x114d9530 */
  push32(0x114d9660u); f_114d9530();
  /* 114d9660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9663 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9666 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9667 call 0x114d9530 */
  push32(0x114d966cu); f_114d9530();
  /* 114d966c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d966f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114d9672 push edx */
  push32((uint32_t)(EDX));
  /* 114d9673 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9676 push eax */
  push32((uint32_t)(EAX));
  /* 114d9677 call 0x114d9480 */
  push32(0x114d967cu); f_114d9480();
  /* 114d967c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d967f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9682 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9683 call 0x114d9530 */
  push32(0x114d9688u); f_114d9530();
  /* 114d9688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d968b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114d968e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d9691 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114d9694 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114d969b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114d96a2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 114d96a5 push ecx */
  push32((uint32_t)(ECX));
  /* 114d96a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96a9 push edx */
  push32((uint32_t)(EDX));
  /* 114d96aa call 0x114d9480 */
  push32(0x114d96afu); f_114d9480();
  /* 114d96af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d96b2 jmp 0x114d962b */
  goto L_114d962b;
L_114d96b7:;
  /* 114d96b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d96be jne 0x114d9703 */
  if (!C.zf) goto L_114d9703;
  /* 114d96c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d96c6 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 114d96c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114d96cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114d96d5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 114d96d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114d96dd shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 114d96e0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114d96e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114d96e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114d96ed shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 114d96f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d96f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114d96f5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 114d96f9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114d96fd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 114d9701 jmp 0x114d96b7 */
  goto L_114d96b7;
L_114d9703:;
  /* 114d9703 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9706 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114d9709 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114d970e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114d9710 jne 0x114d972c */
  if (!C.zf) goto L_114d972c;
  /* 114d9712 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d9715 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9716 call 0x114d9530 */
  push32(0x114d971bu); f_114d9530();
  /* 114d971b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d971e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 114d9722 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114d9726 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 114d972a jmp 0x114d9703 */
  goto L_114d9703;
L_114d972c:;
  /* 114d972c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d972f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 114d9733 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 114d9737 mov esp, ebp */
  ESP = (EBP);
  /* 114d9739 pop ebp */
  EBP = (pop32());
  /* 114d973a ret  */
  ESPCHK(0x114d9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10019740 @ 0x114d9740 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_114d9740(void) {
  FTRACE(0x114d9740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114d9740 push ebp */
  push32((uint32_t)(EBP));
  /* 114d9741 mov ebp, esp */
  EBP = (ESP);
  /* 114d9743 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9749 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 114d974c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 114d974f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114d9755 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 114d975c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 114d9763 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 114d976a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114d9771 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114d9778 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 114d977f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 114d9786 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114d978d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 114d9794 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 114d979b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 114d97a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114d97a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d97a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97ab mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 114d97ae jmp 0x114d97b9 */
  goto L_114d97b9;
L_114d97b0:;
  /* 114d97b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d97b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d97b9:;
  /* 114d97b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d97bf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d97c2 je 0x114d97e5 */
  if (C.zf) goto L_114d97e5;
  /* 114d97c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d97ca cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d97cd je 0x114d97e5 */
  if (C.zf) goto L_114d97e5;
  /* 114d97cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114d97d5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d97d8 je 0x114d97e5 */
  if (C.zf) goto L_114d97e5;
  /* 114d97da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97dd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114d97e0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d97e3 jne 0x114d97e7 */
  if (!C.zf) goto L_114d97e7;
L_114d97e5:;
  /* 114d97e5 jmp 0x114d97b0 */
  goto L_114d97b0;
L_114d97e7:;
  /* 114d97e7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d97eb je 0x114d9f48 */
  if (C.zf) goto L_114d9f48;
  /* 114d97f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d97f6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 114d97f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d97fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d97ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9802 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 114d9805 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 114d9808 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d980c ja 0x114d9f43 */
  if ((!C.cf&&!C.zf)) goto L_114d9f43;
  /* 114d9812 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 114d9815 jmp dword ptr [ecx*4 + 0x114da15a] */
  switch (ECX) {
    case 0: goto L_114d981c;
    case 1: goto L_114d98ba;
    case 2: goto L_114d9970;
    case 3: goto L_114d99db;
    case 4: goto L_114d9af3;
    case 5: goto L_114d9c25;
    case 6: goto L_114d9c9b;
    case 7: goto L_114d9d80;
    case 8: goto L_114d9d22;
    case 9: goto L_114d9dd3;
    case 10: goto L_114d9f43;
    case 11: goto L_114d9edf;
    case 12: goto L_114d9949;
    case 13: goto L_114d9937;
    case 14: goto L_114d9940;
    case 15: goto L_114d995b;
    default: x86_unimpl("switch@0x114d9815 out of table"); return;
  }
L_114d981c:;
  /* 114d981c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9820 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9823 jl 0x114d9840 */
  if ((C.sf!=C.of)) goto L_114d9840;
  /* 114d9825 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9829 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d982c jg 0x114d9840 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d9840;
  /* 114d982e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 114d9835 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9838 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d983b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d983e jmp 0x114d98b5 */
  goto L_114d98b5;
L_114d9840:;
  /* 114d9840 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9844 movsx eax, byte ptr [0x114fd044] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114d984b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d984d jne 0x114d9858 */
  if (!C.zf) goto L_114d9858;
  /* 114d984f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 114d9856 jmp 0x114d98b5 */
  goto L_114d98b5;
L_114d9858:;
  /* 114d9858 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114d985b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 114d9861 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9868 je 0x114d9887 */
  if (C.zf) goto L_114d9887;
  /* 114d986a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9871 je 0x114d9896 */
  if (C.zf) goto L_114d9896;
  /* 114d9873 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d987a je 0x114d987e */
  if (C.zf) goto L_114d987e;
  /* 114d987c jmp 0x114d98a5 */
  goto L_114d98a5;
L_114d987e:;
  /* 114d987e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 114d9885 jmp 0x114d98b5 */
  goto L_114d98b5;
L_114d9887:;
  /* 114d9887 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 114d988e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114d9894 jmp 0x114d98b5 */
  goto L_114d98b5;
L_114d9896:;
  /* 114d9896 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 114d989d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 114d98a3 jmp 0x114d98b5 */
  goto L_114d98b5;
L_114d98a5:;
  /* 114d98a5 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d98ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d98af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d98b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d98b5:;
  /* 114d98b5 jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d98ba:;
  /* 114d98ba mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 114d98c1 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d98c5 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d98c8 jl 0x114d98e8 */
  if ((C.sf!=C.of)) goto L_114d98e8;
  /* 114d98ca movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d98ce cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d98d1 jg 0x114d98e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d98e8;
  /* 114d98d3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 114d98da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d98dd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d98e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d98e3 jmp 0x114d996b */
  goto L_114d996b;
L_114d98e8:;
  /* 114d98e8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d98ec movsx ecx, byte ptr [0x114fd044] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114d98f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d98f5 jne 0x114d9900 */
  if (!C.zf) goto L_114d9900;
  /* 114d98f7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 114d98fe jmp 0x114d996b */
  goto L_114d996b;
L_114d9900:;
  /* 114d9900 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9904 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 114d990a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 114d9910 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9913 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 114d9919 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9920 ja 0x114d995b */
  if ((!C.cf&&!C.zf)) goto L_114d995b;
  /* 114d9922 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 114d9928 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d992a mov cl, byte ptr [edx + 0x114da19a] */
  CL = (r8((uint32_t)(EDX + 0x114da19a)));
  /* 114d9930 jmp dword ptr [ecx*4 + 0x114da18a] */
  switch (ECX) {
    case 0: goto L_114d9949;
    case 1: goto L_114d9937;
    case 2: goto L_114d9940;
    case 3: goto L_114d995b;
    default: x86_unimpl("switch@0x114d9930 out of table"); return;
  }
L_114d9937:;
  /* 114d9937 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 114d993e jmp 0x114d996b */
  goto L_114d996b;
L_114d9940:;
  /* 114d9940 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 114d9947 jmp 0x114d996b */
  goto L_114d996b;
L_114d9949:;
  /* 114d9949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d994c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d994f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d9952 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 114d9959 jmp 0x114d996b */
  goto L_114d996b;
L_114d995b:;
  /* 114d995b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9965 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9968 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d996b:;
  /* 114d996b jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9970:;
  /* 114d9970 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9974 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9977 jl 0x114d9994 */
  if ((C.sf!=C.of)) goto L_114d9994;
  /* 114d9979 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d997d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9980 jg 0x114d9994 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d9994;
  /* 114d9982 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 114d9989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d998c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d998f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d9992 jmp 0x114d99d6 */
  goto L_114d99d6;
L_114d9994:;
  /* 114d9994 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9998 movsx eax, byte ptr [0x114fd044] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114d999f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d99a1 jne 0x114d99ac */
  if (!C.zf) goto L_114d99ac;
  /* 114d99a3 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 114d99aa jmp 0x114d99d6 */
  goto L_114d99d6;
L_114d99ac:;
  /* 114d99ac mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114d99af mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 114d99b5 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d99bc je 0x114d99c0 */
  if (C.zf) goto L_114d99c0;
  /* 114d99be jmp 0x114d99c9 */
  goto L_114d99c9;
L_114d99c0:;
  /* 114d99c0 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 114d99c7 jmp 0x114d99d6 */
  goto L_114d99d6;
L_114d99c9:;
  /* 114d99c9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d99d0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 114d99d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d99d6:;
  /* 114d99d6 jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d99db:;
  /* 114d99db mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 114d99e2 jmp 0x114d99f5 */
  goto L_114d99f5;
L_114d99e4:;
  /* 114d99e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d99e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114d99e9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 114d99ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d99ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d99f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d99f5:;
  /* 114d99f5 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d99fc jle 0x114d9a19 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9a19;
  /* 114d99fe push 4 */
  push32((uint32_t)(0x4u));
  /* 114d9a00 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9a03 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d9a08 push eax */
  push32((uint32_t)(EAX));
  /* 114d9a09 call 0x114d20c0 */
  push32(0x114d9a0eu); f_114d20c0();
  /* 114d9a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9a11 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 114d9a17 jmp 0x114d9a37 */
  goto L_114d9a37;
L_114d9a19:;
  /* 114d9a19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9a1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d9a22 mov edx, dword ptr [0x114fd04c] */
  EDX = (r32((uint32_t)(0x114fd04c)));
  /* 114d9a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9a2a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 114d9a2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114d9a31 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_114d9a37:;
  /* 114d9a37 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9a3e je 0x114d9a74 */
  if (C.zf) goto L_114d9a74;
  /* 114d9a40 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9a44 jae 0x114d9a66 */
  if (!C.cf) goto L_114d9a66;
  /* 114d9a46 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 114d9a49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9a4c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 114d9a4f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9a53 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9a56 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9a59 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114d9a5b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9a5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9a61 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 114d9a64 jmp 0x114d9a6f */
  goto L_114d9a6f;
L_114d9a66:;
  /* 114d9a66 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d9a69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9a6c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_114d9a6f:;
  /* 114d9a6f jmp 0x114d99e4 */
  goto L_114d99e4;
L_114d9a74:;
  /* 114d9a74 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9a78 movsx ecx, byte ptr [0x114fd044] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114fd044))));
  /* 114d9a7f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9a81 jne 0x114d9a8c */
  if (!C.zf) goto L_114d9a8c;
  /* 114d9a83 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 114d9a8a jmp 0x114d9aee */
  goto L_114d9aee;
L_114d9a8c:;
  /* 114d9a8c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9a90 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 114d9a96 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 114d9a9c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9a9f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 114d9aa5 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9aac ja 0x114d9ade */
  if ((!C.cf&&!C.zf)) goto L_114d9ade;
  /* 114d9aae mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 114d9ab4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d9ab6 mov cl, byte ptr [edx + 0x114da1e1] */
  CL = (r8((uint32_t)(EDX + 0x114da1e1)));
  /* 114d9abc jmp dword ptr [ecx*4 + 0x114da1d5] */
  switch (ECX) {
    case 0: goto L_114d9acc;
    case 1: goto L_114d9ac3;
    case 2: goto L_114d9ade;
    default: x86_unimpl("switch@0x114d9abc out of table"); return;
  }
L_114d9ac3:;
  /* 114d9ac3 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 114d9aca jmp 0x114d9aee */
  goto L_114d9aee;
L_114d9acc:;
  /* 114d9acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9acf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9ad2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114d9ad5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 114d9adc jmp 0x114d9aee */
  goto L_114d9aee;
L_114d9ade:;
  /* 114d9ade mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9ae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9ae8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d9aee:;
  /* 114d9aee jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9af3:;
  /* 114d9af3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 114d9afa mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 114d9b01 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9b05 jne 0x114d9b2e */
  if (!C.zf) goto L_114d9b2e;
  /* 114d9b07 jmp 0x114d9b1a */
  goto L_114d9b1a;
L_114d9b09:;
  /* 114d9b09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9b0c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d9b0e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 114d9b11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9b14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9b17 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d9b1a:;
  /* 114d9b1a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9b1e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9b21 jne 0x114d9b2e */
  if (!C.zf) goto L_114d9b2e;
  /* 114d9b23 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d9b26 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9b29 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 114d9b2c jmp 0x114d9b09 */
  goto L_114d9b09;
L_114d9b2e:;
  /* 114d9b2e jmp 0x114d9b41 */
  goto L_114d9b41;
L_114d9b30:;
  /* 114d9b30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9b33 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d9b35 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 114d9b38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9b3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9b3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9b41:;
  /* 114d9b41 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9b48 jle 0x114d9b66 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9b66;
  /* 114d9b4a push 4 */
  push32((uint32_t)(0x4u));
  /* 114d9b4c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9b4f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d9b55 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9b56 call 0x114d20c0 */
  push32(0x114d9b5bu); f_114d20c0();
  /* 114d9b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9b5e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 114d9b64 jmp 0x114d9b83 */
  goto L_114d9b83;
L_114d9b66:;
  /* 114d9b66 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9b69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d9b6f mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114d9b74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d9b76 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114d9b7a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d9b7d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_114d9b83:;
  /* 114d9b83 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9b8a je 0x114d9bbe */
  if (C.zf) goto L_114d9bbe;
  /* 114d9b8c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9b90 jae 0x114d9bb9 */
  if (!C.cf) goto L_114d9bb9;
  /* 114d9b92 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114d9b95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9b98 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 114d9b9b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9b9f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9ba2 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9ba5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114d9ba7 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9baa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9bad mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 114d9bb0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d9bb3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9bb6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_114d9bb9:;
  /* 114d9bb9 jmp 0x114d9b30 */
  goto L_114d9b30;
L_114d9bbe:;
  /* 114d9bbe movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9bc2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 114d9bc8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d9bce sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9bd1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 114d9bd7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9bde ja 0x114d9c10 */
  if ((!C.cf&&!C.zf)) goto L_114d9c10;
  /* 114d9be0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114d9be6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114d9be8 mov al, byte ptr [ecx + 0x114da228] */
  AL = (r8((uint32_t)(ECX + 0x114da228)));
  /* 114d9bee jmp dword ptr [eax*4 + 0x114da21c] */
  switch (EAX) {
    case 0: goto L_114d9bfe;
    case 1: goto L_114d9bf5;
    case 2: goto L_114d9c10;
    default: x86_unimpl("switch@0x114d9bee out of table"); return;
  }
L_114d9bf5:;
  /* 114d9bf5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 114d9bfc jmp 0x114d9c20 */
  goto L_114d9c20;
L_114d9bfe:;
  /* 114d9bfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9c01 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9c04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9c07 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 114d9c0e jmp 0x114d9c20 */
  goto L_114d9c20;
L_114d9c10:;
  /* 114d9c10 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9c1a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9c1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9c20:;
  /* 114d9c20 jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9c25:;
  /* 114d9c25 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 114d9c2c cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9c33 jle 0x114d9c51 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9c51;
  /* 114d9c35 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d9c37 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9c3a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d9c40 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9c41 call 0x114d20c0 */
  push32(0x114d9c46u); f_114d20c0();
  /* 114d9c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9c49 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 114d9c4f jmp 0x114d9c6e */
  goto L_114d9c6e;
L_114d9c51:;
  /* 114d9c51 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9c54 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d9c5a mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114d9c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d9c61 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114d9c65 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d9c68 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_114d9c6e:;
  /* 114d9c6e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9c75 je 0x114d9c89 */
  if (C.zf) goto L_114d9c89;
  /* 114d9c77 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 114d9c7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9c81 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9c84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9c87 jmp 0x114d9c96 */
  goto L_114d9c96;
L_114d9c89:;
  /* 114d9c89 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9c90 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 114d9c93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9c96:;
  /* 114d9c96 jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9c9b:;
  /* 114d9c9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9c9e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9ca1 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 114d9ca4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9ca8 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9cab jl 0x114d9cc8 */
  if ((C.sf!=C.of)) goto L_114d9cc8;
  /* 114d9cad movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9cb1 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9cb4 jg 0x114d9cc8 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d9cc8;
  /* 114d9cb6 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 114d9cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9cc0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9cc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d9cc6 jmp 0x114d9d1d */
  goto L_114d9d1d;
L_114d9cc8:;
  /* 114d9cc8 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114d9ccb mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 114d9cd1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9cd8 je 0x114d9d07 */
  if (C.zf) goto L_114d9d07;
  /* 114d9cda cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9ce1 je 0x114d9cf7 */
  if (C.zf) goto L_114d9cf7;
  /* 114d9ce3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9cea je 0x114d9cee */
  if (C.zf) goto L_114d9cee;
  /* 114d9cec jmp 0x114d9d10 */
  goto L_114d9d10;
L_114d9cee:;
  /* 114d9cee mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 114d9cf5 jmp 0x114d9d1d */
  goto L_114d9d1d;
L_114d9cf7:;
  /* 114d9cf7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 114d9cfe mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 114d9d05 jmp 0x114d9d1d */
  goto L_114d9d1d;
L_114d9d07:;
  /* 114d9d07 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 114d9d0e jmp 0x114d9d1d */
  goto L_114d9d1d;
L_114d9d10:;
  /* 114d9d10 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9d17 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 114d9d1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9d1d:;
  /* 114d9d1d jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9d22:;
  /* 114d9d22 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 114d9d29 jmp 0x114d9d3c */
  goto L_114d9d3c;
L_114d9d2b:;
  /* 114d9d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9d2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d9d30 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 114d9d33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9d36 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9d3c:;
  /* 114d9d3c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9d40 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9d43 jne 0x114d9d47 */
  if (!C.zf) goto L_114d9d47;
  /* 114d9d45 jmp 0x114d9d2b */
  goto L_114d9d2b;
L_114d9d47:;
  /* 114d9d47 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9d4b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9d4e jl 0x114d9d6b */
  if ((C.sf!=C.of)) goto L_114d9d6b;
  /* 114d9d50 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9d54 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9d57 jg 0x114d9d6b */
  if ((!C.zf&&C.sf==C.of)) goto L_114d9d6b;
  /* 114d9d59 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 114d9d60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9d63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9d66 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114d9d69 jmp 0x114d9d7b */
  goto L_114d9d7b;
L_114d9d6b:;
  /* 114d9d6b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9d75 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9d78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d9d7b:;
  /* 114d9d7b jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9d80:;
  /* 114d9d80 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9d84 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9d87 jl 0x114d9da4 */
  if ((C.sf!=C.of)) goto L_114d9da4;
  /* 114d9d89 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9d8d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9d90 jg 0x114d9da4 */
  if ((!C.zf&&C.sf==C.of)) goto L_114d9da4;
  /* 114d9d92 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 114d9d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9d9c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9d9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9da2 jmp 0x114d9dce */
  goto L_114d9dce;
L_114d9da4:;
  /* 114d9da4 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114d9da7 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 114d9dad cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9db4 je 0x114d9db8 */
  if (C.zf) goto L_114d9db8;
  /* 114d9db6 jmp 0x114d9dc1 */
  goto L_114d9dc1;
L_114d9db8:;
  /* 114d9db8 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 114d9dbf jmp 0x114d9dce */
  goto L_114d9dce;
L_114d9dc1:;
  /* 114d9dc1 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9dc8 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 114d9dcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d9dce:;
  /* 114d9dce jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9dd3:;
  /* 114d9dd3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 114d9dda mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 114d9de1 jmp 0x114d9df4 */
  goto L_114d9df4;
L_114d9de3:;
  /* 114d9de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9de6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114d9de8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 114d9deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9df1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114d9df4:;
  /* 114d9df4 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9dfb jle 0x114d9e19 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9e19;
  /* 114d9dfd push 4 */
  push32((uint32_t)(0x4u));
  /* 114d9dff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9e02 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d9e08 push edx */
  push32((uint32_t)(EDX));
  /* 114d9e09 call 0x114d20c0 */
  push32(0x114d9e0eu); f_114d20c0();
  /* 114d9e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9e11 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 114d9e17 jmp 0x114d9e36 */
  goto L_114d9e36;
L_114d9e19:;
  /* 114d9e19 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9e1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114d9e21 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114d9e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114d9e29 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114d9e2d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114d9e30 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_114d9e36:;
  /* 114d9e36 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9e3d je 0x114d9e67 */
  if (C.zf) goto L_114d9e67;
  /* 114d9e3f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114d9e42 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114d9e45 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 114d9e49 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 114d9e4d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 114d9e50 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9e57 jle 0x114d9e62 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9e62;
  /* 114d9e59 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 114d9e60 jmp 0x114d9e67 */
  goto L_114d9e67;
L_114d9e62:;
  /* 114d9e62 jmp 0x114d9de3 */
  goto L_114d9de3;
L_114d9e67:;
  /* 114d9e67 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114d9e6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114d9e6d jmp 0x114d9e80 */
  goto L_114d9e80;
L_114d9e6f:;
  /* 114d9e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9e72 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114d9e74 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 114d9e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9e7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9e7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9e80:;
  /* 114d9e80 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9e87 jle 0x114d9ea5 */
  if ((C.zf||C.sf!=C.of)) goto L_114d9ea5;
  /* 114d9e89 push 4 */
  push32((uint32_t)(0x4u));
  /* 114d9e8b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9e8e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114d9e94 push ecx */
  push32((uint32_t)(ECX));
  /* 114d9e95 call 0x114d20c0 */
  push32(0x114d9e9au); f_114d20c0();
  /* 114d9e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9e9d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 114d9ea3 jmp 0x114d9ec2 */
  goto L_114d9ec2;
L_114d9ea5:;
  /* 114d9ea5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114d9ea8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114d9eae mov eax, dword ptr [0x114fd04c] */
  EAX = (r32((uint32_t)(0x114fd04c)));
  /* 114d9eb3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114d9eb5 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 114d9eb9 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114d9ebc mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_114d9ec2:;
  /* 114d9ec2 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9ec9 je 0x114d9ecd */
  if (C.zf) goto L_114d9ecd;
  /* 114d9ecb jmp 0x114d9e6f */
  goto L_114d9e6f;
L_114d9ecd:;
  /* 114d9ecd mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9ed7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9eda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114d9edd jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9edf:;
  /* 114d9edf cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9ee3 je 0x114d9f33 */
  if (C.zf) goto L_114d9f33;
  /* 114d9ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9ee8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9eeb mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 114d9eee mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 114d9ef1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 114d9ef7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9efe je 0x114d9f1b */
  if (C.zf) goto L_114d9f1b;
  /* 114d9f00 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114d9f07 je 0x114d9f0b */
  if (C.zf) goto L_114d9f0b;
  /* 114d9f09 jmp 0x114d9f24 */
  goto L_114d9f24;
L_114d9f0b:;
  /* 114d9f0b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 114d9f12 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 114d9f19 jmp 0x114d9f31 */
  goto L_114d9f31;
L_114d9f1b:;
  /* 114d9f1b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 114d9f22 jmp 0x114d9f31 */
  goto L_114d9f31;
L_114d9f24:;
  /* 114d9f24 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9f2b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 114d9f2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114d9f31:;
  /* 114d9f31 jmp 0x114d9f43 */
  goto L_114d9f43;
L_114d9f33:;
  /* 114d9f33 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 114d9f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9f3d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9f40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114d9f43:;
  /* 114d9f43 jmp 0x114d97e7 */
  goto L_114d97e7;
L_114d9f48:;
  /* 114d9f48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114d9f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114d9f4e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114d9f50 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9f54 je 0x114da097 */
  if (C.zf) goto L_114da097;
  /* 114d9f5a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9f5e jne 0x114da097 */
  if (!C.zf) goto L_114da097;
  /* 114d9f64 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9f68 jne 0x114da097 */
  if (!C.zf) goto L_114da097;
  /* 114d9f6e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9f72 jbe 0x114d9f9f */
  if ((C.cf||C.zf)) goto L_114d9f9f;
  /* 114d9f74 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 114d9f78 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9f7b jl 0x114d9f86 */
  if ((C.sf!=C.of)) goto L_114d9f86;
  /* 114d9f7d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 114d9f80 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 114d9f83 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_114d9f86:;
  /* 114d9f86 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 114d9f8d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9f90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9f93 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 114d9f96 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d9f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9f9c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_114d9f9f:;
  /* 114d9f9f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9fa3 jbe 0x114da07a */
  if ((C.cf||C.zf)) goto L_114da07a;
  /* 114d9fa9 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9fac sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9faf mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 114d9fb2 jmp 0x114d9fbd */
  goto L_114d9fbd;
L_114d9fb4:;
  /* 114d9fb4 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9fb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9fba mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_114d9fbd:;
  /* 114d9fbd mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 114d9fc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114d9fc3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114d9fc5 jne 0x114d9fdb */
  if (!C.zf) goto L_114d9fdb;
  /* 114d9fc7 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114d9fca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114d9fcd mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 114d9fd0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114d9fd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9fd6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 114d9fd9 jmp 0x114d9fb4 */
  goto L_114d9fb4;
L_114d9fdb:;
  /* 114d9fdb lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 114d9fde push ecx */
  push32((uint32_t)(ECX));
  /* 114d9fdf mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114d9fe2 push edx */
  push32((uint32_t)(EDX));
  /* 114d9fe3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 114d9fe6 push eax */
  push32((uint32_t)(EAX));
  /* 114d9fe7 call 0x114d9600 */
  push32(0x114d9fecu); f_114d9600();
  /* 114d9fec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114d9fef cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114d9ff3 jge 0x114d9ffd */
  if ((C.sf==C.of)) goto L_114d9ffd;
  /* 114d9ff5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114d9ff8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114d9ffa mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114d9ffd:;
  /* 114d9ffd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da000 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da003 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114da006 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da00a jne 0x114da015 */
  if (!C.zf) goto L_114da015;
  /* 114da00c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da00f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da012 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114da015:;
  /* 114da015 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da019 jne 0x114da024 */
  if (!C.zf) goto L_114da024;
  /* 114da01b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da01e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da021 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114da024:;
  /* 114da024 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da02b jle 0x114da036 */
  if ((C.zf||C.sf!=C.of)) goto L_114da036;
  /* 114da02d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 114da034 jmp 0x114da078 */
  goto L_114da078;
L_114da036:;
  /* 114da036 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da03d jge 0x114da048 */
  if ((C.sf==C.of)) goto L_114da048;
  /* 114da03f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 114da046 jmp 0x114da078 */
  goto L_114da078;
L_114da048:;
  /* 114da048 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114da04b push edx */
  push32((uint32_t)(EDX));
  /* 114da04c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da04f push eax */
  push32((uint32_t)(EAX));
  /* 114da050 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 114da053 push ecx */
  push32((uint32_t)(ECX));
  /* 114da054 call 0x114ddea0 */
  push32(0x114da059u); f_114ddea0();
  /* 114da059 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da05c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 114da060 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 114da064 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 114da067 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114da06a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 114da06d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114da070 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 114da074 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_114da078:;
  /* 114da078 jmp 0x114da097 */
  goto L_114da097;
L_114da07a:;
  /* 114da07a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114da080 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 114da086 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114da089 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da08e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114da091 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114da094 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114da097:;
  /* 114da097 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da09b jne 0x114da0c6 */
  if (!C.zf) goto L_114da0c6;
  /* 114da09d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114da0a3 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 114da0a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 114da0ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da0b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114da0b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114da0b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114da0bb mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114da0be or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114da0c1 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 114da0c4 jmp 0x114da11d */
  goto L_114da11d;
L_114da0c6:;
  /* 114da0c6 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da0ca je 0x114da0f1 */
  if (C.zf) goto L_114da0f1;
  /* 114da0cc mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 114da0d2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 114da0d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114da0e0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114da0e6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 114da0e9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114da0ec mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 114da0ef jmp 0x114da11d */
  goto L_114da11d;
L_114da0f1:;
  /* 114da0f1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da0f5 je 0x114da11d */
  if (C.zf) goto L_114da11d;
  /* 114da0f7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 114da0fd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 114da103 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114da106 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da10b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114da10e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114da111 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114da114 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 114da117 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114da11a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_114da11d:;
  /* 114da11d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da120 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 114da124 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 114da127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da12a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114da12d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 114da130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da133 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114da136 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 114da139 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 114da13c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da141 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114da144 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114da14a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114da14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da14f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 114da153 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 114da156 mov esp, ebp */
  ESP = (EBP);
  /* 114da158 pop ebp */
  EBP = (pop32());
  /* 114da159 ret  */
  ESPCHK(0x114d9740u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a270 @ 0x114da270 (79 bytes, 33 insns) */
void f_114da270(void) {
  FTRACE(0x114da270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114da270 push ebp */
  push32((uint32_t)(EBP));
  /* 114da271 mov ebp, esp */
  EBP = (ESP);
  /* 114da273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da276 push 0 */
  push32((uint32_t)(0x0u));
  /* 114da278 push 0 */
  push32((uint32_t)(0x0u));
  /* 114da27a push 0 */
  push32((uint32_t)(0x0u));
  /* 114da27c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114da27f push eax */
  push32((uint32_t)(EAX));
  /* 114da280 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114da283 push ecx */
  push32((uint32_t)(ECX));
  /* 114da284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114da287 push edx */
  push32((uint32_t)(EDX));
  /* 114da288 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114da28b push eax */
  push32((uint32_t)(EAX));
  /* 114da28c call 0x114d9740 */
  push32(0x114da291u); f_114d9740();
  /* 114da291 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da294 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114da297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da29a push ecx */
  push32((uint32_t)(ECX));
  /* 114da29b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114da29e push edx */
  push32((uint32_t)(EDX));
  /* 114da29f call 0x114d29c0 */
  push32(0x114da2a4u); f_114d29c0();
  /* 114da2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da2a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114da2aa cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da2ae jne 0x114da2b8 */
  if (!C.zf) goto L_114da2b8;
  /* 114da2b0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da2b3 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 114da2b5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114da2b8:;
  /* 114da2b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114da2bb mov esp, ebp */
  ESP = (EBP);
  /* 114da2bd pop ebp */
  EBP = (pop32());
  /* 114da2be ret  */
  ESPCHK(0x114da270u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2c0 @ 0x114da2c0 (1302 bytes, 386 insns) */
void f_114da2c0(void) {
  FTRACE(0x114da2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114da2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114da2c1 mov ebp, esp */
  EBP = (ESP);
  /* 114da2c3 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da2c6 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 114da2cc mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 114da2d2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 114da2d8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 114da2df mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 114da2e3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 114da2e7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 114da2eb mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 114da2ef mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 114da2f3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 114da2f7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 114da2fb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 114da2ff mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 114da303 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 114da307 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 114da30b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 114da30f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 114da316 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 114da31a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 114da31e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114da321 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114da324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da327 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 114da32a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da32d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da332 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 114da337 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 114da33b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 114da33f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 114da344 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 114da348 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 114da34b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da351 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114da353 je 0x114da35e */
  if (C.zf) goto L_114da35e;
  /* 114da355 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da358 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 114da35c jmp 0x114da365 */
  goto L_114da365;
L_114da35e:;
  /* 114da35e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da361 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_114da365:;
  /* 114da365 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da368 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da36e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114da370 jne 0x114da3ac */
  if (!C.zf) goto L_114da3ac;
  /* 114da372 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da376 jne 0x114da3ac */
  if (!C.zf) goto L_114da3ac;
  /* 114da378 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da37c jne 0x114da3ac */
  if (!C.zf) goto L_114da3ac;
  /* 114da37e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da381 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 114da386 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da389 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 114da38d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da390 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 114da394 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da397 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 114da39b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da39e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 114da3a2 mov eax, 1 */
  EAX = (0x1u);
  /* 114da3a7 jmp 0x114da7d2 */
  goto L_114da7d2;
L_114da3ac:;
  /* 114da3ac mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da3af and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da3b5 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da3bb jne 0x114da4a6 */
  if (!C.zf) goto L_114da4a6;
  /* 114da3c1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da3c4 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 114da3c9 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da3d0 jne 0x114da3d8 */
  if (!C.zf) goto L_114da3d8;
  /* 114da3d2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da3d6 je 0x114da40c */
  if (C.zf) goto L_114da40c;
L_114da3d8:;
  /* 114da3d8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114da3db and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114da3e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114da3e3 jne 0x114da40c */
  if (!C.zf) goto L_114da40c;
  /* 114da3e5 push 0x114fa4b0 */
  push32((uint32_t)(0x114fa4b0u));
  /* 114da3ea mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da3ed add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da3f0 push edx */
  push32((uint32_t)(EDX));
  /* 114da3f1 call 0x114d1130 */
  push32(0x114da3f6u); f_114d1130();
  /* 114da3f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da3f9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da3fc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 114da400 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 114da407 jmp 0x114da4a1 */
  goto L_114da4a1;
L_114da40c:;
  /* 114da40c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 114da40f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114da415 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114da417 je 0x114da44c */
  if (C.zf) goto L_114da44c;
  /* 114da419 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da420 jne 0x114da44c */
  if (!C.zf) goto L_114da44c;
  /* 114da422 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da426 jne 0x114da44c */
  if (!C.zf) goto L_114da44c;
  /* 114da428 push 0x114fa4a8 */
  push32((uint32_t)(0x114fa4a8u));
  /* 114da42d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da430 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da433 push edx */
  push32((uint32_t)(EDX));
  /* 114da434 call 0x114d1130 */
  push32(0x114da439u); f_114d1130();
  /* 114da439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da43c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da43f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 114da443 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 114da44a jmp 0x114da4a1 */
  goto L_114da4a1;
L_114da44c:;
  /* 114da44c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da453 jne 0x114da47f */
  if (!C.zf) goto L_114da47f;
  /* 114da455 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da459 jne 0x114da47f */
  if (!C.zf) goto L_114da47f;
  /* 114da45b push 0x114fa4a0 */
  push32((uint32_t)(0x114fa4a0u));
  /* 114da460 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da463 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da466 push ecx */
  push32((uint32_t)(ECX));
  /* 114da467 call 0x114d1130 */
  push32(0x114da46cu); f_114d1130();
  /* 114da46c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da46f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da472 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 114da476 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 114da47d jmp 0x114da4a1 */
  goto L_114da4a1;
L_114da47f:;
  /* 114da47f push 0x114fa498 */
  push32((uint32_t)(0x114fa498u));
  /* 114da484 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da487 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da48a push eax */
  push32((uint32_t)(EAX));
  /* 114da48b call 0x114d1130 */
  push32(0x114da490u); f_114d1130();
  /* 114da490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da493 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da496 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 114da49a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_114da4a1:;
  /* 114da4a1 jmp 0x114da7cf */
  goto L_114da7cf;
L_114da4a6:;
  /* 114da4a6 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da4a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da4af sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 114da4b2 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 114da4b6 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da4b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da4be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da4c3 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 114da4c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114da4ca shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 114da4cd mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 114da4d1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 114da4d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da4da mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 114da4dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da4e2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114da4e5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114da4e8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114da4ee mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 114da4f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da4f6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114da4f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da4fb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 114da4fe and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114da504 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114da507 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da50c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114da50f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da511 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da514 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114da517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114da51a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 114da51d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 114da521 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 114da525 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 114da529 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 114da52c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 114da52f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114da532 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 114da535 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 114da53b push 1 */
  push32((uint32_t)(0x1u));
  /* 114da53d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 114da541 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114da543 push edx */
  push32((uint32_t)(EDX));
  /* 114da544 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 114da547 push eax */
  push32((uint32_t)(EAX));
  /* 114da548 call 0x114ddea0 */
  push32(0x114da54du); f_114ddea0();
  /* 114da54d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da550 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 114da553 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114da559 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da55f jl 0x114da57d */
  if ((C.sf!=C.of)) goto L_114da57d;
  /* 114da561 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 114da565 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 114da569 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 114da56d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 114da570 push eax */
  push32((uint32_t)(EAX));
  /* 114da571 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 114da574 push ecx */
  push32((uint32_t)(ECX));
  /* 114da575 call 0x114dda60 */
  push32(0x114da57au); f_114dda60();
  /* 114da57a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114da57d:;
  /* 114da57d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da580 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 114da584 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 114da587 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114da58a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114da58d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114da58f je 0x114da5d1 */
  if (C.zf) goto L_114da5d1;
  /* 114da591 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 114da595 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114da598 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da59a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 114da59d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da5a1 jg 0x114da5d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_114da5d1;
  /* 114da5a3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da5a6 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 114da5ab mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da5ae mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 114da5b2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da5b5 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 114da5b9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da5bc mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 114da5c0 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da5c3 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 114da5c7 mov eax, 1 */
  EAX = (0x1u);
  /* 114da5cc jmp 0x114da7d2 */
  goto L_114da7d2;
L_114da5d1:;
  /* 114da5d1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da5d5 jle 0x114da5de */
  if ((C.zf||C.sf!=C.of)) goto L_114da5de;
  /* 114da5d7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_114da5de:;
  /* 114da5de mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 114da5e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da5e6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da5eb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114da5ee mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 114da5f4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 114da5fb jmp 0x114da606 */
  goto L_114da606;
L_114da5fd:;
  /* 114da5fd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 114da600 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da603 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_114da606:;
  /* 114da606 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da60a jge 0x114da61a */
  if ((C.sf==C.of)) goto L_114da61a;
  /* 114da60c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 114da60f push edx */
  push32((uint32_t)(EDX));
  /* 114da610 call 0x114d9530 */
  push32(0x114da615u); f_114d9530();
  /* 114da615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da618 jmp 0x114da5fd */
  goto L_114da5fd;
L_114da61a:;
  /* 114da61a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da61e jge 0x114da64c */
  if ((C.sf==C.of)) goto L_114da64c;
  /* 114da620 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114da623 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114da625 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114da62a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 114da62d jmp 0x114da638 */
  goto L_114da638;
L_114da62f:;
  /* 114da62f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 114da632 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da635 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_114da638:;
  /* 114da638 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da63c jle 0x114da64c */
  if ((C.zf||C.sf!=C.of)) goto L_114da64c;
  /* 114da63e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 114da641 push edx */
  push32((uint32_t)(EDX));
  /* 114da642 call 0x114d9590 */
  push32(0x114da647u); f_114d9590();
  /* 114da647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da64a jmp 0x114da62f */
  goto L_114da62f;
L_114da64c:;
  /* 114da64c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da64f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114da655 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114da658 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da65b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114da65e jmp 0x114da669 */
  goto L_114da669;
L_114da660:;
  /* 114da660 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114da663 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da666 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114da669:;
  /* 114da669 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da66d jle 0x114da6d5 */
  if ((C.zf||C.sf!=C.of)) goto L_114da6d5;
  /* 114da66f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114da672 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114da675 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114da678 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114da67b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114da67e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114da681 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 114da684 push eax */
  push32((uint32_t)(EAX));
  /* 114da685 call 0x114d9530 */
  push32(0x114da68au); f_114d9530();
  /* 114da68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da68d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 114da690 push ecx */
  push32((uint32_t)(ECX));
  /* 114da691 call 0x114d9530 */
  push32(0x114da696u); f_114d9530();
  /* 114da696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da699 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 114da69c push edx */
  push32((uint32_t)(EDX));
  /* 114da69d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 114da6a0 push eax */
  push32((uint32_t)(EAX));
  /* 114da6a1 call 0x114d9480 */
  push32(0x114da6a6u); f_114d9480();
  /* 114da6a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da6a9 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 114da6ac push ecx */
  push32((uint32_t)(ECX));
  /* 114da6ad call 0x114d9530 */
  push32(0x114da6b2u); f_114d9530();
  /* 114da6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da6b5 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 114da6b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114da6be add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da6c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114da6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da6cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114da6cf mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 114da6d3 jmp 0x114da660 */
  goto L_114da660;
L_114da6d5:;
  /* 114da6d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6d8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da6db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114da6de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6e1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114da6e3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 114da6e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da6ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114da6ef movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114da6f3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da6f6 jl 0x114da753 */
  if ((C.sf!=C.of)) goto L_114da753;
  /* 114da6f8 jmp 0x114da703 */
  goto L_114da703;
L_114da6fa:;
  /* 114da6fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da6fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114da703:;
  /* 114da703 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da706 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da709 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da70c jb 0x114da721 */
  if (C.cf) goto L_114da721;
  /* 114da70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da711 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114da714 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da717 jne 0x114da721 */
  if (!C.zf) goto L_114da721;
  /* 114da719 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da71c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 114da71f jmp 0x114da6fa */
  goto L_114da6fa;
L_114da721:;
  /* 114da721 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da724 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da727 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da72a jae 0x114da745 */
  if (!C.cf) goto L_114da745;
  /* 114da72c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da72f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da732 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114da735 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da738 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114da73b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 114da73f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da742 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_114da745:;
  /* 114da745 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da748 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114da74a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114da74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da74f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114da751 jmp 0x114da7ac */
  goto L_114da7ac;
L_114da753:;
  /* 114da753 jmp 0x114da75e */
  goto L_114da75e;
L_114da755:;
  /* 114da755 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da758 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da75b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114da75e:;
  /* 114da75e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da761 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da764 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da767 jb 0x114da776 */
  if (C.cf) goto L_114da776;
  /* 114da769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da76c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114da76f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da772 jne 0x114da776 */
  if (!C.zf) goto L_114da776;
  /* 114da774 jmp 0x114da755 */
  goto L_114da755;
L_114da776:;
  /* 114da776 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da779 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da77c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da77f jae 0x114da7ac */
  if (!C.cf) goto L_114da7ac;
  /* 114da781 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da784 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 114da789 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da78c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 114da790 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da793 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 114da797 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da79a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 114da79e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da7a1 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 114da7a5 mov eax, 1 */
  EAX = (0x1u);
  /* 114da7aa jmp 0x114da7d2 */
  goto L_114da7d2;
L_114da7ac:;
  /* 114da7ac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da7af add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da7b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da7b5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da7b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da7ba mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da7bd mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 114da7c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da7c3 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 114da7c7 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114da7ca mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_114da7cf:;
  /* 114da7cf mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_114da7d2:;
  /* 114da7d2 mov esp, ebp */
  ESP = (EBP);
  /* 114da7d4 pop ebp */
  EBP = (pop32());
  /* 114da7d5 ret  */
  ESPCHK(0x114da2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a7e0 @ 0x114da7e0 (482 bytes, 138 insns) */
void f_114da7e0(void) {
  FTRACE(0x114da7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114da7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114da7e1 mov ebp, esp */
  EBP = (ESP);
  /* 114da7e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da7e6 push esi */
  push32((uint32_t)(ESI));
  /* 114da7e7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 114da7ee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 114da7f0 call 0x114cb800 */
  push32(0x114da7f5u); f_114cb800();
  /* 114da7f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da7f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114da7ff jmp 0x114da80a */
  goto L_114da80a;
L_114da801:;
  /* 114da801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da804 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114da80a:;
  /* 114da80a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da80e jge 0x114da9b0 */
  if ((C.sf==C.of)) goto L_114da9b0;
  /* 114da814 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da817 cmp dword ptr [ecx*4 + 0x11500b00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11500b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da81f je 0x114da916 */
  if (C.zf) goto L_114da916;
  /* 114da825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da828 mov eax, dword ptr [edx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114da82f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114da832 jmp 0x114da83d */
  goto L_114da83d;
L_114da834:;
  /* 114da834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da837 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da83a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114da83d:;
  /* 114da83d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da840 mov eax, dword ptr [edx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114da847 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da84c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da84f jae 0x114da906 */
  if (!C.cf) goto L_114da906;
  /* 114da855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da858 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114da85c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114da85f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114da861 jne 0x114da901 */
  if (!C.zf) goto L_114da901;
  /* 114da867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da86a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da86e jne 0x114da8a9 */
  if (!C.zf) goto L_114da8a9;
  /* 114da870 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114da872 call 0x114cb800 */
  push32(0x114da877u); f_114cb800();
  /* 114da877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da87a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da87d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da881 jne 0x114da89f */
  if (!C.zf) goto L_114da89f;
  /* 114da883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da886 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da889 push edx */
  push32((uint32_t)(EDX));
  /* 114da88a call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114da890u);
  /* 114da890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da893 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114da896 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da89c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_114da89f:;
  /* 114da89f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114da8a1 call 0x114cb8a0 */
  push32(0x114da8a6u); f_114cb8a0();
  /* 114da8a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114da8a9:;
  /* 114da8a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da8ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da8af push eax */
  push32((uint32_t)(EAX));
  /* 114da8b0 call dword ptr [0x11501440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501440))), 0x114da8b6u);
  /* 114da8b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da8b9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 114da8bd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 114da8c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114da8c2 je 0x114da8d6 */
  if (C.zf) goto L_114da8d6;
  /* 114da8c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da8c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da8ca push eax */
  push32((uint32_t)(EAX));
  /* 114da8cb call dword ptr [0x11501444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501444))), 0x114da8d1u);
  /* 114da8d1 jmp 0x114da834 */
  goto L_114da834;
L_114da8d6:;
  /* 114da8d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da8d9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 114da8df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da8e2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114da8e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da8e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da8eb sub eax, dword ptr [edx*4 + 0x11500b00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11500b00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114da8f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114da8f3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 114da8f8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114da8fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da8fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114da8ff jmp 0x114da906 */
  goto L_114da906;
L_114da901:;
  /* 114da901 jmp 0x114da834 */
  goto L_114da834;
L_114da906:;
  /* 114da906 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da90a je 0x114da911 */
  if (C.zf) goto L_114da911;
  /* 114da90c jmp 0x114da9b0 */
  goto L_114da9b0;
L_114da911:;
  /* 114da911 jmp 0x114da9ab */
  goto L_114da9ab;
L_114da916:;
  /* 114da916 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 114da918 push 0x114fa4b8 */
  push32((uint32_t)(0x114fa4b8u));
  /* 114da91d push 2 */
  push32((uint32_t)(0x2u));
  /* 114da91f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 114da924 call 0x114cb900 */
  push32(0x114da929u); f_114cb900();
  /* 114da929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da92c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114da92f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da933 je 0x114da9a9 */
  if (C.zf) goto L_114da9a9;
  /* 114da935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da93b mov dword ptr [eax*4 + 0x11500b00], ecx */
  w32((uint32_t)(EAX*4 + 0x11500b00), (ECX));
  /* 114da942 mov edx, dword ptr [0x11500c3c] */
  EDX = (r32((uint32_t)(0x11500c3c)));
  /* 114da948 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da94b mov dword ptr [0x11500c3c], edx */
  w32((uint32_t)(0x11500c3c), (EDX));
  /* 114da951 jmp 0x114da95c */
  goto L_114da95c;
L_114da953:;
  /* 114da953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da956 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114da95c:;
  /* 114da95c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da95f mov edx, dword ptr [ecx*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114da966 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114da96c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da96f jae 0x114da994 */
  if (!C.cf) goto L_114da994;
  /* 114da971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da974 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 114da978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da97b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 114da981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da984 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 114da988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114da98b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 114da992 jmp 0x114da953 */
  goto L_114da953;
L_114da994:;
  /* 114da994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114da997 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114da99a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114da99d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114da9a0 push edx */
  push32((uint32_t)(EDX));
  /* 114da9a1 call 0x114dacf0 */
  push32(0x114da9a6u); f_114dacf0();
  /* 114da9a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114da9a9:;
  /* 114da9a9 jmp 0x114da9b0 */
  goto L_114da9b0;
L_114da9ab:;
  /* 114da9ab jmp 0x114da801 */
  goto L_114da801;
L_114da9b0:;
  /* 114da9b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 114da9b2 call 0x114cb8a0 */
  push32(0x114da9b7u); f_114cb8a0();
  /* 114da9b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114da9ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114da9bd pop esi */
  ESI = (pop32());
  /* 114da9be mov esp, ebp */
  ESP = (EBP);
  /* 114da9c0 pop ebp */
  EBP = (pop32());
  /* 114da9c1 ret  */
  ESPCHK(0x114da7e0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x114da9d0 (183 bytes, 57 insns) */
void f_114da9d0(void) {
  FTRACE(0x114da9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114da9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114da9d1 mov ebp, esp */
  EBP = (ESP);
  /* 114da9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114da9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da9d7 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da9dd jae 0x114daa6a */
  if (!C.cf) goto L_114daa6a;
  /* 114da9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da9e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114da9e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114da9ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114da9ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114da9f2 mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114da9f9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114da9fd jne 0x114daa6a */
  if (!C.zf) goto L_114daa6a;
  /* 114da9ff cmp dword ptr [0x114ff130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daa06 jne 0x114daa4a */
  if (!C.zf) goto L_114daa4a;
  /* 114daa08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daa0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114daa0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daa12 je 0x114daa22 */
  if (C.zf) goto L_114daa22;
  /* 114daa14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daa18 je 0x114daa30 */
  if (C.zf) goto L_114daa30;
  /* 114daa1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daa1e je 0x114daa3e */
  if (C.zf) goto L_114daa3e;
  /* 114daa20 jmp 0x114daa4a */
  goto L_114daa4a;
L_114daa22:;
  /* 114daa22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114daa25 push edx */
  push32((uint32_t)(EDX));
  /* 114daa26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 114daa28 call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114daa2eu);
  /* 114daa2e jmp 0x114daa4a */
  goto L_114daa4a;
L_114daa30:;
  /* 114daa30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114daa33 push eax */
  push32((uint32_t)(EAX));
  /* 114daa34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 114daa36 call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114daa3cu);
  /* 114daa3c jmp 0x114daa4a */
  goto L_114daa4a;
L_114daa3e:;
  /* 114daa3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114daa41 push ecx */
  push32((uint32_t)(ECX));
  /* 114daa42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 114daa44 call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114daa4au);
L_114daa4a:;
  /* 114daa4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daa4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114daa50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daa53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114daa56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114daa59 mov ecx, dword ptr [edx*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114daa60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114daa63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 114daa66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114daa68 jmp 0x114daa83 */
  goto L_114daa83;
L_114daa6a:;
  /* 114daa6a call 0x114d7750 */
  push32(0x114daa6fu); f_114d7750();
  /* 114daa6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114daa75 call 0x114d7760 */
  push32(0x114daa7au); f_114d7760();
  /* 114daa7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114daa80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114daa83:;
  /* 114daa83 mov esp, ebp */
  ESP = (EBP);
  /* 114daa85 pop ebp */
  EBP = (pop32());
  /* 114daa86 ret  */
  ESPCHK(0x114da9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa90 @ 0x114daa90 (216 bytes, 63 insns) */
void f_114daa90(void) {
  FTRACE(0x114daa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114daa90 push ebp */
  push32((uint32_t)(EBP));
  /* 114daa91 mov ebp, esp */
  EBP = (ESP);
  /* 114daa93 push ecx */
  push32((uint32_t)(ECX));
  /* 114daa94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daa97 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daa9d jae 0x114dab4b */
  if (!C.cf) goto L_114dab4b;
  /* 114daaa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daaa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114daaa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daaac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114daaaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114daab2 mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114daab9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114daabe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114daac1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114daac3 je 0x114dab4b */
  if (C.zf) goto L_114dab4b;
  /* 114daac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daacc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114daacf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daad2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114daad5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114daad8 mov ecx, dword ptr [edx*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114daadf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daae3 je 0x114dab4b */
  if (C.zf) goto L_114dab4b;
  /* 114daae5 cmp dword ptr [0x114ff130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114ff130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daaec jne 0x114dab2a */
  if (!C.zf) goto L_114dab2a;
  /* 114daaee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daaf1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114daaf4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daaf8 je 0x114dab08 */
  if (C.zf) goto L_114dab08;
  /* 114daafa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daafe je 0x114dab14 */
  if (C.zf) goto L_114dab14;
  /* 114dab00 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dab04 je 0x114dab20 */
  if (C.zf) goto L_114dab20;
  /* 114dab06 jmp 0x114dab2a */
  goto L_114dab2a;
L_114dab08:;
  /* 114dab08 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dab0a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 114dab0c call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114dab12u);
  /* 114dab12 jmp 0x114dab2a */
  goto L_114dab2a;
L_114dab14:;
  /* 114dab14 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dab16 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 114dab18 call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114dab1eu);
  /* 114dab1e jmp 0x114dab2a */
  goto L_114dab2a;
L_114dab20:;
  /* 114dab20 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dab22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 114dab24 call dword ptr [0x1150134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150134c))), 0x114dab2au);
L_114dab2a:;
  /* 114dab2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dab2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dab30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dab33 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dab36 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dab39 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dab40 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 114dab47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dab49 jmp 0x114dab64 */
  goto L_114dab64;
L_114dab4b:;
  /* 114dab4b call 0x114d7750 */
  push32(0x114dab50u); f_114d7750();
  /* 114dab50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114dab56 call 0x114d7760 */
  push32(0x114dab5bu); f_114d7760();
  /* 114dab5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114dab61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114dab64:;
  /* 114dab64 mov esp, ebp */
  ESP = (EBP);
  /* 114dab66 pop ebp */
  EBP = (pop32());
  /* 114dab67 ret  */
  ESPCHK(0x114daa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab70 @ 0x114dab70 (102 bytes, 30 insns) */
void f_114dab70(void) {
  FTRACE(0x114dab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dab70 push ebp */
  push32((uint32_t)(EBP));
  /* 114dab71 mov ebp, esp */
  EBP = (ESP);
  /* 114dab73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dab76 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dab7c jae 0x114dabbb */
  if (!C.cf) goto L_114dabbb;
  /* 114dab7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dab81 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114dab84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dab87 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114dab8a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dab8d mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114dab94 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114dab99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114dab9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dab9e je 0x114dabbb */
  if (C.zf) goto L_114dabbb;
  /* 114daba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daba3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114daba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daba9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114dabac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dabaf mov ecx, dword ptr [edx*4 + 0x11500b00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11500b00)));
  /* 114dabb6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 114dabb9 jmp 0x114dabd4 */
  goto L_114dabd4;
L_114dabbb:;
  /* 114dabbb call 0x114d7750 */
  push32(0x114dabc0u); f_114d7750();
  /* 114dabc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114dabc6 call 0x114d7760 */
  push32(0x114dabcbu); f_114d7760();
  /* 114dabcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114dabd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114dabd4:;
  /* 114dabd4 pop ebp */
  EBP = (pop32());
  /* 114dabd5 ret  */
  ESPCHK(0x114dab70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001abe0 @ 0x114dabe0 (260 bytes, 83 insns) */
void f_114dabe0(void) {
  FTRACE(0x114dabe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dabe0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dabe1 mov ebp, esp */
  EBP = (ESP);
  /* 114dabe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dabe6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 114dabea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dabed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 114dabf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dabf2 je 0x114dabfd */
  if (C.zf) goto L_114dabfd;
  /* 114dabf4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dabf7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 114dabfa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_114dabfd:;
  /* 114dabfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dac00 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 114dac06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dac08 je 0x114dac12 */
  if (C.zf) goto L_114dac12;
  /* 114dac0a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dac0d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 114dac0f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_114dac12:;
  /* 114dac12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dac15 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 114dac1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dac1d je 0x114dac28 */
  if (C.zf) goto L_114dac28;
  /* 114dac1f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dac22 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 114dac25 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_114dac28:;
  /* 114dac28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dac2b push eax */
  push32((uint32_t)(EAX));
  /* 114dac2c call dword ptr [0x115013cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013cc))), 0x114dac32u);
  /* 114dac32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dac35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dac39 jne 0x114dac52 */
  if (!C.zf) goto L_114dac52;
  /* 114dac3b call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114dac41u);
  /* 114dac41 push eax */
  push32((uint32_t)(EAX));
  /* 114dac42 call 0x114d76b0 */
  push32(0x114dac47u); f_114d76b0();
  /* 114dac47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dac4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dac4d jmp 0x114dace0 */
  goto L_114dace0;
L_114dac52:;
  /* 114dac52 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dac56 jne 0x114dac63 */
  if (!C.zf) goto L_114dac63;
  /* 114dac58 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dac5b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 114dac5e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 114dac61 jmp 0x114dac72 */
  goto L_114dac72;
L_114dac63:;
  /* 114dac63 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dac67 jne 0x114dac72 */
  if (!C.zf) goto L_114dac72;
  /* 114dac69 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dac6c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 114dac6f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_114dac72:;
  /* 114dac72 call 0x114da7e0 */
  push32(0x114dac77u); f_114da7e0();
  /* 114dac77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dac7a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dac7e jne 0x114dac9b */
  if (!C.zf) goto L_114dac9b;
  /* 114dac80 call 0x114d7750 */
  push32(0x114dac85u); f_114d7750();
  /* 114dac85 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 114dac8b call 0x114d7760 */
  push32(0x114dac90u); f_114d7760();
  /* 114dac90 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114dac96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dac99 jmp 0x114dace0 */
  goto L_114dace0;
L_114dac9b:;
  /* 114dac9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dac9e push eax */
  push32((uint32_t)(EAX));
  /* 114dac9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daca2 push ecx */
  push32((uint32_t)(ECX));
  /* 114daca3 call 0x114da9d0 */
  push32(0x114daca8u); f_114da9d0();
  /* 114daca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dacab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 114dacae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 114dacb1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 114dacb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dacb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dacba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dacbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dacc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dacc3 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dacca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114daccd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 114dacd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dacd4 push ecx */
  push32((uint32_t)(ECX));
  /* 114dacd5 call 0x114dad80 */
  push32(0x114dacdau); f_114dad80();
  /* 114dacda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dacdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114dace0:;
  /* 114dace0 mov esp, ebp */
  ESP = (EBP);
  /* 114dace2 pop ebp */
  EBP = (pop32());
  /* 114dace3 ret  */
  ESPCHK(0x114dabe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001acf0 @ 0x114dacf0 (134 bytes, 44 insns) */
void f_114dacf0(void) {
  FTRACE(0x114dacf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dacf0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dacf1 mov ebp, esp */
  EBP = (ESP);
  /* 114dacf3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dacf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dacf7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dacfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dacfd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dad00 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dad03 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dad0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dad0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114dad0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dad12 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dad16 jne 0x114dad51 */
  if (!C.zf) goto L_114dad51;
  /* 114dad18 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114dad1a call 0x114cb800 */
  push32(0x114dad1fu); f_114cb800();
  /* 114dad1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dad22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dad25 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dad29 jne 0x114dad47 */
  if (!C.zf) goto L_114dad47;
  /* 114dad2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dad2e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dad31 push edx */
  push32((uint32_t)(EDX));
  /* 114dad32 call dword ptr [0x11501424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501424))), 0x114dad38u);
  /* 114dad38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dad3b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114dad3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dad41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dad44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_114dad47:;
  /* 114dad47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114dad49 call 0x114cb8a0 */
  push32(0x114dad4eu); f_114cb8a0();
  /* 114dad4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dad51:;
  /* 114dad51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dad54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dad57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dad5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dad5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dad60 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dad67 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 114dad6b push eax */
  push32((uint32_t)(EAX));
  /* 114dad6c call dword ptr [0x11501440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501440))), 0x114dad72u);
  /* 114dad72 mov esp, ebp */
  ESP = (EBP);
  /* 114dad74 pop ebp */
  EBP = (pop32());
  /* 114dad75 ret  */
  ESPCHK(0x114dacf0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x114dad80 (38 bytes, 13 insns) */
void f_114dad80(void) {
  FTRACE(0x114dad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dad80 push ebp */
  push32((uint32_t)(EBP));
  /* 114dad81 mov ebp, esp */
  EBP = (ESP);
  /* 114dad83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dad86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114dad89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dad8c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114dad8f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dad92 mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114dad99 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 114dad9d push eax */
  push32((uint32_t)(EAX));
  /* 114dad9e call dword ptr [0x11501444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501444))), 0x114dada4u);
  /* 114dada4 pop ebp */
  EBP = (pop32());
  /* 114dada5 ret  */
  ESPCHK(0x114dad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001adb0 @ 0x114dadb0 (218 bytes, 63 insns) */
void f_114dadb0(void) {
  FTRACE(0x114dadb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dadb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dadb1 mov ebp, esp */
  EBP = (ESP);
  /* 114dadb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dadb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114dadbd push 2 */
  push32((uint32_t)(0x2u));
  /* 114dadbf call 0x114cb800 */
  push32(0x114dadc4u); f_114cb800();
  /* 114dadc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dadc7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 114dadce jmp 0x114dadd9 */
  goto L_114dadd9;
L_114dadd0:;
  /* 114dadd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dadd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dadd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114dadd9:;
  /* 114dadd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daddc cmp ecx, dword ptr [0x11500ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dade2 jge 0x114dae79 */
  if ((C.sf==C.of)) goto L_114dae79;
  /* 114dade8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dadeb mov eax, dword ptr [0x114ff768] */
  EAX = (r32((uint32_t)(0x114ff768)));
  /* 114dadf0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dadf4 je 0x114dae74 */
  if (C.zf) goto L_114dae74;
  /* 114dadf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dadf9 mov edx, dword ptr [0x114ff768] */
  EDX = (r32((uint32_t)(0x114ff768)));
  /* 114dadff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114dae02 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114dae05 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 114dae0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dae0d je 0x114dae31 */
  if (C.zf) goto L_114dae31;
  /* 114dae0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dae12 mov eax, dword ptr [0x114ff768] */
  EAX = (r32((uint32_t)(0x114ff768)));
  /* 114dae17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114dae1a push ecx */
  push32((uint32_t)(ECX));
  /* 114dae1b call 0x114ddf70 */
  push32(0x114dae20u); f_114ddf70();
  /* 114dae20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dae23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dae26 je 0x114dae31 */
  if (C.zf) goto L_114dae31;
  /* 114dae28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dae2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dae2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114dae31:;
  /* 114dae31 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dae35 jl 0x114dae74 */
  if ((C.sf!=C.of)) goto L_114dae74;
  /* 114dae37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dae3a mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114dae40 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114dae43 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dae46 push edx */
  push32((uint32_t)(EDX));
  /* 114dae47 call dword ptr [0x1150143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150143c))), 0x114dae4du);
  /* 114dae4d push 2 */
  push32((uint32_t)(0x2u));
  /* 114dae4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dae52 mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114dae58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114dae5b push edx */
  push32((uint32_t)(EDX));
  /* 114dae5c call 0x114cc390 */
  push32(0x114dae61u); f_114cc390();
  /* 114dae61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dae64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dae67 mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114dae6d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_114dae74:;
  /* 114dae74 jmp 0x114dadd0 */
  goto L_114dadd0;
L_114dae79:;
  /* 114dae79 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dae7b call 0x114cb8a0 */
  push32(0x114dae80u); f_114cb8a0();
  /* 114dae80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dae83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dae86 mov esp, ebp */
  ESP = (EBP);
  /* 114dae88 pop ebp */
  EBP = (pop32());
  /* 114dae89 ret  */
  ESPCHK(0x114dadb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ae90 @ 0x114dae90 (68 bytes, 26 insns) */
void f_114dae90(void) {
  FTRACE(0x114dae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dae90 push ebp */
  push32((uint32_t)(EBP));
  /* 114dae91 mov ebp, esp */
  EBP = (ESP);
  /* 114dae93 push ecx */
  push32((uint32_t)(ECX));
  /* 114dae94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dae98 jne 0x114daea6 */
  if (!C.zf) goto L_114daea6;
  /* 114dae9a push 0 */
  push32((uint32_t)(0x0u));
  /* 114dae9c call 0x114db000 */
  push32(0x114daea1u); f_114db000();
  /* 114daea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daea4 jmp 0x114daed0 */
  goto L_114daed0;
L_114daea6:;
  /* 114daea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daea9 push eax */
  push32((uint32_t)(EAX));
  /* 114daeaa call 0x114d5f30 */
  push32(0x114daeafu); f_114d5f30();
  /* 114daeaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daeb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daeb5 push ecx */
  push32((uint32_t)(ECX));
  /* 114daeb6 call 0x114daee0 */
  push32(0x114daebbu); f_114daee0();
  /* 114daebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114daec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daec4 push edx */
  push32((uint32_t)(EDX));
  /* 114daec5 call 0x114d5fa0 */
  push32(0x114daecau); f_114d5fa0();
  /* 114daeca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114daed0:;
  /* 114daed0 mov esp, ebp */
  ESP = (EBP);
  /* 114daed2 pop ebp */
  EBP = (pop32());
  /* 114daed3 ret  */
  ESPCHK(0x114dae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aee0 @ 0x114daee0 (65 bytes, 26 insns) */
void f_114daee0(void) {
  FTRACE(0x114daee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114daee0 push ebp */
  push32((uint32_t)(EBP));
  /* 114daee1 mov ebp, esp */
  EBP = (ESP);
  /* 114daee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daee6 push eax */
  push32((uint32_t)(EAX));
  /* 114daee7 call 0x114daf30 */
  push32(0x114daeecu); f_114daf30();
  /* 114daeec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daeef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114daef1 je 0x114daef8 */
  if (C.zf) goto L_114daef8;
  /* 114daef3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114daef6 jmp 0x114daf1f */
  goto L_114daf1f;
L_114daef8:;
  /* 114daef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daefb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114daefe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 114daf04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114daf06 je 0x114daf1d */
  if (C.zf) goto L_114daf1d;
  /* 114daf08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daf0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114daf0e push ecx */
  push32((uint32_t)(ECX));
  /* 114daf0f call 0x114de0c0 */
  push32(0x114daf14u); f_114de0c0();
  /* 114daf14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daf17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114daf19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114daf1b jmp 0x114daf1f */
  goto L_114daf1f;
L_114daf1d:;
  /* 114daf1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114daf1f:;
  /* 114daf1f pop ebp */
  EBP = (pop32());
  /* 114daf20 ret  */
  ESPCHK(0x114daee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af30 @ 0x114daf30 (183 bytes, 62 insns) */
void f_114daf30(void) {
  FTRACE(0x114daf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114daf30 push ebp */
  push32((uint32_t)(EBP));
  /* 114daf31 mov ebp, esp */
  EBP = (ESP);
  /* 114daf33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114daf36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114daf3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114daf40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114daf43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf46 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114daf49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114daf4c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daf4f jne 0x114dafcb */
  if (!C.zf) goto L_114dafcb;
  /* 114daf51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114daf57 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 114daf5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114daf5f je 0x114dafcb */
  if (C.zf) goto L_114dafcb;
  /* 114daf61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf67 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 114daf69 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114daf6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114daf6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daf73 jle 0x114dafcb */
  if ((C.zf||C.sf!=C.of)) goto L_114dafcb;
  /* 114daf75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114daf78 push edx */
  push32((uint32_t)(EDX));
  /* 114daf79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114daf7f push ecx */
  push32((uint32_t)(ECX));
  /* 114daf80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf83 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114daf86 push eax */
  push32((uint32_t)(EAX));
  /* 114daf87 call 0x114d59c0 */
  push32(0x114daf8cu); f_114d59c0();
  /* 114daf8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daf8f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114daf92 jne 0x114dafb5 */
  if (!C.zf) goto L_114dafb5;
  /* 114daf94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114daf97 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114daf9a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 114dafa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dafa2 je 0x114dafb3 */
  if (C.zf) goto L_114dafb3;
  /* 114dafa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafa7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114dafaa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 114dafad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafb0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_114dafb3:;
  /* 114dafb3 jmp 0x114dafcb */
  goto L_114dafcb;
L_114dafb5:;
  /* 114dafb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafb8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114dafbb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114dafbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafc1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 114dafc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114dafcb:;
  /* 114dafcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114dafd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114dafd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dafd9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114dafe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dafe3 mov esp, ebp */
  ESP = (EBP);
  /* 114dafe5 pop ebp */
  EBP = (pop32());
  /* 114dafe6 ret  */
  ESPCHK(0x114daf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aff0 @ 0x114daff0 (15 bytes, 7 insns) */
void f_114daff0(void) {
  FTRACE(0x114daff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114daff0 push ebp */
  push32((uint32_t)(EBP));
  /* 114daff1 mov ebp, esp */
  EBP = (ESP);
  /* 114daff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114daff5 call 0x114db000 */
  push32(0x114daffau); f_114db000();
  /* 114daffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114daffd pop ebp */
  EBP = (pop32());
  /* 114daffe ret  */
  ESPCHK(0x114daff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b000 @ 0x114db000 (319 bytes, 94 insns) */
void f_114db000(void) {
  FTRACE(0x114db000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db000 push ebp */
  push32((uint32_t)(EBP));
  /* 114db001 mov ebp, esp */
  EBP = (ESP);
  /* 114db003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114db00d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114db014 push 2 */
  push32((uint32_t)(0x2u));
  /* 114db016 call 0x114cb800 */
  push32(0x114db01bu); f_114cb800();
  /* 114db01b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db01e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114db025 jmp 0x114db030 */
  goto L_114db030;
L_114db027:;
  /* 114db027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db02a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db02d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_114db030:;
  /* 114db030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db033 cmp ecx, dword ptr [0x11500ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11500ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db039 jge 0x114db123 */
  if ((C.sf==C.of)) goto L_114db123;
  /* 114db03f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db042 mov eax, dword ptr [0x114ff768] */
  EAX = (r32((uint32_t)(0x114ff768)));
  /* 114db047 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db04b je 0x114db11e */
  if (C.zf) goto L_114db11e;
  /* 114db051 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db054 mov edx, dword ptr [0x114ff768] */
  EDX = (r32((uint32_t)(0x114ff768)));
  /* 114db05a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114db05d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114db060 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 114db066 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114db068 je 0x114db11e */
  if (C.zf) goto L_114db11e;
  /* 114db06e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db071 mov eax, dword ptr [0x114ff768] */
  EAX = (r32((uint32_t)(0x114ff768)));
  /* 114db076 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114db079 push ecx */
  push32((uint32_t)(ECX));
  /* 114db07a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db07d push edx */
  push32((uint32_t)(EDX));
  /* 114db07e call 0x114d5f70 */
  push32(0x114db083u); f_114d5f70();
  /* 114db083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db086 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db089 mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114db08f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114db092 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114db095 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 114db09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db09c je 0x114db105 */
  if (C.zf) goto L_114db105;
  /* 114db09e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db0a2 jne 0x114db0c9 */
  if (!C.zf) goto L_114db0c9;
  /* 114db0a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db0a7 mov edx, dword ptr [0x114ff768] */
  EDX = (r32((uint32_t)(0x114ff768)));
  /* 114db0ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114db0b0 push eax */
  push32((uint32_t)(EAX));
  /* 114db0b1 call 0x114daee0 */
  push32(0x114db0b6u); f_114daee0();
  /* 114db0b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db0b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db0bc je 0x114db0c7 */
  if (C.zf) goto L_114db0c7;
  /* 114db0be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db0c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db0c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114db0c7:;
  /* 114db0c7 jmp 0x114db105 */
  goto L_114db105;
L_114db0c9:;
  /* 114db0c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db0cd jne 0x114db105 */
  if (!C.zf) goto L_114db105;
  /* 114db0cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db0d2 mov eax, dword ptr [0x114ff768] */
  EAX = (r32((uint32_t)(0x114ff768)));
  /* 114db0d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114db0da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114db0dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114db0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114db0e2 je 0x114db105 */
  if (C.zf) goto L_114db105;
  /* 114db0e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db0e7 mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114db0ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114db0f0 push edx */
  push32((uint32_t)(EDX));
  /* 114db0f1 call 0x114daee0 */
  push32(0x114db0f6u); f_114daee0();
  /* 114db0f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db0f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db0fc jne 0x114db105 */
  if (!C.zf) goto L_114db105;
  /* 114db0fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_114db105:;
  /* 114db105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db108 mov ecx, dword ptr [0x114ff768] */
  ECX = (r32((uint32_t)(0x114ff768)));
  /* 114db10e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114db111 push edx */
  push32((uint32_t)(EDX));
  /* 114db112 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db115 push eax */
  push32((uint32_t)(EAX));
  /* 114db116 call 0x114d5fe0 */
  push32(0x114db11bu); f_114d5fe0();
  /* 114db11b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114db11e:;
  /* 114db11e jmp 0x114db027 */
  goto L_114db027;
L_114db123:;
  /* 114db123 push 2 */
  push32((uint32_t)(0x2u));
  /* 114db125 call 0x114cb8a0 */
  push32(0x114db12au); f_114cb8a0();
  /* 114db12a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db12d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db131 jne 0x114db138 */
  if (!C.zf) goto L_114db138;
  /* 114db133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db136 jmp 0x114db13b */
  goto L_114db13b;
L_114db138:;
  /* 114db138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114db13b:;
  /* 114db13b mov esp, ebp */
  ESP = (EBP);
  /* 114db13d pop ebp */
  EBP = (pop32());
  /* 114db13e ret  */
  ESPCHK(0x114db000u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b140 @ 0x114db140 (255 bytes, 88 insns) */
void f_114db140(void) {
  FTRACE(0x114db140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db140 push ebp */
  push32((uint32_t)(EBP));
  /* 114db141 mov ebp, esp */
  EBP = (ESP);
  /* 114db143 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_114db146:;
  /* 114db146 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db14d jle 0x114db166 */
  if ((C.zf||C.sf!=C.of)) goto L_114db166;
  /* 114db14f push 8 */
  push32((uint32_t)(0x8u));
  /* 114db151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114db156 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114db158 push ecx */
  push32((uint32_t)(ECX));
  /* 114db159 call 0x114d20c0 */
  push32(0x114db15eu); f_114d20c0();
  /* 114db15e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db161 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114db164 jmp 0x114db17f */
  goto L_114db17f;
L_114db166:;
  /* 114db166 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db16b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114db16d mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114db173 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db175 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114db179 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114db17c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114db17f:;
  /* 114db17f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db183 je 0x114db190 */
  if (C.zf) goto L_114db190;
  /* 114db185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db188 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db18b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114db18e jmp 0x114db146 */
  goto L_114db146;
L_114db190:;
  /* 114db190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db195 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114db197 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114db19a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db19d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db1a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114db1a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db1a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db1a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db1ad je 0x114db1b5 */
  if (C.zf) goto L_114db1b5;
  /* 114db1af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db1b3 jne 0x114db1c8 */
  if (!C.zf) goto L_114db1c8;
L_114db1b5:;
  /* 114db1b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db1b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db1ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114db1bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db1bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db1c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db1c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114db1c8:;
  /* 114db1c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114db1cf:;
  /* 114db1cf cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db1d6 jle 0x114db1eb */
  if ((C.zf||C.sf!=C.of)) goto L_114db1eb;
  /* 114db1d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 114db1da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db1dd push edx */
  push32((uint32_t)(EDX));
  /* 114db1de call 0x114d20c0 */
  push32(0x114db1e3u); f_114d20c0();
  /* 114db1e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db1e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114db1e9 jmp 0x114db200 */
  goto L_114db200;
L_114db1eb:;
  /* 114db1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db1ee mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114db1f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db1f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114db1fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114db1fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114db200:;
  /* 114db200 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db204 je 0x114db22b */
  if (C.zf) goto L_114db22b;
  /* 114db206 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db209 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114db20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db20f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 114db213 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114db216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db219 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114db21b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114db21d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114db220 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db223 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db226 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114db229 jmp 0x114db1cf */
  goto L_114db1cf;
L_114db22b:;
  /* 114db22b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db22f jne 0x114db238 */
  if (!C.zf) goto L_114db238;
  /* 114db231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db234 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114db236 jmp 0x114db23b */
  goto L_114db23b;
L_114db238:;
  /* 114db238 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114db23b:;
  /* 114db23b mov esp, ebp */
  ESP = (EBP);
  /* 114db23d pop ebp */
  EBP = (pop32());
  /* 114db23e ret  */
  ESPCHK(0x114db140u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b240 @ 0x114db240 (17 bytes, 8 insns) */
void f_114db240(void) {
  FTRACE(0x114db240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db240 push ebp */
  push32((uint32_t)(EBP));
  /* 114db241 mov ebp, esp */
  EBP = (ESP);
  /* 114db243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db246 push eax */
  push32((uint32_t)(EAX));
  /* 114db247 call 0x114db140 */
  push32(0x114db24cu); f_114db140();
  /* 114db24c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db24f pop ebp */
  EBP = (pop32());
  /* 114db250 ret  */
  ESPCHK(0x114db240u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b260 @ 0x114db260 (297 bytes, 106 insns) */
void f_114db260(void) {
  FTRACE(0x114db260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db260 push ebp */
  push32((uint32_t)(EBP));
  /* 114db261 mov ebp, esp */
  EBP = (ESP);
  /* 114db263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db266 push esi */
  push32((uint32_t)(ESI));
L_114db267:;
  /* 114db267 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db26e jle 0x114db287 */
  if ((C.zf||C.sf!=C.of)) goto L_114db287;
  /* 114db270 push 8 */
  push32((uint32_t)(0x8u));
  /* 114db272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db275 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114db277 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114db279 push ecx */
  push32((uint32_t)(ECX));
  /* 114db27a call 0x114d20c0 */
  push32(0x114db27fu); f_114d20c0();
  /* 114db27f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db282 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114db285 jmp 0x114db2a0 */
  goto L_114db2a0;
L_114db287:;
  /* 114db287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db28a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db28c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114db28e mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114db294 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db296 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114db29a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114db29d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_114db2a0:;
  /* 114db2a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db2a4 je 0x114db2b1 */
  if (C.zf) goto L_114db2b1;
  /* 114db2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db2a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db2ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114db2af jmp 0x114db267 */
  goto L_114db267;
L_114db2b1:;
  /* 114db2b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db2b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db2b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114db2b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114db2bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db2be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db2c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114db2c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db2c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114db2ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db2ce je 0x114db2d6 */
  if (C.zf) goto L_114db2d6;
  /* 114db2d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db2d4 jne 0x114db2e9 */
  if (!C.zf) goto L_114db2e9;
L_114db2d6:;
  /* 114db2d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db2d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db2db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114db2dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db2e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db2e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db2e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114db2e9:;
  /* 114db2e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114db2f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114db2f7:;
  /* 114db2f7 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db2fe jle 0x114db313 */
  if ((C.zf||C.sf!=C.of)) goto L_114db313;
  /* 114db300 push 4 */
  push32((uint32_t)(0x4u));
  /* 114db302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db305 push edx */
  push32((uint32_t)(EDX));
  /* 114db306 call 0x114d20c0 */
  push32(0x114db30bu); f_114d20c0();
  /* 114db30b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db30e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114db311 jmp 0x114db328 */
  goto L_114db328;
L_114db313:;
  /* 114db313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db316 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114db31c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114db31e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114db322 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114db325 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_114db328:;
  /* 114db328 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db32c je 0x114db369 */
  if (C.zf) goto L_114db369;
  /* 114db32e push 0 */
  push32((uint32_t)(0x0u));
  /* 114db330 push 0xa */
  push32((uint32_t)(0xau));
  /* 114db332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db335 push eax */
  push32((uint32_t)(EAX));
  /* 114db336 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db339 push ecx */
  push32((uint32_t)(ECX));
  /* 114db33a call 0x114de1a0 */
  push32(0x114db33fu); f_114de1a0();
  /* 114db33f mov ecx, eax */
  ECX = (EAX);
  /* 114db341 mov esi, edx */
  ESI = (EDX);
  /* 114db343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db346 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db349 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114db34a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db34c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114db34e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db351 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 114db354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db359 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114db35b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db361 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db364 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114db367 jmp 0x114db2f7 */
  goto L_114db2f7;
L_114db369:;
  /* 114db369 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db36d jne 0x114db37e */
  if (!C.zf) goto L_114db37e;
  /* 114db36f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db372 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114db374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db377 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db37a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114db37c jmp 0x114db384 */
  goto L_114db384;
L_114db37e:;
  /* 114db37e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db381 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_114db384:;
  /* 114db384 pop esi */
  ESI = (pop32());
  /* 114db385 mov esp, ebp */
  ESP = (EBP);
  /* 114db387 pop ebp */
  EBP = (pop32());
  /* 114db388 ret  */
  ESPCHK(0x114db260u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b390 @ 0x114db390 (46 bytes, 18 insns) */
void f_114db390(void) {
  FTRACE(0x114db390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db390 push ebp */
  push32((uint32_t)(EBP));
  /* 114db391 mov ebp, esp */
  EBP = (ESP);
  /* 114db393 push ecx */
  push32((uint32_t)(ECX));
  /* 114db394 push 0xc */
  push32((uint32_t)(0xcu));
  /* 114db396 call 0x114cb800 */
  push32(0x114db39bu); f_114cb800();
  /* 114db39b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db3a1 push eax */
  push32((uint32_t)(EAX));
  /* 114db3a2 call 0x114db3c0 */
  push32(0x114db3a7u); f_114db3c0();
  /* 114db3a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db3aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db3ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 114db3af call 0x114cb8a0 */
  push32(0x114db3b4u); f_114cb8a0();
  /* 114db3b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db3b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db3ba mov esp, ebp */
  ESP = (EBP);
  /* 114db3bc pop ebp */
  EBP = (pop32());
  /* 114db3bd ret  */
  ESPCHK(0x114db390u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x114db3c0 (198 bytes, 69 insns) */
void f_114db3c0(void) {
  FTRACE(0x114db3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114db3c1 mov ebp, esp */
  EBP = (ESP);
  /* 114db3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db3c6 mov eax, dword ptr [0x114ff1cc] */
  EAX = (r32((uint32_t)(0x114ff1cc)));
  /* 114db3cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114db3ce cmp dword ptr [0x11500c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11500c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db3d5 jne 0x114db3de */
  if (!C.zf) goto L_114db3de;
  /* 114db3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db3d9 jmp 0x114db482 */
  goto L_114db482;
L_114db3de:;
  /* 114db3de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db3e2 jne 0x114db406 */
  if (!C.zf) goto L_114db406;
  /* 114db3e4 cmp dword ptr [0x114ff1d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff1d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db3eb je 0x114db406 */
  if (C.zf) goto L_114db406;
  /* 114db3ed call 0x114de230 */
  push32(0x114db3f2u); f_114de230();
  /* 114db3f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db3f4 je 0x114db3fd */
  if (C.zf) goto L_114db3fd;
  /* 114db3f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db3f8 jmp 0x114db482 */
  goto L_114db482;
L_114db3fd:;
  /* 114db3fd mov ecx, dword ptr [0x114ff1cc] */
  ECX = (r32((uint32_t)(0x114ff1cc)));
  /* 114db403 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114db406:;
  /* 114db406 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db40a je 0x114db480 */
  if (C.zf) goto L_114db480;
  /* 114db40c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db410 je 0x114db480 */
  if (C.zf) goto L_114db480;
  /* 114db412 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db415 push edx */
  push32((uint32_t)(EDX));
  /* 114db416 call 0x114d0fb0 */
  push32(0x114db41bu); f_114d0fb0();
  /* 114db41b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db41e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114db421:;
  /* 114db421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db424 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db427 je 0x114db480 */
  if (C.zf) goto L_114db480;
  /* 114db429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db42c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114db42e push edx */
  push32((uint32_t)(EDX));
  /* 114db42f call 0x114d0fb0 */
  push32(0x114db434u); f_114d0fb0();
  /* 114db434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db437 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db43a jbe 0x114db475 */
  if ((C.cf||C.zf)) goto L_114db475;
  /* 114db43c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db43f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114db441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db444 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 114db448 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db44b jne 0x114db475 */
  if (!C.zf) goto L_114db475;
  /* 114db44d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db450 push ecx */
  push32((uint32_t)(ECX));
  /* 114db451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db454 push edx */
  push32((uint32_t)(EDX));
  /* 114db455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db458 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114db45a push ecx */
  push32((uint32_t)(ECX));
  /* 114db45b call 0x114de1e0 */
  push32(0x114db460u); f_114de1e0();
  /* 114db460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db465 jne 0x114db475 */
  if (!C.zf) goto L_114db475;
  /* 114db467 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db46a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114db46c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db46f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 114db473 jmp 0x114db482 */
  goto L_114db482;
L_114db475:;
  /* 114db475 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114db478 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db47b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114db47e jmp 0x114db421 */
  goto L_114db421;
L_114db480:;
  /* 114db480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114db482:;
  /* 114db482 mov esp, ebp */
  ESP = (EBP);
  /* 114db484 pop ebp */
  EBP = (pop32());
  /* 114db485 ret  */
  ESPCHK(0x114db3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b490 @ 0x114db490 (62 bytes, 21 insns) */
void f_114db490(void) {
  FTRACE(0x114db490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db490 push ebp */
  push32((uint32_t)(EBP));
  /* 114db491 mov ebp, esp */
  EBP = (ESP);
  /* 114db493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db499 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114db49c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db49f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114db4a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114db4a5 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db4ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114db4ae mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db4b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db4b6 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 114db4bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db4be shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114db4c1 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114db4c3 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 114db4c7 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 114db4ca mov esp, ebp */
  ESP = (EBP);
  /* 114db4cc pop ebp */
  EBP = (pop32());
  /* 114db4cd ret  */
  ESPCHK(0x114db490u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b4d0 @ 0x114db4d0 (45 bytes, 15 insns) */
void f_114db4d0(void) {
  FTRACE(0x114db4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114db4d1 mov ebp, esp */
  EBP = (ESP);
  /* 114db4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114db4d4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db4d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db4dc and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 114db4e1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114db4e4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114db4e8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114db4ec sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114db4f1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114db4f5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 114db4f9 mov esp, ebp */
  ESP = (EBP);
  /* 114db4fb pop ebp */
  EBP = (pop32());
  /* 114db4fc ret  */
  ESPCHK(0x114db4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b500 @ 0x114db500 (51 bytes, 18 insns) */
void f_114db500(void) {
  FTRACE(0x114db500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db500 push ebp */
  push32((uint32_t)(EBP));
  /* 114db501 mov ebp, esp */
  EBP = (ESP);
  /* 114db503 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db506 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db50b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 114db510 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114db513 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 114db516 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114db519 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 114db520 push eax */
  push32((uint32_t)(EAX));
  /* 114db521 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db524 push ecx */
  push32((uint32_t)(ECX));
  /* 114db525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db528 push edx */
  push32((uint32_t)(EDX));
  /* 114db529 call 0x114db490 */
  push32(0x114db52eu); f_114db490();
  /* 114db52e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db531 pop ebp */
  EBP = (pop32());
  /* 114db532 ret  */
  ESPCHK(0x114db500u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b540 @ 0x114db540 (52 bytes, 18 insns) */
void f_114db540(void) {
  FTRACE(0x114db540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db540 push ebp */
  push32((uint32_t)(EBP));
  /* 114db541 mov ebp, esp */
  EBP = (ESP);
  /* 114db543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db549 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114db54c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db54f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114db552 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db555 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114db55b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 114db561 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114db564 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114db567 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114db569 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 114db56d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 114db570 mov esp, ebp */
  ESP = (EBP);
  /* 114db572 pop ebp */
  EBP = (pop32());
  /* 114db573 ret  */
  ESPCHK(0x114db540u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b580 @ 0x114db580 (124 bytes, 37 insns) */
void f_114db580(void) {
  FTRACE(0x114db580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db580 push ebp */
  push32((uint32_t)(EBP));
  /* 114db581 mov ebp, esp */
  EBP = (ESP);
  /* 114db583 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db58a jne 0x114db599 */
  if (!C.zf) goto L_114db599;
  /* 114db58c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db590 jne 0x114db599 */
  if (!C.zf) goto L_114db599;
  /* 114db592 mov eax, 1 */
  EAX = (0x1u);
  /* 114db597 jmp 0x114db5fa */
  goto L_114db5fa;
L_114db599:;
  /* 114db599 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db5a0 jne 0x114db5af */
  if (!C.zf) goto L_114db5af;
  /* 114db5a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db5a6 jne 0x114db5af */
  if (!C.zf) goto L_114db5af;
  /* 114db5a8 mov eax, 2 */
  EAX = (0x2u);
  /* 114db5ad jmp 0x114db5fa */
  goto L_114db5fa;
L_114db5af:;
  /* 114db5af mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db5b2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db5b7 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 114db5bc cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db5c1 jne 0x114db5ca */
  if (!C.zf) goto L_114db5ca;
  /* 114db5c3 mov eax, 3 */
  EAX = (0x3u);
  /* 114db5c8 jmp 0x114db5fa */
  goto L_114db5fa;
L_114db5ca:;
  /* 114db5ca mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db5cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114db5d3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 114db5d9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db5df jne 0x114db5f8 */
  if (!C.zf) goto L_114db5f8;
  /* 114db5e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db5e4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 114db5e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114db5e9 jne 0x114db5f1 */
  if (!C.zf) goto L_114db5f1;
  /* 114db5eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db5ef je 0x114db5f8 */
  if (C.zf) goto L_114db5f8;
L_114db5f1:;
  /* 114db5f1 mov eax, 4 */
  EAX = (0x4u);
  /* 114db5f6 jmp 0x114db5fa */
  goto L_114db5fa;
L_114db5f8:;
  /* 114db5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114db5fa:;
  /* 114db5fa pop ebp */
  EBP = (pop32());
  /* 114db5fb ret  */
  ESPCHK(0x114db580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b600 @ 0x114db600 (313 bytes, 95 insns) */
void f_114db600(void) {
  FTRACE(0x114db600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db600 push ebp */
  push32((uint32_t)(EBP));
  /* 114db601 mov ebp, esp */
  EBP = (ESP);
  /* 114db603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db606 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 114db609 fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114db60f fnstsw ax */
  AX = fpu_status();
  /* 114db611 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 114db614 je 0x114db630 */
  if (C.zf) goto L_114db630;
  /* 114db616 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114db61d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114db624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114db62b jmp 0x114db72a */
  goto L_114db72a;
L_114db630:;
  /* 114db630 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db633 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db638 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 114db63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db63f jne 0x114db6f9 */
  if (!C.zf) goto L_114db6f9;
  /* 114db645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db648 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 114db64b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114db64d jne 0x114db659 */
  if (!C.zf) goto L_114db659;
  /* 114db64f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db653 je 0x114db6f9 */
  if (C.zf) goto L_114db6f9;
L_114db659:;
  /* 114db659 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 114db660 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 114db663 fcomp qword ptr [0x114f9728] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x114f9728)));
  (void)fpu_pop();
  /* 114db669 fnstsw ax */
  AX = fpu_status();
  /* 114db66b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 114db66e je 0x114db679 */
  if (C.zf) goto L_114db679;
  /* 114db670 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 114db677 jmp 0x114db680 */
  goto L_114db680;
L_114db679:;
  /* 114db679 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_114db680:;
  /* 114db680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114db683 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114db686:;
  /* 114db686 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db689 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db68e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114db691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db693 jne 0x114db6c5 */
  if (!C.zf) goto L_114db6c5;
  /* 114db695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db698 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114db69a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114db69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db6a0 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 114db6a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114db6a8 je 0x114db6b2 */
  if (C.zf) goto L_114db6b2;
  /* 114db6aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db6ad or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114db6af mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_114db6b2:;
  /* 114db6b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db6b5 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 114db6b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114db6ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db6bd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db6c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114db6c3 jmp 0x114db686 */
  goto L_114db686;
L_114db6c5:;
  /* 114db6c5 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 114db6c9 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 114db6cd mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 114db6d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db6d5 je 0x114db6e2 */
  if (C.zf) goto L_114db6e2;
  /* 114db6d7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 114db6db or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114db6de mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_114db6e2:;
  /* 114db6e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114db6e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db6e7 push edx */
  push32((uint32_t)(EDX));
  /* 114db6e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db6eb push eax */
  push32((uint32_t)(EAX));
  /* 114db6ec call 0x114db490 */
  push32(0x114db6f1u); f_114db490();
  /* 114db6f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db6f4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 114db6f7 jmp 0x114db72a */
  goto L_114db72a;
L_114db6f9:;
  /* 114db6f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114db6fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114db6fe push ecx */
  push32((uint32_t)(ECX));
  /* 114db6ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db702 push edx */
  push32((uint32_t)(EDX));
  /* 114db703 call 0x114db490 */
  push32(0x114db708u); f_114db490();
  /* 114db708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db70b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 114db70e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 114db711 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db716 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 114db71b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114db71e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 114db721 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db727 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114db72a:;
  /* 114db72a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114db72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db730 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 114db732 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 114db735 mov esp, ebp */
  ESP = (EBP);
  /* 114db737 pop ebp */
  EBP = (pop32());
  /* 114db738 ret  */
  ESPCHK(0x114db600u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x114db740 (219 bytes, 64 insns) */
void f_114db740(void) {
  FTRACE(0x114db740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db740 push ebp */
  push32((uint32_t)(EBP));
  /* 114db741 mov ebp, esp */
  EBP = (ESP);
  /* 114db743 push ecx */
  push32((uint32_t)(ECX));
  /* 114db744 cmp dword ptr [0x114ff414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db74b je 0x114db7e1 */
  if (C.zf) goto L_114db7e1;
  /* 114db751 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 114db753 push 0x114fa4c4 */
  push32((uint32_t)(0x114fa4c4u));
  /* 114db758 push 2 */
  push32((uint32_t)(0x2u));
  /* 114db75a push 0xac */
  push32((uint32_t)(0xacu));
  /* 114db75f push 1 */
  push32((uint32_t)(0x1u));
  /* 114db761 call 0x114cbd10 */
  push32(0x114db766u); f_114cbd10();
  /* 114db766 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db76c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db770 jne 0x114db77c */
  if (!C.zf) goto L_114db77c;
  /* 114db772 mov eax, 1 */
  EAX = (0x1u);
  /* 114db777 jmp 0x114db817 */
  goto L_114db817;
L_114db77c:;
  /* 114db77c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db77f push eax */
  push32((uint32_t)(EAX));
  /* 114db780 call 0x114db820 */
  push32(0x114db785u); f_114db820();
  /* 114db785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114db78a je 0x114db7ad */
  if (C.zf) goto L_114db7ad;
  /* 114db78c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db78f push ecx */
  push32((uint32_t)(ECX));
  /* 114db790 call 0x114dbdb0 */
  push32(0x114db795u); f_114dbdb0();
  /* 114db795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db798 push 2 */
  push32((uint32_t)(0x2u));
  /* 114db79a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db79d push edx */
  push32((uint32_t)(EDX));
  /* 114db79e call 0x114cc390 */
  push32(0x114db7a3u); f_114cc390();
  /* 114db7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db7a6 mov eax, 1 */
  EAX = (0x1u);
  /* 114db7ab jmp 0x114db817 */
  goto L_114db817;
L_114db7ad:;
  /* 114db7ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db7b0 mov dword ptr [0x114fe330], eax */
  w32((uint32_t)(0x114fe330), (EAX));
  /* 114db7b5 mov ecx, dword ptr [0x114ff424] */
  ECX = (r32((uint32_t)(0x114ff424)));
  /* 114db7bb push ecx */
  push32((uint32_t)(ECX));
  /* 114db7bc call 0x114dbdb0 */
  push32(0x114db7c1u); f_114dbdb0();
  /* 114db7c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db7c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114db7c6 mov edx, dword ptr [0x114ff424] */
  EDX = (r32((uint32_t)(0x114ff424)));
  /* 114db7cc push edx */
  push32((uint32_t)(EDX));
  /* 114db7cd call 0x114cc390 */
  push32(0x114db7d2u); f_114cc390();
  /* 114db7d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db7d8 mov dword ptr [0x114ff424], eax */
  w32((uint32_t)(0x114ff424), (EAX));
  /* 114db7dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db7df jmp 0x114db817 */
  goto L_114db817;
L_114db7e1:;
  /* 114db7e1 mov dword ptr [0x114fe330], 0x114fe338 */
  w32((uint32_t)(0x114fe330), (0x114fe338u));
  /* 114db7eb mov ecx, dword ptr [0x114ff424] */
  ECX = (r32((uint32_t)(0x114ff424)));
  /* 114db7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 114db7f2 call 0x114dbdb0 */
  push32(0x114db7f7u); f_114dbdb0();
  /* 114db7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 114db7fc mov edx, dword ptr [0x114ff424] */
  EDX = (r32((uint32_t)(0x114ff424)));
  /* 114db802 push edx */
  push32((uint32_t)(EDX));
  /* 114db803 call 0x114cc390 */
  push32(0x114db808u); f_114cc390();
  /* 114db808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db80b mov dword ptr [0x114ff424], 0 */
  w32((uint32_t)(0x114ff424), (0x0u));
  /* 114db815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114db817:;
  /* 114db817 mov esp, ebp */
  ESP = (EBP);
  /* 114db819 pop ebp */
  EBP = (pop32());
  /* 114db81a ret  */
  ESPCHK(0x114db740u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b820 @ 0x114db820 (1423 bytes, 533 insns) */
void f_114db820(void) {
  FTRACE(0x114db820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114db820 push ebp */
  push32((uint32_t)(EBP));
  /* 114db821 mov ebp, esp */
  EBP = (ESP);
  /* 114db823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114db826 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114db82d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114db82f mov ax, word ptr [0x114ff45e] */
  AX = (r16((uint32_t)(0x114ff45e)));
  /* 114db835 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114db838 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114db83a mov cx, word ptr [0x114ff460] */
  CX = (r16((uint32_t)(0x114ff460)));
  /* 114db841 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114db844 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114db848 jne 0x114db852 */
  if (!C.zf) goto L_114db852;
  /* 114db84a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114db84d jmp 0x114dbdab */
  goto L_114dbdab;
L_114db852:;
  /* 114db852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db855 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db858 push edx */
  push32((uint32_t)(EDX));
  /* 114db859 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 114db85b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db85e push eax */
  push32((uint32_t)(EAX));
  /* 114db85f push 1 */
  push32((uint32_t)(0x1u));
  /* 114db861 call 0x114df750 */
  push32(0x114db866u); f_114df750();
  /* 114db866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db86c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db86e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db874 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db877 push edx */
  push32((uint32_t)(EDX));
  /* 114db878 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 114db87a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db87d push eax */
  push32((uint32_t)(EAX));
  /* 114db87e push 1 */
  push32((uint32_t)(0x1u));
  /* 114db880 call 0x114df750 */
  push32(0x114db885u); f_114df750();
  /* 114db885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db88b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db88d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db893 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db896 push edx */
  push32((uint32_t)(EDX));
  /* 114db897 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 114db899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db89c push eax */
  push32((uint32_t)(EAX));
  /* 114db89d push 1 */
  push32((uint32_t)(0x1u));
  /* 114db89f call 0x114df750 */
  push32(0x114db8a4u); f_114df750();
  /* 114db8a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db8aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db8ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db8af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db8b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8b5 push edx */
  push32((uint32_t)(EDX));
  /* 114db8b6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 114db8b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db8bb push eax */
  push32((uint32_t)(EAX));
  /* 114db8bc push 1 */
  push32((uint32_t)(0x1u));
  /* 114db8be call 0x114df750 */
  push32(0x114db8c3u); f_114df750();
  /* 114db8c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db8c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db8cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db8ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db8d1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8d4 push edx */
  push32((uint32_t)(EDX));
  /* 114db8d5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 114db8d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db8da push eax */
  push32((uint32_t)(EAX));
  /* 114db8db push 1 */
  push32((uint32_t)(0x1u));
  /* 114db8dd call 0x114df750 */
  push32(0x114db8e2u); f_114df750();
  /* 114db8e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db8e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db8ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db8ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db8f0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db8f3 push edx */
  push32((uint32_t)(EDX));
  /* 114db8f4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 114db8f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db8f9 push eax */
  push32((uint32_t)(EAX));
  /* 114db8fa push 1 */
  push32((uint32_t)(0x1u));
  /* 114db8fc call 0x114df750 */
  push32(0x114db901u); f_114df750();
  /* 114db901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db904 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db907 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db909 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db90c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db90f push edx */
  push32((uint32_t)(EDX));
  /* 114db910 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 114db912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db915 push eax */
  push32((uint32_t)(EAX));
  /* 114db916 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db918 call 0x114df750 */
  push32(0x114db91du); f_114df750();
  /* 114db91d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db925 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db92b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db92e push edx */
  push32((uint32_t)(EDX));
  /* 114db92f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 114db931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db934 push eax */
  push32((uint32_t)(EAX));
  /* 114db935 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db937 call 0x114df750 */
  push32(0x114db93cu); f_114df750();
  /* 114db93c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db93f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db942 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db944 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db94a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db94d push edx */
  push32((uint32_t)(EDX));
  /* 114db94e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 114db950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db953 push eax */
  push32((uint32_t)(EAX));
  /* 114db954 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db956 call 0x114df750 */
  push32(0x114db95bu); f_114df750();
  /* 114db95b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db95e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db961 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db963 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db966 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db969 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db96c push edx */
  push32((uint32_t)(EDX));
  /* 114db96d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 114db96f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db972 push eax */
  push32((uint32_t)(EAX));
  /* 114db973 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db975 call 0x114df750 */
  push32(0x114db97au); f_114df750();
  /* 114db97a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db97d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db980 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db982 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db988 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db98b push edx */
  push32((uint32_t)(EDX));
  /* 114db98c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 114db98e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db991 push eax */
  push32((uint32_t)(EAX));
  /* 114db992 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db994 call 0x114df750 */
  push32(0x114db999u); f_114df750();
  /* 114db999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db99c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db99f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db9a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db9a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9aa push edx */
  push32((uint32_t)(EDX));
  /* 114db9ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 114db9ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db9b0 push eax */
  push32((uint32_t)(EAX));
  /* 114db9b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db9b3 call 0x114df750 */
  push32(0x114db9b8u); f_114df750();
  /* 114db9b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db9be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db9c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db9c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9c9 push edx */
  push32((uint32_t)(EDX));
  /* 114db9ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 114db9cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db9cf push eax */
  push32((uint32_t)(EAX));
  /* 114db9d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114db9d2 call 0x114df750 */
  push32(0x114db9d7u); f_114df750();
  /* 114db9d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db9dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db9df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114db9e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114db9e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9e8 push edx */
  push32((uint32_t)(EDX));
  /* 114db9e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114db9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114db9ee push eax */
  push32((uint32_t)(EAX));
  /* 114db9ef push 1 */
  push32((uint32_t)(0x1u));
  /* 114db9f1 call 0x114df750 */
  push32(0x114db9f6u); f_114df750();
  /* 114db9f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114db9f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114db9fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114db9fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba04 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba07 push edx */
  push32((uint32_t)(EDX));
  /* 114dba08 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 114dba0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dba0d push eax */
  push32((uint32_t)(EAX));
  /* 114dba0e push 1 */
  push32((uint32_t)(0x1u));
  /* 114dba10 call 0x114df750 */
  push32(0x114dba15u); f_114df750();
  /* 114dba15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dba1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dba1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba23 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba26 push edx */
  push32((uint32_t)(EDX));
  /* 114dba27 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 114dba29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dba2c push eax */
  push32((uint32_t)(EAX));
  /* 114dba2d push 1 */
  push32((uint32_t)(0x1u));
  /* 114dba2f call 0x114df750 */
  push32(0x114dba34u); f_114df750();
  /* 114dba34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dba3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dba3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba42 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba45 push edx */
  push32((uint32_t)(EDX));
  /* 114dba46 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 114dba48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dba4b push eax */
  push32((uint32_t)(EAX));
  /* 114dba4c push 1 */
  push32((uint32_t)(0x1u));
  /* 114dba4e call 0x114df750 */
  push32(0x114dba53u); f_114df750();
  /* 114dba53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dba59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dba5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba61 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba64 push edx */
  push32((uint32_t)(EDX));
  /* 114dba65 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 114dba67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dba6a push eax */
  push32((uint32_t)(EAX));
  /* 114dba6b push 1 */
  push32((uint32_t)(0x1u));
  /* 114dba6d call 0x114df750 */
  push32(0x114dba72u); f_114df750();
  /* 114dba72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dba78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dba7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba80 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba83 push edx */
  push32((uint32_t)(EDX));
  /* 114dba84 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 114dba86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dba89 push eax */
  push32((uint32_t)(EAX));
  /* 114dba8a push 1 */
  push32((uint32_t)(0x1u));
  /* 114dba8c call 0x114df750 */
  push32(0x114dba91u); f_114df750();
  /* 114dba91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dba94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dba97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dba99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dba9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dba9f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbaa2 push edx */
  push32((uint32_t)(EDX));
  /* 114dbaa3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 114dbaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbaa8 push eax */
  push32((uint32_t)(EAX));
  /* 114dbaa9 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbaab call 0x114df750 */
  push32(0x114dbab0u); f_114df750();
  /* 114dbab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbab3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbab6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbab8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbabb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbabe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbac1 push edx */
  push32((uint32_t)(EDX));
  /* 114dbac2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 114dbac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbac7 push eax */
  push32((uint32_t)(EAX));
  /* 114dbac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbaca call 0x114df750 */
  push32(0x114dbacfu); f_114df750();
  /* 114dbacf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbad2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbad5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbad7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbadd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbae0 push edx */
  push32((uint32_t)(EDX));
  /* 114dbae1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 114dbae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbae6 push eax */
  push32((uint32_t)(EAX));
  /* 114dbae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbae9 call 0x114df750 */
  push32(0x114dbaeeu); f_114df750();
  /* 114dbaee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbaf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbaf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbaf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbaf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbafc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbaff push edx */
  push32((uint32_t)(EDX));
  /* 114dbb00 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 114dbb02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbb05 push eax */
  push32((uint32_t)(EAX));
  /* 114dbb06 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbb08 call 0x114df750 */
  push32(0x114dbb0du); f_114df750();
  /* 114dbb0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbb13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbb15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbb18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbb1b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb1e push edx */
  push32((uint32_t)(EDX));
  /* 114dbb1f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 114dbb21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbb24 push eax */
  push32((uint32_t)(EAX));
  /* 114dbb25 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbb27 call 0x114df750 */
  push32(0x114dbb2cu); f_114df750();
  /* 114dbb2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbb32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbb34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbb37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbb3a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb3d push edx */
  push32((uint32_t)(EDX));
  /* 114dbb3e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 114dbb40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbb43 push eax */
  push32((uint32_t)(EAX));
  /* 114dbb44 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbb46 call 0x114df750 */
  push32(0x114dbb4bu); f_114df750();
  /* 114dbb4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbb51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbb53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbb56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbb59 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb5c push edx */
  push32((uint32_t)(EDX));
  /* 114dbb5d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 114dbb5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbb62 push eax */
  push32((uint32_t)(EAX));
  /* 114dbb63 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbb65 call 0x114df750 */
  push32(0x114dbb6au); f_114df750();
  /* 114dbb6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbb70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbb72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbb75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbb78 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb7b push edx */
  push32((uint32_t)(EDX));
  /* 114dbb7c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 114dbb7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbb81 push eax */
  push32((uint32_t)(EAX));
  /* 114dbb82 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbb84 call 0x114df750 */
  push32(0x114dbb89u); f_114df750();
  /* 114dbb89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbb8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbb91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbb94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbb97 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbb9a push edx */
  push32((uint32_t)(EDX));
  /* 114dbb9b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 114dbb9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbba0 push eax */
  push32((uint32_t)(EAX));
  /* 114dbba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbba3 call 0x114df750 */
  push32(0x114dbba8u); f_114df750();
  /* 114dbba8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbbae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbbb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbbb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbbb6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbb9 push edx */
  push32((uint32_t)(EDX));
  /* 114dbbba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 114dbbbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbbbf push eax */
  push32((uint32_t)(EAX));
  /* 114dbbc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbbc2 call 0x114df750 */
  push32(0x114dbbc7u); f_114df750();
  /* 114dbbc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbbcd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbbcf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbbd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbbd5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbd8 push edx */
  push32((uint32_t)(EDX));
  /* 114dbbd9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 114dbbdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbbde push eax */
  push32((uint32_t)(EAX));
  /* 114dbbdf push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbbe1 call 0x114df750 */
  push32(0x114dbbe6u); f_114df750();
  /* 114dbbe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbbec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbbee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbbf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbbf4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbbf7 push edx */
  push32((uint32_t)(EDX));
  /* 114dbbf8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 114dbbfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbbfd push eax */
  push32((uint32_t)(EAX));
  /* 114dbbfe push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbc00 call 0x114df750 */
  push32(0x114dbc05u); f_114df750();
  /* 114dbc05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbc0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbc0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbc10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbc13 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc16 push edx */
  push32((uint32_t)(EDX));
  /* 114dbc17 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 114dbc19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbc1c push eax */
  push32((uint32_t)(EAX));
  /* 114dbc1d push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbc1f call 0x114df750 */
  push32(0x114dbc24u); f_114df750();
  /* 114dbc24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbc2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbc2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbc2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbc32 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc38 push edx */
  push32((uint32_t)(EDX));
  /* 114dbc39 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 114dbc3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbc3e push eax */
  push32((uint32_t)(EAX));
  /* 114dbc3f push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbc41 call 0x114df750 */
  push32(0x114dbc46u); f_114df750();
  /* 114dbc46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbc4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbc4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbc51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbc54 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc5a push edx */
  push32((uint32_t)(EDX));
  /* 114dbc5b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114dbc5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbc60 push eax */
  push32((uint32_t)(EAX));
  /* 114dbc61 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbc63 call 0x114df750 */
  push32(0x114dbc68u); f_114df750();
  /* 114dbc68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbc6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbc70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbc73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbc76 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc7c push edx */
  push32((uint32_t)(EDX));
  /* 114dbc7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114dbc7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbc82 push eax */
  push32((uint32_t)(EAX));
  /* 114dbc83 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbc85 call 0x114df750 */
  push32(0x114dbc8au); f_114df750();
  /* 114dbc8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbc90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbc92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbc95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbc98 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbc9e push edx */
  push32((uint32_t)(EDX));
  /* 114dbc9f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 114dbca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbca4 push eax */
  push32((uint32_t)(EAX));
  /* 114dbca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbca7 call 0x114df750 */
  push32(0x114dbcacu); f_114df750();
  /* 114dbcac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbcaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbcb2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbcb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbcb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbcba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbcc0 push edx */
  push32((uint32_t)(EDX));
  /* 114dbcc1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 114dbcc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbcc6 push eax */
  push32((uint32_t)(EAX));
  /* 114dbcc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbcc9 call 0x114df750 */
  push32(0x114dbcceu); f_114df750();
  /* 114dbcce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbcd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbcd4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbcd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbcd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbcdc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbce2 push edx */
  push32((uint32_t)(EDX));
  /* 114dbce3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 114dbce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbce8 push eax */
  push32((uint32_t)(EAX));
  /* 114dbce9 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbceb call 0x114df750 */
  push32(0x114dbcf0u); f_114df750();
  /* 114dbcf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbcf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbcf6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbcf8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbcfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbcfe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd04 push edx */
  push32((uint32_t)(EDX));
  /* 114dbd05 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 114dbd07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbd0a push eax */
  push32((uint32_t)(EAX));
  /* 114dbd0b push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbd0d call 0x114df750 */
  push32(0x114dbd12u); f_114df750();
  /* 114dbd12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbd18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbd1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbd1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbd20 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd26 push edx */
  push32((uint32_t)(EDX));
  /* 114dbd27 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 114dbd29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dbd2c push eax */
  push32((uint32_t)(EAX));
  /* 114dbd2d push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbd2f call 0x114df750 */
  push32(0x114dbd34u); f_114df750();
  /* 114dbd34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbd3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbd3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbd3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbd42 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd48 push edx */
  push32((uint32_t)(EDX));
  /* 114dbd49 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 114dbd4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dbd4e push eax */
  push32((uint32_t)(EAX));
  /* 114dbd4f push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbd51 call 0x114df750 */
  push32(0x114dbd56u); f_114df750();
  /* 114dbd56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbd5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbd5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbd61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbd64 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd6a push edx */
  push32((uint32_t)(EDX));
  /* 114dbd6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114dbd6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dbd70 push eax */
  push32((uint32_t)(EAX));
  /* 114dbd71 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbd73 call 0x114df750 */
  push32(0x114dbd78u); f_114df750();
  /* 114dbd78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbd7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbd80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbd83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbd86 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbd8c push edx */
  push32((uint32_t)(EDX));
  /* 114dbd8d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 114dbd92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dbd95 push eax */
  push32((uint32_t)(EAX));
  /* 114dbd96 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dbd98 call 0x114df750 */
  push32(0x114dbd9du); f_114df750();
  /* 114dbd9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbda0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dbda3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dbda5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dbda8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_114dbdab:;
  /* 114dbdab mov esp, ebp */
  ESP = (EBP);
  /* 114dbdad pop ebp */
  EBP = (pop32());
  /* 114dbdae ret  */
  ESPCHK(0x114db820u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x114dbdb0 (779 bytes, 265 insns) */
void f_114dbdb0(void) {
  FTRACE(0x114dbdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dbdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dbdb1 mov ebp, esp */
  EBP = (ESP);
  /* 114dbdb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dbdb7 jne 0x114dbdbe */
  if (!C.zf) goto L_114dbdbe;
  /* 114dbdb9 jmp 0x114dc0b9 */
  goto L_114dc0b9;
L_114dbdbe:;
  /* 114dbdbe push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbdc3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114dbdc6 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbdc7 call 0x114cc390 */
  push32(0x114dbdccu); f_114cc390();
  /* 114dbdcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbdcf push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbdd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbdd4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114dbdd7 push eax */
  push32((uint32_t)(EAX));
  /* 114dbdd8 call 0x114cc390 */
  push32(0x114dbdddu); f_114cc390();
  /* 114dbddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbde0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbde2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbde5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114dbde8 push edx */
  push32((uint32_t)(EDX));
  /* 114dbde9 call 0x114cc390 */
  push32(0x114dbdeeu); f_114cc390();
  /* 114dbdee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbdf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbdf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbdf6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114dbdf9 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbdfa call 0x114cc390 */
  push32(0x114dbdffu); f_114cc390();
  /* 114dbdff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe02 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe07 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114dbe0a push eax */
  push32((uint32_t)(EAX));
  /* 114dbe0b call 0x114cc390 */
  push32(0x114dbe10u); f_114cc390();
  /* 114dbe10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe13 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe18 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114dbe1b push edx */
  push32((uint32_t)(EDX));
  /* 114dbe1c call 0x114cc390 */
  push32(0x114dbe21u); f_114cc390();
  /* 114dbe21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe24 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114dbe2b push ecx */
  push32((uint32_t)(ECX));
  /* 114dbe2c call 0x114cc390 */
  push32(0x114dbe31u); f_114cc390();
  /* 114dbe31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe34 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe39 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 114dbe3c push eax */
  push32((uint32_t)(EAX));
  /* 114dbe3d call 0x114cc390 */
  push32(0x114dbe42u); f_114cc390();
  /* 114dbe42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe45 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe4a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 114dbe4d push edx */
  push32((uint32_t)(EDX));
  /* 114dbe4e call 0x114cc390 */
  push32(0x114dbe53u); f_114cc390();
  /* 114dbe53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe56 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe5b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 114dbe5e push ecx */
  push32((uint32_t)(ECX));
  /* 114dbe5f call 0x114cc390 */
  push32(0x114dbe64u); f_114cc390();
  /* 114dbe64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe67 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe6c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 114dbe6f push eax */
  push32((uint32_t)(EAX));
  /* 114dbe70 call 0x114cc390 */
  push32(0x114dbe75u); f_114cc390();
  /* 114dbe75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe78 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe7d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 114dbe80 push edx */
  push32((uint32_t)(EDX));
  /* 114dbe81 call 0x114cc390 */
  push32(0x114dbe86u); f_114cc390();
  /* 114dbe86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe89 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe8e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 114dbe91 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbe92 call 0x114cc390 */
  push32(0x114dbe97u); f_114cc390();
  /* 114dbe97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbe9a push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbe9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbe9f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114dbea2 push eax */
  push32((uint32_t)(EAX));
  /* 114dbea3 call 0x114cc390 */
  push32(0x114dbea8u); f_114cc390();
  /* 114dbea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbeab push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbeb0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 114dbeb3 push edx */
  push32((uint32_t)(EDX));
  /* 114dbeb4 call 0x114cc390 */
  push32(0x114dbeb9u); f_114cc390();
  /* 114dbeb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbebc push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbec1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 114dbec4 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbec5 call 0x114cc390 */
  push32(0x114dbecau); f_114cc390();
  /* 114dbeca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbecd push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbed2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 114dbed5 push eax */
  push32((uint32_t)(EAX));
  /* 114dbed6 call 0x114cc390 */
  push32(0x114dbedbu); f_114cc390();
  /* 114dbedb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbede push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbee3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 114dbee6 push edx */
  push32((uint32_t)(EDX));
  /* 114dbee7 call 0x114cc390 */
  push32(0x114dbeecu); f_114cc390();
  /* 114dbeec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbeef push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbef4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 114dbef7 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbef8 call 0x114cc390 */
  push32(0x114dbefdu); f_114cc390();
  /* 114dbefd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf00 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf05 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 114dbf08 push eax */
  push32((uint32_t)(EAX));
  /* 114dbf09 call 0x114cc390 */
  push32(0x114dbf0eu); f_114cc390();
  /* 114dbf0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf11 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf16 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 114dbf19 push edx */
  push32((uint32_t)(EDX));
  /* 114dbf1a call 0x114cc390 */
  push32(0x114dbf1fu); f_114cc390();
  /* 114dbf1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf22 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf27 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 114dbf2a push ecx */
  push32((uint32_t)(ECX));
  /* 114dbf2b call 0x114cc390 */
  push32(0x114dbf30u); f_114cc390();
  /* 114dbf30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf33 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf38 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 114dbf3b push eax */
  push32((uint32_t)(EAX));
  /* 114dbf3c call 0x114cc390 */
  push32(0x114dbf41u); f_114cc390();
  /* 114dbf41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf44 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf49 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 114dbf4c push edx */
  push32((uint32_t)(EDX));
  /* 114dbf4d call 0x114cc390 */
  push32(0x114dbf52u); f_114cc390();
  /* 114dbf52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf55 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf5a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 114dbf5d push ecx */
  push32((uint32_t)(ECX));
  /* 114dbf5e call 0x114cc390 */
  push32(0x114dbf63u); f_114cc390();
  /* 114dbf63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf66 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf6b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 114dbf6e push eax */
  push32((uint32_t)(EAX));
  /* 114dbf6f call 0x114cc390 */
  push32(0x114dbf74u); f_114cc390();
  /* 114dbf74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf77 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf7c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 114dbf7f push edx */
  push32((uint32_t)(EDX));
  /* 114dbf80 call 0x114cc390 */
  push32(0x114dbf85u); f_114cc390();
  /* 114dbf85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf88 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf8d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 114dbf90 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbf91 call 0x114cc390 */
  push32(0x114dbf96u); f_114cc390();
  /* 114dbf96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbf99 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbf9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbf9e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 114dbfa1 push eax */
  push32((uint32_t)(EAX));
  /* 114dbfa2 call 0x114cc390 */
  push32(0x114dbfa7u); f_114cc390();
  /* 114dbfa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbfaa push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbfac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbfaf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 114dbfb2 push edx */
  push32((uint32_t)(EDX));
  /* 114dbfb3 call 0x114cc390 */
  push32(0x114dbfb8u); f_114cc390();
  /* 114dbfb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbfbb push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbfbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbfc0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 114dbfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dbfc4 call 0x114cc390 */
  push32(0x114dbfc9u); f_114cc390();
  /* 114dbfc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbfcc push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbfce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbfd1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 114dbfd4 push eax */
  push32((uint32_t)(EAX));
  /* 114dbfd5 call 0x114cc390 */
  push32(0x114dbfdau); f_114cc390();
  /* 114dbfda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbfdd push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbfdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbfe2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 114dbfe8 push edx */
  push32((uint32_t)(EDX));
  /* 114dbfe9 call 0x114cc390 */
  push32(0x114dbfeeu); f_114cc390();
  /* 114dbfee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dbff1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dbff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dbff6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 114dbffc push ecx */
  push32((uint32_t)(ECX));
  /* 114dbffd call 0x114cc390 */
  push32(0x114dc002u); f_114cc390();
  /* 114dc002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc005 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc00a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 114dc010 push eax */
  push32((uint32_t)(EAX));
  /* 114dc011 call 0x114cc390 */
  push32(0x114dc016u); f_114cc390();
  /* 114dc016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc019 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc01b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc01e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 114dc024 push edx */
  push32((uint32_t)(EDX));
  /* 114dc025 call 0x114cc390 */
  push32(0x114dc02au); f_114cc390();
  /* 114dc02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc02d push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc02f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc032 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 114dc038 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc039 call 0x114cc390 */
  push32(0x114dc03eu); f_114cc390();
  /* 114dc03e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc041 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc046 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 114dc04c push eax */
  push32((uint32_t)(EAX));
  /* 114dc04d call 0x114cc390 */
  push32(0x114dc052u); f_114cc390();
  /* 114dc052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc055 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc05a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 114dc060 push edx */
  push32((uint32_t)(EDX));
  /* 114dc061 call 0x114cc390 */
  push32(0x114dc066u); f_114cc390();
  /* 114dc066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc069 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc06b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc06e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 114dc074 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc075 call 0x114cc390 */
  push32(0x114dc07au); f_114cc390();
  /* 114dc07a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc07d push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc07f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc082 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 114dc088 push eax */
  push32((uint32_t)(EAX));
  /* 114dc089 call 0x114cc390 */
  push32(0x114dc08eu); f_114cc390();
  /* 114dc08e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc091 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc096 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 114dc09c push edx */
  push32((uint32_t)(EDX));
  /* 114dc09d call 0x114cc390 */
  push32(0x114dc0a2u); f_114cc390();
  /* 114dc0a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc0a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc0a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc0aa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 114dc0b0 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc0b1 call 0x114cc390 */
  push32(0x114dc0b6u); f_114cc390();
  /* 114dc0b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dc0b9:;
  /* 114dc0b9 pop ebp */
  EBP = (pop32());
  /* 114dc0ba ret  */
  ESPCHK(0x114dbdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c0c0 @ 0x114dc0c0 (678 bytes, 180 insns) */
void f_114dc0c0(void) {
  FTRACE(0x114dc0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc0c1 mov ebp, esp */
  EBP = (ESP);
  /* 114dc0c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dc0c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114dc0cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc0cf mov ax, word ptr [0x114ff45a] */
  AX = (r16((uint32_t)(0x114ff45a)));
  /* 114dc0d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dc0d8 cmp dword ptr [0x114ff410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc0df je 0x114dc23a */
  if (C.zf) goto L_114dc23a;
  /* 114dc0e5 push 0x114ff428 */
  push32((uint32_t)(0x114ff428u));
  /* 114dc0ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 114dc0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc0ef push ecx */
  push32((uint32_t)(ECX));
  /* 114dc0f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc0f2 call 0x114df750 */
  push32(0x114dc0f7u); f_114df750();
  /* 114dc0f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc0fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc0fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 114dc0ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114dc102 push 0x114ff42c */
  push32((uint32_t)(0x114ff42cu));
  /* 114dc107 push 0xf */
  push32((uint32_t)(0xfu));
  /* 114dc109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc10c push eax */
  push32((uint32_t)(EAX));
  /* 114dc10d push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc10f call 0x114df750 */
  push32(0x114dc114u); f_114df750();
  /* 114dc114 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc117 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc11a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc11f push 0x114ff430 */
  push32((uint32_t)(0x114ff430u));
  /* 114dc124 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 114dc126 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc129 push edx */
  push32((uint32_t)(EDX));
  /* 114dc12a push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc12c call 0x114df750 */
  push32(0x114dc131u); f_114df750();
  /* 114dc131 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc137 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc139 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc13c mov edx, dword ptr [0x114ff430] */
  EDX = (r32((uint32_t)(0x114ff430)));
  /* 114dc142 push edx */
  push32((uint32_t)(EDX));
  /* 114dc143 call 0x114dc370 */
  push32(0x114dc148u); f_114dc370();
  /* 114dc148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc14b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc14f je 0x114dc1a9 */
  if (C.zf) goto L_114dc1a9;
  /* 114dc151 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc153 mov eax, dword ptr [0x114ff428] */
  EAX = (r32((uint32_t)(0x114ff428)));
  /* 114dc158 push eax */
  push32((uint32_t)(EAX));
  /* 114dc159 call 0x114cc390 */
  push32(0x114dc15eu); f_114cc390();
  /* 114dc15e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc161 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc163 mov ecx, dword ptr [0x114ff42c] */
  ECX = (r32((uint32_t)(0x114ff42c)));
  /* 114dc169 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc16a call 0x114cc390 */
  push32(0x114dc16fu); f_114cc390();
  /* 114dc16f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc172 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc174 mov edx, dword ptr [0x114ff430] */
  EDX = (r32((uint32_t)(0x114ff430)));
  /* 114dc17a push edx */
  push32((uint32_t)(EDX));
  /* 114dc17b call 0x114cc390 */
  push32(0x114dc180u); f_114cc390();
  /* 114dc180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc183 mov dword ptr [0x114ff428], 0 */
  w32((uint32_t)(0x114ff428), (0x0u));
  /* 114dc18d mov dword ptr [0x114ff42c], 0 */
  w32((uint32_t)(0x114ff42c), (0x0u));
  /* 114dc197 mov dword ptr [0x114ff430], 0 */
  w32((uint32_t)(0x114ff430), (0x0u));
  /* 114dc1a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dc1a4 jmp 0x114dc362 */
  goto L_114dc362;
L_114dc1a9:;
  /* 114dc1a9 mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc1ae cmp dword ptr [eax], 0x114fe3e8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x114fe3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc1b4 je 0x114dc1f0 */
  if (C.zf) goto L_114dc1f0;
  /* 114dc1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc1b8 mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc1be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114dc1c0 push edx */
  push32((uint32_t)(EDX));
  /* 114dc1c1 call 0x114cc390 */
  push32(0x114dc1c6u); f_114cc390();
  /* 114dc1c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc1c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc1cb mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc1d0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114dc1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc1d4 call 0x114cc390 */
  push32(0x114dc1d9u); f_114cc390();
  /* 114dc1d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc1de mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc1e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114dc1e7 push eax */
  push32((uint32_t)(EAX));
  /* 114dc1e8 call 0x114cc390 */
  push32(0x114dc1edu); f_114cc390();
  /* 114dc1ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dc1f0:;
  /* 114dc1f0 mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc1f6 mov edx, dword ptr [0x114ff428] */
  EDX = (r32((uint32_t)(0x114ff428)));
  /* 114dc1fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114dc1fe mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc203 mov ecx, dword ptr [0x114ff42c] */
  ECX = (r32((uint32_t)(0x114ff42c)));
  /* 114dc209 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114dc20c mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc212 mov eax, dword ptr [0x114ff430] */
  EAX = (r32((uint32_t)(0x114ff430)));
  /* 114dc217 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 114dc21a mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc220 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114dc222 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dc224 mov byte ptr [0x114fd044], al */
  w8((uint32_t)(0x114fd044), (AL));
  /* 114dc229 mov dword ptr [0x114fd048], 1 */
  w32((uint32_t)(0x114fd048), (0x1u));
  /* 114dc233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc235 jmp 0x114dc362 */
  goto L_114dc362;
L_114dc23a:;
  /* 114dc23a push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc23c mov ecx, dword ptr [0x114ff428] */
  ECX = (r32((uint32_t)(0x114ff428)));
  /* 114dc242 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc243 call 0x114cc390 */
  push32(0x114dc248u); f_114cc390();
  /* 114dc248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc24b push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc24d mov edx, dword ptr [0x114ff42c] */
  EDX = (r32((uint32_t)(0x114ff42c)));
  /* 114dc253 push edx */
  push32((uint32_t)(EDX));
  /* 114dc254 call 0x114cc390 */
  push32(0x114dc259u); f_114cc390();
  /* 114dc259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc25c push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc25e mov eax, dword ptr [0x114ff430] */
  EAX = (r32((uint32_t)(0x114ff430)));
  /* 114dc263 push eax */
  push32((uint32_t)(EAX));
  /* 114dc264 call 0x114cc390 */
  push32(0x114dc269u); f_114cc390();
  /* 114dc269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc26c mov dword ptr [0x114ff428], 0 */
  w32((uint32_t)(0x114ff428), (0x0u));
  /* 114dc276 mov dword ptr [0x114ff42c], 0 */
  w32((uint32_t)(0x114ff42c), (0x0u));
  /* 114dc280 mov dword ptr [0x114ff430], 0 */
  w32((uint32_t)(0x114ff430), (0x0u));
  /* 114dc28a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 114dc28f push 0x114fa4d0 */
  push32((uint32_t)(0x114fa4d0u));
  /* 114dc294 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc296 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc298 call 0x114cb900 */
  push32(0x114dc29du); f_114cb900();
  /* 114dc29d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc2a0 mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc2a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114dc2a8 mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc2ae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc2b1 jne 0x114dc2bb */
  if (!C.zf) goto L_114dc2bb;
  /* 114dc2b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dc2b6 jmp 0x114dc362 */
  goto L_114dc362;
L_114dc2bb:;
  /* 114dc2bb push 0x114fa478 */
  push32((uint32_t)(0x114fa478u));
  /* 114dc2c0 mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc2c5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114dc2c7 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc2c8 call 0x114d1130 */
  push32(0x114dc2cdu); f_114d1130();
  /* 114dc2cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc2d0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 114dc2d5 push 0x114fa4d0 */
  push32((uint32_t)(0x114fa4d0u));
  /* 114dc2da push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc2dc push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc2de call 0x114cb900 */
  push32(0x114dc2e3u); f_114cb900();
  /* 114dc2e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc2e6 mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc2ec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 114dc2ef mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc2f4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc2f8 jne 0x114dc2ff */
  if (!C.zf) goto L_114dc2ff;
  /* 114dc2fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dc2fd jmp 0x114dc362 */
  goto L_114dc362;
L_114dc2ff:;
  /* 114dc2ff mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc305 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114dc308 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114dc30b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 114dc310 push 0x114fa4d0 */
  push32((uint32_t)(0x114fa4d0u));
  /* 114dc315 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc317 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc319 call 0x114cb900 */
  push32(0x114dc31eu); f_114cb900();
  /* 114dc31e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc321 mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc327 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 114dc32a mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc330 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc334 jne 0x114dc33b */
  if (!C.zf) goto L_114dc33b;
  /* 114dc336 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dc339 jmp 0x114dc362 */
  goto L_114dc362;
L_114dc33b:;
  /* 114dc33b mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc340 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114dc343 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 114dc346 mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc34c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114dc34e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114dc350 mov byte ptr [0x114fd044], cl */
  w8((uint32_t)(0x114fd044), (CL));
  /* 114dc356 mov dword ptr [0x114fd048], 1 */
  w32((uint32_t)(0x114fd048), (0x1u));
  /* 114dc360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dc362:;
  /* 114dc362 mov esp, ebp */
  ESP = (EBP);
  /* 114dc364 pop ebp */
  EBP = (pop32());
  /* 114dc365 ret  */
  ESPCHK(0x114dc0c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x114dc370 (125 bytes, 49 insns) */
void f_114dc370(void) {
  FTRACE(0x114dc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc370 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc371 mov ebp, esp */
  EBP = (ESP);
  /* 114dc373 push ecx */
  push32((uint32_t)(ECX));
L_114dc374:;
  /* 114dc374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc377 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dc37a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dc37c je 0x114dc3e9 */
  if (C.zf) goto L_114dc3e9;
  /* 114dc37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc381 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114dc384 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc387 jl 0x114dc3ad */
  if ((C.sf!=C.of)) goto L_114dc3ad;
  /* 114dc389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc38c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114dc38f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc392 jg 0x114dc3ad */
  if ((!C.zf&&C.sf==C.of)) goto L_114dc3ad;
  /* 114dc394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc397 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dc39a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dc39d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc3a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114dc3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc3a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc3a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114dc3ab jmp 0x114dc3e7 */
  goto L_114dc3e7;
L_114dc3ad:;
  /* 114dc3ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc3b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114dc3b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc3b6 jne 0x114dc3de */
  if (!C.zf) goto L_114dc3de;
  /* 114dc3b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc3bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114dc3be:;
  /* 114dc3be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc3c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc3c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114dc3c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114dc3c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc3cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc3cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114dc3d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc3d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114dc3d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc3da jne 0x114dc3be */
  if (!C.zf) goto L_114dc3be;
  /* 114dc3dc jmp 0x114dc3e7 */
  goto L_114dc3e7;
L_114dc3de:;
  /* 114dc3de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc3e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc3e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114dc3e7:;
  /* 114dc3e7 jmp 0x114dc374 */
  goto L_114dc374;
L_114dc3e9:;
  /* 114dc3e9 mov esp, ebp */
  ESP = (EBP);
  /* 114dc3eb pop ebp */
  EBP = (pop32());
  /* 114dc3ec ret  */
  ESPCHK(0x114dc370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c3f0 @ 0x114dc3f0 (304 bytes, 85 insns) */
void f_114dc3f0(void) {
  FTRACE(0x114dc3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc3f1 mov ebp, esp */
  EBP = (ESP);
  /* 114dc3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc3f4 cmp dword ptr [0x114ff40c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff40c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc3fb je 0x114dc4bc */
  if (C.zf) goto L_114dc4bc;
  /* 114dc401 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 114dc403 push 0x114fa4dc */
  push32((uint32_t)(0x114fa4dcu));
  /* 114dc408 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc40a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 114dc40c push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc40e call 0x114cbd10 */
  push32(0x114dc413u); f_114cbd10();
  /* 114dc413 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc416 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dc419 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc41d jne 0x114dc429 */
  if (!C.zf) goto L_114dc429;
  /* 114dc41f mov eax, 1 */
  EAX = (0x1u);
  /* 114dc424 jmp 0x114dc51c */
  goto L_114dc51c;
L_114dc429:;
  /* 114dc429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc42c push eax */
  push32((uint32_t)(EAX));
  /* 114dc42d call 0x114dc520 */
  push32(0x114dc432u); f_114dc520();
  /* 114dc432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc437 je 0x114dc45d */
  if (C.zf) goto L_114dc45d;
  /* 114dc439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc43c push ecx */
  push32((uint32_t)(ECX));
  /* 114dc43d call 0x114dc7b0 */
  push32(0x114dc442u); f_114dc7b0();
  /* 114dc442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc445 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc447 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc44a push edx */
  push32((uint32_t)(EDX));
  /* 114dc44b call 0x114cc390 */
  push32(0x114dc450u); f_114cc390();
  /* 114dc450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc453 mov eax, 1 */
  EAX = (0x1u);
  /* 114dc458 jmp 0x114dc51c */
  goto L_114dc51c;
L_114dc45d:;
  /* 114dc45d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc460 mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc466 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114dc468 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114dc46a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc46d mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc473 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114dc476 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114dc479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc47c mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc482 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114dc485 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114dc488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc48b mov dword ptr [0x114fe420], eax */
  w32((uint32_t)(0x114fe420), (EAX));
  /* 114dc490 mov ecx, dword ptr [0x114ff434] */
  ECX = (r32((uint32_t)(0x114ff434)));
  /* 114dc496 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc497 call 0x114dc7b0 */
  push32(0x114dc49cu); f_114dc7b0();
  /* 114dc49c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc49f push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc4a1 mov edx, dword ptr [0x114ff434] */
  EDX = (r32((uint32_t)(0x114ff434)));
  /* 114dc4a7 push edx */
  push32((uint32_t)(EDX));
  /* 114dc4a8 call 0x114cc390 */
  push32(0x114dc4adu); f_114cc390();
  /* 114dc4ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc4b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc4b3 mov dword ptr [0x114ff434], eax */
  w32((uint32_t)(0x114ff434), (EAX));
  /* 114dc4b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc4ba jmp 0x114dc51c */
  goto L_114dc51c;
L_114dc4bc:;
  /* 114dc4bc mov ecx, dword ptr [0x114fe420] */
  ECX = (r32((uint32_t)(0x114fe420)));
  /* 114dc4c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114dc4c4 mov dword ptr [0x114fe3f0], edx */
  w32((uint32_t)(0x114fe3f0), (EDX));
  /* 114dc4ca mov eax, dword ptr [0x114fe420] */
  EAX = (r32((uint32_t)(0x114fe420)));
  /* 114dc4cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114dc4d2 mov dword ptr [0x114fe3f4], ecx */
  w32((uint32_t)(0x114fe3f4), (ECX));
  /* 114dc4d8 mov edx, dword ptr [0x114fe420] */
  EDX = (r32((uint32_t)(0x114fe420)));
  /* 114dc4de mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114dc4e1 mov dword ptr [0x114fe3f8], eax */
  w32((uint32_t)(0x114fe3f8), (EAX));
  /* 114dc4e6 mov dword ptr [0x114fe420], 0x114fe3f0 */
  w32((uint32_t)(0x114fe420), (0x114fe3f0u));
  /* 114dc4f0 mov ecx, dword ptr [0x114ff434] */
  ECX = (r32((uint32_t)(0x114ff434)));
  /* 114dc4f6 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc4f7 call 0x114dc7b0 */
  push32(0x114dc4fcu); f_114dc7b0();
  /* 114dc4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc4ff push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc501 mov edx, dword ptr [0x114ff434] */
  EDX = (r32((uint32_t)(0x114ff434)));
  /* 114dc507 push edx */
  push32((uint32_t)(EDX));
  /* 114dc508 call 0x114cc390 */
  push32(0x114dc50du); f_114cc390();
  /* 114dc50d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc510 mov dword ptr [0x114ff434], 0 */
  w32((uint32_t)(0x114ff434), (0x0u));
  /* 114dc51a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dc51c:;
  /* 114dc51c mov esp, ebp */
  ESP = (EBP);
  /* 114dc51e pop ebp */
  EBP = (pop32());
  /* 114dc51f ret  */
  ESPCHK(0x114dc3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c520 @ 0x114dc520 (525 bytes, 200 insns) */
void f_114dc520(void) {
  FTRACE(0x114dc520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc520 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc521 mov ebp, esp */
  EBP = (ESP);
  /* 114dc523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dc526 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114dc52d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc52f mov ax, word ptr [0x114ff454] */
  AX = (r16((uint32_t)(0x114ff454)));
  /* 114dc535 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dc538 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc53c jne 0x114dc546 */
  if (!C.zf) goto L_114dc546;
  /* 114dc53e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dc541 jmp 0x114dc729 */
  goto L_114dc729;
L_114dc546:;
  /* 114dc546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc549 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc54c push ecx */
  push32((uint32_t)(ECX));
  /* 114dc54d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 114dc54f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc552 push edx */
  push32((uint32_t)(EDX));
  /* 114dc553 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc555 call 0x114df750 */
  push32(0x114dc55au); f_114df750();
  /* 114dc55a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc55d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc560 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc562 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc568 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc56b push edx */
  push32((uint32_t)(EDX));
  /* 114dc56c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 114dc56e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc571 push eax */
  push32((uint32_t)(EAX));
  /* 114dc572 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc574 call 0x114df750 */
  push32(0x114dc579u); f_114df750();
  /* 114dc579 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc57c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc57f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc581 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc587 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc58a push edx */
  push32((uint32_t)(EDX));
  /* 114dc58b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 114dc58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc590 push eax */
  push32((uint32_t)(EAX));
  /* 114dc591 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc593 call 0x114df750 */
  push32(0x114dc598u); f_114df750();
  /* 114dc598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc59b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc59e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc5a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc5a6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5a9 push edx */
  push32((uint32_t)(EDX));
  /* 114dc5aa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 114dc5ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc5af push eax */
  push32((uint32_t)(EAX));
  /* 114dc5b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc5b2 call 0x114df750 */
  push32(0x114dc5b7u); f_114df750();
  /* 114dc5b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc5bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc5bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc5c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc5c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5c8 push edx */
  push32((uint32_t)(EDX));
  /* 114dc5c9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 114dc5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc5ce push eax */
  push32((uint32_t)(EAX));
  /* 114dc5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc5d1 call 0x114df750 */
  push32(0x114dc5d6u); f_114df750();
  /* 114dc5d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc5dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc5de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc5e4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114dc5e7 push eax */
  push32((uint32_t)(EAX));
  /* 114dc5e8 call 0x114dc730 */
  push32(0x114dc5edu); f_114dc730();
  /* 114dc5ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc5f3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc5f6 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc5f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 114dc5f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc5fc push edx */
  push32((uint32_t)(EDX));
  /* 114dc5fd push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc5ff call 0x114df750 */
  push32(0x114dc604u); f_114df750();
  /* 114dc604 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc60a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc60c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc612 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc615 push edx */
  push32((uint32_t)(EDX));
  /* 114dc616 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 114dc618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc61b push eax */
  push32((uint32_t)(EAX));
  /* 114dc61c push 1 */
  push32((uint32_t)(0x1u));
  /* 114dc61e call 0x114df750 */
  push32(0x114dc623u); f_114df750();
  /* 114dc623 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc626 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc629 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc62b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc631 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc634 push edx */
  push32((uint32_t)(EDX));
  /* 114dc635 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 114dc637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc63a push eax */
  push32((uint32_t)(EAX));
  /* 114dc63b push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc63d call 0x114df750 */
  push32(0x114dc642u); f_114df750();
  /* 114dc642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc645 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc648 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc64a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc64d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc650 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc653 push edx */
  push32((uint32_t)(EDX));
  /* 114dc654 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114dc656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc659 push eax */
  push32((uint32_t)(EAX));
  /* 114dc65a push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc65c call 0x114df750 */
  push32(0x114dc661u); f_114df750();
  /* 114dc661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc664 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc669 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc66f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc672 push edx */
  push32((uint32_t)(EDX));
  /* 114dc673 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 114dc675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc678 push eax */
  push32((uint32_t)(EAX));
  /* 114dc679 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc67b call 0x114df750 */
  push32(0x114dc680u); f_114df750();
  /* 114dc680 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc683 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc686 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc688 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc68e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc691 push edx */
  push32((uint32_t)(EDX));
  /* 114dc692 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 114dc694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc697 push eax */
  push32((uint32_t)(EAX));
  /* 114dc698 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc69a call 0x114df750 */
  push32(0x114dc69fu); f_114df750();
  /* 114dc69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc6a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc6a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc6aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc6ad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6b0 push edx */
  push32((uint32_t)(EDX));
  /* 114dc6b1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 114dc6b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc6b6 push eax */
  push32((uint32_t)(EAX));
  /* 114dc6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc6b9 call 0x114df750 */
  push32(0x114dc6beu); f_114df750();
  /* 114dc6be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc6c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc6c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc6c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc6cc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6cf push edx */
  push32((uint32_t)(EDX));
  /* 114dc6d0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 114dc6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc6d5 push eax */
  push32((uint32_t)(EAX));
  /* 114dc6d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc6d8 call 0x114df750 */
  push32(0x114dc6ddu); f_114df750();
  /* 114dc6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc6e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc6eb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6ee push edx */
  push32((uint32_t)(EDX));
  /* 114dc6ef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 114dc6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc6f4 push eax */
  push32((uint32_t)(EAX));
  /* 114dc6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc6f7 call 0x114df750 */
  push32(0x114dc6fcu); f_114df750();
  /* 114dc6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc6ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc704 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc70a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc70d push edx */
  push32((uint32_t)(EDX));
  /* 114dc70e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 114dc710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc713 push eax */
  push32((uint32_t)(EAX));
  /* 114dc714 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc716 call 0x114df750 */
  push32(0x114dc71bu); f_114df750();
  /* 114dc71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc71e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dc721 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dc726 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114dc729:;
  /* 114dc729 mov esp, ebp */
  ESP = (EBP);
  /* 114dc72b pop ebp */
  EBP = (pop32());
  /* 114dc72c ret  */
  ESPCHK(0x114dc520u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x114dc730 (125 bytes, 49 insns) */
void f_114dc730(void) {
  FTRACE(0x114dc730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc730 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc731 mov ebp, esp */
  EBP = (ESP);
  /* 114dc733 push ecx */
  push32((uint32_t)(ECX));
L_114dc734:;
  /* 114dc734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc737 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dc73a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dc73c je 0x114dc7a9 */
  if (C.zf) goto L_114dc7a9;
  /* 114dc73e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc741 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114dc744 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc747 jl 0x114dc76d */
  if ((C.sf!=C.of)) goto L_114dc76d;
  /* 114dc749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc74c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114dc74f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc752 jg 0x114dc76d */
  if ((!C.zf&&C.sf==C.of)) goto L_114dc76d;
  /* 114dc754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc757 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dc75a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dc75d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc760 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114dc762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc765 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc768 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114dc76b jmp 0x114dc7a7 */
  goto L_114dc7a7;
L_114dc76d:;
  /* 114dc76d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc770 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114dc773 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc776 jne 0x114dc79e */
  if (!C.zf) goto L_114dc79e;
  /* 114dc778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc77b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114dc77e:;
  /* 114dc77e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc784 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114dc787 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114dc789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc78c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc78f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114dc792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dc795 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114dc798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc79a jne 0x114dc77e */
  if (!C.zf) goto L_114dc77e;
  /* 114dc79c jmp 0x114dc7a7 */
  goto L_114dc7a7;
L_114dc79e:;
  /* 114dc79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc7a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc7a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_114dc7a7:;
  /* 114dc7a7 jmp 0x114dc734 */
  goto L_114dc734;
L_114dc7a9:;
  /* 114dc7a9 mov esp, ebp */
  ESP = (EBP);
  /* 114dc7ab pop ebp */
  EBP = (pop32());
  /* 114dc7ac ret  */
  ESPCHK(0x114dc730u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c7b0 @ 0x114dc7b0 (147 bytes, 52 insns) */
void f_114dc7b0(void) {
  FTRACE(0x114dc7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc7b1 mov ebp, esp */
  EBP = (ESP);
  /* 114dc7b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc7b7 jne 0x114dc7be */
  if (!C.zf) goto L_114dc7be;
  /* 114dc7b9 jmp 0x114dc841 */
  goto L_114dc841;
L_114dc7be:;
  /* 114dc7be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc7c1 cmp dword ptr [eax + 0xc], 0x114ff490 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x114ff490u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc7c8 je 0x114dc841 */
  if (C.zf) goto L_114dc841;
  /* 114dc7ca push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc7cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc7cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114dc7d2 push edx */
  push32((uint32_t)(EDX));
  /* 114dc7d3 call 0x114cc390 */
  push32(0x114dc7d8u); f_114cc390();
  /* 114dc7d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc7db push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc7dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc7e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114dc7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc7e4 call 0x114cc390 */
  push32(0x114dc7e9u); f_114cc390();
  /* 114dc7e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc7ec push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc7ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc7f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114dc7f4 push eax */
  push32((uint32_t)(EAX));
  /* 114dc7f5 call 0x114cc390 */
  push32(0x114dc7fau); f_114cc390();
  /* 114dc7fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc7ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc802 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114dc805 push edx */
  push32((uint32_t)(EDX));
  /* 114dc806 call 0x114cc390 */
  push32(0x114dc80bu); f_114cc390();
  /* 114dc80b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc80e push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc813 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114dc816 push ecx */
  push32((uint32_t)(ECX));
  /* 114dc817 call 0x114cc390 */
  push32(0x114dc81cu); f_114cc390();
  /* 114dc81c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc81f push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc824 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 114dc827 push eax */
  push32((uint32_t)(EAX));
  /* 114dc828 call 0x114cc390 */
  push32(0x114dc82du); f_114cc390();
  /* 114dc82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc830 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dc835 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 114dc838 push edx */
  push32((uint32_t)(EDX));
  /* 114dc839 call 0x114cc390 */
  push32(0x114dc83eu); f_114cc390();
  /* 114dc83e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dc841:;
  /* 114dc841 pop ebp */
  EBP = (pop32());
  /* 114dc842 ret  */
  ESPCHK(0x114dc7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c850 @ 0x114dc850 (928 bytes, 284 insns) */
void f_114dc850(void) {
  FTRACE(0x114dc850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dc850 push ebp */
  push32((uint32_t)(EBP));
  /* 114dc851 mov ebp, esp */
  EBP = (ESP);
  /* 114dc853 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dc856 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114dc85d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114dc864 cmp dword ptr [0x114ff408], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc86b je 0x114dcba1 */
  if (C.zf) goto L_114dcba1;
  /* 114dc871 cmp dword ptr [0x114ff418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc878 jne 0x114dc8a0 */
  if (!C.zf) goto L_114dc8a0;
  /* 114dc87a push 0x114ff418 */
  push32((uint32_t)(0x114ff418u));
  /* 114dc87f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 114dc884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc886 mov ax, word ptr [0x114ff44c] */
  AX = (r16((uint32_t)(0x114ff44c)));
  /* 114dc88c push eax */
  push32((uint32_t)(EAX));
  /* 114dc88d push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc88f call 0x114df750 */
  push32(0x114dc894u); f_114df750();
  /* 114dc894 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc899 je 0x114dc8a0 */
  if (C.zf) goto L_114dc8a0;
  /* 114dc89b jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dc8a0:;
  /* 114dc8a0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 114dc8a2 push 0x114fa4e8 */
  push32((uint32_t)(0x114fa4e8u));
  /* 114dc8a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc8a9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 114dc8ae call 0x114cb900 */
  push32(0x114dc8b3u); f_114cb900();
  /* 114dc8b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc8b6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 114dc8b9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 114dc8bb push 0x114fa4e8 */
  push32((uint32_t)(0x114fa4e8u));
  /* 114dc8c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc8c2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 114dc8c7 call 0x114cb900 */
  push32(0x114dc8ccu); f_114cb900();
  /* 114dc8cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc8cf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114dc8d2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 114dc8d4 push 0x114fa4e8 */
  push32((uint32_t)(0x114fa4e8u));
  /* 114dc8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc8db push 0x101 */
  push32((uint32_t)(0x101u));
  /* 114dc8e0 call 0x114cb900 */
  push32(0x114dc8e5u); f_114cb900();
  /* 114dc8e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc8e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 114dc8eb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 114dc8ed push 0x114fa4e8 */
  push32((uint32_t)(0x114fa4e8u));
  /* 114dc8f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dc8f4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 114dc8f9 call 0x114cb900 */
  push32(0x114dc8feu); f_114cb900();
  /* 114dc8fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc901 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114dc904 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc908 je 0x114dc91c */
  if (C.zf) goto L_114dc91c;
  /* 114dc90a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc90e je 0x114dc91c */
  if (C.zf) goto L_114dc91c;
  /* 114dc910 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc914 je 0x114dc91c */
  if (C.zf) goto L_114dc91c;
  /* 114dc916 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc91a jne 0x114dc921 */
  if (!C.zf) goto L_114dc921;
L_114dc91c:;
  /* 114dc91c jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dc921:;
  /* 114dc921 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dc924 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114dc927 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114dc92e jmp 0x114dc939 */
  goto L_114dc939;
L_114dc930:;
  /* 114dc930 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dc933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc936 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_114dc939:;
  /* 114dc939 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc940 jge 0x114dc955 */
  if ((C.sf==C.of)) goto L_114dc955;
  /* 114dc942 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc945 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 114dc948 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114dc94a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc94d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc950 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114dc953 jmp 0x114dc930 */
  goto L_114dc930;
L_114dc955:;
  /* 114dc955 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114dc958 push eax */
  push32((uint32_t)(EAX));
  /* 114dc959 mov ecx, dword ptr [0x114ff418] */
  ECX = (r32((uint32_t)(0x114ff418)));
  /* 114dc95f push ecx */
  push32((uint32_t)(ECX));
  /* 114dc960 call dword ptr [0x11501374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501374))), 0x114dc966u);
  /* 114dc966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc968 jne 0x114dc96f */
  if (!C.zf) goto L_114dc96f;
  /* 114dc96a jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dc96f:;
  /* 114dc96f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc973 jbe 0x114dc97a */
  if ((C.cf||C.zf)) goto L_114dc97a;
  /* 114dc975 jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dc97a:;
  /* 114dc97a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114dc97d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114dc983 mov dword ptr [0x114fd040], edx */
  w32((uint32_t)(0x114fd040), (EDX));
  /* 114dc989 cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc990 jle 0x114dc9e9 */
  if ((C.zf||C.sf!=C.of)) goto L_114dc9e9;
  /* 114dc992 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 114dc995 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114dc998 jmp 0x114dc9a3 */
  goto L_114dc9a3;
L_114dc99a:;
  /* 114dc99a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc99d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc9a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_114dc9a3:;
  /* 114dc9a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc9a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dc9a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dc9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dc9ac je 0x114dc9e9 */
  if (C.zf) goto L_114dc9e9;
  /* 114dc9ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc9b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114dc9b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 114dc9b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dc9b8 je 0x114dc9e9 */
  if (C.zf) goto L_114dc9e9;
  /* 114dc9ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc9bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc9bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114dc9c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114dc9c4 jmp 0x114dc9cf */
  goto L_114dc9cf;
L_114dc9c6:;
  /* 114dc9c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dc9c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc9cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_114dc9cf:;
  /* 114dc9cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dc9d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dc9d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114dc9d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dc9da jg 0x114dc9e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dc9e7;
  /* 114dc9dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dc9df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc9e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 114dc9e5 jmp 0x114dc9c6 */
  goto L_114dc9c6;
L_114dc9e7:;
  /* 114dc9e7 jmp 0x114dc99a */
  goto L_114dc99a;
L_114dc9e9:;
  /* 114dc9e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc9eb push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc9ed push 0 */
  push32((uint32_t)(0x0u));
  /* 114dc9ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dc9f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dc9f5 push eax */
  push32((uint32_t)(EAX));
  /* 114dc9f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114dc9fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dc9fe push ecx */
  push32((uint32_t)(ECX));
  /* 114dc9ff push 1 */
  push32((uint32_t)(0x1u));
  /* 114dca01 call 0x114d84d0 */
  push32(0x114dca06u); f_114d84d0();
  /* 114dca06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dca0b jne 0x114dca12 */
  if (!C.zf) goto L_114dca12;
  /* 114dca0d jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dca12:;
  /* 114dca12 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dca15 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 114dca1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dca1d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114dca20 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 114dca27 jmp 0x114dca32 */
  goto L_114dca32;
L_114dca29:;
  /* 114dca29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dca2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca2f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114dca32:;
  /* 114dca32 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dca39 jge 0x114dca50 */
  if ((C.sf==C.of)) goto L_114dca50;
  /* 114dca3b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dca3e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 114dca42 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 114dca45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114dca48 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca4b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114dca4e jmp 0x114dca29 */
  goto L_114dca29;
L_114dca50:;
  /* 114dca50 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dca52 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dca54 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114dca57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca5a push edx */
  push32((uint32_t)(EDX));
  /* 114dca5b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114dca60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dca63 push eax */
  push32((uint32_t)(EAX));
  /* 114dca64 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dca66 call 0x114df9f0 */
  push32(0x114dca6bu); f_114df9f0();
  /* 114dca6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dca70 jne 0x114dca77 */
  if (!C.zf) goto L_114dca77;
  /* 114dca72 jmp 0x114dcb62 */
  goto L_114dcb62;
L_114dca77:;
  /* 114dca77 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114dca7a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 114dca7f cmp dword ptr [0x114fd040], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114fd040))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dca86 jle 0x114dcae3 */
  if ((C.zf||C.sf!=C.of)) goto L_114dcae3;
  /* 114dca88 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 114dca8b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114dca8e jmp 0x114dca99 */
  goto L_114dca99;
L_114dca90:;
  /* 114dca90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dca93 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dca96 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_114dca99:;
  /* 114dca99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dca9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114dca9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114dcaa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dcaa2 je 0x114dcae3 */
  if (C.zf) goto L_114dcae3;
  /* 114dcaa4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dcaa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dcaa9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 114dcaac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dcaae je 0x114dcae3 */
  if (C.zf) goto L_114dcae3;
  /* 114dcab0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dcab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcab5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dcab7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114dcaba jmp 0x114dcac5 */
  goto L_114dcac5;
L_114dcabc:;
  /* 114dcabc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dcabf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcac2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114dcac5:;
  /* 114dcac5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114dcac8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcaca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114dcacd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcad0 jg 0x114dcae1 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dcae1;
  /* 114dcad2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114dcad5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dcad8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 114dcadf jmp 0x114dcabc */
  goto L_114dcabc;
L_114dcae1:;
  /* 114dcae1 jmp 0x114dca90 */
  goto L_114dca90;
L_114dcae3:;
  /* 114dcae3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dcae6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcae9 mov dword ptr [0x114fd04c], eax */
  w32((uint32_t)(0x114fd04c), (EAX));
  /* 114dcaee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114dcaf1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcaf4 mov dword ptr [0x114fd050], ecx */
  w32((uint32_t)(0x114fd050), (ECX));
  /* 114dcafa cmp dword ptr [0x114ff438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcb01 je 0x114dcb14 */
  if (C.zf) goto L_114dcb14;
  /* 114dcb03 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb05 mov edx, dword ptr [0x114ff438] */
  EDX = (r32((uint32_t)(0x114ff438)));
  /* 114dcb0b push edx */
  push32((uint32_t)(EDX));
  /* 114dcb0c call 0x114cc390 */
  push32(0x114dcb11u); f_114cc390();
  /* 114dcb11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dcb14:;
  /* 114dcb14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dcb17 mov dword ptr [0x114ff438], eax */
  w32((uint32_t)(0x114ff438), (EAX));
  /* 114dcb1c cmp dword ptr [0x114ff43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcb23 je 0x114dcb36 */
  if (C.zf) goto L_114dcb36;
  /* 114dcb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb27 mov ecx, dword ptr [0x114ff43c] */
  ECX = (r32((uint32_t)(0x114ff43c)));
  /* 114dcb2d push ecx */
  push32((uint32_t)(ECX));
  /* 114dcb2e call 0x114cc390 */
  push32(0x114dcb33u); f_114cc390();
  /* 114dcb33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dcb36:;
  /* 114dcb36 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114dcb39 mov dword ptr [0x114ff43c], edx */
  w32((uint32_t)(0x114ff43c), (EDX));
  /* 114dcb3f push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb41 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dcb44 push eax */
  push32((uint32_t)(EAX));
  /* 114dcb45 call 0x114cc390 */
  push32(0x114dcb4au); f_114cc390();
  /* 114dcb4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dcb52 push ecx */
  push32((uint32_t)(ECX));
  /* 114dcb53 call 0x114cc390 */
  push32(0x114dcb58u); f_114cc390();
  /* 114dcb58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcb5d jmp 0x114dcbec */
  goto L_114dcbec;
L_114dcb62:;
  /* 114dcb62 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dcb67 push edx */
  push32((uint32_t)(EDX));
  /* 114dcb68 call 0x114cc390 */
  push32(0x114dcb6du); f_114cc390();
  /* 114dcb6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb70 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb72 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114dcb75 push eax */
  push32((uint32_t)(EAX));
  /* 114dcb76 call 0x114cc390 */
  push32(0x114dcb7bu); f_114cc390();
  /* 114dcb7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb7e push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb80 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dcb83 push ecx */
  push32((uint32_t)(ECX));
  /* 114dcb84 call 0x114cc390 */
  push32(0x114dcb89u); f_114cc390();
  /* 114dcb89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb8c push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcb8e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114dcb91 push edx */
  push32((uint32_t)(EDX));
  /* 114dcb92 call 0x114cc390 */
  push32(0x114dcb97u); f_114cc390();
  /* 114dcb97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcb9a mov eax, 1 */
  EAX = (0x1u);
  /* 114dcb9f jmp 0x114dcbec */
  goto L_114dcbec;
L_114dcba1:;
  /* 114dcba1 mov dword ptr [0x114fd04c], 0x114fd056 */
  w32((uint32_t)(0x114fd04c), (0x114fd056u));
  /* 114dcbab mov dword ptr [0x114fd050], 0x114fd056 */
  w32((uint32_t)(0x114fd050), (0x114fd056u));
  /* 114dcbb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcbb7 mov eax, dword ptr [0x114ff438] */
  EAX = (r32((uint32_t)(0x114ff438)));
  /* 114dcbbc push eax */
  push32((uint32_t)(EAX));
  /* 114dcbbd call 0x114cc390 */
  push32(0x114dcbc2u); f_114cc390();
  /* 114dcbc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcbc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dcbc7 mov ecx, dword ptr [0x114ff43c] */
  ECX = (r32((uint32_t)(0x114ff43c)));
  /* 114dcbcd push ecx */
  push32((uint32_t)(ECX));
  /* 114dcbce call 0x114cc390 */
  push32(0x114dcbd3u); f_114cc390();
  /* 114dcbd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcbd6 mov dword ptr [0x114ff438], 0 */
  w32((uint32_t)(0x114ff438), (0x0u));
  /* 114dcbe0 mov dword ptr [0x114ff43c], 0 */
  w32((uint32_t)(0x114ff43c), (0x0u));
  /* 114dcbea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dcbec:;
  /* 114dcbec mov esp, ebp */
  ESP = (EBP);
  /* 114dcbee pop ebp */
  EBP = (pop32());
  /* 114dcbef ret  */
  ESPCHK(0x114dc850u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cbf0 @ 0x114dcbf0 (7 bytes, 5 insns) */
void f_114dcbf0(void) {
  FTRACE(0x114dcbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcbf1 mov ebp, esp */
  EBP = (ESP);
  /* 114dcbf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcbf5 pop ebp */
  EBP = (pop32());
  /* 114dcbf6 ret  */
  ESPCHK(0x114dcbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc00 @ 0x114dcc00 (62 bytes, 35 insns) */
void f_114dcc00(void) {
  FTRACE(0x114dcc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcc00 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcc01 mov ebp, esp */
  EBP = (ESP);
  /* 114dcc03 push esi */
  push32((uint32_t)(ESI));
  /* 114dcc04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcc06 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc07 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc08 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc09 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc0a push eax */
  push32((uint32_t)(EAX));
  /* 114dcc0b push eax */
  push32((uint32_t)(EAX));
  /* 114dcc0c push eax */
  push32((uint32_t)(EAX));
  /* 114dcc0d push eax */
  push32((uint32_t)(EAX));
  /* 114dcc0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dcc11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114dcc14:;
  /* 114dcc14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dcc16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dcc18 je 0x114dcc21 */
  if (C.zf) goto L_114dcc21;
  /* 114dcc1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114dcc1b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x114dcc1b");
  /* 114dcc1f jmp 0x114dcc14 */
  goto L_114dcc14;
L_114dcc21:;
  /* 114dcc21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcc24 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114dcc27 nop  */
  /* nop */
L_114dcc28:;
  /* 114dcc28 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114dcc29 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114dcc2b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dcc2d je 0x114dcc36 */
  if (C.zf) goto L_114dcc36;
  /* 114dcc2f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dcc30 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x114dcc30");
  /* 114dcc34 jae 0x114dcc28 */
  if (!C.cf) goto L_114dcc28;
L_114dcc36:;
  /* 114dcc36 mov eax, ecx */
  EAX = (ECX);
  /* 114dcc38 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcc3b pop esi */
  ESI = (pop32());
  /* 114dcc3c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114dcc3d ret  */
  ESPCHK(0x114dcc00u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x114dcc40 (56 bytes, 31 insns) */
void f_114dcc40(void) {
  FTRACE(0x114dcc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcc40 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcc41 mov ebp, esp */
  EBP = (ESP);
  /* 114dcc43 push edi */
  push32((uint32_t)(EDI));
  /* 114dcc44 push esi */
  push32((uint32_t)(ESI));
  /* 114dcc45 push ebx */
  push32((uint32_t)(EBX));
  /* 114dcc46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dcc49 jecxz 0x114dcc71 */
  x86_unimpl("jecxz @ 0x114dcc49");
  /* 114dcc4b mov ebx, ecx */
  EBX = (ECX);
  /* 114dcc4d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcc50 mov esi, edi */
  ESI = (EDI);
  /* 114dcc52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcc54 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114dcc56 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dcc58 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcc5a mov edi, esi */
  EDI = (ESI);
  /* 114dcc5c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114dcc5f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 114dcc61 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 114dcc64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dcc66 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114dcc69 ja 0x114dcc6f */
  if ((!C.cf&&!C.zf)) goto L_114dcc6f;
  /* 114dcc6b je 0x114dcc71 */
  if (C.zf) goto L_114dcc71;
  /* 114dcc6d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114dcc6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_114dcc6f:;
  /* 114dcc6f not ecx */
  ECX = (~(ECX));
L_114dcc71:;
  /* 114dcc71 mov eax, ecx */
  EAX = (ECX);
  /* 114dcc73 pop ebx */
  EBX = (pop32());
  /* 114dcc74 pop esi */
  ESI = (pop32());
  /* 114dcc75 pop edi */
  EDI = (pop32());
  /* 114dcc76 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114dcc77 ret  */
  ESPCHK(0x114dcc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cc80 @ 0x114dcc80 (58 bytes, 32 insns) */
void f_114dcc80(void) {
  FTRACE(0x114dcc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcc80 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcc81 mov ebp, esp */
  EBP = (ESP);
  /* 114dcc83 push esi */
  push32((uint32_t)(ESI));
  /* 114dcc84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcc86 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc87 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc88 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc89 push eax */
  push32((uint32_t)(EAX));
  /* 114dcc8a push eax */
  push32((uint32_t)(EAX));
  /* 114dcc8b push eax */
  push32((uint32_t)(EAX));
  /* 114dcc8c push eax */
  push32((uint32_t)(EAX));
  /* 114dcc8d push eax */
  push32((uint32_t)(EAX));
  /* 114dcc8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dcc91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114dcc94:;
  /* 114dcc94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dcc96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dcc98 je 0x114dcca1 */
  if (C.zf) goto L_114dcca1;
  /* 114dcc9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114dcc9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x114dcc9b");
  /* 114dcc9f jmp 0x114dcc94 */
  goto L_114dcc94;
L_114dcca1:;
  /* 114dcca1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_114dcca4:;
  /* 114dcca4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114dcca6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 114dcca8 je 0x114dccb4 */
  if (C.zf) goto L_114dccb4;
  /* 114dccaa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114dccab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x114dccab");
  /* 114dccaf jae 0x114dcca4 */
  if (!C.cf) goto L_114dcca4;
  /* 114dccb1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_114dccb4:;
  /* 114dccb4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dccb7 pop esi */
  ESI = (pop32());
  /* 114dccb8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114dccb9 ret  */
  ESPCHK(0x114dcc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ccc0 @ 0x114dccc0 (512 bytes, 147 insns) */
void f_114dccc0(void) {
  FTRACE(0x114dccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dccc1 mov ebp, esp */
  EBP = (ESP);
  /* 114dccc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dccc6 cmp dword ptr [0x114ff484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcccd jne 0x114dccf2 */
  if (!C.zf) goto L_114dccf2;
  /* 114dcccf call 0x114dd790 */
  push32(0x114dccd4u); f_114dd790();
  /* 114dccd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dccd6 je 0x114dcce2 */
  if (C.zf) goto L_114dcce2;
  /* 114dccd8 mov eax, dword ptr [0x11501340] */
  EAX = (r32((uint32_t)(0x11501340)));
  /* 114dccdd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dcce0 jmp 0x114dcce9 */
  goto L_114dcce9;
L_114dcce2:;
  /* 114dcce2 mov dword ptr [ebp - 8], 0x114dd7e0 */
  w32((uint32_t)(EBP + -0x8), (0x114dd7e0u));
L_114dcce9:;
  /* 114dcce9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dccec mov dword ptr [0x114ff484], ecx */
  w32((uint32_t)(0x114ff484), (ECX));
L_114dccf2:;
  /* 114dccf2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dccf6 jne 0x114dcd02 */
  if (!C.zf) goto L_114dcd02;
  /* 114dccf8 call 0x114dd5e0 */
  push32(0x114dccfdu); f_114dd5e0();
  /* 114dccfd jmp 0x114dcdce */
  goto L_114dcdce;
L_114dcd02:;
  /* 114dcd02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcd05 mov dword ptr [0x114ff474], edx */
  w32((uint32_t)(0x114ff474), (EDX));
  /* 114dcd0b cmp dword ptr [0x114ff474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcd12 je 0x114dcd34 */
  if (C.zf) goto L_114dcd34;
  /* 114dcd14 mov eax, dword ptr [0x114ff474] */
  EAX = (r32((uint32_t)(0x114ff474)));
  /* 114dcd19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dcd1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dcd1e je 0x114dcd34 */
  if (C.zf) goto L_114dcd34;
  /* 114dcd20 push 0x114ff474 */
  push32((uint32_t)(0x114ff474u));
  /* 114dcd25 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114dcd27 push 0x114fe120 */
  push32((uint32_t)(0x114fe120u));
  /* 114dcd2c call 0x114dcec0 */
  push32(0x114dcd31u); f_114dcec0();
  /* 114dcd31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dcd34:;
  /* 114dcd34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcd37 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcd3a mov dword ptr [0x114ff478], edx */
  w32((uint32_t)(0x114ff478), (EDX));
  /* 114dcd40 cmp dword ptr [0x114ff478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcd47 je 0x114dcd69 */
  if (C.zf) goto L_114dcd69;
  /* 114dcd49 mov eax, dword ptr [0x114ff478] */
  EAX = (r32((uint32_t)(0x114ff478)));
  /* 114dcd4e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dcd51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dcd53 je 0x114dcd69 */
  if (C.zf) goto L_114dcd69;
  /* 114dcd55 push 0x114ff478 */
  push32((uint32_t)(0x114ff478u));
  /* 114dcd5a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 114dcd5c push 0x114fe068 */
  push32((uint32_t)(0x114fe068u));
  /* 114dcd61 call 0x114dcec0 */
  push32(0x114dcd66u); f_114dcec0();
  /* 114dcd66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dcd69:;
  /* 114dcd69 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dcd73 cmp dword ptr [0x114ff474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcd7a je 0x114dcdad */
  if (C.zf) goto L_114dcdad;
  /* 114dcd7c mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dcd82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114dcd85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dcd87 je 0x114dcdad */
  if (C.zf) goto L_114dcdad;
  /* 114dcd89 cmp dword ptr [0x114ff478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcd90 je 0x114dcda6 */
  if (C.zf) goto L_114dcda6;
  /* 114dcd92 mov ecx, dword ptr [0x114ff478] */
  ECX = (r32((uint32_t)(0x114ff478)));
  /* 114dcd98 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114dcd9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dcd9d je 0x114dcda6 */
  if (C.zf) goto L_114dcda6;
  /* 114dcd9f call 0x114dcf50 */
  push32(0x114dcda4u); f_114dcf50();
  /* 114dcda4 jmp 0x114dcdab */
  goto L_114dcdab;
L_114dcda6:;
  /* 114dcda6 call 0x114dd340 */
  push32(0x114dcdabu); f_114dd340();
L_114dcdab:;
  /* 114dcdab jmp 0x114dcdce */
  goto L_114dcdce;
L_114dcdad:;
  /* 114dcdad cmp dword ptr [0x114ff478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcdb4 je 0x114dcdc9 */
  if (C.zf) goto L_114dcdc9;
  /* 114dcdb6 mov eax, dword ptr [0x114ff478] */
  EAX = (r32((uint32_t)(0x114ff478)));
  /* 114dcdbb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dcdbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dcdc0 je 0x114dcdc9 */
  if (C.zf) goto L_114dcdc9;
  /* 114dcdc2 call 0x114dd4e0 */
  push32(0x114dcdc7u); f_114dd4e0();
  /* 114dcdc7 jmp 0x114dcdce */
  goto L_114dcdce;
L_114dcdc9:;
  /* 114dcdc9 call 0x114dd5e0 */
  push32(0x114dcdceu); f_114dd5e0();
L_114dcdce:;
  /* 114dcdce cmp dword ptr [0x114ff47c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff47c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcdd5 jne 0x114dcdde */
  if (!C.zf) goto L_114dcdde;
  /* 114dcdd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dcdd9 jmp 0x114dcebc */
  goto L_114dcebc;
L_114dcdde:;
  /* 114dcdde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcde1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcde7 push edx */
  push32((uint32_t)(EDX));
  /* 114dcde8 call 0x114dd610 */
  push32(0x114dcdedu); f_114dd610();
  /* 114dcded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcdf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dcdf3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcdf7 je 0x114dce0c */
  if (C.zf) goto L_114dce0c;
  /* 114dcdf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcdfc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dce01 push eax */
  push32((uint32_t)(EAX));
  /* 114dce02 call dword ptr [0x11501344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501344))), 0x114dce08u);
  /* 114dce08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dce0a jne 0x114dce13 */
  if (!C.zf) goto L_114dce13;
L_114dce0c:;
  /* 114dce0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dce0e jmp 0x114dcebc */
  goto L_114dcebc;
L_114dce13:;
  /* 114dce13 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dce15 mov ecx, dword ptr [0x114ff464] */
  ECX = (r32((uint32_t)(0x114ff464)));
  /* 114dce1b push ecx */
  push32((uint32_t)(ECX));
  /* 114dce1c call dword ptr [0x11501354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501354))), 0x114dce22u);
  /* 114dce22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dce24 jne 0x114dce2d */
  if (!C.zf) goto L_114dce2d;
  /* 114dce26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dce28 jmp 0x114dcebc */
  goto L_114dcebc;
L_114dce2d:;
  /* 114dce2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dce31 je 0x114dce58 */
  if (C.zf) goto L_114dce58;
  /* 114dce33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dce36 mov ax, word ptr [0x114ff464] */
  AX = (r16((uint32_t)(0x114ff464)));
  /* 114dce3c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 114dce3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dce42 mov dx, word ptr [0x114ff480] */
  DX = (r16((uint32_t)(0x114ff480)));
  /* 114dce49 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 114dce4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dce50 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 114dce54 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_114dce58:;
  /* 114dce58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dce5c je 0x114dceb7 */
  if (C.zf) goto L_114dceb7;
  /* 114dce5e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114dce60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dce63 push edx */
  push32((uint32_t)(EDX));
  /* 114dce64 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 114dce69 mov eax, dword ptr [0x114ff464] */
  EAX = (r32((uint32_t)(0x114ff464)));
  /* 114dce6e push eax */
  push32((uint32_t)(EAX));
  /* 114dce6f call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dce75u);
  /* 114dce75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dce77 jne 0x114dce7d */
  if (!C.zf) goto L_114dce7d;
  /* 114dce79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dce7b jmp 0x114dcebc */
  goto L_114dcebc;
L_114dce7d:;
  /* 114dce7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114dce7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dce82 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dce85 push ecx */
  push32((uint32_t)(ECX));
  /* 114dce86 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 114dce8b mov edx, dword ptr [0x114ff480] */
  EDX = (r32((uint32_t)(0x114ff480)));
  /* 114dce91 push edx */
  push32((uint32_t)(EDX));
  /* 114dce92 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dce98u);
  /* 114dce98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dce9a jne 0x114dcea0 */
  if (!C.zf) goto L_114dcea0;
  /* 114dce9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dce9e jmp 0x114dcebc */
  goto L_114dcebc;
L_114dcea0:;
  /* 114dcea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 114dcea2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dcea5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dceaa push eax */
  push32((uint32_t)(EAX));
  /* 114dceab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dceae push ecx */
  push32((uint32_t)(ECX));
  /* 114dceaf call 0x114d0cc0 */
  push32(0x114dceb4u); f_114d0cc0();
  /* 114dceb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dceb7:;
  /* 114dceb7 mov eax, 1 */
  EAX = (0x1u);
L_114dcebc:;
  /* 114dcebc mov esp, ebp */
  ESP = (EBP);
  /* 114dcebe pop ebp */
  EBP = (pop32());
  /* 114dcebf ret  */
  ESPCHK(0x114dccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cec0 @ 0x114dcec0 (130 bytes, 47 insns) */
void f_114dcec0(void) {
  FTRACE(0x114dcec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcec0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcec1 mov ebp, esp */
  EBP = (ESP);
  /* 114dcec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dcec6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114dcecd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_114dced4:;
  /* 114dced4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dced7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dceda jg 0x114dcf3e */
  if ((!C.zf&&C.sf==C.of)) goto L_114dcf3e;
  /* 114dcedc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcee0 je 0x114dcf3e */
  if (C.zf) goto L_114dcf3e;
  /* 114dcee2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dcee5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcee8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114dcee9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dceeb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114dceed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dcef0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcef6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 114dcef9 push eax */
  push32((uint32_t)(EAX));
  /* 114dcefa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dcefd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114dceff push edx */
  push32((uint32_t)(EDX));
  /* 114dcf00 call 0x114dfc60 */
  push32(0x114dcf05u); f_114dfc60();
  /* 114dcf05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcf08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dcf0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcf0f jne 0x114dcf22 */
  if (!C.zf) goto L_114dcf22;
  /* 114dcf11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcf14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dcf17 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 114dcf1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dcf1e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114dcf20 jmp 0x114dcf3c */
  goto L_114dcf3c;
L_114dcf22:;
  /* 114dcf22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcf26 jge 0x114dcf33 */
  if ((C.sf==C.of)) goto L_114dcf33;
  /* 114dcf28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcf2b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dcf2e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114dcf31 jmp 0x114dcf3c */
  goto L_114dcf3c;
L_114dcf33:;
  /* 114dcf33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcf36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcf39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114dcf3c:;
  /* 114dcf3c jmp 0x114dced4 */
  goto L_114dced4;
L_114dcf3e:;
  /* 114dcf3e mov esp, ebp */
  ESP = (EBP);
  /* 114dcf40 pop ebp */
  EBP = (pop32());
  /* 114dcf41 ret  */
  ESPCHK(0x114dcec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf50 @ 0x114dcf50 (186 bytes, 50 insns) */
void f_114dcf50(void) {
  FTRACE(0x114dcf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dcf50 push ebp */
  push32((uint32_t)(EBP));
  /* 114dcf51 mov ebp, esp */
  EBP = (ESP);
  /* 114dcf53 push ecx */
  push32((uint32_t)(ECX));
  /* 114dcf54 mov eax, dword ptr [0x114ff474] */
  EAX = (r32((uint32_t)(0x114ff474)));
  /* 114dcf59 push eax */
  push32((uint32_t)(EAX));
  /* 114dcf5a call 0x114d0fb0 */
  push32(0x114dcf5fu); f_114d0fb0();
  /* 114dcf5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcf62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dcf64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcf67 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114dcf6a mov dword ptr [0x114ff470], ecx */
  w32((uint32_t)(0x114ff470), (ECX));
  /* 114dcf70 mov edx, dword ptr [0x114ff478] */
  EDX = (r32((uint32_t)(0x114ff478)));
  /* 114dcf76 push edx */
  push32((uint32_t)(EDX));
  /* 114dcf77 call 0x114d0fb0 */
  push32(0x114dcf7cu); f_114d0fb0();
  /* 114dcf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcf7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dcf81 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcf84 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114dcf87 mov dword ptr [0x114ff468], ecx */
  w32((uint32_t)(0x114ff468), (ECX));
  /* 114dcf8d mov dword ptr [0x114ff464], 0 */
  w32((uint32_t)(0x114ff464), (0x0u));
  /* 114dcf97 cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dcf9e je 0x114dcfa9 */
  if (C.zf) goto L_114dcfa9;
  /* 114dcfa0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114dcfa7 jmp 0x114dcfbb */
  goto L_114dcfbb;
L_114dcfa9:;
  /* 114dcfa9 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dcfaf push edx */
  push32((uint32_t)(EDX));
  /* 114dcfb0 call 0x114dd9f0 */
  push32(0x114dcfb5u); f_114dd9f0();
  /* 114dcfb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dcfb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114dcfbb:;
  /* 114dcfbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dcfbe mov dword ptr [0x114ff46c], eax */
  w32((uint32_t)(0x114ff46c), (EAX));
  /* 114dcfc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dcfc5 push 0x114dd010 */
  push32((uint32_t)(0x114dd010u));
  /* 114dcfca call dword ptr [0x11501348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501348))), 0x114dcfd0u);
  /* 114dcfd0 mov ecx, dword ptr [0x114ff47c] */
  ECX = (r32((uint32_t)(0x114ff47c)));
  /* 114dcfd6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 114dcfdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dcfde je 0x114dcffc */
  if (C.zf) goto L_114dcffc;
  /* 114dcfe0 mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dcfe6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 114dcfec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dcfee je 0x114dcffc */
  if (C.zf) goto L_114dcffc;
  /* 114dcff0 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dcff5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 114dcff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dcffa jne 0x114dd006 */
  if (!C.zf) goto L_114dd006;
L_114dcffc:;
  /* 114dcffc mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
L_114dd006:;
  /* 114dd006 mov esp, ebp */
  ESP = (EBP);
  /* 114dd008 pop ebp */
  EBP = (pop32());
  /* 114dd009 ret  */
  ESPCHK(0x114dcf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d010 @ 0x114dd010 (804 bytes, 220 insns) */
void f_114dd010(void) {
  FTRACE(0x114dd010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd010 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd011 mov ebp, esp */
  EBP = (ESP);
  /* 114dd013 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd019 push eax */
  push32((uint32_t)(EAX));
  /* 114dd01a call 0x114dd970 */
  push32(0x114dd01fu); f_114dd970();
  /* 114dd01f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd022 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114dd025 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd027 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd02a push ecx */
  push32((uint32_t)(ECX));
  /* 114dd02b mov edx, dword ptr [0x114ff468] */
  EDX = (r32((uint32_t)(0x114ff468)));
  /* 114dd031 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd033 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd035 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd03b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd041 push edx */
  push32((uint32_t)(EDX));
  /* 114dd042 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd045 push eax */
  push32((uint32_t)(EAX));
  /* 114dd046 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd04cu);
  /* 114dd04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd04e jne 0x114dd064 */
  if (!C.zf) goto L_114dd064;
  /* 114dd050 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dd05a mov eax, 1 */
  EAX = (0x1u);
  /* 114dd05f jmp 0x114dd32e */
  goto L_114dd32e;
L_114dd064:;
  /* 114dd064 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd067 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd068 mov edx, dword ptr [0x114ff478] */
  EDX = (r32((uint32_t)(0x114ff478)));
  /* 114dd06e push edx */
  push32((uint32_t)(EDX));
  /* 114dd06f call 0x114dfc60 */
  push32(0x114dd074u); f_114dfc60();
  /* 114dd074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd079 jne 0x114dd19f */
  if (!C.zf) goto L_114dd19f;
  /* 114dd07f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd081 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 114dd084 push eax */
  push32((uint32_t)(EAX));
  /* 114dd085 mov ecx, dword ptr [0x114ff470] */
  ECX = (r32((uint32_t)(0x114ff470)));
  /* 114dd08b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd08d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd08f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 114dd095 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd09b push ecx */
  push32((uint32_t)(ECX));
  /* 114dd09c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd09f push edx */
  push32((uint32_t)(EDX));
  /* 114dd0a0 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd0a6u);
  /* 114dd0a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd0a8 jne 0x114dd0be */
  if (!C.zf) goto L_114dd0be;
  /* 114dd0aa mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dd0b4 mov eax, 1 */
  EAX = (0x1u);
  /* 114dd0b9 jmp 0x114dd32e */
  goto L_114dd32e;
L_114dd0be:;
  /* 114dd0be lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 114dd0c1 push eax */
  push32((uint32_t)(EAX));
  /* 114dd0c2 mov ecx, dword ptr [0x114ff474] */
  ECX = (r32((uint32_t)(0x114ff474)));
  /* 114dd0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd0c9 call 0x114dfc60 */
  push32(0x114dd0ceu); f_114dfc60();
  /* 114dd0ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd0d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd0d3 jne 0x114dd100 */
  if (!C.zf) goto L_114dd100;
  /* 114dd0d5 mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd0db or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd0e1 mov dword ptr [0x114ff47c], edx */
  w32((uint32_t)(0x114ff47c), (EDX));
  /* 114dd0e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd0ea mov dword ptr [0x114ff480], eax */
  w32((uint32_t)(0x114ff480), (EAX));
  /* 114dd0ef mov ecx, dword ptr [0x114ff480] */
  ECX = (r32((uint32_t)(0x114ff480)));
  /* 114dd0f5 mov dword ptr [0x114ff464], ecx */
  w32((uint32_t)(0x114ff464), (ECX));
  /* 114dd0fb jmp 0x114dd19f */
  goto L_114dd19f;
L_114dd100:;
  /* 114dd100 mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd106 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd109 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dd10b jne 0x114dd19f */
  if (!C.zf) goto L_114dd19f;
  /* 114dd111 cmp dword ptr [0x114ff46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd118 je 0x114dd16d */
  if (C.zf) goto L_114dd16d;
  /* 114dd11a mov eax, dword ptr [0x114ff46c] */
  EAX = (r32((uint32_t)(0x114ff46c)));
  /* 114dd11f push eax */
  push32((uint32_t)(EAX));
  /* 114dd120 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd123 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd124 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd12a push edx */
  push32((uint32_t)(EDX));
  /* 114dd12b call 0x114dfd30 */
  push32(0x114dd130u); f_114dfd30();
  /* 114dd130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd135 jne 0x114dd16d */
  if (!C.zf) goto L_114dd16d;
  /* 114dd137 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd13c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 114dd13e mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd143 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd146 mov dword ptr [0x114ff480], ecx */
  w32((uint32_t)(0x114ff480), (ECX));
  /* 114dd14c mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd152 push edx */
  push32((uint32_t)(EDX));
  /* 114dd153 call 0x114d0fb0 */
  push32(0x114dd158u); f_114d0fb0();
  /* 114dd158 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd15b cmp eax, dword ptr [0x114ff46c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114ff46c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd161 jne 0x114dd16b */
  if (!C.zf) goto L_114dd16b;
  /* 114dd163 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd166 mov dword ptr [0x114ff464], eax */
  w32((uint32_t)(0x114ff464), (EAX));
L_114dd16b:;
  /* 114dd16b jmp 0x114dd19f */
  goto L_114dd19f;
L_114dd16d:;
  /* 114dd16d mov ecx, dword ptr [0x114ff47c] */
  ECX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd173 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114dd176 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dd178 jne 0x114dd19f */
  if (!C.zf) goto L_114dd19f;
  /* 114dd17a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd17d push edx */
  push32((uint32_t)(EDX));
  /* 114dd17e call 0x114dd6b0 */
  push32(0x114dd183u); f_114dd6b0();
  /* 114dd183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd186 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd188 je 0x114dd19f */
  if (C.zf) goto L_114dd19f;
  /* 114dd18a mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd18f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 114dd191 mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd196 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd199 mov dword ptr [0x114ff480], ecx */
  w32((uint32_t)(0x114ff480), (ECX));
L_114dd19f:;
  /* 114dd19f mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd1a5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd1ab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd1b1 je 0x114dd321 */
  if (C.zf) goto L_114dd321;
  /* 114dd1b7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd1b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 114dd1bc push eax */
  push32((uint32_t)(EAX));
  /* 114dd1bd mov ecx, dword ptr [0x114ff470] */
  ECX = (r32((uint32_t)(0x114ff470)));
  /* 114dd1c3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd1c5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd1c7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 114dd1cd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd1d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd1d7 push edx */
  push32((uint32_t)(EDX));
  /* 114dd1d8 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd1deu);
  /* 114dd1de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd1e0 jne 0x114dd1f6 */
  if (!C.zf) goto L_114dd1f6;
  /* 114dd1e2 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dd1ec mov eax, 1 */
  EAX = (0x1u);
  /* 114dd1f1 jmp 0x114dd32e */
  goto L_114dd32e;
L_114dd1f6:;
  /* 114dd1f6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 114dd1f9 push eax */
  push32((uint32_t)(EAX));
  /* 114dd1fa mov ecx, dword ptr [0x114ff474] */
  ECX = (r32((uint32_t)(0x114ff474)));
  /* 114dd200 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd201 call 0x114dfc60 */
  push32(0x114dd206u); f_114dfc60();
  /* 114dd206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd20b jne 0x114dd2c0 */
  if (!C.zf) goto L_114dd2c0;
  /* 114dd211 mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd217 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114dd21a mov dword ptr [0x114ff47c], edx */
  w32((uint32_t)(0x114ff47c), (EDX));
  /* 114dd220 cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd227 je 0x114dd24a */
  if (C.zf) goto L_114dd24a;
  /* 114dd229 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd22e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114dd231 mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd236 cmp dword ptr [0x114ff464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd23d jne 0x114dd248 */
  if (!C.zf) goto L_114dd248;
  /* 114dd23f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd242 mov dword ptr [0x114ff464], ecx */
  w32((uint32_t)(0x114ff464), (ECX));
L_114dd248:;
  /* 114dd248 jmp 0x114dd2be */
  goto L_114dd2be;
L_114dd24a:;
  /* 114dd24a cmp dword ptr [0x114ff46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd251 je 0x114dd29f */
  if (C.zf) goto L_114dd29f;
  /* 114dd253 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd259 push edx */
  push32((uint32_t)(EDX));
  /* 114dd25a call 0x114d0fb0 */
  push32(0x114dd25fu); f_114d0fb0();
  /* 114dd25f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd262 cmp eax, dword ptr [0x114ff46c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114ff46c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd268 jne 0x114dd29f */
  if (!C.zf) goto L_114dd29f;
  /* 114dd26a push 1 */
  push32((uint32_t)(0x1u));
  /* 114dd26c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd26f push eax */
  push32((uint32_t)(EAX));
  /* 114dd270 call 0x114dd700 */
  push32(0x114dd275u); f_114dd700();
  /* 114dd275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd27a je 0x114dd29d */
  if (C.zf) goto L_114dd29d;
  /* 114dd27c mov ecx, dword ptr [0x114ff47c] */
  ECX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd282 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114dd285 mov dword ptr [0x114ff47c], ecx */
  w32((uint32_t)(0x114ff47c), (ECX));
  /* 114dd28b cmp dword ptr [0x114ff464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd292 jne 0x114dd29d */
  if (!C.zf) goto L_114dd29d;
  /* 114dd294 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd297 mov dword ptr [0x114ff464], edx */
  w32((uint32_t)(0x114ff464), (EDX));
L_114dd29d:;
  /* 114dd29d jmp 0x114dd2be */
  goto L_114dd2be;
L_114dd29f:;
  /* 114dd29f mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd2a4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114dd2a7 mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd2ac cmp dword ptr [0x114ff464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd2b3 jne 0x114dd2be */
  if (!C.zf) goto L_114dd2be;
  /* 114dd2b5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd2b8 mov dword ptr [0x114ff464], ecx */
  w32((uint32_t)(0x114ff464), (ECX));
L_114dd2be:;
  /* 114dd2be jmp 0x114dd321 */
  goto L_114dd321;
L_114dd2c0:;
  /* 114dd2c0 cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd2c7 jne 0x114dd321 */
  if (!C.zf) goto L_114dd321;
  /* 114dd2c9 cmp dword ptr [0x114ff46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd2d0 je 0x114dd321 */
  if (C.zf) goto L_114dd321;
  /* 114dd2d2 mov edx, dword ptr [0x114ff46c] */
  EDX = (r32((uint32_t)(0x114ff46c)));
  /* 114dd2d8 push edx */
  push32((uint32_t)(EDX));
  /* 114dd2d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 114dd2dc push eax */
  push32((uint32_t)(EAX));
  /* 114dd2dd mov ecx, dword ptr [0x114ff474] */
  ECX = (r32((uint32_t)(0x114ff474)));
  /* 114dd2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd2e4 call 0x114dfd30 */
  push32(0x114dd2e9u); f_114dfd30();
  /* 114dd2e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd2ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd2ee jne 0x114dd321 */
  if (!C.zf) goto L_114dd321;
  /* 114dd2f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dd2f2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd2f5 push edx */
  push32((uint32_t)(EDX));
  /* 114dd2f6 call 0x114dd700 */
  push32(0x114dd2fbu); f_114dd700();
  /* 114dd2fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd2fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd300 je 0x114dd321 */
  if (C.zf) goto L_114dd321;
  /* 114dd302 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd307 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 114dd30a mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd30f cmp dword ptr [0x114ff464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd316 jne 0x114dd321 */
  if (!C.zf) goto L_114dd321;
  /* 114dd318 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd31b mov dword ptr [0x114ff464], ecx */
  w32((uint32_t)(0x114ff464), (ECX));
L_114dd321:;
  /* 114dd321 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd326 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114dd329 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd32b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd32d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114dd32e:;
  /* 114dd32e mov esp, ebp */
  ESP = (EBP);
  /* 114dd330 pop ebp */
  EBP = (pop32());
  /* 114dd331 ret 4 */
  ESPCHK(0x114dd010u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d340 @ 0x114dd340 (116 bytes, 33 insns) */
void f_114dd340(void) {
  FTRACE(0x114dd340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd340 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd341 mov ebp, esp */
  EBP = (ESP);
  /* 114dd343 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd344 mov eax, dword ptr [0x114ff474] */
  EAX = (r32((uint32_t)(0x114ff474)));
  /* 114dd349 push eax */
  push32((uint32_t)(EAX));
  /* 114dd34a call 0x114d0fb0 */
  push32(0x114dd34fu); f_114d0fb0();
  /* 114dd34f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd352 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dd354 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd357 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114dd35a mov dword ptr [0x114ff470], ecx */
  w32((uint32_t)(0x114ff470), (ECX));
  /* 114dd360 cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd367 je 0x114dd372 */
  if (C.zf) goto L_114dd372;
  /* 114dd369 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 114dd370 jmp 0x114dd384 */
  goto L_114dd384;
L_114dd372:;
  /* 114dd372 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd378 push edx */
  push32((uint32_t)(EDX));
  /* 114dd379 call 0x114dd9f0 */
  push32(0x114dd37eu); f_114dd9f0();
  /* 114dd37e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114dd384:;
  /* 114dd384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dd387 mov dword ptr [0x114ff46c], eax */
  w32((uint32_t)(0x114ff46c), (EAX));
  /* 114dd38c push 1 */
  push32((uint32_t)(0x1u));
  /* 114dd38e push 0x114dd3c0 */
  push32((uint32_t)(0x114dd3c0u));
  /* 114dd393 call dword ptr [0x11501348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501348))), 0x114dd399u);
  /* 114dd399 mov ecx, dword ptr [0x114ff47c] */
  ECX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd39f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114dd3a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dd3a4 jne 0x114dd3b0 */
  if (!C.zf) goto L_114dd3b0;
  /* 114dd3a6 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
L_114dd3b0:;
  /* 114dd3b0 mov esp, ebp */
  ESP = (EBP);
  /* 114dd3b2 pop ebp */
  EBP = (pop32());
  /* 114dd3b3 ret  */
  ESPCHK(0x114dd340u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d3c0 @ 0x114dd3c0 (287 bytes, 86 insns) */
void f_114dd3c0(void) {
  FTRACE(0x114dd3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd3c1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd3c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd3c9 push eax */
  push32((uint32_t)(EAX));
  /* 114dd3ca call 0x114dd970 */
  push32(0x114dd3cfu); f_114dd970();
  /* 114dd3cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd3d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114dd3d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd3d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd3da push ecx */
  push32((uint32_t)(ECX));
  /* 114dd3db mov edx, dword ptr [0x114ff470] */
  EDX = (r32((uint32_t)(0x114ff470)));
  /* 114dd3e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd3e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd3e5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd3eb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd3f1 push edx */
  push32((uint32_t)(EDX));
  /* 114dd3f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd3f5 push eax */
  push32((uint32_t)(EAX));
  /* 114dd3f6 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd3fcu);
  /* 114dd3fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd3fe jne 0x114dd414 */
  if (!C.zf) goto L_114dd414;
  /* 114dd400 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dd40a mov eax, 1 */
  EAX = (0x1u);
  /* 114dd40f jmp 0x114dd4d9 */
  goto L_114dd4d9;
L_114dd414:;
  /* 114dd414 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd417 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd418 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd41e push edx */
  push32((uint32_t)(EDX));
  /* 114dd41f call 0x114dfc60 */
  push32(0x114dd424u); f_114dfc60();
  /* 114dd424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd429 jne 0x114dd469 */
  if (!C.zf) goto L_114dd469;
  /* 114dd42b cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd432 jne 0x114dd446 */
  if (!C.zf) goto L_114dd446;
  /* 114dd434 push 1 */
  push32((uint32_t)(0x1u));
  /* 114dd436 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd439 push eax */
  push32((uint32_t)(EAX));
  /* 114dd43a call 0x114dd700 */
  push32(0x114dd43fu); f_114dd700();
  /* 114dd43f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd442 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd444 je 0x114dd467 */
  if (C.zf) goto L_114dd467;
L_114dd446:;
  /* 114dd446 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd449 mov dword ptr [0x114ff480], ecx */
  w32((uint32_t)(0x114ff480), (ECX));
  /* 114dd44f mov edx, dword ptr [0x114ff480] */
  EDX = (r32((uint32_t)(0x114ff480)));
  /* 114dd455 mov dword ptr [0x114ff464], edx */
  w32((uint32_t)(0x114ff464), (EDX));
  /* 114dd45b mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd460 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114dd462 mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
L_114dd467:;
  /* 114dd467 jmp 0x114dd4cc */
  goto L_114dd4cc;
L_114dd469:;
  /* 114dd469 cmp dword ptr [0x114ff470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd470 jne 0x114dd4cc */
  if (!C.zf) goto L_114dd4cc;
  /* 114dd472 cmp dword ptr [0x114ff46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd479 je 0x114dd4cc */
  if (C.zf) goto L_114dd4cc;
  /* 114dd47b mov ecx, dword ptr [0x114ff46c] */
  ECX = (r32((uint32_t)(0x114ff46c)));
  /* 114dd481 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd482 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 114dd485 push edx */
  push32((uint32_t)(EDX));
  /* 114dd486 mov eax, dword ptr [0x114ff474] */
  EAX = (r32((uint32_t)(0x114ff474)));
  /* 114dd48b push eax */
  push32((uint32_t)(EAX));
  /* 114dd48c call 0x114dfd30 */
  push32(0x114dd491u); f_114dfd30();
  /* 114dd491 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd496 jne 0x114dd4cc */
  if (!C.zf) goto L_114dd4cc;
  /* 114dd498 push 0 */
  push32((uint32_t)(0x0u));
  /* 114dd49a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd49d push ecx */
  push32((uint32_t)(ECX));
  /* 114dd49e call 0x114dd700 */
  push32(0x114dd4a3u); f_114dd700();
  /* 114dd4a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd4a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd4a8 je 0x114dd4cc */
  if (C.zf) goto L_114dd4cc;
  /* 114dd4aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd4ad mov dword ptr [0x114ff480], edx */
  w32((uint32_t)(0x114ff480), (EDX));
  /* 114dd4b3 mov eax, dword ptr [0x114ff480] */
  EAX = (r32((uint32_t)(0x114ff480)));
  /* 114dd4b8 mov dword ptr [0x114ff464], eax */
  w32((uint32_t)(0x114ff464), (EAX));
  /* 114dd4bd mov ecx, dword ptr [0x114ff47c] */
  ECX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd4c3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114dd4c6 mov dword ptr [0x114ff47c], ecx */
  w32((uint32_t)(0x114ff47c), (ECX));
L_114dd4cc:;
  /* 114dd4cc mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd4d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114dd4d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd4d6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd4d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114dd4d9:;
  /* 114dd4d9 mov esp, ebp */
  ESP = (EBP);
  /* 114dd4db pop ebp */
  EBP = (pop32());
  /* 114dd4dc ret 4 */
  ESPCHK(0x114dd3c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d4e0 @ 0x114dd4e0 (69 bytes, 20 insns) */
void f_114dd4e0(void) {
  FTRACE(0x114dd4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd4e1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd4e3 mov eax, dword ptr [0x114ff478] */
  EAX = (r32((uint32_t)(0x114ff478)));
  /* 114dd4e8 push eax */
  push32((uint32_t)(EAX));
  /* 114dd4e9 call 0x114d0fb0 */
  push32(0x114dd4eeu); f_114d0fb0();
  /* 114dd4ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd4f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dd4f3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd4f6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114dd4f9 mov dword ptr [0x114ff468], ecx */
  w32((uint32_t)(0x114ff468), (ECX));
  /* 114dd4ff push 1 */
  push32((uint32_t)(0x1u));
  /* 114dd501 push 0x114dd530 */
  push32((uint32_t)(0x114dd530u));
  /* 114dd506 call dword ptr [0x11501348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501348))), 0x114dd50cu);
  /* 114dd50c mov edx, dword ptr [0x114ff47c] */
  EDX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd512 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd515 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dd517 jne 0x114dd523 */
  if (!C.zf) goto L_114dd523;
  /* 114dd519 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
L_114dd523:;
  /* 114dd523 pop ebp */
  EBP = (pop32());
  /* 114dd524 ret  */
  ESPCHK(0x114dd4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d530 @ 0x114dd530 (172 bytes, 54 insns) */
void f_114dd530(void) {
  FTRACE(0x114dd530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd530 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd531 mov ebp, esp */
  EBP = (ESP);
  /* 114dd533 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd539 push eax */
  push32((uint32_t)(EAX));
  /* 114dd53a call 0x114dd970 */
  push32(0x114dd53fu); f_114dd970();
  /* 114dd53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd542 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 114dd545 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd547 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd54a push ecx */
  push32((uint32_t)(ECX));
  /* 114dd54b mov edx, dword ptr [0x114ff468] */
  EDX = (r32((uint32_t)(0x114ff468)));
  /* 114dd551 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd553 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd555 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 114dd55b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd561 push edx */
  push32((uint32_t)(EDX));
  /* 114dd562 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd565 push eax */
  push32((uint32_t)(EAX));
  /* 114dd566 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd56cu);
  /* 114dd56c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd56e jne 0x114dd581 */
  if (!C.zf) goto L_114dd581;
  /* 114dd570 mov dword ptr [0x114ff47c], 0 */
  w32((uint32_t)(0x114ff47c), (0x0u));
  /* 114dd57a mov eax, 1 */
  EAX = (0x1u);
  /* 114dd57f jmp 0x114dd5d6 */
  goto L_114dd5d6;
L_114dd581:;
  /* 114dd581 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 114dd584 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd585 mov edx, dword ptr [0x114ff478] */
  EDX = (r32((uint32_t)(0x114ff478)));
  /* 114dd58b push edx */
  push32((uint32_t)(EDX));
  /* 114dd58c call 0x114dfc60 */
  push32(0x114dd591u); f_114dfc60();
  /* 114dd591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd596 jne 0x114dd5c9 */
  if (!C.zf) goto L_114dd5c9;
  /* 114dd598 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd59b push eax */
  push32((uint32_t)(EAX));
  /* 114dd59c call 0x114dd6b0 */
  push32(0x114dd5a1u); f_114dd6b0();
  /* 114dd5a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd5a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd5a6 je 0x114dd5c9 */
  if (C.zf) goto L_114dd5c9;
  /* 114dd5a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 114dd5ab mov dword ptr [0x114ff480], ecx */
  w32((uint32_t)(0x114ff480), (ECX));
  /* 114dd5b1 mov edx, dword ptr [0x114ff480] */
  EDX = (r32((uint32_t)(0x114ff480)));
  /* 114dd5b7 mov dword ptr [0x114ff464], edx */
  w32((uint32_t)(0x114ff464), (EDX));
  /* 114dd5bd mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd5c2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114dd5c4 mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
L_114dd5c9:;
  /* 114dd5c9 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd5ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114dd5d1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dd5d3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd5d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_114dd5d6:;
  /* 114dd5d6 mov esp, ebp */
  ESP = (EBP);
  /* 114dd5d8 pop ebp */
  EBP = (pop32());
  /* 114dd5d9 ret 4 */
  ESPCHK(0x114dd530u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d5e0 @ 0x114dd5e0 (43 bytes, 11 insns) */
void f_114dd5e0(void) {
  FTRACE(0x114dd5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd5e1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd5e3 mov eax, dword ptr [0x114ff47c] */
  EAX = (r32((uint32_t)(0x114ff47c)));
  /* 114dd5e8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 114dd5ed mov dword ptr [0x114ff47c], eax */
  w32((uint32_t)(0x114ff47c), (EAX));
  /* 114dd5f2 call dword ptr [0x11501338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501338))), 0x114dd5f8u);
  /* 114dd5f8 mov dword ptr [0x114ff480], eax */
  w32((uint32_t)(0x114ff480), (EAX));
  /* 114dd5fd mov ecx, dword ptr [0x114ff480] */
  ECX = (r32((uint32_t)(0x114ff480)));
  /* 114dd603 mov dword ptr [0x114ff464], ecx */
  w32((uint32_t)(0x114ff464), (ECX));
  /* 114dd609 pop ebp */
  EBP = (pop32());
  /* 114dd60a ret  */
  ESPCHK(0x114dd5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d610 @ 0x114dd610 (155 bytes, 57 insns) */
void f_114dd610(void) {
  FTRACE(0x114dd610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd610 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd611 mov ebp, esp */
  EBP = (ESP);
  /* 114dd613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd616 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd61a je 0x114dd63b */
  if (C.zf) goto L_114dd63b;
  /* 114dd61c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd61f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114dd622 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114dd624 je 0x114dd63b */
  if (C.zf) goto L_114dd63b;
  /* 114dd626 push 0x114fab78 */
  push32((uint32_t)(0x114fab78u));
  /* 114dd62b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd62e push edx */
  push32((uint32_t)(EDX));
  /* 114dd62f call 0x114d54c0 */
  push32(0x114dd634u); f_114d54c0();
  /* 114dd634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd639 jne 0x114dd663 */
  if (!C.zf) goto L_114dd663;
L_114dd63b:;
  /* 114dd63b push 8 */
  push32((uint32_t)(0x8u));
  /* 114dd63d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114dd640 push eax */
  push32((uint32_t)(EAX));
  /* 114dd641 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 114dd646 mov ecx, dword ptr [0x114ff480] */
  ECX = (r32((uint32_t)(0x114ff480)));
  /* 114dd64c push ecx */
  push32((uint32_t)(ECX));
  /* 114dd64d call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd653u);
  /* 114dd653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd655 jne 0x114dd65b */
  if (!C.zf) goto L_114dd65b;
  /* 114dd657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dd659 jmp 0x114dd6a7 */
  goto L_114dd6a7;
L_114dd65b:;
  /* 114dd65b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 114dd65e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114dd661 jmp 0x114dd69b */
  goto L_114dd69b;
L_114dd663:;
  /* 114dd663 push 0x114fab74 */
  push32((uint32_t)(0x114fab74u));
  /* 114dd668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd66b push eax */
  push32((uint32_t)(EAX));
  /* 114dd66c call 0x114d54c0 */
  push32(0x114dd671u); f_114d54c0();
  /* 114dd671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd676 jne 0x114dd69b */
  if (!C.zf) goto L_114dd69b;
  /* 114dd678 push 8 */
  push32((uint32_t)(0x8u));
  /* 114dd67a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 114dd67d push ecx */
  push32((uint32_t)(ECX));
  /* 114dd67e push 0xb */
  push32((uint32_t)(0xbu));
  /* 114dd680 mov edx, dword ptr [0x114ff480] */
  EDX = (r32((uint32_t)(0x114ff480)));
  /* 114dd686 push edx */
  push32((uint32_t)(EDX));
  /* 114dd687 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd68du);
  /* 114dd68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd68f jne 0x114dd695 */
  if (!C.zf) goto L_114dd695;
  /* 114dd691 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dd693 jmp 0x114dd6a7 */
  goto L_114dd6a7;
L_114dd695:;
  /* 114dd695 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 114dd698 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_114dd69b:;
  /* 114dd69b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd69e push ecx */
  push32((uint32_t)(ECX));
  /* 114dd69f call 0x114db140 */
  push32(0x114dd6a4u); f_114db140();
  /* 114dd6a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dd6a7:;
  /* 114dd6a7 mov esp, ebp */
  ESP = (EBP);
  /* 114dd6a9 pop ebp */
  EBP = (pop32());
  /* 114dd6aa ret  */
  ESPCHK(0x114dd610u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d6b0 @ 0x114dd6b0 (79 bytes, 26 insns) */
void f_114dd6b0(void) {
  FTRACE(0x114dd6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd6b1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd6b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd6b6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 114dd6ba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 114dd6be mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114dd6c5 jmp 0x114dd6d0 */
  goto L_114dd6d0;
L_114dd6c7:;
  /* 114dd6c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dd6ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd6cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114dd6d0:;
  /* 114dd6d0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd6d4 jae 0x114dd6f6 */
  if (!C.cf) goto L_114dd6f6;
  /* 114dd6d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dd6d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114dd6df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dd6e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114dd6e4 mov cx, word ptr [eax*2 + 0x114fe054] */
  CX = (r16((uint32_t)(EAX*2 + 0x114fe054)));
  /* 114dd6ec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd6ee jne 0x114dd6f4 */
  if (!C.zf) goto L_114dd6f4;
  /* 114dd6f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dd6f2 jmp 0x114dd6fb */
  goto L_114dd6fb;
L_114dd6f4:;
  /* 114dd6f4 jmp 0x114dd6c7 */
  goto L_114dd6c7;
L_114dd6f6:;
  /* 114dd6f6 mov eax, 1 */
  EAX = (0x1u);
L_114dd6fb:;
  /* 114dd6fb mov esp, ebp */
  ESP = (EBP);
  /* 114dd6fd pop ebp */
  EBP = (pop32());
  /* 114dd6fe ret  */
  ESPCHK(0x114dd6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d700 @ 0x114dd700 (135 bytes, 48 insns) */
void f_114dd700(void) {
  FTRACE(0x114dd700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd700 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd701 mov ebp, esp */
  EBP = (ESP);
  /* 114dd703 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd706 push esi */
  push32((uint32_t)(ESI));
  /* 114dd707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd70a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dd70f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dd714 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dd719 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 114dd71c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dd721 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dd724 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 114dd726 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 114dd729 push ecx */
  push32((uint32_t)(ECX));
  /* 114dd72a push 1 */
  push32((uint32_t)(0x1u));
  /* 114dd72c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dd72f push edx */
  push32((uint32_t)(EDX));
  /* 114dd730 call dword ptr [0x114ff484] */
  call_ind((uint32_t)(r32((uint32_t)(0x114ff484))), 0x114dd736u);
  /* 114dd736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd738 jne 0x114dd73e */
  if (!C.zf) goto L_114dd73e;
  /* 114dd73a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dd73c jmp 0x114dd782 */
  goto L_114dd782;
L_114dd73e:;
  /* 114dd73e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 114dd741 push eax */
  push32((uint32_t)(EAX));
  /* 114dd742 call 0x114dd970 */
  push32(0x114dd747u); f_114dd970();
  /* 114dd747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd74a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd74d je 0x114dd77d */
  if (C.zf) goto L_114dd77d;
  /* 114dd74f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd753 je 0x114dd77d */
  if (C.zf) goto L_114dd77d;
  /* 114dd755 mov ecx, dword ptr [0x114ff474] */
  ECX = (r32((uint32_t)(0x114ff474)));
  /* 114dd75b push ecx */
  push32((uint32_t)(ECX));
  /* 114dd75c call 0x114dd9f0 */
  push32(0x114dd761u); f_114dd9f0();
  /* 114dd761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd764 mov esi, eax */
  ESI = (EAX);
  /* 114dd766 mov edx, dword ptr [0x114ff474] */
  EDX = (r32((uint32_t)(0x114ff474)));
  /* 114dd76c push edx */
  push32((uint32_t)(EDX));
  /* 114dd76d call 0x114d0fb0 */
  push32(0x114dd772u); f_114d0fb0();
  /* 114dd772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd775 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd777 jne 0x114dd77d */
  if (!C.zf) goto L_114dd77d;
  /* 114dd779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114dd77b jmp 0x114dd782 */
  goto L_114dd782;
L_114dd77d:;
  /* 114dd77d mov eax, 1 */
  EAX = (0x1u);
L_114dd782:;
  /* 114dd782 pop esi */
  ESI = (pop32());
  /* 114dd783 mov esp, ebp */
  ESP = (EBP);
  /* 114dd785 pop ebp */
  EBP = (pop32());
  /* 114dd786 ret  */
  ESPCHK(0x114dd700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d790 @ 0x114dd790 (77 bytes, 18 insns) */
void f_114dd790(void) {
  FTRACE(0x114dd790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd790 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd791 mov ebp, esp */
  EBP = (ESP);
  /* 114dd793 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd799 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 114dd7a3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 114dd7a9 push eax */
  push32((uint32_t)(EAX));
  /* 114dd7aa call dword ptr [0x11501334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501334))), 0x114dd7b0u);
  /* 114dd7b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114dd7b2 je 0x114dd7c9 */
  if (C.zf) goto L_114dd7c9;
  /* 114dd7b4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd7bb jne 0x114dd7c9 */
  if (!C.zf) goto L_114dd7c9;
  /* 114dd7bd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 114dd7c7 jmp 0x114dd7d3 */
  goto L_114dd7d3;
L_114dd7c9:;
  /* 114dd7c9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_114dd7d3:;
  /* 114dd7d3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 114dd7d9 mov esp, ebp */
  ESP = (EBP);
  /* 114dd7db pop ebp */
  EBP = (pop32());
  /* 114dd7dc ret  */
  ESPCHK(0x114dd790u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x114dd7e0 (388 bytes, 118 insns) */
void f_114dd7e0(void) {
  FTRACE(0x114dd7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd7e1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd7e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd7e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114dd7ed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 114dd7f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114dd7fb:;
  /* 114dd7fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114dd7fe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd801 jg 0x114dd948 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dd948;
  /* 114dd807 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114dd80a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd80d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114dd80e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd810 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114dd812 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114dd815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd818 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd81e cmp edx, dword ptr [ecx + 0x114fdbb0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x114fdbb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd824 jne 0x114dd91e */
  if (!C.zf) goto L_114dd91e;
  /* 114dd82a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dd82d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114dd830 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd834 ja 0x114dd857 */
  if ((!C.cf&&!C.zf)) goto L_114dd857;
  /* 114dd836 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd83a je 0x114dd8c9 */
  if (C.zf) goto L_114dd8c9;
  /* 114dd840 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd844 je 0x114dd874 */
  if (C.zf) goto L_114dd874;
  /* 114dd846 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd84a je 0x114dd896 */
  if (C.zf) goto L_114dd896;
  /* 114dd84c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd850 je 0x114dd8b8 */
  if (C.zf) goto L_114dd8b8;
  /* 114dd852 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd857:;
  /* 114dd857 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd85e je 0x114dd885 */
  if (C.zf) goto L_114dd885;
  /* 114dd860 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd867 je 0x114dd8a7 */
  if (C.zf) goto L_114dd8a7;
  /* 114dd869 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd870 je 0x114dd8da */
  if (C.zf) goto L_114dd8da;
  /* 114dd872 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd874:;
  /* 114dd874 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd877 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd87a add ecx, 0x114fdbb4 */
  { uint32_t _a=(ECX),_b=(0x114fdbb4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd880 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dd883 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd885:;
  /* 114dd885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd888 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd88b mov eax, dword ptr [edx + 0x114fdbbc] */
  EAX = (r32((uint32_t)(EDX + 0x114fdbbc)));
  /* 114dd891 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dd894 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd896:;
  /* 114dd896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd899 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd89c add ecx, 0x114fdbc0 */
  { uint32_t _a=(ECX),_b=(0x114fdbc0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd8a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dd8a5 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd8a7:;
  /* 114dd8a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd8aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd8ad mov eax, dword ptr [edx + 0x114fdbc4] */
  EAX = (r32((uint32_t)(EDX + 0x114fdbc4)));
  /* 114dd8b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dd8b6 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd8b8:;
  /* 114dd8b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd8bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd8be add ecx, 0x114fdbc8 */
  { uint32_t _a=(ECX),_b=(0x114fdbc8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd8c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dd8c7 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd8c9:;
  /* 114dd8c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd8cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd8cf add edx, 0x114fdbcc */
  { uint32_t _a=(EDX),_b=(0x114fdbccu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd8d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114dd8d8 jmp 0x114dd8e8 */
  goto L_114dd8e8;
L_114dd8da:;
  /* 114dd8da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd8dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd8e0 add eax, 0x114fdbd4 */
  { uint32_t _a=(EAX),_b=(0x114fdbd4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd8e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114dd8e8:;
  /* 114dd8e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd8ec je 0x114dd8f4 */
  if (C.zf) goto L_114dd8f4;
  /* 114dd8ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd8f2 jge 0x114dd8f6 */
  if ((C.sf==C.of)) goto L_114dd8f6;
L_114dd8f4:;
  /* 114dd8f4 jmp 0x114dd948 */
  goto L_114dd948;
L_114dd8f6:;
  /* 114dd8f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dd8f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd8fc push ecx */
  push32((uint32_t)(ECX));
  /* 114dd8fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dd900 push edx */
  push32((uint32_t)(EDX));
  /* 114dd901 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dd904 push eax */
  push32((uint32_t)(EAX));
  /* 114dd905 call 0x114d19a0 */
  push32(0x114dd90au); f_114d19a0();
  /* 114dd90a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd90d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dd910 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd913 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 114dd917 mov eax, 1 */
  EAX = (0x1u);
  /* 114dd91c jmp 0x114dd95e */
  goto L_114dd95e;
L_114dd91e:;
  /* 114dd91e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd921 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114dd924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd927 cmp eax, dword ptr [edx + 0x114fdbb0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x114fdbb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd92d jae 0x114dd93a */
  if (!C.cf) goto L_114dd93a;
  /* 114dd92f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd932 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd935 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114dd938 jmp 0x114dd943 */
  goto L_114dd943;
L_114dd93a:;
  /* 114dd93a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dd93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd940 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114dd943:;
  /* 114dd943 jmp 0x114dd7fb */
  goto L_114dd7fb;
L_114dd948:;
  /* 114dd948 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dd94b push eax */
  push32((uint32_t)(EAX));
  /* 114dd94c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dd94f push ecx */
  push32((uint32_t)(ECX));
  /* 114dd950 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dd953 push edx */
  push32((uint32_t)(EDX));
  /* 114dd954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd957 push eax */
  push32((uint32_t)(EAX));
  /* 114dd958 call dword ptr [0x11501340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501340))), 0x114dd95eu);
L_114dd95e:;
  /* 114dd95e mov esp, ebp */
  ESP = (EBP);
  /* 114dd960 pop ebp */
  EBP = (pop32());
  /* 114dd961 ret 0x10 */
  ESPCHK(0x114dd7e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001d970 @ 0x114dd970 (118 bytes, 42 insns) */
void f_114dd970(void) {
  FTRACE(0x114dd970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd970 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd971 mov ebp, esp */
  EBP = (ESP);
  /* 114dd973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd976 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114dd97d:;
  /* 114dd97d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd980 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114dd982 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 114dd985 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dd98c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dd98f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114dd992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114dd994 je 0x114dd9df */
  if (C.zf) goto L_114dd9df;
  /* 114dd996 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd99a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd99d jl 0x114dd9b2 */
  if ((C.sf!=C.of)) goto L_114dd9b2;
  /* 114dd99f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd9a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd9a6 jg 0x114dd9b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_114dd9b2;
  /* 114dd9a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114dd9ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dd9ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 114dd9b0 jmp 0x114dd9cc */
  goto L_114dd9cc;
L_114dd9b2:;
  /* 114dd9b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd9b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd9b9 jl 0x114dd9cc */
  if ((C.sf!=C.of)) goto L_114dd9cc;
  /* 114dd9bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd9bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dd9c2 jg 0x114dd9cc */
  if ((!C.zf&&C.sf==C.of)) goto L_114dd9cc;
  /* 114dd9c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 114dd9c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 114dd9c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_114dd9cc:;
  /* 114dd9cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dd9cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 114dd9d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114dd9d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 114dd9da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dd9dd jmp 0x114dd97d */
  goto L_114dd97d;
L_114dd9df:;
  /* 114dd9df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dd9e2 mov esp, ebp */
  ESP = (EBP);
  /* 114dd9e4 pop ebp */
  EBP = (pop32());
  /* 114dd9e5 ret  */
  ESPCHK(0x114dd970u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x114dd9f0 (101 bytes, 36 insns) */
void f_114dd9f0(void) {
  FTRACE(0x114dd9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dd9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114dd9f1 mov ebp, esp */
  EBP = (ESP);
  /* 114dd9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dd9f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114dd9fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dda00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114dda02 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 114dda05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dda08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dda0b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_114dda0e:;
  /* 114dda0e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 114dda12 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dda15 jl 0x114dda20 */
  if ((C.sf!=C.of)) goto L_114dda20;
  /* 114dda17 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 114dda1b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dda1e jle 0x114dda32 */
  if ((C.zf||C.sf!=C.of)) goto L_114dda32;
L_114dda20:;
  /* 114dda20 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 114dda24 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dda27 jl 0x114dda4e */
  if ((C.sf!=C.of)) goto L_114dda4e;
  /* 114dda29 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 114dda2d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dda30 jg 0x114dda4e */
  if ((!C.zf&&C.sf==C.of)) goto L_114dda4e;
L_114dda32:;
  /* 114dda32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dda35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dda38 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114dda3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dda3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114dda40 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 114dda43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dda46 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dda49 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114dda4c jmp 0x114dda0e */
  goto L_114dda0e;
L_114dda4e:;
  /* 114dda4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114dda51 mov esp, ebp */
  ESP = (EBP);
  /* 114dda53 pop ebp */
  EBP = (pop32());
  /* 114dda54 ret  */
  ESPCHK(0x114dd9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001da60 @ 0x114dda60 (1085 bytes, 299 insns) */
void f_114dda60(void) {
  FTRACE(0x114dda60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dda60 push ebp */
  push32((uint32_t)(EBP));
  /* 114dda61 mov ebp, esp */
  EBP = (ESP);
  /* 114dda63 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dda66 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114dda6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114dda73 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114dda7a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114dda81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114dda88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dda8b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 114dda8f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 114dda93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dda96 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 114dda9a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 114dda9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ddaa1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddaa7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114ddaaa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ddab0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 114ddab2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 114ddab8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 114ddabc mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 114ddac0 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 114ddac4 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 114ddac8 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 114ddacc and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 114ddad1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 114ddad5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ddad8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ddade mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114ddae1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ddae6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddae8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 114ddaec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ddaef and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddaf5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddafb jge 0x114ddb1d */
  if ((C.sf==C.of)) goto L_114ddb1d;
  /* 114ddafd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114ddb00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ddb06 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddb0c jge 0x114ddb1d */
  if ((C.sf==C.of)) goto L_114ddb1d;
  /* 114ddb0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114ddb11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ddb16 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddb1b jle 0x114ddb54 */
  if ((C.zf||C.sf!=C.of)) goto L_114ddb54;
L_114ddb1d:;
  /* 114ddb1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114ddb20 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddb26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114ddb28 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddb2a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114ddb30 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddb36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb39 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114ddb3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb3f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114ddb46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb49 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 114ddb4f jmp 0x114dde99 */
  goto L_114dde99;
L_114ddb54:;
  /* 114ddb54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114ddb57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ddb5d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddb63 jg 0x114ddb87 */
  if ((!C.zf&&C.sf==C.of)) goto L_114ddb87;
  /* 114ddb65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb68 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 114ddb6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb72 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114ddb79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddb7c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 114ddb82 jmp 0x114dde99 */
  goto L_114dde99;
L_114ddb87:;
  /* 114ddb87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ddb8a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ddb8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ddb91 jne 0x114ddbcd */
  if (!C.zf) goto L_114ddbcd;
  /* 114ddb93 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddb97 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 114ddb9b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 114ddb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddba2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114ddba5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ddbaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ddbac jne 0x114ddbcd */
  if (!C.zf) goto L_114ddbcd;
  /* 114ddbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddbb1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddbb5 jne 0x114ddbcd */
  if (!C.zf) goto L_114ddbcd;
  /* 114ddbb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddbba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddbbd jne 0x114ddbcd */
  if (!C.zf) goto L_114ddbcd;
  /* 114ddbbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddbc2 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 114ddbc8 jmp 0x114dde99 */
  goto L_114dde99;
L_114ddbcd:;
  /* 114ddbcd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114ddbd0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddbd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ddbd8 jne 0x114ddc29 */
  if (!C.zf) goto L_114ddc29;
  /* 114ddbda mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddbde add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 114ddbe2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 114ddbe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddbe9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114ddbec and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddbf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ddbf4 jne 0x114ddc29 */
  if (!C.zf) goto L_114ddc29;
  /* 114ddbf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddbf9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddbfd jne 0x114ddc29 */
  if (!C.zf) goto L_114ddc29;
  /* 114ddbff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddc02 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddc05 jne 0x114ddc29 */
  if (!C.zf) goto L_114ddc29;
  /* 114ddc07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddc0a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 114ddc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddc14 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 114ddc1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddc1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114ddc24 jmp 0x114dde99 */
  goto L_114dde99;
L_114ddc29:;
  /* 114ddc29 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114ddc30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 114ddc37 jmp 0x114ddc42 */
  goto L_114ddc42;
L_114ddc39:;
  /* 114ddc39 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ddc3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddc3f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_114ddc42:;
  /* 114ddc42 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddc46 jge 0x114ddd01 */
  if ((C.sf==C.of)) goto L_114ddd01;
  /* 114ddc4c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114ddc4f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 114ddc51 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114ddc54 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 114ddc5b mov eax, 5 */
  EAX = (0x5u);
  /* 114ddc60 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddc63 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 114ddc66 jmp 0x114ddc71 */
  goto L_114ddc71;
L_114ddc68:;
  /* 114ddc68 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 114ddc6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddc6e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_114ddc71:;
  /* 114ddc71 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddc75 jle 0x114ddcf3 */
  if ((C.zf||C.sf!=C.of)) goto L_114ddcf3;
  /* 114ddc77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddc7a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddc7d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 114ddc80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddc83 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddc86 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 114ddc89 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114ddc8c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 114ddc90 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 114ddc93 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 114ddc96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114ddc98 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114ddc9b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 114ddc9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ddca0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114ddca3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114ddca6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 114ddca9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114ddcac push ecx */
  push32((uint32_t)(ECX));
  /* 114ddcad mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 114ddcb0 push edx */
  push32((uint32_t)(EDX));
  /* 114ddcb1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 114ddcb4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114ddcb6 push ecx */
  push32((uint32_t)(ECX));
  /* 114ddcb7 call 0x114d9440 */
  push32(0x114ddcbcu); f_114d9440();
  /* 114ddcbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddcbf mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 114ddcc2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddcc6 je 0x114ddcdc */
  if (C.zf) goto L_114ddcdc;
  /* 114ddcc8 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114ddccb mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 114ddcd0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 114ddcd4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114ddcd7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_114ddcdc:;
  /* 114ddcdc mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114ddcdf add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddce2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 114ddce5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ddce8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114ddcee jmp 0x114ddc68 */
  goto L_114ddc68;
L_114ddcf3:;
  /* 114ddcf3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114ddcf6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddcf9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114ddcfc jmp 0x114ddc39 */
  goto L_114ddc39;
L_114ddd01:;
  /* 114ddd01 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddd05 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114ddd0a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_114ddd0e:;
  /* 114ddd0e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 114ddd12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ddd14 jle 0x114ddd3d */
  if ((C.zf||C.sf!=C.of)) goto L_114ddd3d;
  /* 114ddd16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114ddd19 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 114ddd1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ddd21 jne 0x114ddd3d */
  if (!C.zf) goto L_114ddd3d;
  /* 114ddd23 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 114ddd26 push edx */
  push32((uint32_t)(EDX));
  /* 114ddd27 call 0x114d9530 */
  push32(0x114ddd2cu); f_114d9530();
  /* 114ddd2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddd2f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddd33 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114ddd37 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 114ddd3b jmp 0x114ddd0e */
  goto L_114ddd0e;
L_114ddd3d:;
  /* 114ddd3d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 114ddd41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ddd43 jg 0x114ddd9d */
  if ((!C.zf&&C.sf==C.of)) goto L_114ddd9d;
  /* 114ddd45 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddd49 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 114ddd4d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_114ddd51:;
  /* 114ddd51 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 114ddd55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ddd57 jge 0x114ddd8c */
  if ((C.sf==C.of)) goto L_114ddd8c;
  /* 114ddd59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ddd5c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114ddd62 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114ddd65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114ddd67 je 0x114ddd72 */
  if (C.zf) goto L_114ddd72;
  /* 114ddd69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ddd6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddd6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114ddd72:;
  /* 114ddd72 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114ddd75 push eax */
  push32((uint32_t)(EAX));
  /* 114ddd76 call 0x114d9590 */
  push32(0x114ddd7bu); f_114d9590();
  /* 114ddd7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddd7e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 114ddd82 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 114ddd86 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 114ddd8a jmp 0x114ddd51 */
  goto L_114ddd51;
L_114ddd8c:;
  /* 114ddd8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddd90 je 0x114ddd9d */
  if (C.zf) goto L_114ddd9d;
  /* 114ddd92 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 114ddd96 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 114ddd99 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_114ddd9d:;
  /* 114ddd9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114ddda0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114ddda5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dddaa jg 0x114dddbd */
  if ((!C.zf&&C.sf==C.of)) goto L_114dddbd;
  /* 114dddac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114dddaf and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114dddb5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dddbb jne 0x114dde1e */
  if (!C.zf) goto L_114dde1e;
L_114dddbd:;
  /* 114dddbd cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dddc1 jne 0x114dde15 */
  if (!C.zf) goto L_114dde15;
  /* 114dddc3 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 114dddca cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dddce jne 0x114dde0a */
  if (!C.zf) goto L_114dde0a;
  /* 114dddd0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 114dddd7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 114dddda and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114ddde0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddde6 jne 0x114dddfc */
  if (!C.zf) goto L_114dddfc;
  /* 114ddde8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 114dddee mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 114dddf2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 114dddf6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 114dddfa jmp 0x114dde08 */
  goto L_114dde08;
L_114dddfc:;
  /* 114dddfc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 114dde00 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 114dde04 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_114dde08:;
  /* 114dde08 jmp 0x114dde13 */
  goto L_114dde13;
L_114dde0a:;
  /* 114dde0a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 114dde0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dde10 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_114dde13:;
  /* 114dde13 jmp 0x114dde1e */
  goto L_114dde1e;
L_114dde15:;
  /* 114dde15 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 114dde18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dde1b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_114dde1e:;
  /* 114dde1e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dde21 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114dde27 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dde2d jl 0x114dde63 */
  if ((C.sf!=C.of)) goto L_114dde63;
  /* 114dde2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dde32 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114dde38 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114dde3a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dde3c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 114dde42 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dde48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114dde4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde51 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114dde58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde5b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 114dde61 jmp 0x114dde99 */
  goto L_114dde99;
L_114dde63:;
  /* 114dde63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde66 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 114dde6a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 114dde6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114dde73 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 114dde76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dde7c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 114dde7f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 114dde82 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114dde87 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114dde8a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114dde90 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 114dde92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dde95 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_114dde99:;
  /* 114dde99 mov esp, ebp */
  ESP = (EBP);
  /* 114dde9b pop ebp */
  EBP = (pop32());
  /* 114dde9c ret  */
  ESPCHK(0x114dda60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dea0 @ 0x114ddea0 (195 bytes, 67 insns) */
void f_114ddea0(void) {
  FTRACE(0x114ddea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ddea0 push ebp */
  push32((uint32_t)(EBP));
  /* 114ddea1 mov ebp, esp */
  EBP = (ESP);
  /* 114ddea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddea6 mov eax, 0x114fe430 */
  EAX = (0x114fe430u);
  /* 114ddeab sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddeae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ddeb1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddeb5 jne 0x114ddebc */
  if (!C.zf) goto L_114ddebc;
  /* 114ddeb7 jmp 0x114ddf5f */
  goto L_114ddf5f;
L_114ddebc:;
  /* 114ddebc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddec0 jge 0x114dded5 */
  if ((C.sf==C.of)) goto L_114dded5;
  /* 114ddec2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddec5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114ddec7 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114ddeca mov edx, 0x114fe590 */
  EDX = (0x114fe590u);
  /* 114ddecf sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dded2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114dded5:;
  /* 114dded5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dded9 jne 0x114ddee3 */
  if (!C.zf) goto L_114ddee3;
  /* 114ddedb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddede mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_114ddee3:;
  /* 114ddee3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddee7 je 0x114ddf5f */
  if (C.zf) goto L_114ddf5f;
  /* 114ddee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ddeec add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddeef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114ddef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddef5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 114ddef8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114ddefb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ddefe sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 114ddf01 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114ddf04 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddf08 jne 0x114ddf0c */
  if (!C.zf) goto L_114ddf0c;
  /* 114ddf0a jmp 0x114ddee3 */
  goto L_114ddee3;
L_114ddf0c:;
  /* 114ddf0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114ddf0f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114ddf12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ddf15 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddf17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114ddf1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ddf1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114ddf1f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 114ddf22 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddf28 jl 0x114ddf4d */
  if ((C.sf!=C.of)) goto L_114ddf4d;
  /* 114ddf2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ddf2d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114ddf2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114ddf32 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 114ddf35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114ddf38 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 114ddf3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 114ddf3e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 114ddf41 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114ddf44 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 114ddf47 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 114ddf4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114ddf4d:;
  /* 114ddf4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114ddf50 push edx */
  push32((uint32_t)(EDX));
  /* 114ddf51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddf54 push eax */
  push32((uint32_t)(EAX));
  /* 114ddf55 call 0x114dda60 */
  push32(0x114ddf5au); f_114dda60();
  /* 114ddf5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddf5d jmp 0x114ddee3 */
  goto L_114ddee3;
L_114ddf5f:;
  /* 114ddf5f mov esp, ebp */
  ESP = (EBP);
  /* 114ddf61 pop ebp */
  EBP = (pop32());
  /* 114ddf62 ret  */
  ESPCHK(0x114ddea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001df70 @ 0x114ddf70 (130 bytes, 50 insns) */
void f_114ddf70(void) {
  FTRACE(0x114ddf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114ddf70 push ebp */
  push32((uint32_t)(EBP));
  /* 114ddf71 mov ebp, esp */
  EBP = (ESP);
  /* 114ddf73 push ecx */
  push32((uint32_t)(ECX));
  /* 114ddf74 push ebx */
  push32((uint32_t)(EBX));
  /* 114ddf75 push esi */
  push32((uint32_t)(ESI));
  /* 114ddf76 push edi */
  push32((uint32_t)(EDI));
  /* 114ddf77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114ddf7e:;
  /* 114ddf7e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddf82 jne 0x114ddfa2 */
  if (!C.zf) goto L_114ddfa2;
  /* 114ddf84 push 0x114fab88 */
  push32((uint32_t)(0x114fab88u));
  /* 114ddf89 push 0 */
  push32((uint32_t)(0x0u));
  /* 114ddf8b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 114ddf8d push 0x114fab7c */
  push32((uint32_t)(0x114fab7cu));
  /* 114ddf92 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ddf94 call 0x114ca4c0 */
  push32(0x114ddf99u); f_114ca4c0();
  /* 114ddf99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddf9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ddf9f jne 0x114ddfa2 */
  if (!C.zf) goto L_114ddfa2;
  /* 114ddfa1 int3  */
  x86_unimpl("int3 @ 0x114ddfa1");
L_114ddfa2:;
  /* 114ddfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114ddfa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114ddfa6 jne 0x114ddf7e */
  if (!C.zf) goto L_114ddf7e;
  /* 114ddfa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddfab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114ddfae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 114ddfb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114ddfb3 je 0x114ddfc1 */
  if (C.zf) goto L_114ddfc1;
  /* 114ddfb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddfb8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 114ddfbf jmp 0x114ddfe8 */
  goto L_114ddfe8;
L_114ddfc1:;
  /* 114ddfc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddfc4 push ecx */
  push32((uint32_t)(ECX));
  /* 114ddfc5 call 0x114d5f30 */
  push32(0x114ddfcau); f_114d5f30();
  /* 114ddfca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddfcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddfd0 push edx */
  push32((uint32_t)(EDX));
  /* 114ddfd1 call 0x114de000 */
  push32(0x114ddfd6u); f_114de000();
  /* 114ddfd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ddfd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114ddfdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114ddfdf push eax */
  push32((uint32_t)(EAX));
  /* 114ddfe0 call 0x114d5fa0 */
  push32(0x114ddfe5u); f_114d5fa0();
  /* 114ddfe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ddfe8:;
  /* 114ddfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114ddfeb pop edi */
  EDI = (pop32());
  /* 114ddfec pop esi */
  ESI = (pop32());
  /* 114ddfed pop ebx */
  EBX = (pop32());
  /* 114ddfee mov esp, ebp */
  ESP = (EBP);
  /* 114ddff0 pop ebp */
  EBP = (pop32());
  /* 114ddff1 ret  */
  ESPCHK(0x114ddf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e000 @ 0x114de000 (190 bytes, 67 insns) */
void f_114de000(void) {
  FTRACE(0x114de000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de000 push ebp */
  push32((uint32_t)(EBP));
  /* 114de001 mov ebp, esp */
  EBP = (ESP);
  /* 114de003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de006 push ebx */
  push32((uint32_t)(EBX));
  /* 114de007 push esi */
  push32((uint32_t)(ESI));
  /* 114de008 push edi */
  push32((uint32_t)(EDI));
  /* 114de009 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114de010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de013 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114de016:;
  /* 114de016 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de01a jne 0x114de03a */
  if (!C.zf) goto L_114de03a;
  /* 114de01c push 0x114f9f14 */
  push32((uint32_t)(0x114f9f14u));
  /* 114de021 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de023 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 114de025 push 0x114fab7c */
  push32((uint32_t)(0x114fab7cu));
  /* 114de02a push 2 */
  push32((uint32_t)(0x2u));
  /* 114de02c call 0x114ca4c0 */
  push32(0x114de031u); f_114ca4c0();
  /* 114de031 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de037 jne 0x114de03a */
  if (!C.zf) goto L_114de03a;
  /* 114de039 int3  */
  x86_unimpl("int3 @ 0x114de039");
L_114de03a:;
  /* 114de03a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114de03c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114de03e jne 0x114de016 */
  if (!C.zf) goto L_114de016;
  /* 114de040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de043 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114de046 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 114de04b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114de04d je 0x114de0aa */
  if (C.zf) goto L_114de0aa;
  /* 114de04f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de052 push ecx */
  push32((uint32_t)(ECX));
  /* 114de053 call 0x114daf30 */
  push32(0x114de058u); f_114daf30();
  /* 114de058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de05b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de05e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de061 push edx */
  push32((uint32_t)(EDX));
  /* 114de062 call 0x114dff70 */
  push32(0x114de067u); f_114dff70();
  /* 114de067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de06a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de06d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114de070 push ecx */
  push32((uint32_t)(ECX));
  /* 114de071 call 0x114dfe40 */
  push32(0x114de076u); f_114dfe40();
  /* 114de076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114de07b jge 0x114de086 */
  if ((C.sf==C.of)) goto L_114de086;
  /* 114de07d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114de084 jmp 0x114de0aa */
  goto L_114de0aa;
L_114de086:;
  /* 114de086 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de089 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de08d je 0x114de0aa */
  if (C.zf) goto L_114de0aa;
  /* 114de08f push 2 */
  push32((uint32_t)(0x2u));
  /* 114de091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de094 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114de097 push ecx */
  push32((uint32_t)(ECX));
  /* 114de098 call 0x114cc390 */
  push32(0x114de09du); f_114cc390();
  /* 114de09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de0a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de0a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_114de0aa:;
  /* 114de0aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de0ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 114de0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de0b7 pop edi */
  EDI = (pop32());
  /* 114de0b8 pop esi */
  ESI = (pop32());
  /* 114de0b9 pop ebx */
  EBX = (pop32());
  /* 114de0ba mov esp, ebp */
  ESP = (EBP);
  /* 114de0bc pop ebp */
  EBP = (pop32());
  /* 114de0bd ret  */
  ESPCHK(0x114de000u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e0c0 @ 0x114de0c0 (210 bytes, 63 insns) */
void f_114de0c0(void) {
  FTRACE(0x114de0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114de0c1 mov ebp, esp */
  EBP = (ESP);
  /* 114de0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114de0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de0c7 cmp eax, dword ptr [0x11500c3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11500c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de0cd jae 0x114de0f1 */
  if (!C.cf) goto L_114de0f1;
  /* 114de0cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de0d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114de0d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de0d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114de0db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114de0de mov eax, dword ptr [ecx*4 + 0x11500b00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11500b00)));
  /* 114de0e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114de0ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114de0ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114de0ef jne 0x114de104 */
  if (!C.zf) goto L_114de104;
L_114de0f1:;
  /* 114de0f1 call 0x114d7750 */
  push32(0x114de0f6u); f_114d7750();
  /* 114de0f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114de0fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114de0ff jmp 0x114de18e */
  goto L_114de18e;
L_114de104:;
  /* 114de104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de107 push edx */
  push32((uint32_t)(EDX));
  /* 114de108 call 0x114dacf0 */
  push32(0x114de10du); f_114dacf0();
  /* 114de10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de113 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114de116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de119 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114de11c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114de11f mov edx, dword ptr [eax*4 + 0x11500b00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11500b00)));
  /* 114de126 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 114de12b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 114de12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114de130 je 0x114de16d */
  if (C.zf) goto L_114de16d;
  /* 114de132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de135 push ecx */
  push32((uint32_t)(ECX));
  /* 114de136 call 0x114dab70 */
  push32(0x114de13bu); f_114dab70();
  /* 114de13b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de13e push eax */
  push32((uint32_t)(EAX));
  /* 114de13f call dword ptr [0x1150133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1150133c))), 0x114de145u);
  /* 114de145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114de147 jne 0x114de154 */
  if (!C.zf) goto L_114de154;
  /* 114de149 call dword ptr [0x115013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013d4))), 0x114de14fu);
  /* 114de14f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de152 jmp 0x114de15b */
  goto L_114de15b;
L_114de154:;
  /* 114de154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114de15b:;
  /* 114de15b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de15f jne 0x114de163 */
  if (!C.zf) goto L_114de163;
  /* 114de161 jmp 0x114de17f */
  goto L_114de17f;
L_114de163:;
  /* 114de163 call 0x114d7760 */
  push32(0x114de168u); f_114d7760();
  /* 114de168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de16b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114de16d:;
  /* 114de16d call 0x114d7750 */
  push32(0x114de172u); f_114d7750();
  /* 114de172 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114de178 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114de17f:;
  /* 114de17f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de182 push eax */
  push32((uint32_t)(EAX));
  /* 114de183 call 0x114dad80 */
  push32(0x114de188u); f_114dad80();
  /* 114de188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114de18e:;
  /* 114de18e mov esp, ebp */
  ESP = (EBP);
  /* 114de190 pop ebp */
  EBP = (pop32());
  /* 114de191 ret  */
  ESPCHK(0x114de0c0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x114de1a0 (52 bytes, 19 insns) */
void f_114de1a0(void) {
  FTRACE(0x114de1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de1a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114de1a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 114de1a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114de1aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 114de1ae jne 0x114de1b9 */
  if (!C.zf) goto L_114de1b9;
  /* 114de1b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114de1b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114de1b6 ret 0x10 */
  ESPCHK(0x114de1a0u, _esp0);
  ESP += 20; return;
L_114de1b9:;
  /* 114de1b9 push ebx */
  push32((uint32_t)(EBX));
  /* 114de1ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114de1bc mov ebx, eax */
  EBX = (EAX);
  /* 114de1be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114de1c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114de1c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de1c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114de1cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 114de1ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de1d0 pop ebx */
  EBX = (pop32());
  /* 114de1d1 ret 0x10 */
  ESPCHK(0x114de1a0u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x114de1e0 (79 bytes, 32 insns) */
void f_114de1e0(void) {
  FTRACE(0x114de1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114de1e1 mov ebp, esp */
  EBP = (ESP);
  /* 114de1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114de1e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de1e8 jne 0x114de1ee */
  if (!C.zf) goto L_114de1ee;
  /* 114de1ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114de1ec jmp 0x114de22b */
  goto L_114de22b;
L_114de1ee:;
  /* 114de1ee mov eax, dword ptr [0x114ff4cc] */
  EAX = (r32((uint32_t)(0x114ff4cc)));
  /* 114de1f3 push eax */
  push32((uint32_t)(EAX));
  /* 114de1f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 114de1f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114de1fb push edx */
  push32((uint32_t)(EDX));
  /* 114de1fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de1ff push eax */
  push32((uint32_t)(EAX));
  /* 114de200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de203 push ecx */
  push32((uint32_t)(ECX));
  /* 114de204 push 1 */
  push32((uint32_t)(0x1u));
  /* 114de206 mov edx, dword ptr [0x114ff764] */
  EDX = (r32((uint32_t)(0x114ff764)));
  /* 114de20c push edx */
  push32((uint32_t)(EDX));
  /* 114de20d call 0x114e0010 */
  push32(0x114de212u); f_114e0010();
  /* 114de212 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de215 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de218 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de21c jne 0x114de225 */
  if (!C.zf) goto L_114de225;
  /* 114de21e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 114de223 jmp 0x114de22b */
  goto L_114de22b;
L_114de225:;
  /* 114de225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de228 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_114de22b:;
  /* 114de22b mov esp, ebp */
  ESP = (EBP);
  /* 114de22d pop ebp */
  EBP = (pop32());
  /* 114de22e ret  */
  ESPCHK(0x114de1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e230 @ 0x114de230 (174 bytes, 66 insns) */
void f_114de230(void) {
  FTRACE(0x114de230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de230 push ebp */
  push32((uint32_t)(EBP));
  /* 114de231 mov ebp, esp */
  EBP = (ESP);
  /* 114de233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de236 mov eax, dword ptr [0x114ff1d4] */
  EAX = (r32((uint32_t)(0x114ff1d4)));
  /* 114de23b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114de23e:;
  /* 114de23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de241 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de244 je 0x114de2d8 */
  if (C.zf) goto L_114de2d8;
  /* 114de24a push 0 */
  push32((uint32_t)(0x0u));
  /* 114de24c push 0 */
  push32((uint32_t)(0x0u));
  /* 114de24e push 0 */
  push32((uint32_t)(0x0u));
  /* 114de250 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de252 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114de254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de257 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114de259 push eax */
  push32((uint32_t)(EAX));
  /* 114de25a push 0 */
  push32((uint32_t)(0x0u));
  /* 114de25c push 1 */
  push32((uint32_t)(0x1u));
  /* 114de25e call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114de264u);
  /* 114de264 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114de267 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de26b jne 0x114de272 */
  if (!C.zf) goto L_114de272;
  /* 114de26d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114de270 jmp 0x114de2da */
  goto L_114de2da;
L_114de272:;
  /* 114de272 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 114de274 push 0x114fab98 */
  push32((uint32_t)(0x114fab98u));
  /* 114de279 push 2 */
  push32((uint32_t)(0x2u));
  /* 114de27b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de27e push ecx */
  push32((uint32_t)(ECX));
  /* 114de27f call 0x114cb900 */
  push32(0x114de284u); f_114cb900();
  /* 114de284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de287 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114de28a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de28e jne 0x114de295 */
  if (!C.zf) goto L_114de295;
  /* 114de290 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114de293 jmp 0x114de2da */
  goto L_114de2da;
L_114de295:;
  /* 114de295 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de297 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de29c push edx */
  push32((uint32_t)(EDX));
  /* 114de29d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de2a0 push eax */
  push32((uint32_t)(EAX));
  /* 114de2a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114de2a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de2a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114de2a8 push edx */
  push32((uint32_t)(EDX));
  /* 114de2a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de2ab push 1 */
  push32((uint32_t)(0x1u));
  /* 114de2ad call dword ptr [0x115013b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115013b0))), 0x114de2b3u);
  /* 114de2b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114de2b5 jne 0x114de2bc */
  if (!C.zf) goto L_114de2bc;
  /* 114de2b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114de2ba jmp 0x114de2da */
  goto L_114de2da;
L_114de2bc:;
  /* 114de2bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114de2be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de2c1 push eax */
  push32((uint32_t)(EAX));
  /* 114de2c2 call 0x114e0460 */
  push32(0x114de2c7u); f_114e0460();
  /* 114de2c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de2ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de2cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de2d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114de2d3 jmp 0x114de23e */
  goto L_114de23e;
L_114de2d8:;
  /* 114de2d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114de2da:;
  /* 114de2da mov esp, ebp */
  ESP = (EBP);
  /* 114de2dc pop ebp */
  EBP = (pop32());
  /* 114de2dd ret  */
  ESPCHK(0x114de230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e2e0 @ 0x114de2e0 (289 bytes, 97 insns) */
void f_114de2e0(void) {
  FTRACE(0x114de2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114de2e1 mov ebp, esp */
  EBP = (ESP);
  /* 114de2e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de2e6 push esi */
  push32((uint32_t)(ESI));
  /* 114de2e7 mov eax, dword ptr [0x114fe330] */
  EAX = (r32((uint32_t)(0x114fe330)));
  /* 114de2ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114de2ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114de2f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de2fd jmp 0x114de308 */
  goto L_114de308;
L_114de2ff:;
  /* 114de2ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de305 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114de308:;
  /* 114de308 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de30c jae 0x114de341 */
  if (!C.cf) goto L_114de341;
  /* 114de30e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de311 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de314 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114de317 push ecx */
  push32((uint32_t)(ECX));
  /* 114de318 call 0x114d0fb0 */
  push32(0x114de31du); f_114d0fb0();
  /* 114de31d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de320 mov esi, eax */
  ESI = (EAX);
  /* 114de322 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de325 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de328 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 114de32c push ecx */
  push32((uint32_t)(ECX));
  /* 114de32d call 0x114d0fb0 */
  push32(0x114de332u); f_114d0fb0();
  /* 114de332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de335 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de338 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114de33c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114de33f jmp 0x114de2ff */
  goto L_114de2ff;
L_114de341:;
  /* 114de341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de347 push eax */
  push32((uint32_t)(EAX));
  /* 114de348 call 0x114cb8e0 */
  push32(0x114de34du); f_114cb8e0();
  /* 114de34d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de350 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de353 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de357 je 0x114de3f9 */
  if (C.zf) goto L_114de3f9;
  /* 114de35d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de360 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de363 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de36a jmp 0x114de375 */
  goto L_114de375;
L_114de36c:;
  /* 114de36c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de36f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de372 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114de375:;
  /* 114de375 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de379 jae 0x114de3ea */
  if (!C.cf) goto L_114de3ea;
  /* 114de37b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de37e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 114de381 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de384 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de387 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de38a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de38d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de390 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114de393 push ecx */
  push32((uint32_t)(ECX));
  /* 114de394 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de397 push edx */
  push32((uint32_t)(EDX));
  /* 114de398 call 0x114d1130 */
  push32(0x114de39du); f_114d1130();
  /* 114de39d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3a0 push eax */
  push32((uint32_t)(EAX));
  /* 114de3a1 call 0x114d0fb0 */
  push32(0x114de3a6u); f_114d0fb0();
  /* 114de3a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de3b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 114de3b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de3c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de3c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de3c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 114de3ca push eax */
  push32((uint32_t)(EAX));
  /* 114de3cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3ce push ecx */
  push32((uint32_t)(ECX));
  /* 114de3cf call 0x114d1130 */
  push32(0x114de3d4u); f_114d1130();
  /* 114de3d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3d7 push eax */
  push32((uint32_t)(EAX));
  /* 114de3d8 call 0x114d0fb0 */
  push32(0x114de3ddu); f_114d0fb0();
  /* 114de3dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de3e8 jmp 0x114de36c */
  goto L_114de36c;
L_114de3ea:;
  /* 114de3ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114de3f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de3f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de3f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114de3f9:;
  /* 114de3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de3fc pop esi */
  ESI = (pop32());
  /* 114de3fd mov esp, ebp */
  ESP = (EBP);
  /* 114de3ff pop ebp */
  EBP = (pop32());
  /* 114de400 ret  */
  ESPCHK(0x114de2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e410 @ 0x114de410 (291 bytes, 97 insns) */
void f_114de410(void) {
  FTRACE(0x114de410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de410 push ebp */
  push32((uint32_t)(EBP));
  /* 114de411 mov ebp, esp */
  EBP = (ESP);
  /* 114de413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de416 push esi */
  push32((uint32_t)(ESI));
  /* 114de417 mov eax, dword ptr [0x114fe330] */
  EAX = (r32((uint32_t)(0x114fe330)));
  /* 114de41c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114de41f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114de426 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de42d jmp 0x114de438 */
  goto L_114de438;
L_114de42f:;
  /* 114de42f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de432 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de435 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114de438:;
  /* 114de438 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de43c jae 0x114de472 */
  if (!C.cf) goto L_114de472;
  /* 114de43e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de444 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 114de448 push ecx */
  push32((uint32_t)(ECX));
  /* 114de449 call 0x114d0fb0 */
  push32(0x114de44eu); f_114d0fb0();
  /* 114de44e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de451 mov esi, eax */
  ESI = (EAX);
  /* 114de453 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de456 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de459 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 114de45d push ecx */
  push32((uint32_t)(ECX));
  /* 114de45e call 0x114d0fb0 */
  push32(0x114de463u); f_114d0fb0();
  /* 114de463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de466 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de469 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114de46d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114de470 jmp 0x114de42f */
  goto L_114de42f;
L_114de472:;
  /* 114de472 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de475 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de478 push eax */
  push32((uint32_t)(EAX));
  /* 114de479 call 0x114cb8e0 */
  push32(0x114de47eu); f_114cb8e0();
  /* 114de47e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de481 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de484 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de488 je 0x114de52b */
  if (C.zf) goto L_114de52b;
  /* 114de48e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de491 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de494 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de49b jmp 0x114de4a6 */
  goto L_114de4a6;
L_114de49d:;
  /* 114de49d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de4a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114de4a6:;
  /* 114de4a6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de4aa jae 0x114de51c */
  if (!C.cf) goto L_114de51c;
  /* 114de4ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4af mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 114de4b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de4bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de4be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de4c1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 114de4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114de4c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4c9 push edx */
  push32((uint32_t)(EDX));
  /* 114de4ca call 0x114d1130 */
  push32(0x114de4cfu); f_114d1130();
  /* 114de4cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4d2 push eax */
  push32((uint32_t)(EAX));
  /* 114de4d3 call 0x114d0fb0 */
  push32(0x114de4d8u); f_114d0fb0();
  /* 114de4d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 114de4e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4e6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 114de4e9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de4ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de4ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de4f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de4f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de4f8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114de4fc push eax */
  push32((uint32_t)(EAX));
  /* 114de4fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de500 push ecx */
  push32((uint32_t)(ECX));
  /* 114de501 call 0x114d1130 */
  push32(0x114de506u); f_114d1130();
  /* 114de506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de509 push eax */
  push32((uint32_t)(EAX));
  /* 114de50a call 0x114d0fb0 */
  push32(0x114de50fu); f_114d0fb0();
  /* 114de50f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de512 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de515 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de517 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de51a jmp 0x114de49d */
  goto L_114de49d;
L_114de51c:;
  /* 114de51c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de51f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114de522 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de528 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_114de52b:;
  /* 114de52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de52e pop esi */
  ESI = (pop32());
  /* 114de52f mov esp, ebp */
  ESP = (EBP);
  /* 114de531 pop ebp */
  EBP = (pop32());
  /* 114de532 ret  */
  ESPCHK(0x114de410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e540 @ 0x114de540 (878 bytes, 273 insns) */
void f_114de540(void) {
  FTRACE(0x114de540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de540 push ebp */
  push32((uint32_t)(EBP));
  /* 114de541 mov ebp, esp */
  EBP = (ESP);
  /* 114de543 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de546 push esi */
  push32((uint32_t)(ESI));
  /* 114de547 mov eax, dword ptr [0x114fe330] */
  EAX = (r32((uint32_t)(0x114fe330)));
  /* 114de54c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114de54f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114de556 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de55d jmp 0x114de568 */
  goto L_114de568;
L_114de55f:;
  /* 114de55f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de562 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de565 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114de568:;
  /* 114de568 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de56c jae 0x114de5a1 */
  if (!C.cf) goto L_114de5a1;
  /* 114de56e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de571 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de574 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114de577 push ecx */
  push32((uint32_t)(ECX));
  /* 114de578 call 0x114d0fb0 */
  push32(0x114de57du); f_114d0fb0();
  /* 114de57d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de580 mov esi, eax */
  ESI = (EAX);
  /* 114de582 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de585 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de588 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 114de58c push ecx */
  push32((uint32_t)(ECX));
  /* 114de58d call 0x114d0fb0 */
  push32(0x114de592u); f_114d0fb0();
  /* 114de592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de595 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de598 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114de59c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114de59f jmp 0x114de55f */
  goto L_114de55f;
L_114de5a1:;
  /* 114de5a1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de5a8 jmp 0x114de5b3 */
  goto L_114de5b3;
L_114de5aa:;
  /* 114de5aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de5ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de5b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114de5b3:;
  /* 114de5b3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de5b7 jae 0x114de5ed */
  if (!C.cf) goto L_114de5ed;
  /* 114de5b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de5bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de5bf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 114de5c3 push eax */
  push32((uint32_t)(EAX));
  /* 114de5c4 call 0x114d0fb0 */
  push32(0x114de5c9u); f_114d0fb0();
  /* 114de5c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de5cc mov esi, eax */
  ESI = (EAX);
  /* 114de5ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de5d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de5d4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114de5d8 push eax */
  push32((uint32_t)(EAX));
  /* 114de5d9 call 0x114d0fb0 */
  push32(0x114de5deu); f_114d0fb0();
  /* 114de5de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de5e1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de5e4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114de5e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114de5eb jmp 0x114de5aa */
  goto L_114de5aa;
L_114de5ed:;
  /* 114de5ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de5f0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 114de5f6 push eax */
  push32((uint32_t)(EAX));
  /* 114de5f7 call 0x114d0fb0 */
  push32(0x114de5fcu); f_114d0fb0();
  /* 114de5fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de5ff mov esi, eax */
  ESI = (EAX);
  /* 114de601 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de604 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 114de60a push edx */
  push32((uint32_t)(EDX));
  /* 114de60b call 0x114d0fb0 */
  push32(0x114de610u); f_114d0fb0();
  /* 114de610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de613 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de616 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 114de61a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114de61d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de620 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 114de626 push edx */
  push32((uint32_t)(EDX));
  /* 114de627 call 0x114d0fb0 */
  push32(0x114de62cu); f_114d0fb0();
  /* 114de62c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de62f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de632 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de636 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114de639 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de63c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 114de642 push ecx */
  push32((uint32_t)(ECX));
  /* 114de643 call 0x114d0fb0 */
  push32(0x114de648u); f_114d0fb0();
  /* 114de648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de64b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de64e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114de652 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114de655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de658 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 114de65e push edx */
  push32((uint32_t)(EDX));
  /* 114de65f call 0x114d0fb0 */
  push32(0x114de664u); f_114d0fb0();
  /* 114de664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de66a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de66e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114de671 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114de674 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de679 push eax */
  push32((uint32_t)(EAX));
  /* 114de67a call 0x114cb8e0 */
  push32(0x114de67fu); f_114cb8e0();
  /* 114de67f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114de685 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de689 je 0x114de8a6 */
  if (C.zf) goto L_114de8a6;
  /* 114de68f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de692 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114de695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de698 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de69e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de6a1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 114de6a6 mov eax, dword ptr [0x114fe330] */
  EAX = (r32((uint32_t)(0x114fe330)));
  /* 114de6ab push eax */
  push32((uint32_t)(EAX));
  /* 114de6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de6af push ecx */
  push32((uint32_t)(ECX));
  /* 114de6b0 call 0x114d7370 */
  push32(0x114de6b5u); f_114d7370();
  /* 114de6b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de6b8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de6bf jmp 0x114de6ca */
  goto L_114de6ca;
L_114de6c1:;
  /* 114de6c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de6c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de6c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_114de6ca:;
  /* 114de6ca cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de6ce jae 0x114de73e */
  if (!C.cf) goto L_114de73e;
  /* 114de6d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de6d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de6d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de6d9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 114de6dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de6df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de6e2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114de6e5 push edx */
  push32((uint32_t)(EDX));
  /* 114de6e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de6e9 push eax */
  push32((uint32_t)(EAX));
  /* 114de6ea call 0x114d1130 */
  push32(0x114de6efu); f_114d1130();
  /* 114de6ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de6f2 push eax */
  push32((uint32_t)(EAX));
  /* 114de6f3 call 0x114d0fb0 */
  push32(0x114de6f8u); f_114d0fb0();
  /* 114de6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de6fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de6fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de702 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de705 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de708 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de70b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de70e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 114de712 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de718 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 114de71c push edx */
  push32((uint32_t)(EDX));
  /* 114de71d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de720 push eax */
  push32((uint32_t)(EAX));
  /* 114de721 call 0x114d1130 */
  push32(0x114de726u); f_114d1130();
  /* 114de726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de729 push eax */
  push32((uint32_t)(EAX));
  /* 114de72a call 0x114d0fb0 */
  push32(0x114de72fu); f_114d0fb0();
  /* 114de72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de732 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de735 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de739 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de73c jmp 0x114de6c1 */
  goto L_114de6c1;
L_114de73e:;
  /* 114de73e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 114de745 jmp 0x114de750 */
  goto L_114de750;
L_114de747:;
  /* 114de747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de74a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de74d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114de750:;
  /* 114de750 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de754 jae 0x114de7c6 */
  if (!C.cf) goto L_114de7c6;
  /* 114de756 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de759 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de75c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de75f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 114de763 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de766 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de769 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 114de76d push eax */
  push32((uint32_t)(EAX));
  /* 114de76e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de771 push ecx */
  push32((uint32_t)(ECX));
  /* 114de772 call 0x114d1130 */
  push32(0x114de777u); f_114d1130();
  /* 114de777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de77a push eax */
  push32((uint32_t)(EAX));
  /* 114de77b call 0x114d0fb0 */
  push32(0x114de780u); f_114d0fb0();
  /* 114de780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de783 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de786 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114de78a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de78d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de790 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de793 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de796 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 114de79a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de79d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de7a0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114de7a4 push eax */
  push32((uint32_t)(EAX));
  /* 114de7a5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de7a8 push ecx */
  push32((uint32_t)(ECX));
  /* 114de7a9 call 0x114d1130 */
  push32(0x114de7aeu); f_114d1130();
  /* 114de7ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de7b1 push eax */
  push32((uint32_t)(EAX));
  /* 114de7b2 call 0x114d0fb0 */
  push32(0x114de7b7u); f_114d0fb0();
  /* 114de7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de7ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de7bd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114de7c1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de7c4 jmp 0x114de747 */
  goto L_114de747;
L_114de7c6:;
  /* 114de7c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de7c9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de7cc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 114de7d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de7d5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 114de7db push ecx */
  push32((uint32_t)(ECX));
  /* 114de7dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de7df push edx */
  push32((uint32_t)(EDX));
  /* 114de7e0 call 0x114d1130 */
  push32(0x114de7e5u); f_114d1130();
  /* 114de7e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de7e8 push eax */
  push32((uint32_t)(EAX));
  /* 114de7e9 call 0x114d0fb0 */
  push32(0x114de7eeu); f_114d0fb0();
  /* 114de7ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de7f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de7f4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de7f8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de7fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de7fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de801 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 114de807 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de80a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 114de810 push eax */
  push32((uint32_t)(EAX));
  /* 114de811 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de814 push ecx */
  push32((uint32_t)(ECX));
  /* 114de815 call 0x114d1130 */
  push32(0x114de81au); f_114d1130();
  /* 114de81a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de81d push eax */
  push32((uint32_t)(EAX));
  /* 114de81e call 0x114d0fb0 */
  push32(0x114de823u); f_114d0fb0();
  /* 114de823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de826 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de829 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114de82d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de830 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de836 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 114de83c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de83f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 114de845 push ecx */
  push32((uint32_t)(ECX));
  /* 114de846 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de849 push edx */
  push32((uint32_t)(EDX));
  /* 114de84a call 0x114d1130 */
  push32(0x114de84fu); f_114d1130();
  /* 114de84f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de852 push eax */
  push32((uint32_t)(EAX));
  /* 114de853 call 0x114d0fb0 */
  push32(0x114de858u); f_114d0fb0();
  /* 114de858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de85b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de85e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 114de862 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114de865 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de868 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de86b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 114de871 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de874 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 114de87a push eax */
  push32((uint32_t)(EAX));
  /* 114de87b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de87e push ecx */
  push32((uint32_t)(ECX));
  /* 114de87f call 0x114d1130 */
  push32(0x114de884u); f_114d1130();
  /* 114de884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de887 push eax */
  push32((uint32_t)(EAX));
  /* 114de888 call 0x114d0fb0 */
  push32(0x114de88du); f_114d0fb0();
  /* 114de88d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de890 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de893 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 114de897 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114de89a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114de89d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114de8a0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_114de8a6:;
  /* 114de8a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de8a9 pop esi */
  ESI = (pop32());
  /* 114de8aa mov esp, ebp */
  ESP = (EBP);
  /* 114de8ac pop ebp */
  EBP = (pop32());
  /* 114de8ad ret  */
  ESPCHK(0x114de540u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8b0 @ 0x114de8b0 (31 bytes, 15 insns) */
void f_114de8b0(void) {
  FTRACE(0x114de8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114de8b1 mov ebp, esp */
  EBP = (ESP);
  /* 114de8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114de8b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114de8b8 push eax */
  push32((uint32_t)(EAX));
  /* 114de8b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de8bc push ecx */
  push32((uint32_t)(ECX));
  /* 114de8bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114de8c0 push edx */
  push32((uint32_t)(EDX));
  /* 114de8c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de8c4 push eax */
  push32((uint32_t)(EAX));
  /* 114de8c5 call 0x114de8d0 */
  push32(0x114de8cau); f_114de8d0();
  /* 114de8ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de8cd pop ebp */
  EBP = (pop32());
  /* 114de8ce ret  */
  ESPCHK(0x114de8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8d0 @ 0x114de8d0 (393 bytes, 123 insns) */
void f_114de8d0(void) {
  FTRACE(0x114de8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114de8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114de8d1 mov ebp, esp */
  EBP = (ESP);
  /* 114de8d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de8d6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de8da jne 0x114de8e6 */
  if (!C.zf) goto L_114de8e6;
  /* 114de8dc mov eax, dword ptr [0x114fe330] */
  EAX = (r32((uint32_t)(0x114fe330)));
  /* 114de8e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114de8e4 jmp 0x114de8ec */
  goto L_114de8ec;
L_114de8e6:;
  /* 114de8e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114de8e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_114de8ec:;
  /* 114de8ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114de8ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114de8f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114de8f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114de8f8 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114de8fd call dword ptr [0x11501430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501430))), 0x114de903u);
  /* 114de903 cmp dword ptr [0x114ff4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de90a je 0x114de92a */
  if (C.zf) goto L_114de92a;
  /* 114de90c push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114de911 call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114de917u);
  /* 114de917 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114de919 call 0x114cb800 */
  push32(0x114de91eu); f_114cb800();
  /* 114de91e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de921 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114de928 jmp 0x114de931 */
  goto L_114de931;
L_114de92a:;
  /* 114de92a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_114de931:;
  /* 114de931 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de935 jbe 0x114dea22 */
  if ((C.cf||C.zf)) goto L_114dea22;
  /* 114de93b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de93e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114de940 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 114de943 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114de947 je 0x114de951 */
  if (C.zf) goto L_114de951;
  /* 114de949 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114de94d je 0x114de956 */
  if (C.zf) goto L_114de956;
  /* 114de94f jmp 0x114de9b0 */
  goto L_114de9b0;
L_114de951:;
  /* 114de951 jmp 0x114dea22 */
  goto L_114dea22;
L_114de956:;
  /* 114de956 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de95c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 114de95f mov dword ptr [0x114ff4a4], 0 */
  w32((uint32_t)(0x114ff4a4), (0x0u));
  /* 114de969 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de96c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114de96f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de972 jne 0x114de987 */
  if (!C.zf) goto L_114de987;
  /* 114de974 mov dword ptr [0x114ff4a4], 1 */
  w32((uint32_t)(0x114ff4a4), (0x1u));
  /* 114de97e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de984 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_114de987:;
  /* 114de987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114de98a push ecx */
  push32((uint32_t)(ECX));
  /* 114de98b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 114de98e push edx */
  push32((uint32_t)(EDX));
  /* 114de98f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 114de992 push eax */
  push32((uint32_t)(EAX));
  /* 114de993 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114de996 push ecx */
  push32((uint32_t)(ECX));
  /* 114de997 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de99a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114de99c push eax */
  push32((uint32_t)(EAX));
  /* 114de99d call 0x114dea60 */
  push32(0x114de9a2u); f_114dea60();
  /* 114de9a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114de9a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de9a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de9ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114de9ae jmp 0x114dea1d */
  goto L_114dea1d;
L_114de9b0:;
  /* 114de9b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114de9b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114de9b7 mov ecx, dword ptr [0x114fd04c] */
  ECX = (r32((uint32_t)(0x114fd04c)));
  /* 114de9bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114de9bf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 114de9c3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 114de9c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114de9cb je 0x114de9f8 */
  if (C.zf) goto L_114de9f8;
  /* 114de9cd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114de9d1 jbe 0x114de9f8 */
  if ((C.cf||C.zf)) goto L_114de9f8;
  /* 114de9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de9d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de9d9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114de9db mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114de9dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de9e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de9e3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114de9e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de9e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114de9ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114de9ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114de9f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114de9f5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114de9f8:;
  /* 114de9f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114de9fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114de9fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114dea00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114dea02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dea05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dea08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114dea0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dea0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dea11 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114dea14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dea17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dea1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_114dea1d:;
  /* 114dea1d jmp 0x114de931 */
  goto L_114de931;
L_114dea22:;
  /* 114dea22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dea26 je 0x114dea34 */
  if (C.zf) goto L_114dea34;
  /* 114dea28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 114dea2a call 0x114cb8a0 */
  push32(0x114dea2fu); f_114cb8a0();
  /* 114dea2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dea32 jmp 0x114dea3f */
  goto L_114dea3f;
L_114dea34:;
  /* 114dea34 push 0x114ff4c8 */
  push32((uint32_t)(0x114ff4c8u));
  /* 114dea39 call dword ptr [0x11501420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11501420))), 0x114dea3fu);
L_114dea3f:;
  /* 114dea3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dea43 jbe 0x114dea53 */
  if ((C.cf||C.zf)) goto L_114dea53;
  /* 114dea45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114dea48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 114dea4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dea4e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dea51 jmp 0x114dea55 */
  goto L_114dea55;
L_114dea53:;
  /* 114dea53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114dea55:;
  /* 114dea55 mov esp, ebp */
  ESP = (EBP);
  /* 114dea57 pop ebp */
  EBP = (pop32());
  /* 114dea58 ret  */
  ESPCHK(0x114de8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ea60 @ 0x114dea60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_114dea60(void) {
  FTRACE(0x114dea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114dea60 push ebp */
  push32((uint32_t)(EBP));
  /* 114dea61 mov ebp, esp */
  EBP = (ESP);
  /* 114dea63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dea66 push esi */
  push32((uint32_t)(ESI));
  /* 114dea67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 114dea6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114dea6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dea71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dea74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114dea77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dea7b ja 0x114defc8 */
  if ((!C.cf&&!C.zf)) goto L_114defc8;
  /* 114dea81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114dea84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114dea86 mov dl, byte ptr [eax + 0x114df029] */
  DL = (r8((uint32_t)(EAX + 0x114df029)));
  /* 114dea8c jmp dword ptr [edx*4 + 0x114defcd] */
  switch (EDX) {
    case 0: goto L_114defa6;
    case 1: goto L_114deab5;
    case 2: goto L_114deafb;
    case 3: goto L_114dec48;
    case 4: goto L_114dec70;
    case 5: goto L_114ded0f;
    case 6: goto L_114ded7b;
    case 7: goto L_114deda4;
    case 8: goto L_114dede5;
    case 9: goto L_114deec7;
    case 10: goto L_114def2e;
    case 11: goto L_114def7b;
    case 12: goto L_114dea93;
    case 13: goto L_114dead8;
    case 14: goto L_114deb1e;
    case 15: goto L_114dec1e;
    case 16: goto L_114decb5;
    case 17: goto L_114dece2;
    case 18: goto L_114ded37;
    case 19: goto L_114dedbb;
    case 20: goto L_114dee69;
    case 21: goto L_114deef8;
    case 22: goto L_114defc8;
    default: x86_unimpl("switch@0x114dea8c out of table"); return;
  }
L_114dea93:;
  /* 114dea93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dea96 push ecx */
  push32((uint32_t)(ECX));
  /* 114dea97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dea9a push edx */
  push32((uint32_t)(EDX));
  /* 114dea9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dea9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114deaa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deaa4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114deaa7 push eax */
  push32((uint32_t)(EAX));
  /* 114deaa8 call 0x114df080 */
  push32(0x114deaadu); f_114df080();
  /* 114deaad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deab0 jmp 0x114defc8 */
  goto L_114defc8;
L_114deab5:;
  /* 114deab5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deab8 push ecx */
  push32((uint32_t)(ECX));
  /* 114deab9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deabc push edx */
  push32((uint32_t)(EDX));
  /* 114deabd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deac0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114deac3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deac6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 114deaca push eax */
  push32((uint32_t)(EAX));
  /* 114deacb call 0x114df080 */
  push32(0x114dead0u); f_114df080();
  /* 114dead0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dead3 jmp 0x114defc8 */
  goto L_114defc8;
L_114dead8:;
  /* 114dead8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deadb push ecx */
  push32((uint32_t)(ECX));
  /* 114deadc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deadf push edx */
  push32((uint32_t)(EDX));
  /* 114deae0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deae3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114deae6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deae9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 114deaed push eax */
  push32((uint32_t)(EAX));
  /* 114deaee call 0x114df080 */
  push32(0x114deaf3u); f_114df080();
  /* 114deaf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deaf6 jmp 0x114defc8 */
  goto L_114defc8;
L_114deafb:;
  /* 114deafb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deafe push ecx */
  push32((uint32_t)(ECX));
  /* 114deaff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb02 push edx */
  push32((uint32_t)(EDX));
  /* 114deb03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deb06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114deb09 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deb0c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 114deb10 push eax */
  push32((uint32_t)(EAX));
  /* 114deb11 call 0x114df080 */
  push32(0x114deb16u); f_114df080();
  /* 114deb16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deb19 jmp 0x114defc8 */
  goto L_114defc8;
L_114deb1e:;
  /* 114deb1e cmp dword ptr [0x114ff4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114deb25 je 0x114deba6 */
  if (C.zf) goto L_114deba6;
  /* 114deb27 mov dword ptr [0x114ff4a4], 0 */
  w32((uint32_t)(0x114ff4a4), (0x0u));
  /* 114deb31 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deb34 push ecx */
  push32((uint32_t)(ECX));
  /* 114deb35 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deb38 push edx */
  push32((uint32_t)(EDX));
  /* 114deb39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb3c push eax */
  push32((uint32_t)(EAX));
  /* 114deb3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deb40 push ecx */
  push32((uint32_t)(ECX));
  /* 114deb41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deb44 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 114deb4a push eax */
  push32((uint32_t)(EAX));
  /* 114deb4b call 0x114df230 */
  push32(0x114deb50u); f_114df230();
  /* 114deb50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deb53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deb56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114deb59 jne 0x114deb60 */
  if (!C.zf) goto L_114deb60;
  /* 114deb5b jmp 0x114defc8 */
  goto L_114defc8;
L_114deb60:;
  /* 114deb60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114deb65 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 114deb68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114deb6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114deb70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114deb75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deb78 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114deb7a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114deb7d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deb80 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114deb82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deb85 push ecx */
  push32((uint32_t)(ECX));
  /* 114deb86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deb89 push edx */
  push32((uint32_t)(EDX));
  /* 114deb8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deb8d push eax */
  push32((uint32_t)(EAX));
  /* 114deb8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deb91 push ecx */
  push32((uint32_t)(ECX));
  /* 114deb92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deb95 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 114deb9b push eax */
  push32((uint32_t)(EAX));
  /* 114deb9c call 0x114df230 */
  push32(0x114deba1u); f_114df230();
  /* 114deba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deba4 jmp 0x114dec19 */
  goto L_114dec19;
L_114deba6:;
  /* 114deba6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deba9 push ecx */
  push32((uint32_t)(ECX));
  /* 114debaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114debad push edx */
  push32((uint32_t)(EDX));
  /* 114debae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114debb1 push eax */
  push32((uint32_t)(EAX));
  /* 114debb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114debb5 push ecx */
  push32((uint32_t)(ECX));
  /* 114debb6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114debb9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 114debbf push eax */
  push32((uint32_t)(EAX));
  /* 114debc0 call 0x114df230 */
  push32(0x114debc5u); f_114df230();
  /* 114debc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114debc8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114debcb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114debce jne 0x114debd5 */
  if (!C.zf) goto L_114debd5;
  /* 114debd0 jmp 0x114defc8 */
  goto L_114defc8;
L_114debd5:;
  /* 114debd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114debd8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114debda mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 114debdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114debe0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114debe2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114debe5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114debe8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114debea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114debed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114debef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114debf2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114debf5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114debf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114debfa push ecx */
  push32((uint32_t)(ECX));
  /* 114debfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114debfe push edx */
  push32((uint32_t)(EDX));
  /* 114debff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dec02 push eax */
  push32((uint32_t)(EAX));
  /* 114dec03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dec06 push ecx */
  push32((uint32_t)(ECX));
  /* 114dec07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114dec0a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 114dec10 push eax */
  push32((uint32_t)(EAX));
  /* 114dec11 call 0x114df230 */
  push32(0x114dec16u); f_114df230();
  /* 114dec16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114dec19:;
  /* 114dec19 jmp 0x114defc8 */
  goto L_114defc8;
L_114dec1e:;
  /* 114dec1e mov ecx, dword ptr [0x114ff4a4] */
  ECX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dec24 mov dword ptr [0x114ff4b4], ecx */
  w32((uint32_t)(0x114ff4b4), (ECX));
  /* 114dec2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dec2d push edx */
  push32((uint32_t)(EDX));
  /* 114dec2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dec31 push eax */
  push32((uint32_t)(EAX));
  /* 114dec32 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dec34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dec37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114dec3a push edx */
  push32((uint32_t)(EDX));
  /* 114dec3b call 0x114df0d0 */
  push32(0x114dec40u); f_114df0d0();
  /* 114dec40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dec43 jmp 0x114defc8 */
  goto L_114defc8;
L_114dec48:;
  /* 114dec48 mov eax, dword ptr [0x114ff4a4] */
  EAX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dec4d mov dword ptr [0x114ff4b4], eax */
  w32((uint32_t)(0x114ff4b4), (EAX));
  /* 114dec52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dec55 push ecx */
  push32((uint32_t)(ECX));
  /* 114dec56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dec59 push edx */
  push32((uint32_t)(EDX));
  /* 114dec5a push 2 */
  push32((uint32_t)(0x2u));
  /* 114dec5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dec5f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114dec62 push ecx */
  push32((uint32_t)(ECX));
  /* 114dec63 call 0x114df0d0 */
  push32(0x114dec68u); f_114df0d0();
  /* 114dec68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dec6b jmp 0x114defc8 */
  goto L_114defc8;
L_114dec70:;
  /* 114dec70 mov edx, dword ptr [0x114ff4a4] */
  EDX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dec76 mov dword ptr [0x114ff4b4], edx */
  w32((uint32_t)(0x114ff4b4), (EDX));
  /* 114dec7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dec7f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 114dec82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114dec83 mov ecx, 0xc */
  ECX = (0xcu);
  /* 114dec88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114dec8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114dec8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dec91 jne 0x114dec9a */
  if (!C.zf) goto L_114dec9a;
  /* 114dec93 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_114dec9a:;
  /* 114dec9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dec9d push edx */
  push32((uint32_t)(EDX));
  /* 114dec9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deca1 push eax */
  push32((uint32_t)(EAX));
  /* 114deca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114deca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114deca7 push ecx */
  push32((uint32_t)(ECX));
  /* 114deca8 call 0x114df0d0 */
  push32(0x114decadu); f_114df0d0();
  /* 114decad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114decb0 jmp 0x114defc8 */
  goto L_114defc8;
L_114decb5:;
  /* 114decb5 mov edx, dword ptr [0x114ff4a4] */
  EDX = (r32((uint32_t)(0x114ff4a4)));
  /* 114decbb mov dword ptr [0x114ff4b4], edx */
  w32((uint32_t)(0x114ff4b4), (EDX));
  /* 114decc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114decc4 push eax */
  push32((uint32_t)(EAX));
  /* 114decc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114decc8 push ecx */
  push32((uint32_t)(ECX));
  /* 114decc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 114deccb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114decce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114decd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114decd4 push eax */
  push32((uint32_t)(EAX));
  /* 114decd5 call 0x114df0d0 */
  push32(0x114decdau); f_114df0d0();
  /* 114decda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114decdd jmp 0x114defc8 */
  goto L_114defc8;
L_114dece2:;
  /* 114dece2 mov ecx, dword ptr [0x114ff4a4] */
  ECX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dece8 mov dword ptr [0x114ff4b4], ecx */
  w32((uint32_t)(0x114ff4b4), (ECX));
  /* 114decee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114decf1 push edx */
  push32((uint32_t)(EDX));
  /* 114decf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114decf5 push eax */
  push32((uint32_t)(EAX));
  /* 114decf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114decf8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114decfb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114decfe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114ded01 push edx */
  push32((uint32_t)(EDX));
  /* 114ded02 call 0x114df0d0 */
  push32(0x114ded07u); f_114df0d0();
  /* 114ded07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ded0a jmp 0x114defc8 */
  goto L_114defc8;
L_114ded0f:;
  /* 114ded0f mov eax, dword ptr [0x114ff4a4] */
  EAX = (r32((uint32_t)(0x114ff4a4)));
  /* 114ded14 mov dword ptr [0x114ff4b4], eax */
  w32((uint32_t)(0x114ff4b4), (EAX));
  /* 114ded19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ded1c push ecx */
  push32((uint32_t)(ECX));
  /* 114ded1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ded20 push edx */
  push32((uint32_t)(EDX));
  /* 114ded21 push 2 */
  push32((uint32_t)(0x2u));
  /* 114ded23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ded26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 114ded29 push ecx */
  push32((uint32_t)(ECX));
  /* 114ded2a call 0x114df0d0 */
  push32(0x114ded2fu); f_114df0d0();
  /* 114ded2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ded32 jmp 0x114defc8 */
  goto L_114defc8;
L_114ded37:;
  /* 114ded37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ded3a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114ded3e jg 0x114ded5c */
  if ((!C.zf&&C.sf==C.of)) goto L_114ded5c;
  /* 114ded40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ded43 push eax */
  push32((uint32_t)(EAX));
  /* 114ded44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ded47 push ecx */
  push32((uint32_t)(ECX));
  /* 114ded48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ded4b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 114ded51 push eax */
  push32((uint32_t)(EAX));
  /* 114ded52 call 0x114df080 */
  push32(0x114ded57u); f_114df080();
  /* 114ded57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ded5a jmp 0x114ded76 */
  goto L_114ded76;
L_114ded5c:;
  /* 114ded5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ded5f push ecx */
  push32((uint32_t)(ECX));
  /* 114ded60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ded63 push edx */
  push32((uint32_t)(EDX));
  /* 114ded64 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114ded67 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 114ded6d push ecx */
  push32((uint32_t)(ECX));
  /* 114ded6e call 0x114df080 */
  push32(0x114ded73u); f_114df080();
  /* 114ded73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114ded76:;
  /* 114ded76 jmp 0x114defc8 */
  goto L_114defc8;
L_114ded7b:;
  /* 114ded7b mov edx, dword ptr [0x114ff4a4] */
  EDX = (r32((uint32_t)(0x114ff4a4)));
  /* 114ded81 mov dword ptr [0x114ff4b4], edx */
  w32((uint32_t)(0x114ff4b4), (EDX));
  /* 114ded87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114ded8a push eax */
  push32((uint32_t)(EAX));
  /* 114ded8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114ded8e push ecx */
  push32((uint32_t)(ECX));
  /* 114ded8f push 2 */
  push32((uint32_t)(0x2u));
  /* 114ded91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114ded94 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114ded96 push eax */
  push32((uint32_t)(EAX));
  /* 114ded97 call 0x114df0d0 */
  push32(0x114ded9cu); f_114df0d0();
  /* 114ded9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114ded9f jmp 0x114defc8 */
  goto L_114defc8;
L_114deda4:;
  /* 114deda4 mov ecx, dword ptr [0x114ff4a4] */
  ECX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dedaa mov dword ptr [0x114ff4b4], ecx */
  w32((uint32_t)(0x114ff4b4), (ECX));
  /* 114dedb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dedb3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114dedb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114dedb9 jmp 0x114dee0d */
  goto L_114dee0d;
L_114dedbb:;
  /* 114dedbb mov ecx, dword ptr [0x114ff4a4] */
  ECX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dedc1 mov dword ptr [0x114ff4b4], ecx */
  w32((uint32_t)(0x114ff4b4), (ECX));
  /* 114dedc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dedca push edx */
  push32((uint32_t)(EDX));
  /* 114dedcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dedce push eax */
  push32((uint32_t)(EAX));
  /* 114dedcf push 1 */
  push32((uint32_t)(0x1u));
  /* 114dedd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dedd4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114dedd7 push edx */
  push32((uint32_t)(EDX));
  /* 114dedd8 call 0x114df0d0 */
  push32(0x114dedddu); f_114df0d0();
  /* 114deddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dede0 jmp 0x114defc8 */
  goto L_114defc8;
L_114dede5:;
  /* 114dede5 mov eax, dword ptr [0x114ff4a4] */
  EAX = (r32((uint32_t)(0x114ff4a4)));
  /* 114dedea mov dword ptr [0x114ff4b4], eax */
  w32((uint32_t)(0x114ff4b4), (EAX));
  /* 114dedef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dedf2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dedf6 jne 0x114dee01 */
  if (!C.zf) goto L_114dee01;
  /* 114dedf8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 114dedff jmp 0x114dee0d */
  goto L_114dee0d;
L_114dee01:;
  /* 114dee01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dee04 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 114dee07 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114dee0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114dee0d:;
  /* 114dee0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dee10 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 114dee13 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dee16 jge 0x114dee21 */
  if ((C.sf==C.of)) goto L_114dee21;
  /* 114dee18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114dee1f jmp 0x114dee4e */
  goto L_114dee4e;
L_114dee21:;
  /* 114dee21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dee24 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114dee27 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114dee28 mov ecx, 7 */
  ECX = (0x7u);
  /* 114dee2d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114dee2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114dee32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dee35 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 114dee38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114dee39 mov ecx, 7 */
  ECX = (0x7u);
  /* 114dee3e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114dee40 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dee43 jl 0x114dee4e */
  if ((C.sf!=C.of)) goto L_114dee4e;
  /* 114dee45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dee48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114dee4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114dee4e:;
  /* 114dee4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dee51 push eax */
  push32((uint32_t)(EAX));
  /* 114dee52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dee55 push ecx */
  push32((uint32_t)(ECX));
  /* 114dee56 push 2 */
  push32((uint32_t)(0x2u));
  /* 114dee58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114dee5b push edx */
  push32((uint32_t)(EDX));
  /* 114dee5c call 0x114df0d0 */
  push32(0x114dee61u); f_114df0d0();
  /* 114dee61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dee64 jmp 0x114defc8 */
  goto L_114defc8;
L_114dee69:;
  /* 114dee69 cmp dword ptr [0x114ff4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114ff4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114dee70 je 0x114deea0 */
  if (C.zf) goto L_114deea0;
  /* 114dee72 mov dword ptr [0x114ff4a4], 0 */
  w32((uint32_t)(0x114ff4a4), (0x0u));
  /* 114dee7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114dee7f push eax */
  push32((uint32_t)(EAX));
  /* 114dee80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114dee83 push ecx */
  push32((uint32_t)(ECX));
  /* 114dee84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114dee87 push edx */
  push32((uint32_t)(EDX));
  /* 114dee88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114dee8b push eax */
  push32((uint32_t)(EAX));
  /* 114dee8c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114dee8f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 114dee95 push edx */
  push32((uint32_t)(EDX));
  /* 114dee96 call 0x114df230 */
  push32(0x114dee9bu); f_114df230();
  /* 114dee9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114dee9e jmp 0x114deec2 */
  goto L_114deec2;
L_114deea0:;
  /* 114deea0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deea3 push eax */
  push32((uint32_t)(EAX));
  /* 114deea4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deea7 push ecx */
  push32((uint32_t)(ECX));
  /* 114deea8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deeab push edx */
  push32((uint32_t)(EDX));
  /* 114deeac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deeaf push eax */
  push32((uint32_t)(EAX));
  /* 114deeb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deeb3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 114deeb9 push edx */
  push32((uint32_t)(EDX));
  /* 114deeba call 0x114df230 */
  push32(0x114deebfu); f_114df230();
  /* 114deebf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114deec2:;
  /* 114deec2 jmp 0x114defc8 */
  goto L_114defc8;
L_114deec7:;
  /* 114deec7 mov dword ptr [0x114ff4a4], 0 */
  w32((uint32_t)(0x114ff4a4), (0x0u));
  /* 114deed1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deed4 push eax */
  push32((uint32_t)(EAX));
  /* 114deed5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114deed8 push ecx */
  push32((uint32_t)(ECX));
  /* 114deed9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114deedc push edx */
  push32((uint32_t)(EDX));
  /* 114deedd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114deee0 push eax */
  push32((uint32_t)(EAX));
  /* 114deee1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114deee4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 114deeea push edx */
  push32((uint32_t)(EDX));
  /* 114deeeb call 0x114df230 */
  push32(0x114deef0u); f_114df230();
  /* 114deef0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114deef3 jmp 0x114defc8 */
  goto L_114defc8;
L_114deef8:;
  /* 114deef8 mov eax, dword ptr [0x114ff4a4] */
  EAX = (r32((uint32_t)(0x114ff4a4)));
  /* 114deefd mov dword ptr [0x114ff4b4], eax */
  w32((uint32_t)(0x114ff4b4), (EAX));
  /* 114def02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114def05 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 114def08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114def09 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 114def0e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114def10 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114def13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114def16 push edx */
  push32((uint32_t)(EDX));
  /* 114def17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114def1a push eax */
  push32((uint32_t)(EAX));
  /* 114def1b push 2 */
  push32((uint32_t)(0x2u));
  /* 114def1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114def20 push ecx */
  push32((uint32_t)(ECX));
  /* 114def21 call 0x114df0d0 */
  push32(0x114def26u); f_114df0d0();
  /* 114def26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114def29 jmp 0x114defc8 */
  goto L_114defc8;
L_114def2e:;
  /* 114def2e mov edx, dword ptr [0x114ff4a4] */
  EDX = (r32((uint32_t)(0x114ff4a4)));
  /* 114def34 mov dword ptr [0x114ff4b4], edx */
  w32((uint32_t)(0x114ff4b4), (EDX));
  /* 114def3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114def3d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 114def40 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114def41 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 114def46 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114def48 mov ecx, eax */
  ECX = (EAX);
  /* 114def4a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114def4d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114def50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114def53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114def56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114def57 mov esi, 0x64 */
  ESI = (0x64u);
  /* 114def5c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114def5e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114def60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114def63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114def66 push eax */
  push32((uint32_t)(EAX));
  /* 114def67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114def6a push ecx */
  push32((uint32_t)(ECX));
  /* 114def6b push 4 */
  push32((uint32_t)(0x4u));
  /* 114def6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114def70 push edx */
  push32((uint32_t)(EDX));
  /* 114def71 call 0x114df0d0 */
  push32(0x114def76u); f_114df0d0();
  /* 114def76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114def79 jmp 0x114defc8 */
  goto L_114defc8;
L_114def7b:;
  /* 114def7b call 0x114d6220 */
  push32(0x114def80u); f_114d6220();
  /* 114def80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114def83 push eax */
  push32((uint32_t)(EAX));
  /* 114def84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114def87 push ecx */
  push32((uint32_t)(ECX));
  /* 114def88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114def8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114def8d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114def91 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 114def94 mov ecx, dword ptr [eax*4 + 0x114fd63c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114fd63c)));
  /* 114def9b push ecx */
  push32((uint32_t)(ECX));
  /* 114def9c call 0x114df080 */
  push32(0x114defa1u); f_114df080();
  /* 114defa1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114defa4 jmp 0x114defc8 */
  goto L_114defc8;
L_114defa6:;
  /* 114defa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114defa9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114defab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 114defae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114defb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114defb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114defb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114defb9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114defbb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114defbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114defc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114defc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114defc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114defc8:;
  /* 114defc8 pop esi */
  ESI = (pop32());
  /* 114defc9 mov esp, ebp */
  ESP = (EBP);
  /* 114defcb pop ebp */
  EBP = (pop32());
  /* 114defcc ret  */
  ESPCHK(0x114dea60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x114df080 (72 bytes, 30 insns) */
void f_114df080(void) {
  FTRACE(0x114df080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114df080 push ebp */
  push32((uint32_t)(EBP));
  /* 114df081 mov ebp, esp */
  EBP = (ESP);
L_114df083:;
  /* 114df083 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df086 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114df089 je 0x114df0c6 */
  if (C.zf) goto L_114df0c6;
  /* 114df08b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df08e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114df091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114df093 je 0x114df0c6 */
  if (C.zf) goto L_114df0c6;
  /* 114df095 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df098 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114df09a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df09d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114df09f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114df0a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df0a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114df0a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df0a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114df0ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114df0ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114df0b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114df0b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114df0b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df0ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114df0bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114df0bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114df0c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114df0c4 jmp 0x114df083 */
  goto L_114df083;
L_114df0c6:;
  /* 114df0c6 pop ebp */
  EBP = (pop32());
  /* 114df0c7 ret  */
  ESPCHK(0x114df080u, _esp0);
  ESP += 4; return;
}

