#include "recomp.h"

/* FUN_10010160 @ 0x11e00160 (27 bytes, 12 insns) */
void f_11e00160(void) {
  FTRACE(0x11e00160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00160 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00161 mov ebp, esp */
  EBP = (ESP);
  /* 11e00163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00166 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00168 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0016b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0016e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e00170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00175 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11e00179 pop ebp */
  EBP = (pop32());
  /* 11e0017a ret  */
  ESPCHK(0x11e00160u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x11e00180 (804 bytes, 236 insns) */
void f_11e00180(void) {
  FTRACE(0x11e00180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00180 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00181 mov ebp, esp */
  EBP = (ESP);
  /* 11e00183 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00186 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11e0018b push 0x11e2afa0 */
  push32((uint32_t)(0x11e2afa0u));
  /* 11e00190 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00192 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e00197 call 0x11dfbe50 */
  push32(0x11e0019cu); f_11dfbe50();
  /* 11e0019c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0019f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11e001a2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e001a6 jne 0x11e001b2 */
  if (!C.zf) goto L_11e001b2;
  /* 11e001a8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11e001aa call 0x11dfa8c0 */
  push32(0x11e001afu); f_11dfa8c0();
  /* 11e001af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e001b2:;
  /* 11e001b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001b5 mov dword ptr [0x11e31fe0], eax */
  w32((uint32_t)(0x11e31fe0), (EAX));
  /* 11e001ba mov dword ptr [0x11e3211c], 0x20 */
  w32((uint32_t)(0x11e3211c), (0x20u));
  /* 11e001c4 jmp 0x11e001cf */
  goto L_11e001cf;
L_11e001c6:;
  /* 11e001c6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001c9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e001cc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11e001cf:;
  /* 11e001cf mov edx, dword ptr [0x11e31fe0] */
  EDX = (r32((uint32_t)(0x11e31fe0)));
  /* 11e001d5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e001db cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e001de jae 0x11e00203 */
  if (!C.cf) goto L_11e00203;
  /* 11e001e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001e3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e001e7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001ea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e001f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001f3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11e001f7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e001fa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e00201 jmp 0x11e001c6 */
  goto L_11e001c6;
L_11e00203:;
  /* 11e00203 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11e00206 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00207 call dword ptr [0x11e3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3339c))), 0x11e0020du);
  /* 11e0020d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11e00210 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e00216 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00218 je 0x11e003a5 */
  if (C.zf) goto L_11e003a5;
  /* 11e0021e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00222 je 0x11e003a5 */
  if (C.zf) goto L_11e003a5;
  /* 11e00228 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0022b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0022d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11e00230 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00233 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00236 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e00239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0023c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0023f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11e00242 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00249 jge 0x11e00253 */
  if ((C.sf==C.of)) goto L_11e00253;
  /* 11e0024b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e0024e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11e00251 jmp 0x11e0025a */
  goto L_11e0025a;
L_11e00253:;
  /* 11e00253 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11e0025a:;
  /* 11e0025a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e0025d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11e00260 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11e00267 jmp 0x11e00272 */
  goto L_11e00272;
L_11e00269:;
  /* 11e00269 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11e0026c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0026f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11e00272:;
  /* 11e00272 mov ecx, dword ptr [0x11e3211c] */
  ECX = (r32((uint32_t)(0x11e3211c)));
  /* 11e00278 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0027b jge 0x11e00312 */
  if ((C.sf==C.of)) goto L_11e00312;
  /* 11e00281 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11e00286 push 0x11e2afa0 */
  push32((uint32_t)(0x11e2afa0u));
  /* 11e0028b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0028d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e00292 call 0x11dfbe50 */
  push32(0x11e00297u); f_11dfbe50();
  /* 11e00297 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0029a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11e0029d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e002a1 jne 0x11e002ae */
  if (!C.zf) goto L_11e002ae;
  /* 11e002a3 mov edx, dword ptr [0x11e3211c] */
  EDX = (r32((uint32_t)(0x11e3211c)));
  /* 11e002a9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11e002ac jmp 0x11e00312 */
  goto L_11e00312;
L_11e002ae:;
  /* 11e002ae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11e002b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e002b4 mov dword ptr [eax*4 + 0x11e31fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x11e31fe0), (ECX));
  /* 11e002bb mov edx, dword ptr [0x11e3211c] */
  EDX = (r32((uint32_t)(0x11e3211c)));
  /* 11e002c1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e002c4 mov dword ptr [0x11e3211c], edx */
  w32((uint32_t)(0x11e3211c), (EDX));
  /* 11e002ca jmp 0x11e002d5 */
  goto L_11e002d5;
L_11e002cc:;
  /* 11e002cc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e002cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e002d2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11e002d5:;
  /* 11e002d5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11e002d8 mov edx, dword ptr [ecx*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e002df add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e002e5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e002e8 jae 0x11e0030d */
  if (!C.cf) goto L_11e0030d;
  /* 11e002ea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e002ed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e002f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e002f4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e002fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e002fd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11e00301 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00304 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e0030b jmp 0x11e002cc */
  goto L_11e002cc;
L_11e0030d:;
  /* 11e0030d jmp 0x11e00269 */
  goto L_11e00269;
L_11e00312:;
  /* 11e00312 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11e00319 jmp 0x11e00336 */
  goto L_11e00336;
L_11e0031b:;
  /* 11e0031b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e0031e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00321 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11e00324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00327 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0032a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0032d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11e00330 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00333 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11e00336:;
  /* 11e00336 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e00339 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0033c jge 0x11e003a5 */
  if ((C.sf==C.of)) goto L_11e003a5;
  /* 11e0033e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11e00341 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00344 je 0x11e003a0 */
  if (C.zf) goto L_11e003a0;
  /* 11e00346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00349 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0034c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0034f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e00351 je 0x11e003a0 */
  if (C.zf) goto L_11e003a0;
  /* 11e00353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00356 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e00359 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0035c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0035e jne 0x11e00370 */
  if (!C.zf) goto L_11e00370;
  /* 11e00360 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11e00363 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e00365 push edx */
  push32((uint32_t)(EDX));
  /* 11e00366 call dword ptr [0x11e333a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333a0))), 0x11e0036cu);
  /* 11e0036c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0036e je 0x11e003a0 */
  if (C.zf) goto L_11e003a0;
L_11e00370:;
  /* 11e00370 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e00373 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e00376 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e00379 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0037c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0037f mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e00386 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00388 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11e0038b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0038e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11e00391 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e00393 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e00395 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0039b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0039d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11e003a0:;
  /* 11e003a0 jmp 0x11e0031b */
  goto L_11e0031b;
L_11e003a5:;
  /* 11e003a5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11e003ac jmp 0x11e003b7 */
  goto L_11e003b7;
L_11e003ae:;
  /* 11e003ae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e003b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e003b4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11e003b7:;
  /* 11e003b7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e003bb jge 0x11e00494 */
  if ((C.sf==C.of)) goto L_11e00494;
  /* 11e003c1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e003c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e003c7 mov edx, dword ptr [0x11e31fe0] */
  EDX = (r32((uint32_t)(0x11e31fe0)));
  /* 11e003cd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e003cf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11e003d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e003d5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e003d8 jne 0x11e00480 */
  if (!C.zf) goto L_11e00480;
  /* 11e003de mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e003e1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11e003e5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e003e9 jne 0x11e003f4 */
  if (!C.zf) goto L_11e003f4;
  /* 11e003eb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11e003f2 jmp 0x11e00404 */
  goto L_11e00404;
L_11e003f4:;
  /* 11e003f4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11e003f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e003fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e003fc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e003fe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00401 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11e00404:;
  /* 11e00404 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e00407 push eax */
  push32((uint32_t)(EAX));
  /* 11e00408 call dword ptr [0x11e333c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c8))), 0x11e0040eu);
  /* 11e0040e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11e00411 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00415 je 0x11e0046f */
  if (C.zf) goto L_11e0046f;
  /* 11e00417 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11e0041a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0041b call dword ptr [0x11e333a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333a0))), 0x11e00421u);
  /* 11e00421 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11e00424 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00428 je 0x11e0046f */
  if (C.zf) goto L_11e0046f;
  /* 11e0042a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0042d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11e00430 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e00432 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11e00435 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0043b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0043e jne 0x11e00450 */
  if (!C.zf) goto L_11e00450;
  /* 11e00440 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00443 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e00446 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11e00448 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0044b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11e0044e jmp 0x11e0046d */
  goto L_11e0046d;
L_11e00450:;
  /* 11e00450 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11e00453 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e00459 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0045c jne 0x11e0046d */
  if (!C.zf) goto L_11e0046d;
  /* 11e0045e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00461 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e00464 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11e00467 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0046a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11e0046d:;
  /* 11e0046d jmp 0x11e0047e */
  goto L_11e0047e;
L_11e0046f:;
  /* 11e0046f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00472 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e00475 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11e00478 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0047b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11e0047e:;
  /* 11e0047e jmp 0x11e0048f */
  goto L_11e0048f;
L_11e00480:;
  /* 11e00480 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e00483 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e00486 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11e00489 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e0048c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11e0048f:;
  /* 11e0048f jmp 0x11e003ae */
  goto L_11e003ae;
L_11e00494:;
  /* 11e00494 mov eax, dword ptr [0x11e3211c] */
  EAX = (r32((uint32_t)(0x11e3211c)));
  /* 11e00499 push eax */
  push32((uint32_t)(EAX));
  /* 11e0049a call dword ptr [0x11e333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333a4))), 0x11e004a0u);
  /* 11e004a0 mov esp, ebp */
  ESP = (EBP);
  /* 11e004a2 pop ebp */
  EBP = (pop32());
  /* 11e004a3 ret  */
  ESPCHK(0x11e00180u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11e004b0 (155 bytes, 45 insns) */
void f_11e004b0(void) {
  FTRACE(0x11e004b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e004b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e004b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e004b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e004b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e004bd jmp 0x11e004c8 */
  goto L_11e004c8;
L_11e004bf:;
  /* 11e004bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e004c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e004c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e004c8:;
  /* 11e004c8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e004cc jge 0x11e00547 */
  if ((C.sf==C.of)) goto L_11e00547;
  /* 11e004ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e004d1 cmp dword ptr [ecx*4 + 0x11e31fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11e31fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e004d9 je 0x11e00542 */
  if (C.zf) goto L_11e00542;
  /* 11e004db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e004de mov eax, dword ptr [edx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e004e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e004e8 jmp 0x11e004f3 */
  goto L_11e004f3;
L_11e004ea:;
  /* 11e004ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e004ed add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e004f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e004f3:;
  /* 11e004f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e004f6 mov eax, dword ptr [edx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e004fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00502 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00505 jae 0x11e0051f */
  if (!C.cf) goto L_11e0051f;
  /* 11e00507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0050a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0050e je 0x11e0051d */
  if (C.zf) goto L_11e0051d;
  /* 11e00510 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00513 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00516 push edx */
  push32((uint32_t)(EDX));
  /* 11e00517 call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11e0051du);
L_11e0051d:;
  /* 11e0051d jmp 0x11e004ea */
  goto L_11e004ea;
L_11e0051f:;
  /* 11e0051f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00521 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00524 mov ecx, dword ptr [eax*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0052b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0052c call 0x11dfc8e0 */
  push32(0x11e00531u); f_11dfc8e0();
  /* 11e00531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00534 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00537 mov dword ptr [edx*4 + 0x11e31fe0], 0 */
  w32((uint32_t)(EDX*4 + 0x11e31fe0), (0x0u));
L_11e00542:;
  /* 11e00542 jmp 0x11e004bf */
  goto L_11e004bf;
L_11e00547:;
  /* 11e00547 mov esp, ebp */
  ESP = (EBP);
  /* 11e00549 pop ebp */
  EBP = (pop32());
  /* 11e0054a ret  */
  ESPCHK(0x11e004b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x11e00550 (329 bytes, 102 insns) */
void f_11e00550(void) {
  FTRACE(0x11e00550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00550 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00551 mov ebp, esp */
  EBP = (ESP);
  /* 11e00553 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00556 cmp dword ptr [0x11e32130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0055d jne 0x11e00564 */
  if (!C.zf) goto L_11e00564;
  /* 11e0055f call 0x11e06e60 */
  push32(0x11e00564u); f_11e06e60();
L_11e00564:;
  /* 11e00564 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0056b mov eax, dword ptr [0x11e30600] */
  EAX = (r32((uint32_t)(0x11e30600)));
  /* 11e00570 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e00573:;
  /* 11e00573 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00576 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e00579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0057b je 0x11e005a9 */
  if (C.zf) goto L_11e005a9;
  /* 11e0057d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00580 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e00583 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00586 je 0x11e00591 */
  if (C.zf) goto L_11e00591;
  /* 11e00588 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0058b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0058e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e00591:;
  /* 11e00591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00594 push eax */
  push32((uint32_t)(EAX));
  /* 11e00595 call 0x11e01410 */
  push32(0x11e0059au); f_11e01410();
  /* 11e0059a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0059d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e005a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e005a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e005a7 jmp 0x11e00573 */
  goto L_11e00573;
L_11e005a9:;
  /* 11e005a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11e005ab push 0x11e2afac */
  push32((uint32_t)(0x11e2afacu));
  /* 11e005b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e005b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e005b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11e005bc push ecx */
  push32((uint32_t)(ECX));
  /* 11e005bd call 0x11dfbe50 */
  push32(0x11e005c2u); f_11dfbe50();
  /* 11e005c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e005c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e005c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e005cb mov dword ptr [0x11e306ac], edx */
  w32((uint32_t)(0x11e306ac), (EDX));
  /* 11e005d1 cmp dword ptr [0x11e306ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e005d8 jne 0x11e005e4 */
  if (!C.zf) goto L_11e005e4;
  /* 11e005da push 9 */
  push32((uint32_t)(0x9u));
  /* 11e005dc call 0x11dfa8c0 */
  push32(0x11e005e1u); f_11dfa8c0();
  /* 11e005e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e005e4:;
  /* 11e005e4 mov eax, dword ptr [0x11e30600] */
  EAX = (r32((uint32_t)(0x11e30600)));
  /* 11e005e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e005ec jmp 0x11e005f7 */
  goto L_11e005f7;
L_11e005ee:;
  /* 11e005ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e005f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e005f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e005f7:;
  /* 11e005f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e005fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e005fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e005ff je 0x11e00667 */
  if (C.zf) goto L_11e00667;
  /* 11e00601 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00604 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00605 call 0x11e01410 */
  push32(0x11e0060au); f_11e01410();
  /* 11e0060a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0060d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00610 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e00613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00616 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e00619 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0061c je 0x11e00665 */
  if (C.zf) goto L_11e00665;
  /* 11e0061e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11e00620 push 0x11e2afac */
  push32((uint32_t)(0x11e2afacu));
  /* 11e00625 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00627 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0062a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0062b call 0x11dfbe50 */
  push32(0x11e00630u); f_11dfbe50();
  /* 11e00630 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00633 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00636 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e00638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0063b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0063e jne 0x11e0064a */
  if (!C.zf) goto L_11e0064a;
  /* 11e00640 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e00642 call 0x11dfa8c0 */
  push32(0x11e00647u); f_11dfa8c0();
  /* 11e00647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0064a:;
  /* 11e0064a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0064d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0064e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00651 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e00653 push eax */
  push32((uint32_t)(EAX));
  /* 11e00654 call 0x11e01590 */
  push32(0x11e00659u); f_11e01590();
  /* 11e00659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0065c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0065f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00662 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e00665:;
  /* 11e00665 jmp 0x11e005ee */
  goto L_11e005ee;
L_11e00667:;
  /* 11e00667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00669 mov edx, dword ptr [0x11e30600] */
  EDX = (r32((uint32_t)(0x11e30600)));
  /* 11e0066f push edx */
  push32((uint32_t)(EDX));
  /* 11e00670 call 0x11dfc8e0 */
  push32(0x11e00675u); f_11dfc8e0();
  /* 11e00675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00678 mov dword ptr [0x11e30600], 0 */
  w32((uint32_t)(0x11e30600), (0x0u));
  /* 11e00682 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0068b mov dword ptr [0x11e32120], 1 */
  w32((uint32_t)(0x11e32120), (0x1u));
  /* 11e00695 mov esp, ebp */
  ESP = (EBP);
  /* 11e00697 pop ebp */
  EBP = (pop32());
  /* 11e00698 ret  */
  ESPCHK(0x11e00550u, _esp0);
  ESP += 4; return;
}

/* FUN_100106a0 @ 0x11e006a0 (216 bytes, 69 insns) */
void f_11e006a0(void) {
  FTRACE(0x11e006a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e006a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e006a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e006a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e006a6 cmp dword ptr [0x11e32130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e006ad jne 0x11e006b4 */
  if (!C.zf) goto L_11e006b4;
  /* 11e006af call 0x11e06e60 */
  push32(0x11e006b4u); f_11e06e60();
L_11e006b4:;
  /* 11e006b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11e006b9 push 0x11e306d4 */
  push32((uint32_t)(0x11e306d4u));
  /* 11e006be push 0 */
  push32((uint32_t)(0x0u));
  /* 11e006c0 call dword ptr [0x11e333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e4))), 0x11e006c6u);
  /* 11e006c6 mov dword ptr [0x11e306bc], 0x11e306d4 */
  w32((uint32_t)(0x11e306bc), (0x11e306d4u));
  /* 11e006d0 mov eax, dword ptr [0x11e32154] */
  EAX = (r32((uint32_t)(0x11e32154)));
  /* 11e006d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e006d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e006da jne 0x11e006e7 */
  if (!C.zf) goto L_11e006e7;
  /* 11e006dc mov edx, dword ptr [0x11e306bc] */
  EDX = (r32((uint32_t)(0x11e306bc)));
  /* 11e006e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e006e5 jmp 0x11e006ef */
  goto L_11e006ef;
L_11e006e7:;
  /* 11e006e7 mov eax, dword ptr [0x11e32154] */
  EAX = (r32((uint32_t)(0x11e32154)));
  /* 11e006ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11e006ef:;
  /* 11e006ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e006f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e006f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11e006f8 push edx */
  push32((uint32_t)(EDX));
  /* 11e006f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e006fc push eax */
  push32((uint32_t)(EAX));
  /* 11e006fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e006ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00701 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00704 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00705 call 0x11e00780 */
  push32(0x11e0070au); f_11e00780();
  /* 11e0070a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0070d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11e00712 push 0x11e2afb8 */
  push32((uint32_t)(0x11e2afb8u));
  /* 11e00717 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0071c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0071f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11e00722 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00723 call 0x11dfbe50 */
  push32(0x11e00728u); f_11dfbe50();
  /* 11e00728 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0072b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0072e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00732 jne 0x11e0073e */
  if (!C.zf) goto L_11e0073e;
  /* 11e00734 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e00736 call 0x11dfa8c0 */
  push32(0x11e0073bu); f_11dfa8c0();
  /* 11e0073b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0073e:;
  /* 11e0073e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11e00741 push edx */
  push32((uint32_t)(EDX));
  /* 11e00742 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e00745 push eax */
  push32((uint32_t)(EAX));
  /* 11e00746 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00749 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0074c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11e0074f push eax */
  push32((uint32_t)(EAX));
  /* 11e00750 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00753 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00754 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00757 push edx */
  push32((uint32_t)(EDX));
  /* 11e00758 call 0x11e00780 */
  push32(0x11e0075du); f_11e00780();
  /* 11e0075d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00760 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00763 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00766 mov dword ptr [0x11e306a0], eax */
  w32((uint32_t)(0x11e306a0), (EAX));
  /* 11e0076b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0076e mov dword ptr [0x11e306a4], ecx */
  w32((uint32_t)(0x11e306a4), (ECX));
  /* 11e00774 mov esp, ebp */
  ESP = (EBP);
  /* 11e00776 pop ebp */
  EBP = (pop32());
  /* 11e00777 ret  */
  ESPCHK(0x11e006a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010780 @ 0x11e00780 (1060 bytes, 360 insns) */
void f_11e00780(void) {
  FTRACE(0x11e00780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00780 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00781 mov ebp, esp */
  EBP = (ESP);
  /* 11e00783 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00786 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00789 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0078f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e00792 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11e00798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0079b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0079e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e007a2 je 0x11e007b5 */
  if (C.zf) goto L_11e007b5;
  /* 11e007a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e007a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e007aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e007ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e007af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e007b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11e007b5:;
  /* 11e007b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e007b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e007bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e007be jne 0x11e0088d */
  if (!C.zf) goto L_11e0088d;
L_11e007c4:;
  /* 11e007c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e007c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e007ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e007cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e007d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e007d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e007d6 je 0x11e00852 */
  if (C.zf) goto L_11e00852;
  /* 11e007d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e007db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e007de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e007e0 je 0x11e00852 */
  if (C.zf) goto L_11e00852;
  /* 11e007e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e007e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e007e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e007e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e007eb mov al, byte ptr [edx + 0x11e30b41] */
  AL = (r8((uint32_t)(EDX + 0x11e30b41)));
  /* 11e007f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e007f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e007f6 je 0x11e00827 */
  if (C.zf) goto L_11e00827;
  /* 11e007f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e007fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e007fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00800 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00803 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e00805 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00809 je 0x11e00827 */
  if (C.zf) goto L_11e00827;
  /* 11e0080b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0080e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00811 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e00813 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e00815 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00818 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0081b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e0081e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00824 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e00827:;
  /* 11e00827 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0082a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0082c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0082f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00832 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e00834 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00838 je 0x11e0084d */
  if (C.zf) goto L_11e0084d;
  /* 11e0083a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0083d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00840 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e00842 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e00844 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00847 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0084a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e0084d:;
  /* 11e0084d jmp 0x11e007c4 */
  goto L_11e007c4;
L_11e00852:;
  /* 11e00852 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00855 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e00857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0085a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0085d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0085f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00863 je 0x11e00874 */
  if (C.zf) goto L_11e00874;
  /* 11e00865 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00868 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11e0086b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0086e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00871 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11e00874:;
  /* 11e00874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00877 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0087a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0087d jne 0x11e00888 */
  if (!C.zf) goto L_11e00888;
  /* 11e0087f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00882 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00885 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e00888:;
  /* 11e00888 jmp 0x11e0095c */
  goto L_11e0095c;
L_11e0088d:;
  /* 11e0088d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00890 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00895 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00898 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0089a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0089e je 0x11e008b3 */
  if (C.zf) goto L_11e008b3;
  /* 11e008a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e008a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e008a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e008a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e008aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e008ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e008b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e008b3:;
  /* 11e008b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e008b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e008b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11e008bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e008be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e008c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e008c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e008c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e008cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e008cf mov dl, byte ptr [ecx + 0x11e30b41] */
  DL = (r8((uint32_t)(ECX + 0x11e30b41)));
  /* 11e008d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e008d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e008da je 0x11e0090b */
  if (C.zf) goto L_11e0090b;
  /* 11e008dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e008df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e008e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e008e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e008e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e008e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e008ed je 0x11e00902 */
  if (C.zf) goto L_11e00902;
  /* 11e008ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e008f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e008f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e008f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e008f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e008fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e008ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e00902:;
  /* 11e00902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00908 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0090b:;
  /* 11e0090b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0090e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e00914 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00917 je 0x11e00937 */
  if (C.zf) goto L_11e00937;
  /* 11e00919 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0091c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e00921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e00923 je 0x11e00937 */
  if (C.zf) goto L_11e00937;
  /* 11e00925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00928 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0092e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00931 jne 0x11e0088d */
  if (!C.zf) goto L_11e0088d;
L_11e00937:;
  /* 11e00937 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0093a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e00940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00942 jne 0x11e0094f */
  if (!C.zf) goto L_11e0094f;
  /* 11e00944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00947 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0094a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0094d jmp 0x11e0095c */
  goto L_11e0095c;
L_11e0094f:;
  /* 11e0094f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00953 je 0x11e0095c */
  if (C.zf) goto L_11e0095c;
  /* 11e00955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00958 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11e0095c:;
  /* 11e0095c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11e00963:;
  /* 11e00963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00966 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e00969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0096b je 0x11e0098e */
  if (C.zf) goto L_11e0098e;
L_11e0096d:;
  /* 11e0096d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00970 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e00973 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00976 je 0x11e00983 */
  if (C.zf) goto L_11e00983;
  /* 11e00978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0097b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0097e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00981 jne 0x11e0098e */
  if (!C.zf) goto L_11e0098e;
L_11e00983:;
  /* 11e00983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00986 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00989 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0098c jmp 0x11e0096d */
  goto L_11e0096d;
L_11e0098e:;
  /* 11e0098e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00991 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e00994 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e00996 jne 0x11e0099d */
  if (!C.zf) goto L_11e0099d;
  /* 11e00998 jmp 0x11e00b7b */
  goto L_11e00b7b;
L_11e0099d:;
  /* 11e0099d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e009a1 je 0x11e009b4 */
  if (C.zf) goto L_11e009b4;
  /* 11e009a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e009a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e009a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e009ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e009ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e009b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11e009b4:;
  /* 11e009b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e009b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e009b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e009bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e009bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e009c1:;
  /* 11e009c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e009c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11e009cf:;
  /* 11e009cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e009d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e009d5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e009d8 jne 0x11e009ee */
  if (!C.zf) goto L_11e009ee;
  /* 11e009da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e009dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e009e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e009e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e009e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e009e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e009ec jmp 0x11e009cf */
  goto L_11e009cf;
L_11e009ee:;
  /* 11e009ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e009f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e009f4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e009f7 jne 0x11e00a4a */
  if (!C.zf) goto L_11e00a4a;
  /* 11e009f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e009fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e009fe mov ecx, 2 */
  ECX = (0x2u);
  /* 11e00a03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e00a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00a07 jne 0x11e00a42 */
  if (!C.zf) goto L_11e00a42;
  /* 11e00a09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a0d je 0x11e00a2f */
  if (C.zf) goto L_11e00a2f;
  /* 11e00a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00a12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e00a16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a19 jne 0x11e00a26 */
  if (!C.zf) goto L_11e00a26;
  /* 11e00a1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00a1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00a21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e00a24 jmp 0x11e00a2d */
  goto L_11e00a2d;
L_11e00a26:;
  /* 11e00a26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e00a2d:;
  /* 11e00a2d jmp 0x11e00a36 */
  goto L_11e00a36;
L_11e00a2f:;
  /* 11e00a2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e00a36:;
  /* 11e00a36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e00a38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11e00a3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e00a42:;
  /* 11e00a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00a45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e00a47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e00a4a:;
  /* 11e00a4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00a4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00a50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00a53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e00a56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e00a58 je 0x11e00a7e */
  if (C.zf) goto L_11e00a7e;
  /* 11e00a5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a5e je 0x11e00a6f */
  if (C.zf) goto L_11e00a6f;
  /* 11e00a60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00a63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11e00a66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00a69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00a6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11e00a6f:;
  /* 11e00a6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00a72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e00a74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00a77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00a7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e00a7c jmp 0x11e00a4a */
  goto L_11e00a4a;
L_11e00a7e:;
  /* 11e00a7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00a81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e00a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e00a86 je 0x11e00aa4 */
  if (C.zf) goto L_11e00aa4;
  /* 11e00a88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a8c jne 0x11e00aa9 */
  if (!C.zf) goto L_11e00aa9;
  /* 11e00a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00a91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e00a94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00a97 je 0x11e00aa4 */
  if (C.zf) goto L_11e00aa4;
  /* 11e00a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00a9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e00a9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00aa2 jne 0x11e00aa9 */
  if (!C.zf) goto L_11e00aa9;
L_11e00aa4:;
  /* 11e00aa4 jmp 0x11e00b54 */
  goto L_11e00b54;
L_11e00aa9:;
  /* 11e00aa9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00aad je 0x11e00b46 */
  if (C.zf) goto L_11e00b46;
  /* 11e00ab3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00ab7 je 0x11e00b0d */
  if (C.zf) goto L_11e00b0d;
  /* 11e00ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00abe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e00ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e00ac2 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e00ac8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e00acb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e00acd je 0x11e00af8 */
  if (C.zf) goto L_11e00af8;
  /* 11e00acf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00ad5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e00ad7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e00ad9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00adc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00adf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11e00ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00ae8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e00aeb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00aee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e00af0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00af3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00af6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e00af8:;
  /* 11e00af8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00afb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00afe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e00b00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e00b02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e00b0b jmp 0x11e00b39 */
  goto L_11e00b39;
L_11e00b0d:;
  /* 11e00b0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00b12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e00b14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e00b16 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e00b1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e00b1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e00b21 je 0x11e00b39 */
  if (C.zf) goto L_11e00b39;
  /* 11e00b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00b26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e00b2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e00b39:;
  /* 11e00b39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e00b46:;
  /* 11e00b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e00b4f jmp 0x11e009c1 */
  goto L_11e009c1;
L_11e00b54:;
  /* 11e00b54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00b58 je 0x11e00b69 */
  if (C.zf) goto L_11e00b69;
  /* 11e00b5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00b5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11e00b60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00b63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11e00b69:;
  /* 11e00b69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00b6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e00b74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e00b76 jmp 0x11e00963 */
  goto L_11e00963;
L_11e00b7b:;
  /* 11e00b7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00b7f je 0x11e00b93 */
  if (C.zf) goto L_11e00b93;
  /* 11e00b81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00b84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e00b8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00b8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11e00b93:;
  /* 11e00b93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e00b96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e00b98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00b9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e00b9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e00ba0 mov esp, ebp */
  ESP = (EBP);
  /* 11e00ba2 pop ebp */
  EBP = (pop32());
  /* 11e00ba3 ret  */
  ESPCHK(0x11e00780u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x11e00bb0 (537 bytes, 173 insns) */
void f_11e00bb0(void) {
  FTRACE(0x11e00bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e00bb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00bb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e00bbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11e00bc4 cmp dword ptr [0x11e307d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00bcb jne 0x11e00c0a */
  if (!C.zf) goto L_11e00c0a;
  /* 11e00bcd call dword ptr [0x11e33388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33388))), 0x11e00bd3u);
  /* 11e00bd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e00bd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00bda je 0x11e00be8 */
  if (C.zf) goto L_11e00be8;
  /* 11e00bdc mov dword ptr [0x11e307d8], 1 */
  w32((uint32_t)(0x11e307d8), (0x1u));
  /* 11e00be6 jmp 0x11e00c0a */
  goto L_11e00c0a;
L_11e00be8:;
  /* 11e00be8 call dword ptr [0x11e3338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3338c))), 0x11e00beeu);
  /* 11e00bee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e00bf1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00bf5 je 0x11e00c03 */
  if (C.zf) goto L_11e00c03;
  /* 11e00bf7 mov dword ptr [0x11e307d8], 2 */
  w32((uint32_t)(0x11e307d8), (0x2u));
  /* 11e00c01 jmp 0x11e00c0a */
  goto L_11e00c0a;
L_11e00c03:;
  /* 11e00c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00c05 jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00c0a:;
  /* 11e00c0a cmp dword ptr [0x11e307d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e307d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00c11 jne 0x11e00d0e */
  if (!C.zf) goto L_11e00d0e;
  /* 11e00c17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00c1b jne 0x11e00c33 */
  if (!C.zf) goto L_11e00c33;
  /* 11e00c1d call dword ptr [0x11e33388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33388))), 0x11e00c23u);
  /* 11e00c23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e00c26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00c2a jne 0x11e00c33 */
  if (!C.zf) goto L_11e00c33;
  /* 11e00c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00c2e jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00c33:;
  /* 11e00c33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e00c39:;
  /* 11e00c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e00c3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11e00c41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00c43 je 0x11e00c65 */
  if (C.zf) goto L_11e00c65;
  /* 11e00c45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00c48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e00c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00c51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e00c53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11e00c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00c58 jne 0x11e00c63 */
  if (!C.zf) goto L_11e00c63;
  /* 11e00c5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00c5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00c60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e00c63:;
  /* 11e00c63 jmp 0x11e00c39 */
  goto L_11e00c39;
L_11e00c65:;
  /* 11e00c65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00c68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00c6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e00c6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00c70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e00c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00c7e push edx */
  push32((uint32_t)(EDX));
  /* 11e00c7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00c82 push eax */
  push32((uint32_t)(EAX));
  /* 11e00c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00c87 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e00c8du);
  /* 11e00c8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e00c90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00c94 je 0x11e00cb4 */
  if (C.zf) goto L_11e00cb4;
  /* 11e00c96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11e00c98 push 0x11e2afc4 */
  push32((uint32_t)(0x11e2afc4u));
  /* 11e00c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00c9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00ca3 call 0x11dfbe50 */
  push32(0x11e00ca8u); f_11dfbe50();
  /* 11e00ca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00cab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e00cae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00cb2 jne 0x11e00cc5 */
  if (!C.zf) goto L_11e00cc5;
L_11e00cb4:;
  /* 11e00cb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00cb7 push edx */
  push32((uint32_t)(EDX));
  /* 11e00cb8 call dword ptr [0x11e33394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33394))), 0x11e00cbeu);
  /* 11e00cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00cc0 jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00cc5:;
  /* 11e00cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00cc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00ccc push eax */
  push32((uint32_t)(EAX));
  /* 11e00ccd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00cd4 push edx */
  push32((uint32_t)(EDX));
  /* 11e00cd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00cd8 push eax */
  push32((uint32_t)(EAX));
  /* 11e00cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00cdd call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e00ce3u);
  /* 11e00ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e00ce5 jne 0x11e00cfc */
  if (!C.zf) goto L_11e00cfc;
  /* 11e00ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00ce9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00cec push ecx */
  push32((uint32_t)(ECX));
  /* 11e00ced call 0x11dfc8e0 */
  push32(0x11e00cf2u); f_11dfc8e0();
  /* 11e00cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00cf5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11e00cfc:;
  /* 11e00cfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e00cff push edx */
  push32((uint32_t)(EDX));
  /* 11e00d00 call dword ptr [0x11e33394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33394))), 0x11e00d06u);
  /* 11e00d06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00d09 jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00d0e:;
  /* 11e00d0e cmp dword ptr [0x11e307d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e307d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00d15 jne 0x11e00dc3 */
  if (!C.zf) goto L_11e00dc3;
  /* 11e00d1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00d1f jne 0x11e00d37 */
  if (!C.zf) goto L_11e00d37;
  /* 11e00d21 call dword ptr [0x11e3338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3338c))), 0x11e00d27u);
  /* 11e00d27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e00d2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00d2e jne 0x11e00d37 */
  if (!C.zf) goto L_11e00d37;
  /* 11e00d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00d32 jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00d37:;
  /* 11e00d37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00d3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e00d3d:;
  /* 11e00d3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00d40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e00d43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00d45 je 0x11e00d65 */
  if (C.zf) goto L_11e00d65;
  /* 11e00d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e00d50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00d53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e00d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e00d58 jne 0x11e00d63 */
  if (!C.zf) goto L_11e00d63;
  /* 11e00d5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00d60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e00d63:;
  /* 11e00d63 jmp 0x11e00d3d */
  goto L_11e00d3d;
L_11e00d65:;
  /* 11e00d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00d68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00d6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00d6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e00d71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11e00d76 push 0x11e2afc4 */
  push32((uint32_t)(0x11e2afc4u));
  /* 11e00d7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e00d7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00d80 push edx */
  push32((uint32_t)(EDX));
  /* 11e00d81 call 0x11dfbe50 */
  push32(0x11e00d86u); f_11dfbe50();
  /* 11e00d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00d89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e00d8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00d90 jne 0x11e00da0 */
  if (!C.zf) goto L_11e00da0;
  /* 11e00d92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00d95 push eax */
  push32((uint32_t)(EAX));
  /* 11e00d96 call dword ptr [0x11e33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33398))), 0x11e00d9cu);
  /* 11e00d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00d9e jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00da0:;
  /* 11e00da0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e00da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00da4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00da7 push edx */
  push32((uint32_t)(EDX));
  /* 11e00da8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00dab push eax */
  push32((uint32_t)(EAX));
  /* 11e00dac call 0x11e06e90 */
  push32(0x11e00db1u); f_11e06e90();
  /* 11e00db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00db4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e00db7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00db8 call dword ptr [0x11e33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33398))), 0x11e00dbeu);
  /* 11e00dbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e00dc1 jmp 0x11e00dc5 */
  goto L_11e00dc5;
L_11e00dc3:;
  /* 11e00dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e00dc5:;
  /* 11e00dc5 mov esp, ebp */
  ESP = (EBP);
  /* 11e00dc7 pop ebp */
  EBP = (pop32());
  /* 11e00dc8 ret  */
  ESPCHK(0x11e00bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x11e00dd0 (77 bytes, 25 insns) */
void f_11e00dd0(void) {
  FTRACE(0x11e00dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e00dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00dd5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e00dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00ddc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00de0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e00de3 push eax */
  push32((uint32_t)(EAX));
  /* 11e00de4 call dword ptr [0x11e33380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33380))), 0x11e00deau);
  /* 11e00dea mov dword ptr [0x11e31fc8], eax */
  w32((uint32_t)(0x11e31fc8), (EAX));
  /* 11e00def cmp dword ptr [0x11e31fc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00df6 jne 0x11e00dfc */
  if (!C.zf) goto L_11e00dfc;
  /* 11e00df8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00dfa jmp 0x11e00e1b */
  goto L_11e00e1b;
L_11e00dfc:;
  /* 11e00dfc call 0x11e03b80 */
  push32(0x11e00e01u); f_11e03b80();
  /* 11e00e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e00e03 jne 0x11e00e16 */
  if (!C.zf) goto L_11e00e16;
  /* 11e00e05 mov ecx, dword ptr [0x11e31fc8] */
  ECX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e00e0b push ecx */
  push32((uint32_t)(ECX));
  /* 11e00e0c call dword ptr [0x11e33384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33384))), 0x11e00e12u);
  /* 11e00e12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e00e14 jmp 0x11e00e1b */
  goto L_11e00e1b;
L_11e00e16:;
  /* 11e00e16 mov eax, 1 */
  EAX = (0x1u);
L_11e00e1b:;
  /* 11e00e1b pop ebp */
  EBP = (pop32());
  /* 11e00e1c ret  */
  ESPCHK(0x11e00dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x11e00e20 (156 bytes, 48 insns) */
void f_11e00e20(void) {
  FTRACE(0x11e00e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00e21 mov ebp, esp */
  EBP = (ESP);
  /* 11e00e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00e26 mov eax, dword ptr [0x11e31fc4] */
  EAX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e00e2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e00e2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e00e35 jmp 0x11e00e40 */
  goto L_11e00e40;
L_11e00e37:;
  /* 11e00e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00e3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00e3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e00e40:;
  /* 11e00e40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e00e43 cmp edx, dword ptr [0x11e31fc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e31fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00e49 jge 0x11e00e96 */
  if ((C.sf==C.of)) goto L_11e00e96;
  /* 11e00e4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e00e50 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11e00e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00e58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e00e5b push ecx */
  push32((uint32_t)(ECX));
  /* 11e00e5c call dword ptr [0x11e33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33378))), 0x11e00e62u);
  /* 11e00e62 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e00e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00e69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00e6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e00e6f push eax */
  push32((uint32_t)(EAX));
  /* 11e00e70 call dword ptr [0x11e33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33378))), 0x11e00e76u);
  /* 11e00e76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00e79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e00e7c push edx */
  push32((uint32_t)(EDX));
  /* 11e00e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00e7f mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e00e84 push eax */
  push32((uint32_t)(EAX));
  /* 11e00e85 call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e00e8bu);
  /* 11e00e8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00e8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00e91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e00e94 jmp 0x11e00e37 */
  goto L_11e00e37;
L_11e00e96:;
  /* 11e00e96 mov edx, dword ptr [0x11e31fc4] */
  EDX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e00e9c push edx */
  push32((uint32_t)(EDX));
  /* 11e00e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00e9f mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e00ea4 push eax */
  push32((uint32_t)(EAX));
  /* 11e00ea5 call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e00eabu);
  /* 11e00eab mov ecx, dword ptr [0x11e31fc8] */
  ECX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e00eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00eb2 call dword ptr [0x11e33384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33384))), 0x11e00eb8u);
  /* 11e00eb8 mov esp, ebp */
  ESP = (EBP);
  /* 11e00eba pop ebp */
  EBP = (pop32());
  /* 11e00ebb ret  */
  ESPCHK(0x11e00e20u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11e00ec0 (73 bytes, 19 insns) */
void f_11e00ec0(void) {
  FTRACE(0x11e00ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11e00ec3 cmp dword ptr [0x11e30608], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00eca je 0x11e00ede */
  if (C.zf) goto L_11e00ede;
  /* 11e00ecc cmp dword ptr [0x11e30608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00ed3 jne 0x11e00f07 */
  if (!C.zf) goto L_11e00f07;
  /* 11e00ed5 cmp dword ptr [0x11e3060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00edc jne 0x11e00f07 */
  if (!C.zf) goto L_11e00f07;
L_11e00ede:;
  /* 11e00ede push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11e00ee3 call 0x11e00f10 */
  push32(0x11e00ee8u); f_11e00f10();
  /* 11e00ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00eeb cmp dword ptr [0x11e307dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00ef2 je 0x11e00efa */
  if (C.zf) goto L_11e00efa;
  /* 11e00ef4 call dword ptr [0x11e307dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e307dc))), 0x11e00efau);
L_11e00efa:;
  /* 11e00efa push 0xff */
  push32((uint32_t)(0xffu));
  /* 11e00eff call 0x11e00f10 */
  push32(0x11e00f04u); f_11e00f10();
  /* 11e00f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e00f07:;
  /* 11e00f07 pop ebp */
  EBP = (pop32());
  /* 11e00f08 ret  */
  ESPCHK(0x11e00ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x11e00f10 (447 bytes, 131 insns) */
void f_11e00f10(void) {
  FTRACE(0x11e00f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00f11 mov ebp, esp */
  EBP = (ESP);
  /* 11e00f13 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00f19 push ebx */
  push32((uint32_t)(EBX));
  /* 11e00f1a push esi */
  push32((uint32_t)(ESI));
  /* 11e00f1b push edi */
  push32((uint32_t)(EDI));
  /* 11e00f1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e00f23 jmp 0x11e00f2e */
  goto L_11e00f2e;
L_11e00f25:;
  /* 11e00f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00f28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e00f2e:;
  /* 11e00f2e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f32 jae 0x11e00f47 */
  if (!C.cf) goto L_11e00f47;
  /* 11e00f34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00f3a cmp edx, dword ptr [ecx*8 + 0x11e2df68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11e2df68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f41 jne 0x11e00f45 */
  if (!C.zf) goto L_11e00f45;
  /* 11e00f43 jmp 0x11e00f47 */
  goto L_11e00f47;
L_11e00f45:;
  /* 11e00f45 jmp 0x11e00f25 */
  goto L_11e00f25;
L_11e00f47:;
  /* 11e00f47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00f4d cmp ecx, dword ptr [eax*8 + 0x11e2df68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11e2df68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f54 jne 0x11e010c8 */
  if (!C.zf) goto L_11e010c8;
  /* 11e00f5a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f61 je 0x11e00f84 */
  if (C.zf) goto L_11e00f84;
  /* 11e00f63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00f66 mov eax, dword ptr [edx*8 + 0x11e2df6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11e2df6c)));
  /* 11e00f6d push eax */
  push32((uint32_t)(EAX));
  /* 11e00f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e00f76 call 0x11dfaa10 */
  push32(0x11e00f7bu); f_11dfaa10();
  /* 11e00f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f81 jne 0x11e00f84 */
  if (!C.zf) goto L_11e00f84;
  /* 11e00f83 int3  */
  x86_unimpl("int3 @ 0x11e00f83");
L_11e00f84:;
  /* 11e00f84 cmp dword ptr [0x11e30608], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f8b je 0x11e00f9f */
  if (C.zf) goto L_11e00f9f;
  /* 11e00f8d cmp dword ptr [0x11e30608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f94 jne 0x11e00fd8 */
  if (!C.zf) goto L_11e00fd8;
  /* 11e00f96 cmp dword ptr [0x11e3060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00f9d jne 0x11e00fd8 */
  if (!C.zf) goto L_11e00fd8;
L_11e00f9f:;
  /* 11e00f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00fa1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11e00fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00fa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00fa8 mov eax, dword ptr [edx*8 + 0x11e2df6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11e2df6c)));
  /* 11e00faf push eax */
  push32((uint32_t)(EAX));
  /* 11e00fb0 call 0x11e01410 */
  push32(0x11e00fb5u); f_11e01410();
  /* 11e00fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11e00fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e00fbc mov edx, dword ptr [ecx*8 + 0x11e2df6c] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11e2df6c)));
  /* 11e00fc3 push edx */
  push32((uint32_t)(EDX));
  /* 11e00fc4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e00fc6 call dword ptr [0x11e333c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c8))), 0x11e00fccu);
  /* 11e00fcc push eax */
  push32((uint32_t)(EAX));
  /* 11e00fcd call dword ptr [0x11e333cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333cc))), 0x11e00fd3u);
  /* 11e00fd3 jmp 0x11e010c8 */
  goto L_11e010c8;
L_11e00fd8:;
  /* 11e00fd8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00fdf je 0x11e010c8 */
  if (C.zf) goto L_11e010c8;
  /* 11e00fe5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11e00fea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11e00ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11e00ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e00ff3 call dword ptr [0x11e333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e4))), 0x11e00ff9u);
  /* 11e00ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e00ffb jne 0x11e01011 */
  if (!C.zf) goto L_11e01011;
  /* 11e00ffd push 0x11e2a65c */
  push32((uint32_t)(0x11e2a65cu));
  /* 11e01002 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11e01008 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01009 call 0x11e01590 */
  push32(0x11e0100eu); f_11e01590();
  /* 11e0100e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01011:;
  /* 11e01011 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11e01017 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0101a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0101d push eax */
  push32((uint32_t)(EAX));
  /* 11e0101e call 0x11e01410 */
  push32(0x11e01023u); f_11e01410();
  /* 11e01023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01026 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01029 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0102c jbe 0x11e0105a */
  if ((C.cf||C.zf)) goto L_11e0105a;
  /* 11e0102e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11e01034 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01035 call 0x11e01410 */
  push32(0x11e0103au); f_11e01410();
  /* 11e0103a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0103d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01040 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11e01044 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01047 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e01049 push 0x11e2a658 */
  push32((uint32_t)(0x11e2a658u));
  /* 11e0104e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01051 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01052 call 0x11e01e00 */
  push32(0x11e01057u); f_11e01e00();
  /* 11e01057 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0105a:;
  /* 11e0105a push 0x11e2b280 */
  push32((uint32_t)(0x11e2b280u));
  /* 11e0105f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11e01065 push edx */
  push32((uint32_t)(EDX));
  /* 11e01066 call 0x11e01590 */
  push32(0x11e0106bu); f_11e01590();
  /* 11e0106b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0106e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01071 push eax */
  push32((uint32_t)(EAX));
  /* 11e01072 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11e01078 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01079 call 0x11e015a0 */
  push32(0x11e0107eu); f_11e015a0();
  /* 11e0107e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01081 push 0x11e2a5d0 */
  push32((uint32_t)(0x11e2a5d0u));
  /* 11e01086 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11e0108c push edx */
  push32((uint32_t)(EDX));
  /* 11e0108d call 0x11e015a0 */
  push32(0x11e01092u); f_11e015a0();
  /* 11e01092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01098 mov ecx, dword ptr [eax*8 + 0x11e2df6c] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11e2df6c)));
  /* 11e0109f push ecx */
  push32((uint32_t)(ECX));
  /* 11e010a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11e010a6 push edx */
  push32((uint32_t)(EDX));
  /* 11e010a7 call 0x11e015a0 */
  push32(0x11e010acu); f_11e015a0();
  /* 11e010ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e010af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11e010b4 push 0x11e2b258 */
  push32((uint32_t)(0x11e2b258u));
  /* 11e010b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11e010bf push eax */
  push32((uint32_t)(EAX));
  /* 11e010c0 call 0x11e01d40 */
  push32(0x11e010c5u); f_11e01d40();
  /* 11e010c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e010c8:;
  /* 11e010c8 pop edi */
  EDI = (pop32());
  /* 11e010c9 pop esi */
  ESI = (pop32());
  /* 11e010ca pop ebx */
  EBX = (pop32());
  /* 11e010cb mov esp, ebp */
  ESP = (EBP);
  /* 11e010cd pop ebp */
  EBP = (pop32());
  /* 11e010ce ret  */
  ESPCHK(0x11e00f10u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11e010d0 (80 bytes, 27 insns) */
void f_11e010d0(void) {
  FTRACE(0x11e010d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e010d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e010d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e010d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e010d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e010db jmp 0x11e010e6 */
  goto L_11e010e6;
L_11e010dd:;
  /* 11e010dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e010e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e010e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e010e6:;
  /* 11e010e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e010ea jae 0x11e010ff */
  if (!C.cf) goto L_11e010ff;
  /* 11e010ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e010ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e010f2 cmp edx, dword ptr [ecx*8 + 0x11e2df68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11e2df68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e010f9 jne 0x11e010fd */
  if (!C.zf) goto L_11e010fd;
  /* 11e010fb jmp 0x11e010ff */
  goto L_11e010ff;
L_11e010fd:;
  /* 11e010fd jmp 0x11e010dd */
  goto L_11e010dd;
L_11e010ff:;
  /* 11e010ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01105 cmp ecx, dword ptr [eax*8 + 0x11e2df68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11e2df68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0110c jne 0x11e0111a */
  if (!C.zf) goto L_11e0111a;
  /* 11e0110e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01111 mov eax, dword ptr [edx*8 + 0x11e2df6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11e2df6c)));
  /* 11e01118 jmp 0x11e0111c */
  goto L_11e0111c;
L_11e0111a:;
  /* 11e0111a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0111c:;
  /* 11e0111c mov esp, ebp */
  ESP = (EBP);
  /* 11e0111e pop ebp */
  EBP = (pop32());
  /* 11e0111f ret  */
  ESPCHK(0x11e010d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11e01120 (66 bytes, 28 insns) */
void f_11e01120(void) {
  FTRACE(0x11e01120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01120 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01121 mov ebp, esp */
  EBP = (ESP);
  /* 11e01123 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01127 jne 0x11e01147 */
  if (!C.zf) goto L_11e01147;
  /* 11e01129 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0112d jge 0x11e01147 */
  if ((C.sf==C.of)) goto L_11e01147;
  /* 11e0112f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01131 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01134 push eax */
  push32((uint32_t)(EAX));
  /* 11e01135 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01138 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0113c push edx */
  push32((uint32_t)(EDX));
  /* 11e0113d call 0x11e01170 */
  push32(0x11e01142u); f_11e01170();
  /* 11e01142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01145 jmp 0x11e0115d */
  goto L_11e0115d;
L_11e01147:;
  /* 11e01147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e01149 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0114c push eax */
  push32((uint32_t)(EAX));
  /* 11e0114d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01150 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01154 push edx */
  push32((uint32_t)(EDX));
  /* 11e01155 call 0x11e01170 */
  push32(0x11e0115au); f_11e01170();
  /* 11e0115a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0115d:;
  /* 11e0115d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01160 pop ebp */
  EBP = (pop32());
  /* 11e01161 ret  */
  ESPCHK(0x11e01120u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11e01170 (194 bytes, 71 insns) */
void f_11e01170(void) {
  FTRACE(0x11e01170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01170 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01171 mov ebp, esp */
  EBP = (ESP);
  /* 11e01173 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01176 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0117c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01180 je 0x11e01199 */
  if (C.zf) goto L_11e01199;
  /* 11e01182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01185 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11e01188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0118b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0118e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e01191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01194 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e01196 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e01199:;
  /* 11e01199 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0119c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e0119f:;
  /* 11e0119f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e011a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e011a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e011a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e011aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e011ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e011af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e011b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e011b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e011b9 jbe 0x11e011d1 */
  if ((C.cf||C.zf)) goto L_11e011d1;
  /* 11e011bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e011be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e011c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e011c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e011cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e011cf jmp 0x11e011e5 */
  goto L_11e011e5;
L_11e011d1:;
  /* 11e011d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e011d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e011d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e011dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e011e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e011e5:;
  /* 11e011e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e011e9 ja 0x11e0119f */
  if ((!C.cf&&!C.zf)) goto L_11e0119f;
  /* 11e011eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e011f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e011f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e011fa:;
  /* 11e011fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e011fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e011ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11e01202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01208 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0120a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0120c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0120f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11e01212 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e01214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01217 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0121a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0121d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01220 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01223 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e01226 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01229 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0122c jb 0x11e011fa */
  if (C.cf) goto L_11e011fa;
  /* 11e0122e mov esp, ebp */
  ESP = (EBP);
  /* 11e01230 pop ebp */
  EBP = (pop32());
  /* 11e01231 ret  */
  ESPCHK(0x11e01170u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11e01240 (63 bytes, 24 insns) */
void f_11e01240(void) {
  FTRACE(0x11e01240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01240 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01241 mov ebp, esp */
  EBP = (ESP);
  /* 11e01243 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01244 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01248 jne 0x11e01259 */
  if (!C.zf) goto L_11e01259;
  /* 11e0124a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0124e jge 0x11e01259 */
  if ((C.sf==C.of)) goto L_11e01259;
  /* 11e01250 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e01257 jmp 0x11e01260 */
  goto L_11e01260;
L_11e01259:;
  /* 11e01259 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e01260:;
  /* 11e01260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01263 push eax */
  push32((uint32_t)(EAX));
  /* 11e01264 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01267 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01268 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0126b push edx */
  push32((uint32_t)(EDX));
  /* 11e0126c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0126f push eax */
  push32((uint32_t)(EAX));
  /* 11e01270 call 0x11e01170 */
  push32(0x11e01275u); f_11e01170();
  /* 11e01275 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0127b mov esp, ebp */
  ESP = (EBP);
  /* 11e0127d pop ebp */
  EBP = (pop32());
  /* 11e0127e ret  */
  ESPCHK(0x11e01240u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11e01280 (30 bytes, 14 insns) */
void f_11e01280(void) {
  FTRACE(0x11e01280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01280 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01281 mov ebp, esp */
  EBP = (ESP);
  /* 11e01283 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e01285 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01288 push eax */
  push32((uint32_t)(EAX));
  /* 11e01289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0128c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0128d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01290 push edx */
  push32((uint32_t)(EDX));
  /* 11e01291 call 0x11e01170 */
  push32(0x11e01296u); f_11e01170();
  /* 11e01296 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0129c pop ebp */
  EBP = (pop32());
  /* 11e0129d ret  */
  ESPCHK(0x11e01280u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11e012a0 (72 bytes, 28 insns) */
void f_11e012a0(void) {
  FTRACE(0x11e012a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e012a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e012a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e012a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e012a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e012a8 jne 0x11e012c1 */
  if (!C.zf) goto L_11e012c1;
  /* 11e012aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e012ae jg 0x11e012c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e012c1;
  /* 11e012b0 jl 0x11e012b8 */
  if ((C.sf!=C.of)) goto L_11e012b8;
  /* 11e012b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e012b6 jae 0x11e012c1 */
  if (!C.cf) goto L_11e012c1;
L_11e012b8:;
  /* 11e012b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e012bf jmp 0x11e012c8 */
  goto L_11e012c8;
L_11e012c1:;
  /* 11e012c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e012c8:;
  /* 11e012c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e012cb push eax */
  push32((uint32_t)(EAX));
  /* 11e012cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e012cf push ecx */
  push32((uint32_t)(ECX));
  /* 11e012d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e012d3 push edx */
  push32((uint32_t)(EDX));
  /* 11e012d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e012d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e012d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e012db push ecx */
  push32((uint32_t)(ECX));
  /* 11e012dc call 0x11e012f0 */
  push32(0x11e012e1u); f_11e012f0();
  /* 11e012e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e012e4 mov esp, ebp */
  ESP = (EBP);
  /* 11e012e6 pop ebp */
  EBP = (pop32());
  /* 11e012e7 ret  */
  ESPCHK(0x11e012a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11e012f0 (242 bytes, 91 insns) */
void f_11e012f0(void) {
  FTRACE(0x11e012f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e012f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e012f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e012f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e012f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e012f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e012fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01300 je 0x11e01324 */
  if (C.zf) goto L_11e01324;
  /* 11e01302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01305 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11e01308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0130b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0130e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e01311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01314 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e01316 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01319 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0131c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0131e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e01321 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11e01324:;
  /* 11e01324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01327 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e0132a:;
  /* 11e0132a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0132d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0132f push ecx */
  push32((uint32_t)(ECX));
  /* 11e01330 push eax */
  push32((uint32_t)(EAX));
  /* 11e01331 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01334 push edx */
  push32((uint32_t)(EDX));
  /* 11e01335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01338 push eax */
  push32((uint32_t)(EAX));
  /* 11e01339 call 0x11e06600 */
  push32(0x11e0133eu); f_11e06600();
  /* 11e0133e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01341 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e01344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e01346 push edx */
  push32((uint32_t)(EDX));
  /* 11e01347 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0134b push eax */
  push32((uint32_t)(EAX));
  /* 11e0134c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0134f push ecx */
  push32((uint32_t)(ECX));
  /* 11e01350 call 0x11e06590 */
  push32(0x11e01355u); f_11e06590();
  /* 11e01355 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e01358 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e0135b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0135f jbe 0x11e01377 */
  if ((C.cf||C.zf)) goto L_11e01377;
  /* 11e01361 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01364 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0136a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0136c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0136f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01372 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e01375 jmp 0x11e0138b */
  goto L_11e0138b;
L_11e01377:;
  /* 11e01377 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0137a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0137d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01380 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e01382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01388 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0138b:;
  /* 11e0138b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0138f ja 0x11e0132a */
  if ((!C.cf&&!C.zf)) goto L_11e0132a;
  /* 11e01391 jb 0x11e01399 */
  if (C.cf) goto L_11e01399;
  /* 11e01393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01397 ja 0x11e0132a */
  if ((!C.cf&&!C.zf)) goto L_11e0132a;
L_11e01399:;
  /* 11e01399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0139c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e0139f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e013a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e013a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e013a8:;
  /* 11e013a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e013ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e013ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11e013b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e013b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e013b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e013b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e013ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e013bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11e013c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e013c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e013c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e013c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e013cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e013ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e013d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e013d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e013d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e013da jb 0x11e013a8 */
  if (C.cf) goto L_11e013a8;
  /* 11e013dc mov esp, ebp */
  ESP = (EBP);
  /* 11e013de pop ebp */
  EBP = (pop32());
  /* 11e013df ret 0x14 */
  ESPCHK(0x11e012f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11e013f0 (31 bytes, 15 insns) */
void f_11e013f0(void) {
  FTRACE(0x11e013f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e013f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e013f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e013f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e013f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e013f8 push eax */
  push32((uint32_t)(EAX));
  /* 11e013f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e013fc push ecx */
  push32((uint32_t)(ECX));
  /* 11e013fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01400 push edx */
  push32((uint32_t)(EDX));
  /* 11e01401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01404 push eax */
  push32((uint32_t)(EAX));
  /* 11e01405 call 0x11e012f0 */
  push32(0x11e0140au); f_11e012f0();
  /* 11e0140a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0140d pop ebp */
  EBP = (pop32());
  /* 11e0140e ret  */
  ESPCHK(0x11e013f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11e01410 (123 bytes, 44 insns) */
void f_11e01410(void) {
  FTRACE(0x11e01410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01410 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e01414 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e0141a je 0x11e01430 */
  if (C.zf) goto L_11e01430;
L_11e0141c:;
  /* 11e0141c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e0141e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e0141f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e01421 je 0x11e01463 */
  if (C.zf) goto L_11e01463;
  /* 11e01423 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e01429 jne 0x11e0141c */
  if (!C.zf) goto L_11e0141c;
  /* 11e0142b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e01430:;
  /* 11e01430 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e01432 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e01437 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01439 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0143c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0143e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01441 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e01446 je 0x11e01430 */
  if (C.zf) goto L_11e01430;
  /* 11e01448 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e0144b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e0144d je 0x11e01481 */
  if (C.zf) goto L_11e01481;
  /* 11e0144f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e01451 je 0x11e01477 */
  if (C.zf) goto L_11e01477;
  /* 11e01453 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e01458 je 0x11e0146d */
  if (C.zf) goto L_11e0146d;
  /* 11e0145a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e0145f je 0x11e01463 */
  if (C.zf) goto L_11e01463;
  /* 11e01461 jmp 0x11e01430 */
  goto L_11e01430;
L_11e01463:;
  /* 11e01463 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11e01466 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e0146a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0146c ret  */
  ESPCHK(0x11e01410u, _esp0);
  ESP += 4; return;
L_11e0146d:;
  /* 11e0146d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11e01470 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e01474 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01476 ret  */
  ESPCHK(0x11e01410u, _esp0);
  ESP += 4; return;
L_11e01477:;
  /* 11e01477 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11e0147a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e0147e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01480 ret  */
  ESPCHK(0x11e01410u, _esp0);
  ESP += 4; return;
L_11e01481:;
  /* 11e01481 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11e01484 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e01488 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0148a ret  */
  ESPCHK(0x11e01410u, _esp0);
  ESP += 4; return;
}

/* FUN_10011490 @ 0x11e01490 (249 bytes, 93 insns) */
void f_11e01490(void) {
  FTRACE(0x11e01490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01490 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01491 mov ebp, esp */
  EBP = (ESP);
  /* 11e01493 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01496 push ebx */
  push32((uint32_t)(EBX));
  /* 11e01497 push esi */
  push32((uint32_t)(ESI));
  /* 11e01498 push edi */
  push32((uint32_t)(EDI));
  /* 11e01499 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e0149c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e0149f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11e014a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11e014a5:;
  /* 11e014a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e014a9 jne 0x11e014c9 */
  if (!C.zf) goto L_11e014c9;
  /* 11e014ab push 0x11e2a454 */
  push32((uint32_t)(0x11e2a454u));
  /* 11e014b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e014b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11e014b4 push 0x11e2a448 */
  push32((uint32_t)(0x11e2a448u));
  /* 11e014b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e014bb call 0x11dfaa10 */
  push32(0x11e014c0u); f_11dfaa10();
  /* 11e014c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e014c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e014c6 jne 0x11e014c9 */
  if (!C.zf) goto L_11e014c9;
  /* 11e014c8 int3  */
  x86_unimpl("int3 @ 0x11e014c8");
L_11e014c9:;
  /* 11e014c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e014cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e014cd jne 0x11e014a5 */
  if (!C.zf) goto L_11e014a5;
L_11e014cf:;
  /* 11e014cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e014d3 jne 0x11e014f3 */
  if (!C.zf) goto L_11e014f3;
  /* 11e014d5 push 0x11e2a438 */
  push32((uint32_t)(0x11e2a438u));
  /* 11e014da push 0 */
  push32((uint32_t)(0x0u));
  /* 11e014dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11e014de push 0x11e2a448 */
  push32((uint32_t)(0x11e2a448u));
  /* 11e014e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e014e5 call 0x11dfaa10 */
  push32(0x11e014eau); f_11dfaa10();
  /* 11e014ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e014ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e014f0 jne 0x11e014f3 */
  if (!C.zf) goto L_11e014f3;
  /* 11e014f2 int3  */
  x86_unimpl("int3 @ 0x11e014f2");
L_11e014f3:;
  /* 11e014f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e014f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e014f7 jne 0x11e014cf */
  if (!C.zf) goto L_11e014cf;
  /* 11e014f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e014fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11e01503 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01509 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e0150c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0150f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01512 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e01514 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01517 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0151a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e0151d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e01520 push edx */
  push32((uint32_t)(EDX));
  /* 11e01521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01524 push eax */
  push32((uint32_t)(EAX));
  /* 11e01525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01528 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01529 call 0x11dff2e0 */
  push32(0x11e0152eu); f_11dff2e0();
  /* 11e0152e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01531 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e01534 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01537 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0153a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0153d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01540 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e01543 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01546 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0154a jl 0x11e0156e */
  if ((C.sf!=C.of)) goto L_11e0156e;
  /* 11e0154c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0154f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e01551 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11e01554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e01556 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0155c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e0155f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01562 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e01564 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01567 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0156a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0156c jmp 0x11e0157f */
  goto L_11e0157f;
L_11e0156e:;
  /* 11e0156e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01571 push eax */
  push32((uint32_t)(EAX));
  /* 11e01572 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e01574 call 0x11dff060 */
  push32(0x11e01579u); f_11dff060();
  /* 11e01579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0157c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11e0157f:;
  /* 11e0157f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e01582 pop edi */
  EDI = (pop32());
  /* 11e01583 pop esi */
  ESI = (pop32());
  /* 11e01584 pop ebx */
  EBX = (pop32());
  /* 11e01585 mov esp, ebp */
  ESP = (EBP);
  /* 11e01587 pop ebp */
  EBP = (pop32());
  /* 11e01588 ret  */
  ESPCHK(0x11e01490u, _esp0);
  ESP += 4; return;
}

/* FUN_10011590 @ 0x11e01590 (7 bytes, 3 insns) */
void f_11e01590(void) {
  FTRACE(0x11e01590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01590 push edi */
  push32((uint32_t)(EDI));
  /* 11e01591 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e01595 jmp 0x11e01601 */
  jmp_ind(0x11e01601u); return;
}

/* FUN_100115a0 @ 0x11e015a0 (224 bytes, 84 insns) */
void f_11e015a0(void) {
  FTRACE(0x11e015a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e015a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e015a4 push edi */
  push32((uint32_t)(EDI));
  /* 11e015a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e015ab je 0x11e015bc */
  if (C.zf) goto L_11e015bc;
L_11e015ad:;
  /* 11e015ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e015af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e015b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e015b2 je 0x11e015ef */
  if (C.zf) goto L_11e015ef;
  /* 11e015b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e015ba jne 0x11e015ad */
  if (!C.zf) goto L_11e015ad;
L_11e015bc:;
  /* 11e015bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e015be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e015c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e015c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e015c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e015ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e015cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e015d2 je 0x11e015bc */
  if (C.zf) goto L_11e015bc;
  /* 11e015d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e015d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e015d9 je 0x11e015fe */
  if (C.zf) goto L_11e015fe;
  /* 11e015db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e015dd je 0x11e015f9 */
  if (C.zf) goto L_11e015f9;
  /* 11e015df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e015e4 je 0x11e015f4 */
  if (C.zf) goto L_11e015f4;
  /* 11e015e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e015eb je 0x11e015ef */
  if (C.zf) goto L_11e015ef;
  /* 11e015ed jmp 0x11e015bc */
  goto L_11e015bc;
L_11e015ef:;
  /* 11e015ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11e015f2 jmp 0x11e01601 */
  goto L_11e01601;
L_11e015f4:;
  /* 11e015f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11e015f7 jmp 0x11e01601 */
  goto L_11e01601;
L_11e015f9:;
  /* 11e015f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11e015fc jmp 0x11e01601 */
  goto L_11e01601;
L_11e015fe:;
  /* 11e015fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11e01601:;
  /* 11e01601 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e01605 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e0160b je 0x11e01626 */
  if (C.zf) goto L_11e01626;
L_11e0160d:;
  /* 11e0160d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0160f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e01610 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e01612 je 0x11e01678 */
  if (C.zf) goto L_11e01678;
  /* 11e01614 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11e01616 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e01617 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e0161d jne 0x11e0160d */
  if (!C.zf) goto L_11e0160d;
  /* 11e0161f jmp 0x11e01626 */
  goto L_11e01626;
L_11e01621:;
  /* 11e01621 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e01623 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e01626:;
  /* 11e01626 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e0162b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e0162d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0162f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e01632 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01634 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01636 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01639 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e0163e je 0x11e01621 */
  if (C.zf) goto L_11e01621;
  /* 11e01640 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e01642 je 0x11e01678 */
  if (C.zf) goto L_11e01678;
  /* 11e01644 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11e01646 je 0x11e0166f */
  if (C.zf) goto L_11e0166f;
  /* 11e01648 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e0164e je 0x11e01662 */
  if (C.zf) goto L_11e01662;
  /* 11e01650 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e01656 je 0x11e0165a */
  if (C.zf) goto L_11e0165a;
  /* 11e01658 jmp 0x11e01621 */
  goto L_11e01621;
L_11e0165a:;
  /* 11e0165a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e0165c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e01660 pop edi */
  EDI = (pop32());
  /* 11e01661 ret  */
  ESPCHK(0x11e015a0u, _esp0);
  ESP += 4; return;
L_11e01662:;
  /* 11e01662 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11e01665 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e01669 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11e0166d pop edi */
  EDI = (pop32());
  /* 11e0166e ret  */
  ESPCHK(0x11e015a0u, _esp0);
  ESP += 4; return;
L_11e0166f:;
  /* 11e0166f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11e01672 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e01676 pop edi */
  EDI = (pop32());
  /* 11e01677 ret  */
  ESPCHK(0x11e015a0u, _esp0);
  ESP += 4; return;
L_11e01678:;
  /* 11e01678 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11e0167a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e0167e pop edi */
  EDI = (pop32());
  /* 11e0167f ret  */
  ESPCHK(0x11e015a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x11e01680 (243 bytes, 91 insns) */
void f_11e01680(void) {
  FTRACE(0x11e01680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01680 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01681 mov ebp, esp */
  EBP = (ESP);
  /* 11e01683 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01686 push ebx */
  push32((uint32_t)(EBX));
  /* 11e01687 push esi */
  push32((uint32_t)(ESI));
  /* 11e01688 push edi */
  push32((uint32_t)(EDI));
  /* 11e01689 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e0168c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e0168f:;
  /* 11e0168f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01693 jne 0x11e016b3 */
  if (!C.zf) goto L_11e016b3;
  /* 11e01695 push 0x11e2a454 */
  push32((uint32_t)(0x11e2a454u));
  /* 11e0169a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0169c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11e0169e push 0x11e2b29c */
  push32((uint32_t)(0x11e2b29cu));
  /* 11e016a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e016a5 call 0x11dfaa10 */
  push32(0x11e016aau); f_11dfaa10();
  /* 11e016aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e016ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e016b0 jne 0x11e016b3 */
  if (!C.zf) goto L_11e016b3;
  /* 11e016b2 int3  */
  x86_unimpl("int3 @ 0x11e016b2");
L_11e016b3:;
  /* 11e016b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e016b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e016b7 jne 0x11e0168f */
  if (!C.zf) goto L_11e0168f;
L_11e016b9:;
  /* 11e016b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e016bd jne 0x11e016dd */
  if (!C.zf) goto L_11e016dd;
  /* 11e016bf push 0x11e2a438 */
  push32((uint32_t)(0x11e2a438u));
  /* 11e016c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e016c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11e016c8 push 0x11e2b29c */
  push32((uint32_t)(0x11e2b29cu));
  /* 11e016cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e016cf call 0x11dfaa10 */
  push32(0x11e016d4u); f_11dfaa10();
  /* 11e016d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e016d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e016da jne 0x11e016dd */
  if (!C.zf) goto L_11e016dd;
  /* 11e016dc int3  */
  x86_unimpl("int3 @ 0x11e016dc");
L_11e016dd:;
  /* 11e016dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e016df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e016e1 jne 0x11e016b9 */
  if (!C.zf) goto L_11e016b9;
  /* 11e016e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e016e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11e016ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e016f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e016f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e016f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e016f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e016fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e016fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01701 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01704 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e01707 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0170a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0170b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0170e push edx */
  push32((uint32_t)(EDX));
  /* 11e0170f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01712 push eax */
  push32((uint32_t)(EAX));
  /* 11e01713 call 0x11dff2e0 */
  push32(0x11e01718u); f_11dff2e0();
  /* 11e01718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0171b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e0171e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01721 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e01724 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01727 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0172a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e0172d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01730 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01734 jl 0x11e01758 */
  if ((C.sf!=C.of)) goto L_11e01758;
  /* 11e01736 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01739 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0173b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e0173e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e01740 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e01746 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e01749 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0174c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0174e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01751 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e01754 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e01756 jmp 0x11e01769 */
  goto L_11e01769;
L_11e01758:;
  /* 11e01758 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0175b push edx */
  push32((uint32_t)(EDX));
  /* 11e0175c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0175e call 0x11dff060 */
  push32(0x11e01763u); f_11dff060();
  /* 11e01763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01766 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11e01769:;
  /* 11e01769 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0176c pop edi */
  EDI = (pop32());
  /* 11e0176d pop esi */
  ESI = (pop32());
  /* 11e0176e pop ebx */
  EBX = (pop32());
  /* 11e0176f mov esp, ebp */
  ESP = (EBP);
  /* 11e01771 pop ebp */
  EBP = (pop32());
  /* 11e01772 ret  */
  ESPCHK(0x11e01680u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x11e01780 (47 bytes, 17 insns) */
void f_11e01780(void) {
  FTRACE(0x11e01780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01780 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01781 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01786 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11e0178a jb 0x11e017a0 */
  if (C.cf) goto L_11e017a0;
L_11e0178c:;
  /* 11e0178c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01792 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01797 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11e01799 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0179e jae 0x11e0178c */
  if (!C.cf) goto L_11e0178c;
L_11e017a0:;
  /* 11e017a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e017a2 mov eax, esp */
  EAX = (ESP);
  /* 11e017a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11e017a6 mov esp, ecx */
  ESP = (ECX);
  /* 11e017a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e017aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e017ad push eax */
  push32((uint32_t)(EAX));
  /* 11e017ae ret  */
  ESPCHK(0x11e01780u, _esp0);
  ESP += 4; return;
}

/* FUN_100117b0 @ 0x11e017b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11e017b0(void) {
  FTRACE(0x11e017b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e017b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e017b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e017b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e017b6 push esi */
  push32((uint32_t)(ESI));
  /* 11e017b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017bb je 0x11e017c3 */
  if (C.zf) goto L_11e017c3;
  /* 11e017bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017c1 jne 0x11e017c8 */
  if (!C.zf) goto L_11e017c8;
L_11e017c3:;
  /* 11e017c3 jmp 0x11e01998 */
  goto L_11e01998;
L_11e017c8:;
  /* 11e017c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017cc je 0x11e017e4 */
  if (C.zf) goto L_11e017e4;
  /* 11e017ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017d2 je 0x11e017e4 */
  if (C.zf) goto L_11e017e4;
  /* 11e017d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017d8 je 0x11e017e4 */
  if (C.zf) goto L_11e017e4;
  /* 11e017da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017de jne 0x11e018c1 */
  if (!C.zf) goto L_11e018c1;
L_11e017e4:;
  /* 11e017e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e017e6 call 0x11dfbd50 */
  push32(0x11e017ebu); f_11dfbd50();
  /* 11e017eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e017ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017f2 je 0x11e017fa */
  if (C.zf) goto L_11e017fa;
  /* 11e017f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e017f8 jne 0x11e0183f */
  if (!C.zf) goto L_11e0183f;
L_11e017fa:;
  /* 11e017fa cmp dword ptr [0x11e307f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01801 jne 0x11e0183f */
  if (!C.zf) goto L_11e0183f;
  /* 11e01803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01805 push 0x11e019e0 */
  push32((uint32_t)(0x11e019e0u));
  /* 11e0180a call dword ptr [0x11e33374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33374))), 0x11e01810u);
  /* 11e01810 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01813 jne 0x11e01821 */
  if (!C.zf) goto L_11e01821;
  /* 11e01815 mov dword ptr [0x11e307f0], 1 */
  w32((uint32_t)(0x11e307f0), (0x1u));
  /* 11e0181f jmp 0x11e0183f */
  goto L_11e0183f;
L_11e01821:;
  /* 11e01821 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e01827u);
  /* 11e01827 mov esi, eax */
  ESI = (EAX);
  /* 11e01829 call 0x11e07280 */
  push32(0x11e0182eu); f_11e07280();
  /* 11e0182e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11e01830 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01832 call 0x11dfbdf0 */
  push32(0x11e01837u); f_11dfbdf0();
  /* 11e01837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0183a jmp 0x11e01998 */
  goto L_11e01998;
L_11e0183f:;
  /* 11e0183f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01842 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e01845 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e01848 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0184b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0184e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01852 ja 0x11e018b2 */
  if ((!C.cf&&!C.zf)) goto L_11e018b2;
  /* 11e01854 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e01857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e01859 mov dl, byte ptr [eax + 0x11e019bf] */
  DL = (r8((uint32_t)(EAX + 0x11e019bf)));
  /* 11e0185f jmp dword ptr [edx*4 + 0x11e019ab] */
  switch (EDX) {
    case 0: goto L_11e01866;
    case 1: goto L_11e018a0;
    case 2: goto L_11e0187a;
    case 3: goto L_11e0188d;
    case 4: goto L_11e018b2;
    default: x86_unimpl("switch@0x11e0185f out of table"); return;
  }
L_11e01866:;
  /* 11e01866 mov ecx, dword ptr [0x11e307e0] */
  ECX = (r32((uint32_t)(0x11e307e0)));
  /* 11e0186c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0186f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01872 mov dword ptr [0x11e307e0], edx */
  w32((uint32_t)(0x11e307e0), (EDX));
  /* 11e01878 jmp 0x11e018b2 */
  goto L_11e018b2;
L_11e0187a:;
  /* 11e0187a mov eax, dword ptr [0x11e307e4] */
  EAX = (r32((uint32_t)(0x11e307e4)));
  /* 11e0187f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01882 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01885 mov dword ptr [0x11e307e4], ecx */
  w32((uint32_t)(0x11e307e4), (ECX));
  /* 11e0188b jmp 0x11e018b2 */
  goto L_11e018b2;
L_11e0188d:;
  /* 11e0188d mov edx, dword ptr [0x11e307e8] */
  EDX = (r32((uint32_t)(0x11e307e8)));
  /* 11e01893 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e01896 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01899 mov dword ptr [0x11e307e8], eax */
  w32((uint32_t)(0x11e307e8), (EAX));
  /* 11e0189e jmp 0x11e018b2 */
  goto L_11e018b2;
L_11e018a0:;
  /* 11e018a0 mov ecx, dword ptr [0x11e307ec] */
  ECX = (r32((uint32_t)(0x11e307ec)));
  /* 11e018a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e018a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e018ac mov dword ptr [0x11e307ec], edx */
  w32((uint32_t)(0x11e307ec), (EDX));
L_11e018b2:;
  /* 11e018b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e018b4 call 0x11dfbdf0 */
  push32(0x11e018b9u); f_11dfbdf0();
  /* 11e018b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e018bc jmp 0x11e01993 */
  goto L_11e01993;
L_11e018c1:;
  /* 11e018c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e018c5 je 0x11e018d8 */
  if (C.zf) goto L_11e018d8;
  /* 11e018c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e018cb je 0x11e018d8 */
  if (C.zf) goto L_11e018d8;
  /* 11e018cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e018d1 je 0x11e018d8 */
  if (C.zf) goto L_11e018d8;
  /* 11e018d3 jmp 0x11e01998 */
  goto L_11e01998;
L_11e018d8:;
  /* 11e018d8 call 0x11dfeb50 */
  push32(0x11e018ddu); f_11dfeb50();
  /* 11e018dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e018e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e018e3 cmp dword ptr [eax + 0x50], 0x11e2e260 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11e2e260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e018ea jne 0x11e01935 */
  if (!C.zf) goto L_11e01935;
  /* 11e018ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11e018f1 push 0x11e2b2a8 */
  push32((uint32_t)(0x11e2b2a8u));
  /* 11e018f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e018f8 mov ecx, dword ptr [0x11e2e2e0] */
  ECX = (r32((uint32_t)(0x11e2e2e0)));
  /* 11e018fe push ecx */
  push32((uint32_t)(ECX));
  /* 11e018ff call 0x11dfbe50 */
  push32(0x11e01904u); f_11dfbe50();
  /* 11e01904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01907 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0190a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11e0190d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01910 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01914 je 0x11e01933 */
  if (C.zf) goto L_11e01933;
  /* 11e01916 mov ecx, dword ptr [0x11e2e2e0] */
  ECX = (r32((uint32_t)(0x11e2e2e0)));
  /* 11e0191c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0191d push 0x11e2e260 */
  push32((uint32_t)(0x11e2e260u));
  /* 11e01922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01925 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11e01928 push eax */
  push32((uint32_t)(EAX));
  /* 11e01929 call 0x11e06e90 */
  push32(0x11e0192eu); f_11e06e90();
  /* 11e0192e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01931 jmp 0x11e01935 */
  goto L_11e01935;
L_11e01933:;
  /* 11e01933 jmp 0x11e01998 */
  goto L_11e01998;
L_11e01935:;
  /* 11e01935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01938 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e0193b push edx */
  push32((uint32_t)(EDX));
  /* 11e0193c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0193f push eax */
  push32((uint32_t)(EAX));
  /* 11e01940 call 0x11e01cc0 */
  push32(0x11e01945u); f_11e01cc0();
  /* 11e01945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01948 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0194b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0194f jne 0x11e01953 */
  if (!C.zf) goto L_11e01953;
  /* 11e01951 jmp 0x11e01998 */
  goto L_11e01998;
L_11e01953:;
  /* 11e01953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01956 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e01959 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0195c:;
  /* 11e0195c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0195f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e01962 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01965 jne 0x11e01993 */
  if (!C.zf) goto L_11e01993;
  /* 11e01967 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0196a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0196d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e01970 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01973 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01976 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e01979 mov edx, dword ptr [0x11e2e2e4] */
  EDX = (r32((uint32_t)(0x11e2e2e4)));
  /* 11e0197f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e01982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01985 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11e01988 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0198a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0198d jb 0x11e01991 */
  if (C.cf) goto L_11e01991;
  /* 11e0198f jmp 0x11e01993 */
  goto L_11e01993;
L_11e01991:;
  /* 11e01991 jmp 0x11e0195c */
  goto L_11e0195c;
L_11e01993:;
  /* 11e01993 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01996 jmp 0x11e019a6 */
  goto L_11e019a6;
L_11e01998:;
  /* 11e01998 call 0x11e07270 */
  push32(0x11e0199du); f_11e07270();
  /* 11e0199d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11e019a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e019a6:;
  /* 11e019a6 pop esi */
  ESI = (pop32());
  /* 11e019a7 mov esp, ebp */
  ESP = (EBP);
  /* 11e019a9 pop ebp */
  EBP = (pop32());
  /* 11e019aa ret  */
  ESPCHK(0x11e017b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119e0 @ 0x11e019e0 (146 bytes, 45 insns) */
void f_11e019e0(void) {
  FTRACE(0x11e019e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e019e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e019e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e019e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e019e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e019e8 call 0x11dfbd50 */
  push32(0x11e019edu); f_11dfbd50();
  /* 11e019ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e019f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e019f4 jne 0x11e01a0e */
  if (!C.zf) goto L_11e01a0e;
  /* 11e019f6 mov dword ptr [ebp - 8], 0x11e307e0 */
  w32((uint32_t)(EBP + -0x8), (0x11e307e0u));
  /* 11e019fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01a00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e01a02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e01a05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e01a0c jmp 0x11e01a24 */
  goto L_11e01a24;
L_11e01a0e:;
  /* 11e01a0e mov dword ptr [ebp - 8], 0x11e307e4 */
  w32((uint32_t)(EBP + -0x8), (0x11e307e4u));
  /* 11e01a15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01a18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e01a1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01a1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11e01a24:;
  /* 11e01a24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01a28 jne 0x11e01a38 */
  if (!C.zf) goto L_11e01a38;
  /* 11e01a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01a2c call 0x11dfbdf0 */
  push32(0x11e01a31u); f_11dfbdf0();
  /* 11e01a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01a36 jmp 0x11e01a6c */
  goto L_11e01a6c;
L_11e01a38:;
  /* 11e01a38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01a3c je 0x11e01a5d */
  if (C.zf) goto L_11e01a5d;
  /* 11e01a3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01a41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11e01a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01a49 call 0x11dfbdf0 */
  push32(0x11e01a4eu); f_11dfbdf0();
  /* 11e01a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01a54 push edx */
  push32((uint32_t)(EDX));
  /* 11e01a55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11e01a58u);
  /* 11e01a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01a5b jmp 0x11e01a67 */
  goto L_11e01a67;
L_11e01a5d:;
  /* 11e01a5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01a5f call 0x11dfbdf0 */
  push32(0x11e01a64u); f_11dfbdf0();
  /* 11e01a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01a67:;
  /* 11e01a67 mov eax, 1 */
  EAX = (0x1u);
L_11e01a6c:;
  /* 11e01a6c mov esp, ebp */
  ESP = (EBP);
  /* 11e01a6e pop ebp */
  EBP = (pop32());
  /* 11e01a6f ret 4 */
  ESPCHK(0x11e019e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011a80 @ 0x11e01a80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11e01a80(void) {
  FTRACE(0x11e01a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01a81 mov ebp, esp */
  EBP = (ESP);
  /* 11e01a83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01a86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e01a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01a90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e01a93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e01a96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01a99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e01a9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01aa0 ja 0x11e01b4e */
  if ((!C.cf&&!C.zf)) goto L_11e01b4e;
  /* 11e01aa6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e01aa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e01aab mov dl, byte ptr [eax + 0x11e01ca2] */
  DL = (r8((uint32_t)(EAX + 0x11e01ca2)));
  /* 11e01ab1 jmp dword ptr [edx*4 + 0x11e01c8a] */
  switch (EDX) {
    case 0: goto L_11e01ab8;
    case 1: goto L_11e01b23;
    case 2: goto L_11e01b09;
    case 3: goto L_11e01ad5;
    case 4: goto L_11e01aef;
    case 5: goto L_11e01b4e;
    default: x86_unimpl("switch@0x11e01ab1 out of table"); return;
  }
L_11e01ab8:;
  /* 11e01ab8 mov dword ptr [ebp - 0x18], 0x11e307e0 */
  w32((uint32_t)(EBP + -0x18), (0x11e307e0u));
  /* 11e01abf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01ac2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01ac4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e01ac7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01aca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01acd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01ad0 jmp 0x11e01b56 */
  goto L_11e01b56;
L_11e01ad5:;
  /* 11e01ad5 mov dword ptr [ebp - 0x18], 0x11e307e4 */
  w32((uint32_t)(EBP + -0x18), (0x11e307e4u));
  /* 11e01adc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01adf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01ae1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e01ae4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01ae7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01aea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01aed jmp 0x11e01b56 */
  goto L_11e01b56;
L_11e01aef:;
  /* 11e01aef mov dword ptr [ebp - 0x18], 0x11e307e8 */
  w32((uint32_t)(EBP + -0x18), (0x11e307e8u));
  /* 11e01af6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01af9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01afb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e01afe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01b01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01b04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01b07 jmp 0x11e01b56 */
  goto L_11e01b56;
L_11e01b09:;
  /* 11e01b09 mov dword ptr [ebp - 0x18], 0x11e307ec */
  w32((uint32_t)(EBP + -0x18), (0x11e307ecu));
  /* 11e01b10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01b13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01b15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e01b18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01b1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01b1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e01b21 jmp 0x11e01b56 */
  goto L_11e01b56;
L_11e01b23:;
  /* 11e01b23 call 0x11dfeb50 */
  push32(0x11e01b28u); f_11dfeb50();
  /* 11e01b28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e01b2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01b2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e01b31 push edx */
  push32((uint32_t)(EDX));
  /* 11e01b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01b35 push eax */
  push32((uint32_t)(EAX));
  /* 11e01b36 call 0x11e01cc0 */
  push32(0x11e01b3bu); f_11e01cc0();
  /* 11e01b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01b3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01b41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e01b44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01b47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e01b49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e01b4c jmp 0x11e01b56 */
  goto L_11e01b56;
L_11e01b4e:;
  /* 11e01b4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e01b51 jmp 0x11e01c86 */
  goto L_11e01c86;
L_11e01b56:;
  /* 11e01b56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01b5a je 0x11e01b66 */
  if (C.zf) goto L_11e01b66;
  /* 11e01b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01b5e call 0x11dfbd50 */
  push32(0x11e01b63u); f_11dfbd50();
  /* 11e01b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01b66:;
  /* 11e01b66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01b6a jne 0x11e01b83 */
  if (!C.zf) goto L_11e01b83;
  /* 11e01b6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01b70 je 0x11e01b7c */
  if (C.zf) goto L_11e01b7c;
  /* 11e01b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01b74 call 0x11dfbdf0 */
  push32(0x11e01b79u); f_11dfbdf0();
  /* 11e01b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01b7c:;
  /* 11e01b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01b7e jmp 0x11e01c86 */
  goto L_11e01c86;
L_11e01b83:;
  /* 11e01b83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01b87 jne 0x11e01ba0 */
  if (!C.zf) goto L_11e01ba0;
  /* 11e01b89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01b8d je 0x11e01b99 */
  if (C.zf) goto L_11e01b99;
  /* 11e01b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01b91 call 0x11dfbdf0 */
  push32(0x11e01b96u); f_11dfbdf0();
  /* 11e01b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01b99:;
  /* 11e01b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e01b9b call 0x11dfeec0 */
  push32(0x11e01ba0u); f_11dfeec0();
L_11e01ba0:;
  /* 11e01ba0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01ba4 je 0x11e01bb2 */
  if (C.zf) goto L_11e01bb2;
  /* 11e01ba6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01baa je 0x11e01bb2 */
  if (C.zf) goto L_11e01bb2;
  /* 11e01bac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01bb0 jne 0x11e01bde */
  if (!C.zf) goto L_11e01bde;
L_11e01bb2:;
  /* 11e01bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01bb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11e01bb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e01bbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01bbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11e01bc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01bc9 jne 0x11e01bde */
  if (!C.zf) goto L_11e01bde;
  /* 11e01bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01bce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11e01bd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e01bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01bd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11e01bde:;
  /* 11e01bde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01be2 jne 0x11e01c20 */
  if (!C.zf) goto L_11e01c20;
  /* 11e01be4 mov eax, dword ptr [0x11e2e2d8] */
  EAX = (r32((uint32_t)(0x11e2e2d8)));
  /* 11e01be9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e01bec jmp 0x11e01bf7 */
  goto L_11e01bf7;
L_11e01bee:;
  /* 11e01bee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e01bf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01bf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e01bf7:;
  /* 11e01bf7 mov edx, dword ptr [0x11e2e2d8] */
  EDX = (r32((uint32_t)(0x11e2e2d8)));
  /* 11e01bfd add edx, dword ptr [0x11e2e2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2e2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01c03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c06 jge 0x11e01c1e */
  if ((C.sf==C.of)) goto L_11e01c1e;
  /* 11e01c08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e01c0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e01c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01c11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e01c14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11e01c1c jmp 0x11e01bee */
  goto L_11e01bee;
L_11e01c1e:;
  /* 11e01c1e jmp 0x11e01c29 */
  goto L_11e01c29;
L_11e01c20:;
  /* 11e01c20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e01c23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e01c29:;
  /* 11e01c29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c2d je 0x11e01c39 */
  if (C.zf) goto L_11e01c39;
  /* 11e01c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e01c31 call 0x11dfbdf0 */
  push32(0x11e01c36u); f_11dfbdf0();
  /* 11e01c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01c39:;
  /* 11e01c39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c3d jne 0x11e01c50 */
  if (!C.zf) goto L_11e01c50;
  /* 11e01c3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01c42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11e01c45 push edx */
  push32((uint32_t)(EDX));
  /* 11e01c46 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e01c48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11e01c4bu);
  /* 11e01c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01c4e jmp 0x11e01c5a */
  goto L_11e01c5a;
L_11e01c50:;
  /* 11e01c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01c53 push eax */
  push32((uint32_t)(EAX));
  /* 11e01c54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11e01c57u);
  /* 11e01c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e01c5a:;
  /* 11e01c5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c5e je 0x11e01c6c */
  if (C.zf) goto L_11e01c6c;
  /* 11e01c60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c64 je 0x11e01c6c */
  if (C.zf) goto L_11e01c6c;
  /* 11e01c66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c6a jne 0x11e01c84 */
  if (!C.zf) goto L_11e01c84;
L_11e01c6c:;
  /* 11e01c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01c6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e01c72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11e01c75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01c79 jne 0x11e01c84 */
  if (!C.zf) goto L_11e01c84;
  /* 11e01c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01c7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01c81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11e01c84:;
  /* 11e01c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e01c86:;
  /* 11e01c86 mov esp, ebp */
  ESP = (EBP);
  /* 11e01c88 pop ebp */
  EBP = (pop32());
  /* 11e01c89 ret  */
  ESPCHK(0x11e01a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x11e01cc0 (91 bytes, 35 insns) */
void f_11e01cc0(void) {
  FTRACE(0x11e01cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11e01cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e01cca:;
  /* 11e01cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01ccd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e01cd0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01cd3 je 0x11e01cf3 */
  if (C.zf) goto L_11e01cf3;
  /* 11e01cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01cd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01cdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e01cde mov ecx, dword ptr [0x11e2e2e4] */
  ECX = (r32((uint32_t)(0x11e2e2e4)));
  /* 11e01ce4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e01ce7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01cea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01cec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01cef jae 0x11e01cf3 */
  if (!C.cf) goto L_11e01cf3;
  /* 11e01cf1 jmp 0x11e01cca */
  goto L_11e01cca;
L_11e01cf3:;
  /* 11e01cf3 mov eax, dword ptr [0x11e2e2e4] */
  EAX = (r32((uint32_t)(0x11e2e2e4)));
  /* 11e01cf8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e01cfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01cfe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01d00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01d03 jae 0x11e01d15 */
  if (!C.cf) goto L_11e01d15;
  /* 11e01d05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01d08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e01d0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01d0e jne 0x11e01d15 */
  if (!C.zf) goto L_11e01d15;
  /* 11e01d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01d13 jmp 0x11e01d17 */
  goto L_11e01d17;
L_11e01d15:;
  /* 11e01d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e01d17:;
  /* 11e01d17 mov esp, ebp */
  ESP = (EBP);
  /* 11e01d19 pop ebp */
  EBP = (pop32());
  /* 11e01d1a ret  */
  ESPCHK(0x11e01cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x11e01d20 (13 bytes, 6 insns) */
void f_11e01d20(void) {
  FTRACE(0x11e01d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01d21 mov ebp, esp */
  EBP = (ESP);
  /* 11e01d23 call 0x11dfeb50 */
  push32(0x11e01d28u); f_11dfeb50();
  /* 11e01d28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01d2b pop ebp */
  EBP = (pop32());
  /* 11e01d2c ret  */
  ESPCHK(0x11e01d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d30 @ 0x11e01d30 (13 bytes, 6 insns) */
void f_11e01d30(void) {
  FTRACE(0x11e01d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01d31 mov ebp, esp */
  EBP = (ESP);
  /* 11e01d33 call 0x11dfeb50 */
  push32(0x11e01d38u); f_11dfeb50();
  /* 11e01d38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01d3b pop ebp */
  EBP = (pop32());
  /* 11e01d3c ret  */
  ESPCHK(0x11e01d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d40 @ 0x11e01d40 (187 bytes, 54 insns) */
void f_11e01d40(void) {
  FTRACE(0x11e01d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01d41 mov ebp, esp */
  EBP = (ESP);
  /* 11e01d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01d46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e01d4d cmp dword ptr [0x11e307f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01d54 jne 0x11e01db3 */
  if (!C.zf) goto L_11e01db3;
  /* 11e01d56 push 0x11e2a530 */
  push32((uint32_t)(0x11e2a530u));
  /* 11e01d5b call dword ptr [0x11e333dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333dc))), 0x11e01d61u);
  /* 11e01d61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e01d64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01d68 je 0x11e01d87 */
  if (C.zf) goto L_11e01d87;
  /* 11e01d6a push 0x11e2b2d8 */
  push32((uint32_t)(0x11e2b2d8u));
  /* 11e01d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01d72 push eax */
  push32((uint32_t)(EAX));
  /* 11e01d73 call dword ptr [0x11e333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d8))), 0x11e01d79u);
  /* 11e01d79 mov dword ptr [0x11e307f4], eax */
  w32((uint32_t)(0x11e307f4), (EAX));
  /* 11e01d7e cmp dword ptr [0x11e307f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01d85 jne 0x11e01d8b */
  if (!C.zf) goto L_11e01d8b;
L_11e01d87:;
  /* 11e01d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01d89 jmp 0x11e01df7 */
  goto L_11e01df7;
L_11e01d8b:;
  /* 11e01d8b push 0x11e2b2c8 */
  push32((uint32_t)(0x11e2b2c8u));
  /* 11e01d90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01d94 call dword ptr [0x11e333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d8))), 0x11e01d9au);
  /* 11e01d9a mov dword ptr [0x11e307f8], eax */
  w32((uint32_t)(0x11e307f8), (EAX));
  /* 11e01d9f push 0x11e2b2b4 */
  push32((uint32_t)(0x11e2b2b4u));
  /* 11e01da4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e01da7 push edx */
  push32((uint32_t)(EDX));
  /* 11e01da8 call dword ptr [0x11e333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d8))), 0x11e01daeu);
  /* 11e01dae mov dword ptr [0x11e307fc], eax */
  w32((uint32_t)(0x11e307fc), (EAX));
L_11e01db3:;
  /* 11e01db3 cmp dword ptr [0x11e307f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01dba je 0x11e01dc5 */
  if (C.zf) goto L_11e01dc5;
  /* 11e01dbc call dword ptr [0x11e307f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e307f8))), 0x11e01dc2u);
  /* 11e01dc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e01dc5:;
  /* 11e01dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01dc9 je 0x11e01de1 */
  if (C.zf) goto L_11e01de1;
  /* 11e01dcb cmp dword ptr [0x11e307fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e307fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01dd2 je 0x11e01de1 */
  if (C.zf) goto L_11e01de1;
  /* 11e01dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01dd7 push eax */
  push32((uint32_t)(EAX));
  /* 11e01dd8 call dword ptr [0x11e307fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e307fc))), 0x11e01ddeu);
  /* 11e01dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e01de1:;
  /* 11e01de1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01de4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01de5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01de8 push edx */
  push32((uint32_t)(EDX));
  /* 11e01de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01dec push eax */
  push32((uint32_t)(EAX));
  /* 11e01ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01df1 call dword ptr [0x11e307f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e307f4))), 0x11e01df7u);
L_11e01df7:;
  /* 11e01df7 mov esp, ebp */
  ESP = (EBP);
  /* 11e01df9 pop ebp */
  EBP = (pop32());
  /* 11e01dfa ret  */
  ESPCHK(0x11e01d40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11e01e00 (254 bytes, 109 insns) */
void f_11e01e00(void) {
  FTRACE(0x11e01e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01e00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e01e04 push edi */
  push32((uint32_t)(EDI));
  /* 11e01e05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e01e07 je 0x11e01e83 */
  if (C.zf) goto L_11e01e83;
  /* 11e01e09 push esi */
  push32((uint32_t)(ESI));
  /* 11e01e0a push ebx */
  push32((uint32_t)(EBX));
  /* 11e01e0b mov ebx, ecx */
  EBX = (ECX);
  /* 11e01e0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e01e11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11e01e17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e01e1b jne 0x11e01e24 */
  if (!C.zf) goto L_11e01e24;
  /* 11e01e1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e01e20 jne 0x11e01e91 */
  if (!C.zf) goto L_11e01e91;
  /* 11e01e22 jmp 0x11e01e45 */
  goto L_11e01e45;
L_11e01e24:;
  /* 11e01e24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e01e26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e01e27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e01e29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e01e2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e01e2b je 0x11e01e52 */
  if (C.zf) goto L_11e01e52;
  /* 11e01e2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e01e2f je 0x11e01e5a */
  if (C.zf) goto L_11e01e5a;
  /* 11e01e31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11e01e37 jne 0x11e01e24 */
  if (!C.zf) goto L_11e01e24;
  /* 11e01e39 mov ebx, ecx */
  EBX = (ECX);
  /* 11e01e3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e01e3e jne 0x11e01e91 */
  if (!C.zf) goto L_11e01e91;
L_11e01e40:;
  /* 11e01e40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11e01e43 je 0x11e01e52 */
  if (C.zf) goto L_11e01e52;
L_11e01e45:;
  /* 11e01e45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e01e47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e01e48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e01e4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e01e4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e01e4d je 0x11e01e7e */
  if (C.zf) goto L_11e01e7e;
  /* 11e01e4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e01e50 jne 0x11e01e45 */
  if (!C.zf) goto L_11e01e45;
L_11e01e52:;
  /* 11e01e52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e01e56 pop ebx */
  EBX = (pop32());
  /* 11e01e57 pop esi */
  ESI = (pop32());
  /* 11e01e58 pop edi */
  EDI = (pop32());
  /* 11e01e59 ret  */
  ESPCHK(0x11e01e00u, _esp0);
  ESP += 4; return;
L_11e01e5a:;
  /* 11e01e5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e01e60 je 0x11e01e74 */
  if (C.zf) goto L_11e01e74;
L_11e01e62:;
  /* 11e01e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e01e64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e01e65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e01e66 je 0x11e01ef6 */
  if (C.zf) goto L_11e01ef6;
  /* 11e01e6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e01e72 jne 0x11e01e62 */
  if (!C.zf) goto L_11e01e62;
L_11e01e74:;
  /* 11e01e74 mov ebx, ecx */
  EBX = (ECX);
  /* 11e01e76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e01e79 jne 0x11e01ee7 */
  if (!C.zf) goto L_11e01ee7;
L_11e01e7b:;
  /* 11e01e7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e01e7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11e01e7e:;
  /* 11e01e7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e01e7f jne 0x11e01e7b */
  if (!C.zf) goto L_11e01e7b;
  /* 11e01e81 pop ebx */
  EBX = (pop32());
  /* 11e01e82 pop esi */
  ESI = (pop32());
L_11e01e83:;
  /* 11e01e83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e01e87 pop edi */
  EDI = (pop32());
  /* 11e01e88 ret  */
  ESPCHK(0x11e01e00u, _esp0);
  ESP += 4; return;
L_11e01e89:;
  /* 11e01e89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e01e8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01e8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e01e8f je 0x11e01e40 */
  if (C.zf) goto L_11e01e40;
L_11e01e91:;
  /* 11e01e91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e01e96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e01e98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01e9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e01e9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01e9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11e01ea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01ea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e01ea9 je 0x11e01e89 */
  if (C.zf) goto L_11e01e89;
  /* 11e01eab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e01ead je 0x11e01edb */
  if (C.zf) goto L_11e01edb;
  /* 11e01eaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11e01eb1 je 0x11e01ed1 */
  if (C.zf) goto L_11e01ed1;
  /* 11e01eb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e01eb9 je 0x11e01ec7 */
  if (C.zf) goto L_11e01ec7;
  /* 11e01ebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e01ec1 jne 0x11e01e89 */
  if (!C.zf) goto L_11e01e89;
  /* 11e01ec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e01ec5 jmp 0x11e01edf */
  goto L_11e01edf;
L_11e01ec7:;
  /* 11e01ec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e01ecd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e01ecf jmp 0x11e01edf */
  goto L_11e01edf;
L_11e01ed1:;
  /* 11e01ed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e01ed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e01ed9 jmp 0x11e01edf */
  goto L_11e01edf;
L_11e01edb:;
  /* 11e01edb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e01edd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11e01edf:;
  /* 11e01edf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01ee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e01ee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e01ee5 je 0x11e01ef1 */
  if (C.zf) goto L_11e01ef1;
L_11e01ee7:;
  /* 11e01ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e01ee9:;
  /* 11e01ee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11e01eeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01eee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e01eef jne 0x11e01ee9 */
  if (!C.zf) goto L_11e01ee9;
L_11e01ef1:;
  /* 11e01ef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11e01ef4 jne 0x11e01e7b */
  if (!C.zf) goto L_11e01e7b;
L_11e01ef6:;
  /* 11e01ef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e01efa pop ebx */
  EBX = (pop32());
  /* 11e01efb pop esi */
  ESI = (pop32());
  /* 11e01efc pop edi */
  EDI = (pop32());
  /* 11e01efd ret  */
  ESPCHK(0x11e01e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x11e01f00 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11e01f00(void) {
  FTRACE(0x11e01f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e01f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e01f01 mov ebp, esp */
  EBP = (ESP);
  /* 11e01f03 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e01f09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e01f0b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11e01f0e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e01f11 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11e01f14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e01f17 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e01f1c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11e01f1f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e01f22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e01f25 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11e01f28 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01f2c ja 0x11e01f6e */
  if ((!C.cf&&!C.zf)) goto L_11e01f6e;
  /* 11e01f2e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e01f31 jmp dword ptr [eax*4 + 0x11e0205c] */
  switch (EAX) {
    case 0: goto L_11e01f38;
    case 1: goto L_11e01f53;
    case 2: goto L_11e01f41;
    case 3: goto L_11e01f4a;
    case 4: goto L_11e01f38;
    case 5: goto L_11e01f6e;
    case 6: goto L_11e01f65;
    case 7: goto L_11e01f5c;
    default: x86_unimpl("switch@0x11e01f31 out of table"); return;
  }
L_11e01f38:;
  /* 11e01f38 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11e01f3f jmp 0x11e01f75 */
  goto L_11e01f75;
L_11e01f41:;
  /* 11e01f41 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11e01f48 jmp 0x11e01f75 */
  goto L_11e01f75;
L_11e01f4a:;
  /* 11e01f4a mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11e01f51 jmp 0x11e01f75 */
  goto L_11e01f75;
L_11e01f53:;
  /* 11e01f53 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11e01f5a jmp 0x11e01f75 */
  goto L_11e01f75;
L_11e01f5c:;
  /* 11e01f5c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11e01f63 jmp 0x11e01f75 */
  goto L_11e01f75;
L_11e01f65:;
  /* 11e01f65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01f68 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11e01f6e:;
  /* 11e01f6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e01f75:;
  /* 11e01f75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01f79 je 0x11e0200a */
  if (C.zf) goto L_11e0200a;
  /* 11e01f7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01f82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e01f84 push eax */
  push32((uint32_t)(EAX));
  /* 11e01f85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01f88 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01f8b push ecx */
  push32((uint32_t)(ECX));
  /* 11e01f8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01f8f push edx */
  push32((uint32_t)(EDX));
  /* 11e01f90 call 0x11e079c0 */
  push32(0x11e01f95u); f_11e079c0();
  /* 11e01f95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e01f9a jne 0x11e0200a */
  if (!C.zf) goto L_11e0200a;
  /* 11e01f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01f9f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11e01fa2 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01fa6 je 0x11e01fb6 */
  if (C.zf) goto L_11e01fb6;
  /* 11e01fa8 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01fac je 0x11e01fb6 */
  if (C.zf) goto L_11e01fb6;
  /* 11e01fae cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e01fb2 je 0x11e01fb6 */
  if (C.zf) goto L_11e01fb6;
  /* 11e01fb4 jmp 0x11e01fdc */
  goto L_11e01fdc;
L_11e01fb6:;
  /* 11e01fb6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e01fb9 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e01fbc mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e01fbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e01fc2 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e01fc5 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e01fc8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e01fcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01fce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e01fd1 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11e01fd4 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e01fd7 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11e01fda jmp 0x11e01fe4 */
  goto L_11e01fe4;
L_11e01fdc:;
  /* 11e01fdc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e01fdf and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e01fe1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11e01fe4:;
  /* 11e01fe4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01fe7 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01fea push ecx */
  push32((uint32_t)(ECX));
  /* 11e01feb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e01fee add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e01ff1 push edx */
  push32((uint32_t)(EDX));
  /* 11e01ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e01ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11e01ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e01ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e01ffa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e01ffd push edx */
  push32((uint32_t)(EDX));
  /* 11e01ffe lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11e02001 push eax */
  push32((uint32_t)(EAX));
  /* 11e02002 call 0x11e074f0 */
  push32(0x11e02007u); f_11e074f0();
  /* 11e02007 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0200a:;
  /* 11e0200a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e0200f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02012 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e02014 push edx */
  push32((uint32_t)(EDX));
  /* 11e02015 call 0x11e07f30 */
  push32(0x11e0201au); f_11e07f30();
  /* 11e0201a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0201d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e02024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02027 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0202a je 0x11e02044 */
  if (C.zf) goto L_11e02044;
  /* 11e0202c cmp dword ptr [0x11e2e8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02033 jne 0x11e02044 */
  if (!C.zf) goto L_11e02044;
  /* 11e02035 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02038 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02039 call 0x11e07ee0 */
  push32(0x11e0203eu); f_11e07ee0();
  /* 11e0203e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02041 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e02044:;
  /* 11e02044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02048 jne 0x11e02058 */
  if (!C.zf) goto L_11e02058;
  /* 11e0204a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0204d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0204f push eax */
  push32((uint32_t)(EAX));
  /* 11e02050 call 0x11e07de0 */
  push32(0x11e02055u); f_11e07de0();
  /* 11e02055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e02058:;
  /* 11e02058 mov esp, ebp */
  ESP = (EBP);
  /* 11e0205a pop ebp */
  EBP = (pop32());
  /* 11e0205b ret  */
  ESPCHK(0x11e01f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x11e02080 (31 bytes, 18 insns) */
void f_11e02080(void) {
  FTRACE(0x11e02080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02080 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02081 mov ebp, esp */
  EBP = (ESP);
  /* 11e02083 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02084 push ebx */
  push32((uint32_t)(EBX));
  /* 11e02085 push esi */
  push32((uint32_t)(ESI));
  /* 11e02086 push edi */
  push32((uint32_t)(EDI));
  /* 11e02087 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e02088 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11e0208b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0208f push eax */
  push32((uint32_t)(EAX));
  /* 11e02090 call 0x11e02470 */
  push32(0x11e02095u); f_11e02470();
  /* 11e02095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02098 pop edi */
  EDI = (pop32());
  /* 11e02099 pop esi */
  ESI = (pop32());
  /* 11e0209a pop ebx */
  EBX = (pop32());
  /* 11e0209b mov esp, ebp */
  ESP = (EBP);
  /* 11e0209d pop ebp */
  EBP = (pop32());
  /* 11e0209e ret  */
  ESPCHK(0x11e02080u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x11e020a0 (32 bytes, 18 insns) */
void f_11e020a0(void) {
  FTRACE(0x11e020a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e020a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e020a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e020a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e020a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e020a5 push esi */
  push32((uint32_t)(ESI));
  /* 11e020a6 push edi */
  push32((uint32_t)(EDI));
  /* 11e020a7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11e020aa fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11e020ac mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e020b0 push eax */
  push32((uint32_t)(EAX));
  /* 11e020b1 call 0x11e02470 */
  push32(0x11e020b6u); f_11e02470();
  /* 11e020b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e020b9 pop edi */
  EDI = (pop32());
  /* 11e020ba pop esi */
  ESI = (pop32());
  /* 11e020bb pop ebx */
  EBX = (pop32());
  /* 11e020bc mov esp, ebp */
  ESP = (EBP);
  /* 11e020be pop ebp */
  EBP = (pop32());
  /* 11e020bf ret  */
  ESPCHK(0x11e020a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x11e020c0 (79 bytes, 34 insns) */
void f_11e020c0(void) {
  FTRACE(0x11e020c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e020c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e020c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e020c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e020c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e020c7 push esi */
  push32((uint32_t)(ESI));
  /* 11e020c8 push edi */
  push32((uint32_t)(EDI));
  /* 11e020c9 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e020ca fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11e020cd mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11e020d1 push eax */
  push32((uint32_t)(EAX));
  /* 11e020d2 call 0x11e02190 */
  push32(0x11e020d7u); f_11e02190();
  /* 11e020d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e020da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e020dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e020e0 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11e020e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e020e6 not edx */
  EDX = (~(EDX));
  /* 11e020e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e020eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e020ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e020ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e020f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e020f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e020f6 call 0x11e02310 */
  push32(0x11e020fbu); f_11e02310();
  /* 11e020fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e020fe mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e02102 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11e02105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02108 pop edi */
  EDI = (pop32());
  /* 11e02109 pop esi */
  ESI = (pop32());
  /* 11e0210a pop ebx */
  EBX = (pop32());
  /* 11e0210b mov esp, ebp */
  ESP = (EBP);
  /* 11e0210d pop ebp */
  EBP = (pop32());
  /* 11e0210e ret  */
  ESPCHK(0x11e020c0u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11e02110 (26 bytes, 11 insns) */
void f_11e02110(void) {
  FTRACE(0x11e02110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02110 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02111 mov ebp, esp */
  EBP = (ESP);
  /* 11e02113 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02116 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0211b push eax */
  push32((uint32_t)(EAX));
  /* 11e0211c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0211f push ecx */
  push32((uint32_t)(ECX));
  /* 11e02120 call 0x11e020c0 */
  push32(0x11e02125u); f_11e020c0();
  /* 11e02125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02128 pop ebp */
  EBP = (pop32());
  /* 11e02129 ret  */
  ESPCHK(0x11e02110u, _esp0);
  ESP += 4; return;
}

/* FUN_10012130 @ 0x11e02130 (88 bytes, 33 insns) */
void f_11e02130(void) {
  FTRACE(0x11e02130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02130 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02131 mov ebp, esp */
  EBP = (ESP);
  /* 11e02133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02136 push ebx */
  push32((uint32_t)(EBX));
  /* 11e02137 push esi */
  push32((uint32_t)(ESI));
  /* 11e02138 push edi */
  push32((uint32_t)(EDI));
  /* 11e02139 call 0x11e01d30 */
  push32(0x11e0213eu); f_11e01d30();
  /* 11e0213e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11e02140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e02143 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11e02145 call 0x11dfb470 */
  push32(0x11e0214au); f_11dfb470();
  /* 11e0214a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0214e je 0x11e02181 */
  if (C.zf) goto L_11e02181;
  /* 11e02150 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02153 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e02156 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e02158 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0215d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0215f je 0x11e02181 */
  if (C.zf) goto L_11e02181;
  /* 11e02161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02164 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e02167 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0216a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0216d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02170 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e02177 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0217a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11e02181:;
  /* 11e02181 pop edi */
  EDI = (pop32());
  /* 11e02182 pop esi */
  ESI = (pop32());
  /* 11e02183 pop ebx */
  EBX = (pop32());
  /* 11e02184 mov esp, ebp */
  ESP = (EBP);
  /* 11e02186 pop ebp */
  EBP = (pop32());
  /* 11e02187 ret  */
  ESPCHK(0x11e02130u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x11e02190 (377 bytes, 115 insns) */
void f_11e02190(void) {
  FTRACE(0x11e02190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02190 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02191 mov ebp, esp */
  EBP = (ESP);
  /* 11e02193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02196 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0219d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e021a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e021a5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e021a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e021aa je 0x11e021b5 */
  if (C.zf) goto L_11e021b5;
  /* 11e021ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e021af or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11e021b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e021b5:;
  /* 11e021b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e021b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e021be and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e021c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e021c3 je 0x11e021cd */
  if (C.zf) goto L_11e021cd;
  /* 11e021c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e021c8 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11e021ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e021cd:;
  /* 11e021cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e021d0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e021d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e021d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e021db je 0x11e021e6 */
  if (C.zf) goto L_11e021e6;
  /* 11e021dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e021e0 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e021e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e021e6:;
  /* 11e021e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e021e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e021ee and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e021f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e021f3 je 0x11e021fe */
  if (C.zf) goto L_11e021fe;
  /* 11e021f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e021f8 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e021fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e021fe:;
  /* 11e021fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02201 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02207 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0220a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0220c je 0x11e02216 */
  if (C.zf) goto L_11e02216;
  /* 11e0220e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02211 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e02213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e02216:;
  /* 11e02216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02219 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0221f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e02222 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e02224 je 0x11e02232 */
  if (C.zf) goto L_11e02232;
  /* 11e02226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02229 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0222f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e02232:;
  /* 11e02232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02235 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0223a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0223f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e02242 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02249 jg 0x11e02265 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e02265;
  /* 11e0224b cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02252 je 0x11e02278 */
  if (C.zf) goto L_11e02278;
  /* 11e02254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02258 je 0x11e02270 */
  if (C.zf) goto L_11e02270;
  /* 11e0225a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02261 je 0x11e02283 */
  if (C.zf) goto L_11e02283;
  /* 11e02263 jmp 0x11e02297 */
  goto L_11e02297;
L_11e02265:;
  /* 11e02265 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0226c je 0x11e0228e */
  if (C.zf) goto L_11e0228e;
  /* 11e0226e jmp 0x11e02297 */
  goto L_11e02297;
L_11e02270:;
  /* 11e02270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e02276 jmp 0x11e02297 */
  goto L_11e02297;
L_11e02278:;
  /* 11e02278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0227b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e0227e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e02281 jmp 0x11e02297 */
  goto L_11e02297;
L_11e02283:;
  /* 11e02283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02286 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e02289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0228c jmp 0x11e02297 */
  goto L_11e02297;
L_11e0228e:;
  /* 11e0228e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02291 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e02294 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e02297:;
  /* 11e02297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0229a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e022a0 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11e022a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e022a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e022ad je 0x11e022d9 */
  if (C.zf) goto L_11e022d9;
  /* 11e022af cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e022b6 je 0x11e022cb */
  if (C.zf) goto L_11e022cb;
  /* 11e022b8 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e022bf je 0x11e022c3 */
  if (C.zf) goto L_11e022c3;
  /* 11e022c1 jmp 0x11e022e5 */
  goto L_11e022e5;
L_11e022c3:;
  /* 11e022c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e022c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e022c9 jmp 0x11e022e5 */
  goto L_11e022e5;
L_11e022cb:;
  /* 11e022cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e022ce or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e022d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e022d7 jmp 0x11e022e5 */
  goto L_11e022e5;
L_11e022d9:;
  /* 11e022d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e022dc or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e022e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e022e5:;
  /* 11e022e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e022e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e022ed and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e022f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e022f4 je 0x11e02302 */
  if (C.zf) goto L_11e02302;
  /* 11e022f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e022f9 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e022ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e02302:;
  /* 11e02302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02305 mov esp, ebp */
  ESP = (EBP);
  /* 11e02307 pop ebp */
  EBP = (pop32());
  /* 11e02308 ret  */
  ESPCHK(0x11e02190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x11e02310 (346 bytes, 106 insns) */
void f_11e02310(void) {
  FTRACE(0x11e02310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02310 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02311 mov ebp, esp */
  EBP = (ESP);
  /* 11e02313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02316 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0231c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0231f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02322 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02324 je 0x11e02331 */
  if (C.zf) goto L_11e02331;
  /* 11e02326 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0232a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11e0232d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11e02331:;
  /* 11e02331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02334 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e02337 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e02339 je 0x11e02345 */
  if (C.zf) goto L_11e02345;
  /* 11e0233b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0233f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e02341 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11e02345:;
  /* 11e02345 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02348 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0234b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0234d je 0x11e0235a */
  if (C.zf) goto L_11e0235a;
  /* 11e0234f mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02353 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11e02356 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11e0235a:;
  /* 11e0235a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0235d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02362 je 0x11e0236f */
  if (C.zf) goto L_11e0236f;
  /* 11e02364 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02368 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11e0236b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11e0236f:;
  /* 11e0236f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02372 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e02375 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e02377 je 0x11e02383 */
  if (C.zf) goto L_11e02383;
  /* 11e02379 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0237d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11e0237f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11e02383:;
  /* 11e02383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02386 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0238c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0238e je 0x11e0239b */
  if (C.zf) goto L_11e0239b;
  /* 11e02390 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02394 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11e02397 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11e0239b:;
  /* 11e0239b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0239e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11e023a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e023a6 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e023ad ja 0x11e023c9 */
  if ((!C.cf&&!C.zf)) goto L_11e023c9;
  /* 11e023af cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e023b6 je 0x11e023de */
  if (C.zf) goto L_11e023de;
  /* 11e023b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e023bc je 0x11e023d4 */
  if (C.zf) goto L_11e023d4;
  /* 11e023be cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e023c5 je 0x11e023eb */
  if (C.zf) goto L_11e023eb;
  /* 11e023c7 jmp 0x11e02403 */
  goto L_11e02403;
L_11e023c9:;
  /* 11e023c9 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e023d0 je 0x11e023f8 */
  if (C.zf) goto L_11e023f8;
  /* 11e023d2 jmp 0x11e02403 */
  goto L_11e02403;
L_11e023d4:;
  /* 11e023d4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e023d8 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e023dc jmp 0x11e02403 */
  goto L_11e02403;
L_11e023de:;
  /* 11e023de mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e023e2 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e023e5 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11e023e9 jmp 0x11e02403 */
  goto L_11e02403;
L_11e023eb:;
  /* 11e023eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e023ef or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11e023f2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e023f6 jmp 0x11e02403 */
  goto L_11e02403;
L_11e023f8:;
  /* 11e023f8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e023fc or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e023ff mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11e02403:;
  /* 11e02403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02406 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0240c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0240f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02413 je 0x11e02429 */
  if (C.zf) goto L_11e02429;
  /* 11e02415 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0241c je 0x11e02436 */
  if (C.zf) goto L_11e02436;
  /* 11e0241e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02425 je 0x11e02443 */
  if (C.zf) goto L_11e02443;
  /* 11e02427 jmp 0x11e0244b */
  goto L_11e0244b;
L_11e02429:;
  /* 11e02429 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0242d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11e02430 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e02434 jmp 0x11e0244b */
  goto L_11e0244b;
L_11e02436:;
  /* 11e02436 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0243a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e0243d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e02441 jmp 0x11e0244b */
  goto L_11e0244b;
L_11e02443:;
  /* 11e02443 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02447 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11e0244b:;
  /* 11e0244b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0244e and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02455 je 0x11e02462 */
  if (C.zf) goto L_11e02462;
  /* 11e02457 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0245b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e0245e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11e02462:;
  /* 11e02462 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02466 mov esp, ebp */
  ESP = (EBP);
  /* 11e02468 pop ebp */
  EBP = (pop32());
  /* 11e02469 ret  */
  ESPCHK(0x11e02310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012470 @ 0x11e02470 (167 bytes, 56 insns) */
void f_11e02470(void) {
  FTRACE(0x11e02470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02470 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02471 mov ebp, esp */
  EBP = (ESP);
  /* 11e02473 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0247b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0247e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e02483 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02488 je 0x11e02493 */
  if (C.zf) goto L_11e02493;
  /* 11e0248a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0248d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11e02490 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e02493:;
  /* 11e02493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02496 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0249c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0249f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e024a1 je 0x11e024ab */
  if (C.zf) goto L_11e024ab;
  /* 11e024a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e024a6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11e024a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e024ab:;
  /* 11e024ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e024ae and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e024b4 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e024b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e024b9 je 0x11e024c4 */
  if (C.zf) goto L_11e024c4;
  /* 11e024bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e024be or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e024c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e024c4:;
  /* 11e024c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e024c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e024cc and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e024cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e024d1 je 0x11e024dc */
  if (C.zf) goto L_11e024dc;
  /* 11e024d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e024d6 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e024d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e024dc:;
  /* 11e024dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e024df and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e024e5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11e024e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e024ea je 0x11e024f4 */
  if (C.zf) goto L_11e024f4;
  /* 11e024ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e024ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e024f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e024f4:;
  /* 11e024f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e024f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e024fd and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e02500 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e02502 je 0x11e02510 */
  if (C.zf) goto L_11e02510;
  /* 11e02504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02507 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0250d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e02510:;
  /* 11e02510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02513 mov esp, ebp */
  ESP = (EBP);
  /* 11e02515 pop ebp */
  EBP = (pop32());
  /* 11e02516 ret  */
  ESPCHK(0x11e02470u, _esp0);
  ESP += 4; return;
}

/* FUN_10012520 @ 0x11e02520 (183 bytes, 58 insns) */
void f_11e02520(void) {
  FTRACE(0x11e02520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02520 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02521 mov ebp, esp */
  EBP = (ESP);
  /* 11e02523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0252c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02531 ja 0x11e0254a */
  if ((!C.cf&&!C.zf)) goto L_11e0254a;
  /* 11e02533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02536 mov edx, dword ptr [0x11e2e00c] */
  EDX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0253c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0253e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e02542 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e02545 jmp 0x11e025d3 */
  goto L_11e025d3;
L_11e0254a:;
  /* 11e0254a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0254d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e02550 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e02556 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0255c mov edx, dword ptr [0x11e2e00c] */
  EDX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e02562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02564 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e02568 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0256d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0256f je 0x11e02593 */
  if (C.zf) goto L_11e02593;
  /* 11e02571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02574 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e02577 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0257d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11e02580 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e02583 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11e02586 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11e0258a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11e02591 jmp 0x11e025a4 */
  goto L_11e025a4;
L_11e02593:;
  /* 11e02593 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e02596 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11e02599 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11e0259d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11e025a4:;
  /* 11e025a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e025a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e025a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e025aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11e025ad push ecx */
  push32((uint32_t)(ECX));
  /* 11e025ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e025b1 push edx */
  push32((uint32_t)(EDX));
  /* 11e025b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e025b5 push eax */
  push32((uint32_t)(EAX));
  /* 11e025b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e025b8 call 0x11e07ff0 */
  push32(0x11e025bdu); f_11e07ff0();
  /* 11e025bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e025c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e025c2 jne 0x11e025c8 */
  if (!C.zf) goto L_11e025c8;
  /* 11e025c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e025c6 jmp 0x11e025d3 */
  goto L_11e025d3;
L_11e025c8:;
  /* 11e025c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e025cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e025d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11e025d3:;
  /* 11e025d3 mov esp, ebp */
  ESP = (EBP);
  /* 11e025d5 pop ebp */
  EBP = (pop32());
  /* 11e025d6 ret  */
  ESPCHK(0x11e02520u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x11e025e0 (11 bytes, 6 insns) */
void f_11e025e0(void) {
  FTRACE(0x11e025e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e025e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e025e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e025e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e025e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e025e9 pop ebp */
  EBP = (pop32());
  /* 11e025ea ret  */
  ESPCHK(0x11e025e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125f0 @ 0x11e025f0 (147 bytes, 43 insns) */
void f_11e025f0(void) {
  FTRACE(0x11e025f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e025f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e025f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e025f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e025f4 cmp dword ptr [0x11e3082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e025fb jne 0x11e02617 */
  if (!C.zf) goto L_11e02617;
  /* 11e025fd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02601 jl 0x11e02612 */
  if ((C.sf!=C.of)) goto L_11e02612;
  /* 11e02603 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02607 jg 0x11e02612 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e02612;
  /* 11e02609 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0260c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0260f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e02612:;
  /* 11e02612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02615 jmp 0x11e0267f */
  goto L_11e0267f;
L_11e02617:;
  /* 11e02617 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0261c call dword ptr [0x11e333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e0))), 0x11e02622u);
  /* 11e02622 cmp dword ptr [0x11e3099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02629 je 0x11e02649 */
  if (C.zf) goto L_11e02649;
  /* 11e0262b push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e02630 call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e02636u);
  /* 11e02636 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e02638 call 0x11dfbd50 */
  push32(0x11e0263du); f_11dfbd50();
  /* 11e0263d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02640 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e02647 jmp 0x11e02650 */
  goto L_11e02650;
L_11e02649:;
  /* 11e02649 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e02650:;
  /* 11e02650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02653 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02654 call 0x11e02690 */
  push32(0x11e02659u); f_11e02690();
  /* 11e02659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0265c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0265f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02663 je 0x11e02671 */
  if (C.zf) goto L_11e02671;
  /* 11e02665 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e02667 call 0x11dfbdf0 */
  push32(0x11e0266cu); f_11dfbdf0();
  /* 11e0266c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0266f jmp 0x11e0267c */
  goto L_11e0267c;
L_11e02671:;
  /* 11e02671 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e02676 call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e0267cu);
L_11e0267c:;
  /* 11e0267c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11e0267f:;
  /* 11e0267f mov esp, ebp */
  ESP = (EBP);
  /* 11e02681 pop ebp */
  EBP = (pop32());
  /* 11e02682 ret  */
  ESPCHK(0x11e025f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x11e02690 (299 bytes, 91 insns) */
void f_11e02690(void) {
  FTRACE(0x11e02690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02690 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02691 mov ebp, esp */
  EBP = (ESP);
  /* 11e02693 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02696 cmp dword ptr [0x11e3082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0269d jne 0x11e026bc */
  if (!C.zf) goto L_11e026bc;
  /* 11e0269f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e026a3 jl 0x11e026b4 */
  if ((C.sf!=C.of)) goto L_11e026b4;
  /* 11e026a5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e026a9 jg 0x11e026b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e026b4;
  /* 11e026ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e026ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e026b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e026b4:;
  /* 11e026b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e026b7 jmp 0x11e027b7 */
  goto L_11e027b7;
L_11e026bc:;
  /* 11e026bc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e026c3 jge 0x11e02703 */
  if ((C.sf==C.of)) goto L_11e02703;
  /* 11e026c5 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e026cc jle 0x11e026e1 */
  if ((C.zf||C.sf!=C.of)) goto L_11e026e1;
  /* 11e026ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11e026d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e026d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e026d4 call 0x11e02520 */
  push32(0x11e026d9u); f_11e02520();
  /* 11e026d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e026dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e026df jmp 0x11e026f5 */
  goto L_11e026f5;
L_11e026e1:;
  /* 11e026e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e026e4 mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e026e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e026eb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e026ef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e026f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e026f5:;
  /* 11e026f5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e026f9 jne 0x11e02703 */
  if (!C.zf) goto L_11e02703;
  /* 11e026fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e026fe jmp 0x11e027b7 */
  goto L_11e027b7;
L_11e02703:;
  /* 11e02703 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02706 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e02709 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0270f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02715 mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0271a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0271c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e02720 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e02726 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e02728 je 0x11e0274c */
  if (C.zf) goto L_11e0274c;
  /* 11e0272a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0272d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e02730 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02736 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11e02739 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e0273c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11e0273f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11e02743 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e0274a jmp 0x11e0275d */
  goto L_11e0275d;
L_11e0274c:;
  /* 11e0274c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e0274f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11e02752 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11e02756 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11e0275d:;
  /* 11e0275d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0275f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02761 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e02763 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e02766 push edx */
  push32((uint32_t)(EDX));
  /* 11e02767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0276a push eax */
  push32((uint32_t)(EAX));
  /* 11e0276b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11e0276e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0276f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e02774 mov edx, dword ptr [0x11e3082c] */
  EDX = (r32((uint32_t)(0x11e3082c)));
  /* 11e0277a push edx */
  push32((uint32_t)(EDX));
  /* 11e0277b call 0x11e08c00 */
  push32(0x11e02780u); f_11e08c00();
  /* 11e02780 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02783 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e02786 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0278a jne 0x11e02791 */
  if (!C.zf) goto L_11e02791;
  /* 11e0278c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0278f jmp 0x11e027b7 */
  goto L_11e027b7;
L_11e02791:;
  /* 11e02791 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02795 jne 0x11e027a1 */
  if (!C.zf) goto L_11e027a1;
  /* 11e02797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0279a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0279f jmp 0x11e027b7 */
  goto L_11e027b7;
L_11e027a1:;
  /* 11e027a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e027a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e027a9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11e027ac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e027b2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e027b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11e027b7:;
  /* 11e027b7 mov esp, ebp */
  ESP = (EBP);
  /* 11e027b9 pop ebp */
  EBP = (pop32());
  /* 11e027ba ret  */
  ESPCHK(0x11e02690u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x11e027c0 (132 bytes, 51 insns) */
void f_11e027c0(void) {
  FTRACE(0x11e027c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e027c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e027c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e027c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e027c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e027c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e027ca and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e027cd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e027cf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e027d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e027d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e027d8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e027dd jns 0x11e027e4 */
  if (!C.sf) goto L_11e027e4;
  /* 11e027df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e027e0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e027e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e027e4:;
  /* 11e027e4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11e027e9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e027eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e027ee or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e027f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e027f4 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e027f6 not edx */
  EDX = (~(EDX));
  /* 11e027f8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e027fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e027fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02801 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e02804 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e02807 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e02809 je 0x11e0280f */
  if (C.zf) goto L_11e0280f;
  /* 11e0280b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0280d jmp 0x11e02840 */
  goto L_11e02840;
L_11e0280f:;
  /* 11e0280f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02812 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02815 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e02818 jmp 0x11e02823 */
  goto L_11e02823;
L_11e0281a:;
  /* 11e0281a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0281d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02820 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e02823:;
  /* 11e02823 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02827 jge 0x11e0283b */
  if ((C.sf==C.of)) goto L_11e0283b;
  /* 11e02829 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0282c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0282f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02833 je 0x11e02839 */
  if (C.zf) goto L_11e02839;
  /* 11e02835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02837 jmp 0x11e02840 */
  goto L_11e02840;
L_11e02839:;
  /* 11e02839 jmp 0x11e0281a */
  goto L_11e0281a;
L_11e0283b:;
  /* 11e0283b mov eax, 1 */
  EAX = (0x1u);
L_11e02840:;
  /* 11e02840 mov esp, ebp */
  ESP = (EBP);
  /* 11e02842 pop ebp */
  EBP = (pop32());
  /* 11e02843 ret  */
  ESPCHK(0x11e027c0u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11e02850 (168 bytes, 63 insns) */
void f_11e02850(void) {
  FTRACE(0x11e02850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02850 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02851 mov ebp, esp */
  EBP = (ESP);
  /* 11e02853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02856 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02859 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0285a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0285d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0285f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e02862 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e02865 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02868 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0286d jns 0x11e02874 */
  if (!C.sf) goto L_11e02874;
  /* 11e0286f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e02870 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02873 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e02874:;
  /* 11e02874 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11e02879 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0287b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0287e mov edx, 1 */
  EDX = (0x1u);
  /* 11e02883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02886 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02888 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0288b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0288e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02891 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11e02894 push edx */
  push32((uint32_t)(EDX));
  /* 11e02895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02898 push eax */
  push32((uint32_t)(EAX));
  /* 11e02899 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0289c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0289f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e028a2 push eax */
  push32((uint32_t)(EAX));
  /* 11e028a3 call 0x11e08f60 */
  push32(0x11e028a8u); f_11e08f60();
  /* 11e028a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e028ab mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e028ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e028b1 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e028b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e028b7 jmp 0x11e028c2 */
  goto L_11e028c2;
L_11e028b9:;
  /* 11e028b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e028bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e028bf mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e028c2:;
  /* 11e028c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e028c6 jl 0x11e028f1 */
  if ((C.sf!=C.of)) goto L_11e028f1;
  /* 11e028c8 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e028cc je 0x11e028f1 */
  if (C.zf) goto L_11e028f1;
  /* 11e028ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e028d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e028d4 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11e028d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e028d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e028da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e028dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e028e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e028e3 push edx */
  push32((uint32_t)(EDX));
  /* 11e028e4 call 0x11e08f60 */
  push32(0x11e028e9u); f_11e08f60();
  /* 11e028e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e028ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e028ef jmp 0x11e028b9 */
  goto L_11e028b9;
L_11e028f1:;
  /* 11e028f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e028f4 mov esp, ebp */
  ESP = (EBP);
  /* 11e028f6 pop ebp */
  EBP = (pop32());
  /* 11e028f7 ret  */
  ESPCHK(0x11e02850u, _esp0);
  ESP += 4; return;
}

/* FUN_10012900 @ 0x11e02900 (219 bytes, 78 insns) */
void f_11e02900(void) {
  FTRACE(0x11e02900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02900 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02901 mov ebp, esp */
  EBP = (ESP);
  /* 11e02903 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02906 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11e0290d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02910 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02913 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e02916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0291c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0291f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02922 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e02923 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02926 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02928 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0292b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0292e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02931 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02937 jns 0x11e0293e */
  if (!C.sf) goto L_11e0293e;
  /* 11e02939 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e0293a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0293d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11e0293e:;
  /* 11e0293e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11e02943 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02945 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e02948 mov edx, 1 */
  EDX = (0x1u);
  /* 11e0294d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02950 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02952 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e02955 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e02958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0295b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0295e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11e02961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e02963 je 0x11e0298f */
  if (C.zf) goto L_11e0298f;
  /* 11e02965 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0296b push eax */
  push32((uint32_t)(EAX));
  /* 11e0296c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0296f push ecx */
  push32((uint32_t)(ECX));
  /* 11e02970 call 0x11e027c0 */
  push32(0x11e02975u); f_11e027c0();
  /* 11e02975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0297a jne 0x11e0298f */
  if (!C.zf) goto L_11e0298f;
  /* 11e0297c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0297f push edx */
  push32((uint32_t)(EDX));
  /* 11e02980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02983 push eax */
  push32((uint32_t)(EAX));
  /* 11e02984 call 0x11e02850 */
  push32(0x11e02989u); f_11e02850();
  /* 11e02989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0298c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e0298f:;
  /* 11e0298f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02992 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02995 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02997 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0299a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0299d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e029a0 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e029a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e029a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e029a8 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e029ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e029ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e029b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e029b4 jmp 0x11e029bf */
  goto L_11e029bf;
L_11e029b6:;
  /* 11e029b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e029b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e029bc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e029bf:;
  /* 11e029bf cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e029c3 jge 0x11e029d4 */
  if ((C.sf==C.of)) goto L_11e029d4;
  /* 11e029c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e029c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e029cb mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11e029d2 jmp 0x11e029b6 */
  goto L_11e029b6;
L_11e029d4:;
  /* 11e029d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e029d7 mov esp, ebp */
  ESP = (EBP);
  /* 11e029d9 pop ebp */
  EBP = (pop32());
  /* 11e029da ret  */
  ESPCHK(0x11e02900u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11e029e0 (76 bytes, 28 insns) */
void f_11e029e0(void) {
  FTRACE(0x11e029e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e029e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e029e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e029e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e029e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e029e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e029ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e029ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e029f2 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e029f9 jmp 0x11e02a04 */
  goto L_11e02a04;
L_11e029fb:;
  /* 11e029fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e029fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02a01 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e02a04:;
  /* 11e02a04 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02a08 jge 0x11e02a28 */
  if ((C.sf==C.of)) goto L_11e02a28;
  /* 11e02a0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02a0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e02a12 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e02a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02a17 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02a1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e02a1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a20 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02a23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e02a26 jmp 0x11e029fb */
  goto L_11e029fb;
L_11e02a28:;
  /* 11e02a28 mov esp, ebp */
  ESP = (EBP);
  /* 11e02a2a pop ebp */
  EBP = (pop32());
  /* 11e02a2b ret  */
  ESPCHK(0x11e029e0u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11e02a30 (47 bytes, 17 insns) */
void f_11e02a30(void) {
  FTRACE(0x11e02a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02a31 mov ebp, esp */
  EBP = (ESP);
  /* 11e02a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e02a3b jmp 0x11e02a46 */
  goto L_11e02a46;
L_11e02a3d:;
  /* 11e02a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e02a46:;
  /* 11e02a46 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02a4a jge 0x11e02a5b */
  if ((C.sf==C.of)) goto L_11e02a5b;
  /* 11e02a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02a52 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11e02a59 jmp 0x11e02a3d */
  goto L_11e02a3d;
L_11e02a5b:;
  /* 11e02a5b mov esp, ebp */
  ESP = (EBP);
  /* 11e02a5d pop ebp */
  EBP = (pop32());
  /* 11e02a5e ret  */
  ESPCHK(0x11e02a30u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11e02a60 (55 bytes, 21 insns) */
void f_11e02a60(void) {
  FTRACE(0x11e02a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02a61 mov ebp, esp */
  EBP = (ESP);
  /* 11e02a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e02a6b jmp 0x11e02a76 */
  goto L_11e02a76;
L_11e02a6d:;
  /* 11e02a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02a73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e02a76:;
  /* 11e02a76 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02a7a jge 0x11e02a8e */
  if ((C.sf==C.of)) goto L_11e02a8e;
  /* 11e02a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02a82 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02a86 je 0x11e02a8c */
  if (C.zf) goto L_11e02a8c;
  /* 11e02a88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02a8a jmp 0x11e02a93 */
  goto L_11e02a93;
L_11e02a8c:;
  /* 11e02a8c jmp 0x11e02a6d */
  goto L_11e02a6d;
L_11e02a8e:;
  /* 11e02a8e mov eax, 1 */
  EAX = (0x1u);
L_11e02a93:;
  /* 11e02a93 mov esp, ebp */
  ESP = (EBP);
  /* 11e02a95 pop ebp */
  EBP = (pop32());
  /* 11e02a96 ret  */
  ESPCHK(0x11e02a60u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11e02aa0 (236 bytes, 82 insns) */
void f_11e02aa0(void) {
  FTRACE(0x11e02aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11e02aa3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02aa6 push esi */
  push32((uint32_t)(ESI));
  /* 11e02aa7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02aaa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e02aab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02aae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02ab0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e02ab3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e02ab6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02ab9 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e02abe jns 0x11e02ac5 */
  if (!C.sf) goto L_11e02ac5;
  /* 11e02ac0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e02ac1 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02ac4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e02ac5:;
  /* 11e02ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e02ac8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02acb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02ace shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02ad0 not edx */
  EDX = (~(EDX));
  /* 11e02ad2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e02ad5 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e02adc mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e02ae3 jmp 0x11e02aee */
  goto L_11e02aee;
L_11e02ae5:;
  /* 11e02ae5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02ae8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02aeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e02aee:;
  /* 11e02aee cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02af2 jge 0x11e02b41 */
  if ((C.sf==C.of)) goto L_11e02b41;
  /* 11e02af4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02afa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e02afd and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11e02b00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e02b03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b09 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e02b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02b0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e02b11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b17 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e02b1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b20 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e02b23 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e02b26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b2c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e02b2f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11e02b34 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02b37 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e02b3a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02b3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e02b3f jmp 0x11e02ae5 */
  goto L_11e02ae5;
L_11e02b41:;
  /* 11e02b41 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11e02b48 jmp 0x11e02b53 */
  goto L_11e02b53;
L_11e02b4a:;
  /* 11e02b4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b4d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02b50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e02b53:;
  /* 11e02b53 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02b57 jl 0x11e02b87 */
  if ((C.sf!=C.of)) goto L_11e02b87;
  /* 11e02b59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b5c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02b5f jl 0x11e02b78 */
  if ((C.sf!=C.of)) goto L_11e02b78;
  /* 11e02b61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b64 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02b67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b6d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b70 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11e02b73 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e02b76 jmp 0x11e02b85 */
  goto L_11e02b85;
L_11e02b78:;
  /* 11e02b78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02b7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b7e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11e02b85:;
  /* 11e02b85 jmp 0x11e02b4a */
  goto L_11e02b4a;
L_11e02b87:;
  /* 11e02b87 pop esi */
  ESI = (pop32());
  /* 11e02b88 mov esp, ebp */
  ESP = (EBP);
  /* 11e02b8a pop ebp */
  EBP = (pop32());
  /* 11e02b8b ret  */
  ESPCHK(0x11e02aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x11e02b90 (578 bytes, 188 insns) */
void f_11e02b90(void) {
  FTRACE(0x11e02b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02b91 mov ebp, esp */
  EBP = (ESP);
  /* 11e02b93 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02b99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e02b9b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11e02b9f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e02ba5 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02bab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e02bae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02bb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02bb3 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11e02bb7 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02bbc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e02bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02bc2 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11e02bc5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e02bc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02bcb mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11e02bce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e02bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02bd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02bd6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e02bd9 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e02bdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e02bdf cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02be6 jne 0x11e02c20 */
  if (!C.zf) goto L_11e02c20;
  /* 11e02be8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e02bef lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11e02bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02bf3 call 0x11e02a60 */
  push32(0x11e02bf8u); f_11e02a60();
  /* 11e02bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02bfd je 0x11e02c08 */
  if (C.zf) goto L_11e02c08;
  /* 11e02bff mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e02c06 jmp 0x11e02c1b */
  goto L_11e02c1b;
L_11e02c08:;
  /* 11e02c08 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11e02c0b push edx */
  push32((uint32_t)(EDX));
  /* 11e02c0c call 0x11e02a30 */
  push32(0x11e02c11u); f_11e02a30();
  /* 11e02c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02c14 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11e02c1b:;
  /* 11e02c1b jmp 0x11e02d6c */
  goto L_11e02d6c;
L_11e02c20:;
  /* 11e02c20 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e02c23 push eax */
  push32((uint32_t)(EAX));
  /* 11e02c24 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11e02c27 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02c28 call 0x11e029e0 */
  push32(0x11e02c2du); f_11e029e0();
  /* 11e02c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02c30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02c33 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e02c36 push eax */
  push32((uint32_t)(EAX));
  /* 11e02c37 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11e02c3a push ecx */
  push32((uint32_t)(ECX));
  /* 11e02c3b call 0x11e02900 */
  push32(0x11e02c40u); f_11e02900();
  /* 11e02c40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02c45 je 0x11e02c50 */
  if (C.zf) goto L_11e02c50;
  /* 11e02c47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02c4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02c4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e02c50:;
  /* 11e02c50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02c53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02c56 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e02c59 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02c5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02c5f jge 0x11e02c80 */
  if ((C.sf==C.of)) goto L_11e02c80;
  /* 11e02c61 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e02c64 push eax */
  push32((uint32_t)(EAX));
  /* 11e02c65 call 0x11e02a30 */
  push32(0x11e02c6au); f_11e02a30();
  /* 11e02c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02c6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e02c74 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11e02c7b jmp 0x11e02d6c */
  goto L_11e02d6c;
L_11e02c80:;
  /* 11e02c80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02c86 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02c89 jg 0x11e02cf0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e02cf0;
  /* 11e02c8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02c8e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e02c91 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02c94 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11e02c97 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11e02c9a push edx */
  push32((uint32_t)(EDX));
  /* 11e02c9b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e02c9e push eax */
  push32((uint32_t)(EAX));
  /* 11e02c9f call 0x11e029e0 */
  push32(0x11e02ca4u); f_11e029e0();
  /* 11e02ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02ca7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e02caa push ecx */
  push32((uint32_t)(ECX));
  /* 11e02cab lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11e02cae push edx */
  push32((uint32_t)(EDX));
  /* 11e02caf call 0x11e02aa0 */
  push32(0x11e02cb4u); f_11e02aa0();
  /* 11e02cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02cb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02cba mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e02cbd push ecx */
  push32((uint32_t)(ECX));
  /* 11e02cbe lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11e02cc1 push edx */
  push32((uint32_t)(EDX));
  /* 11e02cc2 call 0x11e02900 */
  push32(0x11e02cc7u); f_11e02900();
  /* 11e02cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02cca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02ccd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e02cd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02cd4 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11e02cd7 push edx */
  push32((uint32_t)(EDX));
  /* 11e02cd8 call 0x11e02aa0 */
  push32(0x11e02cddu); f_11e02aa0();
  /* 11e02cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02ce0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e02ce7 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11e02cee jmp 0x11e02d6c */
  goto L_11e02d6c;
L_11e02cf0:;
  /* 11e02cf0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02cf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02cf6 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02cf8 jl 0x11e02d3b */
  if ((C.sf!=C.of)) goto L_11e02d3b;
  /* 11e02cfa lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11e02cfd push edx */
  push32((uint32_t)(EDX));
  /* 11e02cfe call 0x11e02a30 */
  push32(0x11e02d03u); f_11e02a30();
  /* 11e02d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e02d09 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02d0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e02d11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d14 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e02d17 push edx */
  push32((uint32_t)(EDX));
  /* 11e02d18 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e02d1b push eax */
  push32((uint32_t)(EAX));
  /* 11e02d1c call 0x11e02aa0 */
  push32(0x11e02d21u); f_11e02aa0();
  /* 11e02d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e02d29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d2c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e02d32 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11e02d39 jmp 0x11e02d6c */
  goto L_11e02d6c;
L_11e02d3b:;
  /* 11e02d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02d41 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d44 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e02d47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e02d4a and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e02d4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e02d52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e02d58 push edx */
  push32((uint32_t)(EDX));
  /* 11e02d59 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e02d5c push eax */
  push32((uint32_t)(EAX));
  /* 11e02d5d call 0x11e02aa0 */
  push32(0x11e02d62u); f_11e02aa0();
  /* 11e02d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d65 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11e02d6c:;
  /* 11e02d6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02d6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e02d72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02d75 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11e02d7a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02d7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e02d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02d82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02d85 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e02d87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e02d8a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02d8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e02d8f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e02d91 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02d93 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e02d99 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02d9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e02d9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02da1 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02da5 jne 0x11e02dba */
  if (!C.zf) goto L_11e02dba;
  /* 11e02da7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02daa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e02dad mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e02db0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02db3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e02db6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e02db8 jmp 0x11e02dcb */
  goto L_11e02dcb;
L_11e02dba:;
  /* 11e02dba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02dbd cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02dc1 jne 0x11e02dcb */
  if (!C.zf) goto L_11e02dcb;
  /* 11e02dc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e02dc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11e02dcb:;
  /* 11e02dcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e02dce mov esp, ebp */
  ESP = (EBP);
  /* 11e02dd0 pop ebp */
  EBP = (pop32());
  /* 11e02dd1 ret  */
  ESPCHK(0x11e02b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012de0 @ 0x11e02de0 (26 bytes, 11 insns) */
void f_11e02de0(void) {
  FTRACE(0x11e02de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02de1 mov ebp, esp */
  EBP = (ESP);
  /* 11e02de3 push 0x11e2e218 */
  push32((uint32_t)(0x11e2e218u));
  /* 11e02de8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02deb push eax */
  push32((uint32_t)(EAX));
  /* 11e02dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02def push ecx */
  push32((uint32_t)(ECX));
  /* 11e02df0 call 0x11e02b90 */
  push32(0x11e02df5u); f_11e02b90();
  /* 11e02df5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02df8 pop ebp */
  EBP = (pop32());
  /* 11e02df9 ret  */
  ESPCHK(0x11e02de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e00 @ 0x11e02e00 (26 bytes, 11 insns) */
void f_11e02e00(void) {
  FTRACE(0x11e02e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02e01 mov ebp, esp */
  EBP = (ESP);
  /* 11e02e03 push 0x11e2e230 */
  push32((uint32_t)(0x11e2e230u));
  /* 11e02e08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02e0b push eax */
  push32((uint32_t)(EAX));
  /* 11e02e0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e0f push ecx */
  push32((uint32_t)(ECX));
  /* 11e02e10 call 0x11e02b90 */
  push32(0x11e02e15u); f_11e02b90();
  /* 11e02e15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02e18 pop ebp */
  EBP = (pop32());
  /* 11e02e19 ret  */
  ESPCHK(0x11e02e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x11e02e20 (191 bytes, 58 insns) */
void f_11e02e20(void) {
  FTRACE(0x11e02e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02e21 mov ebp, esp */
  EBP = (ESP);
  /* 11e02e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02e26 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e02e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e02e32 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11e02e36 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e02e3c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e02e40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02e45 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11e02e49 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e02e4e mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11e02e52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e55 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11e02e58 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e02e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e5e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11e02e61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e02e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e02e69 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e02e6c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e02e6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e02e72 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e02e74 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11e02e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02e78 call 0x11e02900 */
  push32(0x11e02e7du); f_11e02900();
  /* 11e02e7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02e82 je 0x11e02e97 */
  if (C.zf) goto L_11e02e97;
  /* 11e02e84 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11e02e8b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e02e8f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e02e93 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11e02e97:;
  /* 11e02e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02e9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e02e9f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02ea4 jne 0x11e02ead */
  if (!C.zf) goto L_11e02ead;
  /* 11e02ea6 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11e02ead:;
  /* 11e02ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02eb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e02eb3 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e02eb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02eb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e02ebc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e02ebe mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e02ec1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e02ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02eca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e02ecf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e02ed1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02ed4 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11e02ed8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e02edb mov esp, ebp */
  ESP = (EBP);
  /* 11e02edd pop ebp */
  EBP = (pop32());
  /* 11e02ede ret  */
  ESPCHK(0x11e02e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ee0 @ 0x11e02ee0 (54 bytes, 24 insns) */
void f_11e02ee0(void) {
  FTRACE(0x11e02ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11e02ee3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02eee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11e02ef2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11e02ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02ef6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e02ef9 push edx */
  push32((uint32_t)(EDX));
  /* 11e02efa call 0x11e09260 */
  push32(0x11e02effu); f_11e09260();
  /* 11e02eff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02f05 push eax */
  push32((uint32_t)(EAX));
  /* 11e02f06 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e02f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02f0a call 0x11e02de0 */
  push32(0x11e02f0fu); f_11e02de0();
  /* 11e02f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f12 mov esp, ebp */
  ESP = (EBP);
  /* 11e02f14 pop ebp */
  EBP = (pop32());
  /* 11e02f15 ret  */
  ESPCHK(0x11e02ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x11e02f20 (54 bytes, 24 insns) */
void f_11e02f20(void) {
  FTRACE(0x11e02f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02f21 mov ebp, esp */
  EBP = (ESP);
  /* 11e02f23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e02f2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02f31 push eax */
  push32((uint32_t)(EAX));
  /* 11e02f32 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11e02f35 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02f36 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e02f39 push edx */
  push32((uint32_t)(EDX));
  /* 11e02f3a call 0x11e09260 */
  push32(0x11e02f3fu); f_11e09260();
  /* 11e02f3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02f45 push eax */
  push32((uint32_t)(EAX));
  /* 11e02f46 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e02f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02f4a call 0x11e02e20 */
  push32(0x11e02f4fu); f_11e02e20();
  /* 11e02f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f52 mov esp, ebp */
  ESP = (EBP);
  /* 11e02f54 pop ebp */
  EBP = (pop32());
  /* 11e02f55 ret  */
  ESPCHK(0x11e02f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f60 @ 0x11e02f60 (54 bytes, 24 insns) */
void f_11e02f60(void) {
  FTRACE(0x11e02f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02f61 mov ebp, esp */
  EBP = (ESP);
  /* 11e02f63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e02f6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e02f71 push eax */
  push32((uint32_t)(EAX));
  /* 11e02f72 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11e02f75 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02f76 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e02f79 push edx */
  push32((uint32_t)(EDX));
  /* 11e02f7a call 0x11e09260 */
  push32(0x11e02f7fu); f_11e09260();
  /* 11e02f7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02f85 push eax */
  push32((uint32_t)(EAX));
  /* 11e02f86 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e02f89 push ecx */
  push32((uint32_t)(ECX));
  /* 11e02f8a call 0x11e02e00 */
  push32(0x11e02f8fu); f_11e02e00();
  /* 11e02f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02f92 mov esp, ebp */
  ESP = (EBP);
  /* 11e02f94 pop ebp */
  EBP = (pop32());
  /* 11e02f95 ret  */
  ESPCHK(0x11e02f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012fa0 @ 0x11e02fa0 (250 bytes, 90 insns) */
void f_11e02fa0(void) {
  FTRACE(0x11e02fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e02fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e02fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11e02fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e02fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e02fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e02fac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e02faf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e02fb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e02fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02fb8 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11e02fbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02fc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e02fc4:;
  /* 11e02fc4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e02fc8 jle 0x11e0300b */
  if ((C.zf||C.sf!=C.of)) goto L_11e0300b;
  /* 11e02fca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02fcd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e02fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e02fd2 je 0x11e02fe8 */
  if (C.zf) goto L_11e02fe8;
  /* 11e02fd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02fd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e02fda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e02fdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e02fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02fe3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e02fe6 jmp 0x11e02fef */
  goto L_11e02fef;
L_11e02fe8:;
  /* 11e02fe8 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11e02fef:;
  /* 11e02fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02ff2 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e02ff5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11e02ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e02ffa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e02ffd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e03000 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03003 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03006 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e03009 jmp 0x11e02fc4 */
  goto L_11e02fc4;
L_11e0300b:;
  /* 11e0300b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0300e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e03011 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03015 jl 0x11e03054 */
  if ((C.sf!=C.of)) goto L_11e03054;
  /* 11e03017 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0301a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0301d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03020 jl 0x11e03054 */
  if ((C.sf!=C.of)) goto L_11e03054;
  /* 11e03022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03025 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03028 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0302b:;
  /* 11e0302b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0302e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e03031 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03034 jne 0x11e03047 */
  if (!C.zf) goto L_11e03047;
  /* 11e03036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03039 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11e0303c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0303f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03042 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e03045 jmp 0x11e0302b */
  goto L_11e0302b;
L_11e03047:;
  /* 11e03047 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0304a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0304c add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0304f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03052 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11e03054:;
  /* 11e03054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03057 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0305a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0305d jne 0x11e03070 */
  if (!C.zf) goto L_11e03070;
  /* 11e0305f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e03062 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e03065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03068 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0306b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e0306e jmp 0x11e03096 */
  goto L_11e03096;
L_11e03070:;
  /* 11e03070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03073 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03076 push eax */
  push32((uint32_t)(EAX));
  /* 11e03077 call 0x11e01410 */
  push32(0x11e0307cu); f_11e01410();
  /* 11e0307c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0307f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03082 push eax */
  push32((uint32_t)(EAX));
  /* 11e03083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03086 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03089 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0308a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0308d push edx */
  push32((uint32_t)(EDX));
  /* 11e0308e call 0x11e032f0 */
  push32(0x11e03093u); f_11e032f0();
  /* 11e03093 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e03096:;
  /* 11e03096 mov esp, ebp */
  ESP = (EBP);
  /* 11e03098 pop ebp */
  EBP = (pop32());
  /* 11e03099 ret  */
  ESPCHK(0x11e02fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130a0 @ 0x11e030a0 (119 bytes, 44 insns) */
void f_11e030a0(void) {
  FTRACE(0x11e030a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e030a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e030a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e030a3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e030a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e030a9 push eax */
  push32((uint32_t)(EAX));
  /* 11e030aa lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e030ad push ecx */
  push32((uint32_t)(ECX));
  /* 11e030ae call 0x11e03120 */
  push32(0x11e030b3u); f_11e03120();
  /* 11e030b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e030b6 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11e030b9 push edx */
  push32((uint32_t)(EDX));
  /* 11e030ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11e030bc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e030be sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e030c1 mov eax, esp */
  EAX = (ESP);
  /* 11e030c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e030c6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e030c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e030cb mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e030ce mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e030d2 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11e030d6 call 0x11e09de0 */
  push32(0x11e030dbu); f_11e09de0();
  /* 11e030db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e030de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e030e1 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e030e4 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11e030e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e030eb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e030ed movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11e030f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e030f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e030f7 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11e030fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e030fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e030fe push edx */
  push32((uint32_t)(EDX));
  /* 11e030ff call 0x11e01590 */
  push32(0x11e03104u); f_11e01590();
  /* 11e03104 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0310a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0310d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11e03110 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e03113 mov esp, ebp */
  ESP = (EBP);
  /* 11e03115 pop ebp */
  EBP = (pop32());
  /* 11e03116 ret  */
  ESPCHK(0x11e030a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013120 @ 0x11e03120 (354 bytes, 104 insns) */
void f_11e03120(void) {
  FTRACE(0x11e03120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03120 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03121 mov ebp, esp */
  EBP = (ESP);
  /* 11e03123 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03126 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11e0312d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e03133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03136 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03138 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11e0313c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11e03142 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e03145 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11e03149 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0314c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0314e mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11e03152 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e03157 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11e0315b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0315e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03161 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e03167 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0316a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0316d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0316f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e03172 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e03175 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0317b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e0317e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03182 je 0x11e03197 */
  if (C.zf) goto L_11e03197;
  /* 11e03184 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0318b je 0x11e0318f */
  if (C.zf) goto L_11e0318f;
  /* 11e0318d jmp 0x11e031da */
  goto L_11e031da;
L_11e0318f:;
  /* 11e0318f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11e03195 jmp 0x11e031f5 */
  goto L_11e031f5;
L_11e03197:;
  /* 11e03197 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0319b jne 0x11e031c4 */
  if (!C.zf) goto L_11e031c4;
  /* 11e0319d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e031a1 jne 0x11e031c4 */
  if (!C.zf) goto L_11e031c4;
  /* 11e031a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e031a6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e031ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e031b0 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11e031b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e031b9 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11e031bf jmp 0x11e0327e */
  goto L_11e0327e;
L_11e031c4:;
  /* 11e031c4 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11e031c8 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e031cd mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e031d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e031d8 jmp 0x11e031f5 */
  goto L_11e031f5;
L_11e031da:;
  /* 11e031da mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11e031de sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e031e3 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11e031e7 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11e031eb add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e031f1 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11e031f5:;
  /* 11e031f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e031f8 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11e031fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e031fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03200 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e03203 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11e03206 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0320b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e0320e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e03211 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11e03214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03217 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e03219:;
  /* 11e03219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0321c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0321f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e03225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03227 jne 0x11e03264 */
  if (!C.zf) goto L_11e03264;
  /* 11e03229 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0322c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0322f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e03231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03234 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e03236 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0323c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0323e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03240 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e03242 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03247 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e0324a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0324d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0324f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e03251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03254 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e03256 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0325a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0325e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11e03262 jmp 0x11e03219 */
  goto L_11e03219;
L_11e03264:;
  /* 11e03264 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e03267 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0326c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0326f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e03275 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0327a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11e0327e:;
  /* 11e0327e mov esp, ebp */
  ESP = (EBP);
  /* 11e03280 pop ebp */
  EBP = (pop32());
  /* 11e03281 ret  */
  ESPCHK(0x11e03120u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11e03290 (88 bytes, 40 insns) */
void f_11e03290(void) {
  FTRACE(0x11e03290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03290 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e03294 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e03298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0329a je 0x11e032e3 */
  if (C.zf) goto L_11e032e3;
  /* 11e0329c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0329e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e032a2 push edi */
  push32((uint32_t)(EDI));
  /* 11e032a3 mov edi, ecx */
  EDI = (ECX);
  /* 11e032a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e032a8 jb 0x11e032d7 */
  if (C.cf) goto L_11e032d7;
  /* 11e032aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e032ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e032af je 0x11e032b9 */
  if (C.zf) goto L_11e032b9;
  /* 11e032b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e032b3:;
  /* 11e032b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e032b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e032b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e032b7 jne 0x11e032b3 */
  if (!C.zf) goto L_11e032b3;
L_11e032b9:;
  /* 11e032b9 mov ecx, eax */
  ECX = (EAX);
  /* 11e032bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e032be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e032c0 mov ecx, eax */
  ECX = (EAX);
  /* 11e032c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e032c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e032c7 mov ecx, edx */
  ECX = (EDX);
  /* 11e032c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e032cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e032cf je 0x11e032d7 */
  if (C.zf) goto L_11e032d7;
  /* 11e032d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e032d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e032d5 je 0x11e032dd */
  if (C.zf) goto L_11e032dd;
L_11e032d7:;
  /* 11e032d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e032d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e032da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e032db jne 0x11e032d7 */
  if (!C.zf) goto L_11e032d7;
L_11e032dd:;
  /* 11e032dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e032e1 pop edi */
  EDI = (pop32());
  /* 11e032e2 ret  */
  ESPCHK(0x11e03290u, _esp0);
  ESP += 4; return;
L_11e032e3:;
  /* 11e032e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e032e7 ret  */
  ESPCHK(0x11e03290u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x11e032f0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_11e032f0(void) {
  FTRACE(0x11e032f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e032f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e032f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e032f3 push edi */
  push32((uint32_t)(EDI));
  /* 11e032f4 push esi */
  push32((uint32_t)(ESI));
  /* 11e032f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e032f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e032fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e032fe mov eax, ecx */
  EAX = (ECX);
  /* 11e03300 mov edx, ecx */
  EDX = (ECX);
  /* 11e03302 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03304 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03306 jbe 0x11e03310 */
  if ((C.cf||C.zf)) goto L_11e03310;
  /* 11e03308 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0330a jb 0x11e03488 */
  if (C.cf) goto L_11e03488;
L_11e03310:;
  /* 11e03310 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e03316 jne 0x11e0332c */
  if (!C.zf) goto L_11e0332c;
  /* 11e03318 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e0331b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0331e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03321 jb 0x11e0334c */
  if (C.cf) goto L_11e0334c;
  /* 11e03323 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e03325 jmp dword ptr [edx*4 + 0x11e03438] */
  switch (EDX) {
    case 0: goto L_11e03448;
    case 1: goto L_11e03450;
    case 2: goto L_11e0345c;
    case 3: goto L_11e03470;
    default: x86_unimpl("switch@0x11e03325 out of table"); return;
  }
L_11e0332c:;
  /* 11e0332c mov eax, edi */
  EAX = (EDI);
  /* 11e0332e mov edx, 3 */
  EDX = (0x3u);
  /* 11e03333 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03336 jb 0x11e03344 */
  if (C.cf) goto L_11e03344;
  /* 11e03338 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0333b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0333d jmp dword ptr [eax*4 + 0x11e03350] */
  switch (EAX) {
    case 1: goto L_11e03360;
    case 2: goto L_11e0338c;
    case 3: goto L_11e033b0;
    default: x86_unimpl("switch@0x11e0333d out of table"); return;
  }
L_11e03344:;
  /* 11e03344 jmp dword ptr [ecx*4 + 0x11e03448] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e03448)))); return;
  /* 11e0334b nop  */
  /* nop */
L_11e0334c:;
  /* 11e0334c jmp dword ptr [ecx*4 + 0x11e033cc] */
  switch (ECX) {
    case 0: goto L_11e0342f;
    case 1: goto L_11e0341c;
    case 2: goto L_11e03414;
    case 3: goto L_11e0340c;
    case 4: goto L_11e03404;
    case 5: goto L_11e033fc;
    case 6: goto L_11e033f4;
    case 7: goto L_11e033ec;
    default: x86_unimpl("switch@0x11e0334c out of table"); return;
  }
  /* 11e03353 nop  */
  /* nop */
L_11e03360:;
  /* 11e03360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e03362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e03364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e03366 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e03369 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e0336c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e0336f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e03372 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e03375 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03378 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0337b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0337e jb 0x11e0334c */
  if (C.cf) goto L_11e0334c;
  /* 11e03380 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e03382 jmp dword ptr [edx*4 + 0x11e03438] */
  switch (EDX) {
    case 0: goto L_11e03448;
    case 1: goto L_11e03450;
    case 2: goto L_11e0345c;
    case 3: goto L_11e03470;
    default: x86_unimpl("switch@0x11e03382 out of table"); return;
  }
  /* 11e03389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e0338c:;
  /* 11e0338c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0338e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e03390 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e03392 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e03395 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e03398 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e0339b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0339e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e033a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e033a4 jb 0x11e0334c */
  if (C.cf) goto L_11e0334c;
  /* 11e033a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e033a8 jmp dword ptr [edx*4 + 0x11e03438] */
  switch (EDX) {
    case 0: goto L_11e03448;
    case 1: goto L_11e03450;
    case 2: goto L_11e0345c;
    case 3: goto L_11e03470;
    default: x86_unimpl("switch@0x11e033a8 out of table"); return;
  }
  /* 11e033af nop  */
  /* nop */
L_11e033b0:;
  /* 11e033b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e033b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e033b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e033b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e033b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e033ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e033bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e033be jb 0x11e0334c */
  if (C.cf) goto L_11e0334c;
  /* 11e033c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e033c2 jmp dword ptr [edx*4 + 0x11e03438] */
  switch (EDX) {
    case 0: goto L_11e03448;
    case 1: goto L_11e03450;
    case 2: goto L_11e0345c;
    case 3: goto L_11e03470;
    default: x86_unimpl("switch@0x11e033c2 out of table"); return;
  }
  /* 11e033c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e033ec:;
  /* 11e033ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e033f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e033f4:;
  /* 11e033f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e033f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e033fc:;
  /* 11e033fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e03400 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e03404:;
  /* 11e03404 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e03408 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e0340c:;
  /* 11e0340c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e03410 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e03414:;
  /* 11e03414 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e03418 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e0341c:;
  /* 11e0341c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e03420 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e03424 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e0342b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0342d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e0342f:;
  /* 11e0342f jmp dword ptr [edx*4 + 0x11e03438] */
  switch (EDX) {
    case 0: goto L_11e03448;
    case 1: goto L_11e03450;
    case 2: goto L_11e0345c;
    case 3: goto L_11e03470;
    default: x86_unimpl("switch@0x11e0342f out of table"); return;
  }
  /* 11e03436 mov edi, edi */
  EDI = (EDI);
L_11e03448:;
  /* 11e03448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0344b pop esi */
  ESI = (pop32());
  /* 11e0344c pop edi */
  EDI = (pop32());
  /* 11e0344d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0344e ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e0344f nop  */
  /* nop */
L_11e03450:;
  /* 11e03450 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e03452 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e03454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03457 pop esi */
  ESI = (pop32());
  /* 11e03458 pop edi */
  EDI = (pop32());
  /* 11e03459 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0345a ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e0345b nop  */
  /* nop */
L_11e0345c:;
  /* 11e0345c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0345e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e03460 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e03463 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e03466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03469 pop esi */
  ESI = (pop32());
  /* 11e0346a pop edi */
  EDI = (pop32());
  /* 11e0346b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0346c ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e0346d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e03470:;
  /* 11e03470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e03472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e03474 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e03477 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e0347a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e0347d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e03480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03483 pop esi */
  ESI = (pop32());
  /* 11e03484 pop edi */
  EDI = (pop32());
  /* 11e03485 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e03486 ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e03487 nop  */
  /* nop */
L_11e03488:;
  /* 11e03488 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e0348c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e03490 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e03496 jne 0x11e034bc */
  if (!C.zf) goto L_11e034bc;
  /* 11e03498 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e0349b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0349e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e034a1 jb 0x11e034b0 */
  if (C.cf) goto L_11e034b0;
  /* 11e034a3 std  */
  C.df=1;
  /* 11e034a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e034a6 cld  */
  C.df=0;
  /* 11e034a7 jmp dword ptr [edx*4 + 0x11e035d0] */
  switch (EDX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e034a7 out of table"); return;
  }
  /* 11e034ae mov edi, edi */
  EDI = (EDI);
L_11e034b0:;
  /* 11e034b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e034b2 jmp dword ptr [ecx*4 + 0x11e03580] */
  switch (ECX) {
    case 0: goto L_11e035c7;
    default: x86_unimpl("switch@0x11e034b2 out of table"); return;
  }
  /* 11e034b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e034bc:;
  /* 11e034bc mov eax, edi */
  EAX = (EDI);
  /* 11e034be mov edx, 3 */
  EDX = (0x3u);
  /* 11e034c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e034c6 jb 0x11e034d4 */
  if (C.cf) goto L_11e034d4;
  /* 11e034c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e034cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e034cd jmp dword ptr [eax*4 + 0x11e034d8] */
  switch (EAX) {
    case 1: goto L_11e034e8;
    case 2: goto L_11e03508;
    case 3: goto L_11e03530;
    default: x86_unimpl("switch@0x11e034cd out of table"); return;
  }
L_11e034d4:;
  /* 11e034d4 jmp dword ptr [ecx*4 + 0x11e035d0] */
  switch (ECX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e034d4 out of table"); return;
  }
  /* 11e034db nop  */
  /* nop */
L_11e034e8:;
  /* 11e034e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e034eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e034ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e034f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e034f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e034f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e034f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e034f8 jb 0x11e034b0 */
  if (C.cf) goto L_11e034b0;
  /* 11e034fa std  */
  C.df=1;
  /* 11e034fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e034fd cld  */
  C.df=0;
  /* 11e034fe jmp dword ptr [edx*4 + 0x11e035d0] */
  switch (EDX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e034fe out of table"); return;
  }
  /* 11e03505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e03508:;
  /* 11e03508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e0350b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0350d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e03510 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e03513 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e03516 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e03519 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0351c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0351f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03522 jb 0x11e034b0 */
  if (C.cf) goto L_11e034b0;
  /* 11e03524 std  */
  C.df=1;
  /* 11e03525 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e03527 cld  */
  C.df=0;
  /* 11e03528 jmp dword ptr [edx*4 + 0x11e035d0] */
  switch (EDX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e03528 out of table"); return;
  }
  /* 11e0352f nop  */
  /* nop */
L_11e03530:;
  /* 11e03530 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e03533 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e03535 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e03538 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e0353b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e0353e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e03541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e03544 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e03547 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0354a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0354d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03550 jb 0x11e034b0 */
  if (C.cf) goto L_11e034b0;
  /* 11e03556 std  */
  C.df=1;
  /* 11e03557 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e03559 cld  */
  C.df=0;
  /* 11e0355a jmp dword ptr [edx*4 + 0x11e035d0] */
  switch (EDX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e0355a out of table"); return;
  }
  /* 11e03561 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e03564 test byte ptr [0x358c11e0], dh */
  { uint32_t _r=(r8((uint32_t)(0x358c11e0)))&(C.d.b.h); fl_logic(_r,8); }
  /* 11e0356a loopne 0x11e0357d */
  x86_unimpl("loopne @ 0x11e0356a");
  /* 11e0356c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11e0356d xor eax, 0x359c11e0 */
  { uint32_t _r=(EAX)^(0x359c11e0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e03572 loopne 0x11e03585 */
  x86_unimpl("loopne @ 0x11e03572");
  /* 11e03574 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11e03575 xor eax, 0x35ac11e0 */
  { uint32_t _r=(EAX)^(0x35ac11e0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0357a loopne 0x11e0358d */
  x86_unimpl("loopne @ 0x11e0357a");
  /* 11e0357c mov ah, 0x35 */
  AH = (0x35u);
  /* 11e0357e loopne 0x11e03591 */
  x86_unimpl("loopne @ 0x11e0357e");
  /* 11e03584 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e03588 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e0358c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e03590 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e03594 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e03598 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e0359c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e035a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e035a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e035a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e035ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e035b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e035b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e035b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e035bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e035c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e035c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e035c7:;
  /* 11e035c7 jmp dword ptr [edx*4 + 0x11e035d0] */
  switch (EDX) {
    case 0: goto L_11e035e0;
    case 1: goto L_11e035e8;
    case 2: goto L_11e035f8;
    case 3: goto L_11e0360c;
    default: x86_unimpl("switch@0x11e035c7 out of table"); return;
  }
  /* 11e035ce mov edi, edi */
  EDI = (EDI);
L_11e035e0:;
  /* 11e035e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e035e3 pop esi */
  ESI = (pop32());
  /* 11e035e4 pop edi */
  EDI = (pop32());
  /* 11e035e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e035e6 ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e035e7 nop  */
  /* nop */
L_11e035e8:;
  /* 11e035e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e035eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e035ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e035f1 pop esi */
  ESI = (pop32());
  /* 11e035f2 pop edi */
  EDI = (pop32());
  /* 11e035f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e035f4 ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e035f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e035f8:;
  /* 11e035f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e035fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e035fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e03601 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e03604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03607 pop esi */
  ESI = (pop32());
  /* 11e03608 pop edi */
  EDI = (pop32());
  /* 11e03609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0360a ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
  /* 11e0360b nop  */
  /* nop */
L_11e0360c:;
  /* 11e0360c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e0360f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e03612 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e03615 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e03618 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e0361b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e0361e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03621 pop esi */
  ESI = (pop32());
  /* 11e03622 pop edi */
  EDI = (pop32());
  /* 11e03623 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e03624 ret  */
  ESPCHK(0x11e032f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11e03630 (15 bytes, 7 insns) */
void f_11e03630(void) {
  FTRACE(0x11e03630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03630 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03631 mov ebp, esp */
  EBP = (ESP);
  /* 11e03633 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e03635 call 0x11dfa8c0 */
  push32(0x11e0363au); f_11dfa8c0();
  /* 11e0363a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0363d pop ebp */
  EBP = (pop32());
  /* 11e0363e ret  */
  ESPCHK(0x11e03630u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11e03640 (48 bytes, 17 insns) */
void f_11e03640(void) {
  FTRACE(0x11e03640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03640 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03641 mov ebp, esp */
  EBP = (ESP);
  /* 11e03643 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03644 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03646 call 0x11dfbd50 */
  push32(0x11e0364bu); f_11dfbd50();
  /* 11e0364b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0364e mov eax, dword ptr [0x11e30804] */
  EAX = (r32((uint32_t)(0x11e30804)));
  /* 11e03653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e03656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03659 mov dword ptr [0x11e30804], ecx */
  w32((uint32_t)(0x11e30804), (ECX));
  /* 11e0365f push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03661 call 0x11dfbdf0 */
  push32(0x11e03666u); f_11dfbdf0();
  /* 11e03666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0366c mov esp, ebp */
  ESP = (EBP);
  /* 11e0366e pop ebp */
  EBP = (pop32());
  /* 11e0366f ret  */
  ESPCHK(0x11e03640u, _esp0);
  ESP += 4; return;
}

/* FUN_10013670 @ 0x11e03670 (10 bytes, 5 insns) */
void f_11e03670(void) {
  FTRACE(0x11e03670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03670 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03671 mov ebp, esp */
  EBP = (ESP);
  /* 11e03673 mov eax, dword ptr [0x11e30804] */
  EAX = (r32((uint32_t)(0x11e30804)));
  /* 11e03678 pop ebp */
  EBP = (pop32());
  /* 11e03679 ret  */
  ESPCHK(0x11e03670u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11e03680 (45 bytes, 19 insns) */
void f_11e03680(void) {
  FTRACE(0x11e03680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03680 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03681 mov ebp, esp */
  EBP = (ESP);
  /* 11e03683 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03684 mov eax, dword ptr [0x11e30804] */
  EAX = (r32((uint32_t)(0x11e30804)));
  /* 11e03689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0368c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03690 je 0x11e036a0 */
  if (C.zf) goto L_11e036a0;
  /* 11e03692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03695 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03696 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11e03699u);
  /* 11e03699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0369c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0369e jne 0x11e036a4 */
  if (!C.zf) goto L_11e036a4;
L_11e036a0:;
  /* 11e036a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e036a2 jmp 0x11e036a9 */
  goto L_11e036a9;
L_11e036a4:;
  /* 11e036a4 mov eax, 1 */
  EAX = (0x1u);
L_11e036a9:;
  /* 11e036a9 mov esp, ebp */
  ESP = (EBP);
  /* 11e036ab pop ebp */
  EBP = (pop32());
  /* 11e036ac ret  */
  ESPCHK(0x11e03680u, _esp0);
  ESP += 4; return;
}

/* FUN_100136b0 @ 0x11e036b0 (23 bytes, 10 insns) */
void f_11e036b0(void) {
  FTRACE(0x11e036b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e036b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e036b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e036b3 mov eax, dword ptr [0x11e30800] */
  EAX = (r32((uint32_t)(0x11e30800)));
  /* 11e036b8 push eax */
  push32((uint32_t)(EAX));
  /* 11e036b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e036bc push ecx */
  push32((uint32_t)(ECX));
  /* 11e036bd call 0x11e036d0 */
  push32(0x11e036c2u); f_11e036d0();
  /* 11e036c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e036c5 pop ebp */
  EBP = (pop32());
  /* 11e036c6 ret  */
  ESPCHK(0x11e036b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11e036d0 (87 bytes, 34 insns) */
void f_11e036d0(void) {
  FTRACE(0x11e036d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e036d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e036d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e036d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e036d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e036d8 jbe 0x11e036de */
  if ((C.cf||C.zf)) goto L_11e036de;
  /* 11e036da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e036dc jmp 0x11e03723 */
  goto L_11e03723;
L_11e036de:;
  /* 11e036de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e036e2 ja 0x11e036f5 */
  if ((!C.cf&&!C.zf)) goto L_11e036f5;
  /* 11e036e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e036e7 push eax */
  push32((uint32_t)(EAX));
  /* 11e036e8 call 0x11e03730 */
  push32(0x11e036edu); f_11e03730();
  /* 11e036ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e036f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e036f3 jmp 0x11e036fc */
  goto L_11e036fc;
L_11e036f5:;
  /* 11e036f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e036fc:;
  /* 11e036fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03700 jne 0x11e03708 */
  if (!C.zf) goto L_11e03708;
  /* 11e03702 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03706 jne 0x11e0370d */
  if (!C.zf) goto L_11e0370d;
L_11e03708:;
  /* 11e03708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0370b jmp 0x11e03723 */
  goto L_11e03723;
L_11e0370d:;
  /* 11e0370d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03710 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03711 call 0x11e03680 */
  push32(0x11e03716u); f_11e03680();
  /* 11e03716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0371b jne 0x11e03721 */
  if (!C.zf) goto L_11e03721;
  /* 11e0371d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0371f jmp 0x11e03723 */
  goto L_11e03723;
L_11e03721:;
  /* 11e03721 jmp 0x11e036de */
  goto L_11e036de;
L_11e03723:;
  /* 11e03723 mov esp, ebp */
  ESP = (EBP);
  /* 11e03725 pop ebp */
  EBP = (pop32());
  /* 11e03726 ret  */
  ESPCHK(0x11e036d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013730 @ 0x11e03730 (109 bytes, 37 insns) */
void f_11e03730(void) {
  FTRACE(0x11e03730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03730 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03731 mov ebp, esp */
  EBP = (ESP);
  /* 11e03733 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03737 cmp eax, dword ptr [0x11e2e254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2e254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0373d ja 0x11e0376d */
  if ((!C.cf&&!C.zf)) goto L_11e0376d;
  /* 11e0373f push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03741 call 0x11dfbd50 */
  push32(0x11e03746u); f_11dfbd50();
  /* 11e03746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0374c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0374d call 0x11e04270 */
  push32(0x11e03752u); f_11e04270();
  /* 11e03752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e03758 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e0375a call 0x11dfbdf0 */
  push32(0x11e0375fu); f_11dfbdf0();
  /* 11e0375f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03762 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03766 je 0x11e0376d */
  if (C.zf) goto L_11e0376d;
  /* 11e03768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0376b jmp 0x11e03799 */
  goto L_11e03799;
L_11e0376d:;
  /* 11e0376d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03771 jne 0x11e0377a */
  if (!C.zf) goto L_11e0377a;
  /* 11e03773 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11e0377a:;
  /* 11e0377a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0377d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03780 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e03783 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e03786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03789 push eax */
  push32((uint32_t)(EAX));
  /* 11e0378a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0378c mov ecx, dword ptr [0x11e31fc8] */
  ECX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03792 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03793 call dword ptr [0x11e33370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33370))), 0x11e03799u);
L_11e03799:;
  /* 11e03799 mov esp, ebp */
  ESP = (EBP);
  /* 11e0379b pop ebp */
  EBP = (pop32());
  /* 11e0379c ret  */
  ESPCHK(0x11e03730u, _esp0);
  ESP += 4; return;
}

/* FUN_100137a0 @ 0x11e037a0 (10 bytes, 5 insns) */
void f_11e037a0(void) {
  FTRACE(0x11e037a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e037a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e037a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e037a3 mov eax, 1 */
  EAX = (0x1u);
  /* 11e037a8 pop ebp */
  EBP = (pop32());
  /* 11e037a9 ret  */
  ESPCHK(0x11e037a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137b0 @ 0x11e037b0 (173 bytes, 59 insns) */
void f_11e037b0(void) {
  FTRACE(0x11e037b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e037b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e037b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e037b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e037b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e037ba jbe 0x11e037c3 */
  if ((C.cf||C.zf)) goto L_11e037c3;
  /* 11e037bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e037be jmp 0x11e03859 */
  goto L_11e03859;
L_11e037c3:;
  /* 11e037c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e037c5 call 0x11dfbd50 */
  push32(0x11e037cau); f_11dfbd50();
  /* 11e037ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e037cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e037d0 push eax */
  push32((uint32_t)(EAX));
  /* 11e037d1 call 0x11e03be0 */
  push32(0x11e037d6u); f_11e03be0();
  /* 11e037d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e037d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e037dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e037e0 je 0x11e03821 */
  if (C.zf) goto L_11e03821;
  /* 11e037e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e037e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e037ec cmp ecx, dword ptr [0x11e2e254] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2e254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e037f2 ja 0x11e03812 */
  if ((!C.cf&&!C.zf)) goto L_11e03812;
  /* 11e037f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e037f7 push edx */
  push32((uint32_t)(EDX));
  /* 11e037f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e037fb push eax */
  push32((uint32_t)(EAX));
  /* 11e037fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e037ff push ecx */
  push32((uint32_t)(ECX));
  /* 11e03800 call 0x11e04ab0 */
  push32(0x11e03805u); f_11e04ab0();
  /* 11e03805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0380a je 0x11e03812 */
  if (C.zf) goto L_11e03812;
  /* 11e0380c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0380f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e03812:;
  /* 11e03812 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03814 call 0x11dfbdf0 */
  push32(0x11e03819u); f_11dfbdf0();
  /* 11e03819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0381c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0381f jmp 0x11e03859 */
  goto L_11e03859;
L_11e03821:;
  /* 11e03821 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03823 call 0x11dfbdf0 */
  push32(0x11e03828u); f_11dfbdf0();
  /* 11e03828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0382b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0382f jne 0x11e03838 */
  if (!C.zf) goto L_11e03838;
  /* 11e03831 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e03838:;
  /* 11e03838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0383b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0383e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11e03840 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e03843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03846 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0384a push edx */
  push32((uint32_t)(EDX));
  /* 11e0384b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e0384d mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03852 push eax */
  push32((uint32_t)(EAX));
  /* 11e03853 call dword ptr [0x11e3336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3336c))), 0x11e03859u);
L_11e03859:;
  /* 11e03859 mov esp, ebp */
  ESP = (EBP);
  /* 11e0385b pop ebp */
  EBP = (pop32());
  /* 11e0385c ret  */
  ESPCHK(0x11e037b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013860 @ 0x11e03860 (490 bytes, 165 insns) */
void f_11e03860(void) {
  FTRACE(0x11e03860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03860 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03861 mov ebp, esp */
  EBP = (ESP);
  /* 11e03863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0386a jne 0x11e0387d */
  if (!C.zf) goto L_11e0387d;
  /* 11e0386c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0386f push eax */
  push32((uint32_t)(EAX));
  /* 11e03870 call 0x11e036b0 */
  push32(0x11e03875u); f_11e036b0();
  /* 11e03875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03878 jmp 0x11e03a46 */
  goto L_11e03a46;
L_11e0387d:;
  /* 11e0387d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03881 jne 0x11e03896 */
  if (!C.zf) goto L_11e03896;
  /* 11e03883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03886 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03887 call 0x11e03a50 */
  push32(0x11e0388cu); f_11e03a50();
  /* 11e0388c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0388f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03891 jmp 0x11e03a46 */
  goto L_11e03a46;
L_11e03896:;
  /* 11e03896 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0389d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e038a1 ja 0x11e03a19 */
  if ((!C.cf&&!C.zf)) goto L_11e03a19;
  /* 11e038a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e038a9 call 0x11dfbd50 */
  push32(0x11e038aeu); f_11dfbd50();
  /* 11e038ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e038b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e038b4 push edx */
  push32((uint32_t)(EDX));
  /* 11e038b5 call 0x11e03be0 */
  push32(0x11e038bau); f_11e03be0();
  /* 11e038ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e038bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e038c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e038c4 je 0x11e039dc */
  if (C.zf) goto L_11e039dc;
  /* 11e038ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e038cd cmp eax, dword ptr [0x11e2e254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2e254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e038d3 ja 0x11e03950 */
  if ((!C.cf&&!C.zf)) goto L_11e03950;
  /* 11e038d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e038d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e038d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e038dc push edx */
  push32((uint32_t)(EDX));
  /* 11e038dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e038e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e038e1 call 0x11e04ab0 */
  push32(0x11e038e6u); f_11e04ab0();
  /* 11e038e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e038e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e038eb je 0x11e038f5 */
  if (C.zf) goto L_11e038f5;
  /* 11e038ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e038f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e038f3 jmp 0x11e03950 */
  goto L_11e03950;
L_11e038f5:;
  /* 11e038f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e038f8 push edx */
  push32((uint32_t)(EDX));
  /* 11e038f9 call 0x11e04270 */
  push32(0x11e038feu); f_11e04270();
  /* 11e038fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e03904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03908 je 0x11e03950 */
  if (C.zf) goto L_11e03950;
  /* 11e0390a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0390d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11e03910 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03913 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e03916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03919 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0391c jae 0x11e03926 */
  if (!C.cf) goto L_11e03926;
  /* 11e0391e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e03924 jmp 0x11e0392c */
  goto L_11e0392c;
L_11e03926:;
  /* 11e03926 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03929 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e0392c:;
  /* 11e0392c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0392f push edx */
  push32((uint32_t)(EDX));
  /* 11e03930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03933 push eax */
  push32((uint32_t)(EAX));
  /* 11e03934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03937 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03938 call 0x11e06e90 */
  push32(0x11e0393du); f_11e06e90();
  /* 11e0393d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03943 push edx */
  push32((uint32_t)(EDX));
  /* 11e03944 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e03947 push eax */
  push32((uint32_t)(EAX));
  /* 11e03948 call 0x11e03ca0 */
  push32(0x11e0394du); f_11e03ca0();
  /* 11e0394d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e03950:;
  /* 11e03950 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03954 jne 0x11e039d0 */
  if (!C.zf) goto L_11e039d0;
  /* 11e03956 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0395a jne 0x11e03963 */
  if (!C.zf) goto L_11e03963;
  /* 11e0395c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e03963:;
  /* 11e03963 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03966 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03969 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0396c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e0396f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03972 push edx */
  push32((uint32_t)(EDX));
  /* 11e03973 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03975 mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e0397a push eax */
  push32((uint32_t)(EAX));
  /* 11e0397b call dword ptr [0x11e33370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33370))), 0x11e03981u);
  /* 11e03981 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e03984 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03988 je 0x11e039d0 */
  if (C.zf) goto L_11e039d0;
  /* 11e0398a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0398d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e03990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03993 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e03996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03999 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0399c jae 0x11e039a6 */
  if (!C.cf) goto L_11e039a6;
  /* 11e0399e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e039a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e039a4 jmp 0x11e039ac */
  goto L_11e039ac;
L_11e039a6:;
  /* 11e039a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e039a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e039ac:;
  /* 11e039ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e039af push eax */
  push32((uint32_t)(EAX));
  /* 11e039b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e039b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e039b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e039b7 push edx */
  push32((uint32_t)(EDX));
  /* 11e039b8 call 0x11e06e90 */
  push32(0x11e039bdu); f_11e06e90();
  /* 11e039bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e039c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e039c3 push eax */
  push32((uint32_t)(EAX));
  /* 11e039c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e039c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e039c8 call 0x11e03ca0 */
  push32(0x11e039cdu); f_11e03ca0();
  /* 11e039cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e039d0:;
  /* 11e039d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e039d2 call 0x11dfbdf0 */
  push32(0x11e039d7u); f_11dfbdf0();
  /* 11e039d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e039da jmp 0x11e03a19 */
  goto L_11e03a19;
L_11e039dc:;
  /* 11e039dc push 9 */
  push32((uint32_t)(0x9u));
  /* 11e039de call 0x11dfbdf0 */
  push32(0x11e039e3u); f_11dfbdf0();
  /* 11e039e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e039e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e039ea jne 0x11e039f3 */
  if (!C.zf) goto L_11e039f3;
  /* 11e039ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11e039f3:;
  /* 11e039f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e039f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e039f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e039fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e039ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03a02 push eax */
  push32((uint32_t)(EAX));
  /* 11e03a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03a09 mov edx, dword ptr [0x11e31fc8] */
  EDX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03a0f push edx */
  push32((uint32_t)(EDX));
  /* 11e03a10 call dword ptr [0x11e3336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3336c))), 0x11e03a16u);
  /* 11e03a16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e03a19:;
  /* 11e03a19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03a1d jne 0x11e03a28 */
  if (!C.zf) goto L_11e03a28;
  /* 11e03a1f cmp dword ptr [0x11e30800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03a26 jne 0x11e03a2d */
  if (!C.zf) goto L_11e03a2d;
L_11e03a28:;
  /* 11e03a28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03a2b jmp 0x11e03a46 */
  goto L_11e03a46;
L_11e03a2d:;
  /* 11e03a2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03a30 push eax */
  push32((uint32_t)(EAX));
  /* 11e03a31 call 0x11e03680 */
  push32(0x11e03a36u); f_11e03680();
  /* 11e03a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e03a3b jne 0x11e03a41 */
  if (!C.zf) goto L_11e03a41;
  /* 11e03a3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03a3f jmp 0x11e03a46 */
  goto L_11e03a46;
L_11e03a41:;
  /* 11e03a41 jmp 0x11e03896 */
  goto L_11e03896;
L_11e03a46:;
  /* 11e03a46 mov esp, ebp */
  ESP = (EBP);
  /* 11e03a48 pop ebp */
  EBP = (pop32());
  /* 11e03a49 ret  */
  ESPCHK(0x11e03860u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a50 @ 0x11e03a50 (104 bytes, 38 insns) */
void f_11e03a50(void) {
  FTRACE(0x11e03a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03a51 mov ebp, esp */
  EBP = (ESP);
  /* 11e03a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03a58 jne 0x11e03a5c */
  if (!C.zf) goto L_11e03a5c;
  /* 11e03a5a jmp 0x11e03ab4 */
  goto L_11e03ab4;
L_11e03a5c:;
  /* 11e03a5c push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03a5e call 0x11dfbd50 */
  push32(0x11e03a63u); f_11dfbd50();
  /* 11e03a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03a69 push eax */
  push32((uint32_t)(EAX));
  /* 11e03a6a call 0x11e03be0 */
  push32(0x11e03a6fu); f_11e03be0();
  /* 11e03a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03a72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e03a75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03a79 je 0x11e03a97 */
  if (C.zf) goto L_11e03a97;
  /* 11e03a7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03a7e push ecx */
  push32((uint32_t)(ECX));
  /* 11e03a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03a82 push edx */
  push32((uint32_t)(EDX));
  /* 11e03a83 call 0x11e03ca0 */
  push32(0x11e03a88u); f_11e03ca0();
  /* 11e03a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03a8d call 0x11dfbdf0 */
  push32(0x11e03a92u); f_11dfbdf0();
  /* 11e03a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03a95 jmp 0x11e03ab4 */
  goto L_11e03ab4;
L_11e03a97:;
  /* 11e03a97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03a99 call 0x11dfbdf0 */
  push32(0x11e03a9eu); f_11dfbdf0();
  /* 11e03a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11e03aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03aa7 mov ecx, dword ptr [0x11e31fc8] */
  ECX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03aad push ecx */
  push32((uint32_t)(ECX));
  /* 11e03aae call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e03ab4u);
L_11e03ab4:;
  /* 11e03ab4 mov esp, ebp */
  ESP = (EBP);
  /* 11e03ab6 pop ebp */
  EBP = (pop32());
  /* 11e03ab7 ret  */
  ESPCHK(0x11e03a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ac0 @ 0x11e03ac0 (116 bytes, 34 insns) */
void f_11e03ac0(void) {
  FTRACE(0x11e03ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11e03ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e03ac4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11e03acb push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03acd call 0x11dfbd50 */
  push32(0x11e03ad2u); f_11dfbd50();
  /* 11e03ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03ad5 call 0x11e051d0 */
  push32(0x11e03adau); f_11e051d0();
  /* 11e03ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e03adc jge 0x11e03ae5 */
  if ((C.sf==C.of)) goto L_11e03ae5;
  /* 11e03ade mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11e03ae5:;
  /* 11e03ae5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e03ae7 call 0x11dfbdf0 */
  push32(0x11e03aecu); f_11dfbdf0();
  /* 11e03aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03af3 mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03af8 push eax */
  push32((uint32_t)(EAX));
  /* 11e03af9 call dword ptr [0x11e33408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33408))), 0x11e03affu);
  /* 11e03aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e03b01 jne 0x11e03b2d */
  if (!C.zf) goto L_11e03b2d;
  /* 11e03b03 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e03b09u);
  /* 11e03b09 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03b0c jne 0x11e03b26 */
  if (!C.zf) goto L_11e03b26;
  /* 11e03b0e call 0x11e07280 */
  push32(0x11e03b13u); f_11e07280();
  /* 11e03b13 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11e03b19 call 0x11e07270 */
  push32(0x11e03b1eu); f_11e07270();
  /* 11e03b1e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11e03b24 jmp 0x11e03b2d */
  goto L_11e03b2d;
L_11e03b26:;
  /* 11e03b26 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11e03b2d:;
  /* 11e03b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03b30 mov esp, ebp */
  ESP = (EBP);
  /* 11e03b32 pop ebp */
  EBP = (pop32());
  /* 11e03b33 ret  */
  ESPCHK(0x11e03ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b40 @ 0x11e03b40 (10 bytes, 5 insns) */
void f_11e03b40(void) {
  FTRACE(0x11e03b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03b41 mov ebp, esp */
  EBP = (ESP);
  /* 11e03b43 call 0x11e03ac0 */
  push32(0x11e03b48u); f_11e03ac0();
  /* 11e03b48 pop ebp */
  EBP = (pop32());
  /* 11e03b49 ret  */
  ESPCHK(0x11e03b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x11e03b50 (10 bytes, 5 insns) */
void f_11e03b50(void) {
  FTRACE(0x11e03b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03b51 mov ebp, esp */
  EBP = (ESP);
  /* 11e03b53 mov eax, dword ptr [0x11e2e254] */
  EAX = (r32((uint32_t)(0x11e2e254)));
  /* 11e03b58 pop ebp */
  EBP = (pop32());
  /* 11e03b59 ret  */
  ESPCHK(0x11e03b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b60 @ 0x11e03b60 (31 bytes, 11 insns) */
void f_11e03b60(void) {
  FTRACE(0x11e03b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03b61 mov ebp, esp */
  EBP = (ESP);
  /* 11e03b63 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03b6a jbe 0x11e03b70 */
  if ((C.cf||C.zf)) goto L_11e03b70;
  /* 11e03b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03b6e jmp 0x11e03b7d */
  goto L_11e03b7d;
L_11e03b70:;
  /* 11e03b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03b73 mov dword ptr [0x11e2e254], eax */
  w32((uint32_t)(0x11e2e254), (EAX));
  /* 11e03b78 mov eax, 1 */
  EAX = (0x1u);
L_11e03b7d:;
  /* 11e03b7d pop ebp */
  EBP = (pop32());
  /* 11e03b7e ret  */
  ESPCHK(0x11e03b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x11e03b80 (89 bytes, 20 insns) */
void f_11e03b80(void) {
  FTRACE(0x11e03b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03b81 mov ebp, esp */
  EBP = (ESP);
  /* 11e03b83 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11e03b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e03b8a mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e03b8f push eax */
  push32((uint32_t)(EAX));
  /* 11e03b90 call dword ptr [0x11e33370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33370))), 0x11e03b96u);
  /* 11e03b96 mov dword ptr [0x11e31fc4], eax */
  w32((uint32_t)(0x11e31fc4), (EAX));
  /* 11e03b9b cmp dword ptr [0x11e31fc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03ba2 jne 0x11e03ba8 */
  if (!C.zf) goto L_11e03ba8;
  /* 11e03ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03ba6 jmp 0x11e03bd7 */
  goto L_11e03bd7;
L_11e03ba8:;
  /* 11e03ba8 mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e03bae mov dword ptr [0x11e31fb8], ecx */
  w32((uint32_t)(0x11e31fb8), (ECX));
  /* 11e03bb4 mov dword ptr [0x11e31fbc], 0 */
  w32((uint32_t)(0x11e31fbc), (0x0u));
  /* 11e03bbe mov dword ptr [0x11e31fc0], 0 */
  w32((uint32_t)(0x11e31fc0), (0x0u));
  /* 11e03bc8 mov dword ptr [0x11e31fa4], 0x10 */
  w32((uint32_t)(0x11e31fa4), (0x10u));
  /* 11e03bd2 mov eax, 1 */
  EAX = (0x1u);
L_11e03bd7:;
  /* 11e03bd7 pop ebp */
  EBP = (pop32());
  /* 11e03bd8 ret  */
  ESPCHK(0x11e03b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x11e03be0 (85 bytes, 29 insns) */
void f_11e03be0(void) {
  FTRACE(0x11e03be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03be1 mov ebp, esp */
  EBP = (ESP);
  /* 11e03be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03be6 mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e03beb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e03bee mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e03bf4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03bf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e03bf9 mov edx, dword ptr [0x11e31fc4] */
  EDX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e03bff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e03c02:;
  /* 11e03c02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03c08 jae 0x11e03c2f */
  if (!C.cf) goto L_11e03c2f;
  /* 11e03c0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03c10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03c13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e03c16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03c1d jae 0x11e03c24 */
  if (!C.cf) goto L_11e03c24;
  /* 11e03c1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c22 jmp 0x11e03c31 */
  goto L_11e03c31;
L_11e03c24:;
  /* 11e03c24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03c2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e03c2d jmp 0x11e03c02 */
  goto L_11e03c02;
L_11e03c2f:;
  /* 11e03c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e03c31:;
  /* 11e03c31 mov esp, ebp */
  ESP = (EBP);
  /* 11e03c33 pop ebp */
  EBP = (pop32());
  /* 11e03c34 ret  */
  ESPCHK(0x11e03be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x11e03c40 (95 bytes, 33 insns) */
void f_11e03c40(void) {
  FTRACE(0x11e03c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03c41 mov ebp, esp */
  EBP = (ESP);
  /* 11e03c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03c49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03c4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03c4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e03c52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e03c58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e03c5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e03c60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03c63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e03c65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03c68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e03c6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e03c6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e03c6f jne 0x11e03c91 */
  if (!C.zf) goto L_11e03c91;
  /* 11e03c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11e03c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e03c79 jne 0x11e03c91 */
  if (!C.zf) goto L_11e03c91;
  /* 11e03c7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03c7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e03c84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03c86 je 0x11e03c91 */
  if (C.zf) goto L_11e03c91;
  /* 11e03c88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11e03c8f jmp 0x11e03c98 */
  goto L_11e03c98;
L_11e03c91:;
  /* 11e03c91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e03c98:;
  /* 11e03c98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e03c9b mov esp, ebp */
  ESP = (EBP);
  /* 11e03c9d pop ebp */
  EBP = (pop32());
  /* 11e03c9e ret  */
  ESPCHK(0x11e03c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ca0 @ 0x11e03ca0 (1485 bytes, 453 insns) */
void f_11e03ca0(void) {
  FTRACE(0x11e03ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e03ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e03ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11e03ca3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03ca9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e03cac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11e03caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03cb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03cb5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03cb8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e03cbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e03cbe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11e03cc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e03cc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03cc7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e03ccd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03cd0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11e03cd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e03cda mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e03cdd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03ce0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e03ce3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03ce6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e03ce8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03ceb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e03cee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03cf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03cf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11e03cf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03cfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e03cfc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e03cff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03d02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11e03d05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e03d08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e03d0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e03d0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03d10 jne 0x11e03e38 */
  if (!C.zf) goto L_11e03e38;
  /* 11e03d16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e03d19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e03d1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03d1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e03d22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03d26 jbe 0x11e03d2f */
  if ((C.cf||C.zf)) goto L_11e03d2f;
  /* 11e03d28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e03d2f:;
  /* 11e03d2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03d32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03d35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e03d38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03d3b jne 0x11e03e11 */
  if (!C.zf) goto L_11e03e11;
  /* 11e03d41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03d45 jae 0x11e03da6 */
  if (!C.cf) goto L_11e03da6;
  /* 11e03d47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e03d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e03d4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e03d51 not eax */
  EAX = (~(EAX));
  /* 11e03d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03d56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03d59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e03d5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03d5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03d62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03d65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e03d69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03d6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03d6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e03d72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e03d75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03d78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03d7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e03d7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03d81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03d84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e03d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e03d8a jne 0x11e03da4 */
  if (!C.zf) goto L_11e03da4;
  /* 11e03d8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e03d91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e03d94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e03d96 not eax */
  EAX = (~(EAX));
  /* 11e03d98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03d9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e03d9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e03d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03da2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e03da4:;
  /* 11e03da4 jmp 0x11e03e11 */
  goto L_11e03e11;
L_11e03da6:;
  /* 11e03da6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e03da9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03dac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e03db1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e03db3 not edx */
  EDX = (~(EDX));
  /* 11e03db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03db8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03dbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e03dc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03dc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03dca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11e03dd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03dd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03dd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e03dda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e03ddd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03de0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03de3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e03de6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03de9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03dec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e03df0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03df2 jne 0x11e03e11 */
  if (!C.zf) goto L_11e03e11;
  /* 11e03df4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e03df7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03dfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e03dff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e03e01 not edx */
  EDX = (~(EDX));
  /* 11e03e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03e06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e03e09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03e0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e03e11:;
  /* 11e03e11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03e14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e03e17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03e1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e03e1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e03e20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03e23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03e26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e03e29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e03e2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e03e2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e03e32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03e35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11e03e38:;
  /* 11e03e38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e03e3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e03e3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03e41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e03e44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03e48 jbe 0x11e03e51 */
  if ((C.cf||C.zf)) goto L_11e03e51;
  /* 11e03e4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11e03e51:;
  /* 11e03e51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e03e54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e03e57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03e59 jne 0x11e03fb5 */
  if (!C.zf) goto L_11e03fb5;
  /* 11e03e5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03e62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03e65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11e03e68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e03e6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e03e6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03e71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e03e74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03e78 jbe 0x11e03e81 */
  if ((C.cf||C.zf)) goto L_11e03e81;
  /* 11e03e7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11e03e81:;
  /* 11e03e81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e03e84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03e87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11e03e8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e03e8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e03e90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03e93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e03e96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03e9a jbe 0x11e03ea3 */
  if ((C.cf||C.zf)) goto L_11e03ea3;
  /* 11e03e9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11e03ea3:;
  /* 11e03ea3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03ea6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03ea9 je 0x11e03faf */
  if (C.zf) goto L_11e03faf;
  /* 11e03eaf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03eb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03eb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03eb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03ebb jne 0x11e03f91 */
  if (!C.zf) goto L_11e03f91;
  /* 11e03ec1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03ec5 jae 0x11e03f26 */
  if (!C.cf) goto L_11e03f26;
  /* 11e03ec7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e03ecc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03ecf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e03ed1 not edx */
  EDX = (~(EDX));
  /* 11e03ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03ed6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03ed9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e03edd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e03edf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03ee2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03ee5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e03ee9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03eec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03eef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e03ef2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e03ef5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03ef8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03efb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e03efe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03f04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e03f08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03f0a jne 0x11e03f24 */
  if (!C.zf) goto L_11e03f24;
  /* 11e03f0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e03f11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03f14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e03f16 not edx */
  EDX = (~(EDX));
  /* 11e03f18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03f1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e03f1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03f22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e03f24:;
  /* 11e03f24 jmp 0x11e03f91 */
  goto L_11e03f91;
L_11e03f26:;
  /* 11e03f26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03f29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03f2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e03f31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e03f33 not eax */
  EAX = (~(EAX));
  /* 11e03f35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03f38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e03f42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e03f44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e03f47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e03f51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03f57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e03f5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e03f5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03f63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e03f66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e03f69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e03f6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e03f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e03f72 jne 0x11e03f91 */
  if (!C.zf) goto L_11e03f91;
  /* 11e03f74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03f77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e03f7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e03f7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e03f81 not eax */
  EAX = (~(EAX));
  /* 11e03f83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03f86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03f89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e03f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e03f8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e03f91:;
  /* 11e03f91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03f94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e03f97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03f9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e03f9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e03fa0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03fa3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e03fa6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03fa9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e03fac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11e03faf:;
  /* 11e03faf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e03fb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11e03fb5:;
  /* 11e03fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e03fb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e03fbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e03fbd jne 0x11e03fcb */
  if (!C.zf) goto L_11e03fcb;
  /* 11e03fbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e03fc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e03fc5 je 0x11e040db */
  if (C.zf) goto L_11e040db;
L_11e03fcb:;
  /* 11e03fcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e03fce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e03fd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11e03fd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e03fd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e03fdd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03fe0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e03fe3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03fe6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e03fe9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e03fec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e03fef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03ff2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e03ff5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03ff8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e03ffb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e03ffe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e04001 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04004 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04007 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0400a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0400d jne 0x11e040db */
  if (!C.zf) goto L_11e040db;
  /* 11e04013 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04017 jae 0x11e04074 */
  if (!C.cf) goto L_11e04074;
  /* 11e04019 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0401c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0401f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04023 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e04026 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04029 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e0402c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0402f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e04032 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04035 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e04038 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0403a jne 0x11e04052 */
  if (!C.zf) goto L_11e04052;
  /* 11e0403c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04041 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04044 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04049 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0404b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0404d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04050 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e04052:;
  /* 11e04052 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04057 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0405a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e0405c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0405f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e04062 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e04066 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0406b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0406e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e04072 jmp 0x11e040db */
  goto L_11e040db;
L_11e04074:;
  /* 11e04074 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e04077 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0407a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e0407e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e04081 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04084 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e04087 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0408a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0408d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04090 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e04093 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04095 jne 0x11e040b2 */
  if (!C.zf) goto L_11e040b2;
  /* 11e04097 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0409a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0409d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e040a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e040a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e040a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e040aa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e040ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e040af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e040b2:;
  /* 11e040b2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e040b5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e040b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e040bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e040bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e040c2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e040c5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e040cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e040ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e040d1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e040d4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11e040db:;
  /* 11e040db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e040de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e040e1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e040e3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e040e6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e040e9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e040ec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11e040ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e040f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e040f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e040f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e040fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e040fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e040ff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04102 jne 0x11e04269 */
  if (!C.zf) goto L_11e04269;
  /* 11e04108 cmp dword ptr [0x11e31fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0410f je 0x11e04258 */
  if (C.zf) goto L_11e04258;
  /* 11e04115 mov eax, dword ptr [0x11e31fb4] */
  EAX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e0411a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11e0411d mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04123 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e04126 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04128 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e0412b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e04130 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e04135 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04138 push eax */
  push32((uint32_t)(EAX));
  /* 11e04139 call dword ptr [0x11e33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33378))), 0x11e0413fu);
  /* 11e0413f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04144 mov ecx, dword ptr [0x11e31fb4] */
  ECX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e0414a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e0414c mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04151 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e04154 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04156 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0415c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e0415f mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04164 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e04167 mov edx, dword ptr [0x11e31fb4] */
  EDX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e0416d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11e04178 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0417d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e04180 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11e04183 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e04186 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0418b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0418e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11e04191 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04197 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e0419a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11e0419e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e041a0 jne 0x11e041b6 */
  if (!C.zf) goto L_11e041b6;
  /* 11e041a2 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e041a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e041ab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e041ad mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e041b3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e041b6:;
  /* 11e041b6 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e041bc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e041c0 jne 0x11e04258 */
  if (!C.zf) goto L_11e04258;
  /* 11e041c6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e041cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e041cd mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e041d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e041d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e041d6 call dword ptr [0x11e33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33378))), 0x11e041dcu);
  /* 11e041dc mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e041e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e041e5 push eax */
  push32((uint32_t)(EAX));
  /* 11e041e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e041e8 mov ecx, dword ptr [0x11e31fc8] */
  ECX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e041ee push ecx */
  push32((uint32_t)(ECX));
  /* 11e041ef call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e041f5u);
  /* 11e041f5 mov edx, dword ptr [0x11e31fc0] */
  EDX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e041fb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e041fe mov eax, dword ptr [0x11e31fc4] */
  EAX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04203 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04205 mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0420b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0420e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04210 push eax */
  push32((uint32_t)(EAX));
  /* 11e04211 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04217 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0421a push edx */
  push32((uint32_t)(EDX));
  /* 11e0421b mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e04220 push eax */
  push32((uint32_t)(EAX));
  /* 11e04221 call 0x11e032f0 */
  push32(0x11e04226u); f_11e032f0();
  /* 11e04226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04229 mov ecx, dword ptr [0x11e31fc0] */
  ECX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e0422f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04232 mov dword ptr [0x11e31fc0], ecx */
  w32((uint32_t)(0x11e31fc0), (ECX));
  /* 11e04238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0423b cmp edx, dword ptr [0x11e31fbc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e31fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04241 jbe 0x11e0424c */
  if ((C.cf||C.zf)) goto L_11e0424c;
  /* 11e04243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04246 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04249 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e0424c:;
  /* 11e0424c mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04252 mov dword ptr [0x11e31fb8], ecx */
  w32((uint32_t)(0x11e31fb8), (ECX));
L_11e04258:;
  /* 11e04258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0425b mov dword ptr [0x11e31fbc], edx */
  w32((uint32_t)(0x11e31fbc), (EDX));
  /* 11e04261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04264 mov dword ptr [0x11e31fb4], eax */
  w32((uint32_t)(0x11e31fb4), (EAX));
L_11e04269:;
  /* 11e04269 mov esp, ebp */
  ESP = (EBP);
  /* 11e0426b pop ebp */
  EBP = (pop32());
  /* 11e0426c ret  */
  ESPCHK(0x11e03ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014270 @ 0x11e04270 (1334 bytes, 427 insns) */
void f_11e04270(void) {
  FTRACE(0x11e04270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e04270 push ebp */
  push32((uint32_t)(EBP));
  /* 11e04271 mov ebp, esp */
  EBP = (ESP);
  /* 11e04273 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04276 push esi */
  push32((uint32_t)(ESI));
  /* 11e04277 mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e0427c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0427f mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04285 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04287 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e0428a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0428d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04290 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11e04293 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e04296 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04299 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e0429c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0429f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e042a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e042a6 jge 0x11e042bc */
  if ((C.sf==C.of)) goto L_11e042bc;
  /* 11e042a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e042ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e042ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e042b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e042b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11e042ba jmp 0x11e042d1 */
  goto L_11e042d1;
L_11e042bc:;
  /* 11e042bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e042c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e042c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e042c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e042cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e042ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11e042d1:;
  /* 11e042d1 mov ecx, dword ptr [0x11e31fb8] */
  ECX = (r32((uint32_t)(0x11e31fb8)));
  /* 11e042d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11e042da:;
  /* 11e042da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e042dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e042e0 jae 0x11e04306 */
  if (!C.cf) goto L_11e04306;
  /* 11e042e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e042e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e042e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11e042ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e042ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e042f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11e042f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e042f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e042f7 je 0x11e042fb */
  if (C.zf) goto L_11e042fb;
  /* 11e042f9 jmp 0x11e04306 */
  goto L_11e04306;
L_11e042fb:;
  /* 11e042fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e042fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04301 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e04304 jmp 0x11e042da */
  goto L_11e042da;
L_11e04306:;
  /* 11e04306 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04309 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0430c jne 0x11e043ed */
  if (!C.zf) goto L_11e043ed;
  /* 11e04312 mov eax, dword ptr [0x11e31fc4] */
  EAX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04317 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e0431a:;
  /* 11e0431a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0431d cmp ecx, dword ptr [0x11e31fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04323 jae 0x11e04349 */
  if (!C.cf) goto L_11e04349;
  /* 11e04325 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04328 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0432b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11e0432d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04330 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e04333 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e04336 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0433a je 0x11e0433e */
  if (C.zf) goto L_11e0433e;
  /* 11e0433c jmp 0x11e04349 */
  goto L_11e04349;
L_11e0433e:;
  /* 11e0433e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04341 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04344 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e04347 jmp 0x11e0431a */
  goto L_11e0431a;
L_11e04349:;
  /* 11e04349 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0434c cmp ecx, dword ptr [0x11e31fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04352 jne 0x11e043ed */
  if (!C.zf) goto L_11e043ed;
L_11e04358:;
  /* 11e04358 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0435b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0435e jae 0x11e04376 */
  if (!C.cf) goto L_11e04376;
  /* 11e04360 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04363 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04367 je 0x11e0436b */
  if (C.zf) goto L_11e0436b;
  /* 11e04369 jmp 0x11e04376 */
  goto L_11e04376;
L_11e0436b:;
  /* 11e0436b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0436e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04371 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e04374 jmp 0x11e04358 */
  goto L_11e04358;
L_11e04376:;
  /* 11e04376 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04379 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0437c jne 0x11e043c7 */
  if (!C.zf) goto L_11e043c7;
  /* 11e0437e mov eax, dword ptr [0x11e31fc4] */
  EAX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04383 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e04386:;
  /* 11e04386 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04389 cmp ecx, dword ptr [0x11e31fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0438f jae 0x11e043a7 */
  if (!C.cf) goto L_11e043a7;
  /* 11e04391 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04394 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04398 je 0x11e0439c */
  if (C.zf) goto L_11e0439c;
  /* 11e0439a jmp 0x11e043a7 */
  goto L_11e043a7;
L_11e0439c:;
  /* 11e0439c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0439f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e043a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e043a5 jmp 0x11e04386 */
  goto L_11e04386;
L_11e043a7:;
  /* 11e043a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043aa cmp ecx, dword ptr [0x11e31fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e043b0 jne 0x11e043c7 */
  if (!C.zf) goto L_11e043c7;
  /* 11e043b2 call 0x11e047b0 */
  push32(0x11e043b7u); f_11e047b0();
  /* 11e043b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e043ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e043be jne 0x11e043c7 */
  if (!C.zf) goto L_11e043c7;
  /* 11e043c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e043c2 jmp 0x11e047a1 */
  goto L_11e047a1;
L_11e043c7:;
  /* 11e043c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043ca push edx */
  push32((uint32_t)(EDX));
  /* 11e043cb call 0x11e048c0 */
  push32(0x11e043d0u); f_11e048c0();
  /* 11e043d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e043d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e043d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e043db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e043e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e043e4 jne 0x11e043ed */
  if (!C.zf) goto L_11e043ed;
  /* 11e043e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e043e8 jmp 0x11e047a1 */
  goto L_11e047a1;
L_11e043ed:;
  /* 11e043ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043f0 mov dword ptr [0x11e31fb8], edx */
  w32((uint32_t)(0x11e31fb8), (EDX));
  /* 11e043f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e043f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e043fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11e043ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04402 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e04404 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e04407 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0440b je 0x11e04430 */
  if (C.zf) goto L_11e04430;
  /* 11e0440d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04410 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04413 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e04416 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11e0441a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0441d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04420 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11e04423 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11e0442a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e0442c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0442e jne 0x11e04465 */
  if (!C.zf) goto L_11e04465;
L_11e04430:;
  /* 11e04430 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11e04437:;
  /* 11e04437 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0443a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0443d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e04440 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11e04444 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04447 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0444a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11e0444d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11e04454 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11e04456 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04458 jne 0x11e04465 */
  if (!C.zf) goto L_11e04465;
  /* 11e0445a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0445d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04460 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e04463 jmp 0x11e04437 */
  goto L_11e04437;
L_11e04465:;
  /* 11e04465 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04468 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0446e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04471 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e04478 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0447b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e04482 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04485 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04488 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0448b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11e0448f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e04492 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04496 jne 0x11e044b2 */
  if (!C.zf) goto L_11e044b2;
  /* 11e04498 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11e0449f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e044a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e044a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e044a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e044af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11e044b2:;
  /* 11e044b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e044b6 jl 0x11e044cb */
  if ((C.sf!=C.of)) goto L_11e044cb;
  /* 11e044b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e044bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e044bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e044c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e044c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e044c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e044c9 jmp 0x11e044b2 */
  goto L_11e044b2;
L_11e044cb:;
  /* 11e044cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e044ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e044d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11e044d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e044d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e044db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e044dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e044e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e044e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e044e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e044e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e044ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e044ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e044f3 jle 0x11e044fc */
  if ((C.zf||C.sf!=C.of)) goto L_11e044fc;
  /* 11e044f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11e044fc:;
  /* 11e044fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e044ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04502 je 0x11e04720 */
  if (C.zf) goto L_11e04720;
  /* 11e04508 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0450b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0450e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04511 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04514 jne 0x11e045ea */
  if (!C.zf) goto L_11e045ea;
  /* 11e0451a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0451e jge 0x11e0457f */
  if ((C.sf==C.of)) goto L_11e0457f;
  /* 11e04520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04525 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e0452a not eax */
  EAX = (~(EAX));
  /* 11e0452c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0452f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04532 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e04536 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04538 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0453b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0453e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e04542 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04545 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04548 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e0454b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0454e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04551 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04554 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e04557 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0455a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0455d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04561 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04563 jne 0x11e0457d */
  if (!C.zf) goto L_11e0457d;
  /* 11e04565 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e0456a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0456d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e0456f not eax */
  EAX = (~(EAX));
  /* 11e04571 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04574 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e04576 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e04578 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0457b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0457d:;
  /* 11e0457d jmp 0x11e045ea */
  goto L_11e045ea;
L_11e0457f:;
  /* 11e0457f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04582 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04585 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e0458a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e0458c not edx */
  EDX = (~(EDX));
  /* 11e0458e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04591 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04594 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e0459b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0459d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e045a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e045a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11e045aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e045ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e045b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e045b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e045b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e045b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e045bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e045bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e045c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e045c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e045c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e045cb jne 0x11e045ea */
  if (!C.zf) goto L_11e045ea;
  /* 11e045cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e045d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e045d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e045d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e045da not edx */
  EDX = (~(EDX));
  /* 11e045dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e045df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e045e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e045e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e045e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e045ea:;
  /* 11e045ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e045ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e045f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e045f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e045f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e045f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e045fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e045ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04602 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e04605 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e04608 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0460c je 0x11e04720 */
  if (C.zf) goto L_11e04720;
  /* 11e04612 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04618 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11e0461b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0461e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e04624 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04627 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e0462a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0462d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e04630 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e04633 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e04636 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04639 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e0463c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0463f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04642 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04645 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e04648 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0464b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0464e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04651 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04654 jne 0x11e04720 */
  if (!C.zf) goto L_11e04720;
  /* 11e0465a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0465e jge 0x11e046ba */
  if ((C.sf==C.of)) goto L_11e046ba;
  /* 11e04660 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04663 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04666 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e0466a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0466d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04670 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e04673 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e04675 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04678 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0467b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e0467e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04680 jne 0x11e04698 */
  if (!C.zf) goto L_11e04698;
  /* 11e04682 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04687 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0468a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e0468c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0468f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e04691 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e04693 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04696 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e04698:;
  /* 11e04698 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e0469d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e046a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e046a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e046a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e046a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e046ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e046ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e046b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e046b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e046b8 jmp 0x11e04720 */
  goto L_11e04720;
L_11e046ba:;
  /* 11e046ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e046bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e046c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e046c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e046c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e046ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e046cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e046cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e046d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e046d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e046d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e046da jne 0x11e046f7 */
  if (!C.zf) goto L_11e046f7;
  /* 11e046dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e046df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e046e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e046e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e046e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e046ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e046ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e046f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e046f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e046f7:;
  /* 11e046f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e046fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e046fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04702 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04704 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04707 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0470a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e04711 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04713 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04716 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04719 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11e04720:;
  /* 11e04720 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04724 je 0x11e0473a */
  if (C.zf) goto L_11e0473a;
  /* 11e04726 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0472c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e0472e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04731 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e04737 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11e0473a:;
  /* 11e0473a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0473d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04740 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e04743 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04746 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04749 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0474c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0474e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04751 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04754 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04757 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0475a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11e0475d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04760 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e04762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04765 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e04767 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0476a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0476d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e0476f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04771 jne 0x11e04793 */
  if (!C.zf) goto L_11e04793;
  /* 11e04773 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04776 cmp eax, dword ptr [0x11e31fbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e31fbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0477c jne 0x11e04793 */
  if (!C.zf) goto L_11e04793;
  /* 11e0477e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04781 cmp ecx, dword ptr [0x11e31fb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04787 jne 0x11e04793 */
  if (!C.zf) goto L_11e04793;
  /* 11e04789 mov dword ptr [0x11e31fbc], 0 */
  w32((uint32_t)(0x11e31fbc), (0x0u));
L_11e04793:;
  /* 11e04793 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e04796 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04799 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e0479b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0479e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e047a1:;
  /* 11e047a1 pop esi */
  ESI = (pop32());
  /* 11e047a2 mov esp, ebp */
  ESP = (EBP);
  /* 11e047a4 pop ebp */
  EBP = (pop32());
  /* 11e047a5 ret  */
  ESPCHK(0x11e04270u, _esp0);
  ESP += 4; return;
}

/* FUN_100147b0 @ 0x11e047b0 (271 bytes, 78 insns) */
void f_11e047b0(void) {
  FTRACE(0x11e047b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e047b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e047b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e047b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e047b4 mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e047b9 cmp eax, dword ptr [0x11e31fa4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e31fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e047bf jne 0x11e0480b */
  if (!C.zf) goto L_11e0480b;
  /* 11e047c1 mov ecx, dword ptr [0x11e31fa4] */
  ECX = (r32((uint32_t)(0x11e31fa4)));
  /* 11e047c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e047ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e047cd push ecx */
  push32((uint32_t)(ECX));
  /* 11e047ce mov edx, dword ptr [0x11e31fc4] */
  EDX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e047d4 push edx */
  push32((uint32_t)(EDX));
  /* 11e047d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e047d7 mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e047dc push eax */
  push32((uint32_t)(EAX));
  /* 11e047dd call dword ptr [0x11e3336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3336c))), 0x11e047e3u);
  /* 11e047e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e047e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e047ea jne 0x11e047f3 */
  if (!C.zf) goto L_11e047f3;
  /* 11e047ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e047ee jmp 0x11e048bb */
  goto L_11e048bb;
L_11e047f3:;
  /* 11e047f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e047f6 mov dword ptr [0x11e31fc4], ecx */
  w32((uint32_t)(0x11e31fc4), (ECX));
  /* 11e047fc mov edx, dword ptr [0x11e31fa4] */
  EDX = (r32((uint32_t)(0x11e31fa4)));
  /* 11e04802 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04805 mov dword ptr [0x11e31fa4], edx */
  w32((uint32_t)(0x11e31fa4), (EDX));
L_11e0480b:;
  /* 11e0480b mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e04810 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e04813 mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e04819 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0481b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0481e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11e04823 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e04825 mov edx, dword ptr [0x11e31fc8] */
  EDX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e0482b push edx */
  push32((uint32_t)(EDX));
  /* 11e0482c call dword ptr [0x11e33370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33370))), 0x11e04832u);
  /* 11e04832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04835 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11e04838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0483b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0483f jne 0x11e04845 */
  if (!C.zf) goto L_11e04845;
  /* 11e04841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04843 jmp 0x11e048bb */
  goto L_11e048bb;
L_11e04845:;
  /* 11e04845 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e04847 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11e0484c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11e04851 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e04853 call dword ptr [0x11e33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33368))), 0x11e04859u);
  /* 11e04859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0485c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11e0485f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04862 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04866 jne 0x11e04882 */
  if (!C.zf) goto L_11e04882;
  /* 11e04868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0486b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0486e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0486f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e04871 mov edx, dword ptr [0x11e31fc8] */
  EDX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e04877 push edx */
  push32((uint32_t)(EDX));
  /* 11e04878 call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e0487eu);
  /* 11e0487e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04880 jmp 0x11e048bb */
  goto L_11e048bb;
L_11e04882:;
  /* 11e04882 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04885 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0488b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0488e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e04895 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04898 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11e0489f mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e048a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e048a7 mov dword ptr [0x11e31fc0], eax */
  w32((uint32_t)(0x11e31fc0), (EAX));
  /* 11e048ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e048af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e048b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11e048b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e048bb:;
  /* 11e048bb mov esp, ebp */
  ESP = (EBP);
  /* 11e048bd pop ebp */
  EBP = (pop32());
  /* 11e048be ret  */
  ESPCHK(0x11e047b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x11e048c0 (494 bytes, 149 insns) */
void f_11e048c0(void) {
  FTRACE(0x11e048c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e048c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e048c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e048c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e048c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e048c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e048cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e048cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e048d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e048d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e048d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11e048df:;
  /* 11e048df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e048e3 jl 0x11e048f8 */
  if ((C.sf!=C.of)) goto L_11e048f8;
  /* 11e048e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e048e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e048ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e048ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e048f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e048f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e048f6 jmp 0x11e048df */
  goto L_11e048df;
L_11e048f8:;
  /* 11e048f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e048fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e04901 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04904 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e0490b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0490e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e04915 jmp 0x11e04920 */
  goto L_11e04920;
L_11e04917:;
  /* 11e04917 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0491a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0491d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11e04920:;
  /* 11e04920 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04924 jge 0x11e04946 */
  if ((C.sf==C.of)) goto L_11e04946;
  /* 11e04926 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04929 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0492c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11e0492f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e04932 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04935 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04938 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e0493b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0493e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04941 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e04944 jmp 0x11e04917 */
  goto L_11e04917;
L_11e04946:;
  /* 11e04946 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04949 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e0494c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0494f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e04952 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04954 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e04957 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e04959 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e0495e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e04963 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04966 push edx */
  push32((uint32_t)(EDX));
  /* 11e04967 call dword ptr [0x11e33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33368))), 0x11e0496du);
  /* 11e0496d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0496f jne 0x11e04979 */
  if (!C.zf) goto L_11e04979;
  /* 11e04971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e04974 jmp 0x11e04aaa */
  goto L_11e04aaa;
L_11e04979:;
  /* 11e04979 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0497c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04981 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e04984 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04987 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0498a jmp 0x11e04998 */
  goto L_11e04998;
L_11e0498c:;
  /* 11e0498c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0498f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04995 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e04998:;
  /* 11e04998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0499b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0499e ja 0x11e049fd */
  if ((!C.cf&&!C.zf)) goto L_11e049fd;
  /* 11e049a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e049a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11e049aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e049ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11e049b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e049ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e049bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e049c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11e049c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e049d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e049d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e049e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e049e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e049ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e049ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e049f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e049f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11e049fb jmp 0x11e0498c */
  goto L_11e0498c;
L_11e049fd:;
  /* 11e049fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e04a00 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04a06 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e04a09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04a0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04a0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a12 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e04a15 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e04a1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e04a1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04a21 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a24 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e04a27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04a2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04a2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a30 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e04a33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a36 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e04a39 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e04a3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04a3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04a42 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e04a45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04a48 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04a4b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11e04a53 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04a56 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04a59 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11e04a64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04a67 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11e04a6b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04a6e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11e04a71 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e04a74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04a77 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11e04a7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04a7c jne 0x11e04a8d */
  if (!C.zf) goto L_11e04a8d;
  /* 11e04a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04a81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04a84 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e04a87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04a8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e04a8d:;
  /* 11e04a8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04a92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04a95 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04a97 not edx */
  EDX = (~(EDX));
  /* 11e04a99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04a9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e04a9f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04aa4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e04aa7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11e04aaa:;
  /* 11e04aaa mov esp, ebp */
  ESP = (EBP);
  /* 11e04aac pop ebp */
  EBP = (pop32());
  /* 11e04aad ret  */
  ESPCHK(0x11e048c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ab0 @ 0x11e04ab0 (1515 bytes, 489 insns) */
void f_11e04ab0(void) {
  FTRACE(0x11e04ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e04ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e04ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11e04ab3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04ab6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e04ab9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04abc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11e04abe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e04ac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04ac4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e04ac7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e04aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e04ad0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04ad3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e04ad6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e04ad9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e04adc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e04adf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04ae2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e04ae8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04aeb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e04af2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e04af5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e04af8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04afb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e04afe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04b01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e04b03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04b06 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e04b09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04b0c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04b0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e04b12 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04b15 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e04b17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e04b1a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04b1d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04b20 jle 0x11e04dd6 */
  if ((C.zf||C.sf!=C.of)) goto L_11e04dd6;
  /* 11e04b26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04b29 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e04b2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04b2e jne 0x11e04b3b */
  if (!C.zf) goto L_11e04b3b;
  /* 11e04b30 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04b33 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04b36 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04b39 jle 0x11e04b42 */
  if ((C.zf||C.sf!=C.of)) goto L_11e04b42;
L_11e04b3b:;
  /* 11e04b3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04b3d jmp 0x11e05097 */
  goto L_11e05097;
L_11e04b42:;
  /* 11e04b42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04b45 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e04b48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04b4b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e04b4e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04b52 jbe 0x11e04b5b */
  if ((C.cf||C.zf)) goto L_11e04b5b;
  /* 11e04b54 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e04b5b:;
  /* 11e04b5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04b5e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04b61 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04b64 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04b67 jne 0x11e04c3d */
  if (!C.zf) goto L_11e04c3d;
  /* 11e04b6d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04b71 jae 0x11e04bd2 */
  if (!C.cf) goto L_11e04bd2;
  /* 11e04b73 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04b78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04b7b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04b7d not edx */
  EDX = (~(EDX));
  /* 11e04b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04b82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04b85 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e04b89 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04b8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04b8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04b91 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e04b95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04b98 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04b9b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e04b9e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e04ba1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04ba4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04ba7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e04baa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04bad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04bb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e04bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04bb6 jne 0x11e04bd0 */
  if (!C.zf) goto L_11e04bd0;
  /* 11e04bb8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04bbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04bc0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04bc2 not edx */
  EDX = (~(EDX));
  /* 11e04bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04bc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e04bc9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04bcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04bce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e04bd0:;
  /* 11e04bd0 jmp 0x11e04c3d */
  goto L_11e04c3d;
L_11e04bd2:;
  /* 11e04bd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04bd5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04bd8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04bdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04bdf not eax */
  EAX = (~(EAX));
  /* 11e04be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04be4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04be7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e04bee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04bf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04bf3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04bf6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e04bfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04c00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04c03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e04c06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e04c09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04c0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04c0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e04c12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04c15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04c18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04c1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04c1e jne 0x11e04c3d */
  if (!C.zf) goto L_11e04c3d;
  /* 11e04c20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04c23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04c26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04c2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04c2d not eax */
  EAX = (~(EAX));
  /* 11e04c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04c32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04c35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e04c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04c3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e04c3d:;
  /* 11e04c3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04c40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e04c43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04c46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04c49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e04c4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04c4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e04c52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04c55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e04c58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e04c5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04c5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04c61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04c64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e04c67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04c6b jle 0x11e04db7 */
  if ((C.zf||C.sf!=C.of)) goto L_11e04db7;
  /* 11e04c71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04c74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04c77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e04c7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04c7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e04c80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04c83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e04c86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04c8a jbe 0x11e04c93 */
  if ((C.cf||C.zf)) goto L_11e04c93;
  /* 11e04c8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e04c93:;
  /* 11e04c93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04c96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e04c99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11e04c9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e04c9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04ca2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04ca5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04ca8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e04cab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04cae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04cb1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e04cb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04cb7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04cba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e04cbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04cc0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04cc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04cc6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e04cc9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04ccc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04ccf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04cd2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04cd5 jne 0x11e04da3 */
  if (!C.zf) goto L_11e04da3;
  /* 11e04cdb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04cdf jae 0x11e04d3c */
  if (!C.cf) goto L_11e04d3c;
  /* 11e04ce1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04ce4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04ce7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04ceb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04cee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04cf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e04cf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e04cf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04cfa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04cfd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e04d00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04d02 jne 0x11e04d1a */
  if (!C.zf) goto L_11e04d1a;
  /* 11e04d04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04d09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04d0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04d0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04d11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e04d13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04d18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e04d1a:;
  /* 11e04d1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04d1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04d22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04d24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04d27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11e04d2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04d30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04d33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11e04d3a jmp 0x11e04da3 */
  goto L_11e04da3;
L_11e04d3c:;
  /* 11e04d3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04d42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04d46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04d4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e04d4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e04d52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04d58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11e04d5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04d5d jne 0x11e04d7a */
  if (!C.zf) goto L_11e04d7a;
  /* 11e04d5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04d62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04d65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04d6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04d6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04d6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04d72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04d74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04d77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e04d7a:;
  /* 11e04d7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04d7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04d80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04d85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04d8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e04d94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04d99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04d9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11e04da3:;
  /* 11e04da3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04da6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04da9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e04dab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04dae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04db1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04db4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11e04db7:;
  /* 11e04db7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04dba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04dbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04dc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e04dc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04dc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04dcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04dce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11e04dd1 jmp 0x11e05092 */
  goto L_11e05092;
L_11e04dd6:;
  /* 11e04dd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04dd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04ddc jge 0x11e05092 */
  if ((C.sf==C.of)) goto L_11e05092;
  /* 11e04de2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04de8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04deb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e04ded mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e04df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04df3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04df6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04df9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11e04dfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04dff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04e02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e04e05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04e08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04e0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e04e0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04e11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e04e14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04e17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e04e1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04e1e jbe 0x11e04e27 */
  if ((C.cf||C.zf)) goto L_11e04e27;
  /* 11e04e20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e04e27:;
  /* 11e04e27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04e2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e04e2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04e2f jne 0x11e04f70 */
  if (!C.zf) goto L_11e04f70;
  /* 11e04e35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e04e38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e04e3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04e3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e04e41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04e45 jbe 0x11e04e4e */
  if ((C.cf||C.zf)) goto L_11e04e4e;
  /* 11e04e47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11e04e4e:;
  /* 11e04e4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04e51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04e54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04e57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04e5a jne 0x11e04f30 */
  if (!C.zf) goto L_11e04f30;
  /* 11e04e60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04e64 jae 0x11e04ec5 */
  if (!C.cf) goto L_11e04ec5;
  /* 11e04e66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04e6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04e6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04e70 not edx */
  EDX = (~(EDX));
  /* 11e04e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04e75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04e78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e04e7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e04e7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04e81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04e84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e04e88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04e8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04e8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11e04e91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e04e94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04e97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04e9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11e04e9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04ea0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04ea3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e04ea7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04ea9 jne 0x11e04ec3 */
  if (!C.zf) goto L_11e04ec3;
  /* 11e04eab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04eb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04eb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e04eb5 not edx */
  EDX = (~(EDX));
  /* 11e04eb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04eba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e04ebc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04ec1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e04ec3:;
  /* 11e04ec3 jmp 0x11e04f30 */
  goto L_11e04f30;
L_11e04ec5:;
  /* 11e04ec5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04ec8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04ecb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04ed0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04ed2 not eax */
  EAX = (~(EAX));
  /* 11e04ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04ed7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04eda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11e04ee1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e04ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e04ee6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04ee9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11e04ef0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04ef3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04ef6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11e04ef9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e04efc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04eff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04f02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11e04f05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04f08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04f0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e04f0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e04f11 jne 0x11e04f30 */
  if (!C.zf) goto L_11e04f30;
  /* 11e04f13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e04f16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04f19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04f1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04f20 not eax */
  EAX = (~(EAX));
  /* 11e04f22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04f25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e04f28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e04f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04f2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e04f30:;
  /* 11e04f30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04f33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e04f36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04f39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04f3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e04f3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04f42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e04f45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e04f48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e04f4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e04f4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04f51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04f54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e04f57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e04f5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e04f5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e04f60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e04f63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04f67 jbe 0x11e04f70 */
  if ((C.cf||C.zf)) goto L_11e04f70;
  /* 11e04f69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11e04f70:;
  /* 11e04f70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e04f73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e04f76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11e04f79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e04f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04f7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04f82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04f85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e04f88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04f8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04f8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e04f91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e04f94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04f97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e04f9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04f9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04fa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04fa3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e04fa6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04fa9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e04fac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e04faf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04fb2 jne 0x11e0507e */
  if (!C.zf) goto L_11e0507e;
  /* 11e04fb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e04fbc jae 0x11e05018 */
  if (!C.cf) goto L_11e05018;
  /* 11e04fbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04fc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04fc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e04fc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04fcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04fce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e04fd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e04fd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e04fd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e04fd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e04fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e04fde jne 0x11e04ff6 */
  if (!C.zf) goto L_11e04ff6;
  /* 11e04fe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e04fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e04fe8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e04fea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04fed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e04fef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e04ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e04ff4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e04ff6:;
  /* 11e04ff6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e04ffb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e04ffe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e05000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05003 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05006 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11e0500a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0500c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0500f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05012 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11e05016 jmp 0x11e0507e */
  goto L_11e0507e;
L_11e05018:;
  /* 11e05018 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0501b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0501e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11e05022 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05025 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05028 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11e0502b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0502d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05030 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05033 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11e05036 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e05038 jne 0x11e05055 */
  if (!C.zf) goto L_11e05055;
  /* 11e0503a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0503d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05040 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e05045 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e05047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0504a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0504d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0504f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05052 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e05055:;
  /* 11e05055 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e05058 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0505b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e05060 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e05062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05065 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05068 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11e0506f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e05071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05074 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e05077 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11e0507e:;
  /* 11e0507e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05081 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e05084 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e05086 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05089 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0508c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0508f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11e05092:;
  /* 11e05092 mov eax, 1 */
  EAX = (0x1u);
L_11e05097:;
  /* 11e05097 mov esp, ebp */
  ESP = (EBP);
  /* 11e05099 pop ebp */
  EBP = (pop32());
  /* 11e0509a ret  */
  ESPCHK(0x11e04ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150a0 @ 0x11e050a0 (304 bytes, 79 insns) */
void f_11e050a0(void) {
  FTRACE(0x11e050a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e050a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e050a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e050a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e050a4 cmp dword ptr [0x11e31fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e050ab je 0x11e051cc */
  if (C.zf) goto L_11e051cc;
  /* 11e050b1 mov eax, dword ptr [0x11e31fb4] */
  EAX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e050b6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11e050b9 mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e050bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e050c2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e050c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e050c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e050cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e050d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e050d4 push eax */
  push32((uint32_t)(EAX));
  /* 11e050d5 call dword ptr [0x11e33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33378))), 0x11e050dbu);
  /* 11e050db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e050e0 mov ecx, dword ptr [0x11e31fb4] */
  ECX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e050e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e050e8 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e050ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e050f0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e050f2 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e050f8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e050fb mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05100 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e05103 mov edx, dword ptr [0x11e31fb4] */
  EDX = (r32((uint32_t)(0x11e31fb4)));
  /* 11e05109 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11e05114 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0511c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11e0511f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e05122 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05127 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0512a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11e0512d mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05133 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e05136 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11e0513a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0513c jne 0x11e05152 */
  if (!C.zf) goto L_11e05152;
  /* 11e0513e mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05144 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e05147 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e05149 mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0514f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e05152:;
  /* 11e05152 mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05158 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0515c jne 0x11e051c2 */
  if (!C.zf) goto L_11e051c2;
  /* 11e0515e cmp dword ptr [0x11e31fc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05165 jle 0x11e051c2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e051c2;
  /* 11e05167 mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e0516c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0516f push ecx */
  push32((uint32_t)(ECX));
  /* 11e05170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e05172 mov edx, dword ptr [0x11e31fc8] */
  EDX = (r32((uint32_t)(0x11e31fc8)));
  /* 11e05178 push edx */
  push32((uint32_t)(EDX));
  /* 11e05179 call dword ptr [0x11e3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3337c))), 0x11e0517fu);
  /* 11e0517f mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e05184 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05187 mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e0518d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0518f mov edx, dword ptr [0x11e31fbc] */
  EDX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e05195 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05198 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0519a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0519b mov eax, dword ptr [0x11e31fbc] */
  EAX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e051a0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e051a3 push eax */
  push32((uint32_t)(EAX));
  /* 11e051a4 mov ecx, dword ptr [0x11e31fbc] */
  ECX = (r32((uint32_t)(0x11e31fbc)));
  /* 11e051aa push ecx */
  push32((uint32_t)(ECX));
  /* 11e051ab call 0x11e032f0 */
  push32(0x11e051b0u); f_11e032f0();
  /* 11e051b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e051b3 mov edx, dword ptr [0x11e31fc0] */
  EDX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e051b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e051bc mov dword ptr [0x11e31fc0], edx */
  w32((uint32_t)(0x11e31fc0), (EDX));
L_11e051c2:;
  /* 11e051c2 mov dword ptr [0x11e31fbc], 0 */
  w32((uint32_t)(0x11e31fbc), (0x0u));
L_11e051cc:;
  /* 11e051cc mov esp, ebp */
  ESP = (EBP);
  /* 11e051ce pop ebp */
  EBP = (pop32());
  /* 11e051cf ret  */
  ESPCHK(0x11e050a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100151d0 @ 0x11e051d0 (1565 bytes, 343 insns) */
void f_11e051d0(void) {
  FTRACE(0x11e051d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e051d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e051d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e051d3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e051d9 mov eax, dword ptr [0x11e31fc0] */
  EAX = (r32((uint32_t)(0x11e31fc0)));
  /* 11e051de imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e051e1 push eax */
  push32((uint32_t)(EAX));
  /* 11e051e2 mov ecx, dword ptr [0x11e31fc4] */
  ECX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e051e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e051e9 call dword ptr [0x11e33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33404))), 0x11e051efu);
  /* 11e051ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e051f1 je 0x11e051fb */
  if (C.zf) goto L_11e051fb;
  /* 11e051f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e051f6 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e051fb:;
  /* 11e051fb mov edx, dword ptr [0x11e31fc4] */
  EDX = (r32((uint32_t)(0x11e31fc4)));
  /* 11e05201 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11e05207 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11e05211 jmp 0x11e05222 */
  goto L_11e05222;
L_11e05213:;
  /* 11e05213 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11e05219 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0521c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11e05222:;
  /* 11e05222 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11e05228 cmp ecx, dword ptr [0x11e31fc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0522e jge 0x11e057e7 */
  if ((C.sf==C.of)) goto L_11e057e7;
  /* 11e05234 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e0523a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e0523d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11e05243 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11e05248 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e0524e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0524f call dword ptr [0x11e33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33404))), 0x11e05255u);
  /* 11e05255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e05257 je 0x11e05263 */
  if (C.zf) goto L_11e05263;
  /* 11e05259 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11e0525e jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05263:;
  /* 11e05263 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e05269 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e0526c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11e05272 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e05278 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0527e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e05281 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e05287 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0528a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0528d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11e05297 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11e052a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e052a8 jmp 0x11e052b3 */
  goto L_11e052b3;
L_11e052aa:;
  /* 11e052aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e052ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e052b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e052b3:;
  /* 11e052b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e052b7 jge 0x11e057ab */
  if ((C.sf==C.of)) goto L_11e057ab;
  /* 11e052bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11e052c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11e052d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11e052db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11e052e5 jmp 0x11e052f6 */
  goto L_11e052f6;
L_11e052e7:;
  /* 11e052e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e052ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e052f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11e052f6:;
  /* 11e052f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e052fd jge 0x11e05312 */
  if ((C.sf==C.of)) goto L_11e05312;
  /* 11e052ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e05305 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11e05310 jmp 0x11e052e7 */
  goto L_11e052e7;
L_11e05312:;
  /* 11e05312 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05316 jl 0x11e0574d */
  if ((C.sf!=C.of)) goto L_11e0574d;
  /* 11e0531c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e05321 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e05327 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05328 call dword ptr [0x11e33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33404))), 0x11e0532eu);
  /* 11e0532e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e05330 je 0x11e0533c */
  if (C.zf) goto L_11e0533c;
  /* 11e05332 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11e05337 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e0533c:;
  /* 11e0533c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e05342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e05345 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11e0534f jmp 0x11e05360 */
  goto L_11e05360;
L_11e05351:;
  /* 11e05351 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11e05357 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0535a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11e05360:;
  /* 11e05360 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05367 jge 0x11e054e4 */
  if ((C.sf==C.of)) goto L_11e054e4;
  /* 11e0536d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05370 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05373 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11e05379 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e0537f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05385 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11e0538b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e05391 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05395 jne 0x11e053a2 */
  if (!C.zf) goto L_11e053a2;
  /* 11e05397 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11e0539d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e053a0 je 0x11e053ac */
  if (C.zf) goto L_11e053ac;
L_11e053a2:;
  /* 11e053a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11e053a7 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e053ac:;
  /* 11e053ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e053b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e053b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11e053ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e053c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11e053c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11e053cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e053cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e053d1 je 0x11e05409 */
  if (C.zf) goto L_11e05409;
  /* 11e053d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e053d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e053dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11e053e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e053ec jle 0x11e053f8 */
  if ((C.zf||C.sf!=C.of)) goto L_11e053f8;
  /* 11e053ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11e053f3 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e053f8:;
  /* 11e053f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11e053fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05401 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11e05407 jmp 0x11e0544b */
  goto L_11e0544b;
L_11e05409:;
  /* 11e05409 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e0540f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e05412 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05415 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11e0541b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05422 jle 0x11e0542e */
  if ((C.zf||C.sf!=C.of)) goto L_11e0542e;
  /* 11e05424 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11e0542e:;
  /* 11e0542e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e05434 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11e0543b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0543e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e05444 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11e0544b:;
  /* 11e0544b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05452 jl 0x11e0546d */
  if ((C.sf!=C.of)) goto L_11e0546d;
  /* 11e05454 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11e0545a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0545d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0545f jne 0x11e0546d */
  if (!C.zf) goto L_11e0546d;
  /* 11e05461 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0546b jle 0x11e05477 */
  if ((C.zf||C.sf!=C.of)) goto L_11e05477;
L_11e0546d:;
  /* 11e0546d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11e05472 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05477:;
  /* 11e05477 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e0547d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05483 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e05486 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0548c je 0x11e05498 */
  if (C.zf) goto L_11e05498;
  /* 11e0548e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11e05493 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05498:;
  /* 11e05498 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e0549e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e054a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11e054aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e054b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e054b6 jb 0x11e053ac */
  if (C.cf) goto L_11e053ac;
  /* 11e054bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e054c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e054c8 je 0x11e054d4 */
  if (C.zf) goto L_11e054d4;
  /* 11e054ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11e054cf jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e054d4:;
  /* 11e054d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e054d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e054dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e054df jmp 0x11e05351 */
  goto L_11e05351;
L_11e054e4:;
  /* 11e054e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e054e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e054e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e054ef je 0x11e054fb */
  if (C.zf) goto L_11e054fb;
  /* 11e054f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11e054f6 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e054fb:;
  /* 11e054fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e054fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11e05504 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e0550b jmp 0x11e05516 */
  goto L_11e05516;
L_11e0550d:;
  /* 11e0550d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05510 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05513 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e05516:;
  /* 11e05516 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0551a jge 0x11e0574d */
  if ((C.sf==C.of)) goto L_11e0574d;
  /* 11e05520 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11e0552a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e05530 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11e05536:;
  /* 11e05536 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e0553c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0553f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11e05545 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e0554b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05551 je 0x11e0567a */
  if (C.zf) goto L_11e0567a;
  /* 11e05557 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0555a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e05560 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05567 je 0x11e0567a */
  if (C.zf) goto L_11e0567a;
  /* 11e0556d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e05573 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05579 jb 0x11e0558e */
  if (C.cf) goto L_11e0558e;
  /* 11e0557b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e05581 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05586 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0558c jb 0x11e05598 */
  if (C.cf) goto L_11e05598;
L_11e0558e:;
  /* 11e0558e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11e05593 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05598:;
  /* 11e05598 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e0559e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e055a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11e055aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11e055b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e055b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e055b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e055be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11e055c4:;
  /* 11e055c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e055cd je 0x11e055ee */
  if (C.zf) goto L_11e055ee;
  /* 11e055cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e055d8 jne 0x11e055dc */
  if (!C.zf) goto L_11e055dc;
  /* 11e055da jmp 0x11e055ee */
  goto L_11e055ee;
L_11e055dc:;
  /* 11e055dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e055e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11e055e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e055e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e055ec jmp 0x11e055c4 */
  goto L_11e055c4;
L_11e055ee:;
  /* 11e055ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e055f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e055f7 jne 0x11e05603 */
  if (!C.zf) goto L_11e05603;
  /* 11e055f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11e055fe jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05603:;
  /* 11e05603 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e05609 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0560b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e0560e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05611 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11e05617 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0561e jle 0x11e0562a */
  if ((C.zf||C.sf!=C.of)) goto L_11e0562a;
  /* 11e05620 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11e0562a:;
  /* 11e0562a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11e05630 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05633 je 0x11e0563f */
  if (C.zf) goto L_11e0563f;
  /* 11e05635 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11e0563a jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e0563f:;
  /* 11e0563f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e05645 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e05648 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0564e je 0x11e0565a */
  if (C.zf) goto L_11e0565a;
  /* 11e05650 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11e05655 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e0565a:;
  /* 11e0565a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11e05660 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11e05666 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e0566c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0566f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11e05675 jmp 0x11e05536 */
  goto L_11e05536;
L_11e0567a:;
  /* 11e0567a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05681 je 0x11e056f1 */
  if (C.zf) goto L_11e056f1;
  /* 11e05683 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05687 jge 0x11e056bb */
  if ((C.sf==C.of)) goto L_11e056bb;
  /* 11e05689 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e0568e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05691 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e05693 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11e05699 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0569b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11e056a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e056a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e056a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e056ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11e056b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e056b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11e056b9 jmp 0x11e056f1 */
  goto L_11e056f1;
L_11e056bb:;
  /* 11e056bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e056be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e056c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e056c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e056c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11e056ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e056d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11e056d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e056d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e056dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e056e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e056e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11e056e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e056eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11e056f1:;
  /* 11e056f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11e056f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e056fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05700 jne 0x11e05714 */
  if (!C.zf) goto L_11e05714;
  /* 11e05702 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05705 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11e0570b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05712 je 0x11e0571e */
  if (C.zf) goto L_11e0571e;
L_11e05714:;
  /* 11e05714 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11e05719 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e0571e:;
  /* 11e0571e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e05724 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e05727 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0572d je 0x11e05739 */
  if (C.zf) goto L_11e05739;
  /* 11e0572f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11e05734 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05739:;
  /* 11e05739 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11e0573f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05742 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11e05748 jmp 0x11e0550d */
  goto L_11e0550d;
L_11e0574d:;
  /* 11e0574d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e05750 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e05756 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11e0575c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05760 jne 0x11e0577a */
  if (!C.zf) goto L_11e0577a;
  /* 11e05762 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e05765 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11e0576b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11e05771 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05778 je 0x11e05781 */
  if (C.zf) goto L_11e05781;
L_11e0577a:;
  /* 11e0577a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11e0577f jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e05781:;
  /* 11e05781 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11e05787 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0578d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11e05793 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e05796 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0579b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e0579e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e057a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e057a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e057a6 jmp 0x11e052aa */
  goto L_11e052aa;
L_11e057ab:;
  /* 11e057ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e057b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11e057b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e057b9 jne 0x11e057cc */
  if (!C.zf) goto L_11e057cc;
  /* 11e057bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e057c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11e057c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e057ca je 0x11e057d3 */
  if (C.zf) goto L_11e057d3;
L_11e057cc:;
  /* 11e057cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11e057d1 jmp 0x11e057e9 */
  goto L_11e057e9;
L_11e057d3:;
  /* 11e057d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11e057d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e057dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11e057e2 jmp 0x11e05213 */
  goto L_11e05213;
L_11e057e7:;
  /* 11e057e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e057e9:;
  /* 11e057e9 mov esp, ebp */
  ESP = (EBP);
  /* 11e057eb pop ebp */
  EBP = (pop32());
  /* 11e057ec ret  */
  ESPCHK(0x11e051d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x11e057f0 (91 bytes, 30 insns) */
void f_11e057f0(void) {
  FTRACE(0x11e057f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e057f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e057f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e057f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e057f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e057f8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e057fe jne 0x11e0581e */
  if (!C.zf) goto L_11e0581e;
  /* 11e05800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05803 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e05805 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05809 jne 0x11e0581e */
  if (!C.zf) goto L_11e0581e;
  /* 11e0580b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0580e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e05810 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05817 jne 0x11e0581e */
  if (!C.zf) goto L_11e0581e;
  /* 11e05819 call 0x11dfed20 */
  push32(0x11e0581eu); f_11dfed20();
L_11e0581e:;
  /* 11e0581e cmp dword ptr [0x11e30808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05825 je 0x11e05845 */
  if (C.zf) goto L_11e05845;
  /* 11e05827 mov eax, dword ptr [0x11e30808] */
  EAX = (r32((uint32_t)(0x11e30808)));
  /* 11e0582c push eax */
  push32((uint32_t)(EAX));
  /* 11e0582d call 0x11e058f0 */
  push32(0x11e05832u); f_11e058f0();
  /* 11e05832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e05837 je 0x11e05845 */
  if (C.zf) goto L_11e05845;
  /* 11e05839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0583c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0583d call dword ptr [0x11e30808] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e30808))), 0x11e05843u);
  /* 11e05843 jmp 0x11e05847 */
  goto L_11e05847;
L_11e05845:;
  /* 11e05845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e05847:;
  /* 11e05847 pop ebp */
  EBP = (pop32());
  /* 11e05848 ret 4 */
  ESPCHK(0x11e057f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015850 @ 0x11e05850 (21 bytes, 7 insns) */
void f_11e05850(void) {
  FTRACE(0x11e05850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05850 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05851 mov ebp, esp */
  EBP = (ESP);
  /* 11e05853 push 0x11e057f0 */
  push32((uint32_t)(0x11e057f0u));
  /* 11e05858 call dword ptr [0x11e33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33364))), 0x11e0585eu);
  /* 11e0585e mov dword ptr [0x11e30808], eax */
  w32((uint32_t)(0x11e30808), (EAX));
  /* 11e05863 pop ebp */
  EBP = (pop32());
  /* 11e05864 ret  */
  ESPCHK(0x11e05850u, _esp0);
  ESP += 4; return;
}

/* FUN_10015870 @ 0x11e05870 (17 bytes, 7 insns) */
void f_11e05870(void) {
  FTRACE(0x11e05870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05870 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05871 mov ebp, esp */
  EBP = (ESP);
  /* 11e05873 mov eax, dword ptr [0x11e30808] */
  EAX = (r32((uint32_t)(0x11e30808)));
  /* 11e05878 push eax */
  push32((uint32_t)(EAX));
  /* 11e05879 call dword ptr [0x11e33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33364))), 0x11e0587fu);
  /* 11e0587f pop ebp */
  EBP = (pop32());
  /* 11e05880 ret  */
  ESPCHK(0x11e05870u, _esp0);
  ESP += 4; return;
}

/* FUN_10015890 @ 0x11e05890 (43 bytes, 16 insns) */
void f_11e05890(void) {
  FTRACE(0x11e05890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05890 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05891 mov ebp, esp */
  EBP = (ESP);
  /* 11e05893 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05894 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e0589b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0589e push eax */
  push32((uint32_t)(EAX));
  /* 11e0589f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e058a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e058a3 call dword ptr [0x11e333ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333ec))), 0x11e058a9u);
  /* 11e058a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e058ab je 0x11e058b4 */
  if (C.zf) goto L_11e058b4;
  /* 11e058ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e058b4:;
  /* 11e058b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e058b7 mov esp, ebp */
  ESP = (EBP);
  /* 11e058b9 pop ebp */
  EBP = (pop32());
  /* 11e058ba ret  */
  ESPCHK(0x11e05890u, _esp0);
  ESP += 4; return;
}

/* FUN_100158c0 @ 0x11e058c0 (43 bytes, 16 insns) */
void f_11e058c0(void) {
  FTRACE(0x11e058c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e058c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e058c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e058c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e058c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e058cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e058ce push eax */
  push32((uint32_t)(EAX));
  /* 11e058cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e058d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e058d3 call dword ptr [0x11e33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33404))), 0x11e058d9u);
  /* 11e058d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e058db je 0x11e058e4 */
  if (C.zf) goto L_11e058e4;
  /* 11e058dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e058e4:;
  /* 11e058e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e058e7 mov esp, ebp */
  ESP = (EBP);
  /* 11e058e9 pop ebp */
  EBP = (pop32());
  /* 11e058ea ret  */
  ESPCHK(0x11e058c0u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11e058f0 (39 bytes, 14 insns) */
void f_11e058f0(void) {
  FTRACE(0x11e058f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e058f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e058f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e058f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e058f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e058fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e058fe push eax */
  push32((uint32_t)(EAX));
  /* 11e058ff call dword ptr [0x11e33360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33360))), 0x11e05905u);
  /* 11e05905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e05907 je 0x11e05910 */
  if (C.zf) goto L_11e05910;
  /* 11e05909 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e05910:;
  /* 11e05910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05913 mov esp, ebp */
  ESP = (EBP);
  /* 11e05915 pop ebp */
  EBP = (pop32());
  /* 11e05916 ret  */
  ESPCHK(0x11e058f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11e05920 (129 bytes, 56 insns) */
void f_11e05920(void) {
  FTRACE(0x11e05920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05920 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e05924 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e05928 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e0592e jne 0x11e0596c */
  if (!C.zf) goto L_11e0596c;
L_11e05930:;
  /* 11e05930 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e05932 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05934 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e05936 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e05938 je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e0593a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0593d jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e0593f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e05941 je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e05943 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e05946 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05949 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e0594b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0594d je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e0594f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05952 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e05954 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05957 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0595a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e0595c jne 0x11e05930 */
  if (!C.zf) goto L_11e05930;
  /* 11e0595e mov edi, edi */
  EDI = (EDI);
L_11e05960:;
  /* 11e05960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e05962 ret  */
  ESPCHK(0x11e05920u, _esp0);
  ESP += 4; return;
  /* 11e05963 nop  */
  /* nop */
L_11e05964:;
  /* 11e05964 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05966 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e05968 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e05969 ret  */
  ESPCHK(0x11e05920u, _esp0);
  ESP += 4; return;
  /* 11e0596a mov edi, edi */
  EDI = (EDI);
L_11e0596c:;
  /* 11e0596c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11e05972 je 0x11e05988 */
  if (C.zf) goto L_11e05988;
  /* 11e05974 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e05976 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e05977 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05979 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e0597b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e0597c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0597e je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e05980 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11e05986 je 0x11e05930 */
  if (C.zf) goto L_11e05930;
L_11e05988:;
  /* 11e05988 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e0598b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0598e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05990 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e05992 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e05994 je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e05996 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e05999 jne 0x11e05964 */
  if (!C.zf) goto L_11e05964;
  /* 11e0599b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e0599d je 0x11e05960 */
  if (C.zf) goto L_11e05960;
  /* 11e0599f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e059a2 jmp 0x11e05930 */
  goto L_11e05930;
}

/* FUN_10015a69 @ 0x11e05a69 (27 bytes, 11 insns) */
void f_11e05a69(void) {
  FTRACE(0x11e05a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05a69 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05a6a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e05a6e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11e05a70 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e05a73 push eax */
  push32((uint32_t)(EAX));
  /* 11e05a74 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e05a77 push eax */
  push32((uint32_t)(EAX));
  /* 11e05a78 call 0x11dfa3a2 */
  push32(0x11e05a7du); f_11dfa3a2();
  /* 11e05a7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05a80 pop ebp */
  EBP = (pop32());
  /* 11e05a81 ret 4 */
  ESPCHK(0x11e05a69u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11e05a90 (446 bytes, 130 insns) */
void f_11e05a90(void) {
  FTRACE(0x11e05a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05a91 mov ebp, esp */
  EBP = (ESP);
  /* 11e05a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05a96 call 0x11dfeb50 */
  push32(0x11e05a9bu); f_11dfeb50();
  /* 11e05a9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e05a9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05aa1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11e05aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05aa8 push edx */
  push32((uint32_t)(EDX));
  /* 11e05aa9 call 0x11e05c50 */
  push32(0x11e05aaeu); f_11e05c50();
  /* 11e05aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05ab1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e05ab4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05ab8 je 0x11e05ac3 */
  if (C.zf) goto L_11e05ac3;
  /* 11e05aba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05abd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05ac1 jne 0x11e05ad2 */
  if (!C.zf) goto L_11e05ad2;
L_11e05ac3:;
  /* 11e05ac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05ac7 call dword ptr [0x11e3335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3335c))), 0x11e05acdu);
  /* 11e05acd jmp 0x11e05c4a */
  goto L_11e05c4a;
L_11e05ad2:;
  /* 11e05ad2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05ad5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05ad9 jne 0x11e05aef */
  if (!C.zf) goto L_11e05aef;
  /* 11e05adb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05ade mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e05ae5 mov eax, 1 */
  EAX = (0x1u);
  /* 11e05aea jmp 0x11e05c4a */
  goto L_11e05c4a;
L_11e05aef:;
  /* 11e05aef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05af2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05af6 jne 0x11e05b00 */
  if (!C.zf) goto L_11e05b00;
  /* 11e05af8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05afb jmp 0x11e05c4a */
  goto L_11e05c4a;
L_11e05b00:;
  /* 11e05b00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05b03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e05b06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11e05b0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e05b12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05b18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11e05b1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05b1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05b22 jne 0x11e05c27 */
  if (!C.zf) goto L_11e05c27;
  /* 11e05b28 mov eax, dword ptr [0x11e2e2d8] */
  EAX = (r32((uint32_t)(0x11e2e2d8)));
  /* 11e05b2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e05b30 jmp 0x11e05b3b */
  goto L_11e05b3b;
L_11e05b32:;
  /* 11e05b32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05b38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e05b3b:;
  /* 11e05b3b mov edx, dword ptr [0x11e2e2d8] */
  EDX = (r32((uint32_t)(0x11e2e2d8)));
  /* 11e05b41 add edx, dword ptr [0x11e2e2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2e2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05b47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05b4a jge 0x11e05b62 */
  if ((C.sf==C.of)) goto L_11e05b62;
  /* 11e05b4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e05b4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05b52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e05b58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11e05b60 jmp 0x11e05b32 */
  goto L_11e05b32;
L_11e05b62:;
  /* 11e05b62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11e05b68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e05b6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05b6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05b74 jne 0x11e05b85 */
  if (!C.zf) goto L_11e05b85;
  /* 11e05b76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11e05b80 jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05b85:;
  /* 11e05b85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05b88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05b8e jne 0x11e05b9c */
  if (!C.zf) goto L_11e05b9c;
  /* 11e05b90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05b93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11e05b9a jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05b9c:;
  /* 11e05b9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05b9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05ba5 jne 0x11e05bb3 */
  if (!C.zf) goto L_11e05bb3;
  /* 11e05ba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05baa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11e05bb1 jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05bb3:;
  /* 11e05bb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05bb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05bbc jne 0x11e05bca */
  if (!C.zf) goto L_11e05bca;
  /* 11e05bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05bc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11e05bc8 jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05bca:;
  /* 11e05bca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05bcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05bd3 jne 0x11e05be1 */
  if (!C.zf) goto L_11e05be1;
  /* 11e05bd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05bd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11e05bdf jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05be1:;
  /* 11e05be1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05be4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05bea jne 0x11e05bf8 */
  if (!C.zf) goto L_11e05bf8;
  /* 11e05bec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05bef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11e05bf6 jmp 0x11e05c0d */
  goto L_11e05c0d;
L_11e05bf8:;
  /* 11e05bf8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05bfb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05c01 jne 0x11e05c0d */
  if (!C.zf) goto L_11e05c0d;
  /* 11e05c03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05c06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11e05c0d:;
  /* 11e05c0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05c10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11e05c13 push edx */
  push32((uint32_t)(EDX));
  /* 11e05c14 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e05c16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11e05c19u);
  /* 11e05c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05c1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05c1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e05c22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11e05c25 jmp 0x11e05c3e */
  goto L_11e05c3e;
L_11e05c27:;
  /* 11e05c27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05c2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11e05c31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05c34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e05c37 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05c38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11e05c3bu);
  /* 11e05c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e05c3e:;
  /* 11e05c3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05c41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e05c44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11e05c47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e05c4a:;
  /* 11e05c4a mov esp, ebp */
  ESP = (EBP);
  /* 11e05c4c pop ebp */
  EBP = (pop32());
  /* 11e05c4d ret  */
  ESPCHK(0x11e05a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c50 @ 0x11e05c50 (89 bytes, 35 insns) */
void f_11e05c50(void) {
  FTRACE(0x11e05c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05c51 mov ebp, esp */
  EBP = (ESP);
  /* 11e05c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05c57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e05c5a:;
  /* 11e05c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e05c5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05c62 je 0x11e05c82 */
  if (C.zf) goto L_11e05c82;
  /* 11e05c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05c67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05c6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05c6d mov ecx, dword ptr [0x11e2e2e4] */
  ECX = (r32((uint32_t)(0x11e2e2e4)));
  /* 11e05c73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05c79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05c7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05c7e jae 0x11e05c82 */
  if (!C.cf) goto L_11e05c82;
  /* 11e05c80 jmp 0x11e05c5a */
  goto L_11e05c5a;
L_11e05c82:;
  /* 11e05c82 mov eax, dword ptr [0x11e2e2e4] */
  EAX = (r32((uint32_t)(0x11e2e2e4)));
  /* 11e05c87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05c8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05c8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05c8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05c92 jae 0x11e05c9e */
  if (!C.cf) goto L_11e05c9e;
  /* 11e05c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e05c99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05c9c je 0x11e05ca2 */
  if (C.zf) goto L_11e05ca2;
L_11e05c9e:;
  /* 11e05c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e05ca0 jmp 0x11e05ca5 */
  goto L_11e05ca5;
L_11e05ca2:;
  /* 11e05ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e05ca5:;
  /* 11e05ca5 mov esp, ebp */
  ESP = (EBP);
  /* 11e05ca7 pop ebp */
  EBP = (pop32());
  /* 11e05ca8 ret  */
  ESPCHK(0x11e05c50u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11e05cb0 (30 bytes, 12 insns) */
void f_11e05cb0(void) {
  FTRACE(0x11e05cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e05cb3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e05cb5 call 0x11e00f10 */
  push32(0x11e05cbau); f_11e00f10();
  /* 11e05cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05cbd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e05cbf call 0x11e01a80 */
  push32(0x11e05cc4u); f_11e01a80();
  /* 11e05cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05cc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e05cc9 call 0x11dfeec0 */
  push32(0x11e05cceu); f_11dfeec0();
  /* 11e05cce pop ebp */
  EBP = (pop32());
  /* 11e05ccf ret  */
  ESPCHK(0x11e05cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cd0 @ 0x11e05cd0 (130 bytes, 43 insns) */
void f_11e05cd0(void) {
  FTRACE(0x11e05cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e05cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05cd7 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05cdd jae 0x11e05d01 */
  if (!C.cf) goto L_11e05d01;
  /* 11e05cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05ce2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e05ce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05ce8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e05ceb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05cee mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e05cf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e05cfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e05cfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e05cff jne 0x11e05d1c */
  if (!C.zf) goto L_11e05d1c;
L_11e05d01:;
  /* 11e05d01 call 0x11e07270 */
  push32(0x11e05d06u); f_11e07270();
  /* 11e05d06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e05d0c call 0x11e07280 */
  push32(0x11e05d11u); f_11e07280();
  /* 11e05d11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e05d17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05d1a jmp 0x11e05d4e */
  goto L_11e05d4e;
L_11e05d1c:;
  /* 11e05d1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05d1f push edx */
  push32((uint32_t)(EDX));
  /* 11e05d20 call 0x11e0a810 */
  push32(0x11e05d25u); f_11e0a810();
  /* 11e05d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05d28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e05d2b push eax */
  push32((uint32_t)(EAX));
  /* 11e05d2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05d2f push ecx */
  push32((uint32_t)(ECX));
  /* 11e05d30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05d33 push edx */
  push32((uint32_t)(EDX));
  /* 11e05d34 call 0x11e05d60 */
  push32(0x11e05d39u); f_11e05d60();
  /* 11e05d39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05d3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05d42 push eax */
  push32((uint32_t)(EAX));
  /* 11e05d43 call 0x11e0a8a0 */
  push32(0x11e05d48u); f_11e0a8a0();
  /* 11e05d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e05d4e:;
  /* 11e05d4e mov esp, ebp */
  ESP = (EBP);
  /* 11e05d50 pop ebp */
  EBP = (pop32());
  /* 11e05d51 ret  */
  ESPCHK(0x11e05cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d60 @ 0x11e05d60 (178 bytes, 56 insns) */
void f_11e05d60(void) {
  FTRACE(0x11e05d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05d61 mov ebp, esp */
  EBP = (ESP);
  /* 11e05d63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05d69 push eax */
  push32((uint32_t)(EAX));
  /* 11e05d6a call 0x11e0a690 */
  push32(0x11e05d6fu); f_11e0a690();
  /* 11e05d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05d72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e05d75 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05d79 jne 0x11e05d8e */
  if (!C.zf) goto L_11e05d8e;
  /* 11e05d7b call 0x11e07270 */
  push32(0x11e05d80u); f_11e07270();
  /* 11e05d80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e05d86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05d89 jmp 0x11e05e0e */
  goto L_11e05e0e;
L_11e05d8e:;
  /* 11e05d8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e05d91 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e05d94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05d97 push edx */
  push32((uint32_t)(EDX));
  /* 11e05d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e05d9b push eax */
  push32((uint32_t)(EAX));
  /* 11e05d9c call dword ptr [0x11e33358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33358))), 0x11e05da2u);
  /* 11e05da2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e05da5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05da9 jne 0x11e05db6 */
  if (!C.zf) goto L_11e05db6;
  /* 11e05dab call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e05db1u);
  /* 11e05db1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05db4 jmp 0x11e05dbd */
  goto L_11e05dbd;
L_11e05db6:;
  /* 11e05db6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e05dbd:;
  /* 11e05dbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05dc1 je 0x11e05dd4 */
  if (C.zf) goto L_11e05dd4;
  /* 11e05dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05dc7 call 0x11e071d0 */
  push32(0x11e05dccu); f_11e071d0();
  /* 11e05dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05dcf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05dd2 jmp 0x11e05e0e */
  goto L_11e05e0e;
L_11e05dd4:;
  /* 11e05dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05dd7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e05dda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05ddd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05de0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05de3 mov ecx, dword ptr [edx*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e05dea mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11e05dee and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11e05df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05df4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e05df7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05dfa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e05dfd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05e00 mov eax, dword ptr [eax*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e05e07 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11e05e0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e05e0e:;
  /* 11e05e0e mov esp, ebp */
  ESP = (EBP);
  /* 11e05e10 pop ebp */
  EBP = (pop32());
  /* 11e05e11 ret  */
  ESPCHK(0x11e05d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e20 @ 0x11e05e20 (130 bytes, 43 insns) */
void f_11e05e20(void) {
  FTRACE(0x11e05e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05e21 mov ebp, esp */
  EBP = (ESP);
  /* 11e05e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e05e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e27 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05e2d jae 0x11e05e51 */
  if (!C.cf) goto L_11e05e51;
  /* 11e05e2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e05e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e05e3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05e3e mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e05e45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e05e4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e05e4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e05e4f jne 0x11e05e6c */
  if (!C.zf) goto L_11e05e6c;
L_11e05e51:;
  /* 11e05e51 call 0x11e07270 */
  push32(0x11e05e56u); f_11e07270();
  /* 11e05e56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e05e5c call 0x11e07280 */
  push32(0x11e05e61u); f_11e07280();
  /* 11e05e61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e05e67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e05e6a jmp 0x11e05e9e */
  goto L_11e05e9e;
L_11e05e6c:;
  /* 11e05e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e6f push edx */
  push32((uint32_t)(EDX));
  /* 11e05e70 call 0x11e0a810 */
  push32(0x11e05e75u); f_11e0a810();
  /* 11e05e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05e78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e05e7b push eax */
  push32((uint32_t)(EAX));
  /* 11e05e7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05e7f push ecx */
  push32((uint32_t)(ECX));
  /* 11e05e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e83 push edx */
  push32((uint32_t)(EDX));
  /* 11e05e84 call 0x11e05eb0 */
  push32(0x11e05e89u); f_11e05eb0();
  /* 11e05e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05e92 push eax */
  push32((uint32_t)(EAX));
  /* 11e05e93 call 0x11e0a8a0 */
  push32(0x11e05e98u); f_11e0a8a0();
  /* 11e05e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e05e9e:;
  /* 11e05e9e mov esp, ebp */
  ESP = (EBP);
  /* 11e05ea0 pop ebp */
  EBP = (pop32());
  /* 11e05ea1 ret  */
  ESPCHK(0x11e05e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015eb0 @ 0x11e05eb0 (627 bytes, 182 insns) */
void f_11e05eb0(void) {
  FTRACE(0x11e05eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e05eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e05eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e05eb3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05eb9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e05ec0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e05ec3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11e05ec9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05ecd jne 0x11e05ed6 */
  if (!C.zf) goto L_11e05ed6;
  /* 11e05ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e05ed1 jmp 0x11e0611f */
  goto L_11e0611f;
L_11e05ed6:;
  /* 11e05ed6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05ed9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e05edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05edf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e05ee2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05ee5 mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e05eec movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e05ef1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e05ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e05ef6 je 0x11e05f08 */
  if (C.zf) goto L_11e05f08;
  /* 11e05ef8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e05efa push 0 */
  push32((uint32_t)(0x0u));
  /* 11e05efc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05eff push edx */
  push32((uint32_t)(EDX));
  /* 11e05f00 call 0x11e05d60 */
  push32(0x11e05f05u); f_11e05d60();
  /* 11e05f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e05f08:;
  /* 11e05f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05f0b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e05f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05f11 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e05f14 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05f17 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e05f1e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e05f23 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11e05f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e05f2a je 0x11e0603c */
  if (C.zf) goto L_11e0603c;
  /* 11e05f30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e05f33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e05f36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e05f3d:;
  /* 11e05f3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05f40 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05f43 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05f46 jae 0x11e0603a */
  if (!C.cf) goto L_11e0603a;
  /* 11e05f4c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e05f52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e05f55:;
  /* 11e05f55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05f58 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11e05f5e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05f60 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05f66 jge 0x11e05fc7 */
  if ((C.sf==C.of)) goto L_11e05fc7;
  /* 11e05f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05f6b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05f6e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05f71 jae 0x11e05fc7 */
  if (!C.cf) goto L_11e05fc7;
  /* 11e05f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05f76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e05f78 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11e05f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e05f81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05f84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e05f87 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11e05f8e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e05f91 jne 0x11e05fb1 */
  if (!C.zf) goto L_11e05fb1;
  /* 11e05f93 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11e05f99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05f9c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11e05fa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05fa5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11e05fa8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05fab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05fae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e05fb1:;
  /* 11e05fb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05fb4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11e05fba mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e05fbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05fbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e05fc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e05fc5 jmp 0x11e05f55 */
  goto L_11e05f55;
L_11e05fc7:;
  /* 11e05fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e05fc9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11e05fcf push edx */
  push32((uint32_t)(EDX));
  /* 11e05fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e05fd3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11e05fd9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e05fdb push eax */
  push32((uint32_t)(EAX));
  /* 11e05fdc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11e05fe2 push edx */
  push32((uint32_t)(EDX));
  /* 11e05fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05fe6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e05fe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e05fec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e05fef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e05ff2 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e05ff9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11e05ffc push eax */
  push32((uint32_t)(EAX));
  /* 11e05ffd call dword ptr [0x11e333cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333cc))), 0x11e06003u);
  /* 11e06003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e06005 je 0x11e0602a */
  if (C.zf) goto L_11e0602a;
  /* 11e06007 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0600a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06010 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e06013 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e06016 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e0601c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0601e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06024 jge 0x11e06028 */
  if ((C.sf==C.of)) goto L_11e06028;
  /* 11e06026 jmp 0x11e0603a */
  goto L_11e0603a;
L_11e06028:;
  /* 11e06028 jmp 0x11e06035 */
  goto L_11e06035;
L_11e0602a:;
  /* 11e0602a call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e06030u);
  /* 11e06030 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e06033 jmp 0x11e0603a */
  goto L_11e0603a;
L_11e06035:;
  /* 11e06035 jmp 0x11e05f3d */
  goto L_11e05f3d;
L_11e0603a:;
  /* 11e0603a jmp 0x11e0608c */
  goto L_11e0608c;
L_11e0603c:;
  /* 11e0603c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0603e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11e06044 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06045 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e06048 push edx */
  push32((uint32_t)(EDX));
  /* 11e06049 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0604c push eax */
  push32((uint32_t)(EAX));
  /* 11e0604d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06050 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e06053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06056 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e06059 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0605c mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e06063 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11e06066 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06067 call dword ptr [0x11e333cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333cc))), 0x11e0606du);
  /* 11e0606d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0606f je 0x11e06083 */
  if (C.zf) goto L_11e06083;
  /* 11e06071 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e06078 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11e0607e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e06081 jmp 0x11e0608c */
  goto L_11e0608c;
L_11e06083:;
  /* 11e06083 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e06089u);
  /* 11e06089 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e0608c:;
  /* 11e0608c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06090 jne 0x11e06116 */
  if (!C.zf) goto L_11e06116;
  /* 11e06096 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0609a je 0x11e060ca */
  if (C.zf) goto L_11e060ca;
  /* 11e0609c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e060a0 jne 0x11e060b9 */
  if (!C.zf) goto L_11e060b9;
  /* 11e060a2 call 0x11e07270 */
  push32(0x11e060a7u); f_11e07270();
  /* 11e060a7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e060ad call 0x11e07280 */
  push32(0x11e060b2u); f_11e07280();
  /* 11e060b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e060b5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e060b7 jmp 0x11e060c5 */
  goto L_11e060c5;
L_11e060b9:;
  /* 11e060b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e060bc push edx */
  push32((uint32_t)(EDX));
  /* 11e060bd call 0x11e071d0 */
  push32(0x11e060c2u); f_11e071d0();
  /* 11e060c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e060c5:;
  /* 11e060c5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e060c8 jmp 0x11e0611f */
  goto L_11e0611f;
L_11e060ca:;
  /* 11e060ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e060cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e060d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e060d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e060d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e060d9 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e060e0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e060e5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11e060e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e060ea je 0x11e060fb */
  if (C.zf) goto L_11e060fb;
  /* 11e060ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e060ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e060f2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e060f5 jne 0x11e060fb */
  if (!C.zf) goto L_11e060fb;
  /* 11e060f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e060f9 jmp 0x11e0611f */
  goto L_11e0611f;
L_11e060fb:;
  /* 11e060fb call 0x11e07270 */
  push32(0x11e06100u); f_11e07270();
  /* 11e06100 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11e06106 call 0x11e07280 */
  push32(0x11e0610bu); f_11e07280();
  /* 11e0610b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e06111 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e06114 jmp 0x11e0611f */
  goto L_11e0611f;
L_11e06116:;
  /* 11e06116 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e06119 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e0611f:;
  /* 11e0611f mov esp, ebp */
  ESP = (EBP);
  /* 11e06121 pop ebp */
  EBP = (pop32());
  /* 11e06122 ret  */
  ESPCHK(0x11e05eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016130 @ 0x11e06130 (199 bytes, 68 insns) */
void f_11e06130(void) {
  FTRACE(0x11e06130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06130 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06131 mov ebp, esp */
  EBP = (ESP);
  /* 11e06133 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06134 push ebx */
  push32((uint32_t)(EBX));
  /* 11e06135 push esi */
  push32((uint32_t)(ESI));
  /* 11e06136 push edi */
  push32((uint32_t)(EDI));
L_11e06137:;
  /* 11e06137 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0613b jne 0x11e0615b */
  if (!C.zf) goto L_11e0615b;
  /* 11e0613d push 0x11e2af04 */
  push32((uint32_t)(0x11e2af04u));
  /* 11e06142 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e06144 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11e06146 push 0x11e2b2e4 */
  push32((uint32_t)(0x11e2b2e4u));
  /* 11e0614b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0614d call 0x11dfaa10 */
  push32(0x11e06152u); f_11dfaa10();
  /* 11e06152 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06155 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06158 jne 0x11e0615b */
  if (!C.zf) goto L_11e0615b;
  /* 11e0615a int3  */
  x86_unimpl("int3 @ 0x11e0615a");
L_11e0615b:;
  /* 11e0615b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0615d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0615f jne 0x11e06137 */
  if (!C.zf) goto L_11e06137;
  /* 11e06161 mov ecx, dword ptr [0x11e3080c] */
  ECX = (r32((uint32_t)(0x11e3080c)));
  /* 11e06167 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0616a mov dword ptr [0x11e3080c], ecx */
  w32((uint32_t)(0x11e3080c), (ECX));
  /* 11e06170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06173 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e06176 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11e06178 push 0x11e2b2e4 */
  push32((uint32_t)(0x11e2b2e4u));
  /* 11e0617d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0617f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e06184 call 0x11dfbe50 */
  push32(0x11e06189u); f_11dfbe50();
  /* 11e06189 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0618c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0618f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e06192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06195 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06199 je 0x11e061b6 */
  if (C.zf) goto L_11e061b6;
  /* 11e0619b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0619e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e061a1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e061a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061a7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11e061aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061ad mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11e061b4 jmp 0x11e061db */
  goto L_11e061db;
L_11e061b6:;
  /* 11e061b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061b9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e061bc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e061bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061c2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e061c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061c8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e061cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061ce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e061d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061d4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11e061db:;
  /* 11e061db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e061e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e061e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e061e9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e061f0 pop edi */
  EDI = (pop32());
  /* 11e061f1 pop esi */
  ESI = (pop32());
  /* 11e061f2 pop ebx */
  EBX = (pop32());
  /* 11e061f3 mov esp, ebp */
  ESP = (EBP);
  /* 11e061f5 pop ebp */
  EBP = (pop32());
  /* 11e061f6 ret  */
  ESPCHK(0x11e06130u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11e06200 (50 bytes, 17 insns) */
void f_11e06200(void) {
  FTRACE(0x11e06200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06200 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06201 mov ebp, esp */
  EBP = (ESP);
  /* 11e06203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06206 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0620c jb 0x11e06212 */
  if (C.cf) goto L_11e06212;
  /* 11e0620e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e06210 jmp 0x11e06230 */
  goto L_11e06230;
L_11e06212:;
  /* 11e06212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06215 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e06218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0621b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0621e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e06221 mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e06228 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e0622d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11e06230:;
  /* 11e06230 pop ebp */
  EBP = (pop32());
  /* 11e06231 ret  */
  ESPCHK(0x11e06200u, _esp0);
  ESP += 4; return;
}

/* FUN_10016240 @ 0x11e06240 (300 bytes, 80 insns) */
void f_11e06240(void) {
  FTRACE(0x11e06240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06240 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06241 mov ebp, esp */
  EBP = (ESP);
  /* 11e06243 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06244 cmp dword ptr [0x11e31fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0624b jne 0x11e06259 */
  if (!C.zf) goto L_11e06259;
  /* 11e0624d mov dword ptr [0x11e31fa0], 0x200 */
  w32((uint32_t)(0x11e31fa0), (0x200u));
  /* 11e06257 jmp 0x11e0626c */
  goto L_11e0626c;
L_11e06259:;
  /* 11e06259 cmp dword ptr [0x11e31fa0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11e31fa0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06260 jge 0x11e0626c */
  if ((C.sf==C.of)) goto L_11e0626c;
  /* 11e06262 mov dword ptr [0x11e31fa0], 0x14 */
  w32((uint32_t)(0x11e31fa0), (0x14u));
L_11e0626c:;
  /* 11e0626c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11e06271 push 0x11e2b2f0 */
  push32((uint32_t)(0x11e2b2f0u));
  /* 11e06276 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e06278 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0627a mov eax, dword ptr [0x11e31fa0] */
  EAX = (r32((uint32_t)(0x11e31fa0)));
  /* 11e0627f push eax */
  push32((uint32_t)(EAX));
  /* 11e06280 call 0x11dfc260 */
  push32(0x11e06285u); f_11dfc260();
  /* 11e06285 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06288 mov dword ptr [0x11e30c48], eax */
  w32((uint32_t)(0x11e30c48), (EAX));
  /* 11e0628d cmp dword ptr [0x11e30c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06294 jne 0x11e062d5 */
  if (!C.zf) goto L_11e062d5;
  /* 11e06296 mov dword ptr [0x11e31fa0], 0x14 */
  w32((uint32_t)(0x11e31fa0), (0x14u));
  /* 11e062a0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11e062a5 push 0x11e2b2f0 */
  push32((uint32_t)(0x11e2b2f0u));
  /* 11e062aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11e062ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11e062ae mov ecx, dword ptr [0x11e31fa0] */
  ECX = (r32((uint32_t)(0x11e31fa0)));
  /* 11e062b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e062b5 call 0x11dfc260 */
  push32(0x11e062bau); f_11dfc260();
  /* 11e062ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e062bd mov dword ptr [0x11e30c48], eax */
  w32((uint32_t)(0x11e30c48), (EAX));
  /* 11e062c2 cmp dword ptr [0x11e30c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e062c9 jne 0x11e062d5 */
  if (!C.zf) goto L_11e062d5;
  /* 11e062cb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11e062cd call 0x11dfa8c0 */
  push32(0x11e062d2u); f_11dfa8c0();
  /* 11e062d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e062d5:;
  /* 11e062d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e062dc jmp 0x11e062e7 */
  goto L_11e062e7;
L_11e062de:;
  /* 11e062de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e062e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e062e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e062e7:;
  /* 11e062e7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e062eb jge 0x11e06306 */
  if ((C.sf==C.of)) goto L_11e06306;
  /* 11e062ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e062f0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e062f3 add eax, 0x11e2e2e8 */
  { uint32_t _a=(EAX),_b=(0x11e2e2e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e062f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e062fb mov edx, dword ptr [0x11e30c48] */
  EDX = (r32((uint32_t)(0x11e30c48)));
  /* 11e06301 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e06304 jmp 0x11e062de */
  goto L_11e062de;
L_11e06306:;
  /* 11e06306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0630d jmp 0x11e06318 */
  goto L_11e06318;
L_11e0630f:;
  /* 11e0630f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06312 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e06318:;
  /* 11e06318 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0631c jge 0x11e06368 */
  if ((C.sf==C.of)) goto L_11e06368;
  /* 11e0631e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06321 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e06324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06327 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0632a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0632d mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e06334 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06338 je 0x11e06356 */
  if (C.zf) goto L_11e06356;
  /* 11e0633a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0633d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e06340 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06343 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e06346 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e06349 mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e06350 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06354 jne 0x11e06366 */
  if (!C.zf) goto L_11e06366;
L_11e06356:;
  /* 11e06356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06359 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0635c mov dword ptr [ecx + 0x11e2e2f8], 0xffffffff */
  w32((uint32_t)(ECX + 0x11e2e2f8), (0xffffffffu));
L_11e06366:;
  /* 11e06366 jmp 0x11e0630f */
  goto L_11e0630f;
L_11e06368:;
  /* 11e06368 mov esp, ebp */
  ESP = (EBP);
  /* 11e0636a pop ebp */
  EBP = (pop32());
  /* 11e0636b ret  */
  ESPCHK(0x11e06240u, _esp0);
  ESP += 4; return;
}

/* FUN_10016370 @ 0x11e06370 (26 bytes, 9 insns) */
void f_11e06370(void) {
  FTRACE(0x11e06370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06370 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06371 mov ebp, esp */
  EBP = (ESP);
  /* 11e06373 call 0x11e0ab10 */
  push32(0x11e06378u); f_11e0ab10();
  /* 11e06378 movsx eax, byte ptr [0x11e306c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e306c4))));
  /* 11e0637f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e06381 je 0x11e06388 */
  if (C.zf) goto L_11e06388;
  /* 11e06383 call 0x11e0a8d0 */
  push32(0x11e06388u); f_11e0a8d0();
L_11e06388:;
  /* 11e06388 pop ebp */
  EBP = (pop32());
  /* 11e06389 ret  */
  ESPCHK(0x11e06370u, _esp0);
  ESP += 4; return;
}

/* FUN_10016390 @ 0x11e06390 (61 bytes, 20 insns) */
void f_11e06390(void) {
  FTRACE(0x11e06390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06390 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06391 mov ebp, esp */
  EBP = (ESP);
  /* 11e06393 cmp dword ptr [ebp + 8], 0x11e2e2e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e2e2e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0639a jb 0x11e063be */
  if (C.cf) goto L_11e063be;
  /* 11e0639c cmp dword ptr [ebp + 8], 0x11e2e548 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e2e548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e063a3 ja 0x11e063be */
  if ((!C.cf&&!C.zf)) goto L_11e063be;
  /* 11e063a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e063a8 sub eax, 0x11e2e2e8 */
  { uint32_t _a=(EAX),_b=(0x11e2e2e8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e063ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e063b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063b3 push eax */
  push32((uint32_t)(EAX));
  /* 11e063b4 call 0x11dfbd50 */
  push32(0x11e063b9u); f_11dfbd50();
  /* 11e063b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063bc jmp 0x11e063cb */
  goto L_11e063cb;
L_11e063be:;
  /* 11e063be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e063c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e063c5 call dword ptr [0x11e333f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f4))), 0x11e063cbu);
L_11e063cb:;
  /* 11e063cb pop ebp */
  EBP = (pop32());
  /* 11e063cc ret  */
  ESPCHK(0x11e06390u, _esp0);
  ESP += 4; return;
}

/* FUN_100163d0 @ 0x11e063d0 (41 bytes, 16 insns) */
void f_11e063d0(void) {
  FTRACE(0x11e063d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e063d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e063d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e063d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e063d7 jge 0x11e063ea */
  if ((C.sf==C.of)) goto L_11e063ea;
  /* 11e063d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e063dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063df push eax */
  push32((uint32_t)(EAX));
  /* 11e063e0 call 0x11dfbd50 */
  push32(0x11e063e5u); f_11dfbd50();
  /* 11e063e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063e8 jmp 0x11e063f7 */
  goto L_11e063f7;
L_11e063ea:;
  /* 11e063ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e063ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e063f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e063f1 call dword ptr [0x11e333f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f4))), 0x11e063f7u);
L_11e063f7:;
  /* 11e063f7 pop ebp */
  EBP = (pop32());
  /* 11e063f8 ret  */
  ESPCHK(0x11e063d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016400 @ 0x11e06400 (61 bytes, 20 insns) */
void f_11e06400(void) {
  FTRACE(0x11e06400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06400 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06401 mov ebp, esp */
  EBP = (ESP);
  /* 11e06403 cmp dword ptr [ebp + 8], 0x11e2e2e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e2e2e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0640a jb 0x11e0642e */
  if (C.cf) goto L_11e0642e;
  /* 11e0640c cmp dword ptr [ebp + 8], 0x11e2e548 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11e2e548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06413 ja 0x11e0642e */
  if ((!C.cf&&!C.zf)) goto L_11e0642e;
  /* 11e06415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06418 sub eax, 0x11e2e2e8 */
  { uint32_t _a=(EAX),_b=(0x11e2e2e8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0641d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e06420 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06423 push eax */
  push32((uint32_t)(EAX));
  /* 11e06424 call 0x11dfbdf0 */
  push32(0x11e06429u); f_11dfbdf0();
  /* 11e06429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0642c jmp 0x11e0643b */
  goto L_11e0643b;
L_11e0642e:;
  /* 11e0642e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06431 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06434 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06435 call dword ptr [0x11e333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f8))), 0x11e0643bu);
L_11e0643b:;
  /* 11e0643b pop ebp */
  EBP = (pop32());
  /* 11e0643c ret  */
  ESPCHK(0x11e06400u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x11e06440 (41 bytes, 16 insns) */
void f_11e06440(void) {
  FTRACE(0x11e06440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06440 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06441 mov ebp, esp */
  EBP = (ESP);
  /* 11e06443 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06447 jge 0x11e0645a */
  if ((C.sf==C.of)) goto L_11e0645a;
  /* 11e06449 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0644c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0644f push eax */
  push32((uint32_t)(EAX));
  /* 11e06450 call 0x11dfbdf0 */
  push32(0x11e06455u); f_11dfbdf0();
  /* 11e06455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06458 jmp 0x11e06467 */
  goto L_11e06467;
L_11e0645a:;
  /* 11e0645a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0645d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06460 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06461 call dword ptr [0x11e333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f8))), 0x11e06467u);
L_11e06467:;
  /* 11e06467 pop ebp */
  EBP = (pop32());
  /* 11e06468 ret  */
  ESPCHK(0x11e06440u, _esp0);
  ESP += 4; return;
}

/* FUN_10016470 @ 0x11e06470 (119 bytes, 34 insns) */
void f_11e06470(void) {
  FTRACE(0x11e06470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06470 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06471 mov ebp, esp */
  EBP = (ESP);
  /* 11e06473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06476 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0647b call dword ptr [0x11e333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e0))), 0x11e06481u);
  /* 11e06481 cmp dword ptr [0x11e3099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06488 je 0x11e064a8 */
  if (C.zf) goto L_11e064a8;
  /* 11e0648a push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0648f call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e06495u);
  /* 11e06495 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e06497 call 0x11dfbd50 */
  push32(0x11e0649cu); f_11dfbd50();
  /* 11e0649c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0649f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e064a6 jmp 0x11e064af */
  goto L_11e064af;
L_11e064a8:;
  /* 11e064a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e064af:;
  /* 11e064af mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11e064b3 push eax */
  push32((uint32_t)(EAX));
  /* 11e064b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e064b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e064b8 call 0x11e064f0 */
  push32(0x11e064bdu); f_11e064f0();
  /* 11e064bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e064c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e064c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e064c7 je 0x11e064d5 */
  if (C.zf) goto L_11e064d5;
  /* 11e064c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e064cb call 0x11dfbdf0 */
  push32(0x11e064d0u); f_11dfbdf0();
  /* 11e064d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e064d3 jmp 0x11e064e0 */
  goto L_11e064e0;
L_11e064d5:;
  /* 11e064d5 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e064da call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e064e0u);
L_11e064e0:;
  /* 11e064e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e064e3 mov esp, ebp */
  ESP = (EBP);
  /* 11e064e5 pop ebp */
  EBP = (pop32());
  /* 11e064e6 ret  */
  ESPCHK(0x11e06470u, _esp0);
  ESP += 4; return;
}

/* FUN_100164f0 @ 0x11e064f0 (160 bytes, 50 insns) */
void f_11e064f0(void) {
  FTRACE(0x11e064f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e064f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e064f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e064f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e064f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e064fa jne 0x11e06503 */
  if (!C.zf) goto L_11e06503;
  /* 11e064fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e064fe jmp 0x11e0658c */
  goto L_11e0658c;
L_11e06503:;
  /* 11e06503 cmp dword ptr [0x11e3082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0650a jne 0x11e0653a */
  if (!C.zf) goto L_11e0653a;
  /* 11e0650c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0650f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e06514 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06519 jle 0x11e0652b */
  if ((C.zf||C.sf!=C.of)) goto L_11e0652b;
  /* 11e0651b call 0x11e07270 */
  push32(0x11e06520u); f_11e07270();
  /* 11e06520 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11e06526 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e06529 jmp 0x11e0658c */
  goto L_11e0658c;
L_11e0652b:;
  /* 11e0652b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0652e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11e06531 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11e06533 mov eax, 1 */
  EAX = (0x1u);
  /* 11e06538 jmp 0x11e0658c */
  goto L_11e0658c;
L_11e0653a:;
  /* 11e0653a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e06541 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e06544 push eax */
  push32((uint32_t)(EAX));
  /* 11e06545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e06547 mov ecx, dword ptr [0x11e2e000] */
  ECX = (r32((uint32_t)(0x11e2e000)));
  /* 11e0654d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0654e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06551 push edx */
  push32((uint32_t)(EDX));
  /* 11e06552 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e06554 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11e06557 push eax */
  push32((uint32_t)(EAX));
  /* 11e06558 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e0655d mov ecx, dword ptr [0x11e3083c] */
  ECX = (r32((uint32_t)(0x11e3083c)));
  /* 11e06563 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06564 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e0656au);
  /* 11e0656a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0656d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06571 je 0x11e06579 */
  if (C.zf) goto L_11e06579;
  /* 11e06573 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06577 je 0x11e06589 */
  if (C.zf) goto L_11e06589;
L_11e06579:;
  /* 11e06579 call 0x11e07270 */
  push32(0x11e0657eu); f_11e07270();
  /* 11e0657e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11e06584 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e06587 jmp 0x11e0658c */
  goto L_11e0658c;
L_11e06589:;
  /* 11e06589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e0658c:;
  /* 11e0658c mov esp, ebp */
  ESP = (EBP);
  /* 11e0658e pop ebp */
  EBP = (pop32());
  /* 11e0658f ret  */
  ESPCHK(0x11e064f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11e06590 (104 bytes, 43 insns) */
void f_11e06590(void) {
  FTRACE(0x11e06590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06590 push ebx */
  push32((uint32_t)(EBX));
  /* 11e06591 push esi */
  push32((uint32_t)(ESI));
  /* 11e06592 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11e06596 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e06598 jne 0x11e065b2 */
  if (!C.zf) goto L_11e065b2;
  /* 11e0659a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e0659e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e065a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e065a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e065a6 mov ebx, eax */
  EBX = (EAX);
  /* 11e065a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e065ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e065ae mov edx, ebx */
  EDX = (EBX);
  /* 11e065b0 jmp 0x11e065f3 */
  goto L_11e065f3;
L_11e065b2:;
  /* 11e065b2 mov ecx, eax */
  ECX = (EAX);
  /* 11e065b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e065b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e065bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11e065c0:;
  /* 11e065c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e065c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11e065c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e065c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11e065c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e065ca jne 0x11e065c0 */
  if (!C.zf) goto L_11e065c0;
  /* 11e065cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e065ce mov esi, eax */
  ESI = (EAX);
  /* 11e065d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e065d4 mov ecx, eax */
  ECX = (EAX);
  /* 11e065d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e065da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e065dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e065de jb 0x11e065ee */
  if (C.cf) goto L_11e065ee;
  /* 11e065e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e065e4 ja 0x11e065ee */
  if ((!C.cf&&!C.zf)) goto L_11e065ee;
  /* 11e065e6 jb 0x11e065ef */
  if (C.cf) goto L_11e065ef;
  /* 11e065e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e065ec jbe 0x11e065ef */
  if ((C.cf||C.zf)) goto L_11e065ef;
L_11e065ee:;
  /* 11e065ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11e065ef:;
  /* 11e065ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e065f1 mov eax, esi */
  EAX = (ESI);
L_11e065f3:;
  /* 11e065f3 pop esi */
  ESI = (pop32());
  /* 11e065f4 pop ebx */
  EBX = (pop32());
  /* 11e065f5 ret 0x10 */
  ESPCHK(0x11e06590u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11e06600 (117 bytes, 44 insns) */
void f_11e06600(void) {
  FTRACE(0x11e06600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06600 push ebx */
  push32((uint32_t)(EBX));
  /* 11e06601 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e06605 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e06607 jne 0x11e06621 */
  if (!C.zf) goto L_11e06621;
  /* 11e06609 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e0660d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e06611 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06613 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e06615 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e06619 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0661b mov eax, edx */
  EAX = (EDX);
  /* 11e0661d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0661f jmp 0x11e06671 */
  goto L_11e06671;
L_11e06621:;
  /* 11e06621 mov ecx, eax */
  ECX = (EAX);
  /* 11e06623 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e06627 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e0662b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11e0662f:;
  /* 11e0662f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e06631 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11e06633 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e06635 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11e06637 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e06639 jne 0x11e0662f */
  if (!C.zf) goto L_11e0662f;
  /* 11e0663b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0663d mov ecx, eax */
  ECX = (EAX);
  /* 11e0663f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e06643 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11e06644 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e06648 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0664a jb 0x11e0665a */
  if (C.cf) goto L_11e0665a;
  /* 11e0664c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06650 ja 0x11e0665a */
  if ((!C.cf&&!C.zf)) goto L_11e0665a;
  /* 11e06652 jb 0x11e06662 */
  if (C.cf) goto L_11e06662;
  /* 11e06654 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06658 jbe 0x11e06662 */
  if ((C.cf||C.zf)) goto L_11e06662;
L_11e0665a:;
  /* 11e0665a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0665e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e06662:;
  /* 11e06662 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06666 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0666a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0666c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0666e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e06671:;
  /* 11e06671 pop ebx */
  EBX = (pop32());
  /* 11e06672 ret 0x10 */
  ESPCHK(0x11e06600u, _esp0);
  ESP += 20; return;
}

/* FUN_10016680 @ 0x11e06680 (836 bytes, 238 insns) */
void f_11e06680(void) {
  FTRACE(0x11e06680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06680 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06681 mov ebp, esp */
  EBP = (ESP);
  /* 11e06683 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06686 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e06688 call 0x11dfbd50 */
  push32(0x11e0668du); f_11dfbd50();
  /* 11e0668d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06693 push eax */
  push32((uint32_t)(EAX));
  /* 11e06694 call 0x11e069d0 */
  push32(0x11e06699u); f_11e069d0();
  /* 11e06699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0669c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0669f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e066a2 cmp ecx, dword ptr [0x11e309b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e309b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e066a8 jne 0x11e066bb */
  if (!C.zf) goto L_11e066bb;
  /* 11e066aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e066ac call 0x11dfbdf0 */
  push32(0x11e066b1u); f_11dfbdf0();
  /* 11e066b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e066b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e066b6 jmp 0x11e069c0 */
  goto L_11e069c0;
L_11e066bb:;
  /* 11e066bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e066bf jne 0x11e066dc */
  if (!C.zf) goto L_11e066dc;
  /* 11e066c1 call 0x11e06ab0 */
  push32(0x11e066c6u); f_11e06ab0();
  /* 11e066c6 call 0x11e06b30 */
  push32(0x11e066cbu); f_11e06b30();
  /* 11e066cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e066cd call 0x11dfbdf0 */
  push32(0x11e066d2u); f_11dfbdf0();
  /* 11e066d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e066d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e066d7 jmp 0x11e069c0 */
  goto L_11e069c0;
L_11e066dc:;
  /* 11e066dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e066e3 jmp 0x11e066ee */
  goto L_11e066ee;
L_11e066e5:;
  /* 11e066e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e066e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e066eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e066ee:;
  /* 11e066ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e066f2 jae 0x11e0683f */
  if (!C.cf) goto L_11e0683f;
  /* 11e066f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e066fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e066fe mov ecx, dword ptr [eax + 0x11e2e578] */
  ECX = (r32((uint32_t)(EAX + 0x11e2e578)));
  /* 11e06704 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06707 jne 0x11e0683a */
  if (!C.zf) goto L_11e0683a;
  /* 11e0670d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e06714 jmp 0x11e0671f */
  goto L_11e0671f;
L_11e06716:;
  /* 11e06716 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06719 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0671c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11e0671f:;
  /* 11e0671f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06726 jae 0x11e06734 */
  if (!C.cf) goto L_11e06734;
  /* 11e06728 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0672b mov byte ptr [eax + 0x11e30b40], 0 */
  w8((uint32_t)(EAX + 0x11e30b40), (0x0u));
  /* 11e06732 jmp 0x11e06716 */
  goto L_11e06716;
L_11e06734:;
  /* 11e06734 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0673b jmp 0x11e06746 */
  goto L_11e06746;
L_11e0673d:;
  /* 11e0673d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e06740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06743 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e06746:;
  /* 11e06746 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0674a jae 0x11e067c7 */
  if (!C.cf) goto L_11e067c7;
  /* 11e0674c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0674f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e06752 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e06755 lea ecx, [edx + eax*8 + 0x11e2e588] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11e2e588));
  /* 11e0675c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0675f jmp 0x11e0676a */
  goto L_11e0676a;
L_11e06761:;
  /* 11e06761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e06764 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06767 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e0676a:;
  /* 11e0676a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0676d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0676f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e06771 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e06773 je 0x11e067c2 */
  if (C.zf) goto L_11e067c2;
  /* 11e06775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e06778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0677a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e0677d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0677f je 0x11e067c2 */
  if (C.zf) goto L_11e067c2;
  /* 11e06781 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e06784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06786 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e06788 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e0678b jmp 0x11e06796 */
  goto L_11e06796;
L_11e0678d:;
  /* 11e0678d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06793 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e06796:;
  /* 11e06796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e06799 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0679b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e0679e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e067a1 ja 0x11e067c0 */
  if ((!C.cf&&!C.zf)) goto L_11e067c0;
  /* 11e067a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e067a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e067a9 mov dl, byte ptr [eax + 0x11e30b41] */
  DL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e067af or dl, byte ptr [ecx + 0x11e2e570] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11e2e570))); DL = (_r); fl_logic(_r,8); }
  /* 11e067b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e067b8 mov byte ptr [eax + 0x11e30b41], dl */
  w8((uint32_t)(EAX + 0x11e30b41), (DL));
  /* 11e067be jmp 0x11e0678d */
  goto L_11e0678d;
L_11e067c0:;
  /* 11e067c0 jmp 0x11e06761 */
  goto L_11e06761;
L_11e067c2:;
  /* 11e067c2 jmp 0x11e0673d */
  goto L_11e0673d;
L_11e067c7:;
  /* 11e067c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e067ca mov dword ptr [0x11e309b0], ecx */
  w32((uint32_t)(0x11e309b0), (ECX));
  /* 11e067d0 mov dword ptr [0x11e30a3c], 1 */
  w32((uint32_t)(0x11e30a3c), (0x1u));
  /* 11e067da mov edx, dword ptr [0x11e309b0] */
  EDX = (r32((uint32_t)(0x11e309b0)));
  /* 11e067e0 push edx */
  push32((uint32_t)(EDX));
  /* 11e067e1 call 0x11e06a30 */
  push32(0x11e067e6u); f_11e06a30();
  /* 11e067e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e067e9 mov dword ptr [0x11e30c44], eax */
  w32((uint32_t)(0x11e30c44), (EAX));
  /* 11e067ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e067f5 jmp 0x11e06800 */
  goto L_11e06800;
L_11e067f7:;
  /* 11e067f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e067fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e067fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e06800:;
  /* 11e06800 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06804 jae 0x11e06824 */
  if (!C.cf) goto L_11e06824;
  /* 11e06806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06809 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0680c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0680f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e06812 mov cx, word ptr [ecx + eax*2 + 0x11e2e57c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11e2e57c)));
  /* 11e0681a mov word ptr [edx*2 + 0x11e30a30], cx */
  w16((uint32_t)(EDX*2 + 0x11e30a30), (CX));
  /* 11e06822 jmp 0x11e067f7 */
  goto L_11e067f7;
L_11e06824:;
  /* 11e06824 call 0x11e06b30 */
  push32(0x11e06829u); f_11e06b30();
  /* 11e06829 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e0682b call 0x11dfbdf0 */
  push32(0x11e06830u); f_11dfbdf0();
  /* 11e06830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e06835 jmp 0x11e069c0 */
  goto L_11e069c0;
L_11e0683a:;
  /* 11e0683a jmp 0x11e066e5 */
  goto L_11e066e5;
L_11e0683f:;
  /* 11e0683f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11e06842 push edx */
  push32((uint32_t)(EDX));
  /* 11e06843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06846 push eax */
  push32((uint32_t)(EAX));
  /* 11e06847 call dword ptr [0x11e33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33354))), 0x11e0684du);
  /* 11e0684d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06850 jne 0x11e06992 */
  if (!C.zf) goto L_11e06992;
  /* 11e06856 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e0685d jmp 0x11e06868 */
  goto L_11e06868;
L_11e0685f:;
  /* 11e0685f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06865 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11e06868:;
  /* 11e06868 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0686f jae 0x11e0687d */
  if (!C.cf) goto L_11e0687d;
  /* 11e06871 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06874 mov byte ptr [edx + 0x11e30b40], 0 */
  w8((uint32_t)(EDX + 0x11e30b40), (0x0u));
  /* 11e0687b jmp 0x11e0685f */
  goto L_11e0685f;
L_11e0687d:;
  /* 11e0687d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06880 mov dword ptr [0x11e309b0], eax */
  w32((uint32_t)(0x11e309b0), (EAX));
  /* 11e06885 mov dword ptr [0x11e30c44], 0 */
  w32((uint32_t)(0x11e30c44), (0x0u));
  /* 11e0688f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06893 jbe 0x11e0694e */
  if ((C.cf||C.zf)) goto L_11e0694e;
  /* 11e06899 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11e0689c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e0689f jmp 0x11e068aa */
  goto L_11e068aa;
L_11e068a1:;
  /* 11e068a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e068a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e068a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11e068aa:;
  /* 11e068aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e068ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e068af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e068b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e068b3 je 0x11e068fc */
  if (C.zf) goto L_11e068fc;
  /* 11e068b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e068b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e068ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e068bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e068bf je 0x11e068fc */
  if (C.zf) goto L_11e068fc;
  /* 11e068c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e068c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e068c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e068c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e068cb jmp 0x11e068d6 */
  goto L_11e068d6;
L_11e068cd:;
  /* 11e068cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e068d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e068d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e068d6:;
  /* 11e068d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e068d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e068db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e068de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e068e1 ja 0x11e068fa */
  if ((!C.cf&&!C.zf)) goto L_11e068fa;
  /* 11e068e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e068e6 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e068ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11e068ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e068f2 mov byte ptr [edx + 0x11e30b41], cl */
  w8((uint32_t)(EDX + 0x11e30b41), (CL));
  /* 11e068f8 jmp 0x11e068cd */
  goto L_11e068cd;
L_11e068fa:;
  /* 11e068fa jmp 0x11e068a1 */
  goto L_11e068a1;
L_11e068fc:;
  /* 11e068fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11e06903 jmp 0x11e0690e */
  goto L_11e0690e;
L_11e06905:;
  /* 11e06905 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0690b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e0690e:;
  /* 11e0690e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06915 jae 0x11e0692e */
  if (!C.cf) goto L_11e0692e;
  /* 11e06917 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0691a mov dl, byte ptr [ecx + 0x11e30b41] */
  DL = (r8((uint32_t)(ECX + 0x11e30b41)));
  /* 11e06920 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11e06923 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e06926 mov byte ptr [eax + 0x11e30b41], dl */
  w8((uint32_t)(EAX + 0x11e30b41), (DL));
  /* 11e0692c jmp 0x11e06905 */
  goto L_11e06905;
L_11e0692e:;
  /* 11e0692e mov ecx, dword ptr [0x11e309b0] */
  ECX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06934 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06935 call 0x11e06a30 */
  push32(0x11e0693au); f_11e06a30();
  /* 11e0693a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0693d mov dword ptr [0x11e30c44], eax */
  w32((uint32_t)(0x11e30c44), (EAX));
  /* 11e06942 mov dword ptr [0x11e30a3c], 1 */
  w32((uint32_t)(0x11e30a3c), (0x1u));
  /* 11e0694c jmp 0x11e06958 */
  goto L_11e06958;
L_11e0694e:;
  /* 11e0694e mov dword ptr [0x11e30a3c], 0 */
  w32((uint32_t)(0x11e30a3c), (0x0u));
L_11e06958:;
  /* 11e06958 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0695f jmp 0x11e0696a */
  goto L_11e0696a;
L_11e06961:;
  /* 11e06961 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e06964 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06967 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0696a:;
  /* 11e0696a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0696e jae 0x11e0697f */
  if (!C.cf) goto L_11e0697f;
  /* 11e06970 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e06973 mov word ptr [eax*2 + 0x11e30a30], 0 */
  w16((uint32_t)(EAX*2 + 0x11e30a30), (0x0u));
  /* 11e0697d jmp 0x11e06961 */
  goto L_11e06961;
L_11e0697f:;
  /* 11e0697f call 0x11e06b30 */
  push32(0x11e06984u); f_11e06b30();
  /* 11e06984 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e06986 call 0x11dfbdf0 */
  push32(0x11e0698bu); f_11dfbdf0();
  /* 11e0698b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0698e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e06990 jmp 0x11e069c0 */
  goto L_11e069c0;
L_11e06992:;
  /* 11e06992 cmp dword ptr [0x11e30810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06999 je 0x11e069b3 */
  if (C.zf) goto L_11e069b3;
  /* 11e0699b call 0x11e06ab0 */
  push32(0x11e069a0u); f_11e06ab0();
  /* 11e069a0 call 0x11e06b30 */
  push32(0x11e069a5u); f_11e06b30();
  /* 11e069a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e069a7 call 0x11dfbdf0 */
  push32(0x11e069acu); f_11dfbdf0();
  /* 11e069ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e069af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e069b1 jmp 0x11e069c0 */
  goto L_11e069c0;
L_11e069b3:;
  /* 11e069b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e069b5 call 0x11dfbdf0 */
  push32(0x11e069bau); f_11dfbdf0();
  /* 11e069ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e069bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e069c0:;
  /* 11e069c0 mov esp, ebp */
  ESP = (EBP);
  /* 11e069c2 pop ebp */
  EBP = (pop32());
  /* 11e069c3 ret  */
  ESPCHK(0x11e06680u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11e069d0 (89 bytes, 21 insns) */
void f_11e069d0(void) {
  FTRACE(0x11e069d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e069d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e069d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e069d3 mov dword ptr [0x11e30810], 0 */
  w32((uint32_t)(0x11e30810), (0x0u));
  /* 11e069dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e069e1 jne 0x11e069f5 */
  if (!C.zf) goto L_11e069f5;
  /* 11e069e3 mov dword ptr [0x11e30810], 1 */
  w32((uint32_t)(0x11e30810), (0x1u));
  /* 11e069ed call dword ptr [0x11e3334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3334c))), 0x11e069f3u);
  /* 11e069f3 jmp 0x11e06a27 */
  goto L_11e06a27;
L_11e069f5:;
  /* 11e069f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e069f9 jne 0x11e06a0d */
  if (!C.zf) goto L_11e06a0d;
  /* 11e069fb mov dword ptr [0x11e30810], 1 */
  w32((uint32_t)(0x11e30810), (0x1u));
  /* 11e06a05 call dword ptr [0x11e33350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33350))), 0x11e06a0bu);
  /* 11e06a0b jmp 0x11e06a27 */
  goto L_11e06a27;
L_11e06a0d:;
  /* 11e06a0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06a11 jne 0x11e06a24 */
  if (!C.zf) goto L_11e06a24;
  /* 11e06a13 mov dword ptr [0x11e30810], 1 */
  w32((uint32_t)(0x11e30810), (0x1u));
  /* 11e06a1d mov eax, dword ptr [0x11e3083c] */
  EAX = (r32((uint32_t)(0x11e3083c)));
  /* 11e06a22 jmp 0x11e06a27 */
  goto L_11e06a27;
L_11e06a24:;
  /* 11e06a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11e06a27:;
  /* 11e06a27 pop ebp */
  EBP = (pop32());
  /* 11e06a28 ret  */
  ESPCHK(0x11e069d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a30 @ 0x11e06a30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11e06a30(void) {
  FTRACE(0x11e06a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06a31 mov ebp, esp */
  EBP = (ESP);
  /* 11e06a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e06a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06a3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06a43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e06a46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06a4a ja 0x11e06a7a */
  if ((!C.cf&&!C.zf)) goto L_11e06a7a;
  /* 11e06a4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06a4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06a51 mov dl, byte ptr [eax + 0x11e06a94] */
  DL = (r8((uint32_t)(EAX + 0x11e06a94)));
  /* 11e06a57 jmp dword ptr [edx*4 + 0x11e06a80] */
  switch (EDX) {
    case 0: goto L_11e06a5e;
    case 1: goto L_11e06a65;
    case 2: goto L_11e06a6c;
    case 3: goto L_11e06a73;
    case 4: goto L_11e06a7a;
    default: x86_unimpl("switch@0x11e06a57 out of table"); return;
  }
L_11e06a5e:;
  /* 11e06a5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11e06a63 jmp 0x11e06a7c */
  goto L_11e06a7c;
L_11e06a65:;
  /* 11e06a65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11e06a6a jmp 0x11e06a7c */
  goto L_11e06a7c;
L_11e06a6c:;
  /* 11e06a6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11e06a71 jmp 0x11e06a7c */
  goto L_11e06a7c;
L_11e06a73:;
  /* 11e06a73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11e06a78 jmp 0x11e06a7c */
  goto L_11e06a7c;
L_11e06a7a:;
  /* 11e06a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e06a7c:;
  /* 11e06a7c mov esp, ebp */
  ESP = (EBP);
  /* 11e06a7e pop ebp */
  EBP = (pop32());
  /* 11e06a7f ret  */
  ESPCHK(0x11e06a30u, _esp0);
  ESP += 4; return;
}

