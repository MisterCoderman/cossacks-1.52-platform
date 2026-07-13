#include "recomp.h"

/* FUN_10009175 @ 0x10149175 (53 bytes, 25 insns) */
void f_10149175(void) {
  FTRACE(0x10149175u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149175 push ebp */
  push32((uint32_t)(EBP));
  /* 10149176 mov ebp, esp */
  EBP = (ESP);
  /* 10149178 push ecx */
  push32((uint32_t)(ECX));
  /* 10149179 push esi */
  push32((uint32_t)(ESI));
  /* 1014917a wait  */
  /* wait (no observable integer/reg state) */
  /* 1014917b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1014917e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10149181 call 0x101491c0 */
  push32(0x10149186u); f_101491c0();
  /* 10149186 mov esi, eax */
  ESI = (EAX);
  /* 10149188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014918b not eax */
  EAX = (~(EAX));
  /* 1014918d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1014918f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149192 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10149195 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10149197 push esi */
  push32((uint32_t)(ESI));
  /* 10149198 call 0x10149252 */
  push32(0x1014919du); f_10149252();
  /* 1014919d pop ecx */
  ECX = (pop32());
  /* 1014919e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101491a1 pop ecx */
  ECX = (pop32());
  /* 101491a2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 101491a5 mov eax, esi */
  EAX = (ESI);
  /* 101491a7 pop esi */
  ESI = (pop32());
  /* 101491a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101491a9 ret  */
  ESPCHK(0x10149175u, _esp0);
  ESP += 4; return;
}

/* FUN_100091aa @ 0x101491aa (22 bytes, 8 insns) */
void f_101491aa(void) {
  FTRACE(0x101491aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101491aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101491ae and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101491b3 push eax */
  push32((uint32_t)(EAX));
  /* 101491b4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101491b8 call 0x10149175 */
  push32(0x101491bdu); f_10149175();
  /* 101491bd pop ecx */
  ECX = (pop32());
  /* 101491be pop ecx */
  ECX = (pop32());
  /* 101491bf ret  */
  ESPCHK(0x101491aau, _esp0);
  ESP += 4; return;
}

/* FUN_100091c0 @ 0x101491c0 (146 bytes, 58 insns) */
void f_101491c0(void) {
  FTRACE(0x101491c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101491c0 push ebx */
  push32((uint32_t)(EBX));
  /* 101491c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101491c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101491c7 push ebp */
  push32((uint32_t)(EBP));
  /* 101491c8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101491cb push edi */
  push32((uint32_t)(EDI));
  /* 101491cc je 0x101491d1 */
  if (C.zf) goto L_101491d1;
  /* 101491ce push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101491d0 pop eax */
  EAX = (pop32());
L_101491d1:;
  /* 101491d1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101491d4 je 0x101491d8 */
  if (C.zf) goto L_101491d8;
  /* 101491d6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101491d8:;
  /* 101491d8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101491db je 0x101491df */
  if (C.zf) goto L_101491df;
  /* 101491dd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101491df:;
  /* 101491df test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101491e2 je 0x101491e6 */
  if (C.zf) goto L_101491e6;
  /* 101491e4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101491e6:;
  /* 101491e6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101491e9 je 0x101491ed */
  if (C.zf) goto L_101491ed;
  /* 101491eb or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101491ed:;
  /* 101491ed test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101491f0 je 0x101491f7 */
  if (C.zf) goto L_101491f7;
  /* 101491f2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101491f7:;
  /* 101491f7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101491fa push esi */
  push32((uint32_t)(ESI));
  /* 101491fb mov edx, ecx */
  EDX = (ECX);
  /* 101491fd mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10149202 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10149207 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10149209 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 1014920e je 0x1014922f */
  if (C.zf) goto L_1014922f;
  /* 10149210 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149216 je 0x1014922c */
  if (C.zf) goto L_1014922c;
  /* 10149218 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014921e je 0x10149228 */
  if (C.zf) goto L_10149228;
  /* 10149220 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149222 jne 0x1014922f */
  if (!C.zf) goto L_1014922f;
  /* 10149224 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10149226 jmp 0x1014922f */
  goto L_1014922f;
L_10149228:;
  /* 10149228 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1014922a jmp 0x1014922f */
  goto L_1014922f;
L_1014922c:;
  /* 1014922c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1014922f:;
  /* 1014922f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10149231 pop esi */
  ESI = (pop32());
  /* 10149232 je 0x1014923f */
  if (C.zf) goto L_1014923f;
  /* 10149234 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149236 jne 0x10149244 */
  if (!C.zf) goto L_10149244;
  /* 10149238 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1014923d jmp 0x10149244 */
  goto L_10149244;
L_1014923f:;
  /* 1014923f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10149244:;
  /* 10149244 pop edi */
  EDI = (pop32());
  /* 10149245 pop ebp */
  EBP = (pop32());
  /* 10149246 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10149249 pop ebx */
  EBX = (pop32());
  /* 1014924a je 0x10149251 */
  if (C.zf) goto L_10149251;
  /* 1014924c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10149251:;
  /* 10149251 ret  */
  ESPCHK(0x101491c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009252 @ 0x10149252 (137 bytes, 53 insns) */
void f_10149252(void) {
  FTRACE(0x10149252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149252 push ebx */
  push32((uint32_t)(EBX));
  /* 10149253 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149259 push esi */
  push32((uint32_t)(ESI));
  /* 1014925a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1014925d je 0x10149262 */
  if (C.zf) goto L_10149262;
  /* 1014925f push 1 */
  push32((uint32_t)(0x1u));
  /* 10149261 pop eax */
  EAX = (pop32());
L_10149262:;
  /* 10149262 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10149265 je 0x10149269 */
  if (C.zf) goto L_10149269;
  /* 10149267 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10149269:;
  /* 10149269 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1014926c je 0x10149270 */
  if (C.zf) goto L_10149270;
  /* 1014926e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10149270:;
  /* 10149270 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10149273 je 0x10149277 */
  if (C.zf) goto L_10149277;
  /* 10149275 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10149277:;
  /* 10149277 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1014927a je 0x1014927e */
  if (C.zf) goto L_1014927e;
  /* 1014927c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1014927e:;
  /* 1014927e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10149284 je 0x10149288 */
  if (C.zf) goto L_10149288;
  /* 10149286 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10149288:;
  /* 10149288 mov ecx, ebx */
  ECX = (EBX);
  /* 1014928a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1014928f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10149291 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10149296 je 0x101492b5 */
  if (C.zf) goto L_101492b5;
  /* 10149298 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014929e je 0x101492b2 */
  if (C.zf) goto L_101492b2;
  /* 101492a0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101492a2 je 0x101492ad */
  if (C.zf) goto L_101492ad;
  /* 101492a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101492a6 jne 0x101492b5 */
  if (!C.zf) goto L_101492b5;
  /* 101492a8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101492ab jmp 0x101492b5 */
  goto L_101492b5;
L_101492ad:;
  /* 101492ad or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101492b0 jmp 0x101492b5 */
  goto L_101492b5;
L_101492b2:;
  /* 101492b2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101492b5:;
  /* 101492b5 mov ecx, ebx */
  ECX = (EBX);
  /* 101492b7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101492bd je 0x101492cb */
  if (C.zf) goto L_101492cb;
  /* 101492bf cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101492c5 jne 0x101492cd */
  if (!C.zf) goto L_101492cd;
  /* 101492c7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101492c9 jmp 0x101492cd */
  goto L_101492cd;
L_101492cb:;
  /* 101492cb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101492cd:;
  /* 101492cd pop esi */
  ESI = (pop32());
  /* 101492ce test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101492d4 pop ebx */
  EBX = (pop32());
  /* 101492d5 je 0x101492da */
  if (C.zf) goto L_101492da;
  /* 101492d7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101492da:;
  /* 101492da ret  */
  ESPCHK(0x10149252u, _esp0);
  ESP += 4; return;
}

/* FUN_100092db @ 0x101492db (117 bytes, 46 insns) */
void f_101492db(void) {
  FTRACE(0x101492dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101492db push ebp */
  push32((uint32_t)(EBP));
  /* 101492dc mov ebp, esp */
  EBP = (ESP);
  /* 101492de push ecx */
  push32((uint32_t)(ECX));
  /* 101492df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101492e2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101492e5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101492eb ja 0x101492f9 */
  if ((!C.cf&&!C.zf)) goto L_101492f9;
  /* 101492ed mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 101492f3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101492f7 jmp 0x1014934b */
  goto L_1014934b;
L_101492f9:;
  /* 101492f9 mov ecx, eax */
  ECX = (EAX);
  /* 101492fb push esi */
  push32((uint32_t)(ESI));
  /* 101492fc mov esi, dword ptr [0x101509b0] */
  ESI = (r32((uint32_t)(0x101509b0)));
  /* 10149302 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10149305 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10149308 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1014930d pop esi */
  ESI = (pop32());
  /* 1014930e je 0x1014931e */
  if (C.zf) goto L_1014931e;
  /* 10149310 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10149314 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10149317 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1014931a push 2 */
  push32((uint32_t)(0x2u));
  /* 1014931c jmp 0x10149327 */
  goto L_10149327;
L_1014931e:;
  /* 1014931e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10149322 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10149325 push 1 */
  push32((uint32_t)(0x1u));
L_10149327:;
  /* 10149327 pop eax */
  EAX = (pop32());
  /* 10149328 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1014932b push 1 */
  push32((uint32_t)(0x1u));
  /* 1014932d push 0 */
  push32((uint32_t)(0x0u));
  /* 1014932f push 0 */
  push32((uint32_t)(0x0u));
  /* 10149331 push ecx */
  push32((uint32_t)(ECX));
  /* 10149332 push eax */
  push32((uint32_t)(EAX));
  /* 10149333 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10149336 push eax */
  push32((uint32_t)(EAX));
  /* 10149337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149339 call 0x1014c18d */
  push32(0x1014933eu); f_1014c18d();
  /* 1014933e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10149343 jne 0x10149347 */
  if (!C.zf) goto L_10149347;
  /* 10149345 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149346 ret  */
  ESPCHK(0x101492dbu, _esp0);
  ESP += 4; return;
L_10149347:;
  /* 10149347 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1014934b:;
  /* 1014934b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1014934e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014934f ret  */
  ESPCHK(0x101492dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009350 @ 0x10149350 (111 bytes, 44 insns) */
void f_10149350(void) {
  FTRACE(0x10149350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149350 push ebx */
  push32((uint32_t)(EBX));
  /* 10149351 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10149353 cmp dword ptr [0x10156818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149359 jne 0x1014936e */
  if (!C.zf) goto L_1014936e;
  /* 1014935b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014935f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149362 jl 0x101493bd */
  if ((C.sf!=C.of)) goto L_101493bd;
  /* 10149364 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149367 jg 0x101493bd */
  if ((!C.zf&&C.sf==C.of)) goto L_101493bd;
  /* 10149369 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014936c pop ebx */
  EBX = (pop32());
  /* 1014936d ret  */
  ESPCHK(0x10149350u, _esp0);
  ESP += 4; return;
L_1014936e:;
  /* 1014936e push esi */
  push32((uint32_t)(ESI));
  /* 1014936f mov esi, 0x10156994 */
  ESI = (0x10156994u);
  /* 10149374 push edi */
  push32((uint32_t)(EDI));
  /* 10149375 push esi */
  push32((uint32_t)(ESI));
  /* 10149376 call dword ptr [0x1014e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e090))), 0x1014937cu);
  /* 1014937c cmp dword ptr [0x10156990], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156990))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149382 mov edi, dword ptr [0x1014e08c] */
  EDI = (r32((uint32_t)(0x1014e08c)));
  /* 10149388 je 0x10149398 */
  if (C.zf) goto L_10149398;
  /* 1014938a push esi */
  push32((uint32_t)(ESI));
  /* 1014938b call edi */
  call_ind((uint32_t)(EDI), 0x1014938du);
  /* 1014938d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014938f call 0x10149f23 */
  push32(0x10149394u); f_10149f23();
  /* 10149394 pop ecx */
  ECX = (pop32());
  /* 10149395 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149397 pop ebx */
  EBX = (pop32());
L_10149398:;
  /* 10149398 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1014939c call 0x101493bf */
  push32(0x101493a1u); f_101493bf();
  /* 101493a1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101493a3 pop ecx */
  ECX = (pop32());
  /* 101493a4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101493a8 je 0x101493b4 */
  if (C.zf) goto L_101493b4;
  /* 101493aa push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101493ac call 0x10149f84 */
  push32(0x101493b1u); f_10149f84();
  /* 101493b1 pop ecx */
  ECX = (pop32());
  /* 101493b2 jmp 0x101493b7 */
  goto L_101493b7;
L_101493b4:;
  /* 101493b4 push esi */
  push32((uint32_t)(ESI));
  /* 101493b5 call edi */
  call_ind((uint32_t)(EDI), 0x101493b7u);
L_101493b7:;
  /* 101493b7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101493bb pop edi */
  EDI = (pop32());
  /* 101493bc pop esi */
  ESI = (pop32());
L_101493bd:;
  /* 101493bd pop ebx */
  EBX = (pop32());
  /* 101493be ret  */
  ESPCHK(0x10149350u, _esp0);
  ESP += 4; return;
}

/* FUN_100093bf @ 0x101493bf (203 bytes, 78 insns) */
void f_101493bf(void) {
  FTRACE(0x101493bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101493bf push ebp */
  push32((uint32_t)(EBP));
  /* 101493c0 mov ebp, esp */
  EBP = (ESP);
  /* 101493c2 push ecx */
  push32((uint32_t)(ECX));
  /* 101493c3 cmp dword ptr [0x10156818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101493ca push ebx */
  push32((uint32_t)(EBX));
  /* 101493cb push esi */
  push32((uint32_t)(ESI));
  /* 101493cc push edi */
  push32((uint32_t)(EDI));
  /* 101493cd jne 0x101493ec */
  if (!C.zf) goto L_101493ec;
  /* 101493cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101493d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101493d5 jl 0x10149485 */
  if ((C.sf!=C.of)) goto L_10149485;
  /* 101493db cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101493de jg 0x10149485 */
  if ((!C.zf&&C.sf==C.of)) goto L_10149485;
  /* 101493e4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101493e7 jmp 0x10149485 */
  goto L_10149485;
L_101493ec:;
  /* 101493ec mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101493ef mov edi, 0x100 */
  EDI = (0x100u);
  /* 101493f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101493f6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101493f8 pop esi */
  ESI = (pop32());
  /* 101493f9 jge 0x10149420 */
  if ((C.sf==C.of)) goto L_10149420;
  /* 101493fb cmp dword ptr [0x10150bc0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149401 jle 0x1014940e */
  if ((C.zf||C.sf!=C.of)) goto L_1014940e;
  /* 10149403 push esi */
  push32((uint32_t)(ESI));
  /* 10149404 push ebx */
  push32((uint32_t)(EBX));
  /* 10149405 call 0x101492db */
  push32(0x1014940au); f_101492db();
  /* 1014940a pop ecx */
  ECX = (pop32());
  /* 1014940b pop ecx */
  ECX = (pop32());
  /* 1014940c jmp 0x10149418 */
  goto L_10149418;
L_1014940e:;
  /* 1014940e mov eax, dword ptr [0x101509b0] */
  EAX = (r32((uint32_t)(0x101509b0)));
  /* 10149413 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10149416 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10149418:;
  /* 10149418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014941a jne 0x10149420 */
  if (!C.zf) goto L_10149420;
L_1014941c:;
  /* 1014941c mov eax, ebx */
  EAX = (EBX);
  /* 1014941e jmp 0x10149485 */
  goto L_10149485;
L_10149420:;
  /* 10149420 mov edx, dword ptr [0x101509b0] */
  EDX = (r32((uint32_t)(0x101509b0)));
  /* 10149426 mov eax, ebx */
  EAX = (EBX);
  /* 10149428 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1014942b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1014942e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10149433 je 0x10149444 */
  if (C.zf) goto L_10149444;
  /* 10149435 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10149439 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014943b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1014943e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10149441 pop eax */
  EAX = (pop32());
  /* 10149442 jmp 0x1014944d */
  goto L_1014944d;
L_10149444:;
  /* 10149444 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10149448 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1014944b mov eax, esi */
  EAX = (ESI);
L_1014944d:;
  /* 1014944d push esi */
  push32((uint32_t)(ESI));
  /* 1014944e push 0 */
  push32((uint32_t)(0x0u));
  /* 10149450 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10149453 push 3 */
  push32((uint32_t)(0x3u));
  /* 10149455 push ecx */
  push32((uint32_t)(ECX));
  /* 10149456 push eax */
  push32((uint32_t)(EAX));
  /* 10149457 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1014945a push eax */
  push32((uint32_t)(EAX));
  /* 1014945b push edi */
  push32((uint32_t)(EDI));
  /* 1014945c push dword ptr [0x10156818] */
  push32((uint32_t)(r32((uint32_t)(0x10156818))));
  /* 10149462 call 0x1014c2d6 */
  push32(0x10149467u); f_1014c2d6();
  /* 10149467 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014946a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014946c je 0x1014941c */
  if (C.zf) goto L_1014941c;
  /* 1014946e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149470 jne 0x10149478 */
  if (!C.zf) goto L_10149478;
  /* 10149472 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10149476 jmp 0x10149485 */
  goto L_10149485;
L_10149478:;
  /* 10149478 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1014947c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10149480 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10149483 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10149485:;
  /* 10149485 pop edi */
  EDI = (pop32());
  /* 10149486 pop esi */
  ESI = (pop32());
  /* 10149487 pop ebx */
  EBX = (pop32());
  /* 10149488 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149489 ret  */
  ESPCHK(0x101493bfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000948a @ 0x1014948a (73 bytes, 36 insns) */
void f_1014948a(void) {
  FTRACE(0x1014948au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014948a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014948e push esi */
  push32((uint32_t)(ESI));
  /* 1014948f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10149491 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10149492 pop ecx */
  ECX = (pop32());
  /* 10149493 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149495 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10149497 mov esi, eax */
  ESI = (EAX);
  /* 10149499 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014949d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1014949e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101494a0 pop ecx */
  ECX = (pop32());
  /* 101494a1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101494a5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101494a7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101494aa shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101494ac not edx */
  EDX = (~(EDX));
  /* 101494ae test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101494b1 jne 0x101494cf */
  if (!C.zf) goto L_101494cf;
  /* 101494b3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101494b4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101494b7 jge 0x101494ca */
  if ((C.sf==C.of)) goto L_101494ca;
  /* 101494b9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101494bc:;
  /* 101494bc cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101494bf jne 0x101494cf */
  if (!C.zf) goto L_101494cf;
  /* 101494c1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101494c2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101494c5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101494c8 jl 0x101494bc */
  if ((C.sf!=C.of)) goto L_101494bc;
L_101494ca:;
  /* 101494ca push 1 */
  push32((uint32_t)(0x1u));
  /* 101494cc pop eax */
  EAX = (pop32());
  /* 101494cd pop esi */
  ESI = (pop32());
  /* 101494ce ret  */
  ESPCHK(0x1014948au, _esp0);
  ESP += 4; return;
L_101494cf:;
  /* 101494cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101494d1 pop esi */
  ESI = (pop32());
  /* 101494d2 ret  */
  ESPCHK(0x1014948au, _esp0);
  ESP += 4; return;
}

/* FUN_100094d3 @ 0x101494d3 (86 bytes, 43 insns) */
void f_101494d3(void) {
  FTRACE(0x101494d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101494d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101494d7 push ebx */
  push32((uint32_t)(EBX));
  /* 101494d8 push esi */
  push32((uint32_t)(ESI));
  /* 101494d9 push edi */
  push32((uint32_t)(EDI));
  /* 101494da push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101494dc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101494e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101494e1 pop ecx */
  ECX = (pop32());
  /* 101494e2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101494e4 mov esi, eax */
  ESI = (EAX);
  /* 101494e6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101494ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101494eb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101494ed lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101494f0 push edi */
  push32((uint32_t)(EDI));
  /* 101494f1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101494f3 pop ecx */
  ECX = (pop32());
  /* 101494f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101494f6 pop eax */
  EAX = (pop32());
  /* 101494f7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101494f9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101494fb push eax */
  push32((uint32_t)(EAX));
  /* 101494fc push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101494fe call 0x1014c525 */
  push32(0x10149503u); f_1014c525();
  /* 10149503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149506 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10149507 js 0x10149525 */
  if (C.sf) goto L_10149525;
  /* 10149509 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1014950c:;
  /* 1014950c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014950e je 0x10149525 */
  if (C.zf) goto L_10149525;
  /* 10149510 push edi */
  push32((uint32_t)(EDI));
  /* 10149511 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149513 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10149515 call 0x1014c525 */
  push32(0x1014951au); f_1014c525();
  /* 1014951a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014951d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1014951e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149521 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10149523 jge 0x1014950c */
  if ((C.sf==C.of)) goto L_1014950c;
L_10149525:;
  /* 10149525 pop edi */
  EDI = (pop32());
  /* 10149526 pop esi */
  ESI = (pop32());
  /* 10149527 pop ebx */
  EBX = (pop32());
  /* 10149528 ret  */
  ESPCHK(0x101494d3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009529 @ 0x10149529 (140 bytes, 71 insns) */
void f_10149529(void) {
  FTRACE(0x10149529u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149529 push ebp */
  push32((uint32_t)(EBP));
  /* 1014952a mov ebp, esp */
  EBP = (ESP);
  /* 1014952c push ecx */
  push32((uint32_t)(ECX));
  /* 1014952d push ecx */
  push32((uint32_t)(ECX));
  /* 1014952e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10149531 push ebx */
  push32((uint32_t)(EBX));
  /* 10149532 push esi */
  push32((uint32_t)(ESI));
  /* 10149533 push edi */
  push32((uint32_t)(EDI));
  /* 10149534 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10149537 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10149539 pop ecx */
  ECX = (pop32());
  /* 1014953a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014953e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10149541 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10149543 mov eax, ebx */
  EAX = (EBX);
  /* 10149545 pop esi */
  ESI = (pop32());
  /* 10149546 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10149547 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149549 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1014954b mov ecx, eax */
  ECX = (EAX);
  /* 1014954d mov eax, ebx */
  EAX = (EBX);
  /* 1014954f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10149550 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149555 pop esi */
  ESI = (pop32());
  /* 10149556 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149558 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1014955b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1014955e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10149561 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149563 pop edx */
  EDX = (pop32());
  /* 10149564 mov ecx, esi */
  ECX = (ESI);
  /* 10149566 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10149568 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1014956a je 0x1014958d */
  if (C.zf) goto L_1014958d;
  /* 1014956c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014956d push ebx */
  push32((uint32_t)(EBX));
  /* 1014956e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10149571 call 0x1014948a */
  push32(0x10149576u); f_1014948a();
  /* 10149576 pop ecx */
  ECX = (pop32());
  /* 10149577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10149579 pop ecx */
  ECX = (pop32());
  /* 1014957a jne 0x1014958a */
  if (!C.zf) goto L_1014958a;
  /* 1014957c push edi */
  push32((uint32_t)(EDI));
  /* 1014957d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10149580 call 0x101494d3 */
  push32(0x10149585u); f_101494d3();
  /* 10149585 pop ecx */
  ECX = (pop32());
  /* 10149586 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10149589 pop ecx */
  ECX = (pop32());
L_1014958a:;
  /* 1014958a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1014958d:;
  /* 1014958d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10149590 mov ecx, esi */
  ECX = (ESI);
  /* 10149592 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10149594 push 3 */
  push32((uint32_t)(0x3u));
  /* 10149596 pop ecx */
  ECX = (pop32());
  /* 10149597 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10149599 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014959c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014959d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014959f jge 0x101495ad */
  if ((C.sf==C.of)) goto L_101495ad;
  /* 101495a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101495a4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101495a6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101495a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101495ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_101495ad:;
  /* 101495ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101495b0 pop edi */
  EDI = (pop32());
  /* 101495b1 pop esi */
  ESI = (pop32());
  /* 101495b2 pop ebx */
  EBX = (pop32());
  /* 101495b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101495b4 ret  */
  ESPCHK(0x10149529u, _esp0);
  ESP += 4; return;
}

/* FUN_100095b5 @ 0x101495b5 (27 bytes, 13 insns) */
void f_101495b5(void) {
  FTRACE(0x101495b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101495b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101495b9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101495bd push esi */
  push32((uint32_t)(ESI));
  /* 101495be push 3 */
  push32((uint32_t)(0x3u));
  /* 101495c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101495c2 pop edx */
  EDX = (pop32());
L_101495c3:;
  /* 101495c3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101495c5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101495c8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101495cb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101495cc jne 0x101495c3 */
  if (!C.zf) goto L_101495c3;
  /* 101495ce pop esi */
  ESI = (pop32());
  /* 101495cf ret  */
  ESPCHK(0x101495b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x101495d0 (12 bytes, 8 insns) */
void f_101495d0(void) {
  FTRACE(0x101495d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101495d0 push edi */
  push32((uint32_t)(EDI));
  /* 101495d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101495d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101495d7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101495d8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101495d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101495da pop edi */
  EDI = (pop32());
  /* 101495db ret  */
  ESPCHK(0x101495d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095dc @ 0x101495dc (27 bytes, 13 insns) */
void f_101495dc(void) {
  FTRACE(0x101495dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101495dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101495e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101495e2:;
  /* 101495e2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101495e5 jne 0x101495f4 */
  if (!C.zf) goto L_101495f4;
  /* 101495e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101495e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101495eb cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101495ee jl 0x101495e2 */
  if ((C.sf!=C.of)) goto L_101495e2;
  /* 101495f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101495f2 pop eax */
  EAX = (pop32());
  /* 101495f3 ret  */
  ESPCHK(0x101495dcu, _esp0);
  ESP += 4; return;
L_101495f4:;
  /* 101495f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101495f6 ret  */
  ESPCHK(0x101495dcu, _esp0);
  ESP += 4; return;
}

/* FUN_100095f7 @ 0x101495f7 (141 bytes, 64 insns) */
void f_101495f7(void) {
  FTRACE(0x101495f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101495f7 push ebp */
  push32((uint32_t)(EBP));
  /* 101495f8 mov ebp, esp */
  EBP = (ESP);
  /* 101495fa sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101495fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10149600 push ebx */
  push32((uint32_t)(EBX));
  /* 10149601 push esi */
  push32((uint32_t)(ESI));
  /* 10149602 push edi */
  push32((uint32_t)(EDI));
  /* 10149603 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10149605 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10149608 pop ebx */
  EBX = (pop32());
  /* 10149609 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1014960c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1014960d mov ecx, ebx */
  ECX = (EBX);
  /* 1014960f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10149616 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149618 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1014961b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014961e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1014961f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149621 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10149625 mov ecx, edx */
  ECX = (EDX);
  /* 10149627 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10149629 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014962b not esi */
  ESI = (~(ESI));
L_1014962d:;
  /* 1014962d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014962f mov ecx, eax */
  ECX = (EAX);
  /* 10149631 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10149633 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10149636 mov ecx, edx */
  ECX = (EDX);
  /* 10149638 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1014963a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1014963d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1014963f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10149642 mov ecx, ebx */
  ECX = (EBX);
  /* 10149644 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149647 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10149649 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1014964c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1014964f jne 0x1014962d */
  if (!C.zf) goto L_1014962d;
  /* 10149651 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10149654 push 2 */
  push32((uint32_t)(0x2u));
  /* 10149656 pop ebx */
  EBX = (pop32());
  /* 10149657 mov esi, edi */
  ESI = (EDI);
  /* 10149659 push 8 */
  push32((uint32_t)(0x8u));
  /* 1014965b pop ecx */
  ECX = (pop32());
  /* 1014965c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1014965f:;
  /* 1014965f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149661 jl 0x10149672 */
  if ((C.sf!=C.of)) goto L_10149672;
  /* 10149663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149666 mov eax, ecx */
  EAX = (ECX);
  /* 10149668 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014966a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1014966d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10149670 jmp 0x10149679 */
  goto L_10149679;
L_10149672:;
  /* 10149672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149675 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10149679:;
  /* 10149679 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1014967a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014967d jns 0x1014965f */
  if (!C.sf) goto L_1014965f;
  /* 1014967f pop edi */
  EDI = (pop32());
  /* 10149680 pop esi */
  ESI = (pop32());
  /* 10149681 pop ebx */
  EBX = (pop32());
  /* 10149682 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149683 ret  */
  ESPCHK(0x101495f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009684 @ 0x10149684 (364 bytes, 138 insns) */
void f_10149684(void) {
  FTRACE(0x10149684u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149684 push ebp */
  push32((uint32_t)(EBP));
  /* 10149685 mov ebp, esp */
  EBP = (ESP);
  /* 10149687 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014968a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014968d push ebx */
  push32((uint32_t)(EBX));
  /* 1014968e push esi */
  push32((uint32_t)(ESI));
  /* 1014968f push edi */
  push32((uint32_t)(EDI));
  /* 10149690 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10149694 mov ebx, ecx */
  EBX = (ECX);
  /* 10149696 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1014969c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1014969f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 101496a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101496a5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 101496a8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101496ab mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101496ae and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101496b4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101496ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101496bd shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101496c0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101496c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101496c9 jne 0x101496f1 */
  if (!C.zf) goto L_101496f1;
  /* 101496cb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101496ce xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101496d0 push eax */
  push32((uint32_t)(EAX));
  /* 101496d1 call 0x101495dc */
  push32(0x101496d6u); f_101495dc();
  /* 101496d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101496d8 pop ecx */
  ECX = (pop32());
  /* 101496d9 jne 0x101497b0 */
  if (!C.zf) goto L_101497b0;
  /* 101496df lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101496e2 push eax */
  push32((uint32_t)(EAX));
  /* 101496e3 call 0x101495d0 */
  push32(0x101496e8u); f_101495d0();
  /* 101496e8 pop ecx */
  ECX = (pop32());
L_101496e9:;
  /* 101496e9 push 2 */
  push32((uint32_t)(0x2u));
L_101496eb:;
  /* 101496eb pop eax */
  EAX = (pop32());
  /* 101496ec jmp 0x101497b2 */
  goto L_101497b2;
L_101496f1:;
  /* 101496f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101496f4 push eax */
  push32((uint32_t)(EAX));
  /* 101496f5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101496f8 push eax */
  push32((uint32_t)(EAX));
  /* 101496f9 call 0x101495b5 */
  push32(0x101496feu); f_101495b5();
  /* 101496fe push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10149701 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149704 push eax */
  push32((uint32_t)(EAX));
  /* 10149705 call 0x10149529 */
  push32(0x1014970au); f_10149529();
  /* 1014970a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014970d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014970f je 0x10149712 */
  if (C.zf) goto L_10149712;
  /* 10149711 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10149712:;
  /* 10149712 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10149715 mov ecx, eax */
  ECX = (EAX);
  /* 10149717 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014971a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014971c jge 0x1014972a */
  if ((C.sf==C.of)) goto L_1014972a;
  /* 1014971e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149721 push eax */
  push32((uint32_t)(EAX));
  /* 10149722 call 0x101495d0 */
  push32(0x10149727u); f_101495d0();
  /* 10149727 pop ecx */
  ECX = (pop32());
  /* 10149728 jmp 0x10149766 */
  goto L_10149766;
L_1014972a:;
  /* 1014972a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014972c jg 0x1014976d */
  if ((!C.zf&&C.sf==C.of)) goto L_1014976d;
  /* 1014972e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149730 mov esi, eax */
  ESI = (EAX);
  /* 10149732 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10149735 push eax */
  push32((uint32_t)(EAX));
  /* 10149736 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149739 push eax */
  push32((uint32_t)(EAX));
  /* 1014973a call 0x101495b5 */
  push32(0x1014973fu); f_101495b5();
  /* 1014973f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149742 push esi */
  push32((uint32_t)(ESI));
  /* 10149743 push eax */
  push32((uint32_t)(EAX));
  /* 10149744 call 0x101495f7 */
  push32(0x10149749u); f_101495f7();
  /* 10149749 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1014974c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1014974f push eax */
  push32((uint32_t)(EAX));
  /* 10149750 call 0x10149529 */
  push32(0x10149755u); f_10149529();
  /* 10149755 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10149758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10149759 push eax */
  push32((uint32_t)(EAX));
  /* 1014975a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1014975d push eax */
  push32((uint32_t)(EAX));
  /* 1014975e call 0x101495f7 */
  push32(0x10149763u); f_101495f7();
  /* 10149763 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10149766:;
  /* 10149766 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10149768 jmp 0x101496e9 */
  goto L_101496e9;
L_1014976d:;
  /* 1014976d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014976f jl 0x10149799 */
  if ((C.sf!=C.of)) goto L_10149799;
  /* 10149771 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149774 push eax */
  push32((uint32_t)(EAX));
  /* 10149775 call 0x101495d0 */
  push32(0x1014977au); f_101495d0();
  /* 1014977a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1014977d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10149781 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149784 push eax */
  push32((uint32_t)(EAX));
  /* 10149785 call 0x101495f7 */
  push32(0x1014978au); f_101495f7();
  /* 1014978a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1014978d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149790 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149792 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149794 jmp 0x101496eb */
  goto L_101496eb;
L_10149799:;
  /* 10149799 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1014979c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1014979f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101497a3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101497a6 push eax */
  push32((uint32_t)(EAX));
  /* 101497a7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101497a9 call 0x101495f7 */
  push32(0x101497aeu); f_101495f7();
  /* 101497ae pop ecx */
  ECX = (pop32());
  /* 101497af pop ecx */
  ECX = (pop32());
L_101497b0:;
  /* 101497b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101497b2:;
  /* 101497b2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101497b4 pop ecx */
  ECX = (pop32());
  /* 101497b5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101497b8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101497bb shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101497bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101497c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101497c2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101497c4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101497ca or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101497cc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101497cf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101497d2 jne 0x101497e1 */
  if (!C.zf) goto L_101497e1;
  /* 101497d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101497d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101497da mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101497dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101497df jmp 0x101497eb */
  goto L_101497eb;
L_101497e1:;
  /* 101497e1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101497e4 jne 0x101497eb */
  if (!C.zf) goto L_101497eb;
  /* 101497e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101497e9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101497eb:;
  /* 101497eb pop edi */
  EDI = (pop32());
  /* 101497ec pop esi */
  ESI = (pop32());
  /* 101497ed pop ebx */
  EBX = (pop32());
  /* 101497ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101497ef ret  */
  ESPCHK(0x10149684u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f0 @ 0x101497f0 (22 bytes, 6 insns) */
void f_101497f0(void) {
  FTRACE(0x101497f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101497f0 push 0x10150bd0 */
  push32((uint32_t)(0x10150bd0u));
  /* 101497f5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101497f9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101497fd call 0x10149684 */
  push32(0x10149802u); f_10149684();
  /* 10149802 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149805 ret  */
  ESPCHK(0x101497f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009806 @ 0x10149806 (22 bytes, 6 insns) */
void f_10149806(void) {
  FTRACE(0x10149806u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149806 push 0x10150be8 */
  push32((uint32_t)(0x10150be8u));
  /* 1014980b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1014980f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10149813 call 0x10149684 */
  push32(0x10149818u); f_10149684();
  /* 10149818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014981b ret  */
  ESPCHK(0x10149806u, _esp0);
  ESP += 4; return;
}

/* FUN_1000981c @ 0x1014981c (45 bytes, 21 insns) */
void f_1014981c(void) {
  FTRACE(0x1014981cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014981c push ebp */
  push32((uint32_t)(EBP));
  /* 1014981d mov ebp, esp */
  EBP = (ESP);
  /* 1014981f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149824 push eax */
  push32((uint32_t)(EAX));
  /* 10149825 push eax */
  push32((uint32_t)(EAX));
  /* 10149826 push eax */
  push32((uint32_t)(EAX));
  /* 10149827 push eax */
  push32((uint32_t)(EAX));
  /* 10149828 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014982b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1014982e push eax */
  push32((uint32_t)(EAX));
  /* 1014982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10149832 push eax */
  push32((uint32_t)(EAX));
  /* 10149833 call 0x1014c6c6 */
  push32(0x10149838u); f_1014c6c6();
  /* 10149838 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014983b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1014983e push eax */
  push32((uint32_t)(EAX));
  /* 1014983f call 0x101497f0 */
  push32(0x10149844u); f_101497f0();
  /* 10149844 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149847 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149848 ret  */
  ESPCHK(0x1014981cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009849 @ 0x10149849 (45 bytes, 21 insns) */
void f_10149849(void) {
  FTRACE(0x10149849u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149849 push ebp */
  push32((uint32_t)(EBP));
  /* 1014984a mov ebp, esp */
  EBP = (ESP);
  /* 1014984c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014984f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149851 push eax */
  push32((uint32_t)(EAX));
  /* 10149852 push eax */
  push32((uint32_t)(EAX));
  /* 10149853 push eax */
  push32((uint32_t)(EAX));
  /* 10149854 push eax */
  push32((uint32_t)(EAX));
  /* 10149855 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10149858 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1014985b push eax */
  push32((uint32_t)(EAX));
  /* 1014985c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1014985f push eax */
  push32((uint32_t)(EAX));
  /* 10149860 call 0x1014c6c6 */
  push32(0x10149865u); f_1014c6c6();
  /* 10149865 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10149868 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1014986b push eax */
  push32((uint32_t)(EAX));
  /* 1014986c call 0x10149806 */
  push32(0x10149871u); f_10149806();
  /* 10149871 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149874 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149875 ret  */
  ESPCHK(0x10149849u, _esp0);
  ESP += 4; return;
}

/* FUN_10009876 @ 0x10149876 (119 bytes, 57 insns) */
void f_10149876(void) {
  FTRACE(0x10149876u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149876 push ebp */
  push32((uint32_t)(EBP));
  /* 10149877 mov ebp, esp */
  EBP = (ESP);
  /* 10149879 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014987c push ebx */
  push32((uint32_t)(EBX));
  /* 1014987d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10149880 push esi */
  push32((uint32_t)(ESI));
  /* 10149881 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10149884 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10149887 push edi */
  push32((uint32_t)(EDI));
  /* 10149888 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1014988b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1014988e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10149890 mov eax, edi */
  EAX = (EDI);
  /* 10149892 jle 0x101498b3 */
  if ((C.zf||C.sf!=C.of)) goto L_101498b3;
  /* 10149894 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10149897 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10149899:;
  /* 10149899 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1014989b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014989d je 0x101498a5 */
  if (C.zf) goto L_101498a5;
  /* 1014989f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 101498a2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101498a3 jmp 0x101498a8 */
  goto L_101498a8;
L_101498a5:;
  /* 101498a5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101498a7 pop edx */
  EDX = (pop32());
L_101498a8:;
  /* 101498a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101498aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101498ab dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101498ae jne 0x10149899 */
  if (!C.zf) goto L_10149899;
  /* 101498b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101498b3:;
  /* 101498b3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101498b6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101498b8 jl 0x101498cc */
  if ((C.sf!=C.of)) goto L_101498cc;
  /* 101498ba cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101498bd jl 0x101498cc */
  if ((C.sf!=C.of)) goto L_101498cc;
L_101498bf:;
  /* 101498bf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101498c0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101498c3 jne 0x101498ca */
  if (!C.zf) goto L_101498ca;
  /* 101498c5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101498c8 jmp 0x101498bf */
  goto L_101498bf;
L_101498ca:;
  /* 101498ca inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101498cc:;
  /* 101498cc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101498cf jne 0x101498d6 */
  if (!C.zf) goto L_101498d6;
  /* 101498d1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101498d4 jmp 0x101498e8 */
  goto L_101498e8;
L_101498d6:;
  /* 101498d6 push edi */
  push32((uint32_t)(EDI));
  /* 101498d7 call 0x10148f50 */
  push32(0x101498dcu); f_10148f50();
  /* 101498dc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101498dd push eax */
  push32((uint32_t)(EAX));
  /* 101498de push edi */
  push32((uint32_t)(EDI));
  /* 101498df push esi */
  push32((uint32_t)(ESI));
  /* 101498e0 call 0x10149b50 */
  push32(0x101498e5u); f_10149b50();
  /* 101498e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101498e8:;
  /* 101498e8 pop edi */
  EDI = (pop32());
  /* 101498e9 pop esi */
  ESI = (pop32());
  /* 101498ea pop ebx */
  EBX = (pop32());
  /* 101498eb pop ebp */
  EBP = (pop32());
  /* 101498ec ret  */
  ESPCHK(0x10149876u, _esp0);
  ESP += 4; return;
}

/* FUN_100098ed @ 0x101498ed (92 bytes, 41 insns) */
void f_101498ed(void) {
  FTRACE(0x101498edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101498ed push ebp */
  push32((uint32_t)(EBP));
  /* 101498ee mov ebp, esp */
  EBP = (ESP);
  /* 101498f0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101498f3 push esi */
  push32((uint32_t)(ESI));
  /* 101498f4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101498f7 push edi */
  push32((uint32_t)(EDI));
  /* 101498f8 push eax */
  push32((uint32_t)(EAX));
  /* 101498f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101498fc push eax */
  push32((uint32_t)(EAX));
  /* 101498fd call 0x10149949 */
  push32(0x10149902u); f_10149949();
  /* 10149902 pop ecx */
  ECX = (pop32());
  /* 10149903 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10149906 pop ecx */
  ECX = (pop32());
  /* 10149907 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 1014990a push eax */
  push32((uint32_t)(EAX));
  /* 1014990b push 0 */
  push32((uint32_t)(0x0u));
  /* 1014990d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1014990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149912 mov edi, esp */
  EDI = (ESP);
  /* 10149914 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10149915 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10149916 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10149918 call 0x1014cb97 */
  push32(0x1014991du); f_1014cb97();
  /* 1014991d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10149920 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10149923 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10149926 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 1014992a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014992c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10149930 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10149933 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10149936 push eax */
  push32((uint32_t)(EAX));
  /* 10149937 push edi */
  push32((uint32_t)(EDI));
  /* 10149938 call 0x10149a00 */
  push32(0x1014993du); f_10149a00();
  /* 1014993d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10149940 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10149943 mov eax, esi */
  EAX = (ESI);
  /* 10149945 pop edi */
  EDI = (pop32());
  /* 10149946 pop esi */
  ESI = (pop32());
  /* 10149947 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149948 ret  */
  ESPCHK(0x101498edu, _esp0);
  ESP += 4; return;
}

/* FUN_10009949 @ 0x10149949 (182 bytes, 70 insns) */
void f_10149949(void) {
  FTRACE(0x10149949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149949 push ebp */
  push32((uint32_t)(EBP));
  /* 1014994a mov ebp, esp */
  EBP = (ESP);
  /* 1014994c push ecx */
  push32((uint32_t)(ECX));
  /* 1014994d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10149950 push ebx */
  push32((uint32_t)(EBX));
  /* 10149951 push esi */
  push32((uint32_t)(ESI));
  /* 10149952 push edi */
  push32((uint32_t)(EDI));
  /* 10149953 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10149957 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 1014995c mov ecx, eax */
  ECX = (EAX);
  /* 1014995e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10149963 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10149966 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10149968 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1014996b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014996e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10149970 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10149973 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10149978 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014997d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014997f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10149982 je 0x10149997 */
  if (C.zf) goto L_10149997;
  /* 10149984 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149986 je 0x10149990 */
  if (C.zf) goto L_10149990;
  /* 10149988 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 1014998e jmp 0x101499b8 */
  goto L_101499b8;
L_10149990:;
  /* 10149990 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10149995 jmp 0x101499b8 */
  goto L_101499b8;
L_10149997:;
  /* 10149997 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10149999 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014999b jne 0x101499af */
  if (!C.zf) goto L_101499af;
  /* 1014999d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014999f jne 0x101499af */
  if (!C.zf) goto L_101499af;
  /* 101499a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101499a4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101499a7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 101499a9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 101499ad jmp 0x101499fa */
  goto L_101499fa;
L_101499af:;
  /* 101499af lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 101499b5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_101499b8:;
  /* 101499b8 mov ecx, edx */
  ECX = (EDX);
  /* 101499ba shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 101499bd shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 101499c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 101499c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101499c5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 101499c8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 101499cb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101499ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_101499d0:;
  /* 101499d0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 101499d2 jne 0x101499f1 */
  if (!C.zf) goto L_101499f1;
  /* 101499d4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101499d6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101499d8 mov ebx, edx */
  EBX = (EDX);
  /* 101499da shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 101499dd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 101499df lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 101499e2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101499e4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101499e7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101499ed mov ecx, ebx */
  ECX = (EBX);
  /* 101499ef jmp 0x101499d0 */
  goto L_101499d0;
L_101499f1:;
  /* 101499f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101499f4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101499f6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_101499fa:;
  /* 101499fa pop edi */
  EDI = (pop32());
  /* 101499fb pop esi */
  ESI = (pop32());
  /* 101499fc pop ebx */
  EBX = (pop32());
  /* 101499fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101499fe ret  */
  ESPCHK(0x10149949u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a00 @ 0x10149a00 (7 bytes, 3 insns) */
void f_10149a00(void) {
  FTRACE(0x10149a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149a00 push edi */
  push32((uint32_t)(EDI));
  /* 10149a01 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10149a05 jmp 0x10149a71 */
  jmp_ind(0x10149a71u); return;
}

/* FUN_10009a10 @ 0x10149a10 (224 bytes, 84 insns) */
void f_10149a10(void) {
  FTRACE(0x10149a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149a10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10149a14 push edi */
  push32((uint32_t)(EDI));
  /* 10149a15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10149a1b je 0x10149a2c */
  if (C.zf) goto L_10149a2c;
L_10149a1d:;
  /* 10149a1d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10149a1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10149a20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10149a22 je 0x10149a5f */
  if (C.zf) goto L_10149a5f;
  /* 10149a24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10149a2a jne 0x10149a1d */
  if (!C.zf) goto L_10149a1d;
L_10149a2c:;
  /* 10149a2c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10149a2e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10149a33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149a35 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10149a38 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10149a3a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149a3d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10149a42 je 0x10149a2c */
  if (C.zf) goto L_10149a2c;
  /* 10149a44 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10149a47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10149a49 je 0x10149a6e */
  if (C.zf) goto L_10149a6e;
  /* 10149a4b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10149a4d je 0x10149a69 */
  if (C.zf) goto L_10149a69;
  /* 10149a4f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10149a54 je 0x10149a64 */
  if (C.zf) goto L_10149a64;
  /* 10149a56 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10149a5b je 0x10149a5f */
  if (C.zf) goto L_10149a5f;
  /* 10149a5d jmp 0x10149a2c */
  goto L_10149a2c;
L_10149a5f:;
  /* 10149a5f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10149a62 jmp 0x10149a71 */
  goto L_10149a71;
L_10149a64:;
  /* 10149a64 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10149a67 jmp 0x10149a71 */
  goto L_10149a71;
L_10149a69:;
  /* 10149a69 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10149a6c jmp 0x10149a71 */
  goto L_10149a71;
L_10149a6e:;
  /* 10149a6e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10149a71:;
  /* 10149a71 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10149a75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10149a7b je 0x10149a96 */
  if (C.zf) goto L_10149a96;
L_10149a7d:;
  /* 10149a7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10149a7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10149a80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10149a82 je 0x10149ae8 */
  if (C.zf) goto L_10149ae8;
  /* 10149a84 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10149a86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10149a87 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10149a8d jne 0x10149a7d */
  if (!C.zf) goto L_10149a7d;
  /* 10149a8f jmp 0x10149a96 */
  goto L_10149a96;
L_10149a91:;
  /* 10149a91 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10149a93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10149a96:;
  /* 10149a96 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10149a9b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10149a9d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149a9f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10149aa2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10149aa4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10149aa6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149aa9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10149aae je 0x10149a91 */
  if (C.zf) goto L_10149a91;
  /* 10149ab0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10149ab2 je 0x10149ae8 */
  if (C.zf) goto L_10149ae8;
  /* 10149ab4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10149ab6 je 0x10149adf */
  if (C.zf) goto L_10149adf;
  /* 10149ab8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10149abe je 0x10149ad2 */
  if (C.zf) goto L_10149ad2;
  /* 10149ac0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10149ac6 je 0x10149aca */
  if (C.zf) goto L_10149aca;
  /* 10149ac8 jmp 0x10149a91 */
  goto L_10149a91;
L_10149aca:;
  /* 10149aca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10149acc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149ad0 pop edi */
  EDI = (pop32());
  /* 10149ad1 ret  */
  ESPCHK(0x10149a10u, _esp0);
  ESP += 4; return;
L_10149ad2:;
  /* 10149ad2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10149ad5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149ad9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10149add pop edi */
  EDI = (pop32());
  /* 10149ade ret  */
  ESPCHK(0x10149a10u, _esp0);
  ESP += 4; return;
L_10149adf:;
  /* 10149adf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10149ae2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149ae6 pop edi */
  EDI = (pop32());
  /* 10149ae7 ret  */
  ESPCHK(0x10149a10u, _esp0);
  ESP += 4; return;
L_10149ae8:;
  /* 10149ae8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10149aea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149aee pop edi */
  EDI = (pop32());
  /* 10149aef ret  */
  ESPCHK(0x10149a10u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10149af0 (88 bytes, 40 insns) */
void f_10149af0(void) {
  FTRACE(0x10149af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149af0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10149af4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10149af8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10149afa je 0x10149b43 */
  if (C.zf) goto L_10149b43;
  /* 10149afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149afe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10149b02 push edi */
  push32((uint32_t)(EDI));
  /* 10149b03 mov edi, ecx */
  EDI = (ECX);
  /* 10149b05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149b08 jb 0x10149b37 */
  if (C.cf) goto L_10149b37;
  /* 10149b0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10149b0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10149b0f je 0x10149b19 */
  if (C.zf) goto L_10149b19;
  /* 10149b11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10149b13:;
  /* 10149b13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149b15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10149b16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10149b17 jne 0x10149b13 */
  if (!C.zf) goto L_10149b13;
L_10149b19:;
  /* 10149b19 mov ecx, eax */
  ECX = (EAX);
  /* 10149b1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10149b1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149b20 mov ecx, eax */
  ECX = (EAX);
  /* 10149b22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10149b25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149b27 mov ecx, edx */
  ECX = (EDX);
  /* 10149b29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10149b2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149b2f je 0x10149b37 */
  if (C.zf) goto L_10149b37;
  /* 10149b31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10149b33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10149b35 je 0x10149b3d */
  if (C.zf) goto L_10149b3d;
L_10149b37:;
  /* 10149b37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149b39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10149b3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10149b3b jne 0x10149b37 */
  if (!C.zf) goto L_10149b37;
L_10149b3d:;
  /* 10149b3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149b41 pop edi */
  EDI = (pop32());
  /* 10149b42 ret  */
  ESPCHK(0x10149af0u, _esp0);
  ESP += 4; return;
L_10149b43:;
  /* 10149b43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10149b47 ret  */
  ESPCHK(0x10149af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x10149b50 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10149b50(void) {
  FTRACE(0x10149b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10149b51 mov ebp, esp */
  EBP = (ESP);
  /* 10149b53 push edi */
  push32((uint32_t)(EDI));
  /* 10149b54 push esi */
  push32((uint32_t)(ESI));
  /* 10149b55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10149b58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10149b5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10149b5e mov eax, ecx */
  EAX = (ECX);
  /* 10149b60 mov edx, ecx */
  EDX = (ECX);
  /* 10149b62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149b64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149b66 jbe 0x10149b70 */
  if ((C.cf||C.zf)) goto L_10149b70;
  /* 10149b68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149b6a jb 0x10149ce8 */
  if (C.cf) goto L_10149ce8;
L_10149b70:;
  /* 10149b70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10149b76 jne 0x10149b8c */
  if (!C.zf) goto L_10149b8c;
  /* 10149b78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149b7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10149b7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149b81 jb 0x10149bac */
  if (C.cf) goto L_10149bac;
  /* 10149b83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149b85 jmp dword ptr [edx*4 + 0x10149c98] */
  switch (EDX) {
    case 0: goto L_10149ca8;
    case 1: goto L_10149cb0;
    case 2: goto L_10149cbc;
    case 3: goto L_10149cd0;
    default: x86_unimpl("switch@0x10149b85 out of table"); return;
  }
L_10149b8c:;
  /* 10149b8c mov eax, edi */
  EAX = (EDI);
  /* 10149b8e mov edx, 3 */
  EDX = (0x3u);
  /* 10149b93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149b96 jb 0x10149ba4 */
  if (C.cf) goto L_10149ba4;
  /* 10149b98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10149b9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10149b9d jmp dword ptr [eax*4 + 0x10149bb0] */
  switch (EAX) {
    case 1: goto L_10149bc0;
    case 2: goto L_10149bec;
    case 3: goto L_10149c10;
    default: x86_unimpl("switch@0x10149b9d out of table"); return;
  }
L_10149ba4:;
  /* 10149ba4 jmp dword ptr [ecx*4 + 0x10149ca8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10149ca8)))); return;
  /* 10149bab nop  */
  /* nop */
L_10149bac:;
  /* 10149bac jmp dword ptr [ecx*4 + 0x10149c2c] */
  switch (ECX) {
    case 0: goto L_10149c8f;
    case 1: goto L_10149c7c;
    case 2: goto L_10149c74;
    case 3: goto L_10149c6c;
    case 4: goto L_10149c64;
    case 5: goto L_10149c5c;
    case 6: goto L_10149c54;
    case 7: goto L_10149c4c;
    default: x86_unimpl("switch@0x10149bac out of table"); return;
  }
  /* 10149bb3 nop  */
  /* nop */
L_10149bc0:;
  /* 10149bc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149bc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149bc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149bc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149bc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149bcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149bcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149bd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149bd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149bd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149bdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149bde jb 0x10149bac */
  if (C.cf) goto L_10149bac;
  /* 10149be0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149be2 jmp dword ptr [edx*4 + 0x10149c98] */
  switch (EDX) {
    case 0: goto L_10149ca8;
    case 1: goto L_10149cb0;
    case 2: goto L_10149cbc;
    case 3: goto L_10149cd0;
    default: x86_unimpl("switch@0x10149be2 out of table"); return;
  }
  /* 10149be9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149bec:;
  /* 10149bec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149bee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149bf0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149bf2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149bf5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149bf8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149bfb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149bfe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149c01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149c04 jb 0x10149bac */
  if (C.cf) goto L_10149bac;
  /* 10149c06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149c08 jmp dword ptr [edx*4 + 0x10149c98] */
  switch (EDX) {
    case 0: goto L_10149ca8;
    case 1: goto L_10149cb0;
    case 2: goto L_10149cbc;
    case 3: goto L_10149cd0;
    default: x86_unimpl("switch@0x10149c08 out of table"); return;
  }
  /* 10149c0f nop  */
  /* nop */
L_10149c10:;
  /* 10149c10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149c12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149c14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149c16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10149c17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10149c1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149c1e jb 0x10149bac */
  if (C.cf) goto L_10149bac;
  /* 10149c20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149c22 jmp dword ptr [edx*4 + 0x10149c98] */
  switch (EDX) {
    case 0: goto L_10149ca8;
    case 1: goto L_10149cb0;
    case 2: goto L_10149cbc;
    case 3: goto L_10149cd0;
    default: x86_unimpl("switch@0x10149c22 out of table"); return;
  }
  /* 10149c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149c4c:;
  /* 10149c4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10149c50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10149c54:;
  /* 10149c54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10149c58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10149c5c:;
  /* 10149c5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10149c60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10149c64:;
  /* 10149c64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10149c68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10149c6c:;
  /* 10149c6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10149c70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10149c74:;
  /* 10149c74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10149c78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10149c7c:;
  /* 10149c7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10149c80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10149c84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10149c8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149c8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10149c8f:;
  /* 10149c8f jmp dword ptr [edx*4 + 0x10149c98] */
  switch (EDX) {
    case 0: goto L_10149ca8;
    case 1: goto L_10149cb0;
    case 2: goto L_10149cbc;
    case 3: goto L_10149cd0;
    default: x86_unimpl("switch@0x10149c8f out of table"); return;
  }
  /* 10149c96 mov edi, edi */
  EDI = (EDI);
L_10149ca8:;
  /* 10149ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149cab pop esi */
  ESI = (pop32());
  /* 10149cac pop edi */
  EDI = (pop32());
  /* 10149cad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149cae ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149caf nop  */
  /* nop */
L_10149cb0:;
  /* 10149cb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149cb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149cb7 pop esi */
  ESI = (pop32());
  /* 10149cb8 pop edi */
  EDI = (pop32());
  /* 10149cb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149cba ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149cbb nop  */
  /* nop */
L_10149cbc:;
  /* 10149cbc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149cbe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149cc0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149cc3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149cc9 pop esi */
  ESI = (pop32());
  /* 10149cca pop edi */
  EDI = (pop32());
  /* 10149ccb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149ccc ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149ccd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149cd0:;
  /* 10149cd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10149cd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10149cd4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149cd7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149cda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149cdd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149ce3 pop esi */
  ESI = (pop32());
  /* 10149ce4 pop edi */
  EDI = (pop32());
  /* 10149ce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149ce6 ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149ce7 nop  */
  /* nop */
L_10149ce8:;
  /* 10149ce8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10149cec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10149cf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10149cf6 jne 0x10149d1c */
  if (!C.zf) goto L_10149d1c;
  /* 10149cf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149cfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10149cfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149d01 jb 0x10149d10 */
  if (C.cf) goto L_10149d10;
  /* 10149d03 std  */
  C.df=1;
  /* 10149d04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149d06 cld  */
  C.df=0;
  /* 10149d07 jmp dword ptr [edx*4 + 0x10149e30] */
  switch (EDX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149d07 out of table"); return;
  }
  /* 10149d0e mov edi, edi */
  EDI = (EDI);
L_10149d10:;
  /* 10149d10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10149d12 jmp dword ptr [ecx*4 + 0x10149de0] */
  switch (ECX) {
    case 0: goto L_10149e27;
    default: x86_unimpl("switch@0x10149d12 out of table"); return;
  }
  /* 10149d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149d1c:;
  /* 10149d1c mov eax, edi */
  EAX = (EDI);
  /* 10149d1e mov edx, 3 */
  EDX = (0x3u);
  /* 10149d23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149d26 jb 0x10149d34 */
  if (C.cf) goto L_10149d34;
  /* 10149d28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10149d2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149d2d jmp dword ptr [eax*4 + 0x10149d38] */
  switch (EAX) {
    case 1: goto L_10149d48;
    case 2: goto L_10149d68;
    case 3: goto L_10149d90;
    default: x86_unimpl("switch@0x10149d2d out of table"); return;
  }
L_10149d34:;
  /* 10149d34 jmp dword ptr [ecx*4 + 0x10149e30] */
  switch (ECX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149d34 out of table"); return;
  }
  /* 10149d3b nop  */
  /* nop */
L_10149d48:;
  /* 10149d48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149d4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149d4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149d50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10149d51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149d54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10149d55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149d58 jb 0x10149d10 */
  if (C.cf) goto L_10149d10;
  /* 10149d5a std  */
  C.df=1;
  /* 10149d5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149d5d cld  */
  C.df=0;
  /* 10149d5e jmp dword ptr [edx*4 + 0x10149e30] */
  switch (EDX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149d5e out of table"); return;
  }
  /* 10149d65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149d68:;
  /* 10149d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149d6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149d6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149d70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149d73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149d76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149d79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149d7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149d7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149d82 jb 0x10149d10 */
  if (C.cf) goto L_10149d10;
  /* 10149d84 std  */
  C.df=1;
  /* 10149d85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149d87 cld  */
  C.df=0;
  /* 10149d88 jmp dword ptr [edx*4 + 0x10149e30] */
  switch (EDX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149d88 out of table"); return;
  }
  /* 10149d8f nop  */
  /* nop */
L_10149d90:;
  /* 10149d90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149d93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10149d95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149d98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149d9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149d9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149da1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10149da4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149da7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149daa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149dad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149db0 jb 0x10149d10 */
  if (C.cf) goto L_10149d10;
  /* 10149db6 std  */
  C.df=1;
  /* 10149db7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10149db9 cld  */
  C.df=0;
  /* 10149dba jmp dword ptr [edx*4 + 0x10149e30] */
  switch (EDX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149dba out of table"); return;
  }
  /* 10149dc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10149dc4 in al, 0x9d */
  x86_unimpl("in @ 0x10149dc4");
  /* 10149dc6 adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dc8 in al, dx */
  x86_unimpl("in @ 0x10149dc8");
  /* 10149dc9 popfd  */
  x86_unimpl("popfd @ 0x10149dc9");
  /* 10149dca adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dcc hlt  */
  x86_unimpl("hlt @ 0x10149dcc");
  /* 10149dcd popfd  */
  x86_unimpl("popfd @ 0x10149dcd");
  /* 10149dce adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dd0 cld  */
  C.df=0;
  /* 10149dd1 popfd  */
  x86_unimpl("popfd @ 0x10149dd1");
  /* 10149dd2 adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dd4 add al, 0x9e */
  { uint32_t _a=(AL),_b=(0x9eu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dd6 adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dd8 or al, 0x9e */
  { uint32_t _r=(AL)|(0x9eu); AL = (_r); fl_logic(_r,8); }
  /* 10149dda adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149ddc adc al, 0x9e */
  { uint32_t _a=(AL),_b=(0x9eu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149dde adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10149de4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10149de8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10149dec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10149df0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10149df4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10149df8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10149dfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10149e00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10149e04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10149e08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10149e0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10149e10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10149e14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10149e18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10149e1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10149e23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149e25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10149e27:;
  /* 10149e27 jmp dword ptr [edx*4 + 0x10149e30] */
  switch (EDX) {
    case 0: goto L_10149e40;
    case 1: goto L_10149e48;
    case 2: goto L_10149e58;
    case 3: goto L_10149e6c;
    default: x86_unimpl("switch@0x10149e27 out of table"); return;
  }
  /* 10149e2e mov edi, edi */
  EDI = (EDI);
L_10149e40:;
  /* 10149e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149e43 pop esi */
  ESI = (pop32());
  /* 10149e44 pop edi */
  EDI = (pop32());
  /* 10149e45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149e46 ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149e47 nop  */
  /* nop */
L_10149e48:;
  /* 10149e48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149e4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149e4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149e51 pop esi */
  ESI = (pop32());
  /* 10149e52 pop edi */
  EDI = (pop32());
  /* 10149e53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149e54 ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10149e58:;
  /* 10149e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149e5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149e5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149e61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149e67 pop esi */
  ESI = (pop32());
  /* 10149e68 pop edi */
  EDI = (pop32());
  /* 10149e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149e6a ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
  /* 10149e6b nop  */
  /* nop */
L_10149e6c:;
  /* 10149e6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10149e6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10149e72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10149e75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10149e78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10149e7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10149e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149e81 pop esi */
  ESI = (pop32());
  /* 10149e82 pop edi */
  EDI = (pop32());
  /* 10149e83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10149e84 ret  */
  ESPCHK(0x10149b50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10149e85 (9 bytes, 4 insns) */
void f_10149e85(void) {
  FTRACE(0x10149e85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10149e87 call 0x10146fc1 */
  push32(0x10149e8cu); f_10146fc1();
  /* 10149e8c pop ecx */
  ECX = (pop32());
  /* 10149e8d ret  */
  ESPCHK(0x10149e85u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e8e @ 0x10149e8e (41 bytes, 12 insns) */
void f_10149e8e(void) {
  FTRACE(0x10149e8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149e8e push esi */
  push32((uint32_t)(ESI));
  /* 10149e8f mov esi, dword ptr [0x1014e094] */
  ESI = (r32((uint32_t)(0x1014e094)));
  /* 10149e95 push dword ptr [0x10150c44] */
  push32((uint32_t)(r32((uint32_t)(0x10150c44))));
  /* 10149e9b call esi */
  call_ind((uint32_t)(ESI), 0x10149e9du);
  /* 10149e9d push dword ptr [0x10150c34] */
  push32((uint32_t)(r32((uint32_t)(0x10150c34))));
  /* 10149ea3 call esi */
  call_ind((uint32_t)(ESI), 0x10149ea5u);
  /* 10149ea5 push dword ptr [0x10150c24] */
  push32((uint32_t)(r32((uint32_t)(0x10150c24))));
  /* 10149eab call esi */
  call_ind((uint32_t)(ESI), 0x10149eadu);
  /* 10149ead push dword ptr [0x10150c04] */
  push32((uint32_t)(r32((uint32_t)(0x10150c04))));
  /* 10149eb3 call esi */
  call_ind((uint32_t)(ESI), 0x10149eb5u);
  /* 10149eb5 pop esi */
  ESI = (pop32());
  /* 10149eb6 ret  */
  ESPCHK(0x10149e8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009eb7 @ 0x10149eb7 (108 bytes, 34 insns) */
void f_10149eb7(void) {
  FTRACE(0x10149eb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10149eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10149eb9 mov edi, dword ptr [0x1014e050] */
  EDI = (r32((uint32_t)(0x1014e050)));
  /* 10149ebf mov esi, 0x10150c00 */
  ESI = (0x10150c00u);
L_10149ec4:;
  /* 10149ec4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10149ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10149ec8 je 0x10149ef5 */
  if (C.zf) goto L_10149ef5;
  /* 10149eca cmp esi, 0x10150c44 */
  { uint32_t _a=(ESI),_b=(0x10150c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149ed0 je 0x10149ef5 */
  if (C.zf) goto L_10149ef5;
  /* 10149ed2 cmp esi, 0x10150c34 */
  { uint32_t _a=(ESI),_b=(0x10150c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149ed8 je 0x10149ef5 */
  if (C.zf) goto L_10149ef5;
  /* 10149eda cmp esi, 0x10150c24 */
  { uint32_t _a=(ESI),_b=(0x10150c24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149ee0 je 0x10149ef5 */
  if (C.zf) goto L_10149ef5;
  /* 10149ee2 cmp esi, 0x10150c04 */
  { uint32_t _a=(ESI),_b=(0x10150c04u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149ee8 je 0x10149ef5 */
  if (C.zf) goto L_10149ef5;
  /* 10149eea push eax */
  push32((uint32_t)(EAX));
  /* 10149eeb call edi */
  call_ind((uint32_t)(EDI), 0x10149eedu);
  /* 10149eed push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10149eef call 0x1014a0d6 */
  push32(0x10149ef4u); f_1014a0d6();
  /* 10149ef4 pop ecx */
  ECX = (pop32());
L_10149ef5:;
  /* 10149ef5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149ef8 cmp esi, 0x10150cc0 */
  { uint32_t _a=(ESI),_b=(0x10150cc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149efe jl 0x10149ec4 */
  if ((C.sf!=C.of)) goto L_10149ec4;
  /* 10149f00 push dword ptr [0x10150c24] */
  push32((uint32_t)(r32((uint32_t)(0x10150c24))));
  /* 10149f06 call edi */
  call_ind((uint32_t)(EDI), 0x10149f08u);
  /* 10149f08 push dword ptr [0x10150c34] */
  push32((uint32_t)(r32((uint32_t)(0x10150c34))));
  /* 10149f0e call edi */
  call_ind((uint32_t)(EDI), 0x10149f10u);
  /* 10149f10 push dword ptr [0x10150c44] */
  push32((uint32_t)(r32((uint32_t)(0x10150c44))));
  /* 10149f16 call edi */
  call_ind((uint32_t)(EDI), 0x10149f18u);
  /* 10149f18 push dword ptr [0x10150c04] */
  push32((uint32_t)(r32((uint32_t)(0x10150c04))));
  /* 10149f1e call edi */
  call_ind((uint32_t)(EDI), 0x10149f20u);
  /* 10149f20 pop edi */
  EDI = (pop32());
  /* 10149f21 pop esi */
  ESI = (pop32());
  /* 10149f22 ret  */
  ESPCHK(0x10149eb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f23 @ 0x10149f23 (97 bytes, 37 insns) */
void f_10149f23(void) {
  FTRACE(0x10149f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149f23 push ebp */
  push32((uint32_t)(EBP));
  /* 10149f24 mov ebp, esp */
  EBP = (ESP);
  /* 10149f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149f29 push esi */
  push32((uint32_t)(ESI));
  /* 10149f2a cmp dword ptr [eax*4 + 0x10150c00], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10150c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149f32 lea esi, [eax*4 + 0x10150c00] */
  ESI = ((uint32_t)(EAX*4 + 0x10150c00));
  /* 10149f39 jne 0x10149f79 */
  if (!C.zf) goto L_10149f79;
  /* 10149f3b push edi */
  push32((uint32_t)(EDI));
  /* 10149f3c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10149f3e call 0x1014a1bf */
  push32(0x10149f43u); f_1014a1bf();
  /* 10149f43 mov edi, eax */
  EDI = (EAX);
  /* 10149f45 pop ecx */
  ECX = (pop32());
  /* 10149f46 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10149f48 jne 0x10149f52 */
  if (!C.zf) goto L_10149f52;
  /* 10149f4a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10149f4c call 0x10146fc1 */
  push32(0x10149f51u); f_10146fc1();
  /* 10149f51 pop ecx */
  ECX = (pop32());
L_10149f52:;
  /* 10149f52 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10149f54 call 0x10149f23 */
  push32(0x10149f59u); f_10149f23();
  /* 10149f59 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149f5c pop ecx */
  ECX = (pop32());
  /* 10149f5d push edi */
  push32((uint32_t)(EDI));
  /* 10149f5e jne 0x10149f6a */
  if (!C.zf) goto L_10149f6a;
  /* 10149f60 call dword ptr [0x1014e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e094))), 0x10149f66u);
  /* 10149f66 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10149f68 jmp 0x10149f70 */
  goto L_10149f70;
L_10149f6a:;
  /* 10149f6a call 0x1014a0d6 */
  push32(0x10149f6fu); f_1014a0d6();
  /* 10149f6f pop ecx */
  ECX = (pop32());
L_10149f70:;
  /* 10149f70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10149f72 call 0x10149f84 */
  push32(0x10149f77u); f_10149f84();
  /* 10149f77 pop ecx */
  ECX = (pop32());
  /* 10149f78 pop edi */
  EDI = (pop32());
L_10149f79:;
  /* 10149f79 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10149f7b call dword ptr [0x1014e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e00c))), 0x10149f81u);
  /* 10149f81 pop esi */
  ESI = (pop32());
  /* 10149f82 pop ebp */
  EBP = (pop32());
  /* 10149f83 ret  */
  ESPCHK(0x10149f23u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f84 @ 0x10149f84 (21 bytes, 7 insns) */
void f_10149f84(void) {
  FTRACE(0x10149f84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149f84 push ebp */
  push32((uint32_t)(EBP));
  /* 10149f85 mov ebp, esp */
  EBP = (ESP);
  /* 10149f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10149f8a push dword ptr [eax*4 + 0x10150c00] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10150c00))));
  /* 10149f91 call dword ptr [0x1014e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e008))), 0x10149f97u);
  /* 10149f97 pop ebp */
  EBP = (pop32());
  /* 10149f98 ret  */
  ESPCHK(0x10149f84u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f99 @ 0x10149f99 (289 bytes, 98 insns) */
void f_10149f99(void) {
  FTRACE(0x10149f99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149f99 push ebp */
  push32((uint32_t)(EBP));
  /* 10149f9a mov ebp, esp */
  EBP = (ESP);
  /* 10149f9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10149f9e push 0x1014e4d0 */
  push32((uint32_t)(0x1014e4d0u));
  /* 10149fa3 push 0x1014cf40 */
  push32((uint32_t)(0x1014cf40u));
  /* 10149fa8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10149fae push eax */
  push32((uint32_t)(EAX));
  /* 10149faf mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10149fb6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 10149fba push esi */
  push32((uint32_t)(ESI));
  /* 10149fbb push edi */
  push32((uint32_t)(EDI));
  /* 10149fbc mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10149fbf imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10149fc3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10149fc6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 10149fc9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149fcc ja 0x10149fe2 */
  if ((!C.cf&&!C.zf)) goto L_10149fe2;
  /* 10149fce xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10149fd0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149fd2 jne 0x10149fd7 */
  if (!C.zf) goto L_10149fd7;
  /* 10149fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149fd6 pop esi */
  ESI = (pop32());
L_10149fd7:;
  /* 10149fd7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10149fda and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10149fdd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10149fe0 jmp 0x10149fe4 */
  goto L_10149fe4;
L_10149fe2:;
  /* 10149fe2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10149fe4:;
  /* 10149fe4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10149fe7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149fea ja 0x1014a098 */
  if ((!C.cf&&!C.zf)) goto L_1014a098;
  /* 10149ff0 mov eax, dword ptr [0x10157c08] */
  EAX = (r32((uint32_t)(0x10157c08)));
  /* 10149ff5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149ff8 jne 0x1014a03b */
  if (!C.zf) goto L_1014a03b;
  /* 10149ffa mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 10149ffd cmp edi, dword ptr [0x101569b0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x101569b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a003 ja 0x1014a081 */
  if ((!C.cf&&!C.zf)) goto L_1014a081;
  /* 1014a005 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a007 call 0x10149f23 */
  push32(0x1014a00cu); f_10149f23();
  /* 1014a00c pop ecx */
  ECX = (pop32());
  /* 1014a00d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1014a010 push edi */
  push32((uint32_t)(EDI));
  /* 1014a011 call 0x1014b1ab */
  push32(0x1014a016u); f_1014b1ab();
  /* 1014a016 pop ecx */
  ECX = (pop32());
  /* 1014a017 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014a01a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a01e call 0x1014a032 */
  push32(0x1014a023u); f_1014a032();
  /* 1014a023 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a026 je 0x1014a086 */
  if (C.zf) goto L_1014a086;
  /* 1014a028 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1014a02b jmp 0x1014a075 */
  goto L_1014a075;
  /* 1014a02d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014a02f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014a032 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a034 call 0x10149f84 */
  push32(0x1014a039u); f_10149f84();
  /* 1014a039 pop ecx */
  ECX = (pop32());
  /* 1014a03a ret  */
  ESPCHK(0x10149f99u, _esp0);
  ESP += 4; return;
L_1014a03b:;
  /* 1014a03b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a03e jne 0x1014a081 */
  if (!C.zf) goto L_1014a081;
  /* 1014a040 cmp esi, dword ptr [0x10152e64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10152e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a046 ja 0x1014a081 */
  if ((!C.cf&&!C.zf)) goto L_1014a081;
  /* 1014a048 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a04a call 0x10149f23 */
  push32(0x1014a04fu); f_10149f23();
  /* 1014a04f pop ecx */
  ECX = (pop32());
  /* 1014a050 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1014a057 mov eax, esi */
  EAX = (ESI);
  /* 1014a059 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1014a05c push eax */
  push32((uint32_t)(EAX));
  /* 1014a05d call 0x1014b958 */
  push32(0x1014a062u); f_1014b958();
  /* 1014a062 pop ecx */
  ECX = (pop32());
  /* 1014a063 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014a066 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a06a call 0x1014a0bb */
  push32(0x1014a06fu); f_1014a0bb();
  /* 1014a06f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a072 je 0x1014a086 */
  if (C.zf) goto L_1014a086;
  /* 1014a074 push esi */
  push32((uint32_t)(ESI));
L_1014a075:;
  /* 1014a075 push ebx */
  push32((uint32_t)(EBX));
  /* 1014a076 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1014a079 call 0x10149af0 */
  push32(0x1014a07eu); f_10149af0();
  /* 1014a07e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014a081:;
  /* 1014a081 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a084 jne 0x1014a0c4 */
  if (!C.zf) { jmp_ind(0x1014a0c4u); return; }
L_1014a086:;
  /* 1014a086 push esi */
  push32((uint32_t)(ESI));
  /* 1014a087 push 8 */
  push32((uint32_t)(0x8u));
  /* 1014a089 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014a08f call dword ptr [0x1014e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e098))), 0x1014a095u);
  /* 1014a095 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1014a098:;
  /* 1014a098 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a09b jne 0x1014a0c4 */
  if (!C.zf) { jmp_ind(0x1014a0c4u); return; }
  /* 1014a09d cmp dword ptr [0x10156850], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156850))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a0a3 je 0x1014a0c4 */
  if (C.zf) { jmp_ind(0x1014a0c4u); return; }
  /* 1014a0a5 push esi */
  push32((uint32_t)(ESI));
  /* 1014a0a6 call 0x1014ce2a */
  push32(0x1014a0abu); f_1014ce2a();
  /* 1014a0ab pop ecx */
  ECX = (pop32());
  /* 1014a0ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a0ae jne 0x10149fe4 */
  if (!C.zf) goto L_10149fe4;
  /* 1014a0b4 jmp 0x1014a0c7 */
  jmp_ind(0x1014a0c7u); return;
  /* 1014a0b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a032 @ 0x1014a032 (9 bytes, 4 insns) */
void f_1014a032(void) {
  FTRACE(0x1014a032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a032 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a034 call 0x10149f84 */
  push32(0x1014a039u); f_10149f84();
  /* 1014a039 pop ecx */
  ECX = (pop32());
  /* 1014a03a ret  */
  ESPCHK(0x1014a032u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0bb @ 0x1014a0bb (9 bytes, 4 insns) */
void f_1014a0bb(void) {
  FTRACE(0x1014a0bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a0bb push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a0bd call 0x10149f84 */
  push32(0x1014a0c2u); f_10149f84();
  /* 1014a0c2 pop ecx */
  ECX = (pop32());
  /* 1014a0c3 ret  */
  ESPCHK(0x1014a0bbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d6 @ 0x1014a0d6 (215 bytes, 75 insns) */
void f_1014a0d6(void) {
  FTRACE(0x1014a0d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a0d6 push ebp */
  push32((uint32_t)(EBP));
  /* 1014a0d7 mov ebp, esp */
  EBP = (ESP);
  /* 1014a0d9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1014a0db push 0x1014e4e8 */
  push32((uint32_t)(0x1014e4e8u));
  /* 1014a0e0 push 0x1014cf40 */
  push32((uint32_t)(0x1014cf40u));
  /* 1014a0e5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1014a0eb push eax */
  push32((uint32_t)(EAX));
  /* 1014a0ec mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1014a0f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a0f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1014a0f7 push esi */
  push32((uint32_t)(ESI));
  /* 1014a0f8 push edi */
  push32((uint32_t)(EDI));
  /* 1014a0f9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a0fc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014a0fe je 0x1014a1b0 */
  if (C.zf) { jmp_ind(0x1014a1b0u); return; }
  /* 1014a104 mov eax, dword ptr [0x10157c08] */
  EAX = (r32((uint32_t)(0x10157c08)));
  /* 1014a109 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a10c jne 0x1014a149 */
  if (!C.zf) goto L_1014a149;
  /* 1014a10e push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a110 call 0x10149f23 */
  push32(0x1014a115u); f_10149f23();
  /* 1014a115 pop ecx */
  ECX = (pop32());
  /* 1014a116 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a11a push esi */
  push32((uint32_t)(ESI));
  /* 1014a11b call 0x1014ae57 */
  push32(0x1014a120u); f_1014ae57();
  /* 1014a120 pop ecx */
  ECX = (pop32());
  /* 1014a121 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1014a124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a126 je 0x1014a131 */
  if (C.zf) goto L_1014a131;
  /* 1014a128 push esi */
  push32((uint32_t)(ESI));
  /* 1014a129 push eax */
  push32((uint32_t)(EAX));
  /* 1014a12a call 0x1014ae82 */
  push32(0x1014a12fu); f_1014ae82();
  /* 1014a12f pop ecx */
  ECX = (pop32());
  /* 1014a130 pop ecx */
  ECX = (pop32());
L_1014a131:;
  /* 1014a131 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a135 call 0x1014a140 */
  push32(0x1014a13au); f_1014a140();
  /* 1014a13a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a13e jmp 0x1014a191 */
  goto L_1014a191;
  /* 1014a140 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a142 call 0x10149f84 */
  push32(0x1014a147u); f_10149f84();
  /* 1014a147 pop ecx */
  ECX = (pop32());
  /* 1014a148 ret  */
  ESPCHK(0x1014a0d6u, _esp0);
  ESP += 4; return;
L_1014a149:;
  /* 1014a149 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a14c jne 0x1014a1a1 */
  if (!C.zf) goto L_1014a1a1;
  /* 1014a14e push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a150 call 0x10149f23 */
  push32(0x1014a155u); f_10149f23();
  /* 1014a155 pop ecx */
  ECX = (pop32());
  /* 1014a156 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1014a15d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1014a160 push eax */
  push32((uint32_t)(EAX));
  /* 1014a161 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1014a164 push eax */
  push32((uint32_t)(EAX));
  /* 1014a165 push esi */
  push32((uint32_t)(ESI));
  /* 1014a166 call 0x1014b8bc */
  push32(0x1014a16bu); f_1014b8bc();
  /* 1014a16b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a16e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1014a171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a173 je 0x1014a184 */
  if (C.zf) goto L_1014a184;
  /* 1014a175 push eax */
  push32((uint32_t)(EAX));
  /* 1014a176 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1014a179 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1014a17c call 0x1014b913 */
  push32(0x1014a181u); f_1014b913();
  /* 1014a181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014a184:;
  /* 1014a184 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a188 call 0x1014a198 */
  push32(0x1014a18du); f_1014a198();
  /* 1014a18d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1014a191:;
  /* 1014a191 jne 0x1014a1b0 */
  if (!C.zf) { jmp_ind(0x1014a1b0u); return; }
  /* 1014a193 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014a196 jmp 0x1014a1a2 */
  goto L_1014a1a2;
  /* 1014a198 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a19a call 0x10149f84 */
  push32(0x1014a19fu); f_10149f84();
  /* 1014a19f pop ecx */
  ECX = (pop32());
  /* 1014a1a0 ret  */
  ESPCHK(0x1014a0d6u, _esp0);
  ESP += 4; return;
L_1014a1a1:;
  /* 1014a1a1 push esi */
  push32((uint32_t)(ESI));
L_1014a1a2:;
  /* 1014a1a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014a1a4 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
}

/* FUN_1000a140 @ 0x1014a140 (9 bytes, 4 insns) */
void f_1014a140(void) {
  FTRACE(0x1014a140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a140 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a142 call 0x10149f84 */
  push32(0x1014a147u); f_10149f84();
  /* 1014a147 pop ecx */
  ECX = (pop32());
  /* 1014a148 ret  */
  ESPCHK(0x1014a140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a198 @ 0x1014a198 (9 bytes, 4 insns) */
void f_1014a198(void) {
  FTRACE(0x1014a198u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a198 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a19a call 0x10149f84 */
  push32(0x1014a19fu); f_10149f84();
  /* 1014a19f pop ecx */
  ECX = (pop32());
  /* 1014a1a0 ret  */
  ESPCHK(0x1014a198u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1014a1bf (18 bytes, 6 insns) */
void f_1014a1bf(void) {
  FTRACE(0x1014a1bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a1bf push dword ptr [0x10156850] */
  push32((uint32_t)(r32((uint32_t)(0x10156850))));
  /* 1014a1c5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1014a1c9 call 0x1014a1d1 */
  push32(0x1014a1ceu); f_1014a1d1();
  /* 1014a1ce pop ecx */
  ECX = (pop32());
  /* 1014a1cf pop ecx */
  ECX = (pop32());
  /* 1014a1d0 ret  */
  ESPCHK(0x1014a1bfu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1014a1d1 (44 bytes, 16 insns) */
void f_1014a1d1(void) {
  FTRACE(0x1014a1d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a1d1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a1d6 ja 0x1014a1fa */
  if ((!C.cf&&!C.zf)) goto L_1014a1fa;
L_1014a1d8:;
  /* 1014a1d8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1014a1dc call 0x1014a1fd */
  push32(0x1014a1e1u); f_1014a1fd();
  /* 1014a1e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a1e3 pop ecx */
  ECX = (pop32());
  /* 1014a1e4 jne 0x1014a1fc */
  if (!C.zf) goto L_1014a1fc;
  /* 1014a1e6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a1ea je 0x1014a1fc */
  if (C.zf) goto L_1014a1fc;
  /* 1014a1ec push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1014a1f0 call 0x1014ce2a */
  push32(0x1014a1f5u); f_1014ce2a();
  /* 1014a1f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a1f7 pop ecx */
  ECX = (pop32());
  /* 1014a1f8 jne 0x1014a1d8 */
  if (!C.zf) goto L_1014a1d8;
L_1014a1fa:;
  /* 1014a1fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014a1fc:;
  /* 1014a1fc ret  */
  ESPCHK(0x1014a1d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1fd @ 0x1014a1fd (231 bytes, 81 insns) */
void f_1014a1fd(void) {
  FTRACE(0x1014a1fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a1fd push ebp */
  push32((uint32_t)(EBP));
  /* 1014a1fe mov ebp, esp */
  EBP = (ESP);
  /* 1014a200 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1014a202 push 0x1014e500 */
  push32((uint32_t)(0x1014e500u));
  /* 1014a207 push 0x1014cf40 */
  push32((uint32_t)(0x1014cf40u));
  /* 1014a20c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1014a212 push eax */
  push32((uint32_t)(EAX));
  /* 1014a213 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1014a21a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a21d push ebx */
  push32((uint32_t)(EBX));
  /* 1014a21e push esi */
  push32((uint32_t)(ESI));
  /* 1014a21f push edi */
  push32((uint32_t)(EDI));
  /* 1014a220 mov eax, dword ptr [0x10157c08] */
  EAX = (r32((uint32_t)(0x10157c08)));
  /* 1014a225 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a228 jne 0x1014a26d */
  if (!C.zf) goto L_1014a26d;
  /* 1014a22a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a22d cmp esi, dword ptr [0x101569b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101569b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a233 ja 0x1014a2cc */
  if ((!C.cf&&!C.zf)) goto L_1014a2cc;
  /* 1014a239 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a23b call 0x10149f23 */
  push32(0x1014a240u); f_10149f23();
  /* 1014a240 pop ecx */
  ECX = (pop32());
  /* 1014a241 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a245 push esi */
  push32((uint32_t)(ESI));
  /* 1014a246 call 0x1014b1ab */
  push32(0x1014a24bu); f_1014b1ab();
  /* 1014a24b pop ecx */
  ECX = (pop32());
  /* 1014a24c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1014a24f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a253 call 0x1014a264 */
  push32(0x1014a258u); f_1014a264();
  /* 1014a258 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1014a25b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a25d je 0x1014a2cc */
  if (C.zf) goto L_1014a2cc;
  /* 1014a25f jmp 0x1014a2ea */
  jmp_ind(0x1014a2eau); return;
  /* 1014a264 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a266 call 0x10149f84 */
  push32(0x1014a26bu); f_10149f84();
  /* 1014a26b pop ecx */
  ECX = (pop32());
  /* 1014a26c ret  */
  ESPCHK(0x1014a1fdu, _esp0);
  ESP += 4; return;
L_1014a26d:;
  /* 1014a26d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a270 jne 0x1014a2cc */
  if (!C.zf) goto L_1014a2cc;
  /* 1014a272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a277 je 0x1014a281 */
  if (C.zf) goto L_1014a281;
  /* 1014a279 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1014a27c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1014a27f jmp 0x1014a284 */
  goto L_1014a284;
L_1014a281:;
  /* 1014a281 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1014a283 pop esi */
  ESI = (pop32());
L_1014a284:;
  /* 1014a284 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1014a287 cmp esi, dword ptr [0x10152e64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10152e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a28d ja 0x1014a2bd */
  if ((!C.cf&&!C.zf)) goto L_1014a2bd;
  /* 1014a28f push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a291 call 0x10149f23 */
  push32(0x1014a296u); f_10149f23();
  /* 1014a296 pop ecx */
  ECX = (pop32());
  /* 1014a297 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1014a29e mov eax, esi */
  EAX = (ESI);
  /* 1014a2a0 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1014a2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1014a2a4 call 0x1014b958 */
  push32(0x1014a2a9u); f_1014b958();
  /* 1014a2a9 pop ecx */
  ECX = (pop32());
  /* 1014a2aa mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1014a2ad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a2b1 call 0x1014a2c3 */
  push32(0x1014a2b6u); f_1014a2c3();
  /* 1014a2b6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1014a2b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a2bb jne 0x1014a2ea */
  if (!C.zf) { jmp_ind(0x1014a2eau); return; }
L_1014a2bd:;
  /* 1014a2bd push esi */
  push32((uint32_t)(ESI));
  /* 1014a2be jmp 0x1014a2dc */
  goto L_1014a2dc;
  /* 1014a2c0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a2c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a2c5 call 0x10149f84 */
  push32(0x1014a2cau); f_10149f84();
  /* 1014a2ca pop ecx */
  ECX = (pop32());
  /* 1014a2cb ret  */
  ESPCHK(0x1014a1fdu, _esp0);
  ESP += 4; return;
L_1014a2cc:;
  /* 1014a2cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a2cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014a2d1 jne 0x1014a2d6 */
  if (!C.zf) goto L_1014a2d6;
  /* 1014a2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014a2d5 pop eax */
  EAX = (pop32());
L_1014a2d6:;
  /* 1014a2d6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a2d9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1014a2db push eax */
  push32((uint32_t)(EAX));
L_1014a2dc:;
  /* 1014a2dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1014a2de push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
}

/* FUN_1000a264 @ 0x1014a264 (9 bytes, 4 insns) */
void f_1014a264(void) {
  FTRACE(0x1014a264u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a264 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a266 call 0x10149f84 */
  push32(0x1014a26bu); f_10149f84();
  /* 1014a26b pop ecx */
  ECX = (pop32());
  /* 1014a26c ret  */
  ESPCHK(0x1014a264u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c3 @ 0x1014a2c3 (9 bytes, 4 insns) */
void f_1014a2c3(void) {
  FTRACE(0x1014a2c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a2c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1014a2c5 call 0x10149f84 */
  push32(0x1014a2cau); f_10149f84();
  /* 1014a2ca pop ecx */
  ECX = (pop32());
  /* 1014a2cb ret  */
  ESPCHK(0x1014a2c3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2f9 @ 0x1014a2f9 (429 bytes, 143 insns) */
void f_1014a2f9(void) {
  FTRACE(0x1014a2f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a2f9 push ebp */
  push32((uint32_t)(EBP));
  /* 1014a2fa mov ebp, esp */
  EBP = (ESP);
  /* 1014a2fc sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1014a300 push esi */
  push32((uint32_t)(ESI));
  /* 1014a301 push edi */
  push32((uint32_t)(EDI));
  /* 1014a302 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1014a304 call 0x10149f23 */
  push32(0x1014a309u); f_10149f23();
  /* 1014a309 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014a30c call 0x1014a4a6 */
  push32(0x1014a311u); f_1014a4a6();
  /* 1014a311 mov ebx, eax */
  EBX = (EAX);
  /* 1014a313 pop ecx */
  ECX = (pop32());
  /* 1014a314 cmp ebx, dword ptr [0x101569b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101569b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a31a pop ecx */
  ECX = (pop32());
  /* 1014a31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014a31e jne 0x1014a327 */
  if (!C.zf) goto L_1014a327;
L_1014a320:;
  /* 1014a320 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014a322 jmp 0x1014a497 */
  goto L_1014a497;
L_1014a327:;
  /* 1014a327 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014a329 je 0x1014a485 */
  if (C.zf) goto L_1014a485;
  /* 1014a32f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a331 mov eax, 0x10150d50 */
  EAX = (0x10150d50u);
L_1014a336:;
  /* 1014a336 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a338 je 0x1014a3ae */
  if (C.zf) goto L_1014a3ae;
  /* 1014a33a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a33d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014a33e cmp eax, 0x10150e40 */
  { uint32_t _a=(EAX),_b=(0x10150e40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a343 jl 0x1014a336 */
  if ((C.sf!=C.of)) goto L_1014a336;
  /* 1014a345 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1014a348 push eax */
  push32((uint32_t)(EAX));
  /* 1014a349 push ebx */
  push32((uint32_t)(EBX));
  /* 1014a34a call dword ptr [0x1014e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e09c))), 0x1014a350u);
  /* 1014a350 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014a352 pop esi */
  ESI = (pop32());
  /* 1014a353 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a355 jne 0x1014a47c */
  if (!C.zf) goto L_1014a47c;
  /* 1014a35b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1014a35d and dword ptr [0x10156be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10156be4)))&(0x0u); w32((uint32_t)(0x10156be4), (_r)); fl_logic(_r,32); }
  /* 1014a364 pop ecx */
  ECX = (pop32());
  /* 1014a365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a367 mov edi, 0x10156ae0 */
  EDI = (0x10156ae0u);
  /* 1014a36c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a36f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1014a371 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1014a372 mov dword ptr [0x101569b4], ebx */
  w32((uint32_t)(0x101569b4), (EBX));
  /* 1014a378 jbe 0x1014a469 */
  if ((C.cf||C.zf)) goto L_1014a469;
  /* 1014a37e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014a382 je 0x1014a444 */
  if (C.zf) goto L_1014a444;
  /* 1014a388 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1014a38b:;
  /* 1014a38b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1014a38d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014a38f je 0x1014a444 */
  if (C.zf) goto L_1014a444;
  /* 1014a395 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1014a399 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1014a39c:;
  /* 1014a39c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a39e ja 0x1014a438 */
  if ((!C.cf&&!C.zf)) goto L_1014a438;
  /* 1014a3a4 or byte ptr [eax + 0x10156ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x4u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a3ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a3ac jmp 0x1014a39c */
  goto L_1014a39c;
L_1014a3ae:;
  /* 1014a3ae and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014a3b2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1014a3b4 pop ecx */
  ECX = (pop32());
  /* 1014a3b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a3b7 mov edi, 0x10156ae0 */
  EDI = (0x10156ae0u);
  /* 1014a3bc lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1014a3bf rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1014a3c1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1014a3c4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1014a3c5 lea ebx, [esi + 0x10150d60] */
  EBX = ((uint32_t)(ESI + 0x10150d60));
L_1014a3cb:;
  /* 1014a3cb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014a3ce mov ecx, ebx */
  ECX = (EBX);
  /* 1014a3d0 je 0x1014a3fe */
  if (C.zf) goto L_1014a3fe;
L_1014a3d2:;
  /* 1014a3d2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1014a3d5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014a3d7 je 0x1014a3fe */
  if (C.zf) goto L_1014a3fe;
  /* 1014a3d9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1014a3dc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1014a3df cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a3e1 ja 0x1014a3f7 */
  if ((!C.cf&&!C.zf)) goto L_1014a3f7;
  /* 1014a3e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014a3e6 mov dl, byte ptr [edx + 0x10150d48] */
  DL = (r8((uint32_t)(EDX + 0x10150d48)));
L_1014a3ec:;
  /* 1014a3ec or byte ptr [eax + 0x10156ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(DL); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a3f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a3f3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a3f5 jbe 0x1014a3ec */
  if ((C.cf||C.zf)) goto L_1014a3ec;
L_1014a3f7:;
  /* 1014a3f7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a3f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a3f9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014a3fc jne 0x1014a3d2 */
  if (!C.zf) goto L_1014a3d2;
L_1014a3fe:;
  /* 1014a3fe inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014a401 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a404 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a408 jb 0x1014a3cb */
  if (C.cf) goto L_1014a3cb;
  /* 1014a40a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a40d mov dword ptr [0x101569cc], 1 */
  w32((uint32_t)(0x101569cc), (0x1u));
  /* 1014a417 push eax */
  push32((uint32_t)(EAX));
  /* 1014a418 mov dword ptr [0x101569b4], eax */
  w32((uint32_t)(0x101569b4), (EAX));
  /* 1014a41d call 0x1014a4f0 */
  push32(0x1014a422u); f_1014a4f0();
  /* 1014a422 lea esi, [esi + 0x10150d54] */
  ESI = ((uint32_t)(ESI + 0x10150d54));
  /* 1014a428 mov edi, 0x101569c0 */
  EDI = (0x101569c0u);
  /* 1014a42d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014a42e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014a42f pop ecx */
  ECX = (pop32());
  /* 1014a430 mov dword ptr [0x10156be4], eax */
  w32((uint32_t)(0x10156be4), (EAX));
  /* 1014a435 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014a436 jmp 0x1014a48a */
  goto L_1014a48a;
L_1014a438:;
  /* 1014a438 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a439 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a43a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014a43e jne 0x1014a38b */
  if (!C.zf) goto L_1014a38b;
L_1014a444:;
  /* 1014a444 mov eax, esi */
  EAX = (ESI);
L_1014a446:;
  /* 1014a446 or byte ptr [eax + 0x10156ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x8u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a44d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a44e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a453 jb 0x1014a446 */
  if (C.cf) goto L_1014a446;
  /* 1014a455 push ebx */
  push32((uint32_t)(EBX));
  /* 1014a456 call 0x1014a4f0 */
  push32(0x1014a45bu); f_1014a4f0();
  /* 1014a45b pop ecx */
  ECX = (pop32());
  /* 1014a45c mov dword ptr [0x10156be4], eax */
  w32((uint32_t)(0x10156be4), (EAX));
  /* 1014a461 mov dword ptr [0x101569cc], esi */
  w32((uint32_t)(0x101569cc), (ESI));
  /* 1014a467 jmp 0x1014a470 */
  goto L_1014a470;
L_1014a469:;
  /* 1014a469 and dword ptr [0x101569cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101569cc)))&(0x0u); w32((uint32_t)(0x101569cc), (_r)); fl_logic(_r,32); }
L_1014a470:;
  /* 1014a470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a472 mov edi, 0x101569c0 */
  EDI = (0x101569c0u);
  /* 1014a477 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a478 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a479 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a47a jmp 0x1014a48a */
  goto L_1014a48a;
L_1014a47c:;
  /* 1014a47c cmp dword ptr [0x101567f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101567f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a483 je 0x1014a494 */
  if (C.zf) goto L_1014a494;
L_1014a485:;
  /* 1014a485 call 0x1014a523 */
  push32(0x1014a48au); f_1014a523();
L_1014a48a:;
  /* 1014a48a call 0x1014a54c */
  push32(0x1014a48fu); f_1014a54c();
  /* 1014a48f jmp 0x1014a320 */
  goto L_1014a320;
L_1014a494:;
  /* 1014a494 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1014a497:;
  /* 1014a497 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1014a499 call 0x10149f84 */
  push32(0x1014a49eu); f_10149f84();
  /* 1014a49e pop ecx */
  ECX = (pop32());
  /* 1014a49f mov eax, esi */
  EAX = (ESI);
  /* 1014a4a1 pop edi */
  EDI = (pop32());
  /* 1014a4a2 pop esi */
  ESI = (pop32());
  /* 1014a4a3 pop ebx */
  EBX = (pop32());
  /* 1014a4a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a4a5 ret  */
  ESPCHK(0x1014a2f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a6 @ 0x1014a4a6 (74 bytes, 15 insns) */
void f_1014a4a6(void) {
  FTRACE(0x1014a4a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a4a6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014a4aa and dword ptr [0x101567f0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101567f0)))&(0x0u); w32((uint32_t)(0x101567f0), (_r)); fl_logic(_r,32); }
  /* 1014a4b1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a4b4 jne 0x1014a4c6 */
  if (!C.zf) goto L_1014a4c6;
  /* 1014a4b6 mov dword ptr [0x101567f0], 1 */
  w32((uint32_t)(0x101567f0), (0x1u));
  /* 1014a4c0 jmp dword ptr [0x1014e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1014e0a4)))); return;
L_1014a4c6:;
  /* 1014a4c6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a4c9 jne 0x1014a4db */
  if (!C.zf) goto L_1014a4db;
  /* 1014a4cb mov dword ptr [0x101567f0], 1 */
  w32((uint32_t)(0x101567f0), (0x1u));
  /* 1014a4d5 jmp dword ptr [0x1014e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1014e0a0)))); return;
L_1014a4db:;
  /* 1014a4db cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a4de jne 0x1014a4ef */
  if (!C.zf) goto L_1014a4ef;
  /* 1014a4e0 mov eax, dword ptr [0x10156828] */
  EAX = (r32((uint32_t)(0x10156828)));
  /* 1014a4e5 mov dword ptr [0x101567f0], 1 */
  w32((uint32_t)(0x101567f0), (0x1u));
L_1014a4ef:;
  /* 1014a4ef ret  */
  ESPCHK(0x1014a4a6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4f0 @ 0x1014a4f0 (51 bytes, 19 insns) */
void f_1014a4f0(void) {
  FTRACE(0x1014a4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a4f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014a4f4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a4f9 je 0x1014a51d */
  if (C.zf) goto L_1014a51d;
  /* 1014a4fb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a4fe je 0x1014a517 */
  if (C.zf) goto L_1014a517;
  /* 1014a500 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a503 je 0x1014a511 */
  if (C.zf) goto L_1014a511;
  /* 1014a505 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014a506 je 0x1014a50b */
  if (C.zf) goto L_1014a50b;
  /* 1014a508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a50a ret  */
  ESPCHK(0x1014a4f0u, _esp0);
  ESP += 4; return;
L_1014a50b:;
  /* 1014a50b mov eax, 0x404 */
  EAX = (0x404u);
  /* 1014a510 ret  */
  ESPCHK(0x1014a4f0u, _esp0);
  ESP += 4; return;
L_1014a511:;
  /* 1014a511 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1014a516 ret  */
  ESPCHK(0x1014a4f0u, _esp0);
  ESP += 4; return;
L_1014a517:;
  /* 1014a517 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1014a51c ret  */
  ESPCHK(0x1014a4f0u, _esp0);
  ESP += 4; return;
L_1014a51d:;
  /* 1014a51d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1014a522 ret  */
  ESPCHK(0x1014a4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a523 @ 0x1014a523 (41 bytes, 17 insns) */
void f_1014a523(void) {
  FTRACE(0x1014a523u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a523 push edi */
  push32((uint32_t)(EDI));
  /* 1014a524 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1014a526 pop ecx */
  ECX = (pop32());
  /* 1014a527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a529 mov edi, 0x10156ae0 */
  EDI = (0x10156ae0u);
  /* 1014a52e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1014a530 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1014a531 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a533 mov edi, 0x101569c0 */
  EDI = (0x101569c0u);
  /* 1014a538 mov dword ptr [0x101569b4], eax */
  w32((uint32_t)(0x101569b4), (EAX));
  /* 1014a53d mov dword ptr [0x101569cc], eax */
  w32((uint32_t)(0x101569cc), (EAX));
  /* 1014a542 mov dword ptr [0x10156be4], eax */
  w32((uint32_t)(0x10156be4), (EAX));
  /* 1014a547 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a548 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a549 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1014a54a pop edi */
  EDI = (pop32());
  /* 1014a54b ret  */
  ESPCHK(0x1014a523u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a54c @ 0x1014a54c (389 bytes, 124 insns) */
void f_1014a54c(void) {
  FTRACE(0x1014a54cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a54c push ebp */
  push32((uint32_t)(EBP));
  /* 1014a54d mov ebp, esp */
  EBP = (ESP);
  /* 1014a54f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a555 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1014a558 push esi */
  push32((uint32_t)(ESI));
  /* 1014a559 push eax */
  push32((uint32_t)(EAX));
  /* 1014a55a push dword ptr [0x101569b4] */
  push32((uint32_t)(r32((uint32_t)(0x101569b4))));
  /* 1014a560 call dword ptr [0x1014e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e09c))), 0x1014a566u);
  /* 1014a566 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a569 jne 0x1014a685 */
  if (!C.zf) goto L_1014a685;
  /* 1014a56f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a571 mov esi, 0x100 */
  ESI = (0x100u);
L_1014a576:;
  /* 1014a576 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1014a57d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a57e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a580 jb 0x1014a576 */
  if (C.cf) goto L_1014a576;
  /* 1014a582 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1014a585 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1014a58c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014a58e je 0x1014a5c7 */
  if (C.zf) goto L_1014a5c7;
  /* 1014a590 push ebx */
  push32((uint32_t)(EBX));
  /* 1014a591 push edi */
  push32((uint32_t)(EDI));
  /* 1014a592 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1014a595:;
  /* 1014a595 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1014a598 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1014a59b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a59d ja 0x1014a5bc */
  if ((!C.cf&&!C.zf)) goto L_1014a5bc;
  /* 1014a59f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a5a1 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1014a5a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a5a9 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1014a5ae mov ebx, ecx */
  EBX = (ECX);
  /* 1014a5b0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a5b3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1014a5b5 mov ecx, ebx */
  ECX = (EBX);
  /* 1014a5b7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1014a5ba rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1014a5bc:;
  /* 1014a5bc inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014a5bd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014a5be mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1014a5c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014a5c3 jne 0x1014a595 */
  if (!C.zf) goto L_1014a595;
  /* 1014a5c5 pop edi */
  EDI = (pop32());
  /* 1014a5c6 pop ebx */
  EBX = (pop32());
L_1014a5c7:;
  /* 1014a5c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014a5c9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1014a5cf push dword ptr [0x10156be4] */
  push32((uint32_t)(r32((uint32_t)(0x10156be4))));
  /* 1014a5d5 push dword ptr [0x101569b4] */
  push32((uint32_t)(r32((uint32_t)(0x101569b4))));
  /* 1014a5db push eax */
  push32((uint32_t)(EAX));
  /* 1014a5dc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1014a5e2 push esi */
  push32((uint32_t)(ESI));
  /* 1014a5e3 push eax */
  push32((uint32_t)(EAX));
  /* 1014a5e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014a5e6 call 0x1014c18d */
  push32(0x1014a5ebu); f_1014c18d();
  /* 1014a5eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1014a5ed lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1014a5f3 push dword ptr [0x101569b4] */
  push32((uint32_t)(r32((uint32_t)(0x101569b4))));
  /* 1014a5f9 push esi */
  push32((uint32_t)(ESI));
  /* 1014a5fa push eax */
  push32((uint32_t)(EAX));
  /* 1014a5fb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1014a601 push esi */
  push32((uint32_t)(ESI));
  /* 1014a602 push eax */
  push32((uint32_t)(EAX));
  /* 1014a603 push esi */
  push32((uint32_t)(ESI));
  /* 1014a604 push dword ptr [0x10156be4] */
  push32((uint32_t)(r32((uint32_t)(0x10156be4))));
  /* 1014a60a call 0x1014c2d6 */
  push32(0x1014a60fu); f_1014c2d6();
  /* 1014a60f push 0 */
  push32((uint32_t)(0x0u));
  /* 1014a611 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1014a617 push dword ptr [0x101569b4] */
  push32((uint32_t)(r32((uint32_t)(0x101569b4))));
  /* 1014a61d push esi */
  push32((uint32_t)(ESI));
  /* 1014a61e push eax */
  push32((uint32_t)(EAX));
  /* 1014a61f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1014a625 push esi */
  push32((uint32_t)(ESI));
  /* 1014a626 push eax */
  push32((uint32_t)(EAX));
  /* 1014a627 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1014a62c push dword ptr [0x10156be4] */
  push32((uint32_t)(r32((uint32_t)(0x10156be4))));
  /* 1014a632 call 0x1014c2d6 */
  push32(0x1014a637u); f_1014c2d6();
  /* 1014a637 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a63a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a63c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1014a642:;
  /* 1014a642 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1014a645 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1014a648 je 0x1014a660 */
  if (C.zf) goto L_1014a660;
  /* 1014a64a or byte ptr [eax + 0x10156ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a651 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1014a658:;
  /* 1014a658 mov byte ptr [eax + 0x101569e0], dl */
  w8((uint32_t)(EAX + 0x101569e0), (DL));
  /* 1014a65e jmp 0x1014a67c */
  goto L_1014a67c;
L_1014a660:;
  /* 1014a660 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1014a663 je 0x1014a675 */
  if (C.zf) goto L_1014a675;
  /* 1014a665 or byte ptr [eax + 0x10156ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a66c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1014a673 jmp 0x1014a658 */
  goto L_1014a658;
L_1014a675:;
  /* 1014a675 and byte ptr [eax + 0x101569e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101569e0)))&(0x0u); w8((uint32_t)(EAX + 0x101569e0), (_r)); fl_logic(_r,8); }
L_1014a67c:;
  /* 1014a67c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a67d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a67e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014a67f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a681 jb 0x1014a642 */
  if (C.cf) goto L_1014a642;
  /* 1014a683 jmp 0x1014a6ce */
  goto L_1014a6ce;
L_1014a685:;
  /* 1014a685 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014a687 mov esi, 0x100 */
  ESI = (0x100u);
L_1014a68c:;
  /* 1014a68c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a68f jb 0x1014a6aa */
  if (C.cf) goto L_1014a6aa;
  /* 1014a691 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a694 ja 0x1014a6aa */
  if ((!C.cf&&!C.zf)) goto L_1014a6aa;
  /* 1014a696 or byte ptr [eax + 0x10156ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a69d mov cl, al */
  CL = (AL);
  /* 1014a69f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1014a6a2:;
  /* 1014a6a2 mov byte ptr [eax + 0x101569e0], cl */
  w8((uint32_t)(EAX + 0x101569e0), (CL));
  /* 1014a6a8 jmp 0x1014a6c9 */
  goto L_1014a6c9;
L_1014a6aa:;
  /* 1014a6aa cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a6ad jb 0x1014a6c2 */
  if (C.cf) goto L_1014a6c2;
  /* 1014a6af cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a6b2 ja 0x1014a6c2 */
  if ((!C.cf&&!C.zf)) goto L_1014a6c2;
  /* 1014a6b4 or byte ptr [eax + 0x10156ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10156ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10156ae1), (_r)); fl_logic(_r,8); }
  /* 1014a6bb mov cl, al */
  CL = (AL);
  /* 1014a6bd sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014a6c0 jmp 0x1014a6a2 */
  goto L_1014a6a2;
L_1014a6c2:;
  /* 1014a6c2 and byte ptr [eax + 0x101569e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x101569e0)))&(0x0u); w8((uint32_t)(EAX + 0x101569e0), (_r)); fl_logic(_r,8); }
L_1014a6c9:;
  /* 1014a6c9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014a6ca cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a6cc jb 0x1014a68c */
  if (C.cf) goto L_1014a68c;
L_1014a6ce:;
  /* 1014a6ce pop esi */
  ESI = (pop32());
  /* 1014a6cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a6d0 ret  */
  ESPCHK(0x1014a54cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d1 @ 0x1014a6d1 (28 bytes, 7 insns) */
void f_1014a6d1(void) {
  FTRACE(0x1014a6d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a6d1 cmp dword ptr [0x10157d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10157d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a6d8 jne 0x1014a6ec */
  if (!C.zf) goto L_1014a6ec;
  /* 1014a6da push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1014a6dc call 0x1014a2f9 */
  push32(0x1014a6e1u); f_1014a2f9();
  /* 1014a6e1 pop ecx */
  ECX = (pop32());
  /* 1014a6e2 mov dword ptr [0x10157d28], 1 */
  w32((uint32_t)(0x10157d28), (0x1u));
L_1014a6ec:;
  /* 1014a6ec ret  */
  ESPCHK(0x1014a6d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x1014a6f0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1014a6f0(void) {
  FTRACE(0x1014a6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014a6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1014a6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1014a6f3 push edi */
  push32((uint32_t)(EDI));
  /* 1014a6f4 push esi */
  push32((uint32_t)(ESI));
  /* 1014a6f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014a6f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014a6fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a6fe mov eax, ecx */
  EAX = (ECX);
  /* 1014a700 mov edx, ecx */
  EDX = (ECX);
  /* 1014a702 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a704 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a706 jbe 0x1014a710 */
  if ((C.cf||C.zf)) goto L_1014a710;
  /* 1014a708 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a70a jb 0x1014a888 */
  if (C.cf) goto L_1014a888;
L_1014a710:;
  /* 1014a710 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1014a716 jne 0x1014a72c */
  if (!C.zf) goto L_1014a72c;
  /* 1014a718 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a71b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1014a71e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a721 jb 0x1014a74c */
  if (C.cf) goto L_1014a74c;
  /* 1014a723 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a725 jmp dword ptr [edx*4 + 0x1014a838] */
  switch (EDX) {
    case 0: goto L_1014a848;
    case 1: goto L_1014a850;
    case 2: goto L_1014a85c;
    case 3: goto L_1014a870;
    default: x86_unimpl("switch@0x1014a725 out of table"); return;
  }
L_1014a72c:;
  /* 1014a72c mov eax, edi */
  EAX = (EDI);
  /* 1014a72e mov edx, 3 */
  EDX = (0x3u);
  /* 1014a733 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a736 jb 0x1014a744 */
  if (C.cf) goto L_1014a744;
  /* 1014a738 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1014a73b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a73d jmp dword ptr [eax*4 + 0x1014a750] */
  switch (EAX) {
    case 1: goto L_1014a760;
    case 2: goto L_1014a78c;
    case 3: goto L_1014a7b0;
    default: x86_unimpl("switch@0x1014a73d out of table"); return;
  }
L_1014a744:;
  /* 1014a744 jmp dword ptr [ecx*4 + 0x1014a848] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1014a848)))); return;
  /* 1014a74b nop  */
  /* nop */
L_1014a74c:;
  /* 1014a74c jmp dword ptr [ecx*4 + 0x1014a7cc] */
  switch (ECX) {
    case 0: goto L_1014a82f;
    case 1: goto L_1014a81c;
    case 2: goto L_1014a814;
    case 3: goto L_1014a80c;
    case 4: goto L_1014a804;
    case 5: goto L_1014a7fc;
    case 6: goto L_1014a7f4;
    case 7: goto L_1014a7ec;
    default: x86_unimpl("switch@0x1014a74c out of table"); return;
  }
  /* 1014a753 nop  */
  /* nop */
L_1014a760:;
  /* 1014a760 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a762 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a764 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a766 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014a769 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014a76c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014a76f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a772 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014a775 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a778 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a77b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a77e jb 0x1014a74c */
  if (C.cf) goto L_1014a74c;
  /* 1014a780 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a782 jmp dword ptr [edx*4 + 0x1014a838] */
  switch (EDX) {
    case 0: goto L_1014a848;
    case 1: goto L_1014a850;
    case 2: goto L_1014a85c;
    case 3: goto L_1014a870;
    default: x86_unimpl("switch@0x1014a782 out of table"); return;
  }
  /* 1014a789 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a78c:;
  /* 1014a78c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a78e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a790 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a792 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014a795 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a798 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014a79b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a79e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a7a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a7a4 jb 0x1014a74c */
  if (C.cf) goto L_1014a74c;
  /* 1014a7a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a7a8 jmp dword ptr [edx*4 + 0x1014a838] */
  switch (EDX) {
    case 0: goto L_1014a848;
    case 1: goto L_1014a850;
    case 2: goto L_1014a85c;
    case 3: goto L_1014a870;
    default: x86_unimpl("switch@0x1014a7a8 out of table"); return;
  }
  /* 1014a7af nop  */
  /* nop */
L_1014a7b0:;
  /* 1014a7b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a7b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a7b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a7b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014a7b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a7ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014a7bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a7be jb 0x1014a74c */
  if (C.cf) goto L_1014a74c;
  /* 1014a7c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a7c2 jmp dword ptr [edx*4 + 0x1014a838] */
  switch (EDX) {
    case 0: goto L_1014a848;
    case 1: goto L_1014a850;
    case 2: goto L_1014a85c;
    case 3: goto L_1014a870;
    default: x86_unimpl("switch@0x1014a7c2 out of table"); return;
  }
  /* 1014a7c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a7ec:;
  /* 1014a7ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1014a7f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1014a7f4:;
  /* 1014a7f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1014a7f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1014a7fc:;
  /* 1014a7fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1014a800 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1014a804:;
  /* 1014a804 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1014a808 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1014a80c:;
  /* 1014a80c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1014a810 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1014a814:;
  /* 1014a814 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1014a818 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1014a81c:;
  /* 1014a81c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1014a820 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1014a824 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1014a82b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a82d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1014a82f:;
  /* 1014a82f jmp dword ptr [edx*4 + 0x1014a838] */
  switch (EDX) {
    case 0: goto L_1014a848;
    case 1: goto L_1014a850;
    case 2: goto L_1014a85c;
    case 3: goto L_1014a870;
    default: x86_unimpl("switch@0x1014a82f out of table"); return;
  }
  /* 1014a836 mov edi, edi */
  EDI = (EDI);
L_1014a848:;
  /* 1014a848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a84b pop esi */
  ESI = (pop32());
  /* 1014a84c pop edi */
  EDI = (pop32());
  /* 1014a84d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a84e ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a84f nop  */
  /* nop */
L_1014a850:;
  /* 1014a850 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a852 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a857 pop esi */
  ESI = (pop32());
  /* 1014a858 pop edi */
  EDI = (pop32());
  /* 1014a859 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a85a ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a85b nop  */
  /* nop */
L_1014a85c:;
  /* 1014a85c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a85e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a860 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014a863 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014a866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a869 pop esi */
  ESI = (pop32());
  /* 1014a86a pop edi */
  EDI = (pop32());
  /* 1014a86b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a86c ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a86d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a870:;
  /* 1014a870 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014a872 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014a874 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014a877 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014a87a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014a87d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014a880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a883 pop esi */
  ESI = (pop32());
  /* 1014a884 pop edi */
  EDI = (pop32());
  /* 1014a885 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a886 ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a887 nop  */
  /* nop */
L_1014a888:;
  /* 1014a888 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1014a88c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1014a890 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1014a896 jne 0x1014a8bc */
  if (!C.zf) goto L_1014a8bc;
  /* 1014a898 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a89b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1014a89e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a8a1 jb 0x1014a8b0 */
  if (C.cf) goto L_1014a8b0;
  /* 1014a8a3 std  */
  C.df=1;
  /* 1014a8a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a8a6 cld  */
  C.df=0;
  /* 1014a8a7 jmp dword ptr [edx*4 + 0x1014a9d0] */
  switch (EDX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a8a7 out of table"); return;
  }
  /* 1014a8ae mov edi, edi */
  EDI = (EDI);
L_1014a8b0:;
  /* 1014a8b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014a8b2 jmp dword ptr [ecx*4 + 0x1014a980] */
  switch (ECX) {
    case 0: goto L_1014a9c7;
    default: x86_unimpl("switch@0x1014a8b2 out of table"); return;
  }
  /* 1014a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a8bc:;
  /* 1014a8bc mov eax, edi */
  EAX = (EDI);
  /* 1014a8be mov edx, 3 */
  EDX = (0x3u);
  /* 1014a8c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a8c6 jb 0x1014a8d4 */
  if (C.cf) goto L_1014a8d4;
  /* 1014a8c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1014a8cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a8cd jmp dword ptr [eax*4 + 0x1014a8d8] */
  switch (EAX) {
    case 1: goto L_1014a8e8;
    case 2: goto L_1014a908;
    case 3: goto L_1014a930;
    default: x86_unimpl("switch@0x1014a8cd out of table"); return;
  }
L_1014a8d4:;
  /* 1014a8d4 jmp dword ptr [ecx*4 + 0x1014a9d0] */
  switch (ECX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a8d4 out of table"); return;
  }
  /* 1014a8db nop  */
  /* nop */
L_1014a8e8:;
  /* 1014a8e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014a8eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a8ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014a8f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1014a8f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a8f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014a8f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a8f8 jb 0x1014a8b0 */
  if (C.cf) goto L_1014a8b0;
  /* 1014a8fa std  */
  C.df=1;
  /* 1014a8fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a8fd cld  */
  C.df=0;
  /* 1014a8fe jmp dword ptr [edx*4 + 0x1014a9d0] */
  switch (EDX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a8fe out of table"); return;
  }
  /* 1014a905 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a908:;
  /* 1014a908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014a90b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a90d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014a910 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014a913 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a916 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014a919 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a91c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a91f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a922 jb 0x1014a8b0 */
  if (C.cf) goto L_1014a8b0;
  /* 1014a924 std  */
  C.df=1;
  /* 1014a925 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a927 cld  */
  C.df=0;
  /* 1014a928 jmp dword ptr [edx*4 + 0x1014a9d0] */
  switch (EDX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a928 out of table"); return;
  }
  /* 1014a92f nop  */
  /* nop */
L_1014a930:;
  /* 1014a930 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014a933 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014a935 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014a938 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014a93b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014a93e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014a941 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014a944 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014a947 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a94a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014a94d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014a950 jb 0x1014a8b0 */
  if (C.cf) goto L_1014a8b0;
  /* 1014a956 std  */
  C.df=1;
  /* 1014a957 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1014a959 cld  */
  C.df=0;
  /* 1014a95a jmp dword ptr [edx*4 + 0x1014a9d0] */
  switch (EDX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a95a out of table"); return;
  }
  /* 1014a961 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1014a964 test byte ptr [ecx - 0x5673efec], ch */
  { uint32_t _r=(r8((uint32_t)(ECX + -0x5673efec)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1014a96a adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014a96c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1014a96d test eax, 0xa99c1014 */
  { uint32_t _r=(EAX)&(0xa99c1014u); fl_logic(_r,32); }
  /* 1014a972 adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014a974 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1014a975 test eax, 0xa9ac1014 */
  { uint32_t _r=(EAX)&(0xa9ac1014u); fl_logic(_r,32); }
  /* 1014a97a adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014a97c mov ah, 0xa9 */
  AH = (0xa9u);
  /* 1014a97e adc al, 0x10 */
  { uint32_t _a=(AL),_b=(0x10u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014a984 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1014a988 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1014a98c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1014a990 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1014a994 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1014a998 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1014a99c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1014a9a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1014a9a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1014a9a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1014a9ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1014a9b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1014a9b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1014a9b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1014a9bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1014a9c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014a9c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1014a9c7:;
  /* 1014a9c7 jmp dword ptr [edx*4 + 0x1014a9d0] */
  switch (EDX) {
    case 0: goto L_1014a9e0;
    case 1: goto L_1014a9e8;
    case 2: goto L_1014a9f8;
    case 3: goto L_1014aa0c;
    default: x86_unimpl("switch@0x1014a9c7 out of table"); return;
  }
  /* 1014a9ce mov edi, edi */
  EDI = (EDI);
L_1014a9e0:;
  /* 1014a9e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a9e3 pop esi */
  ESI = (pop32());
  /* 1014a9e4 pop edi */
  EDI = (pop32());
  /* 1014a9e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a9e6 ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a9e7 nop  */
  /* nop */
L_1014a9e8:;
  /* 1014a9e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014a9eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014a9ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014a9f1 pop esi */
  ESI = (pop32());
  /* 1014a9f2 pop edi */
  EDI = (pop32());
  /* 1014a9f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014a9f4 ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014a9f8:;
  /* 1014a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014a9fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014a9fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014aa01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014aa04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014aa07 pop esi */
  ESI = (pop32());
  /* 1014aa08 pop edi */
  EDI = (pop32());
  /* 1014aa09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014aa0a ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
  /* 1014aa0b nop  */
  /* nop */
L_1014aa0c:;
  /* 1014aa0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1014aa0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1014aa12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1014aa15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1014aa18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014aa1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1014aa1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014aa21 pop esi */
  ESI = (pop32());
  /* 1014aa22 pop edi */
  EDI = (pop32());
  /* 1014aa23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014aa24 ret  */
  ESPCHK(0x1014a6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa25 @ 0x1014aa25 (23 bytes, 7 insns) */
void f_1014aa25(void) {
  FTRACE(0x1014aa25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014aa25 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014aa27 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1014aa2b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1014aa2f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1014aa33 call 0x1014aa3c */
  push32(0x1014aa38u); f_1014aa3c();
  /* 1014aa38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014aa3b ret  */
  ESPCHK(0x1014aa25u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa3c @ 0x1014aa3c (517 bytes, 195 insns) */
void f_1014aa3c(void) {
  FTRACE(0x1014aa3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014aa3c push ebp */
  push32((uint32_t)(EBP));
  /* 1014aa3d mov ebp, esp */
  EBP = (ESP);
  /* 1014aa3f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014aa42 push ebx */
  push32((uint32_t)(EBX));
  /* 1014aa43 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014aa47 push esi */
  push32((uint32_t)(ESI));
  /* 1014aa48 push edi */
  push32((uint32_t)(EDI));
  /* 1014aa49 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014aa4c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014aa4e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1014aa51 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1014aa54:;
  /* 1014aa54 cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aa5b jle 0x1014aa6c */
  if ((C.zf||C.sf!=C.of)) goto L_1014aa6c;
  /* 1014aa5d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014aa60 push 8 */
  push32((uint32_t)(0x8u));
  /* 1014aa62 push eax */
  push32((uint32_t)(EAX));
  /* 1014aa63 call 0x101492db */
  push32(0x1014aa68u); f_101492db();
  /* 1014aa68 pop ecx */
  ECX = (pop32());
  /* 1014aa69 pop ecx */
  ECX = (pop32());
  /* 1014aa6a jmp 0x1014aa7b */
  goto L_1014aa7b;
L_1014aa6c:;
  /* 1014aa6c mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014aa72 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014aa75 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014aa78 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1014aa7b:;
  /* 1014aa7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014aa7d je 0x1014aa84 */
  if (C.zf) goto L_1014aa84;
  /* 1014aa7f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1014aa81 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014aa82 jmp 0x1014aa54 */
  goto L_1014aa54;
L_1014aa84:;
  /* 1014aa84 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aa87 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1014aa8a jne 0x1014aa92 */
  if (!C.zf) goto L_1014aa92;
  /* 1014aa8c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1014aa90 jmp 0x1014aa97 */
  goto L_1014aa97;
L_1014aa92:;
  /* 1014aa92 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aa95 jne 0x1014aa9d */
  if (!C.zf) goto L_1014aa9d;
L_1014aa97:;
  /* 1014aa97 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1014aa99 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014aa9a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1014aa9d:;
  /* 1014aa9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014aaa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014aaa2 jl 0x1014ac31 */
  if ((C.sf!=C.of)) goto L_1014ac31;
  /* 1014aaa8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aaab je 0x1014ac31 */
  if (C.zf) goto L_1014ac31;
  /* 1014aab1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aab4 jg 0x1014ac31 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014ac31;
  /* 1014aaba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1014aabc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014aabe pop ecx */
  ECX = (pop32());
  /* 1014aabf jne 0x1014aae5 */
  if (!C.zf) goto L_1014aae5;
  /* 1014aac1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aac4 je 0x1014aacf */
  if (C.zf) goto L_1014aacf;
  /* 1014aac6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1014aacd jmp 0x1014ab01 */
  goto L_1014ab01;
L_1014aacf:;
  /* 1014aacf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014aad1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aad3 je 0x1014aae2 */
  if (C.zf) goto L_1014aae2;
  /* 1014aad5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aad7 je 0x1014aae2 */
  if (C.zf) goto L_1014aae2;
  /* 1014aad9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1014aae0 jmp 0x1014ab01 */
  goto L_1014ab01;
L_1014aae2:;
  /* 1014aae2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1014aae5:;
  /* 1014aae5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aae8 jne 0x1014ab01 */
  if (!C.zf) goto L_1014ab01;
  /* 1014aaea cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aaed jne 0x1014ab01 */
  if (!C.zf) goto L_1014ab01;
  /* 1014aaef mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014aaf1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aaf3 je 0x1014aaf9 */
  if (C.zf) goto L_1014aaf9;
  /* 1014aaf5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014aaf7 jne 0x1014ab01 */
  if (!C.zf) goto L_1014ab01;
L_1014aaf9:;
  /* 1014aaf9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1014aafc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014aafd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014aafe mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1014ab01:;
  /* 1014ab01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014ab04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014ab06 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1014ab09 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1014ab0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1014ab11:;
  /* 1014ab11 cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ab18 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1014ab1b jle 0x1014ab29 */
  if ((C.zf||C.sf!=C.of)) goto L_1014ab29;
  /* 1014ab1d push 4 */
  push32((uint32_t)(0x4u));
  /* 1014ab1f push esi */
  push32((uint32_t)(ESI));
  /* 1014ab20 call 0x101492db */
  push32(0x1014ab25u); f_101492db();
  /* 1014ab25 pop ecx */
  ECX = (pop32());
  /* 1014ab26 pop ecx */
  ECX = (pop32());
  /* 1014ab27 jmp 0x1014ab34 */
  goto L_1014ab34;
L_1014ab29:;
  /* 1014ab29 mov eax, dword ptr [0x101509b0] */
  EAX = (r32((uint32_t)(0x101509b0)));
  /* 1014ab2e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1014ab31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1014ab34:;
  /* 1014ab34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ab36 je 0x1014ab40 */
  if (C.zf) goto L_1014ab40;
  /* 1014ab38 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014ab3b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ab3e jmp 0x1014ab72 */
  goto L_1014ab72;
L_1014ab40:;
  /* 1014ab40 cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ab47 jle 0x1014ab54 */
  if ((C.zf||C.sf!=C.of)) goto L_1014ab54;
  /* 1014ab49 push edi */
  push32((uint32_t)(EDI));
  /* 1014ab4a push esi */
  push32((uint32_t)(ESI));
  /* 1014ab4b call 0x101492db */
  push32(0x1014ab50u); f_101492db();
  /* 1014ab50 pop ecx */
  ECX = (pop32());
  /* 1014ab51 pop ecx */
  ECX = (pop32());
  /* 1014ab52 jmp 0x1014ab5f */
  goto L_1014ab5f;
L_1014ab54:;
  /* 1014ab54 mov eax, dword ptr [0x101509b0] */
  EAX = (r32((uint32_t)(0x101509b0)));
  /* 1014ab59 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1014ab5d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1014ab5f:;
  /* 1014ab5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ab61 je 0x1014abad */
  if (C.zf) goto L_1014abad;
  /* 1014ab63 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014ab66 push eax */
  push32((uint32_t)(EAX));
  /* 1014ab67 call 0x1014d018 */
  push32(0x1014ab6cu); f_1014d018();
  /* 1014ab6c pop ecx */
  ECX = (pop32());
  /* 1014ab6d mov ecx, eax */
  ECX = (EAX);
  /* 1014ab6f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1014ab72:;
  /* 1014ab72 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ab75 jae 0x1014abad */
  if (!C.cf) goto L_1014abad;
  /* 1014ab77 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1014ab7a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1014ab7e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ab81 jb 0x1014ab97 */
  if (C.cf) goto L_1014ab97;
  /* 1014ab83 jne 0x1014ab91 */
  if (!C.zf) goto L_1014ab91;
  /* 1014ab85 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014ab88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014ab8a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1014ab8d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ab8f jbe 0x1014ab97 */
  if ((C.cf||C.zf)) goto L_1014ab97;
L_1014ab91:;
  /* 1014ab91 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1014ab95 jmp 0x1014aba0 */
  goto L_1014aba0;
L_1014ab97:;
  /* 1014ab97 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014ab9b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ab9d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1014aba0:;
  /* 1014aba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014aba3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014aba6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1014aba8 jmp 0x1014ab11 */
  goto L_1014ab11;
L_1014abad:;
  /* 1014abad mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1014abb0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1014abb3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014abb6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1014abb8 jne 0x1014abca */
  if (!C.zf) goto L_1014abca;
  /* 1014abba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014abbc je 0x1014abc4 */
  if (C.zf) goto L_1014abc4;
  /* 1014abbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014abc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1014abc4:;
  /* 1014abc4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014abc8 jmp 0x1014ac15 */
  goto L_1014ac15;
L_1014abca:;
  /* 1014abca test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1014abcc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1014abd1 jne 0x1014abee */
  if (!C.zf) goto L_1014abee;
  /* 1014abd3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1014abd5 jne 0x1014ac15 */
  if (!C.zf) goto L_1014ac15;
  /* 1014abd7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1014abda je 0x1014abe5 */
  if (C.zf) goto L_1014abe5;
  /* 1014abdc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014abe3 ja 0x1014abee */
  if ((!C.cf&&!C.zf)) goto L_1014abee;
L_1014abe5:;
  /* 1014abe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014abe7 jne 0x1014ac15 */
  if (!C.zf) goto L_1014ac15;
  /* 1014abe9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014abec jbe 0x1014ac15 */
  if ((C.cf||C.zf)) goto L_1014ac15;
L_1014abee:;
  /* 1014abee call 0x1014be81 */
  push32(0x1014abf3u); f_1014be81();
  /* 1014abf3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1014abf7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1014abfd je 0x1014ac05 */
  if (C.zf) goto L_1014ac05;
  /* 1014abff or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014ac03 jmp 0x1014ac15 */
  goto L_1014ac15;
L_1014ac05:;
  /* 1014ac05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1014ac08 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1014ac0a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1014ac0c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ac0e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014ac10 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ac12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1014ac15:;
  /* 1014ac15 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014ac17 je 0x1014ac1e */
  if (C.zf) goto L_1014ac1e;
  /* 1014ac19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014ac1c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1014ac1e:;
  /* 1014ac1e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1014ac22 je 0x1014ac2c */
  if (C.zf) goto L_1014ac2c;
  /* 1014ac24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014ac27 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014ac29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1014ac2c:;
  /* 1014ac2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014ac2f jmp 0x1014ac3c */
  goto L_1014ac3c;
L_1014ac31:;
  /* 1014ac31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014ac34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ac36 je 0x1014ac3a */
  if (C.zf) goto L_1014ac3a;
  /* 1014ac38 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1014ac3a:;
  /* 1014ac3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014ac3c:;
  /* 1014ac3c pop edi */
  EDI = (pop32());
  /* 1014ac3d pop esi */
  ESI = (pop32());
  /* 1014ac3e pop ebx */
  EBX = (pop32());
  /* 1014ac3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014ac40 ret  */
  ESPCHK(0x1014aa3cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1014ac60 (193 bytes, 90 insns) */
void f_1014ac60(void) {
  FTRACE(0x1014ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ac60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014ac62 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1014ac66 push ebx */
  push32((uint32_t)(EBX));
  /* 1014ac67 mov ebx, eax */
  EBX = (EAX);
  /* 1014ac69 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1014ac6c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014ac70 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1014ac76 je 0x1014ac8b */
  if (C.zf) goto L_1014ac8b;
L_1014ac78:;
  /* 1014ac78 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1014ac7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014ac7b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ac7d je 0x1014ac50 */
  if (C.zf) { jmp_ind(0x1014ac50u); return; }
  /* 1014ac7f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1014ac81 je 0x1014acd4 */
  if (C.zf) goto L_1014acd4;
  /* 1014ac83 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1014ac89 jne 0x1014ac78 */
  if (!C.zf) goto L_1014ac78;
L_1014ac8b:;
  /* 1014ac8b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1014ac8d push edi */
  push32((uint32_t)(EDI));
  /* 1014ac8e mov eax, ebx */
  EAX = (EBX);
  /* 1014ac90 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1014ac93 push esi */
  push32((uint32_t)(ESI));
  /* 1014ac94 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1014ac96:;
  /* 1014ac96 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1014ac98 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1014ac9d mov eax, ecx */
  EAX = (ECX);
  /* 1014ac9f mov esi, edi */
  ESI = (EDI);
  /* 1014aca1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1014aca3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014aca5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014aca7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1014acaa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014acad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1014acaf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1014acb1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014acb4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1014acba jne 0x1014acd8 */
  if (!C.zf) goto L_1014acd8;
  /* 1014acbc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1014acc1 je 0x1014ac96 */
  if (C.zf) goto L_1014ac96;
  /* 1014acc3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1014acc8 jne 0x1014acd2 */
  if (!C.zf) goto L_1014acd2;
  /* 1014acca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1014acd0 jne 0x1014ac96 */
  if (!C.zf) goto L_1014ac96;
L_1014acd2:;
  /* 1014acd2 pop esi */
  ESI = (pop32());
  /* 1014acd3 pop edi */
  EDI = (pop32());
L_1014acd4:;
  /* 1014acd4 pop ebx */
  EBX = (pop32());
  /* 1014acd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014acd7 ret  */
  ESPCHK(0x1014ac60u, _esp0);
  ESP += 4; return;
L_1014acd8:;
  /* 1014acd8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1014acdb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014acdd je 0x1014ad15 */
  if (C.zf) goto L_1014ad15;
  /* 1014acdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014ace1 je 0x1014acd2 */
  if (C.zf) goto L_1014acd2;
  /* 1014ace3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ace5 je 0x1014ad0e */
  if (C.zf) goto L_1014ad0e;
  /* 1014ace7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1014ace9 je 0x1014acd2 */
  if (C.zf) goto L_1014acd2;
  /* 1014aceb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1014acee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014acf0 je 0x1014ad07 */
  if (C.zf) goto L_1014ad07;
  /* 1014acf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014acf4 je 0x1014acd2 */
  if (C.zf) goto L_1014acd2;
  /* 1014acf6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014acf8 je 0x1014ad00 */
  if (C.zf) goto L_1014ad00;
  /* 1014acfa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1014acfc je 0x1014acd2 */
  if (C.zf) goto L_1014acd2;
  /* 1014acfe jmp 0x1014ac96 */
  goto L_1014ac96;
L_1014ad00:;
  /* 1014ad00 pop esi */
  ESI = (pop32());
  /* 1014ad01 pop edi */
  EDI = (pop32());
  /* 1014ad02 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1014ad05 pop ebx */
  EBX = (pop32());
  /* 1014ad06 ret  */
  ESPCHK(0x1014ac60u, _esp0);
  ESP += 4; return;
L_1014ad07:;
  /* 1014ad07 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1014ad0a pop esi */
  ESI = (pop32());
  /* 1014ad0b pop edi */
  EDI = (pop32());
  /* 1014ad0c pop ebx */
  EBX = (pop32());
  /* 1014ad0d ret  */
  ESPCHK(0x1014ac60u, _esp0);
  ESP += 4; return;
L_1014ad0e:;
  /* 1014ad0e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1014ad11 pop esi */
  ESI = (pop32());
  /* 1014ad12 pop edi */
  EDI = (pop32());
  /* 1014ad13 pop ebx */
  EBX = (pop32());
  /* 1014ad14 ret  */
  ESPCHK(0x1014ac60u, _esp0);
  ESP += 4; return;
L_1014ad15:;
  /* 1014ad15 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1014ad18 pop esi */
  ESI = (pop32());
  /* 1014ad19 pop edi */
  EDI = (pop32());
  /* 1014ad1a pop ebx */
  EBX = (pop32());
  /* 1014ad1b ret  */
  ESPCHK(0x1014ac60u, _esp0);
  ESP += 4; return;
  /* 1014ad1c int3  */
  x86_unimpl("int3 @ 0x1014ad1c");
  /* 1014ad1d int3  */
  x86_unimpl("int3 @ 0x1014ad1d");
  /* 1014ad1e int3  */
  x86_unimpl("int3 @ 0x1014ad1e");
  /* 1014ad1f int3  */
  x86_unimpl("int3 @ 0x1014ad1f");
}

/* _strstr @ 0x1014ad20 (128 bytes, 66 insns) */
void f_1014ad20(void) {
  FTRACE(0x1014ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ad20 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014ad24 push edi */
  push32((uint32_t)(EDI));
  /* 1014ad25 push ebx */
  push32((uint32_t)(EBX));
  /* 1014ad26 push esi */
  push32((uint32_t)(ESI));
  /* 1014ad27 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1014ad29 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1014ad2d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014ad2f je 0x1014ad9a */
  if (C.zf) goto L_1014ad9a;
  /* 1014ad31 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1014ad34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1014ad36 je 0x1014ad87 */
  if (C.zf) goto L_1014ad87;
L_1014ad38:;
  /* 1014ad38 mov esi, edi */
  ESI = (EDI);
  /* 1014ad3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1014ad3e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1014ad40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014ad41 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ad43 je 0x1014ad5a */
  if (C.zf) goto L_1014ad5a;
  /* 1014ad45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014ad47 je 0x1014ad54 */
  if (C.zf) goto L_1014ad54;
L_1014ad49:;
  /* 1014ad49 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014ad4b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1014ad4c:;
  /* 1014ad4c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ad4e je 0x1014ad5a */
  if (C.zf) goto L_1014ad5a;
  /* 1014ad50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014ad52 jne 0x1014ad49 */
  if (!C.zf) goto L_1014ad49;
L_1014ad54:;
  /* 1014ad54 pop esi */
  ESI = (pop32());
  /* 1014ad55 pop ebx */
  EBX = (pop32());
  /* 1014ad56 pop edi */
  EDI = (pop32());
  /* 1014ad57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014ad59 ret  */
  ESPCHK(0x1014ad20u, _esp0);
  ESP += 4; return;
L_1014ad5a:;
  /* 1014ad5a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014ad5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014ad5d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ad5f jne 0x1014ad4c */
  if (!C.zf) goto L_1014ad4c;
  /* 1014ad61 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1014ad64:;
  /* 1014ad64 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1014ad67 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1014ad69 je 0x1014ad93 */
  if (C.zf) goto L_1014ad93;
  /* 1014ad6b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014ad6d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ad70 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ad72 jne 0x1014ad38 */
  if (!C.zf) goto L_1014ad38;
  /* 1014ad74 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1014ad77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014ad79 je 0x1014ad93 */
  if (C.zf) goto L_1014ad93;
  /* 1014ad7b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1014ad7e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ad81 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ad83 je 0x1014ad64 */
  if (C.zf) goto L_1014ad64;
  /* 1014ad85 jmp 0x1014ad38 */
  goto L_1014ad38;
L_1014ad87:;
  /* 1014ad87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014ad89 pop esi */
  ESI = (pop32());
  /* 1014ad8a pop ebx */
  EBX = (pop32());
  /* 1014ad8b pop edi */
  EDI = (pop32());
  /* 1014ad8c mov al, dl */
  AL = (DL);
  /* 1014ad8e jmp 0x1014ac66 */
  jmp_ind(0x1014ac66u); return;
L_1014ad93:;
  /* 1014ad93 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1014ad96 pop esi */
  ESI = (pop32());
  /* 1014ad97 pop ebx */
  EBX = (pop32());
  /* 1014ad98 pop edi */
  EDI = (pop32());
  /* 1014ad99 ret  */
  ESPCHK(0x1014ad20u, _esp0);
  ESP += 4; return;
L_1014ad9a:;
  /* 1014ad9a mov eax, edi */
  EAX = (EDI);
  /* 1014ad9c pop esi */
  ESI = (pop32());
  /* 1014ad9d pop ebx */
  EBX = (pop32());
  /* 1014ad9e pop edi */
  EDI = (pop32());
  /* 1014ad9f ret  */
  ESPCHK(0x1014ad20u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1014ada0 (56 bytes, 31 insns) */
void f_1014ada0(void) {
  FTRACE(0x1014ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1014ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1014ada3 push edi */
  push32((uint32_t)(EDI));
  /* 1014ada4 push esi */
  push32((uint32_t)(ESI));
  /* 1014ada5 push ebx */
  push32((uint32_t)(EBX));
  /* 1014ada6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014ada9 jecxz 0x1014add1 */
  x86_unimpl("jecxz @ 0x1014ada9");
  /* 1014adab mov ebx, ecx */
  EBX = (ECX);
  /* 1014adad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014adb0 mov esi, edi */
  ESI = (EDI);
  /* 1014adb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014adb4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1014adb6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014adb8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014adba mov edi, esi */
  EDI = (ESI);
  /* 1014adbc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014adbf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1014adc1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1014adc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014adc6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014adc9 ja 0x1014adcf */
  if ((!C.cf&&!C.zf)) goto L_1014adcf;
  /* 1014adcb je 0x1014add1 */
  if (C.zf) goto L_1014add1;
  /* 1014adcd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014adce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1014adcf:;
  /* 1014adcf not ecx */
  ECX = (~(ECX));
L_1014add1:;
  /* 1014add1 mov eax, ecx */
  EAX = (ECX);
  /* 1014add3 pop ebx */
  EBX = (pop32());
  /* 1014add4 pop esi */
  ESI = (pop32());
  /* 1014add5 pop edi */
  EDI = (pop32());
  /* 1014add6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014add7 ret  */
  ESPCHK(0x1014ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ade0 @ 0x1014ade0 (47 bytes, 17 insns) */
void f_1014ade0(void) {
  FTRACE(0x1014ade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ade0 push ecx */
  push32((uint32_t)(ECX));
  /* 1014ade1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ade6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1014adea jb 0x1014ae00 */
  if (C.cf) goto L_1014ae00;
L_1014adec:;
  /* 1014adec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014adf2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014adf7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1014adf9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014adfe jae 0x1014adec */
  if (!C.cf) goto L_1014adec;
L_1014ae00:;
  /* 1014ae00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ae02 mov eax, esp */
  EAX = (ESP);
  /* 1014ae04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1014ae06 mov esp, ecx */
  ESP = (ECX);
  /* 1014ae08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1014ae0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1014ae0d push eax */
  push32((uint32_t)(EAX));
  /* 1014ae0e ret  */
  ESPCHK(0x1014ade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae0f @ 0x1014ae0f (72 bytes, 17 insns) */
void f_1014ae0f(void) {
  FTRACE(0x1014ae0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ae0f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1014ae14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014ae16 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014ae1c call dword ptr [0x1014e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e098))), 0x1014ae22u);
  /* 1014ae22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ae24 mov dword ptr [0x101569ac], eax */
  w32((uint32_t)(0x101569ac), (EAX));
  /* 1014ae29 jne 0x1014ae2c */
  if (!C.zf) goto L_1014ae2c;
  /* 1014ae2b ret  */
  ESPCHK(0x1014ae0fu, _esp0);
  ESP += 4; return;
L_1014ae2c:;
  /* 1014ae2c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014ae30 and dword ptr [0x101569a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101569a4)))&(0x0u); w32((uint32_t)(0x101569a4), (_r)); fl_logic(_r,32); }
  /* 1014ae37 and dword ptr [0x101569a8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101569a8)))&(0x0u); w32((uint32_t)(0x101569a8), (_r)); fl_logic(_r,32); }
  /* 1014ae3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1014ae40 mov dword ptr [0x101569a0], eax */
  w32((uint32_t)(0x101569a0), (EAX));
  /* 1014ae45 mov dword ptr [0x101569b0], ecx */
  w32((uint32_t)(0x101569b0), (ECX));
  /* 1014ae4b mov dword ptr [0x10156998], 0x10 */
  w32((uint32_t)(0x10156998), (0x10u));
  /* 1014ae55 pop eax */
  EAX = (pop32());
  /* 1014ae56 ret  */
  ESPCHK(0x1014ae0fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae57 @ 0x1014ae57 (43 bytes, 14 insns) */
void f_1014ae57(void) {
  FTRACE(0x1014ae57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ae57 mov eax, dword ptr [0x101569a8] */
  EAX = (r32((uint32_t)(0x101569a8)));
  /* 1014ae5c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1014ae5f mov eax, dword ptr [0x101569ac] */
  EAX = (r32((uint32_t)(0x101569ac)));
  /* 1014ae64 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1014ae67:;
  /* 1014ae67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ae69 jae 0x1014ae7f */
  if (!C.cf) goto L_1014ae7f;
  /* 1014ae6b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014ae6f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ae72 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ae78 jb 0x1014ae81 */
  if (C.cf) goto L_1014ae81;
  /* 1014ae7a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ae7d jmp 0x1014ae67 */
  goto L_1014ae67;
L_1014ae7f:;
  /* 1014ae7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014ae81:;
  /* 1014ae81 ret  */
  ESPCHK(0x1014ae57u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae82 @ 0x1014ae82 (809 bytes, 265 insns) */
void f_1014ae82(void) {
  FTRACE(0x1014ae82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ae82 push ebp */
  push32((uint32_t)(EBP));
  /* 1014ae83 mov ebp, esp */
  EBP = (ESP);
  /* 1014ae85 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ae88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014ae8b push ebx */
  push32((uint32_t)(EBX));
  /* 1014ae8c push esi */
  push32((uint32_t)(ESI));
  /* 1014ae8d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014ae90 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1014ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1014ae94 mov edi, esi */
  EDI = (ESI);
  /* 1014ae96 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ae99 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ae9c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1014ae9f mov ecx, edi */
  ECX = (EDI);
  /* 1014aea1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014aea7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1014aeae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1014aeb1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1014aeb3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014aeb4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1014aeb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1014aeba jne 0x1014b1a6 */
  if (!C.zf) goto L_1014b1a6;
  /* 1014aec0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1014aec3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1014aec6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1014aec9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1014aecc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1014aecf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014aed2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1014aed5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1014aed8 jne 0x1014af58 */
  if (!C.zf) goto L_1014af58;
  /* 1014aeda sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1014aedd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014aede cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aee1 jbe 0x1014aee6 */
  if ((C.cf||C.zf)) goto L_1014aee6;
  /* 1014aee3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1014aee5 pop edx */
  EDX = (pop32());
L_1014aee6:;
  /* 1014aee6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1014aee9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aeec jne 0x1014af3a */
  if (!C.zf) goto L_1014af3a;
  /* 1014aeee cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014aef1 jae 0x1014af11 */
  if (!C.cf) goto L_1014af11;
  /* 1014aef3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014aef8 mov ecx, edx */
  ECX = (EDX);
  /* 1014aefa shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014aefc lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1014af00 not ebx */
  EBX = (~(EBX));
  /* 1014af02 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1014af06 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1014af08 jne 0x1014af32 */
  if (!C.zf) goto L_1014af32;
  /* 1014af0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014af0d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1014af0f jmp 0x1014af32 */
  goto L_1014af32;
L_1014af11:;
  /* 1014af11 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1014af14 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014af19 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014af1b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1014af1f not ebx */
  EBX = (~(EBX));
  /* 1014af21 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1014af28 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1014af2a jne 0x1014af32 */
  if (!C.zf) goto L_1014af32;
  /* 1014af2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014af2f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1014af32:;
  /* 1014af32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014af35 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014af38 jmp 0x1014af3d */
  goto L_1014af3d;
L_1014af3a:;
  /* 1014af3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1014af3d:;
  /* 1014af3d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1014af40 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1014af43 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014af46 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1014af49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014af4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1014af4f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014af52 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1014af55 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1014af58:;
  /* 1014af58 mov edx, ecx */
  EDX = (ECX);
  /* 1014af5a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1014af5d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014af5e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014af61 jbe 0x1014af66 */
  if ((C.cf||C.zf)) goto L_1014af66;
  /* 1014af63 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1014af65 pop edx */
  EDX = (pop32());
L_1014af66:;
  /* 1014af66 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014af69 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1014af6c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1014af6f jne 0x1014b009 */
  if (!C.zf) goto L_1014b009;
  /* 1014af75 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014af78 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014af7b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1014af7e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1014af80 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1014af83 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1014af84 pop esi */
  ESI = (pop32());
  /* 1014af85 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014af87 jbe 0x1014af8b */
  if ((C.cf||C.zf)) goto L_1014af8b;
  /* 1014af89 mov ebx, esi */
  EBX = (ESI);
L_1014af8b:;
  /* 1014af8b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014af8e mov edx, ecx */
  EDX = (ECX);
  /* 1014af90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1014af93 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1014af96 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014af97 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014af99 jbe 0x1014af9d */
  if ((C.cf||C.zf)) goto L_1014af9d;
  /* 1014af9b mov edx, esi */
  EDX = (ESI);
L_1014af9d:;
  /* 1014af9d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014af9f je 0x1014b004 */
  if (C.zf) goto L_1014b004;
  /* 1014afa1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014afa4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1014afa7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014afaa jne 0x1014afec */
  if (!C.zf) goto L_1014afec;
  /* 1014afac cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014afaf jae 0x1014afcd */
  if (!C.cf) goto L_1014afcd;
  /* 1014afb1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1014afb6 mov ecx, ebx */
  ECX = (EBX);
  /* 1014afb8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1014afba not esi */
  ESI = (~(ESI));
  /* 1014afbc and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1014afc0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1014afc4 jne 0x1014afec */
  if (!C.zf) goto L_1014afec;
  /* 1014afc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014afc9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1014afcb jmp 0x1014afec */
  goto L_1014afec;
L_1014afcd:;
  /* 1014afcd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1014afd0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1014afd5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1014afd7 not esi */
  ESI = (~(ESI));
  /* 1014afd9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1014afe0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1014afe4 jne 0x1014afec */
  if (!C.zf) goto L_1014afec;
  /* 1014afe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014afe9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1014afec:;
  /* 1014afec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014afef mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1014aff2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1014aff5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1014aff8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014affb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1014affe mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1014b001 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1014b004:;
  /* 1014b004 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014b007 jmp 0x1014b00c */
  goto L_1014b00c;
L_1014b009:;
  /* 1014b009 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1014b00c:;
  /* 1014b00c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b010 jne 0x1014b01a */
  if (!C.zf) goto L_1014b01a;
  /* 1014b012 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b014 je 0x1014b09b */
  if (C.zf) goto L_1014b09b;
L_1014b01a:;
  /* 1014b01a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014b01d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1014b021 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1014b024 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1014b027 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1014b02a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1014b02d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b030 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1014b033 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b036 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b039 jne 0x1014b09b */
  if (!C.zf) goto L_1014b09b;
  /* 1014b03b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1014b03f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b042 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1014b045 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1014b047 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1014b04b jae 0x1014b072 */
  if (!C.cf) goto L_1014b072;
  /* 1014b04d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014b051 jne 0x1014b061 */
  if (!C.zf) goto L_1014b061;
  /* 1014b053 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014b058 mov ecx, edx */
  ECX = (EDX);
  /* 1014b05a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014b05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b05f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1014b061:;
  /* 1014b061 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014b066 mov ecx, edx */
  ECX = (EDX);
  /* 1014b068 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014b06a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1014b06e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014b070 jmp 0x1014b09b */
  goto L_1014b09b;
L_1014b072:;
  /* 1014b072 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014b076 jne 0x1014b088 */
  if (!C.zf) goto L_1014b088;
  /* 1014b078 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1014b07b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014b080 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014b082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b085 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1014b088:;
  /* 1014b088 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1014b08b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1014b090 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1014b092 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1014b099 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1014b09b:;
  /* 1014b09b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b09e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014b0a0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1014b0a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014b0a7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1014b0a9 jne 0x1014b1a6 */
  if (!C.zf) goto L_1014b1a6;
  /* 1014b0af mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b0b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b0b6 je 0x1014b198 */
  if (C.zf) goto L_1014b198;
  /* 1014b0bc mov ecx, dword ptr [0x1015699c] */
  ECX = (r32((uint32_t)(0x1015699c)));
  /* 1014b0c2 mov esi, dword ptr [0x1014e07c] */
  ESI = (r32((uint32_t)(0x1014e07c)));
  /* 1014b0c8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1014b0cb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b0ce mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1014b0d3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1014b0d8 push ebx */
  push32((uint32_t)(EBX));
  /* 1014b0d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1014b0da call esi */
  call_ind((uint32_t)(ESI), 0x1014b0dcu);
  /* 1014b0dc mov ecx, dword ptr [0x1015699c] */
  ECX = (r32((uint32_t)(0x1015699c)));
  /* 1014b0e2 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b0e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1014b0ec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1014b0ee or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1014b0f1 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b0f6 mov ecx, dword ptr [0x1015699c] */
  ECX = (r32((uint32_t)(0x1015699c)));
  /* 1014b0fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1014b0ff and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1014b107 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b10c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1014b10f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1014b112 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b117 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1014b11a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014b11e jne 0x1014b129 */
  if (!C.zf) goto L_1014b129;
  /* 1014b120 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014b124 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
L_1014b129:;
  /* 1014b129 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b12d jne 0x1014b198 */
  if (!C.zf) goto L_1014b198;
  /* 1014b12f push ebx */
  push32((uint32_t)(EBX));
  /* 1014b130 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b132 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1014b135 call esi */
  call_ind((uint32_t)(ESI), 0x1014b137u);
  /* 1014b137 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b13c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1014b13f push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b141 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b147 call dword ptr [0x1014e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e080))), 0x1014b14du);
  /* 1014b14d mov eax, dword ptr [0x101569a8] */
  EAX = (r32((uint32_t)(0x101569a8)));
  /* 1014b152 mov edx, dword ptr [0x101569ac] */
  EDX = (r32((uint32_t)(0x101569ac)));
  /* 1014b158 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1014b15b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1014b15e mov ecx, eax */
  ECX = (EAX);
  /* 1014b160 mov eax, dword ptr [0x101569a4] */
  EAX = (r32((uint32_t)(0x101569a4)));
  /* 1014b165 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b167 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1014b16b push ecx */
  push32((uint32_t)(ECX));
  /* 1014b16c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1014b16f push ecx */
  push32((uint32_t)(ECX));
  /* 1014b170 push eax */
  push32((uint32_t)(EAX));
  /* 1014b171 call 0x10149b50 */
  push32(0x1014b176u); f_10149b50();
  /* 1014b176 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b179 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b17c dec dword ptr [0x101569a8] */
  { uint32_t _r=(r32((uint32_t)(0x101569a8)))-1; w32((uint32_t)(0x101569a8), (_r)); fl_dec(_r,32); }
  /* 1014b182 cmp eax, dword ptr [0x101569a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101569a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b188 jbe 0x1014b18e */
  if ((C.cf||C.zf)) goto L_1014b18e;
  /* 1014b18a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1014b18e:;
  /* 1014b18e mov eax, dword ptr [0x101569ac] */
  EAX = (r32((uint32_t)(0x101569ac)));
  /* 1014b193 mov dword ptr [0x101569a0], eax */
  w32((uint32_t)(0x101569a0), (EAX));
L_1014b198:;
  /* 1014b198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b19b mov dword ptr [0x1015699c], edi */
  w32((uint32_t)(0x1015699c), (EDI));
  /* 1014b1a1 mov dword ptr [0x101569a4], eax */
  w32((uint32_t)(0x101569a4), (EAX));
L_1014b1a6:;
  /* 1014b1a6 pop edi */
  EDI = (pop32());
  /* 1014b1a7 pop esi */
  ESI = (pop32());
  /* 1014b1a8 pop ebx */
  EBX = (pop32());
  /* 1014b1a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014b1aa ret  */
  ESPCHK(0x1014ae82u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1ab @ 0x1014b1ab (777 bytes, 275 insns) */
void f_1014b1ab(void) {
  FTRACE(0x1014b1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b1ab push ebp */
  push32((uint32_t)(EBP));
  /* 1014b1ac mov ebp, esp */
  EBP = (ESP);
  /* 1014b1ae sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b1b1 mov eax, dword ptr [0x101569a8] */
  EAX = (r32((uint32_t)(0x101569a8)));
  /* 1014b1b6 mov edx, dword ptr [0x101569ac] */
  EDX = (r32((uint32_t)(0x101569ac)));
  /* 1014b1bc push ebx */
  push32((uint32_t)(EBX));
  /* 1014b1bd push esi */
  push32((uint32_t)(ESI));
  /* 1014b1be lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1014b1c1 push edi */
  push32((uint32_t)(EDI));
  /* 1014b1c2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1014b1c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b1c8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1014b1cb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1014b1ce and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1014b1d1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1014b1d4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1014b1d7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014b1d8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b1db jge 0x1014b1eb */
  if ((C.sf==C.of)) goto L_1014b1eb;
  /* 1014b1dd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1014b1e0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1014b1e2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014b1e6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1014b1e9 jmp 0x1014b1fb */
  goto L_1014b1fb;
L_1014b1eb:;
  /* 1014b1eb add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b1ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014b1f1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014b1f3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1014b1f5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1014b1f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1014b1fb:;
  /* 1014b1fb mov eax, dword ptr [0x101569a0] */
  EAX = (r32((uint32_t)(0x101569a0)));
  /* 1014b200 mov ebx, eax */
  EBX = (EAX);
  /* 1014b202 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b204 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b207 jae 0x1014b222 */
  if (!C.cf) goto L_1014b222;
L_1014b209:;
  /* 1014b209 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1014b20c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1014b20e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1014b211 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1014b213 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1014b215 jne 0x1014b222 */
  if (!C.zf) goto L_1014b222;
  /* 1014b217 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b21a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b21d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b220 jb 0x1014b209 */
  if (C.cf) goto L_1014b209;
L_1014b222:;
  /* 1014b222 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b225 jne 0x1014b2a0 */
  if (!C.zf) goto L_1014b2a0;
  /* 1014b227 mov ebx, edx */
  EBX = (EDX);
L_1014b229:;
  /* 1014b229 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b22b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b22e jae 0x1014b245 */
  if (!C.cf) goto L_1014b245;
  /* 1014b230 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1014b233 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1014b235 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1014b238 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1014b23a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1014b23c jne 0x1014b243 */
  if (!C.zf) goto L_1014b243;
  /* 1014b23e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b241 jmp 0x1014b229 */
  goto L_1014b229;
L_1014b243:;
  /* 1014b243 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1014b245:;
  /* 1014b245 jne 0x1014b2a0 */
  if (!C.zf) goto L_1014b2a0;
L_1014b247:;
  /* 1014b247 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b24a jae 0x1014b25d */
  if (!C.cf) goto L_1014b25d;
  /* 1014b24c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b250 jne 0x1014b25a */
  if (!C.zf) goto L_1014b25a;
  /* 1014b252 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b255 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b258 jmp 0x1014b247 */
  goto L_1014b247;
L_1014b25a:;
  /* 1014b25a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1014b25d:;
  /* 1014b25d jne 0x1014b285 */
  if (!C.zf) goto L_1014b285;
  /* 1014b25f mov ebx, edx */
  EBX = (EDX);
L_1014b261:;
  /* 1014b261 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b263 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b266 jae 0x1014b275 */
  if (!C.cf) goto L_1014b275;
  /* 1014b268 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b26c jne 0x1014b273 */
  if (!C.zf) goto L_1014b273;
  /* 1014b26e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b271 jmp 0x1014b261 */
  goto L_1014b261;
L_1014b273:;
  /* 1014b273 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1014b275:;
  /* 1014b275 jne 0x1014b285 */
  if (!C.zf) goto L_1014b285;
  /* 1014b277 call 0x1014b4b4 */
  push32(0x1014b27cu); f_1014b4b4();
  /* 1014b27c mov ebx, eax */
  EBX = (EAX);
  /* 1014b27e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014b280 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014b283 je 0x1014b299 */
  if (C.zf) goto L_1014b299;
L_1014b285:;
  /* 1014b285 push ebx */
  push32((uint32_t)(EBX));
  /* 1014b286 call 0x1014b565 */
  push32(0x1014b28bu); f_1014b565();
  /* 1014b28b pop ecx */
  ECX = (pop32());
  /* 1014b28c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1014b28f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1014b291 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1014b294 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b297 jne 0x1014b2a0 */
  if (!C.zf) goto L_1014b2a0;
L_1014b299:;
  /* 1014b299 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014b29b jmp 0x1014b4af */
  goto L_1014b4af;
L_1014b2a0:;
  /* 1014b2a0 mov dword ptr [0x101569a0], ebx */
  w32((uint32_t)(0x101569a0), (EBX));
  /* 1014b2a6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1014b2a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1014b2ab cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b2ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1014b2b1 je 0x1014b2c7 */
  if (C.zf) goto L_1014b2c7;
  /* 1014b2b3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1014b2ba mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1014b2be and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1014b2c1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1014b2c3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1014b2c5 jne 0x1014b2fe */
  if (!C.zf) goto L_1014b2fe;
L_1014b2c7:;
  /* 1014b2c7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1014b2cd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1014b2d0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1014b2d3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1014b2d6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014b2da lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1014b2dd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1014b2df mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1014b2e2 jne 0x1014b2fb */
  if (!C.zf) goto L_1014b2fb;
L_1014b2e4:;
  /* 1014b2e4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1014b2ea inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014b2ed and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1014b2f0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b2f3 mov edi, esi */
  EDI = (ESI);
  /* 1014b2f5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1014b2f7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1014b2f9 je 0x1014b2e4 */
  if (C.zf) goto L_1014b2e4;
L_1014b2fb:;
  /* 1014b2fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1014b2fe:;
  /* 1014b2fe mov ecx, edx */
  ECX = (EDX);
  /* 1014b300 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014b302 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014b308 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1014b30f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1014b312 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1014b316 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1014b318 jne 0x1014b327 */
  if (!C.zf) goto L_1014b327;
  /* 1014b31a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1014b321 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1014b323 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1014b326 pop edi */
  EDI = (pop32());
L_1014b327:;
  /* 1014b327 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1014b329 jl 0x1014b330 */
  if ((C.sf!=C.of)) goto L_1014b330;
  /* 1014b32b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1014b32d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014b32e jmp 0x1014b327 */
  goto L_1014b327;
L_1014b330:;
  /* 1014b330 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014b333 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1014b337 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1014b339 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b33c mov esi, ecx */
  ESI = (ECX);
  /* 1014b33e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1014b341 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1014b344 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1014b345 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b348 jle 0x1014b34d */
  if ((C.zf||C.sf!=C.of)) goto L_1014b34d;
  /* 1014b34a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1014b34c pop esi */
  ESI = (pop32());
L_1014b34d:;
  /* 1014b34d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b34f je 0x1014b462 */
  if (C.zf) goto L_1014b462;
  /* 1014b355 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014b358 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b35b jne 0x1014b3be */
  if (!C.zf) goto L_1014b3be;
  /* 1014b35d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b360 jge 0x1014b38d */
  if ((C.sf==C.of)) goto L_1014b38d;
  /* 1014b362 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014b367 mov ecx, edi */
  ECX = (EDI);
  /* 1014b369 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014b36b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b36e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1014b372 not ebx */
  EBX = (~(EBX));
  /* 1014b374 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1014b377 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1014b37b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1014b37f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1014b381 jne 0x1014b3bb */
  if (!C.zf) goto L_1014b3bb;
  /* 1014b383 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b386 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1014b389 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1014b38b jmp 0x1014b3be */
  goto L_1014b3be;
L_1014b38d:;
  /* 1014b38d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1014b390 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1014b395 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1014b397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b39a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1014b39e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1014b3a5 not ebx */
  EBX = (~(EBX));
  /* 1014b3a7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1014b3a9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1014b3ab mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1014b3ae jne 0x1014b3bb */
  if (!C.zf) goto L_1014b3bb;
  /* 1014b3b0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b3b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1014b3b6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014b3b9 jmp 0x1014b3be */
  goto L_1014b3be;
L_1014b3bb:;
  /* 1014b3bb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1014b3be:;
  /* 1014b3be mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1014b3c1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1014b3c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b3c8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1014b3cb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014b3ce mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1014b3d1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1014b3d4 je 0x1014b46e */
  if (C.zf) goto L_1014b46e;
  /* 1014b3da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014b3dd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1014b3e1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1014b3e4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1014b3e7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1014b3ea mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1014b3ed mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014b3f0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1014b3f3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1014b3f6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b3f9 jne 0x1014b45f */
  if (!C.zf) goto L_1014b45f;
  /* 1014b3fb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1014b3ff cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b402 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1014b405 jge 0x1014b430 */
  if ((C.sf==C.of)) goto L_1014b430;
  /* 1014b407 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1014b409 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014b40d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1014b411 jne 0x1014b41e */
  if (!C.zf) goto L_1014b41e;
  /* 1014b413 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1014b418 mov ecx, esi */
  ECX = (ESI);
  /* 1014b41a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1014b41c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1014b41e:;
  /* 1014b41e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1014b423 mov ecx, esi */
  ECX = (ESI);
  /* 1014b425 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1014b427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b42a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1014b42e jmp 0x1014b45f */
  goto L_1014b45f;
L_1014b430:;
  /* 1014b430 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1014b432 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014b436 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1014b43a jne 0x1014b449 */
  if (!C.zf) goto L_1014b449;
  /* 1014b43c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1014b43f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1014b444 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1014b446 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1014b449:;
  /* 1014b449 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b44c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1014b453 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1014b456 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1014b45b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1014b45d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1014b45f:;
  /* 1014b45f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1014b462:;
  /* 1014b462 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1014b464 je 0x1014b471 */
  if (C.zf) goto L_1014b471;
  /* 1014b466 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1014b468 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1014b46c jmp 0x1014b471 */
  goto L_1014b471;
L_1014b46e:;
  /* 1014b46e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1014b471:;
  /* 1014b471 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1014b474 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b476 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1014b479 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1014b47b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1014b47f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1014b482 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1014b484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1014b486 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1014b489 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1014b48b jne 0x1014b4a7 */
  if (!C.zf) goto L_1014b4a7;
  /* 1014b48d cmp ebx, dword ptr [0x101569a4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101569a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b493 jne 0x1014b4a7 */
  if (!C.zf) goto L_1014b4a7;
  /* 1014b495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b498 cmp ecx, dword ptr [0x1015699c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1015699c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b49e jne 0x1014b4a7 */
  if (!C.zf) goto L_1014b4a7;
  /* 1014b4a0 and dword ptr [0x101569a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101569a4)))&(0x0u); w32((uint32_t)(0x101569a4), (_r)); fl_logic(_r,32); }
L_1014b4a7:;
  /* 1014b4a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b4aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014b4ac lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1014b4af:;
  /* 1014b4af pop edi */
  EDI = (pop32());
  /* 1014b4b0 pop esi */
  ESI = (pop32());
  /* 1014b4b1 pop ebx */
  EBX = (pop32());
  /* 1014b4b2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014b4b3 ret  */
  ESPCHK(0x1014b1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b4 @ 0x1014b4b4 (177 bytes, 53 insns) */
void f_1014b4b4(void) {
  FTRACE(0x1014b4b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b4b4 mov eax, dword ptr [0x101569a8] */
  EAX = (r32((uint32_t)(0x101569a8)));
  /* 1014b4b9 mov ecx, dword ptr [0x10156998] */
  ECX = (r32((uint32_t)(0x10156998)));
  /* 1014b4bf push esi */
  push32((uint32_t)(ESI));
  /* 1014b4c0 push edi */
  push32((uint32_t)(EDI));
  /* 1014b4c1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014b4c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b4c5 jne 0x1014b4f7 */
  if (!C.zf) goto L_1014b4f7;
  /* 1014b4c7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1014b4cb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1014b4ce push eax */
  push32((uint32_t)(EAX));
  /* 1014b4cf push dword ptr [0x101569ac] */
  push32((uint32_t)(r32((uint32_t)(0x101569ac))));
  /* 1014b4d5 push edi */
  push32((uint32_t)(EDI));
  /* 1014b4d6 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b4dc call dword ptr [0x1014e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0ac))), 0x1014b4e2u);
  /* 1014b4e2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b4e4 je 0x1014b547 */
  if (C.zf) goto L_1014b547;
  /* 1014b4e6 add dword ptr [0x10156998], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10156998))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10156998), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014b4ed mov dword ptr [0x101569ac], eax */
  w32((uint32_t)(0x101569ac), (EAX));
  /* 1014b4f2 mov eax, dword ptr [0x101569a8] */
  EAX = (r32((uint32_t)(0x101569a8)));
L_1014b4f7:;
  /* 1014b4f7 mov ecx, dword ptr [0x101569ac] */
  ECX = (r32((uint32_t)(0x101569ac)));
  /* 1014b4fd push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1014b502 push 8 */
  push32((uint32_t)(0x8u));
  /* 1014b504 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1014b507 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b50d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1014b510 call dword ptr [0x1014e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e098))), 0x1014b516u);
  /* 1014b516 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b518 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1014b51b je 0x1014b547 */
  if (C.zf) goto L_1014b547;
  /* 1014b51d push 4 */
  push32((uint32_t)(0x4u));
  /* 1014b51f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1014b524 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1014b529 push edi */
  push32((uint32_t)(EDI));
  /* 1014b52a call dword ptr [0x1014e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0a8))), 0x1014b530u);
  /* 1014b530 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b532 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1014b535 jne 0x1014b54b */
  if (!C.zf) goto L_1014b54b;
  /* 1014b537 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1014b53a push edi */
  push32((uint32_t)(EDI));
  /* 1014b53b push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b541 call dword ptr [0x1014e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e080))), 0x1014b547u);
L_1014b547:;
  /* 1014b547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014b549 jmp 0x1014b562 */
  goto L_1014b562;
L_1014b54b:;
  /* 1014b54b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1014b54f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1014b551 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1014b554 inc dword ptr [0x101569a8] */
  { uint32_t _r=(r32((uint32_t)(0x101569a8)))+1; w32((uint32_t)(0x101569a8), (_r)); fl_inc(_r,32); }
  /* 1014b55a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1014b55d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014b560 mov eax, esi */
  EAX = (ESI);
L_1014b562:;
  /* 1014b562 pop edi */
  EDI = (pop32());
  /* 1014b563 pop esi */
  ESI = (pop32());
  /* 1014b564 ret  */
  ESPCHK(0x1014b4b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b565 @ 0x1014b565 (251 bytes, 85 insns) */
void f_1014b565(void) {
  FTRACE(0x1014b565u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b565 push ebp */
  push32((uint32_t)(EBP));
  /* 1014b566 mov ebp, esp */
  EBP = (ESP);
  /* 1014b568 push ecx */
  push32((uint32_t)(ECX));
  /* 1014b569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b56c push ebx */
  push32((uint32_t)(EBX));
  /* 1014b56d push esi */
  push32((uint32_t)(ESI));
  /* 1014b56e push edi */
  push32((uint32_t)(EDI));
  /* 1014b56f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1014b572 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1014b575 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1014b577:;
  /* 1014b577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b579 jl 0x1014b580 */
  if ((C.sf!=C.of)) goto L_1014b580;
  /* 1014b57b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1014b57d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014b57e jmp 0x1014b577 */
  goto L_1014b577;
L_1014b580:;
  /* 1014b580 mov eax, ebx */
  EAX = (EBX);
  /* 1014b582 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1014b584 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014b58a pop edx */
  EDX = (pop32());
  /* 1014b58b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1014b592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1014b595:;
  /* 1014b595 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1014b598 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1014b59b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b59e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014b59f jne 0x1014b595 */
  if (!C.zf) goto L_1014b595;
  /* 1014b5a1 mov edi, ebx */
  EDI = (EBX);
  /* 1014b5a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014b5a5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1014b5a8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b5ab push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1014b5b0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1014b5b5 push edi */
  push32((uint32_t)(EDI));
  /* 1014b5b6 call dword ptr [0x1014e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0a8))), 0x1014b5bcu);
  /* 1014b5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b5be jne 0x1014b5c8 */
  if (!C.zf) goto L_1014b5c8;
  /* 1014b5c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014b5c3 jmp 0x1014b65b */
  goto L_1014b65b;
L_1014b5c8:;
  /* 1014b5c8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1014b5ce cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b5d0 ja 0x1014b60e */
  if ((!C.cf&&!C.zf)) goto L_1014b60e;
  /* 1014b5d2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1014b5d5:;
  /* 1014b5d5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014b5d9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1014b5e0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1014b5e6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1014b5ed mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014b5ef lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1014b5f5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1014b5f8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1014b602 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b607 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1014b60a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b60c jbe 0x1014b5d5 */
  if ((C.cf||C.zf)) goto L_1014b5d5;
L_1014b60e:;
  /* 1014b60e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b611 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1014b614 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b619 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014b61b pop edi */
  EDI = (pop32());
  /* 1014b61c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1014b61f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1014b622 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1014b625 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1014b628 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1014b62b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1014b630 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1014b637 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1014b63a mov cl, al */
  CL = (AL);
  /* 1014b63c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1014b63e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014b640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b643 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1014b646 jne 0x1014b64b */
  if (!C.zf) goto L_1014b64b;
  /* 1014b648 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1014b64b:;
  /* 1014b64b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1014b650 mov ecx, ebx */
  ECX = (EBX);
  /* 1014b652 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1014b654 not edx */
  EDX = (~(EDX));
  /* 1014b656 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1014b659 mov eax, ebx */
  EAX = (EBX);
L_1014b65b:;
  /* 1014b65b pop edi */
  EDI = (pop32());
  /* 1014b65c pop esi */
  ESI = (pop32());
  /* 1014b65d pop ebx */
  EBX = (pop32());
  /* 1014b65e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014b65f ret  */
  ESPCHK(0x1014b565u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b660 @ 0x1014b660 (324 bytes, 102 insns) */
void f_1014b660(void) {
  FTRACE(0x1014b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b660 cmp dword ptr [0x10150e50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10150e50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b667 push ebx */
  push32((uint32_t)(EBX));
  /* 1014b668 push ebp */
  push32((uint32_t)(EBP));
  /* 1014b669 push esi */
  push32((uint32_t)(ESI));
  /* 1014b66a push edi */
  push32((uint32_t)(EDI));
  /* 1014b66b jne 0x1014b674 */
  if (!C.zf) goto L_1014b674;
  /* 1014b66d mov esi, 0x10150e40 */
  ESI = (0x10150e40u);
  /* 1014b672 jmp 0x1014b691 */
  goto L_1014b691;
L_1014b674:;
  /* 1014b674 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1014b679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b67b push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b681 call dword ptr [0x1014e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e098))), 0x1014b687u);
  /* 1014b687 mov esi, eax */
  ESI = (EAX);
  /* 1014b689 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014b68b je 0x1014b79d */
  if (C.zf) goto L_1014b79d;
L_1014b691:;
  /* 1014b691 mov ebp, dword ptr [0x1014e0a8] */
  EBP = (r32((uint32_t)(0x1014e0a8)));
  /* 1014b697 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014b699 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1014b69e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1014b6a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b6a5 call ebp */
  call_ind((uint32_t)(EBP), 0x1014b6a7u);
  /* 1014b6a7 mov edi, eax */
  EDI = (EAX);
  /* 1014b6a9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014b6ab je 0x1014b786 */
  if (C.zf) goto L_1014b786;
  /* 1014b6b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014b6b3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1014b6b8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1014b6bd push ebx */
  push32((uint32_t)(EBX));
  /* 1014b6be push edi */
  push32((uint32_t)(EDI));
  /* 1014b6bf call ebp */
  call_ind((uint32_t)(EBP), 0x1014b6c1u);
  /* 1014b6c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b6c3 je 0x1014b778 */
  if (C.zf) goto L_1014b778;
  /* 1014b6c9 mov eax, 0x10150e40 */
  EAX = (0x10150e40u);
  /* 1014b6ce cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b6d0 jne 0x1014b6f0 */
  if (!C.zf) goto L_1014b6f0;
  /* 1014b6d2 cmp dword ptr [0x10150e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10150e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b6d9 jne 0x1014b6e0 */
  if (!C.zf) goto L_1014b6e0;
  /* 1014b6db mov dword ptr [0x10150e40], eax */
  w32((uint32_t)(0x10150e40), (EAX));
L_1014b6e0:;
  /* 1014b6e0 cmp dword ptr [0x10150e44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10150e44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b6e7 jne 0x1014b705 */
  if (!C.zf) goto L_1014b705;
  /* 1014b6e9 mov dword ptr [0x10150e44], eax */
  w32((uint32_t)(0x10150e44), (EAX));
  /* 1014b6ee jmp 0x1014b705 */
  goto L_1014b705;
L_1014b6f0:;
  /* 1014b6f0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014b6f2 mov eax, dword ptr [0x10150e44] */
  EAX = (r32((uint32_t)(0x10150e44)));
  /* 1014b6f7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1014b6fa mov dword ptr [0x10150e44], esi */
  w32((uint32_t)(0x10150e44), (ESI));
  /* 1014b700 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b703 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1014b705:;
  /* 1014b705 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1014b70b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1014b711 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1014b714 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1014b717 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1014b71a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1014b71d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1014b720 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1014b722 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1014b727:;
  /* 1014b727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014b729 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b72c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1014b72f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014b730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1014b732 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1014b733 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1014b734 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1014b736 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1014b739 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b73c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b742 jl 0x1014b727 */
  if ((C.sf!=C.of)) goto L_1014b727;
  /* 1014b744 push ebx */
  push32((uint32_t)(EBX));
  /* 1014b745 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b747 push edi */
  push32((uint32_t)(EDI));
  /* 1014b748 call 0x10149af0 */
  push32(0x1014b74du); f_10149af0();
  /* 1014b74d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014b750:;
  /* 1014b750 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1014b753 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b755 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b757 jae 0x1014b774 */
  if (!C.cf) goto L_1014b774;
  /* 1014b759 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1014b760 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1014b763 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1014b765 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1014b76c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b772 jmp 0x1014b750 */
  goto L_1014b750;
L_1014b774:;
  /* 1014b774 mov eax, esi */
  EAX = (ESI);
  /* 1014b776 jmp 0x1014b79f */
  goto L_1014b79f;
L_1014b778:;
  /* 1014b778 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1014b77d push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b77f push edi */
  push32((uint32_t)(EDI));
  /* 1014b780 call dword ptr [0x1014e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e07c))), 0x1014b786u);
L_1014b786:;
  /* 1014b786 cmp esi, 0x10150e40 */
  { uint32_t _a=(ESI),_b=(0x10150e40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b78c je 0x1014b79d */
  if (C.zf) goto L_1014b79d;
  /* 1014b78e push esi */
  push32((uint32_t)(ESI));
  /* 1014b78f push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b791 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b797 call dword ptr [0x1014e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e080))), 0x1014b79du);
L_1014b79d:;
  /* 1014b79d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014b79f:;
  /* 1014b79f pop edi */
  EDI = (pop32());
  /* 1014b7a0 pop esi */
  ESI = (pop32());
  /* 1014b7a1 pop ebp */
  EBP = (pop32());
  /* 1014b7a2 pop ebx */
  EBX = (pop32());
  /* 1014b7a3 ret  */
  ESPCHK(0x1014b660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a4 @ 0x1014b7a4 (86 bytes, 27 insns) */
void f_1014b7a4(void) {
  FTRACE(0x1014b7a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b7a4 push esi */
  push32((uint32_t)(ESI));
  /* 1014b7a5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014b7a9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1014b7ae push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b7b0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1014b7b3 call dword ptr [0x1014e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e07c))), 0x1014b7b9u);
  /* 1014b7b9 cmp dword ptr [0x10152e60], esi */
  { uint32_t _a=(r32((uint32_t)(0x10152e60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b7bf jne 0x1014b7c9 */
  if (!C.zf) goto L_1014b7c9;
  /* 1014b7c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b7c4 mov dword ptr [0x10152e60], eax */
  w32((uint32_t)(0x10152e60), (EAX));
L_1014b7c9:;
  /* 1014b7c9 cmp esi, 0x10150e40 */
  { uint32_t _a=(ESI),_b=(0x10150e40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b7cf je 0x1014b7f1 */
  if (C.zf) goto L_1014b7f1;
  /* 1014b7d1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b7d4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1014b7d6 push esi */
  push32((uint32_t)(ESI));
  /* 1014b7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014b7d9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014b7db mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1014b7dd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b7e0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1014b7e3 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014b7e9 call dword ptr [0x1014e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e080))), 0x1014b7efu);
  /* 1014b7ef pop esi */
  ESI = (pop32());
  /* 1014b7f0 ret  */
  ESPCHK(0x1014b7a4u, _esp0);
  ESP += 4; return;
L_1014b7f1:;
  /* 1014b7f1 or dword ptr [0x10150e50], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10150e50)))|(0xffffffffu); w32((uint32_t)(0x10150e50), (_r)); fl_logic(_r,32); }
  /* 1014b7f8 pop esi */
  ESI = (pop32());
  /* 1014b7f9 ret  */
  ESPCHK(0x1014b7a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7fa @ 0x1014b7fa (194 bytes, 66 insns) */
void f_1014b7fa(void) {
  FTRACE(0x1014b7fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b7fa push ebp */
  push32((uint32_t)(EBP));
  /* 1014b7fb mov ebp, esp */
  EBP = (ESP);
  /* 1014b7fd push ecx */
  push32((uint32_t)(ECX));
  /* 1014b7fe push ebx */
  push32((uint32_t)(EBX));
  /* 1014b7ff push esi */
  push32((uint32_t)(ESI));
  /* 1014b800 mov esi, dword ptr [0x10150e44] */
  ESI = (r32((uint32_t)(0x10150e44)));
  /* 1014b806 push edi */
  push32((uint32_t)(EDI));
L_1014b807:;
  /* 1014b807 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b80b je 0x1014b8a5 */
  if (C.zf) goto L_1014b8a5;
  /* 1014b811 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014b815 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1014b81b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1014b820:;
  /* 1014b820 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b826 jne 0x1014b861 */
  if (!C.zf) goto L_1014b861;
  /* 1014b828 mov eax, ebx */
  EAX = (EBX);
  /* 1014b82a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1014b82f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b832 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1014b837 push eax */
  push32((uint32_t)(EAX));
  /* 1014b838 call dword ptr [0x1014e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e07c))), 0x1014b83eu);
  /* 1014b83e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b840 je 0x1014b861 */
  if (C.zf) goto L_1014b861;
  /* 1014b842 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1014b845 dec dword ptr [0x101567f4] */
  { uint32_t _r=(r32((uint32_t)(0x101567f4)))-1; w32((uint32_t)(0x101567f4), (_r)); fl_dec(_r,32); }
  /* 1014b84b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1014b84e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b850 je 0x1014b856 */
  if (C.zf) goto L_1014b856;
  /* 1014b852 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b854 jbe 0x1014b859 */
  if ((C.cf||C.zf)) goto L_1014b859;
L_1014b856:;
  /* 1014b856 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1014b859:;
  /* 1014b859 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014b85c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1014b85f je 0x1014b86e */
  if (C.zf) goto L_1014b86e;
L_1014b861:;
  /* 1014b861 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b867 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b86a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014b86c jge 0x1014b820 */
  if ((C.sf==C.of)) goto L_1014b820;
L_1014b86e:;
  /* 1014b86e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b872 mov ecx, esi */
  ECX = (ESI);
  /* 1014b874 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1014b877 je 0x1014b8a5 */
  if (C.zf) goto L_1014b8a5;
  /* 1014b879 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b87d jne 0x1014b8a5 */
  if (!C.zf) goto L_1014b8a5;
  /* 1014b87f push 1 */
  push32((uint32_t)(0x1u));
  /* 1014b881 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1014b884 pop edx */
  EDX = (pop32());
L_1014b885:;
  /* 1014b885 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b888 jne 0x1014b896 */
  if (!C.zf) goto L_1014b896;
  /* 1014b88a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014b88b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b88e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b894 jl 0x1014b885 */
  if ((C.sf!=C.of)) goto L_1014b885;
L_1014b896:;
  /* 1014b896 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b89c jne 0x1014b8a5 */
  if (!C.zf) goto L_1014b8a5;
  /* 1014b89e push ecx */
  push32((uint32_t)(ECX));
  /* 1014b89f call 0x1014b7a4 */
  push32(0x1014b8a4u); f_1014b7a4();
  /* 1014b8a4 pop ecx */
  ECX = (pop32());
L_1014b8a5:;
  /* 1014b8a5 cmp esi, dword ptr [0x10150e44] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10150e44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8ab je 0x1014b8b7 */
  if (C.zf) goto L_1014b8b7;
  /* 1014b8ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8b1 jg 0x1014b807 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014b807;
L_1014b8b7:;
  /* 1014b8b7 pop edi */
  EDI = (pop32());
  /* 1014b8b8 pop esi */
  ESI = (pop32());
  /* 1014b8b9 pop ebx */
  EBX = (pop32());
  /* 1014b8ba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014b8bb ret  */
  ESPCHK(0x1014b7fau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8bc @ 0x1014b8bc (87 bytes, 34 insns) */
void f_1014b8bc(void) {
  FTRACE(0x1014b8bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b8bc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014b8c0 mov edx, 0x10150e40 */
  EDX = (0x10150e40u);
  /* 1014b8c5 push esi */
  push32((uint32_t)(ESI));
  /* 1014b8c6 mov ecx, edx */
  ECX = (EDX);
L_1014b8c8:;
  /* 1014b8c8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8cb jbe 0x1014b8d2 */
  if ((C.cf||C.zf)) goto L_1014b8d2;
  /* 1014b8cd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8d0 jb 0x1014b8da */
  if (C.cf) goto L_1014b8da;
L_1014b8d2:;
  /* 1014b8d2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1014b8d4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8d6 je 0x1014b90f */
  if (C.zf) goto L_1014b90f;
  /* 1014b8d8 jmp 0x1014b8c8 */
  goto L_1014b8c8;
L_1014b8da:;
  /* 1014b8da test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1014b8dc jne 0x1014b90f */
  if (!C.zf) goto L_1014b90f;
  /* 1014b8de mov esi, eax */
  ESI = (EAX);
  /* 1014b8e0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1014b8e5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1014b8eb cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b8ed jb 0x1014b90f */
  if (C.cf) goto L_1014b90f;
  /* 1014b8ef mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1014b8f3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1014b8f5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1014b8f9 mov ecx, eax */
  ECX = (EAX);
  /* 1014b8fb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1014b900 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b902 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1014b904 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b906 pop esi */
  ESI = (pop32());
  /* 1014b907 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1014b90a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1014b90e ret  */
  ESPCHK(0x1014b8bcu, _esp0);
  ESP += 4; return;
L_1014b90f:;
  /* 1014b90f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014b911 pop esi */
  ESI = (pop32());
  /* 1014b912 ret  */
  ESPCHK(0x1014b8bcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b913 @ 0x1014b913 (69 bytes, 19 insns) */
void f_1014b913(void) {
  FTRACE(0x1014b913u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b913 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014b917 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014b91b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b91e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1014b921 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1014b925 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1014b929 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1014b92c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014b92e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1014b931 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b937 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1014b93e jne 0x1014b957 */
  if (!C.zf) goto L_1014b957;
  /* 1014b940 inc dword ptr [0x101567f4] */
  { uint32_t _r=(r32((uint32_t)(0x101567f4)))+1; w32((uint32_t)(0x101567f4), (_r)); fl_inc(_r,32); }
  /* 1014b946 cmp dword ptr [0x101567f4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101567f4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b94d jne 0x1014b957 */
  if (!C.zf) goto L_1014b957;
  /* 1014b94f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1014b951 call 0x1014b7fa */
  push32(0x1014b956u); f_1014b7fa();
  /* 1014b956 pop ecx */
  ECX = (pop32());
L_1014b957:;
  /* 1014b957 ret  */
  ESPCHK(0x1014b913u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b958 @ 0x1014b958 (520 bytes, 180 insns) */
void f_1014b958(void) {
  FTRACE(0x1014b958u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014b958 push ebp */
  push32((uint32_t)(EBP));
  /* 1014b959 mov ebp, esp */
  EBP = (ESP);
  /* 1014b95b push ecx */
  push32((uint32_t)(ECX));
  /* 1014b95c push ecx */
  push32((uint32_t)(ECX));
  /* 1014b95d push ebx */
  push32((uint32_t)(EBX));
  /* 1014b95e push esi */
  push32((uint32_t)(ESI));
  /* 1014b95f mov esi, dword ptr [0x10152e60] */
  ESI = (r32((uint32_t)(0x10152e60)));
  /* 1014b965 push edi */
  push32((uint32_t)(EDI));
L_1014b966:;
  /* 1014b966 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1014b969 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b96c je 0x1014ba11 */
  if (C.zf) goto L_1014ba11;
  /* 1014b972 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1014b975 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1014b97b mov eax, edi */
  EAX = (EDI);
  /* 1014b97d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b97f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014b982 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1014b985 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1014b988 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b98a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b98c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1014b98f jae 0x1014b9cb */
  if (!C.cf) goto L_1014b9cb;
L_1014b991:;
  /* 1014b991 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1014b993 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014b996 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b998 jl 0x1014b9b4 */
  if ((C.sf!=C.of)) goto L_1014b9b4;
  /* 1014b99a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b99d jbe 0x1014b9b4 */
  if ((C.cf||C.zf)) goto L_1014b9b4;
  /* 1014b99f push ebx */
  push32((uint32_t)(EBX));
  /* 1014b9a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1014b9a1 push eax */
  push32((uint32_t)(EAX));
  /* 1014b9a2 call 0x1014bb60 */
  push32(0x1014b9a7u); f_1014bb60();
  /* 1014b9a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b9ac jne 0x1014ba23 */
  if (!C.zf) goto L_1014ba23;
  /* 1014b9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014b9b1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1014b9b4:;
  /* 1014b9b4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b9b7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1014b9bd add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b9c2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b9c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1014b9c7 jb 0x1014b991 */
  if (C.cf) goto L_1014b991;
  /* 1014b9c9 jmp 0x1014b9ce */
  goto L_1014b9ce;
L_1014b9cb:;
  /* 1014b9cb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1014b9ce:;
  /* 1014b9ce mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1014b9d1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1014b9d4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1014b9d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1014b9da cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b9dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1014b9df jae 0x1014ba14 */
  if (!C.cf) goto L_1014ba14;
L_1014b9e1:;
  /* 1014b9e1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014b9e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b9e5 jl 0x1014ba00 */
  if ((C.sf!=C.of)) goto L_1014ba00;
  /* 1014b9e7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014b9ea jbe 0x1014ba00 */
  if ((C.cf||C.zf)) goto L_1014ba00;
  /* 1014b9ec push ebx */
  push32((uint32_t)(EBX));
  /* 1014b9ed push eax */
  push32((uint32_t)(EAX));
  /* 1014b9ee push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1014b9f1 call 0x1014bb60 */
  push32(0x1014b9f6u); f_1014bb60();
  /* 1014b9f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014b9f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014b9fb jne 0x1014ba23 */
  if (!C.zf) goto L_1014ba23;
  /* 1014b9fd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1014ba00:;
  /* 1014ba00 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014ba07 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ba0a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba0d jb 0x1014b9e1 */
  if (C.cf) goto L_1014b9e1;
  /* 1014ba0f jmp 0x1014ba14 */
  goto L_1014ba14;
L_1014ba11:;
  /* 1014ba11 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1014ba14:;
  /* 1014ba14 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1014ba16 cmp esi, dword ptr [0x10152e60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10152e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba1c je 0x1014ba33 */
  if (C.zf) goto L_1014ba33;
  /* 1014ba1e jmp 0x1014b966 */
  goto L_1014b966;
L_1014ba23:;
  /* 1014ba23 mov dword ptr [0x10152e60], esi */
  w32((uint32_t)(0x10152e60), (ESI));
  /* 1014ba29 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014ba2b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1014ba2e jmp 0x1014bb5b */
  goto L_1014bb5b;
L_1014ba33:;
  /* 1014ba33 mov eax, 0x10150e40 */
  EAX = (0x10150e40u);
  /* 1014ba38 mov edi, eax */
  EDI = (EAX);
L_1014ba3a:;
  /* 1014ba3a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba3e je 0x1014ba46 */
  if (C.zf) goto L_1014ba46;
  /* 1014ba40 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba44 jne 0x1014ba52 */
  if (!C.zf) goto L_1014ba52;
L_1014ba46:;
  /* 1014ba46 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1014ba48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba4a je 0x1014bb27 */
  if (C.zf) goto L_1014bb27;
  /* 1014ba50 jmp 0x1014ba3a */
  goto L_1014ba3a;
L_1014ba52:;
  /* 1014ba52 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1014ba55 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014ba59 mov esi, ebx */
  ESI = (EBX);
  /* 1014ba5b mov eax, ebx */
  EAX = (EBX);
  /* 1014ba5d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ba5f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014ba62 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1014ba65 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1014ba68 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ba6b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba6e jne 0x1014ba81 */
  if (!C.zf) goto L_1014ba81;
L_1014ba70:;
  /* 1014ba70 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba74 jge 0x1014ba81 */
  if ((C.sf==C.of)) goto L_1014ba81;
  /* 1014ba76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ba79 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014ba7c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba7f je 0x1014ba70 */
  if (C.zf) goto L_1014ba70;
L_1014ba81:;
  /* 1014ba81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014ba84 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014ba86 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1014ba89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1014ba8e push eax */
  push32((uint32_t)(EAX));
  /* 1014ba8f push esi */
  push32((uint32_t)(ESI));
  /* 1014ba90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1014ba93 call dword ptr [0x1014e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0a8))), 0x1014ba99u);
  /* 1014ba99 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ba9b jne 0x1014bb59 */
  if (!C.zf) goto L_1014bb59;
  /* 1014baa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014baa3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1014baa6 push esi */
  push32((uint32_t)(ESI));
  /* 1014baa7 call 0x10149af0 */
  push32(0x1014baacu); f_10149af0();
  /* 1014baac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014baaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bab2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1014bab4 mov ecx, ebx */
  ECX = (EBX);
  /* 1014bab6 jle 0x1014bae8 */
  if ((C.zf||C.sf!=C.of)) goto L_1014bae8;
  /* 1014bab8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1014babb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1014babe:;
  /* 1014babe or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1014bac5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1014bac8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1014bacb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1014bad0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1014bad2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1014bad4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1014badb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bae0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bae3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1014bae6 jne 0x1014babe */
  if (!C.zf) goto L_1014babe;
L_1014bae8:;
  /* 1014bae8 mov dword ptr [0x10152e60], edi */
  w32((uint32_t)(0x10152e60), (EDI));
  /* 1014baee lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1014baf4:;
  /* 1014baf4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014baf6 jae 0x1014bb04 */
  if (!C.cf) goto L_1014bb04;
  /* 1014baf8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bafb je 0x1014bb02 */
  if (C.zf) goto L_1014bb02;
  /* 1014bafd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bb00 jmp 0x1014baf4 */
  goto L_1014baf4;
L_1014bb02:;
  /* 1014bb02 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1014bb04:;
  /* 1014bb04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bb06 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bb08 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1014bb0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014bb0e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1014bb11 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1014bb14 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bb16 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bb19 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1014bb1d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1014bb23 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1014bb25 jmp 0x1014bb5b */
  goto L_1014bb5b;
L_1014bb27:;
  /* 1014bb27 call 0x1014b660 */
  push32(0x1014bb2cu); f_1014b660();
  /* 1014bb2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014bb2e je 0x1014bb59 */
  if (C.zf) goto L_1014bb59;
  /* 1014bb30 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1014bb33 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1014bb36 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1014bb3a mov dword ptr [0x10152e60], eax */
  w32((uint32_t)(0x10152e60), (EAX));
  /* 1014bb3f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1014bb41 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1014bb46 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bb48 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1014bb4b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1014bb4e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bb51 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1014bb57 jmp 0x1014bb5b */
  goto L_1014bb5b;
L_1014bb59:;
  /* 1014bb59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014bb5b:;
  /* 1014bb5b pop edi */
  EDI = (pop32());
  /* 1014bb5c pop esi */
  ESI = (pop32());
  /* 1014bb5d pop ebx */
  EBX = (pop32());
  /* 1014bb5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014bb5f ret  */
  ESPCHK(0x1014b958u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb60 @ 0x1014bb60 (292 bytes, 125 insns) */
void f_1014bb60(void) {
  FTRACE(0x1014bb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1014bb61 mov ebp, esp */
  EBP = (ESP);
  /* 1014bb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1014bb64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014bb67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014bb6a push ebx */
  push32((uint32_t)(EBX));
  /* 1014bb6b push esi */
  push32((uint32_t)(ESI));
  /* 1014bb6c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1014bb6f push edi */
  push32((uint32_t)(EDI));
  /* 1014bb70 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1014bb72 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1014bb78 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bb7a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1014bb7d mov eax, edi */
  EAX = (EDI);
  /* 1014bb7f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1014bb82 jb 0x1014bba5 */
  if (C.cf) goto L_1014bba5;
  /* 1014bb84 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1014bb87 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1014bb89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bb8b jae 0x1014bb94 */
  if (!C.cf) goto L_1014bb94;
  /* 1014bb8d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014bb8f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bb92 jmp 0x1014bb9d */
  goto L_1014bb9d;
L_1014bb94:;
  /* 1014bb94 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014bb98 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1014bb9b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1014bb9d:;
  /* 1014bb9d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1014bba0 jmp 0x1014bc73 */
  goto L_1014bc73;
L_1014bba5:;
  /* 1014bba5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bba7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014bbaa je 0x1014bbae */
  if (C.zf) goto L_1014bbae;
  /* 1014bbac mov eax, esi */
  EAX = (ESI);
L_1014bbae:;
  /* 1014bbae lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1014bbb1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbb3 jae 0x1014bbf8 */
  if (!C.cf) goto L_1014bbf8;
L_1014bbb5:;
  /* 1014bbb5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1014bbb7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1014bbb9 jne 0x1014bbeb */
  if (!C.zf) goto L_1014bbeb;
  /* 1014bbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 1014bbbd lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1014bbc0 pop esi */
  ESI = (pop32());
L_1014bbc1:;
  /* 1014bbc1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014bbc4 jne 0x1014bbca */
  if (!C.zf) goto L_1014bbca;
  /* 1014bbc6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014bbc7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014bbc8 jmp 0x1014bbc1 */
  goto L_1014bbc1;
L_1014bbca:;
  /* 1014bbca cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbcc jae 0x1014bc1c */
  if (!C.cf) goto L_1014bc1c;
  /* 1014bbce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbd1 jne 0x1014bbd8 */
  if (!C.zf) goto L_1014bbd8;
  /* 1014bbd3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1014bbd6 jmp 0x1014bbe4 */
  goto L_1014bbe4;
L_1014bbd8:;
  /* 1014bbd8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bbdb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbde jb 0x1014bc7d */
  if (C.cf) goto L_1014bc7d;
L_1014bbe4:;
  /* 1014bbe4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1014bbe7 mov eax, ebx */
  EAX = (EBX);
  /* 1014bbe9 jmp 0x1014bbf0 */
  goto L_1014bbf0;
L_1014bbeb:;
  /* 1014bbeb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1014bbee add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1014bbf0:;
  /* 1014bbf0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1014bbf3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbf6 jb 0x1014bbb5 */
  if (C.cf) goto L_1014bbb5;
L_1014bbf8:;
  /* 1014bbf8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1014bbfb:;
  /* 1014bbfb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bbfd jae 0x1014bc7d */
  if (!C.cf) goto L_1014bc7d;
  /* 1014bbff lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1014bc02 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc05 jae 0x1014bc7d */
  if (!C.cf) goto L_1014bc7d;
  /* 1014bc07 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014bc09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014bc0b jne 0x1014bc4d */
  if (!C.zf) goto L_1014bc4d;
  /* 1014bc0d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014bc0f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1014bc12 pop eax */
  EAX = (pop32());
L_1014bc13:;
  /* 1014bc13 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014bc16 jne 0x1014bc3d */
  if (!C.zf) goto L_1014bc3d;
  /* 1014bc18 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014bc19 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014bc1a jmp 0x1014bc13 */
  goto L_1014bc13;
L_1014bc1c:;
  /* 1014bc1c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1014bc1f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc22 jae 0x1014bc2d */
  if (!C.cf) goto L_1014bc2d;
  /* 1014bc24 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bc26 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1014bc28 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1014bc2b jmp 0x1014bc36 */
  goto L_1014bc36;
L_1014bc2d:;
  /* 1014bc2d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014bc31 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1014bc34 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1014bc36:;
  /* 1014bc36 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1014bc38 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bc3b jmp 0x1014bc73 */
  goto L_1014bc73;
L_1014bc3d:;
  /* 1014bc3d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc3f jae 0x1014bc54 */
  if (!C.cf) goto L_1014bc54;
  /* 1014bc41 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014bc44 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc47 jb 0x1014bc7d */
  if (C.cf) goto L_1014bc7d;
  /* 1014bc49 mov esi, ebx */
  ESI = (EBX);
  /* 1014bc4b jmp 0x1014bbfb */
  goto L_1014bbfb;
L_1014bc4d:;
  /* 1014bc4d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1014bc50 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bc52 jmp 0x1014bbfb */
  goto L_1014bbfb;
L_1014bc54:;
  /* 1014bc54 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1014bc57 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc5a jae 0x1014bc65 */
  if (!C.cf) goto L_1014bc65;
  /* 1014bc5c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bc5e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1014bc60 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1014bc63 jmp 0x1014bc6e */
  goto L_1014bc6e;
L_1014bc65:;
  /* 1014bc65 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014bc69 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1014bc6c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1014bc6e:;
  /* 1014bc6e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1014bc70 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1014bc73:;
  /* 1014bc73 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014bc76 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1014bc79 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bc7b jmp 0x1014bc7f */
  goto L_1014bc7f;
L_1014bc7d:;
  /* 1014bc7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014bc7f:;
  /* 1014bc7f pop edi */
  EDI = (pop32());
  /* 1014bc80 pop esi */
  ESI = (pop32());
  /* 1014bc81 pop ebx */
  EBX = (pop32());
  /* 1014bc82 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014bc83 ret  */
  ESPCHK(0x1014bb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc84 @ 0x1014bc84 (137 bytes, 50 insns) */
void f_1014bc84(void) {
  FTRACE(0x1014bc84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bc84 push ebx */
  push32((uint32_t)(EBX));
  /* 1014bc85 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014bc87 cmp dword ptr [0x101567f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101567f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bc8d push esi */
  push32((uint32_t)(ESI));
  /* 1014bc8e push edi */
  push32((uint32_t)(EDI));
  /* 1014bc8f jne 0x1014bcd3 */
  if (!C.zf) goto L_1014bcd3;
  /* 1014bc91 push 0x1014e548 */
  push32((uint32_t)(0x1014e548u));
  /* 1014bc96 call dword ptr [0x1014e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b0))), 0x1014bc9cu);
  /* 1014bc9c mov edi, eax */
  EDI = (EAX);
  /* 1014bc9e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bca0 je 0x1014bd09 */
  if (C.zf) goto L_1014bd09;
  /* 1014bca2 mov esi, dword ptr [0x1014e088] */
  ESI = (r32((uint32_t)(0x1014e088)));
  /* 1014bca8 push 0x1014e53c */
  push32((uint32_t)(0x1014e53cu));
  /* 1014bcad push edi */
  push32((uint32_t)(EDI));
  /* 1014bcae call esi */
  call_ind((uint32_t)(ESI), 0x1014bcb0u);
  /* 1014bcb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014bcb2 mov dword ptr [0x101567f8], eax */
  w32((uint32_t)(0x101567f8), (EAX));
  /* 1014bcb7 je 0x1014bd09 */
  if (C.zf) goto L_1014bd09;
  /* 1014bcb9 push 0x1014e52c */
  push32((uint32_t)(0x1014e52cu));
  /* 1014bcbe push edi */
  push32((uint32_t)(EDI));
  /* 1014bcbf call esi */
  call_ind((uint32_t)(ESI), 0x1014bcc1u);
  /* 1014bcc1 push 0x1014e518 */
  push32((uint32_t)(0x1014e518u));
  /* 1014bcc6 push edi */
  push32((uint32_t)(EDI));
  /* 1014bcc7 mov dword ptr [0x101567fc], eax */
  w32((uint32_t)(0x101567fc), (EAX));
  /* 1014bccc call esi */
  call_ind((uint32_t)(ESI), 0x1014bcceu);
  /* 1014bcce mov dword ptr [0x10156800], eax */
  w32((uint32_t)(0x10156800), (EAX));
L_1014bcd3:;
  /* 1014bcd3 mov eax, dword ptr [0x101567fc] */
  EAX = (r32((uint32_t)(0x101567fc)));
  /* 1014bcd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014bcda je 0x1014bcf2 */
  if (C.zf) goto L_1014bcf2;
  /* 1014bcdc call eax */
  call_ind((uint32_t)(EAX), 0x1014bcdeu);
  /* 1014bcde mov ebx, eax */
  EBX = (EAX);
  /* 1014bce0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014bce2 je 0x1014bcf2 */
  if (C.zf) goto L_1014bcf2;
  /* 1014bce4 mov eax, dword ptr [0x10156800] */
  EAX = (r32((uint32_t)(0x10156800)));
  /* 1014bce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014bceb je 0x1014bcf2 */
  if (C.zf) goto L_1014bcf2;
  /* 1014bced push ebx */
  push32((uint32_t)(EBX));
  /* 1014bcee call eax */
  call_ind((uint32_t)(EAX), 0x1014bcf0u);
  /* 1014bcf0 mov ebx, eax */
  EBX = (EAX);
L_1014bcf2:;
  /* 1014bcf2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1014bcf6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1014bcfa push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1014bcfe push ebx */
  push32((uint32_t)(EBX));
  /* 1014bcff call dword ptr [0x101567f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101567f8))), 0x1014bd05u);
L_1014bd05:;
  /* 1014bd05 pop edi */
  EDI = (pop32());
  /* 1014bd06 pop esi */
  ESI = (pop32());
  /* 1014bd07 pop ebx */
  EBX = (pop32());
  /* 1014bd08 ret  */
  ESPCHK(0x1014bc84u, _esp0);
  ESP += 4; return;
L_1014bd09:;
  /* 1014bd09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bd0b jmp 0x1014bd05 */
  goto L_1014bd05;
}

/* _strncpy @ 0x1014bd10 (254 bytes, 109 insns) */
void f_1014bd10(void) {
  FTRACE(0x1014bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bd10 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1014bd14 push edi */
  push32((uint32_t)(EDI));
  /* 1014bd15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1014bd17 je 0x1014bd93 */
  if (C.zf) goto L_1014bd93;
  /* 1014bd19 push esi */
  push32((uint32_t)(ESI));
  /* 1014bd1a push ebx */
  push32((uint32_t)(EBX));
  /* 1014bd1b mov ebx, ecx */
  EBX = (ECX);
  /* 1014bd1d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1014bd21 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1014bd27 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1014bd2b jne 0x1014bd34 */
  if (!C.zf) goto L_1014bd34;
  /* 1014bd2d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014bd30 jne 0x1014bda1 */
  if (!C.zf) goto L_1014bda1;
  /* 1014bd32 jmp 0x1014bd55 */
  goto L_1014bd55;
L_1014bd34:;
  /* 1014bd34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014bd36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014bd37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014bd39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014bd3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bd3b je 0x1014bd62 */
  if (C.zf) goto L_1014bd62;
  /* 1014bd3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014bd3f je 0x1014bd6a */
  if (C.zf) goto L_1014bd6a;
  /* 1014bd41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1014bd47 jne 0x1014bd34 */
  if (!C.zf) goto L_1014bd34;
  /* 1014bd49 mov ebx, ecx */
  EBX = (ECX);
  /* 1014bd4b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014bd4e jne 0x1014bda1 */
  if (!C.zf) goto L_1014bda1;
L_1014bd50:;
  /* 1014bd50 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1014bd53 je 0x1014bd62 */
  if (C.zf) goto L_1014bd62;
L_1014bd55:;
  /* 1014bd55 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014bd57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014bd58 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014bd5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014bd5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014bd5d je 0x1014bd8e */
  if (C.zf) goto L_1014bd8e;
  /* 1014bd5f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1014bd60 jne 0x1014bd55 */
  if (!C.zf) goto L_1014bd55;
L_1014bd62:;
  /* 1014bd62 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014bd66 pop ebx */
  EBX = (pop32());
  /* 1014bd67 pop esi */
  ESI = (pop32());
  /* 1014bd68 pop edi */
  EDI = (pop32());
  /* 1014bd69 ret  */
  ESPCHK(0x1014bd10u, _esp0);
  ESP += 4; return;
L_1014bd6a:;
  /* 1014bd6a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1014bd70 je 0x1014bd84 */
  if (C.zf) goto L_1014bd84;
L_1014bd72:;
  /* 1014bd72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014bd74 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014bd75 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bd76 je 0x1014be06 */
  if (C.zf) goto L_1014be06;
  /* 1014bd7c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1014bd82 jne 0x1014bd72 */
  if (!C.zf) goto L_1014bd72;
L_1014bd84:;
  /* 1014bd84 mov ebx, ecx */
  EBX = (ECX);
  /* 1014bd86 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1014bd89 jne 0x1014bdf7 */
  if (!C.zf) goto L_1014bdf7;
L_1014bd8b:;
  /* 1014bd8b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1014bd8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1014bd8e:;
  /* 1014bd8e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1014bd8f jne 0x1014bd8b */
  if (!C.zf) goto L_1014bd8b;
  /* 1014bd91 pop ebx */
  EBX = (pop32());
  /* 1014bd92 pop esi */
  ESI = (pop32());
L_1014bd93:;
  /* 1014bd93 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014bd97 pop edi */
  EDI = (pop32());
  /* 1014bd98 ret  */
  ESPCHK(0x1014bd10u, _esp0);
  ESP += 4; return;
L_1014bd99:;
  /* 1014bd99 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1014bd9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bd9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bd9f je 0x1014bd50 */
  if (C.zf) goto L_1014bd50;
L_1014bda1:;
  /* 1014bda1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1014bda6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1014bda8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bdaa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014bdad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bdaf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1014bdb1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bdb4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1014bdb9 je 0x1014bd99 */
  if (C.zf) goto L_1014bd99;
  /* 1014bdbb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014bdbd je 0x1014bdeb */
  if (C.zf) goto L_1014bdeb;
  /* 1014bdbf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1014bdc1 je 0x1014bde1 */
  if (C.zf) goto L_1014bde1;
  /* 1014bdc3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1014bdc9 je 0x1014bdd7 */
  if (C.zf) goto L_1014bdd7;
  /* 1014bdcb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1014bdd1 jne 0x1014bd99 */
  if (!C.zf) goto L_1014bd99;
  /* 1014bdd3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1014bdd5 jmp 0x1014bdef */
  goto L_1014bdef;
L_1014bdd7:;
  /* 1014bdd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1014bddd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1014bddf jmp 0x1014bdef */
  goto L_1014bdef;
L_1014bde1:;
  /* 1014bde1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1014bde7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1014bde9 jmp 0x1014bdef */
  goto L_1014bdef;
L_1014bdeb:;
  /* 1014bdeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014bded mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1014bdef:;
  /* 1014bdef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bdf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bdf4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bdf5 je 0x1014be01 */
  if (C.zf) goto L_1014be01;
L_1014bdf7:;
  /* 1014bdf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014bdf9:;
  /* 1014bdf9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1014bdfb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bdfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bdff jne 0x1014bdf9 */
  if (!C.zf) goto L_1014bdf9;
L_1014be01:;
  /* 1014be01 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1014be04 jne 0x1014bd8b */
  if (!C.zf) goto L_1014bd8b;
L_1014be06:;
  /* 1014be06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014be0a pop ebx */
  EBX = (pop32());
  /* 1014be0b pop esi */
  ESI = (pop32());
  /* 1014be0c pop edi */
  EDI = (pop32());
  /* 1014be0d ret  */
  ESPCHK(0x1014bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be0e @ 0x1014be0e (115 bytes, 37 insns) */
void f_1014be0e(void) {
  FTRACE(0x1014be0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014be0e push esi */
  push32((uint32_t)(ESI));
  /* 1014be0f call 0x1014be8a */
  push32(0x1014be14u); f_1014be8a();
  /* 1014be14 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014be18 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014be1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014be1c mov eax, 0x10152e70 */
  EAX = (0x10152e70u);
L_1014be21:;
  /* 1014be21 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be23 je 0x1014be47 */
  if (C.zf) goto L_1014be47;
  /* 1014be25 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014be28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014be29 cmp eax, 0x10152fd8 */
  { uint32_t _a=(EAX),_b=(0x10152fd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be2e jl 0x1014be21 */
  if ((C.sf!=C.of)) goto L_1014be21;
  /* 1014be30 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be33 jb 0x1014be57 */
  if (C.cf) goto L_1014be57;
  /* 1014be35 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be38 ja 0x1014be57 */
  if ((!C.cf&&!C.zf)) goto L_1014be57;
  /* 1014be3a call 0x1014be81 */
  push32(0x1014be3fu); f_1014be81();
  /* 1014be3f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1014be45 pop esi */
  ESI = (pop32());
  /* 1014be46 ret  */
  ESPCHK(0x1014be0eu, _esp0);
  ESP += 4; return;
L_1014be47:;
  /* 1014be47 call 0x1014be81 */
  push32(0x1014be4cu); f_1014be81();
  /* 1014be4c mov ecx, dword ptr [esi*8 + 0x10152e74] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10152e74)));
  /* 1014be53 pop esi */
  ESI = (pop32());
  /* 1014be54 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014be56 ret  */
  ESPCHK(0x1014be0eu, _esp0);
  ESP += 4; return;
L_1014be57:;
  /* 1014be57 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be5d jb 0x1014be74 */
  if (C.cf) goto L_1014be74;
  /* 1014be5f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be65 ja 0x1014be74 */
  if ((!C.cf&&!C.zf)) goto L_1014be74;
  /* 1014be67 call 0x1014be81 */
  push32(0x1014be6cu); f_1014be81();
  /* 1014be6c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1014be72 pop esi */
  ESI = (pop32());
  /* 1014be73 ret  */
  ESPCHK(0x1014be0eu, _esp0);
  ESP += 4; return;
L_1014be74:;
  /* 1014be74 call 0x1014be81 */
  push32(0x1014be79u); f_1014be81();
  /* 1014be79 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1014be7f pop esi */
  ESI = (pop32());
  /* 1014be80 ret  */
  ESPCHK(0x1014be0eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000be81 @ 0x1014be81 (9 bytes, 3 insns) */
void f_1014be81(void) {
  FTRACE(0x1014be81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014be81 call 0x10147f58 */
  push32(0x1014be86u); f_10147f58();
  /* 1014be86 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014be89 ret  */
  ESPCHK(0x1014be81u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be8a @ 0x1014be8a (9 bytes, 3 insns) */
void f_1014be8a(void) {
  FTRACE(0x1014be8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014be8a call 0x10147f58 */
  push32(0x1014be8fu); f_10147f58();
  /* 1014be8f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014be92 ret  */
  ESPCHK(0x1014be8au, _esp0);
  ESP += 4; return;
}

/* FUN_1000be93 @ 0x1014be93 (127 bytes, 48 insns) */
void f_1014be93(void) {
  FTRACE(0x1014be93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014be93 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014be97 push esi */
  push32((uint32_t)(ESI));
  /* 1014be98 cmp ecx, dword ptr [0x10157d20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014be9e push edi */
  push32((uint32_t)(EDI));
  /* 1014be9f jae 0x1014bef9 */
  if (!C.cf) goto L_1014bef9;
  /* 1014bea1 mov eax, ecx */
  EAX = (ECX);
  /* 1014bea3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1014bea6 lea edi, [eax*4 + 0x10157c20] */
  EDI = ((uint32_t)(EAX*4 + 0x10157c20));
  /* 1014bead mov eax, ecx */
  EAX = (ECX);
  /* 1014beaf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014beb2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1014beb5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014beb7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1014beba add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bebc test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1014bec0 je 0x1014bef9 */
  if (C.zf) goto L_1014bef9;
  /* 1014bec2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bec5 je 0x1014bef9 */
  if (C.zf) goto L_1014bef9;
  /* 1014bec7 cmp dword ptr [0x10156634], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10156634))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bece jne 0x1014beef */
  if (!C.zf) goto L_1014beef;
  /* 1014bed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bed2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014bed4 je 0x1014bee6 */
  if (C.zf) goto L_1014bee6;
  /* 1014bed6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014bed7 je 0x1014bee1 */
  if (C.zf) goto L_1014bee1;
  /* 1014bed9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014beda jne 0x1014beef */
  if (!C.zf) goto L_1014beef;
  /* 1014bedc push eax */
  push32((uint32_t)(EAX));
  /* 1014bedd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1014bedf jmp 0x1014bee9 */
  goto L_1014bee9;
L_1014bee1:;
  /* 1014bee1 push eax */
  push32((uint32_t)(EAX));
  /* 1014bee2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1014bee4 jmp 0x1014bee9 */
  goto L_1014bee9;
L_1014bee6:;
  /* 1014bee6 push eax */
  push32((uint32_t)(EAX));
  /* 1014bee7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1014bee9:;
  /* 1014bee9 call dword ptr [0x1014e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b4))), 0x1014beefu);
L_1014beef:;
  /* 1014beef mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014bef1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1014bef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014bef7 jmp 0x1014bf0f */
  goto L_1014bf0f;
L_1014bef9:;
  /* 1014bef9 call 0x1014be81 */
  push32(0x1014befeu); f_1014be81();
  /* 1014befe mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1014bf04 call 0x1014be8a */
  push32(0x1014bf09u); f_1014be8a();
  /* 1014bf09 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014bf0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1014bf0f:;
  /* 1014bf0f pop edi */
  EDI = (pop32());
  /* 1014bf10 pop esi */
  ESI = (pop32());
  /* 1014bf11 ret  */
  ESPCHK(0x1014be93u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf12 @ 0x1014bf12 (66 bytes, 19 insns) */
void f_1014bf12(void) {
  FTRACE(0x1014bf12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bf12 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014bf16 cmp eax, dword ptr [0x10157d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bf1c jae 0x1014bf3d */
  if (!C.cf) goto L_1014bf3d;
  /* 1014bf1e mov ecx, eax */
  ECX = (EAX);
  /* 1014bf20 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014bf23 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1014bf26 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1014bf29 mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 1014bf30 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1014bf35 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1014bf38 je 0x1014bf3d */
  if (C.zf) goto L_1014bf3d;
  /* 1014bf3a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1014bf3c ret  */
  ESPCHK(0x1014bf12u, _esp0);
  ESP += 4; return;
L_1014bf3d:;
  /* 1014bf3d call 0x1014be81 */
  push32(0x1014bf42u); f_1014be81();
  /* 1014bf42 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1014bf48 call 0x1014be8a */
  push32(0x1014bf4du); f_1014be8a();
  /* 1014bf4d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014bf50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014bf53 ret  */
  ESPCHK(0x1014bf12u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf54 @ 0x1014bf54 (95 bytes, 34 insns) */
void f_1014bf54(void) {
  FTRACE(0x1014bf54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bf54 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014bf58 push ebx */
  push32((uint32_t)(EBX));
  /* 1014bf59 mov ecx, eax */
  ECX = (EAX);
  /* 1014bf5b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014bf5e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1014bf61 push esi */
  push32((uint32_t)(ESI));
  /* 1014bf62 push edi */
  push32((uint32_t)(EDI));
  /* 1014bf63 mov esi, dword ptr [ecx*4 + 0x10157c20] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 1014bf6a lea ebx, [ecx*4 + 0x10157c20] */
  EBX = ((uint32_t)(ECX*4 + 0x10157c20));
  /* 1014bf71 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1014bf74 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1014bf77 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014bf79 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bf7d jne 0x1014bfa2 */
  if (!C.zf) goto L_1014bfa2;
  /* 1014bf7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1014bf81 call 0x10149f23 */
  push32(0x1014bf86u); f_10149f23();
  /* 1014bf86 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014bf8a pop ecx */
  ECX = (pop32());
  /* 1014bf8b jne 0x1014bf9a */
  if (!C.zf) goto L_1014bf9a;
  /* 1014bf8d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1014bf90 push eax */
  push32((uint32_t)(EAX));
  /* 1014bf91 call dword ptr [0x1014e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e094))), 0x1014bf97u);
  /* 1014bf97 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1014bf9a:;
  /* 1014bf9a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1014bf9c call 0x10149f84 */
  push32(0x1014bfa1u); f_10149f84();
  /* 1014bfa1 pop ecx */
  ECX = (pop32());
L_1014bfa2:;
  /* 1014bfa2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1014bfa4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1014bfa8 push eax */
  push32((uint32_t)(EAX));
  /* 1014bfa9 call dword ptr [0x1014e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e00c))), 0x1014bfafu);
  /* 1014bfaf pop edi */
  EDI = (pop32());
  /* 1014bfb0 pop esi */
  ESI = (pop32());
  /* 1014bfb1 pop ebx */
  EBX = (pop32());
  /* 1014bfb2 ret  */
  ESPCHK(0x1014bf54u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfb3 @ 0x1014bfb3 (34 bytes, 10 insns) */
void f_1014bfb3(void) {
  FTRACE(0x1014bfb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014bfb3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014bfb7 mov ecx, eax */
  ECX = (EAX);
  /* 1014bfb9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014bfbc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1014bfbf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1014bfc2 mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 1014bfc9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1014bfcd push eax */
  push32((uint32_t)(EAX));
  /* 1014bfce call dword ptr [0x1014e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e008))), 0x1014bfd4u);
  /* 1014bfd4 ret  */
  ESPCHK(0x1014bfb3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c056 @ 0x1014c056 (46 bytes, 22 insns) */
void f_1014c056(void) {
  FTRACE(0x1014c056u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c056 push esi */
  push32((uint32_t)(ESI));
  /* 1014c057 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014c05b push esi */
  push32((uint32_t)(ESI));
  /* 1014c05c call 0x1014c084 */
  push32(0x1014c061u); f_1014c084();
  /* 1014c061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c063 pop ecx */
  ECX = (pop32());
  /* 1014c064 je 0x1014c06b */
  if (C.zf) goto L_1014c06b;
  /* 1014c066 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014c069 pop esi */
  ESI = (pop32());
  /* 1014c06a ret  */
  ESPCHK(0x1014c056u, _esp0);
  ESP += 4; return;
L_1014c06b:;
  /* 1014c06b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1014c06f je 0x1014c080 */
  if (C.zf) goto L_1014c080;
  /* 1014c071 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1014c074 call 0x1014d1d0 */
  push32(0x1014c079u); f_1014d1d0();
  /* 1014c079 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014c07b pop ecx */
  ECX = (pop32());
  /* 1014c07c pop esi */
  ESI = (pop32());
  /* 1014c07d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c07f ret  */
  ESPCHK(0x1014c056u, _esp0);
  ESP += 4; return;
L_1014c080:;
  /* 1014c080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014c082 pop esi */
  ESI = (pop32());
  /* 1014c083 ret  */
  ESPCHK(0x1014c056u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c084 @ 0x1014c084 (92 bytes, 40 insns) */
void f_1014c084(void) {
  FTRACE(0x1014c084u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c084 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c085 push esi */
  push32((uint32_t)(ESI));
  /* 1014c086 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1014c08a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014c08c push edi */
  push32((uint32_t)(EDI));
  /* 1014c08d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1014c090 mov ecx, eax */
  ECX = (EAX);
  /* 1014c092 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1014c095 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c098 jne 0x1014c0d1 */
  if (!C.zf) goto L_1014c0d1;
  /* 1014c09a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1014c09e je 0x1014c0d1 */
  if (C.zf) goto L_1014c0d1;
  /* 1014c0a0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1014c0a3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1014c0a5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c0a7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014c0a9 jle 0x1014c0d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1014c0d1;
  /* 1014c0ab push edi */
  push32((uint32_t)(EDI));
  /* 1014c0ac push eax */
  push32((uint32_t)(EAX));
  /* 1014c0ad push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1014c0b0 call 0x10148b85 */
  push32(0x1014c0b5u); f_10148b85();
  /* 1014c0b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c0b8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c0ba jne 0x1014c0ca */
  if (!C.zf) goto L_1014c0ca;
  /* 1014c0bc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1014c0bf test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1014c0c1 je 0x1014c0d1 */
  if (C.zf) goto L_1014c0d1;
  /* 1014c0c3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1014c0c5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1014c0c8 jmp 0x1014c0d1 */
  goto L_1014c0d1;
L_1014c0ca:;
  /* 1014c0ca or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1014c0ce or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1014c0d1:;
  /* 1014c0d1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1014c0d4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014c0d8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014c0da pop edi */
  EDI = (pop32());
  /* 1014c0db mov eax, ebx */
  EAX = (EBX);
  /* 1014c0dd pop esi */
  ESI = (pop32());
  /* 1014c0de pop ebx */
  EBX = (pop32());
  /* 1014c0df ret  */
  ESPCHK(0x1014c084u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e9 @ 0x1014c0e9 (164 bytes, 66 insns) */
void f_1014c0e9(void) {
  FTRACE(0x1014c0e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c0e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c0ea push esi */
  push32((uint32_t)(ESI));
  /* 1014c0eb push edi */
  push32((uint32_t)(EDI));
  /* 1014c0ec push 2 */
  push32((uint32_t)(0x2u));
  /* 1014c0ee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014c0f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014c0f2 call 0x10149f23 */
  push32(0x1014c0f7u); f_10149f23();
  /* 1014c0f7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014c0f9 pop ecx */
  ECX = (pop32());
  /* 1014c0fa cmp dword ptr [0x10157c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10157c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c100 jle 0x1014c176 */
  if ((C.zf||C.sf!=C.of)) goto L_1014c176;
L_1014c102:;
  /* 1014c102 mov eax, dword ptr [0x10156be8] */
  EAX = (r32((uint32_t)(0x10156be8)));
  /* 1014c107 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1014c10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c10c je 0x1014c16d */
  if (C.zf) goto L_1014c16d;
  /* 1014c10e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1014c112 je 0x1014c16d */
  if (C.zf) goto L_1014c16d;
  /* 1014c114 push eax */
  push32((uint32_t)(EAX));
  /* 1014c115 push esi */
  push32((uint32_t)(ESI));
  /* 1014c116 call 0x10148ecd */
  push32(0x1014c11bu); f_10148ecd();
  /* 1014c11b mov eax, dword ptr [0x10156be8] */
  EAX = (r32((uint32_t)(0x10156be8)));
  /* 1014c120 pop ecx */
  ECX = (pop32());
  /* 1014c121 pop ecx */
  ECX = (pop32());
  /* 1014c122 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1014c125 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1014c128 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1014c12b je 0x1014c15d */
  if (C.zf) goto L_1014c15d;
  /* 1014c12d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c132 jne 0x1014c143 */
  if (!C.zf) goto L_1014c143;
  /* 1014c134 push eax */
  push32((uint32_t)(EAX));
  /* 1014c135 call 0x1014c056 */
  push32(0x1014c13au); f_1014c056();
  /* 1014c13a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c13d pop ecx */
  ECX = (pop32());
  /* 1014c13e je 0x1014c15d */
  if (C.zf) goto L_1014c15d;
  /* 1014c140 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014c141 jmp 0x1014c15d */
  goto L_1014c15d;
L_1014c143:;
  /* 1014c143 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c148 jne 0x1014c15d */
  if (!C.zf) goto L_1014c15d;
  /* 1014c14a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1014c14d je 0x1014c15d */
  if (C.zf) goto L_1014c15d;
  /* 1014c14f push eax */
  push32((uint32_t)(EAX));
  /* 1014c150 call 0x1014c056 */
  push32(0x1014c155u); f_1014c056();
  /* 1014c155 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c158 pop ecx */
  ECX = (pop32());
  /* 1014c159 jne 0x1014c15d */
  if (!C.zf) goto L_1014c15d;
  /* 1014c15b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1014c15d:;
  /* 1014c15d mov eax, dword ptr [0x10156be8] */
  EAX = (r32((uint32_t)(0x10156be8)));
  /* 1014c162 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1014c165 push esi */
  push32((uint32_t)(ESI));
  /* 1014c166 call 0x10148f1f */
  push32(0x1014c16bu); f_10148f1f();
  /* 1014c16b pop ecx */
  ECX = (pop32());
  /* 1014c16c pop ecx */
  ECX = (pop32());
L_1014c16d:;
  /* 1014c16d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014c16e cmp esi, dword ptr [0x10157c00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10157c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c174 jl 0x1014c102 */
  if ((C.sf!=C.of)) goto L_1014c102;
L_1014c176:;
  /* 1014c176 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014c178 call 0x10149f84 */
  push32(0x1014c17du); f_10149f84();
  /* 1014c17d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c182 pop ecx */
  ECX = (pop32());
  /* 1014c183 mov eax, ebx */
  EAX = (EBX);
  /* 1014c185 je 0x1014c189 */
  if (C.zf) goto L_1014c189;
  /* 1014c187 mov eax, edi */
  EAX = (EDI);
L_1014c189:;
  /* 1014c189 pop edi */
  EDI = (pop32());
  /* 1014c18a pop esi */
  ESI = (pop32());
  /* 1014c18b pop ebx */
  EBX = (pop32());
  /* 1014c18c ret  */
  ESPCHK(0x1014c0e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c18d @ 0x1014c18d (318 bytes, 123 insns) */
void f_1014c18d(void) {
  FTRACE(0x1014c18du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c18d push ebp */
  push32((uint32_t)(EBP));
  /* 1014c18e mov ebp, esp */
  EBP = (ESP);
  /* 1014c190 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1014c192 push 0x1014e560 */
  push32((uint32_t)(0x1014e560u));
  /* 1014c197 push 0x1014cf40 */
  push32((uint32_t)(0x1014cf40u));
  /* 1014c19c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1014c1a2 push eax */
  push32((uint32_t)(EAX));
  /* 1014c1a3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1014c1aa sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c1ad push ebx */
  push32((uint32_t)(EBX));
  /* 1014c1ae push esi */
  push32((uint32_t)(ESI));
  /* 1014c1af push edi */
  push32((uint32_t)(EDI));
  /* 1014c1b0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1014c1b3 mov eax, dword ptr [0x10156844] */
  EAX = (r32((uint32_t)(0x10156844)));
  /* 1014c1b8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014c1ba cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c1bc jne 0x1014c1fc */
  if (!C.zf) goto L_1014c1fc;
  /* 1014c1be lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1014c1c1 push eax */
  push32((uint32_t)(EAX));
  /* 1014c1c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c1c4 pop esi */
  ESI = (pop32());
  /* 1014c1c5 push esi */
  push32((uint32_t)(ESI));
  /* 1014c1c6 push 0x1014e558 */
  push32((uint32_t)(0x1014e558u));
  /* 1014c1cb push esi */
  push32((uint32_t)(ESI));
  /* 1014c1cc call dword ptr [0x1014e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c0))), 0x1014c1d2u);
  /* 1014c1d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c1d4 je 0x1014c1da */
  if (C.zf) goto L_1014c1da;
  /* 1014c1d6 mov eax, esi */
  EAX = (ESI);
  /* 1014c1d8 jmp 0x1014c1f7 */
  goto L_1014c1f7;
L_1014c1da:;
  /* 1014c1da lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1014c1dd push eax */
  push32((uint32_t)(EAX));
  /* 1014c1de push esi */
  push32((uint32_t)(ESI));
  /* 1014c1df push 0x1014e554 */
  push32((uint32_t)(0x1014e554u));
  /* 1014c1e4 push esi */
  push32((uint32_t)(ESI));
  /* 1014c1e5 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c1e6 call dword ptr [0x1014e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0bc))), 0x1014c1ecu);
  /* 1014c1ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c1ee je 0x1014c2c2 */
  if (C.zf) goto L_1014c2c2;
  /* 1014c1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014c1f6 pop eax */
  EAX = (pop32());
L_1014c1f7:;
  /* 1014c1f7 mov dword ptr [0x10156844], eax */
  w32((uint32_t)(0x10156844), (EAX));
L_1014c1fc:;
  /* 1014c1fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c1ff jne 0x1014c225 */
  if (!C.zf) goto L_1014c225;
  /* 1014c201 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1014c204 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c206 jne 0x1014c20d */
  if (!C.zf) goto L_1014c20d;
  /* 1014c208 mov eax, dword ptr [0x10156818] */
  EAX = (r32((uint32_t)(0x10156818)));
L_1014c20d:;
  /* 1014c20d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c210 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c213 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c216 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c219 push eax */
  push32((uint32_t)(EAX));
  /* 1014c21a call dword ptr [0x1014e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0bc))), 0x1014c220u);
  /* 1014c220 jmp 0x1014c2c4 */
  goto L_1014c2c4;
L_1014c225:;
  /* 1014c225 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c228 jne 0x1014c2c2 */
  if (!C.zf) goto L_1014c2c2;
  /* 1014c22e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c231 jne 0x1014c23b */
  if (!C.zf) goto L_1014c23b;
  /* 1014c233 mov eax, dword ptr [0x10156828] */
  EAX = (r32((uint32_t)(0x10156828)));
  /* 1014c238 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1014c23b:;
  /* 1014c23b push ebx */
  push32((uint32_t)(EBX));
  /* 1014c23c push ebx */
  push32((uint32_t)(EBX));
  /* 1014c23d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c240 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c243 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1014c246 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014c248 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c24a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1014c24d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014c24e push eax */
  push32((uint32_t)(EAX));
  /* 1014c24f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1014c252 call dword ptr [0x1014e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b8))), 0x1014c258u);
  /* 1014c258 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014c25b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c25d je 0x1014c2c2 */
  if (C.zf) goto L_1014c2c2;
  /* 1014c25f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1014c262 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1014c265 mov eax, edi */
  EAX = (EDI);
  /* 1014c267 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c26a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1014c26c call 0x1014ade0 */
  push32(0x1014c271u); f_1014ade0();
  /* 1014c271 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1014c274 mov esi, esp */
  ESI = (ESP);
  /* 1014c276 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1014c279 push edi */
  push32((uint32_t)(EDI));
  /* 1014c27a push ebx */
  push32((uint32_t)(EBX));
  /* 1014c27b push esi */
  push32((uint32_t)(ESI));
  /* 1014c27c call 0x10149af0 */
  push32(0x1014c281u); f_10149af0();
  /* 1014c281 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c284 jmp 0x1014c291 */
  goto L_1014c291;
  /* 1014c286 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c288 pop eax */
  EAX = (pop32());
  /* 1014c289 ret  */
  ESPCHK(0x1014c18du, _esp0);
  ESP += 4; return;
  /* 1014c28a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1014c28d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014c28f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1014c291:;
  /* 1014c291 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014c295 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c297 je 0x1014c2c2 */
  if (C.zf) goto L_1014c2c2;
  /* 1014c299 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1014c29c push esi */
  push32((uint32_t)(ESI));
  /* 1014c29d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c2a0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c2a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c2a5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1014c2a8 call dword ptr [0x1014e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b8))), 0x1014c2aeu);
  /* 1014c2ae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c2b0 je 0x1014c2c2 */
  if (C.zf) goto L_1014c2c2;
  /* 1014c2b2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c2b5 push eax */
  push32((uint32_t)(EAX));
  /* 1014c2b6 push esi */
  push32((uint32_t)(ESI));
  /* 1014c2b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c2ba call dword ptr [0x1014e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c0))), 0x1014c2c0u);
  /* 1014c2c0 jmp 0x1014c2c4 */
  goto L_1014c2c4;
L_1014c2c2:;
  /* 1014c2c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014c2c4:;
  /* 1014c2c4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1014c2c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014c2ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1014c2d1 pop edi */
  EDI = (pop32());
  /* 1014c2d2 pop esi */
  ESI = (pop32());
  /* 1014c2d3 pop ebx */
  EBX = (pop32());
  /* 1014c2d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014c2d5 ret  */
  ESPCHK(0x1014c18du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d6 @ 0x1014c2d6 (511 bytes, 193 insns) */
void f_1014c2d6(void) {
  FTRACE(0x1014c2d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c2d6 push ebp */
  push32((uint32_t)(EBP));
  /* 1014c2d7 mov ebp, esp */
  EBP = (ESP);
  /* 1014c2d9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1014c2db push 0x1014e570 */
  push32((uint32_t)(0x1014e570u));
  /* 1014c2e0 push 0x1014cf40 */
  push32((uint32_t)(0x1014cf40u));
  /* 1014c2e5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1014c2eb push eax */
  push32((uint32_t)(EAX));
  /* 1014c2ec mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1014c2f3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c2f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c2f7 push esi */
  push32((uint32_t)(ESI));
  /* 1014c2f8 push edi */
  push32((uint32_t)(EDI));
  /* 1014c2f9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1014c2fc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014c2fe cmp dword ptr [0x10156848], edi */
  { uint32_t _a=(r32((uint32_t)(0x10156848))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c304 jne 0x1014c34c */
  if (!C.zf) goto L_1014c34c;
  /* 1014c306 push edi */
  push32((uint32_t)(EDI));
  /* 1014c307 push edi */
  push32((uint32_t)(EDI));
  /* 1014c308 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c30a pop ebx */
  EBX = (pop32());
  /* 1014c30b push ebx */
  push32((uint32_t)(EBX));
  /* 1014c30c push 0x1014e558 */
  push32((uint32_t)(0x1014e558u));
  /* 1014c311 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1014c316 push esi */
  push32((uint32_t)(ESI));
  /* 1014c317 push edi */
  push32((uint32_t)(EDI));
  /* 1014c318 call dword ptr [0x1014e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c8))), 0x1014c31eu);
  /* 1014c31e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c320 je 0x1014c32a */
  if (C.zf) goto L_1014c32a;
  /* 1014c322 mov dword ptr [0x10156848], ebx */
  w32((uint32_t)(0x10156848), (EBX));
  /* 1014c328 jmp 0x1014c34c */
  goto L_1014c34c;
L_1014c32a:;
  /* 1014c32a push edi */
  push32((uint32_t)(EDI));
  /* 1014c32b push edi */
  push32((uint32_t)(EDI));
  /* 1014c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1014c32d push 0x1014e554 */
  push32((uint32_t)(0x1014e554u));
  /* 1014c332 push esi */
  push32((uint32_t)(ESI));
  /* 1014c333 push edi */
  push32((uint32_t)(EDI));
  /* 1014c334 call dword ptr [0x1014e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c4))), 0x1014c33au);
  /* 1014c33a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c33c je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c342 mov dword ptr [0x10156848], 2 */
  w32((uint32_t)(0x10156848), (0x2u));
L_1014c34c:;
  /* 1014c34c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c34f jle 0x1014c361 */
  if ((C.zf||C.sf!=C.of)) goto L_1014c361;
  /* 1014c351 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c354 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c357 call 0x1014c4fa */
  push32(0x1014c35cu); f_1014c4fa();
  /* 1014c35c pop ecx */
  ECX = (pop32());
  /* 1014c35d pop ecx */
  ECX = (pop32());
  /* 1014c35e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1014c361:;
  /* 1014c361 mov eax, dword ptr [0x10156848] */
  EAX = (r32((uint32_t)(0x10156848)));
  /* 1014c366 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c369 jne 0x1014c388 */
  if (!C.zf) goto L_1014c388;
  /* 1014c36b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1014c36e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1014c371 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c374 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c377 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c37a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c37d call dword ptr [0x1014e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c4))), 0x1014c383u);
  /* 1014c383 jmp 0x1014c466 */
  goto L_1014c466;
L_1014c388:;
  /* 1014c388 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c38b jne 0x1014c464 */
  if (!C.zf) goto L_1014c464;
  /* 1014c391 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c394 jne 0x1014c39e */
  if (!C.zf) goto L_1014c39e;
  /* 1014c396 mov eax, dword ptr [0x10156828] */
  EAX = (r32((uint32_t)(0x10156828)));
  /* 1014c39b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1014c39e:;
  /* 1014c39e push edi */
  push32((uint32_t)(EDI));
  /* 1014c39f push edi */
  push32((uint32_t)(EDI));
  /* 1014c3a0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c3a3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c3a6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1014c3a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014c3ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c3ad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1014c3b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014c3b1 push eax */
  push32((uint32_t)(EAX));
  /* 1014c3b2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1014c3b5 call dword ptr [0x1014e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b8))), 0x1014c3bbu);
  /* 1014c3bb mov ebx, eax */
  EBX = (EAX);
  /* 1014c3bd mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1014c3c0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c3c2 je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c3c8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1014c3cb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1014c3ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c3d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1014c3d3 call 0x1014ade0 */
  push32(0x1014c3d8u); f_1014ade0();
  /* 1014c3d8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1014c3db mov eax, esp */
  EAX = (ESP);
  /* 1014c3dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1014c3e0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014c3e4 jmp 0x1014c3f9 */
  goto L_1014c3f9;
  /* 1014c3e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c3e8 pop eax */
  EAX = (pop32());
  /* 1014c3e9 ret  */
  ESPCHK(0x1014c2d6u, _esp0);
  ESP += 4; return;
  /* 1014c3ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1014c3ed xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014c3ef mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1014c3f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014c3f6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1014c3f9:;
  /* 1014c3f9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c3fc je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c3fe push ebx */
  push32((uint32_t)(EBX));
  /* 1014c3ff push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1014c402 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014c405 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1014c408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c40a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1014c40d call dword ptr [0x1014e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0b8))), 0x1014c413u);
  /* 1014c413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c415 je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c417 push edi */
  push32((uint32_t)(EDI));
  /* 1014c418 push edi */
  push32((uint32_t)(EDI));
  /* 1014c419 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c41a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1014c41d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c420 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c423 call dword ptr [0x1014e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c8))), 0x1014c429u);
  /* 1014c429 mov esi, eax */
  ESI = (EAX);
  /* 1014c42b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1014c42e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c430 je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c432 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1014c436 je 0x1014c478 */
  if (C.zf) goto L_1014c478;
  /* 1014c438 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c43b je 0x1014c4f3 */
  if (C.zf) goto L_1014c4f3;
  /* 1014c441 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c444 jg 0x1014c464 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014c464;
  /* 1014c446 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1014c449 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1014c44c push ebx */
  push32((uint32_t)(EBX));
  /* 1014c44d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1014c450 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c453 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c456 call dword ptr [0x1014e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c8))), 0x1014c45cu);
  /* 1014c45c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c45e jne 0x1014c4f3 */
  if (!C.zf) goto L_1014c4f3;
L_1014c464:;
  /* 1014c464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014c466:;
  /* 1014c466 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1014c469 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014c46c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1014c473 pop edi */
  EDI = (pop32());
  /* 1014c474 pop esi */
  ESI = (pop32());
  /* 1014c475 pop ebx */
  EBX = (pop32());
  /* 1014c476 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014c477 ret  */
  ESPCHK(0x1014c2d6u, _esp0);
  ESP += 4; return;
L_1014c478:;
  /* 1014c478 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1014c47f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1014c482 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c485 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1014c487 call 0x1014ade0 */
  push32(0x1014c48cu); f_1014ade0();
  /* 1014c48c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1014c48f mov ebx, esp */
  EBX = (ESP);
  /* 1014c491 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1014c494 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014c498 jmp 0x1014c4ac */
  goto L_1014c4ac;
  /* 1014c49a push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c49c pop eax */
  EAX = (pop32());
  /* 1014c49d ret  */
  ESPCHK(0x1014c2d6u, _esp0);
  ESP += 4; return;
  /* 1014c49e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1014c4a1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014c4a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014c4a5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014c4a9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1014c4ac:;
  /* 1014c4ac cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c4ae je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c4b0 push esi */
  push32((uint32_t)(ESI));
  /* 1014c4b1 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c4b2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1014c4b5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1014c4b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1014c4bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014c4be call dword ptr [0x1014e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0c8))), 0x1014c4c4u);
  /* 1014c4c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c4c6 je 0x1014c464 */
  if (C.zf) goto L_1014c464;
  /* 1014c4c8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c4cb push edi */
  push32((uint32_t)(EDI));
  /* 1014c4cc push edi */
  push32((uint32_t)(EDI));
  /* 1014c4cd jne 0x1014c4d3 */
  if (!C.zf) goto L_1014c4d3;
  /* 1014c4cf push edi */
  push32((uint32_t)(EDI));
  /* 1014c4d0 push edi */
  push32((uint32_t)(EDI));
  /* 1014c4d1 jmp 0x1014c4d9 */
  goto L_1014c4d9;
L_1014c4d3:;
  /* 1014c4d3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1014c4d6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1014c4d9:;
  /* 1014c4d9 push esi */
  push32((uint32_t)(ESI));
  /* 1014c4da push ebx */
  push32((uint32_t)(EBX));
  /* 1014c4db push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1014c4e0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1014c4e3 call dword ptr [0x1014e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e060))), 0x1014c4e9u);
  /* 1014c4e9 mov esi, eax */
  ESI = (EAX);
  /* 1014c4eb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c4ed je 0x1014c464 */
  if (C.zf) goto L_1014c464;
L_1014c4f3:;
  /* 1014c4f3 mov eax, esi */
  EAX = (ESI);
  /* 1014c4f5 jmp 0x1014c466 */
  goto L_1014c466;
}

/* FUN_1000c4fa @ 0x1014c4fa (43 bytes, 20 insns) */
void f_1014c4fa(void) {
  FTRACE(0x1014c4fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c4fa mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014c4fe mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014c502 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1014c504 push esi */
  push32((uint32_t)(ESI));
  /* 1014c505 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1014c508 je 0x1014c517 */
  if (C.zf) goto L_1014c517;
L_1014c50a:;
  /* 1014c50a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c50d je 0x1014c517 */
  if (C.zf) goto L_1014c517;
  /* 1014c50f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014c510 mov esi, ecx */
  ESI = (ECX);
  /* 1014c512 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014c513 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014c515 jne 0x1014c50a */
  if (!C.zf) goto L_1014c50a;
L_1014c517:;
  /* 1014c517 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c51a pop esi */
  ESI = (pop32());
  /* 1014c51b jne 0x1014c522 */
  if (!C.zf) goto L_1014c522;
  /* 1014c51d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c521 ret  */
  ESPCHK(0x1014c4fau, _esp0);
  ESP += 4; return;
L_1014c522:;
  /* 1014c522 mov eax, edx */
  EAX = (EDX);
  /* 1014c524 ret  */
  ESPCHK(0x1014c4fau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c525 @ 0x1014c525 (33 bytes, 15 insns) */
void f_1014c525(void) {
  FTRACE(0x1014c525u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c525 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014c529 push esi */
  push32((uint32_t)(ESI));
  /* 1014c52a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1014c52e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014c530 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1014c533 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c535 jb 0x1014c53b */
  if (C.cf) goto L_1014c53b;
  /* 1014c537 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c539 jae 0x1014c53e */
  if (!C.cf) goto L_1014c53e;
L_1014c53b:;
  /* 1014c53b push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c53d pop eax */
  EAX = (pop32());
L_1014c53e:;
  /* 1014c53e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014c542 pop esi */
  ESI = (pop32());
  /* 1014c543 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1014c545 ret  */
  ESPCHK(0x1014c525u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1014c546 (94 bytes, 38 insns) */
void f_1014c546(void) {
  FTRACE(0x1014c546u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c546 push esi */
  push32((uint32_t)(ESI));
  /* 1014c547 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014c54b push edi */
  push32((uint32_t)(EDI));
  /* 1014c54c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1014c550 push esi */
  push32((uint32_t)(ESI));
  /* 1014c551 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1014c553 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1014c555 call 0x1014c525 */
  push32(0x1014c55au); f_1014c525();
  /* 1014c55a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c55f je 0x1014c578 */
  if (C.zf) goto L_1014c578;
  /* 1014c561 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1014c564 push eax */
  push32((uint32_t)(EAX));
  /* 1014c565 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c567 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1014c569 call 0x1014c525 */
  push32(0x1014c56eu); f_1014c525();
  /* 1014c56e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c573 je 0x1014c578 */
  if (C.zf) goto L_1014c578;
  /* 1014c575 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1014c578:;
  /* 1014c578 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1014c57b push eax */
  push32((uint32_t)(EAX));
  /* 1014c57c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1014c57f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1014c581 call 0x1014c525 */
  push32(0x1014c586u); f_1014c525();
  /* 1014c586 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c58b je 0x1014c590 */
  if (C.zf) goto L_1014c590;
  /* 1014c58d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1014c590:;
  /* 1014c590 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1014c593 push eax */
  push32((uint32_t)(EAX));
  /* 1014c594 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1014c597 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1014c599 call 0x1014c525 */
  push32(0x1014c59eu); f_1014c525();
  /* 1014c59e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c5a1 pop edi */
  EDI = (pop32());
  /* 1014c5a2 pop esi */
  ESI = (pop32());
  /* 1014c5a3 ret  */
  ESPCHK(0x1014c546u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5a4 @ 0x1014c5a4 (46 bytes, 21 insns) */
void f_1014c5a4(void) {
  FTRACE(0x1014c5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c5a4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014c5a8 push esi */
  push32((uint32_t)(ESI));
  /* 1014c5a9 push edi */
  push32((uint32_t)(EDI));
  /* 1014c5aa mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1014c5ac mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1014c5af mov ecx, esi */
  ECX = (ESI);
  /* 1014c5b1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c5b3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1014c5b5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1014c5b8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1014c5bb or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1014c5bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1014c5c0 mov edx, edi */
  EDX = (EDI);
  /* 1014c5c2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1014c5c5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1014c5c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1014c5ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1014c5cc pop edi */
  EDI = (pop32());
  /* 1014c5cd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1014c5d0 pop esi */
  ESI = (pop32());
  /* 1014c5d1 ret  */
  ESPCHK(0x1014c5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d2 @ 0x1014c5d2 (45 bytes, 21 insns) */
void f_1014c5d2(void) {
  FTRACE(0x1014c5d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c5d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014c5d6 push esi */
  push32((uint32_t)(ESI));
  /* 1014c5d7 push edi */
  push32((uint32_t)(EDI));
  /* 1014c5d8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1014c5db mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1014c5de mov esi, edx */
  ESI = (EDX);
  /* 1014c5e0 mov edi, ecx */
  EDI = (ECX);
  /* 1014c5e2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1014c5e5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1014c5e7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1014c5e9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1014c5ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1014c5ee shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1014c5f1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1014c5f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1014c5f5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1014c5f7 pop edi */
  EDI = (pop32());
  /* 1014c5f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1014c5fb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1014c5fd pop esi */
  ESI = (pop32());
  /* 1014c5fe ret  */
  ESPCHK(0x1014c5d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5ff @ 0x1014c5ff (199 bytes, 76 insns) */
void f_1014c5ff(void) {
  FTRACE(0x1014c5ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c5ff push ebp */
  push32((uint32_t)(EBP));
  /* 1014c600 mov ebp, esp */
  EBP = (ESP);
  /* 1014c602 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c605 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014c608 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c609 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014c60c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014c60e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c610 push esi */
  push32((uint32_t)(ESI));
  /* 1014c611 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1014c618 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1014c61a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1014c61d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1014c620 jbe 0x1014c673 */
  if ((C.cf||C.zf)) goto L_1014c673;
  /* 1014c622 push edi */
  push32((uint32_t)(EDI));
  /* 1014c623 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1014c626:;
  /* 1014c626 mov esi, ebx */
  ESI = (EBX);
  /* 1014c628 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1014c62b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014c62c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014c62d push ebx */
  push32((uint32_t)(EBX));
  /* 1014c62e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014c62f call 0x1014c5a4 */
  push32(0x1014c634u); f_1014c5a4();
  /* 1014c634 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c635 call 0x1014c5a4 */
  push32(0x1014c63au); f_1014c5a4();
  /* 1014c63a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014c63d push eax */
  push32((uint32_t)(EAX));
  /* 1014c63e push ebx */
  push32((uint32_t)(EBX));
  /* 1014c63f call 0x1014c546 */
  push32(0x1014c644u); f_1014c546();
  /* 1014c644 push ebx */
  push32((uint32_t)(EBX));
  /* 1014c645 call 0x1014c5a4 */
  push32(0x1014c64au); f_1014c5a4();
  /* 1014c64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014c64d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1014c651 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1014c655 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1014c658 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1014c65b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014c65e push eax */
  push32((uint32_t)(EAX));
  /* 1014c65f push ebx */
  push32((uint32_t)(EBX));
  /* 1014c660 call 0x1014c546 */
  push32(0x1014c665u); f_1014c546();
  /* 1014c665 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014c668 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1014c66b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1014c66e jne 0x1014c626 */
  if (!C.zf) goto L_1014c626;
  /* 1014c670 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014c672 pop edi */
  EDI = (pop32());
L_1014c673:;
  /* 1014c673 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c676 jne 0x1014c6a0 */
  if (!C.zf) goto L_1014c6a0;
  /* 1014c678 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1014c67b mov eax, ecx */
  EAX = (ECX);
  /* 1014c67d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1014c680 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1014c683 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1014c685 mov esi, eax */
  ESI = (EAX);
  /* 1014c687 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1014c68a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1014c68d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1014c68f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1014c692 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014c699 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1014c69c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1014c69e jmp 0x1014c673 */
  goto L_1014c673;
L_1014c6a0:;
  /* 1014c6a0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1014c6a5:;
  /* 1014c6a5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1014c6a8 jne 0x1014c6ba */
  if (!C.zf) goto L_1014c6ba;
  /* 1014c6aa push ebx */
  push32((uint32_t)(EBX));
  /* 1014c6ab call 0x1014c5a4 */
  push32(0x1014c6b0u); f_1014c5a4();
  /* 1014c6b0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014c6b7 pop ecx */
  ECX = (pop32());
  /* 1014c6b8 jmp 0x1014c6a5 */
  goto L_1014c6a5;
L_1014c6ba:;
  /* 1014c6ba mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1014c6be pop esi */
  ESI = (pop32());
  /* 1014c6bf mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1014c6c3 pop ebx */
  EBX = (pop32());
  /* 1014c6c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014c6c5 ret  */
  ESPCHK(0x1014c5ffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c6 @ 0x1014c6c6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1014c6c6(void) {
  FTRACE(0x1014c6c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014c6c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1014c6c7 mov ebp, esp */
  EBP = (ESP);
  /* 1014c6c9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c6cc push ebx */
  push32((uint32_t)(EBX));
  /* 1014c6cd push esi */
  push32((uint32_t)(ESI));
  /* 1014c6ce push edi */
  push32((uint32_t)(EDI));
  /* 1014c6cf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1014c6d2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1014c6d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c6d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1014c6da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014c6dc pop edx */
  EDX = (pop32());
  /* 1014c6dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1014c6e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1014c6e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1014c6e6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1014c6e9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1014c6ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014c6ef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1014c6f2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1014c6f5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1014c6f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1014c6fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1014c6fe mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1014c701:;
  /* 1014c701 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1014c703 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c706 je 0x1014c717 */
  if (C.zf) goto L_1014c717;
  /* 1014c708 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c70b je 0x1014c717 */
  if (C.zf) goto L_1014c717;
  /* 1014c70d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c710 je 0x1014c717 */
  if (C.zf) goto L_1014c717;
  /* 1014c712 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c715 jne 0x1014c71a */
  if (!C.zf) goto L_1014c71a;
L_1014c717:;
  /* 1014c717 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c718 jmp 0x1014c701 */
  goto L_1014c701;
L_1014c71a:;
  /* 1014c71a push 4 */
  push32((uint32_t)(0x4u));
  /* 1014c71c pop esi */
  ESI = (pop32());
L_1014c71d:;
  /* 1014c71d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c71f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c720 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c723 ja 0x1014c9a0 */
  if ((!C.cf&&!C.zf)) goto L_1014c9a0;
  /* 1014c729 jmp dword ptr [eax*4 + 0x1014cb67] */
  switch (EAX) {
    case 0: goto L_1014c730;
    case 1: goto L_1014c77f;
    case 2: goto L_1014c7d6;
    case 3: goto L_1014c800;
    case 4: goto L_1014c85b;
    case 5: goto L_1014c8d2;
    case 6: goto L_1014c908;
    case 7: goto L_1014c952;
    case 8: goto L_1014c931;
    case 9: goto L_1014c9b6;
    case 10: goto L_1014c9a0;
    case 11: goto L_1014c96c;
    default: x86_unimpl("switch@0x1014c729 out of table"); return;
  }
L_1014c730:;
  /* 1014c730 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c733 jl 0x1014c741 */
  if ((C.sf!=C.of)) goto L_1014c741;
  /* 1014c735 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c738 jg 0x1014c741 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014c741;
L_1014c73a:;
  /* 1014c73a push 3 */
  push32((uint32_t)(0x3u));
  /* 1014c73c jmp 0x1014c95e */
  goto L_1014c95e;
L_1014c741:;
  /* 1014c741 cmp bl, byte ptr [0x10150bc4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10150bc4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c747 jne 0x1014c750 */
  if (!C.zf) goto L_1014c750;
L_1014c749:;
  /* 1014c749 push 5 */
  push32((uint32_t)(0x5u));
  /* 1014c74b jmp 0x1014c996 */
  goto L_1014c996;
L_1014c750:;
  /* 1014c750 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014c753 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c756 je 0x1014c776 */
  if (C.zf) goto L_1014c776;
  /* 1014c758 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c759 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c75a je 0x1014c76a */
  if (C.zf) goto L_1014c76a;
  /* 1014c75c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c75f jne 0x1014ca39 */
  if (!C.zf) goto L_1014ca39;
  /* 1014c765 jmp 0x1014c7f9 */
  goto L_1014c7f9;
L_1014c76a:;
  /* 1014c76a push 2 */
  push32((uint32_t)(0x2u));
  /* 1014c76c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1014c773 pop eax */
  EAX = (pop32());
  /* 1014c774 jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c776:;
  /* 1014c776 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1014c77a push 2 */
  push32((uint32_t)(0x2u));
  /* 1014c77c pop eax */
  EAX = (pop32());
  /* 1014c77d jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c77f:;
  /* 1014c77f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c782 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1014c785 jl 0x1014c78c */
  if ((C.sf!=C.of)) goto L_1014c78c;
  /* 1014c787 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c78a jle 0x1014c73a */
  if ((C.zf||C.sf!=C.of)) goto L_1014c73a;
L_1014c78c:;
  /* 1014c78c cmp bl, byte ptr [0x10150bc4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10150bc4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c792 je 0x1014c854 */
  if (C.zf) goto L_1014c854;
  /* 1014c798 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c79b je 0x1014c7ce */
  if (C.zf) goto L_1014c7ce;
  /* 1014c79d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7a0 je 0x1014c7ce */
  if (C.zf) goto L_1014c7ce;
  /* 1014c7a2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7a5 je 0x1014c7f9 */
  if (C.zf) goto L_1014c7f9;
L_1014c7a7:;
  /* 1014c7a7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7aa jle 0x1014ca39 */
  if ((C.zf||C.sf!=C.of)) goto L_1014ca39;
  /* 1014c7b0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7b3 jle 0x1014c7c7 */
  if ((C.zf||C.sf!=C.of)) goto L_1014c7c7;
  /* 1014c7b5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7b8 jle 0x1014ca39 */
  if ((C.zf||C.sf!=C.of)) goto L_1014ca39;
  /* 1014c7be cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7c1 jg 0x1014ca39 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014ca39;
L_1014c7c7:;
  /* 1014c7c7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1014c7c9 jmp 0x1014c996 */
  goto L_1014c996;
L_1014c7ce:;
  /* 1014c7ce dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014c7cf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1014c7d1 jmp 0x1014c996 */
  goto L_1014c996;
L_1014c7d6:;
  /* 1014c7d6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7d9 jl 0x1014c7e4 */
  if ((C.sf!=C.of)) goto L_1014c7e4;
  /* 1014c7db cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7de jle 0x1014c73a */
  if ((C.zf||C.sf!=C.of)) goto L_1014c73a;
L_1014c7e4:;
  /* 1014c7e4 cmp bl, byte ptr [0x10150bc4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10150bc4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7ea je 0x1014c749 */
  if (C.zf) goto L_1014c749;
  /* 1014c7f0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c7f3 jne 0x1014c9ae */
  if (!C.zf) goto L_1014c9ae;
L_1014c7f9:;
  /* 1014c7f9 mov eax, edx */
  EAX = (EDX);
  /* 1014c7fb jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c800:;
  /* 1014c800 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1014c803:;
  /* 1014c803 cmp dword ptr [0x10150bc0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c809 jle 0x1014c81c */
  if ((C.zf||C.sf!=C.of)) goto L_1014c81c;
  /* 1014c80b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c80e push esi */
  push32((uint32_t)(ESI));
  /* 1014c80f push eax */
  push32((uint32_t)(EAX));
  /* 1014c810 call 0x101492db */
  push32(0x1014c815u); f_101492db();
  /* 1014c815 pop ecx */
  ECX = (pop32());
  /* 1014c816 pop ecx */
  ECX = (pop32());
  /* 1014c817 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c819 pop edx */
  EDX = (pop32());
  /* 1014c81a jmp 0x1014c82a */
  goto L_1014c82a;
L_1014c81c:;
  /* 1014c81c mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014c822 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c825 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014c828 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1014c82a:;
  /* 1014c82a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c82c je 0x1014c84c */
  if (C.zf) goto L_1014c84c;
  /* 1014c82e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c832 jae 0x1014c844 */
  if (!C.cf) goto L_1014c844;
  /* 1014c834 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014c837 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014c83a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014c83d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1014c840 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1014c842 jmp 0x1014c847 */
  goto L_1014c847;
L_1014c844:;
  /* 1014c844 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1014c847:;
  /* 1014c847 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c84a jmp 0x1014c803 */
  goto L_1014c803;
L_1014c84c:;
  /* 1014c84c cmp bl, byte ptr [0x10150bc4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10150bc4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c852 jne 0x1014c8bb */
  if (!C.zf) goto L_1014c8bb;
L_1014c854:;
  /* 1014c854 mov eax, esi */
  EAX = (ESI);
  /* 1014c856 jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c85b:;
  /* 1014c85b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c85f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1014c862 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1014c865 jne 0x1014c874 */
  if (!C.zf) goto L_1014c874;
L_1014c867:;
  /* 1014c867 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c86a jne 0x1014c874 */
  if (!C.zf) goto L_1014c874;
  /* 1014c86c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1014c86f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c871 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c872 jmp 0x1014c867 */
  goto L_1014c867;
L_1014c874:;
  /* 1014c874 cmp dword ptr [0x10150bc0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c87a jle 0x1014c88d */
  if ((C.zf||C.sf!=C.of)) goto L_1014c88d;
  /* 1014c87c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c87f push esi */
  push32((uint32_t)(ESI));
  /* 1014c880 push eax */
  push32((uint32_t)(EAX));
  /* 1014c881 call 0x101492db */
  push32(0x1014c886u); f_101492db();
  /* 1014c886 pop ecx */
  ECX = (pop32());
  /* 1014c887 pop ecx */
  ECX = (pop32());
  /* 1014c888 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c88a pop edx */
  EDX = (pop32());
  /* 1014c88b jmp 0x1014c89b */
  goto L_1014c89b;
L_1014c88d:;
  /* 1014c88d mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014c893 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c896 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014c899 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1014c89b:;
  /* 1014c89b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c89d je 0x1014c8bb */
  if (C.zf) goto L_1014c8bb;
  /* 1014c89f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c8a3 jae 0x1014c8b6 */
  if (!C.cf) goto L_1014c8b6;
  /* 1014c8a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014c8a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1014c8ab sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014c8ae inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1014c8b1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1014c8b4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1014c8b6:;
  /* 1014c8b6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c8b8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c8b9 jmp 0x1014c874 */
  goto L_1014c874;
L_1014c8bb:;
  /* 1014c8bb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c8be je 0x1014c7ce */
  if (C.zf) goto L_1014c7ce;
  /* 1014c8c4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c8c7 je 0x1014c7ce */
  if (C.zf) goto L_1014c7ce;
  /* 1014c8cd jmp 0x1014c7a7 */
  goto L_1014c7a7;
L_1014c8d2:;
  /* 1014c8d2 cmp dword ptr [0x10150bc0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c8d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1014c8db jle 0x1014c8ee */
  if ((C.zf||C.sf!=C.of)) goto L_1014c8ee;
  /* 1014c8dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c8e0 push esi */
  push32((uint32_t)(ESI));
  /* 1014c8e1 push eax */
  push32((uint32_t)(EAX));
  /* 1014c8e2 call 0x101492db */
  push32(0x1014c8e7u); f_101492db();
  /* 1014c8e7 pop ecx */
  ECX = (pop32());
  /* 1014c8e8 pop ecx */
  ECX = (pop32());
  /* 1014c8e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014c8eb pop edx */
  EDX = (pop32());
  /* 1014c8ec jmp 0x1014c8fc */
  goto L_1014c8fc;
L_1014c8ee:;
  /* 1014c8ee mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014c8f4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c8f7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014c8fa and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1014c8fc:;
  /* 1014c8fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c8fe je 0x1014c9ae */
  if (C.zf) goto L_1014c9ae;
  /* 1014c904 mov eax, esi */
  EAX = (ESI);
  /* 1014c906 jmp 0x1014c95f */
  goto L_1014c95f;
L_1014c908:;
  /* 1014c908 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1014c90b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c90e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1014c911 jl 0x1014c918 */
  if ((C.sf!=C.of)) goto L_1014c918;
  /* 1014c913 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c916 jle 0x1014c95c */
  if ((C.zf||C.sf!=C.of)) goto L_1014c95c;
L_1014c918:;
  /* 1014c918 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014c91b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c91e je 0x1014c994 */
  if (C.zf) goto L_1014c994;
  /* 1014c920 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c921 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c922 je 0x1014c988 */
  if (C.zf) goto L_1014c988;
  /* 1014c924 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c927 jne 0x1014ca3c */
  if (!C.zf) goto L_1014ca3c;
L_1014c92d:;
  /* 1014c92d push 8 */
  push32((uint32_t)(0x8u));
  /* 1014c92f jmp 0x1014c996 */
  goto L_1014c996;
L_1014c931:;
  /* 1014c931 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1014c934:;
  /* 1014c934 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c937 jne 0x1014c93e */
  if (!C.zf) goto L_1014c93e;
  /* 1014c939 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c93b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c93c jmp 0x1014c934 */
  goto L_1014c934;
L_1014c93e:;
  /* 1014c93e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c941 jl 0x1014ca39 */
  if ((C.sf!=C.of)) goto L_1014ca39;
  /* 1014c947 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c94a jg 0x1014ca39 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014ca39;
  /* 1014c950 jmp 0x1014c95c */
  goto L_1014c95c;
L_1014c952:;
  /* 1014c952 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c955 jl 0x1014c965 */
  if ((C.sf!=C.of)) goto L_1014c965;
  /* 1014c957 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c95a jg 0x1014c965 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014c965;
L_1014c95c:;
  /* 1014c95c push 9 */
  push32((uint32_t)(0x9u));
L_1014c95e:;
  /* 1014c95e pop eax */
  EAX = (pop32());
L_1014c95f:;
  /* 1014c95f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014c960 jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c965:;
  /* 1014c965 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014c968 jne 0x1014c9ae */
  if (!C.zf) goto L_1014c9ae;
  /* 1014c96a jmp 0x1014c92d */
  goto L_1014c92d;
L_1014c96c:;
  /* 1014c96c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c970 je 0x1014c99c */
  if (C.zf) goto L_1014c99c;
  /* 1014c972 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014c975 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1014c978 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014c97b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1014c97e je 0x1014c994 */
  if (C.zf) goto L_1014c994;
  /* 1014c980 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c981 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014c982 jne 0x1014ca3c */
  if (!C.zf) goto L_1014ca3c;
L_1014c988:;
  /* 1014c988 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1014c98c push 7 */
  push32((uint32_t)(0x7u));
  /* 1014c98e pop eax */
  EAX = (pop32());
  /* 1014c98f jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c994:;
  /* 1014c994 push 7 */
  push32((uint32_t)(0x7u));
L_1014c996:;
  /* 1014c996 pop eax */
  EAX = (pop32());
  /* 1014c997 jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c99c:;
  /* 1014c99c push 0xa */
  push32((uint32_t)(0xau));
  /* 1014c99e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014c99f pop eax */
  EAX = (pop32());
L_1014c9a0:;
  /* 1014c9a0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c9a3 je 0x1014ca3e */
  if (C.zf) goto L_1014ca3e;
  /* 1014c9a9 jmp 0x1014c71d */
  goto L_1014c71d;
L_1014c9ae:;
  /* 1014c9ae mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1014c9b1 jmp 0x1014ca3e */
  goto L_1014ca3e;
L_1014c9b6:;
  /* 1014c9b6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1014c9bd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1014c9bf:;
  /* 1014c9bf cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c9c6 jle 0x1014c9d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1014c9d7;
  /* 1014c9c8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c9cb push 4 */
  push32((uint32_t)(0x4u));
  /* 1014c9cd push eax */
  push32((uint32_t)(EAX));
  /* 1014c9ce call 0x101492db */
  push32(0x1014c9d3u); f_101492db();
  /* 1014c9d3 pop ecx */
  ECX = (pop32());
  /* 1014c9d4 pop ecx */
  ECX = (pop32());
  /* 1014c9d5 jmp 0x1014c9e6 */
  goto L_1014c9e6;
L_1014c9d7:;
  /* 1014c9d7 mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014c9dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014c9e0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014c9e3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1014c9e6:;
  /* 1014c9e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014c9e8 je 0x1014ca06 */
  if (C.zf) goto L_1014ca06;
  /* 1014c9ea movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014c9ed lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1014c9f0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1014c9f4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014c9fa jg 0x1014ca01 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014ca01;
  /* 1014c9fc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014c9fe inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014c9ff jmp 0x1014c9bf */
  goto L_1014c9bf;
L_1014ca01:;
  /* 1014ca01 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1014ca06:;
  /* 1014ca06 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1014ca09:;
  /* 1014ca09 cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ca10 jle 0x1014ca21 */
  if ((C.zf||C.sf!=C.of)) goto L_1014ca21;
  /* 1014ca12 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014ca15 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014ca17 push eax */
  push32((uint32_t)(EAX));
  /* 1014ca18 call 0x101492db */
  push32(0x1014ca1du); f_101492db();
  /* 1014ca1d pop ecx */
  ECX = (pop32());
  /* 1014ca1e pop ecx */
  ECX = (pop32());
  /* 1014ca1f jmp 0x1014ca30 */
  goto L_1014ca30;
L_1014ca21:;
  /* 1014ca21 mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 1014ca27 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1014ca2a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1014ca2d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1014ca30:;
  /* 1014ca30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ca32 je 0x1014ca39 */
  if (C.zf) goto L_1014ca39;
  /* 1014ca34 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014ca36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014ca37 jmp 0x1014ca09 */
  goto L_1014ca09;
L_1014ca39:;
  /* 1014ca39 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014ca3a jmp 0x1014ca3e */
  goto L_1014ca3e;
L_1014ca3c:;
  /* 1014ca3c mov edi, ecx */
  EDI = (ECX);
L_1014ca3e:;
  /* 1014ca3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014ca41 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ca45 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1014ca47 je 0x1014cb26 */
  if (C.zf) goto L_1014cb26;
  /* 1014ca4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1014ca4f pop eax */
  EAX = (pop32());
  /* 1014ca50 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ca53 jbe 0x1014ca6a */
  if ((C.cf||C.zf)) goto L_1014ca6a;
  /* 1014ca55 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ca59 jl 0x1014ca5e */
  if ((C.sf!=C.of)) goto L_1014ca5e;
  /* 1014ca5b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1014ca5e:;
  /* 1014ca5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1014ca61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014ca64 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014ca65 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1014ca68 jmp 0x1014ca6d */
  goto L_1014ca6d;
L_1014ca6a:;
  /* 1014ca6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1014ca6d:;
  /* 1014ca6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ca71 jbe 0x1014cb1c */
  if ((C.cf||C.zf)) goto L_1014cb1c;
L_1014ca77:;
  /* 1014ca77 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014ca78 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ca7b jne 0x1014ca85 */
  if (!C.zf) goto L_1014ca85;
  /* 1014ca7d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1014ca80 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1014ca83 jmp 0x1014ca77 */
  goto L_1014ca77;
L_1014ca85:;
  /* 1014ca85 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1014ca88 push eax */
  push32((uint32_t)(EAX));
  /* 1014ca89 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1014ca8c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1014ca8f push eax */
  push32((uint32_t)(EAX));
  /* 1014ca90 call 0x1014c5ff */
  push32(0x1014ca95u); f_1014c5ff();
  /* 1014ca95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1014ca98 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014ca9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ca9d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014caa0 jge 0x1014caa4 */
  if ((C.sf==C.of)) goto L_1014caa4;
  /* 1014caa2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1014caa4:;
  /* 1014caa4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014caa7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014caaa jne 0x1014caaf */
  if (!C.zf) goto L_1014caaf;
  /* 1014caac add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1014caaf:;
  /* 1014caaf cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cab2 jne 0x1014cab7 */
  if (!C.zf) goto L_1014cab7;
  /* 1014cab4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1014cab7:;
  /* 1014cab7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cabc jle 0x1014caee */
  if ((C.zf||C.sf!=C.of)) goto L_1014caee;
  /* 1014cabe mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1014cac5:;
  /* 1014cac5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014cac8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1014cacb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014cace mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1014cad1:;
  /* 1014cad1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cad5 je 0x1014cb37 */
  if (C.zf) goto L_1014cb37;
  /* 1014cad7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014cad9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1014cade mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1014cae3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014cae5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1014caec jmp 0x1014cb4c */
  goto L_1014cb4c;
L_1014caee:;
  /* 1014caee cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014caf3 jge 0x1014cafe */
  if ((C.sf==C.of)) goto L_1014cafe;
  /* 1014caf5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1014cafc jmp 0x1014cac5 */
  goto L_1014cac5;
L_1014cafe:;
  /* 1014cafe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1014cb01 push eax */
  push32((uint32_t)(EAX));
  /* 1014cb02 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1014cb05 push eax */
  push32((uint32_t)(EAX));
  /* 1014cb06 call 0x1014d59a */
  push32(0x1014cb0bu); f_1014d59a();
  /* 1014cb0b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1014cb0e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1014cb11 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1014cb14 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1014cb17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014cb1a jmp 0x1014cad1 */
  goto L_1014cad1;
L_1014cb1c:;
  /* 1014cb1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014cb1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014cb20 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014cb22 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014cb24 jmp 0x1014cad1 */
  goto L_1014cad1;
L_1014cb26:;
  /* 1014cb26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014cb28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014cb2a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014cb2c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014cb2e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1014cb35 jmp 0x1014cb4c */
  goto L_1014cb4c;
L_1014cb37:;
  /* 1014cb37 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cb3b je 0x1014cb4c */
  if (C.zf) goto L_1014cb4c;
  /* 1014cb3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014cb3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014cb41 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014cb43 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014cb45 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1014cb4c:;
  /* 1014cb4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014cb4f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1014cb52 pop edi */
  EDI = (pop32());
  /* 1014cb53 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1014cb56 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1014cb59 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1014cb5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1014cb60 pop esi */
  ESI = (pop32());
  /* 1014cb61 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1014cb64 pop ebx */
  EBX = (pop32());
  /* 1014cb65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014cb66 ret  */
  ESPCHK(0x1014c6c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb97 @ 0x1014cb97 (659 bytes, 232 insns) */
void f_1014cb97(void) {
  FTRACE(0x1014cb97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014cb97 push ebp */
  push32((uint32_t)(EBP));
  /* 1014cb98 mov ebp, esp */
  EBP = (ESP);
  /* 1014cb9a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014cb9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014cba0 push ebx */
  push32((uint32_t)(EBX));
  /* 1014cba1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1014cba4 push esi */
  push32((uint32_t)(ESI));
  /* 1014cba5 mov ecx, eax */
  ECX = (EAX);
  /* 1014cba7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1014cbac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1014cbb2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1014cbb4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1014cbb7 push edi */
  push32((uint32_t)(EDI));
  /* 1014cbb8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1014cbbc mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1014cbc0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1014cbc4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1014cbc8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1014cbcc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1014cbd0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1014cbd4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1014cbd8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1014cbdc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1014cbe0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1014cbe4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1014cbe8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1014cbef mov edx, eax */
  EDX = (EAX);
  /* 1014cbf1 je 0x1014cbf9 */
  if (C.zf) goto L_1014cbf9;
  /* 1014cbf3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1014cbf7 jmp 0x1014cbfd */
  goto L_1014cbfd;
L_1014cbf9:;
  /* 1014cbf9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1014cbfd:;
  /* 1014cbfd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014cc00 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1014cc03 jne 0x1014cc23 */
  if (!C.zf) goto L_1014cc23;
  /* 1014cc05 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014cc07 jne 0x1014cc23 */
  if (!C.zf) goto L_1014cc23;
  /* 1014cc09 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc0c jne 0x1014cc23 */
  if (!C.zf) goto L_1014cc23;
L_1014cc0e:;
  /* 1014cc0e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1014cc12 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1014cc16 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1014cc1a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1014cc1e jmp 0x1014ce21 */
  goto L_1014ce21;
L_1014cc23:;
  /* 1014cc23 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014cc26 jne 0x1014cca2 */
  if (!C.zf) goto L_1014cca2;
  /* 1014cc28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1014cc2d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1014cc32 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc34 jne 0x1014cc3c */
  if (!C.zf) goto L_1014cc3c;
  /* 1014cc36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc3a je 0x1014cc4b */
  if (C.zf) goto L_1014cc4b;
L_1014cc3c:;
  /* 1014cc3c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1014cc42 jne 0x1014cc4b */
  if (!C.zf) goto L_1014cc4b;
  /* 1014cc44 push 0x1014e5a0 */
  push32((uint32_t)(0x1014e5a0u));
  /* 1014cc49 jmp 0x1014cc91 */
  goto L_1014cc91;
L_1014cc4b:;
  /* 1014cc4b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1014cc4e je 0x1014cc65 */
  if (C.zf) goto L_1014cc65;
  /* 1014cc50 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc56 jne 0x1014cc65 */
  if (!C.zf) goto L_1014cc65;
  /* 1014cc58 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc5c jne 0x1014cc8c */
  if (!C.zf) goto L_1014cc8c;
  /* 1014cc5e push 0x1014e598 */
  push32((uint32_t)(0x1014e598u));
  /* 1014cc63 jmp 0x1014cc74 */
  goto L_1014cc74;
L_1014cc65:;
  /* 1014cc65 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc67 jne 0x1014cc8c */
  if (!C.zf) goto L_1014cc8c;
  /* 1014cc69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cc6d jne 0x1014cc8c */
  if (!C.zf) goto L_1014cc8c;
  /* 1014cc6f push 0x1014e590 */
  push32((uint32_t)(0x1014e590u));
L_1014cc74:;
  /* 1014cc74 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1014cc77 push eax */
  push32((uint32_t)(EAX));
  /* 1014cc78 call 0x10149a00 */
  push32(0x1014cc7du); f_10149a00();
  /* 1014cc7d pop ecx */
  ECX = (pop32());
  /* 1014cc7e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1014cc82 pop ecx */
  ECX = (pop32());
L_1014cc83:;
  /* 1014cc83 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014cc87 jmp 0x1014cdfa */
  goto L_1014cdfa;
L_1014cc8c:;
  /* 1014cc8c push 0x1014e588 */
  push32((uint32_t)(0x1014e588u));
L_1014cc91:;
  /* 1014cc91 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1014cc94 push eax */
  push32((uint32_t)(EAX));
  /* 1014cc95 call 0x10149a00 */
  push32(0x1014cc9au); f_10149a00();
  /* 1014cc9a pop ecx */
  ECX = (pop32());
  /* 1014cc9b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1014cc9f pop ecx */
  ECX = (pop32());
  /* 1014cca0 jmp 0x1014cc83 */
  goto L_1014cc83;
L_1014cca2:;
  /* 1014cca2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1014cca5 mov ecx, edi */
  ECX = (EDI);
  /* 1014cca7 mov esi, eax */
  ESI = (EAX);
  /* 1014cca9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1014ccac imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014ccb2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1014ccb5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1014ccba push 1 */
  push32((uint32_t)(0x1u));
  /* 1014ccbc lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1014ccbf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1014ccc3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014ccc6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1014ccc9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1014ccd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014ccd3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1014ccd6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1014ccd9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1014ccdc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014ccde push eax */
  push32((uint32_t)(EAX));
  /* 1014ccdf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cce2 push eax */
  push32((uint32_t)(EAX));
  /* 1014cce3 call 0x1014d59a */
  push32(0x1014cce8u); f_1014d59a();
  /* 1014cce8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014cceb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014ccf1 jb 0x1014cd03 */
  if (C.cf) goto L_1014cd03;
  /* 1014ccf3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1014ccf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014ccf7 push eax */
  push32((uint32_t)(EAX));
  /* 1014ccf8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014ccfb push eax */
  push32((uint32_t)(EAX));
  /* 1014ccfc call 0x1014d37a */
  push32(0x1014cd01u); f_1014d37a();
  /* 1014cd01 pop ecx */
  ECX = (pop32());
  /* 1014cd02 pop ecx */
  ECX = (pop32());
L_1014cd03:;
  /* 1014cd03 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1014cd07 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1014cd0a je 0x1014cd1d */
  if (C.zf) goto L_1014cd1d;
  /* 1014cd0c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1014cd0f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1014cd12 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014cd14 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014cd16 jg 0x1014cd20 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014cd20;
  /* 1014cd18 jmp 0x1014cc0e */
  goto L_1014cc0e;
L_1014cd1d:;
  /* 1014cd1d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1014cd20:;
  /* 1014cd20 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cd23 jle 0x1014cd28 */
  if ((C.zf||C.sf!=C.of)) goto L_1014cd28;
  /* 1014cd25 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1014cd27 pop edi */
  EDI = (pop32());
L_1014cd28:;
  /* 1014cd28 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1014cd2c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014cd32 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1014cd37 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1014cd3e:;
  /* 1014cd3e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cd41 push eax */
  push32((uint32_t)(EAX));
  /* 1014cd42 call 0x1014c5a4 */
  push32(0x1014cd47u); f_1014c5a4();
  /* 1014cd47 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1014cd4a pop ecx */
  ECX = (pop32());
  /* 1014cd4b jne 0x1014cd3e */
  if (!C.zf) goto L_1014cd3e;
  /* 1014cd4d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014cd4f jge 0x1014cd68 */
  if ((C.sf==C.of)) goto L_1014cd68;
  /* 1014cd51 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1014cd53 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1014cd59 jle 0x1014cd68 */
  if ((C.zf||C.sf!=C.of)) goto L_1014cd68;
L_1014cd5b:;
  /* 1014cd5b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cd5e push eax */
  push32((uint32_t)(EAX));
  /* 1014cd5f call 0x1014c5d2 */
  push32(0x1014cd64u); f_1014c5d2();
  /* 1014cd64 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1014cd65 pop ecx */
  ECX = (pop32());
  /* 1014cd66 jne 0x1014cd5b */
  if (!C.zf) goto L_1014cd5b;
L_1014cd68:;
  /* 1014cd68 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1014cd6b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1014cd6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1014cd70 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1014cd73 jle 0x1014cdc5 */
  if ((C.zf||C.sf!=C.of)) goto L_1014cdc5;
  /* 1014cd75 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1014cd78:;
  /* 1014cd78 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1014cd7b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1014cd7e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014cd7f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014cd80 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cd83 push eax */
  push32((uint32_t)(EAX));
  /* 1014cd84 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014cd85 call 0x1014c5a4 */
  push32(0x1014cd8au); f_1014c5a4();
  /* 1014cd8a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cd8d push eax */
  push32((uint32_t)(EAX));
  /* 1014cd8e call 0x1014c5a4 */
  push32(0x1014cd93u); f_1014c5a4();
  /* 1014cd93 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1014cd96 push eax */
  push32((uint32_t)(EAX));
  /* 1014cd97 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cd9a push eax */
  push32((uint32_t)(EAX));
  /* 1014cd9b call 0x1014c546 */
  push32(0x1014cda0u); f_1014c546();
  /* 1014cda0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1014cda3 push eax */
  push32((uint32_t)(EAX));
  /* 1014cda4 call 0x1014c5a4 */
  push32(0x1014cda9u); f_1014c5a4();
  /* 1014cda9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1014cdac mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1014cdaf and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1014cdb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014cdb6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014cdb8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1014cdbb dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1014cdbe mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1014cdc0 jne 0x1014cd78 */
  if (!C.zf) goto L_1014cd78;
  /* 1014cdc2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1014cdc5:;
  /* 1014cdc5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1014cdc8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014cdc9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014cdca cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014cdcd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1014cdd0 jl 0x1014ce02 */
  if ((C.sf!=C.of)) goto L_1014ce02;
L_1014cdd2:;
  /* 1014cdd2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cdd4 jb 0x1014cde5 */
  if (C.cf) goto L_1014cde5;
  /* 1014cdd6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014cdd9 jne 0x1014cde1 */
  if (!C.zf) goto L_1014cde1;
  /* 1014cddb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1014cdde dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014cddf jmp 0x1014cdd2 */
  goto L_1014cdd2;
L_1014cde1:;
  /* 1014cde1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cde3 jae 0x1014cde9 */
  if (!C.cf) goto L_1014cde9;
L_1014cde5:;
  /* 1014cde5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014cde6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1014cde9:;
  /* 1014cde9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1014cdeb:;
  /* 1014cdeb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014cded sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014cdef mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1014cdf2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1014cdf5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1014cdfa:;
  /* 1014cdfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1014cdfd:;
  /* 1014cdfd pop edi */
  EDI = (pop32());
  /* 1014cdfe pop esi */
  ESI = (pop32());
  /* 1014cdff pop ebx */
  EBX = (pop32());
  /* 1014ce00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014ce01 ret  */
  ESPCHK(0x1014cb97u, _esp0);
  ESP += 4; return;
L_1014ce02:;
  /* 1014ce02 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ce04 jb 0x1014ce12 */
  if (C.cf) goto L_1014ce12;
  /* 1014ce06 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014ce09 jne 0x1014ce0e */
  if (!C.zf) goto L_1014ce0e;
  /* 1014ce0b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014ce0c jmp 0x1014ce02 */
  goto L_1014ce02;
L_1014ce0e:;
  /* 1014ce0e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ce10 jae 0x1014cdeb */
  if (!C.cf) goto L_1014cdeb;
L_1014ce12:;
  /* 1014ce12 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1014ce16 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1014ce1a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1014ce1e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1014ce21:;
  /* 1014ce21 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1014ce25 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014ce27 pop eax */
  EAX = (pop32());
  /* 1014ce28 jmp 0x1014cdfd */
  goto L_1014cdfd;
}

/* FUN_1000ce2a @ 0x1014ce2a (27 bytes, 13 insns) */
void f_1014ce2a(void) {
  FTRACE(0x1014ce2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ce2a mov eax, dword ptr [0x1015684c] */
  EAX = (r32((uint32_t)(0x1015684c)));
  /* 1014ce2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ce31 je 0x1014ce42 */
  if (C.zf) goto L_1014ce42;
  /* 1014ce33 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1014ce37 call eax */
  call_ind((uint32_t)(EAX), 0x1014ce39u);
  /* 1014ce39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014ce3b pop ecx */
  ECX = (pop32());
  /* 1014ce3c je 0x1014ce42 */
  if (C.zf) goto L_1014ce42;
  /* 1014ce3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1014ce40 pop eax */
  EAX = (pop32());
  /* 1014ce41 ret  */
  ESPCHK(0x1014ce2au, _esp0);
  ESP += 4; return;
L_1014ce42:;
  /* 1014ce42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014ce44 ret  */
  ESPCHK(0x1014ce2au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1014ce48 (32 bytes, 18 insns) */
void f_1014ce48(void) {
  FTRACE(0x1014ce48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ce48 push ebp */
  push32((uint32_t)(EBP));
  /* 1014ce49 mov ebp, esp */
  EBP = (ESP);
  /* 1014ce4b push ebx */
  push32((uint32_t)(EBX));
  /* 1014ce4c push esi */
  push32((uint32_t)(ESI));
  /* 1014ce4d push edi */
  push32((uint32_t)(EDI));
  /* 1014ce4e push ebp */
  push32((uint32_t)(EBP));
  /* 1014ce4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1014ce51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014ce53 push 0x1014ce60 */
  push32((uint32_t)(0x1014ce60u));
  /* 1014ce58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014ce5b call 0x1014d944 */
  push32(0x1014ce60u); f_1014d944();
  /* 1014ce60 pop ebp */
  EBP = (pop32());
  /* 1014ce61 pop edi */
  EDI = (pop32());
  /* 1014ce62 pop esi */
  ESI = (pop32());
  /* 1014ce63 pop ebx */
  EBX = (pop32());
  /* 1014ce64 mov esp, ebp */
  ESP = (EBP);
  /* 1014ce66 pop ebp */
  EBP = (pop32());
  /* 1014ce67 ret  */
  ESPCHK(0x1014ce48u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1014ce8a (104 bytes, 33 insns) */
void f_1014ce8a(void) {
  FTRACE(0x1014ce8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014ce8a push ebx */
  push32((uint32_t)(EBX));
  /* 1014ce8b push esi */
  push32((uint32_t)(ESI));
  /* 1014ce8c push edi */
  push32((uint32_t)(EDI));
  /* 1014ce8d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014ce91 push eax */
  push32((uint32_t)(EAX));
  /* 1014ce92 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1014ce94 push 0x1014ce68 */
  push32((uint32_t)(0x1014ce68u));
  /* 1014ce99 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1014cea0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1014cea7:;
  /* 1014cea7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1014ceab mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1014ceae mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1014ceb1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ceb4 je 0x1014cee4 */
  if (C.zf) goto L_1014cee4;
  /* 1014ceb6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014ceba je 0x1014cee4 */
  if (C.zf) goto L_1014cee4;
  /* 1014cebc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1014cebf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1014cec2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1014cec6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1014cec9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014cece jne 0x1014cee2 */
  if (!C.zf) goto L_1014cee2;
  /* 1014ced0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1014ced5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1014ced9 call 0x1014cf1e */
  push32(0x1014cedeu); f_1014cf1e();
  /* 1014cede call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1014cee2u);
L_1014cee2:;
  /* 1014cee2 jmp 0x1014cea7 */
  goto L_1014cea7;
L_1014cee4:;
  /* 1014cee4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1014ceeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014ceee pop edi */
  EDI = (pop32());
  /* 1014ceef pop esi */
  ESI = (pop32());
  /* 1014cef0 pop ebx */
  EBX = (pop32());
  /* 1014cef1 ret  */
  ESPCHK(0x1014ce8au, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf1e @ 0x1014cf1e (24 bytes, 10 insns) */
void f_1014cf1e(void) {
  FTRACE(0x1014cf1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014cf1e push ebx */
  push32((uint32_t)(EBX));
  /* 1014cf1f push ecx */
  push32((uint32_t)(ECX));
  /* 1014cf20 mov ebx, 0x101530e4 */
  EBX = (0x101530e4u);
  /* 1014cf25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014cf28 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1014cf2b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1014cf2e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1014cf31 pop ecx */
  ECX = (pop32());
  /* 1014cf32 pop ebx */
  EBX = (pop32());
  /* 1014cf33 ret 4 */
  ESPCHK(0x1014cf1eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000cffd @ 0x1014cffd (27 bytes, 11 insns) */
void f_1014cffd(void) {
  FTRACE(0x1014cffdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014cffd push ebp */
  push32((uint32_t)(EBP));
  /* 1014cffe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d002 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1014d004 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1014d007 push eax */
  push32((uint32_t)(EAX));
  /* 1014d008 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1014d00b push eax */
  push32((uint32_t)(EAX));
  /* 1014d00c call 0x1014ce8a */
  push32(0x1014d011u); f_1014ce8a();
  /* 1014d011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d014 pop ebp */
  EBP = (pop32());
  /* 1014d015 ret 4 */
  ESPCHK(0x1014cffdu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d018 @ 0x1014d018 (111 bytes, 44 insns) */
void f_1014d018(void) {
  FTRACE(0x1014d018u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d018 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d019 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014d01b cmp dword ptr [0x10156818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d021 jne 0x1014d036 */
  if (!C.zf) goto L_1014d036;
  /* 1014d023 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d027 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d02a jl 0x1014d085 */
  if ((C.sf!=C.of)) goto L_1014d085;
  /* 1014d02c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d02f jg 0x1014d085 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d085;
  /* 1014d031 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d034 pop ebx */
  EBX = (pop32());
  /* 1014d035 ret  */
  ESPCHK(0x1014d018u, _esp0);
  ESP += 4; return;
L_1014d036:;
  /* 1014d036 push esi */
  push32((uint32_t)(ESI));
  /* 1014d037 mov esi, 0x10156994 */
  ESI = (0x10156994u);
  /* 1014d03c push edi */
  push32((uint32_t)(EDI));
  /* 1014d03d push esi */
  push32((uint32_t)(ESI));
  /* 1014d03e call dword ptr [0x1014e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e090))), 0x1014d044u);
  /* 1014d044 cmp dword ptr [0x10156990], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156990))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d04a mov edi, dword ptr [0x1014e08c] */
  EDI = (r32((uint32_t)(0x1014e08c)));
  /* 1014d050 je 0x1014d060 */
  if (C.zf) goto L_1014d060;
  /* 1014d052 push esi */
  push32((uint32_t)(ESI));
  /* 1014d053 call edi */
  call_ind((uint32_t)(EDI), 0x1014d055u);
  /* 1014d055 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d057 call 0x10149f23 */
  push32(0x1014d05cu); f_10149f23();
  /* 1014d05c pop ecx */
  ECX = (pop32());
  /* 1014d05d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014d05f pop ebx */
  EBX = (pop32());
L_1014d060:;
  /* 1014d060 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1014d064 call 0x1014d087 */
  push32(0x1014d069u); f_1014d087();
  /* 1014d069 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014d06b pop ecx */
  ECX = (pop32());
  /* 1014d06c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1014d070 je 0x1014d07c */
  if (C.zf) goto L_1014d07c;
  /* 1014d072 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d074 call 0x10149f84 */
  push32(0x1014d079u); f_10149f84();
  /* 1014d079 pop ecx */
  ECX = (pop32());
  /* 1014d07a jmp 0x1014d07f */
  goto L_1014d07f;
L_1014d07c:;
  /* 1014d07c push esi */
  push32((uint32_t)(ESI));
  /* 1014d07d call edi */
  call_ind((uint32_t)(EDI), 0x1014d07fu);
L_1014d07f:;
  /* 1014d07f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014d083 pop edi */
  EDI = (pop32());
  /* 1014d084 pop esi */
  ESI = (pop32());
L_1014d085:;
  /* 1014d085 pop ebx */
  EBX = (pop32());
  /* 1014d086 ret  */
  ESPCHK(0x1014d018u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d087 @ 0x1014d087 (204 bytes, 71 insns) */
void f_1014d087(void) {
  FTRACE(0x1014d087u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d087 push ebp */
  push32((uint32_t)(EBP));
  /* 1014d088 mov ebp, esp */
  EBP = (ESP);
  /* 1014d08a push ecx */
  push32((uint32_t)(ECX));
  /* 1014d08b cmp dword ptr [0x10156818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d092 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d093 jne 0x1014d0b2 */
  if (!C.zf) goto L_1014d0b2;
  /* 1014d095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d098 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d09b jl 0x1014d150 */
  if ((C.sf!=C.of)) goto L_1014d150;
  /* 1014d0a1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d0a4 jg 0x1014d150 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d150;
  /* 1014d0aa sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d0ad jmp 0x1014d150 */
  goto L_1014d150;
L_1014d0b2:;
  /* 1014d0b2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d0b5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d0bb jge 0x1014d0e5 */
  if ((C.sf==C.of)) goto L_1014d0e5;
  /* 1014d0bd cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d0c4 jle 0x1014d0d2 */
  if ((C.zf||C.sf!=C.of)) goto L_1014d0d2;
  /* 1014d0c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014d0c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d0c9 call 0x101492db */
  push32(0x1014d0ceu); f_101492db();
  /* 1014d0ce pop ecx */
  ECX = (pop32());
  /* 1014d0cf pop ecx */
  ECX = (pop32());
  /* 1014d0d0 jmp 0x1014d0dd */
  goto L_1014d0dd;
L_1014d0d2:;
  /* 1014d0d2 mov eax, dword ptr [0x101509b0] */
  EAX = (r32((uint32_t)(0x101509b0)));
  /* 1014d0d7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1014d0da and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1014d0dd:;
  /* 1014d0dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d0df jne 0x1014d0e5 */
  if (!C.zf) goto L_1014d0e5;
L_1014d0e1:;
  /* 1014d0e1 mov eax, ebx */
  EAX = (EBX);
  /* 1014d0e3 jmp 0x1014d150 */
  goto L_1014d150;
L_1014d0e5:;
  /* 1014d0e5 mov edx, dword ptr [0x101509b0] */
  EDX = (r32((uint32_t)(0x101509b0)));
  /* 1014d0eb mov eax, ebx */
  EAX = (EBX);
  /* 1014d0ed sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1014d0f0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1014d0f3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1014d0f8 je 0x1014d108 */
  if (C.zf) goto L_1014d108;
  /* 1014d0fa and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1014d0fe mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1014d101 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1014d104 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014d106 jmp 0x1014d111 */
  goto L_1014d111;
L_1014d108:;
  /* 1014d108 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1014d10c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1014d10f push 1 */
  push32((uint32_t)(0x1u));
L_1014d111:;
  /* 1014d111 pop eax */
  EAX = (pop32());
  /* 1014d112 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1014d115 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014d117 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014d119 push 3 */
  push32((uint32_t)(0x3u));
  /* 1014d11b push ecx */
  push32((uint32_t)(ECX));
  /* 1014d11c push eax */
  push32((uint32_t)(EAX));
  /* 1014d11d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1014d120 push eax */
  push32((uint32_t)(EAX));
  /* 1014d121 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1014d126 push dword ptr [0x10156818] */
  push32((uint32_t)(r32((uint32_t)(0x10156818))));
  /* 1014d12c call 0x1014c2d6 */
  push32(0x1014d131u); f_1014c2d6();
  /* 1014d131 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d136 je 0x1014d0e1 */
  if (C.zf) goto L_1014d0e1;
  /* 1014d138 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d13b jne 0x1014d143 */
  if (!C.zf) goto L_1014d143;
  /* 1014d13d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1014d141 jmp 0x1014d150 */
  goto L_1014d150;
L_1014d143:;
  /* 1014d143 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1014d147 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1014d14b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1014d14e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1014d150:;
  /* 1014d150 pop ebx */
  EBX = (pop32());
  /* 1014d151 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d152 ret  */
  ESPCHK(0x1014d087u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d153 @ 0x1014d153 (49 bytes, 20 insns) */
void f_1014d153(void) {
  FTRACE(0x1014d153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d153 push esi */
  push32((uint32_t)(ESI));
  /* 1014d154 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d158 push edi */
  push32((uint32_t)(EDI));
  /* 1014d159 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1014d15c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1014d160 je 0x1014d168 */
  if (C.zf) goto L_1014d168;
  /* 1014d162 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1014d166 jmp 0x1014d17f */
  goto L_1014d17f;
L_1014d168:;
  /* 1014d168 push esi */
  push32((uint32_t)(ESI));
  /* 1014d169 call 0x10148e9e */
  push32(0x1014d16eu); f_10148e9e();
  /* 1014d16e push esi */
  push32((uint32_t)(ESI));
  /* 1014d16f call 0x1014d184 */
  push32(0x1014d174u); f_1014d184();
  /* 1014d174 push esi */
  push32((uint32_t)(ESI));
  /* 1014d175 mov edi, eax */
  EDI = (EAX);
  /* 1014d177 call 0x10148ef0 */
  push32(0x1014d17cu); f_10148ef0();
  /* 1014d17c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014d17f:;
  /* 1014d17f mov eax, edi */
  EAX = (EDI);
  /* 1014d181 pop edi */
  EDI = (pop32());
  /* 1014d182 pop esi */
  ESI = (pop32());
  /* 1014d183 ret  */
  ESPCHK(0x1014d153u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1014d184 (76 bytes, 30 insns) */
void f_1014d184(void) {
  FTRACE(0x1014d184u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d184 push esi */
  push32((uint32_t)(ESI));
  /* 1014d185 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d189 push edi */
  push32((uint32_t)(EDI));
  /* 1014d18a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1014d18d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1014d191 je 0x1014d1c7 */
  if (C.zf) goto L_1014d1c7;
  /* 1014d193 push esi */
  push32((uint32_t)(ESI));
  /* 1014d194 call 0x1014c084 */
  push32(0x1014d199u); f_1014c084();
  /* 1014d199 push esi */
  push32((uint32_t)(ESI));
  /* 1014d19a mov edi, eax */
  EDI = (EAX);
  /* 1014d19c call 0x1014d6f6 */
  push32(0x1014d1a1u); f_1014d6f6();
  /* 1014d1a1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1014d1a4 call 0x1014d616 */
  push32(0x1014d1a9u); f_1014d616();
  /* 1014d1a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d1ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d1ae jge 0x1014d1b5 */
  if ((C.sf==C.of)) goto L_1014d1b5;
  /* 1014d1b0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1014d1b3 jmp 0x1014d1c7 */
  goto L_1014d1c7;
L_1014d1b5:;
  /* 1014d1b5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1014d1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d1ba je 0x1014d1c7 */
  if (C.zf) goto L_1014d1c7;
  /* 1014d1bc push eax */
  push32((uint32_t)(EAX));
  /* 1014d1bd call 0x1014a0d6 */
  push32(0x1014d1c2u); f_1014a0d6();
  /* 1014d1c2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1014d1c6 pop ecx */
  ECX = (pop32());
L_1014d1c7:;
  /* 1014d1c7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1014d1cb mov eax, edi */
  EAX = (EDI);
  /* 1014d1cd pop edi */
  EDI = (pop32());
  /* 1014d1ce pop esi */
  ESI = (pop32());
  /* 1014d1cf ret  */
  ESPCHK(0x1014d184u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x1014d1d0 (147 bytes, 52 insns) */
void f_1014d1d0(void) {
  FTRACE(0x1014d1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d1d1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d1d5 cmp ebx, dword ptr [0x10157d20] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d1db push esi */
  push32((uint32_t)(ESI));
  /* 1014d1dc push edi */
  push32((uint32_t)(EDI));
  /* 1014d1dd jae 0x1014d251 */
  if (!C.cf) goto L_1014d251;
  /* 1014d1df mov eax, ebx */
  EAX = (EBX);
  /* 1014d1e1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1014d1e4 lea edi, [eax*4 + 0x10157c20] */
  EDI = ((uint32_t)(EAX*4 + 0x10157c20));
  /* 1014d1eb mov eax, ebx */
  EAX = (EBX);
  /* 1014d1ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014d1f0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1014d1f3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014d1f5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1014d1f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1014d1fd je 0x1014d251 */
  if (C.zf) goto L_1014d251;
  /* 1014d1ff push ebx */
  push32((uint32_t)(EBX));
  /* 1014d200 call 0x1014bf54 */
  push32(0x1014d205u); f_1014bf54();
  /* 1014d205 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1014d207 pop ecx */
  ECX = (pop32());
  /* 1014d208 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1014d20d je 0x1014d238 */
  if (C.zf) goto L_1014d238;
  /* 1014d20f push ebx */
  push32((uint32_t)(EBX));
  /* 1014d210 call 0x1014bf12 */
  push32(0x1014d215u); f_1014bf12();
  /* 1014d215 pop ecx */
  ECX = (pop32());
  /* 1014d216 push eax */
  push32((uint32_t)(EAX));
  /* 1014d217 call dword ptr [0x1014e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0d0))), 0x1014d21du);
  /* 1014d21d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d21f jne 0x1014d22b */
  if (!C.zf) goto L_1014d22b;
  /* 1014d221 call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x1014d227u);
  /* 1014d227 mov esi, eax */
  ESI = (EAX);
  /* 1014d229 jmp 0x1014d22d */
  goto L_1014d22d;
L_1014d22b:;
  /* 1014d22b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1014d22d:;
  /* 1014d22d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014d22f je 0x1014d246 */
  if (C.zf) goto L_1014d246;
  /* 1014d231 call 0x1014be8a */
  push32(0x1014d236u); f_1014be8a();
  /* 1014d236 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1014d238:;
  /* 1014d238 call 0x1014be81 */
  push32(0x1014d23du); f_1014be81();
  /* 1014d23d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1014d243 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1014d246:;
  /* 1014d246 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d247 call 0x1014bfb3 */
  push32(0x1014d24cu); f_1014bfb3();
  /* 1014d24c pop ecx */
  ECX = (pop32());
  /* 1014d24d mov eax, esi */
  EAX = (ESI);
  /* 1014d24f jmp 0x1014d25f */
  goto L_1014d25f;
L_1014d251:;
  /* 1014d251 call 0x1014be81 */
  push32(0x1014d256u); f_1014be81();
  /* 1014d256 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1014d25c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1014d25f:;
  /* 1014d25f pop edi */
  EDI = (pop32());
  /* 1014d260 pop esi */
  ESI = (pop32());
  /* 1014d261 pop ebx */
  EBX = (pop32());
  /* 1014d262 ret  */
  ESPCHK(0x1014d1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x1014d300 (62 bytes, 35 insns) */
void f_1014d300(void) {
  FTRACE(0x1014d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d300 push ebp */
  push32((uint32_t)(EBP));
  /* 1014d301 mov ebp, esp */
  EBP = (ESP);
  /* 1014d303 push esi */
  push32((uint32_t)(ESI));
  /* 1014d304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d306 push eax */
  push32((uint32_t)(EAX));
  /* 1014d307 push eax */
  push32((uint32_t)(EAX));
  /* 1014d308 push eax */
  push32((uint32_t)(EAX));
  /* 1014d309 push eax */
  push32((uint32_t)(EAX));
  /* 1014d30a push eax */
  push32((uint32_t)(EAX));
  /* 1014d30b push eax */
  push32((uint32_t)(EAX));
  /* 1014d30c push eax */
  push32((uint32_t)(EAX));
  /* 1014d30d push eax */
  push32((uint32_t)(EAX));
  /* 1014d30e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014d314:;
  /* 1014d314 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1014d316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d318 je 0x1014d321 */
  if (C.zf) goto L_1014d321;
  /* 1014d31a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014d31b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1014d31b");
  /* 1014d31f jmp 0x1014d314 */
  goto L_1014d314;
L_1014d321:;
  /* 1014d321 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d324 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1014d327 nop  */
  /* nop */
L_1014d328:;
  /* 1014d328 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1014d329 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014d32b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d32d je 0x1014d336 */
  if (C.zf) goto L_1014d336;
  /* 1014d32f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d330 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1014d330");
  /* 1014d334 jae 0x1014d328 */
  if (!C.cf) goto L_1014d328;
L_1014d336:;
  /* 1014d336 mov eax, ecx */
  EAX = (ECX);
  /* 1014d338 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d33b pop esi */
  ESI = (pop32());
  /* 1014d33c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d33d ret  */
  ESPCHK(0x1014d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d340 @ 0x1014d340 (58 bytes, 32 insns) */
void f_1014d340(void) {
  FTRACE(0x1014d340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d340 push ebp */
  push32((uint32_t)(EBP));
  /* 1014d341 mov ebp, esp */
  EBP = (ESP);
  /* 1014d343 push esi */
  push32((uint32_t)(ESI));
  /* 1014d344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d346 push eax */
  push32((uint32_t)(EAX));
  /* 1014d347 push eax */
  push32((uint32_t)(EAX));
  /* 1014d348 push eax */
  push32((uint32_t)(EAX));
  /* 1014d349 push eax */
  push32((uint32_t)(EAX));
  /* 1014d34a push eax */
  push32((uint32_t)(EAX));
  /* 1014d34b push eax */
  push32((uint32_t)(EAX));
  /* 1014d34c push eax */
  push32((uint32_t)(EAX));
  /* 1014d34d push eax */
  push32((uint32_t)(EAX));
  /* 1014d34e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014d354:;
  /* 1014d354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1014d356 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d358 je 0x1014d361 */
  if (C.zf) goto L_1014d361;
  /* 1014d35a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1014d35b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1014d35b");
  /* 1014d35f jmp 0x1014d354 */
  goto L_1014d354;
L_1014d361:;
  /* 1014d361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1014d364:;
  /* 1014d364 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014d366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d368 je 0x1014d374 */
  if (C.zf) goto L_1014d374;
  /* 1014d36a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d36b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1014d36b");
  /* 1014d36f jae 0x1014d364 */
  if (!C.cf) goto L_1014d364;
  /* 1014d371 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1014d374:;
  /* 1014d374 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d377 pop esi */
  ESI = (pop32());
  /* 1014d378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d379 ret  */
  ESPCHK(0x1014d340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d37a @ 0x1014d37a (544 bytes, 177 insns) */
void f_1014d37a(void) {
  FTRACE(0x1014d37au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d37a push ebp */
  push32((uint32_t)(EBP));
  /* 1014d37b mov ebp, esp */
  EBP = (ESP);
  /* 1014d37d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d380 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d381 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d384 push esi */
  push32((uint32_t)(ESI));
  /* 1014d385 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d388 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1014d38c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d38e push edi */
  push32((uint32_t)(EDI));
  /* 1014d38f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1014d392 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1014d395 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014d398 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1014d39b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1014d39f mov edi, ecx */
  EDI = (ECX);
  /* 1014d3a1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1014d3a6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1014d3a8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d3aa and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1014d3ac and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1014d3b2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d3b6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1014d3b9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1014d3bc jae 0x1014d57a */
  if (!C.cf) goto L_1014d57a;
  /* 1014d3c2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d3c7 jae 0x1014d57a */
  if (!C.cf) goto L_1014d57a;
  /* 1014d3cd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d3d2 ja 0x1014d57a */
  if ((!C.cf&&!C.zf)) goto L_1014d57a;
  /* 1014d3d8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d3dd ja 0x1014d3e3 */
  if ((!C.cf&&!C.zf)) goto L_1014d3e3;
  /* 1014d3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d3e1 jmp 0x1014d41d */
  goto L_1014d41d;
L_1014d3e3:;
  /* 1014d3e3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1014d3e6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1014d3eb jne 0x1014d405 */
  if (!C.zf) goto L_1014d405;
  /* 1014d3ed inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1014d3f0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1014d3f3 jne 0x1014d405 */
  if (!C.zf) goto L_1014d405;
  /* 1014d3f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d3f7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d3fa jne 0x1014d407 */
  if (!C.zf) goto L_1014d407;
  /* 1014d3fc cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d3fe jne 0x1014d407 */
  if (!C.zf) goto L_1014d407;
  /* 1014d400 jmp 0x1014d574 */
  goto L_1014d574;
L_1014d405:;
  /* 1014d405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014d407:;
  /* 1014d407 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d40a jne 0x1014d42a */
  if (!C.zf) goto L_1014d42a;
  /* 1014d40c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1014d40f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1014d412 jne 0x1014d42a */
  if (!C.zf) goto L_1014d42a;
  /* 1014d414 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d417 jne 0x1014d42a */
  if (!C.zf) goto L_1014d42a;
  /* 1014d419 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d41b jne 0x1014d42a */
  if (!C.zf) goto L_1014d42a;
L_1014d41d:;
  /* 1014d41d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1014d420 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1014d423 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014d425 jmp 0x1014d595 */
  goto L_1014d595;
L_1014d42a:;
  /* 1014d42a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1014d42d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1014d430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1014d433 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1014d43a:;
  /* 1014d43a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014d43d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d43f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d443 jle 0x1014d48e */
  if ((C.zf||C.sf!=C.of)) goto L_1014d48e;
  /* 1014d445 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d447 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1014d44a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1014d44d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1014d453 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1014d456:;
  /* 1014d456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1014d459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1014d45c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1014d45f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1014d462 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1014d465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014d468 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d46b push ecx */
  push32((uint32_t)(ECX));
  /* 1014d46c push eax */
  push32((uint32_t)(EAX));
  /* 1014d46d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1014d46f call 0x1014c525 */
  push32(0x1014d474u); f_1014c525();
  /* 1014d474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d479 je 0x1014d481 */
  if (C.zf) goto L_1014d481;
  /* 1014d47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014d47e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1014d481:;
  /* 1014d481 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d485 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1014d489 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1014d48c jne 0x1014d456 */
  if (!C.zf) goto L_1014d456;
L_1014d48e:;
  /* 1014d48e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d492 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1014d495 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1014d498 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d49c jg 0x1014d43a */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d43a;
  /* 1014d49e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d4a5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d4aa jle 0x1014d4d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1014d4d1;
L_1014d4ac:;
  /* 1014d4ac test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1014d4b0 jne 0x1014d4ca */
  if (!C.zf) goto L_1014d4ca;
  /* 1014d4b2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1014d4b5 push eax */
  push32((uint32_t)(EAX));
  /* 1014d4b6 call 0x1014c5a4 */
  push32(0x1014d4bbu); f_1014c5a4();
  /* 1014d4bb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d4c2 pop ecx */
  ECX = (pop32());
  /* 1014d4c3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d4c8 jg 0x1014d4ac */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d4ac;
L_1014d4ca:;
  /* 1014d4ca cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d4cf jg 0x1014d50a */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d50a;
L_1014d4d1:;
  /* 1014d4d1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d4d8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d4dd jge 0x1014d50a */
  if ((C.sf==C.of)) goto L_1014d50a;
  /* 1014d4df movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1014d4e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014d4e5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014d4e8 mov ebx, eax */
  EBX = (EAX);
L_1014d4ea:;
  /* 1014d4ea test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1014d4ee je 0x1014d4f3 */
  if (C.zf) goto L_1014d4f3;
  /* 1014d4f0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1014d4f3:;
  /* 1014d4f3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1014d4f6 push eax */
  push32((uint32_t)(EAX));
  /* 1014d4f7 call 0x1014c5d2 */
  push32(0x1014d4fcu); f_1014c5d2();
  /* 1014d4fc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1014d4fd pop ecx */
  ECX = (pop32());
  /* 1014d4fe jne 0x1014d4ea */
  if (!C.zf) goto L_1014d4ea;
  /* 1014d500 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d504 je 0x1014d50a */
  if (C.zf) goto L_1014d50a;
  /* 1014d506 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1014d50a:;
  /* 1014d50a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d510 ja 0x1014d521 */
  if ((!C.cf&&!C.zf)) goto L_1014d521;
  /* 1014d512 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1014d515 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014d51a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d51f jne 0x1014d556 */
  if (!C.zf) goto L_1014d556;
L_1014d521:;
  /* 1014d521 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d525 jne 0x1014d553 */
  if (!C.zf) goto L_1014d553;
  /* 1014d527 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1014d52b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d52f jne 0x1014d54e */
  if (!C.zf) goto L_1014d54e;
  /* 1014d531 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1014d535 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d53b jne 0x1014d548 */
  if (!C.zf) goto L_1014d548;
  /* 1014d53d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1014d540 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1014d546 jmp 0x1014d556 */
  goto L_1014d556;
L_1014d548:;
  /* 1014d548 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1014d54c jmp 0x1014d556 */
  goto L_1014d556;
L_1014d54e:;
  /* 1014d54e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1014d551 jmp 0x1014d556 */
  goto L_1014d556;
L_1014d553:;
  /* 1014d553 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1014d556:;
  /* 1014d556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d559 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d55d jae 0x1014d57a */
  if (!C.cf) goto L_1014d57a;
  /* 1014d55f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1014d563 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1014d565 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1014d568 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1014d56b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1014d56e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1014d571 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1014d574:;
  /* 1014d574 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1014d578 jmp 0x1014d595 */
  goto L_1014d595;
L_1014d57a:;
  /* 1014d57a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1014d57d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d57f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014d583 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1014d589 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d58f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1014d592 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1014d595:;
  /* 1014d595 pop edi */
  EDI = (pop32());
  /* 1014d596 pop esi */
  ESI = (pop32());
  /* 1014d597 pop ebx */
  EBX = (pop32());
  /* 1014d598 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d599 ret  */
  ESPCHK(0x1014d37au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d59a @ 0x1014d59a (124 bytes, 52 insns) */
void f_1014d59a(void) {
  FTRACE(0x1014d59au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d59a push ebp */
  push32((uint32_t)(EBP));
  /* 1014d59b mov ebp, esp */
  EBP = (ESP);
  /* 1014d59d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d5a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d5a1 mov ebx, 0x10153200 */
  EBX = (0x10153200u);
  /* 1014d5a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014d5a8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d5ab cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d5ae je 0x1014d613 */
  if (C.zf) goto L_1014d613;
  /* 1014d5b0 jge 0x1014d5c2 */
  if ((C.sf==C.of)) goto L_1014d5c2;
  /* 1014d5b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d5b5 mov ebx, 0x10153360 */
  EBX = (0x10153360u);
  /* 1014d5ba neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014d5bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1014d5bf sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1014d5c2:;
  /* 1014d5c2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d5c5 jne 0x1014d5cd */
  if (!C.zf) goto L_1014d5cd;
  /* 1014d5c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d5ca mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1014d5cd:;
  /* 1014d5cd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d5d0 je 0x1014d613 */
  if (C.zf) goto L_1014d613;
  /* 1014d5d2 push esi */
  push32((uint32_t)(ESI));
  /* 1014d5d3 push edi */
  push32((uint32_t)(EDI));
L_1014d5d4:;
  /* 1014d5d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d5d7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d5da sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1014d5de and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1014d5e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d5e3 je 0x1014d60c */
  if (C.zf) goto L_1014d60c;
  /* 1014d5e5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1014d5e8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1014d5ee lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1014d5f1 jb 0x1014d5ff */
  if (C.cf) goto L_1014d5ff;
  /* 1014d5f3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1014d5f6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014d5f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014d5f8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1014d5f9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1014d5fc lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1014d5ff:;
  /* 1014d5ff push esi */
  push32((uint32_t)(ESI));
  /* 1014d600 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014d603 call 0x1014d37a */
  push32(0x1014d608u); f_1014d37a();
  /* 1014d608 pop ecx */
  ECX = (pop32());
  /* 1014d609 pop ecx */
  ECX = (pop32());
  /* 1014d60a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1014d60c:;
  /* 1014d60c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d60f jne 0x1014d5d4 */
  if (!C.zf) goto L_1014d5d4;
  /* 1014d611 pop edi */
  EDI = (pop32());
  /* 1014d612 pop esi */
  ESI = (pop32());
L_1014d613:;
  /* 1014d613 pop ebx */
  EBX = (pop32());
  /* 1014d614 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d615 ret  */
  ESPCHK(0x1014d59au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d616 @ 0x1014d616 (93 bytes, 32 insns) */
void f_1014d616(void) {
  FTRACE(0x1014d616u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d616 push esi */
  push32((uint32_t)(ESI));
  /* 1014d617 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d61b cmp esi, dword ptr [0x10157d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d621 jae 0x1014d65b */
  if (!C.cf) goto L_1014d65b;
  /* 1014d623 mov ecx, esi */
  ECX = (ESI);
  /* 1014d625 mov eax, esi */
  EAX = (ESI);
  /* 1014d627 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1014d62a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014d62d mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 1014d634 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1014d637 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1014d63c je 0x1014d65b */
  if (C.zf) goto L_1014d65b;
  /* 1014d63e push edi */
  push32((uint32_t)(EDI));
  /* 1014d63f push esi */
  push32((uint32_t)(ESI));
  /* 1014d640 call 0x1014bf54 */
  push32(0x1014d645u); f_1014bf54();
  /* 1014d645 push esi */
  push32((uint32_t)(ESI));
  /* 1014d646 call 0x1014d673 */
  push32(0x1014d64bu); f_1014d673();
  /* 1014d64b push esi */
  push32((uint32_t)(ESI));
  /* 1014d64c mov edi, eax */
  EDI = (EAX);
  /* 1014d64e call 0x1014bfb3 */
  push32(0x1014d653u); f_1014bfb3();
  /* 1014d653 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d656 mov eax, edi */
  EAX = (EDI);
  /* 1014d658 pop edi */
  EDI = (pop32());
  /* 1014d659 pop esi */
  ESI = (pop32());
  /* 1014d65a ret  */
  ESPCHK(0x1014d616u, _esp0);
  ESP += 4; return;
L_1014d65b:;
  /* 1014d65b call 0x1014be81 */
  push32(0x1014d660u); f_1014be81();
  /* 1014d660 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1014d666 call 0x1014be8a */
  push32(0x1014d66bu); f_1014be8a();
  /* 1014d66b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014d66e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014d671 pop esi */
  ESI = (pop32());
  /* 1014d672 ret  */
  ESPCHK(0x1014d616u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d673 @ 0x1014d673 (131 bytes, 52 insns) */
void f_1014d673(void) {
  FTRACE(0x1014d673u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d673 push esi */
  push32((uint32_t)(ESI));
  /* 1014d674 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d678 push edi */
  push32((uint32_t)(EDI));
  /* 1014d679 push esi */
  push32((uint32_t)(ESI));
  /* 1014d67a call 0x1014bf12 */
  push32(0x1014d67fu); f_1014bf12();
  /* 1014d67f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d682 pop ecx */
  ECX = (pop32());
  /* 1014d683 je 0x1014d6c1 */
  if (C.zf) goto L_1014d6c1;
  /* 1014d685 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d688 je 0x1014d68f */
  if (C.zf) goto L_1014d68f;
  /* 1014d68a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d68d jne 0x1014d6a5 */
  if (!C.zf) goto L_1014d6a5;
L_1014d68f:;
  /* 1014d68f push 2 */
  push32((uint32_t)(0x2u));
  /* 1014d691 call 0x1014bf12 */
  push32(0x1014d696u); f_1014bf12();
  /* 1014d696 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014d698 mov edi, eax */
  EDI = (EAX);
  /* 1014d69a call 0x1014bf12 */
  push32(0x1014d69fu); f_1014bf12();
  /* 1014d69f pop ecx */
  ECX = (pop32());
  /* 1014d6a0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d6a2 pop ecx */
  ECX = (pop32());
  /* 1014d6a3 je 0x1014d6c1 */
  if (C.zf) goto L_1014d6c1;
L_1014d6a5:;
  /* 1014d6a5 push esi */
  push32((uint32_t)(ESI));
  /* 1014d6a6 call 0x1014bf12 */
  push32(0x1014d6abu); f_1014bf12();
  /* 1014d6ab pop ecx */
  ECX = (pop32());
  /* 1014d6ac push eax */
  push32((uint32_t)(EAX));
  /* 1014d6ad call dword ptr [0x1014e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0d4))), 0x1014d6b3u);
  /* 1014d6b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014d6b5 jne 0x1014d6c1 */
  if (!C.zf) goto L_1014d6c1;
  /* 1014d6b7 call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x1014d6bdu);
  /* 1014d6bd mov edi, eax */
  EDI = (EAX);
  /* 1014d6bf jmp 0x1014d6c3 */
  goto L_1014d6c3;
L_1014d6c1:;
  /* 1014d6c1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1014d6c3:;
  /* 1014d6c3 push esi */
  push32((uint32_t)(ESI));
  /* 1014d6c4 call 0x1014be93 */
  push32(0x1014d6c9u); f_1014be93();
  /* 1014d6c9 mov eax, esi */
  EAX = (ESI);
  /* 1014d6cb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1014d6ce sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1014d6d1 pop ecx */
  ECX = (pop32());
  /* 1014d6d2 mov eax, dword ptr [eax*4 + 0x10157c20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10157c20)));
  /* 1014d6d9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1014d6dc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1014d6e1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014d6e3 je 0x1014d6f1 */
  if (C.zf) goto L_1014d6f1;
  /* 1014d6e5 push edi */
  push32((uint32_t)(EDI));
  /* 1014d6e6 call 0x1014be0e */
  push32(0x1014d6ebu); f_1014be0e();
  /* 1014d6eb pop ecx */
  ECX = (pop32());
  /* 1014d6ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1014d6ef jmp 0x1014d6f3 */
  goto L_1014d6f3;
L_1014d6f1:;
  /* 1014d6f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014d6f3:;
  /* 1014d6f3 pop edi */
  EDI = (pop32());
  /* 1014d6f4 pop esi */
  ESI = (pop32());
  /* 1014d6f5 ret  */
  ESPCHK(0x1014d673u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1014d6f6 (43 bytes, 17 insns) */
void f_1014d6f6(void) {
  FTRACE(0x1014d6f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d6f6 push esi */
  push32((uint32_t)(ESI));
  /* 1014d6f7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1014d6fb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1014d6fe test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1014d700 je 0x1014d71f */
  if (C.zf) goto L_1014d71f;
  /* 1014d702 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1014d704 je 0x1014d71f */
  if (C.zf) goto L_1014d71f;
  /* 1014d706 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1014d709 call 0x1014a0d6 */
  push32(0x1014d70eu); f_1014a0d6();
  /* 1014d70e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1014d714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d716 pop ecx */
  ECX = (pop32());
  /* 1014d717 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1014d719 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1014d71c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1014d71f:;
  /* 1014d71f pop esi */
  ESI = (pop32());
  /* 1014d720 ret  */
  ESPCHK(0x1014d6f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x1014d730 (208 bytes, 85 insns) */
void f_1014d730(void) {
  FTRACE(0x1014d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d730 push ebp */
  push32((uint32_t)(EBP));
  /* 1014d731 mov ebp, esp */
  EBP = (ESP);
  /* 1014d733 push edi */
  push32((uint32_t)(EDI));
  /* 1014d734 push esi */
  push32((uint32_t)(ESI));
  /* 1014d735 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d736 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d739 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d73c lea eax, [0x10156810] */
  EAX = ((uint32_t)(0x10156810));
  /* 1014d742 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d746 jne 0x1014d783 */
  if (!C.zf) goto L_1014d783;
  /* 1014d748 mov al, 0xff */
  AL = (0xffu);
  /* 1014d74a mov edi, edi */
  EDI = (EDI);
L_1014d74c:;
  /* 1014d74c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d74e je 0x1014d77e */
  if (C.zf) goto L_1014d77e;
  /* 1014d750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014d752 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d753 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1014d755 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014d756 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d758 je 0x1014d74c */
  if (C.zf) goto L_1014d74c;
  /* 1014d75a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014d75c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d75e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014d760 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1014d763 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014d765 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014d767 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1014d769 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014d76b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d76d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014d76f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1014d772 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014d774 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1014d776 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d778 je 0x1014d74c */
  if (C.zf) goto L_1014d74c;
  /* 1014d77a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1014d77c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1014d77e:;
  /* 1014d77e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1014d781 jmp 0x1014d7fb */
  goto L_1014d7fb;
L_1014d783:;
  /* 1014d783 lock inc dword ptr [0x10156994] */
  x86_unimpl("lock inc @ 0x1014d783");
  /* 1014d78a cmp dword ptr [0x10156990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d791 jg 0x1014d797 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d797;
  /* 1014d793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014d795 jmp 0x1014d7ac */
  goto L_1014d7ac;
L_1014d797:;
  /* 1014d797 lock dec dword ptr [0x10156994] */
  x86_unimpl("lock dec @ 0x1014d797");
  /* 1014d79e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d7a0 call 0x10149f23 */
  push32(0x1014d7a5u); f_10149f23();
  /* 1014d7a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1014d7ac:;
  /* 1014d7ac mov eax, 0xff */
  EAX = (0xffu);
  /* 1014d7b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014d7b3 nop  */
  /* nop */
L_1014d7b4:;
  /* 1014d7b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d7b6 je 0x1014d7df */
  if (C.zf) goto L_1014d7df;
  /* 1014d7b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014d7ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d7bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014d7bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014d7be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d7c0 je 0x1014d7b4 */
  if (C.zf) goto L_1014d7b4;
  /* 1014d7c2 push eax */
  push32((uint32_t)(EAX));
  /* 1014d7c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d7c4 call 0x101493bf */
  push32(0x1014d7c9u); f_101493bf();
  /* 1014d7c9 mov ebx, eax */
  EBX = (EAX);
  /* 1014d7cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d7ce call 0x101493bf */
  push32(0x1014d7d3u); f_101493bf();
  /* 1014d7d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d7d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d7d8 je 0x1014d7b4 */
  if (C.zf) goto L_1014d7b4;
  /* 1014d7da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014d7dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1014d7df:;
  /* 1014d7df mov ebx, eax */
  EBX = (EAX);
  /* 1014d7e1 pop eax */
  EAX = (pop32());
  /* 1014d7e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d7e4 jne 0x1014d7ef */
  if (!C.zf) goto L_1014d7ef;
  /* 1014d7e6 lock dec dword ptr [0x10156994] */
  x86_unimpl("lock dec @ 0x1014d7e6");
  /* 1014d7ed jmp 0x1014d7f9 */
  goto L_1014d7f9;
L_1014d7ef:;
  /* 1014d7ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d7f1 call 0x10149f84 */
  push32(0x1014d7f6u); f_10149f84();
  /* 1014d7f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014d7f9:;
  /* 1014d7f9 mov eax, ebx */
  EAX = (EBX);
L_1014d7fb:;
  /* 1014d7fb pop ebx */
  EBX = (pop32());
  /* 1014d7fc pop esi */
  ESI = (pop32());
  /* 1014d7fd pop edi */
  EDI = (pop32());
  /* 1014d7fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d7ff ret  */
  ESPCHK(0x1014d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x1014d800 (257 bytes, 103 insns) */
void f_1014d800(void) {
  FTRACE(0x1014d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d800 push ebp */
  push32((uint32_t)(EBP));
  /* 1014d801 mov ebp, esp */
  EBP = (ESP);
  /* 1014d803 push edi */
  push32((uint32_t)(EDI));
  /* 1014d804 push esi */
  push32((uint32_t)(ESI));
  /* 1014d805 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014d809 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014d80b je 0x1014d8fa */
  if (C.zf) goto L_1014d8fa;
  /* 1014d811 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1014d814 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014d817 lea eax, [0x10156810] */
  EAX = ((uint32_t)(0x10156810));
  /* 1014d81d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d821 jne 0x1014d871 */
  if (!C.zf) goto L_1014d871;
  /* 1014d823 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1014d825 mov bl, 0x5a */
  BL = (0x5au);
  /* 1014d827 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1014d829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1014d82c:;
  /* 1014d82c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1014d82e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1014d830 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1014d832 je 0x1014d855 */
  if (C.zf) goto L_1014d855;
  /* 1014d834 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1014d836 je 0x1014d855 */
  if (C.zf) goto L_1014d855;
  /* 1014d838 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d839 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014d83a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d83c jb 0x1014d844 */
  if (C.cf) goto L_1014d844;
  /* 1014d83e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d840 ja 0x1014d844 */
  if ((!C.cf&&!C.zf)) goto L_1014d844;
  /* 1014d842 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1014d844:;
  /* 1014d844 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d846 jb 0x1014d84e */
  if (C.cf) goto L_1014d84e;
  /* 1014d848 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d84a ja 0x1014d84e */
  if ((!C.cf&&!C.zf)) goto L_1014d84e;
  /* 1014d84c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1014d84e:;
  /* 1014d84e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d850 jne 0x1014d85f */
  if (!C.zf) goto L_1014d85f;
  /* 1014d852 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014d853 jne 0x1014d82c */
  if (!C.zf) goto L_1014d82c;
L_1014d855:;
  /* 1014d855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014d857 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014d859 je 0x1014d8fa */
  if (C.zf) goto L_1014d8fa;
L_1014d85f:;
  /* 1014d85f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1014d864 jb 0x1014d8fa */
  if (C.cf) goto L_1014d8fa;
  /* 1014d86a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014d86c jmp 0x1014d8fa */
  goto L_1014d8fa;
L_1014d871:;
  /* 1014d871 lock inc dword ptr [0x10156994] */
  x86_unimpl("lock inc @ 0x1014d871");
  /* 1014d878 cmp dword ptr [0x10156990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d87f jg 0x1014d885 */
  if ((!C.zf&&C.sf==C.of)) goto L_1014d885;
  /* 1014d881 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014d883 jmp 0x1014d89e */
  goto L_1014d89e;
L_1014d885:;
  /* 1014d885 lock dec dword ptr [0x10156994] */
  x86_unimpl("lock dec @ 0x1014d885");
  /* 1014d88c mov ebx, ecx */
  EBX = (ECX);
  /* 1014d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d890 call 0x10149f23 */
  push32(0x1014d895u); f_10149f23();
  /* 1014d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1014d89c mov ecx, ebx */
  ECX = (EBX);
L_1014d89e:;
  /* 1014d89e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d8a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014d8a2 mov edi, edi */
  EDI = (EDI);
L_1014d8a4:;
  /* 1014d8a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014d8a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d8a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014d8aa je 0x1014d8cf */
  if (C.zf) goto L_1014d8cf;
  /* 1014d8ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1014d8ae je 0x1014d8cf */
  if (C.zf) goto L_1014d8cf;
  /* 1014d8b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014d8b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014d8b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1014d8b3 push eax */
  push32((uint32_t)(EAX));
  /* 1014d8b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1014d8b5 call 0x101493bf */
  push32(0x1014d8bau); f_101493bf();
  /* 1014d8ba mov ebx, eax */
  EBX = (EAX);
  /* 1014d8bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d8bf call 0x101493bf */
  push32(0x1014d8c4u); f_101493bf();
  /* 1014d8c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d8c7 pop ecx */
  ECX = (pop32());
  /* 1014d8c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d8ca jne 0x1014d8d5 */
  if (!C.zf) goto L_1014d8d5;
  /* 1014d8cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014d8cd jne 0x1014d8a4 */
  if (!C.zf) goto L_1014d8a4;
L_1014d8cf:;
  /* 1014d8cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1014d8d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014d8d3 je 0x1014d8de */
  if (C.zf) goto L_1014d8de;
L_1014d8d5:;
  /* 1014d8d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1014d8da jb 0x1014d8de */
  if (C.cf) goto L_1014d8de;
  /* 1014d8dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1014d8de:;
  /* 1014d8de pop eax */
  EAX = (pop32());
  /* 1014d8df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014d8e1 jne 0x1014d8ec */
  if (!C.zf) goto L_1014d8ec;
  /* 1014d8e3 lock dec dword ptr [0x10156994] */
  x86_unimpl("lock dec @ 0x1014d8e3");
  /* 1014d8ea jmp 0x1014d8fa */
  goto L_1014d8fa;
L_1014d8ec:;
  /* 1014d8ec mov ebx, ecx */
  EBX = (ECX);
  /* 1014d8ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1014d8f0 call 0x10149f84 */
  push32(0x1014d8f5u); f_10149f84();
  /* 1014d8f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014d8f8 mov ecx, ebx */
  ECX = (EBX);
L_1014d8fa:;
  /* 1014d8fa mov eax, ecx */
  EAX = (ECX);
  /* 1014d8fc pop ebx */
  EBX = (pop32());
  /* 1014d8fd pop esi */
  ESI = (pop32());
  /* 1014d8fe pop edi */
  EDI = (pop32());
  /* 1014d8ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014d900 ret  */
  ESPCHK(0x1014d800u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1014d944 (6 bytes, 1 insns) */
void f_1014d944(void) {
  FTRACE(0x1014d944u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014d944 jmp dword ptr [0x1014e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1014e0cc)))); return;
}

