#include "recomp.h"

/* FUN_10006102 @ 0x110e6102 (24 bytes, 10 insns) */
void f_110e6102(void) {
  FTRACE(0x110e6102u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6102 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6103 push ecx */
  push32((uint32_t)(ECX));
  /* 110e6104 mov ebx, 0x110ec8e0 */
  EBX = (0x110ec8e0u);
  /* 110e6109 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e610c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 110e610f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 110e6112 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 110e6115 pop ecx */
  ECX = (pop32());
  /* 110e6116 pop ebx */
  EBX = (pop32());
  /* 110e6117 ret 4 */
  ESPCHK(0x110e6102u, _esp0);
  ESP += 8; return;
}

/* FUN_100061e1 @ 0x110e61e1 (27 bytes, 11 insns) */
void f_110e61e1(void) {
  FTRACE(0x110e61e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e61e1 push ebp */
  push32((uint32_t)(EBP));
  /* 110e61e2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e61e6 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 110e61e8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110e61eb push eax */
  push32((uint32_t)(EAX));
  /* 110e61ec mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 110e61ef push eax */
  push32((uint32_t)(EAX));
  /* 110e61f0 call 0x110e606e */
  push32(0x110e61f5u); f_110e606e();
  /* 110e61f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e61f8 pop ebp */
  EBP = (pop32());
  /* 110e61f9 ret 4 */
  ESPCHK(0x110e61e1u, _esp0);
  ESP += 8; return;
}

/* FUN_100061fc @ 0x110e61fc (289 bytes, 98 insns) */
void f_110e61fc(void) {
  FTRACE(0x110e61fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e61fc push ebp */
  push32((uint32_t)(EBP));
  /* 110e61fd mov ebp, esp */
  EBP = (ESP);
  /* 110e61ff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e6201 push 0x110e94e0 */
  push32((uint32_t)(0x110e94e0u));
  /* 110e6206 push 0x110e6124 */
  push32((uint32_t)(0x110e6124u));
  /* 110e620b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110e6211 push eax */
  push32((uint32_t)(EAX));
  /* 110e6212 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110e6219 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e621c push ebx */
  push32((uint32_t)(EBX));
  /* 110e621d push esi */
  push32((uint32_t)(ESI));
  /* 110e621e push edi */
  push32((uint32_t)(EDI));
  /* 110e621f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e6222 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e6226 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 110e6229 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 110e622c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e622f ja 0x110e6245 */
  if ((!C.cf&&!C.zf)) goto L_110e6245;
  /* 110e6231 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e6233 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6235 jne 0x110e623a */
  if (!C.zf) goto L_110e623a;
  /* 110e6237 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e6239 pop esi */
  ESI = (pop32());
L_110e623a:;
  /* 110e623a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e623d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 110e6240 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 110e6243 jmp 0x110e6247 */
  goto L_110e6247;
L_110e6245:;
  /* 110e6245 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110e6247:;
  /* 110e6247 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 110e624a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e624d ja 0x110e62fb */
  if ((!C.cf&&!C.zf)) goto L_110e62fb;
  /* 110e6253 mov eax, dword ptr [0x110edce8] */
  EAX = (r32((uint32_t)(0x110edce8)));
  /* 110e6258 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e625b jne 0x110e629e */
  if (!C.zf) goto L_110e629e;
  /* 110e625d mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 110e6260 cmp edi, dword ptr [0x110edce0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x110edce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6266 ja 0x110e62e4 */
  if ((!C.cf&&!C.zf)) goto L_110e62e4;
  /* 110e6268 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e626a call 0x110e5fb6 */
  push32(0x110e626fu); f_110e5fb6();
  /* 110e626f pop ecx */
  ECX = (pop32());
  /* 110e6270 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 110e6273 push edi */
  push32((uint32_t)(EDI));
  /* 110e6274 call 0x110e5448 */
  push32(0x110e6279u); f_110e5448();
  /* 110e6279 pop ecx */
  ECX = (pop32());
  /* 110e627a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110e627d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e6281 call 0x110e6295 */
  push32(0x110e6286u); f_110e6295();
  /* 110e6286 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6289 je 0x110e62e9 */
  if (C.zf) goto L_110e62e9;
  /* 110e628b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 110e628e jmp 0x110e62d8 */
  goto L_110e62d8;
  /* 110e6290 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e6292 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e6295 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e6297 call 0x110e6017 */
  push32(0x110e629cu); f_110e6017();
  /* 110e629c pop ecx */
  ECX = (pop32());
  /* 110e629d ret  */
  ESPCHK(0x110e61fcu, _esp0);
  ESP += 4; return;
L_110e629e:;
  /* 110e629e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e62a1 jne 0x110e62e4 */
  if (!C.zf) goto L_110e62e4;
  /* 110e62a3 cmp esi, dword ptr [0x110ec81c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ec81c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e62a9 ja 0x110e62e4 */
  if ((!C.cf&&!C.zf)) goto L_110e62e4;
  /* 110e62ab push 9 */
  push32((uint32_t)(0x9u));
  /* 110e62ad call 0x110e5fb6 */
  push32(0x110e62b2u); f_110e5fb6();
  /* 110e62b2 pop ecx */
  ECX = (pop32());
  /* 110e62b3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e62ba mov eax, esi */
  EAX = (ESI);
  /* 110e62bc shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 110e62bf push eax */
  push32((uint32_t)(EAX));
  /* 110e62c0 call 0x110e5bf5 */
  push32(0x110e62c5u); f_110e5bf5();
  /* 110e62c5 pop ecx */
  ECX = (pop32());
  /* 110e62c6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110e62c9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e62cd call 0x110e631e */
  push32(0x110e62d2u); f_110e631e();
  /* 110e62d2 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e62d5 je 0x110e62e9 */
  if (C.zf) goto L_110e62e9;
  /* 110e62d7 push esi */
  push32((uint32_t)(ESI));
L_110e62d8:;
  /* 110e62d8 push ebx */
  push32((uint32_t)(EBX));
  /* 110e62d9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 110e62dc call 0x110e7810 */
  push32(0x110e62e1u); f_110e7810();
  /* 110e62e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e62e4:;
  /* 110e62e4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e62e7 jne 0x110e6327 */
  if (!C.zf) { jmp_ind(0x110e6327u); return; }
L_110e62e9:;
  /* 110e62e9 push esi */
  push32((uint32_t)(ESI));
  /* 110e62ea push 8 */
  push32((uint32_t)(0x8u));
  /* 110e62ec push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e62f2 call dword ptr [0x110e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e908c))), 0x110e62f8u);
  /* 110e62f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_110e62fb:;
  /* 110e62fb cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e62fe jne 0x110e6327 */
  if (!C.zf) { jmp_ind(0x110e6327u); return; }
  /* 110e6300 cmp dword ptr [0x110ed8f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110ed8f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6306 je 0x110e6327 */
  if (C.zf) { jmp_ind(0x110e6327u); return; }
  /* 110e6308 push esi */
  push32((uint32_t)(ESI));
  /* 110e6309 call 0x110e6962 */
  push32(0x110e630eu); f_110e6962();
  /* 110e630e pop ecx */
  ECX = (pop32());
  /* 110e630f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6311 jne 0x110e6247 */
  if (!C.zf) goto L_110e6247;
  /* 110e6317 jmp 0x110e632a */
  jmp_ind(0x110e632au); return;
  /* 110e6319 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10006295 @ 0x110e6295 (9 bytes, 4 insns) */
void f_110e6295(void) {
  FTRACE(0x110e6295u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6295 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e6297 call 0x110e6017 */
  push32(0x110e629cu); f_110e6017();
  /* 110e629c pop ecx */
  ECX = (pop32());
  /* 110e629d ret  */
  ESPCHK(0x110e6295u, _esp0);
  ESP += 4; return;
}

/* FUN_1000631e @ 0x110e631e (9 bytes, 4 insns) */
void f_110e631e(void) {
  FTRACE(0x110e631eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e631e push 9 */
  push32((uint32_t)(0x9u));
  /* 110e6320 call 0x110e6017 */
  push32(0x110e6325u); f_110e6017();
  /* 110e6325 pop ecx */
  ECX = (pop32());
  /* 110e6326 ret  */
  ESPCHK(0x110e631eu, _esp0);
  ESP += 4; return;
}

/* FUN_100063ba @ 0x110e63ba (291 bytes, 103 insns) */
void f_110e63ba(void) {
  FTRACE(0x110e63bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e63ba push ecx */
  push32((uint32_t)(ECX));
  /* 110e63bb push ecx */
  push32((uint32_t)(ECX));
  /* 110e63bc push ebx */
  push32((uint32_t)(EBX));
  /* 110e63bd push ebp */
  push32((uint32_t)(EBP));
  /* 110e63be push esi */
  push32((uint32_t)(ESI));
  /* 110e63bf push edi */
  push32((uint32_t)(EDI));
  /* 110e63c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 110e63c2 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 110e63c5 call 0x110e5fb6 */
  push32(0x110e63cau); f_110e5fb6();
  /* 110e63ca xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e63cc pop ecx */
  ECX = (pop32());
  /* 110e63cd mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 110e63d1 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 110e63d5 mov ebp, 0x110edd00 */
  EBP = (0x110edd00u);
L_110e63da:;
  /* 110e63da mov esi, dword ptr [ebp] */
  ESI = (r32((uint32_t)(EBP)));
  /* 110e63dd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e63df je 0x110e647e */
  if (C.zf) goto L_110e647e;
  /* 110e63e5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_110e63eb:;
  /* 110e63eb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e63ed jae 0x110e6463 */
  if (!C.cf) goto L_110e6463;
  /* 110e63ef test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e63f3 jne 0x110e6439 */
  if (!C.zf) goto L_110e6439;
  /* 110e63f5 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e63f9 jne 0x110e641e */
  if (!C.zf) goto L_110e641e;
  /* 110e63fb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e63fd call 0x110e5fb6 */
  push32(0x110e6402u); f_110e5fb6();
  /* 110e6402 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6406 pop ecx */
  ECX = (pop32());
  /* 110e6407 jne 0x110e6416 */
  if (!C.zf) goto L_110e6416;
  /* 110e6409 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 110e640c push eax */
  push32((uint32_t)(EAX));
  /* 110e640d call dword ptr [0x110e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9000))), 0x110e6413u);
  /* 110e6413 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_110e6416:;
  /* 110e6416 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e6418 call 0x110e6017 */
  push32(0x110e641du); f_110e6017();
  /* 110e641d pop ecx */
  ECX = (pop32());
L_110e641e:;
  /* 110e641e lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 110e6421 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6422 call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e6428u);
  /* 110e6428 test byte ptr [esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e642c je 0x110e6446 */
  if (C.zf) goto L_110e6446;
  /* 110e642e push ebx */
  push32((uint32_t)(EBX));
  /* 110e642f call dword ptr [0x110e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e907c))), 0x110e6435u);
  /* 110e6435 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_110e6439:;
  /* 110e6439 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 110e643c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e643f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6444 jmp 0x110e63eb */
  goto L_110e63eb;
L_110e6446:;
  /* 110e6446 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110e6449 mov eax, esi */
  EAX = (ESI);
  /* 110e644b sub eax, dword ptr [ebp] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e644e push 0x24 */
  push32((uint32_t)(0x24u));
  /* 110e6450 pop ecx */
  ECX = (pop32());
  /* 110e6451 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e6452 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e6454 mov edi, eax */
  EDI = (EAX);
  /* 110e6456 add edi, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e645a cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e645d jne 0x110e64cc */
  if (!C.zf) goto L_110e64cc;
  /* 110e645f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_110e6463:;
  /* 110e6463 add dword ptr [esp + 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e6468 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e646b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e646c cmp ebp, 0x110ede00 */
  { uint32_t _a=(EBP),_b=(0x110ede00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6472 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 110e6476 jl 0x110e63da */
  if ((C.sf!=C.of)) goto L_110e63da;
  /* 110e647c jmp 0x110e64cc */
  goto L_110e64cc;
L_110e647e:;
  /* 110e647e mov esi, 0x480 */
  ESI = (0x480u);
  /* 110e6483 push esi */
  push32((uint32_t)(ESI));
  /* 110e6484 call 0x110e3ee5 */
  push32(0x110e6489u); f_110e3ee5();
  /* 110e6489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e648b pop ecx */
  ECX = (pop32());
  /* 110e648c je 0x110e64cc */
  if (C.zf) goto L_110e64cc;
  /* 110e648e add dword ptr [0x110ede00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x110ede00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x110ede00), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e6495 lea ecx, [ebx*4 + 0x110edd00] */
  ECX = ((uint32_t)(EBX*4 + 0x110edd00));
  /* 110e649c lea edx, [eax + 0x480] */
  EDX = ((uint32_t)(EAX + 0x480));
  /* 110e64a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_110e64a4:;
  /* 110e64a4 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e64a6 jae 0x110e64c0 */
  if (!C.cf) goto L_110e64c0;
  /* 110e64a8 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e64ac or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e64af and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e64b3 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 110e64b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110e64b9 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e64bc add edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e64be jmp 0x110e64a4 */
  goto L_110e64a4;
L_110e64c0:;
  /* 110e64c0 shl ebx, 5 */
  EBX = (sh_shl((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 110e64c3 mov edi, ebx */
  EDI = (EBX);
  /* 110e64c5 push edi */
  push32((uint32_t)(EDI));
  /* 110e64c6 call 0x110e661a */
  push32(0x110e64cbu); f_110e661a();
  /* 110e64cb pop ecx */
  ECX = (pop32());
L_110e64cc:;
  /* 110e64cc push 0x12 */
  push32((uint32_t)(0x12u));
  /* 110e64ce call 0x110e6017 */
  push32(0x110e64d3u); f_110e6017();
  /* 110e64d3 pop ecx */
  ECX = (pop32());
  /* 110e64d4 mov eax, edi */
  EAX = (EDI);
  /* 110e64d6 pop edi */
  EDI = (pop32());
  /* 110e64d7 pop esi */
  ESI = (pop32());
  /* 110e64d8 pop ebp */
  EBP = (pop32());
  /* 110e64d9 pop ebx */
  EBX = (pop32());
  /* 110e64da pop ecx */
  ECX = (pop32());
  /* 110e64db pop ecx */
  ECX = (pop32());
  /* 110e64dc ret  */
  ESPCHK(0x110e63bau, _esp0);
  ESP += 4; return;
}

/* FUN_100064dd @ 0x110e64dd (124 bytes, 47 insns) */
void f_110e64dd(void) {
  FTRACE(0x110e64ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e64dd mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e64e1 push esi */
  push32((uint32_t)(ESI));
  /* 110e64e2 cmp ecx, dword ptr [0x110ede00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e64e8 push edi */
  push32((uint32_t)(EDI));
  /* 110e64e9 jae 0x110e6540 */
  if (!C.cf) goto L_110e6540;
  /* 110e64eb mov eax, ecx */
  EAX = (ECX);
  /* 110e64ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e64f0 lea edi, [eax*4 + 0x110edd00] */
  EDI = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e64f7 mov eax, ecx */
  EAX = (ECX);
  /* 110e64f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e64fc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e64ff mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e6501 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e6504 cmp dword ptr [eax + esi], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6508 jne 0x110e6540 */
  if (!C.zf) goto L_110e6540;
  /* 110e650a cmp dword ptr [0x110ed73c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ed73c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6511 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6512 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e6516 jne 0x110e6536 */
  if (!C.zf) goto L_110e6536;
  /* 110e6518 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e651b je 0x110e652d */
  if (C.zf) goto L_110e652d;
  /* 110e651d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e651e je 0x110e6528 */
  if (C.zf) goto L_110e6528;
  /* 110e6520 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e6521 jne 0x110e6536 */
  if (!C.zf) goto L_110e6536;
  /* 110e6523 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6524 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 110e6526 jmp 0x110e6530 */
  goto L_110e6530;
L_110e6528:;
  /* 110e6528 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6529 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 110e652b jmp 0x110e6530 */
  goto L_110e6530;
L_110e652d:;
  /* 110e652d push ebx */
  push32((uint32_t)(EBX));
  /* 110e652e push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_110e6530:;
  /* 110e6530 call dword ptr [0x110e9040] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9040))), 0x110e6536u);
L_110e6536:;
  /* 110e6536 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e6538 mov dword ptr [eax + esi], ebx */
  w32((uint32_t)(EAX + ESI*1), (EBX));
  /* 110e653b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e653d pop ebx */
  EBX = (pop32());
  /* 110e653e jmp 0x110e6556 */
  goto L_110e6556;
L_110e6540:;
  /* 110e6540 call 0x110e4092 */
  push32(0x110e6545u); f_110e4092();
  /* 110e6545 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e654b call 0x110e409b */
  push32(0x110e6550u); f_110e409b();
  /* 110e6550 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e6553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110e6556:;
  /* 110e6556 pop edi */
  EDI = (pop32());
  /* 110e6557 pop esi */
  ESI = (pop32());
  /* 110e6558 ret  */
  ESPCHK(0x110e64ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10006559 @ 0x110e6559 (127 bytes, 48 insns) */
void f_110e6559(void) {
  FTRACE(0x110e6559u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6559 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e655d push esi */
  push32((uint32_t)(ESI));
  /* 110e655e cmp ecx, dword ptr [0x110ede00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6564 push edi */
  push32((uint32_t)(EDI));
  /* 110e6565 jae 0x110e65bf */
  if (!C.cf) goto L_110e65bf;
  /* 110e6567 mov eax, ecx */
  EAX = (ECX);
  /* 110e6569 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e656c lea edi, [eax*4 + 0x110edd00] */
  EDI = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e6573 mov eax, ecx */
  EAX = (ECX);
  /* 110e6575 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6578 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e657b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e657d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e6580 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6582 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e6586 je 0x110e65bf */
  if (C.zf) goto L_110e65bf;
  /* 110e6588 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e658b je 0x110e65bf */
  if (C.zf) goto L_110e65bf;
  /* 110e658d cmp dword ptr [0x110ed73c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ed73c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6594 jne 0x110e65b5 */
  if (!C.zf) goto L_110e65b5;
  /* 110e6596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6598 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e659a je 0x110e65ac */
  if (C.zf) goto L_110e65ac;
  /* 110e659c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e659d je 0x110e65a7 */
  if (C.zf) goto L_110e65a7;
  /* 110e659f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e65a0 jne 0x110e65b5 */
  if (!C.zf) goto L_110e65b5;
  /* 110e65a2 push eax */
  push32((uint32_t)(EAX));
  /* 110e65a3 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 110e65a5 jmp 0x110e65af */
  goto L_110e65af;
L_110e65a7:;
  /* 110e65a7 push eax */
  push32((uint32_t)(EAX));
  /* 110e65a8 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 110e65aa jmp 0x110e65af */
  goto L_110e65af;
L_110e65ac:;
  /* 110e65ac push eax */
  push32((uint32_t)(EAX));
  /* 110e65ad push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_110e65af:;
  /* 110e65af call dword ptr [0x110e9040] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9040))), 0x110e65b5u);
L_110e65b5:;
  /* 110e65b5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e65b7 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 110e65bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e65bd jmp 0x110e65d5 */
  goto L_110e65d5;
L_110e65bf:;
  /* 110e65bf call 0x110e4092 */
  push32(0x110e65c4u); f_110e4092();
  /* 110e65c4 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e65ca call 0x110e409b */
  push32(0x110e65cfu); f_110e409b();
  /* 110e65cf and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e65d2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110e65d5:;
  /* 110e65d5 pop edi */
  EDI = (pop32());
  /* 110e65d6 pop esi */
  ESI = (pop32());
  /* 110e65d7 ret  */
  ESPCHK(0x110e6559u, _esp0);
  ESP += 4; return;
}

/* FUN_100065d8 @ 0x110e65d8 (66 bytes, 19 insns) */
void f_110e65d8(void) {
  FTRACE(0x110e65d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e65d8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e65dc cmp eax, dword ptr [0x110ede00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e65e2 jae 0x110e6603 */
  if (!C.cf) goto L_110e6603;
  /* 110e65e4 mov ecx, eax */
  ECX = (EAX);
  /* 110e65e6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e65e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e65ec lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e65ef mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e65f6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e65fb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 110e65fe je 0x110e6603 */
  if (C.zf) goto L_110e6603;
  /* 110e6600 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 110e6602 ret  */
  ESPCHK(0x110e65d8u, _esp0);
  ESP += 4; return;
L_110e6603:;
  /* 110e6603 call 0x110e4092 */
  push32(0x110e6608u); f_110e4092();
  /* 110e6608 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e660e call 0x110e409b */
  push32(0x110e6613u); f_110e409b();
  /* 110e6613 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e6616 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6619 ret  */
  ESPCHK(0x110e65d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000661a @ 0x110e661a (95 bytes, 34 insns) */
void f_110e661a(void) {
  FTRACE(0x110e661au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e661a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e661e push ebx */
  push32((uint32_t)(EBX));
  /* 110e661f mov ecx, eax */
  ECX = (EAX);
  /* 110e6621 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6624 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e6627 push esi */
  push32((uint32_t)(ESI));
  /* 110e6628 push edi */
  push32((uint32_t)(EDI));
  /* 110e6629 mov esi, dword ptr [ecx*4 + 0x110edd00] */
  ESI = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e6630 lea ebx, [ecx*4 + 0x110edd00] */
  EBX = ((uint32_t)(ECX*4 + 0x110edd00));
  /* 110e6637 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 110e663a shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 110e663d add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e663f cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6643 jne 0x110e6668 */
  if (!C.zf) goto L_110e6668;
  /* 110e6645 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e6647 call 0x110e5fb6 */
  push32(0x110e664cu); f_110e5fb6();
  /* 110e664c cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6650 pop ecx */
  ECX = (pop32());
  /* 110e6651 jne 0x110e6660 */
  if (!C.zf) goto L_110e6660;
  /* 110e6653 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 110e6656 push eax */
  push32((uint32_t)(EAX));
  /* 110e6657 call dword ptr [0x110e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9000))), 0x110e665du);
  /* 110e665d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_110e6660:;
  /* 110e6660 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e6662 call 0x110e6017 */
  push32(0x110e6667u); f_110e6017();
  /* 110e6667 pop ecx */
  ECX = (pop32());
L_110e6668:;
  /* 110e6668 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e666a lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 110e666e push eax */
  push32((uint32_t)(EAX));
  /* 110e666f call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e6675u);
  /* 110e6675 pop edi */
  EDI = (pop32());
  /* 110e6676 pop esi */
  ESI = (pop32());
  /* 110e6677 pop ebx */
  EBX = (pop32());
  /* 110e6678 ret  */
  ESPCHK(0x110e661au, _esp0);
  ESP += 4; return;
}

/* FUN_10006679 @ 0x110e6679 (34 bytes, 10 insns) */
void f_110e6679(void) {
  FTRACE(0x110e6679u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6679 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e667d mov ecx, eax */
  ECX = (EAX);
  /* 110e667f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6682 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e6685 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e6688 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e668f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 110e6693 push eax */
  push32((uint32_t)(EAX));
  /* 110e6694 call dword ptr [0x110e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e907c))), 0x110e669au);
  /* 110e669a ret  */
  ESPCHK(0x110e6679u, _esp0);
  ESP += 4; return;
}

/* FUN_1000669b @ 0x110e669b (147 bytes, 52 insns) */
void f_110e669b(void) {
  FTRACE(0x110e669bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e669b push ebx */
  push32((uint32_t)(EBX));
  /* 110e669c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e66a0 cmp ebx, dword ptr [0x110ede00] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e66a6 push esi */
  push32((uint32_t)(ESI));
  /* 110e66a7 push edi */
  push32((uint32_t)(EDI));
  /* 110e66a8 jae 0x110e671c */
  if (!C.cf) goto L_110e671c;
  /* 110e66aa mov eax, ebx */
  EAX = (EBX);
  /* 110e66ac sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e66af lea edi, [eax*4 + 0x110edd00] */
  EDI = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e66b6 mov eax, ebx */
  EAX = (EBX);
  /* 110e66b8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e66bb lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e66be mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e66c0 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e66c3 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e66c8 je 0x110e671c */
  if (C.zf) goto L_110e671c;
  /* 110e66ca push ebx */
  push32((uint32_t)(EBX));
  /* 110e66cb call 0x110e661a */
  push32(0x110e66d0u); f_110e661a();
  /* 110e66d0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e66d2 pop ecx */
  ECX = (pop32());
  /* 110e66d3 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e66d8 je 0x110e6703 */
  if (C.zf) goto L_110e6703;
  /* 110e66da push ebx */
  push32((uint32_t)(EBX));
  /* 110e66db call 0x110e65d8 */
  push32(0x110e66e0u); f_110e65d8();
  /* 110e66e0 pop ecx */
  ECX = (pop32());
  /* 110e66e1 push eax */
  push32((uint32_t)(EAX));
  /* 110e66e2 call dword ptr [0x110e9048] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9048))), 0x110e66e8u);
  /* 110e66e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e66ea jne 0x110e66f6 */
  if (!C.zf) goto L_110e66f6;
  /* 110e66ec call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e66f2u);
  /* 110e66f2 mov esi, eax */
  ESI = (EAX);
  /* 110e66f4 jmp 0x110e66f8 */
  goto L_110e66f8;
L_110e66f6:;
  /* 110e66f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_110e66f8:;
  /* 110e66f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e66fa je 0x110e6711 */
  if (C.zf) goto L_110e6711;
  /* 110e66fc call 0x110e409b */
  push32(0x110e6701u); f_110e409b();
  /* 110e6701 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_110e6703:;
  /* 110e6703 call 0x110e4092 */
  push32(0x110e6708u); f_110e4092();
  /* 110e6708 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e670e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_110e6711:;
  /* 110e6711 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6712 call 0x110e6679 */
  push32(0x110e6717u); f_110e6679();
  /* 110e6717 pop ecx */
  ECX = (pop32());
  /* 110e6718 mov eax, esi */
  EAX = (ESI);
  /* 110e671a jmp 0x110e672a */
  goto L_110e672a;
L_110e671c:;
  /* 110e671c call 0x110e4092 */
  push32(0x110e6721u); f_110e4092();
  /* 110e6721 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e6727 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110e672a:;
  /* 110e672a pop edi */
  EDI = (pop32());
  /* 110e672b pop esi */
  ESI = (pop32());
  /* 110e672c pop ebx */
  EBX = (pop32());
  /* 110e672d ret  */
  ESPCHK(0x110e669bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000672e @ 0x110e672e (101 bytes, 34 insns) */
void f_110e672e(void) {
  FTRACE(0x110e672eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e672e push esi */
  push32((uint32_t)(ESI));
  /* 110e672f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6733 cmp esi, dword ptr [0x110ede00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6739 jae 0x110e677b */
  if (!C.cf) goto L_110e677b;
  /* 110e673b mov ecx, esi */
  ECX = (ESI);
  /* 110e673d mov eax, esi */
  EAX = (ESI);
  /* 110e673f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e6742 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6745 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e674c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e674f test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e6754 je 0x110e677b */
  if (C.zf) goto L_110e677b;
  /* 110e6756 push edi */
  push32((uint32_t)(EDI));
  /* 110e6757 push esi */
  push32((uint32_t)(ESI));
  /* 110e6758 call 0x110e661a */
  push32(0x110e675du); f_110e661a();
  /* 110e675d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e6761 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e6765 push esi */
  push32((uint32_t)(ESI));
  /* 110e6766 call 0x110e6793 */
  push32(0x110e676bu); f_110e6793();
  /* 110e676b push esi */
  push32((uint32_t)(ESI));
  /* 110e676c mov edi, eax */
  EDI = (EAX);
  /* 110e676e call 0x110e6679 */
  push32(0x110e6773u); f_110e6679();
  /* 110e6773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6776 mov eax, edi */
  EAX = (EDI);
  /* 110e6778 pop edi */
  EDI = (pop32());
  /* 110e6779 pop esi */
  ESI = (pop32());
  /* 110e677a ret  */
  ESPCHK(0x110e672eu, _esp0);
  ESP += 4; return;
L_110e677b:;
  /* 110e677b call 0x110e4092 */
  push32(0x110e6780u); f_110e4092();
  /* 110e6780 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e6786 call 0x110e409b */
  push32(0x110e678bu); f_110e409b();
  /* 110e678b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e678e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6791 pop esi */
  ESI = (pop32());
  /* 110e6792 ret  */
  ESPCHK(0x110e672eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006793 @ 0x110e6793 (395 bytes, 135 insns) */
void f_110e6793(void) {
  FTRACE(0x110e6793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6793 push ebp */
  push32((uint32_t)(EBP));
  /* 110e6794 mov ebp, esp */
  EBP = (ESP);
  /* 110e6796 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e679c push ebx */
  push32((uint32_t)(EBX));
  /* 110e679d push esi */
  push32((uint32_t)(ESI));
  /* 110e679e push edi */
  push32((uint32_t)(EDI));
  /* 110e679f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e67a1 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e67a4 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 110e67a7 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 110e67aa jne 0x110e67b3 */
  if (!C.zf) goto L_110e67b3;
L_110e67ac:;
  /* 110e67ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e67ae jmp 0x110e6919 */
  goto L_110e6919;
L_110e67b3:;
  /* 110e67b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e67b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e67b9 lea ebx, [eax*4 + 0x110edd00] */
  EBX = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e67c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e67c3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e67c6 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e67c9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e67cb shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e67ce test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 110e67d3 je 0x110e67e3 */
  if (C.zf) goto L_110e67e3;
  /* 110e67d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e67d7 push edi */
  push32((uint32_t)(EDI));
  /* 110e67d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e67db call 0x110e4319 */
  push32(0x110e67e0u); f_110e4319();
  /* 110e67e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e67e3:;
  /* 110e67e3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e67e5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e67e7 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 110e67eb je 0x110e68b2 */
  if (C.zf) goto L_110e68b2;
  /* 110e67f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e67f4 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e67f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e67fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 110e67fd jbe 0x110e68ed */
  if ((C.cf||C.zf)) goto L_110e68ed;
L_110e6803:;
  /* 110e6803 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_110e6809:;
  /* 110e6809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e680c sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e680f cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6812 jae 0x110e683d */
  if (!C.cf) goto L_110e683d;
  /* 110e6814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e6817 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e681a mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 110e681c cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e681f jne 0x110e6828 */
  if (!C.zf) goto L_110e6828;
  /* 110e6821 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 110e6824 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 110e6827 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110e6828:;
  /* 110e6828 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 110e682a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e682b mov ecx, eax */
  ECX = (EAX);
  /* 110e682d lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 110e6833 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6835 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e683b jl 0x110e6809 */
  if ((C.sf!=C.of)) goto L_110e6809;
L_110e683d:;
  /* 110e683d mov edi, eax */
  EDI = (EAX);
  /* 110e683f lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 110e6845 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6847 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 110e684a push 0 */
  push32((uint32_t)(0x0u));
  /* 110e684c push eax */
  push32((uint32_t)(EAX));
  /* 110e684d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 110e6853 push edi */
  push32((uint32_t)(EDI));
  /* 110e6854 push eax */
  push32((uint32_t)(EAX));
  /* 110e6855 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e6857 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 110e685a call dword ptr [0x110e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9050))), 0x110e6860u);
  /* 110e6860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6862 je 0x110e68a7 */
  if (C.zf) goto L_110e68a7;
  /* 110e6864 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e6867 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e686a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e686c jl 0x110e6879 */
  if ((C.sf!=C.of)) goto L_110e6879;
  /* 110e686e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e6871 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6874 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6877 jb 0x110e6803 */
  if (C.cf) goto L_110e6803;
L_110e6879:;
  /* 110e6879 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_110e687b:;
  /* 110e687b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e687e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6880 jne 0x110e6916 */
  if (!C.zf) goto L_110e6916;
  /* 110e6886 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6889 je 0x110e68ed */
  if (C.zf) goto L_110e68ed;
  /* 110e688b push 5 */
  push32((uint32_t)(0x5u));
  /* 110e688d pop esi */
  ESI = (pop32());
  /* 110e688e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6891 jne 0x110e68df */
  if (!C.zf) goto L_110e68df;
  /* 110e6893 call 0x110e4092 */
  push32(0x110e6898u); f_110e4092();
  /* 110e6898 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e689e call 0x110e409b */
  push32(0x110e68a3u); f_110e409b();
  /* 110e68a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 110e68a5 jmp 0x110e68e8 */
  goto L_110e68e8;
L_110e68a7:;
  /* 110e68a7 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e68adu);
  /* 110e68ad mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110e68b0 jmp 0x110e6879 */
  goto L_110e6879;
L_110e68b2:;
  /* 110e68b2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 110e68b5 push edi */
  push32((uint32_t)(EDI));
  /* 110e68b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110e68b7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e68ba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e68bd push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 110e68bf call dword ptr [0x110e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9050))), 0x110e68c5u);
  /* 110e68c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e68c7 je 0x110e68d4 */
  if (C.zf) goto L_110e68d4;
  /* 110e68c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e68cc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 110e68cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110e68d2 jmp 0x110e687b */
  goto L_110e687b;
L_110e68d4:;
  /* 110e68d4 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e68dau);
  /* 110e68da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110e68dd jmp 0x110e687b */
  goto L_110e687b;
L_110e68df:;
  /* 110e68df push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e68e2 call 0x110e401f */
  push32(0x110e68e7u); f_110e401f();
  /* 110e68e7 pop ecx */
  ECX = (pop32());
L_110e68e8:;
  /* 110e68e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e68eb jmp 0x110e6919 */
  goto L_110e6919;
L_110e68ed:;
  /* 110e68ed mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e68ef test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 110e68f4 je 0x110e6902 */
  if (C.zf) goto L_110e6902;
  /* 110e68f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e68f9 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e68fc je 0x110e67ac */
  if (C.zf) goto L_110e67ac;
L_110e6902:;
  /* 110e6902 call 0x110e4092 */
  push32(0x110e6907u); f_110e4092();
  /* 110e6907 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 110e690d call 0x110e409b */
  push32(0x110e6912u); f_110e409b();
  /* 110e6912 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 110e6914 jmp 0x110e68e8 */
  goto L_110e68e8;
L_110e6916:;
  /* 110e6916 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110e6919:;
  /* 110e6919 pop edi */
  EDI = (pop32());
  /* 110e691a pop esi */
  ESI = (pop32());
  /* 110e691b pop ebx */
  EBX = (pop32());
  /* 110e691c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e691d ret  */
  ESPCHK(0x110e6793u, _esp0);
  ESP += 4; return;
}

/* FUN_1000691e @ 0x110e691e (68 bytes, 19 insns) */
void f_110e691e(void) {
  FTRACE(0x110e691eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e691e inc dword ptr [0x110ed740] */
  { uint32_t _r=(r32((uint32_t)(0x110ed740)))+1; w32((uint32_t)(0x110ed740), (_r)); fl_inc(_r,32); }
  /* 110e6924 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e6929 call 0x110e3ee5 */
  push32(0x110e692eu); f_110e3ee5();
  /* 110e692e pop ecx */
  ECX = (pop32());
  /* 110e692f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6935 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110e6938 je 0x110e6947 */
  if (C.zf) goto L_110e6947;
  /* 110e693a or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e693e mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 110e6945 jmp 0x110e6958 */
  goto L_110e6958;
L_110e6947:;
  /* 110e6947 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e694b lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 110e694e mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110e6951 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_110e6958:;
  /* 110e6958 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 110e695b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e695f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110e6961 ret  */
  ESPCHK(0x110e691eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006962 @ 0x110e6962 (27 bytes, 13 insns) */
void f_110e6962(void) {
  FTRACE(0x110e6962u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6962 mov eax, dword ptr [0x110ed8fc] */
  EAX = (r32((uint32_t)(0x110ed8fc)));
  /* 110e6967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6969 je 0x110e697a */
  if (C.zf) goto L_110e697a;
  /* 110e696b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110e696f call eax */
  call_ind((uint32_t)(EAX), 0x110e6971u);
  /* 110e6971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6973 pop ecx */
  ECX = (pop32());
  /* 110e6974 je 0x110e697a */
  if (C.zf) goto L_110e697a;
  /* 110e6976 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e6978 pop eax */
  EAX = (pop32());
  /* 110e6979 ret  */
  ESPCHK(0x110e6962u, _esp0);
  ESP += 4; return;
L_110e697a:;
  /* 110e697a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e697c ret  */
  ESPCHK(0x110e6962u, _esp0);
  ESP += 4; return;
}

/* FUN_1000697d @ 0x110e697d (719 bytes, 241 insns) */
void f_110e697d(void) {
  FTRACE(0x110e697du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e697d push ebp */
  push32((uint32_t)(EBP));
  /* 110e697e mov ebp, esp */
  EBP = (ESP);
  /* 110e6980 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6983 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e6986 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e6989 push esi */
  push32((uint32_t)(ESI));
  /* 110e698a test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 110e698d push edi */
  push32((uint32_t)(EDI));
  /* 110e698e mov dword ptr [ebp - 0x1c], 0xc */
  w32((uint32_t)(EBP + -0x1c), (0xcu));
  /* 110e6995 mov dword ptr [ebp - 0x18], ebx */
  w32((uint32_t)(EBP + -0x18), (EBX));
  /* 110e6998 je 0x110e69a3 */
  if (C.zf) goto L_110e69a3;
  /* 110e699a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 110e699d mov byte ptr [ebp - 1], 0x10 */
  w8((uint32_t)(EBP + -0x1), (0x10u));
  /* 110e69a1 jmp 0x110e69ae */
  goto L_110e69ae;
L_110e69a3:;
  /* 110e69a3 and byte ptr [ebp - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))&(0x0u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 110e69a7 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_110e69ae:;
  /* 110e69ae mov eax, 0x8000 */
  EAX = (0x8000u);
  /* 110e69b3 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 110e69b5 jne 0x110e69c8 */
  if (!C.zf) goto L_110e69c8;
  /* 110e69b7 test ch, 0x40 */
  { uint32_t _r=(C.c.b.h)&(0x40u); fl_logic(_r,8); }
  /* 110e69ba jne 0x110e69c4 */
  if (!C.zf) goto L_110e69c4;
  /* 110e69bc cmp dword ptr [0x110ed914], eax */
  { uint32_t _a=(r32((uint32_t)(0x110ed914))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e69c2 je 0x110e69c8 */
  if (C.zf) goto L_110e69c8;
L_110e69c4:;
  /* 110e69c4 or byte ptr [ebp - 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x80u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_110e69c8:;
  /* 110e69c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e69ca mov eax, ecx */
  EAX = (ECX);
  /* 110e69cc pop esi */
  ESI = (pop32());
  /* 110e69cd and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 110e69cf sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e69d1 je 0x110e69ef */
  if (C.zf) goto L_110e69ef;
  /* 110e69d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e69d4 je 0x110e69e6 */
  if (C.zf) goto L_110e69e6;
  /* 110e69d6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e69d7 jne 0x110e6a81 */
  if (!C.zf) goto L_110e6a81;
  /* 110e69dd mov dword ptr [ebp - 0xc], 0xc0000000 */
  w32((uint32_t)(EBP + -0xc), (0xc0000000u));
  /* 110e69e4 jmp 0x110e69f6 */
  goto L_110e69f6;
L_110e69e6:;
  /* 110e69e6 mov dword ptr [ebp - 0xc], 0x40000000 */
  w32((uint32_t)(EBP + -0xc), (0x40000000u));
  /* 110e69ed jmp 0x110e69f6 */
  goto L_110e69f6;
L_110e69ef:;
  /* 110e69ef mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
L_110e69f6:;
  /* 110e69f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e69f9 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e69fc je 0x110e6a24 */
  if (C.zf) goto L_110e6a24;
  /* 110e69fe cmp eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a01 je 0x110e6a1b */
  if (C.zf) goto L_110e6a1b;
  /* 110e6a03 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a06 je 0x110e6a12 */
  if (C.zf) goto L_110e6a12;
  /* 110e6a08 cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a0b jne 0x110e6a81 */
  if (!C.zf) goto L_110e6a81;
  /* 110e6a0d mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 110e6a10 jmp 0x110e6a27 */
  goto L_110e6a27;
L_110e6a12:;
  /* 110e6a12 mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
  /* 110e6a19 jmp 0x110e6a27 */
  goto L_110e6a27;
L_110e6a1b:;
  /* 110e6a1b mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 110e6a22 jmp 0x110e6a27 */
  goto L_110e6a27;
L_110e6a24:;
  /* 110e6a24 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
L_110e6a27:;
  /* 110e6a27 mov edx, 0x700 */
  EDX = (0x700u);
  /* 110e6a2c mov eax, 0x400 */
  EAX = (0x400u);
  /* 110e6a31 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110e6a33 mov edi, 0x100 */
  EDI = (0x100u);
  /* 110e6a38 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a3a jg 0x110e6a6d */
  if ((!C.zf&&C.sf==C.of)) goto L_110e6a6d;
  /* 110e6a3c je 0x110e6a68 */
  if (C.zf) goto L_110e6a68;
  /* 110e6a3e cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a40 je 0x110e6a68 */
  if (C.zf) goto L_110e6a68;
  /* 110e6a42 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a44 je 0x110e6a5f */
  if (C.zf) goto L_110e6a5f;
  /* 110e6a46 cmp ecx, 0x200 */
  { uint32_t _a=(ECX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a4c je 0x110e6a9b */
  if (C.zf) goto L_110e6a9b;
  /* 110e6a4e cmp ecx, 0x300 */
  { uint32_t _a=(ECX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a54 jne 0x110e6a81 */
  if (!C.zf) goto L_110e6a81;
  /* 110e6a56 mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 110e6a5d jmp 0x110e6aab */
  goto L_110e6aab;
L_110e6a5f:;
  /* 110e6a5f mov dword ptr [ebp - 8], 4 */
  w32((uint32_t)(EBP + -0x8), (0x4u));
  /* 110e6a66 jmp 0x110e6aab */
  goto L_110e6aab;
L_110e6a68:;
  /* 110e6a68 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 110e6a6b jmp 0x110e6aab */
  goto L_110e6aab;
L_110e6a6d:;
  /* 110e6a6d cmp ecx, 0x500 */
  { uint32_t _a=(ECX),_b=(0x500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a73 je 0x110e6aa4 */
  if (C.zf) goto L_110e6aa4;
  /* 110e6a75 cmp ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a7b je 0x110e6a9b */
  if (C.zf) goto L_110e6a9b;
  /* 110e6a7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6a7f je 0x110e6aa4 */
  if (C.zf) goto L_110e6aa4;
L_110e6a81:;
  /* 110e6a81 call 0x110e4092 */
  push32(0x110e6a86u); f_110e4092();
  /* 110e6a86 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 110e6a8c call 0x110e409b */
  push32(0x110e6a91u); f_110e409b();
  /* 110e6a91 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 110e6a93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6a96 jmp 0x110e6c47 */
  goto L_110e6c47;
L_110e6a9b:;
  /* 110e6a9b mov dword ptr [ebp - 8], 5 */
  w32((uint32_t)(EBP + -0x8), (0x5u));
  /* 110e6aa2 jmp 0x110e6aab */
  goto L_110e6aab;
L_110e6aa4:;
  /* 110e6aa4 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_110e6aab:;
  /* 110e6aab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e6aae mov esi, 0x80 */
  ESI = (0x80u);
  /* 110e6ab3 test edi, eax */
  { uint32_t _r=(EDI)&(EAX); fl_logic(_r,32); }
  /* 110e6ab5 je 0x110e6aca */
  if (C.zf) goto L_110e6aca;
  /* 110e6ab7 mov ecx, dword ptr [0x110ed744] */
  ECX = (r32((uint32_t)(0x110ed744)));
  /* 110e6abd not ecx */
  ECX = (~(ECX));
  /* 110e6abf and ecx, dword ptr [ebp + 0x14] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0x14))); ECX = (_r); fl_logic(_r,32); }
  /* 110e6ac2 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 110e6ac5 jne 0x110e6aca */
  if (!C.zf) goto L_110e6aca;
  /* 110e6ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e6ac9 pop esi */
  ESI = (pop32());
L_110e6aca:;
  /* 110e6aca test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 110e6acc je 0x110e6ad8 */
  if (C.zf) goto L_110e6ad8;
  /* 110e6ace or esi, 0x4000000 */
  { uint32_t _r=(ESI)|(0x4000000u); ESI = (_r); fl_logic(_r,32); }
  /* 110e6ad4 or byte ptr [ebp - 0xa], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xa)))|(0x1u); w8((uint32_t)(EBP + -0xa), (_r)); fl_logic(_r,8); }
L_110e6ad8:;
  /* 110e6ad8 test ah, 0x10 */
  { uint32_t _r=(AH)&(0x10u); fl_logic(_r,8); }
  /* 110e6adb je 0x110e6adf */
  if (C.zf) goto L_110e6adf;
  /* 110e6add or esi, edi */
  { uint32_t _r=(ESI)|(EDI); ESI = (_r); fl_logic(_r,32); }
L_110e6adf:;
  /* 110e6adf test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 110e6ae1 je 0x110e6aeb */
  if (C.zf) goto L_110e6aeb;
  /* 110e6ae3 or esi, 0x8000000 */
  { uint32_t _r=(ESI)|(0x8000000u); ESI = (_r); fl_logic(_r,32); }
  /* 110e6ae9 jmp 0x110e6af5 */
  goto L_110e6af5;
L_110e6aeb:;
  /* 110e6aeb test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 110e6aed je 0x110e6af5 */
  if (C.zf) goto L_110e6af5;
  /* 110e6aef or esi, 0x10000000 */
  { uint32_t _r=(ESI)|(0x10000000u); ESI = (_r); fl_logic(_r,32); }
L_110e6af5:;
  /* 110e6af5 call 0x110e63ba */
  push32(0x110e6afau); f_110e63ba();
  /* 110e6afa mov ebx, eax */
  EBX = (EAX);
  /* 110e6afc or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 110e6aff cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6b01 jne 0x110e6b1d */
  if (!C.zf) goto L_110e6b1d;
  /* 110e6b03 call 0x110e4092 */
  push32(0x110e6b08u); f_110e4092();
  /* 110e6b08 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 110e6b0e call 0x110e409b */
  push32(0x110e6b13u); f_110e409b();
  /* 110e6b13 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e6b16 mov eax, edi */
  EAX = (EDI);
  /* 110e6b18 jmp 0x110e6c47 */
  goto L_110e6c47;
L_110e6b1d:;
  /* 110e6b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 110e6b1f push esi */
  push32((uint32_t)(ESI));
  /* 110e6b20 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 110e6b23 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110e6b26 push eax */
  push32((uint32_t)(EAX));
  /* 110e6b27 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 110e6b2a push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 110e6b2d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e6b30 call dword ptr [0x110e9038] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9038))), 0x110e6b36u);
  /* 110e6b36 mov esi, eax */
  ESI = (EAX);
  /* 110e6b38 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6b3a jne 0x110e6b50 */
  if (!C.zf) goto L_110e6b50;
L_110e6b3c:;
  /* 110e6b3c call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e6b42u);
  /* 110e6b42 push eax */
  push32((uint32_t)(EAX));
  /* 110e6b43 call 0x110e401f */
  push32(0x110e6b48u); f_110e401f();
  /* 110e6b48 pop ecx */
  ECX = (pop32());
  /* 110e6b49 mov esi, edi */
  ESI = (EDI);
  /* 110e6b4b jmp 0x110e6c3e */
  goto L_110e6c3e;
L_110e6b50:;
  /* 110e6b50 push esi */
  push32((uint32_t)(ESI));
  /* 110e6b51 call dword ptr [0x110e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9098))), 0x110e6b57u);
  /* 110e6b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6b59 jne 0x110e6b64 */
  if (!C.zf) goto L_110e6b64;
  /* 110e6b5b push esi */
  push32((uint32_t)(ESI));
  /* 110e6b5c call dword ptr [0x110e9084] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9084))), 0x110e6b62u);
  /* 110e6b62 jmp 0x110e6b3c */
  goto L_110e6b3c;
L_110e6b64:;
  /* 110e6b64 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6b67 jne 0x110e6b6f */
  if (!C.zf) goto L_110e6b6f;
  /* 110e6b69 or byte ptr [ebp - 1], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x40u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
  /* 110e6b6d jmp 0x110e6b78 */
  goto L_110e6b78;
L_110e6b6f:;
  /* 110e6b6f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6b72 jne 0x110e6b78 */
  if (!C.zf) goto L_110e6b78;
  /* 110e6b74 or byte ptr [ebp - 1], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x1)))|(0x8u); w8((uint32_t)(EBP + -0x1), (_r)); fl_logic(_r,8); }
L_110e6b78:;
  /* 110e6b78 push esi */
  push32((uint32_t)(ESI));
  /* 110e6b79 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6b7a call 0x110e64dd */
  push32(0x110e6b7fu); f_110e64dd();
  /* 110e6b7f mov eax, ebx */
  EAX = (EBX);
  /* 110e6b81 pop ecx */
  ECX = (pop32());
  /* 110e6b82 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e6b85 pop ecx */
  ECX = (pop32());
  /* 110e6b86 mov cl, byte ptr [ebp - 1] */
  CL = (r8((uint32_t)(EBP + -0x1)));
  /* 110e6b89 lea edi, [eax*4 + 0x110edd00] */
  EDI = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e6b90 mov eax, ebx */
  EAX = (EBX);
  /* 110e6b92 or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 110e6b95 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6b98 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 110e6b9b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e6b9e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e6ba0 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e6ba3 and byte ptr [ebp + 0xb], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x48u); w8((uint32_t)(EBP + 0xb), (_r)); fl_logic(_r,8); }
  /* 110e6ba7 mov byte ptr [eax + esi + 4], cl */
  w8((uint32_t)(EAX + ESI*1 + 0x4), (CL));
  /* 110e6bab jne 0x110e6c25 */
  if (!C.zf) goto L_110e6c25;
  /* 110e6bad test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 110e6bb0 je 0x110e6c25 */
  if (C.zf) goto L_110e6c25;
  /* 110e6bb2 test byte ptr [ebp + 0xc], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x2u); fl_logic(_r,8); }
  /* 110e6bb6 je 0x110e6c25 */
  if (C.zf) goto L_110e6c25;
  /* 110e6bb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e6bba push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e6bbc push ebx */
  push32((uint32_t)(EBX));
  /* 110e6bbd call 0x110e4319 */
  push32(0x110e6bc2u); f_110e4319();
  /* 110e6bc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6bc5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6bc8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110e6bcb jne 0x110e6be6 */
  if (!C.zf) goto L_110e6be6;
  /* 110e6bcd call 0x110e409b */
  push32(0x110e6bd2u); f_110e409b();
  /* 110e6bd2 cmp dword ptr [eax], 0x83 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x83u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6bd8 je 0x110e6c25 */
  if (C.zf) goto L_110e6c25;
L_110e6bda:;
  /* 110e6bda push ebx */
  push32((uint32_t)(EBX));
  /* 110e6bdb call 0x110e364c */
  push32(0x110e6be0u); f_110e364c();
  /* 110e6be0 pop ecx */
  ECX = (pop32());
  /* 110e6be1 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 110e6be4 jmp 0x110e6c3e */
  goto L_110e6c3e;
L_110e6be6:;
  /* 110e6be6 and byte ptr [ebp + 0x13], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x13)))&(0x0u); w8((uint32_t)(EBP + 0x13), (_r)); fl_logic(_r,8); }
  /* 110e6bea lea eax, [ebp + 0x13] */
  EAX = ((uint32_t)(EBP + 0x13));
  /* 110e6bed push 1 */
  push32((uint32_t)(0x1u));
  /* 110e6bef push eax */
  push32((uint32_t)(EAX));
  /* 110e6bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6bf1 call 0x110e39cf */
  push32(0x110e6bf6u); f_110e39cf();
  /* 110e6bf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e6bfb jne 0x110e6c13 */
  if (!C.zf) goto L_110e6c13;
  /* 110e6bfd cmp byte ptr [ebp + 0x13], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6c01 jne 0x110e6c13 */
  if (!C.zf) goto L_110e6c13;
  /* 110e6c03 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 110e6c06 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6c07 call 0x110e7868 */
  push32(0x110e6c0cu); f_110e7868();
  /* 110e6c0c pop ecx */
  ECX = (pop32());
  /* 110e6c0d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6c10 pop ecx */
  ECX = (pop32());
  /* 110e6c11 je 0x110e6bda */
  if (C.zf) goto L_110e6bda;
L_110e6c13:;
  /* 110e6c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e6c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e6c17 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6c18 call 0x110e4319 */
  push32(0x110e6c1du); f_110e4319();
  /* 110e6c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6c20 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6c23 je 0x110e6bda */
  if (C.zf) goto L_110e6bda;
L_110e6c25:;
  /* 110e6c25 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6c29 jne 0x110e6c3c */
  if (!C.zf) goto L_110e6c3c;
  /* 110e6c2b test byte ptr [ebp + 0xc], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xc)))&(0x8u); fl_logic(_r,8); }
  /* 110e6c2f je 0x110e6c3c */
  if (C.zf) goto L_110e6c3c;
  /* 110e6c31 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e6c33 or byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))|(0x20u); w8((uint32_t)(EAX + ESI*1 + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e6c38 lea eax, [eax + esi + 4] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x4));
L_110e6c3c:;
  /* 110e6c3c mov esi, ebx */
  ESI = (EBX);
L_110e6c3e:;
  /* 110e6c3e push ebx */
  push32((uint32_t)(EBX));
  /* 110e6c3f call 0x110e6679 */
  push32(0x110e6c44u); f_110e6679();
  /* 110e6c44 pop ecx */
  ECX = (pop32());
  /* 110e6c45 mov eax, esi */
  EAX = (ESI);
L_110e6c47:;
  /* 110e6c47 pop edi */
  EDI = (pop32());
  /* 110e6c48 pop esi */
  ESI = (pop32());
  /* 110e6c49 pop ebx */
  EBX = (pop32());
  /* 110e6c4a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e6c4b ret  */
  ESPCHK(0x110e697du, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x110e6c50 (7 bytes, 3 insns) */
void f_110e6c50(void) {
  FTRACE(0x110e6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6c50 push edi */
  push32((uint32_t)(EDI));
  /* 110e6c51 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6c55 jmp 0x110e6cc1 */
  jmp_ind(0x110e6cc1u); return;
}

/* FUN_10006c60 @ 0x110e6c60 (224 bytes, 84 insns) */
void f_110e6c60(void) {
  FTRACE(0x110e6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6c60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6c64 push edi */
  push32((uint32_t)(EDI));
  /* 110e6c65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6c6b je 0x110e6c7c */
  if (C.zf) goto L_110e6c7c;
L_110e6c6d:;
  /* 110e6c6d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110e6c6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6c70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e6c72 je 0x110e6caf */
  if (C.zf) goto L_110e6caf;
  /* 110e6c74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6c7a jne 0x110e6c6d */
  if (!C.zf) goto L_110e6c6d;
L_110e6c7c:;
  /* 110e6c7c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110e6c7e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110e6c83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6c85 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6c88 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6c8a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6c8d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110e6c92 je 0x110e6c7c */
  if (C.zf) goto L_110e6c7c;
  /* 110e6c94 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110e6c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e6c99 je 0x110e6cbe */
  if (C.zf) goto L_110e6cbe;
  /* 110e6c9b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110e6c9d je 0x110e6cb9 */
  if (C.zf) goto L_110e6cb9;
  /* 110e6c9f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 110e6ca4 je 0x110e6cb4 */
  if (C.zf) goto L_110e6cb4;
  /* 110e6ca6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 110e6cab je 0x110e6caf */
  if (C.zf) goto L_110e6caf;
  /* 110e6cad jmp 0x110e6c7c */
  goto L_110e6c7c;
L_110e6caf:;
  /* 110e6caf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 110e6cb2 jmp 0x110e6cc1 */
  goto L_110e6cc1;
L_110e6cb4:;
  /* 110e6cb4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 110e6cb7 jmp 0x110e6cc1 */
  goto L_110e6cc1;
L_110e6cb9:;
  /* 110e6cb9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 110e6cbc jmp 0x110e6cc1 */
  goto L_110e6cc1;
L_110e6cbe:;
  /* 110e6cbe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_110e6cc1:;
  /* 110e6cc1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110e6cc5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6ccb je 0x110e6ce6 */
  if (C.zf) goto L_110e6ce6;
L_110e6ccd:;
  /* 110e6ccd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110e6ccf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6cd0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e6cd2 je 0x110e6d38 */
  if (C.zf) goto L_110e6d38;
  /* 110e6cd4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110e6cd6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e6cd7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6cdd jne 0x110e6ccd */
  if (!C.zf) goto L_110e6ccd;
  /* 110e6cdf jmp 0x110e6ce6 */
  goto L_110e6ce6;
L_110e6ce1:;
  /* 110e6ce1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e6ce3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110e6ce6:;
  /* 110e6ce6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110e6ceb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110e6ced add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6cef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6cf2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6cf4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110e6cf6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6cf9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110e6cfe je 0x110e6ce1 */
  if (C.zf) goto L_110e6ce1;
  /* 110e6d00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e6d02 je 0x110e6d38 */
  if (C.zf) goto L_110e6d38;
  /* 110e6d04 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 110e6d06 je 0x110e6d2f */
  if (C.zf) goto L_110e6d2f;
  /* 110e6d08 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 110e6d0e je 0x110e6d22 */
  if (C.zf) goto L_110e6d22;
  /* 110e6d10 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 110e6d16 je 0x110e6d1a */
  if (C.zf) goto L_110e6d1a;
  /* 110e6d18 jmp 0x110e6ce1 */
  goto L_110e6ce1;
L_110e6d1a:;
  /* 110e6d1a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e6d1c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6d20 pop edi */
  EDI = (pop32());
  /* 110e6d21 ret  */
  ESPCHK(0x110e6c60u, _esp0);
  ESP += 4; return;
L_110e6d22:;
  /* 110e6d22 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110e6d25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6d29 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 110e6d2d pop edi */
  EDI = (pop32());
  /* 110e6d2e ret  */
  ESPCHK(0x110e6c60u, _esp0);
  ESP += 4; return;
L_110e6d2f:;
  /* 110e6d2f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110e6d32 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6d36 pop edi */
  EDI = (pop32());
  /* 110e6d37 ret  */
  ESPCHK(0x110e6c60u, _esp0);
  ESP += 4; return;
L_110e6d38:;
  /* 110e6d38 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110e6d3a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e6d3e pop edi */
  EDI = (pop32());
  /* 110e6d3f ret  */
  ESPCHK(0x110e6c60u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x110e6d40 (123 bytes, 44 insns) */
void f_110e6d40(void) {
  FTRACE(0x110e6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6d40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6d44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6d4a je 0x110e6d60 */
  if (C.zf) goto L_110e6d60;
L_110e6d4c:;
  /* 110e6d4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110e6d4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6d4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e6d51 je 0x110e6d93 */
  if (C.zf) goto L_110e6d93;
  /* 110e6d53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110e6d59 jne 0x110e6d4c */
  if (!C.zf) goto L_110e6d4c;
  /* 110e6d5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110e6d60:;
  /* 110e6d60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110e6d62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110e6d67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6d69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e6d6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6d6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6d71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110e6d76 je 0x110e6d60 */
  if (C.zf) goto L_110e6d60;
  /* 110e6d78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110e6d7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e6d7d je 0x110e6db1 */
  if (C.zf) goto L_110e6db1;
  /* 110e6d7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110e6d81 je 0x110e6da7 */
  if (C.zf) goto L_110e6da7;
  /* 110e6d83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 110e6d88 je 0x110e6d9d */
  if (C.zf) goto L_110e6d9d;
  /* 110e6d8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 110e6d8f je 0x110e6d93 */
  if (C.zf) goto L_110e6d93;
  /* 110e6d91 jmp 0x110e6d60 */
  goto L_110e6d60;
L_110e6d93:;
  /* 110e6d93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 110e6d96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6d9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6d9c ret  */
  ESPCHK(0x110e6d40u, _esp0);
  ESP += 4; return;
L_110e6d9d:;
  /* 110e6d9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 110e6da0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6da4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6da6 ret  */
  ESPCHK(0x110e6d40u, _esp0);
  ESP += 4; return;
L_110e6da7:;
  /* 110e6da7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 110e6daa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6dae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6db0 ret  */
  ESPCHK(0x110e6d40u, _esp0);
  ESP += 4; return;
L_110e6db1:;
  /* 110e6db1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 110e6db4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6db8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6dba ret  */
  ESPCHK(0x110e6d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dbb @ 0x110e6dbb (429 bytes, 143 insns) */
void f_110e6dbb(void) {
  FTRACE(0x110e6dbbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6dbb push ebp */
  push32((uint32_t)(EBP));
  /* 110e6dbc mov ebp, esp */
  EBP = (ESP);
  /* 110e6dbe sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6dc1 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6dc2 push esi */
  push32((uint32_t)(ESI));
  /* 110e6dc3 push edi */
  push32((uint32_t)(EDI));
  /* 110e6dc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110e6dc6 call 0x110e5fb6 */
  push32(0x110e6dcbu); f_110e5fb6();
  /* 110e6dcb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e6dce call 0x110e6f68 */
  push32(0x110e6dd3u); f_110e6f68();
  /* 110e6dd3 mov ebx, eax */
  EBX = (EAX);
  /* 110e6dd5 pop ecx */
  ECX = (pop32());
  /* 110e6dd6 cmp ebx, dword ptr [0x110eda90] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110eda90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6ddc pop ecx */
  ECX = (pop32());
  /* 110e6ddd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e6de0 jne 0x110e6de9 */
  if (!C.zf) goto L_110e6de9;
L_110e6de2:;
  /* 110e6de2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e6de4 jmp 0x110e6f59 */
  goto L_110e6f59;
L_110e6de9:;
  /* 110e6de9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e6deb je 0x110e6f47 */
  if (C.zf) goto L_110e6f47;
  /* 110e6df1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e6df3 mov eax, 0x110ec988 */
  EAX = (0x110ec988u);
L_110e6df8:;
  /* 110e6df8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6dfa je 0x110e6e70 */
  if (C.zf) goto L_110e6e70;
  /* 110e6dfc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6dff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e6e00 cmp eax, 0x110eca78 */
  { uint32_t _a=(EAX),_b=(0x110eca78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6e05 jl 0x110e6df8 */
  if ((C.sf!=C.of)) goto L_110e6df8;
  /* 110e6e07 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 110e6e0a push eax */
  push32((uint32_t)(EAX));
  /* 110e6e0b push ebx */
  push32((uint32_t)(EBX));
  /* 110e6e0c call dword ptr [0x110e903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e903c))), 0x110e6e12u);
  /* 110e6e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e6e14 pop esi */
  ESI = (pop32());
  /* 110e6e15 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6e17 jne 0x110e6f3e */
  if (!C.zf) goto L_110e6f3e;
  /* 110e6e1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110e6e1f and dword ptr [0x110edcc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110edcc4)))&(0x0u); w32((uint32_t)(0x110edcc4), (_r)); fl_logic(_r,32); }
  /* 110e6e26 pop ecx */
  ECX = (pop32());
  /* 110e6e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6e29 mov edi, 0x110edbc0 */
  EDI = (0x110edbc0u);
  /* 110e6e2e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6e31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110e6e33 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110e6e34 mov dword ptr [0x110eda90], ebx */
  w32((uint32_t)(0x110eda90), (EBX));
  /* 110e6e3a jbe 0x110e6f2b */
  if ((C.cf||C.zf)) goto L_110e6f2b;
  /* 110e6e40 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6e44 je 0x110e6f06 */
  if (C.zf) goto L_110e6f06;
  /* 110e6e4a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_110e6e4d:;
  /* 110e6e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110e6e4f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e6e51 je 0x110e6f06 */
  if (C.zf) goto L_110e6f06;
  /* 110e6e57 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 110e6e5b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_110e6e5e:;
  /* 110e6e5e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6e60 ja 0x110e6efa */
  if ((!C.cf&&!C.zf)) goto L_110e6efa;
  /* 110e6e66 or byte ptr [eax + 0x110edbc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x4u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e6e6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e6e6e jmp 0x110e6e5e */
  goto L_110e6e5e;
L_110e6e70:;
  /* 110e6e70 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e6e74 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110e6e76 pop ecx */
  ECX = (pop32());
  /* 110e6e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6e79 mov edi, 0x110edbc0 */
  EDI = (0x110edbc0u);
  /* 110e6e7e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 110e6e81 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110e6e83 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 110e6e86 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110e6e87 lea ebx, [esi + 0x110ec998] */
  EBX = ((uint32_t)(ESI + 0x110ec998));
L_110e6e8d:;
  /* 110e6e8d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6e90 mov ecx, ebx */
  ECX = (EBX);
  /* 110e6e92 je 0x110e6ec0 */
  if (C.zf) goto L_110e6ec0;
L_110e6e94:;
  /* 110e6e94 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 110e6e97 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e6e99 je 0x110e6ec0 */
  if (C.zf) goto L_110e6ec0;
  /* 110e6e9b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 110e6e9e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 110e6ea1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6ea3 ja 0x110e6eb9 */
  if ((!C.cf&&!C.zf)) goto L_110e6eb9;
  /* 110e6ea5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e6ea8 mov dl, byte ptr [edx + 0x110ec980] */
  DL = (r8((uint32_t)(EDX + 0x110ec980)));
L_110e6eae:;
  /* 110e6eae or byte ptr [eax + 0x110edbc1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(DL); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e6eb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e6eb5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6eb7 jbe 0x110e6eae */
  if ((C.cf||C.zf)) goto L_110e6eae;
L_110e6eb9:;
  /* 110e6eb9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6eba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6ebb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6ebe jne 0x110e6e94 */
  if (!C.zf) goto L_110e6e94;
L_110e6ec0:;
  /* 110e6ec0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e6ec3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e6ec6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6eca jb 0x110e6e8d */
  if (C.cf) goto L_110e6e8d;
  /* 110e6ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e6ecf mov dword ptr [0x110edaac], 1 */
  w32((uint32_t)(0x110edaac), (0x1u));
  /* 110e6ed9 push eax */
  push32((uint32_t)(EAX));
  /* 110e6eda mov dword ptr [0x110eda90], eax */
  w32((uint32_t)(0x110eda90), (EAX));
  /* 110e6edf call 0x110e6fb2 */
  push32(0x110e6ee4u); f_110e6fb2();
  /* 110e6ee4 lea esi, [esi + 0x110ec98c] */
  ESI = ((uint32_t)(ESI + 0x110ec98c));
  /* 110e6eea mov edi, 0x110edaa0 */
  EDI = (0x110edaa0u);
  /* 110e6eef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110e6ef0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110e6ef1 pop ecx */
  ECX = (pop32());
  /* 110e6ef2 mov dword ptr [0x110edcc4], eax */
  w32((uint32_t)(0x110edcc4), (EAX));
  /* 110e6ef7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110e6ef8 jmp 0x110e6f4c */
  goto L_110e6f4c;
L_110e6efa:;
  /* 110e6efa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6efb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e6efc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e6f00 jne 0x110e6e4d */
  if (!C.zf) goto L_110e6e4d;
L_110e6f06:;
  /* 110e6f06 mov eax, esi */
  EAX = (ESI);
L_110e6f08:;
  /* 110e6f08 or byte ptr [eax + 0x110edbc1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x8u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e6f0f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e6f10 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6f15 jb 0x110e6f08 */
  if (C.cf) goto L_110e6f08;
  /* 110e6f17 push ebx */
  push32((uint32_t)(EBX));
  /* 110e6f18 call 0x110e6fb2 */
  push32(0x110e6f1du); f_110e6fb2();
  /* 110e6f1d pop ecx */
  ECX = (pop32());
  /* 110e6f1e mov dword ptr [0x110edcc4], eax */
  w32((uint32_t)(0x110edcc4), (EAX));
  /* 110e6f23 mov dword ptr [0x110edaac], esi */
  w32((uint32_t)(0x110edaac), (ESI));
  /* 110e6f29 jmp 0x110e6f32 */
  goto L_110e6f32;
L_110e6f2b:;
  /* 110e6f2b and dword ptr [0x110edaac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110edaac)))&(0x0u); w32((uint32_t)(0x110edaac), (_r)); fl_logic(_r,32); }
L_110e6f32:;
  /* 110e6f32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6f34 mov edi, 0x110edaa0 */
  EDI = (0x110edaa0u);
  /* 110e6f39 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e6f3a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e6f3b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e6f3c jmp 0x110e6f4c */
  goto L_110e6f4c;
L_110e6f3e:;
  /* 110e6f3e cmp dword ptr [0x110ed904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ed904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6f45 je 0x110e6f56 */
  if (C.zf) goto L_110e6f56;
L_110e6f47:;
  /* 110e6f47 call 0x110e6fe5 */
  push32(0x110e6f4cu); f_110e6fe5();
L_110e6f4c:;
  /* 110e6f4c call 0x110e700e */
  push32(0x110e6f51u); f_110e700e();
  /* 110e6f51 jmp 0x110e6de2 */
  goto L_110e6de2;
L_110e6f56:;
  /* 110e6f56 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_110e6f59:;
  /* 110e6f59 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110e6f5b call 0x110e6017 */
  push32(0x110e6f60u); f_110e6017();
  /* 110e6f60 pop ecx */
  ECX = (pop32());
  /* 110e6f61 mov eax, esi */
  EAX = (ESI);
  /* 110e6f63 pop edi */
  EDI = (pop32());
  /* 110e6f64 pop esi */
  ESI = (pop32());
  /* 110e6f65 pop ebx */
  EBX = (pop32());
  /* 110e6f66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e6f67 ret  */
  ESPCHK(0x110e6dbbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f68 @ 0x110e6f68 (74 bytes, 15 insns) */
void f_110e6f68(void) {
  FTRACE(0x110e6f68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6f68 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6f6c and dword ptr [0x110ed904], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110ed904)))&(0x0u); w32((uint32_t)(0x110ed904), (_r)); fl_logic(_r,32); }
  /* 110e6f73 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6f76 jne 0x110e6f88 */
  if (!C.zf) goto L_110e6f88;
  /* 110e6f78 mov dword ptr [0x110ed904], 1 */
  w32((uint32_t)(0x110ed904), (0x1u));
  /* 110e6f82 jmp dword ptr [0x110e902c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110e902c)))); return;
L_110e6f88:;
  /* 110e6f88 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6f8b jne 0x110e6f9d */
  if (!C.zf) goto L_110e6f9d;
  /* 110e6f8d mov dword ptr [0x110ed904], 1 */
  w32((uint32_t)(0x110ed904), (0x1u));
  /* 110e6f97 jmp dword ptr [0x110e9030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110e9030)))); return;
L_110e6f9d:;
  /* 110e6f9d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6fa0 jne 0x110e6fb1 */
  if (!C.zf) goto L_110e6fb1;
  /* 110e6fa2 mov eax, dword ptr [0x110ed930] */
  EAX = (r32((uint32_t)(0x110ed930)));
  /* 110e6fa7 mov dword ptr [0x110ed904], 1 */
  w32((uint32_t)(0x110ed904), (0x1u));
L_110e6fb1:;
  /* 110e6fb1 ret  */
  ESPCHK(0x110e6f68u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb2 @ 0x110e6fb2 (51 bytes, 19 insns) */
void f_110e6fb2(void) {
  FTRACE(0x110e6fb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6fb2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e6fb6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6fbb je 0x110e6fdf */
  if (C.zf) goto L_110e6fdf;
  /* 110e6fbd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6fc0 je 0x110e6fd9 */
  if (C.zf) goto L_110e6fd9;
  /* 110e6fc2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e6fc5 je 0x110e6fd3 */
  if (C.zf) goto L_110e6fd3;
  /* 110e6fc7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e6fc8 je 0x110e6fcd */
  if (C.zf) goto L_110e6fcd;
  /* 110e6fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6fcc ret  */
  ESPCHK(0x110e6fb2u, _esp0);
  ESP += 4; return;
L_110e6fcd:;
  /* 110e6fcd mov eax, 0x404 */
  EAX = (0x404u);
  /* 110e6fd2 ret  */
  ESPCHK(0x110e6fb2u, _esp0);
  ESP += 4; return;
L_110e6fd3:;
  /* 110e6fd3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 110e6fd8 ret  */
  ESPCHK(0x110e6fb2u, _esp0);
  ESP += 4; return;
L_110e6fd9:;
  /* 110e6fd9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 110e6fde ret  */
  ESPCHK(0x110e6fb2u, _esp0);
  ESP += 4; return;
L_110e6fdf:;
  /* 110e6fdf mov eax, 0x411 */
  EAX = (0x411u);
  /* 110e6fe4 ret  */
  ESPCHK(0x110e6fb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe5 @ 0x110e6fe5 (41 bytes, 17 insns) */
void f_110e6fe5(void) {
  FTRACE(0x110e6fe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6fe5 push edi */
  push32((uint32_t)(EDI));
  /* 110e6fe6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110e6fe8 pop ecx */
  ECX = (pop32());
  /* 110e6fe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6feb mov edi, 0x110edbc0 */
  EDI = (0x110edbc0u);
  /* 110e6ff0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110e6ff2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110e6ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e6ff5 mov edi, 0x110edaa0 */
  EDI = (0x110edaa0u);
  /* 110e6ffa mov dword ptr [0x110eda90], eax */
  w32((uint32_t)(0x110eda90), (EAX));
  /* 110e6fff mov dword ptr [0x110edaac], eax */
  w32((uint32_t)(0x110edaac), (EAX));
  /* 110e7004 mov dword ptr [0x110edcc4], eax */
  w32((uint32_t)(0x110edcc4), (EAX));
  /* 110e7009 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e700a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e700b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110e700c pop edi */
  EDI = (pop32());
  /* 110e700d ret  */
  ESPCHK(0x110e6fe5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000700e @ 0x110e700e (389 bytes, 124 insns) */
void f_110e700e(void) {
  FTRACE(0x110e700eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e700e push ebp */
  push32((uint32_t)(EBP));
  /* 110e700f mov ebp, esp */
  EBP = (ESP);
  /* 110e7011 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7017 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 110e701a push esi */
  push32((uint32_t)(ESI));
  /* 110e701b push eax */
  push32((uint32_t)(EAX));
  /* 110e701c push dword ptr [0x110eda90] */
  push32((uint32_t)(r32((uint32_t)(0x110eda90))));
  /* 110e7022 call dword ptr [0x110e903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e903c))), 0x110e7028u);
  /* 110e7028 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e702b jne 0x110e7147 */
  if (!C.zf) goto L_110e7147;
  /* 110e7031 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e7033 mov esi, 0x100 */
  ESI = (0x100u);
L_110e7038:;
  /* 110e7038 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 110e703f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e7040 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7042 jb 0x110e7038 */
  if (C.cf) goto L_110e7038;
  /* 110e7044 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 110e7047 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 110e704e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e7050 je 0x110e7089 */
  if (C.zf) goto L_110e7089;
  /* 110e7052 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7053 push edi */
  push32((uint32_t)(EDI));
  /* 110e7054 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_110e7057:;
  /* 110e7057 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 110e705a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 110e705d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e705f ja 0x110e707e */
  if ((!C.cf&&!C.zf)) goto L_110e707e;
  /* 110e7061 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7063 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 110e706a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e706b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 110e7070 mov ebx, ecx */
  EBX = (ECX);
  /* 110e7072 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e7075 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110e7077 mov ecx, ebx */
  ECX = (EBX);
  /* 110e7079 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e707c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_110e707e:;
  /* 110e707e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e707f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e7080 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 110e7083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e7085 jne 0x110e7057 */
  if (!C.zf) goto L_110e7057;
  /* 110e7087 pop edi */
  EDI = (pop32());
  /* 110e7088 pop ebx */
  EBX = (pop32());
L_110e7089:;
  /* 110e7089 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e708b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 110e7091 push dword ptr [0x110edcc4] */
  push32((uint32_t)(r32((uint32_t)(0x110edcc4))));
  /* 110e7097 push dword ptr [0x110eda90] */
  push32((uint32_t)(r32((uint32_t)(0x110eda90))));
  /* 110e709d push eax */
  push32((uint32_t)(EAX));
  /* 110e709e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110e70a4 push esi */
  push32((uint32_t)(ESI));
  /* 110e70a5 push eax */
  push32((uint32_t)(EAX));
  /* 110e70a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e70a8 call 0x110e7bdc */
  push32(0x110e70adu); f_110e7bdc();
  /* 110e70ad push 0 */
  push32((uint32_t)(0x0u));
  /* 110e70af lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 110e70b5 push dword ptr [0x110eda90] */
  push32((uint32_t)(r32((uint32_t)(0x110eda90))));
  /* 110e70bb push esi */
  push32((uint32_t)(ESI));
  /* 110e70bc push eax */
  push32((uint32_t)(EAX));
  /* 110e70bd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110e70c3 push esi */
  push32((uint32_t)(ESI));
  /* 110e70c4 push eax */
  push32((uint32_t)(EAX));
  /* 110e70c5 push esi */
  push32((uint32_t)(ESI));
  /* 110e70c6 push dword ptr [0x110edcc4] */
  push32((uint32_t)(r32((uint32_t)(0x110edcc4))));
  /* 110e70cc call 0x110e798d */
  push32(0x110e70d1u); f_110e798d();
  /* 110e70d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e70d3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 110e70d9 push dword ptr [0x110eda90] */
  push32((uint32_t)(r32((uint32_t)(0x110eda90))));
  /* 110e70df push esi */
  push32((uint32_t)(ESI));
  /* 110e70e0 push eax */
  push32((uint32_t)(EAX));
  /* 110e70e1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110e70e7 push esi */
  push32((uint32_t)(ESI));
  /* 110e70e8 push eax */
  push32((uint32_t)(EAX));
  /* 110e70e9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 110e70ee push dword ptr [0x110edcc4] */
  push32((uint32_t)(r32((uint32_t)(0x110edcc4))));
  /* 110e70f4 call 0x110e798d */
  push32(0x110e70f9u); f_110e798d();
  /* 110e70f9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e70fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e70fe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_110e7104:;
  /* 110e7104 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 110e7107 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 110e710a je 0x110e7122 */
  if (C.zf) goto L_110e7122;
  /* 110e710c or byte ptr [eax + 0x110edbc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x10u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e7113 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_110e711a:;
  /* 110e711a mov byte ptr [eax + 0x110edac0], dl */
  w8((uint32_t)(EAX + 0x110edac0), (DL));
  /* 110e7120 jmp 0x110e713e */
  goto L_110e713e;
L_110e7122:;
  /* 110e7122 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 110e7125 je 0x110e7137 */
  if (C.zf) goto L_110e7137;
  /* 110e7127 or byte ptr [eax + 0x110edbc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x20u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e712e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 110e7135 jmp 0x110e711a */
  goto L_110e711a;
L_110e7137:;
  /* 110e7137 and byte ptr [eax + 0x110edac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edac0)))&(0x0u); w8((uint32_t)(EAX + 0x110edac0), (_r)); fl_logic(_r,8); }
L_110e713e:;
  /* 110e713e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e713f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e7140 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e7141 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7143 jb 0x110e7104 */
  if (C.cf) goto L_110e7104;
  /* 110e7145 jmp 0x110e7190 */
  goto L_110e7190;
L_110e7147:;
  /* 110e7147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e7149 mov esi, 0x100 */
  ESI = (0x100u);
L_110e714e:;
  /* 110e714e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7151 jb 0x110e716c */
  if (C.cf) goto L_110e716c;
  /* 110e7153 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7156 ja 0x110e716c */
  if ((!C.cf&&!C.zf)) goto L_110e716c;
  /* 110e7158 or byte ptr [eax + 0x110edbc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x10u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e715f mov cl, al */
  CL = (AL);
  /* 110e7161 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_110e7164:;
  /* 110e7164 mov byte ptr [eax + 0x110edac0], cl */
  w8((uint32_t)(EAX + 0x110edac0), (CL));
  /* 110e716a jmp 0x110e718b */
  goto L_110e718b;
L_110e716c:;
  /* 110e716c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e716f jb 0x110e7184 */
  if (C.cf) goto L_110e7184;
  /* 110e7171 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7174 ja 0x110e7184 */
  if ((!C.cf&&!C.zf)) goto L_110e7184;
  /* 110e7176 or byte ptr [eax + 0x110edbc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edbc1)))|(0x20u); w8((uint32_t)(EAX + 0x110edbc1), (_r)); fl_logic(_r,8); }
  /* 110e717d mov cl, al */
  CL = (AL);
  /* 110e717f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e7182 jmp 0x110e7164 */
  goto L_110e7164;
L_110e7184:;
  /* 110e7184 and byte ptr [eax + 0x110edac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110edac0)))&(0x0u); w8((uint32_t)(EAX + 0x110edac0), (_r)); fl_logic(_r,8); }
L_110e718b:;
  /* 110e718b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e718c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e718e jb 0x110e714e */
  if (C.cf) goto L_110e714e;
L_110e7190:;
  /* 110e7190 pop esi */
  ESI = (pop32());
  /* 110e7191 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7192 ret  */
  ESPCHK(0x110e700eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007193 @ 0x110e7193 (28 bytes, 7 insns) */
void f_110e7193(void) {
  FTRACE(0x110e7193u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7193 cmp dword ptr [0x110edcf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110edcf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e719a jne 0x110e71ae */
  if (!C.zf) goto L_110e71ae;
  /* 110e719c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 110e719e call 0x110e6dbb */
  push32(0x110e71a3u); f_110e6dbb();
  /* 110e71a3 pop ecx */
  ECX = (pop32());
  /* 110e71a4 mov dword ptr [0x110edcf0], 1 */
  w32((uint32_t)(0x110edcf0), (0x1u));
L_110e71ae:;
  /* 110e71ae ret  */
  ESPCHK(0x110e7193u, _esp0);
  ESP += 4; return;
}

/* FUN_100071af @ 0x110e71af (23 bytes, 7 insns) */
void f_110e71af(void) {
  FTRACE(0x110e71afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e71af push 0 */
  push32((uint32_t)(0x0u));
  /* 110e71b1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110e71b5 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110e71b9 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110e71bd call 0x110e71c6 */
  push32(0x110e71c2u); f_110e71c6();
  /* 110e71c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e71c5 ret  */
  ESPCHK(0x110e71afu, _esp0);
  ESP += 4; return;
}

/* FUN_100071c6 @ 0x110e71c6 (517 bytes, 195 insns) */
void f_110e71c6(void) {
  FTRACE(0x110e71c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e71c6 push ebp */
  push32((uint32_t)(EBP));
  /* 110e71c7 mov ebp, esp */
  EBP = (ESP);
  /* 110e71c9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e71cc push ebx */
  push32((uint32_t)(EBX));
  /* 110e71cd and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e71d1 push esi */
  push32((uint32_t)(ESI));
  /* 110e71d2 push edi */
  push32((uint32_t)(EDI));
  /* 110e71d3 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e71d6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 110e71d8 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 110e71db mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_110e71de:;
  /* 110e71de cmp dword ptr [0x110ecc8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ecc8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e71e5 jle 0x110e71f6 */
  if ((C.zf||C.sf!=C.of)) goto L_110e71f6;
  /* 110e71e7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 110e71ea push 8 */
  push32((uint32_t)(0x8u));
  /* 110e71ec push eax */
  push32((uint32_t)(EAX));
  /* 110e71ed call 0x110e7e60 */
  push32(0x110e71f2u); f_110e7e60();
  /* 110e71f2 pop ecx */
  ECX = (pop32());
  /* 110e71f3 pop ecx */
  ECX = (pop32());
  /* 110e71f4 jmp 0x110e7205 */
  goto L_110e7205;
L_110e71f6:;
  /* 110e71f6 mov ecx, dword ptr [0x110eca80] */
  ECX = (r32((uint32_t)(0x110eca80)));
  /* 110e71fc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 110e71ff mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 110e7202 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_110e7205:;
  /* 110e7205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7207 je 0x110e720e */
  if (C.zf) goto L_110e720e;
  /* 110e7209 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 110e720b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e720c jmp 0x110e71de */
  goto L_110e71de;
L_110e720e:;
  /* 110e720e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7211 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 110e7214 jne 0x110e721c */
  if (!C.zf) goto L_110e721c;
  /* 110e7216 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 110e721a jmp 0x110e7221 */
  goto L_110e7221;
L_110e721c:;
  /* 110e721c cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e721f jne 0x110e7227 */
  if (!C.zf) goto L_110e7227;
L_110e7221:;
  /* 110e7221 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 110e7223 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e7224 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_110e7227:;
  /* 110e7227 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e722a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e722c jl 0x110e73bb */
  if ((C.sf!=C.of)) goto L_110e73bb;
  /* 110e7232 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7235 je 0x110e73bb */
  if (C.zf) goto L_110e73bb;
  /* 110e723b cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e723e jg 0x110e73bb */
  if ((!C.zf&&C.sf==C.of)) goto L_110e73bb;
  /* 110e7244 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110e7246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7248 pop ecx */
  ECX = (pop32());
  /* 110e7249 jne 0x110e726f */
  if (!C.zf) goto L_110e726f;
  /* 110e724b cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e724e je 0x110e7259 */
  if (C.zf) goto L_110e7259;
  /* 110e7250 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 110e7257 jmp 0x110e728b */
  goto L_110e728b;
L_110e7259:;
  /* 110e7259 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e725b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e725d je 0x110e726c */
  if (C.zf) goto L_110e726c;
  /* 110e725f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7261 je 0x110e726c */
  if (C.zf) goto L_110e726c;
  /* 110e7263 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 110e726a jmp 0x110e728b */
  goto L_110e728b;
L_110e726c:;
  /* 110e726c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_110e726f:;
  /* 110e726f cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7272 jne 0x110e728b */
  if (!C.zf) goto L_110e728b;
  /* 110e7274 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7277 jne 0x110e728b */
  if (!C.zf) goto L_110e728b;
  /* 110e7279 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e727b cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e727d je 0x110e7283 */
  if (C.zf) goto L_110e7283;
  /* 110e727f cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7281 jne 0x110e728b */
  if (!C.zf) goto L_110e728b;
L_110e7283:;
  /* 110e7283 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e7287 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e7288 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_110e728b:;
  /* 110e728b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e728e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e7290 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e7293 mov edi, 0x103 */
  EDI = (0x103u);
  /* 110e7298 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_110e729b:;
  /* 110e729b cmp dword ptr [0x110ecc8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ecc8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e72a2 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 110e72a5 jle 0x110e72b3 */
  if ((C.zf||C.sf!=C.of)) goto L_110e72b3;
  /* 110e72a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e72a9 push esi */
  push32((uint32_t)(ESI));
  /* 110e72aa call 0x110e7e60 */
  push32(0x110e72afu); f_110e7e60();
  /* 110e72af pop ecx */
  ECX = (pop32());
  /* 110e72b0 pop ecx */
  ECX = (pop32());
  /* 110e72b1 jmp 0x110e72be */
  goto L_110e72be;
L_110e72b3:;
  /* 110e72b3 mov eax, dword ptr [0x110eca80] */
  EAX = (r32((uint32_t)(0x110eca80)));
  /* 110e72b8 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 110e72bb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_110e72be:;
  /* 110e72be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e72c0 je 0x110e72ca */
  if (C.zf) goto L_110e72ca;
  /* 110e72c2 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 110e72c5 sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e72c8 jmp 0x110e72fc */
  goto L_110e72fc;
L_110e72ca:;
  /* 110e72ca cmp dword ptr [0x110ecc8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ecc8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e72d1 jle 0x110e72de */
  if ((C.zf||C.sf!=C.of)) goto L_110e72de;
  /* 110e72d3 push edi */
  push32((uint32_t)(EDI));
  /* 110e72d4 push esi */
  push32((uint32_t)(ESI));
  /* 110e72d5 call 0x110e7e60 */
  push32(0x110e72dau); f_110e7e60();
  /* 110e72da pop ecx */
  ECX = (pop32());
  /* 110e72db pop ecx */
  ECX = (pop32());
  /* 110e72dc jmp 0x110e72e9 */
  goto L_110e72e9;
L_110e72de:;
  /* 110e72de mov eax, dword ptr [0x110eca80] */
  EAX = (r32((uint32_t)(0x110eca80)));
  /* 110e72e3 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 110e72e7 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_110e72e9:;
  /* 110e72e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e72eb je 0x110e7337 */
  if (C.zf) goto L_110e7337;
  /* 110e72ed movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 110e72f0 push eax */
  push32((uint32_t)(EAX));
  /* 110e72f1 call 0x110e7d25 */
  push32(0x110e72f6u); f_110e7d25();
  /* 110e72f6 pop ecx */
  ECX = (pop32());
  /* 110e72f7 mov ecx, eax */
  ECX = (EAX);
  /* 110e72f9 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_110e72fc:;
  /* 110e72fc cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e72ff jae 0x110e7337 */
  if (!C.cf) goto L_110e7337;
  /* 110e7301 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 110e7304 or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 110e7308 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e730b jb 0x110e7321 */
  if (C.cf) goto L_110e7321;
  /* 110e730d jne 0x110e731b */
  if (!C.zf) goto L_110e731b;
  /* 110e730f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e7312 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e7314 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e7317 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7319 jbe 0x110e7321 */
  if ((C.cf||C.zf)) goto L_110e7321;
L_110e731b:;
  /* 110e731b or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 110e731f jmp 0x110e732a */
  goto L_110e732a;
L_110e7321:;
  /* 110e7321 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e7325 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7327 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_110e732a:;
  /* 110e732a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e732d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e7330 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 110e7332 jmp 0x110e729b */
  goto L_110e729b;
L_110e7337:;
  /* 110e7337 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e733a dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 110e733d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e7340 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 110e7342 jne 0x110e7354 */
  if (!C.zf) goto L_110e7354;
  /* 110e7344 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e7346 je 0x110e734e */
  if (C.zf) goto L_110e734e;
  /* 110e7348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e734b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110e734e:;
  /* 110e734e and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e7352 jmp 0x110e739f */
  goto L_110e739f;
L_110e7354:;
  /* 110e7354 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 110e7356 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 110e735b jne 0x110e7378 */
  if (!C.zf) goto L_110e7378;
  /* 110e735d test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 110e735f jne 0x110e739f */
  if (!C.zf) goto L_110e739f;
  /* 110e7361 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 110e7364 je 0x110e736f */
  if (C.zf) goto L_110e736f;
  /* 110e7366 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e736d ja 0x110e7378 */
  if ((!C.cf&&!C.zf)) goto L_110e7378;
L_110e736f:;
  /* 110e736f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7371 jne 0x110e739f */
  if (!C.zf) goto L_110e739f;
  /* 110e7373 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7376 jbe 0x110e739f */
  if ((C.cf||C.zf)) goto L_110e739f;
L_110e7378:;
  /* 110e7378 call 0x110e4092 */
  push32(0x110e737du); f_110e4092();
  /* 110e737d test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 110e7381 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 110e7387 je 0x110e738f */
  if (C.zf) goto L_110e738f;
  /* 110e7389 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e738d jmp 0x110e739f */
  goto L_110e739f;
L_110e738f:;
  /* 110e738f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e7392 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 110e7394 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 110e7396 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7398 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e739a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e739c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110e739f:;
  /* 110e739f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e73a1 je 0x110e73a8 */
  if (C.zf) goto L_110e73a8;
  /* 110e73a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e73a6 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_110e73a8:;
  /* 110e73a8 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 110e73ac je 0x110e73b6 */
  if (C.zf) goto L_110e73b6;
  /* 110e73ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e73b1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e73b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110e73b6:;
  /* 110e73b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e73b9 jmp 0x110e73c6 */
  goto L_110e73c6;
L_110e73bb:;
  /* 110e73bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e73be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e73c0 je 0x110e73c4 */
  if (C.zf) goto L_110e73c4;
  /* 110e73c2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_110e73c4:;
  /* 110e73c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e73c6:;
  /* 110e73c6 pop edi */
  EDI = (pop32());
  /* 110e73c7 pop esi */
  ESI = (pop32());
  /* 110e73c8 pop ebx */
  EBX = (pop32());
  /* 110e73c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e73ca ret  */
  ESPCHK(0x110e71c6u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x110e73d0 (56 bytes, 31 insns) */
void f_110e73d0(void) {
  FTRACE(0x110e73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e73d1 mov ebp, esp */
  EBP = (ESP);
  /* 110e73d3 push edi */
  push32((uint32_t)(EDI));
  /* 110e73d4 push esi */
  push32((uint32_t)(ESI));
  /* 110e73d5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e73d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e73d9 jecxz 0x110e7401 */
  x86_unimpl("jecxz @ 0x110e73d9");
  /* 110e73db mov ebx, ecx */
  EBX = (ECX);
  /* 110e73dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e73e0 mov esi, edi */
  ESI = (EDI);
  /* 110e73e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e73e4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e73e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e73e8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e73ea mov edi, esi */
  EDI = (ESI);
  /* 110e73ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e73ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 110e73f1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 110e73f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e73f6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e73f9 ja 0x110e73ff */
  if ((!C.cf&&!C.zf)) goto L_110e73ff;
  /* 110e73fb je 0x110e7401 */
  if (C.zf) goto L_110e7401;
  /* 110e73fd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e73fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_110e73ff:;
  /* 110e73ff not ecx */
  ECX = (~(ECX));
L_110e7401:;
  /* 110e7401 mov eax, ecx */
  EAX = (ECX);
  /* 110e7403 pop ebx */
  EBX = (pop32());
  /* 110e7404 pop esi */
  ESI = (pop32());
  /* 110e7405 pop edi */
  EDI = (pop32());
  /* 110e7406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7407 ret  */
  ESPCHK(0x110e73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x110e7410 (47 bytes, 17 insns) */
void f_110e7410(void) {
  FTRACE(0x110e7410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7410 push ecx */
  push32((uint32_t)(ECX));
  /* 110e7411 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7416 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 110e741a jb 0x110e7430 */
  if (C.cf) goto L_110e7430;
L_110e741c:;
  /* 110e741c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7422 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7427 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110e7429 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e742e jae 0x110e741c */
  if (!C.cf) goto L_110e741c;
L_110e7430:;
  /* 110e7430 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7432 mov eax, esp */
  EAX = (ESP);
  /* 110e7434 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110e7436 mov esp, ecx */
  ESP = (ECX);
  /* 110e7438 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110e743a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 110e743d push eax */
  push32((uint32_t)(EAX));
  /* 110e743e ret  */
  ESPCHK(0x110e7410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000743f @ 0x110e743f (137 bytes, 50 insns) */
void f_110e743f(void) {
  FTRACE(0x110e743fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e743f push ebx */
  push32((uint32_t)(EBX));
  /* 110e7440 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e7442 cmp dword ptr [0x110ed908], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110ed908))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7448 push esi */
  push32((uint32_t)(ESI));
  /* 110e7449 push edi */
  push32((uint32_t)(EDI));
  /* 110e744a jne 0x110e748e */
  if (!C.zf) goto L_110e748e;
  /* 110e744c push 0x110e9528 */
  push32((uint32_t)(0x110e9528u));
  /* 110e7451 call dword ptr [0x110e9024] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9024))), 0x110e7457u);
  /* 110e7457 mov edi, eax */
  EDI = (EAX);
  /* 110e7459 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e745b je 0x110e74c4 */
  if (C.zf) goto L_110e74c4;
  /* 110e745d mov esi, dword ptr [0x110e9034] */
  ESI = (r32((uint32_t)(0x110e9034)));
  /* 110e7463 push 0x110e951c */
  push32((uint32_t)(0x110e951cu));
  /* 110e7468 push edi */
  push32((uint32_t)(EDI));
  /* 110e7469 call esi */
  call_ind((uint32_t)(ESI), 0x110e746bu);
  /* 110e746b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e746d mov dword ptr [0x110ed908], eax */
  w32((uint32_t)(0x110ed908), (EAX));
  /* 110e7472 je 0x110e74c4 */
  if (C.zf) goto L_110e74c4;
  /* 110e7474 push 0x110e950c */
  push32((uint32_t)(0x110e950cu));
  /* 110e7479 push edi */
  push32((uint32_t)(EDI));
  /* 110e747a call esi */
  call_ind((uint32_t)(ESI), 0x110e747cu);
  /* 110e747c push 0x110e94f8 */
  push32((uint32_t)(0x110e94f8u));
  /* 110e7481 push edi */
  push32((uint32_t)(EDI));
  /* 110e7482 mov dword ptr [0x110ed90c], eax */
  w32((uint32_t)(0x110ed90c), (EAX));
  /* 110e7487 call esi */
  call_ind((uint32_t)(ESI), 0x110e7489u);
  /* 110e7489 mov dword ptr [0x110ed910], eax */
  w32((uint32_t)(0x110ed910), (EAX));
L_110e748e:;
  /* 110e748e mov eax, dword ptr [0x110ed90c] */
  EAX = (r32((uint32_t)(0x110ed90c)));
  /* 110e7493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7495 je 0x110e74ad */
  if (C.zf) goto L_110e74ad;
  /* 110e7497 call eax */
  call_ind((uint32_t)(EAX), 0x110e7499u);
  /* 110e7499 mov ebx, eax */
  EBX = (EAX);
  /* 110e749b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e749d je 0x110e74ad */
  if (C.zf) goto L_110e74ad;
  /* 110e749f mov eax, dword ptr [0x110ed910] */
  EAX = (r32((uint32_t)(0x110ed910)));
  /* 110e74a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e74a6 je 0x110e74ad */
  if (C.zf) goto L_110e74ad;
  /* 110e74a8 push ebx */
  push32((uint32_t)(EBX));
  /* 110e74a9 call eax */
  call_ind((uint32_t)(EAX), 0x110e74abu);
  /* 110e74ab mov ebx, eax */
  EBX = (EAX);
L_110e74ad:;
  /* 110e74ad push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e74b1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e74b5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e74b9 push ebx */
  push32((uint32_t)(EBX));
  /* 110e74ba call dword ptr [0x110ed908] */
  call_ind((uint32_t)(r32((uint32_t)(0x110ed908))), 0x110e74c0u);
L_110e74c0:;
  /* 110e74c0 pop edi */
  EDI = (pop32());
  /* 110e74c1 pop esi */
  ESI = (pop32());
  /* 110e74c2 pop ebx */
  EBX = (pop32());
  /* 110e74c3 ret  */
  ESPCHK(0x110e743fu, _esp0);
  ESP += 4; return;
L_110e74c4:;
  /* 110e74c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e74c6 jmp 0x110e74c0 */
  goto L_110e74c0;
}

/* FUN_100074d0 @ 0x110e74d0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_110e74d0(void) {
  FTRACE(0x110e74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e74d1 mov ebp, esp */
  EBP = (ESP);
  /* 110e74d3 push edi */
  push32((uint32_t)(EDI));
  /* 110e74d4 push esi */
  push32((uint32_t)(ESI));
  /* 110e74d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e74d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e74db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e74de mov eax, ecx */
  EAX = (ECX);
  /* 110e74e0 mov edx, ecx */
  EDX = (ECX);
  /* 110e74e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e74e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e74e6 jbe 0x110e74f0 */
  if ((C.cf||C.zf)) goto L_110e74f0;
  /* 110e74e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e74ea jb 0x110e7668 */
  if (C.cf) goto L_110e7668;
L_110e74f0:;
  /* 110e74f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e74f6 jne 0x110e750c */
  if (!C.zf) goto L_110e750c;
  /* 110e74f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e74fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110e74fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7501 jb 0x110e752c */
  if (C.cf) goto L_110e752c;
  /* 110e7503 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7505 jmp dword ptr [edx*4 + 0x110e7618] */
  switch (EDX) {
    case 0: goto L_110e7628;
    case 1: goto L_110e7630;
    case 2: goto L_110e763c;
    case 3: goto L_110e7650;
    default: x86_unimpl("switch@0x110e7505 out of table"); return;
  }
L_110e750c:;
  /* 110e750c mov eax, edi */
  EAX = (EDI);
  /* 110e750e mov edx, 3 */
  EDX = (0x3u);
  /* 110e7513 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7516 jb 0x110e7524 */
  if (C.cf) goto L_110e7524;
  /* 110e7518 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110e751b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e751d jmp dword ptr [eax*4 + 0x110e7530] */
  switch (EAX) {
    case 1: goto L_110e7540;
    case 2: goto L_110e756c;
    case 3: goto L_110e7590;
    default: x86_unimpl("switch@0x110e751d out of table"); return;
  }
L_110e7524:;
  /* 110e7524 jmp dword ptr [ecx*4 + 0x110e7628] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x110e7628)))); return;
  /* 110e752b nop  */
  /* nop */
L_110e752c:;
  /* 110e752c jmp dword ptr [ecx*4 + 0x110e75ac] */
  switch (ECX) {
    case 0: goto L_110e760f;
    case 1: goto L_110e75fc;
    case 2: goto L_110e75f4;
    case 3: goto L_110e75ec;
    case 4: goto L_110e75e4;
    case 5: goto L_110e75dc;
    case 6: goto L_110e75d4;
    case 7: goto L_110e75cc;
    default: x86_unimpl("switch@0x110e752c out of table"); return;
  }
  /* 110e7533 nop  */
  /* nop */
L_110e7540:;
  /* 110e7540 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e7542 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7544 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7546 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7549 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e754c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e754f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e7552 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e7555 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7558 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e755b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e755e jb 0x110e752c */
  if (C.cf) goto L_110e752c;
  /* 110e7560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7562 jmp dword ptr [edx*4 + 0x110e7618] */
  switch (EDX) {
    case 0: goto L_110e7628;
    case 1: goto L_110e7630;
    case 2: goto L_110e763c;
    case 3: goto L_110e7650;
    default: x86_unimpl("switch@0x110e7562 out of table"); return;
  }
  /* 110e7569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e756c:;
  /* 110e756c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e756e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7570 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7572 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7575 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e7578 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e757b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e757e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7581 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7584 jb 0x110e752c */
  if (C.cf) goto L_110e752c;
  /* 110e7586 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7588 jmp dword ptr [edx*4 + 0x110e7618] */
  switch (EDX) {
    case 0: goto L_110e7628;
    case 1: goto L_110e7630;
    case 2: goto L_110e763c;
    case 3: goto L_110e7650;
    default: x86_unimpl("switch@0x110e7588 out of table"); return;
  }
  /* 110e758f nop  */
  /* nop */
L_110e7590:;
  /* 110e7590 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e7592 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7594 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7596 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e7597 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e759a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e759b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e759e jb 0x110e752c */
  if (C.cf) goto L_110e752c;
  /* 110e75a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e75a2 jmp dword ptr [edx*4 + 0x110e7618] */
  switch (EDX) {
    case 0: goto L_110e7628;
    case 1: goto L_110e7630;
    case 2: goto L_110e763c;
    case 3: goto L_110e7650;
    default: x86_unimpl("switch@0x110e75a2 out of table"); return;
  }
  /* 110e75a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e75cc:;
  /* 110e75cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 110e75d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_110e75d4:;
  /* 110e75d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 110e75d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_110e75dc:;
  /* 110e75dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 110e75e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_110e75e4:;
  /* 110e75e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 110e75e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_110e75ec:;
  /* 110e75ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 110e75f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_110e75f4:;
  /* 110e75f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 110e75f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_110e75fc:;
  /* 110e75fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 110e7600 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 110e7604 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110e760b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e760d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110e760f:;
  /* 110e760f jmp dword ptr [edx*4 + 0x110e7618] */
  switch (EDX) {
    case 0: goto L_110e7628;
    case 1: goto L_110e7630;
    case 2: goto L_110e763c;
    case 3: goto L_110e7650;
    default: x86_unimpl("switch@0x110e760f out of table"); return;
  }
  /* 110e7616 mov edi, edi */
  EDI = (EDI);
L_110e7628:;
  /* 110e7628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e762b pop esi */
  ESI = (pop32());
  /* 110e762c pop edi */
  EDI = (pop32());
  /* 110e762d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e762e ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e762f nop  */
  /* nop */
L_110e7630:;
  /* 110e7630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7632 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7637 pop esi */
  ESI = (pop32());
  /* 110e7638 pop edi */
  EDI = (pop32());
  /* 110e7639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e763a ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e763b nop  */
  /* nop */
L_110e763c:;
  /* 110e763c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e763e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7640 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7643 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e7646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7649 pop esi */
  ESI = (pop32());
  /* 110e764a pop edi */
  EDI = (pop32());
  /* 110e764b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e764c ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e764d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e7650:;
  /* 110e7650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7654 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7657 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e765a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e765d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e7660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7663 pop esi */
  ESI = (pop32());
  /* 110e7664 pop edi */
  EDI = (pop32());
  /* 110e7665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7666 ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e7667 nop  */
  /* nop */
L_110e7668:;
  /* 110e7668 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 110e766c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 110e7670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e7676 jne 0x110e769c */
  if (!C.zf) goto L_110e769c;
  /* 110e7678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e767b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110e767e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7681 jb 0x110e7690 */
  if (C.cf) goto L_110e7690;
  /* 110e7683 std  */
  C.df=1;
  /* 110e7684 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7686 cld  */
  C.df=0;
  /* 110e7687 jmp dword ptr [edx*4 + 0x110e77b0] */
  switch (EDX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e7687 out of table"); return;
  }
  /* 110e768e mov edi, edi */
  EDI = (EDI);
L_110e7690:;
  /* 110e7690 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e7692 jmp dword ptr [ecx*4 + 0x110e7760] */
  switch (ECX) {
    case 0: goto L_110e77a7;
    default: x86_unimpl("switch@0x110e7692 out of table"); return;
  }
  /* 110e7699 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e769c:;
  /* 110e769c mov eax, edi */
  EAX = (EDI);
  /* 110e769e mov edx, 3 */
  EDX = (0x3u);
  /* 110e76a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e76a6 jb 0x110e76b4 */
  if (C.cf) goto L_110e76b4;
  /* 110e76a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110e76ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e76ad jmp dword ptr [eax*4 + 0x110e76b8] */
  switch (EAX) {
    case 1: goto L_110e76c8;
    case 2: goto L_110e76e8;
    case 3: goto L_110e7710;
    default: x86_unimpl("switch@0x110e76ad out of table"); return;
  }
L_110e76b4:;
  /* 110e76b4 jmp dword ptr [ecx*4 + 0x110e77b0] */
  switch (ECX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e76b4 out of table"); return;
  }
  /* 110e76bb nop  */
  /* nop */
L_110e76c8:;
  /* 110e76c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e76cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e76cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e76d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110e76d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e76d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110e76d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e76d8 jb 0x110e7690 */
  if (C.cf) goto L_110e7690;
  /* 110e76da std  */
  C.df=1;
  /* 110e76db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e76dd cld  */
  C.df=0;
  /* 110e76de jmp dword ptr [edx*4 + 0x110e77b0] */
  switch (EDX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e76de out of table"); return;
  }
  /* 110e76e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e76e8:;
  /* 110e76e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e76eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e76ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e76f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e76f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e76f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e76f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e76fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e76ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7702 jb 0x110e7690 */
  if (C.cf) goto L_110e7690;
  /* 110e7704 std  */
  C.df=1;
  /* 110e7705 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7707 cld  */
  C.df=0;
  /* 110e7708 jmp dword ptr [edx*4 + 0x110e77b0] */
  switch (EDX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e7708 out of table"); return;
  }
  /* 110e770f nop  */
  /* nop */
L_110e7710:;
  /* 110e7710 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e7713 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e7715 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e7718 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e771b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e771e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e7721 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e7724 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e7727 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e772a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e772d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7730 jb 0x110e7690 */
  if (C.cf) goto L_110e7690;
  /* 110e7736 std  */
  C.df=1;
  /* 110e7737 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e7739 cld  */
  C.df=0;
  /* 110e773a jmp dword ptr [edx*4 + 0x110e77b0] */
  switch (EDX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e773a out of table"); return;
  }
  /* 110e7741 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 110e7744 ja 0x110e7755 */
  if ((!C.cf&&!C.zf)) goto L_110e7755;
  /* 110e7747 adc dword ptr [edi + esi*2 + 0xe], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*2 + 0xe))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*2 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e774b adc dword ptr [edi + esi*2 + 0xe], esi */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*2 + 0xe))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*2 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e774f adc dword ptr [edi + esi*2 + 0xe], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*2 + 0xe))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*2 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e7753 adc dword ptr [edi + esi*2 + 0x778c110e], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*2 + 0x778c110e))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*2 + 0x778c110e), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e775a push cs */
  push32((uint32_t)(C.seg_cs));
  /* 110e775c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 110e775d ja 0x110e776d */
  if ((!C.cf&&!C.zf)) goto L_110e776d;
  /* 110e7764 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 110e7768 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 110e776c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 110e7770 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 110e7774 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 110e7778 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 110e777c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 110e7780 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 110e7784 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 110e7788 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 110e778c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110e7790 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110e7794 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110e7798 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110e779c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110e77a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e77a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110e77a7:;
  /* 110e77a7 jmp dword ptr [edx*4 + 0x110e77b0] */
  switch (EDX) {
    case 0: goto L_110e77c0;
    case 1: goto L_110e77c8;
    case 2: goto L_110e77d8;
    case 3: goto L_110e77ec;
    default: x86_unimpl("switch@0x110e77a7 out of table"); return;
  }
  /* 110e77ae mov edi, edi */
  EDI = (EDI);
L_110e77c0:;
  /* 110e77c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e77c3 pop esi */
  ESI = (pop32());
  /* 110e77c4 pop edi */
  EDI = (pop32());
  /* 110e77c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e77c6 ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e77c7 nop  */
  /* nop */
L_110e77c8:;
  /* 110e77c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e77cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e77ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e77d1 pop esi */
  ESI = (pop32());
  /* 110e77d2 pop edi */
  EDI = (pop32());
  /* 110e77d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e77d4 ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e77d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e77d8:;
  /* 110e77d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e77db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e77de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e77e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e77e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e77e7 pop esi */
  ESI = (pop32());
  /* 110e77e8 pop edi */
  EDI = (pop32());
  /* 110e77e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e77ea ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
  /* 110e77eb nop  */
  /* nop */
L_110e77ec:;
  /* 110e77ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e77ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e77f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e77f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e77f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e77fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e77fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7801 pop esi */
  ESI = (pop32());
  /* 110e7802 pop edi */
  EDI = (pop32());
  /* 110e7803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7804 ret  */
  ESPCHK(0x110e74d0u, _esp0);
  ESP += 4; return;
L_110e7755: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x110e7755 (unresolved jump table)"); return;
L_110e776d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x110e776d (unresolved jump table)"); return;
}

/* _memset @ 0x110e7810 (88 bytes, 40 insns) */
void f_110e7810(void) {
  FTRACE(0x110e7810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7810 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 110e7814 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e7818 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e781a je 0x110e7863 */
  if (C.zf) goto L_110e7863;
  /* 110e781c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e781e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 110e7822 push edi */
  push32((uint32_t)(EDI));
  /* 110e7823 mov edi, ecx */
  EDI = (ECX);
  /* 110e7825 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7828 jb 0x110e7857 */
  if (C.cf) goto L_110e7857;
  /* 110e782a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e782c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e782f je 0x110e7839 */
  if (C.zf) goto L_110e7839;
  /* 110e7831 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_110e7833:;
  /* 110e7833 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7835 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e7836 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e7837 jne 0x110e7833 */
  if (!C.zf) goto L_110e7833;
L_110e7839:;
  /* 110e7839 mov ecx, eax */
  ECX = (EAX);
  /* 110e783b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e783e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7840 mov ecx, eax */
  ECX = (EAX);
  /* 110e7842 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110e7845 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7847 mov ecx, edx */
  ECX = (EDX);
  /* 110e7849 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110e784c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e784f je 0x110e7857 */
  if (C.zf) goto L_110e7857;
  /* 110e7851 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110e7853 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e7855 je 0x110e785d */
  if (C.zf) goto L_110e785d;
L_110e7857:;
  /* 110e7857 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e7859 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e785a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e785b jne 0x110e7857 */
  if (!C.zf) goto L_110e7857;
L_110e785d:;
  /* 110e785d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e7861 pop edi */
  EDI = (pop32());
  /* 110e7862 ret  */
  ESPCHK(0x110e7810u, _esp0);
  ESP += 4; return;
L_110e7863:;
  /* 110e7863 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e7867 ret  */
  ESPCHK(0x110e7810u, _esp0);
  ESP += 4; return;
}

/* FUN_10007868 @ 0x110e7868 (293 bytes, 103 insns) */
void f_110e7868(void) {
  FTRACE(0x110e7868u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7868 push ebp */
  push32((uint32_t)(EBP));
  /* 110e7869 mov ebp, esp */
  EBP = (ESP);
  /* 110e786b mov eax, 0x1004 */
  EAX = (0x1004u);
  /* 110e7870 call 0x110e7410 */
  push32(0x110e7875u); f_110e7410();
  /* 110e7875 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7876 push esi */
  push32((uint32_t)(ESI));
  /* 110e7877 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e7879 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e787b push esi */
  push32((uint32_t)(ESI));
  /* 110e787c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e787f call 0x110e4319 */
  push32(0x110e7884u); f_110e4319();
  /* 110e7884 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
  /* 110e7887 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e788a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e788c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e788f je 0x110e7987 */
  if (C.zf) goto L_110e7987;
  /* 110e7895 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e7897 push esi */
  push32((uint32_t)(ESI));
  /* 110e7898 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e789b call 0x110e4319 */
  push32(0x110e78a0u); f_110e4319();
  /* 110e78a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e78a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e78a5 je 0x110e7987 */
  if (C.zf) goto L_110e7987;
  /* 110e78ab push edi */
  push32((uint32_t)(EDI));
  /* 110e78ac mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e78af sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e78b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e78b3 jle 0x110e792a */
  if ((C.zf||C.sf!=C.of)) goto L_110e792a;
  /* 110e78b5 mov ebx, 0x1000 */
  EBX = (0x1000u);
  /* 110e78ba lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 110e78c0 push ebx */
  push32((uint32_t)(EBX));
  /* 110e78c1 push esi */
  push32((uint32_t)(ESI));
  /* 110e78c2 push eax */
  push32((uint32_t)(EAX));
  /* 110e78c3 call 0x110e7810 */
  push32(0x110e78c8u); f_110e7810();
  /* 110e78c8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e78cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e78d0 call 0x110e7ed5 */
  push32(0x110e78d5u); f_110e7ed5();
  /* 110e78d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e78d8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_110e78db:;
  /* 110e78db cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e78dd mov eax, ebx */
  EAX = (EBX);
  /* 110e78df jge 0x110e78e3 */
  if ((C.sf==C.of)) goto L_110e78e3;
  /* 110e78e1 mov eax, edi */
  EAX = (EDI);
L_110e78e3:;
  /* 110e78e3 push eax */
  push32((uint32_t)(EAX));
  /* 110e78e4 lea eax, [ebp - 0x1004] */
  EAX = ((uint32_t)(EBP + -0x1004));
  /* 110e78ea push eax */
  push32((uint32_t)(EAX));
  /* 110e78eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e78ee call 0x110e6793 */
  push32(0x110e78f3u); f_110e6793();
  /* 110e78f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e78f6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e78f9 je 0x110e7903 */
  if (C.zf) goto L_110e7903;
  /* 110e78fb sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e78fd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e78ff jle 0x110e791b */
  if ((C.zf||C.sf!=C.of)) goto L_110e791b;
  /* 110e7901 jmp 0x110e78db */
  goto L_110e78db;
L_110e7903:;
  /* 110e7903 call 0x110e409b */
  push32(0x110e7908u); f_110e409b();
  /* 110e7908 cmp dword ptr [eax], 5 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e790b jne 0x110e7918 */
  if (!C.zf) goto L_110e7918;
  /* 110e790d call 0x110e4092 */
  push32(0x110e7912u); f_110e4092();
  /* 110e7912 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
L_110e7918:;
  /* 110e7918 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_110e791b:;
  /* 110e791b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e791e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7921 call 0x110e7ed5 */
  push32(0x110e7926u); f_110e7ed5();
  /* 110e7926 pop ecx */
  ECX = (pop32());
  /* 110e7927 pop ecx */
  ECX = (pop32());
  /* 110e7928 jmp 0x110e7972 */
  goto L_110e7972;
L_110e792a:;
  /* 110e792a jge 0x110e7972 */
  if ((C.sf==C.of)) goto L_110e7972;
  /* 110e792c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e792e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7931 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7934 call 0x110e4319 */
  push32(0x110e7939u); f_110e4319();
  /* 110e7939 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e793c call 0x110e65d8 */
  push32(0x110e7941u); f_110e65d8();
  /* 110e7941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7944 push eax */
  push32((uint32_t)(EAX));
  /* 110e7945 call dword ptr [0x110e9020] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9020))), 0x110e794bu);
  /* 110e794b mov esi, eax */
  ESI = (EAX);
  /* 110e794d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 110e794f sbb esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a-_b-C.cf; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7951 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 110e7953 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110e7954 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7956 jne 0x110e7972 */
  if (!C.zf) goto L_110e7972;
  /* 110e7958 call 0x110e4092 */
  push32(0x110e795du); f_110e4092();
  /* 110e795d mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 110e7963 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e7969u);
  /* 110e7969 mov edi, eax */
  EDI = (EAX);
  /* 110e796b call 0x110e409b */
  push32(0x110e7970u); f_110e409b();
  /* 110e7970 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_110e7972:;
  /* 110e7972 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e7974 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 110e7977 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e797a call 0x110e4319 */
  push32(0x110e797fu); f_110e4319();
  /* 110e797f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7982 mov eax, esi */
  EAX = (ESI);
  /* 110e7984 pop edi */
  EDI = (pop32());
  /* 110e7985 jmp 0x110e7989 */
  goto L_110e7989;
L_110e7987:;
  /* 110e7987 mov eax, ebx */
  EAX = (EBX);
L_110e7989:;
  /* 110e7989 pop esi */
  ESI = (pop32());
  /* 110e798a pop ebx */
  EBX = (pop32());
  /* 110e798b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e798c ret  */
  ESPCHK(0x110e7868u, _esp0);
  ESP += 4; return;
}

/* FUN_1000798d @ 0x110e798d (511 bytes, 193 insns) */
void f_110e798d(void) {
  FTRACE(0x110e798du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e798d push ebp */
  push32((uint32_t)(EBP));
  /* 110e798e mov ebp, esp */
  EBP = (ESP);
  /* 110e7990 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e7992 push 0x110e9540 */
  push32((uint32_t)(0x110e9540u));
  /* 110e7997 push 0x110e6124 */
  push32((uint32_t)(0x110e6124u));
  /* 110e799c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110e79a2 push eax */
  push32((uint32_t)(EAX));
  /* 110e79a3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110e79aa sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e79ad push ebx */
  push32((uint32_t)(EBX));
  /* 110e79ae push esi */
  push32((uint32_t)(ESI));
  /* 110e79af push edi */
  push32((uint32_t)(EDI));
  /* 110e79b0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110e79b3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e79b5 cmp dword ptr [0x110ed938], edi */
  { uint32_t _a=(r32((uint32_t)(0x110ed938))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e79bb jne 0x110e7a03 */
  if (!C.zf) goto L_110e7a03;
  /* 110e79bd push edi */
  push32((uint32_t)(EDI));
  /* 110e79be push edi */
  push32((uint32_t)(EDI));
  /* 110e79bf push 1 */
  push32((uint32_t)(0x1u));
  /* 110e79c1 pop ebx */
  EBX = (pop32());
  /* 110e79c2 push ebx */
  push32((uint32_t)(EBX));
  /* 110e79c3 push 0x110e9538 */
  push32((uint32_t)(0x110e9538u));
  /* 110e79c8 mov esi, 0x100 */
  ESI = (0x100u);
  /* 110e79cd push esi */
  push32((uint32_t)(ESI));
  /* 110e79ce push edi */
  push32((uint32_t)(EDI));
  /* 110e79cf call dword ptr [0x110e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9014))), 0x110e79d5u);
  /* 110e79d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e79d7 je 0x110e79e1 */
  if (C.zf) goto L_110e79e1;
  /* 110e79d9 mov dword ptr [0x110ed938], ebx */
  w32((uint32_t)(0x110ed938), (EBX));
  /* 110e79df jmp 0x110e7a03 */
  goto L_110e7a03;
L_110e79e1:;
  /* 110e79e1 push edi */
  push32((uint32_t)(EDI));
  /* 110e79e2 push edi */
  push32((uint32_t)(EDI));
  /* 110e79e3 push ebx */
  push32((uint32_t)(EBX));
  /* 110e79e4 push 0x110e9534 */
  push32((uint32_t)(0x110e9534u));
  /* 110e79e9 push esi */
  push32((uint32_t)(ESI));
  /* 110e79ea push edi */
  push32((uint32_t)(EDI));
  /* 110e79eb call dword ptr [0x110e9018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9018))), 0x110e79f1u);
  /* 110e79f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e79f3 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e79f9 mov dword ptr [0x110ed938], 2 */
  w32((uint32_t)(0x110ed938), (0x2u));
L_110e7a03:;
  /* 110e7a03 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7a06 jle 0x110e7a18 */
  if ((C.zf||C.sf!=C.of)) goto L_110e7a18;
  /* 110e7a08 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7a0b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7a0e call 0x110e7bb1 */
  push32(0x110e7a13u); f_110e7bb1();
  /* 110e7a13 pop ecx */
  ECX = (pop32());
  /* 110e7a14 pop ecx */
  ECX = (pop32());
  /* 110e7a15 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_110e7a18:;
  /* 110e7a18 mov eax, dword ptr [0x110ed938] */
  EAX = (r32((uint32_t)(0x110ed938)));
  /* 110e7a1d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7a20 jne 0x110e7a3f */
  if (!C.zf) goto L_110e7a3f;
  /* 110e7a22 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110e7a25 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110e7a28 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7a2b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7a2e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7a31 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7a34 call dword ptr [0x110e9018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9018))), 0x110e7a3au);
  /* 110e7a3a jmp 0x110e7b1d */
  goto L_110e7b1d;
L_110e7a3f:;
  /* 110e7a3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7a42 jne 0x110e7b1b */
  if (!C.zf) goto L_110e7b1b;
  /* 110e7a48 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7a4b jne 0x110e7a55 */
  if (!C.zf) goto L_110e7a55;
  /* 110e7a4d mov eax, dword ptr [0x110ed930] */
  EAX = (r32((uint32_t)(0x110ed930)));
  /* 110e7a52 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_110e7a55:;
  /* 110e7a55 push edi */
  push32((uint32_t)(EDI));
  /* 110e7a56 push edi */
  push32((uint32_t)(EDI));
  /* 110e7a57 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7a5a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7a5d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 110e7a60 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e7a62 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7a64 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 110e7a67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e7a68 push eax */
  push32((uint32_t)(EAX));
  /* 110e7a69 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110e7a6c call dword ptr [0x110e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9028))), 0x110e7a72u);
  /* 110e7a72 mov ebx, eax */
  EBX = (EAX);
  /* 110e7a74 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 110e7a77 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7a79 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7a7f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110e7a82 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 110e7a85 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7a88 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110e7a8a call 0x110e7410 */
  push32(0x110e7a8fu); f_110e7410();
  /* 110e7a8f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110e7a92 mov eax, esp */
  EAX = (ESP);
  /* 110e7a94 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110e7a97 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e7a9b jmp 0x110e7ab0 */
  goto L_110e7ab0;
  /* 110e7a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7a9f pop eax */
  EAX = (pop32());
  /* 110e7aa0 ret  */
  ESPCHK(0x110e798du, _esp0);
  ESP += 4; return;
  /* 110e7aa1 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110e7aa4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e7aa6 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 110e7aa9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e7aad mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_110e7ab0:;
  /* 110e7ab0 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7ab3 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7ab5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7ab6 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110e7ab9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7abc push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7abf push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7ac1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110e7ac4 call dword ptr [0x110e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9028))), 0x110e7acau);
  /* 110e7aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7acc je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7ace push edi */
  push32((uint32_t)(EDI));
  /* 110e7acf push edi */
  push32((uint32_t)(EDI));
  /* 110e7ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7ad1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110e7ad4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7ad7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7ada call dword ptr [0x110e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9014))), 0x110e7ae0u);
  /* 110e7ae0 mov esi, eax */
  ESI = (EAX);
  /* 110e7ae2 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 110e7ae5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7ae7 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7ae9 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 110e7aed je 0x110e7b2f */
  if (C.zf) goto L_110e7b2f;
  /* 110e7aef cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7af2 je 0x110e7baa */
  if (C.zf) goto L_110e7baa;
  /* 110e7af8 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7afb jg 0x110e7b1b */
  if ((!C.zf&&C.sf==C.of)) goto L_110e7b1b;
  /* 110e7afd push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110e7b00 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110e7b03 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7b04 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110e7b07 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7b0a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7b0d call dword ptr [0x110e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9014))), 0x110e7b13u);
  /* 110e7b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7b15 jne 0x110e7baa */
  if (!C.zf) goto L_110e7baa;
L_110e7b1b:;
  /* 110e7b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e7b1d:;
  /* 110e7b1d lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 110e7b20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110e7b23 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110e7b2a pop edi */
  EDI = (pop32());
  /* 110e7b2b pop esi */
  ESI = (pop32());
  /* 110e7b2c pop ebx */
  EBX = (pop32());
  /* 110e7b2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7b2e ret  */
  ESPCHK(0x110e798du, _esp0);
  ESP += 4; return;
L_110e7b2f:;
  /* 110e7b2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e7b36 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 110e7b39 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7b3c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110e7b3e call 0x110e7410 */
  push32(0x110e7b43u); f_110e7410();
  /* 110e7b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110e7b46 mov ebx, esp */
  EBX = (ESP);
  /* 110e7b48 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 110e7b4b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e7b4f jmp 0x110e7b63 */
  goto L_110e7b63;
  /* 110e7b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7b53 pop eax */
  EAX = (pop32());
  /* 110e7b54 ret  */
  ESPCHK(0x110e798du, _esp0);
  ESP += 4; return;
  /* 110e7b55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110e7b58 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e7b5a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e7b5c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e7b60 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_110e7b63:;
  /* 110e7b63 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7b65 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7b67 push esi */
  push32((uint32_t)(ESI));
  /* 110e7b68 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7b69 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 110e7b6c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110e7b6f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7b72 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7b75 call dword ptr [0x110e9014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9014))), 0x110e7b7bu);
  /* 110e7b7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7b7d je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
  /* 110e7b7f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7b82 push edi */
  push32((uint32_t)(EDI));
  /* 110e7b83 push edi */
  push32((uint32_t)(EDI));
  /* 110e7b84 jne 0x110e7b8a */
  if (!C.zf) goto L_110e7b8a;
  /* 110e7b86 push edi */
  push32((uint32_t)(EDI));
  /* 110e7b87 push edi */
  push32((uint32_t)(EDI));
  /* 110e7b88 jmp 0x110e7b90 */
  goto L_110e7b90;
L_110e7b8a:;
  /* 110e7b8a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110e7b8d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_110e7b90:;
  /* 110e7b90 push esi */
  push32((uint32_t)(ESI));
  /* 110e7b91 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7b92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110e7b97 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110e7b9a call dword ptr [0x110e90dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90dc))), 0x110e7ba0u);
  /* 110e7ba0 mov esi, eax */
  ESI = (EAX);
  /* 110e7ba2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7ba4 je 0x110e7b1b */
  if (C.zf) goto L_110e7b1b;
L_110e7baa:;
  /* 110e7baa mov eax, esi */
  EAX = (ESI);
  /* 110e7bac jmp 0x110e7b1d */
  goto L_110e7b1d;
}

/* FUN_10007bb1 @ 0x110e7bb1 (43 bytes, 20 insns) */
void f_110e7bb1(void) {
  FTRACE(0x110e7bb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7bb1 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e7bb5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e7bb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e7bbb push esi */
  push32((uint32_t)(ESI));
  /* 110e7bbc lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 110e7bbf je 0x110e7bce */
  if (C.zf) goto L_110e7bce;
L_110e7bc1:;
  /* 110e7bc1 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7bc4 je 0x110e7bce */
  if (C.zf) goto L_110e7bce;
  /* 110e7bc6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e7bc7 mov esi, ecx */
  ESI = (ECX);
  /* 110e7bc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e7bca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e7bcc jne 0x110e7bc1 */
  if (!C.zf) goto L_110e7bc1;
L_110e7bce:;
  /* 110e7bce cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e7bd1 pop esi */
  ESI = (pop32());
  /* 110e7bd2 jne 0x110e7bd9 */
  if (!C.zf) goto L_110e7bd9;
  /* 110e7bd4 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7bd8 ret  */
  ESPCHK(0x110e7bb1u, _esp0);
  ESP += 4; return;
L_110e7bd9:;
  /* 110e7bd9 mov eax, edx */
  EAX = (EDX);
  /* 110e7bdb ret  */
  ESPCHK(0x110e7bb1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bdc @ 0x110e7bdc (318 bytes, 123 insns) */
void f_110e7bdc(void) {
  FTRACE(0x110e7bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7bdc push ebp */
  push32((uint32_t)(EBP));
  /* 110e7bdd mov ebp, esp */
  EBP = (ESP);
  /* 110e7bdf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e7be1 push 0x110e9558 */
  push32((uint32_t)(0x110e9558u));
  /* 110e7be6 push 0x110e6124 */
  push32((uint32_t)(0x110e6124u));
  /* 110e7beb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110e7bf1 push eax */
  push32((uint32_t)(EAX));
  /* 110e7bf2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110e7bf9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7bfc push ebx */
  push32((uint32_t)(EBX));
  /* 110e7bfd push esi */
  push32((uint32_t)(ESI));
  /* 110e7bfe push edi */
  push32((uint32_t)(EDI));
  /* 110e7bff mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110e7c02 mov eax, dword ptr [0x110ed93c] */
  EAX = (r32((uint32_t)(0x110ed93c)));
  /* 110e7c07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e7c09 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7c0b jne 0x110e7c4b */
  if (!C.zf) goto L_110e7c4b;
  /* 110e7c0d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110e7c10 push eax */
  push32((uint32_t)(EAX));
  /* 110e7c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7c13 pop esi */
  ESI = (pop32());
  /* 110e7c14 push esi */
  push32((uint32_t)(ESI));
  /* 110e7c15 push 0x110e9538 */
  push32((uint32_t)(0x110e9538u));
  /* 110e7c1a push esi */
  push32((uint32_t)(ESI));
  /* 110e7c1b call dword ptr [0x110e900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e900c))), 0x110e7c21u);
  /* 110e7c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7c23 je 0x110e7c29 */
  if (C.zf) goto L_110e7c29;
  /* 110e7c25 mov eax, esi */
  EAX = (ESI);
  /* 110e7c27 jmp 0x110e7c46 */
  goto L_110e7c46;
L_110e7c29:;
  /* 110e7c29 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110e7c2c push eax */
  push32((uint32_t)(EAX));
  /* 110e7c2d push esi */
  push32((uint32_t)(ESI));
  /* 110e7c2e push 0x110e9534 */
  push32((uint32_t)(0x110e9534u));
  /* 110e7c33 push esi */
  push32((uint32_t)(ESI));
  /* 110e7c34 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7c35 call dword ptr [0x110e901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e901c))), 0x110e7c3bu);
  /* 110e7c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7c3d je 0x110e7d11 */
  if (C.zf) goto L_110e7d11;
  /* 110e7c43 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e7c45 pop eax */
  EAX = (pop32());
L_110e7c46:;
  /* 110e7c46 mov dword ptr [0x110ed93c], eax */
  w32((uint32_t)(0x110ed93c), (EAX));
L_110e7c4b:;
  /* 110e7c4b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7c4e jne 0x110e7c74 */
  if (!C.zf) goto L_110e7c74;
  /* 110e7c50 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110e7c53 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7c55 jne 0x110e7c5c */
  if (!C.zf) goto L_110e7c5c;
  /* 110e7c57 mov eax, dword ptr [0x110ed920] */
  EAX = (r32((uint32_t)(0x110ed920)));
L_110e7c5c:;
  /* 110e7c5c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7c5f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7c62 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7c65 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7c68 push eax */
  push32((uint32_t)(EAX));
  /* 110e7c69 call dword ptr [0x110e901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e901c))), 0x110e7c6fu);
  /* 110e7c6f jmp 0x110e7d13 */
  goto L_110e7d13;
L_110e7c74:;
  /* 110e7c74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7c77 jne 0x110e7d11 */
  if (!C.zf) goto L_110e7d11;
  /* 110e7c7d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7c80 jne 0x110e7c8a */
  if (!C.zf) goto L_110e7c8a;
  /* 110e7c82 mov eax, dword ptr [0x110ed930] */
  EAX = (r32((uint32_t)(0x110ed930)));
  /* 110e7c87 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_110e7c8a:;
  /* 110e7c8a push ebx */
  push32((uint32_t)(EBX));
  /* 110e7c8b push ebx */
  push32((uint32_t)(EBX));
  /* 110e7c8c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7c8f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7c92 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110e7c95 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e7c97 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7c99 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 110e7c9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e7c9d push eax */
  push32((uint32_t)(EAX));
  /* 110e7c9e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110e7ca1 call dword ptr [0x110e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9028))), 0x110e7ca7u);
  /* 110e7ca7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110e7caa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7cac je 0x110e7d11 */
  if (C.zf) goto L_110e7d11;
  /* 110e7cae mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 110e7cb1 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 110e7cb4 mov eax, edi */
  EAX = (EDI);
  /* 110e7cb6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7cb9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110e7cbb call 0x110e7410 */
  push32(0x110e7cc0u); f_110e7410();
  /* 110e7cc0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110e7cc3 mov esi, esp */
  ESI = (ESP);
  /* 110e7cc5 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 110e7cc8 push edi */
  push32((uint32_t)(EDI));
  /* 110e7cc9 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7cca push esi */
  push32((uint32_t)(ESI));
  /* 110e7ccb call 0x110e7810 */
  push32(0x110e7cd0u); f_110e7810();
  /* 110e7cd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7cd3 jmp 0x110e7ce0 */
  goto L_110e7ce0;
  /* 110e7cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7cd7 pop eax */
  EAX = (pop32());
  /* 110e7cd8 ret  */
  ESPCHK(0x110e7bdcu, _esp0);
  ESP += 4; return;
  /* 110e7cd9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110e7cdc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e7cde xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_110e7ce0:;
  /* 110e7ce0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e7ce4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7ce6 je 0x110e7d11 */
  if (C.zf) goto L_110e7d11;
  /* 110e7ce8 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 110e7ceb push esi */
  push32((uint32_t)(ESI));
  /* 110e7cec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e7cef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e7cf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7cf4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110e7cf7 call dword ptr [0x110e9028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9028))), 0x110e7cfdu);
  /* 110e7cfd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7cff je 0x110e7d11 */
  if (C.zf) goto L_110e7d11;
  /* 110e7d01 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e7d04 push eax */
  push32((uint32_t)(EAX));
  /* 110e7d05 push esi */
  push32((uint32_t)(ESI));
  /* 110e7d06 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e7d09 call dword ptr [0x110e900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e900c))), 0x110e7d0fu);
  /* 110e7d0f jmp 0x110e7d13 */
  goto L_110e7d13;
L_110e7d11:;
  /* 110e7d11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e7d13:;
  /* 110e7d13 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110e7d16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110e7d19 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110e7d20 pop edi */
  EDI = (pop32());
  /* 110e7d21 pop esi */
  ESI = (pop32());
  /* 110e7d22 pop ebx */
  EBX = (pop32());
  /* 110e7d23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7d24 ret  */
  ESPCHK(0x110e7bdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d25 @ 0x110e7d25 (111 bytes, 44 insns) */
void f_110e7d25(void) {
  FTRACE(0x110e7d25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7d25 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7d26 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e7d28 cmp dword ptr [0x110ed920], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110ed920))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7d2e jne 0x110e7d43 */
  if (!C.zf) goto L_110e7d43;
  /* 110e7d30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e7d34 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7d37 jl 0x110e7d92 */
  if ((C.sf!=C.of)) goto L_110e7d92;
  /* 110e7d39 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7d3c jg 0x110e7d92 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e7d92;
  /* 110e7d3e sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7d41 pop ebx */
  EBX = (pop32());
  /* 110e7d42 ret  */
  ESPCHK(0x110e7d25u, _esp0);
  ESP += 4; return;
L_110e7d43:;
  /* 110e7d43 push esi */
  push32((uint32_t)(ESI));
  /* 110e7d44 mov esi, 0x110eda8c */
  ESI = (0x110eda8cu);
  /* 110e7d49 push edi */
  push32((uint32_t)(EDI));
  /* 110e7d4a push esi */
  push32((uint32_t)(ESI));
  /* 110e7d4b call dword ptr [0x110e9010] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9010))), 0x110e7d51u);
  /* 110e7d51 cmp dword ptr [0x110eda88], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110eda88))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7d57 mov edi, dword ptr [0x110e9008] */
  EDI = (r32((uint32_t)(0x110e9008)));
  /* 110e7d5d je 0x110e7d6d */
  if (C.zf) goto L_110e7d6d;
  /* 110e7d5f push esi */
  push32((uint32_t)(ESI));
  /* 110e7d60 call edi */
  call_ind((uint32_t)(EDI), 0x110e7d62u);
  /* 110e7d62 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e7d64 call 0x110e5fb6 */
  push32(0x110e7d69u); f_110e5fb6();
  /* 110e7d69 pop ecx */
  ECX = (pop32());
  /* 110e7d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7d6c pop ebx */
  EBX = (pop32());
L_110e7d6d:;
  /* 110e7d6d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110e7d71 call 0x110e7d94 */
  push32(0x110e7d76u); f_110e7d94();
  /* 110e7d76 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e7d78 pop ecx */
  ECX = (pop32());
  /* 110e7d79 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 110e7d7d je 0x110e7d89 */
  if (C.zf) goto L_110e7d89;
  /* 110e7d7f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e7d81 call 0x110e6017 */
  push32(0x110e7d86u); f_110e6017();
  /* 110e7d86 pop ecx */
  ECX = (pop32());
  /* 110e7d87 jmp 0x110e7d8c */
  goto L_110e7d8c;
L_110e7d89:;
  /* 110e7d89 push esi */
  push32((uint32_t)(ESI));
  /* 110e7d8a call edi */
  call_ind((uint32_t)(EDI), 0x110e7d8cu);
L_110e7d8c:;
  /* 110e7d8c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e7d90 pop edi */
  EDI = (pop32());
  /* 110e7d91 pop esi */
  ESI = (pop32());
L_110e7d92:;
  /* 110e7d92 pop ebx */
  EBX = (pop32());
  /* 110e7d93 ret  */
  ESPCHK(0x110e7d25u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d94 @ 0x110e7d94 (204 bytes, 71 insns) */
void f_110e7d94(void) {
  FTRACE(0x110e7d94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7d94 push ebp */
  push32((uint32_t)(EBP));
  /* 110e7d95 mov ebp, esp */
  EBP = (ESP);
  /* 110e7d97 push ecx */
  push32((uint32_t)(ECX));
  /* 110e7d98 cmp dword ptr [0x110ed920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ed920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7d9f push ebx */
  push32((uint32_t)(EBX));
  /* 110e7da0 jne 0x110e7dbf */
  if (!C.zf) goto L_110e7dbf;
  /* 110e7da2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7da5 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7da8 jl 0x110e7e5d */
  if ((C.sf!=C.of)) goto L_110e7e5d;
  /* 110e7dae cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7db1 jg 0x110e7e5d */
  if ((!C.zf&&C.sf==C.of)) goto L_110e7e5d;
  /* 110e7db7 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7dba jmp 0x110e7e5d */
  goto L_110e7e5d;
L_110e7dbf:;
  /* 110e7dbf mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7dc2 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7dc8 jge 0x110e7df2 */
  if ((C.sf==C.of)) goto L_110e7df2;
  /* 110e7dca cmp dword ptr [0x110ecc8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ecc8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7dd1 jle 0x110e7ddf */
  if ((C.zf||C.sf!=C.of)) goto L_110e7ddf;
  /* 110e7dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e7dd5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e7dd6 call 0x110e7e60 */
  push32(0x110e7ddbu); f_110e7e60();
  /* 110e7ddb pop ecx */
  ECX = (pop32());
  /* 110e7ddc pop ecx */
  ECX = (pop32());
  /* 110e7ddd jmp 0x110e7dea */
  goto L_110e7dea;
L_110e7ddf:;
  /* 110e7ddf mov eax, dword ptr [0x110eca80] */
  EAX = (r32((uint32_t)(0x110eca80)));
  /* 110e7de4 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 110e7de7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_110e7dea:;
  /* 110e7dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7dec jne 0x110e7df2 */
  if (!C.zf) goto L_110e7df2;
L_110e7dee:;
  /* 110e7dee mov eax, ebx */
  EAX = (EBX);
  /* 110e7df0 jmp 0x110e7e5d */
  goto L_110e7e5d;
L_110e7df2:;
  /* 110e7df2 mov edx, dword ptr [0x110eca80] */
  EDX = (r32((uint32_t)(0x110eca80)));
  /* 110e7df8 mov eax, ebx */
  EAX = (EBX);
  /* 110e7dfa sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e7dfd movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 110e7e00 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 110e7e05 je 0x110e7e15 */
  if (C.zf) goto L_110e7e15;
  /* 110e7e07 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 110e7e0b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 110e7e0e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 110e7e11 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e7e13 jmp 0x110e7e1e */
  goto L_110e7e1e;
L_110e7e15:;
  /* 110e7e15 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 110e7e19 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 110e7e1c push 1 */
  push32((uint32_t)(0x1u));
L_110e7e1e:;
  /* 110e7e1e pop eax */
  EAX = (pop32());
  /* 110e7e1f lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 110e7e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e7e26 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e7e28 push ecx */
  push32((uint32_t)(ECX));
  /* 110e7e29 push eax */
  push32((uint32_t)(EAX));
  /* 110e7e2a lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 110e7e2d push eax */
  push32((uint32_t)(EAX));
  /* 110e7e2e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 110e7e33 push dword ptr [0x110ed920] */
  push32((uint32_t)(r32((uint32_t)(0x110ed920))));
  /* 110e7e39 call 0x110e798d */
  push32(0x110e7e3eu); f_110e798d();
  /* 110e7e3e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7e43 je 0x110e7dee */
  if (C.zf) goto L_110e7dee;
  /* 110e7e45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7e48 jne 0x110e7e50 */
  if (!C.zf) goto L_110e7e50;
  /* 110e7e4a movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110e7e4e jmp 0x110e7e5d */
  goto L_110e7e5d;
L_110e7e50:;
  /* 110e7e50 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 110e7e54 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110e7e58 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e7e5b or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_110e7e5d:;
  /* 110e7e5d pop ebx */
  EBX = (pop32());
  /* 110e7e5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7e5f ret  */
  ESPCHK(0x110e7d94u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x110e7e60 (117 bytes, 46 insns) */
void f_110e7e60(void) {
  FTRACE(0x110e7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 110e7e61 mov ebp, esp */
  EBP = (ESP);
  /* 110e7e63 push ecx */
  push32((uint32_t)(ECX));
  /* 110e7e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e7e67 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 110e7e6a cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7e70 ja 0x110e7e7e */
  if ((!C.cf&&!C.zf)) goto L_110e7e7e;
  /* 110e7e72 mov ecx, dword ptr [0x110eca80] */
  ECX = (r32((uint32_t)(0x110eca80)));
  /* 110e7e78 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 110e7e7c jmp 0x110e7ed0 */
  goto L_110e7ed0;
L_110e7e7e:;
  /* 110e7e7e mov ecx, eax */
  ECX = (EAX);
  /* 110e7e80 push esi */
  push32((uint32_t)(ESI));
  /* 110e7e81 mov esi, dword ptr [0x110eca80] */
  ESI = (r32((uint32_t)(0x110eca80)));
  /* 110e7e87 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 110e7e8a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 110e7e8d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 110e7e92 pop esi */
  ESI = (pop32());
  /* 110e7e93 je 0x110e7ea3 */
  if (C.zf) goto L_110e7ea3;
  /* 110e7e95 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 110e7e99 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 110e7e9c mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 110e7e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 110e7ea1 jmp 0x110e7eac */
  goto L_110e7eac;
L_110e7ea3:;
  /* 110e7ea3 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 110e7ea7 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 110e7eaa push 1 */
  push32((uint32_t)(0x1u));
L_110e7eac:;
  /* 110e7eac pop eax */
  EAX = (pop32());
  /* 110e7ead lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 110e7eb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e7eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e7eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 110e7eb7 push eax */
  push32((uint32_t)(EAX));
  /* 110e7eb8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110e7ebb push eax */
  push32((uint32_t)(EAX));
  /* 110e7ebc push 1 */
  push32((uint32_t)(0x1u));
  /* 110e7ebe call 0x110e7bdc */
  push32(0x110e7ec3u); f_110e7bdc();
  /* 110e7ec3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e7ec8 jne 0x110e7ecc */
  if (!C.zf) goto L_110e7ecc;
  /* 110e7eca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7ecb ret  */
  ESPCHK(0x110e7e60u, _esp0);
  ESP += 4; return;
L_110e7ecc:;
  /* 110e7ecc movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_110e7ed0:;
  /* 110e7ed0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 110e7ed3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e7ed4 ret  */
  ESPCHK(0x110e7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed5 @ 0x110e7ed5 (97 bytes, 31 insns) */
void f_110e7ed5(void) {
  FTRACE(0x110e7ed5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7ed5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e7ed9 push esi */
  push32((uint32_t)(ESI));
  /* 110e7eda mov ecx, eax */
  ECX = (EAX);
  /* 110e7edc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e7edf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e7ee2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e7ee5 mov esi, 0x8000 */
  ESI = (0x8000u);
  /* 110e7eea mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e7ef1 lea edx, [ecx + eax*4 + 4] */
  EDX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 110e7ef5 mov cl, byte ptr [ecx + eax*4 + 4] */
  CL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 110e7ef9 mov al, cl */
  AL = (CL);
  /* 110e7efb and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 110e7f00 cmp dword ptr [esp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7f04 jne 0x110e7f0b */
  if (!C.zf) goto L_110e7f0b;
  /* 110e7f06 and cl, 0x7f */
  { uint32_t _r=(CL)&(0x7fu); CL = (_r); fl_logic(_r,8); }
  /* 110e7f09 jmp 0x110e7f18 */
  goto L_110e7f18;
L_110e7f0b:;
  /* 110e7f0b cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x4000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e7f13 jne 0x110e7f26 */
  if (!C.zf) goto L_110e7f26;
  /* 110e7f15 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
L_110e7f18:;
  /* 110e7f18 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e7f1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e7f1c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 110e7f1e and ax, 0xc000 */
  { uint32_t _r=(AX)&(0xc000u); AX = (_r); fl_logic(_r,16); }
  /* 110e7f22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e7f24 pop esi */
  ESI = (pop32());
  /* 110e7f25 ret  */
  ESPCHK(0x110e7ed5u, _esp0);
  ESP += 4; return;
L_110e7f26:;
  /* 110e7f26 call 0x110e4092 */
  push32(0x110e7f2bu); f_110e4092();
  /* 110e7f2b mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 110e7f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e7f34 pop esi */
  ESI = (pop32());
  /* 110e7f35 ret  */
  ESPCHK(0x110e7ed5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x110e7fd0 (58 bytes, 32 insns) */
void f_110e7fd0(void) {
  FTRACE(0x110e7fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e7fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e7fd1 mov ebp, esp */
  EBP = (ESP);
  /* 110e7fd3 push esi */
  push32((uint32_t)(ESI));
  /* 110e7fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e7fd6 push eax */
  push32((uint32_t)(EAX));
  /* 110e7fd7 push eax */
  push32((uint32_t)(EAX));
  /* 110e7fd8 push eax */
  push32((uint32_t)(EAX));
  /* 110e7fd9 push eax */
  push32((uint32_t)(EAX));
  /* 110e7fda push eax */
  push32((uint32_t)(EAX));
  /* 110e7fdb push eax */
  push32((uint32_t)(EAX));
  /* 110e7fdc push eax */
  push32((uint32_t)(EAX));
  /* 110e7fdd push eax */
  push32((uint32_t)(EAX));
  /* 110e7fde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e7fe1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e7fe4:;
  /* 110e7fe4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110e7fe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e7fe8 je 0x110e7ff1 */
  if (C.zf) goto L_110e7ff1;
  /* 110e7fea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e7feb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x110e7feb");
  /* 110e7fef jmp 0x110e7fe4 */
  goto L_110e7fe4;
L_110e7ff1:;
  /* 110e7ff1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_110e7ff4:;
  /* 110e7ff4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e7ff6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e7ff8 je 0x110e8004 */
  if (C.zf) goto L_110e8004;
  /* 110e7ffa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e7ffb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x110e7ffb");
  /* 110e7fff jae 0x110e7ff4 */
  if (!C.cf) goto L_110e7ff4;
  /* 110e8001 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_110e8004:;
  /* 110e8004 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e8007 pop esi */
  ESI = (pop32());
  /* 110e8008 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e8009 ret  */
  ESPCHK(0x110e7fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008010 @ 0x110e8010 (208 bytes, 85 insns) */
void f_110e8010(void) {
  FTRACE(0x110e8010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e8010 push ebp */
  push32((uint32_t)(EBP));
  /* 110e8011 mov ebp, esp */
  EBP = (ESP);
  /* 110e8013 push edi */
  push32((uint32_t)(EDI));
  /* 110e8014 push esi */
  push32((uint32_t)(ESI));
  /* 110e8015 push ebx */
  push32((uint32_t)(EBX));
  /* 110e8016 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e8019 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e801c lea eax, [0x110ed918] */
  EAX = ((uint32_t)(0x110ed918));
  /* 110e8022 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e8026 jne 0x110e8063 */
  if (!C.zf) goto L_110e8063;
  /* 110e8028 mov al, 0xff */
  AL = (0xffu);
  /* 110e802a mov edi, edi */
  EDI = (EDI);
L_110e802c:;
  /* 110e802c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e802e je 0x110e805e */
  if (C.zf) goto L_110e805e;
  /* 110e8030 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e8032 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e8033 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 110e8035 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e8036 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8038 je 0x110e802c */
  if (C.zf) goto L_110e802c;
  /* 110e803a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e803c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e803e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e8040 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 110e8043 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110e8045 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110e8047 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 110e8049 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e804b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e804d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e804f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 110e8052 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110e8054 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110e8056 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8058 je 0x110e802c */
  if (C.zf) goto L_110e802c;
  /* 110e805a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e805c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_110e805e:;
  /* 110e805e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 110e8061 jmp 0x110e80db */
  goto L_110e80db;
L_110e8063:;
  /* 110e8063 lock inc dword ptr [0x110eda8c] */
  x86_unimpl("lock inc @ 0x110e8063");
  /* 110e806a cmp dword ptr [0x110eda88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110eda88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e8071 jg 0x110e8077 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e8077;
  /* 110e8073 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e8075 jmp 0x110e808c */
  goto L_110e808c;
L_110e8077:;
  /* 110e8077 lock dec dword ptr [0x110eda8c] */
  x86_unimpl("lock dec @ 0x110e8077");
  /* 110e807e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e8080 call 0x110e5fb6 */
  push32(0x110e8085u); f_110e5fb6();
  /* 110e8085 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_110e808c:;
  /* 110e808c mov eax, 0xff */
  EAX = (0xffu);
  /* 110e8091 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e8093 nop  */
  /* nop */
L_110e8094:;
  /* 110e8094 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e8096 je 0x110e80bf */
  if (C.zf) goto L_110e80bf;
  /* 110e8098 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e809a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e809b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 110e809d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e809e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e80a0 je 0x110e8094 */
  if (C.zf) goto L_110e8094;
  /* 110e80a2 push eax */
  push32((uint32_t)(EAX));
  /* 110e80a3 push ebx */
  push32((uint32_t)(EBX));
  /* 110e80a4 call 0x110e82d5 */
  push32(0x110e80a9u); f_110e82d5();
  /* 110e80a9 mov ebx, eax */
  EBX = (EAX);
  /* 110e80ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e80ae call 0x110e82d5 */
  push32(0x110e80b3u); f_110e82d5();
  /* 110e80b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e80b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e80b8 je 0x110e8094 */
  if (C.zf) goto L_110e8094;
  /* 110e80ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e80bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110e80bf:;
  /* 110e80bf mov ebx, eax */
  EBX = (EAX);
  /* 110e80c1 pop eax */
  EAX = (pop32());
  /* 110e80c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e80c4 jne 0x110e80cf */
  if (!C.zf) goto L_110e80cf;
  /* 110e80c6 lock dec dword ptr [0x110eda8c] */
  x86_unimpl("lock dec @ 0x110e80c6");
  /* 110e80cd jmp 0x110e80d9 */
  goto L_110e80d9;
L_110e80cf:;
  /* 110e80cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e80d1 call 0x110e6017 */
  push32(0x110e80d6u); f_110e6017();
  /* 110e80d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e80d9:;
  /* 110e80d9 mov eax, ebx */
  EAX = (EBX);
L_110e80db:;
  /* 110e80db pop ebx */
  EBX = (pop32());
  /* 110e80dc pop esi */
  ESI = (pop32());
  /* 110e80dd pop edi */
  EDI = (pop32());
  /* 110e80de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e80df ret  */
  ESPCHK(0x110e8010u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x110e80e0 (257 bytes, 103 insns) */
void f_110e80e0(void) {
  FTRACE(0x110e80e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e80e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e80e1 mov ebp, esp */
  EBP = (ESP);
  /* 110e80e3 push edi */
  push32((uint32_t)(EDI));
  /* 110e80e4 push esi */
  push32((uint32_t)(ESI));
  /* 110e80e5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e80e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e80e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e80eb je 0x110e81da */
  if (C.zf) goto L_110e81da;
  /* 110e80f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e80f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e80f7 lea eax, [0x110ed918] */
  EAX = ((uint32_t)(0x110ed918));
  /* 110e80fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e8101 jne 0x110e8151 */
  if (!C.zf) goto L_110e8151;
  /* 110e8103 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 110e8105 mov bl, 0x5a */
  BL = (0x5au);
  /* 110e8107 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 110e8109 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e810c:;
  /* 110e810c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 110e810e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110e8110 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 110e8112 je 0x110e8135 */
  if (C.zf) goto L_110e8135;
  /* 110e8114 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e8116 je 0x110e8135 */
  if (C.zf) goto L_110e8135;
  /* 110e8118 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e8119 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e811a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e811c jb 0x110e8124 */
  if (C.cf) goto L_110e8124;
  /* 110e811e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8120 ja 0x110e8124 */
  if ((!C.cf&&!C.zf)) goto L_110e8124;
  /* 110e8122 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_110e8124:;
  /* 110e8124 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8126 jb 0x110e812e */
  if (C.cf) goto L_110e812e;
  /* 110e8128 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e812a ja 0x110e812e */
  if ((!C.cf&&!C.zf)) goto L_110e812e;
  /* 110e812c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_110e812e:;
  /* 110e812e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8130 jne 0x110e813f */
  if (!C.zf) goto L_110e813f;
  /* 110e8132 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e8133 jne 0x110e810c */
  if (!C.zf) goto L_110e810c;
L_110e8135:;
  /* 110e8135 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e8137 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e8139 je 0x110e81da */
  if (C.zf) goto L_110e81da;
L_110e813f:;
  /* 110e813f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 110e8144 jb 0x110e81da */
  if (C.cf) goto L_110e81da;
  /* 110e814a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e814c jmp 0x110e81da */
  goto L_110e81da;
L_110e8151:;
  /* 110e8151 lock inc dword ptr [0x110eda8c] */
  x86_unimpl("lock inc @ 0x110e8151");
  /* 110e8158 cmp dword ptr [0x110eda88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110eda88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e815f jg 0x110e8165 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e8165;
  /* 110e8161 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e8163 jmp 0x110e817e */
  goto L_110e817e;
L_110e8165:;
  /* 110e8165 lock dec dword ptr [0x110eda8c] */
  x86_unimpl("lock dec @ 0x110e8165");
  /* 110e816c mov ebx, ecx */
  EBX = (ECX);
  /* 110e816e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e8170 call 0x110e5fb6 */
  push32(0x110e8175u); f_110e5fb6();
  /* 110e8175 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 110e817c mov ecx, ebx */
  ECX = (EBX);
L_110e817e:;
  /* 110e817e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e8180 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e8182 mov edi, edi */
  EDI = (EDI);
L_110e8184:;
  /* 110e8184 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e8186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e8188 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 110e818a je 0x110e81af */
  if (C.zf) goto L_110e81af;
  /* 110e818c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e818e je 0x110e81af */
  if (C.zf) goto L_110e81af;
  /* 110e8190 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e8191 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e8192 push ecx */
  push32((uint32_t)(ECX));
  /* 110e8193 push eax */
  push32((uint32_t)(EAX));
  /* 110e8194 push ebx */
  push32((uint32_t)(EBX));
  /* 110e8195 call 0x110e82d5 */
  push32(0x110e819au); f_110e82d5();
  /* 110e819a mov ebx, eax */
  EBX = (EAX);
  /* 110e819c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e819f call 0x110e82d5 */
  push32(0x110e81a4u); f_110e82d5();
  /* 110e81a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e81a7 pop ecx */
  ECX = (pop32());
  /* 110e81a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e81aa jne 0x110e81b5 */
  if (!C.zf) goto L_110e81b5;
  /* 110e81ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e81ad jne 0x110e8184 */
  if (!C.zf) goto L_110e8184;
L_110e81af:;
  /* 110e81af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e81b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e81b3 je 0x110e81be */
  if (C.zf) goto L_110e81be;
L_110e81b5:;
  /* 110e81b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 110e81ba jb 0x110e81be */
  if (C.cf) goto L_110e81be;
  /* 110e81bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_110e81be:;
  /* 110e81be pop eax */
  EAX = (pop32());
  /* 110e81bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e81c1 jne 0x110e81cc */
  if (!C.zf) goto L_110e81cc;
  /* 110e81c3 lock dec dword ptr [0x110eda8c] */
  x86_unimpl("lock dec @ 0x110e81c3");
  /* 110e81ca jmp 0x110e81da */
  goto L_110e81da;
L_110e81cc:;
  /* 110e81cc mov ebx, ecx */
  EBX = (ECX);
  /* 110e81ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110e81d0 call 0x110e6017 */
  push32(0x110e81d5u); f_110e6017();
  /* 110e81d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e81d8 mov ecx, ebx */
  ECX = (EBX);
L_110e81da:;
  /* 110e81da mov eax, ecx */
  EAX = (ECX);
  /* 110e81dc pop ebx */
  EBX = (pop32());
  /* 110e81dd pop esi */
  ESI = (pop32());
  /* 110e81de pop edi */
  EDI = (pop32());
  /* 110e81df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e81e0 ret  */
  ESPCHK(0x110e80e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d5 @ 0x110e82d5 (203 bytes, 78 insns) */
void f_110e82d5(void) {
  FTRACE(0x110e82d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e82d5 push ebp */
  push32((uint32_t)(EBP));
  /* 110e82d6 mov ebp, esp */
  EBP = (ESP);
  /* 110e82d8 push ecx */
  push32((uint32_t)(ECX));
  /* 110e82d9 cmp dword ptr [0x110ed920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ed920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e82e0 push ebx */
  push32((uint32_t)(EBX));
  /* 110e82e1 push esi */
  push32((uint32_t)(ESI));
  /* 110e82e2 push edi */
  push32((uint32_t)(EDI));
  /* 110e82e3 jne 0x110e8302 */
  if (!C.zf) goto L_110e8302;
  /* 110e82e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e82e8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e82eb jl 0x110e839b */
  if ((C.sf!=C.of)) goto L_110e839b;
  /* 110e82f1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e82f4 jg 0x110e839b */
  if ((!C.zf&&C.sf==C.of)) goto L_110e839b;
  /* 110e82fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e82fd jmp 0x110e839b */
  goto L_110e839b;
L_110e8302:;
  /* 110e8302 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e8305 mov edi, 0x100 */
  EDI = (0x100u);
  /* 110e830a push 1 */
  push32((uint32_t)(0x1u));
  /* 110e830c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e830e pop esi */
  ESI = (pop32());
  /* 110e830f jge 0x110e8336 */
  if ((C.sf==C.of)) goto L_110e8336;
  /* 110e8311 cmp dword ptr [0x110ecc8c], esi */
  { uint32_t _a=(r32((uint32_t)(0x110ecc8c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e8317 jle 0x110e8324 */
  if ((C.zf||C.sf!=C.of)) goto L_110e8324;
  /* 110e8319 push esi */
  push32((uint32_t)(ESI));
  /* 110e831a push ebx */
  push32((uint32_t)(EBX));
  /* 110e831b call 0x110e7e60 */
  push32(0x110e8320u); f_110e7e60();
  /* 110e8320 pop ecx */
  ECX = (pop32());
  /* 110e8321 pop ecx */
  ECX = (pop32());
  /* 110e8322 jmp 0x110e832e */
  goto L_110e832e;
L_110e8324:;
  /* 110e8324 mov eax, dword ptr [0x110eca80] */
  EAX = (r32((uint32_t)(0x110eca80)));
  /* 110e8329 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 110e832c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_110e832e:;
  /* 110e832e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e8330 jne 0x110e8336 */
  if (!C.zf) goto L_110e8336;
L_110e8332:;
  /* 110e8332 mov eax, ebx */
  EAX = (EBX);
  /* 110e8334 jmp 0x110e839b */
  goto L_110e839b;
L_110e8336:;
  /* 110e8336 mov edx, dword ptr [0x110eca80] */
  EDX = (r32((uint32_t)(0x110eca80)));
  /* 110e833c mov eax, ebx */
  EAX = (EBX);
  /* 110e833e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e8341 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 110e8344 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 110e8349 je 0x110e835a */
  if (C.zf) goto L_110e835a;
  /* 110e834b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 110e834f push 2 */
  push32((uint32_t)(0x2u));
  /* 110e8351 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 110e8354 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 110e8357 pop eax */
  EAX = (pop32());
  /* 110e8358 jmp 0x110e8363 */
  goto L_110e8363;
L_110e835a:;
  /* 110e835a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 110e835e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 110e8361 mov eax, esi */
  EAX = (ESI);
L_110e8363:;
  /* 110e8363 push esi */
  push32((uint32_t)(ESI));
  /* 110e8364 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e8366 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 110e8369 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e836b push ecx */
  push32((uint32_t)(ECX));
  /* 110e836c push eax */
  push32((uint32_t)(EAX));
  /* 110e836d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 110e8370 push eax */
  push32((uint32_t)(EAX));
  /* 110e8371 push edi */
  push32((uint32_t)(EDI));
  /* 110e8372 push dword ptr [0x110ed920] */
  push32((uint32_t)(r32((uint32_t)(0x110ed920))));
  /* 110e8378 call 0x110e798d */
  push32(0x110e837du); f_110e798d();
  /* 110e837d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e8380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e8382 je 0x110e8332 */
  if (C.zf) goto L_110e8332;
  /* 110e8384 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e8386 jne 0x110e838e */
  if (!C.zf) goto L_110e838e;
  /* 110e8388 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110e838c jmp 0x110e839b */
  goto L_110e839b;
L_110e838e:;
  /* 110e838e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 110e8392 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 110e8396 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e8399 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_110e839b:;
  /* 110e839b pop edi */
  EDI = (pop32());
  /* 110e839c pop esi */
  ESI = (pop32());
  /* 110e839d pop ebx */
  EBX = (pop32());
  /* 110e839e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e839f ret  */
  ESPCHK(0x110e82d5u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x110e83d4 (6 bytes, 1 insns) */
void f_110e83d4(void) {
  FTRACE(0x110e83d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e83d4 jmp dword ptr [0x110e9044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110e9044)))); return;
}

