#include "recomp.h"

/* FUN_100061bc @ 0x118361bc (27 bytes, 13 insns) */
void f_118361bc(void) {
  FTRACE(0x118361bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118361bc mov eax, dword ptr [0x1183f778] */
  EAX = (r32((uint32_t)(0x1183f778)));
  /* 118361c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118361c3 je 0x118361d4 */
  if (C.zf) goto L_118361d4;
  /* 118361c5 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118361c9 call eax */
  call_ind((uint32_t)(EAX), 0x118361cbu);
  /* 118361cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118361cd pop ecx */
  ECX = (pop32());
  /* 118361ce je 0x118361d4 */
  if (C.zf) goto L_118361d4;
  /* 118361d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118361d2 pop eax */
  EAX = (pop32());
  /* 118361d3 ret  */
  ESPCHK(0x118361bcu, _esp0);
  ESP += 4; return;
L_118361d4:;
  /* 118361d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118361d6 ret  */
  ESPCHK(0x118361bcu, _esp0);
  ESP += 4; return;
}

/* FUN_100061d7 @ 0x118361d7 (53 bytes, 25 insns) */
void f_118361d7(void) {
  FTRACE(0x118361d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118361d7 push ebp */
  push32((uint32_t)(EBP));
  /* 118361d8 mov ebp, esp */
  EBP = (ESP);
  /* 118361da push ecx */
  push32((uint32_t)(ECX));
  /* 118361db push esi */
  push32((uint32_t)(ESI));
  /* 118361dc wait  */
  /* wait (no observable integer/reg state) */
  /* 118361dd fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 118361e0 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118361e3 call 0x11836222 */
  push32(0x118361e8u); f_11836222();
  /* 118361e8 mov esi, eax */
  ESI = (EAX);
  /* 118361ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118361ed not eax */
  EAX = (~(EAX));
  /* 118361ef and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 118361f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118361f4 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118361f7 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 118361f9 push esi */
  push32((uint32_t)(ESI));
  /* 118361fa call 0x118362b4 */
  push32(0x118361ffu); f_118362b4();
  /* 118361ff pop ecx */
  ECX = (pop32());
  /* 11836200 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11836203 pop ecx */
  ECX = (pop32());
  /* 11836204 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11836207 mov eax, esi */
  EAX = (ESI);
  /* 11836209 pop esi */
  ESI = (pop32());
  /* 1183620a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183620b ret  */
  ESPCHK(0x118361d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000620c @ 0x1183620c (22 bytes, 8 insns) */
void f_1183620c(void) {
  FTRACE(0x1183620cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183620c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836210 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836215 push eax */
  push32((uint32_t)(EAX));
  /* 11836216 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1183621a call 0x118361d7 */
  push32(0x1183621fu); f_118361d7();
  /* 1183621f pop ecx */
  ECX = (pop32());
  /* 11836220 pop ecx */
  ECX = (pop32());
  /* 11836221 ret  */
  ESPCHK(0x1183620cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006222 @ 0x11836222 (146 bytes, 58 insns) */
void f_11836222(void) {
  FTRACE(0x11836222u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836222 push ebx */
  push32((uint32_t)(EBX));
  /* 11836223 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836229 push ebp */
  push32((uint32_t)(EBP));
  /* 1183622a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1183622d push edi */
  push32((uint32_t)(EDI));
  /* 1183622e je 0x11836233 */
  if (C.zf) goto L_11836233;
  /* 11836230 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11836232 pop eax */
  EAX = (pop32());
L_11836233:;
  /* 11836233 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11836236 je 0x1183623a */
  if (C.zf) goto L_1183623a;
  /* 11836238 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_1183623a:;
  /* 1183623a test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1183623d je 0x11836241 */
  if (C.zf) goto L_11836241;
  /* 1183623f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11836241:;
  /* 11836241 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11836244 je 0x11836248 */
  if (C.zf) goto L_11836248;
  /* 11836246 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11836248:;
  /* 11836248 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 1183624b je 0x1183624f */
  if (C.zf) goto L_1183624f;
  /* 1183624d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_1183624f:;
  /* 1183624f test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11836252 je 0x11836259 */
  if (C.zf) goto L_11836259;
  /* 11836254 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11836259:;
  /* 11836259 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 1183625c push esi */
  push32((uint32_t)(ESI));
  /* 1183625d mov edx, ecx */
  EDX = (ECX);
  /* 1183625f mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11836264 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11836269 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1183626b mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11836270 je 0x11836291 */
  if (C.zf) goto L_11836291;
  /* 11836272 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836278 je 0x1183628e */
  if (C.zf) goto L_1183628e;
  /* 1183627a cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836280 je 0x1183628a */
  if (C.zf) goto L_1183628a;
  /* 11836282 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836284 jne 0x11836291 */
  if (!C.zf) goto L_11836291;
  /* 11836286 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11836288 jmp 0x11836291 */
  goto L_11836291;
L_1183628a:;
  /* 1183628a or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1183628c jmp 0x11836291 */
  goto L_11836291;
L_1183628e:;
  /* 1183628e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11836291:;
  /* 11836291 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11836293 pop esi */
  ESI = (pop32());
  /* 11836294 je 0x118362a1 */
  if (C.zf) goto L_118362a1;
  /* 11836296 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836298 jne 0x118362a6 */
  if (!C.zf) goto L_118362a6;
  /* 1183629a or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1183629f jmp 0x118362a6 */
  goto L_118362a6;
L_118362a1:;
  /* 118362a1 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_118362a6:;
  /* 118362a6 pop edi */
  EDI = (pop32());
  /* 118362a7 pop ebp */
  EBP = (pop32());
  /* 118362a8 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 118362ab pop ebx */
  EBX = (pop32());
  /* 118362ac je 0x118362b3 */
  if (C.zf) goto L_118362b3;
  /* 118362ae or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_118362b3:;
  /* 118362b3 ret  */
  ESPCHK(0x11836222u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b4 @ 0x118362b4 (137 bytes, 53 insns) */
void f_118362b4(void) {
  FTRACE(0x118362b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118362b4 push ebx */
  push32((uint32_t)(EBX));
  /* 118362b5 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118362b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118362bb push esi */
  push32((uint32_t)(ESI));
  /* 118362bc test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 118362bf je 0x118362c4 */
  if (C.zf) goto L_118362c4;
  /* 118362c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118362c3 pop eax */
  EAX = (pop32());
L_118362c4:;
  /* 118362c4 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 118362c7 je 0x118362cb */
  if (C.zf) goto L_118362cb;
  /* 118362c9 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_118362cb:;
  /* 118362cb test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 118362ce je 0x118362d2 */
  if (C.zf) goto L_118362d2;
  /* 118362d0 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_118362d2:;
  /* 118362d2 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 118362d5 je 0x118362d9 */
  if (C.zf) goto L_118362d9;
  /* 118362d7 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_118362d9:;
  /* 118362d9 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 118362dc je 0x118362e0 */
  if (C.zf) goto L_118362e0;
  /* 118362de or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_118362e0:;
  /* 118362e0 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 118362e6 je 0x118362ea */
  if (C.zf) goto L_118362ea;
  /* 118362e8 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_118362ea:;
  /* 118362ea mov ecx, ebx */
  ECX = (EBX);
  /* 118362ec mov edx, 0x300 */
  EDX = (0x300u);
  /* 118362f1 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118362f3 mov esi, 0x200 */
  ESI = (0x200u);
  /* 118362f8 je 0x11836317 */
  if (C.zf) goto L_11836317;
  /* 118362fa cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836300 je 0x11836314 */
  if (C.zf) goto L_11836314;
  /* 11836302 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836304 je 0x1183630f */
  if (C.zf) goto L_1183630f;
  /* 11836306 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836308 jne 0x11836317 */
  if (!C.zf) goto L_11836317;
  /* 1183630a or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1183630d jmp 0x11836317 */
  goto L_11836317;
L_1183630f:;
  /* 1183630f or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11836312 jmp 0x11836317 */
  goto L_11836317;
L_11836314:;
  /* 11836314 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11836317:;
  /* 11836317 mov ecx, ebx */
  ECX = (EBX);
  /* 11836319 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 1183631f je 0x1183632d */
  if (C.zf) goto L_1183632d;
  /* 11836321 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836327 jne 0x1183632f */
  if (!C.zf) goto L_1183632f;
  /* 11836329 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1183632b jmp 0x1183632f */
  goto L_1183632f;
L_1183632d:;
  /* 1183632d or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_1183632f:;
  /* 1183632f pop esi */
  ESI = (pop32());
  /* 11836330 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11836336 pop ebx */
  EBX = (pop32());
  /* 11836337 je 0x1183633c */
  if (C.zf) goto L_1183633c;
  /* 11836339 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1183633c:;
  /* 1183633c ret  */
  ESPCHK(0x118362b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000633d @ 0x1183633d (117 bytes, 46 insns) */
void f_1183633d(void) {
  FTRACE(0x1183633du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183633d push ebp */
  push32((uint32_t)(EBP));
  /* 1183633e mov ebp, esp */
  EBP = (ESP);
  /* 11836340 push ecx */
  push32((uint32_t)(ECX));
  /* 11836341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836344 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11836347 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183634d ja 0x1183635b */
  if ((!C.cf&&!C.zf)) goto L_1183635b;
  /* 1183634f mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 11836355 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11836359 jmp 0x118363ad */
  goto L_118363ad;
L_1183635b:;
  /* 1183635b mov ecx, eax */
  ECX = (EAX);
  /* 1183635d push esi */
  push32((uint32_t)(ESI));
  /* 1183635e mov esi, dword ptr [0x1183e8ec] */
  ESI = (r32((uint32_t)(0x1183e8ec)));
  /* 11836364 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11836367 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 1183636a test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1183636f pop esi */
  ESI = (pop32());
  /* 11836370 je 0x11836380 */
  if (C.zf) goto L_11836380;
  /* 11836372 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11836376 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11836379 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1183637c push 2 */
  push32((uint32_t)(0x2u));
  /* 1183637e jmp 0x11836389 */
  goto L_11836389;
L_11836380:;
  /* 11836380 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11836384 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11836387 push 1 */
  push32((uint32_t)(0x1u));
L_11836389:;
  /* 11836389 pop eax */
  EAX = (pop32());
  /* 1183638a lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1183638d push 1 */
  push32((uint32_t)(0x1u));
  /* 1183638f push 0 */
  push32((uint32_t)(0x0u));
  /* 11836391 push 0 */
  push32((uint32_t)(0x0u));
  /* 11836393 push ecx */
  push32((uint32_t)(ECX));
  /* 11836394 push eax */
  push32((uint32_t)(EAX));
  /* 11836395 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11836398 push eax */
  push32((uint32_t)(EAX));
  /* 11836399 push 1 */
  push32((uint32_t)(0x1u));
  /* 1183639b call 0x11838165 */
  push32(0x118363a0u); f_11838165();
  /* 118363a0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118363a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118363a5 jne 0x118363a9 */
  if (!C.zf) goto L_118363a9;
  /* 118363a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118363a8 ret  */
  ESPCHK(0x1183633du, _esp0);
  ESP += 4; return;
L_118363a9:;
  /* 118363a9 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_118363ad:;
  /* 118363ad and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 118363b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118363b1 ret  */
  ESPCHK(0x1183633du, _esp0);
  ESP += 4; return;
}

/* FUN_100063b2 @ 0x118363b2 (111 bytes, 44 insns) */
void f_118363b2(void) {
  FTRACE(0x118363b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118363b2 push ebx */
  push32((uint32_t)(EBX));
  /* 118363b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118363b5 cmp dword ptr [0x1183f798], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f798))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118363bb jne 0x118363d0 */
  if (!C.zf) goto L_118363d0;
  /* 118363bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118363c1 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118363c4 jl 0x1183641f */
  if ((C.sf!=C.of)) goto L_1183641f;
  /* 118363c6 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118363c9 jg 0x1183641f */
  if ((!C.zf&&C.sf==C.of)) goto L_1183641f;
  /* 118363cb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118363ce pop ebx */
  EBX = (pop32());
  /* 118363cf ret  */
  ESPCHK(0x118363b2u, _esp0);
  ESP += 4; return;
L_118363d0:;
  /* 118363d0 push esi */
  push32((uint32_t)(ESI));
  /* 118363d1 mov esi, 0x1183f860 */
  ESI = (0x1183f860u);
  /* 118363d6 push edi */
  push32((uint32_t)(EDI));
  /* 118363d7 push esi */
  push32((uint32_t)(ESI));
  /* 118363d8 call dword ptr [0x1183a04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a04c))), 0x118363deu);
  /* 118363de cmp dword ptr [0x1183f85c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f85c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118363e4 mov edi, dword ptr [0x1183a044] */
  EDI = (r32((uint32_t)(0x1183a044)));
  /* 118363ea je 0x118363fa */
  if (C.zf) goto L_118363fa;
  /* 118363ec push esi */
  push32((uint32_t)(ESI));
  /* 118363ed call edi */
  call_ind((uint32_t)(EDI), 0x118363efu);
  /* 118363ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118363f1 call 0x11834436 */
  push32(0x118363f6u); f_11834436();
  /* 118363f6 pop ecx */
  ECX = (pop32());
  /* 118363f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118363f9 pop ebx */
  EBX = (pop32());
L_118363fa:;
  /* 118363fa push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118363fe call 0x11836421 */
  push32(0x11836403u); f_11836421();
  /* 11836403 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11836405 pop ecx */
  ECX = (pop32());
  /* 11836406 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1183640a je 0x11836416 */
  if (C.zf) goto L_11836416;
  /* 1183640c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1183640e call 0x11834497 */
  push32(0x11836413u); f_11834497();
  /* 11836413 pop ecx */
  ECX = (pop32());
  /* 11836414 jmp 0x11836419 */
  goto L_11836419;
L_11836416:;
  /* 11836416 push esi */
  push32((uint32_t)(ESI));
  /* 11836417 call edi */
  call_ind((uint32_t)(EDI), 0x11836419u);
L_11836419:;
  /* 11836419 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1183641d pop edi */
  EDI = (pop32());
  /* 1183641e pop esi */
  ESI = (pop32());
L_1183641f:;
  /* 1183641f pop ebx */
  EBX = (pop32());
  /* 11836420 ret  */
  ESPCHK(0x118363b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006421 @ 0x11836421 (203 bytes, 78 insns) */
void f_11836421(void) {
  FTRACE(0x11836421u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836421 push ebp */
  push32((uint32_t)(EBP));
  /* 11836422 mov ebp, esp */
  EBP = (ESP);
  /* 11836424 push ecx */
  push32((uint32_t)(ECX));
  /* 11836425 cmp dword ptr [0x1183f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183642c push ebx */
  push32((uint32_t)(EBX));
  /* 1183642d push esi */
  push32((uint32_t)(ESI));
  /* 1183642e push edi */
  push32((uint32_t)(EDI));
  /* 1183642f jne 0x1183644e */
  if (!C.zf) goto L_1183644e;
  /* 11836431 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836434 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836437 jl 0x118364e7 */
  if ((C.sf!=C.of)) goto L_118364e7;
  /* 1183643d cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836440 jg 0x118364e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_118364e7;
  /* 11836446 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836449 jmp 0x118364e7 */
  goto L_118364e7;
L_1183644e:;
  /* 1183644e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836451 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11836456 push 1 */
  push32((uint32_t)(0x1u));
  /* 11836458 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183645a pop esi */
  ESI = (pop32());
  /* 1183645b jge 0x11836482 */
  if ((C.sf==C.of)) goto L_11836482;
  /* 1183645d cmp dword ptr [0x1183e8e0], esi */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836463 jle 0x11836470 */
  if ((C.zf||C.sf!=C.of)) goto L_11836470;
  /* 11836465 push esi */
  push32((uint32_t)(ESI));
  /* 11836466 push ebx */
  push32((uint32_t)(EBX));
  /* 11836467 call 0x1183633d */
  push32(0x1183646cu); f_1183633d();
  /* 1183646c pop ecx */
  ECX = (pop32());
  /* 1183646d pop ecx */
  ECX = (pop32());
  /* 1183646e jmp 0x1183647a */
  goto L_1183647a;
L_11836470:;
  /* 11836470 mov eax, dword ptr [0x1183e8ec] */
  EAX = (r32((uint32_t)(0x1183e8ec)));
  /* 11836475 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11836478 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1183647a:;
  /* 1183647a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183647c jne 0x11836482 */
  if (!C.zf) goto L_11836482;
L_1183647e:;
  /* 1183647e mov eax, ebx */
  EAX = (EBX);
  /* 11836480 jmp 0x118364e7 */
  goto L_118364e7;
L_11836482:;
  /* 11836482 mov edx, dword ptr [0x1183e8ec] */
  EDX = (r32((uint32_t)(0x1183e8ec)));
  /* 11836488 mov eax, ebx */
  EAX = (EBX);
  /* 1183648a sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1183648d movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11836490 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11836495 je 0x118364a6 */
  if (C.zf) goto L_118364a6;
  /* 11836497 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1183649b push 2 */
  push32((uint32_t)(0x2u));
  /* 1183649d mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 118364a0 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 118364a3 pop eax */
  EAX = (pop32());
  /* 118364a4 jmp 0x118364af */
  goto L_118364af;
L_118364a6:;
  /* 118364a6 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 118364aa mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 118364ad mov eax, esi */
  EAX = (ESI);
L_118364af:;
  /* 118364af push esi */
  push32((uint32_t)(ESI));
  /* 118364b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118364b2 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 118364b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 118364b7 push ecx */
  push32((uint32_t)(ECX));
  /* 118364b8 push eax */
  push32((uint32_t)(EAX));
  /* 118364b9 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118364bc push eax */
  push32((uint32_t)(EAX));
  /* 118364bd push edi */
  push32((uint32_t)(EDI));
  /* 118364be push dword ptr [0x1183f798] */
  push32((uint32_t)(r32((uint32_t)(0x1183f798))));
  /* 118364c4 call 0x118382ae */
  push32(0x118364c9u); f_118382ae();
  /* 118364c9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118364cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118364ce je 0x1183647e */
  if (C.zf) goto L_1183647e;
  /* 118364d0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118364d2 jne 0x118364da */
  if (!C.zf) goto L_118364da;
  /* 118364d4 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118364d8 jmp 0x118364e7 */
  goto L_118364e7;
L_118364da:;
  /* 118364da movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 118364de movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118364e2 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118364e5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118364e7:;
  /* 118364e7 pop edi */
  EDI = (pop32());
  /* 118364e8 pop esi */
  ESI = (pop32());
  /* 118364e9 pop ebx */
  EBX = (pop32());
  /* 118364ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118364eb ret  */
  ESPCHK(0x11836421u, _esp0);
  ESP += 4; return;
}

/* FUN_100064ec @ 0x118364ec (73 bytes, 36 insns) */
void f_118364ec(void) {
  FTRACE(0x118364ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118364ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118364f0 push esi */
  push32((uint32_t)(ESI));
  /* 118364f1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118364f3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118364f4 pop ecx */
  ECX = (pop32());
  /* 118364f5 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118364f7 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118364f9 mov esi, eax */
  ESI = (EAX);
  /* 118364fb mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118364ff cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11836500 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11836502 pop ecx */
  ECX = (pop32());
  /* 11836503 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836507 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836509 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1183650c shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1183650e not edx */
  EDX = (~(EDX));
  /* 11836510 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11836513 jne 0x11836531 */
  if (!C.zf) goto L_11836531;
  /* 11836515 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11836516 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836519 jge 0x1183652c */
  if ((C.sf==C.of)) goto L_1183652c;
  /* 1183651b lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_1183651e:;
  /* 1183651e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836521 jne 0x11836531 */
  if (!C.zf) goto L_11836531;
  /* 11836523 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11836524 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836527 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183652a jl 0x1183651e */
  if ((C.sf!=C.of)) goto L_1183651e;
L_1183652c:;
  /* 1183652c push 1 */
  push32((uint32_t)(0x1u));
  /* 1183652e pop eax */
  EAX = (pop32());
  /* 1183652f pop esi */
  ESI = (pop32());
  /* 11836530 ret  */
  ESPCHK(0x118364ecu, _esp0);
  ESP += 4; return;
L_11836531:;
  /* 11836531 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836533 pop esi */
  ESI = (pop32());
  /* 11836534 ret  */
  ESPCHK(0x118364ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10006535 @ 0x11836535 (86 bytes, 43 insns) */
void f_11836535(void) {
  FTRACE(0x11836535u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836535 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836539 push ebx */
  push32((uint32_t)(EBX));
  /* 1183653a push esi */
  push32((uint32_t)(ESI));
  /* 1183653b push edi */
  push32((uint32_t)(EDI));
  /* 1183653c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1183653e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11836542 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11836543 pop ecx */
  ECX = (pop32());
  /* 11836544 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11836546 mov esi, eax */
  ESI = (EAX);
  /* 11836548 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1183654c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1183654d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183654f lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11836552 push edi */
  push32((uint32_t)(EDI));
  /* 11836553 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11836555 pop ecx */
  ECX = (pop32());
  /* 11836556 push 1 */
  push32((uint32_t)(0x1u));
  /* 11836558 pop eax */
  EAX = (pop32());
  /* 11836559 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183655b shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1183655d push eax */
  push32((uint32_t)(EAX));
  /* 1183655e push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11836560 call 0x118384fd */
  push32(0x11836565u); f_118384fd();
  /* 11836565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11836568 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11836569 js 0x11836587 */
  if (C.sf) goto L_11836587;
  /* 1183656b lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1183656e:;
  /* 1183656e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11836570 je 0x11836587 */
  if (C.zf) goto L_11836587;
  /* 11836572 push edi */
  push32((uint32_t)(EDI));
  /* 11836573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11836575 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11836577 call 0x118384fd */
  push32(0x1183657cu); f_118384fd();
  /* 1183657c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183657f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11836580 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836583 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11836585 jge 0x1183656e */
  if ((C.sf==C.of)) goto L_1183656e;
L_11836587:;
  /* 11836587 pop edi */
  EDI = (pop32());
  /* 11836588 pop esi */
  ESI = (pop32());
  /* 11836589 pop ebx */
  EBX = (pop32());
  /* 1183658a ret  */
  ESPCHK(0x11836535u, _esp0);
  ESP += 4; return;
}

/* FUN_1000658b @ 0x1183658b (140 bytes, 71 insns) */
void f_1183658b(void) {
  FTRACE(0x1183658bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183658b push ebp */
  push32((uint32_t)(EBP));
  /* 1183658c mov ebp, esp */
  EBP = (ESP);
  /* 1183658e push ecx */
  push32((uint32_t)(ECX));
  /* 1183658f push ecx */
  push32((uint32_t)(ECX));
  /* 11836590 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836593 push ebx */
  push32((uint32_t)(EBX));
  /* 11836594 push esi */
  push32((uint32_t)(ESI));
  /* 11836595 push edi */
  push32((uint32_t)(EDI));
  /* 11836596 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11836599 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1183659b pop ecx */
  ECX = (pop32());
  /* 1183659c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118365a0 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 118365a3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118365a5 mov eax, ebx */
  EAX = (EBX);
  /* 118365a7 pop esi */
  ESI = (pop32());
  /* 118365a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118365a9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118365ab push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118365ad mov ecx, eax */
  ECX = (EAX);
  /* 118365af mov eax, ebx */
  EAX = (EBX);
  /* 118365b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118365b2 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118365b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118365b7 pop esi */
  ESI = (pop32());
  /* 118365b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118365ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118365bd lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 118365c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118365c3 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118365c5 pop edx */
  EDX = (pop32());
  /* 118365c6 mov ecx, esi */
  ECX = (ESI);
  /* 118365c8 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118365ca test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 118365cc je 0x118365ef */
  if (C.zf) goto L_118365ef;
  /* 118365ce inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118365cf push ebx */
  push32((uint32_t)(EBX));
  /* 118365d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118365d3 call 0x118364ec */
  push32(0x118365d8u); f_118364ec();
  /* 118365d8 pop ecx */
  ECX = (pop32());
  /* 118365d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118365db pop ecx */
  ECX = (pop32());
  /* 118365dc jne 0x118365ec */
  if (!C.zf) goto L_118365ec;
  /* 118365de push edi */
  push32((uint32_t)(EDI));
  /* 118365df push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118365e2 call 0x11836535 */
  push32(0x118365e7u); f_11836535();
  /* 118365e7 pop ecx */
  ECX = (pop32());
  /* 118365e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118365eb pop ecx */
  ECX = (pop32());
L_118365ec:;
  /* 118365ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118365ef:;
  /* 118365ef or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118365f2 mov ecx, esi */
  ECX = (ESI);
  /* 118365f4 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118365f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 118365f8 pop ecx */
  ECX = (pop32());
  /* 118365f9 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118365fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118365fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118365ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836601 jge 0x1183660f */
  if ((C.sf==C.of)) goto L_1183660f;
  /* 11836603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836606 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836608 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1183660b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183660d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1183660f:;
  /* 1183660f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11836612 pop edi */
  EDI = (pop32());
  /* 11836613 pop esi */
  ESI = (pop32());
  /* 11836614 pop ebx */
  EBX = (pop32());
  /* 11836615 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836616 ret  */
  ESPCHK(0x1183658bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006617 @ 0x11836617 (27 bytes, 13 insns) */
void f_11836617(void) {
  FTRACE(0x11836617u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836617 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1183661b mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1183661f push esi */
  push32((uint32_t)(ESI));
  /* 11836620 push 3 */
  push32((uint32_t)(0x3u));
  /* 11836622 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836624 pop edx */
  EDX = (pop32());
L_11836625:;
  /* 11836625 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11836627 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 1183662a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183662d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1183662e jne 0x11836625 */
  if (!C.zf) goto L_11836625;
  /* 11836630 pop esi */
  ESI = (pop32());
  /* 11836631 ret  */
  ESPCHK(0x11836617u, _esp0);
  ESP += 4; return;
}

/* FUN_10006632 @ 0x11836632 (12 bytes, 8 insns) */
void f_11836632(void) {
  FTRACE(0x11836632u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836632 push edi */
  push32((uint32_t)(EDI));
  /* 11836633 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11836637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1183663a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1183663b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1183663c pop edi */
  EDI = (pop32());
  /* 1183663d ret  */
  ESPCHK(0x11836632u, _esp0);
  ESP += 4; return;
}

/* FUN_1000663e @ 0x1183663e (27 bytes, 13 insns) */
void f_1183663e(void) {
  FTRACE(0x1183663eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183663e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836642 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11836644:;
  /* 11836644 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836647 jne 0x11836656 */
  if (!C.zf) goto L_11836656;
  /* 11836649 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183664a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183664d cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836650 jl 0x11836644 */
  if ((C.sf!=C.of)) goto L_11836644;
  /* 11836652 push 1 */
  push32((uint32_t)(0x1u));
  /* 11836654 pop eax */
  EAX = (pop32());
  /* 11836655 ret  */
  ESPCHK(0x1183663eu, _esp0);
  ESP += 4; return;
L_11836656:;
  /* 11836656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836658 ret  */
  ESPCHK(0x1183663eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006659 @ 0x11836659 (141 bytes, 64 insns) */
void f_11836659(void) {
  FTRACE(0x11836659u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836659 push ebp */
  push32((uint32_t)(EBP));
  /* 1183665a mov ebp, esp */
  EBP = (ESP);
  /* 1183665c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183665f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836662 push ebx */
  push32((uint32_t)(EBX));
  /* 11836663 push esi */
  push32((uint32_t)(ESI));
  /* 11836664 push edi */
  push32((uint32_t)(EDI));
  /* 11836665 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11836667 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1183666a pop ebx */
  EBX = (pop32());
  /* 1183666b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1183666e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1183666f mov ecx, ebx */
  ECX = (EBX);
  /* 11836671 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11836678 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183667a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1183667d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836680 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11836681 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11836683 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11836687 mov ecx, edx */
  ECX = (EDX);
  /* 11836689 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1183668b sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183668d not esi */
  ESI = (~(ESI));
L_1183668f:;
  /* 1183668f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11836691 mov ecx, eax */
  ECX = (EAX);
  /* 11836693 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11836695 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11836698 mov ecx, edx */
  ECX = (EDX);
  /* 1183669a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1183669c or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1183669f mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118366a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118366a4 mov ecx, ebx */
  ECX = (EBX);
  /* 118366a6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118366a9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 118366ab dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118366ae mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118366b1 jne 0x1183668f */
  if (!C.zf) goto L_1183668f;
  /* 118366b3 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 118366b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118366b8 pop ebx */
  EBX = (pop32());
  /* 118366b9 mov esi, edi */
  ESI = (EDI);
  /* 118366bb push 8 */
  push32((uint32_t)(0x8u));
  /* 118366bd pop ecx */
  ECX = (pop32());
  /* 118366be shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_118366c1:;
  /* 118366c1 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118366c3 jl 0x118366d4 */
  if ((C.sf!=C.of)) goto L_118366d4;
  /* 118366c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118366c8 mov eax, ecx */
  EAX = (ECX);
  /* 118366ca sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118366cc mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 118366cf mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 118366d2 jmp 0x118366db */
  goto L_118366db;
L_118366d4:;
  /* 118366d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118366d7 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_118366db:;
  /* 118366db dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118366dc sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118366df jns 0x118366c1 */
  if (!C.sf) goto L_118366c1;
  /* 118366e1 pop edi */
  EDI = (pop32());
  /* 118366e2 pop esi */
  ESI = (pop32());
  /* 118366e3 pop ebx */
  EBX = (pop32());
  /* 118366e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118366e5 ret  */
  ESPCHK(0x11836659u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e6 @ 0x118366e6 (364 bytes, 138 insns) */
void f_118366e6(void) {
  FTRACE(0x118366e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118366e6 push ebp */
  push32((uint32_t)(EBP));
  /* 118366e7 mov ebp, esp */
  EBP = (ESP);
  /* 118366e9 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118366ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118366ef push ebx */
  push32((uint32_t)(EBX));
  /* 118366f0 push esi */
  push32((uint32_t)(ESI));
  /* 118366f1 push edi */
  push32((uint32_t)(EDI));
  /* 118366f2 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 118366f6 mov ebx, ecx */
  EBX = (ECX);
  /* 118366f8 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 118366fe mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11836701 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11836704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11836707 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1183670a movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1183670d mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11836710 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11836716 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183671c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1183671f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11836722 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836728 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1183672b jne 0x11836753 */
  if (!C.zf) goto L_11836753;
  /* 1183672d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836730 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11836732 push eax */
  push32((uint32_t)(EAX));
  /* 11836733 call 0x1183663e */
  push32(0x11836738u); f_1183663e();
  /* 11836738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183673a pop ecx */
  ECX = (pop32());
  /* 1183673b jne 0x11836812 */
  if (!C.zf) goto L_11836812;
  /* 11836741 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836744 push eax */
  push32((uint32_t)(EAX));
  /* 11836745 call 0x11836632 */
  push32(0x1183674au); f_11836632();
  /* 1183674a pop ecx */
  ECX = (pop32());
L_1183674b:;
  /* 1183674b push 2 */
  push32((uint32_t)(0x2u));
L_1183674d:;
  /* 1183674d pop eax */
  EAX = (pop32());
  /* 1183674e jmp 0x11836814 */
  goto L_11836814;
L_11836753:;
  /* 11836753 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836756 push eax */
  push32((uint32_t)(EAX));
  /* 11836757 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1183675a push eax */
  push32((uint32_t)(EAX));
  /* 1183675b call 0x11836617 */
  push32(0x11836760u); f_11836617();
  /* 11836760 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11836763 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836766 push eax */
  push32((uint32_t)(EAX));
  /* 11836767 call 0x1183658b */
  push32(0x1183676cu); f_1183658b();
  /* 1183676c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183676f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11836771 je 0x11836774 */
  if (C.zf) goto L_11836774;
  /* 11836773 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11836774:;
  /* 11836774 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11836777 mov ecx, eax */
  ECX = (EAX);
  /* 11836779 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183677c cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183677e jge 0x1183678c */
  if ((C.sf==C.of)) goto L_1183678c;
  /* 11836780 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836783 push eax */
  push32((uint32_t)(EAX));
  /* 11836784 call 0x11836632 */
  push32(0x11836789u); f_11836632();
  /* 11836789 pop ecx */
  ECX = (pop32());
  /* 1183678a jmp 0x118367c8 */
  goto L_118367c8;
L_1183678c:;
  /* 1183678c cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183678e jg 0x118367cf */
  if ((!C.zf&&C.sf==C.of)) goto L_118367cf;
  /* 11836790 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836792 mov esi, eax */
  ESI = (EAX);
  /* 11836794 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11836797 push eax */
  push32((uint32_t)(EAX));
  /* 11836798 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1183679b push eax */
  push32((uint32_t)(EAX));
  /* 1183679c call 0x11836617 */
  push32(0x118367a1u); f_11836617();
  /* 118367a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118367a4 push esi */
  push32((uint32_t)(ESI));
  /* 118367a5 push eax */
  push32((uint32_t)(EAX));
  /* 118367a6 call 0x11836659 */
  push32(0x118367abu); f_11836659();
  /* 118367ab push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 118367ae lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118367b1 push eax */
  push32((uint32_t)(EAX));
  /* 118367b2 call 0x1183658b */
  push32(0x118367b7u); f_1183658b();
  /* 118367b7 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 118367ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118367bb push eax */
  push32((uint32_t)(EAX));
  /* 118367bc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118367bf push eax */
  push32((uint32_t)(EAX));
  /* 118367c0 call 0x11836659 */
  push32(0x118367c5u); f_11836659();
  /* 118367c5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118367c8:;
  /* 118367c8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118367ca jmp 0x1183674b */
  goto L_1183674b;
L_118367cf:;
  /* 118367cf cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118367d1 jl 0x118367fb */
  if ((C.sf!=C.of)) goto L_118367fb;
  /* 118367d3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118367d6 push eax */
  push32((uint32_t)(EAX));
  /* 118367d7 call 0x11836632 */
  push32(0x118367dcu); f_11836632();
  /* 118367dc push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 118367df or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 118367e3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118367e6 push eax */
  push32((uint32_t)(EAX));
  /* 118367e7 call 0x11836659 */
  push32(0x118367ecu); f_11836659();
  /* 118367ec mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 118367ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118367f2 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118367f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118367f6 jmp 0x1183674d */
  goto L_1183674d;
L_118367fb:;
  /* 118367fb push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 118367fe mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11836801 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11836805 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836808 push eax */
  push32((uint32_t)(EAX));
  /* 11836809 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183680b call 0x11836659 */
  push32(0x11836810u); f_11836659();
  /* 11836810 pop ecx */
  ECX = (pop32());
  /* 11836811 pop ecx */
  ECX = (pop32());
L_11836812:;
  /* 11836812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11836814:;
  /* 11836814 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11836816 pop ecx */
  ECX = (pop32());
  /* 11836817 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183681a mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 1183681d shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1183681f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836822 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11836824 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836826 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1183682c or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1183682e or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11836831 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836834 jne 0x11836843 */
  if (!C.zf) goto L_11836843;
  /* 11836836 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836839 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1183683c mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1183683f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11836841 jmp 0x1183684d */
  goto L_1183684d;
L_11836843:;
  /* 11836843 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836846 jne 0x1183684d */
  if (!C.zf) goto L_1183684d;
  /* 11836848 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1183684b mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1183684d:;
  /* 1183684d pop edi */
  EDI = (pop32());
  /* 1183684e pop esi */
  ESI = (pop32());
  /* 1183684f pop ebx */
  EBX = (pop32());
  /* 11836850 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836851 ret  */
  ESPCHK(0x118366e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006852 @ 0x11836852 (22 bytes, 6 insns) */
void f_11836852(void) {
  FTRACE(0x11836852u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836852 push 0x1183eaf8 */
  push32((uint32_t)(0x1183eaf8u));
  /* 11836857 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1183685b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1183685f call 0x118366e6 */
  push32(0x11836864u); f_118366e6();
  /* 11836864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11836867 ret  */
  ESPCHK(0x11836852u, _esp0);
  ESP += 4; return;
}

/* FUN_10006868 @ 0x11836868 (22 bytes, 6 insns) */
void f_11836868(void) {
  FTRACE(0x11836868u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836868 push 0x1183eb10 */
  push32((uint32_t)(0x1183eb10u));
  /* 1183686d push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11836871 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11836875 call 0x118366e6 */
  push32(0x1183687au); f_118366e6();
  /* 1183687a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183687d ret  */
  ESPCHK(0x11836868u, _esp0);
  ESP += 4; return;
}

/* FUN_1000687e @ 0x1183687e (45 bytes, 21 insns) */
void f_1183687e(void) {
  FTRACE(0x1183687eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183687e push ebp */
  push32((uint32_t)(EBP));
  /* 1183687f mov ebp, esp */
  EBP = (ESP);
  /* 11836881 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836886 push eax */
  push32((uint32_t)(EAX));
  /* 11836887 push eax */
  push32((uint32_t)(EAX));
  /* 11836888 push eax */
  push32((uint32_t)(EAX));
  /* 11836889 push eax */
  push32((uint32_t)(EAX));
  /* 1183688a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183688d lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11836890 push eax */
  push32((uint32_t)(EAX));
  /* 11836891 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11836894 push eax */
  push32((uint32_t)(EAX));
  /* 11836895 call 0x1183869e */
  push32(0x1183689au); f_1183869e();
  /* 1183689a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1183689d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118368a0 push eax */
  push32((uint32_t)(EAX));
  /* 118368a1 call 0x11836852 */
  push32(0x118368a6u); f_11836852();
  /* 118368a6 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118368a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118368aa ret  */
  ESPCHK(0x1183687eu, _esp0);
  ESP += 4; return;
}

/* FUN_100068ab @ 0x118368ab (45 bytes, 21 insns) */
void f_118368ab(void) {
  FTRACE(0x118368abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118368ab push ebp */
  push32((uint32_t)(EBP));
  /* 118368ac mov ebp, esp */
  EBP = (ESP);
  /* 118368ae sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118368b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118368b3 push eax */
  push32((uint32_t)(EAX));
  /* 118368b4 push eax */
  push32((uint32_t)(EAX));
  /* 118368b5 push eax */
  push32((uint32_t)(EAX));
  /* 118368b6 push eax */
  push32((uint32_t)(EAX));
  /* 118368b7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118368ba lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118368bd push eax */
  push32((uint32_t)(EAX));
  /* 118368be lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118368c1 push eax */
  push32((uint32_t)(EAX));
  /* 118368c2 call 0x1183869e */
  push32(0x118368c7u); f_1183869e();
  /* 118368c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118368ca lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118368cd push eax */
  push32((uint32_t)(EAX));
  /* 118368ce call 0x11836868 */
  push32(0x118368d3u); f_11836868();
  /* 118368d3 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118368d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118368d7 ret  */
  ESPCHK(0x118368abu, _esp0);
  ESP += 4; return;
}

/* FUN_100068d8 @ 0x118368d8 (119 bytes, 57 insns) */
void f_118368d8(void) {
  FTRACE(0x118368d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118368d8 push ebp */
  push32((uint32_t)(EBP));
  /* 118368d9 mov ebp, esp */
  EBP = (ESP);
  /* 118368db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118368de push ebx */
  push32((uint32_t)(EBX));
  /* 118368df mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118368e2 push esi */
  push32((uint32_t)(ESI));
  /* 118368e3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118368e6 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 118368e9 push edi */
  push32((uint32_t)(EDI));
  /* 118368ea lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 118368ed mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 118368f0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118368f2 mov eax, edi */
  EAX = (EDI);
  /* 118368f4 jle 0x11836915 */
  if ((C.zf||C.sf!=C.of)) goto L_11836915;
  /* 118368f6 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 118368f9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118368fb:;
  /* 118368fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118368fd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118368ff je 0x11836907 */
  if (C.zf) goto L_11836907;
  /* 11836901 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11836904 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11836905 jmp 0x1183690a */
  goto L_1183690a;
L_11836907:;
  /* 11836907 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11836909 pop edx */
  EDX = (pop32());
L_1183690a:;
  /* 1183690a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1183690c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183690d dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11836910 jne 0x118368fb */
  if (!C.zf) goto L_118368fb;
  /* 11836912 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11836915:;
  /* 11836915 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11836918 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1183691a jl 0x1183692e */
  if ((C.sf!=C.of)) goto L_1183692e;
  /* 1183691c cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183691f jl 0x1183692e */
  if ((C.sf!=C.of)) goto L_1183692e;
L_11836921:;
  /* 11836921 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11836922 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11836925 jne 0x1183692c */
  if (!C.zf) goto L_1183692c;
  /* 11836927 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1183692a jmp 0x11836921 */
  goto L_11836921;
L_1183692c:;
  /* 1183692c inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1183692e:;
  /* 1183692e cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11836931 jne 0x11836938 */
  if (!C.zf) goto L_11836938;
  /* 11836933 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11836936 jmp 0x1183694a */
  goto L_1183694a;
L_11836938:;
  /* 11836938 push edi */
  push32((uint32_t)(EDI));
  /* 11836939 call 0x11836bc0 */
  push32(0x1183693eu); f_11836bc0();
  /* 1183693e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183693f push eax */
  push32((uint32_t)(EAX));
  /* 11836940 push edi */
  push32((uint32_t)(EDI));
  /* 11836941 push esi */
  push32((uint32_t)(ESI));
  /* 11836942 call 0x11835e70 */
  push32(0x11836947u); f_11835e70();
  /* 11836947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1183694a:;
  /* 1183694a pop edi */
  EDI = (pop32());
  /* 1183694b pop esi */
  ESI = (pop32());
  /* 1183694c pop ebx */
  EBX = (pop32());
  /* 1183694d pop ebp */
  EBP = (pop32());
  /* 1183694e ret  */
  ESPCHK(0x118368d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000694f @ 0x1183694f (92 bytes, 41 insns) */
void f_1183694f(void) {
  FTRACE(0x1183694fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183694f push ebp */
  push32((uint32_t)(EBP));
  /* 11836950 mov ebp, esp */
  EBP = (ESP);
  /* 11836952 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836955 push esi */
  push32((uint32_t)(ESI));
  /* 11836956 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11836959 push edi */
  push32((uint32_t)(EDI));
  /* 1183695a push eax */
  push32((uint32_t)(EAX));
  /* 1183695b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1183695e push eax */
  push32((uint32_t)(EAX));
  /* 1183695f call 0x118369ab */
  push32(0x11836964u); f_118369ab();
  /* 11836964 pop ecx */
  ECX = (pop32());
  /* 11836965 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11836968 pop ecx */
  ECX = (pop32());
  /* 11836969 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 1183696c push eax */
  push32((uint32_t)(EAX));
  /* 1183696d push 0 */
  push32((uint32_t)(0x0u));
  /* 1183696f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11836971 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836974 mov edi, esp */
  EDI = (ESP);
  /* 11836976 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11836977 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11836978 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 1183697a call 0x11838b6f */
  push32(0x1183697fu); f_11838b6f();
  /* 1183697f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11836982 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11836985 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11836988 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 1183698c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1183698e movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11836992 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11836995 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11836998 push eax */
  push32((uint32_t)(EAX));
  /* 11836999 push edi */
  push32((uint32_t)(EDI));
  /* 1183699a call 0x11836a70 */
  push32(0x1183699fu); f_11836a70();
  /* 1183699f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118369a2 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 118369a5 mov eax, esi */
  EAX = (ESI);
  /* 118369a7 pop edi */
  EDI = (pop32());
  /* 118369a8 pop esi */
  ESI = (pop32());
  /* 118369a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118369aa ret  */
  ESPCHK(0x1183694fu, _esp0);
  ESP += 4; return;
}

/* FUN_100069ab @ 0x118369ab (182 bytes, 70 insns) */
void f_118369ab(void) {
  FTRACE(0x118369abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118369ab push ebp */
  push32((uint32_t)(EBP));
  /* 118369ac mov ebp, esp */
  EBP = (ESP);
  /* 118369ae push ecx */
  push32((uint32_t)(ECX));
  /* 118369af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118369b2 push ebx */
  push32((uint32_t)(EBX));
  /* 118369b3 push esi */
  push32((uint32_t)(ESI));
  /* 118369b4 push edi */
  push32((uint32_t)(EDI));
  /* 118369b5 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 118369b9 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 118369be mov ecx, eax */
  ECX = (EAX);
  /* 118369c0 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 118369c5 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118369c8 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118369ca mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118369cd mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 118369d0 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 118369d2 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 118369d5 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118369da and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118369df test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118369e1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118369e4 je 0x118369f9 */
  if (C.zf) goto L_118369f9;
  /* 118369e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118369e8 je 0x118369f2 */
  if (C.zf) goto L_118369f2;
  /* 118369ea lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 118369f0 jmp 0x11836a1a */
  goto L_11836a1a;
L_118369f2:;
  /* 118369f2 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 118369f7 jmp 0x11836a1a */
  goto L_11836a1a;
L_118369f9:;
  /* 118369f9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118369fb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118369fd jne 0x11836a11 */
  if (!C.zf) goto L_11836a11;
  /* 118369ff cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836a01 jne 0x11836a11 */
  if (!C.zf) goto L_11836a11;
  /* 11836a03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836a06 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11836a09 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11836a0b mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11836a0f jmp 0x11836a5c */
  goto L_11836a5c;
L_11836a11:;
  /* 11836a11 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11836a17 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11836a1a:;
  /* 11836a1a mov ecx, edx */
  ECX = (EDX);
  /* 11836a1c shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11836a1f shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11836a22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11836a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836a27 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11836a2a shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11836a2d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11836a30 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11836a32:;
  /* 11836a32 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11836a34 jne 0x11836a53 */
  if (!C.zf) goto L_11836a53;
  /* 11836a36 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11836a38 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836a3a mov ebx, edx */
  EBX = (EDX);
  /* 11836a3c shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11836a3f or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11836a41 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11836a44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11836a46 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11836a49 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11836a4f mov ecx, ebx */
  ECX = (EBX);
  /* 11836a51 jmp 0x11836a32 */
  goto L_11836a32;
L_11836a53:;
  /* 11836a53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836a56 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11836a58 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11836a5c:;
  /* 11836a5c pop edi */
  EDI = (pop32());
  /* 11836a5d pop esi */
  ESI = (pop32());
  /* 11836a5e pop ebx */
  EBX = (pop32());
  /* 11836a5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836a60 ret  */
  ESPCHK(0x118369abu, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x11836a70 (7 bytes, 3 insns) */
void f_11836a70(void) {
  FTRACE(0x11836a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836a70 push edi */
  push32((uint32_t)(EDI));
  /* 11836a71 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11836a75 jmp 0x11836ae1 */
  jmp_ind(0x11836ae1u); return;
}

/* FUN_10006a80 @ 0x11836a80 (224 bytes, 84 insns) */
void f_11836a80(void) {
  FTRACE(0x11836a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836a80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836a84 push edi */
  push32((uint32_t)(EDI));
  /* 11836a85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836a8b je 0x11836a9c */
  if (C.zf) goto L_11836a9c;
L_11836a8d:;
  /* 11836a8d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11836a8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11836a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11836a92 je 0x11836acf */
  if (C.zf) goto L_11836acf;
  /* 11836a94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836a9a jne 0x11836a8d */
  if (!C.zf) goto L_11836a8d;
L_11836a9c:;
  /* 11836a9c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11836a9e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11836aa3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836aa5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836aa8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11836aaa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836aad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11836ab2 je 0x11836a9c */
  if (C.zf) goto L_11836a9c;
  /* 11836ab4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11836ab7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11836ab9 je 0x11836ade */
  if (C.zf) goto L_11836ade;
  /* 11836abb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11836abd je 0x11836ad9 */
  if (C.zf) goto L_11836ad9;
  /* 11836abf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11836ac4 je 0x11836ad4 */
  if (C.zf) goto L_11836ad4;
  /* 11836ac6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11836acb je 0x11836acf */
  if (C.zf) goto L_11836acf;
  /* 11836acd jmp 0x11836a9c */
  goto L_11836a9c;
L_11836acf:;
  /* 11836acf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11836ad2 jmp 0x11836ae1 */
  goto L_11836ae1;
L_11836ad4:;
  /* 11836ad4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11836ad7 jmp 0x11836ae1 */
  goto L_11836ae1;
L_11836ad9:;
  /* 11836ad9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11836adc jmp 0x11836ae1 */
  goto L_11836ae1;
L_11836ade:;
  /* 11836ade lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11836ae1:;
  /* 11836ae1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11836ae5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836aeb je 0x11836b06 */
  if (C.zf) goto L_11836b06;
L_11836aed:;
  /* 11836aed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11836aef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11836af0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11836af2 je 0x11836b58 */
  if (C.zf) goto L_11836b58;
  /* 11836af4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11836af6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11836af7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836afd jne 0x11836aed */
  if (!C.zf) goto L_11836aed;
  /* 11836aff jmp 0x11836b06 */
  goto L_11836b06;
L_11836b01:;
  /* 11836b01 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11836b03 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11836b06:;
  /* 11836b06 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11836b0b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11836b0d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836b0f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836b12 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11836b14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11836b16 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836b19 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11836b1e je 0x11836b01 */
  if (C.zf) goto L_11836b01;
  /* 11836b20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11836b22 je 0x11836b58 */
  if (C.zf) goto L_11836b58;
  /* 11836b24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11836b26 je 0x11836b4f */
  if (C.zf) goto L_11836b4f;
  /* 11836b28 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11836b2e je 0x11836b42 */
  if (C.zf) goto L_11836b42;
  /* 11836b30 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11836b36 je 0x11836b3a */
  if (C.zf) goto L_11836b3a;
  /* 11836b38 jmp 0x11836b01 */
  goto L_11836b01;
L_11836b3a:;
  /* 11836b3a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11836b3c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836b40 pop edi */
  EDI = (pop32());
  /* 11836b41 ret  */
  ESPCHK(0x11836a80u, _esp0);
  ESP += 4; return;
L_11836b42:;
  /* 11836b42 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11836b45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836b49 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11836b4d pop edi */
  EDI = (pop32());
  /* 11836b4e ret  */
  ESPCHK(0x11836a80u, _esp0);
  ESP += 4; return;
L_11836b4f:;
  /* 11836b4f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11836b52 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836b56 pop edi */
  EDI = (pop32());
  /* 11836b57 ret  */
  ESPCHK(0x11836a80u, _esp0);
  ESP += 4; return;
L_11836b58:;
  /* 11836b58 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11836b5a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836b5e pop edi */
  EDI = (pop32());
  /* 11836b5f ret  */
  ESPCHK(0x11836a80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11836b60 (88 bytes, 40 insns) */
void f_11836b60(void) {
  FTRACE(0x11836b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836b60 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11836b64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836b68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11836b6a je 0x11836bb3 */
  if (C.zf) goto L_11836bb3;
  /* 11836b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836b6e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11836b72 push edi */
  push32((uint32_t)(EDI));
  /* 11836b73 mov edi, ecx */
  EDI = (ECX);
  /* 11836b75 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836b78 jb 0x11836ba7 */
  if (C.cf) goto L_11836ba7;
  /* 11836b7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11836b7c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11836b7f je 0x11836b89 */
  if (C.zf) goto L_11836b89;
  /* 11836b81 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11836b83:;
  /* 11836b83 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11836b85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11836b86 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11836b87 jne 0x11836b83 */
  if (!C.zf) goto L_11836b83;
L_11836b89:;
  /* 11836b89 mov ecx, eax */
  ECX = (EAX);
  /* 11836b8b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11836b8e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836b90 mov ecx, eax */
  ECX = (EAX);
  /* 11836b92 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11836b95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836b97 mov ecx, edx */
  ECX = (EDX);
  /* 11836b99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11836b9c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11836b9f je 0x11836ba7 */
  if (C.zf) goto L_11836ba7;
  /* 11836ba1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11836ba3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11836ba5 je 0x11836bad */
  if (C.zf) goto L_11836bad;
L_11836ba7:;
  /* 11836ba7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11836ba9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11836baa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11836bab jne 0x11836ba7 */
  if (!C.zf) goto L_11836ba7;
L_11836bad:;
  /* 11836bad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836bb1 pop edi */
  EDI = (pop32());
  /* 11836bb2 ret  */
  ESPCHK(0x11836b60u, _esp0);
  ESP += 4; return;
L_11836bb3:;
  /* 11836bb3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836bb7 ret  */
  ESPCHK(0x11836b60u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11836bc0 (123 bytes, 44 insns) */
void f_11836bc0(void) {
  FTRACE(0x11836bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836bc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836bc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836bca je 0x11836be0 */
  if (C.zf) goto L_11836be0;
L_11836bcc:;
  /* 11836bcc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11836bce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11836bcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11836bd1 je 0x11836c13 */
  if (C.zf) goto L_11836c13;
  /* 11836bd3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11836bd9 jne 0x11836bcc */
  if (!C.zf) goto L_11836bcc;
  /* 11836bdb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11836be0:;
  /* 11836be0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11836be2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11836be7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836be9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836bec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11836bee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836bf1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11836bf6 je 0x11836be0 */
  if (C.zf) goto L_11836be0;
  /* 11836bf8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11836bfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11836bfd je 0x11836c31 */
  if (C.zf) goto L_11836c31;
  /* 11836bff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11836c01 je 0x11836c27 */
  if (C.zf) goto L_11836c27;
  /* 11836c03 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11836c08 je 0x11836c1d */
  if (C.zf) goto L_11836c1d;
  /* 11836c0a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11836c0f je 0x11836c13 */
  if (C.zf) goto L_11836c13;
  /* 11836c11 jmp 0x11836be0 */
  goto L_11836be0;
L_11836c13:;
  /* 11836c13 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11836c16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836c1a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836c1c ret  */
  ESPCHK(0x11836bc0u, _esp0);
  ESP += 4; return;
L_11836c1d:;
  /* 11836c1d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11836c20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836c24 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836c26 ret  */
  ESPCHK(0x11836bc0u, _esp0);
  ESP += 4; return;
L_11836c27:;
  /* 11836c27 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11836c2a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836c2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836c30 ret  */
  ESPCHK(0x11836bc0u, _esp0);
  ESP += 4; return;
L_11836c31:;
  /* 11836c31 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11836c34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836c38 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836c3a ret  */
  ESPCHK(0x11836bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc5 @ 0x11836cc5 (115 bytes, 37 insns) */
void f_11836cc5(void) {
  FTRACE(0x11836cc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836cc5 push esi */
  push32((uint32_t)(ESI));
  /* 11836cc6 call 0x11836d41 */
  push32(0x11836ccbu); f_11836d41();
  /* 11836ccb mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836ccf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11836cd1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11836cd3 mov eax, 0x1183eb30 */
  EAX = (0x1183eb30u);
L_11836cd8:;
  /* 11836cd8 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836cda je 0x11836cfe */
  if (C.zf) goto L_11836cfe;
  /* 11836cdc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836cdf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11836ce0 cmp eax, 0x1183ec98 */
  { uint32_t _a=(EAX),_b=(0x1183ec98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836ce5 jl 0x11836cd8 */
  if ((C.sf!=C.of)) goto L_11836cd8;
  /* 11836ce7 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836cea jb 0x11836d0e */
  if (C.cf) goto L_11836d0e;
  /* 11836cec cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836cef ja 0x11836d0e */
  if ((!C.cf&&!C.zf)) goto L_11836d0e;
  /* 11836cf1 call 0x11836d38 */
  push32(0x11836cf6u); f_11836d38();
  /* 11836cf6 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11836cfc pop esi */
  ESI = (pop32());
  /* 11836cfd ret  */
  ESPCHK(0x11836cc5u, _esp0);
  ESP += 4; return;
L_11836cfe:;
  /* 11836cfe call 0x11836d38 */
  push32(0x11836d03u); f_11836d38();
  /* 11836d03 mov ecx, dword ptr [esi*8 + 0x1183eb34] */
  ECX = (r32((uint32_t)(ESI*8 + 0x1183eb34)));
  /* 11836d0a pop esi */
  ESI = (pop32());
  /* 11836d0b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11836d0d ret  */
  ESPCHK(0x11836cc5u, _esp0);
  ESP += 4; return;
L_11836d0e:;
  /* 11836d0e cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836d14 jb 0x11836d2b */
  if (C.cf) goto L_11836d2b;
  /* 11836d16 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836d1c ja 0x11836d2b */
  if ((!C.cf&&!C.zf)) goto L_11836d2b;
  /* 11836d1e call 0x11836d38 */
  push32(0x11836d23u); f_11836d38();
  /* 11836d23 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11836d29 pop esi */
  ESI = (pop32());
  /* 11836d2a ret  */
  ESPCHK(0x11836cc5u, _esp0);
  ESP += 4; return;
L_11836d2b:;
  /* 11836d2b call 0x11836d38 */
  push32(0x11836d30u); f_11836d38();
  /* 11836d30 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11836d36 pop esi */
  ESI = (pop32());
  /* 11836d37 ret  */
  ESPCHK(0x11836cc5u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d38 @ 0x11836d38 (9 bytes, 3 insns) */
void f_11836d38(void) {
  FTRACE(0x11836d38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836d38 call 0x11832a16 */
  push32(0x11836d3du); f_11832a16();
  /* 11836d3d add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836d40 ret  */
  ESPCHK(0x11836d38u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d41 @ 0x11836d41 (9 bytes, 3 insns) */
void f_11836d41(void) {
  FTRACE(0x11836d41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836d41 call 0x11832a16 */
  push32(0x11836d46u); f_11832a16();
  /* 11836d46 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836d49 ret  */
  ESPCHK(0x11836d41u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d4a @ 0x11836d4a (127 bytes, 48 insns) */
void f_11836d4a(void) {
  FTRACE(0x11836d4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836d4a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836d4e push esi */
  push32((uint32_t)(ESI));
  /* 11836d4f cmp ecx, dword ptr [0x1183fbc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1183fbc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836d55 push edi */
  push32((uint32_t)(EDI));
  /* 11836d56 jae 0x11836db0 */
  if (!C.cf) goto L_11836db0;
  /* 11836d58 mov eax, ecx */
  EAX = (ECX);
  /* 11836d5a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11836d5d lea edi, [eax*4 + 0x1183fac0] */
  EDI = ((uint32_t)(EAX*4 + 0x1183fac0));
  /* 11836d64 mov eax, ecx */
  EAX = (ECX);
  /* 11836d66 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836d69 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11836d6c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11836d6e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11836d71 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836d73 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11836d77 je 0x11836db0 */
  if (C.zf) goto L_11836db0;
  /* 11836d79 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836d7c je 0x11836db0 */
  if (C.zf) goto L_11836db0;
  /* 11836d7e cmp dword ptr [0x1183f4f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183f4f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836d85 jne 0x11836da6 */
  if (!C.zf) goto L_11836da6;
  /* 11836d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836d89 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836d8b je 0x11836d9d */
  if (C.zf) goto L_11836d9d;
  /* 11836d8d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11836d8e je 0x11836d98 */
  if (C.zf) goto L_11836d98;
  /* 11836d90 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11836d91 jne 0x11836da6 */
  if (!C.zf) goto L_11836da6;
  /* 11836d93 push eax */
  push32((uint32_t)(EAX));
  /* 11836d94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11836d96 jmp 0x11836da0 */
  goto L_11836da0;
L_11836d98:;
  /* 11836d98 push eax */
  push32((uint32_t)(EAX));
  /* 11836d99 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11836d9b jmp 0x11836da0 */
  goto L_11836da0;
L_11836d9d:;
  /* 11836d9d push eax */
  push32((uint32_t)(EAX));
  /* 11836d9e push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11836da0:;
  /* 11836da0 call dword ptr [0x1183a040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a040))), 0x11836da6u);
L_11836da6:;
  /* 11836da6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11836da8 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11836dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836dae jmp 0x11836dc6 */
  goto L_11836dc6;
L_11836db0:;
  /* 11836db0 call 0x11836d38 */
  push32(0x11836db5u); f_11836d38();
  /* 11836db5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11836dbb call 0x11836d41 */
  push32(0x11836dc0u); f_11836d41();
  /* 11836dc0 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11836dc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11836dc6:;
  /* 11836dc6 pop edi */
  EDI = (pop32());
  /* 11836dc7 pop esi */
  ESI = (pop32());
  /* 11836dc8 ret  */
  ESPCHK(0x11836d4au, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc9 @ 0x11836dc9 (66 bytes, 19 insns) */
void f_11836dc9(void) {
  FTRACE(0x11836dc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836dc9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836dcd cmp eax, dword ptr [0x1183fbc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183fbc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836dd3 jae 0x11836df4 */
  if (!C.cf) goto L_11836df4;
  /* 11836dd5 mov ecx, eax */
  ECX = (EAX);
  /* 11836dd7 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836dda sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11836ddd lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11836de0 mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 11836de7 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11836dec lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11836def je 0x11836df4 */
  if (C.zf) goto L_11836df4;
  /* 11836df1 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11836df3 ret  */
  ESPCHK(0x11836dc9u, _esp0);
  ESP += 4; return;
L_11836df4:;
  /* 11836df4 call 0x11836d38 */
  push32(0x11836df9u); f_11836d38();
  /* 11836df9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11836dff call 0x11836d41 */
  push32(0x11836e04u); f_11836d41();
  /* 11836e04 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11836e07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836e0a ret  */
  ESPCHK(0x11836dc9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e0b @ 0x11836e0b (95 bytes, 34 insns) */
void f_11836e0b(void) {
  FTRACE(0x11836e0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836e0b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836e0f push ebx */
  push32((uint32_t)(EBX));
  /* 11836e10 mov ecx, eax */
  ECX = (EAX);
  /* 11836e12 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836e15 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11836e18 push esi */
  push32((uint32_t)(ESI));
  /* 11836e19 push edi */
  push32((uint32_t)(EDI));
  /* 11836e1a mov esi, dword ptr [ecx*4 + 0x1183fac0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 11836e21 lea ebx, [ecx*4 + 0x1183fac0] */
  EBX = ((uint32_t)(ECX*4 + 0x1183fac0));
  /* 11836e28 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11836e2b shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11836e2e add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11836e30 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836e34 jne 0x11836e59 */
  if (!C.zf) goto L_11836e59;
  /* 11836e36 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11836e38 call 0x11834436 */
  push32(0x11836e3du); f_11834436();
  /* 11836e3d cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836e41 pop ecx */
  ECX = (pop32());
  /* 11836e42 jne 0x11836e51 */
  if (!C.zf) goto L_11836e51;
  /* 11836e44 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11836e47 push eax */
  push32((uint32_t)(EAX));
  /* 11836e48 call dword ptr [0x1183a0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0f0))), 0x11836e4eu);
  /* 11836e4e inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11836e51:;
  /* 11836e51 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11836e53 call 0x11834497 */
  push32(0x11836e58u); f_11834497();
  /* 11836e58 pop ecx */
  ECX = (pop32());
L_11836e59:;
  /* 11836e59 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11836e5b lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11836e5f push eax */
  push32((uint32_t)(EAX));
  /* 11836e60 call dword ptr [0x1183a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0cc))), 0x11836e66u);
  /* 11836e66 pop edi */
  EDI = (pop32());
  /* 11836e67 pop esi */
  ESI = (pop32());
  /* 11836e68 pop ebx */
  EBX = (pop32());
  /* 11836e69 ret  */
  ESPCHK(0x11836e0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e6a @ 0x11836e6a (34 bytes, 10 insns) */
void f_11836e6a(void) {
  FTRACE(0x11836e6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836e6a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11836e6e mov ecx, eax */
  ECX = (EAX);
  /* 11836e70 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836e73 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11836e76 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11836e79 mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 11836e80 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11836e84 push eax */
  push32((uint32_t)(EAX));
  /* 11836e85 call dword ptr [0x1183a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e8))), 0x11836e8bu);
  /* 11836e8b ret  */
  ESPCHK(0x11836e6au, _esp0);
  ESP += 4; return;
}

/* FUN_10006e8c @ 0x11836e8c (147 bytes, 52 insns) */
void f_11836e8c(void) {
  FTRACE(0x11836e8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836e8c push ebx */
  push32((uint32_t)(EBX));
  /* 11836e8d mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11836e91 cmp ebx, dword ptr [0x1183fbc0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1183fbc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836e97 push esi */
  push32((uint32_t)(ESI));
  /* 11836e98 push edi */
  push32((uint32_t)(EDI));
  /* 11836e99 jae 0x11836f0d */
  if (!C.cf) goto L_11836f0d;
  /* 11836e9b mov eax, ebx */
  EAX = (EBX);
  /* 11836e9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11836ea0 lea edi, [eax*4 + 0x1183fac0] */
  EDI = ((uint32_t)(EAX*4 + 0x1183fac0));
  /* 11836ea7 mov eax, ebx */
  EAX = (EBX);
  /* 11836ea9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836eac lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11836eaf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11836eb1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11836eb4 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11836eb9 je 0x11836f0d */
  if (C.zf) goto L_11836f0d;
  /* 11836ebb push ebx */
  push32((uint32_t)(EBX));
  /* 11836ebc call 0x11836e0b */
  push32(0x11836ec1u); f_11836e0b();
  /* 11836ec1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11836ec3 pop ecx */
  ECX = (pop32());
  /* 11836ec4 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11836ec9 je 0x11836ef4 */
  if (C.zf) goto L_11836ef4;
  /* 11836ecb push ebx */
  push32((uint32_t)(EBX));
  /* 11836ecc call 0x11836dc9 */
  push32(0x11836ed1u); f_11836dc9();
  /* 11836ed1 pop ecx */
  ECX = (pop32());
  /* 11836ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11836ed3 call dword ptr [0x1183a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a03c))), 0x11836ed9u);
  /* 11836ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11836edb jne 0x11836ee7 */
  if (!C.zf) goto L_11836ee7;
  /* 11836edd call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x11836ee3u);
  /* 11836ee3 mov esi, eax */
  ESI = (EAX);
  /* 11836ee5 jmp 0x11836ee9 */
  goto L_11836ee9;
L_11836ee7:;
  /* 11836ee7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11836ee9:;
  /* 11836ee9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11836eeb je 0x11836f02 */
  if (C.zf) goto L_11836f02;
  /* 11836eed call 0x11836d41 */
  push32(0x11836ef2u); f_11836d41();
  /* 11836ef2 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11836ef4:;
  /* 11836ef4 call 0x11836d38 */
  push32(0x11836ef9u); f_11836d38();
  /* 11836ef9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11836eff or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11836f02:;
  /* 11836f02 push ebx */
  push32((uint32_t)(EBX));
  /* 11836f03 call 0x11836e6a */
  push32(0x11836f08u); f_11836e6a();
  /* 11836f08 pop ecx */
  ECX = (pop32());
  /* 11836f09 mov eax, esi */
  EAX = (ESI);
  /* 11836f0b jmp 0x11836f1b */
  goto L_11836f1b;
L_11836f0d:;
  /* 11836f0d call 0x11836d38 */
  push32(0x11836f12u); f_11836d38();
  /* 11836f12 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11836f18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11836f1b:;
  /* 11836f1b pop edi */
  EDI = (pop32());
  /* 11836f1c pop esi */
  ESI = (pop32());
  /* 11836f1d pop ebx */
  EBX = (pop32());
  /* 11836f1e ret  */
  ESPCHK(0x11836e8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f1f @ 0x11836f1f (101 bytes, 34 insns) */
void f_11836f1f(void) {
  FTRACE(0x11836f1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836f1f push esi */
  push32((uint32_t)(ESI));
  /* 11836f20 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11836f24 cmp esi, dword ptr [0x1183fbc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183fbc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836f2a jae 0x11836f6c */
  if (!C.cf) goto L_11836f6c;
  /* 11836f2c mov ecx, esi */
  ECX = (ESI);
  /* 11836f2e mov eax, esi */
  EAX = (ESI);
  /* 11836f30 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11836f33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836f36 mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 11836f3d lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11836f40 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11836f45 je 0x11836f6c */
  if (C.zf) goto L_11836f6c;
  /* 11836f47 push edi */
  push32((uint32_t)(EDI));
  /* 11836f48 push esi */
  push32((uint32_t)(ESI));
  /* 11836f49 call 0x11836e0b */
  push32(0x11836f4eu); f_11836e0b();
  /* 11836f4e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11836f52 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11836f56 push esi */
  push32((uint32_t)(ESI));
  /* 11836f57 call 0x11836f84 */
  push32(0x11836f5cu); f_11836f84();
  /* 11836f5c push esi */
  push32((uint32_t)(ESI));
  /* 11836f5d mov edi, eax */
  EDI = (EAX);
  /* 11836f5f call 0x11836e6a */
  push32(0x11836f64u); f_11836e6a();
  /* 11836f64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11836f67 mov eax, edi */
  EAX = (EDI);
  /* 11836f69 pop edi */
  EDI = (pop32());
  /* 11836f6a pop esi */
  ESI = (pop32());
  /* 11836f6b ret  */
  ESPCHK(0x11836f1fu, _esp0);
  ESP += 4; return;
L_11836f6c:;
  /* 11836f6c call 0x11836d38 */
  push32(0x11836f71u); f_11836d38();
  /* 11836f71 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11836f77 call 0x11836d41 */
  push32(0x11836f7cu); f_11836d41();
  /* 11836f7c and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11836f7f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11836f82 pop esi */
  ESI = (pop32());
  /* 11836f83 ret  */
  ESPCHK(0x11836f1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f84 @ 0x11836f84 (395 bytes, 135 insns) */
void f_11836f84(void) {
  FTRACE(0x11836f84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11836f84 push ebp */
  push32((uint32_t)(EBP));
  /* 11836f85 mov ebp, esp */
  EBP = (ESP);
  /* 11836f87 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11836f8d push ebx */
  push32((uint32_t)(EBX));
  /* 11836f8e push esi */
  push32((uint32_t)(ESI));
  /* 11836f8f push edi */
  push32((uint32_t)(EDI));
  /* 11836f90 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11836f92 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836f95 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11836f98 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11836f9b jne 0x11836fa4 */
  if (!C.zf) goto L_11836fa4;
L_11836f9d:;
  /* 11836f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11836f9f jmp 0x1183710a */
  goto L_1183710a;
L_11836fa4:;
  /* 11836fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836fa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11836faa lea ebx, [eax*4 + 0x1183fac0] */
  EBX = ((uint32_t)(EAX*4 + 0x1183fac0));
  /* 11836fb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836fb4 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11836fb7 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11836fba mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11836fbc shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11836fbf test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11836fc4 je 0x11836fd4 */
  if (C.zf) goto L_11836fd4;
  /* 11836fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11836fc8 push edi */
  push32((uint32_t)(EDI));
  /* 11836fc9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11836fcc call 0x11838e02 */
  push32(0x11836fd1u); f_11838e02();
  /* 11836fd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11836fd4:;
  /* 11836fd4 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11836fd6 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11836fd8 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11836fdc je 0x118370a3 */
  if (C.zf) goto L_118370a3;
  /* 11836fe2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11836fe5 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836fe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11836feb mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11836fee jbe 0x118370de */
  if ((C.cf||C.zf)) goto L_118370de;
L_11836ff4:;
  /* 11836ff4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11836ffa:;
  /* 11836ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11836ffd sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837000 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837003 jae 0x1183702e */
  if (!C.cf) goto L_1183702e;
  /* 11837005 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11837008 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1183700b mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 1183700d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837010 jne 0x11837019 */
  if (!C.zf) goto L_11837019;
  /* 11837012 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11837015 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11837018 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11837019:;
  /* 11837019 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1183701b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183701c mov ecx, eax */
  ECX = (EAX);
  /* 1183701e lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11837024 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837026 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183702c jl 0x11836ffa */
  if ((C.sf!=C.of)) goto L_11836ffa;
L_1183702e:;
  /* 1183702e mov edi, eax */
  EDI = (EAX);
  /* 11837030 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11837036 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837038 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1183703b push 0 */
  push32((uint32_t)(0x0u));
  /* 1183703d push eax */
  push32((uint32_t)(EAX));
  /* 1183703e lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11837044 push edi */
  push32((uint32_t)(EDI));
  /* 11837045 push eax */
  push32((uint32_t)(EAX));
  /* 11837046 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11837048 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 1183704b call dword ptr [0x1183a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a05c))), 0x11837051u);
  /* 11837051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837053 je 0x11837098 */
  if (C.zf) goto L_11837098;
  /* 11837055 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11837058 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183705b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183705d jl 0x1183706a */
  if ((C.sf!=C.of)) goto L_1183706a;
  /* 1183705f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11837062 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837065 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837068 jb 0x11836ff4 */
  if (C.cf) goto L_11836ff4;
L_1183706a:;
  /* 1183706a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1183706c:;
  /* 1183706c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1183706f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837071 jne 0x11837107 */
  if (!C.zf) goto L_11837107;
  /* 11837077 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183707a je 0x118370de */
  if (C.zf) goto L_118370de;
  /* 1183707c push 5 */
  push32((uint32_t)(0x5u));
  /* 1183707e pop esi */
  ESI = (pop32());
  /* 1183707f cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837082 jne 0x118370d0 */
  if (!C.zf) goto L_118370d0;
  /* 11837084 call 0x11836d38 */
  push32(0x11837089u); f_11836d38();
  /* 11837089 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1183708f call 0x11836d41 */
  push32(0x11837094u); f_11836d41();
  /* 11837094 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11837096 jmp 0x118370d9 */
  goto L_118370d9;
L_11837098:;
  /* 11837098 call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x1183709eu);
  /* 1183709e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118370a1 jmp 0x1183706a */
  goto L_1183706a;
L_118370a3:;
  /* 118370a3 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 118370a6 push edi */
  push32((uint32_t)(EDI));
  /* 118370a7 push ecx */
  push32((uint32_t)(ECX));
  /* 118370a8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118370ab push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118370ae push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118370b0 call dword ptr [0x1183a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a05c))), 0x118370b6u);
  /* 118370b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118370b8 je 0x118370c5 */
  if (C.zf) goto L_118370c5;
  /* 118370ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118370bd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 118370c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118370c3 jmp 0x1183706c */
  goto L_1183706c;
L_118370c5:;
  /* 118370c5 call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x118370cbu);
  /* 118370cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118370ce jmp 0x1183706c */
  goto L_1183706c;
L_118370d0:;
  /* 118370d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118370d3 call 0x11836cc5 */
  push32(0x118370d8u); f_11836cc5();
  /* 118370d8 pop ecx */
  ECX = (pop32());
L_118370d9:;
  /* 118370d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118370dc jmp 0x1183710a */
  goto L_1183710a;
L_118370de:;
  /* 118370de mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118370e0 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 118370e5 je 0x118370f3 */
  if (C.zf) goto L_118370f3;
  /* 118370e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118370ea cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118370ed je 0x11836f9d */
  if (C.zf) goto L_11836f9d;
L_118370f3:;
  /* 118370f3 call 0x11836d38 */
  push32(0x118370f8u); f_11836d38();
  /* 118370f8 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 118370fe call 0x11836d41 */
  push32(0x11837103u); f_11836d41();
  /* 11837103 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11837105 jmp 0x118370d9 */
  goto L_118370d9;
L_11837107:;
  /* 11837107 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1183710a:;
  /* 1183710a pop edi */
  EDI = (pop32());
  /* 1183710b pop esi */
  ESI = (pop32());
  /* 1183710c pop ebx */
  EBX = (pop32());
  /* 1183710d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183710e ret  */
  ESPCHK(0x11836f84u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f5 @ 0x118371f5 (429 bytes, 143 insns) */
void f_118371f5(void) {
  FTRACE(0x118371f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118371f5 push ebp */
  push32((uint32_t)(EBP));
  /* 118371f6 mov ebp, esp */
  EBP = (ESP);
  /* 118371f8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118371fb push ebx */
  push32((uint32_t)(EBX));
  /* 118371fc push esi */
  push32((uint32_t)(ESI));
  /* 118371fd push edi */
  push32((uint32_t)(EDI));
  /* 118371fe push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11837200 call 0x11834436 */
  push32(0x11837205u); f_11834436();
  /* 11837205 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11837208 call 0x118373a2 */
  push32(0x1183720du); f_118373a2();
  /* 1183720d mov ebx, eax */
  EBX = (EAX);
  /* 1183720f pop ecx */
  ECX = (pop32());
  /* 11837210 cmp ebx, dword ptr [0x1183f864] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1183f864))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837216 pop ecx */
  ECX = (pop32());
  /* 11837217 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1183721a jne 0x11837223 */
  if (!C.zf) goto L_11837223;
L_1183721c:;
  /* 1183721c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1183721e jmp 0x11837393 */
  goto L_11837393;
L_11837223:;
  /* 11837223 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11837225 je 0x11837381 */
  if (C.zf) goto L_11837381;
  /* 1183722b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1183722d mov eax, 0x1183eca8 */
  EAX = (0x1183eca8u);
L_11837232:;
  /* 11837232 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837234 je 0x118372aa */
  if (C.zf) goto L_118372aa;
  /* 11837236 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837239 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1183723a cmp eax, 0x1183ed98 */
  { uint32_t _a=(EAX),_b=(0x1183ed98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183723f jl 0x11837232 */
  if ((C.sf!=C.of)) goto L_11837232;
  /* 11837241 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11837244 push eax */
  push32((uint32_t)(EAX));
  /* 11837245 push ebx */
  push32((uint32_t)(EBX));
  /* 11837246 call dword ptr [0x1183a034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a034))), 0x1183724cu);
  /* 1183724c push 1 */
  push32((uint32_t)(0x1u));
  /* 1183724e pop esi */
  ESI = (pop32());
  /* 1183724f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837251 jne 0x11837378 */
  if (!C.zf) goto L_11837378;
  /* 11837257 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11837259 and dword ptr [0x1183fa84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183fa84)))&(0x0u); w32((uint32_t)(0x1183fa84), (_r)); fl_logic(_r,32); }
  /* 11837260 pop ecx */
  ECX = (pop32());
  /* 11837261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837263 mov edi, 0x1183f980 */
  EDI = (0x1183f980u);
  /* 11837268 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183726b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1183726d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1183726e mov dword ptr [0x1183f864], ebx */
  w32((uint32_t)(0x1183f864), (EBX));
  /* 11837274 jbe 0x11837365 */
  if ((C.cf||C.zf)) goto L_11837365;
  /* 1183727a cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183727e je 0x11837340 */
  if (C.zf) goto L_11837340;
  /* 11837284 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11837287:;
  /* 11837287 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11837289 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1183728b je 0x11837340 */
  if (C.zf) goto L_11837340;
  /* 11837291 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11837295 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11837298:;
  /* 11837298 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183729a ja 0x11837334 */
  if ((!C.cf&&!C.zf)) goto L_11837334;
  /* 118372a0 or byte ptr [eax + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x4u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 118372a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118372a8 jmp 0x11837298 */
  goto L_11837298;
L_118372aa:;
  /* 118372aa and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118372ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118372b0 pop ecx */
  ECX = (pop32());
  /* 118372b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118372b3 mov edi, 0x1183f980 */
  EDI = (0x1183f980u);
  /* 118372b8 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 118372bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118372bd shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118372c0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 118372c1 lea ebx, [esi + 0x1183ecb8] */
  EBX = ((uint32_t)(ESI + 0x1183ecb8));
L_118372c7:;
  /* 118372c7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118372ca mov ecx, ebx */
  ECX = (EBX);
  /* 118372cc je 0x118372fa */
  if (C.zf) goto L_118372fa;
L_118372ce:;
  /* 118372ce mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118372d1 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118372d3 je 0x118372fa */
  if (C.zf) goto L_118372fa;
  /* 118372d5 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 118372d8 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 118372db cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118372dd ja 0x118372f3 */
  if ((!C.cf&&!C.zf)) goto L_118372f3;
  /* 118372df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118372e2 mov dl, byte ptr [edx + 0x1183eca0] */
  DL = (r8((uint32_t)(EDX + 0x1183eca0)));
L_118372e8:;
  /* 118372e8 or byte ptr [eax + 0x1183f981], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(DL); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 118372ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118372ef cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118372f1 jbe 0x118372e8 */
  if ((C.cf||C.zf)) goto L_118372e8;
L_118372f3:;
  /* 118372f3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118372f4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118372f5 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118372f8 jne 0x118372ce */
  if (!C.zf) goto L_118372ce;
L_118372fa:;
  /* 118372fa inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118372fd add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837300 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837304 jb 0x118372c7 */
  if (C.cf) goto L_118372c7;
  /* 11837306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837309 mov dword ptr [0x1183f87c], 1 */
  w32((uint32_t)(0x1183f87c), (0x1u));
  /* 11837313 push eax */
  push32((uint32_t)(EAX));
  /* 11837314 mov dword ptr [0x1183f864], eax */
  w32((uint32_t)(0x1183f864), (EAX));
  /* 11837319 call 0x118373ec */
  push32(0x1183731eu); f_118373ec();
  /* 1183731e lea esi, [esi + 0x1183ecac] */
  ESI = ((uint32_t)(ESI + 0x1183ecac));
  /* 11837324 mov edi, 0x1183f870 */
  EDI = (0x1183f870u);
  /* 11837329 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1183732a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1183732b pop ecx */
  ECX = (pop32());
  /* 1183732c mov dword ptr [0x1183fa84], eax */
  w32((uint32_t)(0x1183fa84), (EAX));
  /* 11837331 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11837332 jmp 0x11837386 */
  goto L_11837386;
L_11837334:;
  /* 11837334 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11837335 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11837336 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183733a jne 0x11837287 */
  if (!C.zf) goto L_11837287;
L_11837340:;
  /* 11837340 mov eax, esi */
  EAX = (ESI);
L_11837342:;
  /* 11837342 or byte ptr [eax + 0x1183f981], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x8u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 11837349 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183734a cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183734f jb 0x11837342 */
  if (C.cf) goto L_11837342;
  /* 11837351 push ebx */
  push32((uint32_t)(EBX));
  /* 11837352 call 0x118373ec */
  push32(0x11837357u); f_118373ec();
  /* 11837357 pop ecx */
  ECX = (pop32());
  /* 11837358 mov dword ptr [0x1183fa84], eax */
  w32((uint32_t)(0x1183fa84), (EAX));
  /* 1183735d mov dword ptr [0x1183f87c], esi */
  w32((uint32_t)(0x1183f87c), (ESI));
  /* 11837363 jmp 0x1183736c */
  goto L_1183736c;
L_11837365:;
  /* 11837365 and dword ptr [0x1183f87c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183f87c)))&(0x0u); w32((uint32_t)(0x1183f87c), (_r)); fl_logic(_r,32); }
L_1183736c:;
  /* 1183736c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183736e mov edi, 0x1183f870 */
  EDI = (0x1183f870u);
  /* 11837373 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837374 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837375 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837376 jmp 0x11837386 */
  goto L_11837386;
L_11837378:;
  /* 11837378 cmp dword ptr [0x1183f780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183737f je 0x11837390 */
  if (C.zf) goto L_11837390;
L_11837381:;
  /* 11837381 call 0x1183741f */
  push32(0x11837386u); f_1183741f();
L_11837386:;
  /* 11837386 call 0x11837448 */
  push32(0x1183738bu); f_11837448();
  /* 1183738b jmp 0x1183721c */
  goto L_1183721c;
L_11837390:;
  /* 11837390 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11837393:;
  /* 11837393 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11837395 call 0x11834497 */
  push32(0x1183739au); f_11834497();
  /* 1183739a pop ecx */
  ECX = (pop32());
  /* 1183739b mov eax, esi */
  EAX = (ESI);
  /* 1183739d pop edi */
  EDI = (pop32());
  /* 1183739e pop esi */
  ESI = (pop32());
  /* 1183739f pop ebx */
  EBX = (pop32());
  /* 118373a0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118373a1 ret  */
  ESPCHK(0x118371f5u, _esp0);
  ESP += 4; return;
}

/* FUN_100073a2 @ 0x118373a2 (74 bytes, 15 insns) */
void f_118373a2(void) {
  FTRACE(0x118373a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118373a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118373a6 and dword ptr [0x1183f780], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183f780)))&(0x0u); w32((uint32_t)(0x1183f780), (_r)); fl_logic(_r,32); }
  /* 118373ad cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118373b0 jne 0x118373c2 */
  if (!C.zf) goto L_118373c2;
  /* 118373b2 mov dword ptr [0x1183f780], 1 */
  w32((uint32_t)(0x1183f780), (0x1u));
  /* 118373bc jmp dword ptr [0x1183a038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1183a038)))); return;
L_118373c2:;
  /* 118373c2 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118373c5 jne 0x118373d7 */
  if (!C.zf) goto L_118373d7;
  /* 118373c7 mov dword ptr [0x1183f780], 1 */
  w32((uint32_t)(0x1183f780), (0x1u));
  /* 118373d1 jmp dword ptr [0x1183a030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1183a030)))); return;
L_118373d7:;
  /* 118373d7 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118373da jne 0x118373eb */
  if (!C.zf) goto L_118373eb;
  /* 118373dc mov eax, dword ptr [0x1183f7a8] */
  EAX = (r32((uint32_t)(0x1183f7a8)));
  /* 118373e1 mov dword ptr [0x1183f780], 1 */
  w32((uint32_t)(0x1183f780), (0x1u));
L_118373eb:;
  /* 118373eb ret  */
  ESPCHK(0x118373a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100073ec @ 0x118373ec (51 bytes, 19 insns) */
void f_118373ec(void) {
  FTRACE(0x118373ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118373ec mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118373f0 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118373f5 je 0x11837419 */
  if (C.zf) goto L_11837419;
  /* 118373f7 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118373fa je 0x11837413 */
  if (C.zf) goto L_11837413;
  /* 118373fc sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118373ff je 0x1183740d */
  if (C.zf) goto L_1183740d;
  /* 11837401 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837402 je 0x11837407 */
  if (C.zf) goto L_11837407;
  /* 11837404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837406 ret  */
  ESPCHK(0x118373ecu, _esp0);
  ESP += 4; return;
L_11837407:;
  /* 11837407 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1183740c ret  */
  ESPCHK(0x118373ecu, _esp0);
  ESP += 4; return;
L_1183740d:;
  /* 1183740d mov eax, 0x412 */
  EAX = (0x412u);
  /* 11837412 ret  */
  ESPCHK(0x118373ecu, _esp0);
  ESP += 4; return;
L_11837413:;
  /* 11837413 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11837418 ret  */
  ESPCHK(0x118373ecu, _esp0);
  ESP += 4; return;
L_11837419:;
  /* 11837419 mov eax, 0x411 */
  EAX = (0x411u);
  /* 1183741e ret  */
  ESPCHK(0x118373ecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000741f @ 0x1183741f (41 bytes, 17 insns) */
void f_1183741f(void) {
  FTRACE(0x1183741fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183741f push edi */
  push32((uint32_t)(EDI));
  /* 11837420 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11837422 pop ecx */
  ECX = (pop32());
  /* 11837423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837425 mov edi, 0x1183f980 */
  EDI = (0x1183f980u);
  /* 1183742a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1183742c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1183742d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183742f mov edi, 0x1183f870 */
  EDI = (0x1183f870u);
  /* 11837434 mov dword ptr [0x1183f864], eax */
  w32((uint32_t)(0x1183f864), (EAX));
  /* 11837439 mov dword ptr [0x1183f87c], eax */
  w32((uint32_t)(0x1183f87c), (EAX));
  /* 1183743e mov dword ptr [0x1183fa84], eax */
  w32((uint32_t)(0x1183fa84), (EAX));
  /* 11837443 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837444 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837445 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11837446 pop edi */
  EDI = (pop32());
  /* 11837447 ret  */
  ESPCHK(0x1183741fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007448 @ 0x11837448 (389 bytes, 124 insns) */
void f_11837448(void) {
  FTRACE(0x11837448u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837448 push ebp */
  push32((uint32_t)(EBP));
  /* 11837449 mov ebp, esp */
  EBP = (ESP);
  /* 1183744b sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837451 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11837454 push esi */
  push32((uint32_t)(ESI));
  /* 11837455 push eax */
  push32((uint32_t)(EAX));
  /* 11837456 push dword ptr [0x1183f864] */
  push32((uint32_t)(r32((uint32_t)(0x1183f864))));
  /* 1183745c call dword ptr [0x1183a034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a034))), 0x11837462u);
  /* 11837462 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837465 jne 0x11837581 */
  if (!C.zf) goto L_11837581;
  /* 1183746b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183746d mov esi, 0x100 */
  ESI = (0x100u);
L_11837472:;
  /* 11837472 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11837479 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183747a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183747c jb 0x11837472 */
  if (C.cf) goto L_11837472;
  /* 1183747e mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11837481 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11837488 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1183748a je 0x118374c3 */
  if (C.zf) goto L_118374c3;
  /* 1183748c push ebx */
  push32((uint32_t)(EBX));
  /* 1183748d push edi */
  push32((uint32_t)(EDI));
  /* 1183748e lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11837491:;
  /* 11837491 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11837494 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11837497 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837499 ja 0x118374b8 */
  if ((!C.cf&&!C.zf)) goto L_118374b8;
  /* 1183749b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183749d lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 118374a4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118374a5 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 118374aa mov ebx, ecx */
  EBX = (ECX);
  /* 118374ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118374af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118374b1 mov ecx, ebx */
  ECX = (EBX);
  /* 118374b3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118374b6 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_118374b8:;
  /* 118374b8 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118374b9 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118374ba mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 118374bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118374bf jne 0x11837491 */
  if (!C.zf) goto L_11837491;
  /* 118374c1 pop edi */
  EDI = (pop32());
  /* 118374c2 pop ebx */
  EBX = (pop32());
L_118374c3:;
  /* 118374c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118374c5 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 118374cb push dword ptr [0x1183fa84] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa84))));
  /* 118374d1 push dword ptr [0x1183f864] */
  push32((uint32_t)(r32((uint32_t)(0x1183f864))));
  /* 118374d7 push eax */
  push32((uint32_t)(EAX));
  /* 118374d8 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118374de push esi */
  push32((uint32_t)(ESI));
  /* 118374df push eax */
  push32((uint32_t)(EAX));
  /* 118374e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118374e2 call 0x11838165 */
  push32(0x118374e7u); f_11838165();
  /* 118374e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118374e9 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 118374ef push dword ptr [0x1183f864] */
  push32((uint32_t)(r32((uint32_t)(0x1183f864))));
  /* 118374f5 push esi */
  push32((uint32_t)(ESI));
  /* 118374f6 push eax */
  push32((uint32_t)(EAX));
  /* 118374f7 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 118374fd push esi */
  push32((uint32_t)(ESI));
  /* 118374fe push eax */
  push32((uint32_t)(EAX));
  /* 118374ff push esi */
  push32((uint32_t)(ESI));
  /* 11837500 push dword ptr [0x1183fa84] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa84))));
  /* 11837506 call 0x118382ae */
  push32(0x1183750bu); f_118382ae();
  /* 1183750b push 0 */
  push32((uint32_t)(0x0u));
  /* 1183750d lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11837513 push dword ptr [0x1183f864] */
  push32((uint32_t)(r32((uint32_t)(0x1183f864))));
  /* 11837519 push esi */
  push32((uint32_t)(ESI));
  /* 1183751a push eax */
  push32((uint32_t)(EAX));
  /* 1183751b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11837521 push esi */
  push32((uint32_t)(ESI));
  /* 11837522 push eax */
  push32((uint32_t)(EAX));
  /* 11837523 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11837528 push dword ptr [0x1183fa84] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa84))));
  /* 1183752e call 0x118382ae */
  push32(0x11837533u); f_118382ae();
  /* 11837533 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11837536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837538 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1183753e:;
  /* 1183753e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11837541 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11837544 je 0x1183755c */
  if (C.zf) goto L_1183755c;
  /* 11837546 or byte ptr [eax + 0x1183f981], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x10u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 1183754d mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11837554:;
  /* 11837554 mov byte ptr [eax + 0x1183f880], dl */
  w8((uint32_t)(EAX + 0x1183f880), (DL));
  /* 1183755a jmp 0x11837578 */
  goto L_11837578;
L_1183755c:;
  /* 1183755c test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1183755f je 0x11837571 */
  if (C.zf) goto L_11837571;
  /* 11837561 or byte ptr [eax + 0x1183f981], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x20u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 11837568 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1183756f jmp 0x11837554 */
  goto L_11837554;
L_11837571:;
  /* 11837571 and byte ptr [eax + 0x1183f880], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f880)))&(0x0u); w8((uint32_t)(EAX + 0x1183f880), (_r)); fl_logic(_r,8); }
L_11837578:;
  /* 11837578 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11837579 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183757a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183757b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183757d jb 0x1183753e */
  if (C.cf) goto L_1183753e;
  /* 1183757f jmp 0x118375ca */
  goto L_118375ca;
L_11837581:;
  /* 11837581 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837583 mov esi, 0x100 */
  ESI = (0x100u);
L_11837588:;
  /* 11837588 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183758b jb 0x118375a6 */
  if (C.cf) goto L_118375a6;
  /* 1183758d cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837590 ja 0x118375a6 */
  if ((!C.cf&&!C.zf)) goto L_118375a6;
  /* 11837592 or byte ptr [eax + 0x1183f981], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x10u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 11837599 mov cl, al */
  CL = (AL);
  /* 1183759b add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1183759e:;
  /* 1183759e mov byte ptr [eax + 0x1183f880], cl */
  w8((uint32_t)(EAX + 0x1183f880), (CL));
  /* 118375a4 jmp 0x118375c5 */
  goto L_118375c5;
L_118375a6:;
  /* 118375a6 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118375a9 jb 0x118375be */
  if (C.cf) goto L_118375be;
  /* 118375ab cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118375ae ja 0x118375be */
  if ((!C.cf&&!C.zf)) goto L_118375be;
  /* 118375b0 or byte ptr [eax + 0x1183f981], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))|(0x20u); w8((uint32_t)(EAX + 0x1183f981), (_r)); fl_logic(_r,8); }
  /* 118375b7 mov cl, al */
  CL = (AL);
  /* 118375b9 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118375bc jmp 0x1183759e */
  goto L_1183759e;
L_118375be:;
  /* 118375be and byte ptr [eax + 0x1183f880], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f880)))&(0x0u); w8((uint32_t)(EAX + 0x1183f880), (_r)); fl_logic(_r,8); }
L_118375c5:;
  /* 118375c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118375c6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118375c8 jb 0x11837588 */
  if (C.cf) goto L_11837588;
L_118375ca:;
  /* 118375ca pop esi */
  ESI = (pop32());
  /* 118375cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118375cc ret  */
  ESPCHK(0x11837448u, _esp0);
  ESP += 4; return;
}

/* FUN_100075cd @ 0x118375cd (28 bytes, 7 insns) */
void f_118375cd(void) {
  FTRACE(0x118375cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118375cd cmp dword ptr [0x1183fbc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118375d4 jne 0x118375e8 */
  if (!C.zf) goto L_118375e8;
  /* 118375d6 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 118375d8 call 0x118371f5 */
  push32(0x118375ddu); f_118371f5();
  /* 118375dd pop ecx */
  ECX = (pop32());
  /* 118375de mov dword ptr [0x1183fbc8], 1 */
  w32((uint32_t)(0x1183fbc8), (0x1u));
L_118375e8:;
  /* 118375e8 ret  */
  ESPCHK(0x118375cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x118375f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_118375f0(void) {
  FTRACE(0x118375f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118375f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118375f1 mov ebp, esp */
  EBP = (ESP);
  /* 118375f3 push edi */
  push32((uint32_t)(EDI));
  /* 118375f4 push esi */
  push32((uint32_t)(ESI));
  /* 118375f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118375f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118375fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118375fe mov eax, ecx */
  EAX = (ECX);
  /* 11837600 mov edx, ecx */
  EDX = (ECX);
  /* 11837602 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837604 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837606 jbe 0x11837610 */
  if ((C.cf||C.zf)) goto L_11837610;
  /* 11837608 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183760a jb 0x11837788 */
  if (C.cf) goto L_11837788;
L_11837610:;
  /* 11837610 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11837616 jne 0x1183762c */
  if (!C.zf) goto L_1183762c;
  /* 11837618 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1183761b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1183761e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837621 jb 0x1183764c */
  if (C.cf) goto L_1183764c;
  /* 11837623 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11837625 jmp dword ptr [edx*4 + 0x11837738] */
  switch (EDX) {
    case 0: goto L_11837748;
    case 1: goto L_11837750;
    case 2: goto L_1183775c;
    case 3: goto L_11837770;
    default: x86_unimpl("switch@0x11837625 out of table"); return;
  }
L_1183762c:;
  /* 1183762c mov eax, edi */
  EAX = (EDI);
  /* 1183762e mov edx, 3 */
  EDX = (0x3u);
  /* 11837633 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837636 jb 0x11837644 */
  if (C.cf) goto L_11837644;
  /* 11837638 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1183763b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183763d jmp dword ptr [eax*4 + 0x11837650] */
  switch (EAX) {
    case 1: goto L_11837660;
    case 2: goto L_1183768c;
    case 3: goto L_118376b0;
    default: x86_unimpl("switch@0x1183763d out of table"); return;
  }
L_11837644:;
  /* 11837644 jmp dword ptr [ecx*4 + 0x11837748] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11837748)))); return;
  /* 1183764b nop  */
  /* nop */
L_1183764c:;
  /* 1183764c jmp dword ptr [ecx*4 + 0x118376cc] */
  switch (ECX) {
    case 0: goto L_1183772f;
    case 1: goto L_1183771c;
    case 2: goto L_11837714;
    case 3: goto L_1183770c;
    case 4: goto L_11837704;
    case 5: goto L_118376fc;
    case 6: goto L_118376f4;
    case 7: goto L_118376ec;
    default: x86_unimpl("switch@0x1183764c out of table"); return;
  }
  /* 11837653 nop  */
  /* nop */
L_11837660:;
  /* 11837660 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11837662 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837664 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837666 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11837669 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1183766c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1183766f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837672 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11837675 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837678 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183767b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183767e jb 0x1183764c */
  if (C.cf) goto L_1183764c;
  /* 11837680 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11837682 jmp dword ptr [edx*4 + 0x11837738] */
  switch (EDX) {
    case 0: goto L_11837748;
    case 1: goto L_11837750;
    case 2: goto L_1183775c;
    case 3: goto L_11837770;
    default: x86_unimpl("switch@0x11837682 out of table"); return;
  }
  /* 11837689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1183768c:;
  /* 1183768c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1183768e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837690 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837692 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11837695 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837698 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1183769b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183769e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118376a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118376a4 jb 0x1183764c */
  if (C.cf) goto L_1183764c;
  /* 118376a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118376a8 jmp dword ptr [edx*4 + 0x11837738] */
  switch (EDX) {
    case 0: goto L_11837748;
    case 1: goto L_11837750;
    case 2: goto L_1183775c;
    case 3: goto L_11837770;
    default: x86_unimpl("switch@0x118376a8 out of table"); return;
  }
  /* 118376af nop  */
  /* nop */
L_118376b0:;
  /* 118376b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118376b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118376b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118376b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118376b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118376ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118376bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118376be jb 0x1183764c */
  if (C.cf) goto L_1183764c;
  /* 118376c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118376c2 jmp dword ptr [edx*4 + 0x11837738] */
  switch (EDX) {
    case 0: goto L_11837748;
    case 1: goto L_11837750;
    case 2: goto L_1183775c;
    case 3: goto L_11837770;
    default: x86_unimpl("switch@0x118376c2 out of table"); return;
  }
  /* 118376c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118376ec:;
  /* 118376ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118376f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118376f4:;
  /* 118376f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118376f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118376fc:;
  /* 118376fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11837700 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11837704:;
  /* 11837704 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11837708 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1183770c:;
  /* 1183770c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11837710 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11837714:;
  /* 11837714 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11837718 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1183771c:;
  /* 1183771c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11837720 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11837724 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1183772b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183772d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1183772f:;
  /* 1183772f jmp dword ptr [edx*4 + 0x11837738] */
  switch (EDX) {
    case 0: goto L_11837748;
    case 1: goto L_11837750;
    case 2: goto L_1183775c;
    case 3: goto L_11837770;
    default: x86_unimpl("switch@0x1183772f out of table"); return;
  }
  /* 11837736 mov edi, edi */
  EDI = (EDI);
L_11837748:;
  /* 11837748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183774b pop esi */
  ESI = (pop32());
  /* 1183774c pop edi */
  EDI = (pop32());
  /* 1183774d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183774e ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 1183774f nop  */
  /* nop */
L_11837750:;
  /* 11837750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837757 pop esi */
  ESI = (pop32());
  /* 11837758 pop edi */
  EDI = (pop32());
  /* 11837759 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183775a ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 1183775b nop  */
  /* nop */
L_1183775c:;
  /* 1183775c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1183775e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837760 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11837763 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11837766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837769 pop esi */
  ESI = (pop32());
  /* 1183776a pop edi */
  EDI = (pop32());
  /* 1183776b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183776c ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 1183776d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11837770:;
  /* 11837770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837774 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11837777 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1183777a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1183777d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11837780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837783 pop esi */
  ESI = (pop32());
  /* 11837784 pop edi */
  EDI = (pop32());
  /* 11837785 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11837786 ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 11837787 nop  */
  /* nop */
L_11837788:;
  /* 11837788 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1183778c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11837790 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11837796 jne 0x118377bc */
  if (!C.zf) goto L_118377bc;
  /* 11837798 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1183779b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1183779e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118377a1 jb 0x118377b0 */
  if (C.cf) goto L_118377b0;
  /* 118377a3 std  */
  C.df=1;
  /* 118377a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118377a6 cld  */
  C.df=0;
  /* 118377a7 jmp dword ptr [edx*4 + 0x118378d0] */
  switch (EDX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x118377a7 out of table"); return;
  }
  /* 118377ae mov edi, edi */
  EDI = (EDI);
L_118377b0:;
  /* 118377b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118377b2 jmp dword ptr [ecx*4 + 0x11837880] */
  switch (ECX) {
    case 0: goto L_118378c7;
    default: x86_unimpl("switch@0x118377b2 out of table"); return;
  }
  /* 118377b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118377bc:;
  /* 118377bc mov eax, edi */
  EAX = (EDI);
  /* 118377be mov edx, 3 */
  EDX = (0x3u);
  /* 118377c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118377c6 jb 0x118377d4 */
  if (C.cf) goto L_118377d4;
  /* 118377c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118377cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118377cd jmp dword ptr [eax*4 + 0x118377d8] */
  switch (EAX) {
    case 1: goto L_118377e8;
    case 2: goto L_11837808;
    case 3: goto L_11837830;
    default: x86_unimpl("switch@0x118377cd out of table"); return;
  }
L_118377d4:;
  /* 118377d4 jmp dword ptr [ecx*4 + 0x118378d0] */
  switch (ECX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x118377d4 out of table"); return;
  }
  /* 118377db nop  */
  /* nop */
L_118377e8:;
  /* 118377e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118377eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118377ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118377f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118377f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118377f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118377f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118377f8 jb 0x118377b0 */
  if (C.cf) goto L_118377b0;
  /* 118377fa std  */
  C.df=1;
  /* 118377fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118377fd cld  */
  C.df=0;
  /* 118377fe jmp dword ptr [edx*4 + 0x118378d0] */
  switch (EDX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x118377fe out of table"); return;
  }
  /* 11837805 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11837808:;
  /* 11837808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183780b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1183780d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11837810 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11837813 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837816 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11837819 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183781c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183781f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837822 jb 0x118377b0 */
  if (C.cf) goto L_118377b0;
  /* 11837824 std  */
  C.df=1;
  /* 11837825 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11837827 cld  */
  C.df=0;
  /* 11837828 jmp dword ptr [edx*4 + 0x118378d0] */
  switch (EDX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x11837828 out of table"); return;
  }
  /* 1183782f nop  */
  /* nop */
L_11837830:;
  /* 11837830 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11837833 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11837835 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11837838 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1183783b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1183783e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11837841 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837844 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11837847 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183784a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183784d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837850 jb 0x118377b0 */
  if (C.cf) goto L_118377b0;
  /* 11837856 std  */
  C.df=1;
  /* 11837857 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11837859 cld  */
  C.df=0;
  /* 1183785a jmp dword ptr [edx*4 + 0x118378d0] */
  switch (EDX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x1183785a out of table"); return;
  }
  /* 11837861 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11837864 test byte ptr [eax - 0x7d], bh */
  { uint32_t _r=(r8((uint32_t)(EAX + -0x7d)))&(C.b.b.h); fl_logic(_r,8); }
  /* 11837867 adc dword ptr [eax + edi*2 + 0x78941183], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + EDI*2 + 0x78941183))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EDI*2 + 0x78941183), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183786e adc dword ptr [ecx], -0x64 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffff9cu),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11837871 js 0x118377f6 */
  if (C.sf) goto L_118377f6;
  /* 11837873 adc dword ptr [eax + edi*2 + 0x78ac1183], esp */
  { uint32_t _a=(r32((uint32_t)(EAX + EDI*2 + 0x78ac1183))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EDI*2 + 0x78ac1183), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183787a adc dword ptr [ecx], -0x4c */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffb4u),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183787d js 0x11837802 */
  if (C.sf) goto L_11837802;
  /* 11837884 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11837888 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1183788c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11837890 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11837894 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11837898 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1183789c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 118378a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 118378a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 118378a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 118378ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 118378b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 118378b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 118378b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 118378bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118378c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118378c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118378c7:;
  /* 118378c7 jmp dword ptr [edx*4 + 0x118378d0] */
  switch (EDX) {
    case 0: goto L_118378e0;
    case 1: goto L_118378e8;
    case 2: goto L_118378f8;
    case 3: goto L_1183790c;
    default: x86_unimpl("switch@0x118378c7 out of table"); return;
  }
  /* 118378ce mov edi, edi */
  EDI = (EDI);
L_118378e0:;
  /* 118378e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118378e3 pop esi */
  ESI = (pop32());
  /* 118378e4 pop edi */
  EDI = (pop32());
  /* 118378e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118378e6 ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 118378e7 nop  */
  /* nop */
L_118378e8:;
  /* 118378e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118378eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118378ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118378f1 pop esi */
  ESI = (pop32());
  /* 118378f2 pop edi */
  EDI = (pop32());
  /* 118378f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118378f4 ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 118378f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118378f8:;
  /* 118378f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118378fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118378fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11837901 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11837904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837907 pop esi */
  ESI = (pop32());
  /* 11837908 pop edi */
  EDI = (pop32());
  /* 11837909 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183790a ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
  /* 1183790b nop  */
  /* nop */
L_1183790c:;
  /* 1183790c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183790f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11837912 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11837915 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11837918 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1183791b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1183791e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837921 pop esi */
  ESI = (pop32());
  /* 11837922 pop edi */
  EDI = (pop32());
  /* 11837923 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11837924 ret  */
  ESPCHK(0x118375f0u, _esp0);
  ESP += 4; return;
L_118377f6: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x118377f6 (unresolved jump table)"); return;
L_11837802: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11837802 (unresolved jump table)"); return;
}

/* FUN_10007925 @ 0x11837925 (23 bytes, 7 insns) */
void f_11837925(void) {
  FTRACE(0x11837925u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837925 push 0 */
  push32((uint32_t)(0x0u));
  /* 11837927 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1183792b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1183792f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11837933 call 0x1183793c */
  push32(0x11837938u); f_1183793c();
  /* 11837938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183793b ret  */
  ESPCHK(0x11837925u, _esp0);
  ESP += 4; return;
}

/* FUN_1000793c @ 0x1183793c (517 bytes, 195 insns) */
void f_1183793c(void) {
  FTRACE(0x1183793cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183793c push ebp */
  push32((uint32_t)(EBP));
  /* 1183793d mov ebp, esp */
  EBP = (ESP);
  /* 1183793f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837942 push ebx */
  push32((uint32_t)(EBX));
  /* 11837943 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11837947 push esi */
  push32((uint32_t)(ESI));
  /* 11837948 push edi */
  push32((uint32_t)(EDI));
  /* 11837949 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1183794c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1183794e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11837951 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11837954:;
  /* 11837954 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183795b jle 0x1183796c */
  if ((C.zf||C.sf!=C.of)) goto L_1183796c;
  /* 1183795d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11837960 push 8 */
  push32((uint32_t)(0x8u));
  /* 11837962 push eax */
  push32((uint32_t)(EAX));
  /* 11837963 call 0x1183633d */
  push32(0x11837968u); f_1183633d();
  /* 11837968 pop ecx */
  ECX = (pop32());
  /* 11837969 pop ecx */
  ECX = (pop32());
  /* 1183796a jmp 0x1183797b */
  goto L_1183797b;
L_1183796c:;
  /* 1183796c mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 11837972 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11837975 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11837978 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1183797b:;
  /* 1183797b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183797d je 0x11837984 */
  if (C.zf) goto L_11837984;
  /* 1183797f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11837981 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11837982 jmp 0x11837954 */
  goto L_11837954;
L_11837984:;
  /* 11837984 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837987 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1183798a jne 0x11837992 */
  if (!C.zf) goto L_11837992;
  /* 1183798c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11837990 jmp 0x11837997 */
  goto L_11837997;
L_11837992:;
  /* 11837992 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837995 jne 0x1183799d */
  if (!C.zf) goto L_1183799d;
L_11837997:;
  /* 11837997 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11837999 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1183799a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1183799d:;
  /* 1183799d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118379a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118379a2 jl 0x11837b31 */
  if ((C.sf!=C.of)) goto L_11837b31;
  /* 118379a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118379ab je 0x11837b31 */
  if (C.zf) goto L_11837b31;
  /* 118379b1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118379b4 jg 0x11837b31 */
  if ((!C.zf&&C.sf==C.of)) goto L_11837b31;
  /* 118379ba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118379bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118379be pop ecx */
  ECX = (pop32());
  /* 118379bf jne 0x118379e5 */
  if (!C.zf) goto L_118379e5;
  /* 118379c1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379c4 je 0x118379cf */
  if (C.zf) goto L_118379cf;
  /* 118379c6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 118379cd jmp 0x11837a01 */
  goto L_11837a01;
L_118379cf:;
  /* 118379cf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118379d1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379d3 je 0x118379e2 */
  if (C.zf) goto L_118379e2;
  /* 118379d5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379d7 je 0x118379e2 */
  if (C.zf) goto L_118379e2;
  /* 118379d9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 118379e0 jmp 0x11837a01 */
  goto L_11837a01;
L_118379e2:;
  /* 118379e2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_118379e5:;
  /* 118379e5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118379e8 jne 0x11837a01 */
  if (!C.zf) goto L_11837a01;
  /* 118379ea cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379ed jne 0x11837a01 */
  if (!C.zf) goto L_11837a01;
  /* 118379ef mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118379f1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379f3 je 0x118379f9 */
  if (C.zf) goto L_118379f9;
  /* 118379f5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118379f7 jne 0x11837a01 */
  if (!C.zf) goto L_11837a01;
L_118379f9:;
  /* 118379f9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 118379fc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118379fd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118379fe mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11837a01:;
  /* 11837a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11837a04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11837a06 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11837a09 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11837a0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11837a11:;
  /* 11837a11 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837a18 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11837a1b jle 0x11837a29 */
  if ((C.zf||C.sf!=C.of)) goto L_11837a29;
  /* 11837a1d push 4 */
  push32((uint32_t)(0x4u));
  /* 11837a1f push esi */
  push32((uint32_t)(ESI));
  /* 11837a20 call 0x1183633d */
  push32(0x11837a25u); f_1183633d();
  /* 11837a25 pop ecx */
  ECX = (pop32());
  /* 11837a26 pop ecx */
  ECX = (pop32());
  /* 11837a27 jmp 0x11837a34 */
  goto L_11837a34;
L_11837a29:;
  /* 11837a29 mov eax, dword ptr [0x1183e8ec] */
  EAX = (r32((uint32_t)(0x1183e8ec)));
  /* 11837a2e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11837a31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11837a34:;
  /* 11837a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837a36 je 0x11837a40 */
  if (C.zf) goto L_11837a40;
  /* 11837a38 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11837a3b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837a3e jmp 0x11837a72 */
  goto L_11837a72;
L_11837a40:;
  /* 11837a40 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837a47 jle 0x11837a54 */
  if ((C.zf||C.sf!=C.of)) goto L_11837a54;
  /* 11837a49 push edi */
  push32((uint32_t)(EDI));
  /* 11837a4a push esi */
  push32((uint32_t)(ESI));
  /* 11837a4b call 0x1183633d */
  push32(0x11837a50u); f_1183633d();
  /* 11837a50 pop ecx */
  ECX = (pop32());
  /* 11837a51 pop ecx */
  ECX = (pop32());
  /* 11837a52 jmp 0x11837a5f */
  goto L_11837a5f;
L_11837a54:;
  /* 11837a54 mov eax, dword ptr [0x1183e8ec] */
  EAX = (r32((uint32_t)(0x1183e8ec)));
  /* 11837a59 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11837a5d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11837a5f:;
  /* 11837a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837a61 je 0x11837aad */
  if (C.zf) goto L_11837aad;
  /* 11837a63 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11837a66 push eax */
  push32((uint32_t)(EAX));
  /* 11837a67 call 0x11838e75 */
  push32(0x11837a6cu); f_11838e75();
  /* 11837a6c pop ecx */
  ECX = (pop32());
  /* 11837a6d mov ecx, eax */
  ECX = (EAX);
  /* 11837a6f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11837a72:;
  /* 11837a72 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837a75 jae 0x11837aad */
  if (!C.cf) goto L_11837aad;
  /* 11837a77 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11837a7a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11837a7e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837a81 jb 0x11837a97 */
  if (C.cf) goto L_11837a97;
  /* 11837a83 jne 0x11837a91 */
  if (!C.zf) goto L_11837a91;
  /* 11837a85 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11837a88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11837a8a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11837a8d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837a8f jbe 0x11837a97 */
  if ((C.cf||C.zf)) goto L_11837a97;
L_11837a91:;
  /* 11837a91 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11837a95 jmp 0x11837aa0 */
  goto L_11837aa0;
L_11837a97:;
  /* 11837a97 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11837a9b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837a9d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11837aa0:;
  /* 11837aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11837aa3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11837aa6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11837aa8 jmp 0x11837a11 */
  goto L_11837a11;
L_11837aad:;
  /* 11837aad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11837ab0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11837ab3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11837ab6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11837ab8 jne 0x11837aca */
  if (!C.zf) goto L_11837aca;
  /* 11837aba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11837abc je 0x11837ac4 */
  if (C.zf) goto L_11837ac4;
  /* 11837abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837ac1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11837ac4:;
  /* 11837ac4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11837ac8 jmp 0x11837b15 */
  goto L_11837b15;
L_11837aca:;
  /* 11837aca test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11837acc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11837ad1 jne 0x11837aee */
  if (!C.zf) goto L_11837aee;
  /* 11837ad3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11837ad5 jne 0x11837b15 */
  if (!C.zf) goto L_11837b15;
  /* 11837ad7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11837ada je 0x11837ae5 */
  if (C.zf) goto L_11837ae5;
  /* 11837adc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837ae3 ja 0x11837aee */
  if ((!C.cf&&!C.zf)) goto L_11837aee;
L_11837ae5:;
  /* 11837ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837ae7 jne 0x11837b15 */
  if (!C.zf) goto L_11837b15;
  /* 11837ae9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837aec jbe 0x11837b15 */
  if ((C.cf||C.zf)) goto L_11837b15;
L_11837aee:;
  /* 11837aee call 0x11836d38 */
  push32(0x11837af3u); f_11836d38();
  /* 11837af3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11837af7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11837afd je 0x11837b05 */
  if (C.zf) goto L_11837b05;
  /* 11837aff or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11837b03 jmp 0x11837b15 */
  goto L_11837b15;
L_11837b05:;
  /* 11837b05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11837b08 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11837b0a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11837b0c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837b0e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11837b10 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837b12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11837b15:;
  /* 11837b15 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11837b17 je 0x11837b1e */
  if (C.zf) goto L_11837b1e;
  /* 11837b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11837b1c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11837b1e:;
  /* 11837b1e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11837b22 je 0x11837b2c */
  if (C.zf) goto L_11837b2c;
  /* 11837b24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11837b27 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11837b29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11837b2c:;
  /* 11837b2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11837b2f jmp 0x11837b3c */
  goto L_11837b3c;
L_11837b31:;
  /* 11837b31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11837b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837b36 je 0x11837b3a */
  if (C.zf) goto L_11837b3a;
  /* 11837b38 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11837b3a:;
  /* 11837b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11837b3c:;
  /* 11837b3c pop edi */
  EDI = (pop32());
  /* 11837b3d pop esi */
  ESI = (pop32());
  /* 11837b3e pop ebx */
  EBX = (pop32());
  /* 11837b3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11837b40 ret  */
  ESPCHK(0x1183793cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11837b60 (193 bytes, 90 insns) */
void f_11837b60(void) {
  FTRACE(0x11837b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837b62 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11837b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11837b67 mov ebx, eax */
  EBX = (EAX);
  /* 11837b69 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11837b6c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11837b70 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11837b76 je 0x11837b8b */
  if (C.zf) goto L_11837b8b;
L_11837b78:;
  /* 11837b78 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11837b7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11837b7b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837b7d je 0x11837b50 */
  if (C.zf) { jmp_ind(0x11837b50u); return; }
  /* 11837b7f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11837b81 je 0x11837bd4 */
  if (C.zf) goto L_11837bd4;
  /* 11837b83 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11837b89 jne 0x11837b78 */
  if (!C.zf) goto L_11837b78;
L_11837b8b:;
  /* 11837b8b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11837b8d push edi */
  push32((uint32_t)(EDI));
  /* 11837b8e mov eax, ebx */
  EAX = (EBX);
  /* 11837b90 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11837b93 push esi */
  push32((uint32_t)(ESI));
  /* 11837b94 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11837b96:;
  /* 11837b96 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11837b98 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11837b9d mov eax, ecx */
  EAX = (ECX);
  /* 11837b9f mov esi, edi */
  ESI = (EDI);
  /* 11837ba1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11837ba3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837ba5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837ba7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11837baa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11837bad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11837baf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11837bb1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837bb4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11837bba jne 0x11837bd8 */
  if (!C.zf) goto L_11837bd8;
  /* 11837bbc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11837bc1 je 0x11837b96 */
  if (C.zf) goto L_11837b96;
  /* 11837bc3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11837bc8 jne 0x11837bd2 */
  if (!C.zf) goto L_11837bd2;
  /* 11837bca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11837bd0 jne 0x11837b96 */
  if (!C.zf) goto L_11837b96;
L_11837bd2:;
  /* 11837bd2 pop esi */
  ESI = (pop32());
  /* 11837bd3 pop edi */
  EDI = (pop32());
L_11837bd4:;
  /* 11837bd4 pop ebx */
  EBX = (pop32());
  /* 11837bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837bd7 ret  */
  ESPCHK(0x11837b60u, _esp0);
  ESP += 4; return;
L_11837bd8:;
  /* 11837bd8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11837bdb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837bdd je 0x11837c15 */
  if (C.zf) goto L_11837c15;
  /* 11837bdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837be1 je 0x11837bd2 */
  if (C.zf) goto L_11837bd2;
  /* 11837be3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837be5 je 0x11837c0e */
  if (C.zf) goto L_11837c0e;
  /* 11837be7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11837be9 je 0x11837bd2 */
  if (C.zf) goto L_11837bd2;
  /* 11837beb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11837bee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837bf0 je 0x11837c07 */
  if (C.zf) goto L_11837c07;
  /* 11837bf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837bf4 je 0x11837bd2 */
  if (C.zf) goto L_11837bd2;
  /* 11837bf6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837bf8 je 0x11837c00 */
  if (C.zf) goto L_11837c00;
  /* 11837bfa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11837bfc je 0x11837bd2 */
  if (C.zf) goto L_11837bd2;
  /* 11837bfe jmp 0x11837b96 */
  goto L_11837b96;
L_11837c00:;
  /* 11837c00 pop esi */
  ESI = (pop32());
  /* 11837c01 pop edi */
  EDI = (pop32());
  /* 11837c02 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11837c05 pop ebx */
  EBX = (pop32());
  /* 11837c06 ret  */
  ESPCHK(0x11837b60u, _esp0);
  ESP += 4; return;
L_11837c07:;
  /* 11837c07 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11837c0a pop esi */
  ESI = (pop32());
  /* 11837c0b pop edi */
  EDI = (pop32());
  /* 11837c0c pop ebx */
  EBX = (pop32());
  /* 11837c0d ret  */
  ESPCHK(0x11837b60u, _esp0);
  ESP += 4; return;
L_11837c0e:;
  /* 11837c0e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11837c11 pop esi */
  ESI = (pop32());
  /* 11837c12 pop edi */
  EDI = (pop32());
  /* 11837c13 pop ebx */
  EBX = (pop32());
  /* 11837c14 ret  */
  ESPCHK(0x11837b60u, _esp0);
  ESP += 4; return;
L_11837c15:;
  /* 11837c15 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11837c18 pop esi */
  ESI = (pop32());
  /* 11837c19 pop edi */
  EDI = (pop32());
  /* 11837c1a pop ebx */
  EBX = (pop32());
  /* 11837c1b ret  */
  ESPCHK(0x11837b60u, _esp0);
  ESP += 4; return;
  /* 11837c1c int3  */
  x86_unimpl("int3 @ 0x11837c1c");
  /* 11837c1d int3  */
  x86_unimpl("int3 @ 0x11837c1d");
  /* 11837c1e int3  */
  x86_unimpl("int3 @ 0x11837c1e");
  /* 11837c1f int3  */
  x86_unimpl("int3 @ 0x11837c1f");
}

/* _strstr @ 0x11837c20 (128 bytes, 66 insns) */
void f_11837c20(void) {
  FTRACE(0x11837c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837c20 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11837c24 push edi */
  push32((uint32_t)(EDI));
  /* 11837c25 push ebx */
  push32((uint32_t)(EBX));
  /* 11837c26 push esi */
  push32((uint32_t)(ESI));
  /* 11837c27 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11837c29 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11837c2d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11837c2f je 0x11837c9a */
  if (C.zf) goto L_11837c9a;
  /* 11837c31 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11837c34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11837c36 je 0x11837c87 */
  if (C.zf) goto L_11837c87;
L_11837c38:;
  /* 11837c38 mov esi, edi */
  ESI = (EDI);
  /* 11837c3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11837c3e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11837c40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11837c41 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837c43 je 0x11837c5a */
  if (C.zf) goto L_11837c5a;
  /* 11837c45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837c47 je 0x11837c54 */
  if (C.zf) goto L_11837c54;
L_11837c49:;
  /* 11837c49 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837c4b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11837c4c:;
  /* 11837c4c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837c4e je 0x11837c5a */
  if (C.zf) goto L_11837c5a;
  /* 11837c50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837c52 jne 0x11837c49 */
  if (!C.zf) goto L_11837c49;
L_11837c54:;
  /* 11837c54 pop esi */
  ESI = (pop32());
  /* 11837c55 pop ebx */
  EBX = (pop32());
  /* 11837c56 pop edi */
  EDI = (pop32());
  /* 11837c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837c59 ret  */
  ESPCHK(0x11837c20u, _esp0);
  ESP += 4; return;
L_11837c5a:;
  /* 11837c5a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837c5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11837c5d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837c5f jne 0x11837c4c */
  if (!C.zf) goto L_11837c4c;
  /* 11837c61 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11837c64:;
  /* 11837c64 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11837c67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11837c69 je 0x11837c93 */
  if (C.zf) goto L_11837c93;
  /* 11837c6b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837c6d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837c70 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837c72 jne 0x11837c38 */
  if (!C.zf) goto L_11837c38;
  /* 11837c74 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11837c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837c79 je 0x11837c93 */
  if (C.zf) goto L_11837c93;
  /* 11837c7b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11837c7e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837c81 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837c83 je 0x11837c64 */
  if (C.zf) goto L_11837c64;
  /* 11837c85 jmp 0x11837c38 */
  goto L_11837c38;
L_11837c87:;
  /* 11837c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837c89 pop esi */
  ESI = (pop32());
  /* 11837c8a pop ebx */
  EBX = (pop32());
  /* 11837c8b pop edi */
  EDI = (pop32());
  /* 11837c8c mov al, dl */
  AL = (DL);
  /* 11837c8e jmp 0x11837b66 */
  jmp_ind(0x11837b66u); return;
L_11837c93:;
  /* 11837c93 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11837c96 pop esi */
  ESI = (pop32());
  /* 11837c97 pop ebx */
  EBX = (pop32());
  /* 11837c98 pop edi */
  EDI = (pop32());
  /* 11837c99 ret  */
  ESPCHK(0x11837c20u, _esp0);
  ESP += 4; return;
L_11837c9a:;
  /* 11837c9a mov eax, edi */
  EAX = (EDI);
  /* 11837c9c pop esi */
  ESI = (pop32());
  /* 11837c9d pop ebx */
  EBX = (pop32());
  /* 11837c9e pop edi */
  EDI = (pop32());
  /* 11837c9f ret  */
  ESPCHK(0x11837c20u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11837ca0 (56 bytes, 31 insns) */
void f_11837ca0(void) {
  FTRACE(0x11837ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11837ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11837ca3 push edi */
  push32((uint32_t)(EDI));
  /* 11837ca4 push esi */
  push32((uint32_t)(ESI));
  /* 11837ca5 push ebx */
  push32((uint32_t)(EBX));
  /* 11837ca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11837ca9 jecxz 0x11837cd1 */
  x86_unimpl("jecxz @ 0x11837ca9");
  /* 11837cab mov ebx, ecx */
  EBX = (ECX);
  /* 11837cad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11837cb0 mov esi, edi */
  ESI = (EDI);
  /* 11837cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837cb4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11837cb6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11837cb8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837cba mov edi, esi */
  EDI = (ESI);
  /* 11837cbc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11837cbf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11837cc1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11837cc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11837cc6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837cc9 ja 0x11837ccf */
  if ((!C.cf&&!C.zf)) goto L_11837ccf;
  /* 11837ccb je 0x11837cd1 */
  if (C.zf) goto L_11837cd1;
  /* 11837ccd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837cce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11837ccf:;
  /* 11837ccf not ecx */
  ECX = (~(ECX));
L_11837cd1:;
  /* 11837cd1 mov eax, ecx */
  EAX = (ECX);
  /* 11837cd3 pop ebx */
  EBX = (pop32());
  /* 11837cd4 pop esi */
  ESI = (pop32());
  /* 11837cd5 pop edi */
  EDI = (pop32());
  /* 11837cd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11837cd7 ret  */
  ESPCHK(0x11837ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x11837ce0 (47 bytes, 17 insns) */
void f_11837ce0(void) {
  FTRACE(0x11837ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 11837ce1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837ce6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11837cea jb 0x11837d00 */
  if (C.cf) goto L_11837d00;
L_11837cec:;
  /* 11837cec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837cf2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837cf7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11837cf9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837cfe jae 0x11837cec */
  if (!C.cf) goto L_11837cec;
L_11837d00:;
  /* 11837d00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837d02 mov eax, esp */
  EAX = (ESP);
  /* 11837d04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11837d06 mov esp, ecx */
  ESP = (ECX);
  /* 11837d08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11837d0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11837d0d push eax */
  push32((uint32_t)(EAX));
  /* 11837d0e ret  */
  ESPCHK(0x11837ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d0f @ 0x11837d0f (137 bytes, 50 insns) */
void f_11837d0f(void) {
  FTRACE(0x11837d0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837d0f push ebx */
  push32((uint32_t)(EBX));
  /* 11837d10 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11837d12 cmp dword ptr [0x1183f784], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f784))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837d18 push esi */
  push32((uint32_t)(ESI));
  /* 11837d19 push edi */
  push32((uint32_t)(EDI));
  /* 11837d1a jne 0x11837d5e */
  if (!C.zf) goto L_11837d5e;
  /* 11837d1c push 0x1183a68c */
  push32((uint32_t)(0x1183a68cu));
  /* 11837d21 call dword ptr [0x1183a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a028))), 0x11837d27u);
  /* 11837d27 mov edi, eax */
  EDI = (EAX);
  /* 11837d29 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837d2b je 0x11837d94 */
  if (C.zf) goto L_11837d94;
  /* 11837d2d mov esi, dword ptr [0x1183a0dc] */
  ESI = (r32((uint32_t)(0x1183a0dc)));
  /* 11837d33 push 0x1183a680 */
  push32((uint32_t)(0x1183a680u));
  /* 11837d38 push edi */
  push32((uint32_t)(EDI));
  /* 11837d39 call esi */
  call_ind((uint32_t)(ESI), 0x11837d3bu);
  /* 11837d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837d3d mov dword ptr [0x1183f784], eax */
  w32((uint32_t)(0x1183f784), (EAX));
  /* 11837d42 je 0x11837d94 */
  if (C.zf) goto L_11837d94;
  /* 11837d44 push 0x1183a670 */
  push32((uint32_t)(0x1183a670u));
  /* 11837d49 push edi */
  push32((uint32_t)(EDI));
  /* 11837d4a call esi */
  call_ind((uint32_t)(ESI), 0x11837d4cu);
  /* 11837d4c push 0x1183a65c */
  push32((uint32_t)(0x1183a65cu));
  /* 11837d51 push edi */
  push32((uint32_t)(EDI));
  /* 11837d52 mov dword ptr [0x1183f788], eax */
  w32((uint32_t)(0x1183f788), (EAX));
  /* 11837d57 call esi */
  call_ind((uint32_t)(ESI), 0x11837d59u);
  /* 11837d59 mov dword ptr [0x1183f78c], eax */
  w32((uint32_t)(0x1183f78c), (EAX));
L_11837d5e:;
  /* 11837d5e mov eax, dword ptr [0x1183f788] */
  EAX = (r32((uint32_t)(0x1183f788)));
  /* 11837d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837d65 je 0x11837d7d */
  if (C.zf) goto L_11837d7d;
  /* 11837d67 call eax */
  call_ind((uint32_t)(EAX), 0x11837d69u);
  /* 11837d69 mov ebx, eax */
  EBX = (EAX);
  /* 11837d6b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11837d6d je 0x11837d7d */
  if (C.zf) goto L_11837d7d;
  /* 11837d6f mov eax, dword ptr [0x1183f78c] */
  EAX = (r32((uint32_t)(0x1183f78c)));
  /* 11837d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837d76 je 0x11837d7d */
  if (C.zf) goto L_11837d7d;
  /* 11837d78 push ebx */
  push32((uint32_t)(EBX));
  /* 11837d79 call eax */
  call_ind((uint32_t)(EAX), 0x11837d7bu);
  /* 11837d7b mov ebx, eax */
  EBX = (EAX);
L_11837d7d:;
  /* 11837d7d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11837d81 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11837d85 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11837d89 push ebx */
  push32((uint32_t)(EBX));
  /* 11837d8a call dword ptr [0x1183f784] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183f784))), 0x11837d90u);
L_11837d90:;
  /* 11837d90 pop edi */
  EDI = (pop32());
  /* 11837d91 pop esi */
  ESI = (pop32());
  /* 11837d92 pop ebx */
  EBX = (pop32());
  /* 11837d93 ret  */
  ESPCHK(0x11837d0fu, _esp0);
  ESP += 4; return;
L_11837d94:;
  /* 11837d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837d96 jmp 0x11837d90 */
  goto L_11837d90;
}

/* _strncpy @ 0x11837da0 (254 bytes, 109 insns) */
void f_11837da0(void) {
  FTRACE(0x11837da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837da0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11837da4 push edi */
  push32((uint32_t)(EDI));
  /* 11837da5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11837da7 je 0x11837e23 */
  if (C.zf) goto L_11837e23;
  /* 11837da9 push esi */
  push32((uint32_t)(ESI));
  /* 11837daa push ebx */
  push32((uint32_t)(EBX));
  /* 11837dab mov ebx, ecx */
  EBX = (ECX);
  /* 11837dad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11837db1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11837db7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11837dbb jne 0x11837dc4 */
  if (!C.zf) goto L_11837dc4;
  /* 11837dbd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837dc0 jne 0x11837e31 */
  if (!C.zf) goto L_11837e31;
  /* 11837dc2 jmp 0x11837de5 */
  goto L_11837de5;
L_11837dc4:;
  /* 11837dc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837dc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11837dc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837dc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837dca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837dcb je 0x11837df2 */
  if (C.zf) goto L_11837df2;
  /* 11837dcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837dcf je 0x11837dfa */
  if (C.zf) goto L_11837dfa;
  /* 11837dd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11837dd7 jne 0x11837dc4 */
  if (!C.zf) goto L_11837dc4;
  /* 11837dd9 mov ebx, ecx */
  EBX = (ECX);
  /* 11837ddb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837dde jne 0x11837e31 */
  if (!C.zf) goto L_11837e31;
L_11837de0:;
  /* 11837de0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11837de3 je 0x11837df2 */
  if (C.zf) goto L_11837df2;
L_11837de5:;
  /* 11837de5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11837de7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11837de8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837dea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11837ded je 0x11837e1e */
  if (C.zf) goto L_11837e1e;
  /* 11837def dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11837df0 jne 0x11837de5 */
  if (!C.zf) goto L_11837de5;
L_11837df2:;
  /* 11837df2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11837df6 pop ebx */
  EBX = (pop32());
  /* 11837df7 pop esi */
  ESI = (pop32());
  /* 11837df8 pop edi */
  EDI = (pop32());
  /* 11837df9 ret  */
  ESPCHK(0x11837da0u, _esp0);
  ESP += 4; return;
L_11837dfa:;
  /* 11837dfa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11837e00 je 0x11837e14 */
  if (C.zf) goto L_11837e14;
L_11837e02:;
  /* 11837e02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837e04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837e05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837e06 je 0x11837e96 */
  if (C.zf) goto L_11837e96;
  /* 11837e0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11837e12 jne 0x11837e02 */
  if (!C.zf) goto L_11837e02;
L_11837e14:;
  /* 11837e14 mov ebx, ecx */
  EBX = (ECX);
  /* 11837e16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11837e19 jne 0x11837e87 */
  if (!C.zf) goto L_11837e87;
L_11837e1b:;
  /* 11837e1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11837e1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11837e1e:;
  /* 11837e1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11837e1f jne 0x11837e1b */
  if (!C.zf) goto L_11837e1b;
  /* 11837e21 pop ebx */
  EBX = (pop32());
  /* 11837e22 pop esi */
  ESI = (pop32());
L_11837e23:;
  /* 11837e23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11837e27 pop edi */
  EDI = (pop32());
  /* 11837e28 ret  */
  ESPCHK(0x11837da0u, _esp0);
  ESP += 4; return;
L_11837e29:;
  /* 11837e29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11837e2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837e2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837e2f je 0x11837de0 */
  if (C.zf) goto L_11837de0;
L_11837e31:;
  /* 11837e31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11837e36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11837e38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11837e3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11837e3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11837e3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11837e41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837e44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11837e49 je 0x11837e29 */
  if (C.zf) goto L_11837e29;
  /* 11837e4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11837e4d je 0x11837e7b */
  if (C.zf) goto L_11837e7b;
  /* 11837e4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11837e51 je 0x11837e71 */
  if (C.zf) goto L_11837e71;
  /* 11837e53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11837e59 je 0x11837e67 */
  if (C.zf) goto L_11837e67;
  /* 11837e5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11837e61 jne 0x11837e29 */
  if (!C.zf) goto L_11837e29;
  /* 11837e63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11837e65 jmp 0x11837e7f */
  goto L_11837e7f;
L_11837e67:;
  /* 11837e67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11837e6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11837e6f jmp 0x11837e7f */
  goto L_11837e7f;
L_11837e71:;
  /* 11837e71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11837e77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11837e79 jmp 0x11837e7f */
  goto L_11837e7f;
L_11837e7b:;
  /* 11837e7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11837e7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11837e7f:;
  /* 11837e7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11837e84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837e85 je 0x11837e91 */
  if (C.zf) goto L_11837e91;
L_11837e87:;
  /* 11837e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11837e89:;
  /* 11837e89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11837e8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837e8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11837e8f jne 0x11837e89 */
  if (!C.zf) goto L_11837e89;
L_11837e91:;
  /* 11837e91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11837e94 jne 0x11837e1b */
  if (!C.zf) goto L_11837e1b;
L_11837e96:;
  /* 11837e96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11837e9a pop ebx */
  EBX = (pop32());
  /* 11837e9b pop esi */
  ESI = (pop32());
  /* 11837e9c pop edi */
  EDI = (pop32());
  /* 11837e9d ret  */
  ESPCHK(0x11837da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e9e @ 0x11837e9e (139 bytes, 59 insns) */
void f_11837e9e(void) {
  FTRACE(0x11837e9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837e9e push ebx */
  push32((uint32_t)(EBX));
  /* 11837e9f push ebp */
  push32((uint32_t)(EBP));
  /* 11837ea0 push esi */
  push32((uint32_t)(ESI));
  /* 11837ea1 push edi */
  push32((uint32_t)(EDI));
  /* 11837ea2 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11837ea6:;
  /* 11837ea6 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837ead jle 0x11837ebe */
  if ((C.zf||C.sf!=C.of)) goto L_11837ebe;
  /* 11837eaf movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11837eb2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11837eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11837eb5 call 0x1183633d */
  push32(0x11837ebau); f_1183633d();
  /* 11837eba pop ecx */
  ECX = (pop32());
  /* 11837ebb pop ecx */
  ECX = (pop32());
  /* 11837ebc jmp 0x11837ecd */
  goto L_11837ecd;
L_11837ebe:;
  /* 11837ebe movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11837ec1 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 11837ec7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11837eca and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11837ecd:;
  /* 11837ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837ecf je 0x11837ed4 */
  if (C.zf) goto L_11837ed4;
  /* 11837ed1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837ed2 jmp 0x11837ea6 */
  goto L_11837ea6;
L_11837ed4:;
  /* 11837ed4 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11837ed7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837ed8 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837edb mov ebp, esi */
  EBP = (ESI);
  /* 11837edd je 0x11837ee4 */
  if (C.zf) goto L_11837ee4;
  /* 11837edf cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837ee2 jne 0x11837ee8 */
  if (!C.zf) goto L_11837ee8;
L_11837ee4:;
  /* 11837ee4 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11837ee7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11837ee8:;
  /* 11837ee8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11837eea:;
  /* 11837eea cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837ef1 jle 0x11837eff */
  if ((C.zf||C.sf!=C.of)) goto L_11837eff;
  /* 11837ef3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11837ef5 push esi */
  push32((uint32_t)(ESI));
  /* 11837ef6 call 0x1183633d */
  push32(0x11837efbu); f_1183633d();
  /* 11837efb pop ecx */
  ECX = (pop32());
  /* 11837efc pop ecx */
  ECX = (pop32());
  /* 11837efd jmp 0x11837f0a */
  goto L_11837f0a;
L_11837eff:;
  /* 11837eff mov eax, dword ptr [0x1183e8ec] */
  EAX = (r32((uint32_t)(0x1183e8ec)));
  /* 11837f04 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11837f07 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11837f0a:;
  /* 11837f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837f0c je 0x11837f1b */
  if (C.zf) goto L_11837f1b;
  /* 11837f0e lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11837f11 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11837f15 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11837f18 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11837f19 jmp 0x11837eea */
  goto L_11837eea;
L_11837f1b:;
  /* 11837f1b cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837f1e mov eax, ebx */
  EAX = (EBX);
  /* 11837f20 jne 0x11837f24 */
  if (!C.zf) goto L_11837f24;
  /* 11837f22 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11837f24:;
  /* 11837f24 pop edi */
  EDI = (pop32());
  /* 11837f25 pop esi */
  ESI = (pop32());
  /* 11837f26 pop ebp */
  EBP = (pop32());
  /* 11837f27 pop ebx */
  EBX = (pop32());
  /* 11837f28 ret  */
  ESPCHK(0x11837e9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f29 @ 0x11837f29 (125 bytes, 51 insns) */
void f_11837f29(void) {
  FTRACE(0x11837f29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837f29 cmp dword ptr [0x1183fbc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837f30 push ebx */
  push32((uint32_t)(EBX));
  /* 11837f31 push esi */
  push32((uint32_t)(ESI));
  /* 11837f32 mov esi, dword ptr [0x1183f520] */
  ESI = (r32((uint32_t)(0x1183f520)));
  /* 11837f38 push edi */
  push32((uint32_t)(EDI));
  /* 11837f39 je 0x11837fa0 */
  if (C.zf) goto L_11837fa0;
  /* 11837f3b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11837f3d jne 0x11837f5a */
  if (!C.zf) goto L_11837f5a;
  /* 11837f3f cmp dword ptr [0x1183f528], esi */
  { uint32_t _a=(r32((uint32_t)(0x1183f528))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837f45 je 0x11837fa0 */
  if (C.zf) goto L_11837fa0;
  /* 11837f47 call 0x11839023 */
  push32(0x11837f4cu); f_11839023();
  /* 11837f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837f4e jne 0x11837fa0 */
  if (!C.zf) goto L_11837fa0;
  /* 11837f50 mov esi, dword ptr [0x1183f520] */
  ESI = (r32((uint32_t)(0x1183f520)));
  /* 11837f56 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11837f58 je 0x11837fa0 */
  if (C.zf) goto L_11837fa0;
L_11837f5a:;
  /* 11837f5a mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11837f5e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11837f60 je 0x11837fa0 */
  if (C.zf) goto L_11837fa0;
  /* 11837f62 push ebx */
  push32((uint32_t)(EBX));
  /* 11837f63 call 0x11836bc0 */
  push32(0x11837f68u); f_11836bc0();
  /* 11837f68 pop ecx */
  ECX = (pop32());
  /* 11837f69 mov edi, eax */
  EDI = (EAX);
L_11837f6b:;
  /* 11837f6b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11837f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837f6f je 0x11837fa0 */
  if (C.zf) goto L_11837fa0;
  /* 11837f71 push eax */
  push32((uint32_t)(EAX));
  /* 11837f72 call 0x11836bc0 */
  push32(0x11837f77u); f_11836bc0();
  /* 11837f77 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11837f79 pop ecx */
  ECX = (pop32());
  /* 11837f7a jbe 0x11837f93 */
  if ((C.cf||C.zf)) goto L_11837f93;
  /* 11837f7c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11837f7e cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11837f82 jne 0x11837f93 */
  if (!C.zf) goto L_11837f93;
  /* 11837f84 push edi */
  push32((uint32_t)(EDI));
  /* 11837f85 push ebx */
  push32((uint32_t)(EBX));
  /* 11837f86 push eax */
  push32((uint32_t)(EAX));
  /* 11837f87 call 0x11838fe4 */
  push32(0x11837f8cu); f_11838fe4();
  /* 11837f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11837f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11837f91 je 0x11837f98 */
  if (C.zf) goto L_11837f98;
L_11837f93:;
  /* 11837f93 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11837f96 jmp 0x11837f6b */
  goto L_11837f6b;
L_11837f98:;
  /* 11837f98 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11837f9a lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11837f9e jmp 0x11837fa2 */
  goto L_11837fa2;
L_11837fa0:;
  /* 11837fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11837fa2:;
  /* 11837fa2 pop edi */
  EDI = (pop32());
  /* 11837fa3 pop esi */
  ESI = (pop32());
  /* 11837fa4 pop ebx */
  EBX = (pop32());
  /* 11837fa5 ret  */
  ESPCHK(0x11837f29u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa6 @ 0x11837fa6 (386 bytes, 138 insns) */
void f_11837fa6(void) {
  FTRACE(0x11837fa6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11837fa6 push ebp */
  push32((uint32_t)(EBP));
  /* 11837fa7 mov ebp, esp */
  EBP = (ESP);
  /* 11837fa9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11837faf and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11837fb3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11837fb5 push esi */
  push32((uint32_t)(ESI));
  /* 11837fb6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837fb7 push edi */
  push32((uint32_t)(EDI));
  /* 11837fb8 je 0x11838021 */
  if (C.zf) goto L_11838021;
  /* 11837fba dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837fbb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837fbc je 0x11838004 */
  if (C.zf) goto L_11838004;
  /* 11837fbe sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837fc1 je 0x11838004 */
  if (C.zf) goto L_11838004;
  /* 11837fc3 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837fc6 je 0x11838004 */
  if (C.zf) goto L_11838004;
  /* 11837fc8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837fcb je 0x11837ff7 */
  if (C.zf) goto L_11837ff7;
  /* 11837fcd sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11837fd0 je 0x11837fea */
  if (C.zf) goto L_11837fea;
  /* 11837fd2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11837fd3 je 0x11837fdd */
  if (C.zf) goto L_11837fdd;
  /* 11837fd5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11837fd8 jmp 0x11838123 */
  goto L_11838123;
L_11837fdd:;
  /* 11837fdd mov ebx, dword ptr [0x1183f7b8] */
  EBX = (r32((uint32_t)(0x1183f7b8)));
  /* 11837fe3 mov edi, 0x1183f7b8 */
  EDI = (0x1183f7b8u);
  /* 11837fe8 jmp 0x1183802c */
  goto L_1183802c;
L_11837fea:;
  /* 11837fea mov ebx, dword ptr [0x1183f7b4] */
  EBX = (r32((uint32_t)(0x1183f7b4)));
  /* 11837ff0 mov edi, 0x1183f7b4 */
  EDI = (0x1183f7b4u);
  /* 11837ff5 jmp 0x1183802c */
  goto L_1183802c;
L_11837ff7:;
  /* 11837ff7 mov ebx, dword ptr [0x1183f7bc] */
  EBX = (r32((uint32_t)(0x1183f7bc)));
  /* 11837ffd mov edi, 0x1183f7bc */
  EDI = (0x1183f7bcu);
  /* 11838002 jmp 0x1183802c */
  goto L_1183802c;
L_11838004:;
  /* 11838004 call 0x11832a16 */
  push32(0x11838009u); f_11832a16();
  /* 11838009 mov esi, eax */
  ESI = (EAX);
  /* 1183800b push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 1183800e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11838011 call 0x11838128 */
  push32(0x11838016u); f_11838128();
  /* 11838016 mov edi, eax */
  EDI = (EAX);
  /* 11838018 pop ecx */
  ECX = (pop32());
  /* 11838019 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183801c pop ecx */
  ECX = (pop32());
  /* 1183801d mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 1183801f jmp 0x1183803e */
  goto L_1183803e;
L_11838021:;
  /* 11838021 mov ebx, dword ptr [0x1183f7b0] */
  EBX = (r32((uint32_t)(0x1183f7b0)));
  /* 11838027 mov edi, 0x1183f7b0 */
  EDI = (0x1183f7b0u);
L_1183802c:;
  /* 1183802c push 1 */
  push32((uint32_t)(0x1u));
  /* 1183802e mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11838035 call 0x11834436 */
  push32(0x1183803au); f_11834436();
  /* 1183803a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1183803d pop ecx */
  ECX = (pop32());
L_1183803e:;
  /* 1183803e cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838041 jne 0x11838059 */
  if (!C.zf) goto L_11838059;
  /* 11838043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838047 je 0x11838121 */
  if (C.zf) goto L_11838121;
  /* 1183804d push ebx */
  push32((uint32_t)(EBX));
  /* 1183804e call 0x11834497 */
  push32(0x11838053u); f_11834497();
  /* 11838053 pop ecx */
  ECX = (pop32());
  /* 11838054 jmp 0x11838121 */
  goto L_11838121;
L_11838059:;
  /* 11838059 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1183805b cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183805d jne 0x11838073 */
  if (!C.zf) goto L_11838073;
  /* 1183805f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838062 je 0x1183806c */
  if (C.zf) goto L_1183806c;
  /* 11838064 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838066 call 0x11834497 */
  push32(0x1183806bu); f_11834497();
  /* 1183806b pop ecx */
  ECX = (pop32());
L_1183806c:;
  /* 1183806c push 3 */
  push32((uint32_t)(0x3u));
  /* 1183806e call 0x11833725 */
  push32(0x11838073u); f_11833725();
L_11838073:;
  /* 11838073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838076 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838079 je 0x11838085 */
  if (C.zf) goto L_11838085;
  /* 1183807b cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183807e je 0x11838085 */
  if (C.zf) goto L_11838085;
  /* 11838080 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838083 jne 0x118380a0 */
  if (!C.zf) goto L_118380a0;
L_11838085:;
  /* 11838085 mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 11838088 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183808b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1183808e mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 11838091 jne 0x118380dc */
  if (!C.zf) goto L_118380dc;
  /* 11838093 mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 11838096 mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 1183809d mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118380a0:;
  /* 118380a0 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118380a3 jne 0x118380dc */
  if (!C.zf) goto L_118380dc;
  /* 118380a5 mov ecx, dword ptr [0x1183c788] */
  ECX = (r32((uint32_t)(0x1183c788)));
  /* 118380ab mov eax, dword ptr [0x1183c78c] */
  EAX = (r32((uint32_t)(0x1183c78c)));
  /* 118380b0 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118380b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118380b4 jge 0x118380de */
  if ((C.sf==C.of)) goto L_118380de;
  /* 118380b6 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 118380b9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_118380bc:;
  /* 118380bc mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 118380bf add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118380c2 and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 118380c7 mov edx, dword ptr [0x1183c788] */
  EDX = (r32((uint32_t)(0x1183c788)));
  /* 118380cd mov edi, dword ptr [0x1183c78c] */
  EDI = (r32((uint32_t)(0x1183c78c)));
  /* 118380d3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118380d4 add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118380d6 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118380d8 jl 0x118380bc */
  if ((C.sf!=C.of)) goto L_118380bc;
  /* 118380da jmp 0x118380de */
  goto L_118380de;
L_118380dc:;
  /* 118380dc mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_118380de:;
  /* 118380de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118380e2 je 0x118380ec */
  if (C.zf) goto L_118380ec;
  /* 118380e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118380e6 call 0x11834497 */
  push32(0x118380ebu); f_11834497();
  /* 118380eb pop ecx */
  ECX = (pop32());
L_118380ec:;
  /* 118380ec cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118380f0 jne 0x118380fd */
  if (!C.zf) goto L_118380fd;
  /* 118380f2 push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 118380f5 push 8 */
  push32((uint32_t)(0x8u));
  /* 118380f7 call ebx */
  call_ind((uint32_t)(EBX), 0x118380f9u);
  /* 118380f9 pop ecx */
  ECX = (pop32());
  /* 118380fa pop ecx */
  ECX = (pop32());
  /* 118380fb jmp 0x1183810f */
  goto L_1183810f;
L_118380fd:;
  /* 118380fd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11838100 call ebx */
  call_ind((uint32_t)(EBX), 0x11838102u);
  /* 11838102 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838106 pop ecx */
  ECX = (pop32());
  /* 11838107 je 0x1183810f */
  if (C.zf) goto L_1183810f;
  /* 11838109 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183810d jne 0x11838121 */
  if (!C.zf) goto L_11838121;
L_1183810f:;
  /* 1183810f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11838112 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838116 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 11838119 jne 0x11838121 */
  if (!C.zf) goto L_11838121;
  /* 1183811b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1183811e mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_11838121:;
  /* 11838121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11838123:;
  /* 11838123 pop edi */
  EDI = (pop32());
  /* 11838124 pop esi */
  ESI = (pop32());
  /* 11838125 pop ebx */
  EBX = (pop32());
  /* 11838126 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11838127 ret  */
  ESPCHK(0x11837fa6u, _esp0);
  ESP += 4; return;
}

/* FUN_10008128 @ 0x11838128 (61 bytes, 25 insns) */
void f_11838128(void) {
  FTRACE(0x11838128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838128 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1183812c mov ecx, dword ptr [0x1183c794] */
  ECX = (r32((uint32_t)(0x1183c794)));
  /* 11838132 push esi */
  push32((uint32_t)(ESI));
  /* 11838133 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11838137 cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183813a push edi */
  push32((uint32_t)(EDI));
  /* 1183813b mov eax, edx */
  EAX = (EDX);
  /* 1183813d je 0x11838151 */
  if (C.zf) goto L_11838151;
  /* 1183813f lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 11838142 lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_11838145:;
  /* 11838145 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11838148 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183814a jae 0x11838151 */
  if (!C.cf) goto L_11838151;
  /* 1183814c cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183814f jne 0x11838145 */
  if (!C.zf) goto L_11838145;
L_11838151:;
  /* 11838151 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11838154 lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 11838157 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838159 jae 0x11838160 */
  if (!C.cf) goto L_11838160;
  /* 1183815b cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183815e je 0x11838162 */
  if (C.zf) goto L_11838162;
L_11838160:;
  /* 11838160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11838162:;
  /* 11838162 pop edi */
  EDI = (pop32());
  /* 11838163 pop esi */
  ESI = (pop32());
  /* 11838164 ret  */
  ESPCHK(0x11838128u, _esp0);
  ESP += 4; return;
}

/* FUN_10008165 @ 0x11838165 (318 bytes, 123 insns) */
void f_11838165(void) {
  FTRACE(0x11838165u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838165 push ebp */
  push32((uint32_t)(EBP));
  /* 11838166 mov ebp, esp */
  EBP = (ESP);
  /* 11838168 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1183816a push 0x1183a6a0 */
  push32((uint32_t)(0x1183a6a0u));
  /* 1183816f push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11838174 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1183817a push eax */
  push32((uint32_t)(EAX));
  /* 1183817b mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11838182 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838185 push ebx */
  push32((uint32_t)(EBX));
  /* 11838186 push esi */
  push32((uint32_t)(ESI));
  /* 11838187 push edi */
  push32((uint32_t)(EDI));
  /* 11838188 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1183818b mov eax, dword ptr [0x1183f7c4] */
  EAX = (r32((uint32_t)(0x1183f7c4)));
  /* 11838190 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838192 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838194 jne 0x118381d4 */
  if (!C.zf) goto L_118381d4;
  /* 11838196 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11838199 push eax */
  push32((uint32_t)(EAX));
  /* 1183819a push 1 */
  push32((uint32_t)(0x1u));
  /* 1183819c pop esi */
  ESI = (pop32());
  /* 1183819d push esi */
  push32((uint32_t)(ESI));
  /* 1183819e push 0x1183a69c */
  push32((uint32_t)(0x1183a69cu));
  /* 118381a3 push esi */
  push32((uint32_t)(ESI));
  /* 118381a4 call dword ptr [0x1183a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a020))), 0x118381aau);
  /* 118381aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118381ac je 0x118381b2 */
  if (C.zf) goto L_118381b2;
  /* 118381ae mov eax, esi */
  EAX = (ESI);
  /* 118381b0 jmp 0x118381cf */
  goto L_118381cf;
L_118381b2:;
  /* 118381b2 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118381b5 push eax */
  push32((uint32_t)(EAX));
  /* 118381b6 push esi */
  push32((uint32_t)(ESI));
  /* 118381b7 push 0x1183a698 */
  push32((uint32_t)(0x1183a698u));
  /* 118381bc push esi */
  push32((uint32_t)(ESI));
  /* 118381bd push ebx */
  push32((uint32_t)(EBX));
  /* 118381be call dword ptr [0x1183a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a024))), 0x118381c4u);
  /* 118381c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118381c6 je 0x1183829a */
  if (C.zf) goto L_1183829a;
  /* 118381cc push 2 */
  push32((uint32_t)(0x2u));
  /* 118381ce pop eax */
  EAX = (pop32());
L_118381cf:;
  /* 118381cf mov dword ptr [0x1183f7c4], eax */
  w32((uint32_t)(0x1183f7c4), (EAX));
L_118381d4:;
  /* 118381d4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118381d7 jne 0x118381fd */
  if (!C.zf) goto L_118381fd;
  /* 118381d9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118381dc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118381de jne 0x118381e5 */
  if (!C.zf) goto L_118381e5;
  /* 118381e0 mov eax, dword ptr [0x1183f798] */
  EAX = (r32((uint32_t)(0x1183f798)));
L_118381e5:;
  /* 118381e5 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118381e8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118381eb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118381ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118381f1 push eax */
  push32((uint32_t)(EAX));
  /* 118381f2 call dword ptr [0x1183a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a024))), 0x118381f8u);
  /* 118381f8 jmp 0x1183829c */
  goto L_1183829c;
L_118381fd:;
  /* 118381fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838200 jne 0x1183829a */
  if (!C.zf) goto L_1183829a;
  /* 11838206 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838209 jne 0x11838213 */
  if (!C.zf) goto L_11838213;
  /* 1183820b mov eax, dword ptr [0x1183f7a8] */
  EAX = (r32((uint32_t)(0x1183f7a8)));
  /* 11838210 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11838213:;
  /* 11838213 push ebx */
  push32((uint32_t)(EBX));
  /* 11838214 push ebx */
  push32((uint32_t)(EBX));
  /* 11838215 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11838218 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183821b mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1183821e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11838220 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838222 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11838225 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11838226 push eax */
  push32((uint32_t)(EAX));
  /* 11838227 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1183822a call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x11838230u);
  /* 11838230 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11838233 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838235 je 0x1183829a */
  if (C.zf) goto L_1183829a;
  /* 11838237 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1183823a lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1183823d mov eax, edi */
  EAX = (EDI);
  /* 1183823f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11838242 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11838244 call 0x11837ce0 */
  push32(0x11838249u); f_11837ce0();
  /* 11838249 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1183824c mov esi, esp */
  ESI = (ESP);
  /* 1183824e mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11838251 push edi */
  push32((uint32_t)(EDI));
  /* 11838252 push ebx */
  push32((uint32_t)(EBX));
  /* 11838253 push esi */
  push32((uint32_t)(ESI));
  /* 11838254 call 0x11836b60 */
  push32(0x11838259u); f_11836b60();
  /* 11838259 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183825c jmp 0x11838269 */
  goto L_11838269;
  /* 1183825e push 1 */
  push32((uint32_t)(0x1u));
  /* 11838260 pop eax */
  EAX = (pop32());
  /* 11838261 ret  */
  ESPCHK(0x11838165u, _esp0);
  ESP += 4; return;
  /* 11838262 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11838265 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838267 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11838269:;
  /* 11838269 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1183826d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183826f je 0x1183829a */
  if (C.zf) goto L_1183829a;
  /* 11838271 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11838274 push esi */
  push32((uint32_t)(ESI));
  /* 11838275 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11838278 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183827b push 1 */
  push32((uint32_t)(0x1u));
  /* 1183827d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11838280 call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x11838286u);
  /* 11838286 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838288 je 0x1183829a */
  if (C.zf) goto L_1183829a;
  /* 1183828a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183828d push eax */
  push32((uint32_t)(EAX));
  /* 1183828e push esi */
  push32((uint32_t)(ESI));
  /* 1183828f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11838292 call dword ptr [0x1183a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a020))), 0x11838298u);
  /* 11838298 jmp 0x1183829c */
  goto L_1183829c;
L_1183829a:;
  /* 1183829a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1183829c:;
  /* 1183829c lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1183829f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118382a2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118382a9 pop edi */
  EDI = (pop32());
  /* 118382aa pop esi */
  ESI = (pop32());
  /* 118382ab pop ebx */
  EBX = (pop32());
  /* 118382ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118382ad ret  */
  ESPCHK(0x11838165u, _esp0);
  ESP += 4; return;
}

/* FUN_100082ae @ 0x118382ae (511 bytes, 193 insns) */
void f_118382ae(void) {
  FTRACE(0x118382aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118382ae push ebp */
  push32((uint32_t)(EBP));
  /* 118382af mov ebp, esp */
  EBP = (ESP);
  /* 118382b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118382b3 push 0x1183a6b0 */
  push32((uint32_t)(0x1183a6b0u));
  /* 118382b8 push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 118382bd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118382c3 push eax */
  push32((uint32_t)(EAX));
  /* 118382c4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118382cb sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118382ce push ebx */
  push32((uint32_t)(EBX));
  /* 118382cf push esi */
  push32((uint32_t)(ESI));
  /* 118382d0 push edi */
  push32((uint32_t)(EDI));
  /* 118382d1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118382d4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118382d6 cmp dword ptr [0x1183f7d4], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f7d4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118382dc jne 0x11838324 */
  if (!C.zf) goto L_11838324;
  /* 118382de push edi */
  push32((uint32_t)(EDI));
  /* 118382df push edi */
  push32((uint32_t)(EDI));
  /* 118382e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118382e2 pop ebx */
  EBX = (pop32());
  /* 118382e3 push ebx */
  push32((uint32_t)(EBX));
  /* 118382e4 push 0x1183a69c */
  push32((uint32_t)(0x1183a69cu));
  /* 118382e9 mov esi, 0x100 */
  ESI = (0x100u);
  /* 118382ee push esi */
  push32((uint32_t)(ESI));
  /* 118382ef push edi */
  push32((uint32_t)(EDI));
  /* 118382f0 call dword ptr [0x1183a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a014))), 0x118382f6u);
  /* 118382f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118382f8 je 0x11838302 */
  if (C.zf) goto L_11838302;
  /* 118382fa mov dword ptr [0x1183f7d4], ebx */
  w32((uint32_t)(0x1183f7d4), (EBX));
  /* 11838300 jmp 0x11838324 */
  goto L_11838324;
L_11838302:;
  /* 11838302 push edi */
  push32((uint32_t)(EDI));
  /* 11838303 push edi */
  push32((uint32_t)(EDI));
  /* 11838304 push ebx */
  push32((uint32_t)(EBX));
  /* 11838305 push 0x1183a698 */
  push32((uint32_t)(0x1183a698u));
  /* 1183830a push esi */
  push32((uint32_t)(ESI));
  /* 1183830b push edi */
  push32((uint32_t)(EDI));
  /* 1183830c call dword ptr [0x1183a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a018))), 0x11838312u);
  /* 11838312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838314 je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 1183831a mov dword ptr [0x1183f7d4], 2 */
  w32((uint32_t)(0x1183f7d4), (0x2u));
L_11838324:;
  /* 11838324 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838327 jle 0x11838339 */
  if ((C.zf||C.sf!=C.of)) goto L_11838339;
  /* 11838329 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183832c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1183832f call 0x118384d2 */
  push32(0x11838334u); f_118384d2();
  /* 11838334 pop ecx */
  ECX = (pop32());
  /* 11838335 pop ecx */
  ECX = (pop32());
  /* 11838336 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11838339:;
  /* 11838339 mov eax, dword ptr [0x1183f7d4] */
  EAX = (r32((uint32_t)(0x1183f7d4)));
  /* 1183833e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838341 jne 0x11838360 */
  if (!C.zf) goto L_11838360;
  /* 11838343 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11838346 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11838349 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183834c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1183834f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11838352 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11838355 call dword ptr [0x1183a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a018))), 0x1183835bu);
  /* 1183835b jmp 0x1183843e */
  goto L_1183843e;
L_11838360:;
  /* 11838360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838363 jne 0x1183843c */
  if (!C.zf) goto L_1183843c;
  /* 11838369 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183836c jne 0x11838376 */
  if (!C.zf) goto L_11838376;
  /* 1183836e mov eax, dword ptr [0x1183f7a8] */
  EAX = (r32((uint32_t)(0x1183f7a8)));
  /* 11838373 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11838376:;
  /* 11838376 push edi */
  push32((uint32_t)(EDI));
  /* 11838377 push edi */
  push32((uint32_t)(EDI));
  /* 11838378 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183837b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1183837e mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11838381 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11838383 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838385 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11838388 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11838389 push eax */
  push32((uint32_t)(EAX));
  /* 1183838a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1183838d call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x11838393u);
  /* 11838393 mov ebx, eax */
  EBX = (EAX);
  /* 11838395 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11838398 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183839a je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 118383a0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118383a3 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 118383a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118383a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118383ab call 0x11837ce0 */
  push32(0x118383b0u); f_11837ce0();
  /* 118383b0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118383b3 mov eax, esp */
  EAX = (ESP);
  /* 118383b5 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118383b8 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118383bc jmp 0x118383d1 */
  goto L_118383d1;
  /* 118383be push 1 */
  push32((uint32_t)(0x1u));
  /* 118383c0 pop eax */
  EAX = (pop32());
  /* 118383c1 ret  */
  ESPCHK(0x118382aeu, _esp0);
  ESP += 4; return;
  /* 118383c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118383c5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118383c7 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 118383ca or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118383ce mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_118383d1:;
  /* 118383d1 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118383d4 je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 118383d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118383d7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118383da push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118383dd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118383e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118383e2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118383e5 call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x118383ebu);
  /* 118383eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118383ed je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 118383ef push edi */
  push32((uint32_t)(EDI));
  /* 118383f0 push edi */
  push32((uint32_t)(EDI));
  /* 118383f1 push ebx */
  push32((uint32_t)(EBX));
  /* 118383f2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118383f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118383f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118383fb call dword ptr [0x1183a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a014))), 0x11838401u);
  /* 11838401 mov esi, eax */
  ESI = (EAX);
  /* 11838403 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11838406 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838408 je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 1183840a test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1183840e je 0x11838450 */
  if (C.zf) goto L_11838450;
  /* 11838410 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838413 je 0x118384cb */
  if (C.zf) goto L_118384cb;
  /* 11838419 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183841c jg 0x1183843c */
  if ((!C.zf&&C.sf==C.of)) goto L_1183843c;
  /* 1183841e push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11838421 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11838424 push ebx */
  push32((uint32_t)(EBX));
  /* 11838425 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11838428 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183842b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1183842e call dword ptr [0x1183a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a014))), 0x11838434u);
  /* 11838434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838436 jne 0x118384cb */
  if (!C.zf) goto L_118384cb;
L_1183843c:;
  /* 1183843c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1183843e:;
  /* 1183843e lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11838441 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11838444 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1183844b pop edi */
  EDI = (pop32());
  /* 1183844c pop esi */
  ESI = (pop32());
  /* 1183844d pop ebx */
  EBX = (pop32());
  /* 1183844e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183844f ret  */
  ESPCHK(0x118382aeu, _esp0);
  ESP += 4; return;
L_11838450:;
  /* 11838450 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11838457 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1183845a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183845d and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1183845f call 0x11837ce0 */
  push32(0x11838464u); f_11837ce0();
  /* 11838464 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11838467 mov ebx, esp */
  EBX = (ESP);
  /* 11838469 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1183846c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11838470 jmp 0x11838484 */
  goto L_11838484;
  /* 11838472 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838474 pop eax */
  EAX = (pop32());
  /* 11838475 ret  */
  ESPCHK(0x118382aeu, _esp0);
  ESP += 4; return;
  /* 11838476 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11838479 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1183847b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1183847d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11838481 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11838484:;
  /* 11838484 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838486 je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 11838488 push esi */
  push32((uint32_t)(ESI));
  /* 11838489 push ebx */
  push32((uint32_t)(EBX));
  /* 1183848a push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1183848d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11838490 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11838493 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11838496 call dword ptr [0x1183a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a014))), 0x1183849cu);
  /* 1183849c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183849e je 0x1183843c */
  if (C.zf) goto L_1183843c;
  /* 118384a0 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118384a3 push edi */
  push32((uint32_t)(EDI));
  /* 118384a4 push edi */
  push32((uint32_t)(EDI));
  /* 118384a5 jne 0x118384ab */
  if (!C.zf) goto L_118384ab;
  /* 118384a7 push edi */
  push32((uint32_t)(EDI));
  /* 118384a8 push edi */
  push32((uint32_t)(EDI));
  /* 118384a9 jmp 0x118384b1 */
  goto L_118384b1;
L_118384ab:;
  /* 118384ab push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118384ae push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_118384b1:;
  /* 118384b1 push esi */
  push32((uint32_t)(ESI));
  /* 118384b2 push ebx */
  push32((uint32_t)(EBX));
  /* 118384b3 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118384b8 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118384bb call dword ptr [0x1183a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a084))), 0x118384c1u);
  /* 118384c1 mov esi, eax */
  ESI = (EAX);
  /* 118384c3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118384c5 je 0x1183843c */
  if (C.zf) goto L_1183843c;
L_118384cb:;
  /* 118384cb mov eax, esi */
  EAX = (ESI);
  /* 118384cd jmp 0x1183843e */
  goto L_1183843e;
}

/* FUN_100084d2 @ 0x118384d2 (43 bytes, 20 insns) */
void f_118384d2(void) {
  FTRACE(0x118384d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118384d2 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118384d6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118384da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118384dc push esi */
  push32((uint32_t)(ESI));
  /* 118384dd lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 118384e0 je 0x118384ef */
  if (C.zf) goto L_118384ef;
L_118384e2:;
  /* 118384e2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118384e5 je 0x118384ef */
  if (C.zf) goto L_118384ef;
  /* 118384e7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118384e8 mov esi, ecx */
  ESI = (ECX);
  /* 118384ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118384eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118384ed jne 0x118384e2 */
  if (!C.zf) goto L_118384e2;
L_118384ef:;
  /* 118384ef cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118384f2 pop esi */
  ESI = (pop32());
  /* 118384f3 jne 0x118384fa */
  if (!C.zf) goto L_118384fa;
  /* 118384f5 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118384f9 ret  */
  ESPCHK(0x118384d2u, _esp0);
  ESP += 4; return;
L_118384fa:;
  /* 118384fa mov eax, edx */
  EAX = (EDX);
  /* 118384fc ret  */
  ESPCHK(0x118384d2u, _esp0);
  ESP += 4; return;
}

/* FUN_100084fd @ 0x118384fd (33 bytes, 15 insns) */
void f_118384fd(void) {
  FTRACE(0x118384fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118384fd mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11838501 push esi */
  push32((uint32_t)(ESI));
  /* 11838502 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11838506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11838508 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1183850b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183850d jb 0x11838513 */
  if (C.cf) goto L_11838513;
  /* 1183850f cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838511 jae 0x11838516 */
  if (!C.cf) goto L_11838516;
L_11838513:;
  /* 11838513 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838515 pop eax */
  EAX = (pop32());
L_11838516:;
  /* 11838516 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1183851a pop esi */
  ESI = (pop32());
  /* 1183851b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1183851d ret  */
  ESPCHK(0x118384fdu, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1183851e (94 bytes, 38 insns) */
void f_1183851e(void) {
  FTRACE(0x1183851eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183851e push esi */
  push32((uint32_t)(ESI));
  /* 1183851f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11838523 push edi */
  push32((uint32_t)(EDI));
  /* 11838524 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11838528 push esi */
  push32((uint32_t)(ESI));
  /* 11838529 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1183852b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1183852d call 0x118384fd */
  push32(0x11838532u); f_118384fd();
  /* 11838532 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838537 je 0x11838550 */
  if (C.zf) goto L_11838550;
  /* 11838539 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1183853c push eax */
  push32((uint32_t)(EAX));
  /* 1183853d push 1 */
  push32((uint32_t)(0x1u));
  /* 1183853f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11838541 call 0x118384fd */
  push32(0x11838546u); f_118384fd();
  /* 11838546 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183854b je 0x11838550 */
  if (C.zf) goto L_11838550;
  /* 1183854d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11838550:;
  /* 11838550 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11838553 push eax */
  push32((uint32_t)(EAX));
  /* 11838554 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11838557 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11838559 call 0x118384fd */
  push32(0x1183855eu); f_118384fd();
  /* 1183855e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838563 je 0x11838568 */
  if (C.zf) goto L_11838568;
  /* 11838565 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11838568:;
  /* 11838568 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1183856b push eax */
  push32((uint32_t)(EAX));
  /* 1183856c push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1183856f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11838571 call 0x118384fd */
  push32(0x11838576u); f_118384fd();
  /* 11838576 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838579 pop edi */
  EDI = (pop32());
  /* 1183857a pop esi */
  ESI = (pop32());
  /* 1183857b ret  */
  ESPCHK(0x1183851eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000857c @ 0x1183857c (46 bytes, 21 insns) */
void f_1183857c(void) {
  FTRACE(0x1183857cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183857c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11838580 push esi */
  push32((uint32_t)(ESI));
  /* 11838581 push edi */
  push32((uint32_t)(EDI));
  /* 11838582 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11838584 mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11838587 mov ecx, esi */
  ECX = (ESI);
  /* 11838589 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183858b mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1183858d lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11838590 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11838593 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11838595 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11838598 mov edx, edi */
  EDX = (EDI);
  /* 1183859a mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1183859d shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 118385a0 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118385a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118385a4 pop edi */
  EDI = (pop32());
  /* 118385a5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118385a8 pop esi */
  ESI = (pop32());
  /* 118385a9 ret  */
  ESPCHK(0x1183857cu, _esp0);
  ESP += 4; return;
}

/* FUN_100085aa @ 0x118385aa (45 bytes, 21 insns) */
void f_118385aa(void) {
  FTRACE(0x118385aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118385aa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118385ae push esi */
  push32((uint32_t)(ESI));
  /* 118385af push edi */
  push32((uint32_t)(EDI));
  /* 118385b0 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118385b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118385b6 mov esi, edx */
  ESI = (EDX);
  /* 118385b8 mov edi, ecx */
  EDI = (ECX);
  /* 118385ba shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 118385bd shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118385bf or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118385c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118385c4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118385c6 shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 118385c9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118385cb shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 118385cd or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118385cf pop edi */
  EDI = (pop32());
  /* 118385d0 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 118385d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118385d5 pop esi */
  ESI = (pop32());
  /* 118385d6 ret  */
  ESPCHK(0x118385aau, _esp0);
  ESP += 4; return;
}

/* FUN_100085d7 @ 0x118385d7 (199 bytes, 76 insns) */
void f_118385d7(void) {
  FTRACE(0x118385d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118385d7 push ebp */
  push32((uint32_t)(EBP));
  /* 118385d8 mov ebp, esp */
  EBP = (ESP);
  /* 118385da sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118385dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118385e0 push ebx */
  push32((uint32_t)(EBX));
  /* 118385e1 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118385e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118385e6 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118385e8 push esi */
  push32((uint32_t)(ESI));
  /* 118385e9 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 118385f0 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 118385f2 mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 118385f5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 118385f8 jbe 0x1183864b */
  if ((C.cf||C.zf)) goto L_1183864b;
  /* 118385fa push edi */
  push32((uint32_t)(EDI));
  /* 118385fb mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_118385fe:;
  /* 118385fe mov esi, ebx */
  ESI = (EBX);
  /* 11838600 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11838603 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838604 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838605 push ebx */
  push32((uint32_t)(EBX));
  /* 11838606 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838607 call 0x1183857c */
  push32(0x1183860cu); f_1183857c();
  /* 1183860c push ebx */
  push32((uint32_t)(EBX));
  /* 1183860d call 0x1183857c */
  push32(0x11838612u); f_1183857c();
  /* 11838612 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838615 push eax */
  push32((uint32_t)(EAX));
  /* 11838616 push ebx */
  push32((uint32_t)(EBX));
  /* 11838617 call 0x1183851e */
  push32(0x1183861cu); f_1183851e();
  /* 1183861c push ebx */
  push32((uint32_t)(EBX));
  /* 1183861d call 0x1183857c */
  push32(0x11838622u); f_1183857c();
  /* 11838622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838625 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11838629 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1183862d movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11838630 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11838633 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838636 push eax */
  push32((uint32_t)(EAX));
  /* 11838637 push ebx */
  push32((uint32_t)(EBX));
  /* 11838638 call 0x1183851e */
  push32(0x1183863du); f_1183851e();
  /* 1183863d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838640 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11838643 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11838646 jne 0x118385fe */
  if (!C.zf) goto L_118385fe;
  /* 11838648 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1183864a pop edi */
  EDI = (pop32());
L_1183864b:;
  /* 1183864b cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183864e jne 0x11838678 */
  if (!C.zf) goto L_11838678;
  /* 11838650 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11838653 mov eax, ecx */
  EAX = (ECX);
  /* 11838655 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11838658 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1183865b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1183865d mov esi, eax */
  ESI = (EAX);
  /* 1183865f shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11838662 shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11838665 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11838667 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1183866a add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11838671 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11838674 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11838676 jmp 0x1183864b */
  goto L_1183864b;
L_11838678:;
  /* 11838678 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1183867d:;
  /* 1183867d test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11838680 jne 0x11838692 */
  if (!C.zf) goto L_11838692;
  /* 11838682 push ebx */
  push32((uint32_t)(EBX));
  /* 11838683 call 0x1183857c */
  push32(0x11838688u); f_1183857c();
  /* 11838688 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183868f pop ecx */
  ECX = (pop32());
  /* 11838690 jmp 0x1183867d */
  goto L_1183867d;
L_11838692:;
  /* 11838692 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11838696 pop esi */
  ESI = (pop32());
  /* 11838697 mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1183869b pop ebx */
  EBX = (pop32());
  /* 1183869c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183869d ret  */
  ESPCHK(0x118385d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000869e @ 0x1183869e (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1183869e(void) {
  FTRACE(0x1183869eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183869e push ebp */
  push32((uint32_t)(EBP));
  /* 1183869f mov ebp, esp */
  EBP = (ESP);
  /* 118386a1 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118386a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118386a5 push esi */
  push32((uint32_t)(ESI));
  /* 118386a6 push edi */
  push32((uint32_t)(EDI));
  /* 118386a7 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118386aa lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 118386ad push 1 */
  push32((uint32_t)(0x1u));
  /* 118386af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118386b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118386b4 pop edx */
  EDX = (pop32());
  /* 118386b5 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118386b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118386bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118386be mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118386c1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118386c4 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118386c7 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118386ca mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118386cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118386d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118386d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118386d6 mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_118386d9:;
  /* 118386d9 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 118386db cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118386de je 0x118386ef */
  if (C.zf) goto L_118386ef;
  /* 118386e0 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118386e3 je 0x118386ef */
  if (C.zf) goto L_118386ef;
  /* 118386e5 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118386e8 je 0x118386ef */
  if (C.zf) goto L_118386ef;
  /* 118386ea cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118386ed jne 0x118386f2 */
  if (!C.zf) goto L_118386f2;
L_118386ef:;
  /* 118386ef inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118386f0 jmp 0x118386d9 */
  goto L_118386d9;
L_118386f2:;
  /* 118386f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 118386f4 pop esi */
  ESI = (pop32());
L_118386f5:;
  /* 118386f5 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118386f7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118386f8 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118386fb ja 0x11838978 */
  if ((!C.cf&&!C.zf)) goto L_11838978;
  /* 11838701 jmp dword ptr [eax*4 + 0x11838b3f] */
  switch (EAX) {
    case 0: goto L_11838708;
    case 1: goto L_11838757;
    case 2: goto L_118387ae;
    case 3: goto L_118387d8;
    case 4: goto L_11838833;
    case 5: goto L_118388aa;
    case 6: goto L_118388e0;
    case 7: goto L_1183892a;
    case 8: goto L_11838909;
    case 9: goto L_1183898e;
    case 10: goto L_11838978;
    case 11: goto L_11838944;
    default: x86_unimpl("switch@0x11838701 out of table"); return;
  }
L_11838708:;
  /* 11838708 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183870b jl 0x11838719 */
  if ((C.sf!=C.of)) goto L_11838719;
  /* 1183870d cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838710 jg 0x11838719 */
  if ((!C.zf&&C.sf==C.of)) goto L_11838719;
L_11838712:;
  /* 11838712 push 3 */
  push32((uint32_t)(0x3u));
  /* 11838714 jmp 0x11838936 */
  goto L_11838936;
L_11838719:;
  /* 11838719 cmp bl, byte ptr [0x1183e8e4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x1183e8e4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183871f jne 0x11838728 */
  if (!C.zf) goto L_11838728;
L_11838721:;
  /* 11838721 push 5 */
  push32((uint32_t)(0x5u));
  /* 11838723 jmp 0x1183896e */
  goto L_1183896e;
L_11838728:;
  /* 11838728 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1183872b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183872e je 0x1183874e */
  if (C.zf) goto L_1183874e;
  /* 11838730 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838731 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838732 je 0x11838742 */
  if (C.zf) goto L_11838742;
  /* 11838734 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838737 jne 0x11838a11 */
  if (!C.zf) goto L_11838a11;
  /* 1183873d jmp 0x118387d1 */
  goto L_118387d1;
L_11838742:;
  /* 11838742 push 2 */
  push32((uint32_t)(0x2u));
  /* 11838744 mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1183874b pop eax */
  EAX = (pop32());
  /* 1183874c jmp 0x118386f5 */
  goto L_118386f5;
L_1183874e:;
  /* 1183874e and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11838752 push 2 */
  push32((uint32_t)(0x2u));
  /* 11838754 pop eax */
  EAX = (pop32());
  /* 11838755 jmp 0x118386f5 */
  goto L_118386f5;
L_11838757:;
  /* 11838757 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183875a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1183875d jl 0x11838764 */
  if ((C.sf!=C.of)) goto L_11838764;
  /* 1183875f cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838762 jle 0x11838712 */
  if ((C.zf||C.sf!=C.of)) goto L_11838712;
L_11838764:;
  /* 11838764 cmp bl, byte ptr [0x1183e8e4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x1183e8e4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183876a je 0x1183882c */
  if (C.zf) goto L_1183882c;
  /* 11838770 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838773 je 0x118387a6 */
  if (C.zf) goto L_118387a6;
  /* 11838775 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838778 je 0x118387a6 */
  if (C.zf) goto L_118387a6;
  /* 1183877a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183877d je 0x118387d1 */
  if (C.zf) goto L_118387d1;
L_1183877f:;
  /* 1183877f cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838782 jle 0x11838a11 */
  if ((C.zf||C.sf!=C.of)) goto L_11838a11;
  /* 11838788 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183878b jle 0x1183879f */
  if ((C.zf||C.sf!=C.of)) goto L_1183879f;
  /* 1183878d cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838790 jle 0x11838a11 */
  if ((C.zf||C.sf!=C.of)) goto L_11838a11;
  /* 11838796 cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838799 jg 0x11838a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11838a11;
L_1183879f:;
  /* 1183879f push 6 */
  push32((uint32_t)(0x6u));
  /* 118387a1 jmp 0x1183896e */
  goto L_1183896e;
L_118387a6:;
  /* 118387a6 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118387a7 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118387a9 jmp 0x1183896e */
  goto L_1183896e;
L_118387ae:;
  /* 118387ae cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118387b1 jl 0x118387bc */
  if ((C.sf!=C.of)) goto L_118387bc;
  /* 118387b3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118387b6 jle 0x11838712 */
  if ((C.zf||C.sf!=C.of)) goto L_11838712;
L_118387bc:;
  /* 118387bc cmp bl, byte ptr [0x1183e8e4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x1183e8e4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118387c2 je 0x11838721 */
  if (C.zf) goto L_11838721;
  /* 118387c8 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118387cb jne 0x11838986 */
  if (!C.zf) goto L_11838986;
L_118387d1:;
  /* 118387d1 mov eax, edx */
  EAX = (EDX);
  /* 118387d3 jmp 0x118386f5 */
  goto L_118386f5;
L_118387d8:;
  /* 118387d8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118387db:;
  /* 118387db cmp dword ptr [0x1183e8e0], edx */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118387e1 jle 0x118387f4 */
  if ((C.zf||C.sf!=C.of)) goto L_118387f4;
  /* 118387e3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118387e6 push esi */
  push32((uint32_t)(ESI));
  /* 118387e7 push eax */
  push32((uint32_t)(EAX));
  /* 118387e8 call 0x1183633d */
  push32(0x118387edu); f_1183633d();
  /* 118387ed pop ecx */
  ECX = (pop32());
  /* 118387ee pop ecx */
  ECX = (pop32());
  /* 118387ef push 1 */
  push32((uint32_t)(0x1u));
  /* 118387f1 pop edx */
  EDX = (pop32());
  /* 118387f2 jmp 0x11838802 */
  goto L_11838802;
L_118387f4:;
  /* 118387f4 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 118387fa movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118387fd mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11838800 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11838802:;
  /* 11838802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838804 je 0x11838824 */
  if (C.zf) goto L_11838824;
  /* 11838806 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183880a jae 0x1183881c */
  if (!C.cf) goto L_1183881c;
  /* 1183880c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1183880f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11838812 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11838815 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11838818 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1183881a jmp 0x1183881f */
  goto L_1183881f;
L_1183881c:;
  /* 1183881c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1183881f:;
  /* 1183881f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11838821 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11838822 jmp 0x118387db */
  goto L_118387db;
L_11838824:;
  /* 11838824 cmp bl, byte ptr [0x1183e8e4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x1183e8e4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183882a jne 0x11838893 */
  if (!C.zf) goto L_11838893;
L_1183882c:;
  /* 1183882c mov eax, esi */
  EAX = (ESI);
  /* 1183882e jmp 0x118386f5 */
  goto L_118386f5;
L_11838833:;
  /* 11838833 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838837 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1183883a mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1183883d jne 0x1183884c */
  if (!C.zf) goto L_1183884c;
L_1183883f:;
  /* 1183883f cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838842 jne 0x1183884c */
  if (!C.zf) goto L_1183884c;
  /* 11838844 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11838847 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11838849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1183884a jmp 0x1183883f */
  goto L_1183883f;
L_1183884c:;
  /* 1183884c cmp dword ptr [0x1183e8e0], edx */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838852 jle 0x11838865 */
  if ((C.zf||C.sf!=C.of)) goto L_11838865;
  /* 11838854 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11838857 push esi */
  push32((uint32_t)(ESI));
  /* 11838858 push eax */
  push32((uint32_t)(EAX));
  /* 11838859 call 0x1183633d */
  push32(0x1183885eu); f_1183633d();
  /* 1183885e pop ecx */
  ECX = (pop32());
  /* 1183885f pop ecx */
  ECX = (pop32());
  /* 11838860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838862 pop edx */
  EDX = (pop32());
  /* 11838863 jmp 0x11838873 */
  goto L_11838873;
L_11838865:;
  /* 11838865 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 1183886b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1183886e mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11838871 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11838873:;
  /* 11838873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838875 je 0x11838893 */
  if (C.zf) goto L_11838893;
  /* 11838877 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183887b jae 0x1183888e */
  if (!C.cf) goto L_1183888e;
  /* 1183887d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11838880 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11838883 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11838886 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11838889 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1183888c mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1183888e:;
  /* 1183888e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11838890 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11838891 jmp 0x1183884c */
  goto L_1183884c;
L_11838893:;
  /* 11838893 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838896 je 0x118387a6 */
  if (C.zf) goto L_118387a6;
  /* 1183889c cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183889f je 0x118387a6 */
  if (C.zf) goto L_118387a6;
  /* 118388a5 jmp 0x1183877f */
  goto L_1183877f;
L_118388aa:;
  /* 118388aa cmp dword ptr [0x1183e8e0], edx */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118388b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 118388b3 jle 0x118388c6 */
  if ((C.zf||C.sf!=C.of)) goto L_118388c6;
  /* 118388b5 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118388b8 push esi */
  push32((uint32_t)(ESI));
  /* 118388b9 push eax */
  push32((uint32_t)(EAX));
  /* 118388ba call 0x1183633d */
  push32(0x118388bfu); f_1183633d();
  /* 118388bf pop ecx */
  ECX = (pop32());
  /* 118388c0 pop ecx */
  ECX = (pop32());
  /* 118388c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118388c3 pop edx */
  EDX = (pop32());
  /* 118388c4 jmp 0x118388d4 */
  goto L_118388d4;
L_118388c6:;
  /* 118388c6 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 118388cc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118388cf mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118388d2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118388d4:;
  /* 118388d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118388d6 je 0x11838986 */
  if (C.zf) goto L_11838986;
  /* 118388dc mov eax, esi */
  EAX = (ESI);
  /* 118388de jmp 0x11838937 */
  goto L_11838937;
L_118388e0:;
  /* 118388e0 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 118388e3 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118388e6 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118388e9 jl 0x118388f0 */
  if ((C.sf!=C.of)) goto L_118388f0;
  /* 118388eb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118388ee jle 0x11838934 */
  if ((C.zf||C.sf!=C.of)) goto L_11838934;
L_118388f0:;
  /* 118388f0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118388f3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118388f6 je 0x1183896c */
  if (C.zf) goto L_1183896c;
  /* 118388f8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118388f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118388fa je 0x11838960 */
  if (C.zf) goto L_11838960;
  /* 118388fc sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118388ff jne 0x11838a14 */
  if (!C.zf) goto L_11838a14;
L_11838905:;
  /* 11838905 push 8 */
  push32((uint32_t)(0x8u));
  /* 11838907 jmp 0x1183896e */
  goto L_1183896e;
L_11838909:;
  /* 11838909 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1183890c:;
  /* 1183890c cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183890f jne 0x11838916 */
  if (!C.zf) goto L_11838916;
  /* 11838911 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11838913 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11838914 jmp 0x1183890c */
  goto L_1183890c;
L_11838916:;
  /* 11838916 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838919 jl 0x11838a11 */
  if ((C.sf!=C.of)) goto L_11838a11;
  /* 1183891f cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838922 jg 0x11838a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11838a11;
  /* 11838928 jmp 0x11838934 */
  goto L_11838934;
L_1183892a:;
  /* 1183892a cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183892d jl 0x1183893d */
  if ((C.sf!=C.of)) goto L_1183893d;
  /* 1183892f cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838932 jg 0x1183893d */
  if ((!C.zf&&C.sf==C.of)) goto L_1183893d;
L_11838934:;
  /* 11838934 push 9 */
  push32((uint32_t)(0x9u));
L_11838936:;
  /* 11838936 pop eax */
  EAX = (pop32());
L_11838937:;
  /* 11838937 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11838938 jmp 0x118386f5 */
  goto L_118386f5;
L_1183893d:;
  /* 1183893d cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838940 jne 0x11838986 */
  if (!C.zf) goto L_11838986;
  /* 11838942 jmp 0x11838905 */
  goto L_11838905;
L_11838944:;
  /* 11838944 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838948 je 0x11838974 */
  if (C.zf) goto L_11838974;
  /* 1183894a movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1183894d lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11838950 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838953 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11838956 je 0x1183896c */
  if (C.zf) goto L_1183896c;
  /* 11838958 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838959 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1183895a jne 0x11838a14 */
  if (!C.zf) goto L_11838a14;
L_11838960:;
  /* 11838960 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11838964 push 7 */
  push32((uint32_t)(0x7u));
  /* 11838966 pop eax */
  EAX = (pop32());
  /* 11838967 jmp 0x118386f5 */
  goto L_118386f5;
L_1183896c:;
  /* 1183896c push 7 */
  push32((uint32_t)(0x7u));
L_1183896e:;
  /* 1183896e pop eax */
  EAX = (pop32());
  /* 1183896f jmp 0x118386f5 */
  goto L_118386f5;
L_11838974:;
  /* 11838974 push 0xa */
  push32((uint32_t)(0xau));
  /* 11838976 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11838977 pop eax */
  EAX = (pop32());
L_11838978:;
  /* 11838978 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183897b je 0x11838a16 */
  if (C.zf) goto L_11838a16;
  /* 11838981 jmp 0x118386f5 */
  goto L_118386f5;
L_11838986:;
  /* 11838986 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11838989 jmp 0x11838a16 */
  goto L_11838a16;
L_1183898e:;
  /* 1183898e mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11838995 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11838997:;
  /* 11838997 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183899e jle 0x118389af */
  if ((C.zf||C.sf!=C.of)) goto L_118389af;
  /* 118389a0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118389a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 118389a5 push eax */
  push32((uint32_t)(EAX));
  /* 118389a6 call 0x1183633d */
  push32(0x118389abu); f_1183633d();
  /* 118389ab pop ecx */
  ECX = (pop32());
  /* 118389ac pop ecx */
  ECX = (pop32());
  /* 118389ad jmp 0x118389be */
  goto L_118389be;
L_118389af:;
  /* 118389af mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 118389b5 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118389b8 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118389bb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118389be:;
  /* 118389be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118389c0 je 0x118389de */
  if (C.zf) goto L_118389de;
  /* 118389c2 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118389c5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118389c8 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 118389cc cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118389d2 jg 0x118389d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_118389d9;
  /* 118389d4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118389d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118389d7 jmp 0x11838997 */
  goto L_11838997;
L_118389d9:;
  /* 118389d9 mov esi, 0x1451 */
  ESI = (0x1451u);
L_118389de:;
  /* 118389de mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_118389e1:;
  /* 118389e1 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118389e8 jle 0x118389f9 */
  if ((C.zf||C.sf!=C.of)) goto L_118389f9;
  /* 118389ea movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118389ed push 4 */
  push32((uint32_t)(0x4u));
  /* 118389ef push eax */
  push32((uint32_t)(EAX));
  /* 118389f0 call 0x1183633d */
  push32(0x118389f5u); f_1183633d();
  /* 118389f5 pop ecx */
  ECX = (pop32());
  /* 118389f6 pop ecx */
  ECX = (pop32());
  /* 118389f7 jmp 0x11838a08 */
  goto L_11838a08;
L_118389f9:;
  /* 118389f9 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 118389ff movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11838a02 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11838a05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11838a08:;
  /* 11838a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838a0a je 0x11838a11 */
  if (C.zf) goto L_11838a11;
  /* 11838a0c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11838a0e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11838a0f jmp 0x118389e1 */
  goto L_118389e1;
L_11838a11:;
  /* 11838a11 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11838a12 jmp 0x11838a16 */
  goto L_11838a16;
L_11838a14:;
  /* 11838a14 mov edi, ecx */
  EDI = (ECX);
L_11838a16:;
  /* 11838a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11838a19 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a1d mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11838a1f je 0x11838afe */
  if (C.zf) goto L_11838afe;
  /* 11838a25 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11838a27 pop eax */
  EAX = (pop32());
  /* 11838a28 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a2b jbe 0x11838a42 */
  if ((C.cf||C.zf)) goto L_11838a42;
  /* 11838a2d cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838a31 jl 0x11838a36 */
  if ((C.sf!=C.of)) goto L_11838a36;
  /* 11838a33 inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11838a36:;
  /* 11838a36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11838a39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11838a3c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838a3d inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11838a40 jmp 0x11838a45 */
  goto L_11838a45;
L_11838a42:;
  /* 11838a42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11838a45:;
  /* 11838a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a49 jbe 0x11838af4 */
  if ((C.cf||C.zf)) goto L_11838af4;
L_11838a4f:;
  /* 11838a4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838a50 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838a53 jne 0x11838a5d */
  if (!C.zf) goto L_11838a5d;
  /* 11838a55 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11838a58 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11838a5b jmp 0x11838a4f */
  goto L_11838a4f;
L_11838a5d:;
  /* 11838a5d lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11838a60 push eax */
  push32((uint32_t)(EAX));
  /* 11838a61 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11838a64 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11838a67 push eax */
  push32((uint32_t)(EAX));
  /* 11838a68 call 0x118385d7 */
  push32(0x11838a6du); f_118385d7();
  /* 11838a6d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11838a70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11838a72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838a75 cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a78 jge 0x11838a7c */
  if ((C.sf==C.of)) goto L_11838a7c;
  /* 11838a7a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11838a7c:;
  /* 11838a7c add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11838a7f cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a82 jne 0x11838a87 */
  if (!C.zf) goto L_11838a87;
  /* 11838a84 add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11838a87:;
  /* 11838a87 cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a8a jne 0x11838a8f */
  if (!C.zf) goto L_11838a8f;
  /* 11838a8c sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11838a8f:;
  /* 11838a8f cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838a94 jle 0x11838ac6 */
  if ((C.zf||C.sf!=C.of)) goto L_11838ac6;
  /* 11838a96 mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11838a9d:;
  /* 11838a9d mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11838aa0 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11838aa3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11838aa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11838aa9:;
  /* 11838aa9 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838aad je 0x11838b0f */
  if (C.zf) goto L_11838b0f;
  /* 11838aaf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838ab1 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11838ab6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11838abb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11838abd mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11838ac4 jmp 0x11838b24 */
  goto L_11838b24;
L_11838ac6:;
  /* 11838ac6 cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838acb jge 0x11838ad6 */
  if ((C.sf==C.of)) goto L_11838ad6;
  /* 11838acd mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11838ad4 jmp 0x11838a9d */
  goto L_11838a9d;
L_11838ad6:;
  /* 11838ad6 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11838ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11838ada lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11838add push eax */
  push32((uint32_t)(EAX));
  /* 11838ade call 0x1183933a */
  push32(0x11838ae3u); f_1183933a();
  /* 11838ae3 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11838ae6 mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11838ae9 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11838aec mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11838aef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838af2 jmp 0x11838aa9 */
  goto L_11838aa9;
L_11838af4:;
  /* 11838af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11838af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11838af8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11838afa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838afc jmp 0x11838aa9 */
  goto L_11838aa9;
L_11838afe:;
  /* 11838afe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11838b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11838b02 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11838b04 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838b06 mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11838b0d jmp 0x11838b24 */
  goto L_11838b24;
L_11838b0f:;
  /* 11838b0f cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838b13 je 0x11838b24 */
  if (C.zf) goto L_11838b24;
  /* 11838b15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11838b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11838b19 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11838b1b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838b1d mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11838b24:;
  /* 11838b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838b27 or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11838b2a pop edi */
  EDI = (pop32());
  /* 11838b2b mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11838b2e mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11838b31 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11838b35 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11838b38 pop esi */
  ESI = (pop32());
  /* 11838b39 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11838b3c pop ebx */
  EBX = (pop32());
  /* 11838b3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11838b3e ret  */
  ESPCHK(0x1183869eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008b6f @ 0x11838b6f (659 bytes, 232 insns) */
void f_11838b6f(void) {
  FTRACE(0x11838b6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838b6f push ebp */
  push32((uint32_t)(EBP));
  /* 11838b70 mov ebp, esp */
  EBP = (ESP);
  /* 11838b72 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838b75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11838b78 push ebx */
  push32((uint32_t)(EBX));
  /* 11838b79 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11838b7c push esi */
  push32((uint32_t)(ESI));
  /* 11838b7d mov ecx, eax */
  ECX = (EAX);
  /* 11838b7f mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11838b84 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11838b8a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11838b8c test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11838b8f push edi */
  push32((uint32_t)(EDI));
  /* 11838b90 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11838b94 mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11838b98 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11838b9c mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11838ba0 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11838ba4 mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11838ba8 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11838bac mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11838bb0 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11838bb4 mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11838bb8 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11838bbc mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11838bc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11838bc7 mov edx, eax */
  EDX = (EAX);
  /* 11838bc9 je 0x11838bd1 */
  if (C.zf) goto L_11838bd1;
  /* 11838bcb mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11838bcf jmp 0x11838bd5 */
  goto L_11838bd5;
L_11838bd1:;
  /* 11838bd1 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11838bd5:;
  /* 11838bd5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11838bd8 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11838bdb jne 0x11838bfb */
  if (!C.zf) goto L_11838bfb;
  /* 11838bdd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11838bdf jne 0x11838bfb */
  if (!C.zf) goto L_11838bfb;
  /* 11838be1 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838be4 jne 0x11838bfb */
  if (!C.zf) goto L_11838bfb;
L_11838be6:;
  /* 11838be6 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11838bea mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11838bee mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11838bf2 mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11838bf6 jmp 0x11838df9 */
  goto L_11838df9;
L_11838bfb:;
  /* 11838bfb cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11838bfe jne 0x11838c7a */
  if (!C.zf) goto L_11838c7a;
  /* 11838c00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11838c05 mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11838c0a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c0c jne 0x11838c14 */
  if (!C.zf) goto L_11838c14;
  /* 11838c0e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c12 je 0x11838c23 */
  if (C.zf) goto L_11838c23;
L_11838c14:;
  /* 11838c14 test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11838c1a jne 0x11838c23 */
  if (!C.zf) goto L_11838c23;
  /* 11838c1c push 0x1183a6e0 */
  push32((uint32_t)(0x1183a6e0u));
  /* 11838c21 jmp 0x11838c69 */
  goto L_11838c69;
L_11838c23:;
  /* 11838c23 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11838c26 je 0x11838c3d */
  if (C.zf) goto L_11838c3d;
  /* 11838c28 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c2e jne 0x11838c3d */
  if (!C.zf) goto L_11838c3d;
  /* 11838c30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c34 jne 0x11838c64 */
  if (!C.zf) goto L_11838c64;
  /* 11838c36 push 0x1183a6d8 */
  push32((uint32_t)(0x1183a6d8u));
  /* 11838c3b jmp 0x11838c4c */
  goto L_11838c4c;
L_11838c3d:;
  /* 11838c3d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c3f jne 0x11838c64 */
  if (!C.zf) goto L_11838c64;
  /* 11838c41 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838c45 jne 0x11838c64 */
  if (!C.zf) goto L_11838c64;
  /* 11838c47 push 0x1183a6d0 */
  push32((uint32_t)(0x1183a6d0u));
L_11838c4c:;
  /* 11838c4c lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11838c4f push eax */
  push32((uint32_t)(EAX));
  /* 11838c50 call 0x11836a70 */
  push32(0x11838c55u); f_11836a70();
  /* 11838c55 pop ecx */
  ECX = (pop32());
  /* 11838c56 mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11838c5a pop ecx */
  ECX = (pop32());
L_11838c5b:;
  /* 11838c5b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11838c5f jmp 0x11838dd2 */
  goto L_11838dd2;
L_11838c64:;
  /* 11838c64 push 0x1183a6c8 */
  push32((uint32_t)(0x1183a6c8u));
L_11838c69:;
  /* 11838c69 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11838c6c push eax */
  push32((uint32_t)(EAX));
  /* 11838c6d call 0x11836a70 */
  push32(0x11838c72u); f_11836a70();
  /* 11838c72 pop ecx */
  ECX = (pop32());
  /* 11838c73 mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11838c77 pop ecx */
  ECX = (pop32());
  /* 11838c78 jmp 0x11838c5b */
  goto L_11838c5b;
L_11838c7a:;
  /* 11838c7a movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11838c7d mov ecx, edi */
  ECX = (EDI);
  /* 11838c7f mov esi, eax */
  ESI = (EAX);
  /* 11838c81 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11838c84 imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11838c8a shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11838c8d and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11838c92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838c94 lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11838c97 mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11838c9b imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11838c9e mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11838ca1 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11838ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838cab sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11838cae mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11838cb1 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11838cb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11838cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11838cb7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838cba push eax */
  push32((uint32_t)(EAX));
  /* 11838cbb call 0x1183933a */
  push32(0x11838cc0u); f_1183933a();
  /* 11838cc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838cc3 cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11838cc9 jb 0x11838cdb */
  if (C.cf) goto L_11838cdb;
  /* 11838ccb lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11838cce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11838ccf push eax */
  push32((uint32_t)(EAX));
  /* 11838cd0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838cd3 push eax */
  push32((uint32_t)(EAX));
  /* 11838cd4 call 0x1183911a */
  push32(0x11838cd9u); f_1183911a();
  /* 11838cd9 pop ecx */
  ECX = (pop32());
  /* 11838cda pop ecx */
  ECX = (pop32());
L_11838cdb:;
  /* 11838cdb test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11838cdf mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11838ce2 je 0x11838cf5 */
  if (C.zf) goto L_11838cf5;
  /* 11838ce4 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11838ce7 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11838cea add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11838cec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11838cee jg 0x11838cf8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11838cf8;
  /* 11838cf0 jmp 0x11838be6 */
  goto L_11838be6;
L_11838cf5:;
  /* 11838cf5 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11838cf8:;
  /* 11838cf8 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838cfb jle 0x11838d00 */
  if ((C.zf||C.sf!=C.of)) goto L_11838d00;
  /* 11838cfd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11838cff pop edi */
  EDI = (pop32());
L_11838d00:;
  /* 11838d00 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11838d04 sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838d0a and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11838d0f mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11838d16:;
  /* 11838d16 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d19 push eax */
  push32((uint32_t)(EAX));
  /* 11838d1a call 0x1183857c */
  push32(0x11838d1fu); f_1183857c();
  /* 11838d1f dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11838d22 pop ecx */
  ECX = (pop32());
  /* 11838d23 jne 0x11838d16 */
  if (!C.zf) goto L_11838d16;
  /* 11838d25 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11838d27 jge 0x11838d40 */
  if ((C.sf==C.of)) goto L_11838d40;
  /* 11838d29 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11838d2b and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11838d31 jle 0x11838d40 */
  if ((C.zf||C.sf!=C.of)) goto L_11838d40;
L_11838d33:;
  /* 11838d33 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d36 push eax */
  push32((uint32_t)(EAX));
  /* 11838d37 call 0x118385aa */
  push32(0x11838d3cu); f_118385aa();
  /* 11838d3c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11838d3d pop ecx */
  ECX = (pop32());
  /* 11838d3e jne 0x11838d33 */
  if (!C.zf) goto L_11838d33;
L_11838d40:;
  /* 11838d40 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11838d43 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11838d46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11838d48 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11838d4b jle 0x11838d9d */
  if ((C.zf||C.sf!=C.of)) goto L_11838d9d;
  /* 11838d4d mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11838d50:;
  /* 11838d50 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11838d53 lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11838d56 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838d57 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838d58 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d5b push eax */
  push32((uint32_t)(EAX));
  /* 11838d5c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11838d5d call 0x1183857c */
  push32(0x11838d62u); f_1183857c();
  /* 11838d62 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d65 push eax */
  push32((uint32_t)(EAX));
  /* 11838d66 call 0x1183857c */
  push32(0x11838d6bu); f_1183857c();
  /* 11838d6b lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11838d6e push eax */
  push32((uint32_t)(EAX));
  /* 11838d6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d72 push eax */
  push32((uint32_t)(EAX));
  /* 11838d73 call 0x1183851e */
  push32(0x11838d78u); f_1183851e();
  /* 11838d78 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11838d7b push eax */
  push32((uint32_t)(EAX));
  /* 11838d7c call 0x1183857c */
  push32(0x11838d81u); f_1183857c();
  /* 11838d81 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11838d84 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11838d87 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11838d8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838d8e add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11838d90 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11838d93 dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11838d96 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11838d98 jne 0x11838d50 */
  if (!C.zf) goto L_11838d50;
  /* 11838d9a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11838d9d:;
  /* 11838d9d mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11838da0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838da1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838da2 cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838da5 lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11838da8 jl 0x11838dda */
  if ((C.sf!=C.of)) goto L_11838dda;
L_11838daa:;
  /* 11838daa cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838dac jb 0x11838dbd */
  if (C.cf) goto L_11838dbd;
  /* 11838dae cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838db1 jne 0x11838db9 */
  if (!C.zf) goto L_11838db9;
  /* 11838db3 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11838db6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838db7 jmp 0x11838daa */
  goto L_11838daa;
L_11838db9:;
  /* 11838db9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838dbb jae 0x11838dc1 */
  if (!C.cf) goto L_11838dc1;
L_11838dbd:;
  /* 11838dbd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11838dbe inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11838dc1:;
  /* 11838dc1 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11838dc3:;
  /* 11838dc3 sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11838dc5 sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11838dc7 mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11838dca movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11838dcd and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11838dd2:;
  /* 11838dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11838dd5:;
  /* 11838dd5 pop edi */
  EDI = (pop32());
  /* 11838dd6 pop esi */
  ESI = (pop32());
  /* 11838dd7 pop ebx */
  EBX = (pop32());
  /* 11838dd8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11838dd9 ret  */
  ESPCHK(0x11838b6fu, _esp0);
  ESP += 4; return;
L_11838dda:;
  /* 11838dda cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838ddc jb 0x11838dea */
  if (C.cf) goto L_11838dea;
  /* 11838dde cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11838de1 jne 0x11838de6 */
  if (!C.zf) goto L_11838de6;
  /* 11838de3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11838de4 jmp 0x11838dda */
  goto L_11838dda;
L_11838de6:;
  /* 11838de6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838de8 jae 0x11838dc3 */
  if (!C.cf) goto L_11838dc3;
L_11838dea:;
  /* 11838dea and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11838dee mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11838df2 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11838df6 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11838df9:;
  /* 11838df9 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11838dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11838dff pop eax */
  EAX = (pop32());
  /* 11838e00 jmp 0x11838dd5 */
  goto L_11838dd5;
}

/* FUN_10008e02 @ 0x11838e02 (115 bytes, 41 insns) */
void f_11838e02(void) {
  FTRACE(0x11838e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838e02 push esi */
  push32((uint32_t)(ESI));
  /* 11838e03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11838e07 push edi */
  push32((uint32_t)(EDI));
  /* 11838e08 push esi */
  push32((uint32_t)(ESI));
  /* 11838e09 call 0x11836dc9 */
  push32(0x11838e0eu); f_11836dc9();
  /* 11838e0e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838e11 pop ecx */
  ECX = (pop32());
  /* 11838e12 jne 0x11838e21 */
  if (!C.zf) goto L_11838e21;
  /* 11838e14 call 0x11836d38 */
  push32(0x11838e19u); f_11836d38();
  /* 11838e19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11838e1f jmp 0x11838e4e */
  goto L_11838e4e;
L_11838e21:;
  /* 11838e21 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11838e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11838e27 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11838e2b push eax */
  push32((uint32_t)(EAX));
  /* 11838e2c call dword ptr [0x1183a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a01c))), 0x11838e32u);
  /* 11838e32 mov edi, eax */
  EDI = (EAX);
  /* 11838e34 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838e37 jne 0x11838e41 */
  if (!C.zf) goto L_11838e41;
  /* 11838e39 call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x11838e3fu);
  /* 11838e3f jmp 0x11838e43 */
  goto L_11838e43;
L_11838e41:;
  /* 11838e41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11838e43:;
  /* 11838e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838e45 je 0x11838e53 */
  if (C.zf) goto L_11838e53;
  /* 11838e47 push eax */
  push32((uint32_t)(EAX));
  /* 11838e48 call 0x11836cc5 */
  push32(0x11838e4du); f_11836cc5();
  /* 11838e4d pop ecx */
  ECX = (pop32());
L_11838e4e:;
  /* 11838e4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11838e51 jmp 0x11838e72 */
  goto L_11838e72;
L_11838e53:;
  /* 11838e53 mov ecx, esi */
  ECX = (ESI);
  /* 11838e55 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11838e58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11838e5b mov eax, esi */
  EAX = (ESI);
  /* 11838e5d mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 11838e64 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11838e67 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11838e6c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11838e70 mov eax, edi */
  EAX = (EDI);
L_11838e72:;
  /* 11838e72 pop edi */
  EDI = (pop32());
  /* 11838e73 pop esi */
  ESI = (pop32());
  /* 11838e74 ret  */
  ESPCHK(0x11838e02u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e75 @ 0x11838e75 (111 bytes, 44 insns) */
void f_11838e75(void) {
  FTRACE(0x11838e75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838e75 push ebx */
  push32((uint32_t)(EBX));
  /* 11838e76 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11838e78 cmp dword ptr [0x1183f798], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f798))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838e7e jne 0x11838e93 */
  if (!C.zf) goto L_11838e93;
  /* 11838e80 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11838e84 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838e87 jl 0x11838ee2 */
  if ((C.sf!=C.of)) goto L_11838ee2;
  /* 11838e89 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838e8c jg 0x11838ee2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11838ee2;
  /* 11838e8e sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838e91 pop ebx */
  EBX = (pop32());
  /* 11838e92 ret  */
  ESPCHK(0x11838e75u, _esp0);
  ESP += 4; return;
L_11838e93:;
  /* 11838e93 push esi */
  push32((uint32_t)(ESI));
  /* 11838e94 mov esi, 0x1183f860 */
  ESI = (0x1183f860u);
  /* 11838e99 push edi */
  push32((uint32_t)(EDI));
  /* 11838e9a push esi */
  push32((uint32_t)(ESI));
  /* 11838e9b call dword ptr [0x1183a04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a04c))), 0x11838ea1u);
  /* 11838ea1 cmp dword ptr [0x1183f85c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f85c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838ea7 mov edi, dword ptr [0x1183a044] */
  EDI = (r32((uint32_t)(0x1183a044)));
  /* 11838ead je 0x11838ebd */
  if (C.zf) goto L_11838ebd;
  /* 11838eaf push esi */
  push32((uint32_t)(ESI));
  /* 11838eb0 call edi */
  call_ind((uint32_t)(EDI), 0x11838eb2u);
  /* 11838eb2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11838eb4 call 0x11834436 */
  push32(0x11838eb9u); f_11834436();
  /* 11838eb9 pop ecx */
  ECX = (pop32());
  /* 11838eba push 1 */
  push32((uint32_t)(0x1u));
  /* 11838ebc pop ebx */
  EBX = (pop32());
L_11838ebd:;
  /* 11838ebd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11838ec1 call 0x11838ee4 */
  push32(0x11838ec6u); f_11838ee4();
  /* 11838ec6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11838ec8 pop ecx */
  ECX = (pop32());
  /* 11838ec9 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11838ecd je 0x11838ed9 */
  if (C.zf) goto L_11838ed9;
  /* 11838ecf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11838ed1 call 0x11834497 */
  push32(0x11838ed6u); f_11834497();
  /* 11838ed6 pop ecx */
  ECX = (pop32());
  /* 11838ed7 jmp 0x11838edc */
  goto L_11838edc;
L_11838ed9:;
  /* 11838ed9 push esi */
  push32((uint32_t)(ESI));
  /* 11838eda call edi */
  call_ind((uint32_t)(EDI), 0x11838edcu);
L_11838edc:;
  /* 11838edc mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11838ee0 pop edi */
  EDI = (pop32());
  /* 11838ee1 pop esi */
  ESI = (pop32());
L_11838ee2:;
  /* 11838ee2 pop ebx */
  EBX = (pop32());
  /* 11838ee3 ret  */
  ESPCHK(0x11838e75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee4 @ 0x11838ee4 (204 bytes, 71 insns) */
void f_11838ee4(void) {
  FTRACE(0x11838ee4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838ee4 push ebp */
  push32((uint32_t)(EBP));
  /* 11838ee5 mov ebp, esp */
  EBP = (ESP);
  /* 11838ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 11838ee8 cmp dword ptr [0x1183f798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838eef push ebx */
  push32((uint32_t)(EBX));
  /* 11838ef0 jne 0x11838f0f */
  if (!C.zf) goto L_11838f0f;
  /* 11838ef2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838ef5 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838ef8 jl 0x11838fad */
  if ((C.sf!=C.of)) goto L_11838fad;
  /* 11838efe cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838f01 jg 0x11838fad */
  if ((!C.zf&&C.sf==C.of)) goto L_11838fad;
  /* 11838f07 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11838f0a jmp 0x11838fad */
  goto L_11838fad;
L_11838f0f:;
  /* 11838f0f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11838f12 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838f18 jge 0x11838f42 */
  if ((C.sf==C.of)) goto L_11838f42;
  /* 11838f1a cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838f21 jle 0x11838f2f */
  if ((C.zf||C.sf!=C.of)) goto L_11838f2f;
  /* 11838f23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11838f25 push ebx */
  push32((uint32_t)(EBX));
  /* 11838f26 call 0x1183633d */
  push32(0x11838f2bu); f_1183633d();
  /* 11838f2b pop ecx */
  ECX = (pop32());
  /* 11838f2c pop ecx */
  ECX = (pop32());
  /* 11838f2d jmp 0x11838f3a */
  goto L_11838f3a;
L_11838f2f:;
  /* 11838f2f mov eax, dword ptr [0x1183e8ec] */
  EAX = (r32((uint32_t)(0x1183e8ec)));
  /* 11838f34 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11838f37 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11838f3a:;
  /* 11838f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838f3c jne 0x11838f42 */
  if (!C.zf) goto L_11838f42;
L_11838f3e:;
  /* 11838f3e mov eax, ebx */
  EAX = (EBX);
  /* 11838f40 jmp 0x11838fad */
  goto L_11838fad;
L_11838f42:;
  /* 11838f42 mov edx, dword ptr [0x1183e8ec] */
  EDX = (r32((uint32_t)(0x1183e8ec)));
  /* 11838f48 mov eax, ebx */
  EAX = (EBX);
  /* 11838f4a sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11838f4d movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11838f50 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11838f55 je 0x11838f65 */
  if (C.zf) goto L_11838f65;
  /* 11838f57 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11838f5b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11838f5e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11838f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11838f63 jmp 0x11838f6e */
  goto L_11838f6e;
L_11838f65:;
  /* 11838f65 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11838f69 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11838f6c push 1 */
  push32((uint32_t)(0x1u));
L_11838f6e:;
  /* 11838f6e pop eax */
  EAX = (pop32());
  /* 11838f6f lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11838f72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11838f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11838f76 push 3 */
  push32((uint32_t)(0x3u));
  /* 11838f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11838f79 push eax */
  push32((uint32_t)(EAX));
  /* 11838f7a lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11838f7d push eax */
  push32((uint32_t)(EAX));
  /* 11838f7e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11838f83 push dword ptr [0x1183f798] */
  push32((uint32_t)(r32((uint32_t)(0x1183f798))));
  /* 11838f89 call 0x118382ae */
  push32(0x11838f8eu); f_118382ae();
  /* 11838f8e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11838f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11838f93 je 0x11838f3e */
  if (C.zf) goto L_11838f3e;
  /* 11838f95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838f98 jne 0x11838fa0 */
  if (!C.zf) goto L_11838fa0;
  /* 11838f9a movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11838f9e jmp 0x11838fad */
  goto L_11838fad;
L_11838fa0:;
  /* 11838fa0 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11838fa4 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11838fa8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11838fab or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11838fad:;
  /* 11838fad pop ebx */
  EBX = (pop32());
  /* 11838fae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11838faf ret  */
  ESPCHK(0x11838ee4u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11838fe4 (63 bytes, 24 insns) */
void f_11838fe4(void) {
  FTRACE(0x11838fe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11838fe4 push ebp */
  push32((uint32_t)(EBP));
  /* 11838fe5 mov ebp, esp */
  EBP = (ESP);
  /* 11838fe7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11838feb jne 0x11838ff1 */
  if (!C.zf) goto L_11838ff1;
  /* 11838fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11838fef pop ebp */
  EBP = (pop32());
  /* 11838ff0 ret  */
  ESPCHK(0x11838fe4u, _esp0);
  ESP += 4; return;
L_11838ff1:;
  /* 11838ff1 push dword ptr [0x1183f864] */
  push32((uint32_t)(r32((uint32_t)(0x1183f864))));
  /* 11838ff7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11838ffa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11838ffd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11839000 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839003 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839005 push dword ptr [0x1183fa84] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa84))));
  /* 1183900b call 0x118393b6 */
  push32(0x11839010u); f_118393b6();
  /* 11839010 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839015 jne 0x1183901e */
  if (!C.zf) goto L_1183901e;
  /* 11839017 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 1183901c pop ebp */
  EBP = (pop32());
  /* 1183901d ret  */
  ESPCHK(0x11838fe4u, _esp0);
  ESP += 4; return;
L_1183901e:;
  /* 1183901e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11839021 pop ebp */
  EBP = (pop32());
  /* 11839022 ret  */
  ESPCHK(0x11838fe4u, _esp0);
  ESP += 4; return;
}

/* FUN_10009023 @ 0x11839023 (110 bytes, 58 insns) */
void f_11839023(void) {
  FTRACE(0x11839023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839023 push ecx */
  push32((uint32_t)(ECX));
  /* 11839024 push ebx */
  push32((uint32_t)(EBX));
  /* 11839025 push ebp */
  push32((uint32_t)(EBP));
  /* 11839026 push esi */
  push32((uint32_t)(ESI));
  /* 11839027 mov esi, dword ptr [0x1183f528] */
  ESI = (r32((uint32_t)(0x1183f528)));
  /* 1183902d push edi */
  push32((uint32_t)(EDI));
  /* 1183902e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11839030 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11839032 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839034 je 0x11839084 */
  if (C.zf) goto L_11839084;
  /* 11839036 mov ebx, dword ptr [0x1183a084] */
  EBX = (r32((uint32_t)(0x1183a084)));
L_1183903c:;
  /* 1183903c push edi */
  push32((uint32_t)(EDI));
  /* 1183903d push edi */
  push32((uint32_t)(EDI));
  /* 1183903e push edi */
  push32((uint32_t)(EDI));
  /* 1183903f push edi */
  push32((uint32_t)(EDI));
  /* 11839040 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11839042 push eax */
  push32((uint32_t)(EAX));
  /* 11839043 push edi */
  push32((uint32_t)(EDI));
  /* 11839044 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839046 call ebx */
  call_ind((uint32_t)(EBX), 0x11839048u);
  /* 11839048 mov ebp, eax */
  EBP = (EAX);
  /* 1183904a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183904c je 0x1183908c */
  if (C.zf) goto L_1183908c;
  /* 1183904e push ebp */
  push32((uint32_t)(EBP));
  /* 1183904f call 0x11832d7d */
  push32(0x11839054u); f_11832d7d();
  /* 11839054 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839056 pop ecx */
  ECX = (pop32());
  /* 11839057 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1183905b je 0x1183908c */
  if (C.zf) goto L_1183908c;
  /* 1183905d push edi */
  push32((uint32_t)(EDI));
  /* 1183905e push edi */
  push32((uint32_t)(EDI));
  /* 1183905f push ebp */
  push32((uint32_t)(EBP));
  /* 11839060 push eax */
  push32((uint32_t)(EAX));
  /* 11839061 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11839063 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11839065 push edi */
  push32((uint32_t)(EDI));
  /* 11839066 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839068 call ebx */
  call_ind((uint32_t)(EBX), 0x1183906au);
  /* 1183906a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183906c je 0x1183908c */
  if (C.zf) goto L_1183908c;
  /* 1183906e push edi */
  push32((uint32_t)(EDI));
  /* 1183906f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11839073 call 0x11839633 */
  push32(0x11839078u); f_11839633();
  /* 11839078 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1183907b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183907e pop ecx */
  ECX = (pop32());
  /* 1183907f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839081 pop ecx */
  ECX = (pop32());
  /* 11839082 jne 0x1183903c */
  if (!C.zf) goto L_1183903c;
L_11839084:;
  /* 11839084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11839086:;
  /* 11839086 pop edi */
  EDI = (pop32());
  /* 11839087 pop esi */
  ESI = (pop32());
  /* 11839088 pop ebp */
  EBP = (pop32());
  /* 11839089 pop ebx */
  EBX = (pop32());
  /* 1183908a pop ecx */
  ECX = (pop32());
  /* 1183908b ret  */
  ESPCHK(0x11839023u, _esp0);
  ESP += 4; return;
L_1183908c:;
  /* 1183908c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1183908f jmp 0x11839086 */
  goto L_11839086;
}

/* FUN_100090a0 @ 0x118390a0 (62 bytes, 35 insns) */
void f_118390a0(void) {
  FTRACE(0x118390a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118390a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118390a1 mov ebp, esp */
  EBP = (ESP);
  /* 118390a3 push esi */
  push32((uint32_t)(ESI));
  /* 118390a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118390a6 push eax */
  push32((uint32_t)(EAX));
  /* 118390a7 push eax */
  push32((uint32_t)(EAX));
  /* 118390a8 push eax */
  push32((uint32_t)(EAX));
  /* 118390a9 push eax */
  push32((uint32_t)(EAX));
  /* 118390aa push eax */
  push32((uint32_t)(EAX));
  /* 118390ab push eax */
  push32((uint32_t)(EAX));
  /* 118390ac push eax */
  push32((uint32_t)(EAX));
  /* 118390ad push eax */
  push32((uint32_t)(EAX));
  /* 118390ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118390b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118390b4:;
  /* 118390b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118390b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118390b8 je 0x118390c1 */
  if (C.zf) goto L_118390c1;
  /* 118390ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118390bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118390bb");
  /* 118390bf jmp 0x118390b4 */
  goto L_118390b4;
L_118390c1:;
  /* 118390c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118390c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118390c7 nop  */
  /* nop */
L_118390c8:;
  /* 118390c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118390c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118390cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118390cd je 0x118390d6 */
  if (C.zf) goto L_118390d6;
  /* 118390cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118390d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118390d0");
  /* 118390d4 jae 0x118390c8 */
  if (!C.cf) goto L_118390c8;
L_118390d6:;
  /* 118390d6 mov eax, ecx */
  EAX = (ECX);
  /* 118390d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118390db pop esi */
  ESI = (pop32());
  /* 118390dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118390dd ret  */
  ESPCHK(0x118390a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x118390e0 (58 bytes, 32 insns) */
void f_118390e0(void) {
  FTRACE(0x118390e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118390e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118390e1 mov ebp, esp */
  EBP = (ESP);
  /* 118390e3 push esi */
  push32((uint32_t)(ESI));
  /* 118390e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118390e6 push eax */
  push32((uint32_t)(EAX));
  /* 118390e7 push eax */
  push32((uint32_t)(EAX));
  /* 118390e8 push eax */
  push32((uint32_t)(EAX));
  /* 118390e9 push eax */
  push32((uint32_t)(EAX));
  /* 118390ea push eax */
  push32((uint32_t)(EAX));
  /* 118390eb push eax */
  push32((uint32_t)(EAX));
  /* 118390ec push eax */
  push32((uint32_t)(EAX));
  /* 118390ed push eax */
  push32((uint32_t)(EAX));
  /* 118390ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118390f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118390f4:;
  /* 118390f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118390f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118390f8 je 0x11839101 */
  if (C.zf) goto L_11839101;
  /* 118390fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118390fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118390fb");
  /* 118390ff jmp 0x118390f4 */
  goto L_118390f4;
L_11839101:;
  /* 11839101 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11839104:;
  /* 11839104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11839106 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11839108 je 0x11839114 */
  if (C.zf) goto L_11839114;
  /* 1183910a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1183910b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1183910b");
  /* 1183910f jae 0x11839104 */
  if (!C.cf) goto L_11839104;
  /* 11839111 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11839114:;
  /* 11839114 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839117 pop esi */
  ESI = (pop32());
  /* 11839118 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11839119 ret  */
  ESPCHK(0x118390e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000911a @ 0x1183911a (544 bytes, 177 insns) */
void f_1183911a(void) {
  FTRACE(0x1183911au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183911a push ebp */
  push32((uint32_t)(EBP));
  /* 1183911b mov ebp, esp */
  EBP = (ESP);
  /* 1183911d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839120 push ebx */
  push32((uint32_t)(EBX));
  /* 11839121 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11839124 push esi */
  push32((uint32_t)(ESI));
  /* 11839125 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11839128 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1183912c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183912e push edi */
  push32((uint32_t)(EDI));
  /* 1183912f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11839132 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839135 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11839138 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1183913b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1183913f mov edi, ecx */
  EDI = (ECX);
  /* 11839141 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11839146 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11839148 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1183914a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1183914c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11839152 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11839156 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11839159 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1183915c jae 0x1183931a */
  if (!C.cf) goto L_1183931a;
  /* 11839162 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11839167 jae 0x1183931a */
  if (!C.cf) goto L_1183931a;
  /* 1183916d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11839172 ja 0x1183931a */
  if ((!C.cf&&!C.zf)) goto L_1183931a;
  /* 11839178 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183917d ja 0x11839183 */
  if ((!C.cf&&!C.zf)) goto L_11839183;
  /* 1183917f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839181 jmp 0x118391bd */
  goto L_118391bd;
L_11839183:;
  /* 11839183 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11839186 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1183918b jne 0x118391a5 */
  if (!C.zf) goto L_118391a5;
  /* 1183918d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11839190 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11839193 jne 0x118391a5 */
  if (!C.zf) goto L_118391a5;
  /* 11839195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839197 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183919a jne 0x118391a7 */
  if (!C.zf) goto L_118391a7;
  /* 1183919c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183919e jne 0x118391a7 */
  if (!C.zf) goto L_118391a7;
  /* 118391a0 jmp 0x11839314 */
  goto L_11839314;
L_118391a5:;
  /* 118391a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118391a7:;
  /* 118391a7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118391aa jne 0x118391ca */
  if (!C.zf) goto L_118391ca;
  /* 118391ac inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118391af test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 118391b2 jne 0x118391ca */
  if (!C.zf) goto L_118391ca;
  /* 118391b4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118391b7 jne 0x118391ca */
  if (!C.zf) goto L_118391ca;
  /* 118391b9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118391bb jne 0x118391ca */
  if (!C.zf) goto L_118391ca;
L_118391bd:;
  /* 118391bd mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118391c0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118391c3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118391c5 jmp 0x11839335 */
  goto L_11839335;
L_118391ca:;
  /* 118391ca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118391cd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118391d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118391d3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_118391da:;
  /* 118391da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118391dd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118391df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118391e3 jle 0x1183922e */
  if ((C.zf||C.sf!=C.of)) goto L_1183922e;
  /* 118391e5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118391e7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 118391ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118391ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118391f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118391f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_118391f6:;
  /* 118391f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118391f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118391fc movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 118391ff movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11839202 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11839205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11839208 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183920b push ecx */
  push32((uint32_t)(ECX));
  /* 1183920c push eax */
  push32((uint32_t)(EAX));
  /* 1183920d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1183920f call 0x118384fd */
  push32(0x11839214u); f_118384fd();
  /* 11839214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839219 je 0x11839221 */
  if (C.zf) goto L_11839221;
  /* 1183921b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1183921e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11839221:;
  /* 11839221 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839225 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11839229 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1183922c jne 0x118391f6 */
  if (!C.zf) goto L_118391f6;
L_1183922e:;
  /* 1183922e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839232 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11839235 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11839238 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183923c jg 0x118391da */
  if ((!C.zf&&C.sf==C.of)) goto L_118391da;
  /* 1183923e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839245 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183924a jle 0x11839271 */
  if ((C.zf||C.sf!=C.of)) goto L_11839271;
L_1183924c:;
  /* 1183924c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11839250 jne 0x1183926a */
  if (!C.zf) goto L_1183926a;
  /* 11839252 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11839255 push eax */
  push32((uint32_t)(EAX));
  /* 11839256 call 0x1183857c */
  push32(0x1183925bu); f_1183857c();
  /* 1183925b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839262 pop ecx */
  ECX = (pop32());
  /* 11839263 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11839268 jg 0x1183924c */
  if ((!C.zf&&C.sf==C.of)) goto L_1183924c;
L_1183926a:;
  /* 1183926a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183926f jg 0x118392aa */
  if ((!C.zf&&C.sf==C.of)) goto L_118392aa;
L_11839271:;
  /* 11839271 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839278 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183927d jge 0x118392aa */
  if ((C.sf==C.of)) goto L_118392aa;
  /* 1183927f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11839283 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11839285 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11839288 mov ebx, eax */
  EBX = (EAX);
L_1183928a:;
  /* 1183928a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1183928e je 0x11839293 */
  if (C.zf) goto L_11839293;
  /* 11839290 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11839293:;
  /* 11839293 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11839296 push eax */
  push32((uint32_t)(EAX));
  /* 11839297 call 0x118385aa */
  push32(0x1183929cu); f_118385aa();
  /* 1183929c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1183929d pop ecx */
  ECX = (pop32());
  /* 1183929e jne 0x1183928a */
  if (!C.zf) goto L_1183928a;
  /* 118392a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118392a4 je 0x118392aa */
  if (C.zf) goto L_118392aa;
  /* 118392a6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_118392aa:;
  /* 118392aa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118392b0 ja 0x118392c1 */
  if ((!C.cf&&!C.zf)) goto L_118392c1;
  /* 118392b2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118392b5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118392ba cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118392bf jne 0x118392f6 */
  if (!C.zf) goto L_118392f6;
L_118392c1:;
  /* 118392c1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118392c5 jne 0x118392f3 */
  if (!C.zf) goto L_118392f3;
  /* 118392c7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 118392cb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118392cf jne 0x118392ee */
  if (!C.zf) goto L_118392ee;
  /* 118392d1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 118392d5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118392db jne 0x118392e8 */
  if (!C.zf) goto L_118392e8;
  /* 118392dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118392e0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 118392e6 jmp 0x118392f6 */
  goto L_118392f6;
L_118392e8:;
  /* 118392e8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 118392ec jmp 0x118392f6 */
  goto L_118392f6;
L_118392ee:;
  /* 118392ee inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 118392f1 jmp 0x118392f6 */
  goto L_118392f6;
L_118392f3:;
  /* 118392f3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_118392f6:;
  /* 118392f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118392f9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118392fd jae 0x1183931a */
  if (!C.cf) goto L_1183931a;
  /* 118392ff mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11839303 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11839305 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11839308 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1183930b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1183930e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11839311 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11839314:;
  /* 11839314 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11839318 jmp 0x11839335 */
  goto L_11839335;
L_1183931a:;
  /* 1183931a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1183931d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183931f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11839323 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11839329 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183932f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11839332 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11839335:;
  /* 11839335 pop edi */
  EDI = (pop32());
  /* 11839336 pop esi */
  ESI = (pop32());
  /* 11839337 pop ebx */
  EBX = (pop32());
  /* 11839338 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11839339 ret  */
  ESPCHK(0x1183911au, _esp0);
  ESP += 4; return;
}

/* FUN_1000933a @ 0x1183933a (124 bytes, 52 insns) */
void f_1183933a(void) {
  FTRACE(0x1183933au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183933a push ebp */
  push32((uint32_t)(EBP));
  /* 1183933b mov ebp, esp */
  EBP = (ESP);
  /* 1183933d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839340 push ebx */
  push32((uint32_t)(EBX));
  /* 11839341 mov ebx, 0x1183efb0 */
  EBX = (0x1183efb0u);
  /* 11839346 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11839348 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183934b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183934e je 0x118393b3 */
  if (C.zf) goto L_118393b3;
  /* 11839350 jge 0x11839362 */
  if ((C.sf==C.of)) goto L_11839362;
  /* 11839352 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11839355 mov ebx, 0x1183f110 */
  EBX = (0x1183f110u);
  /* 1183935a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1183935c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1183935f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11839362:;
  /* 11839362 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839365 jne 0x1183936d */
  if (!C.zf) goto L_1183936d;
  /* 11839367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183936a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1183936d:;
  /* 1183936d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839370 je 0x118393b3 */
  if (C.zf) goto L_118393b3;
  /* 11839372 push esi */
  push32((uint32_t)(ESI));
  /* 11839373 push edi */
  push32((uint32_t)(EDI));
L_11839374:;
  /* 11839374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11839377 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183937a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1183937e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11839381 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839383 je 0x118393ac */
  if (C.zf) goto L_118393ac;
  /* 11839385 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11839388 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183938e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11839391 jb 0x1183939f */
  if (C.cf) goto L_1183939f;
  /* 11839393 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11839396 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11839397 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11839398 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11839399 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1183939c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1183939f:;
  /* 1183939f push esi */
  push32((uint32_t)(ESI));
  /* 118393a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118393a3 call 0x1183911a */
  push32(0x118393a8u); f_1183911a();
  /* 118393a8 pop ecx */
  ECX = (pop32());
  /* 118393a9 pop ecx */
  ECX = (pop32());
  /* 118393aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_118393ac:;
  /* 118393ac cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118393af jne 0x11839374 */
  if (!C.zf) goto L_11839374;
  /* 118393b1 pop edi */
  EDI = (pop32());
  /* 118393b2 pop esi */
  ESI = (pop32());
L_118393b3:;
  /* 118393b3 pop ebx */
  EBX = (pop32());
  /* 118393b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118393b5 ret  */
  ESPCHK(0x1183933au, _esp0);
  ESP += 4; return;
}

/* FUN_100093b6 @ 0x118393b6 (597 bytes, 239 insns) */
void f_118393b6(void) {
  FTRACE(0x118393b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118393b6 push ebp */
  push32((uint32_t)(EBP));
  /* 118393b7 mov ebp, esp */
  EBP = (ESP);
  /* 118393b9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118393bb push 0x1183a6e8 */
  push32((uint32_t)(0x1183a6e8u));
  /* 118393c0 push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 118393c5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118393cb push eax */
  push32((uint32_t)(EAX));
  /* 118393cc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118393d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118393d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118393d7 push esi */
  push32((uint32_t)(ESI));
  /* 118393d8 push edi */
  push32((uint32_t)(EDI));
  /* 118393d9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118393dc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118393de cmp dword ptr [0x1183f840], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f840))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118393e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118393e6 pop edi */
  EDI = (pop32());
  /* 118393e7 jne 0x11839429 */
  if (!C.zf) goto L_11839429;
  /* 118393e9 push edi */
  push32((uint32_t)(EDI));
  /* 118393ea mov eax, 0x1183a69c */
  EAX = (0x1183a69cu);
  /* 118393ef push eax */
  push32((uint32_t)(EAX));
  /* 118393f0 push edi */
  push32((uint32_t)(EDI));
  /* 118393f1 push eax */
  push32((uint32_t)(EAX));
  /* 118393f2 push ebx */
  push32((uint32_t)(EBX));
  /* 118393f3 push ebx */
  push32((uint32_t)(EBX));
  /* 118393f4 call dword ptr [0x1183a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a010))), 0x118393fau);
  /* 118393fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118393fc je 0x11839406 */
  if (C.zf) goto L_11839406;
  /* 118393fe mov dword ptr [0x1183f840], edi */
  w32((uint32_t)(0x1183f840), (EDI));
  /* 11839404 jmp 0x11839429 */
  goto L_11839429;
L_11839406:;
  /* 11839406 push edi */
  push32((uint32_t)(EDI));
  /* 11839407 mov eax, 0x1183a698 */
  EAX = (0x1183a698u);
  /* 1183940c push eax */
  push32((uint32_t)(EAX));
  /* 1183940d push edi */
  push32((uint32_t)(EDI));
  /* 1183940e push eax */
  push32((uint32_t)(EAX));
  /* 1183940f push ebx */
  push32((uint32_t)(EBX));
  /* 11839410 push ebx */
  push32((uint32_t)(EBX));
  /* 11839411 call dword ptr [0x1183a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a00c))), 0x11839417u);
  /* 11839417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839419 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 1183941f mov dword ptr [0x1183f840], 2 */
  w32((uint32_t)(0x1183f840), (0x2u));
L_11839429:;
  /* 11839429 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 1183942c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183942e jle 0x11839440 */
  if ((C.zf||C.sf!=C.of)) goto L_11839440;
  /* 11839430 push esi */
  push32((uint32_t)(ESI));
  /* 11839431 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11839434 call 0x118384d2 */
  push32(0x11839439u); f_118384d2();
  /* 11839439 pop ecx */
  ECX = (pop32());
  /* 1183943a pop ecx */
  ECX = (pop32());
  /* 1183943b mov esi, eax */
  ESI = (EAX);
  /* 1183943d mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11839440:;
  /* 11839440 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839443 jle 0x11839455 */
  if ((C.zf||C.sf!=C.of)) goto L_11839455;
  /* 11839445 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11839448 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1183944b call 0x118384d2 */
  push32(0x11839450u); f_118384d2();
  /* 11839450 pop ecx */
  ECX = (pop32());
  /* 11839451 pop ecx */
  ECX = (pop32());
  /* 11839452 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11839455:;
  /* 11839455 mov eax, dword ptr [0x1183f840] */
  EAX = (r32((uint32_t)(0x1183f840)));
  /* 1183945a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183945d jne 0x1183947a */
  if (!C.zf) goto L_1183947a;
  /* 1183945f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11839462 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11839465 push esi */
  push32((uint32_t)(ESI));
  /* 11839466 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11839469 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183946c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1183946f call dword ptr [0x1183a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a00c))), 0x11839475u);
  /* 11839475 jmp 0x11839621 */
  goto L_11839621;
L_1183947a:;
  /* 1183947a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183947c jne 0x1183961f */
  if (!C.zf) goto L_1183961f;
  /* 11839482 cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839485 jne 0x1183948f */
  if (!C.zf) goto L_1183948f;
  /* 11839487 mov eax, dword ptr [0x1183f7a8] */
  EAX = (r32((uint32_t)(0x1183f7a8)));
  /* 1183948c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1183948f:;
  /* 1183948f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839491 je 0x1183949c */
  if (C.zf) goto L_1183949c;
  /* 11839493 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839496 jne 0x11839534 */
  if (!C.zf) goto L_11839534;
L_1183949c:;
  /* 1183949c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183949f jne 0x118394a9 */
  if (!C.zf) goto L_118394a9;
L_118394a1:;
  /* 118394a1 push 2 */
  push32((uint32_t)(0x2u));
L_118394a3:;
  /* 118394a3 pop eax */
  EAX = (pop32());
  /* 118394a4 jmp 0x11839621 */
  goto L_11839621;
L_118394a9:;
  /* 118394a9 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118394ac jle 0x118394b5 */
  if ((C.zf||C.sf!=C.of)) goto L_118394b5;
L_118394ae:;
  /* 118394ae mov eax, edi */
  EAX = (EDI);
  /* 118394b0 jmp 0x11839621 */
  goto L_11839621;
L_118394b5:;
  /* 118394b5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118394b7 jg 0x118394fa */
  if ((!C.zf&&C.sf==C.of)) goto L_118394fa;
  /* 118394b9 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 118394bc push eax */
  push32((uint32_t)(EAX));
  /* 118394bd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118394c0 call dword ptr [0x1183a034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a034))), 0x118394c6u);
  /* 118394c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118394c8 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 118394ce cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118394d0 jle 0x118394fe */
  if ((C.zf||C.sf!=C.of)) goto L_118394fe;
  /* 118394d2 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118394d6 jb 0x118394fa */
  if (C.cf) goto L_118394fa;
  /* 118394d8 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 118394db cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118394de je 0x118394fa */
  if (C.zf) goto L_118394fa;
L_118394e0:;
  /* 118394e0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118394e3 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118394e5 je 0x118394fa */
  if (C.zf) goto L_118394fa;
  /* 118394e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118394ea mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 118394ec cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118394ee jb 0x118394f4 */
  if (C.cf) goto L_118394f4;
  /* 118394f0 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118394f2 jbe 0x118394a1 */
  if ((C.cf||C.zf)) goto L_118394a1;
L_118394f4:;
  /* 118394f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118394f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118394f6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118394f8 jne 0x118394e0 */
  if (!C.zf) goto L_118394e0;
L_118394fa:;
  /* 118394fa push 3 */
  push32((uint32_t)(0x3u));
  /* 118394fc jmp 0x118394a3 */
  goto L_118394a3;
L_118394fe:;
  /* 118394fe cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839501 jle 0x11839534 */
  if ((C.zf||C.sf!=C.of)) goto L_11839534;
  /* 11839503 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839507 jb 0x118394ae */
  if (C.cf) goto L_118394ae;
  /* 11839509 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 1183950c cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183950f je 0x118394ae */
  if (C.zf) goto L_118394ae;
L_11839511:;
  /* 11839511 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11839514 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839516 je 0x118394ae */
  if (C.zf) goto L_118394ae;
  /* 11839518 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1183951b mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 1183951d cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183951f jb 0x11839529 */
  if (C.cf) goto L_11839529;
  /* 11839521 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839523 jbe 0x118394a1 */
  if ((C.cf||C.zf)) goto L_118394a1;
L_11839529:;
  /* 11839529 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183952a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183952b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183952d jne 0x11839511 */
  if (!C.zf) goto L_11839511;
  /* 1183952f jmp 0x118394ae */
  goto L_118394ae;
L_11839534:;
  /* 11839534 push ebx */
  push32((uint32_t)(EBX));
  /* 11839535 push ebx */
  push32((uint32_t)(EBX));
  /* 11839536 push esi */
  push32((uint32_t)(ESI));
  /* 11839537 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1183953a push 9 */
  push32((uint32_t)(0x9u));
  /* 1183953c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1183953f call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x11839545u);
  /* 11839545 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11839548 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183954a je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 11839550 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11839553 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11839555 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11839558 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1183955a call 0x11837ce0 */
  push32(0x1183955fu); f_11837ce0();
  /* 1183955f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11839562 mov eax, esp */
  EAX = (ESP);
  /* 11839564 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839567 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1183956b jmp 0x11839583 */
  goto L_11839583;
  /* 1183956d push 1 */
  push32((uint32_t)(0x1u));
  /* 1183956f pop eax */
  EAX = (pop32());
  /* 11839570 ret  */
  ESPCHK(0x118393b6u, _esp0);
  ESP += 4; return;
  /* 11839571 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11839574 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11839576 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11839579 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1183957d mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11839580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839582 pop edi */
  EDI = (pop32());
L_11839583:;
  /* 11839583 cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839586 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 1183958c push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1183958f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839592 push esi */
  push32((uint32_t)(ESI));
  /* 11839593 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11839596 push edi */
  push32((uint32_t)(EDI));
  /* 11839597 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1183959a mov esi, dword ptr [0x1183a02c] */
  ESI = (r32((uint32_t)(0x1183a02c)));
  /* 118395a0 call esi */
  call_ind((uint32_t)(ESI), 0x118395a2u);
  /* 118395a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118395a4 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 118395a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118395a7 push ebx */
  push32((uint32_t)(EBX));
  /* 118395a8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118395ab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118395ae push 9 */
  push32((uint32_t)(0x9u));
  /* 118395b0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118395b3 call esi */
  call_ind((uint32_t)(ESI), 0x118395b5u);
  /* 118395b5 mov esi, eax */
  ESI = (EAX);
  /* 118395b7 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 118395ba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118395bc je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 118395be mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118395c1 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 118395c4 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118395c7 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118395c9 call 0x11837ce0 */
  push32(0x118395ceu); f_11837ce0();
  /* 118395ce mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118395d1 mov edi, esp */
  EDI = (ESP);
  /* 118395d3 mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 118395d6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118395da jmp 0x118395ee */
  goto L_118395ee;
  /* 118395dc push 1 */
  push32((uint32_t)(0x1u));
  /* 118395de pop eax */
  EAX = (pop32());
  /* 118395df ret  */
  ESPCHK(0x118393b6u, _esp0);
  ESP += 4; return;
  /* 118395e0 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118395e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118395e5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118395e7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118395eb mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_118395ee:;
  /* 118395ee cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118395f0 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 118395f2 push esi */
  push32((uint32_t)(ESI));
  /* 118395f3 push edi */
  push32((uint32_t)(EDI));
  /* 118395f4 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118395f7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118395fa push 1 */
  push32((uint32_t)(0x1u));
  /* 118395fc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118395ff call dword ptr [0x1183a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a02c))), 0x11839605u);
  /* 11839605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839607 je 0x1183961f */
  if (C.zf) goto L_1183961f;
  /* 11839609 push esi */
  push32((uint32_t)(ESI));
  /* 1183960a push edi */
  push32((uint32_t)(EDI));
  /* 1183960b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1183960e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839611 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11839614 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839617 call dword ptr [0x1183a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a010))), 0x1183961du);
  /* 1183961d jmp 0x11839621 */
  goto L_11839621;
L_1183961f:;
  /* 1183961f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11839621:;
  /* 11839621 lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11839624 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11839627 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1183962e pop edi */
  EDI = (pop32());
  /* 1183962f pop esi */
  ESI = (pop32());
  /* 11839630 pop ebx */
  EBX = (pop32());
  /* 11839631 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11839632 ret  */
  ESPCHK(0x118393b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009633 @ 0x11839633 (391 bytes, 155 insns) */
void f_11839633(void) {
  FTRACE(0x11839633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839633 push ebp */
  push32((uint32_t)(EBP));
  /* 11839634 mov ebp, esp */
  EBP = (ESP);
  /* 11839636 push ecx */
  push32((uint32_t)(ECX));
  /* 11839637 push ecx */
  push32((uint32_t)(ECX));
  /* 11839638 push ebx */
  push32((uint32_t)(EBX));
  /* 11839639 push esi */
  push32((uint32_t)(ESI));
  /* 1183963a push edi */
  push32((uint32_t)(EDI));
  /* 1183963b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1183963d cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839640 je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 11839642 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11839644 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839647 call 0x11839d80 */
  push32(0x1183964cu); f_11839d80();
  /* 1183964c mov esi, eax */
  ESI = (EAX);
  /* 1183964e pop ecx */
  ECX = (pop32());
  /* 1183964f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839651 pop ecx */
  ECX = (pop32());
  /* 11839652 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11839655 je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 11839657 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183965a je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 1183965c mov eax, dword ptr [0x1183f520] */
  EAX = (r32((uint32_t)(0x1183f520)));
  /* 11839661 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11839663 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839666 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11839669 cmp eax, dword ptr [0x1183f524] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183f524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183966f jne 0x1183967d */
  if (!C.zf) goto L_1183967d;
  /* 11839671 push eax */
  push32((uint32_t)(EAX));
  /* 11839672 call 0x11839812 */
  push32(0x11839677u); f_11839812();
  /* 11839677 pop ecx */
  ECX = (pop32());
  /* 11839678 mov dword ptr [0x1183f520], eax */
  w32((uint32_t)(0x1183f520), (EAX));
L_1183967d:;
  /* 1183967d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183967f jne 0x118396d5 */
  if (!C.zf) goto L_118396d5;
  /* 11839681 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839684 je 0x1183969f */
  if (C.zf) goto L_1183969f;
  /* 11839686 cmp dword ptr [0x1183f528], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f528))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183968c je 0x1183969f */
  if (C.zf) goto L_1183969f;
  /* 1183968e call 0x11839023 */
  push32(0x11839693u); f_11839023();
  /* 11839693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839695 je 0x118396d5 */
  if (C.zf) goto L_118396d5;
L_11839697:;
  /* 11839697 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1183969a:;
  /* 1183969a pop edi */
  EDI = (pop32());
  /* 1183969b pop esi */
  ESI = (pop32());
  /* 1183969c pop ebx */
  EBX = (pop32());
  /* 1183969d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183969e ret  */
  ESPCHK(0x11839633u, _esp0);
  ESP += 4; return;
L_1183969f:;
  /* 1183969f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118396a1 jne 0x118397b3 */
  if (!C.zf) goto L_118397b3;
  /* 118396a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 118396a9 call 0x11832d7d */
  push32(0x118396aeu); f_11832d7d();
  /* 118396ae cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118396b0 pop ecx */
  ECX = (pop32());
  /* 118396b1 mov dword ptr [0x1183f520], eax */
  w32((uint32_t)(0x1183f520), (EAX));
  /* 118396b6 je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 118396b8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 118396ba cmp dword ptr [0x1183f528], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f528))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118396c0 jne 0x118396d5 */
  if (!C.zf) goto L_118396d5;
  /* 118396c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 118396c4 call 0x11832d7d */
  push32(0x118396c9u); f_11832d7d();
  /* 118396c9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118396cb pop ecx */
  ECX = (pop32());
  /* 118396cc mov dword ptr [0x1183f528], eax */
  w32((uint32_t)(0x1183f528), (EAX));
  /* 118396d1 je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 118396d3 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_118396d5:;
  /* 118396d5 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118396d8 mov edi, dword ptr [0x1183f520] */
  EDI = (r32((uint32_t)(0x1183f520)));
  /* 118396de mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118396e1 push esi */
  push32((uint32_t)(ESI));
  /* 118396e2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118396e5 call 0x118397ba */
  push32(0x118396eau); f_118397ba();
  /* 118396ea mov esi, eax */
  ESI = (EAX);
  /* 118396ec pop ecx */
  ECX = (pop32());
  /* 118396ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118396ef pop ecx */
  ECX = (pop32());
  /* 118396f0 jl 0x11839735 */
  if ((C.sf!=C.of)) goto L_11839735;
  /* 118396f2 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118396f5 je 0x11839735 */
  if (C.zf) goto L_11839735;
  /* 118396f7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118396f9 je 0x1183972d */
  if (C.zf) goto L_1183972d;
  /* 118396fb push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 118396fe lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11839701 call 0x11832bdf */
  push32(0x11839706u); f_11832bdf();
  /* 11839706 pop ecx */
  ECX = (pop32());
L_11839707:;
  /* 11839707 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183970a je 0x11839717 */
  if (C.zf) goto L_11839717;
  /* 1183970c mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 1183970f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11839710 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11839712 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11839715 jmp 0x11839707 */
  goto L_11839707;
L_11839717:;
  /* 11839717 mov eax, esi */
  EAX = (ESI);
  /* 11839719 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1183971c push eax */
  push32((uint32_t)(EAX));
  /* 1183971d push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11839720 call 0x11839a51 */
  push32(0x11839725u); f_11839a51();
  /* 11839725 pop ecx */
  ECX = (pop32());
  /* 11839726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839728 pop ecx */
  ECX = (pop32());
  /* 11839729 je 0x11839767 */
  if (C.zf) goto L_11839767;
  /* 1183972b jmp 0x11839762 */
  goto L_11839762;
L_1183972d:;
  /* 1183972d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11839730 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11839733 jmp 0x11839767 */
  goto L_11839767;
L_11839735:;
  /* 11839735 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11839737 jne 0x118397b3 */
  if (!C.zf) goto L_118397b3;
  /* 11839739 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1183973b jge 0x1183973f */
  if ((C.sf==C.of)) goto L_1183973f;
  /* 1183973d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_1183973f:;
  /* 1183973f lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11839746 push eax */
  push32((uint32_t)(EAX));
  /* 11839747 push edi */
  push32((uint32_t)(EDI));
  /* 11839748 call 0x11839a51 */
  push32(0x1183974du); f_11839a51();
  /* 1183974d pop ecx */
  ECX = (pop32());
  /* 1183974e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839750 pop ecx */
  ECX = (pop32());
  /* 11839751 je 0x11839697 */
  if (C.zf) goto L_11839697;
  /* 11839757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183975a mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 1183975d and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11839762:;
  /* 11839762 mov dword ptr [0x1183f520], eax */
  w32((uint32_t)(0x1183f520), (EAX));
L_11839767:;
  /* 11839767 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183976b je 0x118397b3 */
  if (C.zf) goto L_118397b3;
  /* 1183976d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839770 call 0x11836bc0 */
  push32(0x11839775u); f_11836bc0();
  /* 11839775 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11839776 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11839777 push eax */
  push32((uint32_t)(EAX));
  /* 11839778 call 0x11832d7d */
  push32(0x1183977du); f_11832d7d();
  /* 1183977d mov esi, eax */
  ESI = (EAX);
  /* 1183977f pop ecx */
  ECX = (pop32());
  /* 11839780 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11839782 pop ecx */
  ECX = (pop32());
  /* 11839783 je 0x118397b3 */
  if (C.zf) goto L_118397b3;
  /* 11839785 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839788 push esi */
  push32((uint32_t)(ESI));
  /* 11839789 call 0x11836a70 */
  push32(0x1183978eu); f_11836a70();
  /* 1183978e mov eax, esi */
  EAX = (ESI);
  /* 11839790 pop ecx */
  ECX = (pop32());
  /* 11839791 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839794 pop ecx */
  ECX = (pop32());
  /* 11839795 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11839798 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1183979b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183979c neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 1183979e sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118397a0 not ebx */
  EBX = (~(EBX));
  /* 118397a2 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 118397a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118397a5 push esi */
  push32((uint32_t)(ESI));
  /* 118397a6 call dword ptr [0x1183a008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a008))), 0x118397acu);
  /* 118397ac push esi */
  push32((uint32_t)(ESI));
  /* 118397ad call 0x11832bdf */
  push32(0x118397b2u); f_11832bdf();
  /* 118397b2 pop ecx */
  ECX = (pop32());
L_118397b3:;
  /* 118397b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118397b5 jmp 0x1183969a */
  goto L_1183969a;
}

/* FUN_100097ba @ 0x118397ba (88 bytes, 35 insns) */
void f_118397ba(void) {
  FTRACE(0x118397bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118397ba push esi */
  push32((uint32_t)(ESI));
  /* 118397bb mov esi, dword ptr [0x1183f520] */
  ESI = (r32((uint32_t)(0x1183f520)));
  /* 118397c1 push edi */
  push32((uint32_t)(EDI));
  /* 118397c2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118397c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118397c6 je 0x118397f5 */
  if (C.zf) goto L_118397f5;
  /* 118397c8 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_118397cc:;
  /* 118397cc push edi */
  push32((uint32_t)(EDI));
  /* 118397cd push eax */
  push32((uint32_t)(EAX));
  /* 118397ce push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118397d2 call 0x11838fe4 */
  push32(0x118397d7u); f_11838fe4();
  /* 118397d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118397da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118397dc jne 0x118397eb */
  if (!C.zf) goto L_118397eb;
  /* 118397de mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118397e0 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 118397e3 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118397e5 je 0x11839805 */
  if (C.zf) goto L_11839805;
  /* 118397e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118397e9 je 0x11839805 */
  if (C.zf) goto L_11839805;
L_118397eb:;
  /* 118397eb mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118397ee add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118397f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118397f3 jne 0x118397cc */
  if (!C.zf) goto L_118397cc;
L_118397f5:;
  /* 118397f5 mov eax, esi */
  EAX = (ESI);
  /* 118397f7 sub eax, dword ptr [0x1183f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183f520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118397fd sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11839800 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11839802:;
  /* 11839802 pop edi */
  EDI = (pop32());
  /* 11839803 pop esi */
  ESI = (pop32());
  /* 11839804 ret  */
  ESPCHK(0x118397bau, _esp0);
  ESP += 4; return;
L_11839805:;
  /* 11839805 mov eax, esi */
  EAX = (ESI);
  /* 11839807 sub eax, dword ptr [0x1183f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183f520))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183980d sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11839810 jmp 0x11839802 */
  goto L_11839802;
}

/* FUN_10009812 @ 0x11839812 (103 bytes, 49 insns) */
void f_11839812(void) {
  FTRACE(0x11839812u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839812 push edi */
  push32((uint32_t)(EDI));
  /* 11839813 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11839817 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11839819 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1183981b jne 0x11839821 */
  if (!C.zf) goto L_11839821;
  /* 1183981d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183981f pop edi */
  EDI = (pop32());
  /* 11839820 ret  */
  ESPCHK(0x11839812u, _esp0);
  ESP += 4; return;
L_11839821:;
  /* 11839821 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839824 lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11839827 je 0x11839833 */
  if (C.zf) goto L_11839833;
L_11839829:;
  /* 11839829 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1183982b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183982c add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183982f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11839831 jne 0x11839829 */
  if (!C.zf) goto L_11839829;
L_11839833:;
  /* 11839833 push ebx */
  push32((uint32_t)(EBX));
  /* 11839834 push ebp */
  push32((uint32_t)(EBP));
  /* 11839835 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 1183983c push esi */
  push32((uint32_t)(ESI));
  /* 1183983d push eax */
  push32((uint32_t)(EAX));
  /* 1183983e call 0x11832d7d */
  push32(0x11839843u); f_11832d7d();
  /* 11839843 mov esi, eax */
  ESI = (EAX);
  /* 11839845 pop ecx */
  ECX = (pop32());
  /* 11839846 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11839848 mov ebp, esi */
  EBP = (ESI);
  /* 1183984a jne 0x11839854 */
  if (!C.zf) goto L_11839854;
  /* 1183984c push 9 */
  push32((uint32_t)(0x9u));
  /* 1183984e call 0x1183295e */
  push32(0x11839853u); f_1183295e();
  /* 11839853 pop ecx */
  ECX = (pop32());
L_11839854:;
  /* 11839854 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11839856 mov ebx, edi */
  EBX = (EDI);
L_11839858:;
  /* 11839858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183985a je 0x1183986f */
  if (C.zf) goto L_1183986f;
  /* 1183985c push eax */
  push32((uint32_t)(EAX));
  /* 1183985d add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11839860 call 0x11839e17 */
  push32(0x11839865u); f_11839e17();
  /* 11839865 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11839867 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11839869 pop ecx */
  ECX = (pop32());
  /* 1183986a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183986d jmp 0x11839858 */
  goto L_11839858;
L_1183986f:;
  /* 1183986f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11839872 mov eax, ebp */
  EAX = (EBP);
  /* 11839874 pop esi */
  ESI = (pop32());
  /* 11839875 pop ebp */
  EBP = (pop32());
  /* 11839876 pop ebx */
  EBX = (pop32());
  /* 11839877 pop edi */
  EDI = (pop32());
  /* 11839878 ret  */
  ESPCHK(0x11839812u, _esp0);
  ESP += 4; return;
}

/* FUN_10009880 @ 0x11839880 (208 bytes, 85 insns) */
void f_11839880(void) {
  FTRACE(0x11839880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839880 push ebp */
  push32((uint32_t)(EBP));
  /* 11839881 mov ebp, esp */
  EBP = (ESP);
  /* 11839883 push edi */
  push32((uint32_t)(EDI));
  /* 11839884 push esi */
  push32((uint32_t)(ESI));
  /* 11839885 push ebx */
  push32((uint32_t)(EBX));
  /* 11839886 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11839889 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1183988c lea eax, [0x1183f790] */
  EAX = ((uint32_t)(0x1183f790));
  /* 11839892 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839896 jne 0x118398d3 */
  if (!C.zf) goto L_118398d3;
  /* 11839898 mov al, 0xff */
  AL = (0xffu);
  /* 1183989a mov edi, edi */
  EDI = (EDI);
L_1183989c:;
  /* 1183989c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1183989e je 0x118398ce */
  if (C.zf) goto L_118398ce;
  /* 118398a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118398a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118398a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 118398a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118398a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118398a8 je 0x1183989c */
  if (C.zf) goto L_1183989c;
  /* 118398aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118398ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118398ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118398b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118398b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118398b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118398b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 118398b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118398bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118398bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118398bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118398c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118398c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118398c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118398c8 je 0x1183989c */
  if (C.zf) goto L_1183989c;
  /* 118398ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118398cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_118398ce:;
  /* 118398ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 118398d1 jmp 0x1183994b */
  goto L_1183994b;
L_118398d3:;
  /* 118398d3 lock inc dword ptr [0x1183f860] */
  x86_unimpl("lock inc @ 0x118398d3");
  /* 118398da cmp dword ptr [0x1183f85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118398e1 jg 0x118398e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_118398e7;
  /* 118398e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118398e5 jmp 0x118398fc */
  goto L_118398fc;
L_118398e7:;
  /* 118398e7 lock dec dword ptr [0x1183f860] */
  x86_unimpl("lock dec @ 0x118398e7");
  /* 118398ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118398f0 call 0x11834436 */
  push32(0x118398f5u); f_11834436();
  /* 118398f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_118398fc:;
  /* 118398fc mov eax, 0xff */
  EAX = (0xffu);
  /* 11839901 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11839903 nop  */
  /* nop */
L_11839904:;
  /* 11839904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11839906 je 0x1183992f */
  if (C.zf) goto L_1183992f;
  /* 11839908 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1183990a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1183990b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1183990d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1183990e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839910 je 0x11839904 */
  if (C.zf) goto L_11839904;
  /* 11839912 push eax */
  push32((uint32_t)(EAX));
  /* 11839913 push ebx */
  push32((uint32_t)(EBX));
  /* 11839914 call 0x11836421 */
  push32(0x11839919u); f_11836421();
  /* 11839919 mov ebx, eax */
  EBX = (EAX);
  /* 1183991b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183991e call 0x11836421 */
  push32(0x11839923u); f_11836421();
  /* 11839923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839926 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839928 je 0x11839904 */
  if (C.zf) goto L_11839904;
  /* 1183992a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183992c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1183992f:;
  /* 1183992f mov ebx, eax */
  EBX = (EAX);
  /* 11839931 pop eax */
  EAX = (pop32());
  /* 11839932 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839934 jne 0x1183993f */
  if (!C.zf) goto L_1183993f;
  /* 11839936 lock dec dword ptr [0x1183f860] */
  x86_unimpl("lock dec @ 0x11839936");
  /* 1183993d jmp 0x11839949 */
  goto L_11839949;
L_1183993f:;
  /* 1183993f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11839941 call 0x11834497 */
  push32(0x11839946u); f_11834497();
  /* 11839946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11839949:;
  /* 11839949 mov eax, ebx */
  EAX = (EBX);
L_1183994b:;
  /* 1183994b pop ebx */
  EBX = (pop32());
  /* 1183994c pop esi */
  ESI = (pop32());
  /* 1183994d pop edi */
  EDI = (pop32());
  /* 1183994e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183994f ret  */
  ESPCHK(0x11839880u, _esp0);
  ESP += 4; return;
}

/* FUN_10009950 @ 0x11839950 (257 bytes, 103 insns) */
void f_11839950(void) {
  FTRACE(0x11839950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839950 push ebp */
  push32((uint32_t)(EBP));
  /* 11839951 mov ebp, esp */
  EBP = (ESP);
  /* 11839953 push edi */
  push32((uint32_t)(EDI));
  /* 11839954 push esi */
  push32((uint32_t)(ESI));
  /* 11839955 push ebx */
  push32((uint32_t)(EBX));
  /* 11839956 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11839959 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1183995b je 0x11839a4a */
  if (C.zf) goto L_11839a4a;
  /* 11839961 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11839964 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11839967 lea eax, [0x1183f790] */
  EAX = ((uint32_t)(0x1183f790));
  /* 1183996d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839971 jne 0x118399c1 */
  if (!C.zf) goto L_118399c1;
  /* 11839973 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11839975 mov bl, 0x5a */
  BL = (0x5au);
  /* 11839977 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11839979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1183997c:;
  /* 1183997c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1183997e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11839980 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11839982 je 0x118399a5 */
  if (C.zf) goto L_118399a5;
  /* 11839984 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11839986 je 0x118399a5 */
  if (C.zf) goto L_118399a5;
  /* 11839988 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11839989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1183998a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183998c jb 0x11839994 */
  if (C.cf) goto L_11839994;
  /* 1183998e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839990 ja 0x11839994 */
  if ((!C.cf&&!C.zf)) goto L_11839994;
  /* 11839992 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11839994:;
  /* 11839994 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11839996 jb 0x1183999e */
  if (C.cf) goto L_1183999e;
  /* 11839998 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183999a ja 0x1183999e */
  if ((!C.cf&&!C.zf)) goto L_1183999e;
  /* 1183999c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1183999e:;
  /* 1183999e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118399a0 jne 0x118399af */
  if (!C.zf) goto L_118399af;
  /* 118399a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118399a3 jne 0x1183997c */
  if (!C.zf) goto L_1183997c;
L_118399a5:;
  /* 118399a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118399a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118399a9 je 0x11839a4a */
  if (C.zf) goto L_11839a4a;
L_118399af:;
  /* 118399af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118399b4 jb 0x11839a4a */
  if (C.cf) goto L_11839a4a;
  /* 118399ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118399bc jmp 0x11839a4a */
  goto L_11839a4a;
L_118399c1:;
  /* 118399c1 lock inc dword ptr [0x1183f860] */
  x86_unimpl("lock inc @ 0x118399c1");
  /* 118399c8 cmp dword ptr [0x1183f85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118399cf jg 0x118399d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_118399d5;
  /* 118399d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118399d3 jmp 0x118399ee */
  goto L_118399ee;
L_118399d5:;
  /* 118399d5 lock dec dword ptr [0x1183f860] */
  x86_unimpl("lock dec @ 0x118399d5");
  /* 118399dc mov ebx, ecx */
  EBX = (ECX);
  /* 118399de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118399e0 call 0x11834436 */
  push32(0x118399e5u); f_11834436();
  /* 118399e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 118399ec mov ecx, ebx */
  ECX = (EBX);
L_118399ee:;
  /* 118399ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118399f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118399f2 mov edi, edi */
  EDI = (EDI);
L_118399f4:;
  /* 118399f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118399f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118399f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118399fa je 0x11839a1f */
  if (C.zf) goto L_11839a1f;
  /* 118399fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118399fe je 0x11839a1f */
  if (C.zf) goto L_11839a1f;
  /* 11839a00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11839a01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11839a02 push ecx */
  push32((uint32_t)(ECX));
  /* 11839a03 push eax */
  push32((uint32_t)(EAX));
  /* 11839a04 push ebx */
  push32((uint32_t)(EBX));
  /* 11839a05 call 0x11836421 */
  push32(0x11839a0au); f_11836421();
  /* 11839a0a mov ebx, eax */
  EBX = (EAX);
  /* 11839a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839a0f call 0x11836421 */
  push32(0x11839a14u); f_11836421();
  /* 11839a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839a17 pop ecx */
  ECX = (pop32());
  /* 11839a18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839a1a jne 0x11839a25 */
  if (!C.zf) goto L_11839a25;
  /* 11839a1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11839a1d jne 0x118399f4 */
  if (!C.zf) goto L_118399f4;
L_11839a1f:;
  /* 11839a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11839a21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839a23 je 0x11839a2e */
  if (C.zf) goto L_11839a2e;
L_11839a25:;
  /* 11839a25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11839a2a jb 0x11839a2e */
  if (C.cf) goto L_11839a2e;
  /* 11839a2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11839a2e:;
  /* 11839a2e pop eax */
  EAX = (pop32());
  /* 11839a2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839a31 jne 0x11839a3c */
  if (!C.zf) goto L_11839a3c;
  /* 11839a33 lock dec dword ptr [0x1183f860] */
  x86_unimpl("lock dec @ 0x11839a33");
  /* 11839a3a jmp 0x11839a4a */
  goto L_11839a4a;
L_11839a3c:;
  /* 11839a3c mov ebx, ecx */
  EBX = (ECX);
  /* 11839a3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11839a40 call 0x11834497 */
  push32(0x11839a45u); f_11834497();
  /* 11839a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839a48 mov ecx, ebx */
  ECX = (EBX);
L_11839a4a:;
  /* 11839a4a mov eax, ecx */
  EAX = (ECX);
  /* 11839a4c pop ebx */
  EBX = (pop32());
  /* 11839a4d pop esi */
  ESI = (pop32());
  /* 11839a4e pop edi */
  EDI = (pop32());
  /* 11839a4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11839a50 ret  */
  ESPCHK(0x11839950u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a51 @ 0x11839a51 (781 bytes, 277 insns) */
void f_11839a51(void) {
  FTRACE(0x11839a51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839a51 push ebp */
  push32((uint32_t)(EBP));
  /* 11839a52 mov ebp, esp */
  EBP = (ESP);
  /* 11839a54 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11839a56 push 0x1183a828 */
  push32((uint32_t)(0x1183a828u));
  /* 11839a5b push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11839a60 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11839a66 push eax */
  push32((uint32_t)(EAX));
  /* 11839a67 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11839a6e sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839a71 push ebx */
  push32((uint32_t)(EBX));
  /* 11839a72 push esi */
  push32((uint32_t)(ESI));
  /* 11839a73 push edi */
  push32((uint32_t)(EDI));
  /* 11839a74 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11839a77 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11839a79 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839a7b jne 0x11839a8b */
  if (!C.zf) goto L_11839a8b;
  /* 11839a7d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11839a80 call 0x11832d7d */
  push32(0x11839a85u); f_11832d7d();
  /* 11839a85 pop ecx */
  ECX = (pop32());
  /* 11839a86 jmp 0x11839d71 */
  jmp_ind(0x11839d71u); return;
L_11839a8b:;
  /* 11839a8b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11839a8e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839a90 jne 0x11839a9e */
  if (!C.zf) goto L_11839a9e;
  /* 11839a92 push ebx */
  push32((uint32_t)(EBX));
  /* 11839a93 call 0x11832bdf */
  push32(0x11839a98u); f_11832bdf();
  /* 11839a98 pop ecx */
  ECX = (pop32());
  /* 11839a99 jmp 0x11839d6f */
  jmp_ind(0x11839d6fu); return;
L_11839a9e:;
  /* 11839a9e mov eax, dword ptr [0x1183faa8] */
  EAX = (r32((uint32_t)(0x1183faa8)));
  /* 11839aa3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839aa6 jne 0x11839be5 */
  if (!C.zf) goto L_11839be5;
L_11839aac:;
  /* 11839aac mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11839aaf cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839ab2 ja 0x11839ba9 */
  if ((!C.cf&&!C.zf)) goto L_11839ba9;
  /* 11839ab8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11839aba call 0x11834436 */
  push32(0x11839abfu); f_11834436();
  /* 11839abf pop ecx */
  ECX = (pop32());
  /* 11839ac0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11839ac3 push ebx */
  push32((uint32_t)(EBX));
  /* 11839ac4 call 0x11834ab6 */
  push32(0x11839ac9u); f_11834ab6();
  /* 11839ac9 pop ecx */
  ECX = (pop32());
  /* 11839aca mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11839acd cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839acf je 0x11839b79 */
  if (C.zf) goto L_11839b79;
  /* 11839ad5 cmp esi, dword ptr [0x1183faa0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183faa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839adb ja 0x11839b29 */
  if ((!C.cf&&!C.zf)) goto L_11839b29;
  /* 11839add push esi */
  push32((uint32_t)(ESI));
  /* 11839ade push ebx */
  push32((uint32_t)(EBX));
  /* 11839adf push eax */
  push32((uint32_t)(EAX));
  /* 11839ae0 call 0x118352bf */
  push32(0x11839ae5u); f_118352bf();
  /* 11839ae5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839aea je 0x11839af1 */
  if (C.zf) goto L_11839af1;
  /* 11839aec mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11839aef jmp 0x11839b29 */
  goto L_11839b29;
L_11839af1:;
  /* 11839af1 push esi */
  push32((uint32_t)(ESI));
  /* 11839af2 call 0x11834e0a */
  push32(0x11839af7u); f_11834e0a();
  /* 11839af7 pop ecx */
  ECX = (pop32());
  /* 11839af8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839afb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839afd je 0x11839b29 */
  if (C.zf) goto L_11839b29;
  /* 11839aff mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11839b02 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11839b03 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11839b06 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b08 jb 0x11839b0c */
  if (C.cf) goto L_11839b0c;
  /* 11839b0a mov eax, esi */
  EAX = (ESI);
L_11839b0c:;
  /* 11839b0c push eax */
  push32((uint32_t)(EAX));
  /* 11839b0d push ebx */
  push32((uint32_t)(EBX));
  /* 11839b0e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839b11 call 0x118375f0 */
  push32(0x11839b16u); f_118375f0();
  /* 11839b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11839b17 call 0x11834ab6 */
  push32(0x11839b1cu); f_11834ab6();
  /* 11839b1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11839b1f push ebx */
  push32((uint32_t)(EBX));
  /* 11839b20 push eax */
  push32((uint32_t)(EAX));
  /* 11839b21 call 0x11834ae1 */
  push32(0x11839b26u); f_11834ae1();
  /* 11839b26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11839b29:;
  /* 11839b29 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b2c jne 0x11839b79 */
  if (!C.zf) goto L_11839b79;
  /* 11839b2e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b30 jne 0x11839b38 */
  if (!C.zf) goto L_11839b38;
  /* 11839b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839b34 pop esi */
  ESI = (pop32());
  /* 11839b35 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11839b38:;
  /* 11839b38 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11839b3b and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11839b3e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11839b41 push esi */
  push32((uint32_t)(ESI));
  /* 11839b42 push edi */
  push32((uint32_t)(EDI));
  /* 11839b43 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11839b49 call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x11839b4fu);
  /* 11839b4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839b52 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b54 je 0x11839b79 */
  if (C.zf) goto L_11839b79;
  /* 11839b56 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11839b59 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11839b5a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11839b5d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b5f jb 0x11839b63 */
  if (C.cf) goto L_11839b63;
  /* 11839b61 mov eax, esi */
  EAX = (ESI);
L_11839b63:;
  /* 11839b63 push eax */
  push32((uint32_t)(EAX));
  /* 11839b64 push ebx */
  push32((uint32_t)(EBX));
  /* 11839b65 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839b68 call 0x118375f0 */
  push32(0x11839b6du); f_118375f0();
  /* 11839b6d push ebx */
  push32((uint32_t)(EBX));
  /* 11839b6e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11839b71 call 0x11834ae1 */
  push32(0x11839b76u); f_11834ae1();
  /* 11839b76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11839b79:;
  /* 11839b79 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11839b7d call 0x11839bdc */
  push32(0x11839b82u); f_11839bdc();
  /* 11839b82 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b85 jne 0x11839ba9 */
  if (!C.zf) goto L_11839ba9;
  /* 11839b87 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839b89 jne 0x11839b8e */
  if (!C.zf) goto L_11839b8e;
  /* 11839b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11839b8d pop esi */
  ESI = (pop32());
L_11839b8e:;
  /* 11839b8e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11839b91 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11839b94 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11839b97 push esi */
  push32((uint32_t)(ESI));
  /* 11839b98 push ebx */
  push32((uint32_t)(EBX));
  /* 11839b99 push edi */
  push32((uint32_t)(EDI));
  /* 11839b9a push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11839ba0 call dword ptr [0x1183a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a058))), 0x11839ba6u);
  /* 11839ba6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11839ba9:;
  /* 11839ba9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11839bac cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839bae jne 0x11839d71 */
  if (!C.zf) { jmp_ind(0x11839d71u); return; }
  /* 11839bb4 cmp dword ptr [0x1183f774], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f774))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839bba je 0x11839d71 */
  if (C.zf) { jmp_ind(0x11839d71u); return; }
  /* 11839bc0 push esi */
  push32((uint32_t)(ESI));
  /* 11839bc1 call 0x118361bc */
  push32(0x11839bc6u); f_118361bc();
  /* 11839bc6 pop ecx */
  ECX = (pop32());
  /* 11839bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839bc9 jne 0x11839aac */
  if (!C.zf) goto L_11839aac;
  /* 11839bcf jmp 0x11839d6f */
  jmp_ind(0x11839d6fu); return;
  /* 11839bd4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11839bd7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11839bda xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11839bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 11839bde call 0x11834497 */
  push32(0x11839be3u); f_11834497();
  /* 11839be3 pop ecx */
  ECX = (pop32());
  /* 11839be4 ret  */
  ESPCHK(0x11839a51u, _esp0);
  ESP += 4; return;
L_11839be5:;
  /* 11839be5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839be8 jne 0x11839d35 */
  if (!C.zf) goto L_11839d35;
  /* 11839bee cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839bf1 ja 0x11839c05 */
  if ((!C.cf&&!C.zf)) goto L_11839c05;
  /* 11839bf3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839bf5 jbe 0x11839bff */
  if ((C.cf||C.zf)) goto L_11839bff;
  /* 11839bf7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11839bfa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11839bfd jmp 0x11839c02 */
  goto L_11839c02;
L_11839bff:;
  /* 11839bff push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11839c01 pop esi */
  ESI = (pop32());
L_11839c02:;
  /* 11839c02 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11839c05:;
  /* 11839c05 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11839c08 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839c0b ja 0x11839d04 */
  if ((!C.cf&&!C.zf)) goto L_11839d04;
  /* 11839c11 push 9 */
  push32((uint32_t)(0x9u));
  /* 11839c13 call 0x11834436 */
  push32(0x11839c18u); f_11834436();
  /* 11839c18 pop ecx */
  ECX = (pop32());
  /* 11839c19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11839c20 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11839c23 push eax */
  push32((uint32_t)(EAX));
  /* 11839c24 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11839c27 push eax */
  push32((uint32_t)(EAX));
  /* 11839c28 push ebx */
  push32((uint32_t)(EBX));
  /* 11839c29 call 0x11835811 */
  push32(0x11839c2eu); f_11835811();
  /* 11839c2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839c31 mov edi, eax */
  EDI = (EAX);
  /* 11839c33 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11839c36 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11839c38 je 0x11839ce8 */
  if (C.zf) goto L_11839ce8;
  /* 11839c3e cmp esi, dword ptr [0x1183e8dc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183e8dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839c44 jae 0x11839ca2 */
  if (!C.cf) goto L_11839ca2;
  /* 11839c46 mov ebx, esi */
  EBX = (ESI);
  /* 11839c48 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11839c4b push ebx */
  push32((uint32_t)(EBX));
  /* 11839c4c push edi */
  push32((uint32_t)(EDI));
  /* 11839c4d push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11839c50 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11839c53 call 0x11835bd9 */
  push32(0x11839c58u); f_11835bd9();
  /* 11839c58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839c5d je 0x11839c67 */
  if (C.zf) goto L_11839c67;
  /* 11839c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11839c62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839c65 jmp 0x11839c9f */
  goto L_11839c9f;
L_11839c67:;
  /* 11839c67 push ebx */
  push32((uint32_t)(EBX));
  /* 11839c68 call 0x118358ad */
  push32(0x11839c6du); f_118358ad();
  /* 11839c6d pop ecx */
  ECX = (pop32());
  /* 11839c6e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839c73 je 0x11839c9f */
  if (C.zf) goto L_11839c9f;
  /* 11839c75 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11839c78 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11839c7b mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11839c7e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839c80 jb 0x11839c84 */
  if (C.cf) goto L_11839c84;
  /* 11839c82 mov eax, esi */
  EAX = (ESI);
L_11839c84:;
  /* 11839c84 push eax */
  push32((uint32_t)(EAX));
  /* 11839c85 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839c88 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839c8b call 0x118375f0 */
  push32(0x11839c90u); f_118375f0();
  /* 11839c90 push edi */
  push32((uint32_t)(EDI));
  /* 11839c91 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11839c94 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11839c97 call 0x11835868 */
  push32(0x11839c9cu); f_11835868();
  /* 11839c9c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11839c9f:;
  /* 11839c9f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11839ca2:;
  /* 11839ca2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839ca6 jne 0x11839cfb */
  if (!C.zf) goto L_11839cfb;
  /* 11839ca8 push esi */
  push32((uint32_t)(ESI));
  /* 11839ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11839cab push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11839cb1 call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x11839cb7u);
  /* 11839cb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11839cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839cbc je 0x11839cfb */
  if (C.zf) goto L_11839cfb;
  /* 11839cbe movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11839cc1 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11839cc4 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11839cc7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839cc9 jb 0x11839ccd */
  if (C.cf) goto L_11839ccd;
  /* 11839ccb mov eax, esi */
  EAX = (ESI);
L_11839ccd:;
  /* 11839ccd push eax */
  push32((uint32_t)(EAX));
  /* 11839cce push ebx */
  push32((uint32_t)(EBX));
  /* 11839ccf push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11839cd2 call 0x118375f0 */
  push32(0x11839cd7u); f_118375f0();
  /* 11839cd7 push edi */
  push32((uint32_t)(EDI));
  /* 11839cd8 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11839cdb push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11839cde call 0x11835868 */
  push32(0x11839ce3u); f_11835868();
  /* 11839ce3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11839ce6 jmp 0x11839cfb */
  goto L_11839cfb;
L_11839ce8:;
  /* 11839ce8 push esi */
  push32((uint32_t)(ESI));
  /* 11839ce9 push ebx */
  push32((uint32_t)(EBX));
  /* 11839cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11839cec push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11839cf2 call dword ptr [0x1183a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a058))), 0x11839cf8u);
  /* 11839cf8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11839cfb:;
  /* 11839cfb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11839cff call 0x11839d2a */
  push32(0x11839d04u); f_11839d2a();
L_11839d04:;
  /* 11839d04 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11839d07 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d09 jne 0x11839d71 */
  if (!C.zf) { jmp_ind(0x11839d71u); return; }
  /* 11839d0b cmp dword ptr [0x1183f774], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f774))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d11 je 0x11839d71 */
  if (C.zf) { jmp_ind(0x11839d71u); return; }
  /* 11839d13 push esi */
  push32((uint32_t)(ESI));
  /* 11839d14 call 0x118361bc */
  push32(0x11839d19u); f_118361bc();
  /* 11839d19 pop ecx */
  ECX = (pop32());
  /* 11839d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839d1c jne 0x11839c05 */
  if (!C.zf) goto L_11839c05;
  /* 11839d22 jmp 0x11839d6f */
  jmp_ind(0x11839d6fu); return;
  /* 11839d24 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11839d27 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11839d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11839d2c call 0x11834497 */
  push32(0x11839d31u); f_11834497();
  /* 11839d31 pop ecx */
  ECX = (pop32());
  /* 11839d32 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11839d34 ret  */
  ESPCHK(0x11839a51u, _esp0);
  ESP += 4; return;
L_11839d35:;
  /* 11839d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839d37 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d3a ja 0x11839d58 */
  if ((!C.cf&&!C.zf)) goto L_11839d58;
  /* 11839d3c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d3e jne 0x11839d43 */
  if (!C.zf) goto L_11839d43;
  /* 11839d40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11839d42 pop esi */
  ESI = (pop32());
L_11839d43:;
  /* 11839d43 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11839d46 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11839d49 push esi */
  push32((uint32_t)(ESI));
  /* 11839d4a push ebx */
  push32((uint32_t)(EBX));
  /* 11839d4b push edi */
  push32((uint32_t)(EDI));
  /* 11839d4c push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11839d52 call dword ptr [0x1183a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a058))), 0x11839d58u);
L_11839d58:;
  /* 11839d58 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d5a jne 0x11839d71 */
  if (!C.zf) { jmp_ind(0x11839d71u); return; }
}

/* FUN_10009bdc @ 0x11839bdc (9 bytes, 4 insns) */
void f_11839bdc(void) {
  FTRACE(0x11839bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 11839bde call 0x11834497 */
  push32(0x11839be3u); f_11834497();
  /* 11839be3 pop ecx */
  ECX = (pop32());
  /* 11839be4 ret  */
  ESPCHK(0x11839bdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10009d2a @ 0x11839d2a (11 bytes, 5 insns) */
void f_11839d2a(void) {
  FTRACE(0x11839d2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11839d2c call 0x11834497 */
  push32(0x11839d31u); f_11834497();
  /* 11839d31 pop ecx */
  ECX = (pop32());
  /* 11839d32 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11839d34 ret  */
  ESPCHK(0x11839d2au, _esp0);
  ESP += 4; return;
}

/* FUN_10009d80 @ 0x11839d80 (151 bytes, 62 insns) */
void f_11839d80(void) {
  FTRACE(0x11839d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11839d81 mov ebp, esp */
  EBP = (ESP);
  /* 11839d83 cmp dword ptr [0x1183f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839d8a push ebx */
  push32((uint32_t)(EBX));
  /* 11839d8b push esi */
  push32((uint32_t)(ESI));
  /* 11839d8c jne 0x11839d9d */
  if (!C.zf) goto L_11839d9d;
  /* 11839d8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11839d91 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11839d94 call 0x11837b60 */
  push32(0x11839d99u); f_11837b60();
  /* 11839d99 pop ecx */
  ECX = (pop32());
  /* 11839d9a pop ecx */
  ECX = (pop32());
  /* 11839d9b jmp 0x11839e13 */
  goto L_11839e13;
L_11839d9d:;
  /* 11839d9d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11839d9f call 0x11834436 */
  push32(0x11839da4u); f_11834436();
  /* 11839da4 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11839da7 pop ecx */
  ECX = (pop32());
L_11839da8:;
  /* 11839da8 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11839dac test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11839daf je 0x11839dfb */
  if (C.zf) goto L_11839dfb;
  /* 11839db1 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11839db4 test byte ptr [eax + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1183f981)))&(0x4u); fl_logic(_r,8); }
  /* 11839dbb je 0x11839dd7 */
  if (C.zf) goto L_11839dd7;
  /* 11839dbd mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11839dc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11839dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11839dc3 je 0x11839de2 */
  if (C.zf) goto L_11839de2;
  /* 11839dc5 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11839dc8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11839dcb shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11839dce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11839dd0 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839dd3 je 0x11839dee */
  if (C.zf) goto L_11839dee;
  /* 11839dd5 jmp 0x11839ddf */
  goto L_11839ddf;
L_11839dd7:;
  /* 11839dd7 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11839dda cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11839ddd je 0x11839dfb */
  if (C.zf) goto L_11839dfb;
L_11839ddf:;
  /* 11839ddf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11839de0 jmp 0x11839da8 */
  goto L_11839da8;
L_11839de2:;
  /* 11839de2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11839de4 call 0x11834497 */
  push32(0x11839de9u); f_11834497();
  /* 11839de9 pop ecx */
  ECX = (pop32());
  /* 11839dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839dec jmp 0x11839e13 */
  goto L_11839e13;
L_11839dee:;
  /* 11839dee push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11839df0 call 0x11834497 */
  push32(0x11839df5u); f_11834497();
  /* 11839df5 pop ecx */
  ECX = (pop32());
  /* 11839df6 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11839df9 jmp 0x11839e13 */
  goto L_11839e13;
L_11839dfb:;
  /* 11839dfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11839dfd call 0x11834497 */
  push32(0x11839e02u); f_11834497();
  /* 11839e02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11839e05 pop ecx */
  ECX = (pop32());
  /* 11839e06 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11839e09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839e0b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11839e0d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11839e0f not eax */
  EAX = (~(EAX));
  /* 11839e11 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11839e13:;
  /* 11839e13 pop esi */
  ESI = (pop32());
  /* 11839e14 pop ebx */
  EBX = (pop32());
  /* 11839e15 pop ebp */
  EBP = (pop32());
  /* 11839e16 ret  */
  ESPCHK(0x11839d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e17 @ 0x11839e17 (43 bytes, 23 insns) */
void f_11839e17(void) {
  FTRACE(0x11839e17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839e17 push esi */
  push32((uint32_t)(ESI));
  /* 11839e18 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11839e1c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11839e1e je 0x11839e3e */
  if (C.zf) goto L_11839e3e;
  /* 11839e20 push esi */
  push32((uint32_t)(ESI));
  /* 11839e21 call 0x11836bc0 */
  push32(0x11839e26u); f_11836bc0();
  /* 11839e26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11839e27 push eax */
  push32((uint32_t)(EAX));
  /* 11839e28 call 0x11832d7d */
  push32(0x11839e2du); f_11832d7d();
  /* 11839e2d pop ecx */
  ECX = (pop32());
  /* 11839e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11839e30 pop ecx */
  ECX = (pop32());
  /* 11839e31 je 0x11839e3e */
  if (C.zf) goto L_11839e3e;
  /* 11839e33 push esi */
  push32((uint32_t)(ESI));
  /* 11839e34 push eax */
  push32((uint32_t)(EAX));
  /* 11839e35 call 0x11836a70 */
  push32(0x11839e3au); f_11836a70();
  /* 11839e3a pop ecx */
  ECX = (pop32());
  /* 11839e3b pop ecx */
  ECX = (pop32());
  /* 11839e3c pop esi */
  ESI = (pop32());
  /* 11839e3d ret  */
  ESPCHK(0x11839e17u, _esp0);
  ESP += 4; return;
L_11839e3e:;
  /* 11839e3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11839e40 pop esi */
  ESI = (pop32());
  /* 11839e41 ret  */
  ESPCHK(0x11839e17u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11839e42 (6 bytes, 1 insns) */
void f_11839e42(void) {
  FTRACE(0x11839e42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11839e42 jmp dword ptr [0x1183a0ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1183a0ac)))); return;
}

