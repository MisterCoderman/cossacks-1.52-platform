#include "recomp.h"

/* FUN_100142a0 @ 0x120342a0 (393 bytes, 123 insns) */
void f_120342a0(void) {
  FTRACE(0x120342a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120342a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120342a1 mov ebp, esp */
  EBP = (ESP);
  /* 120342a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120342a6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120342aa jne 0x120342b6 */
  if (!C.zf) goto L_120342b6;
  /* 120342ac mov eax, dword ptr [0x12051c98] */
  EAX = (r32((uint32_t)(0x12051c98)));
  /* 120342b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120342b4 jmp 0x120342bc */
  goto L_120342bc;
L_120342b6:;
  /* 120342b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120342b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120342bc:;
  /* 120342bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120342bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120342c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120342c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120342c8 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 120342cd call dword ptr [0x120553c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c8))), 0x120342d3u);
  /* 120342d3 cmp dword ptr [0x12052b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120342da je 0x120342fa */
  if (C.zf) goto L_120342fa;
  /* 120342dc push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 120342e1 call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x120342e7u);
  /* 120342e7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120342e9 call 0x1202a960 */
  push32(0x120342eeu); f_1202a960();
  /* 120342ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120342f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120342f8 jmp 0x12034301 */
  goto L_12034301;
L_120342fa:;
  /* 120342fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12034301:;
  /* 12034301 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034305 jbe 0x120343f2 */
  if ((C.cf||C.zf)) goto L_120343f2;
  /* 1203430b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203430e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12034310 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12034313 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12034317 je 0x12034321 */
  if (C.zf) goto L_12034321;
  /* 12034319 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203431d je 0x12034326 */
  if (C.zf) goto L_12034326;
  /* 1203431f jmp 0x12034380 */
  goto L_12034380;
L_12034321:;
  /* 12034321 jmp 0x120343f2 */
  goto L_120343f2;
L_12034326:;
  /* 12034326 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203432c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1203432f mov dword ptr [0x12052b50], 0 */
  w32((uint32_t)(0x12052b50), (0x0u));
  /* 12034339 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203433c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1203433f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034342 jne 0x12034357 */
  if (!C.zf) goto L_12034357;
  /* 12034344 mov dword ptr [0x12052b50], 1 */
  w32((uint32_t)(0x12052b50), (0x1u));
  /* 1203434e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034351 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034354 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12034357:;
  /* 12034357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203435a push ecx */
  push32((uint32_t)(ECX));
  /* 1203435b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1203435e push edx */
  push32((uint32_t)(EDX));
  /* 1203435f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12034362 push eax */
  push32((uint32_t)(EAX));
  /* 12034363 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034366 push ecx */
  push32((uint32_t)(ECX));
  /* 12034367 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203436a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1203436c push eax */
  push32((uint32_t)(EAX));
  /* 1203436d call 0x12034430 */
  push32(0x12034372u); f_12034430();
  /* 12034372 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034375 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034378 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203437b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1203437e jmp 0x120343ed */
  goto L_120343ed;
L_12034380:;
  /* 12034380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12034385 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034387 mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 1203438d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1203438f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12034393 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12034399 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1203439b je 0x120343c8 */
  if (C.zf) goto L_120343c8;
  /* 1203439d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120343a1 jbe 0x120343c8 */
  if ((C.cf||C.zf)) goto L_120343c8;
  /* 120343a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120343a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120343a9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120343ab mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120343ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120343b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120343b3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120343b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120343b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120343bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120343bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120343c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120343c5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120343c8:;
  /* 120343c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120343cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120343ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120343d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120343d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120343d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120343d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120343db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120343de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120343e1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120343e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120343e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120343ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120343ed:;
  /* 120343ed jmp 0x12034301 */
  goto L_12034301;
L_120343f2:;
  /* 120343f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120343f6 je 0x12034404 */
  if (C.zf) goto L_12034404;
  /* 120343f8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120343fa call 0x1202aa00 */
  push32(0x120343ffu); f_1202aa00();
  /* 120343ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034402 jmp 0x1203440f */
  goto L_1203440f;
L_12034404:;
  /* 12034404 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 12034409 call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x1203440fu);
L_1203440f:;
  /* 1203440f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034413 jbe 0x12034423 */
  if ((C.cf||C.zf)) goto L_12034423;
  /* 12034415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034418 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1203441b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203441e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034421 jmp 0x12034425 */
  goto L_12034425;
L_12034423:;
  /* 12034423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12034425:;
  /* 12034425 mov esp, ebp */
  ESP = (EBP);
  /* 12034427 pop ebp */
  EBP = (pop32());
  /* 12034428 ret  */
  ESPCHK(0x120342a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014430 @ 0x12034430 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12034430(void) {
  FTRACE(0x12034430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034430 push ebp */
  push32((uint32_t)(EBP));
  /* 12034431 mov ebp, esp */
  EBP = (ESP);
  /* 12034433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034436 push esi */
  push32((uint32_t)(ESI));
  /* 12034437 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1203443b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1203443e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034441 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034444 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12034447 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203444b ja 0x12034998 */
  if ((!C.cf&&!C.zf)) goto L_12034998;
  /* 12034451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12034456 mov dl, byte ptr [eax + 0x120349f9] */
  DL = (r8((uint32_t)(EAX + 0x120349f9)));
  /* 1203445c jmp dword ptr [edx*4 + 0x1203499d] */
  switch (EDX) {
    case 0: goto L_12034976;
    case 1: goto L_12034485;
    case 2: goto L_120344cb;
    case 3: goto L_12034618;
    case 4: goto L_12034640;
    case 5: goto L_120346df;
    case 6: goto L_1203474b;
    case 7: goto L_12034774;
    case 8: goto L_120347b5;
    case 9: goto L_12034897;
    case 10: goto L_120348fe;
    case 11: goto L_1203494b;
    case 12: goto L_12034463;
    case 13: goto L_120344a8;
    case 14: goto L_120344ee;
    case 15: goto L_120345ee;
    case 16: goto L_12034685;
    case 17: goto L_120346b2;
    case 18: goto L_12034707;
    case 19: goto L_1203478b;
    case 20: goto L_12034839;
    case 21: goto L_120348c8;
    case 22: goto L_12034998;
    default: x86_unimpl("switch@0x1203445c out of table"); return;
  }
L_12034463:;
  /* 12034463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034466 push ecx */
  push32((uint32_t)(ECX));
  /* 12034467 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203446a push edx */
  push32((uint32_t)(EDX));
  /* 1203446b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203446e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12034471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034474 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12034477 push eax */
  push32((uint32_t)(EAX));
  /* 12034478 call 0x12034a50 */
  push32(0x1203447du); f_12034a50();
  /* 1203447d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034480 jmp 0x12034998 */
  goto L_12034998;
L_12034485:;
  /* 12034485 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034488 push ecx */
  push32((uint32_t)(ECX));
  /* 12034489 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203448c push edx */
  push32((uint32_t)(EDX));
  /* 1203448d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034490 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12034493 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034496 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1203449a push eax */
  push32((uint32_t)(EAX));
  /* 1203449b call 0x12034a50 */
  push32(0x120344a0u); f_12034a50();
  /* 120344a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120344a3 jmp 0x12034998 */
  goto L_12034998;
L_120344a8:;
  /* 120344a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120344ab push ecx */
  push32((uint32_t)(ECX));
  /* 120344ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120344af push edx */
  push32((uint32_t)(EDX));
  /* 120344b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120344b3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120344b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120344b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 120344bd push eax */
  push32((uint32_t)(EAX));
  /* 120344be call 0x12034a50 */
  push32(0x120344c3u); f_12034a50();
  /* 120344c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120344c6 jmp 0x12034998 */
  goto L_12034998;
L_120344cb:;
  /* 120344cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120344ce push ecx */
  push32((uint32_t)(ECX));
  /* 120344cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120344d2 push edx */
  push32((uint32_t)(EDX));
  /* 120344d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120344d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120344d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120344dc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 120344e0 push eax */
  push32((uint32_t)(EAX));
  /* 120344e1 call 0x12034a50 */
  push32(0x120344e6u); f_12034a50();
  /* 120344e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120344e9 jmp 0x12034998 */
  goto L_12034998;
L_120344ee:;
  /* 120344ee cmp dword ptr [0x12052b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120344f5 je 0x12034576 */
  if (C.zf) goto L_12034576;
  /* 120344f7 mov dword ptr [0x12052b50], 0 */
  w32((uint32_t)(0x12052b50), (0x0u));
  /* 12034501 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034504 push ecx */
  push32((uint32_t)(ECX));
  /* 12034505 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034508 push edx */
  push32((uint32_t)(EDX));
  /* 12034509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203450c push eax */
  push32((uint32_t)(EAX));
  /* 1203450d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034510 push ecx */
  push32((uint32_t)(ECX));
  /* 12034511 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034514 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1203451a push eax */
  push32((uint32_t)(EAX));
  /* 1203451b call 0x12034c00 */
  push32(0x12034520u); f_12034c00();
  /* 12034520 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034523 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034526 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034529 jne 0x12034530 */
  if (!C.zf) goto L_12034530;
  /* 1203452b jmp 0x12034998 */
  goto L_12034998;
L_12034530:;
  /* 12034530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034533 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034535 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12034538 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203453b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1203453d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034540 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034543 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12034545 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034548 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1203454a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203454d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034550 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12034552 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034555 push ecx */
  push32((uint32_t)(ECX));
  /* 12034556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034559 push edx */
  push32((uint32_t)(EDX));
  /* 1203455a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203455d push eax */
  push32((uint32_t)(EAX));
  /* 1203455e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034561 push ecx */
  push32((uint32_t)(ECX));
  /* 12034562 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034565 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1203456b push eax */
  push32((uint32_t)(EAX));
  /* 1203456c call 0x12034c00 */
  push32(0x12034571u); f_12034c00();
  /* 12034571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034574 jmp 0x120345e9 */
  goto L_120345e9;
L_12034576:;
  /* 12034576 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034579 push ecx */
  push32((uint32_t)(ECX));
  /* 1203457a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203457d push edx */
  push32((uint32_t)(EDX));
  /* 1203457e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034581 push eax */
  push32((uint32_t)(EAX));
  /* 12034582 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034585 push ecx */
  push32((uint32_t)(ECX));
  /* 12034586 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034589 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1203458f push eax */
  push32((uint32_t)(EAX));
  /* 12034590 call 0x12034c00 */
  push32(0x12034595u); f_12034c00();
  /* 12034595 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034598 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203459b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203459e jne 0x120345a5 */
  if (!C.zf) goto L_120345a5;
  /* 120345a0 jmp 0x12034998 */
  goto L_12034998;
L_120345a5:;
  /* 120345a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120345a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120345aa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 120345ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120345b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120345b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120345b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120345b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120345ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120345bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120345bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120345c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120345c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120345c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120345ca push ecx */
  push32((uint32_t)(ECX));
  /* 120345cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120345ce push edx */
  push32((uint32_t)(EDX));
  /* 120345cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120345d2 push eax */
  push32((uint32_t)(EAX));
  /* 120345d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120345d6 push ecx */
  push32((uint32_t)(ECX));
  /* 120345d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120345da mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 120345e0 push eax */
  push32((uint32_t)(EAX));
  /* 120345e1 call 0x12034c00 */
  push32(0x120345e6u); f_12034c00();
  /* 120345e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120345e9:;
  /* 120345e9 jmp 0x12034998 */
  goto L_12034998;
L_120345ee:;
  /* 120345ee mov ecx, dword ptr [0x12052b50] */
  ECX = (r32((uint32_t)(0x12052b50)));
  /* 120345f4 mov dword ptr [0x12052b60], ecx */
  w32((uint32_t)(0x12052b60), (ECX));
  /* 120345fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120345fd push edx */
  push32((uint32_t)(EDX));
  /* 120345fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034601 push eax */
  push32((uint32_t)(EAX));
  /* 12034602 push 2 */
  push32((uint32_t)(0x2u));
  /* 12034604 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034607 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1203460a push edx */
  push32((uint32_t)(EDX));
  /* 1203460b call 0x12034aa0 */
  push32(0x12034610u); f_12034aa0();
  /* 12034610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034613 jmp 0x12034998 */
  goto L_12034998;
L_12034618:;
  /* 12034618 mov eax, dword ptr [0x12052b50] */
  EAX = (r32((uint32_t)(0x12052b50)));
  /* 1203461d mov dword ptr [0x12052b60], eax */
  w32((uint32_t)(0x12052b60), (EAX));
  /* 12034622 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034625 push ecx */
  push32((uint32_t)(ECX));
  /* 12034626 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034629 push edx */
  push32((uint32_t)(EDX));
  /* 1203462a push 2 */
  push32((uint32_t)(0x2u));
  /* 1203462c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203462f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12034632 push ecx */
  push32((uint32_t)(ECX));
  /* 12034633 call 0x12034aa0 */
  push32(0x12034638u); f_12034aa0();
  /* 12034638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203463b jmp 0x12034998 */
  goto L_12034998;
L_12034640:;
  /* 12034640 mov edx, dword ptr [0x12052b50] */
  EDX = (r32((uint32_t)(0x12052b50)));
  /* 12034646 mov dword ptr [0x12052b60], edx */
  w32((uint32_t)(0x12052b60), (EDX));
  /* 1203464c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203464f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12034652 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034653 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12034658 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1203465a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1203465d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034661 jne 0x1203466a */
  if (!C.zf) goto L_1203466a;
  /* 12034663 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1203466a:;
  /* 1203466a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203466d push edx */
  push32((uint32_t)(EDX));
  /* 1203466e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034671 push eax */
  push32((uint32_t)(EAX));
  /* 12034672 push 2 */
  push32((uint32_t)(0x2u));
  /* 12034674 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034677 push ecx */
  push32((uint32_t)(ECX));
  /* 12034678 call 0x12034aa0 */
  push32(0x1203467du); f_12034aa0();
  /* 1203467d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034680 jmp 0x12034998 */
  goto L_12034998;
L_12034685:;
  /* 12034685 mov edx, dword ptr [0x12052b50] */
  EDX = (r32((uint32_t)(0x12052b50)));
  /* 1203468b mov dword ptr [0x12052b60], edx */
  w32((uint32_t)(0x12052b60), (EDX));
  /* 12034691 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034694 push eax */
  push32((uint32_t)(EAX));
  /* 12034695 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034698 push ecx */
  push32((uint32_t)(ECX));
  /* 12034699 push 3 */
  push32((uint32_t)(0x3u));
  /* 1203469b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203469e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120346a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120346a4 push eax */
  push32((uint32_t)(EAX));
  /* 120346a5 call 0x12034aa0 */
  push32(0x120346aau); f_12034aa0();
  /* 120346aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120346ad jmp 0x12034998 */
  goto L_12034998;
L_120346b2:;
  /* 120346b2 mov ecx, dword ptr [0x12052b50] */
  ECX = (r32((uint32_t)(0x12052b50)));
  /* 120346b8 mov dword ptr [0x12052b60], ecx */
  w32((uint32_t)(0x12052b60), (ECX));
  /* 120346be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120346c1 push edx */
  push32((uint32_t)(EDX));
  /* 120346c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120346c5 push eax */
  push32((uint32_t)(EAX));
  /* 120346c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120346c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120346cb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120346ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120346d1 push edx */
  push32((uint32_t)(EDX));
  /* 120346d2 call 0x12034aa0 */
  push32(0x120346d7u); f_12034aa0();
  /* 120346d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120346da jmp 0x12034998 */
  goto L_12034998;
L_120346df:;
  /* 120346df mov eax, dword ptr [0x12052b50] */
  EAX = (r32((uint32_t)(0x12052b50)));
  /* 120346e4 mov dword ptr [0x12052b60], eax */
  w32((uint32_t)(0x12052b60), (EAX));
  /* 120346e9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120346ec push ecx */
  push32((uint32_t)(ECX));
  /* 120346ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120346f0 push edx */
  push32((uint32_t)(EDX));
  /* 120346f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120346f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120346f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120346f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120346fa call 0x12034aa0 */
  push32(0x120346ffu); f_12034aa0();
  /* 120346ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034702 jmp 0x12034998 */
  goto L_12034998;
L_12034707:;
  /* 12034707 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203470a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203470e jg 0x1203472c */
  if ((!C.zf&&C.sf==C.of)) goto L_1203472c;
  /* 12034710 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034713 push eax */
  push32((uint32_t)(EAX));
  /* 12034714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034717 push ecx */
  push32((uint32_t)(ECX));
  /* 12034718 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1203471b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12034721 push eax */
  push32((uint32_t)(EAX));
  /* 12034722 call 0x12034a50 */
  push32(0x12034727u); f_12034a50();
  /* 12034727 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203472a jmp 0x12034746 */
  goto L_12034746;
L_1203472c:;
  /* 1203472c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203472f push ecx */
  push32((uint32_t)(ECX));
  /* 12034730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034733 push edx */
  push32((uint32_t)(EDX));
  /* 12034734 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034737 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1203473d push ecx */
  push32((uint32_t)(ECX));
  /* 1203473e call 0x12034a50 */
  push32(0x12034743u); f_12034a50();
  /* 12034743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12034746:;
  /* 12034746 jmp 0x12034998 */
  goto L_12034998;
L_1203474b:;
  /* 1203474b mov edx, dword ptr [0x12052b50] */
  EDX = (r32((uint32_t)(0x12052b50)));
  /* 12034751 mov dword ptr [0x12052b60], edx */
  w32((uint32_t)(0x12052b60), (EDX));
  /* 12034757 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203475a push eax */
  push32((uint32_t)(EAX));
  /* 1203475b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203475e push ecx */
  push32((uint32_t)(ECX));
  /* 1203475f push 2 */
  push32((uint32_t)(0x2u));
  /* 12034761 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034764 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034766 push eax */
  push32((uint32_t)(EAX));
  /* 12034767 call 0x12034aa0 */
  push32(0x1203476cu); f_12034aa0();
  /* 1203476c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203476f jmp 0x12034998 */
  goto L_12034998;
L_12034774:;
  /* 12034774 mov ecx, dword ptr [0x12052b50] */
  ECX = (r32((uint32_t)(0x12052b50)));
  /* 1203477a mov dword ptr [0x12052b60], ecx */
  w32((uint32_t)(0x12052b60), (ECX));
  /* 12034780 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034783 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12034786 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12034789 jmp 0x120347dd */
  goto L_120347dd;
L_1203478b:;
  /* 1203478b mov ecx, dword ptr [0x12052b50] */
  ECX = (r32((uint32_t)(0x12052b50)));
  /* 12034791 mov dword ptr [0x12052b60], ecx */
  w32((uint32_t)(0x12052b60), (ECX));
  /* 12034797 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203479a push edx */
  push32((uint32_t)(EDX));
  /* 1203479b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203479e push eax */
  push32((uint32_t)(EAX));
  /* 1203479f push 1 */
  push32((uint32_t)(0x1u));
  /* 120347a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120347a4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120347a7 push edx */
  push32((uint32_t)(EDX));
  /* 120347a8 call 0x12034aa0 */
  push32(0x120347adu); f_12034aa0();
  /* 120347ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120347b0 jmp 0x12034998 */
  goto L_12034998;
L_120347b5:;
  /* 120347b5 mov eax, dword ptr [0x12052b50] */
  EAX = (r32((uint32_t)(0x12052b50)));
  /* 120347ba mov dword ptr [0x12052b60], eax */
  w32((uint32_t)(0x12052b60), (EAX));
  /* 120347bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120347c2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120347c6 jne 0x120347d1 */
  if (!C.zf) goto L_120347d1;
  /* 120347c8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 120347cf jmp 0x120347dd */
  goto L_120347dd;
L_120347d1:;
  /* 120347d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120347d4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120347d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120347da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120347dd:;
  /* 120347dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120347e0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120347e3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120347e6 jge 0x120347f1 */
  if ((C.sf==C.of)) goto L_120347f1;
  /* 120347e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120347ef jmp 0x1203481e */
  goto L_1203481e;
L_120347f1:;
  /* 120347f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120347f4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120347f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120347f8 mov ecx, 7 */
  ECX = (0x7u);
  /* 120347fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120347ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12034802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034805 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12034808 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034809 mov ecx, 7 */
  ECX = (0x7u);
  /* 1203480e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034810 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034813 jl 0x1203481e */
  if ((C.sf!=C.of)) goto L_1203481e;
  /* 12034815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203481b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1203481e:;
  /* 1203481e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034821 push eax */
  push32((uint32_t)(EAX));
  /* 12034822 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034825 push ecx */
  push32((uint32_t)(ECX));
  /* 12034826 push 2 */
  push32((uint32_t)(0x2u));
  /* 12034828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203482b push edx */
  push32((uint32_t)(EDX));
  /* 1203482c call 0x12034aa0 */
  push32(0x12034831u); f_12034aa0();
  /* 12034831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034834 jmp 0x12034998 */
  goto L_12034998;
L_12034839:;
  /* 12034839 cmp dword ptr [0x12052b50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034840 je 0x12034870 */
  if (C.zf) goto L_12034870;
  /* 12034842 mov dword ptr [0x12052b50], 0 */
  w32((uint32_t)(0x12052b50), (0x0u));
  /* 1203484c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1203484f push eax */
  push32((uint32_t)(EAX));
  /* 12034850 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034853 push ecx */
  push32((uint32_t)(ECX));
  /* 12034854 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034857 push edx */
  push32((uint32_t)(EDX));
  /* 12034858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203485b push eax */
  push32((uint32_t)(EAX));
  /* 1203485c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1203485f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12034865 push edx */
  push32((uint32_t)(EDX));
  /* 12034866 call 0x12034c00 */
  push32(0x1203486bu); f_12034c00();
  /* 1203486b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203486e jmp 0x12034892 */
  goto L_12034892;
L_12034870:;
  /* 12034870 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034873 push eax */
  push32((uint32_t)(EAX));
  /* 12034874 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034877 push ecx */
  push32((uint32_t)(ECX));
  /* 12034878 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203487b push edx */
  push32((uint32_t)(EDX));
  /* 1203487c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203487f push eax */
  push32((uint32_t)(EAX));
  /* 12034880 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034883 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12034889 push edx */
  push32((uint32_t)(EDX));
  /* 1203488a call 0x12034c00 */
  push32(0x1203488fu); f_12034c00();
  /* 1203488f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12034892:;
  /* 12034892 jmp 0x12034998 */
  goto L_12034998;
L_12034897:;
  /* 12034897 mov dword ptr [0x12052b50], 0 */
  w32((uint32_t)(0x12052b50), (0x0u));
  /* 120348a1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120348a4 push eax */
  push32((uint32_t)(EAX));
  /* 120348a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120348a8 push ecx */
  push32((uint32_t)(ECX));
  /* 120348a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120348ac push edx */
  push32((uint32_t)(EDX));
  /* 120348ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120348b0 push eax */
  push32((uint32_t)(EAX));
  /* 120348b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120348b4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 120348ba push edx */
  push32((uint32_t)(EDX));
  /* 120348bb call 0x12034c00 */
  push32(0x120348c0u); f_12034c00();
  /* 120348c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120348c3 jmp 0x12034998 */
  goto L_12034998;
L_120348c8:;
  /* 120348c8 mov eax, dword ptr [0x12052b50] */
  EAX = (r32((uint32_t)(0x12052b50)));
  /* 120348cd mov dword ptr [0x12052b60], eax */
  w32((uint32_t)(0x12052b60), (EAX));
  /* 120348d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120348d5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 120348d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120348d9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120348de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120348e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120348e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120348e6 push edx */
  push32((uint32_t)(EDX));
  /* 120348e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120348ea push eax */
  push32((uint32_t)(EAX));
  /* 120348eb push 2 */
  push32((uint32_t)(0x2u));
  /* 120348ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120348f0 push ecx */
  push32((uint32_t)(ECX));
  /* 120348f1 call 0x12034aa0 */
  push32(0x120348f6u); f_12034aa0();
  /* 120348f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120348f9 jmp 0x12034998 */
  goto L_12034998;
L_120348fe:;
  /* 120348fe mov edx, dword ptr [0x12052b50] */
  EDX = (r32((uint32_t)(0x12052b50)));
  /* 12034904 mov dword ptr [0x12052b60], edx */
  w32((uint32_t)(0x12052b60), (EDX));
  /* 1203490a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203490d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12034910 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034911 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12034916 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034918 mov ecx, eax */
  ECX = (EAX);
  /* 1203491a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203491d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12034920 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034923 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12034926 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034927 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1203492c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1203492e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034930 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12034933 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034936 push eax */
  push32((uint32_t)(EAX));
  /* 12034937 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203493a push ecx */
  push32((uint32_t)(ECX));
  /* 1203493b push 4 */
  push32((uint32_t)(0x4u));
  /* 1203493d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034940 push edx */
  push32((uint32_t)(EDX));
  /* 12034941 call 0x12034aa0 */
  push32(0x12034946u); f_12034aa0();
  /* 12034946 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034949 jmp 0x12034998 */
  goto L_12034998;
L_1203494b:;
  /* 1203494b call 0x12035a60 */
  push32(0x12034950u); f_12035a60();
  /* 12034950 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034953 push eax */
  push32((uint32_t)(EAX));
  /* 12034954 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034957 push ecx */
  push32((uint32_t)(ECX));
  /* 12034958 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203495b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203495d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034961 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12034964 mov ecx, dword ptr [eax*4 + 0x12051e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12051e1c)));
  /* 1203496b push ecx */
  push32((uint32_t)(ECX));
  /* 1203496c call 0x12034a50 */
  push32(0x12034971u); f_12034a50();
  /* 12034971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034974 jmp 0x12034998 */
  goto L_12034998;
L_12034976:;
  /* 12034976 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034979 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1203497b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1203497e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034981 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034983 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034986 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034989 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1203498b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203498e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034993 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034996 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12034998:;
  /* 12034998 pop esi */
  ESI = (pop32());
  /* 12034999 mov esp, ebp */
  ESP = (EBP);
  /* 1203499b pop ebp */
  EBP = (pop32());
  /* 1203499c ret  */
  ESPCHK(0x12034430u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12034a50 (72 bytes, 30 insns) */
void f_12034a50(void) {
  FTRACE(0x12034a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12034a51 mov ebp, esp */
  EBP = (ESP);
L_12034a53:;
  /* 12034a53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034a56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034a59 je 0x12034a96 */
  if (C.zf) goto L_12034a96;
  /* 12034a5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034a5e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12034a61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12034a63 je 0x12034a96 */
  if (C.zf) goto L_12034a96;
  /* 12034a65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034a68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034a6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034a6d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034a6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12034a71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034a74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034a76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034a79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034a7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12034a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034a81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034a84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12034a87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034a8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034a8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034a8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034a92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12034a94 jmp 0x12034a53 */
  goto L_12034a53;
L_12034a96:;
  /* 12034a96 pop ebp */
  EBP = (pop32());
  /* 12034a97 ret  */
  ESPCHK(0x12034a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x12034aa0 (173 bytes, 64 insns) */
void f_12034aa0(void) {
  FTRACE(0x12034aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12034aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12034aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12034aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12034aab cmp dword ptr [0x12052b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034ab2 je 0x12034aca */
  if (C.zf) goto L_12034aca;
  /* 12034ab4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034ab7 push eax */
  push32((uint32_t)(EAX));
  /* 12034ab8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034abb push ecx */
  push32((uint32_t)(ECX));
  /* 12034abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034abf push edx */
  push32((uint32_t)(EDX));
  /* 12034ac0 call 0x12034b50 */
  push32(0x12034ac5u); f_12034b50();
  /* 12034ac5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034ac8 jmp 0x12034b49 */
  goto L_12034b49;
L_12034aca:;
  /* 12034aca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034ad0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034ad2 jae 0x12034b40 */
  if (!C.cf) goto L_12034b40;
  /* 12034ad4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034ad7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ada mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12034add jmp 0x12034ae8 */
  goto L_12034ae8;
L_12034adf:;
  /* 12034adf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034ae2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ae5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12034ae8:;
  /* 12034ae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034aeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034aee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12034af0 je 0x12034b24 */
  if (C.zf) goto L_12034b24;
  /* 12034af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034af5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034af6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12034afb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034afd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034b00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034b05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034b08 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12034b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034b0e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034b0f mov ecx, 0xa */
  ECX = (0xau);
  /* 12034b14 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034b16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12034b19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034b1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034b1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12034b22 jmp 0x12034adf */
  goto L_12034adf;
L_12034b24:;
  /* 12034b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034b29 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034b2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12034b31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034b34 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034b36 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034b39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034b3c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12034b3e jmp 0x12034b49 */
  goto L_12034b49;
L_12034b40:;
  /* 12034b40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034b43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12034b49:;
  /* 12034b49 mov esp, ebp */
  ESP = (EBP);
  /* 12034b4b pop ebp */
  EBP = (pop32());
  /* 12034b4c ret  */
  ESPCHK(0x12034aa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12034b50 (172 bytes, 65 insns) */
void f_12034b50(void) {
  FTRACE(0x12034b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12034b51 mov ebp, esp */
  EBP = (ESP);
  /* 12034b53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034b59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034b5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12034b5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b61 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034b64 jbe 0x12034bab */
  if ((C.cf||C.zf)) goto L_12034bab;
L_12034b66:;
  /* 12034b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034b69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034b6a mov ecx, 0xa */
  ECX = (0xau);
  /* 12034b6f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034b71 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034b77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12034b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034b7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034b7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12034b82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b85 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034b87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034b8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034b8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12034b8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034b92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12034b93 mov ecx, 0xa */
  ECX = (0xau);
  /* 12034b98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12034b9a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12034b9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034ba1 jle 0x12034bab */
  if ((C.zf||C.sf!=C.of)) goto L_12034bab;
  /* 12034ba3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034ba6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034ba9 ja 0x12034b66 */
  if ((!C.cf&&!C.zf)) goto L_12034b66;
L_12034bab:;
  /* 12034bab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034bae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034bb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12034bb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034bb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12034bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034bbe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034bc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12034bc4:;
  /* 12034bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034bc7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034bc9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12034bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034bcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034bd2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034bd4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12034bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034bd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034bdc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12034bdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034be2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12034be5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12034be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034bea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034bed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12034bf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12034bf3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034bf6 jb 0x12034bc4 */
  if (C.cf) goto L_12034bc4;
  /* 12034bf8 mov esp, ebp */
  ESP = (EBP);
  /* 12034bfa pop ebp */
  EBP = (pop32());
  /* 12034bfb ret  */
  ESPCHK(0x12034b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c00 @ 0x12034c00 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12034c00(void) {
  FTRACE(0x12034c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12034c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12034c01 mov ebp, esp */
  EBP = (ESP);
  /* 12034c03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12034c06:;
  /* 12034c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034c09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12034c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12034c0e je 0x1203507c */
  if (C.zf) goto L_1203507c;
  /* 12034c14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034c17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034c1a je 0x1203507c */
  if (C.zf) goto L_1203507c;
  /* 12034c20 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12034c24 mov dword ptr [0x12052b60], 0 */
  w32((uint32_t)(0x12052b60), (0x0u));
  /* 12034c2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12034c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034c38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12034c3b jmp 0x12034c46 */
  goto L_12034c46;
L_12034c3d:;
  /* 12034c3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034c40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034c43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12034c46:;
  /* 12034c46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034c49 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12034c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034c4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12034c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034c58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12034c5b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034c5d jne 0x12034c61 */
  if (!C.zf) goto L_12034c61;
  /* 12034c5f jmp 0x12034c3d */
  goto L_12034c3d;
L_12034c61:;
  /* 12034c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034c64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034c67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12034c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034c6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12034c70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12034c73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034c76 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034c79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12034c7c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034c80 ja 0x12034fd0 */
  if ((!C.cf&&!C.zf)) goto L_12034fd0;
  /* 12034c86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12034c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12034c8b mov al, byte ptr [ecx + 0x120350ac] */
  AL = (r8((uint32_t)(ECX + 0x120350ac)));
  /* 12034c91 jmp dword ptr [eax*4 + 0x12035080] */
  switch (EAX) {
    case 0: goto L_12034eef;
    case 1: goto L_12034dd3;
    case 2: goto L_12034d5e;
    case 3: goto L_12034c98;
    case 4: goto L_12034cd6;
    case 5: goto L_12034d37;
    case 6: goto L_12034d85;
    case 7: goto L_12034dac;
    case 8: goto L_12034e1a;
    case 9: goto L_12034d14;
    case 10: goto L_12034fd0;
    default: x86_unimpl("switch@0x12034c91 out of table"); return;
  }
L_12034c98:;
  /* 12034c98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034c9b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12034c9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034ca1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ca4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12034ca7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034cab ja 0x12034cd1 */
  if ((!C.cf&&!C.zf)) goto L_12034cd1;
  /* 12034cad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12034cb0 jmp dword ptr [ecx*4 + 0x120350ff] */
  switch (ECX) {
    case 0: goto L_12034cb7;
    case 1: goto L_12034cc1;
    case 2: goto L_12034cc7;
    case 3: goto L_12034ccd;
    case 4: goto L_12034cf5;
    case 5: goto L_12034cff;
    case 6: goto L_12034d05;
    case 7: goto L_12034d0b;
    default: x86_unimpl("switch@0x12034cb0 out of table"); return;
  }
L_12034cb7:;
  /* 12034cb7 mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034cc1:;
  /* 12034cc1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12034cc5 jmp 0x12034cd1 */
  goto L_12034cd1;
L_12034cc7:;
  /* 12034cc7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12034ccb jmp 0x12034cd1 */
  goto L_12034cd1;
L_12034ccd:;
  /* 12034ccd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12034cd1:;
  /* 12034cd1 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034cd6:;
  /* 12034cd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034cd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12034cdc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12034cdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ce2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12034ce5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034ce9 ja 0x12034d0f */
  if ((!C.cf&&!C.zf)) goto L_12034d0f;
  /* 12034ceb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12034cee jmp dword ptr [ecx*4 + 0x1203510f] */
  switch (ECX) {
    case 0: goto L_12034cf5;
    case 1: goto L_12034cff;
    case 2: goto L_12034d05;
    case 3: goto L_12034d0b;
    default: x86_unimpl("switch@0x12034cee out of table"); return;
  }
L_12034cf5:;
  /* 12034cf5 mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034cff:;
  /* 12034cff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12034d03 jmp 0x12034d0f */
  goto L_12034d0f;
L_12034d05:;
  /* 12034d05 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12034d09 jmp 0x12034d0f */
  goto L_12034d0f;
L_12034d0b:;
  /* 12034d0b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12034d0f:;
  /* 12034d0f jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034d14:;
  /* 12034d14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034d17 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12034d1a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d1e je 0x12034d28 */
  if (C.zf) goto L_12034d28;
  /* 12034d20 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d24 je 0x12034d2e */
  if (C.zf) goto L_12034d2e;
  /* 12034d26 jmp 0x12034d32 */
  goto L_12034d32;
L_12034d28:;
  /* 12034d28 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12034d2c jmp 0x12034d32 */
  goto L_12034d32;
L_12034d2e:;
  /* 12034d2e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12034d32:;
  /* 12034d32 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034d37:;
  /* 12034d37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034d3a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12034d3d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d41 je 0x12034d4b */
  if (C.zf) goto L_12034d4b;
  /* 12034d43 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d47 je 0x12034d55 */
  if (C.zf) goto L_12034d55;
  /* 12034d49 jmp 0x12034d59 */
  goto L_12034d59;
L_12034d4b:;
  /* 12034d4b mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034d55:;
  /* 12034d55 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12034d59:;
  /* 12034d59 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034d5e:;
  /* 12034d5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034d61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12034d64 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d68 je 0x12034d72 */
  if (C.zf) goto L_12034d72;
  /* 12034d6a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d6e je 0x12034d7c */
  if (C.zf) goto L_12034d7c;
  /* 12034d70 jmp 0x12034d80 */
  goto L_12034d80;
L_12034d72:;
  /* 12034d72 mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034d7c:;
  /* 12034d7c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12034d80:;
  /* 12034d80 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034d85:;
  /* 12034d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034d88 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12034d8b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d8f je 0x12034d99 */
  if (C.zf) goto L_12034d99;
  /* 12034d91 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034d95 je 0x12034da3 */
  if (C.zf) goto L_12034da3;
  /* 12034d97 jmp 0x12034da7 */
  goto L_12034da7;
L_12034d99:;
  /* 12034d99 mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034da3:;
  /* 12034da3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12034da7:;
  /* 12034da7 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034dac:;
  /* 12034dac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034daf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12034db2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034db6 je 0x12034dc0 */
  if (C.zf) goto L_12034dc0;
  /* 12034db8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034dbc je 0x12034dca */
  if (C.zf) goto L_12034dca;
  /* 12034dbe jmp 0x12034dce */
  goto L_12034dce;
L_12034dc0:;
  /* 12034dc0 mov dword ptr [0x12052b60], 1 */
  w32((uint32_t)(0x12052b60), (0x1u));
L_12034dca:;
  /* 12034dca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12034dce:;
  /* 12034dce jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034dd3:;
  /* 12034dd3 push 0x1204eda4 */
  push32((uint32_t)(0x1204eda4u));
  /* 12034dd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034ddb push ecx */
  push32((uint32_t)(ECX));
  /* 12034ddc call 0x12035630 */
  push32(0x12034de1u); f_12035630();
  /* 12034de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12034de6 jne 0x12034df3 */
  if (!C.zf) goto L_12034df3;
  /* 12034de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034deb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034dee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12034df1 jmp 0x12034e11 */
  goto L_12034e11;
L_12034df3:;
  /* 12034df3 push 0x1204eda0 */
  push32((uint32_t)(0x1204eda0u));
  /* 12034df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034dfb push eax */
  push32((uint32_t)(EAX));
  /* 12034dfc call 0x12035630 */
  push32(0x12034e01u); f_12035630();
  /* 12034e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12034e06 jne 0x12034e11 */
  if (!C.zf) goto L_12034e11;
  /* 12034e08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034e0b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034e0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12034e11:;
  /* 12034e11 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12034e15 jmp 0x12034fd0 */
  goto L_12034fd0;
L_12034e1a:;
  /* 12034e1a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034e1d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034e21 jg 0x12034e31 */
  if ((!C.zf&&C.sf==C.of)) goto L_12034e31;
  /* 12034e23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034e26 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12034e2c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12034e2f jmp 0x12034e3d */
  goto L_12034e3d;
L_12034e31:;
  /* 12034e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034e34 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12034e3a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12034e3d:;
  /* 12034e3d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034e41 jle 0x12034ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_12034ee4;
  /* 12034e47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034e4a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034e4d jbe 0x12034ee4 */
  if ((C.cf||C.zf)) goto L_12034ee4;
  /* 12034e53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12034e58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034e5a mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 12034e60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12034e62 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12034e66 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12034e6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12034e6e je 0x12034ea7 */
  if (C.zf) goto L_12034ea7;
  /* 12034e70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034e73 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034e76 jbe 0x12034ea7 */
  if ((C.cf||C.zf)) goto L_12034ea7;
  /* 12034e78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034e7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034e7d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034e80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12034e82 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12034e84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034e87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034e89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034e8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034e8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12034e91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034e94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034e97 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12034e9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034e9d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034e9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ea2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034ea5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12034ea7:;
  /* 12034ea7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034eaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034eac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034eaf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12034eb1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12034eb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034eb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034ebb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034ebe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12034ec0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12034ec3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034ec6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12034ec9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034ecc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034ece sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034ed1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034ed4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12034ed6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034ed9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034edc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12034edf jmp 0x12034e3d */
  goto L_12034e3d;
L_12034ee4:;
  /* 12034ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034ee7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12034eea jmp 0x12034c06 */
  goto L_12034c06;
L_12034eef:;
  /* 12034eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12034ef2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12034ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12034ef7 je 0x12034fc2 */
  if (C.zf) goto L_12034fc2;
  /* 12034efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f00 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034f03 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12034f06:;
  /* 12034f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12034f0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12034f0e je 0x12034fc0 */
  if (C.zf) goto L_12034fc0;
  /* 12034f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034f17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034f1a je 0x12034fc0 */
  if (C.zf) goto L_12034fc0;
  /* 12034f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12034f26 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034f29 jne 0x12034f39 */
  if (!C.zf) goto L_12034f39;
  /* 12034f2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034f31 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12034f34 jmp 0x12034fc0 */
  goto L_12034fc0;
L_12034f39:;
  /* 12034f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12034f3e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12034f40 mov edx, dword ptr [0x12050c98] */
  EDX = (r32((uint32_t)(0x12050c98)));
  /* 12034f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12034f48 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12034f4c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12034f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12034f53 je 0x12034f8c */
  if (C.zf) goto L_12034f8c;
  /* 12034f55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034f58 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12034f5b jbe 0x12034f8c */
  if ((C.cf||C.zf)) goto L_12034f8c;
  /* 12034f5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034f60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12034f67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12034f69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034f6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034f71 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034f74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12034f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034f7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12034f7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034f82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034f84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034f87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034f8a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12034f8c:;
  /* 12034f8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034f8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12034f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034f94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12034f96 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12034f98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034f9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12034f9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034fa0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034fa3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12034fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034fa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034fab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12034fae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034fb1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12034fb3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12034fb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034fb9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12034fbb jmp 0x12034f06 */
  goto L_12034f06;
L_12034fc0:;
  /* 12034fc0 jmp 0x12034fcb */
  goto L_12034fcb;
L_12034fc2:;
  /* 12034fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034fc5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12034fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12034fcb:;
  /* 12034fcb jmp 0x12034c06 */
  goto L_12034c06;
L_12034fd0:;
  /* 12034fd0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12034fd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12034fd6 je 0x12034ffc */
  if (C.zf) goto L_12034ffc;
  /* 12034fd8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12034fdb push edx */
  push32((uint32_t)(EDX));
  /* 12034fdc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12034fdf push eax */
  push32((uint32_t)(EAX));
  /* 12034fe0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12034fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12034fe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12034fe7 push edx */
  push32((uint32_t)(EDX));
  /* 12034fe8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12034feb push eax */
  push32((uint32_t)(EAX));
  /* 12034fec call 0x12034430 */
  push32(0x12034ff1u); f_12034430();
  /* 12034ff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12034ff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12034ff7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12034ffa jmp 0x12035077 */
  goto L_12035077;
L_12034ffc:;
  /* 12034ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12034fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035001 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12035003 mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 12035009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1203500b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1203500f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12035015 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12035017 je 0x12035048 */
  if (C.zf) goto L_12035048;
  /* 12035019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203501c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1203501e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035021 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12035023 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12035025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035028 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1203502a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203502d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12035032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035038 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1203503b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203503e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12035040 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035043 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12035046 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12035048:;
  /* 12035048 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203504b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1203504d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035050 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12035052 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12035054 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12035059 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203505c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203505f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12035061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035064 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035067 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203506a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203506d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1203506f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035072 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12035075 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12035077:;
  /* 12035077 jmp 0x12034c06 */
  goto L_12034c06;
L_1203507c:;
  /* 1203507c mov esp, ebp */
  ESP = (EBP);
  /* 1203507e pop ebp */
  EBP = (pop32());
  /* 1203507f ret  */
  ESPCHK(0x12034c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015120 @ 0x12035120 (650 bytes, 178 insns) */
void f_12035120(void) {
  FTRACE(0x12035120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035120 push ebp */
  push32((uint32_t)(EBP));
  /* 12035121 mov ebp, esp */
  EBP = (ESP);
  /* 12035123 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035129 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203512d jne 0x12035289 */
  if (!C.zf) goto L_12035289;
  /* 12035133 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12035136 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1203513c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12035142 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035145 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203514c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12035156 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035158 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1203515e push edx */
  push32((uint32_t)(EDX));
  /* 1203515f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035162 push eax */
  push32((uint32_t)(EAX));
  /* 12035163 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035166 push ecx */
  push32((uint32_t)(ECX));
  /* 12035167 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203516a push edx */
  push32((uint32_t)(EDX));
  /* 1203516b call 0x12036540 */
  push32(0x12035170u); f_12036540();
  /* 12035170 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035173 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12035176 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203517a jne 0x1203520f */
  if (!C.zf) goto L_1203520f;
  /* 12035180 call dword ptr [0x120553f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553f0))), 0x12035186u);
  /* 12035186 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035189 je 0x12035190 */
  if (C.zf) goto L_12035190;
  /* 1203518b jmp 0x1203526d */
  goto L_1203526d;
L_12035190:;
  /* 12035190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035192 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035194 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035196 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035199 push eax */
  push32((uint32_t)(EAX));
  /* 1203519a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203519d push ecx */
  push32((uint32_t)(ECX));
  /* 1203519e call 0x12036540 */
  push32(0x120351a3u); f_12036540();
  /* 120351a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120351a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 120351ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120351b3 jne 0x120351ba */
  if (!C.zf) goto L_120351ba;
  /* 120351b5 jmp 0x1203526d */
  goto L_1203526d;
L_120351ba:;
  /* 120351ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 120351bc push 0x1204edac */
  push32((uint32_t)(0x1204edacu));
  /* 120351c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120351c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 120351c9 push edx */
  push32((uint32_t)(EDX));
  /* 120351ca call 0x12026f60 */
  push32(0x120351cfu); f_12026f60();
  /* 120351cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120351d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120351d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120351d9 jne 0x120351e0 */
  if (!C.zf) goto L_120351e0;
  /* 120351db jmp 0x1203526d */
  goto L_1203526d;
L_120351e0:;
  /* 120351e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120351e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120351e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 120351ef push eax */
  push32((uint32_t)(EAX));
  /* 120351f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120351f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120351f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120351f7 push edx */
  push32((uint32_t)(EDX));
  /* 120351f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120351fb push eax */
  push32((uint32_t)(EAX));
  /* 120351fc call 0x12036540 */
  push32(0x12035201u); f_12036540();
  /* 12035201 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035204 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12035207 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203520b jne 0x1203520f */
  if (!C.zf) goto L_1203520f;
  /* 1203520d jmp 0x1203526d */
  goto L_1203526d;
L_1203520f:;
  /* 1203520f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12035211 push 0x1204edac */
  push32((uint32_t)(0x1204edacu));
  /* 12035216 push 2 */
  push32((uint32_t)(0x2u));
  /* 12035218 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203521b push ecx */
  push32((uint32_t)(ECX));
  /* 1203521c call 0x12026f60 */
  push32(0x12035221u); f_12026f60();
  /* 12035221 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035224 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1203522a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1203522c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12035232 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035235 jne 0x12035239 */
  if (!C.zf) goto L_12035239;
  /* 12035237 jmp 0x1203526d */
  goto L_1203526d;
L_12035239:;
  /* 12035239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203523c push ecx */
  push32((uint32_t)(ECX));
  /* 1203523d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035240 push edx */
  push32((uint32_t)(EDX));
  /* 12035241 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12035247 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12035249 push ecx */
  push32((uint32_t)(ECX));
  /* 1203524a call 0x1202a780 */
  push32(0x1203524fu); f_1202a780();
  /* 1203524f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035252 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035256 je 0x12035266 */
  if (C.zf) goto L_12035266;
  /* 12035258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1203525a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203525d push edx */
  push32((uint32_t)(EDX));
  /* 1203525e call 0x120279f0 */
  push32(0x12035263u); f_120279f0();
  /* 12035263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12035266:;
  /* 12035266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035268 jmp 0x120353a6 */
  goto L_120353a6;
L_1203526d:;
  /* 1203526d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035271 je 0x12035281 */
  if (C.zf) goto L_12035281;
  /* 12035273 push 2 */
  push32((uint32_t)(0x2u));
  /* 12035275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035278 push eax */
  push32((uint32_t)(EAX));
  /* 12035279 call 0x120279f0 */
  push32(0x1203527eu); f_120279f0();
  /* 1203527e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12035281:;
  /* 12035281 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12035284 jmp 0x120353a6 */
  goto L_120353a6;
L_12035289:;
  /* 12035289 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203528d jne 0x120353a3 */
  if (!C.zf) goto L_120353a3;
  /* 12035293 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1203529d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120352a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 120352a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120352a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 120352ae push edx */
  push32((uint32_t)(EDX));
  /* 120352af push 0x12052a78 */
  push32((uint32_t)(0x12052a78u));
  /* 120352b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120352b7 push eax */
  push32((uint32_t)(EAX));
  /* 120352b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120352bb push ecx */
  push32((uint32_t)(ECX));
  /* 120352bc call 0x120363a0 */
  push32(0x120352c1u); f_120363a0();
  /* 120352c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120352c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120352c6 jne 0x120352d0 */
  if (!C.zf) goto L_120352d0;
  /* 120352c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120352cb jmp 0x120353a6 */
  goto L_120353a6;
L_120352d0:;
  /* 120352d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120352d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120352d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 120352e3 jmp 0x120352f4 */
  goto L_120352f4;
L_120352e5:;
  /* 120352e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120352eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120352ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_120352f4:;
  /* 120352f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120352fb jge 0x1203539f */
  if ((C.sf==C.of)) goto L_1203539f;
  /* 12035301 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035308 jle 0x1203533b */
  if ((C.zf||C.sf!=C.of)) goto L_1203533b;
  /* 1203530a push 4 */
  push32((uint32_t)(0x4u));
  /* 1203530c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12035312 mov dl, byte ptr [ecx*2 + 0x12052a78] */
  DL = (r8((uint32_t)(ECX*2 + 0x12052a78)));
  /* 12035319 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1203531f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12035325 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203532a push eax */
  push32((uint32_t)(EAX));
  /* 1203532b call 0x1202cf70 */
  push32(0x12035330u); f_1202cf70();
  /* 12035330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035333 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12035339 jmp 0x1203536e */
  goto L_1203536e;
L_1203533b:;
  /* 1203533b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12035341 mov dl, byte ptr [ecx*2 + 0x12052a78] */
  DL = (r8((uint32_t)(ECX*2 + 0x12052a78)));
  /* 12035348 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1203534e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12035354 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12035359 mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 1203535f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035361 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12035365 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12035368 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1203536e:;
  /* 1203536e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035375 je 0x12035398 */
  if (C.zf) goto L_12035398;
  /* 12035377 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1203537d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12035380 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035383 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1203538a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1203538e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12035394 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12035396 jmp 0x1203539a */
  goto L_1203539a;
L_12035398:;
  /* 12035398 jmp 0x1203539f */
  goto L_1203539f;
L_1203539a:;
  /* 1203539a jmp 0x120352e5 */
  goto L_120352e5;
L_1203539f:;
  /* 1203539f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120353a1 jmp 0x120353a6 */
  goto L_120353a6;
L_120353a3:;
  /* 120353a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120353a6:;
  /* 120353a6 mov esp, ebp */
  ESP = (EBP);
  /* 120353a8 pop ebp */
  EBP = (pop32());
  /* 120353a9 ret  */
  ESPCHK(0x12035120u, _esp0);
  ESP += 4; return;
}

/* FUN_100153b0 @ 0x120353b0 (10 bytes, 5 insns) */
void f_120353b0(void) {
  FTRACE(0x120353b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120353b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120353b1 mov ebp, esp */
  EBP = (ESP);
  /* 120353b3 mov eax, dword ptr [0x12051d88] */
  EAX = (r32((uint32_t)(0x12051d88)));
  /* 120353b8 pop ebp */
  EBP = (pop32());
  /* 120353b9 ret  */
  ESPCHK(0x120353b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100153c0 @ 0x120353c0 (575 bytes, 196 insns) */
void f_120353c0(void) {
  FTRACE(0x120353c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120353c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120353c1 mov ebp, esp */
  EBP = (ESP);
  /* 120353c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120353c5 push 0x1204edb8 */
  push32((uint32_t)(0x1204edb8u));
  /* 120353ca push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 120353cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120353d5 push eax */
  push32((uint32_t)(EAX));
  /* 120353d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120353dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120353e0 push ebx */
  push32((uint32_t)(EBX));
  /* 120353e1 push esi */
  push32((uint32_t)(ESI));
  /* 120353e2 push edi */
  push32((uint32_t)(EDI));
  /* 120353e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120353e6 cmp dword ptr [0x12052a84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120353ed jne 0x1203543e */
  if (!C.zf) goto L_1203543e;
  /* 120353ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120353f2 push eax */
  push32((uint32_t)(EAX));
  /* 120353f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120353f5 push 0x1204e4ec */
  push32((uint32_t)(0x1204e4ecu));
  /* 120353fa push 1 */
  push32((uint32_t)(0x1u));
  /* 120353fc call dword ptr [0x12055330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055330))), 0x12035402u);
  /* 12035402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035404 je 0x12035412 */
  if (C.zf) goto L_12035412;
  /* 12035406 mov dword ptr [0x12052a84], 1 */
  w32((uint32_t)(0x12052a84), (0x1u));
  /* 12035410 jmp 0x1203543e */
  goto L_1203543e;
L_12035412:;
  /* 12035412 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12035415 push ecx */
  push32((uint32_t)(ECX));
  /* 12035416 push 1 */
  push32((uint32_t)(0x1u));
  /* 12035418 push 0x1204e4e8 */
  push32((uint32_t)(0x1204e4e8u));
  /* 1203541d push 1 */
  push32((uint32_t)(0x1u));
  /* 1203541f push 0 */
  push32((uint32_t)(0x0u));
  /* 12035421 call dword ptr [0x12055334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055334))), 0x12035427u);
  /* 12035427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035429 je 0x12035437 */
  if (C.zf) goto L_12035437;
  /* 1203542b mov dword ptr [0x12052a84], 2 */
  w32((uint32_t)(0x12052a84), (0x2u));
  /* 12035435 jmp 0x1203543e */
  goto L_1203543e;
L_12035437:;
  /* 12035437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035439 jmp 0x12035619 */
  goto L_12035619;
L_1203543e:;
  /* 1203543e cmp dword ptr [0x12052a84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052a84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035445 jne 0x12035462 */
  if (!C.zf) goto L_12035462;
  /* 12035447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203544a push edx */
  push32((uint32_t)(EDX));
  /* 1203544b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203544e push eax */
  push32((uint32_t)(EAX));
  /* 1203544f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12035452 push ecx */
  push32((uint32_t)(ECX));
  /* 12035453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035456 push edx */
  push32((uint32_t)(EDX));
  /* 12035457 call dword ptr [0x12055330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055330))), 0x1203545du);
  /* 1203545d jmp 0x12035619 */
  goto L_12035619;
L_12035462:;
  /* 12035462 cmp dword ptr [0x12052a84], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052a84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035469 jne 0x12035617 */
  if (!C.zf) goto L_12035617;
  /* 1203546f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035473 jne 0x1203547d */
  if (!C.zf) goto L_1203547d;
  /* 12035475 mov eax, dword ptr [0x120529f8] */
  EAX = (r32((uint32_t)(0x120529f8)));
  /* 1203547a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1203547d:;
  /* 1203547d push 0 */
  push32((uint32_t)(0x0u));
  /* 1203547f push 0 */
  push32((uint32_t)(0x0u));
  /* 12035481 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035483 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035485 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035488 push ecx */
  push32((uint32_t)(ECX));
  /* 12035489 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203548c push edx */
  push32((uint32_t)(EDX));
  /* 1203548d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12035492 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12035495 push eax */
  push32((uint32_t)(EAX));
  /* 12035496 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1203549cu);
  /* 1203549c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1203549f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120354a3 jne 0x120354ac */
  if (!C.zf) goto L_120354ac;
  /* 120354a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120354a7 jmp 0x12035619 */
  goto L_12035619;
L_120354ac:;
  /* 120354ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120354b3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120354b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120354b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120354bb call 0x1202a100 */
  push32(0x120354c0u); f_1202a100();
  /* 120354c0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 120354c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120354c6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120354c9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120354cc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120354cf push edx */
  push32((uint32_t)(EDX));
  /* 120354d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120354d2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120354d5 push eax */
  push32((uint32_t)(EAX));
  /* 120354d6 call 0x1202acd0 */
  push32(0x120354dbu); f_1202acd0();
  /* 120354db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120354de mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120354e5 jmp 0x120354fe */
  goto L_120354fe;
  /* 120354e7 mov eax, 1 */
  EAX = (0x1u);
  /* 120354ec ret  */
  ESPCHK(0x120353c0u, _esp0);
  ESP += 4; return;
  /* 120354ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120354f0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120354f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120354fe:;
  /* 120354fe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035502 jne 0x1203550b */
  if (!C.zf) goto L_1203550b;
  /* 12035504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035506 jmp 0x12035619 */
  goto L_12035619;
L_1203550b:;
  /* 1203550b push 0 */
  push32((uint32_t)(0x0u));
  /* 1203550d push 0 */
  push32((uint32_t)(0x0u));
  /* 1203550f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12035512 push ecx */
  push32((uint32_t)(ECX));
  /* 12035513 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12035516 push edx */
  push32((uint32_t)(EDX));
  /* 12035517 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203551a push eax */
  push32((uint32_t)(EAX));
  /* 1203551b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203551e push ecx */
  push32((uint32_t)(ECX));
  /* 1203551f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12035524 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12035527 push edx */
  push32((uint32_t)(EDX));
  /* 12035528 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x1203552eu);
  /* 1203552e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035530 jne 0x12035539 */
  if (!C.zf) goto L_12035539;
  /* 12035532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035534 jmp 0x12035619 */
  goto L_12035619;
L_12035539:;
  /* 12035539 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12035540 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12035543 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12035547 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203554a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1203554c call 0x1202a100 */
  push32(0x12035551u); f_1202a100();
  /* 12035551 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12035554 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12035557 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1203555a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1203555d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12035564 jmp 0x1203557d */
  goto L_1203557d;
  /* 12035566 mov eax, 1 */
  EAX = (0x1u);
  /* 1203556b ret  */
  ESPCHK(0x120353c0u, _esp0);
  ESP += 4; return;
  /* 1203556c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1203556f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12035576 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1203557d:;
  /* 1203557d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035581 jne 0x1203558a */
  if (!C.zf) goto L_1203558a;
  /* 12035583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035585 jmp 0x12035619 */
  goto L_12035619;
L_1203558a:;
  /* 1203558a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203558e jne 0x12035599 */
  if (!C.zf) goto L_12035599;
  /* 12035590 mov edx, dword ptr [0x120529e8] */
  EDX = (r32((uint32_t)(0x120529e8)));
  /* 12035596 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12035599:;
  /* 12035599 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203559c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1203559f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 120355a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120355a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120355ab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 120355b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120355b5 push ecx */
  push32((uint32_t)(ECX));
  /* 120355b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120355b9 push edx */
  push32((uint32_t)(EDX));
  /* 120355ba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120355bd push eax */
  push32((uint32_t)(EAX));
  /* 120355be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120355c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120355c2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120355c5 push edx */
  push32((uint32_t)(EDX));
  /* 120355c6 call dword ptr [0x12055334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055334))), 0x120355ccu);
  /* 120355cc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120355cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120355d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120355d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120355d7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 120355dc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120355e2 je 0x120355f8 */
  if (C.zf) goto L_120355f8;
  /* 120355e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120355e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120355ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120355ec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120355f0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120355f6 je 0x120355fc */
  if (C.zf) goto L_120355fc;
L_120355f8:;
  /* 120355f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120355fa jmp 0x12035619 */
  goto L_12035619;
L_120355fc:;
  /* 120355fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120355ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12035601 push eax */
  push32((uint32_t)(EAX));
  /* 12035602 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12035605 push ecx */
  push32((uint32_t)(ECX));
  /* 12035606 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12035609 push edx */
  push32((uint32_t)(EDX));
  /* 1203560a call 0x1202ee50 */
  push32(0x1203560fu); f_1202ee50();
  /* 1203560f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035612 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12035615 jmp 0x12035619 */
  goto L_12035619;
L_12035617:;
  /* 12035617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12035619:;
  /* 12035619 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1203561c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203561f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12035626 pop edi */
  EDI = (pop32());
  /* 12035627 pop esi */
  ESI = (pop32());
  /* 12035628 pop ebx */
  EBX = (pop32());
  /* 12035629 mov esp, ebp */
  ESP = (EBP);
  /* 1203562b pop ebp */
  EBP = (pop32());
  /* 1203562c ret  */
  ESPCHK(0x120353c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015630 @ 0x12035630 (208 bytes, 85 insns) */
void f_12035630(void) {
  FTRACE(0x12035630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035630 push ebp */
  push32((uint32_t)(EBP));
  /* 12035631 mov ebp, esp */
  EBP = (ESP);
  /* 12035633 push edi */
  push32((uint32_t)(EDI));
  /* 12035634 push esi */
  push32((uint32_t)(ESI));
  /* 12035635 push ebx */
  push32((uint32_t)(EBX));
  /* 12035636 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12035639 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1203563c lea eax, [0x120529e0] */
  EAX = ((uint32_t)(0x120529e0));
  /* 12035642 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035646 jne 0x12035683 */
  if (!C.zf) goto L_12035683;
  /* 12035648 mov al, 0xff */
  AL = (0xffu);
  /* 1203564a mov edi, edi */
  EDI = (EDI);
L_1203564c:;
  /* 1203564c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1203564e je 0x1203567e */
  if (C.zf) goto L_1203567e;
  /* 12035650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12035652 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12035653 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12035655 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12035656 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035658 je 0x1203564c */
  if (C.zf) goto L_1203564c;
  /* 1203565a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1203565c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203565e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12035660 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12035663 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12035665 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12035667 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12035669 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1203566b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203566d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1203566f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12035672 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12035674 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12035676 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035678 je 0x1203564c */
  if (C.zf) goto L_1203564c;
  /* 1203567a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1203567c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1203567e:;
  /* 1203567e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12035681 jmp 0x120356fb */
  goto L_120356fb;
L_12035683:;
  /* 12035683 lock inc dword ptr [0x12052b74] */
  x86_unimpl("lock inc @ 0x12035683");
  /* 1203568a cmp dword ptr [0x12052b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035691 jg 0x12035697 */
  if ((!C.zf&&C.sf==C.of)) goto L_12035697;
  /* 12035693 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035695 jmp 0x120356ac */
  goto L_120356ac;
L_12035697:;
  /* 12035697 lock dec dword ptr [0x12052b74] */
  x86_unimpl("lock dec @ 0x12035697");
  /* 1203569e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120356a0 call 0x1202a960 */
  push32(0x120356a5u); f_1202a960();
  /* 120356a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_120356ac:;
  /* 120356ac mov eax, 0xff */
  EAX = (0xffu);
  /* 120356b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120356b3 nop  */
  /* nop */
L_120356b4:;
  /* 120356b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120356b6 je 0x120356df */
  if (C.zf) goto L_120356df;
  /* 120356b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120356ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120356bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120356bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120356be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120356c0 je 0x120356b4 */
  if (C.zf) goto L_120356b4;
  /* 120356c2 push eax */
  push32((uint32_t)(EAX));
  /* 120356c3 push ebx */
  push32((uint32_t)(EBX));
  /* 120356c4 call 0x120367a0 */
  push32(0x120356c9u); f_120367a0();
  /* 120356c9 mov ebx, eax */
  EBX = (EAX);
  /* 120356cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120356ce call 0x120367a0 */
  push32(0x120356d3u); f_120367a0();
  /* 120356d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120356d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120356d8 je 0x120356b4 */
  if (C.zf) goto L_120356b4;
  /* 120356da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120356dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120356df:;
  /* 120356df mov ebx, eax */
  EBX = (EAX);
  /* 120356e1 pop eax */
  EAX = (pop32());
  /* 120356e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120356e4 jne 0x120356ef */
  if (!C.zf) goto L_120356ef;
  /* 120356e6 lock dec dword ptr [0x12052b74] */
  x86_unimpl("lock dec @ 0x120356e6");
  /* 120356ed jmp 0x120356f9 */
  goto L_120356f9;
L_120356ef:;
  /* 120356ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120356f1 call 0x1202aa00 */
  push32(0x120356f6u); f_1202aa00();
  /* 120356f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120356f9:;
  /* 120356f9 mov eax, ebx */
  EAX = (EBX);
L_120356fb:;
  /* 120356fb pop ebx */
  EBX = (pop32());
  /* 120356fc pop esi */
  ESI = (pop32());
  /* 120356fd pop edi */
  EDI = (pop32());
  /* 120356fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120356ff ret  */
  ESPCHK(0x12035630u, _esp0);
  ESP += 4; return;
}

/* FUN_10015700 @ 0x12035700 (257 bytes, 103 insns) */
void f_12035700(void) {
  FTRACE(0x12035700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035700 push ebp */
  push32((uint32_t)(EBP));
  /* 12035701 mov ebp, esp */
  EBP = (ESP);
  /* 12035703 push edi */
  push32((uint32_t)(EDI));
  /* 12035704 push esi */
  push32((uint32_t)(ESI));
  /* 12035705 push ebx */
  push32((uint32_t)(EBX));
  /* 12035706 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12035709 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1203570b je 0x120357fa */
  if (C.zf) goto L_120357fa;
  /* 12035711 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12035714 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12035717 lea eax, [0x120529e0] */
  EAX = ((uint32_t)(0x120529e0));
  /* 1203571d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035721 jne 0x12035771 */
  if (!C.zf) goto L_12035771;
  /* 12035723 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12035725 mov bl, 0x5a */
  BL = (0x5au);
  /* 12035727 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12035729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1203572c:;
  /* 1203572c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1203572e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12035730 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12035732 je 0x12035755 */
  if (C.zf) goto L_12035755;
  /* 12035734 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12035736 je 0x12035755 */
  if (C.zf) goto L_12035755;
  /* 12035738 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12035739 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1203573a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203573c jb 0x12035744 */
  if (C.cf) goto L_12035744;
  /* 1203573e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035740 ja 0x12035744 */
  if ((!C.cf&&!C.zf)) goto L_12035744;
  /* 12035742 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12035744:;
  /* 12035744 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035746 jb 0x1203574e */
  if (C.cf) goto L_1203574e;
  /* 12035748 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203574a ja 0x1203574e */
  if ((!C.cf&&!C.zf)) goto L_1203574e;
  /* 1203574c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1203574e:;
  /* 1203574e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035750 jne 0x1203575f */
  if (!C.zf) goto L_1203575f;
  /* 12035752 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12035753 jne 0x1203572c */
  if (!C.zf) goto L_1203572c;
L_12035755:;
  /* 12035755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035757 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12035759 je 0x120357fa */
  if (C.zf) goto L_120357fa;
L_1203575f:;
  /* 1203575f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12035764 jb 0x120357fa */
  if (C.cf) goto L_120357fa;
  /* 1203576a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1203576c jmp 0x120357fa */
  goto L_120357fa;
L_12035771:;
  /* 12035771 lock inc dword ptr [0x12052b74] */
  x86_unimpl("lock inc @ 0x12035771");
  /* 12035778 cmp dword ptr [0x12052b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203577f jg 0x12035785 */
  if ((!C.zf&&C.sf==C.of)) goto L_12035785;
  /* 12035781 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035783 jmp 0x1203579e */
  goto L_1203579e;
L_12035785:;
  /* 12035785 lock dec dword ptr [0x12052b74] */
  x86_unimpl("lock dec @ 0x12035785");
  /* 1203578c mov ebx, ecx */
  EBX = (ECX);
  /* 1203578e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12035790 call 0x1202a960 */
  push32(0x12035795u); f_1202a960();
  /* 12035795 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1203579c mov ecx, ebx */
  ECX = (EBX);
L_1203579e:;
  /* 1203579e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120357a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120357a2 mov edi, edi */
  EDI = (EDI);
L_120357a4:;
  /* 120357a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120357a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120357a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120357aa je 0x120357cf */
  if (C.zf) goto L_120357cf;
  /* 120357ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120357ae je 0x120357cf */
  if (C.zf) goto L_120357cf;
  /* 120357b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120357b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120357b2 push ecx */
  push32((uint32_t)(ECX));
  /* 120357b3 push eax */
  push32((uint32_t)(EAX));
  /* 120357b4 push ebx */
  push32((uint32_t)(EBX));
  /* 120357b5 call 0x120367a0 */
  push32(0x120357bau); f_120367a0();
  /* 120357ba mov ebx, eax */
  EBX = (EAX);
  /* 120357bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120357bf call 0x120367a0 */
  push32(0x120357c4u); f_120367a0();
  /* 120357c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120357c7 pop ecx */
  ECX = (pop32());
  /* 120357c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120357ca jne 0x120357d5 */
  if (!C.zf) goto L_120357d5;
  /* 120357cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120357cd jne 0x120357a4 */
  if (!C.zf) goto L_120357a4;
L_120357cf:;
  /* 120357cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120357d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120357d3 je 0x120357de */
  if (C.zf) goto L_120357de;
L_120357d5:;
  /* 120357d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 120357da jb 0x120357de */
  if (C.cf) goto L_120357de;
  /* 120357dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_120357de:;
  /* 120357de pop eax */
  EAX = (pop32());
  /* 120357df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120357e1 jne 0x120357ec */
  if (!C.zf) goto L_120357ec;
  /* 120357e3 lock dec dword ptr [0x12052b74] */
  x86_unimpl("lock dec @ 0x120357e3");
  /* 120357ea jmp 0x120357fa */
  goto L_120357fa;
L_120357ec:;
  /* 120357ec mov ebx, ecx */
  EBX = (ECX);
  /* 120357ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120357f0 call 0x1202aa00 */
  push32(0x120357f5u); f_1202aa00();
  /* 120357f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120357f8 mov ecx, ebx */
  ECX = (EBX);
L_120357fa:;
  /* 120357fa mov eax, ecx */
  EAX = (ECX);
  /* 120357fc pop ebx */
  EBX = (pop32());
  /* 120357fd pop esi */
  ESI = (pop32());
  /* 120357fe pop edi */
  EDI = (pop32());
  /* 120357ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12035800 ret  */
  ESPCHK(0x12035700u, _esp0);
  ESP += 4; return;
}

/* FUN_10015810 @ 0x12035810 (255 bytes, 88 insns) */
void f_12035810(void) {
  FTRACE(0x12035810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035810 push ebp */
  push32((uint32_t)(EBP));
  /* 12035811 mov ebp, esp */
  EBP = (ESP);
  /* 12035813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12035816:;
  /* 12035816 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203581d jle 0x12035836 */
  if ((C.zf||C.sf!=C.of)) goto L_12035836;
  /* 1203581f push 8 */
  push32((uint32_t)(0x8u));
  /* 12035821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035824 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035826 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12035828 push ecx */
  push32((uint32_t)(ECX));
  /* 12035829 call 0x1202cf70 */
  push32(0x1203582eu); f_1202cf70();
  /* 1203582e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035831 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12035834 jmp 0x1203584f */
  goto L_1203584f;
L_12035836:;
  /* 12035836 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203583b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1203583d mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 12035843 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035845 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12035849 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1203584c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1203584f:;
  /* 1203584f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035853 je 0x12035860 */
  if (C.zf) goto L_12035860;
  /* 12035855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035858 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203585b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203585e jmp 0x12035816 */
  goto L_12035816;
L_12035860:;
  /* 12035860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035863 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035865 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12035867 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1203586a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203586d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035870 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12035873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12035876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035879 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203587d je 0x12035885 */
  if (C.zf) goto L_12035885;
  /* 1203587f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035883 jne 0x12035898 */
  if (!C.zf) goto L_12035898;
L_12035885:;
  /* 12035885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203588a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1203588c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203588f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035895 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12035898:;
  /* 12035898 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1203589f:;
  /* 1203589f cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120358a6 jle 0x120358bb */
  if ((C.zf||C.sf!=C.of)) goto L_120358bb;
  /* 120358a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 120358aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120358ad push edx */
  push32((uint32_t)(EDX));
  /* 120358ae call 0x1202cf70 */
  push32(0x120358b3u); f_1202cf70();
  /* 120358b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120358b6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120358b9 jmp 0x120358d0 */
  goto L_120358d0;
L_120358bb:;
  /* 120358bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120358be mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 120358c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120358c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120358ca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120358cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120358d0:;
  /* 120358d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120358d4 je 0x120358fb */
  if (C.zf) goto L_120358fb;
  /* 120358d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120358d9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120358dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120358df lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 120358e3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120358e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120358e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120358eb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120358ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120358f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120358f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120358f6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120358f9 jmp 0x1203589f */
  goto L_1203589f;
L_120358fb:;
  /* 120358fb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120358ff jne 0x12035908 */
  if (!C.zf) goto L_12035908;
  /* 12035901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12035904 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12035906 jmp 0x1203590b */
  goto L_1203590b;
L_12035908:;
  /* 12035908 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1203590b:;
  /* 1203590b mov esp, ebp */
  ESP = (EBP);
  /* 1203590d pop ebp */
  EBP = (pop32());
  /* 1203590e ret  */
  ESPCHK(0x12035810u, _esp0);
  ESP += 4; return;
}

/* FUN_10015910 @ 0x12035910 (17 bytes, 8 insns) */
void f_12035910(void) {
  FTRACE(0x12035910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035910 push ebp */
  push32((uint32_t)(EBP));
  /* 12035911 mov ebp, esp */
  EBP = (ESP);
  /* 12035913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035916 push eax */
  push32((uint32_t)(EAX));
  /* 12035917 call 0x12035810 */
  push32(0x1203591cu); f_12035810();
  /* 1203591c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203591f pop ebp */
  EBP = (pop32());
  /* 12035920 ret  */
  ESPCHK(0x12035910u, _esp0);
  ESP += 4; return;
}

/* FUN_10015930 @ 0x12035930 (297 bytes, 106 insns) */
void f_12035930(void) {
  FTRACE(0x12035930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035930 push ebp */
  push32((uint32_t)(EBP));
  /* 12035931 mov ebp, esp */
  EBP = (ESP);
  /* 12035933 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035936 push esi */
  push32((uint32_t)(ESI));
L_12035937:;
  /* 12035937 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203593e jle 0x12035957 */
  if ((C.zf||C.sf!=C.of)) goto L_12035957;
  /* 12035940 push 8 */
  push32((uint32_t)(0x8u));
  /* 12035942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035947 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12035949 push ecx */
  push32((uint32_t)(ECX));
  /* 1203594a call 0x1202cf70 */
  push32(0x1203594fu); f_1202cf70();
  /* 1203594f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035952 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12035955 jmp 0x12035970 */
  goto L_12035970;
L_12035957:;
  /* 12035957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203595c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1203595e mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 12035964 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035966 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1203596a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1203596d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12035970:;
  /* 12035970 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035974 je 0x12035981 */
  if (C.zf) goto L_12035981;
  /* 12035976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035979 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203597c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203597f jmp 0x12035937 */
  goto L_12035937;
L_12035981:;
  /* 12035981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12035988 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1203598b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203598e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035991 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12035994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12035997 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1203599a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203599e je 0x120359a6 */
  if (C.zf) goto L_120359a6;
  /* 120359a0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120359a4 jne 0x120359b9 */
  if (!C.zf) goto L_120359b9;
L_120359a6:;
  /* 120359a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120359a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120359ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120359ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120359b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120359b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120359b6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120359b9:;
  /* 120359b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120359c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120359c7:;
  /* 120359c7 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120359ce jle 0x120359e3 */
  if ((C.zf||C.sf!=C.of)) goto L_120359e3;
  /* 120359d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 120359d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120359d5 push edx */
  push32((uint32_t)(EDX));
  /* 120359d6 call 0x1202cf70 */
  push32(0x120359dbu); f_1202cf70();
  /* 120359db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120359de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120359e1 jmp 0x120359f8 */
  goto L_120359f8;
L_120359e3:;
  /* 120359e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120359e6 mov ecx, dword ptr [0x12050c98] */
  ECX = (r32((uint32_t)(0x12050c98)));
  /* 120359ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120359ee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120359f2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120359f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_120359f8:;
  /* 120359f8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120359fc je 0x12035a39 */
  if (C.zf) goto L_12035a39;
  /* 120359fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12035a00 push 0xa */
  push32((uint32_t)(0xau));
  /* 12035a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12035a05 push eax */
  push32((uint32_t)(EAX));
  /* 12035a06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035a09 push ecx */
  push32((uint32_t)(ECX));
  /* 12035a0a call 0x120368d0 */
  push32(0x12035a0fu); f_120368d0();
  /* 12035a0f mov ecx, eax */
  ECX = (EAX);
  /* 12035a11 mov esi, edx */
  ESI = (EDX);
  /* 12035a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12035a16 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035a19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12035a1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a1c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035a21 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12035a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035a27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035a29 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12035a2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12035a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035a31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12035a37 jmp 0x120359c7 */
  goto L_120359c7;
L_12035a39:;
  /* 12035a39 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035a3d jne 0x12035a4e */
  if (!C.zf) goto L_12035a4e;
  /* 12035a3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035a42 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12035a44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12035a47 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12035a4c jmp 0x12035a54 */
  goto L_12035a54;
L_12035a4e:;
  /* 12035a4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035a51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12035a54:;
  /* 12035a54 pop esi */
  ESI = (pop32());
  /* 12035a55 mov esp, ebp */
  ESP = (EBP);
  /* 12035a57 pop ebp */
  EBP = (pop32());
  /* 12035a58 ret  */
  ESPCHK(0x12035930u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a60 @ 0x12035a60 (61 bytes, 18 insns) */
void f_12035a60(void) {
  FTRACE(0x12035a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12035a61 mov ebp, esp */
  EBP = (ESP);
  /* 12035a63 cmp dword ptr [0x12052b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035a6a jne 0x12035a9b */
  if (!C.zf) goto L_12035a9b;
  /* 12035a6c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035a6e call 0x1202a960 */
  push32(0x12035a73u); f_1202a960();
  /* 12035a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a76 cmp dword ptr [0x12052b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035a7d jne 0x12035a91 */
  if (!C.zf) goto L_12035a91;
  /* 12035a7f call 0x12035ac0 */
  push32(0x12035a84u); f_12035ac0();
  /* 12035a84 mov eax, dword ptr [0x12052b40] */
  EAX = (r32((uint32_t)(0x12052b40)));
  /* 12035a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035a8c mov dword ptr [0x12052b40], eax */
  w32((uint32_t)(0x12052b40), (EAX));
L_12035a91:;
  /* 12035a91 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035a93 call 0x1202aa00 */
  push32(0x12035a98u); f_1202aa00();
  /* 12035a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12035a9b:;
  /* 12035a9b pop ebp */
  EBP = (pop32());
  /* 12035a9c ret  */
  ESPCHK(0x12035a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015aa0 @ 0x12035aa0 (30 bytes, 11 insns) */
void f_12035aa0(void) {
  FTRACE(0x12035aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12035aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12035aa3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035aa5 call 0x1202a960 */
  push32(0x12035aaau); f_1202a960();
  /* 12035aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035aad call 0x12035ac0 */
  push32(0x12035ab2u); f_12035ac0();
  /* 12035ab2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035ab4 call 0x1202aa00 */
  push32(0x12035ab9u); f_1202aa00();
  /* 12035ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035abc pop ebp */
  EBP = (pop32());
  /* 12035abd ret  */
  ESPCHK(0x12035aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ac0 @ 0x12035ac0 (939 bytes, 266 insns) */
void f_12035ac0(void) {
  FTRACE(0x12035ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12035ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12035ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035ac6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12035acd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12035acf call 0x1202a960 */
  push32(0x12035ad4u); f_1202a960();
  /* 12035ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035ad7 mov dword ptr [0x12052a88], 0 */
  w32((uint32_t)(0x12052a88), (0x0u));
  /* 12035ae1 mov dword ptr [0x12051e38], 0xffffffff */
  w32((uint32_t)(0x12051e38), (0xffffffffu));
  /* 12035aeb mov eax, dword ptr [0x12051e38] */
  EAX = (r32((uint32_t)(0x12051e38)));
  /* 12035af0 mov dword ptr [0x12051e28], eax */
  w32((uint32_t)(0x12051e28), (EAX));
  /* 12035af5 push 0x1204ee18 */
  push32((uint32_t)(0x1204ee18u));
  /* 12035afa call 0x12036940 */
  push32(0x12035affu); f_12036940();
  /* 12035aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035b02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12035b05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035b09 jne 0x12035c43 */
  if (!C.zf) goto L_12035c43;
  /* 12035b0f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12035b11 call 0x1202aa00 */
  push32(0x12035b16u); f_1202aa00();
  /* 12035b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035b19 push 0x12052a90 */
  push32((uint32_t)(0x12052a90u));
  /* 12035b1e call dword ptr [0x120552f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f4))), 0x12035b24u);
  /* 12035b24 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035b27 je 0x12035c3e */
  if (C.zf) goto L_12035c3e;
  /* 12035b2d mov dword ptr [0x12052a88], 1 */
  w32((uint32_t)(0x12052a88), (0x1u));
  /* 12035b37 mov ecx, dword ptr [0x12052a90] */
  ECX = (r32((uint32_t)(0x12052a90)));
  /* 12035b3d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035b40 mov dword ptr [0x12051d90], ecx */
  w32((uint32_t)(0x12051d90), (ECX));
  /* 12035b46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035b48 mov dx, word ptr [0x12052ad6] */
  DX = (r16((uint32_t)(0x12052ad6)));
  /* 12035b4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12035b51 je 0x12035b69 */
  if (C.zf) goto L_12035b69;
  /* 12035b53 mov eax, dword ptr [0x12052ae4] */
  EAX = (r32((uint32_t)(0x12052ae4)));
  /* 12035b58 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035b5b mov ecx, dword ptr [0x12051d90] */
  ECX = (r32((uint32_t)(0x12051d90)));
  /* 12035b61 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035b63 mov dword ptr [0x12051d90], ecx */
  w32((uint32_t)(0x12051d90), (ECX));
L_12035b69:;
  /* 12035b69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035b6b mov dx, word ptr [0x12052b2a] */
  DX = (r16((uint32_t)(0x12052b2a)));
  /* 12035b72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12035b74 je 0x12035b9e */
  if (C.zf) goto L_12035b9e;
  /* 12035b76 cmp dword ptr [0x12052b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035b7d je 0x12035b9e */
  if (C.zf) goto L_12035b9e;
  /* 12035b7f mov dword ptr [0x12051d94], 1 */
  w32((uint32_t)(0x12051d94), (0x1u));
  /* 12035b89 mov eax, dword ptr [0x12052b38] */
  EAX = (r32((uint32_t)(0x12052b38)));
  /* 12035b8e sub eax, dword ptr [0x12052ae4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052ae4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12035b94 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035b97 mov dword ptr [0x12051d98], eax */
  w32((uint32_t)(0x12051d98), (EAX));
  /* 12035b9c jmp 0x12035bb2 */
  goto L_12035bb2;
L_12035b9e:;
  /* 12035b9e mov dword ptr [0x12051d94], 0 */
  w32((uint32_t)(0x12051d94), (0x0u));
  /* 12035ba8 mov dword ptr [0x12051d98], 0 */
  w32((uint32_t)(0x12051d98), (0x0u));
L_12035bb2:;
  /* 12035bb2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12035bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12035bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035bb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12035bba mov edx, dword ptr [0x12051e1c] */
  EDX = (r32((uint32_t)(0x12051e1c)));
  /* 12035bc0 push edx */
  push32((uint32_t)(EDX));
  /* 12035bc1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12035bc3 push 0x12052a94 */
  push32((uint32_t)(0x12052a94u));
  /* 12035bc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12035bcd mov eax, dword ptr [0x120529f8] */
  EAX = (r32((uint32_t)(0x120529f8)));
  /* 12035bd2 push eax */
  push32((uint32_t)(EAX));
  /* 12035bd3 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x12035bd9u);
  /* 12035bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035bdb je 0x12035bef */
  if (C.zf) goto L_12035bef;
  /* 12035bdd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035be1 jne 0x12035bef */
  if (!C.zf) goto L_12035bef;
  /* 12035be3 mov ecx, dword ptr [0x12051e1c] */
  ECX = (r32((uint32_t)(0x12051e1c)));
  /* 12035be9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12035bed jmp 0x12035bf8 */
  goto L_12035bf8;
L_12035bef:;
  /* 12035bef mov edx, dword ptr [0x12051e1c] */
  EDX = (r32((uint32_t)(0x12051e1c)));
  /* 12035bf5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12035bf8:;
  /* 12035bf8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12035bfb push eax */
  push32((uint32_t)(EAX));
  /* 12035bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12035bfe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12035c00 mov ecx, dword ptr [0x12051e20] */
  ECX = (r32((uint32_t)(0x12051e20)));
  /* 12035c06 push ecx */
  push32((uint32_t)(ECX));
  /* 12035c07 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12035c09 push 0x12052ae8 */
  push32((uint32_t)(0x12052ae8u));
  /* 12035c0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12035c13 mov edx, dword ptr [0x120529f8] */
  EDX = (r32((uint32_t)(0x120529f8)));
  /* 12035c19 push edx */
  push32((uint32_t)(EDX));
  /* 12035c1a call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x12035c20u);
  /* 12035c20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035c22 je 0x12035c35 */
  if (C.zf) goto L_12035c35;
  /* 12035c24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035c28 jne 0x12035c35 */
  if (!C.zf) goto L_12035c35;
  /* 12035c2a mov eax, dword ptr [0x12051e20] */
  EAX = (r32((uint32_t)(0x12051e20)));
  /* 12035c2f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12035c33 jmp 0x12035c3e */
  goto L_12035c3e;
L_12035c35:;
  /* 12035c35 mov ecx, dword ptr [0x12051e20] */
  ECX = (r32((uint32_t)(0x12051e20)));
  /* 12035c3b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12035c3e:;
  /* 12035c3e jmp 0x12035e67 */
  goto L_12035e67;
L_12035c43:;
  /* 12035c43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035c4b je 0x12035c6d */
  if (C.zf) goto L_12035c6d;
  /* 12035c4d cmp dword ptr [0x12052b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035c54 je 0x12035c7c */
  if (C.zf) goto L_12035c7c;
  /* 12035c56 mov ecx, dword ptr [0x12052b3c] */
  ECX = (r32((uint32_t)(0x12052b3c)));
  /* 12035c5c push ecx */
  push32((uint32_t)(ECX));
  /* 12035c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035c60 push edx */
  push32((uint32_t)(EDX));
  /* 12035c61 call 0x12032bf0 */
  push32(0x12035c66u); f_12032bf0();
  /* 12035c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12035c6b jne 0x12035c7c */
  if (!C.zf) goto L_12035c7c;
L_12035c6d:;
  /* 12035c6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12035c6f call 0x1202aa00 */
  push32(0x12035c74u); f_1202aa00();
  /* 12035c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035c77 jmp 0x12035e67 */
  goto L_12035e67;
L_12035c7c:;
  /* 12035c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12035c7e mov eax, dword ptr [0x12052b3c] */
  EAX = (r32((uint32_t)(0x12052b3c)));
  /* 12035c83 push eax */
  push32((uint32_t)(EAX));
  /* 12035c84 call 0x120279f0 */
  push32(0x12035c89u); f_120279f0();
  /* 12035c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035c8c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12035c91 push 0x1204ee10 */
  push32((uint32_t)(0x1204ee10u));
  /* 12035c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 12035c98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035c9b push ecx */
  push32((uint32_t)(ECX));
  /* 12035c9c call 0x12029d90 */
  push32(0x12035ca1u); f_12029d90();
  /* 12035ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035ca4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035ca7 push eax */
  push32((uint32_t)(EAX));
  /* 12035ca8 call 0x12026f60 */
  push32(0x12035cadu); f_12026f60();
  /* 12035cad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035cb0 mov dword ptr [0x12052b3c], eax */
  w32((uint32_t)(0x12052b3c), (EAX));
  /* 12035cb5 cmp dword ptr [0x12052b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035cbc jne 0x12035ccd */
  if (!C.zf) goto L_12035ccd;
  /* 12035cbe push 0xc */
  push32((uint32_t)(0xcu));
  /* 12035cc0 call 0x1202aa00 */
  push32(0x12035cc5u); f_1202aa00();
  /* 12035cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035cc8 jmp 0x12035e67 */
  goto L_12035e67;
L_12035ccd:;
  /* 12035ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035cd0 push edx */
  push32((uint32_t)(EDX));
  /* 12035cd1 mov eax, dword ptr [0x12052b3c] */
  EAX = (r32((uint32_t)(0x12052b3c)));
  /* 12035cd6 push eax */
  push32((uint32_t)(EAX));
  /* 12035cd7 call 0x12029f10 */
  push32(0x12035cdcu); f_12029f10();
  /* 12035cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035cdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12035ce1 call 0x1202aa00 */
  push32(0x12035ce6u); f_1202aa00();
  /* 12035ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035ce9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12035ceb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035cee push ecx */
  push32((uint32_t)(ECX));
  /* 12035cef mov edx, dword ptr [0x12051e1c] */
  EDX = (r32((uint32_t)(0x12051e1c)));
  /* 12035cf5 push edx */
  push32((uint32_t)(EDX));
  /* 12035cf6 call 0x1202a780 */
  push32(0x12035cfbu); f_1202a780();
  /* 12035cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035cfe mov eax, dword ptr [0x12051e1c] */
  EAX = (r32((uint32_t)(0x12051e1c)));
  /* 12035d03 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12035d07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d0a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d13 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035d16 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035d19 jne 0x12035d2d */
  if (!C.zf) goto L_12035d2d;
  /* 12035d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12035d1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12035d24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d2a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12035d2d:;
  /* 12035d2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d30 push eax */
  push32((uint32_t)(EAX));
  /* 12035d31 call 0x12035810 */
  push32(0x12035d36u); f_12035810();
  /* 12035d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d39 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035d3f mov dword ptr [0x12051d90], eax */
  w32((uint32_t)(0x12051d90), (EAX));
L_12035d44:;
  /* 12035d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12035d4a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035d4d je 0x12035d65 */
  if (C.zf) goto L_12035d65;
  /* 12035d4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d52 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12035d55 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035d58 jl 0x12035d70 */
  if ((C.sf!=C.of)) goto L_12035d70;
  /* 12035d5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d5d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035d60 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035d63 jg 0x12035d70 */
  if ((!C.zf&&C.sf==C.of)) goto L_12035d70;
L_12035d65:;
  /* 12035d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035d6e jmp 0x12035d44 */
  goto L_12035d44;
L_12035d70:;
  /* 12035d70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d73 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035d76 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035d79 jne 0x12035e15 */
  if (!C.zf) goto L_12035e15;
  /* 12035d7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d85 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035d88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035d8b push edx */
  push32((uint32_t)(EDX));
  /* 12035d8c call 0x12035810 */
  push32(0x12035d91u); f_12035810();
  /* 12035d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d94 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12035d97 mov ecx, dword ptr [0x12051d90] */
  ECX = (r32((uint32_t)(0x12051d90)));
  /* 12035d9d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035d9f mov dword ptr [0x12051d90], ecx */
  w32((uint32_t)(0x12051d90), (ECX));
L_12035da5:;
  /* 12035da5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035da8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035dab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035dae jl 0x12035dc6 */
  if ((C.sf!=C.of)) goto L_12035dc6;
  /* 12035db0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035db3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12035db6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035db9 jg 0x12035dc6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12035dc6;
  /* 12035dbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035dbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035dc1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12035dc4 jmp 0x12035da5 */
  goto L_12035da5;
L_12035dc6:;
  /* 12035dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035dc9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12035dcc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035dcf jne 0x12035e15 */
  if (!C.zf) goto L_12035e15;
  /* 12035dd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035dd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035dd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12035dda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12035dde call 0x12035810 */
  push32(0x12035de3u); f_12035810();
  /* 12035de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035de6 mov edx, dword ptr [0x12051d90] */
  EDX = (r32((uint32_t)(0x12051d90)));
  /* 12035dec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035dee mov dword ptr [0x12051d90], edx */
  w32((uint32_t)(0x12051d90), (EDX));
L_12035df4:;
  /* 12035df4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035df7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12035dfa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035dfd jl 0x12035e15 */
  if ((C.sf!=C.of)) goto L_12035e15;
  /* 12035dff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035e02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12035e05 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035e08 jg 0x12035e15 */
  if ((!C.zf&&C.sf==C.of)) goto L_12035e15;
  /* 12035e0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035e0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12035e10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12035e13 jmp 0x12035df4 */
  goto L_12035df4;
L_12035e15:;
  /* 12035e15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035e19 je 0x12035e29 */
  if (C.zf) goto L_12035e29;
  /* 12035e1b mov edx, dword ptr [0x12051d90] */
  EDX = (r32((uint32_t)(0x12051d90)));
  /* 12035e21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12035e23 mov dword ptr [0x12051d90], edx */
  w32((uint32_t)(0x12051d90), (EDX));
L_12035e29:;
  /* 12035e29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035e2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12035e2f mov dword ptr [0x12051d94], ecx */
  w32((uint32_t)(0x12051d94), (ECX));
  /* 12035e35 cmp dword ptr [0x12051d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12051d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035e3c je 0x12035e5e */
  if (C.zf) goto L_12035e5e;
  /* 12035e3e push 3 */
  push32((uint32_t)(0x3u));
  /* 12035e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12035e43 push edx */
  push32((uint32_t)(EDX));
  /* 12035e44 mov eax, dword ptr [0x12051e20] */
  EAX = (r32((uint32_t)(0x12051e20)));
  /* 12035e49 push eax */
  push32((uint32_t)(EAX));
  /* 12035e4a call 0x1202a780 */
  push32(0x12035e4fu); f_1202a780();
  /* 12035e4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035e52 mov ecx, dword ptr [0x12051e20] */
  ECX = (r32((uint32_t)(0x12051e20)));
  /* 12035e58 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12035e5c jmp 0x12035e67 */
  goto L_12035e67;
L_12035e5e:;
  /* 12035e5e mov edx, dword ptr [0x12051e20] */
  EDX = (r32((uint32_t)(0x12051e20)));
  /* 12035e64 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12035e67:;
  /* 12035e67 mov esp, ebp */
  ESP = (EBP);
  /* 12035e69 pop ebp */
  EBP = (pop32());
  /* 12035e6a ret  */
  ESPCHK(0x12035ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e70 @ 0x12035e70 (46 bytes, 18 insns) */
void f_12035e70(void) {
  FTRACE(0x12035e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12035e71 mov ebp, esp */
  EBP = (ESP);
  /* 12035e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12035e74 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035e76 call 0x1202a960 */
  push32(0x12035e7bu); f_1202a960();
  /* 12035e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035e81 push eax */
  push32((uint32_t)(EAX));
  /* 12035e82 call 0x12035ea0 */
  push32(0x12035e87u); f_12035ea0();
  /* 12035e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12035e8d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12035e8f call 0x1202aa00 */
  push32(0x12035e94u); f_1202aa00();
  /* 12035e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12035e9a mov esp, ebp */
  ESP = (EBP);
  /* 12035e9c pop ebp */
  EBP = (pop32());
  /* 12035e9d ret  */
  ESPCHK(0x12035e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ea0 @ 0x12035ea0 (762 bytes, 246 insns) */
void f_12035ea0(void) {
  FTRACE(0x12035ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12035ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12035ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12035ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12035ea4 cmp dword ptr [0x12051d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12051d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035eab jne 0x12035eb4 */
  if (!C.zf) goto L_12035eb4;
  /* 12035ead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035eaf jmp 0x12036196 */
  goto L_12036196;
L_12035eb4:;
  /* 12035eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035eb7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12035eba cmp ecx, dword ptr [0x12051e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12051e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035ec0 jne 0x12035ed4 */
  if (!C.zf) goto L_12035ed4;
  /* 12035ec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035ec5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12035ec8 cmp eax, dword ptr [0x12051e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12051e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035ece je 0x1203609b */
  if (C.zf) goto L_1203609b;
L_12035ed4:;
  /* 12035ed4 cmp dword ptr [0x12052a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12035edb je 0x12036055 */
  if (C.zf) goto L_12036055;
  /* 12035ee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035ee3 mov cx, word ptr [0x12052b28] */
  CX = (r16((uint32_t)(0x12052b28)));
  /* 12035eea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12035eec jne 0x12035f49 */
  if (!C.zf) goto L_12035f49;
  /* 12035eee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035ef0 mov dx, word ptr [0x12052b36] */
  DX = (r16((uint32_t)(0x12052b36)));
  /* 12035ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12035ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035efa mov ax, word ptr [0x12052b34] */
  AX = (r16((uint32_t)(0x12052b34)));
  /* 12035f00 push eax */
  push32((uint32_t)(EAX));
  /* 12035f01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035f03 mov cx, word ptr [0x12052b32] */
  CX = (r16((uint32_t)(0x12052b32)));
  /* 12035f0a push ecx */
  push32((uint32_t)(ECX));
  /* 12035f0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035f0d mov dx, word ptr [0x12052b30] */
  DX = (r16((uint32_t)(0x12052b30)));
  /* 12035f14 push edx */
  push32((uint32_t)(EDX));
  /* 12035f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035f19 mov ax, word ptr [0x12052b2c] */
  AX = (r16((uint32_t)(0x12052b2c)));
  /* 12035f1f push eax */
  push32((uint32_t)(EAX));
  /* 12035f20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035f22 mov cx, word ptr [0x12052b2e] */
  CX = (r16((uint32_t)(0x12052b2e)));
  /* 12035f29 push ecx */
  push32((uint32_t)(ECX));
  /* 12035f2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035f2c mov dx, word ptr [0x12052b2a] */
  DX = (r16((uint32_t)(0x12052b2a)));
  /* 12035f33 push edx */
  push32((uint32_t)(EDX));
  /* 12035f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035f37 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12035f3a push ecx */
  push32((uint32_t)(ECX));
  /* 12035f3b push 1 */
  push32((uint32_t)(0x1u));
  /* 12035f3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12035f3f call 0x120361a0 */
  push32(0x12035f44u); f_120361a0();
  /* 12035f44 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12035f47 jmp 0x12035f9a */
  goto L_12035f9a;
L_12035f49:;
  /* 12035f49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035f4b mov dx, word ptr [0x12052b36] */
  DX = (r16((uint32_t)(0x12052b36)));
  /* 12035f52 push edx */
  push32((uint32_t)(EDX));
  /* 12035f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035f55 mov ax, word ptr [0x12052b34] */
  AX = (r16((uint32_t)(0x12052b34)));
  /* 12035f5b push eax */
  push32((uint32_t)(EAX));
  /* 12035f5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035f5e mov cx, word ptr [0x12052b32] */
  CX = (r16((uint32_t)(0x12052b32)));
  /* 12035f65 push ecx */
  push32((uint32_t)(ECX));
  /* 12035f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035f68 mov dx, word ptr [0x12052b30] */
  DX = (r16((uint32_t)(0x12052b30)));
  /* 12035f6f push edx */
  push32((uint32_t)(EDX));
  /* 12035f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035f72 mov ax, word ptr [0x12052b2e] */
  AX = (r16((uint32_t)(0x12052b2e)));
  /* 12035f78 push eax */
  push32((uint32_t)(EAX));
  /* 12035f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12035f7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035f7f mov cx, word ptr [0x12052b2a] */
  CX = (r16((uint32_t)(0x12052b2a)));
  /* 12035f86 push ecx */
  push32((uint32_t)(ECX));
  /* 12035f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035f8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12035f8d push eax */
  push32((uint32_t)(EAX));
  /* 12035f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12035f90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12035f92 call 0x120361a0 */
  push32(0x12035f97u); f_120361a0();
  /* 12035f97 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12035f9a:;
  /* 12035f9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035f9c mov cx, word ptr [0x12052ad4] */
  CX = (r16((uint32_t)(0x12052ad4)));
  /* 12035fa3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12035fa5 jne 0x12036002 */
  if (!C.zf) goto L_12036002;
  /* 12035fa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035fa9 mov dx, word ptr [0x12052ae2] */
  DX = (r16((uint32_t)(0x12052ae2)));
  /* 12035fb0 push edx */
  push32((uint32_t)(EDX));
  /* 12035fb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035fb3 mov ax, word ptr [0x12052ae0] */
  AX = (r16((uint32_t)(0x12052ae0)));
  /* 12035fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12035fba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035fbc mov cx, word ptr [0x12052ade] */
  CX = (r16((uint32_t)(0x12052ade)));
  /* 12035fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12035fc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035fc6 mov dx, word ptr [0x12052adc] */
  DX = (r16((uint32_t)(0x12052adc)));
  /* 12035fcd push edx */
  push32((uint32_t)(EDX));
  /* 12035fce push 0 */
  push32((uint32_t)(0x0u));
  /* 12035fd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12035fd2 mov ax, word ptr [0x12052ad8] */
  AX = (r16((uint32_t)(0x12052ad8)));
  /* 12035fd8 push eax */
  push32((uint32_t)(EAX));
  /* 12035fd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12035fdb mov cx, word ptr [0x12052ada] */
  CX = (r16((uint32_t)(0x12052ada)));
  /* 12035fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12035fe3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12035fe5 mov dx, word ptr [0x12052ad6] */
  DX = (r16((uint32_t)(0x12052ad6)));
  /* 12035fec push edx */
  push32((uint32_t)(EDX));
  /* 12035fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12035ff0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12035ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12035ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12035ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12035ff8 call 0x120361a0 */
  push32(0x12035ffdu); f_120361a0();
  /* 12035ffd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036000 jmp 0x12036053 */
  goto L_12036053;
L_12036002:;
  /* 12036002 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036004 mov dx, word ptr [0x12052ae2] */
  DX = (r16((uint32_t)(0x12052ae2)));
  /* 1203600b push edx */
  push32((uint32_t)(EDX));
  /* 1203600c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203600e mov ax, word ptr [0x12052ae0] */
  AX = (r16((uint32_t)(0x12052ae0)));
  /* 12036014 push eax */
  push32((uint32_t)(EAX));
  /* 12036015 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036017 mov cx, word ptr [0x12052ade] */
  CX = (r16((uint32_t)(0x12052ade)));
  /* 1203601e push ecx */
  push32((uint32_t)(ECX));
  /* 1203601f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036021 mov dx, word ptr [0x12052adc] */
  DX = (r16((uint32_t)(0x12052adc)));
  /* 12036028 push edx */
  push32((uint32_t)(EDX));
  /* 12036029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203602b mov ax, word ptr [0x12052ada] */
  AX = (r16((uint32_t)(0x12052ada)));
  /* 12036031 push eax */
  push32((uint32_t)(EAX));
  /* 12036032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036036 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036038 mov cx, word ptr [0x12052ad6] */
  CX = (r16((uint32_t)(0x12052ad6)));
  /* 1203603f push ecx */
  push32((uint32_t)(ECX));
  /* 12036040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036043 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12036046 push eax */
  push32((uint32_t)(EAX));
  /* 12036047 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203604b call 0x120361a0 */
  push32(0x12036050u); f_120361a0();
  /* 12036050 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12036053:;
  /* 12036053 jmp 0x1203609b */
  goto L_1203609b;
L_12036055:;
  /* 12036055 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036057 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203605b push 2 */
  push32((uint32_t)(0x2u));
  /* 1203605d push 0 */
  push32((uint32_t)(0x0u));
  /* 1203605f push 0 */
  push32((uint32_t)(0x0u));
  /* 12036061 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036063 push 4 */
  push32((uint32_t)(0x4u));
  /* 12036065 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036068 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1203606b push edx */
  push32((uint32_t)(EDX));
  /* 1203606c push 1 */
  push32((uint32_t)(0x1u));
  /* 1203606e push 1 */
  push32((uint32_t)(0x1u));
  /* 12036070 call 0x120361a0 */
  push32(0x12036075u); f_120361a0();
  /* 12036075 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203607a push 0 */
  push32((uint32_t)(0x0u));
  /* 1203607c push 0 */
  push32((uint32_t)(0x0u));
  /* 1203607e push 2 */
  push32((uint32_t)(0x2u));
  /* 12036080 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036082 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036084 push 5 */
  push32((uint32_t)(0x5u));
  /* 12036086 push 0xa */
  push32((uint32_t)(0xau));
  /* 12036088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203608b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1203608e push ecx */
  push32((uint32_t)(ECX));
  /* 1203608f push 1 */
  push32((uint32_t)(0x1u));
  /* 12036091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036093 call 0x120361a0 */
  push32(0x12036098u); f_120361a0();
  /* 12036098 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1203609b:;
  /* 1203609b mov edx, dword ptr [0x12051e2c] */
  EDX = (r32((uint32_t)(0x12051e2c)));
  /* 120360a1 cmp edx, dword ptr [0x12051e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12051e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120360a7 jge 0x120360f4 */
  if ((C.sf==C.of)) goto L_120360f4;
  /* 120360a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120360ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120360af cmp ecx, dword ptr [0x12051e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12051e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120360b5 jl 0x120360c5 */
  if ((C.sf!=C.of)) goto L_120360c5;
  /* 120360b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120360ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120360bd cmp eax, dword ptr [0x12051e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12051e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120360c3 jle 0x120360cc */
  if ((C.zf||C.sf!=C.of)) goto L_120360cc;
L_120360c5:;
  /* 120360c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120360c7 jmp 0x12036196 */
  goto L_12036196;
L_120360cc:;
  /* 120360cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120360cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120360d2 cmp edx, dword ptr [0x12051e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12051e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120360d8 jle 0x120360f2 */
  if ((C.zf||C.sf!=C.of)) goto L_120360f2;
  /* 120360da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120360dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120360e0 cmp ecx, dword ptr [0x12051e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12051e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120360e6 jge 0x120360f2 */
  if ((C.sf==C.of)) goto L_120360f2;
  /* 120360e8 mov eax, 1 */
  EAX = (0x1u);
  /* 120360ed jmp 0x12036196 */
  goto L_12036196;
L_120360f2:;
  /* 120360f2 jmp 0x12036137 */
  goto L_12036137;
L_120360f4:;
  /* 120360f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120360f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120360fa cmp eax, dword ptr [0x12051e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12051e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036100 jl 0x12036110 */
  if ((C.sf!=C.of)) goto L_12036110;
  /* 12036102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036105 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12036108 cmp edx, dword ptr [0x12051e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12051e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203610e jle 0x12036117 */
  if ((C.zf||C.sf!=C.of)) goto L_12036117;
L_12036110:;
  /* 12036110 mov eax, 1 */
  EAX = (0x1u);
  /* 12036115 jmp 0x12036196 */
  goto L_12036196;
L_12036117:;
  /* 12036117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203611a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1203611d cmp ecx, dword ptr [0x12051e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12051e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036123 jle 0x12036137 */
  if ((C.zf||C.sf!=C.of)) goto L_12036137;
  /* 12036125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036128 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1203612b cmp eax, dword ptr [0x12051e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12051e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036131 jge 0x12036137 */
  if ((C.sf==C.of)) goto L_12036137;
  /* 12036133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036135 jmp 0x12036196 */
  goto L_12036196;
L_12036137:;
  /* 12036137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203613a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1203613d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036143 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12036145 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203614a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1203614d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036153 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036155 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203615b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1203615e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036161 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12036164 cmp edx, dword ptr [0x12051e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12051e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203616a jne 0x12036182 */
  if (!C.zf) goto L_12036182;
  /* 1203616c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203616f cmp eax, dword ptr [0x12051e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12051e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036175 jl 0x1203617e */
  if ((C.sf!=C.of)) goto L_1203617e;
  /* 12036177 mov eax, 1 */
  EAX = (0x1u);
  /* 1203617c jmp 0x12036196 */
  goto L_12036196;
L_1203617e:;
  /* 1203617e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036180 jmp 0x12036196 */
  goto L_12036196;
L_12036182:;
  /* 12036182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036185 cmp ecx, dword ptr [0x12051e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12051e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203618b jge 0x12036194 */
  if ((C.sf==C.of)) goto L_12036194;
  /* 1203618d mov eax, 1 */
  EAX = (0x1u);
  /* 12036192 jmp 0x12036196 */
  goto L_12036196;
L_12036194:;
  /* 12036194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12036196:;
  /* 12036196 mov esp, ebp */
  ESP = (EBP);
  /* 12036198 pop ebp */
  EBP = (pop32());
  /* 12036199 ret  */
  ESPCHK(0x12035ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161a0 @ 0x120361a0 (504 bytes, 145 insns) */
void f_120361a0(void) {
  FTRACE(0x120361a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120361a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120361a1 mov ebp, esp */
  EBP = (ESP);
  /* 120361a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120361a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120361aa jne 0x1203627c */
  if (!C.zf) goto L_1203627c;
  /* 120361b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120361b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120361b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120361b8 jne 0x120361c9 */
  if (!C.zf) goto L_120361c9;
  /* 120361ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120361bd mov edx, dword ptr [ecx*4 + 0x12051e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12051e4c)));
  /* 120361c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120361c7 jmp 0x120361d6 */
  goto L_120361d6;
L_120361c9:;
  /* 120361c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120361cc mov ecx, dword ptr [eax*4 + 0x12051e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12051e80)));
  /* 120361d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120361d6:;
  /* 120361d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120361d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120361dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120361df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120361e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120361e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120361eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120361ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120361f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120361f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120361f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 120361f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 120361fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120361fe mov ecx, 7 */
  ECX = (0x7u);
  /* 12036203 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12036205 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12036208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203620b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203620e jge 0x12036229 */
  if ((C.sf==C.of)) goto L_12036229;
  /* 12036210 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12036213 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036216 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036219 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203621c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1203621f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036222 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12036227 jmp 0x1203623d */
  goto L_1203623d;
L_12036229:;
  /* 12036229 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1203622c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203622f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036232 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036235 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036238 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203623a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1203623d:;
  /* 1203623d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036241 jne 0x1203627a */
  if (!C.zf) goto L_1203627a;
  /* 12036243 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036246 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12036249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1203624b jne 0x1203625c */
  if (!C.zf) goto L_1203625c;
  /* 1203624d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036250 mov eax, dword ptr [edx*4 + 0x12051e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12051e50)));
  /* 12036257 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1203625a jmp 0x12036269 */
  goto L_12036269;
L_1203625c:;
  /* 1203625c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203625f mov edx, dword ptr [ecx*4 + 0x12051e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12051e84)));
  /* 12036266 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12036269:;
  /* 12036269 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203626c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203626f jle 0x1203627a */
  if ((C.zf||C.sf!=C.of)) goto L_1203627a;
  /* 12036271 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12036274 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036277 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1203627a:;
  /* 1203627a jmp 0x120362b1 */
  goto L_120362b1;
L_1203627c:;
  /* 1203627c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203627f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12036282 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036284 jne 0x12036295 */
  if (!C.zf) goto L_12036295;
  /* 12036286 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036289 mov ecx, dword ptr [eax*4 + 0x12051e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12051e4c)));
  /* 12036290 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12036293 jmp 0x120362a2 */
  goto L_120362a2;
L_12036295:;
  /* 12036295 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036298 mov eax, dword ptr [edx*4 + 0x12051e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12051e80)));
  /* 1203629f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_120362a2:;
  /* 120362a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120362a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120362a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120362ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120362ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120362b1:;
  /* 120362b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120362b5 jne 0x120362f1 */
  if (!C.zf) goto L_120362f1;
  /* 120362b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120362ba mov dword ptr [0x12051e2c], eax */
  w32((uint32_t)(0x12051e2c), (EAX));
  /* 120362bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120362c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120362c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120362c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120362ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120362cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 120362d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120362d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120362d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 120362db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120362dd mov dword ptr [0x12051e30], ecx */
  w32((uint32_t)(0x12051e30), (ECX));
  /* 120362e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120362e6 mov dword ptr [0x12051e28], edx */
  w32((uint32_t)(0x12051e28), (EDX));
  /* 120362ec jmp 0x12036394 */
  goto L_12036394;
L_120362f1:;
  /* 120362f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120362f4 mov dword ptr [0x12051e3c], eax */
  w32((uint32_t)(0x12051e3c), (EAX));
  /* 120362f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120362fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120362ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12036302 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036304 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036307 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1203630a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203630c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036312 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12036315 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036317 mov dword ptr [0x12051e40], ecx */
  w32((uint32_t)(0x12051e40), (ECX));
  /* 1203631d mov edx, dword ptr [0x12051d98] */
  EDX = (r32((uint32_t)(0x12051d98)));
  /* 12036323 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12036329 mov eax, dword ptr [0x12051e40] */
  EAX = (r32((uint32_t)(0x12051e40)));
  /* 1203632e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036330 mov dword ptr [0x12051e40], eax */
  w32((uint32_t)(0x12051e40), (EAX));
  /* 12036335 cmp dword ptr [0x12051e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12051e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203633c jge 0x12036361 */
  if ((C.sf==C.of)) goto L_12036361;
  /* 1203633e mov ecx, dword ptr [0x12051e40] */
  ECX = (r32((uint32_t)(0x12051e40)));
  /* 12036344 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203634a mov dword ptr [0x12051e40], ecx */
  w32((uint32_t)(0x12051e40), (ECX));
  /* 12036350 mov edx, dword ptr [0x12051e3c] */
  EDX = (r32((uint32_t)(0x12051e3c)));
  /* 12036356 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036359 mov dword ptr [0x12051e3c], edx */
  w32((uint32_t)(0x12051e3c), (EDX));
  /* 1203635f jmp 0x1203638b */
  goto L_1203638b;
L_12036361:;
  /* 12036361 cmp dword ptr [0x12051e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12051e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203636b jl 0x1203638b */
  if ((C.sf!=C.of)) goto L_1203638b;
  /* 1203636d mov eax, dword ptr [0x12051e40] */
  EAX = (r32((uint32_t)(0x12051e40)));
  /* 12036372 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036377 mov dword ptr [0x12051e40], eax */
  w32((uint32_t)(0x12051e40), (EAX));
  /* 1203637c mov ecx, dword ptr [0x12051e3c] */
  ECX = (r32((uint32_t)(0x12051e3c)));
  /* 12036382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036385 mov dword ptr [0x12051e3c], ecx */
  w32((uint32_t)(0x12051e3c), (ECX));
L_1203638b:;
  /* 1203638b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1203638e mov dword ptr [0x12051e38], edx */
  w32((uint32_t)(0x12051e38), (EDX));
L_12036394:;
  /* 12036394 mov esp, ebp */
  ESP = (EBP);
  /* 12036396 pop ebp */
  EBP = (pop32());
  /* 12036397 ret  */
  ESPCHK(0x120361a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163a0 @ 0x120363a0 (382 bytes, 135 insns) */
void f_120363a0(void) {
  FTRACE(0x120363a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120363a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120363a1 mov ebp, esp */
  EBP = (ESP);
  /* 120363a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120363a5 push 0x1204ee20 */
  push32((uint32_t)(0x1204ee20u));
  /* 120363aa push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 120363af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120363b5 push eax */
  push32((uint32_t)(EAX));
  /* 120363b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120363bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120363c0 push ebx */
  push32((uint32_t)(EBX));
  /* 120363c1 push esi */
  push32((uint32_t)(ESI));
  /* 120363c2 push edi */
  push32((uint32_t)(EDI));
  /* 120363c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120363c6 cmp dword ptr [0x12052b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120363cd jne 0x12036412 */
  if (!C.zf) goto L_12036412;
  /* 120363cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120363d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120363d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120363d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120363d7 call dword ptr [0x120552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f0))), 0x120363ddu);
  /* 120363dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120363df je 0x120363ed */
  if (C.zf) goto L_120363ed;
  /* 120363e1 mov dword ptr [0x12052b44], 1 */
  w32((uint32_t)(0x12052b44), (0x1u));
  /* 120363eb jmp 0x12036412 */
  goto L_12036412;
L_120363ed:;
  /* 120363ed push 0 */
  push32((uint32_t)(0x0u));
  /* 120363ef push 0 */
  push32((uint32_t)(0x0u));
  /* 120363f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120363f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120363f5 call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x120363fbu);
  /* 120363fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120363fd je 0x1203640b */
  if (C.zf) goto L_1203640b;
  /* 120363ff mov dword ptr [0x12052b44], 2 */
  w32((uint32_t)(0x12052b44), (0x2u));
  /* 12036409 jmp 0x12036412 */
  goto L_12036412;
L_1203640b:;
  /* 1203640b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203640d jmp 0x12036521 */
  goto L_12036521;
L_12036412:;
  /* 12036412 cmp dword ptr [0x12052b44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052b44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036419 jne 0x12036436 */
  if (!C.zf) goto L_12036436;
  /* 1203641b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1203641e push eax */
  push32((uint32_t)(EAX));
  /* 1203641f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036422 push ecx */
  push32((uint32_t)(ECX));
  /* 12036423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036426 push edx */
  push32((uint32_t)(EDX));
  /* 12036427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203642a push eax */
  push32((uint32_t)(EAX));
  /* 1203642b call dword ptr [0x120552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f0))), 0x12036431u);
  /* 12036431 jmp 0x12036521 */
  goto L_12036521;
L_12036436:;
  /* 12036436 cmp dword ptr [0x12052b44], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052b44))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203643d jne 0x1203651f */
  if (!C.zf) goto L_1203651f;
  /* 12036443 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036447 jne 0x12036452 */
  if (!C.zf) goto L_12036452;
  /* 12036449 mov ecx, dword ptr [0x120529f8] */
  ECX = (r32((uint32_t)(0x120529f8)));
  /* 1203644f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12036452:;
  /* 12036452 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036454 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036456 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036459 push edx */
  push32((uint32_t)(EDX));
  /* 1203645a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203645d push eax */
  push32((uint32_t)(EAX));
  /* 1203645e call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x12036464u);
  /* 12036464 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12036467 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203646b jne 0x12036474 */
  if (!C.zf) goto L_12036474;
  /* 1203646d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203646f jmp 0x12036521 */
  goto L_12036521;
L_12036474:;
  /* 12036474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203647b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1203647e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036481 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12036483 call 0x1202a100 */
  push32(0x12036488u); f_1202a100();
  /* 12036488 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1203648b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1203648e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12036491 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12036494 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1203649b jmp 0x120364b4 */
  goto L_120364b4;
  /* 1203649d mov eax, 1 */
  EAX = (0x1u);
  /* 120364a2 ret  */
  ESPCHK(0x120363a0u, _esp0);
  ESP += 4; return;
  /* 120364a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120364a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120364ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120364b4:;
  /* 120364b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120364b8 jne 0x120364be */
  if (!C.zf) goto L_120364be;
  /* 120364ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120364bc jmp 0x12036521 */
  goto L_12036521;
L_120364be:;
  /* 120364be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120364c1 push edx */
  push32((uint32_t)(EDX));
  /* 120364c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120364c5 push eax */
  push32((uint32_t)(EAX));
  /* 120364c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120364c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120364ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120364cd push edx */
  push32((uint32_t)(EDX));
  /* 120364ce call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x120364d4u);
  /* 120364d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120364d6 jne 0x120364dc */
  if (!C.zf) goto L_120364dc;
  /* 120364d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120364da jmp 0x12036521 */
  goto L_12036521;
L_120364dc:;
  /* 120364dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120364e0 jne 0x120364fd */
  if (!C.zf) goto L_120364fd;
  /* 120364e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120364e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120364e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120364e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120364eb push eax */
  push32((uint32_t)(EAX));
  /* 120364ec push 1 */
  push32((uint32_t)(0x1u));
  /* 120364ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120364f1 push ecx */
  push32((uint32_t)(ECX));
  /* 120364f2 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x120364f8u);
  /* 120364f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120364fb jmp 0x1203651a */
  goto L_1203651a;
L_120364fd:;
  /* 120364fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036500 push edx */
  push32((uint32_t)(EDX));
  /* 12036501 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036504 push eax */
  push32((uint32_t)(EAX));
  /* 12036505 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12036507 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1203650a push ecx */
  push32((uint32_t)(ECX));
  /* 1203650b push 1 */
  push32((uint32_t)(0x1u));
  /* 1203650d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036510 push edx */
  push32((uint32_t)(EDX));
  /* 12036511 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x12036517u);
  /* 12036517 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1203651a:;
  /* 1203651a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1203651d jmp 0x12036521 */
  goto L_12036521;
L_1203651f:;
  /* 1203651f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12036521:;
  /* 12036521 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12036524 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12036527 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1203652e pop edi */
  EDI = (pop32());
  /* 1203652f pop esi */
  ESI = (pop32());
  /* 12036530 pop ebx */
  EBX = (pop32());
  /* 12036531 mov esp, ebp */
  ESP = (EBP);
  /* 12036533 pop ebp */
  EBP = (pop32());
  /* 12036534 ret  */
  ESPCHK(0x120363a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016540 @ 0x12036540 (398 bytes, 140 insns) */
void f_12036540(void) {
  FTRACE(0x12036540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036540 push ebp */
  push32((uint32_t)(EBP));
  /* 12036541 mov ebp, esp */
  EBP = (ESP);
  /* 12036543 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12036545 push 0x1204ee30 */
  push32((uint32_t)(0x1204ee30u));
  /* 1203654a push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 1203654f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12036555 push eax */
  push32((uint32_t)(EAX));
  /* 12036556 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1203655d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036560 push ebx */
  push32((uint32_t)(EBX));
  /* 12036561 push esi */
  push32((uint32_t)(ESI));
  /* 12036562 push edi */
  push32((uint32_t)(EDI));
  /* 12036563 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12036566 cmp dword ptr [0x12052b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203656d jne 0x120365b2 */
  if (!C.zf) goto L_120365b2;
  /* 1203656f push 0 */
  push32((uint32_t)(0x0u));
  /* 12036571 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036573 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036575 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036577 call dword ptr [0x120552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f0))), 0x1203657du);
  /* 1203657d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203657f je 0x1203658d */
  if (C.zf) goto L_1203658d;
  /* 12036581 mov dword ptr [0x12052b48], 1 */
  w32((uint32_t)(0x12052b48), (0x1u));
  /* 1203658b jmp 0x120365b2 */
  goto L_120365b2;
L_1203658d:;
  /* 1203658d push 0 */
  push32((uint32_t)(0x0u));
  /* 1203658f push 0 */
  push32((uint32_t)(0x0u));
  /* 12036591 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036593 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036595 call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x1203659bu);
  /* 1203659b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1203659d je 0x120365ab */
  if (C.zf) goto L_120365ab;
  /* 1203659f mov dword ptr [0x12052b48], 2 */
  w32((uint32_t)(0x12052b48), (0x2u));
  /* 120365a9 jmp 0x120365b2 */
  goto L_120365b2;
L_120365ab:;
  /* 120365ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120365ad jmp 0x120366d1 */
  goto L_120366d1;
L_120365b2:;
  /* 120365b2 cmp dword ptr [0x12052b48], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052b48))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120365b9 jne 0x120365d6 */
  if (!C.zf) goto L_120365d6;
  /* 120365bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120365be push eax */
  push32((uint32_t)(EAX));
  /* 120365bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120365c2 push ecx */
  push32((uint32_t)(ECX));
  /* 120365c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120365c6 push edx */
  push32((uint32_t)(EDX));
  /* 120365c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120365ca push eax */
  push32((uint32_t)(EAX));
  /* 120365cb call dword ptr [0x12055308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055308))), 0x120365d1u);
  /* 120365d1 jmp 0x120366d1 */
  goto L_120366d1;
L_120365d6:;
  /* 120365d6 cmp dword ptr [0x12052b48], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052b48))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120365dd jne 0x120366cf */
  if (!C.zf) goto L_120366cf;
  /* 120365e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120365e7 jne 0x120365f2 */
  if (!C.zf) goto L_120365f2;
  /* 120365e9 mov ecx, dword ptr [0x120529f8] */
  ECX = (r32((uint32_t)(0x120529f8)));
  /* 120365ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_120365f2:;
  /* 120365f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120365f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120365f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120365f9 push edx */
  push32((uint32_t)(EDX));
  /* 120365fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120365fd push eax */
  push32((uint32_t)(EAX));
  /* 120365fe call dword ptr [0x120552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f0))), 0x12036604u);
  /* 12036604 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12036607 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203660b jne 0x12036614 */
  if (!C.zf) goto L_12036614;
  /* 1203660d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203660f jmp 0x120366d1 */
  goto L_120366d1;
L_12036614:;
  /* 12036614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1203661b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1203661e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12036620 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036623 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12036625 call 0x1202a100 */
  push32(0x1203662au); f_1202a100();
  /* 1203662a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1203662d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12036630 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12036633 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12036636 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1203663d jmp 0x12036656 */
  goto L_12036656;
  /* 1203663f mov eax, 1 */
  EAX = (0x1u);
  /* 12036644 ret  */
  ESPCHK(0x12036540u, _esp0);
  ESP += 4; return;
  /* 12036645 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12036648 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1203664f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12036656:;
  /* 12036656 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203665a jne 0x12036660 */
  if (!C.zf) goto L_12036660;
  /* 1203665c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203665e jmp 0x120366d1 */
  goto L_120366d1;
L_12036660:;
  /* 12036660 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12036663 push edx */
  push32((uint32_t)(EDX));
  /* 12036664 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12036667 push eax */
  push32((uint32_t)(EAX));
  /* 12036668 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1203666b push ecx */
  push32((uint32_t)(ECX));
  /* 1203666c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203666f push edx */
  push32((uint32_t)(EDX));
  /* 12036670 call dword ptr [0x120552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552f0))), 0x12036676u);
  /* 12036676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036678 jne 0x1203667e */
  if (!C.zf) goto L_1203667e;
  /* 1203667a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1203667c jmp 0x120366d1 */
  goto L_120366d1;
L_1203667e:;
  /* 1203667e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036682 jne 0x120366a6 */
  if (!C.zf) goto L_120366a6;
  /* 12036684 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036686 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1203668a push 0 */
  push32((uint32_t)(0x0u));
  /* 1203668c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1203668e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12036691 push eax */
  push32((uint32_t)(EAX));
  /* 12036692 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12036697 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1203669a push ecx */
  push32((uint32_t)(ECX));
  /* 1203669b call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x120366a1u);
  /* 120366a1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120366a4 jmp 0x120366ca */
  goto L_120366ca;
L_120366a6:;
  /* 120366a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120366a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120366aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120366ad push edx */
  push32((uint32_t)(EDX));
  /* 120366ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120366b1 push eax */
  push32((uint32_t)(EAX));
  /* 120366b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120366b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120366b7 push ecx */
  push32((uint32_t)(ECX));
  /* 120366b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120366bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120366c0 push edx */
  push32((uint32_t)(EDX));
  /* 120366c1 call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x120366c7u);
  /* 120366c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120366ca:;
  /* 120366ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120366cd jmp 0x120366d1 */
  goto L_120366d1;
L_120366cf:;
  /* 120366cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120366d1:;
  /* 120366d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 120366d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120366d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120366de pop edi */
  EDI = (pop32());
  /* 120366df pop esi */
  ESI = (pop32());
  /* 120366e0 pop ebx */
  EBX = (pop32());
  /* 120366e1 mov esp, ebp */
  ESP = (EBP);
  /* 120366e3 pop ebp */
  EBP = (pop32());
  /* 120366e4 ret  */
  ESPCHK(0x12036540u, _esp0);
  ESP += 4; return;
}

/* FUN_100166f0 @ 0x120366f0 (11 bytes, 6 insns) */
void f_120366f0(void) {
  FTRACE(0x120366f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120366f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120366f1 mov ebp, esp */
  EBP = (ESP);
  /* 120366f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120366f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120366f9 pop ebp */
  EBP = (pop32());
  /* 120366fa ret  */
  ESPCHK(0x120366f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016700 @ 0x12036700 (147 bytes, 43 insns) */
void f_12036700(void) {
  FTRACE(0x12036700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036700 push ebp */
  push32((uint32_t)(EBP));
  /* 12036701 mov ebp, esp */
  EBP = (ESP);
  /* 12036703 push ecx */
  push32((uint32_t)(ECX));
  /* 12036704 cmp dword ptr [0x120529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203670b jne 0x12036727 */
  if (!C.zf) goto L_12036727;
  /* 1203670d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036711 jl 0x12036722 */
  if ((C.sf!=C.of)) goto L_12036722;
  /* 12036713 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036717 jg 0x12036722 */
  if ((!C.zf&&C.sf==C.of)) goto L_12036722;
  /* 12036719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203671c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203671f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12036722:;
  /* 12036722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036725 jmp 0x1203678f */
  goto L_1203678f;
L_12036727:;
  /* 12036727 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 1203672c call dword ptr [0x120553c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553c8))), 0x12036732u);
  /* 12036732 cmp dword ptr [0x12052b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036739 je 0x12036759 */
  if (C.zf) goto L_12036759;
  /* 1203673b push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 12036740 call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x12036746u);
  /* 12036746 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12036748 call 0x1202a960 */
  push32(0x1203674du); f_1202a960();
  /* 1203674d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036750 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12036757 jmp 0x12036760 */
  goto L_12036760;
L_12036759:;
  /* 12036759 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12036760:;
  /* 12036760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036763 push ecx */
  push32((uint32_t)(ECX));
  /* 12036764 call 0x120367a0 */
  push32(0x12036769u); f_120367a0();
  /* 12036769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203676c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1203676f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036773 je 0x12036781 */
  if (C.zf) goto L_12036781;
  /* 12036775 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12036777 call 0x1202aa00 */
  push32(0x1203677cu); f_1202aa00();
  /* 1203677c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203677f jmp 0x1203678c */
  goto L_1203678c;
L_12036781:;
  /* 12036781 push 0x12052b74 */
  push32((uint32_t)(0x12052b74u));
  /* 12036786 call dword ptr [0x120553b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120553b8))), 0x1203678cu);
L_1203678c:;
  /* 1203678c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1203678f:;
  /* 1203678f mov esp, ebp */
  ESP = (EBP);
  /* 12036791 pop ebp */
  EBP = (pop32());
  /* 12036792 ret  */
  ESPCHK(0x12036700u, _esp0);
  ESP += 4; return;
}

/* FUN_100167a0 @ 0x120367a0 (299 bytes, 91 insns) */
void f_120367a0(void) {
  FTRACE(0x120367a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120367a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120367a1 mov ebp, esp */
  EBP = (ESP);
  /* 120367a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120367a6 cmp dword ptr [0x120529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120367ad jne 0x120367cc */
  if (!C.zf) goto L_120367cc;
  /* 120367af cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120367b3 jl 0x120367c4 */
  if ((C.sf!=C.of)) goto L_120367c4;
  /* 120367b5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120367b9 jg 0x120367c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_120367c4;
  /* 120367bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120367be add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120367c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120367c4:;
  /* 120367c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120367c7 jmp 0x120368c7 */
  goto L_120368c7;
L_120367cc:;
  /* 120367cc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120367d3 jge 0x12036813 */
  if ((C.sf==C.of)) goto L_12036813;
  /* 120367d5 cmp dword ptr [0x12050ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12050ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120367dc jle 0x120367f1 */
  if ((C.zf||C.sf!=C.of)) goto L_120367f1;
  /* 120367de push 1 */
  push32((uint32_t)(0x1u));
  /* 120367e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120367e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120367e4 call 0x1202cf70 */
  push32(0x120367e9u); f_1202cf70();
  /* 120367e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120367ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120367ef jmp 0x12036805 */
  goto L_12036805;
L_120367f1:;
  /* 120367f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120367f4 mov eax, dword ptr [0x12050c98] */
  EAX = (r32((uint32_t)(0x12050c98)));
  /* 120367f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120367fb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120367ff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12036802 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12036805:;
  /* 12036805 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036809 jne 0x12036813 */
  if (!C.zf) goto L_12036813;
  /* 1203680b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203680e jmp 0x120368c7 */
  goto L_120368c7;
L_12036813:;
  /* 12036813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036816 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12036819 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1203681f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12036825 mov eax, dword ptr [0x12050c98] */
  EAX = (r32((uint32_t)(0x12050c98)));
  /* 1203682a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1203682c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12036830 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12036836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12036838 je 0x1203685c */
  if (C.zf) goto L_1203685c;
  /* 1203683a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203683d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12036840 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12036846 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12036849 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1203684c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1203684f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12036853 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1203685a jmp 0x1203686d */
  goto L_1203686d;
L_1203685c:;
  /* 1203685c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1203685f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12036862 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12036866 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1203686d:;
  /* 1203686d push 1 */
  push32((uint32_t)(0x1u));
  /* 1203686f push 0 */
  push32((uint32_t)(0x0u));
  /* 12036871 push 3 */
  push32((uint32_t)(0x3u));
  /* 12036873 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12036876 push edx */
  push32((uint32_t)(EDX));
  /* 12036877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203687a push eax */
  push32((uint32_t)(EAX));
  /* 1203687b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1203687e push ecx */
  push32((uint32_t)(ECX));
  /* 1203687f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12036884 mov edx, dword ptr [0x120529e8] */
  EDX = (r32((uint32_t)(0x120529e8)));
  /* 1203688a push edx */
  push32((uint32_t)(EDX));
  /* 1203688b call 0x1202f350 */
  push32(0x12036890u); f_1202f350();
  /* 12036890 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036893 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12036896 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203689a jne 0x120368a1 */
  if (!C.zf) goto L_120368a1;
  /* 1203689c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203689f jmp 0x120368c7 */
  goto L_120368c7;
L_120368a1:;
  /* 120368a1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120368a5 jne 0x120368b1 */
  if (!C.zf) goto L_120368b1;
  /* 120368a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120368aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120368af jmp 0x120368c7 */
  goto L_120368c7;
L_120368b1:;
  /* 120368b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120368b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120368b9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 120368bc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120368c2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120368c5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_120368c7:;
  /* 120368c7 mov esp, ebp */
  ESP = (EBP);
  /* 120368c9 pop ebp */
  EBP = (pop32());
  /* 120368ca ret  */
  ESPCHK(0x120367a0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x120368d0 (52 bytes, 19 insns) */
void f_120368d0(void) {
  FTRACE(0x120368d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120368d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120368d4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 120368d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120368da mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120368de jne 0x120368e9 */
  if (!C.zf) goto L_120368e9;
  /* 120368e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120368e4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120368e6 ret 0x10 */
  ESPCHK(0x120368d0u, _esp0);
  ESP += 20; return;
L_120368e9:;
  /* 120368e9 push ebx */
  push32((uint32_t)(EBX));
  /* 120368ea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120368ec mov ebx, eax */
  EBX = (EAX);
  /* 120368ee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120368f2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120368f6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120368f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120368fc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120368fe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036900 pop ebx */
  EBX = (pop32());
  /* 12036901 ret 0x10 */
  ESPCHK(0x120368d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10016910 @ 0x12036910 (46 bytes, 18 insns) */
void f_12036910(void) {
  FTRACE(0x12036910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036910 push ebp */
  push32((uint32_t)(EBP));
  /* 12036911 mov ebp, esp */
  EBP = (ESP);
  /* 12036913 push ecx */
  push32((uint32_t)(ECX));
  /* 12036914 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12036916 call 0x1202a960 */
  push32(0x1203691bu); f_1202a960();
  /* 1203691b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203691e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036921 push eax */
  push32((uint32_t)(EAX));
  /* 12036922 call 0x12036940 */
  push32(0x12036927u); f_12036940();
  /* 12036927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203692a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203692d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1203692f call 0x1202aa00 */
  push32(0x12036934u); f_1202aa00();
  /* 12036934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203693a mov esp, ebp */
  ESP = (EBP);
  /* 1203693c pop ebp */
  EBP = (pop32());
  /* 1203693d ret  */
  ESPCHK(0x12036910u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12036940 (198 bytes, 69 insns) */
void f_12036940(void) {
  FTRACE(0x12036940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036940 push ebp */
  push32((uint32_t)(EBP));
  /* 12036941 mov ebp, esp */
  EBP = (ESP);
  /* 12036943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036946 mov eax, dword ptr [0x12052804] */
  EAX = (r32((uint32_t)(0x12052804)));
  /* 1203694b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1203694e cmp dword ptr [0x12054300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12054300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036955 jne 0x1203695e */
  if (!C.zf) goto L_1203695e;
  /* 12036957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036959 jmp 0x12036a02 */
  goto L_12036a02;
L_1203695e:;
  /* 1203695e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036962 jne 0x12036986 */
  if (!C.zf) goto L_12036986;
  /* 12036964 cmp dword ptr [0x1205280c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205280c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203696b je 0x12036986 */
  if (C.zf) goto L_12036986;
  /* 1203696d call 0x12036a60 */
  push32(0x12036972u); f_12036a60();
  /* 12036972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036974 je 0x1203697d */
  if (C.zf) goto L_1203697d;
  /* 12036976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036978 jmp 0x12036a02 */
  goto L_12036a02;
L_1203697d:;
  /* 1203697d mov ecx, dword ptr [0x12052804] */
  ECX = (r32((uint32_t)(0x12052804)));
  /* 12036983 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12036986:;
  /* 12036986 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203698a je 0x12036a00 */
  if (C.zf) goto L_12036a00;
  /* 1203698c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036990 je 0x12036a00 */
  if (C.zf) goto L_12036a00;
  /* 12036992 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036995 push edx */
  push32((uint32_t)(EDX));
  /* 12036996 call 0x12029d90 */
  push32(0x1203699bu); f_12029d90();
  /* 1203699b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203699e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120369a1:;
  /* 120369a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369a4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120369a7 je 0x12036a00 */
  if (C.zf) goto L_12036a00;
  /* 120369a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120369ae push edx */
  push32((uint32_t)(EDX));
  /* 120369af call 0x12029d90 */
  push32(0x120369b4u); f_12029d90();
  /* 120369b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120369b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120369ba jbe 0x120369f5 */
  if ((C.cf||C.zf)) goto L_120369f5;
  /* 120369bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120369c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120369c4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 120369c8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120369cb jne 0x120369f5 */
  if (!C.zf) goto L_120369f5;
  /* 120369cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120369d0 push ecx */
  push32((uint32_t)(ECX));
  /* 120369d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120369d4 push edx */
  push32((uint32_t)(EDX));
  /* 120369d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120369da push ecx */
  push32((uint32_t)(ECX));
  /* 120369db call 0x12036a10 */
  push32(0x120369e0u); f_12036a10();
  /* 120369e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120369e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120369e5 jne 0x120369f5 */
  if (!C.zf) goto L_120369f5;
  /* 120369e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120369ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120369ef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 120369f3 jmp 0x12036a02 */
  goto L_12036a02;
L_120369f5:;
  /* 120369f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120369f8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120369fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120369fe jmp 0x120369a1 */
  goto L_120369a1;
L_12036a00:;
  /* 12036a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12036a02:;
  /* 12036a02 mov esp, ebp */
  ESP = (EBP);
  /* 12036a04 pop ebp */
  EBP = (pop32());
  /* 12036a05 ret  */
  ESPCHK(0x12036940u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12036a10 (79 bytes, 32 insns) */
void f_12036a10(void) {
  FTRACE(0x12036a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12036a11 mov ebp, esp */
  EBP = (ESP);
  /* 12036a13 push ecx */
  push32((uint32_t)(ECX));
  /* 12036a14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036a18 jne 0x12036a1e */
  if (!C.zf) goto L_12036a1e;
  /* 12036a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036a1c jmp 0x12036a5b */
  goto L_12036a5b;
L_12036a1e:;
  /* 12036a1e mov eax, dword ptr [0x12053ec4] */
  EAX = (r32((uint32_t)(0x12053ec4)));
  /* 12036a23 push eax */
  push32((uint32_t)(EAX));
  /* 12036a24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036a27 push ecx */
  push32((uint32_t)(ECX));
  /* 12036a28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036a2b push edx */
  push32((uint32_t)(EDX));
  /* 12036a2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036a2f push eax */
  push32((uint32_t)(EAX));
  /* 12036a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12036a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036a36 mov edx, dword ptr [0x12054164] */
  EDX = (r32((uint32_t)(0x12054164)));
  /* 12036a3c push edx */
  push32((uint32_t)(EDX));
  /* 12036a3d call 0x12036b10 */
  push32(0x12036a42u); f_12036b10();
  /* 12036a42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12036a48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036a4c jne 0x12036a55 */
  if (!C.zf) goto L_12036a55;
  /* 12036a4e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12036a53 jmp 0x12036a5b */
  goto L_12036a5b;
L_12036a55:;
  /* 12036a55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036a58 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12036a5b:;
  /* 12036a5b mov esp, ebp */
  ESP = (EBP);
  /* 12036a5d pop ebp */
  EBP = (pop32());
  /* 12036a5e ret  */
  ESPCHK(0x12036a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a60 @ 0x12036a60 (174 bytes, 66 insns) */
void f_12036a60(void) {
  FTRACE(0x12036a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12036a61 mov ebp, esp */
  EBP = (ESP);
  /* 12036a63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036a66 mov eax, dword ptr [0x1205280c] */
  EAX = (r32((uint32_t)(0x1205280c)));
  /* 12036a6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12036a6e:;
  /* 12036a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036a71 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036a74 je 0x12036b08 */
  if (C.zf) goto L_12036b08;
  /* 12036a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12036a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12036a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12036a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036a82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12036a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036a87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12036a89 push eax */
  push32((uint32_t)(EAX));
  /* 12036a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12036a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12036a8e call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x12036a94u);
  /* 12036a94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12036a97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036a9b jne 0x12036aa2 */
  if (!C.zf) goto L_12036aa2;
  /* 12036a9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12036aa0 jmp 0x12036b0a */
  goto L_12036b0a;
L_12036aa2:;
  /* 12036aa2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12036aa4 push 0x1204ee3c */
  push32((uint32_t)(0x1204ee3cu));
  /* 12036aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12036aab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12036aae push ecx */
  push32((uint32_t)(ECX));
  /* 12036aaf call 0x12026f60 */
  push32(0x12036ab4u); f_12026f60();
  /* 12036ab4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036ab7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12036aba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036abe jne 0x12036ac5 */
  if (!C.zf) goto L_12036ac5;
  /* 12036ac0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12036ac3 jmp 0x12036b0a */
  goto L_12036b0a;
L_12036ac5:;
  /* 12036ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036ac9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12036acc push edx */
  push32((uint32_t)(EDX));
  /* 12036acd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12036ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12036ad1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12036ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036ad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12036ad8 push edx */
  push32((uint32_t)(EDX));
  /* 12036ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036adb push 1 */
  push32((uint32_t)(0x1u));
  /* 12036add call dword ptr [0x12055384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055384))), 0x12036ae3u);
  /* 12036ae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036ae5 jne 0x12036aec */
  if (!C.zf) goto L_12036aec;
  /* 12036ae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12036aea jmp 0x12036b0a */
  goto L_12036b0a;
L_12036aec:;
  /* 12036aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12036aee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12036af1 push eax */
  push32((uint32_t)(EAX));
  /* 12036af2 call 0x12036f60 */
  push32(0x12036af7u); f_12036f60();
  /* 12036af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036afd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036b00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12036b03 jmp 0x12036a6e */
  goto L_12036a6e;
L_12036b08:;
  /* 12036b08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12036b0a:;
  /* 12036b0a mov esp, ebp */
  ESP = (EBP);
  /* 12036b0c pop ebp */
  EBP = (pop32());
  /* 12036b0d ret  */
  ESPCHK(0x12036a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b10 @ 0x12036b10 (970 bytes, 340 insns) */
void f_12036b10(void) {
  FTRACE(0x12036b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12036b11 mov ebp, esp */
  EBP = (ESP);
  /* 12036b13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12036b15 push 0x1204ee90 */
  push32((uint32_t)(0x1204ee90u));
  /* 12036b1a push 0x12030068 */
  push32((uint32_t)(0x12030068u));
  /* 12036b1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12036b25 push eax */
  push32((uint32_t)(EAX));
  /* 12036b26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12036b2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036b30 push ebx */
  push32((uint32_t)(EBX));
  /* 12036b31 push esi */
  push32((uint32_t)(ESI));
  /* 12036b32 push edi */
  push32((uint32_t)(EDI));
  /* 12036b33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12036b36 cmp dword ptr [0x12052b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036b3d jne 0x12036b96 */
  if (!C.zf) goto L_12036b96;
  /* 12036b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12036b41 push 0x1204e4ec */
  push32((uint32_t)(0x1204e4ecu));
  /* 12036b46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036b48 push 0x1204e4ec */
  push32((uint32_t)(0x1204e4ecu));
  /* 12036b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12036b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12036b51 call dword ptr [0x120552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e8))), 0x12036b57u);
  /* 12036b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036b59 je 0x12036b67 */
  if (C.zf) goto L_12036b67;
  /* 12036b5b mov dword ptr [0x12052b4c], 1 */
  w32((uint32_t)(0x12052b4c), (0x1u));
  /* 12036b65 jmp 0x12036b96 */
  goto L_12036b96;
L_12036b67:;
  /* 12036b67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036b69 push 0x1204e4e8 */
  push32((uint32_t)(0x1204e4e8u));
  /* 12036b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12036b70 push 0x1204e4e8 */
  push32((uint32_t)(0x1204e4e8u));
  /* 12036b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036b79 call dword ptr [0x120552ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552ec))), 0x12036b7fu);
  /* 12036b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036b81 je 0x12036b8f */
  if (C.zf) goto L_12036b8f;
  /* 12036b83 mov dword ptr [0x12052b4c], 2 */
  w32((uint32_t)(0x12052b4c), (0x2u));
  /* 12036b8d jmp 0x12036b96 */
  goto L_12036b96;
L_12036b8f:;
  /* 12036b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036b91 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036b96:;
  /* 12036b96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036b9a jle 0x12036baf */
  if ((C.zf||C.sf!=C.of)) goto L_12036baf;
  /* 12036b9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036b9f push eax */
  push32((uint32_t)(EAX));
  /* 12036ba0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12036ba4 call 0x12036f10 */
  push32(0x12036ba9u); f_12036f10();
  /* 12036ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036bac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12036baf:;
  /* 12036baf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036bb3 jle 0x12036bc8 */
  if ((C.zf||C.sf!=C.of)) goto L_12036bc8;
  /* 12036bb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12036bb8 push edx */
  push32((uint32_t)(EDX));
  /* 12036bb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036bbc push eax */
  push32((uint32_t)(EAX));
  /* 12036bbd call 0x12036f10 */
  push32(0x12036bc2u); f_12036f10();
  /* 12036bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036bc5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12036bc8:;
  /* 12036bc8 cmp dword ptr [0x12052b4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12052b4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036bcf jne 0x12036bf4 */
  if (!C.zf) goto L_12036bf4;
  /* 12036bd1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12036bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12036bd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036bd8 push edx */
  push32((uint32_t)(EDX));
  /* 12036bd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036bdc push eax */
  push32((uint32_t)(EAX));
  /* 12036bdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036be0 push ecx */
  push32((uint32_t)(ECX));
  /* 12036be1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036be4 push edx */
  push32((uint32_t)(EDX));
  /* 12036be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036be8 push eax */
  push32((uint32_t)(EAX));
  /* 12036be9 call dword ptr [0x120552ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552ec))), 0x12036befu);
  /* 12036bef jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036bf4:;
  /* 12036bf4 cmp dword ptr [0x12052b4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12052b4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036bfb jne 0x12036ef2 */
  if (!C.zf) goto L_12036ef2;
  /* 12036c01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c05 jne 0x12036c10 */
  if (!C.zf) goto L_12036c10;
  /* 12036c07 mov ecx, dword ptr [0x120529f8] */
  ECX = (r32((uint32_t)(0x120529f8)));
  /* 12036c0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12036c10:;
  /* 12036c10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c14 je 0x12036c20 */
  if (C.zf) goto L_12036c20;
  /* 12036c16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c1a jne 0x12036d9c */
  if (!C.zf) goto L_12036d9c;
L_12036c20:;
  /* 12036c20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036c23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c26 jne 0x12036c32 */
  if (!C.zf) goto L_12036c32;
  /* 12036c28 mov eax, 2 */
  EAX = (0x2u);
  /* 12036c2d jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036c32:;
  /* 12036c32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c36 jle 0x12036c42 */
  if ((C.zf||C.sf!=C.of)) goto L_12036c42;
  /* 12036c38 mov eax, 1 */
  EAX = (0x1u);
  /* 12036c3d jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036c42:;
  /* 12036c42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c46 jle 0x12036c52 */
  if ((C.zf||C.sf!=C.of)) goto L_12036c52;
  /* 12036c48 mov eax, 3 */
  EAX = (0x3u);
  /* 12036c4d jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036c52:;
  /* 12036c52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12036c55 push eax */
  push32((uint32_t)(EAX));
  /* 12036c56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12036c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12036c5a call dword ptr [0x12055344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055344))), 0x12036c60u);
  /* 12036c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036c62 jne 0x12036c6b */
  if (!C.zf) goto L_12036c6b;
  /* 12036c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036c66 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036c6b:;
  /* 12036c6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c6f jne 0x12036c77 */
  if (!C.zf) goto L_12036c77;
  /* 12036c71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c75 je 0x12036ca4 */
  if (C.zf) goto L_12036ca4;
L_12036c77:;
  /* 12036c77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c7b jne 0x12036c83 */
  if (!C.zf) goto L_12036c83;
  /* 12036c7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036c81 je 0x12036ca4 */
  if (C.zf) goto L_12036ca4;
L_12036c83:;
  /* 12036c83 push 0x1204ee50 */
  push32((uint32_t)(0x1204ee50u));
  /* 12036c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12036c8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12036c8f push 0x1204ee48 */
  push32((uint32_t)(0x1204ee48u));
  /* 12036c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 12036c96 call 0x12026020 */
  push32(0x12036c9bu); f_12026020();
  /* 12036c9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036ca1 jne 0x12036ca4 */
  if (!C.zf) goto L_12036ca4;
  /* 12036ca3 int3  */
  x86_unimpl("int3 @ 0x12036ca3");
L_12036ca4:;
  /* 12036ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036ca8 jne 0x12036c6b */
  if (!C.zf) goto L_12036c6b;
  /* 12036caa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036cae jle 0x12036d23 */
  if ((C.zf||C.sf!=C.of)) goto L_12036d23;
  /* 12036cb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036cb4 jae 0x12036cc0 */
  if (!C.cf) goto L_12036cc0;
  /* 12036cb6 mov eax, 3 */
  EAX = (0x3u);
  /* 12036cbb jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036cc0:;
  /* 12036cc0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12036cc3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12036cc6 jmp 0x12036cd1 */
  goto L_12036cd1;
L_12036cc8:;
  /* 12036cc8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036ccb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036cce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12036cd1:;
  /* 12036cd1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036cd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036cd6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12036cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036cda je 0x12036d19 */
  if (C.zf) goto L_12036d19;
  /* 12036cdc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036cdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036ce1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12036ce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036ce6 je 0x12036d19 */
  if (C.zf) goto L_12036d19;
  /* 12036ce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036ceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036ced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12036cef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036cf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036cf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12036cf6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036cf8 jl 0x12036d17 */
  if ((C.sf!=C.of)) goto L_12036d17;
  /* 12036cfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036cff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12036d01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036d06 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12036d09 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036d0b jg 0x12036d17 */
  if ((!C.zf&&C.sf==C.of)) goto L_12036d17;
  /* 12036d0d mov eax, 2 */
  EAX = (0x2u);
  /* 12036d12 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036d17:;
  /* 12036d17 jmp 0x12036cc8 */
  goto L_12036cc8;
L_12036d19:;
  /* 12036d19 mov eax, 3 */
  EAX = (0x3u);
  /* 12036d1e jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036d23:;
  /* 12036d23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036d27 jle 0x12036d9c */
  if ((C.zf||C.sf!=C.of)) goto L_12036d9c;
  /* 12036d29 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036d2d jae 0x12036d39 */
  if (!C.cf) goto L_12036d39;
  /* 12036d2f mov eax, 1 */
  EAX = (0x1u);
  /* 12036d34 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036d39:;
  /* 12036d39 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12036d3c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12036d3f jmp 0x12036d4a */
  goto L_12036d4a;
L_12036d41:;
  /* 12036d41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d44 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036d47 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12036d4a:;
  /* 12036d4a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036d4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12036d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036d53 je 0x12036d92 */
  if (C.zf) goto L_12036d92;
  /* 12036d55 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036d5a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12036d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12036d5f je 0x12036d92 */
  if (C.zf) goto L_12036d92;
  /* 12036d61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036d66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12036d68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12036d6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12036d6f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036d71 jl 0x12036d90 */
  if ((C.sf!=C.of)) goto L_12036d90;
  /* 12036d73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036d76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12036d78 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12036d7a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12036d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036d7f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12036d82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036d84 jg 0x12036d90 */
  if ((!C.zf&&C.sf==C.of)) goto L_12036d90;
  /* 12036d86 mov eax, 2 */
  EAX = (0x2u);
  /* 12036d8b jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036d90:;
  /* 12036d90 jmp 0x12036d41 */
  goto L_12036d41;
L_12036d92:;
  /* 12036d92 mov eax, 1 */
  EAX = (0x1u);
  /* 12036d97 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036d9c:;
  /* 12036d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12036d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12036da0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12036da4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036da7 push edx */
  push32((uint32_t)(EDX));
  /* 12036da8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12036daa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12036dad push eax */
  push32((uint32_t)(EAX));
  /* 12036dae call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x12036db4u);
  /* 12036db4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12036db7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036dbb jne 0x12036dc4 */
  if (!C.zf) goto L_12036dc4;
  /* 12036dbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036dbf jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036dc4:;
  /* 12036dc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12036dcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12036dce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12036dd0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036dd3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12036dd5 call 0x1202a100 */
  push32(0x12036ddau); f_1202a100();
  /* 12036dda mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12036ddd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12036de0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12036de3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12036de6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12036ded jmp 0x12036e06 */
  goto L_12036e06;
  /* 12036def mov eax, 1 */
  EAX = (0x1u);
  /* 12036df4 ret  */
  ESPCHK(0x12036b10u, _esp0);
  ESP += 4; return;
  /* 12036df5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12036df8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12036dff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12036e06:;
  /* 12036e06 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036e0a jne 0x12036e13 */
  if (!C.zf) goto L_12036e13;
  /* 12036e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036e0e jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036e13:;
  /* 12036e13 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12036e16 push edx */
  push32((uint32_t)(EDX));
  /* 12036e17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12036e1a push eax */
  push32((uint32_t)(EAX));
  /* 12036e1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12036e1e push ecx */
  push32((uint32_t)(ECX));
  /* 12036e1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12036e22 push edx */
  push32((uint32_t)(EDX));
  /* 12036e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12036e25 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12036e28 push eax */
  push32((uint32_t)(EAX));
  /* 12036e29 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x12036e2fu);
  /* 12036e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036e31 jne 0x12036e3a */
  if (!C.zf) goto L_12036e3a;
  /* 12036e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036e35 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036e3a:;
  /* 12036e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12036e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12036e3e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12036e41 push ecx */
  push32((uint32_t)(ECX));
  /* 12036e42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036e45 push edx */
  push32((uint32_t)(EDX));
  /* 12036e46 push 9 */
  push32((uint32_t)(0x9u));
  /* 12036e48 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12036e4b push eax */
  push32((uint32_t)(EAX));
  /* 12036e4c call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x12036e52u);
  /* 12036e52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12036e55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036e59 jne 0x12036e62 */
  if (!C.zf) goto L_12036e62;
  /* 12036e5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036e5d jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036e62:;
  /* 12036e62 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12036e69 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12036e6c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12036e6e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036e71 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12036e73 call 0x1202a100 */
  push32(0x12036e78u); f_1202a100();
  /* 12036e78 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12036e7b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12036e7e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12036e81 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12036e84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12036e8b jmp 0x12036ea4 */
  goto L_12036ea4;
  /* 12036e8d mov eax, 1 */
  EAX = (0x1u);
  /* 12036e92 ret  */
  ESPCHK(0x12036b10u, _esp0);
  ESP += 4; return;
  /* 12036e93 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12036e96 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12036e9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12036ea4:;
  /* 12036ea4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036ea8 jne 0x12036eae */
  if (!C.zf) goto L_12036eae;
  /* 12036eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036eac jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036eae:;
  /* 12036eae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12036eb1 push edx */
  push32((uint32_t)(EDX));
  /* 12036eb2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12036eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12036eb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12036eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12036eba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12036ebd push edx */
  push32((uint32_t)(EDX));
  /* 12036ebe push 1 */
  push32((uint32_t)(0x1u));
  /* 12036ec0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12036ec3 push eax */
  push32((uint32_t)(EAX));
  /* 12036ec4 call dword ptr [0x12055338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12055338))), 0x12036ecau);
  /* 12036eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036ecc jne 0x12036ed2 */
  if (!C.zf) goto L_12036ed2;
  /* 12036ece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036ed0 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036ed2:;
  /* 12036ed2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12036ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 12036ed6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12036ed9 push edx */
  push32((uint32_t)(EDX));
  /* 12036eda mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12036edd push eax */
  push32((uint32_t)(EAX));
  /* 12036ede mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12036ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 12036ee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036ee5 push edx */
  push32((uint32_t)(EDX));
  /* 12036ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036ee9 push eax */
  push32((uint32_t)(EAX));
  /* 12036eea call dword ptr [0x120552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e8))), 0x12036ef0u);
  /* 12036ef0 jmp 0x12036ef4 */
  goto L_12036ef4;
L_12036ef2:;
  /* 12036ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12036ef4:;
  /* 12036ef4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12036ef7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12036efa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12036f01 pop edi */
  EDI = (pop32());
  /* 12036f02 pop esi */
  ESI = (pop32());
  /* 12036f03 pop ebx */
  EBX = (pop32());
  /* 12036f04 mov esp, ebp */
  ESP = (EBP);
  /* 12036f06 pop ebp */
  EBP = (pop32());
  /* 12036f07 ret  */
  ESPCHK(0x12036b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f10 @ 0x12036f10 (80 bytes, 32 insns) */
void f_12036f10(void) {
  FTRACE(0x12036f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12036f11 mov ebp, esp */
  EBP = (ESP);
  /* 12036f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12036f19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12036f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12036f22:;
  /* 12036f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12036f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12036f28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12036f2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036f30 je 0x12036f47 */
  if (C.zf) goto L_12036f47;
  /* 12036f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036f35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12036f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036f3a je 0x12036f47 */
  if (C.zf) goto L_12036f47;
  /* 12036f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036f3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12036f42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12036f45 jmp 0x12036f22 */
  goto L_12036f22;
L_12036f47:;
  /* 12036f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036f4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12036f4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12036f4f jne 0x12036f59 */
  if (!C.zf) goto L_12036f59;
  /* 12036f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12036f54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036f57 jmp 0x12036f5c */
  goto L_12036f5c;
L_12036f59:;
  /* 12036f59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12036f5c:;
  /* 12036f5c mov esp, ebp */
  ESP = (EBP);
  /* 12036f5e pop ebp */
  EBP = (pop32());
  /* 12036f5f ret  */
  ESPCHK(0x12036f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f60 @ 0x12036f60 (736 bytes, 224 insns) */
void f_12036f60(void) {
  FTRACE(0x12036f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12036f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12036f61 mov ebp, esp */
  EBP = (ESP);
  /* 12036f63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036f66 push esi */
  push32((uint32_t)(ESI));
  /* 12036f67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036f6b je 0x12036f8c */
  if (C.zf) goto L_12036f8c;
  /* 12036f6d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12036f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036f72 push eax */
  push32((uint32_t)(EAX));
  /* 12036f73 call 0x120373b0 */
  push32(0x12036f78u); f_120373b0();
  /* 12036f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036f7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12036f7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036f82 je 0x12036f8c */
  if (C.zf) goto L_12036f8c;
  /* 12036f84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12036f87 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036f8a jne 0x12036f94 */
  if (!C.zf) goto L_12036f94;
L_12036f8c:;
  /* 12036f8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12036f8f jmp 0x1203723b */
  goto L_1203723b;
L_12036f94:;
  /* 12036f94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12036f97 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12036f9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12036f9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12036f9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12036fa0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12036fa3 mov ecx, dword ptr [0x12052804] */
  ECX = (r32((uint32_t)(0x12052804)));
  /* 12036fa9 cmp ecx, dword ptr [0x12052808] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12052808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036faf jne 0x12036fc5 */
  if (!C.zf) goto L_12036fc5;
  /* 12036fb1 mov edx, dword ptr [0x12052804] */
  EDX = (r32((uint32_t)(0x12052804)));
  /* 12036fb7 push edx */
  push32((uint32_t)(EDX));
  /* 12036fb8 call 0x120372c0 */
  push32(0x12036fbdu); f_120372c0();
  /* 12036fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12036fc0 mov dword ptr [0x12052804], eax */
  w32((uint32_t)(0x12052804), (EAX));
L_12036fc5:;
  /* 12036fc5 cmp dword ptr [0x12052804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036fcc jne 0x12037085 */
  if (!C.zf) goto L_12037085;
  /* 12036fd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036fd6 je 0x12036ff7 */
  if (C.zf) goto L_12036ff7;
  /* 12036fd8 cmp dword ptr [0x1205280c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205280c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036fdf je 0x12036ff7 */
  if (C.zf) goto L_12036ff7;
  /* 12036fe1 call 0x12036a60 */
  push32(0x12036fe6u); f_12036a60();
  /* 12036fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12036fe8 je 0x12036ff2 */
  if (C.zf) goto L_12036ff2;
  /* 12036fea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12036fed jmp 0x1203723b */
  goto L_1203723b;
L_12036ff2:;
  /* 12036ff2 jmp 0x12037085 */
  goto L_12037085;
L_12036ff7:;
  /* 12036ff7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12036ffb je 0x12037004 */
  if (C.zf) goto L_12037004;
  /* 12036ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12036fff jmp 0x1203723b */
  goto L_1203723b;
L_12037004:;
  /* 12037004 cmp dword ptr [0x12052804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203700b jne 0x12037044 */
  if (!C.zf) goto L_12037044;
  /* 1203700d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12037012 push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 12037017 push 2 */
  push32((uint32_t)(0x2u));
  /* 12037019 push 4 */
  push32((uint32_t)(0x4u));
  /* 1203701b call 0x12026f60 */
  push32(0x12037020u); f_12026f60();
  /* 12037020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037023 mov dword ptr [0x12052804], eax */
  w32((uint32_t)(0x12052804), (EAX));
  /* 12037028 cmp dword ptr [0x12052804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12052804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203702f jne 0x12037039 */
  if (!C.zf) goto L_12037039;
  /* 12037031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12037034 jmp 0x1203723b */
  goto L_1203723b;
L_12037039:;
  /* 12037039 mov eax, dword ptr [0x12052804] */
  EAX = (r32((uint32_t)(0x12052804)));
  /* 1203703e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12037044:;
  /* 12037044 cmp dword ptr [0x1205280c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205280c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203704b jne 0x12037085 */
  if (!C.zf) goto L_12037085;
  /* 1203704d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12037052 push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 12037057 push 2 */
  push32((uint32_t)(0x2u));
  /* 12037059 push 4 */
  push32((uint32_t)(0x4u));
  /* 1203705b call 0x12026f60 */
  push32(0x12037060u); f_12026f60();
  /* 12037060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037063 mov dword ptr [0x1205280c], eax */
  w32((uint32_t)(0x1205280c), (EAX));
  /* 12037068 cmp dword ptr [0x1205280c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1205280c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203706f jne 0x12037079 */
  if (!C.zf) goto L_12037079;
  /* 12037071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12037074 jmp 0x1203723b */
  goto L_1203723b;
L_12037079:;
  /* 12037079 mov ecx, dword ptr [0x1205280c] */
  ECX = (r32((uint32_t)(0x1205280c)));
  /* 1203707f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12037085:;
  /* 12037085 mov edx, dword ptr [0x12052804] */
  EDX = (r32((uint32_t)(0x12052804)));
  /* 1203708b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1203708e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12037091 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12037094 push eax */
  push32((uint32_t)(EAX));
  /* 12037095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037098 push ecx */
  push32((uint32_t)(ECX));
  /* 12037099 call 0x12037240 */
  push32(0x1203709eu); f_12037240();
  /* 1203709e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120370a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120370a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120370a8 jl 0x12037141 */
  if ((C.sf!=C.of)) goto L_12037141;
  /* 120370ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120370b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120370b4 je 0x12037141 */
  if (C.zf) goto L_12037141;
  /* 120370ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120370be je 0x12037133 */
  if (C.zf) goto L_12037133;
  /* 120370c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120370c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120370c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120370c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120370cb push edx */
  push32((uint32_t)(EDX));
  /* 120370cc call 0x120279f0 */
  push32(0x120370d1u); f_120279f0();
  /* 120370d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120370d4 jmp 0x120370df */
  goto L_120370df;
L_120370d6:;
  /* 120370d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120370d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120370dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120370df:;
  /* 120370df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120370e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120370e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120370e9 je 0x12037100 */
  if (C.zf) goto L_12037100;
  /* 120370eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120370ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120370f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120370f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 120370f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 120370fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120370fe jmp 0x120370d6 */
  goto L_120370d6;
L_12037100:;
  /* 12037100 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12037105 push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 1203710a push 2 */
  push32((uint32_t)(0x2u));
  /* 1203710c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203710f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12037112 push eax */
  push32((uint32_t)(EAX));
  /* 12037113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12037116 push ecx */
  push32((uint32_t)(ECX));
  /* 12037117 call 0x120273f0 */
  push32(0x1203711cu); f_120273f0();
  /* 1203711c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203711f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12037122 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037126 je 0x12037131 */
  if (C.zf) goto L_12037131;
  /* 12037128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203712b mov dword ptr [0x12052804], edx */
  w32((uint32_t)(0x12052804), (EDX));
L_12037131:;
  /* 12037131 jmp 0x1203713f */
  goto L_1203713f;
L_12037133:;
  /* 12037133 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12037139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203713c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1203713f:;
  /* 1203713f jmp 0x120371b4 */
  goto L_120371b4;
L_12037141:;
  /* 12037141 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037145 jne 0x120371ad */
  if (!C.zf) goto L_120371ad;
  /* 12037147 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203714b jge 0x12037155 */
  if ((C.sf==C.of)) goto L_12037155;
  /* 1203714d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037150 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12037152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12037155:;
  /* 12037155 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1203715a push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 1203715f push 2 */
  push32((uint32_t)(0x2u));
  /* 12037161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037164 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1203716b push edx */
  push32((uint32_t)(EDX));
  /* 1203716c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203716f push eax */
  push32((uint32_t)(EAX));
  /* 12037170 call 0x120273f0 */
  push32(0x12037175u); f_120273f0();
  /* 12037175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037178 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1203717b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203717f jne 0x12037189 */
  if (!C.zf) goto L_12037189;
  /* 12037181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12037184 jmp 0x1203723b */
  goto L_1203723b;
L_12037189:;
  /* 12037189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203718c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203718f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037192 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12037195 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203719b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 120371a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120371a6 mov dword ptr [0x12052804], eax */
  w32((uint32_t)(0x12052804), (EAX));
  /* 120371ab jmp 0x120371b4 */
  goto L_120371b4;
L_120371ad:;
  /* 120371ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120371af jmp 0x1203723b */
  goto L_1203723b;
L_120371b4:;
  /* 120371b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120371b8 je 0x12037239 */
  if (C.zf) goto L_12037239;
  /* 120371ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 120371bf push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 120371c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120371c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120371c9 push ecx */
  push32((uint32_t)(ECX));
  /* 120371ca call 0x12029d90 */
  push32(0x120371cfu); f_12029d90();
  /* 120371cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120371d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120371d5 push eax */
  push32((uint32_t)(EAX));
  /* 120371d6 call 0x12026f60 */
  push32(0x120371dbu); f_12026f60();
  /* 120371db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120371de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120371e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120371e5 je 0x12037239 */
  if (C.zf) goto L_12037239;
  /* 120371e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120371ea push edx */
  push32((uint32_t)(EDX));
  /* 120371eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120371ee push eax */
  push32((uint32_t)(EAX));
  /* 120371ef call 0x12029f10 */
  push32(0x120371f4u); f_12029f10();
  /* 120371f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120371f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120371fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120371fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12037200 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037202 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12037205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037208 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1203720b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203720e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12037214 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12037217 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12037219 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1203721b not edx */
  EDX = (~(EDX));
  /* 1203721d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12037220 push edx */
  push32((uint32_t)(EDX));
  /* 12037221 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12037224 push eax */
  push32((uint32_t)(EAX));
  /* 12037225 call dword ptr [0x120552e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120552e4))), 0x1203722bu);
  /* 1203722b push 2 */
  push32((uint32_t)(0x2u));
  /* 1203722d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12037230 push ecx */
  push32((uint32_t)(ECX));
  /* 12037231 call 0x120279f0 */
  push32(0x12037236u); f_120279f0();
  /* 12037236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12037239:;
  /* 12037239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1203723b:;
  /* 1203723b pop esi */
  ESI = (pop32());
  /* 1203723c mov esp, ebp */
  ESP = (EBP);
  /* 1203723e pop ebp */
  EBP = (pop32());
  /* 1203723f ret  */
  ESPCHK(0x12036f60u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12037240 (124 bytes, 47 insns) */
void f_12037240(void) {
  FTRACE(0x12037240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12037240 push ebp */
  push32((uint32_t)(EBP));
  /* 12037241 mov ebp, esp */
  EBP = (ESP);
  /* 12037243 push ecx */
  push32((uint32_t)(ECX));
  /* 12037244 mov eax, dword ptr [0x12052804] */
  EAX = (r32((uint32_t)(0x12052804)));
  /* 12037249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1203724c jmp 0x12037257 */
  goto L_12037257;
L_1203724e:;
  /* 1203724e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037251 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037254 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12037257:;
  /* 12037257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203725a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1203725d je 0x120372aa */
  if (C.zf) goto L_120372aa;
  /* 1203725f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12037262 push eax */
  push32((uint32_t)(EAX));
  /* 12037263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037266 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12037268 push edx */
  push32((uint32_t)(EDX));
  /* 12037269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203726c push eax */
  push32((uint32_t)(EAX));
  /* 1203726d call 0x12036a10 */
  push32(0x12037272u); f_12036a10();
  /* 12037272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12037277 jne 0x120372a8 */
  if (!C.zf) goto L_120372a8;
  /* 12037279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203727c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1203727e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12037281 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12037285 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037288 je 0x1203729a */
  if (C.zf) goto L_1203729a;
  /* 1203728a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203728d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1203728f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12037292 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12037296 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12037298 jne 0x120372a8 */
  if (!C.zf) goto L_120372a8;
L_1203729a:;
  /* 1203729a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203729d sub eax, dword ptr [0x12052804] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052804))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120372a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120372a6 jmp 0x120372b8 */
  goto L_120372b8;
L_120372a8:;
  /* 120372a8 jmp 0x1203724e */
  goto L_1203724e;
L_120372aa:;
  /* 120372aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120372ad sub eax, dword ptr [0x12052804] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12052804))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120372b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120372b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120372b8:;
  /* 120372b8 mov esp, ebp */
  ESP = (EBP);
  /* 120372ba pop ebp */
  EBP = (pop32());
  /* 120372bb ret  */
  ESPCHK(0x12037240u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x120372c0 (238 bytes, 80 insns) */
void f_120372c0(void) {
  FTRACE(0x120372c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120372c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120372c1 mov ebp, esp */
  EBP = (ESP);
  /* 120372c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120372c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120372cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120372d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120372d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120372d7 jne 0x120372e0 */
  if (!C.zf) goto L_120372e0;
  /* 120372d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120372db jmp 0x120373aa */
  goto L_120373aa;
L_120372e0:;
  /* 120372e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120372e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120372e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120372e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120372eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120372ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120372f0 je 0x120372fd */
  if (C.zf) goto L_120372fd;
  /* 120372f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120372f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120372f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120372fb jmp 0x120372e0 */
  goto L_120372e0;
L_120372fd:;
  /* 120372fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12037302 push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 12037307 push 2 */
  push32((uint32_t)(0x2u));
  /* 12037309 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1203730c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12037313 push eax */
  push32((uint32_t)(EAX));
  /* 12037314 call 0x12026f60 */
  push32(0x12037319u); f_12026f60();
  /* 12037319 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203731c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1203731f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037322 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12037325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037329 jne 0x12037335 */
  if (!C.zf) goto L_12037335;
  /* 1203732b push 9 */
  push32((uint32_t)(0x9u));
  /* 1203732d call 0x12025ed0 */
  push32(0x12037332u); f_12025ed0();
  /* 12037332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12037335:;
  /* 12037335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037338 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1203733b:;
  /* 1203733b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203733e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037341 je 0x1203739e */
  if (C.zf) goto L_1203739e;
  /* 12037343 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12037348 push 0x1204eea8 */
  push32((uint32_t)(0x1204eea8u));
  /* 1203734d push 2 */
  push32((uint32_t)(0x2u));
  /* 1203734f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12037352 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12037354 push edx */
  push32((uint32_t)(EDX));
  /* 12037355 call 0x12029d90 */
  push32(0x1203735au); f_12029d90();
  /* 1203735a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203735d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037360 push eax */
  push32((uint32_t)(EAX));
  /* 12037361 call 0x12026f60 */
  push32(0x12037366u); f_12026f60();
  /* 12037366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203736c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1203736e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037371 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037374 je 0x1203738a */
  if (C.zf) goto L_1203738a;
  /* 12037376 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12037379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1203737b push ecx */
  push32((uint32_t)(ECX));
  /* 1203737c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1203737f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12037381 push eax */
  push32((uint32_t)(EAX));
  /* 12037382 call 0x12029f10 */
  push32(0x12037387u); f_12029f10();
  /* 12037387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1203738a:;
  /* 1203738a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1203738d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12037393 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12037396 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037399 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1203739c jmp 0x1203733b */
  goto L_1203733b;
L_1203739e:;
  /* 1203739e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120373a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120373a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120373aa:;
  /* 120373aa mov esp, ebp */
  ESP = (EBP);
  /* 120373ac pop ebp */
  EBP = (pop32());
  /* 120373ad ret  */
  ESPCHK(0x120372c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100173b0 @ 0x120373b0 (237 bytes, 81 insns) */
void f_120373b0(void) {
  FTRACE(0x120373b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120373b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120373b1 mov ebp, esp */
  EBP = (ESP);
  /* 120373b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120373b4 cmp dword ptr [0x12053f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12053f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120373bb jne 0x120373d2 */
  if (!C.zf) goto L_120373d2;
  /* 120373bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120373c0 push eax */
  push32((uint32_t)(EAX));
  /* 120373c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120373c4 push ecx */
  push32((uint32_t)(ECX));
  /* 120373c5 call 0x120374b0 */
  push32(0x120373cau); f_120374b0();
  /* 120373ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120373cd jmp 0x12037499 */
  goto L_12037499;
L_120373d2:;
  /* 120373d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120373d4 call 0x1202a960 */
  push32(0x120373d9u); f_1202a960();
  /* 120373d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120373dc jmp 0x120373e7 */
  goto L_120373e7;
L_120373de:;
  /* 120373de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120373e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120373e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120373e7:;
  /* 120373e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120373ea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 120373ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120373f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120373f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120373fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120373fd je 0x1203747b */
  if (C.zf) goto L_1203747b;
  /* 120373ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037402 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12037407 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12037409 mov cl, byte ptr [eax + 0x12054061] */
  CL = (r8((uint32_t)(EAX + 0x12054061)));
  /* 1203740f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12037412 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12037414 je 0x12037466 */
  if (C.zf) goto L_12037466;
  /* 12037416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037419 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1203741c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1203741f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037422 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12037424 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12037426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12037428 jne 0x12037438 */
  if (!C.zf) goto L_12037438;
  /* 1203742a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1203742c call 0x1202aa00 */
  push32(0x12037431u); f_1202aa00();
  /* 12037431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12037436 jmp 0x12037499 */
  goto L_12037499;
L_12037438:;
  /* 12037438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1203743b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12037441 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12037444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037447 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12037449 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1203744b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1203744d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037450 jne 0x12037464 */
  if (!C.zf) goto L_12037464;
  /* 12037452 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12037454 call 0x1202aa00 */
  push32(0x12037459u); f_1202aa00();
  /* 12037459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1203745c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1203745f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12037462 jmp 0x12037499 */
  goto L_12037499;
L_12037464:;
  /* 12037464 jmp 0x12037476 */
  goto L_12037476;
L_12037466:;
  /* 12037466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037469 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1203746f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037472 jne 0x12037476 */
  if (!C.zf) goto L_12037476;
  /* 12037474 jmp 0x1203747b */
  goto L_1203747b;
L_12037476:;
  /* 12037476 jmp 0x120373de */
  goto L_120373de;
L_1203747b:;
  /* 1203747b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1203747d call 0x1202aa00 */
  push32(0x12037482u); f_1202aa00();
  /* 12037482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12037485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12037488 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1203748d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12037490 jne 0x12037497 */
  if (!C.zf) goto L_12037497;
  /* 12037492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12037495 jmp 0x12037499 */
  goto L_12037499;
L_12037497:;
  /* 12037497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12037499:;
  /* 12037499 mov esp, ebp */
  ESP = (EBP);
  /* 1203749b pop ebp */
  EBP = (pop32());
  /* 1203749c ret  */
  ESPCHK(0x120373b0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x120374b0 (193 bytes, 87 insns) */
void f_120374b0(void) {
  FTRACE(0x120374b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120374b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120374b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 120374b6 push ebx */
  push32((uint32_t)(EBX));
  /* 120374b7 mov ebx, eax */
  EBX = (EAX);
  /* 120374b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120374bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 120374c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120374c6 je 0x120374db */
  if (C.zf) goto L_120374db;
L_120374c8:;
  /* 120374c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 120374ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120374cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120374cd je 0x120374a0 */
  if (C.zf) { jmp_ind(0x120374a0u); return; }
  /* 120374cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 120374d1 je 0x12037524 */
  if (C.zf) goto L_12037524;
  /* 120374d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120374d9 jne 0x120374c8 */
  if (!C.zf) goto L_120374c8;
L_120374db:;
  /* 120374db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 120374dd push edi */
  push32((uint32_t)(EDI));
  /* 120374de mov eax, ebx */
  EAX = (EBX);
  /* 120374e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 120374e3 push esi */
  push32((uint32_t)(ESI));
  /* 120374e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_120374e6:;
  /* 120374e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120374e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 120374ed mov eax, ecx */
  EAX = (ECX);
  /* 120374ef mov esi, edi */
  ESI = (EDI);
  /* 120374f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 120374f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120374f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120374f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120374fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120374fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120374ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12037501 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12037504 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1203750a jne 0x12037528 */
  if (!C.zf) goto L_12037528;
  /* 1203750c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12037511 je 0x120374e6 */
  if (C.zf) goto L_120374e6;
  /* 12037513 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12037518 jne 0x12037522 */
  if (!C.zf) goto L_12037522;
  /* 1203751a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12037520 jne 0x120374e6 */
  if (!C.zf) goto L_120374e6;
L_12037522:;
  /* 12037522 pop esi */
  ESI = (pop32());
  /* 12037523 pop edi */
  EDI = (pop32());
L_12037524:;
  /* 12037524 pop ebx */
  EBX = (pop32());
  /* 12037525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12037527 ret  */
  ESPCHK(0x120374b0u, _esp0);
  ESP += 4; return;
L_12037528:;
  /* 12037528 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1203752b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1203752d je 0x12037565 */
  if (C.zf) goto L_12037565;
  /* 1203752f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12037531 je 0x12037522 */
  if (C.zf) goto L_12037522;
  /* 12037533 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12037535 je 0x1203755e */
  if (C.zf) goto L_1203755e;
  /* 12037537 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12037539 je 0x12037522 */
  if (C.zf) goto L_12037522;
  /* 1203753b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1203753e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12037540 je 0x12037557 */
  if (C.zf) goto L_12037557;
  /* 12037542 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12037544 je 0x12037522 */
  if (C.zf) goto L_12037522;
  /* 12037546 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12037548 je 0x12037550 */
  if (C.zf) goto L_12037550;
  /* 1203754a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1203754c je 0x12037522 */
  if (C.zf) goto L_12037522;
  /* 1203754e jmp 0x120374e6 */
  goto L_120374e6;
L_12037550:;
  /* 12037550 pop esi */
  ESI = (pop32());
  /* 12037551 pop edi */
  EDI = (pop32());
  /* 12037552 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12037555 pop ebx */
  EBX = (pop32());
  /* 12037556 ret  */
  ESPCHK(0x120374b0u, _esp0);
  ESP += 4; return;
L_12037557:;
  /* 12037557 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1203755a pop esi */
  ESI = (pop32());
  /* 1203755b pop edi */
  EDI = (pop32());
  /* 1203755c pop ebx */
  EBX = (pop32());
  /* 1203755d ret  */
  ESPCHK(0x120374b0u, _esp0);
  ESP += 4; return;
L_1203755e:;
  /* 1203755e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12037561 pop esi */
  ESI = (pop32());
  /* 12037562 pop edi */
  EDI = (pop32());
  /* 12037563 pop ebx */
  EBX = (pop32());
  /* 12037564 ret  */
  ESPCHK(0x120374b0u, _esp0);
  ESP += 4; return;
L_12037565:;
  /* 12037565 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12037568 pop esi */
  ESI = (pop32());
  /* 12037569 pop edi */
  EDI = (pop32());
  /* 1203756a pop ebx */
  EBX = (pop32());
  /* 1203756b ret  */
  ESPCHK(0x120374b0u, _esp0);
  ESP += 4; return;
  /* 1203756c jmp dword ptr [0x120553a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120553a4)))); return;
}

/* RtlUnwind @ 0x120376bc (6 bytes, 1 insns) */
void f_120376bc(void) {
  FTRACE(0x120376bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120376bc jmp dword ptr [0x12055320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12055320)))); return;
}

