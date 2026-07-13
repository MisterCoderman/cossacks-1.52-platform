#include "recomp.h"

/* FUN_1000717d @ 0x11a6717d (103 bytes, 49 insns) */
void f_11a6717d(void) {
  FTRACE(0x11a6717du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6717d push edi */
  push32((uint32_t)(EDI));
  /* 11a6717e mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a67182 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a67184 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a67186 jne 0x11a6718c */
  if (!C.zf) goto L_11a6718c;
  /* 11a67188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6718a pop edi */
  EDI = (pop32());
  /* 11a6718b ret  */
  ESPCHK(0x11a6717du, _esp0);
  ESP += 4; return;
L_11a6718c:;
  /* 11a6718c cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6718f lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11a67192 je 0x11a6719e */
  if (C.zf) goto L_11a6719e;
L_11a67194:;
  /* 11a67194 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a67196 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a67197 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6719a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a6719c jne 0x11a67194 */
  if (!C.zf) goto L_11a67194;
L_11a6719e:;
  /* 11a6719e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6719f push ebp */
  push32((uint32_t)(EBP));
  /* 11a671a0 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11a671a7 push esi */
  push32((uint32_t)(ESI));
  /* 11a671a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a671a9 call 0x11a63e61 */
  push32(0x11a671aeu); f_11a63e61();
  /* 11a671ae mov esi, eax */
  ESI = (EAX);
  /* 11a671b0 pop ecx */
  ECX = (pop32());
  /* 11a671b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a671b3 mov ebp, esi */
  EBP = (ESI);
  /* 11a671b5 jne 0x11a671bf */
  if (!C.zf) goto L_11a671bf;
  /* 11a671b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a671b9 call 0x11a62781 */
  push32(0x11a671beu); f_11a62781();
  /* 11a671be pop ecx */
  ECX = (pop32());
L_11a671bf:;
  /* 11a671bf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a671c1 mov ebx, edi */
  EBX = (EDI);
L_11a671c3:;
  /* 11a671c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a671c5 je 0x11a671da */
  if (C.zf) goto L_11a671da;
  /* 11a671c7 push eax */
  push32((uint32_t)(EAX));
  /* 11a671c8 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a671cb call 0x11a67630 */
  push32(0x11a671d0u); f_11a67630();
  /* 11a671d0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a671d2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a671d4 pop ecx */
  ECX = (pop32());
  /* 11a671d5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a671d8 jmp 0x11a671c3 */
  goto L_11a671c3;
L_11a671da:;
  /* 11a671da and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a671dd mov eax, ebp */
  EAX = (EBP);
  /* 11a671df pop esi */
  ESI = (pop32());
  /* 11a671e0 pop ebp */
  EBP = (pop32());
  /* 11a671e1 pop ebx */
  EBX = (pop32());
  /* 11a671e2 pop edi */
  EDI = (pop32());
  /* 11a671e3 ret  */
  ESPCHK(0x11a6717du, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x11a671f0 (62 bytes, 35 insns) */
void f_11a671f0(void) {
  FTRACE(0x11a671f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a671f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a671f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a671f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a671f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a671f6 push eax */
  push32((uint32_t)(EAX));
  /* 11a671f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a671f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a671f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a671fa push eax */
  push32((uint32_t)(EAX));
  /* 11a671fb push eax */
  push32((uint32_t)(EAX));
  /* 11a671fc push eax */
  push32((uint32_t)(EAX));
  /* 11a671fd push eax */
  push32((uint32_t)(EAX));
  /* 11a671fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a67201 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a67204:;
  /* 11a67204 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a67206 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a67208 je 0x11a67211 */
  if (C.zf) goto L_11a67211;
  /* 11a6720a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a6720b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a6720b");
  /* 11a6720f jmp 0x11a67204 */
  goto L_11a67204;
L_11a67211:;
  /* 11a67211 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67214 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a67217 nop  */
  /* nop */
L_11a67218:;
  /* 11a67218 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a67219 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a6721b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a6721d je 0x11a67226 */
  if (C.zf) goto L_11a67226;
  /* 11a6721f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a67220 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a67220");
  /* 11a67224 jae 0x11a67218 */
  if (!C.cf) goto L_11a67218;
L_11a67226:;
  /* 11a67226 mov eax, ecx */
  EAX = (ECX);
  /* 11a67228 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6722b pop esi */
  ESI = (pop32());
  /* 11a6722c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6722d ret  */
  ESPCHK(0x11a671f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x11a67230 (58 bytes, 32 insns) */
void f_11a67230(void) {
  FTRACE(0x11a67230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67230 push ebp */
  push32((uint32_t)(EBP));
  /* 11a67231 mov ebp, esp */
  EBP = (ESP);
  /* 11a67233 push esi */
  push32((uint32_t)(ESI));
  /* 11a67234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67236 push eax */
  push32((uint32_t)(EAX));
  /* 11a67237 push eax */
  push32((uint32_t)(EAX));
  /* 11a67238 push eax */
  push32((uint32_t)(EAX));
  /* 11a67239 push eax */
  push32((uint32_t)(EAX));
  /* 11a6723a push eax */
  push32((uint32_t)(EAX));
  /* 11a6723b push eax */
  push32((uint32_t)(EAX));
  /* 11a6723c push eax */
  push32((uint32_t)(EAX));
  /* 11a6723d push eax */
  push32((uint32_t)(EAX));
  /* 11a6723e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a67241 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a67244:;
  /* 11a67244 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a67246 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a67248 je 0x11a67251 */
  if (C.zf) goto L_11a67251;
  /* 11a6724a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a6724b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a6724b");
  /* 11a6724f jmp 0x11a67244 */
  goto L_11a67244;
L_11a67251:;
  /* 11a67251 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11a67254:;
  /* 11a67254 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a67256 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a67258 je 0x11a67264 */
  if (C.zf) goto L_11a67264;
  /* 11a6725a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a6725b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a6725b");
  /* 11a6725f jae 0x11a67254 */
  if (!C.cf) goto L_11a67254;
  /* 11a67261 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11a67264:;
  /* 11a67264 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67267 pop esi */
  ESI = (pop32());
  /* 11a67268 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a67269 ret  */
  ESPCHK(0x11a67230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000726a @ 0x11a6726a (781 bytes, 277 insns) */
void f_11a6726a(void) {
  FTRACE(0x11a6726au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6726a push ebp */
  push32((uint32_t)(EBP));
  /* 11a6726b mov ebp, esp */
  EBP = (ESP);
  /* 11a6726d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a6726f push 0x11a685c0 */
  push32((uint32_t)(0x11a685c0u));
  /* 11a67274 push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a67279 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a6727f push eax */
  push32((uint32_t)(EAX));
  /* 11a67280 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a67287 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6728a push ebx */
  push32((uint32_t)(EBX));
  /* 11a6728b push esi */
  push32((uint32_t)(ESI));
  /* 11a6728c push edi */
  push32((uint32_t)(EDI));
  /* 11a6728d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67290 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a67292 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67294 jne 0x11a672a4 */
  if (!C.zf) goto L_11a672a4;
  /* 11a67296 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a67299 call 0x11a63e61 */
  push32(0x11a6729eu); f_11a63e61();
  /* 11a6729e pop ecx */
  ECX = (pop32());
  /* 11a6729f jmp 0x11a6758a */
  jmp_ind(0x11a6758au); return;
L_11a672a4:;
  /* 11a672a4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a672a7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a672a9 jne 0x11a672b7 */
  if (!C.zf) goto L_11a672b7;
  /* 11a672ab push ebx */
  push32((uint32_t)(EBX));
  /* 11a672ac call 0x11a637b6 */
  push32(0x11a672b1u); f_11a637b6();
  /* 11a672b1 pop ecx */
  ECX = (pop32());
  /* 11a672b2 jmp 0x11a67588 */
  jmp_ind(0x11a67588u); return;
L_11a672b7:;
  /* 11a672b7 mov eax, dword ptr [0x11a6c6cc] */
  EAX = (r32((uint32_t)(0x11a6c6cc)));
  /* 11a672bc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a672bf jne 0x11a673fe */
  if (!C.zf) goto L_11a673fe;
L_11a672c5:;
  /* 11a672c5 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a672c8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a672cb ja 0x11a673c2 */
  if ((!C.cf&&!C.zf)) goto L_11a673c2;
  /* 11a672d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a672d3 call 0x11a63740 */
  push32(0x11a672d8u); f_11a63740();
  /* 11a672d8 pop ecx */
  ECX = (pop32());
  /* 11a672d9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a672dc push ebx */
  push32((uint32_t)(EBX));
  /* 11a672dd call 0x11a64c67 */
  push32(0x11a672e2u); f_11a64c67();
  /* 11a672e2 pop ecx */
  ECX = (pop32());
  /* 11a672e3 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a672e6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a672e8 je 0x11a67392 */
  if (C.zf) goto L_11a67392;
  /* 11a672ee cmp esi, dword ptr [0x11a6c494] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6c494))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a672f4 ja 0x11a67342 */
  if ((!C.cf&&!C.zf)) goto L_11a67342;
  /* 11a672f6 push esi */
  push32((uint32_t)(ESI));
  /* 11a672f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a672f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a672f9 call 0x11a65470 */
  push32(0x11a672feu); f_11a65470();
  /* 11a672fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67303 je 0x11a6730a */
  if (C.zf) goto L_11a6730a;
  /* 11a67305 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11a67308 jmp 0x11a67342 */
  goto L_11a67342;
L_11a6730a:;
  /* 11a6730a push esi */
  push32((uint32_t)(ESI));
  /* 11a6730b call 0x11a64fbb */
  push32(0x11a67310u); f_11a64fbb();
  /* 11a67310 pop ecx */
  ECX = (pop32());
  /* 11a67311 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a67314 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67316 je 0x11a67342 */
  if (C.zf) goto L_11a67342;
  /* 11a67318 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11a6731b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a6731c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a6731f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67321 jb 0x11a67325 */
  if (C.cf) goto L_11a67325;
  /* 11a67323 mov eax, esi */
  EAX = (ESI);
L_11a67325:;
  /* 11a67325 push eax */
  push32((uint32_t)(EAX));
  /* 11a67326 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67327 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a6732a call 0x11a64500 */
  push32(0x11a6732fu); f_11a64500();
  /* 11a6732f push ebx */
  push32((uint32_t)(EBX));
  /* 11a67330 call 0x11a64c67 */
  push32(0x11a67335u); f_11a64c67();
  /* 11a67335 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a67338 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67339 push eax */
  push32((uint32_t)(EAX));
  /* 11a6733a call 0x11a64c92 */
  push32(0x11a6733fu); f_11a64c92();
  /* 11a6733f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a67342:;
  /* 11a67342 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67345 jne 0x11a67392 */
  if (!C.zf) goto L_11a67392;
  /* 11a67347 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67349 jne 0x11a67351 */
  if (!C.zf) goto L_11a67351;
  /* 11a6734b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a6734d pop esi */
  ESI = (pop32());
  /* 11a6734e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11a67351:;
  /* 11a67351 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67354 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a67357 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a6735a push esi */
  push32((uint32_t)(ESI));
  /* 11a6735b push edi */
  push32((uint32_t)(EDI));
  /* 11a6735c push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a67362 call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a67368u);
  /* 11a67368 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a6736b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6736d je 0x11a67392 */
  if (C.zf) goto L_11a67392;
  /* 11a6736f mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11a67372 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a67373 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a67376 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67378 jb 0x11a6737c */
  if (C.cf) goto L_11a6737c;
  /* 11a6737a mov eax, esi */
  EAX = (ESI);
L_11a6737c:;
  /* 11a6737c push eax */
  push32((uint32_t)(EAX));
  /* 11a6737d push ebx */
  push32((uint32_t)(EBX));
  /* 11a6737e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a67381 call 0x11a64500 */
  push32(0x11a67386u); f_11a64500();
  /* 11a67386 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67387 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11a6738a call 0x11a64c92 */
  push32(0x11a6738fu); f_11a64c92();
  /* 11a6738f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a67392:;
  /* 11a67392 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a67396 call 0x11a673f5 */
  push32(0x11a6739bu); f_11a673f5();
  /* 11a6739b cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6739e jne 0x11a673c2 */
  if (!C.zf) goto L_11a673c2;
  /* 11a673a0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a673a2 jne 0x11a673a7 */
  if (!C.zf) goto L_11a673a7;
  /* 11a673a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a673a6 pop esi */
  ESI = (pop32());
L_11a673a7:;
  /* 11a673a7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a673aa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a673ad mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a673b0 push esi */
  push32((uint32_t)(ESI));
  /* 11a673b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a673b2 push edi */
  push32((uint32_t)(EDI));
  /* 11a673b3 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a673b9 call dword ptr [0x11a6803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6803c))), 0x11a673bfu);
  /* 11a673bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a673c2:;
  /* 11a673c2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a673c5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a673c7 jne 0x11a6758a */
  if (!C.zf) { jmp_ind(0x11a6758au); return; }
  /* 11a673cd cmp dword ptr [0x11a6c3bc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3bc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a673d3 je 0x11a6758a */
  if (C.zf) { jmp_ind(0x11a6758au); return; }
  /* 11a673d9 push esi */
  push32((uint32_t)(ESI));
  /* 11a673da call 0x11a65fbe */
  push32(0x11a673dfu); f_11a65fbe();
  /* 11a673df pop ecx */
  ECX = (pop32());
  /* 11a673e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a673e2 jne 0x11a672c5 */
  if (!C.zf) goto L_11a672c5;
  /* 11a673e8 jmp 0x11a67588 */
  jmp_ind(0x11a67588u); return;
  /* 11a673ed mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a673f0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a673f3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a673f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a673f7 call 0x11a637a1 */
  push32(0x11a673fcu); f_11a637a1();
  /* 11a673fc pop ecx */
  ECX = (pop32());
  /* 11a673fd ret  */
  ESPCHK(0x11a6726au, _esp0);
  ESP += 4; return;
L_11a673fe:;
  /* 11a673fe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67401 jne 0x11a6754e */
  if (!C.zf) goto L_11a6754e;
  /* 11a67407 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6740a ja 0x11a6741e */
  if ((!C.cf&&!C.zf)) goto L_11a6741e;
  /* 11a6740c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6740e jbe 0x11a67418 */
  if ((C.cf||C.zf)) goto L_11a67418;
  /* 11a67410 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67413 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a67416 jmp 0x11a6741b */
  goto L_11a6741b;
L_11a67418:;
  /* 11a67418 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a6741a pop esi */
  ESI = (pop32());
L_11a6741b:;
  /* 11a6741b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11a6741e:;
  /* 11a6741e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a67421 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67424 ja 0x11a6751d */
  if ((!C.cf&&!C.zf)) goto L_11a6751d;
  /* 11a6742a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a6742c call 0x11a63740 */
  push32(0x11a67431u); f_11a63740();
  /* 11a67431 pop ecx */
  ECX = (pop32());
  /* 11a67432 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a67439 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11a6743c push eax */
  push32((uint32_t)(EAX));
  /* 11a6743d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a67440 push eax */
  push32((uint32_t)(EAX));
  /* 11a67441 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67442 call 0x11a659c2 */
  push32(0x11a67447u); f_11a659c2();
  /* 11a67447 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6744a mov edi, eax */
  EDI = (EAX);
  /* 11a6744c mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11a6744f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a67451 je 0x11a67501 */
  if (C.zf) goto L_11a67501;
  /* 11a67457 cmp esi, dword ptr [0x11a6b814] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6b814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6745d jae 0x11a674bb */
  if (!C.cf) goto L_11a674bb;
  /* 11a6745f mov ebx, esi */
  EBX = (ESI);
  /* 11a67461 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11a67464 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67465 push edi */
  push32((uint32_t)(EDI));
  /* 11a67466 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11a67469 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11a6746c call 0x11a65d8a */
  push32(0x11a67471u); f_11a65d8a();
  /* 11a67471 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67476 je 0x11a67480 */
  if (C.zf) goto L_11a67480;
  /* 11a67478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6747b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a6747e jmp 0x11a674b8 */
  goto L_11a674b8;
L_11a67480:;
  /* 11a67480 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67481 call 0x11a65a5e */
  push32(0x11a67486u); f_11a65a5e();
  /* 11a67486 pop ecx */
  ECX = (pop32());
  /* 11a67487 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a6748a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6748c je 0x11a674b8 */
  if (C.zf) goto L_11a674b8;
  /* 11a6748e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a67491 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a67494 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11a67497 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67499 jb 0x11a6749d */
  if (C.cf) goto L_11a6749d;
  /* 11a6749b mov eax, esi */
  EAX = (ESI);
L_11a6749d:;
  /* 11a6749d push eax */
  push32((uint32_t)(EAX));
  /* 11a6749e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a674a1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a674a4 call 0x11a64500 */
  push32(0x11a674a9u); f_11a64500();
  /* 11a674a9 push edi */
  push32((uint32_t)(EDI));
  /* 11a674aa push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11a674ad push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11a674b0 call 0x11a65a19 */
  push32(0x11a674b5u); f_11a65a19();
  /* 11a674b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a674b8:;
  /* 11a674b8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a674bb:;
  /* 11a674bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a674bf jne 0x11a67514 */
  if (!C.zf) goto L_11a67514;
  /* 11a674c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a674c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a674c4 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a674ca call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a674d0u);
  /* 11a674d0 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a674d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a674d5 je 0x11a67514 */
  if (C.zf) goto L_11a67514;
  /* 11a674d7 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a674da shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a674dd mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11a674e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a674e2 jb 0x11a674e6 */
  if (C.cf) goto L_11a674e6;
  /* 11a674e4 mov eax, esi */
  EAX = (ESI);
L_11a674e6:;
  /* 11a674e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a674e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a674e8 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a674eb call 0x11a64500 */
  push32(0x11a674f0u); f_11a64500();
  /* 11a674f0 push edi */
  push32((uint32_t)(EDI));
  /* 11a674f1 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11a674f4 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11a674f7 call 0x11a65a19 */
  push32(0x11a674fcu); f_11a65a19();
  /* 11a674fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a674ff jmp 0x11a67514 */
  goto L_11a67514;
L_11a67501:;
  /* 11a67501 push esi */
  push32((uint32_t)(ESI));
  /* 11a67502 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67503 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a67505 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6750b call dword ptr [0x11a6803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6803c))), 0x11a67511u);
  /* 11a67511 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a67514:;
  /* 11a67514 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a67518 call 0x11a67543 */
  push32(0x11a6751du); f_11a67543();
L_11a6751d:;
  /* 11a6751d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a67520 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67522 jne 0x11a6758a */
  if (!C.zf) { jmp_ind(0x11a6758au); return; }
  /* 11a67524 cmp dword ptr [0x11a6c3bc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3bc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6752a je 0x11a6758a */
  if (C.zf) { jmp_ind(0x11a6758au); return; }
  /* 11a6752c push esi */
  push32((uint32_t)(ESI));
  /* 11a6752d call 0x11a65fbe */
  push32(0x11a67532u); f_11a65fbe();
  /* 11a67532 pop ecx */
  ECX = (pop32());
  /* 11a67533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67535 jne 0x11a6741e */
  if (!C.zf) goto L_11a6741e;
  /* 11a6753b jmp 0x11a67588 */
  jmp_ind(0x11a67588u); return;
  /* 11a6753d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a67540 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67543 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a67545 call 0x11a637a1 */
  push32(0x11a6754au); f_11a637a1();
  /* 11a6754a pop ecx */
  ECX = (pop32());
  /* 11a6754b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a6754d ret  */
  ESPCHK(0x11a6726au, _esp0);
  ESP += 4; return;
L_11a6754e:;
  /* 11a6754e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67550 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67553 ja 0x11a67571 */
  if ((!C.cf&&!C.zf)) goto L_11a67571;
  /* 11a67555 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67557 jne 0x11a6755c */
  if (!C.zf) goto L_11a6755c;
  /* 11a67559 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a6755b pop esi */
  ESI = (pop32());
L_11a6755c:;
  /* 11a6755c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6755f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a67562 push esi */
  push32((uint32_t)(ESI));
  /* 11a67563 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67564 push edi */
  push32((uint32_t)(EDI));
  /* 11a67565 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6756b call dword ptr [0x11a6803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6803c))), 0x11a67571u);
L_11a67571:;
  /* 11a67571 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67573 jne 0x11a6758a */
  if (!C.zf) { jmp_ind(0x11a6758au); return; }
}

/* FUN_100073f5 @ 0x11a673f5 (9 bytes, 4 insns) */
void f_11a673f5(void) {
  FTRACE(0x11a673f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a673f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a673f7 call 0x11a637a1 */
  push32(0x11a673fcu); f_11a637a1();
  /* 11a673fc pop ecx */
  ECX = (pop32());
  /* 11a673fd ret  */
  ESPCHK(0x11a673f5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007543 @ 0x11a67543 (11 bytes, 5 insns) */
void f_11a67543(void) {
  FTRACE(0x11a67543u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67543 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a67545 call 0x11a637a1 */
  push32(0x11a6754au); f_11a637a1();
  /* 11a6754a pop ecx */
  ECX = (pop32());
  /* 11a6754b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a6754d ret  */
  ESPCHK(0x11a67543u, _esp0);
  ESP += 4; return;
}

/* FUN_10007599 @ 0x11a67599 (151 bytes, 62 insns) */
void f_11a67599(void) {
  FTRACE(0x11a67599u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67599 push ebp */
  push32((uint32_t)(EBP));
  /* 11a6759a mov ebp, esp */
  EBP = (ESP);
  /* 11a6759c cmp dword ptr [0x11a6c4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a675a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a675a4 push esi */
  push32((uint32_t)(ESI));
  /* 11a675a5 jne 0x11a675b6 */
  if (!C.zf) goto L_11a675b6;
  /* 11a675a7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a675aa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a675ad call 0x11a64a70 */
  push32(0x11a675b2u); f_11a64a70();
  /* 11a675b2 pop ecx */
  ECX = (pop32());
  /* 11a675b3 pop ecx */
  ECX = (pop32());
  /* 11a675b4 jmp 0x11a6762c */
  goto L_11a6762c;
L_11a675b6:;
  /* 11a675b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a675b8 call 0x11a63740 */
  push32(0x11a675bdu); f_11a63740();
  /* 11a675bd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a675c0 pop ecx */
  ECX = (pop32());
L_11a675c1:;
  /* 11a675c1 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11a675c5 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11a675c8 je 0x11a67614 */
  if (C.zf) goto L_11a67614;
  /* 11a675ca movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a675cd test byte ptr [eax + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a675d4 je 0x11a675f0 */
  if (C.zf) goto L_11a675f0;
  /* 11a675d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a675d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a675da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a675dc je 0x11a675fb */
  if (C.zf) goto L_11a675fb;
  /* 11a675de movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11a675e1 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a675e4 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a675e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a675e9 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a675ec je 0x11a67607 */
  if (C.zf) goto L_11a67607;
  /* 11a675ee jmp 0x11a675f8 */
  goto L_11a675f8;
L_11a675f0:;
  /* 11a675f0 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11a675f3 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a675f6 je 0x11a67614 */
  if (C.zf) goto L_11a67614;
L_11a675f8:;
  /* 11a675f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a675f9 jmp 0x11a675c1 */
  goto L_11a675c1;
L_11a675fb:;
  /* 11a675fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a675fd call 0x11a637a1 */
  push32(0x11a67602u); f_11a637a1();
  /* 11a67602 pop ecx */
  ECX = (pop32());
  /* 11a67603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67605 jmp 0x11a6762c */
  goto L_11a6762c;
L_11a67607:;
  /* 11a67607 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a67609 call 0x11a637a1 */
  push32(0x11a6760eu); f_11a637a1();
  /* 11a6760e pop ecx */
  ECX = (pop32());
  /* 11a6760f lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11a67612 jmp 0x11a6762c */
  goto L_11a6762c;
L_11a67614:;
  /* 11a67614 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a67616 call 0x11a637a1 */
  push32(0x11a6761bu); f_11a637a1();
  /* 11a6761b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a6761e pop ecx */
  ECX = (pop32());
  /* 11a6761f movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11a67622 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a67624 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a67626 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a67628 not eax */
  EAX = (~(EAX));
  /* 11a6762a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11a6762c:;
  /* 11a6762c pop esi */
  ESI = (pop32());
  /* 11a6762d pop ebx */
  EBX = (pop32());
  /* 11a6762e pop ebp */
  EBP = (pop32());
  /* 11a6762f ret  */
  ESPCHK(0x11a67599u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x11a67630 (43 bytes, 23 insns) */
void f_11a67630(void) {
  FTRACE(0x11a67630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67630 push esi */
  push32((uint32_t)(ESI));
  /* 11a67631 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a67635 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a67637 je 0x11a67657 */
  if (C.zf) goto L_11a67657;
  /* 11a67639 push esi */
  push32((uint32_t)(ESI));
  /* 11a6763a call 0x11a64090 */
  push32(0x11a6763fu); f_11a64090();
  /* 11a6763f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a67640 push eax */
  push32((uint32_t)(EAX));
  /* 11a67641 call 0x11a63e61 */
  push32(0x11a67646u); f_11a63e61();
  /* 11a67646 pop ecx */
  ECX = (pop32());
  /* 11a67647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67649 pop ecx */
  ECX = (pop32());
  /* 11a6764a je 0x11a67657 */
  if (C.zf) goto L_11a67657;
  /* 11a6764c push esi */
  push32((uint32_t)(ESI));
  /* 11a6764d push eax */
  push32((uint32_t)(EAX));
  /* 11a6764e call 0x11a63fa0 */
  push32(0x11a67653u); f_11a63fa0();
  /* 11a67653 pop ecx */
  ECX = (pop32());
  /* 11a67654 pop ecx */
  ECX = (pop32());
  /* 11a67655 pop esi */
  ESI = (pop32());
  /* 11a67656 ret  */
  ESPCHK(0x11a67630u, _esp0);
  ESP += 4; return;
L_11a67657:;
  /* 11a67657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67659 pop esi */
  ESI = (pop32());
  /* 11a6765a ret  */
  ESPCHK(0x11a67630u, _esp0);
  ESP += 4; return;
}

/* FUN_10007660 @ 0x11a67660 (208 bytes, 85 insns) */
void f_11a67660(void) {
  FTRACE(0x11a67660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67660 push ebp */
  push32((uint32_t)(EBP));
  /* 11a67661 mov ebp, esp */
  EBP = (ESP);
  /* 11a67663 push edi */
  push32((uint32_t)(EDI));
  /* 11a67664 push esi */
  push32((uint32_t)(ESI));
  /* 11a67665 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67666 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a67669 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6766c lea eax, [0x11a6c3c0] */
  EAX = ((uint32_t)(0x11a6c3c0));
  /* 11a67672 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67676 jne 0x11a676b3 */
  if (!C.zf) goto L_11a676b3;
  /* 11a67678 mov al, 0xff */
  AL = (0xffu);
  /* 11a6767a mov edi, edi */
  EDI = (EDI);
L_11a6767c:;
  /* 11a6767c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a6767e je 0x11a676ae */
  if (C.zf) goto L_11a676ae;
  /* 11a67680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a67682 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a67683 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11a67685 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a67686 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67688 je 0x11a6767c */
  if (C.zf) goto L_11a6767c;
  /* 11a6768a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a6768c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6768e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a67690 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a67693 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a67695 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a67697 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11a67699 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a6769b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6769d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a6769f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a676a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a676a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a676a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a676a8 je 0x11a6767c */
  if (C.zf) goto L_11a6767c;
  /* 11a676aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a676ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11a676ae:;
  /* 11a676ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a676b1 jmp 0x11a6772b */
  goto L_11a6772b;
L_11a676b3:;
  /* 11a676b3 lock inc dword ptr [0x11a6c478] */
  x86_unimpl("lock inc @ 0x11a676b3");
  /* 11a676ba cmp dword ptr [0x11a6c474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a676c1 jg 0x11a676c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a676c7;
  /* 11a676c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a676c5 jmp 0x11a676dc */
  goto L_11a676dc;
L_11a676c7:;
  /* 11a676c7 lock dec dword ptr [0x11a6c478] */
  x86_unimpl("lock dec @ 0x11a676c7");
  /* 11a676ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a676d0 call 0x11a63740 */
  push32(0x11a676d5u); f_11a63740();
  /* 11a676d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11a676dc:;
  /* 11a676dc mov eax, 0xff */
  EAX = (0xffu);
  /* 11a676e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a676e3 nop  */
  /* nop */
L_11a676e4:;
  /* 11a676e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a676e6 je 0x11a6770f */
  if (C.zf) goto L_11a6770f;
  /* 11a676e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a676ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a676eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a676ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a676ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a676f0 je 0x11a676e4 */
  if (C.zf) goto L_11a676e4;
  /* 11a676f2 push eax */
  push32((uint32_t)(EAX));
  /* 11a676f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a676f4 call 0x11a67925 */
  push32(0x11a676f9u); f_11a67925();
  /* 11a676f9 mov ebx, eax */
  EBX = (EAX);
  /* 11a676fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a676fe call 0x11a67925 */
  push32(0x11a67703u); f_11a67925();
  /* 11a67703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67706 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67708 je 0x11a676e4 */
  if (C.zf) goto L_11a676e4;
  /* 11a6770a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6770c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a6770f:;
  /* 11a6770f mov ebx, eax */
  EBX = (EAX);
  /* 11a67711 pop eax */
  EAX = (pop32());
  /* 11a67712 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67714 jne 0x11a6771f */
  if (!C.zf) goto L_11a6771f;
  /* 11a67716 lock dec dword ptr [0x11a6c478] */
  x86_unimpl("lock dec @ 0x11a67716");
  /* 11a6771d jmp 0x11a67729 */
  goto L_11a67729;
L_11a6771f:;
  /* 11a6771f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a67721 call 0x11a637a1 */
  push32(0x11a67726u); f_11a637a1();
  /* 11a67726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a67729:;
  /* 11a67729 mov eax, ebx */
  EAX = (EBX);
L_11a6772b:;
  /* 11a6772b pop ebx */
  EBX = (pop32());
  /* 11a6772c pop esi */
  ESI = (pop32());
  /* 11a6772d pop edi */
  EDI = (pop32());
  /* 11a6772e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6772f ret  */
  ESPCHK(0x11a67660u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x11a67730 (257 bytes, 103 insns) */
void f_11a67730(void) {
  FTRACE(0x11a67730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67730 push ebp */
  push32((uint32_t)(EBP));
  /* 11a67731 mov ebp, esp */
  EBP = (ESP);
  /* 11a67733 push edi */
  push32((uint32_t)(EDI));
  /* 11a67734 push esi */
  push32((uint32_t)(ESI));
  /* 11a67735 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67736 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a67739 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a6773b je 0x11a6782a */
  if (C.zf) goto L_11a6782a;
  /* 11a67741 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67744 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a67747 lea eax, [0x11a6c3c0] */
  EAX = ((uint32_t)(0x11a6c3c0));
  /* 11a6774d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67751 jne 0x11a677a1 */
  if (!C.zf) goto L_11a677a1;
  /* 11a67753 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11a67755 mov bl, 0x5a */
  BL = (0x5au);
  /* 11a67757 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11a67759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a6775c:;
  /* 11a6775c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11a6775e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a67760 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a67762 je 0x11a67785 */
  if (C.zf) goto L_11a67785;
  /* 11a67764 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a67766 je 0x11a67785 */
  if (C.zf) goto L_11a67785;
  /* 11a67768 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a67769 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a6776a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6776c jb 0x11a67774 */
  if (C.cf) goto L_11a67774;
  /* 11a6776e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67770 ja 0x11a67774 */
  if ((!C.cf&&!C.zf)) goto L_11a67774;
  /* 11a67772 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11a67774:;
  /* 11a67774 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67776 jb 0x11a6777e */
  if (C.cf) goto L_11a6777e;
  /* 11a67778 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6777a ja 0x11a6777e */
  if ((!C.cf&&!C.zf)) goto L_11a6777e;
  /* 11a6777c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11a6777e:;
  /* 11a6777e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67780 jne 0x11a6778f */
  if (!C.zf) goto L_11a6778f;
  /* 11a67782 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a67783 jne 0x11a6775c */
  if (!C.zf) goto L_11a6775c;
L_11a67785:;
  /* 11a67785 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a67787 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67789 je 0x11a6782a */
  if (C.zf) goto L_11a6782a;
L_11a6778f:;
  /* 11a6778f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a67794 jb 0x11a6782a */
  if (C.cf) goto L_11a6782a;
  /* 11a6779a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a6779c jmp 0x11a6782a */
  goto L_11a6782a;
L_11a677a1:;
  /* 11a677a1 lock inc dword ptr [0x11a6c478] */
  x86_unimpl("lock inc @ 0x11a677a1");
  /* 11a677a8 cmp dword ptr [0x11a6c474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a677af jg 0x11a677b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a677b5;
  /* 11a677b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a677b3 jmp 0x11a677ce */
  goto L_11a677ce;
L_11a677b5:;
  /* 11a677b5 lock dec dword ptr [0x11a6c478] */
  x86_unimpl("lock dec @ 0x11a677b5");
  /* 11a677bc mov ebx, ecx */
  EBX = (ECX);
  /* 11a677be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a677c0 call 0x11a63740 */
  push32(0x11a677c5u); f_11a63740();
  /* 11a677c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11a677cc mov ecx, ebx */
  ECX = (EBX);
L_11a677ce:;
  /* 11a677ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a677d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a677d2 mov edi, edi */
  EDI = (EDI);
L_11a677d4:;
  /* 11a677d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a677d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a677d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a677da je 0x11a677ff */
  if (C.zf) goto L_11a677ff;
  /* 11a677dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a677de je 0x11a677ff */
  if (C.zf) goto L_11a677ff;
  /* 11a677e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a677e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a677e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a677e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a677e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a677e5 call 0x11a67925 */
  push32(0x11a677eau); f_11a67925();
  /* 11a677ea mov ebx, eax */
  EBX = (EAX);
  /* 11a677ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a677ef call 0x11a67925 */
  push32(0x11a677f4u); f_11a67925();
  /* 11a677f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a677f7 pop ecx */
  ECX = (pop32());
  /* 11a677f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a677fa jne 0x11a67805 */
  if (!C.zf) goto L_11a67805;
  /* 11a677fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a677fd jne 0x11a677d4 */
  if (!C.zf) goto L_11a677d4;
L_11a677ff:;
  /* 11a677ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a67801 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67803 je 0x11a6780e */
  if (C.zf) goto L_11a6780e;
L_11a67805:;
  /* 11a67805 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a6780a jb 0x11a6780e */
  if (C.cf) goto L_11a6780e;
  /* 11a6780c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11a6780e:;
  /* 11a6780e pop eax */
  EAX = (pop32());
  /* 11a6780f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67811 jne 0x11a6781c */
  if (!C.zf) goto L_11a6781c;
  /* 11a67813 lock dec dword ptr [0x11a6c478] */
  x86_unimpl("lock dec @ 0x11a67813");
  /* 11a6781a jmp 0x11a6782a */
  goto L_11a6782a;
L_11a6781c:;
  /* 11a6781c mov ebx, ecx */
  EBX = (ECX);
  /* 11a6781e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a67820 call 0x11a637a1 */
  push32(0x11a67825u); f_11a637a1();
  /* 11a67825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67828 mov ecx, ebx */
  ECX = (EBX);
L_11a6782a:;
  /* 11a6782a mov eax, ecx */
  EAX = (ECX);
  /* 11a6782c pop ebx */
  EBX = (pop32());
  /* 11a6782d pop esi */
  ESI = (pop32());
  /* 11a6782e pop edi */
  EDI = (pop32());
  /* 11a6782f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a67830 ret  */
  ESPCHK(0x11a67730u, _esp0);
  ESP += 4; return;
}

/* FUN_10007925 @ 0x11a67925 (203 bytes, 78 insns) */
void f_11a67925(void) {
  FTRACE(0x11a67925u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67925 push ebp */
  push32((uint32_t)(EBP));
  /* 11a67926 mov ebp, esp */
  EBP = (ESP);
  /* 11a67928 push ecx */
  push32((uint32_t)(ECX));
  /* 11a67929 cmp dword ptr [0x11a6c3c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67930 push ebx */
  push32((uint32_t)(EBX));
  /* 11a67931 push esi */
  push32((uint32_t)(ESI));
  /* 11a67932 push edi */
  push32((uint32_t)(EDI));
  /* 11a67933 jne 0x11a67952 */
  if (!C.zf) goto L_11a67952;
  /* 11a67935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67938 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6793b jl 0x11a679eb */
  if ((C.sf!=C.of)) goto L_11a679eb;
  /* 11a67941 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67944 jg 0x11a679eb */
  if ((!C.zf&&C.sf==C.of)) goto L_11a679eb;
  /* 11a6794a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6794d jmp 0x11a679eb */
  goto L_11a679eb;
L_11a67952:;
  /* 11a67952 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a67955 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11a6795a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a6795c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6795e pop esi */
  ESI = (pop32());
  /* 11a6795f jge 0x11a67986 */
  if ((C.sf==C.of)) goto L_11a67986;
  /* 11a67961 cmp dword ptr [0x11a6bba4], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67967 jle 0x11a67974 */
  if ((C.zf||C.sf!=C.of)) goto L_11a67974;
  /* 11a67969 push esi */
  push32((uint32_t)(ESI));
  /* 11a6796a push ebx */
  push32((uint32_t)(EBX));
  /* 11a6796b call 0x11a6687d */
  push32(0x11a67970u); f_11a6687d();
  /* 11a67970 pop ecx */
  ECX = (pop32());
  /* 11a67971 pop ecx */
  ECX = (pop32());
  /* 11a67972 jmp 0x11a6797e */
  goto L_11a6797e;
L_11a67974:;
  /* 11a67974 mov eax, dword ptr [0x11a6b998] */
  EAX = (r32((uint32_t)(0x11a6b998)));
  /* 11a67979 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a6797c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11a6797e:;
  /* 11a6797e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67980 jne 0x11a67986 */
  if (!C.zf) goto L_11a67986;
L_11a67982:;
  /* 11a67982 mov eax, ebx */
  EAX = (EBX);
  /* 11a67984 jmp 0x11a679eb */
  goto L_11a679eb;
L_11a67986:;
  /* 11a67986 mov edx, dword ptr [0x11a6b998] */
  EDX = (r32((uint32_t)(0x11a6b998)));
  /* 11a6798c mov eax, ebx */
  EAX = (EBX);
  /* 11a6798e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a67991 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a67994 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a67999 je 0x11a679aa */
  if (C.zf) goto L_11a679aa;
  /* 11a6799b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a6799f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a679a1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a679a4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a679a7 pop eax */
  EAX = (pop32());
  /* 11a679a8 jmp 0x11a679b3 */
  goto L_11a679b3;
L_11a679aa:;
  /* 11a679aa and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a679ae mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a679b1 mov eax, esi */
  EAX = (ESI);
L_11a679b3:;
  /* 11a679b3 push esi */
  push32((uint32_t)(ESI));
  /* 11a679b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a679b6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a679b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a679bb push ecx */
  push32((uint32_t)(ECX));
  /* 11a679bc push eax */
  push32((uint32_t)(EAX));
  /* 11a679bd lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a679c0 push eax */
  push32((uint32_t)(EAX));
  /* 11a679c1 push edi */
  push32((uint32_t)(EDI));
  /* 11a679c2 push dword ptr [0x11a6c3c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c3c8))));
  /* 11a679c8 call 0x11a663a1 */
  push32(0x11a679cdu); f_11a663a1();
  /* 11a679cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a679d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a679d2 je 0x11a67982 */
  if (C.zf) goto L_11a67982;
  /* 11a679d4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a679d6 jne 0x11a679de */
  if (!C.zf) goto L_11a679de;
  /* 11a679d8 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a679dc jmp 0x11a679eb */
  goto L_11a679eb;
L_11a679de:;
  /* 11a679de movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a679e2 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a679e6 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a679e9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a679eb:;
  /* 11a679eb pop edi */
  EDI = (pop32());
  /* 11a679ec pop esi */
  ESI = (pop32());
  /* 11a679ed pop ebx */
  EBX = (pop32());
  /* 11a679ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a679ef ret  */
  ESPCHK(0x11a67925u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a679f0 (6 bytes, 1 insns) */
void f_11a679f0(void) {
  FTRACE(0x11a679f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a679f0 jmp dword ptr [0x11a68030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a68030)))); return;
}

