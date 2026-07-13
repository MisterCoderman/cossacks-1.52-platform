#include "recomp.h"

/* FUN_10009182 @ 0x11b79182 (24 bytes, 10 insns) */
void f_11b79182(void) {
  FTRACE(0x11b79182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79182 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79183 push ecx */
  push32((uint32_t)(ECX));
  /* 11b79184 mov ebx, 0x11b803d0 */
  EBX = (0x11b803d0u);
  /* 11b79189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7918c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b7918f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b79192 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11b79195 pop ecx */
  ECX = (pop32());
  /* 11b79196 pop ebx */
  EBX = (pop32());
  /* 11b79197 ret 4 */
  ESPCHK(0x11b79182u, _esp0);
  ESP += 8; return;
}

/* FUN_10009261 @ 0x11b79261 (27 bytes, 11 insns) */
void f_11b79261(void) {
  FTRACE(0x11b79261u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79261 push ebp */
  push32((uint32_t)(EBP));
  /* 11b79262 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b79266 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11b79268 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b7926b push eax */
  push32((uint32_t)(EAX));
  /* 11b7926c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b7926f push eax */
  push32((uint32_t)(EAX));
  /* 11b79270 call 0x11b790ee */
  push32(0x11b79275u); f_11b790ee();
  /* 11b79275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79278 pop ebp */
  EBP = (pop32());
  /* 11b79279 ret 4 */
  ESPCHK(0x11b79261u, _esp0);
  ESP += 8; return;
}

/* FUN_1000927c @ 0x11b7927c (318 bytes, 123 insns) */
void f_11b7927c(void) {
  FTRACE(0x11b7927cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7927c push ebp */
  push32((uint32_t)(EBP));
  /* 11b7927d mov ebp, esp */
  EBP = (ESP);
  /* 11b7927f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b79281 push 0x11b7b5c8 */
  push32((uint32_t)(0x11b7b5c8u));
  /* 11b79286 push 0x11b791a4 */
  push32((uint32_t)(0x11b791a4u));
  /* 11b7928b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b79291 push eax */
  push32((uint32_t)(EAX));
  /* 11b79292 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b79299 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7929c push ebx */
  push32((uint32_t)(EBX));
  /* 11b7929d push esi */
  push32((uint32_t)(ESI));
  /* 11b7929e push edi */
  push32((uint32_t)(EDI));
  /* 11b7929f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b792a2 mov eax, dword ptr [0x11b814c8] */
  EAX = (r32((uint32_t)(0x11b814c8)));
  /* 11b792a7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b792a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b792ab jne 0x11b792eb */
  if (!C.zf) goto L_11b792eb;
  /* 11b792ad lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b792b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b792b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b792b3 pop esi */
  ESI = (pop32());
  /* 11b792b4 push esi */
  push32((uint32_t)(ESI));
  /* 11b792b5 push 0x11b7b5c0 */
  push32((uint32_t)(0x11b7b5c0u));
  /* 11b792ba push esi */
  push32((uint32_t)(ESI));
  /* 11b792bb call dword ptr [0x11b7b00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b00c))), 0x11b792c1u);
  /* 11b792c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b792c3 je 0x11b792c9 */
  if (C.zf) goto L_11b792c9;
  /* 11b792c5 mov eax, esi */
  EAX = (ESI);
  /* 11b792c7 jmp 0x11b792e6 */
  goto L_11b792e6;
L_11b792c9:;
  /* 11b792c9 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b792cc push eax */
  push32((uint32_t)(EAX));
  /* 11b792cd push esi */
  push32((uint32_t)(ESI));
  /* 11b792ce push 0x11b7b5bc */
  push32((uint32_t)(0x11b7b5bcu));
  /* 11b792d3 push esi */
  push32((uint32_t)(ESI));
  /* 11b792d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b792d5 call dword ptr [0x11b7b018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b018))), 0x11b792dbu);
  /* 11b792db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b792dd je 0x11b793b1 */
  if (C.zf) goto L_11b793b1;
  /* 11b792e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b792e5 pop eax */
  EAX = (pop32());
L_11b792e6:;
  /* 11b792e6 mov dword ptr [0x11b814c8], eax */
  w32((uint32_t)(0x11b814c8), (EAX));
L_11b792eb:;
  /* 11b792eb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b792ee jne 0x11b79314 */
  if (!C.zf) goto L_11b79314;
  /* 11b792f0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b792f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b792f5 jne 0x11b792fc */
  if (!C.zf) goto L_11b792fc;
  /* 11b792f7 mov eax, dword ptr [0x11b814e0] */
  EAX = (r32((uint32_t)(0x11b814e0)));
L_11b792fc:;
  /* 11b792fc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b792ff push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b79302 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b79305 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b79308 push eax */
  push32((uint32_t)(EAX));
  /* 11b79309 call dword ptr [0x11b7b018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b018))), 0x11b7930fu);
  /* 11b7930f jmp 0x11b793b3 */
  goto L_11b793b3;
L_11b79314:;
  /* 11b79314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79317 jne 0x11b793b1 */
  if (!C.zf) goto L_11b793b1;
  /* 11b7931d cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79320 jne 0x11b7932a */
  if (!C.zf) goto L_11b7932a;
  /* 11b79322 mov eax, dword ptr [0x11b814f0] */
  EAX = (r32((uint32_t)(0x11b814f0)));
  /* 11b79327 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11b7932a:;
  /* 11b7932a push ebx */
  push32((uint32_t)(EBX));
  /* 11b7932b push ebx */
  push32((uint32_t)(EBX));
  /* 11b7932c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b7932f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b79332 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b79335 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b79337 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79339 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b7933c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b7933d push eax */
  push32((uint32_t)(EAX));
  /* 11b7933e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b79341 call dword ptr [0x11b7b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b014))), 0x11b79347u);
  /* 11b79347 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b7934a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7934c je 0x11b793b1 */
  if (C.zf) goto L_11b793b1;
  /* 11b7934e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b79351 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11b79354 mov eax, edi */
  EAX = (EDI);
  /* 11b79356 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79359 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b7935b call 0x11b78060 */
  push32(0x11b79360u); f_11b78060();
  /* 11b79360 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b79363 mov esi, esp */
  ESI = (ESP);
  /* 11b79365 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11b79368 push edi */
  push32((uint32_t)(EDI));
  /* 11b79369 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7936a push esi */
  push32((uint32_t)(ESI));
  /* 11b7936b call 0x11b77010 */
  push32(0x11b79370u); f_11b77010();
  /* 11b79370 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79373 jmp 0x11b79380 */
  goto L_11b79380;
  /* 11b79375 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79377 pop eax */
  EAX = (pop32());
  /* 11b79378 ret  */
  ESPCHK(0x11b7927cu, _esp0);
  ESP += 4; return;
  /* 11b79379 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b7937c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b7937e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11b79380:;
  /* 11b79380 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b79384 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79386 je 0x11b793b1 */
  if (C.zf) goto L_11b793b1;
  /* 11b79388 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b7938b push esi */
  push32((uint32_t)(ESI));
  /* 11b7938c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b7938f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b79392 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79394 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b79397 call dword ptr [0x11b7b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b014))), 0x11b7939du);
  /* 11b7939d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7939f je 0x11b793b1 */
  if (C.zf) goto L_11b793b1;
  /* 11b793a1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b793a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b793a5 push esi */
  push32((uint32_t)(ESI));
  /* 11b793a6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b793a9 call dword ptr [0x11b7b00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b00c))), 0x11b793afu);
  /* 11b793af jmp 0x11b793b3 */
  goto L_11b793b3;
L_11b793b1:;
  /* 11b793b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b793b3:;
  /* 11b793b3 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11b793b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b793b9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b793c0 pop edi */
  EDI = (pop32());
  /* 11b793c1 pop esi */
  ESI = (pop32());
  /* 11b793c2 pop ebx */
  EBX = (pop32());
  /* 11b793c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b793c4 ret  */
  ESPCHK(0x11b7927cu, _esp0);
  ESP += 4; return;
}

/* FUN_100093c5 @ 0x11b793c5 (511 bytes, 193 insns) */
void f_11b793c5(void) {
  FTRACE(0x11b793c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b793c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b793c6 mov ebp, esp */
  EBP = (ESP);
  /* 11b793c8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b793ca push 0x11b7b5d8 */
  push32((uint32_t)(0x11b7b5d8u));
  /* 11b793cf push 0x11b791a4 */
  push32((uint32_t)(0x11b791a4u));
  /* 11b793d4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b793da push eax */
  push32((uint32_t)(EAX));
  /* 11b793db mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b793e2 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b793e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b793e6 push esi */
  push32((uint32_t)(ESI));
  /* 11b793e7 push edi */
  push32((uint32_t)(EDI));
  /* 11b793e8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b793eb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b793ed cmp dword ptr [0x11b814f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b814f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b793f3 jne 0x11b7943b */
  if (!C.zf) goto L_11b7943b;
  /* 11b793f5 push edi */
  push32((uint32_t)(EDI));
  /* 11b793f6 push edi */
  push32((uint32_t)(EDI));
  /* 11b793f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b793f9 pop ebx */
  EBX = (pop32());
  /* 11b793fa push ebx */
  push32((uint32_t)(EBX));
  /* 11b793fb push 0x11b7b5c0 */
  push32((uint32_t)(0x11b7b5c0u));
  /* 11b79400 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11b79405 push esi */
  push32((uint32_t)(ESI));
  /* 11b79406 push edi */
  push32((uint32_t)(EDI));
  /* 11b79407 call dword ptr [0x11b7b008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b008))), 0x11b7940du);
  /* 11b7940d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7940f je 0x11b79419 */
  if (C.zf) goto L_11b79419;
  /* 11b79411 mov dword ptr [0x11b814f8], ebx */
  w32((uint32_t)(0x11b814f8), (EBX));
  /* 11b79417 jmp 0x11b7943b */
  goto L_11b7943b;
L_11b79419:;
  /* 11b79419 push edi */
  push32((uint32_t)(EDI));
  /* 11b7941a push edi */
  push32((uint32_t)(EDI));
  /* 11b7941b push ebx */
  push32((uint32_t)(EBX));
  /* 11b7941c push 0x11b7b5bc */
  push32((uint32_t)(0x11b7b5bcu));
  /* 11b79421 push esi */
  push32((uint32_t)(ESI));
  /* 11b79422 push edi */
  push32((uint32_t)(EDI));
  /* 11b79423 call dword ptr [0x11b7b010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b010))), 0x11b79429u);
  /* 11b79429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7942b je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b79431 mov dword ptr [0x11b814f8], 2 */
  w32((uint32_t)(0x11b814f8), (0x2u));
L_11b7943b:;
  /* 11b7943b cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7943e jle 0x11b79450 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79450;
  /* 11b79440 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b79443 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b79446 call 0x11b795e9 */
  push32(0x11b7944bu); f_11b795e9();
  /* 11b7944b pop ecx */
  ECX = (pop32());
  /* 11b7944c pop ecx */
  ECX = (pop32());
  /* 11b7944d mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11b79450:;
  /* 11b79450 mov eax, dword ptr [0x11b814f8] */
  EAX = (r32((uint32_t)(0x11b814f8)));
  /* 11b79455 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79458 jne 0x11b79477 */
  if (!C.zf) goto L_11b79477;
  /* 11b7945a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b7945d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b79460 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b79463 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b79466 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b79469 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b7946c call dword ptr [0x11b7b010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b010))), 0x11b79472u);
  /* 11b79472 jmp 0x11b79555 */
  goto L_11b79555;
L_11b79477:;
  /* 11b79477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7947a jne 0x11b79553 */
  if (!C.zf) goto L_11b79553;
  /* 11b79480 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79483 jne 0x11b7948d */
  if (!C.zf) goto L_11b7948d;
  /* 11b79485 mov eax, dword ptr [0x11b814f0] */
  EAX = (r32((uint32_t)(0x11b814f0)));
  /* 11b7948a mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11b7948d:;
  /* 11b7948d push edi */
  push32((uint32_t)(EDI));
  /* 11b7948e push edi */
  push32((uint32_t)(EDI));
  /* 11b7948f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b79492 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b79495 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b79498 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b7949a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7949c and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b7949f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b794a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b794a1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b794a4 call dword ptr [0x11b7b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b014))), 0x11b794aau);
  /* 11b794aa mov ebx, eax */
  EBX = (EAX);
  /* 11b794ac mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11b794af cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b794b1 je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b794b7 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b794ba lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11b794bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b794c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b794c2 call 0x11b78060 */
  push32(0x11b794c7u); f_11b78060();
  /* 11b794c7 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b794ca mov eax, esp */
  EAX = (ESP);
  /* 11b794cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b794cf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b794d3 jmp 0x11b794e8 */
  goto L_11b794e8;
  /* 11b794d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b794d7 pop eax */
  EAX = (pop32());
  /* 11b794d8 ret  */
  ESPCHK(0x11b793c5u, _esp0);
  ESP += 4; return;
  /* 11b794d9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b794dc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b794de mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11b794e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b794e5 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11b794e8:;
  /* 11b794e8 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b794eb je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b794ed push ebx */
  push32((uint32_t)(EBX));
  /* 11b794ee push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b794f1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b794f4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b794f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b794f9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b794fc call dword ptr [0x11b7b014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b014))), 0x11b79502u);
  /* 11b79502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79504 je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b79506 push edi */
  push32((uint32_t)(EDI));
  /* 11b79507 push edi */
  push32((uint32_t)(EDI));
  /* 11b79508 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79509 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b7950c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b7950f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b79512 call dword ptr [0x11b7b008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b008))), 0x11b79518u);
  /* 11b79518 mov esi, eax */
  ESI = (EAX);
  /* 11b7951a mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11b7951d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7951f je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b79521 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11b79525 je 0x11b79567 */
  if (C.zf) goto L_11b79567;
  /* 11b79527 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7952a je 0x11b795e2 */
  if (C.zf) goto L_11b795e2;
  /* 11b79530 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79533 jg 0x11b79553 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79553;
  /* 11b79535 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b79538 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b7953b push ebx */
  push32((uint32_t)(EBX));
  /* 11b7953c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b7953f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b79542 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b79545 call dword ptr [0x11b7b008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b008))), 0x11b7954bu);
  /* 11b7954b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7954d jne 0x11b795e2 */
  if (!C.zf) goto L_11b795e2;
L_11b79553:;
  /* 11b79553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b79555:;
  /* 11b79555 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11b79558 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b7955b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b79562 pop edi */
  EDI = (pop32());
  /* 11b79563 pop esi */
  ESI = (pop32());
  /* 11b79564 pop ebx */
  EBX = (pop32());
  /* 11b79565 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b79566 ret  */
  ESPCHK(0x11b793c5u, _esp0);
  ESP += 4; return;
L_11b79567:;
  /* 11b79567 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b7956e lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11b79571 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79574 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b79576 call 0x11b78060 */
  push32(0x11b7957bu); f_11b78060();
  /* 11b7957b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b7957e mov ebx, esp */
  EBX = (ESP);
  /* 11b79580 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11b79583 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b79587 jmp 0x11b7959b */
  goto L_11b7959b;
  /* 11b79589 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7958b pop eax */
  EAX = (pop32());
  /* 11b7958c ret  */
  ESPCHK(0x11b793c5u, _esp0);
  ESP += 4; return;
  /* 11b7958d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b79590 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b79592 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79594 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b79598 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11b7959b:;
  /* 11b7959b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7959d je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b7959f push esi */
  push32((uint32_t)(ESI));
  /* 11b795a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b795a1 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b795a4 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b795a7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b795aa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b795ad call dword ptr [0x11b7b008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b008))), 0x11b795b3u);
  /* 11b795b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b795b5 je 0x11b79553 */
  if (C.zf) goto L_11b79553;
  /* 11b795b7 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b795ba push edi */
  push32((uint32_t)(EDI));
  /* 11b795bb push edi */
  push32((uint32_t)(EDI));
  /* 11b795bc jne 0x11b795c2 */
  if (!C.zf) goto L_11b795c2;
  /* 11b795be push edi */
  push32((uint32_t)(EDI));
  /* 11b795bf push edi */
  push32((uint32_t)(EDI));
  /* 11b795c0 jmp 0x11b795c8 */
  goto L_11b795c8;
L_11b795c2:;
  /* 11b795c2 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b795c5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11b795c8:;
  /* 11b795c8 push esi */
  push32((uint32_t)(ESI));
  /* 11b795c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11b795ca push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b795cf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b795d2 call dword ptr [0x11b7b070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b070))), 0x11b795d8u);
  /* 11b795d8 mov esi, eax */
  ESI = (EAX);
  /* 11b795da cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b795dc je 0x11b79553 */
  if (C.zf) goto L_11b79553;
L_11b795e2:;
  /* 11b795e2 mov eax, esi */
  EAX = (ESI);
  /* 11b795e4 jmp 0x11b79555 */
  goto L_11b79555;
}

/* FUN_100095e9 @ 0x11b795e9 (43 bytes, 20 insns) */
void f_11b795e9(void) {
  FTRACE(0x11b795e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b795e9 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b795ed mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b795f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b795f3 push esi */
  push32((uint32_t)(ESI));
  /* 11b795f4 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11b795f7 je 0x11b79606 */
  if (C.zf) goto L_11b79606;
L_11b795f9:;
  /* 11b795f9 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b795fc je 0x11b79606 */
  if (C.zf) goto L_11b79606;
  /* 11b795fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b795ff mov esi, ecx */
  ESI = (ECX);
  /* 11b79601 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b79602 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b79604 jne 0x11b795f9 */
  if (!C.zf) goto L_11b795f9;
L_11b79606:;
  /* 11b79606 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79609 pop esi */
  ESI = (pop32());
  /* 11b7960a jne 0x11b79611 */
  if (!C.zf) goto L_11b79611;
  /* 11b7960c sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79610 ret  */
  ESPCHK(0x11b795e9u, _esp0);
  ESP += 4; return;
L_11b79611:;
  /* 11b79611 mov eax, edx */
  EAX = (EDX);
  /* 11b79613 ret  */
  ESPCHK(0x11b795e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009614 @ 0x11b79614 (33 bytes, 15 insns) */
void f_11b79614(void) {
  FTRACE(0x11b79614u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79614 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b79618 push esi */
  push32((uint32_t)(ESI));
  /* 11b79619 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b7961d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7961f lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11b79622 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79624 jb 0x11b7962a */
  if (C.cf) goto L_11b7962a;
  /* 11b79626 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79628 jae 0x11b7962d */
  if (!C.cf) goto L_11b7962d;
L_11b7962a:;
  /* 11b7962a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7962c pop eax */
  EAX = (pop32());
L_11b7962d:;
  /* 11b7962d mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b79631 pop esi */
  ESI = (pop32());
  /* 11b79632 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b79634 ret  */
  ESPCHK(0x11b79614u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11b79635 (94 bytes, 38 insns) */
void f_11b79635(void) {
  FTRACE(0x11b79635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79635 push esi */
  push32((uint32_t)(ESI));
  /* 11b79636 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b7963a push edi */
  push32((uint32_t)(EDI));
  /* 11b7963b mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b7963f push esi */
  push32((uint32_t)(ESI));
  /* 11b79640 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11b79642 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b79644 call 0x11b79614 */
  push32(0x11b79649u); f_11b79614();
  /* 11b79649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7964c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7964e je 0x11b79667 */
  if (C.zf) goto L_11b79667;
  /* 11b79650 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11b79653 push eax */
  push32((uint32_t)(EAX));
  /* 11b79654 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79656 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11b79658 call 0x11b79614 */
  push32(0x11b7965du); f_11b79614();
  /* 11b7965d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79662 je 0x11b79667 */
  if (C.zf) goto L_11b79667;
  /* 11b79664 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11b79667:;
  /* 11b79667 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11b7966a push eax */
  push32((uint32_t)(EAX));
  /* 11b7966b push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11b7966e push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11b79670 call 0x11b79614 */
  push32(0x11b79675u); f_11b79614();
  /* 11b79675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7967a je 0x11b7967f */
  if (C.zf) goto L_11b7967f;
  /* 11b7967c inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11b7967f:;
  /* 11b7967f lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11b79682 push eax */
  push32((uint32_t)(EAX));
  /* 11b79683 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11b79686 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11b79688 call 0x11b79614 */
  push32(0x11b7968du); f_11b79614();
  /* 11b7968d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79690 pop edi */
  EDI = (pop32());
  /* 11b79691 pop esi */
  ESI = (pop32());
  /* 11b79692 ret  */
  ESPCHK(0x11b79635u, _esp0);
  ESP += 4; return;
}

/* FUN_10009693 @ 0x11b79693 (46 bytes, 21 insns) */
void f_11b79693(void) {
  FTRACE(0x11b79693u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79693 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b79697 push esi */
  push32((uint32_t)(ESI));
  /* 11b79698 push edi */
  push32((uint32_t)(EDI));
  /* 11b79699 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11b7969b mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11b7969e mov ecx, esi */
  ECX = (ESI);
  /* 11b796a0 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b796a2 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11b796a4 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11b796a7 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11b796aa or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11b796ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b796af mov edx, edi */
  EDX = (EDI);
  /* 11b796b1 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11b796b4 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11b796b7 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b796b9 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b796bb pop edi */
  EDI = (pop32());
  /* 11b796bc mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b796bf pop esi */
  ESI = (pop32());
  /* 11b796c0 ret  */
  ESPCHK(0x11b79693u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c1 @ 0x11b796c1 (45 bytes, 21 insns) */
void f_11b796c1(void) {
  FTRACE(0x11b796c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b796c1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b796c5 push esi */
  push32((uint32_t)(ESI));
  /* 11b796c6 push edi */
  push32((uint32_t)(EDI));
  /* 11b796c7 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b796ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b796cd mov esi, edx */
  ESI = (EDX);
  /* 11b796cf mov edi, ecx */
  EDI = (ECX);
  /* 11b796d1 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11b796d4 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b796d6 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11b796d8 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b796db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b796dd shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11b796e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b796e2 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b796e4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b796e6 pop edi */
  EDI = (pop32());
  /* 11b796e7 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b796ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b796ec pop esi */
  ESI = (pop32());
  /* 11b796ed ret  */
  ESPCHK(0x11b796c1u, _esp0);
  ESP += 4; return;
}

/* FUN_100096ee @ 0x11b796ee (199 bytes, 76 insns) */
void f_11b796ee(void) {
  FTRACE(0x11b796eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b796ee push ebp */
  push32((uint32_t)(EBP));
  /* 11b796ef mov ebp, esp */
  EBP = (ESP);
  /* 11b796f1 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b796f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b796f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b796f8 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b796fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b796fd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b796ff push esi */
  push32((uint32_t)(ESI));
  /* 11b79700 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11b79707 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11b79709 mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11b7970c mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11b7970f jbe 0x11b79762 */
  if ((C.cf||C.zf)) goto L_11b79762;
  /* 11b79711 push edi */
  push32((uint32_t)(EDI));
  /* 11b79712 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b79715:;
  /* 11b79715 mov esi, ebx */
  ESI = (EBX);
  /* 11b79717 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11b7971a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7971b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7971c push ebx */
  push32((uint32_t)(EBX));
  /* 11b7971d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7971e call 0x11b79693 */
  push32(0x11b79723u); f_11b79693();
  /* 11b79723 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79724 call 0x11b79693 */
  push32(0x11b79729u); f_11b79693();
  /* 11b79729 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b7972c push eax */
  push32((uint32_t)(EAX));
  /* 11b7972d push ebx */
  push32((uint32_t)(EBX));
  /* 11b7972e call 0x11b79635 */
  push32(0x11b79733u); f_11b79635();
  /* 11b79733 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79734 call 0x11b79693 */
  push32(0x11b79739u); f_11b79693();
  /* 11b79739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7973c and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11b79740 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b79744 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b79747 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b7974a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b7974d push eax */
  push32((uint32_t)(EAX));
  /* 11b7974e push ebx */
  push32((uint32_t)(EBX));
  /* 11b7974f call 0x11b79635 */
  push32(0x11b79754u); f_11b79635();
  /* 11b79754 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79757 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11b7975a dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11b7975d jne 0x11b79715 */
  if (!C.zf) goto L_11b79715;
  /* 11b7975f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b79761 pop edi */
  EDI = (pop32());
L_11b79762:;
  /* 11b79762 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79765 jne 0x11b7978f */
  if (!C.zf) goto L_11b7978f;
  /* 11b79767 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b7976a mov eax, ecx */
  EAX = (ECX);
  /* 11b7976c shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b7976f mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11b79772 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11b79774 mov esi, eax */
  ESI = (EAX);
  /* 11b79776 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11b79779 shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11b7977c or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11b7977e shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b79781 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b79788 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11b7978b mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11b7978d jmp 0x11b79762 */
  goto L_11b79762;
L_11b7978f:;
  /* 11b7978f mov esi, 0x8000 */
  ESI = (0x8000u);
L_11b79794:;
  /* 11b79794 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11b79797 jne 0x11b797a9 */
  if (!C.zf) goto L_11b797a9;
  /* 11b79799 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7979a call 0x11b79693 */
  push32(0x11b7979fu); f_11b79693();
  /* 11b7979f add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b797a6 pop ecx */
  ECX = (pop32());
  /* 11b797a7 jmp 0x11b79794 */
  goto L_11b79794;
L_11b797a9:;
  /* 11b797a9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b797ad pop esi */
  ESI = (pop32());
  /* 11b797ae mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11b797b2 pop ebx */
  EBX = (pop32());
  /* 11b797b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b797b4 ret  */
  ESPCHK(0x11b796eeu, _esp0);
  ESP += 4; return;
}

/* FUN_100097b5 @ 0x11b797b5 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11b797b5(void) {
  FTRACE(0x11b797b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b797b5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b797b6 mov ebp, esp */
  EBP = (ESP);
  /* 11b797b8 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b797bb push ebx */
  push32((uint32_t)(EBX));
  /* 11b797bc push esi */
  push32((uint32_t)(ESI));
  /* 11b797bd push edi */
  push32((uint32_t)(EDI));
  /* 11b797be mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b797c1 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11b797c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b797c6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b797c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b797cb pop edx */
  EDX = (pop32());
  /* 11b797cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b797cf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b797d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b797d5 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b797d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b797db mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b797de mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b797e1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11b797e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b797e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b797ea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b797ed mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11b797f0:;
  /* 11b797f0 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11b797f2 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b797f5 je 0x11b79806 */
  if (C.zf) goto L_11b79806;
  /* 11b797f7 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b797fa je 0x11b79806 */
  if (C.zf) goto L_11b79806;
  /* 11b797fc cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b797ff je 0x11b79806 */
  if (C.zf) goto L_11b79806;
  /* 11b79801 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79804 jne 0x11b79809 */
  if (!C.zf) goto L_11b79809;
L_11b79806:;
  /* 11b79806 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79807 jmp 0x11b797f0 */
  goto L_11b797f0;
L_11b79809:;
  /* 11b79809 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b7980b pop esi */
  ESI = (pop32());
L_11b7980c:;
  /* 11b7980c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b7980e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7980f cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79812 ja 0x11b79a8f */
  if ((!C.cf&&!C.zf)) goto L_11b79a8f;
  /* 11b79818 jmp dword ptr [eax*4 + 0x11b79c56] */
  switch (EAX) {
    case 0: goto L_11b7981f;
    case 1: goto L_11b7986e;
    case 2: goto L_11b798c5;
    case 3: goto L_11b798ef;
    case 4: goto L_11b7994a;
    case 5: goto L_11b799c1;
    case 6: goto L_11b799f7;
    case 7: goto L_11b79a41;
    case 8: goto L_11b79a20;
    case 9: goto L_11b79aa5;
    case 10: goto L_11b79a8f;
    case 11: goto L_11b79a5b;
    default: x86_unimpl("switch@0x11b79818 out of table"); return;
  }
L_11b7981f:;
  /* 11b7981f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79822 jl 0x11b79830 */
  if ((C.sf!=C.of)) goto L_11b79830;
  /* 11b79824 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79827 jg 0x11b79830 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79830;
L_11b79829:;
  /* 11b79829 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b7982b jmp 0x11b79a4d */
  goto L_11b79a4d;
L_11b79830:;
  /* 11b79830 cmp bl, byte ptr [0x11b7e05c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11b7e05c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79836 jne 0x11b7983f */
  if (!C.zf) goto L_11b7983f;
L_11b79838:;
  /* 11b79838 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b7983a jmp 0x11b79a85 */
  goto L_11b79a85;
L_11b7983f:;
  /* 11b7983f movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b79842 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79845 je 0x11b79865 */
  if (C.zf) goto L_11b79865;
  /* 11b79847 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79849 je 0x11b79859 */
  if (C.zf) goto L_11b79859;
  /* 11b7984b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7984e jne 0x11b79b28 */
  if (!C.zf) goto L_11b79b28;
  /* 11b79854 jmp 0x11b798e8 */
  goto L_11b798e8;
L_11b79859:;
  /* 11b79859 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7985b mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11b79862 pop eax */
  EAX = (pop32());
  /* 11b79863 jmp 0x11b7980c */
  goto L_11b7980c;
L_11b79865:;
  /* 11b79865 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11b79869 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7986b pop eax */
  EAX = (pop32());
  /* 11b7986c jmp 0x11b7980c */
  goto L_11b7980c;
L_11b7986e:;
  /* 11b7986e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79871 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b79874 jl 0x11b7987b */
  if ((C.sf!=C.of)) goto L_11b7987b;
  /* 11b79876 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79879 jle 0x11b79829 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79829;
L_11b7987b:;
  /* 11b7987b cmp bl, byte ptr [0x11b7e05c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11b7e05c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79881 je 0x11b79943 */
  if (C.zf) goto L_11b79943;
  /* 11b79887 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7988a je 0x11b798bd */
  if (C.zf) goto L_11b798bd;
  /* 11b7988c cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7988f je 0x11b798bd */
  if (C.zf) goto L_11b798bd;
  /* 11b79891 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79894 je 0x11b798e8 */
  if (C.zf) goto L_11b798e8;
L_11b79896:;
  /* 11b79896 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79899 jle 0x11b79b28 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79b28;
  /* 11b7989f cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798a2 jle 0x11b798b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11b798b6;
  /* 11b798a4 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798a7 jle 0x11b79b28 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79b28;
  /* 11b798ad cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798b0 jg 0x11b79b28 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79b28;
L_11b798b6:;
  /* 11b798b6 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b798b8 jmp 0x11b79a85 */
  goto L_11b79a85;
L_11b798bd:;
  /* 11b798bd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b798be push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b798c0 jmp 0x11b79a85 */
  goto L_11b79a85;
L_11b798c5:;
  /* 11b798c5 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798c8 jl 0x11b798d3 */
  if ((C.sf!=C.of)) goto L_11b798d3;
  /* 11b798ca cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798cd jle 0x11b79829 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79829;
L_11b798d3:;
  /* 11b798d3 cmp bl, byte ptr [0x11b7e05c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11b7e05c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798d9 je 0x11b79838 */
  if (C.zf) goto L_11b79838;
  /* 11b798df cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b798e2 jne 0x11b79a9d */
  if (!C.zf) goto L_11b79a9d;
L_11b798e8:;
  /* 11b798e8 mov eax, edx */
  EAX = (EDX);
  /* 11b798ea jmp 0x11b7980c */
  goto L_11b7980c;
L_11b798ef:;
  /* 11b798ef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b798f2:;
  /* 11b798f2 cmp dword ptr [0x11b7e058], edx */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b798f8 jle 0x11b7990b */
  if ((C.zf||C.sf!=C.of)) goto L_11b7990b;
  /* 11b798fa movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b798fd push esi */
  push32((uint32_t)(ESI));
  /* 11b798fe push eax */
  push32((uint32_t)(EAX));
  /* 11b798ff call 0x11b767f9 */
  push32(0x11b79904u); f_11b767f9();
  /* 11b79904 pop ecx */
  ECX = (pop32());
  /* 11b79905 pop ecx */
  ECX = (pop32());
  /* 11b79906 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79908 pop edx */
  EDX = (pop32());
  /* 11b79909 jmp 0x11b79919 */
  goto L_11b79919;
L_11b7990b:;
  /* 11b7990b mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79911 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79914 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b79917 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b79919:;
  /* 11b79919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7991b je 0x11b7993b */
  if (C.zf) goto L_11b7993b;
  /* 11b7991d cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79921 jae 0x11b79933 */
  if (!C.cf) goto L_11b79933;
  /* 11b79923 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b79926 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b79929 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7992c inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11b7992f mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11b79931 jmp 0x11b79936 */
  goto L_11b79936;
L_11b79933:;
  /* 11b79933 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11b79936:;
  /* 11b79936 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b79938 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79939 jmp 0x11b798f2 */
  goto L_11b798f2;
L_11b7993b:;
  /* 11b7993b cmp bl, byte ptr [0x11b7e05c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11b7e05c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79941 jne 0x11b799aa */
  if (!C.zf) goto L_11b799aa;
L_11b79943:;
  /* 11b79943 mov eax, esi */
  EAX = (ESI);
  /* 11b79945 jmp 0x11b7980c */
  goto L_11b7980c;
L_11b7994a:;
  /* 11b7994a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7994e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b79951 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b79954 jne 0x11b79963 */
  if (!C.zf) goto L_11b79963;
L_11b79956:;
  /* 11b79956 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79959 jne 0x11b79963 */
  if (!C.zf) goto L_11b79963;
  /* 11b7995b dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11b7995e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b79960 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79961 jmp 0x11b79956 */
  goto L_11b79956;
L_11b79963:;
  /* 11b79963 cmp dword ptr [0x11b7e058], edx */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79969 jle 0x11b7997c */
  if ((C.zf||C.sf!=C.of)) goto L_11b7997c;
  /* 11b7996b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b7996e push esi */
  push32((uint32_t)(ESI));
  /* 11b7996f push eax */
  push32((uint32_t)(EAX));
  /* 11b79970 call 0x11b767f9 */
  push32(0x11b79975u); f_11b767f9();
  /* 11b79975 pop ecx */
  ECX = (pop32());
  /* 11b79976 pop ecx */
  ECX = (pop32());
  /* 11b79977 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79979 pop edx */
  EDX = (pop32());
  /* 11b7997a jmp 0x11b7998a */
  goto L_11b7998a;
L_11b7997c:;
  /* 11b7997c mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79982 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79985 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b79988 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b7998a:;
  /* 11b7998a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7998c je 0x11b799aa */
  if (C.zf) goto L_11b799aa;
  /* 11b7998e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79992 jae 0x11b799a5 */
  if (!C.cf) goto L_11b799a5;
  /* 11b79994 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b79997 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b7999a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7999d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11b799a0 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11b799a3 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11b799a5:;
  /* 11b799a5 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b799a7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b799a8 jmp 0x11b79963 */
  goto L_11b79963;
L_11b799aa:;
  /* 11b799aa cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b799ad je 0x11b798bd */
  if (C.zf) goto L_11b798bd;
  /* 11b799b3 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b799b6 je 0x11b798bd */
  if (C.zf) goto L_11b798bd;
  /* 11b799bc jmp 0x11b79896 */
  goto L_11b79896;
L_11b799c1:;
  /* 11b799c1 cmp dword ptr [0x11b7e058], edx */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b799c7 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b799ca jle 0x11b799dd */
  if ((C.zf||C.sf!=C.of)) goto L_11b799dd;
  /* 11b799cc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b799cf push esi */
  push32((uint32_t)(ESI));
  /* 11b799d0 push eax */
  push32((uint32_t)(EAX));
  /* 11b799d1 call 0x11b767f9 */
  push32(0x11b799d6u); f_11b767f9();
  /* 11b799d6 pop ecx */
  ECX = (pop32());
  /* 11b799d7 pop ecx */
  ECX = (pop32());
  /* 11b799d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b799da pop edx */
  EDX = (pop32());
  /* 11b799db jmp 0x11b799eb */
  goto L_11b799eb;
L_11b799dd:;
  /* 11b799dd mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b799e3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b799e6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b799e9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b799eb:;
  /* 11b799eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b799ed je 0x11b79a9d */
  if (C.zf) goto L_11b79a9d;
  /* 11b799f3 mov eax, esi */
  EAX = (ESI);
  /* 11b799f5 jmp 0x11b79a4e */
  goto L_11b79a4e;
L_11b799f7:;
  /* 11b799f7 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11b799fa cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b799fd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b79a00 jl 0x11b79a07 */
  if ((C.sf!=C.of)) goto L_11b79a07;
  /* 11b79a02 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a05 jle 0x11b79a4b */
  if ((C.zf||C.sf!=C.of)) goto L_11b79a4b;
L_11b79a07:;
  /* 11b79a07 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b79a0a sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79a0d je 0x11b79a83 */
  if (C.zf) goto L_11b79a83;
  /* 11b79a0f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79a10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79a11 je 0x11b79a77 */
  if (C.zf) goto L_11b79a77;
  /* 11b79a13 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79a16 jne 0x11b79b2b */
  if (!C.zf) goto L_11b79b2b;
L_11b79a1c:;
  /* 11b79a1c push 8 */
  push32((uint32_t)(0x8u));
  /* 11b79a1e jmp 0x11b79a85 */
  goto L_11b79a85;
L_11b79a20:;
  /* 11b79a20 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11b79a23:;
  /* 11b79a23 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a26 jne 0x11b79a2d */
  if (!C.zf) goto L_11b79a2d;
  /* 11b79a28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b79a2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79a2b jmp 0x11b79a23 */
  goto L_11b79a23;
L_11b79a2d:;
  /* 11b79a2d cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a30 jl 0x11b79b28 */
  if ((C.sf!=C.of)) goto L_11b79b28;
  /* 11b79a36 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a39 jg 0x11b79b28 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79b28;
  /* 11b79a3f jmp 0x11b79a4b */
  goto L_11b79a4b;
L_11b79a41:;
  /* 11b79a41 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a44 jl 0x11b79a54 */
  if ((C.sf!=C.of)) goto L_11b79a54;
  /* 11b79a46 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a49 jg 0x11b79a54 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79a54;
L_11b79a4b:;
  /* 11b79a4b push 9 */
  push32((uint32_t)(0x9u));
L_11b79a4d:;
  /* 11b79a4d pop eax */
  EAX = (pop32());
L_11b79a4e:;
  /* 11b79a4e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b79a4f jmp 0x11b7980c */
  goto L_11b7980c;
L_11b79a54:;
  /* 11b79a54 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79a57 jne 0x11b79a9d */
  if (!C.zf) goto L_11b79a9d;
  /* 11b79a59 jmp 0x11b79a1c */
  goto L_11b79a1c;
L_11b79a5b:;
  /* 11b79a5b cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79a5f je 0x11b79a8b */
  if (C.zf) goto L_11b79a8b;
  /* 11b79a61 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b79a64 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11b79a67 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79a6a mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b79a6d je 0x11b79a83 */
  if (C.zf) goto L_11b79a83;
  /* 11b79a6f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79a70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79a71 jne 0x11b79b2b */
  if (!C.zf) goto L_11b79b2b;
L_11b79a77:;
  /* 11b79a77 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11b79a7b push 7 */
  push32((uint32_t)(0x7u));
  /* 11b79a7d pop eax */
  EAX = (pop32());
  /* 11b79a7e jmp 0x11b7980c */
  goto L_11b7980c;
L_11b79a83:;
  /* 11b79a83 push 7 */
  push32((uint32_t)(0x7u));
L_11b79a85:;
  /* 11b79a85 pop eax */
  EAX = (pop32());
  /* 11b79a86 jmp 0x11b7980c */
  goto L_11b7980c;
L_11b79a8b:;
  /* 11b79a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 11b79a8d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b79a8e pop eax */
  EAX = (pop32());
L_11b79a8f:;
  /* 11b79a8f cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79a92 je 0x11b79b2d */
  if (C.zf) goto L_11b79b2d;
  /* 11b79a98 jmp 0x11b7980c */
  goto L_11b7980c;
L_11b79a9d:;
  /* 11b79a9d mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b79aa0 jmp 0x11b79b2d */
  goto L_11b79b2d;
L_11b79aa5:;
  /* 11b79aa5 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11b79aac xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11b79aae:;
  /* 11b79aae cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ab5 jle 0x11b79ac6 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79ac6;
  /* 11b79ab7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79aba push 4 */
  push32((uint32_t)(0x4u));
  /* 11b79abc push eax */
  push32((uint32_t)(EAX));
  /* 11b79abd call 0x11b767f9 */
  push32(0x11b79ac2u); f_11b767f9();
  /* 11b79ac2 pop ecx */
  ECX = (pop32());
  /* 11b79ac3 pop ecx */
  ECX = (pop32());
  /* 11b79ac4 jmp 0x11b79ad5 */
  goto L_11b79ad5;
L_11b79ac6:;
  /* 11b79ac6 mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79acc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79acf mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b79ad2 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b79ad5:;
  /* 11b79ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79ad7 je 0x11b79af5 */
  if (C.zf) goto L_11b79af5;
  /* 11b79ad9 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b79adc lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11b79adf lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11b79ae3 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ae9 jg 0x11b79af0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79af0;
  /* 11b79aeb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b79aed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79aee jmp 0x11b79aae */
  goto L_11b79aae;
L_11b79af0:;
  /* 11b79af0 mov esi, 0x1451 */
  ESI = (0x1451u);
L_11b79af5:;
  /* 11b79af5 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11b79af8:;
  /* 11b79af8 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79aff jle 0x11b79b10 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79b10;
  /* 11b79b01 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79b04 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b79b06 push eax */
  push32((uint32_t)(EAX));
  /* 11b79b07 call 0x11b767f9 */
  push32(0x11b79b0cu); f_11b767f9();
  /* 11b79b0c pop ecx */
  ECX = (pop32());
  /* 11b79b0d pop ecx */
  ECX = (pop32());
  /* 11b79b0e jmp 0x11b79b1f */
  goto L_11b79b1f;
L_11b79b10:;
  /* 11b79b10 mov ecx, dword ptr [0x11b7e064] */
  ECX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79b16 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b79b19 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b79b1c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b79b1f:;
  /* 11b79b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79b21 je 0x11b79b28 */
  if (C.zf) goto L_11b79b28;
  /* 11b79b23 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b79b25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b79b26 jmp 0x11b79af8 */
  goto L_11b79af8;
L_11b79b28:;
  /* 11b79b28 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b79b29 jmp 0x11b79b2d */
  goto L_11b79b2d;
L_11b79b2b:;
  /* 11b79b2b mov edi, ecx */
  EDI = (ECX);
L_11b79b2d:;
  /* 11b79b2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b79b30 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79b34 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11b79b36 je 0x11b79c15 */
  if (C.zf) goto L_11b79c15;
  /* 11b79b3c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b79b3e pop eax */
  EAX = (pop32());
  /* 11b79b3f cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79b42 jbe 0x11b79b59 */
  if ((C.cf||C.zf)) goto L_11b79b59;
  /* 11b79b44 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79b48 jl 0x11b79b4d */
  if ((C.sf!=C.of)) goto L_11b79b4d;
  /* 11b79b4a inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11b79b4d:;
  /* 11b79b4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b79b50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b79b53 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79b54 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11b79b57 jmp 0x11b79b5c */
  goto L_11b79b5c;
L_11b79b59:;
  /* 11b79b59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11b79b5c:;
  /* 11b79b5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79b60 jbe 0x11b79c0b */
  if ((C.cf||C.zf)) goto L_11b79c0b;
L_11b79b66:;
  /* 11b79b66 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79b67 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79b6a jne 0x11b79b74 */
  if (!C.zf) goto L_11b79b74;
  /* 11b79b6c dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b79b6f inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11b79b72 jmp 0x11b79b66 */
  goto L_11b79b66;
L_11b79b74:;
  /* 11b79b74 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11b79b77 push eax */
  push32((uint32_t)(EAX));
  /* 11b79b78 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11b79b7b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11b79b7e push eax */
  push32((uint32_t)(EAX));
  /* 11b79b7f call 0x11b796ee */
  push32(0x11b79b84u); f_11b796ee();
  /* 11b79b84 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b79b87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b79b89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79b8c cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79b8f jge 0x11b79b93 */
  if ((C.sf==C.of)) goto L_11b79b93;
  /* 11b79b91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11b79b93:;
  /* 11b79b93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79b96 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79b99 jne 0x11b79b9e */
  if (!C.zf) goto L_11b79b9e;
  /* 11b79b9b add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b79b9e:;
  /* 11b79b9e cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ba1 jne 0x11b79ba6 */
  if (!C.zf) goto L_11b79ba6;
  /* 11b79ba3 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b79ba6:;
  /* 11b79ba6 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79bab jle 0x11b79bdd */
  if ((C.zf||C.sf!=C.of)) goto L_11b79bdd;
  /* 11b79bad mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11b79bb4:;
  /* 11b79bb4 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b79bb7 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b79bba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b79bbd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11b79bc0:;
  /* 11b79bc0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79bc4 je 0x11b79c26 */
  if (C.zf) goto L_11b79c26;
  /* 11b79bc6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79bc8 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11b79bcd mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b79bd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b79bd4 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11b79bdb jmp 0x11b79c3b */
  goto L_11b79c3b;
L_11b79bdd:;
  /* 11b79bdd cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79be2 jge 0x11b79bed */
  if ((C.sf==C.of)) goto L_11b79bed;
  /* 11b79be4 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11b79beb jmp 0x11b79bb4 */
  goto L_11b79bb4;
L_11b79bed:;
  /* 11b79bed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b79bf0 push eax */
  push32((uint32_t)(EAX));
  /* 11b79bf1 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11b79bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11b79bf5 call 0x11b7a38a */
  push32(0x11b79bfau); f_11b7a38a();
  /* 11b79bfa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b79bfd mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11b79c00 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11b79c03 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11b79c06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79c09 jmp 0x11b79bc0 */
  goto L_11b79bc0;
L_11b79c0b:;
  /* 11b79c0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b79c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b79c0f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b79c11 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79c13 jmp 0x11b79bc0 */
  goto L_11b79bc0;
L_11b79c15:;
  /* 11b79c15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b79c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b79c19 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b79c1b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79c1d mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11b79c24 jmp 0x11b79c3b */
  goto L_11b79c3b;
L_11b79c26:;
  /* 11b79c26 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79c2a je 0x11b79c3b */
  if (C.zf) goto L_11b79c3b;
  /* 11b79c2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b79c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b79c30 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b79c32 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79c34 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11b79c3b:;
  /* 11b79c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b79c3e or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11b79c41 pop edi */
  EDI = (pop32());
  /* 11b79c42 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11b79c45 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11b79c48 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11b79c4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b79c4f pop esi */
  ESI = (pop32());
  /* 11b79c50 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11b79c53 pop ebx */
  EBX = (pop32());
  /* 11b79c54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b79c55 ret  */
  ESPCHK(0x11b797b5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c86 @ 0x11b79c86 (659 bytes, 232 insns) */
void f_11b79c86(void) {
  FTRACE(0x11b79c86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79c86 push ebp */
  push32((uint32_t)(EBP));
  /* 11b79c87 mov ebp, esp */
  EBP = (ESP);
  /* 11b79c89 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79c8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b79c8f push ebx */
  push32((uint32_t)(EBX));
  /* 11b79c90 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b79c93 push esi */
  push32((uint32_t)(ESI));
  /* 11b79c94 mov ecx, eax */
  ECX = (EAX);
  /* 11b79c96 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11b79c9b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b79ca1 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b79ca3 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11b79ca6 push edi */
  push32((uint32_t)(EDI));
  /* 11b79ca7 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11b79cab mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11b79caf mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11b79cb3 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11b79cb7 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11b79cbb mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11b79cbf mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11b79cc3 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11b79cc7 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11b79ccb mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11b79ccf mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11b79cd3 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11b79cd7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b79cde mov edx, eax */
  EDX = (EAX);
  /* 11b79ce0 je 0x11b79ce8 */
  if (C.zf) goto L_11b79ce8;
  /* 11b79ce2 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11b79ce6 jmp 0x11b79cec */
  goto L_11b79cec;
L_11b79ce8:;
  /* 11b79ce8 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11b79cec:;
  /* 11b79cec mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b79cef test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11b79cf2 jne 0x11b79d12 */
  if (!C.zf) goto L_11b79d12;
  /* 11b79cf4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b79cf6 jne 0x11b79d12 */
  if (!C.zf) goto L_11b79d12;
  /* 11b79cf8 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79cfb jne 0x11b79d12 */
  if (!C.zf) goto L_11b79d12;
L_11b79cfd:;
  /* 11b79cfd and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11b79d01 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11b79d05 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11b79d09 mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11b79d0d jmp 0x11b79f10 */
  goto L_11b79f10;
L_11b79d12:;
  /* 11b79d12 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b79d15 jne 0x11b79d91 */
  if (!C.zf) goto L_11b79d91;
  /* 11b79d17 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b79d1c mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11b79d21 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d23 jne 0x11b79d2b */
  if (!C.zf) goto L_11b79d2b;
  /* 11b79d25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d29 je 0x11b79d3a */
  if (C.zf) goto L_11b79d3a;
L_11b79d2b:;
  /* 11b79d2b test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11b79d31 jne 0x11b79d3a */
  if (!C.zf) goto L_11b79d3a;
  /* 11b79d33 push 0x11b7b608 */
  push32((uint32_t)(0x11b7b608u));
  /* 11b79d38 jmp 0x11b79d80 */
  goto L_11b79d80;
L_11b79d3a:;
  /* 11b79d3a test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11b79d3d je 0x11b79d54 */
  if (C.zf) goto L_11b79d54;
  /* 11b79d3f cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d45 jne 0x11b79d54 */
  if (!C.zf) goto L_11b79d54;
  /* 11b79d47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d4b jne 0x11b79d7b */
  if (!C.zf) goto L_11b79d7b;
  /* 11b79d4d push 0x11b7b600 */
  push32((uint32_t)(0x11b7b600u));
  /* 11b79d52 jmp 0x11b79d63 */
  goto L_11b79d63;
L_11b79d54:;
  /* 11b79d54 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d56 jne 0x11b79d7b */
  if (!C.zf) goto L_11b79d7b;
  /* 11b79d58 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79d5c jne 0x11b79d7b */
  if (!C.zf) goto L_11b79d7b;
  /* 11b79d5e push 0x11b7b5f8 */
  push32((uint32_t)(0x11b7b5f8u));
L_11b79d63:;
  /* 11b79d63 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11b79d66 push eax */
  push32((uint32_t)(EAX));
  /* 11b79d67 call 0x11b76f20 */
  push32(0x11b79d6cu); f_11b76f20();
  /* 11b79d6c pop ecx */
  ECX = (pop32());
  /* 11b79d6d mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11b79d71 pop ecx */
  ECX = (pop32());
L_11b79d72:;
  /* 11b79d72 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b79d76 jmp 0x11b79ee9 */
  goto L_11b79ee9;
L_11b79d7b:;
  /* 11b79d7b push 0x11b7b5f0 */
  push32((uint32_t)(0x11b7b5f0u));
L_11b79d80:;
  /* 11b79d80 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11b79d83 push eax */
  push32((uint32_t)(EAX));
  /* 11b79d84 call 0x11b76f20 */
  push32(0x11b79d89u); f_11b76f20();
  /* 11b79d89 pop ecx */
  ECX = (pop32());
  /* 11b79d8a mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11b79d8e pop ecx */
  ECX = (pop32());
  /* 11b79d8f jmp 0x11b79d72 */
  goto L_11b79d72;
L_11b79d91:;
  /* 11b79d91 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11b79d94 mov ecx, edi */
  ECX = (EDI);
  /* 11b79d96 mov esi, eax */
  ESI = (EAX);
  /* 11b79d98 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11b79d9b imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b79da1 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11b79da4 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11b79da9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79dab lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11b79dae mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11b79db2 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b79db5 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11b79db8 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11b79dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b79dc2 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11b79dc5 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11b79dc8 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11b79dcb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b79dcd push eax */
  push32((uint32_t)(EAX));
  /* 11b79dce lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79dd1 push eax */
  push32((uint32_t)(EAX));
  /* 11b79dd2 call 0x11b7a38a */
  push32(0x11b79dd7u); f_11b7a38a();
  /* 11b79dd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79dda cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b79de0 jb 0x11b79df2 */
  if (C.cf) goto L_11b79df2;
  /* 11b79de2 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b79de5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b79de6 push eax */
  push32((uint32_t)(EAX));
  /* 11b79de7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79dea push eax */
  push32((uint32_t)(EAX));
  /* 11b79deb call 0x11b7a16a */
  push32(0x11b79df0u); f_11b7a16a();
  /* 11b79df0 pop ecx */
  ECX = (pop32());
  /* 11b79df1 pop ecx */
  ECX = (pop32());
L_11b79df2:;
  /* 11b79df2 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11b79df6 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11b79df9 je 0x11b79e0c */
  if (C.zf) goto L_11b79e0c;
  /* 11b79dfb mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11b79dfe movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11b79e01 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79e03 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b79e05 jg 0x11b79e0f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79e0f;
  /* 11b79e07 jmp 0x11b79cfd */
  goto L_11b79cfd;
L_11b79e0c:;
  /* 11b79e0c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11b79e0f:;
  /* 11b79e0f cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79e12 jle 0x11b79e17 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79e17;
  /* 11b79e14 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b79e16 pop edi */
  EDI = (pop32());
L_11b79e17:;
  /* 11b79e17 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11b79e1b sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79e21 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11b79e26 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11b79e2d:;
  /* 11b79e2d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e30 push eax */
  push32((uint32_t)(EAX));
  /* 11b79e31 call 0x11b79693 */
  push32(0x11b79e36u); f_11b79693();
  /* 11b79e36 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11b79e39 pop ecx */
  ECX = (pop32());
  /* 11b79e3a jne 0x11b79e2d */
  if (!C.zf) goto L_11b79e2d;
  /* 11b79e3c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b79e3e jge 0x11b79e57 */
  if ((C.sf==C.of)) goto L_11b79e57;
  /* 11b79e40 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11b79e42 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b79e48 jle 0x11b79e57 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79e57;
L_11b79e4a:;
  /* 11b79e4a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e4d push eax */
  push32((uint32_t)(EAX));
  /* 11b79e4e call 0x11b796c1 */
  push32(0x11b79e53u); f_11b796c1();
  /* 11b79e53 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b79e54 pop ecx */
  ECX = (pop32());
  /* 11b79e55 jne 0x11b79e4a */
  if (!C.zf) goto L_11b79e4a;
L_11b79e57:;
  /* 11b79e57 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11b79e5a lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11b79e5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b79e5f mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11b79e62 jle 0x11b79eb4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b79eb4;
  /* 11b79e64 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11b79e67:;
  /* 11b79e67 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11b79e6a lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11b79e6d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b79e6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b79e6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e72 push eax */
  push32((uint32_t)(EAX));
  /* 11b79e73 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b79e74 call 0x11b79693 */
  push32(0x11b79e79u); f_11b79693();
  /* 11b79e79 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e7c push eax */
  push32((uint32_t)(EAX));
  /* 11b79e7d call 0x11b79693 */
  push32(0x11b79e82u); f_11b79693();
  /* 11b79e82 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b79e85 push eax */
  push32((uint32_t)(EAX));
  /* 11b79e86 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e89 push eax */
  push32((uint32_t)(EAX));
  /* 11b79e8a call 0x11b79635 */
  push32(0x11b79e8fu); f_11b79635();
  /* 11b79e8f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b79e92 push eax */
  push32((uint32_t)(EAX));
  /* 11b79e93 call 0x11b79693 */
  push32(0x11b79e98u); f_11b79693();
  /* 11b79e98 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11b79e9b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b79e9e and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11b79ea2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79ea5 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b79ea7 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11b79eaa dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11b79ead mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b79eaf jne 0x11b79e67 */
  if (!C.zf) goto L_11b79e67;
  /* 11b79eb1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11b79eb4:;
  /* 11b79eb4 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11b79eb7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79eb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79eb9 cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79ebc lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11b79ebf jl 0x11b79ef1 */
  if ((C.sf!=C.of)) goto L_11b79ef1;
L_11b79ec1:;
  /* 11b79ec1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ec3 jb 0x11b79ed4 */
  if (C.cf) goto L_11b79ed4;
  /* 11b79ec5 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79ec8 jne 0x11b79ed0 */
  if (!C.zf) goto L_11b79ed0;
  /* 11b79eca mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11b79ecd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79ece jmp 0x11b79ec1 */
  goto L_11b79ec1;
L_11b79ed0:;
  /* 11b79ed0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ed2 jae 0x11b79ed8 */
  if (!C.cf) goto L_11b79ed8;
L_11b79ed4:;
  /* 11b79ed4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b79ed5 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11b79ed8:;
  /* 11b79ed8 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11b79eda:;
  /* 11b79eda sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b79edc sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b79ede mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11b79ee1 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11b79ee4 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11b79ee9:;
  /* 11b79ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b79eec:;
  /* 11b79eec pop edi */
  EDI = (pop32());
  /* 11b79eed pop esi */
  ESI = (pop32());
  /* 11b79eee pop ebx */
  EBX = (pop32());
  /* 11b79eef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b79ef0 ret  */
  ESPCHK(0x11b79c86u, _esp0);
  ESP += 4; return;
L_11b79ef1:;
  /* 11b79ef1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79ef3 jb 0x11b79f01 */
  if (C.cf) goto L_11b79f01;
  /* 11b79ef5 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b79ef8 jne 0x11b79efd */
  if (!C.zf) goto L_11b79efd;
  /* 11b79efa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b79efb jmp 0x11b79ef1 */
  goto L_11b79ef1;
L_11b79efd:;
  /* 11b79efd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79eff jae 0x11b79eda */
  if (!C.cf) goto L_11b79eda;
L_11b79f01:;
  /* 11b79f01 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11b79f05 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11b79f09 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11b79f0d mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11b79f10:;
  /* 11b79f10 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11b79f14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79f16 pop eax */
  EAX = (pop32());
  /* 11b79f17 jmp 0x11b79eec */
  goto L_11b79eec;
}

/* FUN_10009f19 @ 0x11b79f19 (9 bytes, 3 insns) */
void f_11b79f19(void) {
  FTRACE(0x11b79f19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79f19 call 0x11b75250 */
  push32(0x11b79f1eu); f_11b75250();
  /* 11b79f1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b79f21 ret  */
  ESPCHK(0x11b79f19u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f22 @ 0x11b79f22 (111 bytes, 44 insns) */
void f_11b79f22(void) {
  FTRACE(0x11b79f22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79f22 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79f23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b79f25 cmp dword ptr [0x11b814e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b814e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79f2b jne 0x11b79f40 */
  if (!C.zf) goto L_11b79f40;
  /* 11b79f2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b79f31 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79f34 jl 0x11b79f8f */
  if ((C.sf!=C.of)) goto L_11b79f8f;
  /* 11b79f36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79f39 jg 0x11b79f8f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b79f8f;
  /* 11b79f3b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79f3e pop ebx */
  EBX = (pop32());
  /* 11b79f3f ret  */
  ESPCHK(0x11b79f22u, _esp0);
  ESP += 4; return;
L_11b79f40:;
  /* 11b79f40 push esi */
  push32((uint32_t)(ESI));
  /* 11b79f41 mov esi, 0x11b8163c */
  ESI = (0x11b8163cu);
  /* 11b79f46 push edi */
  push32((uint32_t)(EDI));
  /* 11b79f47 push esi */
  push32((uint32_t)(ESI));
  /* 11b79f48 call dword ptr [0x11b7b034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b7b034))), 0x11b79f4eu);
  /* 11b79f4e cmp dword ptr [0x11b81638], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b81638))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79f54 mov edi, dword ptr [0x11b7b03c] */
  EDI = (r32((uint32_t)(0x11b7b03c)));
  /* 11b79f5a je 0x11b79f6a */
  if (C.zf) goto L_11b79f6a;
  /* 11b79f5c push esi */
  push32((uint32_t)(ESI));
  /* 11b79f5d call edi */
  call_ind((uint32_t)(EDI), 0x11b79f5fu);
  /* 11b79f5f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b79f61 call 0x11b76534 */
  push32(0x11b79f66u); f_11b76534();
  /* 11b79f66 pop ecx */
  ECX = (pop32());
  /* 11b79f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b79f69 pop ebx */
  EBX = (pop32());
L_11b79f6a:;
  /* 11b79f6a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b79f6e call 0x11b79f91 */
  push32(0x11b79f73u); f_11b79f91();
  /* 11b79f73 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b79f75 pop ecx */
  ECX = (pop32());
  /* 11b79f76 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b79f7a je 0x11b79f86 */
  if (C.zf) goto L_11b79f86;
  /* 11b79f7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b79f7e call 0x11b76595 */
  push32(0x11b79f83u); f_11b76595();
  /* 11b79f83 pop ecx */
  ECX = (pop32());
  /* 11b79f84 jmp 0x11b79f89 */
  goto L_11b79f89;
L_11b79f86:;
  /* 11b79f86 push esi */
  push32((uint32_t)(ESI));
  /* 11b79f87 call edi */
  call_ind((uint32_t)(EDI), 0x11b79f89u);
L_11b79f89:;
  /* 11b79f89 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b79f8d pop edi */
  EDI = (pop32());
  /* 11b79f8e pop esi */
  ESI = (pop32());
L_11b79f8f:;
  /* 11b79f8f pop ebx */
  EBX = (pop32());
  /* 11b79f90 ret  */
  ESPCHK(0x11b79f22u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f91 @ 0x11b79f91 (204 bytes, 71 insns) */
void f_11b79f91(void) {
  FTRACE(0x11b79f91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b79f91 push ebp */
  push32((uint32_t)(EBP));
  /* 11b79f92 mov ebp, esp */
  EBP = (ESP);
  /* 11b79f94 push ecx */
  push32((uint32_t)(ECX));
  /* 11b79f95 cmp dword ptr [0x11b814e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b814e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79f9c push ebx */
  push32((uint32_t)(EBX));
  /* 11b79f9d jne 0x11b79fbc */
  if (!C.zf) goto L_11b79fbc;
  /* 11b79f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b79fa2 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79fa5 jl 0x11b7a05a */
  if ((C.sf!=C.of)) goto L_11b7a05a;
  /* 11b79fab cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79fae jg 0x11b7a05a */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a05a;
  /* 11b79fb4 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b79fb7 jmp 0x11b7a05a */
  goto L_11b7a05a;
L_11b79fbc:;
  /* 11b79fbc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b79fbf cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79fc5 jge 0x11b79fef */
  if ((C.sf==C.of)) goto L_11b79fef;
  /* 11b79fc7 cmp dword ptr [0x11b7e058], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b7e058))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b79fce jle 0x11b79fdc */
  if ((C.zf||C.sf!=C.of)) goto L_11b79fdc;
  /* 11b79fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b79fd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b79fd3 call 0x11b767f9 */
  push32(0x11b79fd8u); f_11b767f9();
  /* 11b79fd8 pop ecx */
  ECX = (pop32());
  /* 11b79fd9 pop ecx */
  ECX = (pop32());
  /* 11b79fda jmp 0x11b79fe7 */
  goto L_11b79fe7;
L_11b79fdc:;
  /* 11b79fdc mov eax, dword ptr [0x11b7e064] */
  EAX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79fe1 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11b79fe4 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11b79fe7:;
  /* 11b79fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b79fe9 jne 0x11b79fef */
  if (!C.zf) goto L_11b79fef;
L_11b79feb:;
  /* 11b79feb mov eax, ebx */
  EAX = (EBX);
  /* 11b79fed jmp 0x11b7a05a */
  goto L_11b7a05a;
L_11b79fef:;
  /* 11b79fef mov edx, dword ptr [0x11b7e064] */
  EDX = (r32((uint32_t)(0x11b7e064)));
  /* 11b79ff5 mov eax, ebx */
  EAX = (EBX);
  /* 11b79ff7 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b79ffa movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11b79ffd test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b7a002 je 0x11b7a012 */
  if (C.zf) goto L_11b7a012;
  /* 11b7a004 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11b7a008 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11b7a00b mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11b7a00e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b7a010 jmp 0x11b7a01b */
  goto L_11b7a01b;
L_11b7a012:;
  /* 11b7a012 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11b7a016 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11b7a019 push 1 */
  push32((uint32_t)(0x1u));
L_11b7a01b:;
  /* 11b7a01b pop eax */
  EAX = (pop32());
  /* 11b7a01c lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b7a01f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b7a021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7a023 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b7a025 push ecx */
  push32((uint32_t)(ECX));
  /* 11b7a026 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a027 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b7a02a push eax */
  push32((uint32_t)(EAX));
  /* 11b7a02b push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b7a030 push dword ptr [0x11b814e0] */
  push32((uint32_t)(r32((uint32_t)(0x11b814e0))));
  /* 11b7a036 call 0x11b793c5 */
  push32(0x11b7a03bu); f_11b793c5();
  /* 11b7a03b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7a040 je 0x11b79feb */
  if (C.zf) goto L_11b79feb;
  /* 11b7a042 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a045 jne 0x11b7a04d */
  if (!C.zf) goto L_11b7a04d;
  /* 11b7a047 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b7a04b jmp 0x11b7a05a */
  goto L_11b7a05a;
L_11b7a04d:;
  /* 11b7a04d movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11b7a051 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b7a055 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b7a058 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11b7a05a:;
  /* 11b7a05a pop ebx */
  EBX = (pop32());
  /* 11b7a05b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a05c ret  */
  ESPCHK(0x11b79f91u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0f0 @ 0x11b7a0f0 (62 bytes, 35 insns) */
void f_11b7a0f0(void) {
  FTRACE(0x11b7a0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b7a0f3 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a0f6 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0f7 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0f8 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0fa push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0fb push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0fc push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0fd push eax */
  push32((uint32_t)(EAX));
  /* 11b7a0fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a101 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7a104:;
  /* 11b7a104 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b7a106 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a108 je 0x11b7a111 */
  if (C.zf) goto L_11b7a111;
  /* 11b7a10a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b7a10b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b7a10b");
  /* 11b7a10f jmp 0x11b7a104 */
  goto L_11b7a104;
L_11b7a111:;
  /* 11b7a111 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a114 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a117 nop  */
  /* nop */
L_11b7a118:;
  /* 11b7a118 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b7a119 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b7a11b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a11d je 0x11b7a126 */
  if (C.zf) goto L_11b7a126;
  /* 11b7a11f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a120 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b7a120");
  /* 11b7a124 jae 0x11b7a118 */
  if (!C.cf) goto L_11b7a118;
L_11b7a126:;
  /* 11b7a126 mov eax, ecx */
  EAX = (ECX);
  /* 11b7a128 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a12b pop esi */
  ESI = (pop32());
  /* 11b7a12c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a12d ret  */
  ESPCHK(0x11b7a0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a130 @ 0x11b7a130 (58 bytes, 32 insns) */
void f_11b7a130(void) {
  FTRACE(0x11b7a130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a130 push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a131 mov ebp, esp */
  EBP = (ESP);
  /* 11b7a133 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a136 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a137 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a138 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a139 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a13a push eax */
  push32((uint32_t)(EAX));
  /* 11b7a13b push eax */
  push32((uint32_t)(EAX));
  /* 11b7a13c push eax */
  push32((uint32_t)(EAX));
  /* 11b7a13d push eax */
  push32((uint32_t)(EAX));
  /* 11b7a13e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a141 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7a144:;
  /* 11b7a144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b7a146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a148 je 0x11b7a151 */
  if (C.zf) goto L_11b7a151;
  /* 11b7a14a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b7a14b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b7a14b");
  /* 11b7a14f jmp 0x11b7a144 */
  goto L_11b7a144;
L_11b7a151:;
  /* 11b7a151 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11b7a154:;
  /* 11b7a154 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b7a156 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a158 je 0x11b7a164 */
  if (C.zf) goto L_11b7a164;
  /* 11b7a15a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a15b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b7a15b");
  /* 11b7a15f jae 0x11b7a154 */
  if (!C.cf) goto L_11b7a154;
  /* 11b7a161 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11b7a164:;
  /* 11b7a164 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a167 pop esi */
  ESI = (pop32());
  /* 11b7a168 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a169 ret  */
  ESPCHK(0x11b7a130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a16a @ 0x11b7a16a (544 bytes, 177 insns) */
void f_11b7a16a(void) {
  FTRACE(0x11b7a16au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a16a push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a16b mov ebp, esp */
  EBP = (ESP);
  /* 11b7a16d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7a170 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a171 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a174 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a175 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a178 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11b7a17c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a17e push edi */
  push32((uint32_t)(EDI));
  /* 11b7a17f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b7a182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b7a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b7a188 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b7a18b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11b7a18f mov edi, ecx */
  EDI = (ECX);
  /* 11b7a191 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11b7a196 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11b7a198 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a19a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a19c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11b7a1a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a1a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11b7a1a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b7a1ac jae 0x11b7a36a */
  if (!C.cf) goto L_11b7a36a;
  /* 11b7a1b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a1b7 jae 0x11b7a36a */
  if (!C.cf) goto L_11b7a36a;
  /* 11b7a1bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a1c2 ja 0x11b7a36a */
  if ((!C.cf&&!C.zf)) goto L_11b7a36a;
  /* 11b7a1c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a1cd ja 0x11b7a1d3 */
  if ((!C.cf&&!C.zf)) goto L_11b7a1d3;
  /* 11b7a1cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a1d1 jmp 0x11b7a20d */
  goto L_11b7a20d;
L_11b7a1d3:;
  /* 11b7a1d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11b7a1d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11b7a1db jne 0x11b7a1f5 */
  if (!C.zf) goto L_11b7a1f5;
  /* 11b7a1dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11b7a1e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11b7a1e3 jne 0x11b7a1f5 */
  if (!C.zf) goto L_11b7a1f5;
  /* 11b7a1e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a1e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a1ea jne 0x11b7a1f7 */
  if (!C.zf) goto L_11b7a1f7;
  /* 11b7a1ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a1ee jne 0x11b7a1f7 */
  if (!C.zf) goto L_11b7a1f7;
  /* 11b7a1f0 jmp 0x11b7a364 */
  goto L_11b7a364;
L_11b7a1f5:;
  /* 11b7a1f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b7a1f7:;
  /* 11b7a1f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a1fa jne 0x11b7a21a */
  if (!C.zf) goto L_11b7a21a;
  /* 11b7a1fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11b7a1ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11b7a202 jne 0x11b7a21a */
  if (!C.zf) goto L_11b7a21a;
  /* 11b7a204 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a207 jne 0x11b7a21a */
  if (!C.zf) goto L_11b7a21a;
  /* 11b7a209 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a20b jne 0x11b7a21a */
  if (!C.zf) goto L_11b7a21a;
L_11b7a20d:;
  /* 11b7a20d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11b7a210 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11b7a213 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b7a215 jmp 0x11b7a385 */
  goto L_11b7a385;
L_11b7a21a:;
  /* 11b7a21a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b7a21d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b7a220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b7a223 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11b7a22a:;
  /* 11b7a22a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b7a22d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a22f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a233 jle 0x11b7a27e */
  if ((C.zf||C.sf!=C.of)) goto L_11b7a27e;
  /* 11b7a235 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a237 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11b7a23a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b7a23d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b7a243 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11b7a246:;
  /* 11b7a246 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b7a249 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b7a24c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11b7a24f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11b7a252 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b7a255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7a258 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a25b push ecx */
  push32((uint32_t)(ECX));
  /* 11b7a25c push eax */
  push32((uint32_t)(EAX));
  /* 11b7a25d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11b7a25f call 0x11b79614 */
  push32(0x11b7a264u); f_11b79614();
  /* 11b7a264 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b7a269 je 0x11b7a271 */
  if (C.zf) goto L_11b7a271;
  /* 11b7a26b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b7a26e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11b7a271:;
  /* 11b7a271 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a275 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b7a279 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11b7a27c jne 0x11b7a246 */
  if (!C.zf) goto L_11b7a246;
L_11b7a27e:;
  /* 11b7a27e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a282 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11b7a285 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11b7a288 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a28c jg 0x11b7a22a */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a22a;
  /* 11b7a28e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a295 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a29a jle 0x11b7a2c1 */
  if ((C.zf||C.sf!=C.of)) goto L_11b7a2c1;
L_11b7a29c:;
  /* 11b7a29c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11b7a2a0 jne 0x11b7a2ba */
  if (!C.zf) goto L_11b7a2ba;
  /* 11b7a2a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b7a2a5 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a2a6 call 0x11b79693 */
  push32(0x11b7a2abu); f_11b79693();
  /* 11b7a2ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a2b2 pop ecx */
  ECX = (pop32());
  /* 11b7a2b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a2b8 jg 0x11b7a29c */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a29c;
L_11b7a2ba:;
  /* 11b7a2ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a2bf jg 0x11b7a2fa */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a2fa;
L_11b7a2c1:;
  /* 11b7a2c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a2c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a2cd jge 0x11b7a2fa */
  if ((C.sf==C.of)) goto L_11b7a2fa;
  /* 11b7a2cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11b7a2d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b7a2d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b7a2d8 mov ebx, eax */
  EBX = (EAX);
L_11b7a2da:;
  /* 11b7a2da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11b7a2de je 0x11b7a2e3 */
  if (C.zf) goto L_11b7a2e3;
  /* 11b7a2e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11b7a2e3:;
  /* 11b7a2e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b7a2e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a2e7 call 0x11b796c1 */
  push32(0x11b7a2ecu); f_11b796c1();
  /* 11b7a2ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b7a2ed pop ecx */
  ECX = (pop32());
  /* 11b7a2ee jne 0x11b7a2da */
  if (!C.zf) goto L_11b7a2da;
  /* 11b7a2f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a2f4 je 0x11b7a2fa */
  if (C.zf) goto L_11b7a2fa;
  /* 11b7a2f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11b7a2fa:;
  /* 11b7a2fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a300 ja 0x11b7a311 */
  if ((!C.cf&&!C.zf)) goto L_11b7a311;
  /* 11b7a302 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b7a305 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a30a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a30f jne 0x11b7a346 */
  if (!C.zf) goto L_11b7a346;
L_11b7a311:;
  /* 11b7a311 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a315 jne 0x11b7a343 */
  if (!C.zf) goto L_11b7a343;
  /* 11b7a317 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11b7a31b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a31f jne 0x11b7a33e */
  if (!C.zf) goto L_11b7a33e;
  /* 11b7a321 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11b7a325 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a32b jne 0x11b7a338 */
  if (!C.zf) goto L_11b7a338;
  /* 11b7a32d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11b7a330 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11b7a336 jmp 0x11b7a346 */
  goto L_11b7a346;
L_11b7a338:;
  /* 11b7a338 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11b7a33c jmp 0x11b7a346 */
  goto L_11b7a346;
L_11b7a33e:;
  /* 11b7a33e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11b7a341 jmp 0x11b7a346 */
  goto L_11b7a346;
L_11b7a343:;
  /* 11b7a343 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11b7a346:;
  /* 11b7a346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a349 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a34d jae 0x11b7a36a */
  if (!C.cf) goto L_11b7a36a;
  /* 11b7a34f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11b7a353 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a355 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11b7a358 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b7a35b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11b7a35e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b7a361 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11b7a364:;
  /* 11b7a364 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11b7a368 jmp 0x11b7a385 */
  goto L_11b7a385;
L_11b7a36a:;
  /* 11b7a36a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11b7a36d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7a36f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b7a373 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11b7a379 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a37f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b7a382 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11b7a385:;
  /* 11b7a385 pop edi */
  EDI = (pop32());
  /* 11b7a386 pop esi */
  ESI = (pop32());
  /* 11b7a387 pop ebx */
  EBX = (pop32());
  /* 11b7a388 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a389 ret  */
  ESPCHK(0x11b7a16au, _esp0);
  ESP += 4; return;
}

/* FUN_1000a38a @ 0x11b7a38a (124 bytes, 52 insns) */
void f_11b7a38a(void) {
  FTRACE(0x11b7a38au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a38a push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a38b mov ebp, esp */
  EBP = (ESP);
  /* 11b7a38d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7a390 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a391 mov ebx, 0x11b80760 */
  EBX = (0x11b80760u);
  /* 11b7a396 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a398 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7a39b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a39e je 0x11b7a403 */
  if (C.zf) goto L_11b7a403;
  /* 11b7a3a0 jge 0x11b7a3b2 */
  if ((C.sf==C.of)) goto L_11b7a3b2;
  /* 11b7a3a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a3a5 mov ebx, 0x11b808c0 */
  EBX = (0x11b808c0u);
  /* 11b7a3aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b7a3ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b7a3af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11b7a3b2:;
  /* 11b7a3b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a3b5 jne 0x11b7a3bd */
  if (!C.zf) goto L_11b7a3bd;
  /* 11b7a3b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a3ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11b7a3bd:;
  /* 11b7a3bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a3c0 je 0x11b7a403 */
  if (C.zf) goto L_11b7a403;
  /* 11b7a3c2 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a3c3 push edi */
  push32((uint32_t)(EDI));
L_11b7a3c4:;
  /* 11b7a3c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a3c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a3ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11b7a3ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a3d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a3d3 je 0x11b7a3fc */
  if (C.zf) goto L_11b7a3fc;
  /* 11b7a3d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11b7a3d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b7a3de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11b7a3e1 jb 0x11b7a3ef */
  if (C.cf) goto L_11b7a3ef;
  /* 11b7a3e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11b7a3e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7a3e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7a3e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b7a3e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11b7a3ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11b7a3ef:;
  /* 11b7a3ef push esi */
  push32((uint32_t)(ESI));
  /* 11b7a3f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b7a3f3 call 0x11b7a16a */
  push32(0x11b7a3f8u); f_11b7a16a();
  /* 11b7a3f8 pop ecx */
  ECX = (pop32());
  /* 11b7a3f9 pop ecx */
  ECX = (pop32());
  /* 11b7a3fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11b7a3fc:;
  /* 11b7a3fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a3ff jne 0x11b7a3c4 */
  if (!C.zf) goto L_11b7a3c4;
  /* 11b7a401 pop edi */
  EDI = (pop32());
  /* 11b7a402 pop esi */
  ESI = (pop32());
L_11b7a403:;
  /* 11b7a403 pop ebx */
  EBX = (pop32());
  /* 11b7a404 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a405 ret  */
  ESPCHK(0x11b7a38au, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x11b7a410 (208 bytes, 85 insns) */
void f_11b7a410(void) {
  FTRACE(0x11b7a410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a410 push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a411 mov ebp, esp */
  EBP = (ESP);
  /* 11b7a413 push edi */
  push32((uint32_t)(EDI));
  /* 11b7a414 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a415 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a416 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a419 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a41c lea eax, [0x11b814d8] */
  EAX = ((uint32_t)(0x11b814d8));
  /* 11b7a422 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a426 jne 0x11b7a463 */
  if (!C.zf) goto L_11b7a463;
  /* 11b7a428 mov al, 0xff */
  AL = (0xffu);
  /* 11b7a42a mov edi, edi */
  EDI = (EDI);
L_11b7a42c:;
  /* 11b7a42c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a42e je 0x11b7a45e */
  if (C.zf) goto L_11b7a45e;
  /* 11b7a430 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b7a432 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a433 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11b7a435 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7a436 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a438 je 0x11b7a42c */
  if (C.zf) goto L_11b7a42c;
  /* 11b7a43a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7a43c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a43e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7a440 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b7a443 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b7a445 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b7a447 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11b7a449 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7a44b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a44d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7a44f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b7a452 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b7a454 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b7a456 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a458 je 0x11b7a42c */
  if (C.zf) goto L_11b7a42c;
  /* 11b7a45a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b7a45c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11b7a45e:;
  /* 11b7a45e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11b7a461 jmp 0x11b7a4db */
  goto L_11b7a4db;
L_11b7a463:;
  /* 11b7a463 lock inc dword ptr [0x11b8163c] */
  x86_unimpl("lock inc @ 0x11b7a463");
  /* 11b7a46a cmp dword ptr [0x11b81638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b81638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a471 jg 0x11b7a477 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a477;
  /* 11b7a473 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7a475 jmp 0x11b7a48c */
  goto L_11b7a48c;
L_11b7a477:;
  /* 11b7a477 lock dec dword ptr [0x11b8163c] */
  x86_unimpl("lock dec @ 0x11b7a477");
  /* 11b7a47e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b7a480 call 0x11b76534 */
  push32(0x11b7a485u); f_11b76534();
  /* 11b7a485 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11b7a48c:;
  /* 11b7a48c mov eax, 0xff */
  EAX = (0xffu);
  /* 11b7a491 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b7a493 nop  */
  /* nop */
L_11b7a494:;
  /* 11b7a494 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a496 je 0x11b7a4bf */
  if (C.zf) goto L_11b7a4bf;
  /* 11b7a498 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b7a49a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a49b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b7a49d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7a49e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a4a0 je 0x11b7a494 */
  if (C.zf) goto L_11b7a494;
  /* 11b7a4a2 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a4a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a4a4 call 0x11b768dd */
  push32(0x11b7a4a9u); f_11b768dd();
  /* 11b7a4a9 mov ebx, eax */
  EBX = (EAX);
  /* 11b7a4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a4ae call 0x11b768dd */
  push32(0x11b7a4b3u); f_11b768dd();
  /* 11b7a4b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a4b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a4b8 je 0x11b7a494 */
  if (C.zf) goto L_11b7a494;
  /* 11b7a4ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b7a4bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b7a4bf:;
  /* 11b7a4bf mov ebx, eax */
  EBX = (EAX);
  /* 11b7a4c1 pop eax */
  EAX = (pop32());
  /* 11b7a4c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a4c4 jne 0x11b7a4cf */
  if (!C.zf) goto L_11b7a4cf;
  /* 11b7a4c6 lock dec dword ptr [0x11b8163c] */
  x86_unimpl("lock dec @ 0x11b7a4c6");
  /* 11b7a4cd jmp 0x11b7a4d9 */
  goto L_11b7a4d9;
L_11b7a4cf:;
  /* 11b7a4cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b7a4d1 call 0x11b76595 */
  push32(0x11b7a4d6u); f_11b76595();
  /* 11b7a4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b7a4d9:;
  /* 11b7a4d9 mov eax, ebx */
  EAX = (EBX);
L_11b7a4db:;
  /* 11b7a4db pop ebx */
  EBX = (pop32());
  /* 11b7a4dc pop esi */
  ESI = (pop32());
  /* 11b7a4dd pop edi */
  EDI = (pop32());
  /* 11b7a4de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a4df ret  */
  ESPCHK(0x11b7a410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4e0 @ 0x11b7a4e0 (257 bytes, 103 insns) */
void f_11b7a4e0(void) {
  FTRACE(0x11b7a4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b7a4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b7a4e3 push edi */
  push32((uint32_t)(EDI));
  /* 11b7a4e4 push esi */
  push32((uint32_t)(ESI));
  /* 11b7a4e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a4e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b7a4e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a4eb je 0x11b7a5da */
  if (C.zf) goto L_11b7a5da;
  /* 11b7a4f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b7a4f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b7a4f7 lea eax, [0x11b814d8] */
  EAX = ((uint32_t)(0x11b814d8));
  /* 11b7a4fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a501 jne 0x11b7a551 */
  if (!C.zf) goto L_11b7a551;
  /* 11b7a503 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11b7a505 mov bl, 0x5a */
  BL = (0x5au);
  /* 11b7a507 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11b7a509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b7a50c:;
  /* 11b7a50c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11b7a50e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b7a510 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b7a512 je 0x11b7a535 */
  if (C.zf) goto L_11b7a535;
  /* 11b7a514 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b7a516 je 0x11b7a535 */
  if (C.zf) goto L_11b7a535;
  /* 11b7a518 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a519 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7a51a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a51c jb 0x11b7a524 */
  if (C.cf) goto L_11b7a524;
  /* 11b7a51e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a520 ja 0x11b7a524 */
  if ((!C.cf&&!C.zf)) goto L_11b7a524;
  /* 11b7a522 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11b7a524:;
  /* 11b7a524 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a526 jb 0x11b7a52e */
  if (C.cf) goto L_11b7a52e;
  /* 11b7a528 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a52a ja 0x11b7a52e */
  if ((!C.cf&&!C.zf)) goto L_11b7a52e;
  /* 11b7a52c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11b7a52e:;
  /* 11b7a52e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a530 jne 0x11b7a53f */
  if (!C.zf) goto L_11b7a53f;
  /* 11b7a532 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b7a533 jne 0x11b7a50c */
  if (!C.zf) goto L_11b7a50c;
L_11b7a535:;
  /* 11b7a535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a537 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b7a539 je 0x11b7a5da */
  if (C.zf) goto L_11b7a5da;
L_11b7a53f:;
  /* 11b7a53f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b7a544 jb 0x11b7a5da */
  if (C.cf) goto L_11b7a5da;
  /* 11b7a54a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b7a54c jmp 0x11b7a5da */
  goto L_11b7a5da;
L_11b7a551:;
  /* 11b7a551 lock inc dword ptr [0x11b8163c] */
  x86_unimpl("lock inc @ 0x11b7a551");
  /* 11b7a558 cmp dword ptr [0x11b81638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b81638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a55f jg 0x11b7a565 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b7a565;
  /* 11b7a561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b7a563 jmp 0x11b7a57e */
  goto L_11b7a57e;
L_11b7a565:;
  /* 11b7a565 lock dec dword ptr [0x11b8163c] */
  x86_unimpl("lock dec @ 0x11b7a565");
  /* 11b7a56c mov ebx, ecx */
  EBX = (ECX);
  /* 11b7a56e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b7a570 call 0x11b76534 */
  push32(0x11b7a575u); f_11b76534();
  /* 11b7a575 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11b7a57c mov ecx, ebx */
  ECX = (EBX);
L_11b7a57e:;
  /* 11b7a57e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a580 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b7a582 mov edi, edi */
  EDI = (EDI);
L_11b7a584:;
  /* 11b7a584 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b7a586 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a588 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b7a58a je 0x11b7a5af */
  if (C.zf) goto L_11b7a5af;
  /* 11b7a58c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b7a58e je 0x11b7a5af */
  if (C.zf) goto L_11b7a5af;
  /* 11b7a590 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b7a591 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b7a592 push ecx */
  push32((uint32_t)(ECX));
  /* 11b7a593 push eax */
  push32((uint32_t)(EAX));
  /* 11b7a594 push ebx */
  push32((uint32_t)(EBX));
  /* 11b7a595 call 0x11b768dd */
  push32(0x11b7a59au); f_11b768dd();
  /* 11b7a59a mov ebx, eax */
  EBX = (EAX);
  /* 11b7a59c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a59f call 0x11b768dd */
  push32(0x11b7a5a4u); f_11b768dd();
  /* 11b7a5a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a5a7 pop ecx */
  ECX = (pop32());
  /* 11b7a5a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a5aa jne 0x11b7a5b5 */
  if (!C.zf) goto L_11b7a5b5;
  /* 11b7a5ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b7a5ad jne 0x11b7a584 */
  if (!C.zf) goto L_11b7a584;
L_11b7a5af:;
  /* 11b7a5af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b7a5b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b7a5b3 je 0x11b7a5be */
  if (C.zf) goto L_11b7a5be;
L_11b7a5b5:;
  /* 11b7a5b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b7a5ba jb 0x11b7a5be */
  if (C.cf) goto L_11b7a5be;
  /* 11b7a5bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11b7a5be:;
  /* 11b7a5be pop eax */
  EAX = (pop32());
  /* 11b7a5bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b7a5c1 jne 0x11b7a5cc */
  if (!C.zf) goto L_11b7a5cc;
  /* 11b7a5c3 lock dec dword ptr [0x11b8163c] */
  x86_unimpl("lock dec @ 0x11b7a5c3");
  /* 11b7a5ca jmp 0x11b7a5da */
  goto L_11b7a5da;
L_11b7a5cc:;
  /* 11b7a5cc mov ebx, ecx */
  EBX = (ECX);
  /* 11b7a5ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b7a5d0 call 0x11b76595 */
  push32(0x11b7a5d5u); f_11b76595();
  /* 11b7a5d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b7a5d8 mov ecx, ebx */
  ECX = (EBX);
L_11b7a5da:;
  /* 11b7a5da mov eax, ecx */
  EAX = (ECX);
  /* 11b7a5dc pop ebx */
  EBX = (pop32());
  /* 11b7a5dd pop esi */
  ESI = (pop32());
  /* 11b7a5de pop edi */
  EDI = (pop32());
  /* 11b7a5df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b7a5e0 ret  */
  ESPCHK(0x11b7a4e0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11b7a714 (6 bytes, 1 insns) */
void f_11b7a714(void) {
  FTRACE(0x11b7a714u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b7a714 jmp dword ptr [0x11b7b020] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b7b020)))); return;
}

