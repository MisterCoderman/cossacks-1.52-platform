#include "recomp.h"

/* FUN_10009265 @ 0x10129265 (53 bytes, 25 insns) */
void f_10129265(void) {
  FTRACE(0x10129265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129265 push ebp */
  push32((uint32_t)(EBP));
  /* 10129266 mov ebp, esp */
  EBP = (ESP);
  /* 10129268 push ecx */
  push32((uint32_t)(ECX));
  /* 10129269 push esi */
  push32((uint32_t)(ESI));
  /* 1012926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1012926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1012926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10129271 call 0x101292b0 */
  push32(0x10129276u); f_101292b0();
  /* 10129276 mov esi, eax */
  ESI = (EAX);
  /* 10129278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012927b not eax */
  EAX = (~(EAX));
  /* 1012927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1012927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10129285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10129287 push esi */
  push32((uint32_t)(ESI));
  /* 10129288 call 0x10129342 */
  push32(0x1012928du); f_10129342();
  /* 1012928d pop ecx */
  ECX = (pop32());
  /* 1012928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10129291 pop ecx */
  ECX = (pop32());
  /* 10129292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10129295 mov eax, esi */
  EAX = (ESI);
  /* 10129297 pop esi */
  ESI = (pop32());
  /* 10129298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129299 ret  */
  ESPCHK(0x10129265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1012929a (22 bytes, 8 insns) */
void f_1012929a(void) {
  FTRACE(0x1012929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101292a3 push eax */
  push32((uint32_t)(EAX));
  /* 101292a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101292a8 call 0x10129265 */
  push32(0x101292adu); f_10129265();
  /* 101292ad pop ecx */
  ECX = (pop32());
  /* 101292ae pop ecx */
  ECX = (pop32());
  /* 101292af ret  */
  ESPCHK(0x1012929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x101292b0 (146 bytes, 58 insns) */
void f_101292b0(void) {
  FTRACE(0x101292b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101292b0 push ebx */
  push32((uint32_t)(EBX));
  /* 101292b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101292b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101292b7 push ebp */
  push32((uint32_t)(EBP));
  /* 101292b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101292bb push edi */
  push32((uint32_t)(EDI));
  /* 101292bc je 0x101292c1 */
  if (C.zf) goto L_101292c1;
  /* 101292be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101292c0 pop eax */
  EAX = (pop32());
L_101292c1:;
  /* 101292c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101292c4 je 0x101292c8 */
  if (C.zf) goto L_101292c8;
  /* 101292c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101292c8:;
  /* 101292c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101292cb je 0x101292cf */
  if (C.zf) goto L_101292cf;
  /* 101292cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101292cf:;
  /* 101292cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101292d2 je 0x101292d6 */
  if (C.zf) goto L_101292d6;
  /* 101292d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101292d6:;
  /* 101292d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101292d9 je 0x101292dd */
  if (C.zf) goto L_101292dd;
  /* 101292db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101292dd:;
  /* 101292dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101292e0 je 0x101292e7 */
  if (C.zf) goto L_101292e7;
  /* 101292e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101292e7:;
  /* 101292e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101292ea push esi */
  push32((uint32_t)(ESI));
  /* 101292eb mov edx, ecx */
  EDX = (ECX);
  /* 101292ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101292f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 101292f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101292f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101292fe je 0x1012931f */
  if (C.zf) goto L_1012931f;
  /* 10129300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129306 je 0x1012931c */
  if (C.zf) goto L_1012931c;
  /* 10129308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012930e je 0x10129318 */
  if (C.zf) goto L_10129318;
  /* 10129310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129312 jne 0x1012931f */
  if (!C.zf) goto L_1012931f;
  /* 10129314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10129316 jmp 0x1012931f */
  goto L_1012931f;
L_10129318:;
  /* 10129318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1012931a jmp 0x1012931f */
  goto L_1012931f;
L_1012931c:;
  /* 1012931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1012931f:;
  /* 1012931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10129321 pop esi */
  ESI = (pop32());
  /* 10129322 je 0x1012932f */
  if (C.zf) goto L_1012932f;
  /* 10129324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129326 jne 0x10129334 */
  if (!C.zf) goto L_10129334;
  /* 10129328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1012932d jmp 0x10129334 */
  goto L_10129334;
L_1012932f:;
  /* 1012932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10129334:;
  /* 10129334 pop edi */
  EDI = (pop32());
  /* 10129335 pop ebp */
  EBP = (pop32());
  /* 10129336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10129339 pop ebx */
  EBX = (pop32());
  /* 1012933a je 0x10129341 */
  if (C.zf) goto L_10129341;
  /* 1012933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10129341:;
  /* 10129341 ret  */
  ESPCHK(0x101292b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10129342 (137 bytes, 53 insns) */
void f_10129342(void) {
  FTRACE(0x10129342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129342 push ebx */
  push32((uint32_t)(EBX));
  /* 10129343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10129349 push esi */
  push32((uint32_t)(ESI));
  /* 1012934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1012934d je 0x10129352 */
  if (C.zf) goto L_10129352;
  /* 1012934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10129351 pop eax */
  EAX = (pop32());
L_10129352:;
  /* 10129352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10129355 je 0x10129359 */
  if (C.zf) goto L_10129359;
  /* 10129357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10129359:;
  /* 10129359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1012935c je 0x10129360 */
  if (C.zf) goto L_10129360;
  /* 1012935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10129360:;
  /* 10129360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10129363 je 0x10129367 */
  if (C.zf) goto L_10129367;
  /* 10129365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10129367:;
  /* 10129367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1012936a je 0x1012936e */
  if (C.zf) goto L_1012936e;
  /* 1012936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1012936e:;
  /* 1012936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10129374 je 0x10129378 */
  if (C.zf) goto L_10129378;
  /* 10129376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10129378:;
  /* 10129378 mov ecx, ebx */
  ECX = (EBX);
  /* 1012937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1012937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10129381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10129386 je 0x101293a5 */
  if (C.zf) goto L_101293a5;
  /* 10129388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012938e je 0x101293a2 */
  if (C.zf) goto L_101293a2;
  /* 10129390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129392 je 0x1012939d */
  if (C.zf) goto L_1012939d;
  /* 10129394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129396 jne 0x101293a5 */
  if (!C.zf) goto L_101293a5;
  /* 10129398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1012939b jmp 0x101293a5 */
  goto L_101293a5;
L_1012939d:;
  /* 1012939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101293a0 jmp 0x101293a5 */
  goto L_101293a5;
L_101293a2:;
  /* 101293a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101293a5:;
  /* 101293a5 mov ecx, ebx */
  ECX = (EBX);
  /* 101293a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101293ad je 0x101293bb */
  if (C.zf) goto L_101293bb;
  /* 101293af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101293b5 jne 0x101293bd */
  if (!C.zf) goto L_101293bd;
  /* 101293b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101293b9 jmp 0x101293bd */
  goto L_101293bd;
L_101293bb:;
  /* 101293bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101293bd:;
  /* 101293bd pop esi */
  ESI = (pop32());
  /* 101293be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101293c4 pop ebx */
  EBX = (pop32());
  /* 101293c5 je 0x101293ca */
  if (C.zf) goto L_101293ca;
  /* 101293c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101293ca:;
  /* 101293ca ret  */
  ESPCHK(0x10129342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x101293cb (117 bytes, 46 insns) */
void f_101293cb(void) {
  FTRACE(0x101293cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101293cb push ebp */
  push32((uint32_t)(EBP));
  /* 101293cc mov ebp, esp */
  EBP = (ESP);
  /* 101293ce push ecx */
  push32((uint32_t)(ECX));
  /* 101293cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101293d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101293d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101293db ja 0x101293e9 */
  if ((!C.cf&&!C.zf)) goto L_101293e9;
  /* 101293dd mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 101293e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101293e7 jmp 0x1012943b */
  goto L_1012943b;
L_101293e9:;
  /* 101293e9 mov ecx, eax */
  ECX = (EAX);
  /* 101293eb push esi */
  push32((uint32_t)(ESI));
  /* 101293ec mov esi, dword ptr [0x101309f0] */
  ESI = (r32((uint32_t)(0x101309f0)));
  /* 101293f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101293f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101293f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101293fd pop esi */
  ESI = (pop32());
  /* 101293fe je 0x1012940e */
  if (C.zf) goto L_1012940e;
  /* 10129400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10129404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10129407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1012940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1012940c jmp 0x10129417 */
  goto L_10129417;
L_1012940e:;
  /* 1012940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10129412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10129415 push 1 */
  push32((uint32_t)(0x1u));
L_10129417:;
  /* 10129417 pop eax */
  EAX = (pop32());
  /* 10129418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1012941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1012941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1012941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10129421 push ecx */
  push32((uint32_t)(ECX));
  /* 10129422 push eax */
  push32((uint32_t)(EAX));
  /* 10129423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10129426 push eax */
  push32((uint32_t)(EAX));
  /* 10129427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129429 call 0x1012c27d */
  push32(0x1012942eu); f_1012c27d();
  /* 1012942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10129431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10129433 jne 0x10129437 */
  if (!C.zf) goto L_10129437;
  /* 10129435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129436 ret  */
  ESPCHK(0x101293cbu, _esp0);
  ESP += 4; return;
L_10129437:;
  /* 10129437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1012943b:;
  /* 1012943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1012943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012943f ret  */
  ESPCHK(0x101293cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10129440 (111 bytes, 44 insns) */
void f_10129440(void) {
  FTRACE(0x10129440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129440 push ebx */
  push32((uint32_t)(EBX));
  /* 10129441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10129443 cmp dword ptr [0x10136858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10136858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129449 jne 0x1012945e */
  if (!C.zf) goto L_1012945e;
  /* 1012944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129452 jl 0x101294ad */
  if ((C.sf!=C.of)) goto L_101294ad;
  /* 10129454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129457 jg 0x101294ad */
  if ((!C.zf&&C.sf==C.of)) goto L_101294ad;
  /* 10129459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012945c pop ebx */
  EBX = (pop32());
  /* 1012945d ret  */
  ESPCHK(0x10129440u, _esp0);
  ESP += 4; return;
L_1012945e:;
  /* 1012945e push esi */
  push32((uint32_t)(ESI));
  /* 1012945f mov esi, 0x101369d4 */
  ESI = (0x101369d4u);
  /* 10129464 push edi */
  push32((uint32_t)(EDI));
  /* 10129465 push esi */
  push32((uint32_t)(ESI));
  /* 10129466 call dword ptr [0x1012e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e090))), 0x1012946cu);
  /* 1012946c cmp dword ptr [0x101369d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101369d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129472 mov edi, dword ptr [0x1012e08c] */
  EDI = (r32((uint32_t)(0x1012e08c)));
  /* 10129478 je 0x10129488 */
  if (C.zf) goto L_10129488;
  /* 1012947a push esi */
  push32((uint32_t)(ESI));
  /* 1012947b call edi */
  call_ind((uint32_t)(EDI), 0x1012947du);
  /* 1012947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012947f call 0x1012a013 */
  push32(0x10129484u); f_1012a013();
  /* 10129484 pop ecx */
  ECX = (pop32());
  /* 10129485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129487 pop ebx */
  EBX = (pop32());
L_10129488:;
  /* 10129488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1012948c call 0x101294af */
  push32(0x10129491u); f_101294af();
  /* 10129491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10129493 pop ecx */
  ECX = (pop32());
  /* 10129494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10129498 je 0x101294a4 */
  if (C.zf) goto L_101294a4;
  /* 1012949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012949c call 0x1012a074 */
  push32(0x101294a1u); f_1012a074();
  /* 101294a1 pop ecx */
  ECX = (pop32());
  /* 101294a2 jmp 0x101294a7 */
  goto L_101294a7;
L_101294a4:;
  /* 101294a4 push esi */
  push32((uint32_t)(ESI));
  /* 101294a5 call edi */
  call_ind((uint32_t)(EDI), 0x101294a7u);
L_101294a7:;
  /* 101294a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101294ab pop edi */
  EDI = (pop32());
  /* 101294ac pop esi */
  ESI = (pop32());
L_101294ad:;
  /* 101294ad pop ebx */
  EBX = (pop32());
  /* 101294ae ret  */
  ESPCHK(0x10129440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x101294af (203 bytes, 78 insns) */
void f_101294af(void) {
  FTRACE(0x101294afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101294af push ebp */
  push32((uint32_t)(EBP));
  /* 101294b0 mov ebp, esp */
  EBP = (ESP);
  /* 101294b2 push ecx */
  push32((uint32_t)(ECX));
  /* 101294b3 cmp dword ptr [0x10136858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10136858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101294ba push ebx */
  push32((uint32_t)(EBX));
  /* 101294bb push esi */
  push32((uint32_t)(ESI));
  /* 101294bc push edi */
  push32((uint32_t)(EDI));
  /* 101294bd jne 0x101294dc */
  if (!C.zf) goto L_101294dc;
  /* 101294bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101294c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101294c5 jl 0x10129575 */
  if ((C.sf!=C.of)) goto L_10129575;
  /* 101294cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101294ce jg 0x10129575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10129575;
  /* 101294d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101294d7 jmp 0x10129575 */
  goto L_10129575;
L_101294dc:;
  /* 101294dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101294df mov edi, 0x100 */
  EDI = (0x100u);
  /* 101294e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101294e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101294e8 pop esi */
  ESI = (pop32());
  /* 101294e9 jge 0x10129510 */
  if ((C.sf==C.of)) goto L_10129510;
  /* 101294eb cmp dword ptr [0x10130c00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101294f1 jle 0x101294fe */
  if ((C.zf||C.sf!=C.of)) goto L_101294fe;
  /* 101294f3 push esi */
  push32((uint32_t)(ESI));
  /* 101294f4 push ebx */
  push32((uint32_t)(EBX));
  /* 101294f5 call 0x101293cb */
  push32(0x101294fau); f_101293cb();
  /* 101294fa pop ecx */
  ECX = (pop32());
  /* 101294fb pop ecx */
  ECX = (pop32());
  /* 101294fc jmp 0x10129508 */
  goto L_10129508;
L_101294fe:;
  /* 101294fe mov eax, dword ptr [0x101309f0] */
  EAX = (r32((uint32_t)(0x101309f0)));
  /* 10129503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10129506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10129508:;
  /* 10129508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012950a jne 0x10129510 */
  if (!C.zf) goto L_10129510;
L_1012950c:;
  /* 1012950c mov eax, ebx */
  EAX = (EBX);
  /* 1012950e jmp 0x10129575 */
  goto L_10129575;
L_10129510:;
  /* 10129510 mov edx, dword ptr [0x101309f0] */
  EDX = (r32((uint32_t)(0x101309f0)));
  /* 10129516 mov eax, ebx */
  EAX = (EBX);
  /* 10129518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1012951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1012951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10129523 je 0x10129534 */
  if (C.zf) goto L_10129534;
  /* 10129525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10129529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1012952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10129531 pop eax */
  EAX = (pop32());
  /* 10129532 jmp 0x1012953d */
  goto L_1012953d;
L_10129534:;
  /* 10129534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10129538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1012953b mov eax, esi */
  EAX = (ESI);
L_1012953d:;
  /* 1012953d push esi */
  push32((uint32_t)(ESI));
  /* 1012953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10129540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10129543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10129545 push ecx */
  push32((uint32_t)(ECX));
  /* 10129546 push eax */
  push32((uint32_t)(EAX));
  /* 10129547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1012954a push eax */
  push32((uint32_t)(EAX));
  /* 1012954b push edi */
  push32((uint32_t)(EDI));
  /* 1012954c push dword ptr [0x10136858] */
  push32((uint32_t)(r32((uint32_t)(0x10136858))));
  /* 10129552 call 0x1012c3c6 */
  push32(0x10129557u); f_1012c3c6();
  /* 10129557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012955c je 0x1012950c */
  if (C.zf) goto L_1012950c;
  /* 1012955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129560 jne 0x10129568 */
  if (!C.zf) goto L_10129568;
  /* 10129562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10129566 jmp 0x10129575 */
  goto L_10129575;
L_10129568:;
  /* 10129568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1012956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10129570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10129573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10129575:;
  /* 10129575 pop edi */
  EDI = (pop32());
  /* 10129576 pop esi */
  ESI = (pop32());
  /* 10129577 pop ebx */
  EBX = (pop32());
  /* 10129578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129579 ret  */
  ESPCHK(0x101294afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1012957a (73 bytes, 36 insns) */
void f_1012957a(void) {
  FTRACE(0x1012957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012957e push esi */
  push32((uint32_t)(ESI));
  /* 1012957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10129581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10129582 pop ecx */
  ECX = (pop32());
  /* 10129583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10129587 mov esi, eax */
  ESI = (EAX);
  /* 10129589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1012958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129590 pop ecx */
  ECX = (pop32());
  /* 10129591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1012959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1012959c not edx */
  EDX = (~(EDX));
  /* 1012959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101295a1 jne 0x101295bf */
  if (!C.zf) goto L_101295bf;
  /* 101295a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101295a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101295a7 jge 0x101295ba */
  if ((C.sf==C.of)) goto L_101295ba;
  /* 101295a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101295ac:;
  /* 101295ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101295af jne 0x101295bf */
  if (!C.zf) goto L_101295bf;
  /* 101295b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101295b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101295b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101295b8 jl 0x101295ac */
  if ((C.sf!=C.of)) goto L_101295ac;
L_101295ba:;
  /* 101295ba push 1 */
  push32((uint32_t)(0x1u));
  /* 101295bc pop eax */
  EAX = (pop32());
  /* 101295bd pop esi */
  ESI = (pop32());
  /* 101295be ret  */
  ESPCHK(0x1012957au, _esp0);
  ESP += 4; return;
L_101295bf:;
  /* 101295bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101295c1 pop esi */
  ESI = (pop32());
  /* 101295c2 ret  */
  ESPCHK(0x1012957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x101295c3 (86 bytes, 43 insns) */
void f_101295c3(void) {
  FTRACE(0x101295c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101295c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101295c7 push ebx */
  push32((uint32_t)(EBX));
  /* 101295c8 push esi */
  push32((uint32_t)(ESI));
  /* 101295c9 push edi */
  push32((uint32_t)(EDI));
  /* 101295ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101295cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101295d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101295d1 pop ecx */
  ECX = (pop32());
  /* 101295d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101295d4 mov esi, eax */
  ESI = (EAX);
  /* 101295d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101295da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101295db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101295dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101295e0 push edi */
  push32((uint32_t)(EDI));
  /* 101295e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101295e3 pop ecx */
  ECX = (pop32());
  /* 101295e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101295e6 pop eax */
  EAX = (pop32());
  /* 101295e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101295e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101295eb push eax */
  push32((uint32_t)(EAX));
  /* 101295ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101295ee call 0x1012c615 */
  push32(0x101295f3u); f_1012c615();
  /* 101295f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101295f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101295f7 js 0x10129615 */
  if (C.sf) goto L_10129615;
  /* 101295f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101295fc:;
  /* 101295fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101295fe je 0x10129615 */
  if (C.zf) goto L_10129615;
  /* 10129600 push edi */
  push32((uint32_t)(EDI));
  /* 10129601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10129605 call 0x1012c615 */
  push32(0x1012960au); f_1012c615();
  /* 1012960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1012960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10129613 jge 0x101295fc */
  if ((C.sf==C.of)) goto L_101295fc;
L_10129615:;
  /* 10129615 pop edi */
  EDI = (pop32());
  /* 10129616 pop esi */
  ESI = (pop32());
  /* 10129617 pop ebx */
  EBX = (pop32());
  /* 10129618 ret  */
  ESPCHK(0x101295c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10129619 (140 bytes, 71 insns) */
void f_10129619(void) {
  FTRACE(0x10129619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129619 push ebp */
  push32((uint32_t)(EBP));
  /* 1012961a mov ebp, esp */
  EBP = (ESP);
  /* 1012961c push ecx */
  push32((uint32_t)(ECX));
  /* 1012961d push ecx */
  push32((uint32_t)(ECX));
  /* 1012961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10129621 push ebx */
  push32((uint32_t)(EBX));
  /* 10129622 push esi */
  push32((uint32_t)(ESI));
  /* 10129623 push edi */
  push32((uint32_t)(EDI));
  /* 10129624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10129627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10129629 pop ecx */
  ECX = (pop32());
  /* 1012962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10129631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10129633 mov eax, ebx */
  EAX = (EBX);
  /* 10129635 pop esi */
  ESI = (pop32());
  /* 10129636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10129637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1012963b mov ecx, eax */
  ECX = (EAX);
  /* 1012963d mov eax, ebx */
  EAX = (EBX);
  /* 1012963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10129640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129645 pop esi */
  ESI = (pop32());
  /* 10129646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1012964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1012964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10129651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129653 pop edx */
  EDX = (pop32());
  /* 10129654 mov ecx, esi */
  ECX = (ESI);
  /* 10129656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10129658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1012965a je 0x1012967d */
  if (C.zf) goto L_1012967d;
  /* 1012965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012965d push ebx */
  push32((uint32_t)(EBX));
  /* 1012965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10129661 call 0x1012957a */
  push32(0x10129666u); f_1012957a();
  /* 10129666 pop ecx */
  ECX = (pop32());
  /* 10129667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10129669 pop ecx */
  ECX = (pop32());
  /* 1012966a jne 0x1012967a */
  if (!C.zf) goto L_1012967a;
  /* 1012966c push edi */
  push32((uint32_t)(EDI));
  /* 1012966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10129670 call 0x101295c3 */
  push32(0x10129675u); f_101295c3();
  /* 10129675 pop ecx */
  ECX = (pop32());
  /* 10129676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10129679 pop ecx */
  ECX = (pop32());
L_1012967a:;
  /* 1012967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1012967d:;
  /* 1012967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10129680 mov ecx, esi */
  ECX = (ESI);
  /* 10129682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10129684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10129686 pop ecx */
  ECX = (pop32());
  /* 10129687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10129689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012968f jge 0x1012969d */
  if ((C.sf==C.of)) goto L_1012969d;
  /* 10129691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10129699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1012969d:;
  /* 1012969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101296a0 pop edi */
  EDI = (pop32());
  /* 101296a1 pop esi */
  ESI = (pop32());
  /* 101296a2 pop ebx */
  EBX = (pop32());
  /* 101296a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101296a4 ret  */
  ESPCHK(0x10129619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x101296a5 (27 bytes, 13 insns) */
void f_101296a5(void) {
  FTRACE(0x101296a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101296a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101296a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101296ad push esi */
  push32((uint32_t)(ESI));
  /* 101296ae push 3 */
  push32((uint32_t)(0x3u));
  /* 101296b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101296b2 pop edx */
  EDX = (pop32());
L_101296b3:;
  /* 101296b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101296b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101296b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101296bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101296bc jne 0x101296b3 */
  if (!C.zf) goto L_101296b3;
  /* 101296be pop esi */
  ESI = (pop32());
  /* 101296bf ret  */
  ESPCHK(0x101296a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x101296c0 (12 bytes, 8 insns) */
void f_101296c0(void) {
  FTRACE(0x101296c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101296c0 push edi */
  push32((uint32_t)(EDI));
  /* 101296c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101296c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101296c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101296c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101296c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101296ca pop edi */
  EDI = (pop32());
  /* 101296cb ret  */
  ESPCHK(0x101296c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x101296cc (27 bytes, 13 insns) */
void f_101296cc(void) {
  FTRACE(0x101296ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101296cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101296d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101296d2:;
  /* 101296d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101296d5 jne 0x101296e4 */
  if (!C.zf) goto L_101296e4;
  /* 101296d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101296d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101296db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101296de jl 0x101296d2 */
  if ((C.sf!=C.of)) goto L_101296d2;
  /* 101296e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101296e2 pop eax */
  EAX = (pop32());
  /* 101296e3 ret  */
  ESPCHK(0x101296ccu, _esp0);
  ESP += 4; return;
L_101296e4:;
  /* 101296e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101296e6 ret  */
  ESPCHK(0x101296ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x101296e7 (141 bytes, 64 insns) */
void f_101296e7(void) {
  FTRACE(0x101296e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101296e7 push ebp */
  push32((uint32_t)(EBP));
  /* 101296e8 mov ebp, esp */
  EBP = (ESP);
  /* 101296ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101296ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101296f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101296f1 push esi */
  push32((uint32_t)(ESI));
  /* 101296f2 push edi */
  push32((uint32_t)(EDI));
  /* 101296f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101296f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101296f8 pop ebx */
  EBX = (pop32());
  /* 101296f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101296fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101296fd mov ecx, ebx */
  ECX = (EBX);
  /* 101296ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10129706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1012970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1012970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10129711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10129715 mov ecx, edx */
  ECX = (EDX);
  /* 10129717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10129719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012971b not esi */
  ESI = (~(ESI));
L_1012971d:;
  /* 1012971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012971f mov ecx, eax */
  ECX = (EAX);
  /* 10129721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10129723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10129726 mov ecx, edx */
  ECX = (EDX);
  /* 10129728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1012972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1012972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1012972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10129732 mov ecx, ebx */
  ECX = (EBX);
  /* 10129734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10129739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1012973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1012973f jne 0x1012971d */
  if (!C.zf) goto L_1012971d;
  /* 10129741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10129744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10129746 pop ebx */
  EBX = (pop32());
  /* 10129747 mov esi, edi */
  ESI = (EDI);
  /* 10129749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1012974b pop ecx */
  ECX = (pop32());
  /* 1012974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1012974f:;
  /* 1012974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129751 jl 0x10129762 */
  if ((C.sf!=C.of)) goto L_10129762;
  /* 10129753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129756 mov eax, ecx */
  EAX = (ECX);
  /* 10129758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1012975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10129760 jmp 0x10129769 */
  goto L_10129769;
L_10129762:;
  /* 10129762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10129769:;
  /* 10129769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1012976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012976d jns 0x1012974f */
  if (!C.sf) goto L_1012974f;
  /* 1012976f pop edi */
  EDI = (pop32());
  /* 10129770 pop esi */
  ESI = (pop32());
  /* 10129771 pop ebx */
  EBX = (pop32());
  /* 10129772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129773 ret  */
  ESPCHK(0x101296e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10129774 (364 bytes, 138 insns) */
void f_10129774(void) {
  FTRACE(0x10129774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129774 push ebp */
  push32((uint32_t)(EBP));
  /* 10129775 mov ebp, esp */
  EBP = (ESP);
  /* 10129777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012977d push ebx */
  push32((uint32_t)(EBX));
  /* 1012977e push esi */
  push32((uint32_t)(ESI));
  /* 1012977f push edi */
  push32((uint32_t)(EDI));
  /* 10129780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10129784 mov ebx, ecx */
  EBX = (ECX);
  /* 10129786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1012978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1012978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10129792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10129795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10129798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1012979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1012979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101297a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101297aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101297ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101297b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101297b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101297b9 jne 0x101297e1 */
  if (!C.zf) goto L_101297e1;
  /* 101297bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101297be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101297c0 push eax */
  push32((uint32_t)(EAX));
  /* 101297c1 call 0x101296cc */
  push32(0x101297c6u); f_101296cc();
  /* 101297c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101297c8 pop ecx */
  ECX = (pop32());
  /* 101297c9 jne 0x101298a0 */
  if (!C.zf) goto L_101298a0;
  /* 101297cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101297d2 push eax */
  push32((uint32_t)(EAX));
  /* 101297d3 call 0x101296c0 */
  push32(0x101297d8u); f_101296c0();
  /* 101297d8 pop ecx */
  ECX = (pop32());
L_101297d9:;
  /* 101297d9 push 2 */
  push32((uint32_t)(0x2u));
L_101297db:;
  /* 101297db pop eax */
  EAX = (pop32());
  /* 101297dc jmp 0x101298a2 */
  goto L_101298a2;
L_101297e1:;
  /* 101297e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101297e4 push eax */
  push32((uint32_t)(EAX));
  /* 101297e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101297e8 push eax */
  push32((uint32_t)(EAX));
  /* 101297e9 call 0x101296a5 */
  push32(0x101297eeu); f_101296a5();
  /* 101297ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101297f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101297f4 push eax */
  push32((uint32_t)(EAX));
  /* 101297f5 call 0x10129619 */
  push32(0x101297fau); f_10129619();
  /* 101297fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101297fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101297ff je 0x10129802 */
  if (C.zf) goto L_10129802;
  /* 10129801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10129802:;
  /* 10129802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10129805 mov ecx, eax */
  ECX = (EAX);
  /* 10129807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012980c jge 0x1012981a */
  if ((C.sf==C.of)) goto L_1012981a;
  /* 1012980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129811 push eax */
  push32((uint32_t)(EAX));
  /* 10129812 call 0x101296c0 */
  push32(0x10129817u); f_101296c0();
  /* 10129817 pop ecx */
  ECX = (pop32());
  /* 10129818 jmp 0x10129856 */
  goto L_10129856;
L_1012981a:;
  /* 1012981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012981c jg 0x1012985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1012985d;
  /* 1012981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129820 mov esi, eax */
  ESI = (EAX);
  /* 10129822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10129825 push eax */
  push32((uint32_t)(EAX));
  /* 10129826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129829 push eax */
  push32((uint32_t)(EAX));
  /* 1012982a call 0x101296a5 */
  push32(0x1012982fu); f_101296a5();
  /* 1012982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129832 push esi */
  push32((uint32_t)(ESI));
  /* 10129833 push eax */
  push32((uint32_t)(EAX));
  /* 10129834 call 0x101296e7 */
  push32(0x10129839u); f_101296e7();
  /* 10129839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1012983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1012983f push eax */
  push32((uint32_t)(EAX));
  /* 10129840 call 0x10129619 */
  push32(0x10129845u); f_10129619();
  /* 10129845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10129848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10129849 push eax */
  push32((uint32_t)(EAX));
  /* 1012984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1012984d push eax */
  push32((uint32_t)(EAX));
  /* 1012984e call 0x101296e7 */
  push32(0x10129853u); f_101296e7();
  /* 10129853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10129856:;
  /* 10129856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10129858 jmp 0x101297d9 */
  goto L_101297d9;
L_1012985d:;
  /* 1012985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012985f jl 0x10129889 */
  if ((C.sf!=C.of)) goto L_10129889;
  /* 10129861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129864 push eax */
  push32((uint32_t)(EAX));
  /* 10129865 call 0x101296c0 */
  push32(0x1012986au); f_101296c0();
  /* 1012986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1012986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10129871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129874 push eax */
  push32((uint32_t)(EAX));
  /* 10129875 call 0x101296e7 */
  push32(0x1012987au); f_101296e7();
  /* 1012987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1012987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10129880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10129884 jmp 0x101297db */
  goto L_101297db;
L_10129889:;
  /* 10129889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1012988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1012988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10129893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129896 push eax */
  push32((uint32_t)(EAX));
  /* 10129897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129899 call 0x101296e7 */
  push32(0x1012989eu); f_101296e7();
  /* 1012989e pop ecx */
  ECX = (pop32());
  /* 1012989f pop ecx */
  ECX = (pop32());
L_101298a0:;
  /* 101298a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101298a2:;
  /* 101298a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101298a4 pop ecx */
  ECX = (pop32());
  /* 101298a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101298a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101298ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101298ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101298b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101298b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101298b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101298ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101298bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101298bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101298c2 jne 0x101298d1 */
  if (!C.zf) goto L_101298d1;
  /* 101298c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101298c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101298ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101298cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101298cf jmp 0x101298db */
  goto L_101298db;
L_101298d1:;
  /* 101298d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101298d4 jne 0x101298db */
  if (!C.zf) goto L_101298db;
  /* 101298d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101298d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101298db:;
  /* 101298db pop edi */
  EDI = (pop32());
  /* 101298dc pop esi */
  ESI = (pop32());
  /* 101298dd pop ebx */
  EBX = (pop32());
  /* 101298de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101298df ret  */
  ESPCHK(0x10129774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x101298e0 (22 bytes, 6 insns) */
void f_101298e0(void) {
  FTRACE(0x101298e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101298e0 push 0x10130c10 */
  push32((uint32_t)(0x10130c10u));
  /* 101298e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101298e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101298ed call 0x10129774 */
  push32(0x101298f2u); f_10129774();
  /* 101298f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101298f5 ret  */
  ESPCHK(0x101298e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x101298f6 (22 bytes, 6 insns) */
void f_101298f6(void) {
  FTRACE(0x101298f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101298f6 push 0x10130c28 */
  push32((uint32_t)(0x10130c28u));
  /* 101298fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101298ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10129903 call 0x10129774 */
  push32(0x10129908u); f_10129774();
  /* 10129908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012990b ret  */
  ESPCHK(0x101298f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1012990c (45 bytes, 21 insns) */
void f_1012990c(void) {
  FTRACE(0x1012990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012990c push ebp */
  push32((uint32_t)(EBP));
  /* 1012990d mov ebp, esp */
  EBP = (ESP);
  /* 1012990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10129914 push eax */
  push32((uint32_t)(EAX));
  /* 10129915 push eax */
  push32((uint32_t)(EAX));
  /* 10129916 push eax */
  push32((uint32_t)(EAX));
  /* 10129917 push eax */
  push32((uint32_t)(EAX));
  /* 10129918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1012991e push eax */
  push32((uint32_t)(EAX));
  /* 1012991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10129922 push eax */
  push32((uint32_t)(EAX));
  /* 10129923 call 0x1012c7b6 */
  push32(0x10129928u); f_1012c7b6();
  /* 10129928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1012992e push eax */
  push32((uint32_t)(EAX));
  /* 1012992f call 0x101298e0 */
  push32(0x10129934u); f_101298e0();
  /* 10129934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10129937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129938 ret  */
  ESPCHK(0x1012990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10129939 (45 bytes, 21 insns) */
void f_10129939(void) {
  FTRACE(0x10129939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129939 push ebp */
  push32((uint32_t)(EBP));
  /* 1012993a mov ebp, esp */
  EBP = (ESP);
  /* 1012993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10129941 push eax */
  push32((uint32_t)(EAX));
  /* 10129942 push eax */
  push32((uint32_t)(EAX));
  /* 10129943 push eax */
  push32((uint32_t)(EAX));
  /* 10129944 push eax */
  push32((uint32_t)(EAX));
  /* 10129945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10129948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1012994b push eax */
  push32((uint32_t)(EAX));
  /* 1012994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1012994f push eax */
  push32((uint32_t)(EAX));
  /* 10129950 call 0x1012c7b6 */
  push32(0x10129955u); f_1012c7b6();
  /* 10129955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10129958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1012995b push eax */
  push32((uint32_t)(EAX));
  /* 1012995c call 0x101298f6 */
  push32(0x10129961u); f_101298f6();
  /* 10129961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10129964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129965 ret  */
  ESPCHK(0x10129939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10129966 (119 bytes, 57 insns) */
void f_10129966(void) {
  FTRACE(0x10129966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129966 push ebp */
  push32((uint32_t)(EBP));
  /* 10129967 mov ebp, esp */
  EBP = (ESP);
  /* 10129969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012996c push ebx */
  push32((uint32_t)(EBX));
  /* 1012996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10129970 push esi */
  push32((uint32_t)(ESI));
  /* 10129971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10129974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10129977 push edi */
  push32((uint32_t)(EDI));
  /* 10129978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1012997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1012997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10129980 mov eax, edi */
  EAX = (EDI);
  /* 10129982 jle 0x101299a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101299a3;
  /* 10129984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10129987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10129989:;
  /* 10129989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1012998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012998d je 0x10129995 */
  if (C.zf) goto L_10129995;
  /* 1012998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10129992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10129993 jmp 0x10129998 */
  goto L_10129998;
L_10129995:;
  /* 10129995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10129997 pop edx */
  EDX = (pop32());
L_10129998:;
  /* 10129998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1012999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1012999e jne 0x10129989 */
  if (!C.zf) goto L_10129989;
  /* 101299a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101299a3:;
  /* 101299a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101299a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101299a8 jl 0x101299bc */
  if ((C.sf!=C.of)) goto L_101299bc;
  /* 101299aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101299ad jl 0x101299bc */
  if ((C.sf!=C.of)) goto L_101299bc;
L_101299af:;
  /* 101299af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101299b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101299b3 jne 0x101299ba */
  if (!C.zf) goto L_101299ba;
  /* 101299b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101299b8 jmp 0x101299af */
  goto L_101299af;
L_101299ba:;
  /* 101299ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101299bc:;
  /* 101299bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101299bf jne 0x101299c6 */
  if (!C.zf) goto L_101299c6;
  /* 101299c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101299c4 jmp 0x101299d8 */
  goto L_101299d8;
L_101299c6:;
  /* 101299c6 push edi */
  push32((uint32_t)(EDI));
  /* 101299c7 call 0x10129040 */
  push32(0x101299ccu); f_10129040();
  /* 101299cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101299cd push eax */
  push32((uint32_t)(EAX));
  /* 101299ce push edi */
  push32((uint32_t)(EDI));
  /* 101299cf push esi */
  push32((uint32_t)(ESI));
  /* 101299d0 call 0x10129c40 */
  push32(0x101299d5u); f_10129c40();
  /* 101299d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101299d8:;
  /* 101299d8 pop edi */
  EDI = (pop32());
  /* 101299d9 pop esi */
  ESI = (pop32());
  /* 101299da pop ebx */
  EBX = (pop32());
  /* 101299db pop ebp */
  EBP = (pop32());
  /* 101299dc ret  */
  ESPCHK(0x10129966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x101299dd (92 bytes, 41 insns) */
void f_101299dd(void) {
  FTRACE(0x101299ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101299dd push ebp */
  push32((uint32_t)(EBP));
  /* 101299de mov ebp, esp */
  EBP = (ESP);
  /* 101299e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101299e3 push esi */
  push32((uint32_t)(ESI));
  /* 101299e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101299e7 push edi */
  push32((uint32_t)(EDI));
  /* 101299e8 push eax */
  push32((uint32_t)(EAX));
  /* 101299e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101299ec push eax */
  push32((uint32_t)(EAX));
  /* 101299ed call 0x10129a39 */
  push32(0x101299f2u); f_10129a39();
  /* 101299f2 pop ecx */
  ECX = (pop32());
  /* 101299f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101299f6 pop ecx */
  ECX = (pop32());
  /* 101299f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101299fa push eax */
  push32((uint32_t)(EAX));
  /* 101299fb push 0 */
  push32((uint32_t)(0x0u));
  /* 101299fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101299ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129a02 mov edi, esp */
  EDI = (ESP);
  /* 10129a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10129a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10129a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10129a08 call 0x1012cc87 */
  push32(0x10129a0du); f_1012cc87();
  /* 10129a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10129a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10129a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10129a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10129a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10129a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10129a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10129a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10129a26 push eax */
  push32((uint32_t)(EAX));
  /* 10129a27 push edi */
  push32((uint32_t)(EDI));
  /* 10129a28 call 0x10129af0 */
  push32(0x10129a2du); f_10129af0();
  /* 10129a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10129a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10129a33 mov eax, esi */
  EAX = (ESI);
  /* 10129a35 pop edi */
  EDI = (pop32());
  /* 10129a36 pop esi */
  ESI = (pop32());
  /* 10129a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129a38 ret  */
  ESPCHK(0x101299ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10129a39 (182 bytes, 70 insns) */
void f_10129a39(void) {
  FTRACE(0x10129a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10129a3a mov ebp, esp */
  EBP = (ESP);
  /* 10129a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10129a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10129a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10129a41 push esi */
  push32((uint32_t)(ESI));
  /* 10129a42 push edi */
  push32((uint32_t)(EDI));
  /* 10129a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10129a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10129a4c mov ecx, eax */
  ECX = (EAX);
  /* 10129a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10129a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10129a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10129a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10129a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10129a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10129a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10129a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10129a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10129a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10129a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10129a72 je 0x10129a87 */
  if (C.zf) goto L_10129a87;
  /* 10129a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129a76 je 0x10129a80 */
  if (C.zf) goto L_10129a80;
  /* 10129a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10129a7e jmp 0x10129aa8 */
  goto L_10129aa8;
L_10129a80:;
  /* 10129a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10129a85 jmp 0x10129aa8 */
  goto L_10129aa8;
L_10129a87:;
  /* 10129a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10129a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129a8b jne 0x10129a9f */
  if (!C.zf) goto L_10129a9f;
  /* 10129a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129a8f jne 0x10129a9f */
  if (!C.zf) goto L_10129a9f;
  /* 10129a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10129a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10129a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10129a9d jmp 0x10129aea */
  goto L_10129aea;
L_10129a9f:;
  /* 10129a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10129aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10129aa8:;
  /* 10129aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10129aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10129aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10129ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10129ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10129ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10129abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10129abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10129ac0:;
  /* 10129ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10129ac2 jne 0x10129ae1 */
  if (!C.zf) goto L_10129ae1;
  /* 10129ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10129ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10129aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10129acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10129acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10129ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10129ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10129ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129add mov ecx, ebx */
  ECX = (EBX);
  /* 10129adf jmp 0x10129ac0 */
  goto L_10129ac0;
L_10129ae1:;
  /* 10129ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10129ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10129ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10129aea:;
  /* 10129aea pop edi */
  EDI = (pop32());
  /* 10129aeb pop esi */
  ESI = (pop32());
  /* 10129aec pop ebx */
  EBX = (pop32());
  /* 10129aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129aee ret  */
  ESPCHK(0x10129a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10129af0 (7 bytes, 3 insns) */
void f_10129af0(void) {
  FTRACE(0x10129af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129af0 push edi */
  push32((uint32_t)(EDI));
  /* 10129af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10129af5 jmp 0x10129b61 */
  jmp_ind(0x10129b61u); return;
}

/* FUN_10009b00 @ 0x10129b00 (224 bytes, 84 insns) */
void f_10129b00(void) {
  FTRACE(0x10129b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10129b04 push edi */
  push32((uint32_t)(EDI));
  /* 10129b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10129b0b je 0x10129b1c */
  if (C.zf) goto L_10129b1c;
L_10129b0d:;
  /* 10129b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10129b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10129b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10129b12 je 0x10129b4f */
  if (C.zf) goto L_10129b4f;
  /* 10129b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10129b1a jne 0x10129b0d */
  if (!C.zf) goto L_10129b0d;
L_10129b1c:;
  /* 10129b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10129b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10129b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10129b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10129b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10129b32 je 0x10129b1c */
  if (C.zf) goto L_10129b1c;
  /* 10129b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10129b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10129b39 je 0x10129b5e */
  if (C.zf) goto L_10129b5e;
  /* 10129b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10129b3d je 0x10129b59 */
  if (C.zf) goto L_10129b59;
  /* 10129b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10129b44 je 0x10129b54 */
  if (C.zf) goto L_10129b54;
  /* 10129b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10129b4b je 0x10129b4f */
  if (C.zf) goto L_10129b4f;
  /* 10129b4d jmp 0x10129b1c */
  goto L_10129b1c;
L_10129b4f:;
  /* 10129b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10129b52 jmp 0x10129b61 */
  goto L_10129b61;
L_10129b54:;
  /* 10129b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10129b57 jmp 0x10129b61 */
  goto L_10129b61;
L_10129b59:;
  /* 10129b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10129b5c jmp 0x10129b61 */
  goto L_10129b61;
L_10129b5e:;
  /* 10129b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10129b61:;
  /* 10129b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10129b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10129b6b je 0x10129b86 */
  if (C.zf) goto L_10129b86;
L_10129b6d:;
  /* 10129b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10129b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10129b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10129b72 je 0x10129bd8 */
  if (C.zf) goto L_10129bd8;
  /* 10129b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10129b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10129b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10129b7d jne 0x10129b6d */
  if (!C.zf) goto L_10129b6d;
  /* 10129b7f jmp 0x10129b86 */
  goto L_10129b86;
L_10129b81:;
  /* 10129b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10129b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10129b86:;
  /* 10129b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10129b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10129b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10129b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10129b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10129b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10129b9e je 0x10129b81 */
  if (C.zf) goto L_10129b81;
  /* 10129ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10129ba2 je 0x10129bd8 */
  if (C.zf) goto L_10129bd8;
  /* 10129ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10129ba6 je 0x10129bcf */
  if (C.zf) goto L_10129bcf;
  /* 10129ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10129bae je 0x10129bc2 */
  if (C.zf) goto L_10129bc2;
  /* 10129bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10129bb6 je 0x10129bba */
  if (C.zf) goto L_10129bba;
  /* 10129bb8 jmp 0x10129b81 */
  goto L_10129b81;
L_10129bba:;
  /* 10129bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10129bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129bc0 pop edi */
  EDI = (pop32());
  /* 10129bc1 ret  */
  ESPCHK(0x10129b00u, _esp0);
  ESP += 4; return;
L_10129bc2:;
  /* 10129bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10129bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10129bcd pop edi */
  EDI = (pop32());
  /* 10129bce ret  */
  ESPCHK(0x10129b00u, _esp0);
  ESP += 4; return;
L_10129bcf:;
  /* 10129bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10129bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129bd6 pop edi */
  EDI = (pop32());
  /* 10129bd7 ret  */
  ESPCHK(0x10129b00u, _esp0);
  ESP += 4; return;
L_10129bd8:;
  /* 10129bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10129bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129bde pop edi */
  EDI = (pop32());
  /* 10129bdf ret  */
  ESPCHK(0x10129b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10129be0 (88 bytes, 40 insns) */
void f_10129be0(void) {
  FTRACE(0x10129be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10129be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10129be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10129bea je 0x10129c33 */
  if (C.zf) goto L_10129c33;
  /* 10129bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10129bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10129bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10129bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10129bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129bf8 jb 0x10129c27 */
  if (C.cf) goto L_10129c27;
  /* 10129bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10129bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10129bff je 0x10129c09 */
  if (C.zf) goto L_10129c09;
  /* 10129c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10129c03:;
  /* 10129c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10129c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10129c07 jne 0x10129c03 */
  if (!C.zf) goto L_10129c03;
L_10129c09:;
  /* 10129c09 mov ecx, eax */
  ECX = (EAX);
  /* 10129c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10129c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129c10 mov ecx, eax */
  ECX = (EAX);
  /* 10129c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10129c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129c17 mov ecx, edx */
  ECX = (EDX);
  /* 10129c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10129c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129c1f je 0x10129c27 */
  if (C.zf) goto L_10129c27;
  /* 10129c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10129c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10129c25 je 0x10129c2d */
  if (C.zf) goto L_10129c2d;
L_10129c27:;
  /* 10129c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10129c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10129c2b jne 0x10129c27 */
  if (!C.zf) goto L_10129c27;
L_10129c2d:;
  /* 10129c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10129c31 pop edi */
  EDI = (pop32());
  /* 10129c32 ret  */
  ESPCHK(0x10129be0u, _esp0);
  ESP += 4; return;
L_10129c33:;
  /* 10129c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10129c37 ret  */
  ESPCHK(0x10129be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10129c40 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10129c40(void) {
  FTRACE(0x10129c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10129c41 mov ebp, esp */
  EBP = (ESP);
  /* 10129c43 push edi */
  push32((uint32_t)(EDI));
  /* 10129c44 push esi */
  push32((uint32_t)(ESI));
  /* 10129c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10129c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10129c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10129c4e mov eax, ecx */
  EAX = (ECX);
  /* 10129c50 mov edx, ecx */
  EDX = (ECX);
  /* 10129c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129c56 jbe 0x10129c60 */
  if ((C.cf||C.zf)) goto L_10129c60;
  /* 10129c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129c5a jb 0x10129dd8 */
  if (C.cf) goto L_10129dd8;
L_10129c60:;
  /* 10129c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10129c66 jne 0x10129c7c */
  if (!C.zf) goto L_10129c7c;
  /* 10129c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10129c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129c71 jb 0x10129c9c */
  if (C.cf) goto L_10129c9c;
  /* 10129c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129c75 jmp dword ptr [edx*4 + 0x10129d88] */
  switch (EDX) {
    case 0: goto L_10129d98;
    case 1: goto L_10129da0;
    case 2: goto L_10129dac;
    case 3: goto L_10129dc0;
    default: x86_unimpl("switch@0x10129c75 out of table"); return;
  }
L_10129c7c:;
  /* 10129c7c mov eax, edi */
  EAX = (EDI);
  /* 10129c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10129c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129c86 jb 0x10129c94 */
  if (C.cf) goto L_10129c94;
  /* 10129c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10129c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10129c8d jmp dword ptr [eax*4 + 0x10129ca0] */
  switch (EAX) {
    case 1: goto L_10129cb0;
    case 2: goto L_10129cdc;
    case 3: goto L_10129d00;
    default: x86_unimpl("switch@0x10129c8d out of table"); return;
  }
L_10129c94:;
  /* 10129c94 jmp dword ptr [ecx*4 + 0x10129d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10129d98)))); return;
  /* 10129c9b nop  */
  /* nop */
L_10129c9c:;
  /* 10129c9c jmp dword ptr [ecx*4 + 0x10129d1c] */
  switch (ECX) {
    case 0: goto L_10129d7f;
    case 1: goto L_10129d6c;
    case 2: goto L_10129d64;
    case 3: goto L_10129d5c;
    case 4: goto L_10129d54;
    case 5: goto L_10129d4c;
    case 6: goto L_10129d44;
    case 7: goto L_10129d3c;
    default: x86_unimpl("switch@0x10129c9c out of table"); return;
  }
  /* 10129ca3 nop  */
  /* nop */
L_10129cb0:;
  /* 10129cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129cce jb 0x10129c9c */
  if (C.cf) goto L_10129c9c;
  /* 10129cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129cd2 jmp dword ptr [edx*4 + 0x10129d88] */
  switch (EDX) {
    case 0: goto L_10129d98;
    case 1: goto L_10129da0;
    case 2: goto L_10129dac;
    case 3: goto L_10129dc0;
    default: x86_unimpl("switch@0x10129cd2 out of table"); return;
  }
  /* 10129cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129cdc:;
  /* 10129cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129cf4 jb 0x10129c9c */
  if (C.cf) goto L_10129c9c;
  /* 10129cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129cf8 jmp dword ptr [edx*4 + 0x10129d88] */
  switch (EDX) {
    case 0: goto L_10129d98;
    case 1: goto L_10129da0;
    case 2: goto L_10129dac;
    case 3: goto L_10129dc0;
    default: x86_unimpl("switch@0x10129cf8 out of table"); return;
  }
  /* 10129cff nop  */
  /* nop */
L_10129d00:;
  /* 10129d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10129d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10129d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129d0e jb 0x10129c9c */
  if (C.cf) goto L_10129c9c;
  /* 10129d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129d12 jmp dword ptr [edx*4 + 0x10129d88] */
  switch (EDX) {
    case 0: goto L_10129d98;
    case 1: goto L_10129da0;
    case 2: goto L_10129dac;
    case 3: goto L_10129dc0;
    default: x86_unimpl("switch@0x10129d12 out of table"); return;
  }
  /* 10129d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129d3c:;
  /* 10129d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10129d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10129d44:;
  /* 10129d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10129d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10129d4c:;
  /* 10129d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10129d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10129d54:;
  /* 10129d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10129d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10129d5c:;
  /* 10129d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10129d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10129d64:;
  /* 10129d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10129d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10129d6c:;
  /* 10129d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10129d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10129d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10129d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10129d7f:;
  /* 10129d7f jmp dword ptr [edx*4 + 0x10129d88] */
  switch (EDX) {
    case 0: goto L_10129d98;
    case 1: goto L_10129da0;
    case 2: goto L_10129dac;
    case 3: goto L_10129dc0;
    default: x86_unimpl("switch@0x10129d7f out of table"); return;
  }
  /* 10129d86 mov edi, edi */
  EDI = (EDI);
L_10129d98:;
  /* 10129d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129d9b pop esi */
  ESI = (pop32());
  /* 10129d9c pop edi */
  EDI = (pop32());
  /* 10129d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129d9e ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129d9f nop  */
  /* nop */
L_10129da0:;
  /* 10129da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129da7 pop esi */
  ESI = (pop32());
  /* 10129da8 pop edi */
  EDI = (pop32());
  /* 10129da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129daa ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129dab nop  */
  /* nop */
L_10129dac:;
  /* 10129dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129db9 pop esi */
  ESI = (pop32());
  /* 10129dba pop edi */
  EDI = (pop32());
  /* 10129dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129dbc ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129dc0:;
  /* 10129dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10129dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10129dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129dd3 pop esi */
  ESI = (pop32());
  /* 10129dd4 pop edi */
  EDI = (pop32());
  /* 10129dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129dd6 ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129dd7 nop  */
  /* nop */
L_10129dd8:;
  /* 10129dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10129ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10129de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10129de6 jne 0x10129e0c */
  if (!C.zf) goto L_10129e0c;
  /* 10129de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10129dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129df1 jb 0x10129e00 */
  if (C.cf) goto L_10129e00;
  /* 10129df3 std  */
  C.df=1;
  /* 10129df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129df6 cld  */
  C.df=0;
  /* 10129df7 jmp dword ptr [edx*4 + 0x10129f20] */
  switch (EDX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129df7 out of table"); return;
  }
  /* 10129dfe mov edi, edi */
  EDI = (EDI);
L_10129e00:;
  /* 10129e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10129e02 jmp dword ptr [ecx*4 + 0x10129ed0] */
  switch (ECX) {
    case 0: goto L_10129f17;
    default: x86_unimpl("switch@0x10129e02 out of table"); return;
  }
  /* 10129e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129e0c:;
  /* 10129e0c mov eax, edi */
  EAX = (EDI);
  /* 10129e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10129e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129e16 jb 0x10129e24 */
  if (C.cf) goto L_10129e24;
  /* 10129e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10129e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129e1d jmp dword ptr [eax*4 + 0x10129e28] */
  switch (EAX) {
    case 1: goto L_10129e38;
    case 2: goto L_10129e58;
    case 3: goto L_10129e80;
    default: x86_unimpl("switch@0x10129e1d out of table"); return;
  }
L_10129e24:;
  /* 10129e24 jmp dword ptr [ecx*4 + 0x10129f20] */
  switch (ECX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129e24 out of table"); return;
  }
  /* 10129e2b nop  */
  /* nop */
L_10129e38:;
  /* 10129e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10129e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10129e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129e48 jb 0x10129e00 */
  if (C.cf) goto L_10129e00;
  /* 10129e4a std  */
  C.df=1;
  /* 10129e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129e4d cld  */
  C.df=0;
  /* 10129e4e jmp dword ptr [edx*4 + 0x10129f20] */
  switch (EDX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129e4e out of table"); return;
  }
  /* 10129e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129e58:;
  /* 10129e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129e72 jb 0x10129e00 */
  if (C.cf) goto L_10129e00;
  /* 10129e74 std  */
  C.df=1;
  /* 10129e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129e77 cld  */
  C.df=0;
  /* 10129e78 jmp dword ptr [edx*4 + 0x10129f20] */
  switch (EDX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129e78 out of table"); return;
  }
  /* 10129e7f nop  */
  /* nop */
L_10129e80:;
  /* 10129e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10129e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10129e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10129e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129ea0 jb 0x10129e00 */
  if (C.cf) goto L_10129e00;
  /* 10129ea6 std  */
  C.df=1;
  /* 10129ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10129ea9 cld  */
  C.df=0;
  /* 10129eaa jmp dword ptr [edx*4 + 0x10129f20] */
  switch (EDX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129eaa out of table"); return;
  }
  /* 10129eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10129eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10129eb4");
  /* 10129eb6 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129eb8 fcomp qword ptr [esi - 0x611befee] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611befee)));
  (void)fpu_pop();
  /* 10129ebe adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ec0 in al, dx */
  x86_unimpl("in @ 0x10129ec0");
  /* 10129ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10129ec2 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ec4 hlt  */
  x86_unimpl("hlt @ 0x10129ec4");
  /* 10129ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10129ec6 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ec8 cld  */
  C.df=0;
  /* 10129ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10129eca adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ecc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ece adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10129ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10129ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10129edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10129ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10129ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10129ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10129eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10129ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10129ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10129ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10129efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10129f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10129f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10129f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10129f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10129f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10129f17:;
  /* 10129f17 jmp dword ptr [edx*4 + 0x10129f20] */
  switch (EDX) {
    case 0: goto L_10129f30;
    case 1: goto L_10129f38;
    case 2: goto L_10129f48;
    case 3: goto L_10129f5c;
    default: x86_unimpl("switch@0x10129f17 out of table"); return;
  }
  /* 10129f1e mov edi, edi */
  EDI = (EDI);
L_10129f30:;
  /* 10129f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129f33 pop esi */
  ESI = (pop32());
  /* 10129f34 pop edi */
  EDI = (pop32());
  /* 10129f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129f36 ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129f37 nop  */
  /* nop */
L_10129f38:;
  /* 10129f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129f41 pop esi */
  ESI = (pop32());
  /* 10129f42 pop edi */
  EDI = (pop32());
  /* 10129f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129f44 ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10129f48:;
  /* 10129f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129f57 pop esi */
  ESI = (pop32());
  /* 10129f58 pop edi */
  EDI = (pop32());
  /* 10129f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129f5a ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
  /* 10129f5b nop  */
  /* nop */
L_10129f5c:;
  /* 10129f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10129f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10129f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10129f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10129f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10129f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10129f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10129f71 pop esi */
  ESI = (pop32());
  /* 10129f72 pop edi */
  EDI = (pop32());
  /* 10129f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10129f74 ret  */
  ESPCHK(0x10129c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10129f75 (9 bytes, 4 insns) */
void f_10129f75(void) {
  FTRACE(0x10129f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10129f77 call 0x101270b1 */
  push32(0x10129f7cu); f_101270b1();
  /* 10129f7c pop ecx */
  ECX = (pop32());
  /* 10129f7d ret  */
  ESPCHK(0x10129f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10129f7e (41 bytes, 12 insns) */
void f_10129f7e(void) {
  FTRACE(0x10129f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129f7e push esi */
  push32((uint32_t)(ESI));
  /* 10129f7f mov esi, dword ptr [0x1012e094] */
  ESI = (r32((uint32_t)(0x1012e094)));
  /* 10129f85 push dword ptr [0x10130c84] */
  push32((uint32_t)(r32((uint32_t)(0x10130c84))));
  /* 10129f8b call esi */
  call_ind((uint32_t)(ESI), 0x10129f8du);
  /* 10129f8d push dword ptr [0x10130c74] */
  push32((uint32_t)(r32((uint32_t)(0x10130c74))));
  /* 10129f93 call esi */
  call_ind((uint32_t)(ESI), 0x10129f95u);
  /* 10129f95 push dword ptr [0x10130c64] */
  push32((uint32_t)(r32((uint32_t)(0x10130c64))));
  /* 10129f9b call esi */
  call_ind((uint32_t)(ESI), 0x10129f9du);
  /* 10129f9d push dword ptr [0x10130c44] */
  push32((uint32_t)(r32((uint32_t)(0x10130c44))));
  /* 10129fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10129fa5u);
  /* 10129fa5 pop esi */
  ESI = (pop32());
  /* 10129fa6 ret  */
  ESPCHK(0x10129f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10129fa7 (108 bytes, 34 insns) */
void f_10129fa7(void) {
  FTRACE(0x10129fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10129fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10129fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10129fa9 mov edi, dword ptr [0x1012e050] */
  EDI = (r32((uint32_t)(0x1012e050)));
  /* 10129faf mov esi, 0x10130c40 */
  ESI = (0x10130c40u);
L_10129fb4:;
  /* 10129fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10129fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10129fb8 je 0x10129fe5 */
  if (C.zf) goto L_10129fe5;
  /* 10129fba cmp esi, 0x10130c84 */
  { uint32_t _a=(ESI),_b=(0x10130c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129fc0 je 0x10129fe5 */
  if (C.zf) goto L_10129fe5;
  /* 10129fc2 cmp esi, 0x10130c74 */
  { uint32_t _a=(ESI),_b=(0x10130c74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129fc8 je 0x10129fe5 */
  if (C.zf) goto L_10129fe5;
  /* 10129fca cmp esi, 0x10130c64 */
  { uint32_t _a=(ESI),_b=(0x10130c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129fd0 je 0x10129fe5 */
  if (C.zf) goto L_10129fe5;
  /* 10129fd2 cmp esi, 0x10130c44 */
  { uint32_t _a=(ESI),_b=(0x10130c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129fd8 je 0x10129fe5 */
  if (C.zf) goto L_10129fe5;
  /* 10129fda push eax */
  push32((uint32_t)(EAX));
  /* 10129fdb call edi */
  call_ind((uint32_t)(EDI), 0x10129fddu);
  /* 10129fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10129fdf call 0x1012a1c6 */
  push32(0x10129fe4u); f_1012a1c6();
  /* 10129fe4 pop ecx */
  ECX = (pop32());
L_10129fe5:;
  /* 10129fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10129fe8 cmp esi, 0x10130d00 */
  { uint32_t _a=(ESI),_b=(0x10130d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10129fee jl 0x10129fb4 */
  if ((C.sf!=C.of)) goto L_10129fb4;
  /* 10129ff0 push dword ptr [0x10130c64] */
  push32((uint32_t)(r32((uint32_t)(0x10130c64))));
  /* 10129ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10129ff8u);
  /* 10129ff8 push dword ptr [0x10130c74] */
  push32((uint32_t)(r32((uint32_t)(0x10130c74))));
  /* 10129ffe call edi */
  call_ind((uint32_t)(EDI), 0x1012a000u);
  /* 1012a000 push dword ptr [0x10130c84] */
  push32((uint32_t)(r32((uint32_t)(0x10130c84))));
  /* 1012a006 call edi */
  call_ind((uint32_t)(EDI), 0x1012a008u);
  /* 1012a008 push dword ptr [0x10130c44] */
  push32((uint32_t)(r32((uint32_t)(0x10130c44))));
  /* 1012a00e call edi */
  call_ind((uint32_t)(EDI), 0x1012a010u);
  /* 1012a010 pop edi */
  EDI = (pop32());
  /* 1012a011 pop esi */
  ESI = (pop32());
  /* 1012a012 ret  */
  ESPCHK(0x10129fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1012a013 (97 bytes, 37 insns) */
void f_1012a013(void) {
  FTRACE(0x1012a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a014 mov ebp, esp */
  EBP = (ESP);
  /* 1012a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a019 push esi */
  push32((uint32_t)(ESI));
  /* 1012a01a cmp dword ptr [eax*4 + 0x10130c40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10130c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a022 lea esi, [eax*4 + 0x10130c40] */
  ESI = ((uint32_t)(EAX*4 + 0x10130c40));
  /* 1012a029 jne 0x1012a069 */
  if (!C.zf) goto L_1012a069;
  /* 1012a02b push edi */
  push32((uint32_t)(EDI));
  /* 1012a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1012a02e call 0x1012a2af */
  push32(0x1012a033u); f_1012a2af();
  /* 1012a033 mov edi, eax */
  EDI = (EAX);
  /* 1012a035 pop ecx */
  ECX = (pop32());
  /* 1012a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012a038 jne 0x1012a042 */
  if (!C.zf) goto L_1012a042;
  /* 1012a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1012a03c call 0x101270b1 */
  push32(0x1012a041u); f_101270b1();
  /* 1012a041 pop ecx */
  ECX = (pop32());
L_1012a042:;
  /* 1012a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1012a044 call 0x1012a013 */
  push32(0x1012a049u); f_1012a013();
  /* 1012a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a04c pop ecx */
  ECX = (pop32());
  /* 1012a04d push edi */
  push32((uint32_t)(EDI));
  /* 1012a04e jne 0x1012a05a */
  if (!C.zf) goto L_1012a05a;
  /* 1012a050 call dword ptr [0x1012e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e094))), 0x1012a056u);
  /* 1012a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1012a058 jmp 0x1012a060 */
  goto L_1012a060;
L_1012a05a:;
  /* 1012a05a call 0x1012a1c6 */
  push32(0x1012a05fu); f_1012a1c6();
  /* 1012a05f pop ecx */
  ECX = (pop32());
L_1012a060:;
  /* 1012a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1012a062 call 0x1012a074 */
  push32(0x1012a067u); f_1012a074();
  /* 1012a067 pop ecx */
  ECX = (pop32());
  /* 1012a068 pop edi */
  EDI = (pop32());
L_1012a069:;
  /* 1012a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1012a06b call dword ptr [0x1012e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e00c))), 0x1012a071u);
  /* 1012a071 pop esi */
  ESI = (pop32());
  /* 1012a072 pop ebp */
  EBP = (pop32());
  /* 1012a073 ret  */
  ESPCHK(0x1012a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1012a074 (21 bytes, 7 insns) */
void f_1012a074(void) {
  FTRACE(0x1012a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a075 mov ebp, esp */
  EBP = (ESP);
  /* 1012a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a07a push dword ptr [eax*4 + 0x10130c40] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10130c40))));
  /* 1012a081 call dword ptr [0x1012e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e008))), 0x1012a087u);
  /* 1012a087 pop ebp */
  EBP = (pop32());
  /* 1012a088 ret  */
  ESPCHK(0x1012a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1012a089 (289 bytes, 98 insns) */
void f_1012a089(void) {
  FTRACE(0x1012a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a08a mov ebp, esp */
  EBP = (ESP);
  /* 1012a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1012a08e push 0x1012e4d0 */
  push32((uint32_t)(0x1012e4d0u));
  /* 1012a093 push 0x1012d030 */
  push32((uint32_t)(0x1012d030u));
  /* 1012a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1012a09e push eax */
  push32((uint32_t)(EAX));
  /* 1012a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1012a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1012a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1012a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1012a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1012a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a0bc ja 0x1012a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1012a0d2;
  /* 1012a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a0c2 jne 0x1012a0c7 */
  if (!C.zf) goto L_1012a0c7;
  /* 1012a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012a0c6 pop esi */
  ESI = (pop32());
L_1012a0c7:;
  /* 1012a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1012a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1012a0d0 jmp 0x1012a0d4 */
  goto L_1012a0d4;
L_1012a0d2:;
  /* 1012a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1012a0d4:;
  /* 1012a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1012a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a0da ja 0x1012a188 */
  if ((!C.cf&&!C.zf)) goto L_1012a188;
  /* 1012a0e0 mov eax, dword ptr [0x10137c48] */
  EAX = (r32((uint32_t)(0x10137c48)));
  /* 1012a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a0e8 jne 0x1012a12b */
  if (!C.zf) goto L_1012a12b;
  /* 1012a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1012a0ed cmp edi, dword ptr [0x101369f0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x101369f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a0f3 ja 0x1012a171 */
  if ((!C.cf&&!C.zf)) goto L_1012a171;
  /* 1012a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a0f7 call 0x1012a013 */
  push32(0x1012a0fcu); f_1012a013();
  /* 1012a0fc pop ecx */
  ECX = (pop32());
  /* 1012a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1012a100 push edi */
  push32((uint32_t)(EDI));
  /* 1012a101 call 0x1012b29b */
  push32(0x1012a106u); f_1012b29b();
  /* 1012a106 pop ecx */
  ECX = (pop32());
  /* 1012a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1012a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a10e call 0x1012a122 */
  push32(0x1012a113u); f_1012a122();
  /* 1012a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a116 je 0x1012a176 */
  if (C.zf) goto L_1012a176;
  /* 1012a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1012a11b jmp 0x1012a165 */
  goto L_1012a165;
  /* 1012a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a124 call 0x1012a074 */
  push32(0x1012a129u); f_1012a074();
  /* 1012a129 pop ecx */
  ECX = (pop32());
  /* 1012a12a ret  */
  ESPCHK(0x1012a089u, _esp0);
  ESP += 4; return;
L_1012a12b:;
  /* 1012a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a12e jne 0x1012a171 */
  if (!C.zf) goto L_1012a171;
  /* 1012a130 cmp esi, dword ptr [0x10132ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10132ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a136 ja 0x1012a171 */
  if ((!C.cf&&!C.zf)) goto L_1012a171;
  /* 1012a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a13a call 0x1012a013 */
  push32(0x1012a13fu); f_1012a013();
  /* 1012a13f pop ecx */
  ECX = (pop32());
  /* 1012a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1012a147 mov eax, esi */
  EAX = (ESI);
  /* 1012a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1012a14c push eax */
  push32((uint32_t)(EAX));
  /* 1012a14d call 0x1012ba48 */
  push32(0x1012a152u); f_1012ba48();
  /* 1012a152 pop ecx */
  ECX = (pop32());
  /* 1012a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1012a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a15a call 0x1012a1ab */
  push32(0x1012a15fu); f_1012a1ab();
  /* 1012a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a162 je 0x1012a176 */
  if (C.zf) goto L_1012a176;
  /* 1012a164 push esi */
  push32((uint32_t)(ESI));
L_1012a165:;
  /* 1012a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1012a169 call 0x10129be0 */
  push32(0x1012a16eu); f_10129be0();
  /* 1012a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012a171:;
  /* 1012a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a174 jne 0x1012a1b4 */
  if (!C.zf) { jmp_ind(0x1012a1b4u); return; }
L_1012a176:;
  /* 1012a176 push esi */
  push32((uint32_t)(ESI));
  /* 1012a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1012a179 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012a17f call dword ptr [0x1012e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e098))), 0x1012a185u);
  /* 1012a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1012a188:;
  /* 1012a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a18b jne 0x1012a1b4 */
  if (!C.zf) { jmp_ind(0x1012a1b4u); return; }
  /* 1012a18d cmp dword ptr [0x10136890], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10136890))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a193 je 0x1012a1b4 */
  if (C.zf) { jmp_ind(0x1012a1b4u); return; }
  /* 1012a195 push esi */
  push32((uint32_t)(ESI));
  /* 1012a196 call 0x1012cf1a */
  push32(0x1012a19bu); f_1012cf1a();
  /* 1012a19b pop ecx */
  ECX = (pop32());
  /* 1012a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a19e jne 0x1012a0d4 */
  if (!C.zf) goto L_1012a0d4;
  /* 1012a1a4 jmp 0x1012a1b7 */
  jmp_ind(0x1012a1b7u); return;
  /* 1012a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1012a122 (9 bytes, 4 insns) */
void f_1012a122(void) {
  FTRACE(0x1012a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a124 call 0x1012a074 */
  push32(0x1012a129u); f_1012a074();
  /* 1012a129 pop ecx */
  ECX = (pop32());
  /* 1012a12a ret  */
  ESPCHK(0x1012a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1012a1ab (9 bytes, 4 insns) */
void f_1012a1ab(void) {
  FTRACE(0x1012a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a1ad call 0x1012a074 */
  push32(0x1012a1b2u); f_1012a074();
  /* 1012a1b2 pop ecx */
  ECX = (pop32());
  /* 1012a1b3 ret  */
  ESPCHK(0x1012a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1012a1c6 (215 bytes, 75 insns) */
void f_1012a1c6(void) {
  FTRACE(0x1012a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1012a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1012a1cb push 0x1012e4e8 */
  push32((uint32_t)(0x1012e4e8u));
  /* 1012a1d0 push 0x1012d030 */
  push32((uint32_t)(0x1012d030u));
  /* 1012a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1012a1db push eax */
  push32((uint32_t)(EAX));
  /* 1012a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1012a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1012a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1012a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012a1ee je 0x1012a2a0 */
  if (C.zf) { jmp_ind(0x1012a2a0u); return; }
  /* 1012a1f4 mov eax, dword ptr [0x10137c48] */
  EAX = (r32((uint32_t)(0x10137c48)));
  /* 1012a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a1fc jne 0x1012a239 */
  if (!C.zf) goto L_1012a239;
  /* 1012a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a200 call 0x1012a013 */
  push32(0x1012a205u); f_1012a013();
  /* 1012a205 pop ecx */
  ECX = (pop32());
  /* 1012a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a20a push esi */
  push32((uint32_t)(ESI));
  /* 1012a20b call 0x1012af47 */
  push32(0x1012a210u); f_1012af47();
  /* 1012a210 pop ecx */
  ECX = (pop32());
  /* 1012a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1012a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a216 je 0x1012a221 */
  if (C.zf) goto L_1012a221;
  /* 1012a218 push esi */
  push32((uint32_t)(ESI));
  /* 1012a219 push eax */
  push32((uint32_t)(EAX));
  /* 1012a21a call 0x1012af72 */
  push32(0x1012a21fu); f_1012af72();
  /* 1012a21f pop ecx */
  ECX = (pop32());
  /* 1012a220 pop ecx */
  ECX = (pop32());
L_1012a221:;
  /* 1012a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a225 call 0x1012a230 */
  push32(0x1012a22au); f_1012a230();
  /* 1012a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a22e jmp 0x1012a281 */
  goto L_1012a281;
  /* 1012a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a232 call 0x1012a074 */
  push32(0x1012a237u); f_1012a074();
  /* 1012a237 pop ecx */
  ECX = (pop32());
  /* 1012a238 ret  */
  ESPCHK(0x1012a1c6u, _esp0);
  ESP += 4; return;
L_1012a239:;
  /* 1012a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a23c jne 0x1012a291 */
  if (!C.zf) goto L_1012a291;
  /* 1012a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a240 call 0x1012a013 */
  push32(0x1012a245u); f_1012a013();
  /* 1012a245 pop ecx */
  ECX = (pop32());
  /* 1012a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1012a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1012a250 push eax */
  push32((uint32_t)(EAX));
  /* 1012a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1012a254 push eax */
  push32((uint32_t)(EAX));
  /* 1012a255 push esi */
  push32((uint32_t)(ESI));
  /* 1012a256 call 0x1012b9ac */
  push32(0x1012a25bu); f_1012b9ac();
  /* 1012a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1012a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a263 je 0x1012a274 */
  if (C.zf) goto L_1012a274;
  /* 1012a265 push eax */
  push32((uint32_t)(EAX));
  /* 1012a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1012a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1012a26c call 0x1012ba03 */
  push32(0x1012a271u); f_1012ba03();
  /* 1012a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012a274:;
  /* 1012a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a278 call 0x1012a288 */
  push32(0x1012a27du); f_1012a288();
  /* 1012a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1012a281:;
  /* 1012a281 jne 0x1012a2a0 */
  if (!C.zf) { jmp_ind(0x1012a2a0u); return; }
  /* 1012a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012a286 jmp 0x1012a292 */
  goto L_1012a292;
  /* 1012a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a28a call 0x1012a074 */
  push32(0x1012a28fu); f_1012a074();
  /* 1012a28f pop ecx */
  ECX = (pop32());
  /* 1012a290 ret  */
  ESPCHK(0x1012a1c6u, _esp0);
  ESP += 4; return;
L_1012a291:;
  /* 1012a291 push esi */
  push32((uint32_t)(ESI));
L_1012a292:;
  /* 1012a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012a294 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
}

/* FUN_1000a230 @ 0x1012a230 (9 bytes, 4 insns) */
void f_1012a230(void) {
  FTRACE(0x1012a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a232 call 0x1012a074 */
  push32(0x1012a237u); f_1012a074();
  /* 1012a237 pop ecx */
  ECX = (pop32());
  /* 1012a238 ret  */
  ESPCHK(0x1012a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1012a288 (9 bytes, 4 insns) */
void f_1012a288(void) {
  FTRACE(0x1012a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a28a call 0x1012a074 */
  push32(0x1012a28fu); f_1012a074();
  /* 1012a28f pop ecx */
  ECX = (pop32());
  /* 1012a290 ret  */
  ESPCHK(0x1012a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1012a2af (18 bytes, 6 insns) */
void f_1012a2af(void) {
  FTRACE(0x1012a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a2af push dword ptr [0x10136890] */
  push32((uint32_t)(r32((uint32_t)(0x10136890))));
  /* 1012a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1012a2b9 call 0x1012a2c1 */
  push32(0x1012a2beu); f_1012a2c1();
  /* 1012a2be pop ecx */
  ECX = (pop32());
  /* 1012a2bf pop ecx */
  ECX = (pop32());
  /* 1012a2c0 ret  */
  ESPCHK(0x1012a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1012a2c1 (44 bytes, 16 insns) */
void f_1012a2c1(void) {
  FTRACE(0x1012a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a2c6 ja 0x1012a2ea */
  if ((!C.cf&&!C.zf)) goto L_1012a2ea;
L_1012a2c8:;
  /* 1012a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1012a2cc call 0x1012a2ed */
  push32(0x1012a2d1u); f_1012a2ed();
  /* 1012a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a2d3 pop ecx */
  ECX = (pop32());
  /* 1012a2d4 jne 0x1012a2ec */
  if (!C.zf) goto L_1012a2ec;
  /* 1012a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a2da je 0x1012a2ec */
  if (C.zf) goto L_1012a2ec;
  /* 1012a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1012a2e0 call 0x1012cf1a */
  push32(0x1012a2e5u); f_1012cf1a();
  /* 1012a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a2e7 pop ecx */
  ECX = (pop32());
  /* 1012a2e8 jne 0x1012a2c8 */
  if (!C.zf) goto L_1012a2c8;
L_1012a2ea:;
  /* 1012a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012a2ec:;
  /* 1012a2ec ret  */
  ESPCHK(0x1012a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1012a2ed (231 bytes, 81 insns) */
void f_1012a2ed(void) {
  FTRACE(0x1012a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1012a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1012a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1012a2f2 push 0x1012e500 */
  push32((uint32_t)(0x1012e500u));
  /* 1012a2f7 push 0x1012d030 */
  push32((uint32_t)(0x1012d030u));
  /* 1012a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1012a302 push eax */
  push32((uint32_t)(EAX));
  /* 1012a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1012a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1012a30e push esi */
  push32((uint32_t)(ESI));
  /* 1012a30f push edi */
  push32((uint32_t)(EDI));
  /* 1012a310 mov eax, dword ptr [0x10137c48] */
  EAX = (r32((uint32_t)(0x10137c48)));
  /* 1012a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a318 jne 0x1012a35d */
  if (!C.zf) goto L_1012a35d;
  /* 1012a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a31d cmp esi, dword ptr [0x101369f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101369f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a323 ja 0x1012a3bc */
  if ((!C.cf&&!C.zf)) goto L_1012a3bc;
  /* 1012a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a32b call 0x1012a013 */
  push32(0x1012a330u); f_1012a013();
  /* 1012a330 pop ecx */
  ECX = (pop32());
  /* 1012a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a335 push esi */
  push32((uint32_t)(ESI));
  /* 1012a336 call 0x1012b29b */
  push32(0x1012a33bu); f_1012b29b();
  /* 1012a33b pop ecx */
  ECX = (pop32());
  /* 1012a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1012a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a343 call 0x1012a354 */
  push32(0x1012a348u); f_1012a354();
  /* 1012a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1012a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a34d je 0x1012a3bc */
  if (C.zf) goto L_1012a3bc;
  /* 1012a34f jmp 0x1012a3da */
  jmp_ind(0x1012a3dau); return;
  /* 1012a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a356 call 0x1012a074 */
  push32(0x1012a35bu); f_1012a074();
  /* 1012a35b pop ecx */
  ECX = (pop32());
  /* 1012a35c ret  */
  ESPCHK(0x1012a2edu, _esp0);
  ESP += 4; return;
L_1012a35d:;
  /* 1012a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a360 jne 0x1012a3bc */
  if (!C.zf) goto L_1012a3bc;
  /* 1012a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a367 je 0x1012a371 */
  if (C.zf) goto L_1012a371;
  /* 1012a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1012a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1012a36f jmp 0x1012a374 */
  goto L_1012a374;
L_1012a371:;
  /* 1012a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1012a373 pop esi */
  ESI = (pop32());
L_1012a374:;
  /* 1012a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1012a377 cmp esi, dword ptr [0x10132ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10132ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a37d ja 0x1012a3ad */
  if ((!C.cf&&!C.zf)) goto L_1012a3ad;
  /* 1012a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a381 call 0x1012a013 */
  push32(0x1012a386u); f_1012a013();
  /* 1012a386 pop ecx */
  ECX = (pop32());
  /* 1012a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1012a38e mov eax, esi */
  EAX = (ESI);
  /* 1012a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1012a393 push eax */
  push32((uint32_t)(EAX));
  /* 1012a394 call 0x1012ba48 */
  push32(0x1012a399u); f_1012ba48();
  /* 1012a399 pop ecx */
  ECX = (pop32());
  /* 1012a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1012a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a3a1 call 0x1012a3b3 */
  push32(0x1012a3a6u); f_1012a3b3();
  /* 1012a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1012a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a3ab jne 0x1012a3da */
  if (!C.zf) { jmp_ind(0x1012a3dau); return; }
L_1012a3ad:;
  /* 1012a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1012a3ae jmp 0x1012a3cc */
  goto L_1012a3cc;
  /* 1012a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a3b5 call 0x1012a074 */
  push32(0x1012a3bau); f_1012a074();
  /* 1012a3ba pop ecx */
  ECX = (pop32());
  /* 1012a3bb ret  */
  ESPCHK(0x1012a2edu, _esp0);
  ESP += 4; return;
L_1012a3bc:;
  /* 1012a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012a3c1 jne 0x1012a3c6 */
  if (!C.zf) goto L_1012a3c6;
  /* 1012a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012a3c5 pop eax */
  EAX = (pop32());
L_1012a3c6:;
  /* 1012a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1012a3cb push eax */
  push32((uint32_t)(EAX));
L_1012a3cc:;
  /* 1012a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1012a3ce push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
}

/* FUN_1000a354 @ 0x1012a354 (9 bytes, 4 insns) */
void f_1012a354(void) {
  FTRACE(0x1012a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a356 call 0x1012a074 */
  push32(0x1012a35bu); f_1012a074();
  /* 1012a35b pop ecx */
  ECX = (pop32());
  /* 1012a35c ret  */
  ESPCHK(0x1012a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1012a3b3 (9 bytes, 4 insns) */
void f_1012a3b3(void) {
  FTRACE(0x1012a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1012a3b5 call 0x1012a074 */
  push32(0x1012a3bau); f_1012a074();
  /* 1012a3ba pop ecx */
  ECX = (pop32());
  /* 1012a3bb ret  */
  ESPCHK(0x1012a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1012a3e9 (429 bytes, 143 insns) */
void f_1012a3e9(void) {
  FTRACE(0x1012a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1012a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1012a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1012a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1012a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1012a3f4 call 0x1012a013 */
  push32(0x1012a3f9u); f_1012a013();
  /* 1012a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012a3fc call 0x1012a596 */
  push32(0x1012a401u); f_1012a596();
  /* 1012a401 mov ebx, eax */
  EBX = (EAX);
  /* 1012a403 pop ecx */
  ECX = (pop32());
  /* 1012a404 cmp ebx, dword ptr [0x101369f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101369f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a40a pop ecx */
  ECX = (pop32());
  /* 1012a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012a40e jne 0x1012a417 */
  if (!C.zf) goto L_1012a417;
L_1012a410:;
  /* 1012a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012a412 jmp 0x1012a587 */
  goto L_1012a587;
L_1012a417:;
  /* 1012a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012a419 je 0x1012a575 */
  if (C.zf) goto L_1012a575;
  /* 1012a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a421 mov eax, 0x10130d90 */
  EAX = (0x10130d90u);
L_1012a426:;
  /* 1012a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a428 je 0x1012a49e */
  if (C.zf) goto L_1012a49e;
  /* 1012a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012a42e cmp eax, 0x10130e80 */
  { uint32_t _a=(EAX),_b=(0x10130e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a433 jl 0x1012a426 */
  if ((C.sf!=C.of)) goto L_1012a426;
  /* 1012a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1012a438 push eax */
  push32((uint32_t)(EAX));
  /* 1012a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a43a call dword ptr [0x1012e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e09c))), 0x1012a440u);
  /* 1012a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012a442 pop esi */
  ESI = (pop32());
  /* 1012a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a445 jne 0x1012a56c */
  if (!C.zf) goto L_1012a56c;
  /* 1012a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1012a44d and dword ptr [0x10136c24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10136c24)))&(0x0u); w32((uint32_t)(0x10136c24), (_r)); fl_logic(_r,32); }
  /* 1012a454 pop ecx */
  ECX = (pop32());
  /* 1012a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a457 mov edi, 0x10136b20 */
  EDI = (0x10136b20u);
  /* 1012a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1012a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012a462 mov dword ptr [0x101369f4], ebx */
  w32((uint32_t)(0x101369f4), (EBX));
  /* 1012a468 jbe 0x1012a559 */
  if ((C.cf||C.zf)) goto L_1012a559;
  /* 1012a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012a472 je 0x1012a534 */
  if (C.zf) goto L_1012a534;
  /* 1012a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1012a47b:;
  /* 1012a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1012a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012a47f je 0x1012a534 */
  if (C.zf) goto L_1012a534;
  /* 1012a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1012a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1012a48c:;
  /* 1012a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a48e ja 0x1012a528 */
  if ((!C.cf&&!C.zf)) goto L_1012a528;
  /* 1012a494 or byte ptr [eax + 0x10136b21], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x4u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a49c jmp 0x1012a48c */
  goto L_1012a48c;
L_1012a49e:;
  /* 1012a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1012a4a4 pop ecx */
  ECX = (pop32());
  /* 1012a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a4a7 mov edi, 0x10136b20 */
  EDI = (0x10136b20u);
  /* 1012a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1012a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1012a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1012a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012a4b5 lea ebx, [esi + 0x10130da0] */
  EBX = ((uint32_t)(ESI + 0x10130da0));
L_1012a4bb:;
  /* 1012a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1012a4c0 je 0x1012a4ee */
  if (C.zf) goto L_1012a4ee;
L_1012a4c2:;
  /* 1012a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1012a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012a4c7 je 0x1012a4ee */
  if (C.zf) goto L_1012a4ee;
  /* 1012a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1012a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1012a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a4d1 ja 0x1012a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1012a4e7;
  /* 1012a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012a4d6 mov dl, byte ptr [edx + 0x10130d88] */
  DL = (r8((uint32_t)(EDX + 0x10130d88)));
L_1012a4dc:;
  /* 1012a4dc or byte ptr [eax + 0x10136b21], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(DL); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a4e5 jbe 0x1012a4dc */
  if ((C.cf||C.zf)) goto L_1012a4dc;
L_1012a4e7:;
  /* 1012a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012a4ec jne 0x1012a4c2 */
  if (!C.zf) goto L_1012a4c2;
L_1012a4ee:;
  /* 1012a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a4f8 jb 0x1012a4bb */
  if (C.cf) goto L_1012a4bb;
  /* 1012a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a4fd mov dword ptr [0x10136a0c], 1 */
  w32((uint32_t)(0x10136a0c), (0x1u));
  /* 1012a507 push eax */
  push32((uint32_t)(EAX));
  /* 1012a508 mov dword ptr [0x101369f4], eax */
  w32((uint32_t)(0x101369f4), (EAX));
  /* 1012a50d call 0x1012a5e0 */
  push32(0x1012a512u); f_1012a5e0();
  /* 1012a512 lea esi, [esi + 0x10130d94] */
  ESI = ((uint32_t)(ESI + 0x10130d94));
  /* 1012a518 mov edi, 0x10136a00 */
  EDI = (0x10136a00u);
  /* 1012a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012a51f pop ecx */
  ECX = (pop32());
  /* 1012a520 mov dword ptr [0x10136c24], eax */
  w32((uint32_t)(0x10136c24), (EAX));
  /* 1012a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012a526 jmp 0x1012a57a */
  goto L_1012a57a;
L_1012a528:;
  /* 1012a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012a52e jne 0x1012a47b */
  if (!C.zf) goto L_1012a47b;
L_1012a534:;
  /* 1012a534 mov eax, esi */
  EAX = (ESI);
L_1012a536:;
  /* 1012a536 or byte ptr [eax + 0x10136b21], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x8u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a543 jb 0x1012a536 */
  if (C.cf) goto L_1012a536;
  /* 1012a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a546 call 0x1012a5e0 */
  push32(0x1012a54bu); f_1012a5e0();
  /* 1012a54b pop ecx */
  ECX = (pop32());
  /* 1012a54c mov dword ptr [0x10136c24], eax */
  w32((uint32_t)(0x10136c24), (EAX));
  /* 1012a551 mov dword ptr [0x10136a0c], esi */
  w32((uint32_t)(0x10136a0c), (ESI));
  /* 1012a557 jmp 0x1012a560 */
  goto L_1012a560;
L_1012a559:;
  /* 1012a559 and dword ptr [0x10136a0c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10136a0c)))&(0x0u); w32((uint32_t)(0x10136a0c), (_r)); fl_logic(_r,32); }
L_1012a560:;
  /* 1012a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a562 mov edi, 0x10136a00 */
  EDI = (0x10136a00u);
  /* 1012a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a56a jmp 0x1012a57a */
  goto L_1012a57a;
L_1012a56c:;
  /* 1012a56c cmp dword ptr [0x10136830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10136830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a573 je 0x1012a584 */
  if (C.zf) goto L_1012a584;
L_1012a575:;
  /* 1012a575 call 0x1012a613 */
  push32(0x1012a57au); f_1012a613();
L_1012a57a:;
  /* 1012a57a call 0x1012a63c */
  push32(0x1012a57fu); f_1012a63c();
  /* 1012a57f jmp 0x1012a410 */
  goto L_1012a410;
L_1012a584:;
  /* 1012a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1012a587:;
  /* 1012a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1012a589 call 0x1012a074 */
  push32(0x1012a58eu); f_1012a074();
  /* 1012a58e pop ecx */
  ECX = (pop32());
  /* 1012a58f mov eax, esi */
  EAX = (ESI);
  /* 1012a591 pop edi */
  EDI = (pop32());
  /* 1012a592 pop esi */
  ESI = (pop32());
  /* 1012a593 pop ebx */
  EBX = (pop32());
  /* 1012a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a595 ret  */
  ESPCHK(0x1012a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1012a596 (74 bytes, 15 insns) */
void f_1012a596(void) {
  FTRACE(0x1012a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012a59a and dword ptr [0x10136830], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10136830)))&(0x0u); w32((uint32_t)(0x10136830), (_r)); fl_logic(_r,32); }
  /* 1012a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a5a4 jne 0x1012a5b6 */
  if (!C.zf) goto L_1012a5b6;
  /* 1012a5a6 mov dword ptr [0x10136830], 1 */
  w32((uint32_t)(0x10136830), (0x1u));
  /* 1012a5b0 jmp dword ptr [0x1012e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1012e0a4)))); return;
L_1012a5b6:;
  /* 1012a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a5b9 jne 0x1012a5cb */
  if (!C.zf) goto L_1012a5cb;
  /* 1012a5bb mov dword ptr [0x10136830], 1 */
  w32((uint32_t)(0x10136830), (0x1u));
  /* 1012a5c5 jmp dword ptr [0x1012e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1012e0a0)))); return;
L_1012a5cb:;
  /* 1012a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a5ce jne 0x1012a5df */
  if (!C.zf) goto L_1012a5df;
  /* 1012a5d0 mov eax, dword ptr [0x10136868] */
  EAX = (r32((uint32_t)(0x10136868)));
  /* 1012a5d5 mov dword ptr [0x10136830], 1 */
  w32((uint32_t)(0x10136830), (0x1u));
L_1012a5df:;
  /* 1012a5df ret  */
  ESPCHK(0x1012a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1012a5e0 (51 bytes, 19 insns) */
void f_1012a5e0(void) {
  FTRACE(0x1012a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a5e9 je 0x1012a60d */
  if (C.zf) goto L_1012a60d;
  /* 1012a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a5ee je 0x1012a607 */
  if (C.zf) goto L_1012a607;
  /* 1012a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a5f3 je 0x1012a601 */
  if (C.zf) goto L_1012a601;
  /* 1012a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012a5f6 je 0x1012a5fb */
  if (C.zf) goto L_1012a5fb;
  /* 1012a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a5fa ret  */
  ESPCHK(0x1012a5e0u, _esp0);
  ESP += 4; return;
L_1012a5fb:;
  /* 1012a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1012a600 ret  */
  ESPCHK(0x1012a5e0u, _esp0);
  ESP += 4; return;
L_1012a601:;
  /* 1012a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1012a606 ret  */
  ESPCHK(0x1012a5e0u, _esp0);
  ESP += 4; return;
L_1012a607:;
  /* 1012a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1012a60c ret  */
  ESPCHK(0x1012a5e0u, _esp0);
  ESP += 4; return;
L_1012a60d:;
  /* 1012a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1012a612 ret  */
  ESPCHK(0x1012a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1012a613 (41 bytes, 17 insns) */
void f_1012a613(void) {
  FTRACE(0x1012a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a613 push edi */
  push32((uint32_t)(EDI));
  /* 1012a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1012a616 pop ecx */
  ECX = (pop32());
  /* 1012a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a619 mov edi, 0x10136b20 */
  EDI = (0x10136b20u);
  /* 1012a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1012a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a623 mov edi, 0x10136a00 */
  EDI = (0x10136a00u);
  /* 1012a628 mov dword ptr [0x101369f4], eax */
  w32((uint32_t)(0x101369f4), (EAX));
  /* 1012a62d mov dword ptr [0x10136a0c], eax */
  w32((uint32_t)(0x10136a0c), (EAX));
  /* 1012a632 mov dword ptr [0x10136c24], eax */
  w32((uint32_t)(0x10136c24), (EAX));
  /* 1012a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1012a63a pop edi */
  EDI = (pop32());
  /* 1012a63b ret  */
  ESPCHK(0x1012a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1012a63c (389 bytes, 124 insns) */
void f_1012a63c(void) {
  FTRACE(0x1012a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1012a63d mov ebp, esp */
  EBP = (ESP);
  /* 1012a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1012a648 push esi */
  push32((uint32_t)(ESI));
  /* 1012a649 push eax */
  push32((uint32_t)(EAX));
  /* 1012a64a push dword ptr [0x101369f4] */
  push32((uint32_t)(r32((uint32_t)(0x101369f4))));
  /* 1012a650 call dword ptr [0x1012e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e09c))), 0x1012a656u);
  /* 1012a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a659 jne 0x1012a775 */
  if (!C.zf) goto L_1012a775;
  /* 1012a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1012a666:;
  /* 1012a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1012a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a670 jb 0x1012a666 */
  if (C.cf) goto L_1012a666;
  /* 1012a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1012a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1012a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012a67e je 0x1012a6b7 */
  if (C.zf) goto L_1012a6b7;
  /* 1012a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1012a681 push edi */
  push32((uint32_t)(EDI));
  /* 1012a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1012a685:;
  /* 1012a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1012a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1012a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a68d ja 0x1012a6ac */
  if ((!C.cf&&!C.zf)) goto L_1012a6ac;
  /* 1012a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1012a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1012a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1012a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1012a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1012a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1012a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1012a6ac:;
  /* 1012a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1012a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012a6b3 jne 0x1012a685 */
  if (!C.zf) goto L_1012a685;
  /* 1012a6b5 pop edi */
  EDI = (pop32());
  /* 1012a6b6 pop ebx */
  EBX = (pop32());
L_1012a6b7:;
  /* 1012a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1012a6bf push dword ptr [0x10136c24] */
  push32((uint32_t)(r32((uint32_t)(0x10136c24))));
  /* 1012a6c5 push dword ptr [0x101369f4] */
  push32((uint32_t)(r32((uint32_t)(0x101369f4))));
  /* 1012a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1012a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1012a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1012a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1012a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012a6d6 call 0x1012c27d */
  push32(0x1012a6dbu); f_1012c27d();
  /* 1012a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1012a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1012a6e3 push dword ptr [0x101369f4] */
  push32((uint32_t)(r32((uint32_t)(0x101369f4))));
  /* 1012a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1012a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1012a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1012a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1012a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1012a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1012a6f4 push dword ptr [0x10136c24] */
  push32((uint32_t)(r32((uint32_t)(0x10136c24))));
  /* 1012a6fa call 0x1012c3c6 */
  push32(0x1012a6ffu); f_1012c3c6();
  /* 1012a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1012a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1012a707 push dword ptr [0x101369f4] */
  push32((uint32_t)(r32((uint32_t)(0x101369f4))));
  /* 1012a70d push esi */
  push32((uint32_t)(ESI));
  /* 1012a70e push eax */
  push32((uint32_t)(EAX));
  /* 1012a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1012a715 push esi */
  push32((uint32_t)(ESI));
  /* 1012a716 push eax */
  push32((uint32_t)(EAX));
  /* 1012a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1012a71c push dword ptr [0x10136c24] */
  push32((uint32_t)(r32((uint32_t)(0x10136c24))));
  /* 1012a722 call 0x1012c3c6 */
  push32(0x1012a727u); f_1012c3c6();
  /* 1012a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1012a732:;
  /* 1012a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1012a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1012a738 je 0x1012a750 */
  if (C.zf) goto L_1012a750;
  /* 1012a73a or byte ptr [eax + 0x10136b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x10u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1012a748:;
  /* 1012a748 mov byte ptr [eax + 0x10136a20], dl */
  w8((uint32_t)(EAX + 0x10136a20), (DL));
  /* 1012a74e jmp 0x1012a76c */
  goto L_1012a76c;
L_1012a750:;
  /* 1012a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1012a753 je 0x1012a765 */
  if (C.zf) goto L_1012a765;
  /* 1012a755 or byte ptr [eax + 0x10136b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x20u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1012a763 jmp 0x1012a748 */
  goto L_1012a748;
L_1012a765:;
  /* 1012a765 and byte ptr [eax + 0x10136a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136a20)))&(0x0u); w8((uint32_t)(EAX + 0x10136a20), (_r)); fl_logic(_r,8); }
L_1012a76c:;
  /* 1012a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a771 jb 0x1012a732 */
  if (C.cf) goto L_1012a732;
  /* 1012a773 jmp 0x1012a7be */
  goto L_1012a7be;
L_1012a775:;
  /* 1012a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1012a77c:;
  /* 1012a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a77f jb 0x1012a79a */
  if (C.cf) goto L_1012a79a;
  /* 1012a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a784 ja 0x1012a79a */
  if ((!C.cf&&!C.zf)) goto L_1012a79a;
  /* 1012a786 or byte ptr [eax + 0x10136b21], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x10u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a78d mov cl, al */
  CL = (AL);
  /* 1012a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1012a792:;
  /* 1012a792 mov byte ptr [eax + 0x10136a20], cl */
  w8((uint32_t)(EAX + 0x10136a20), (CL));
  /* 1012a798 jmp 0x1012a7b9 */
  goto L_1012a7b9;
L_1012a79a:;
  /* 1012a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a79d jb 0x1012a7b2 */
  if (C.cf) goto L_1012a7b2;
  /* 1012a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a7a2 ja 0x1012a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1012a7b2;
  /* 1012a7a4 or byte ptr [eax + 0x10136b21], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136b21)))|(0x20u); w8((uint32_t)(EAX + 0x10136b21), (_r)); fl_logic(_r,8); }
  /* 1012a7ab mov cl, al */
  CL = (AL);
  /* 1012a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012a7b0 jmp 0x1012a792 */
  goto L_1012a792;
L_1012a7b2:;
  /* 1012a7b2 and byte ptr [eax + 0x10136a20], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10136a20)))&(0x0u); w8((uint32_t)(EAX + 0x10136a20), (_r)); fl_logic(_r,8); }
L_1012a7b9:;
  /* 1012a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a7bc jb 0x1012a77c */
  if (C.cf) goto L_1012a77c;
L_1012a7be:;
  /* 1012a7be pop esi */
  ESI = (pop32());
  /* 1012a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a7c0 ret  */
  ESPCHK(0x1012a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1012a7c1 (28 bytes, 7 insns) */
void f_1012a7c1(void) {
  FTRACE(0x1012a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a7c1 cmp dword ptr [0x10137d68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10137d68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a7c8 jne 0x1012a7dc */
  if (!C.zf) goto L_1012a7dc;
  /* 1012a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1012a7cc call 0x1012a3e9 */
  push32(0x1012a7d1u); f_1012a3e9();
  /* 1012a7d1 pop ecx */
  ECX = (pop32());
  /* 1012a7d2 mov dword ptr [0x10137d68], 1 */
  w32((uint32_t)(0x10137d68), (0x1u));
L_1012a7dc:;
  /* 1012a7dc ret  */
  ESPCHK(0x1012a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1012a7e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1012a7e0(void) {
  FTRACE(0x1012a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1012a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1012a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1012a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1012a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1012a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1012a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a7f6 jbe 0x1012a800 */
  if ((C.cf||C.zf)) goto L_1012a800;
  /* 1012a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a7fa jb 0x1012a978 */
  if (C.cf) goto L_1012a978;
L_1012a800:;
  /* 1012a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1012a806 jne 0x1012a81c */
  if (!C.zf) goto L_1012a81c;
  /* 1012a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1012a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a811 jb 0x1012a83c */
  if (C.cf) goto L_1012a83c;
  /* 1012a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a815 jmp dword ptr [edx*4 + 0x1012a928] */
  switch (EDX) {
    case 0: goto L_1012a938;
    case 1: goto L_1012a940;
    case 2: goto L_1012a94c;
    case 3: goto L_1012a960;
    default: x86_unimpl("switch@0x1012a815 out of table"); return;
  }
L_1012a81c:;
  /* 1012a81c mov eax, edi */
  EAX = (EDI);
  /* 1012a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1012a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a826 jb 0x1012a834 */
  if (C.cf) goto L_1012a834;
  /* 1012a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1012a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a82d jmp dword ptr [eax*4 + 0x1012a840] */
  switch (EAX) {
    case 1: goto L_1012a850;
    case 2: goto L_1012a87c;
    case 3: goto L_1012a8a0;
    default: x86_unimpl("switch@0x1012a82d out of table"); return;
  }
L_1012a834:;
  /* 1012a834 jmp dword ptr [ecx*4 + 0x1012a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1012a938)))); return;
  /* 1012a83b nop  */
  /* nop */
L_1012a83c:;
  /* 1012a83c jmp dword ptr [ecx*4 + 0x1012a8bc] */
  switch (ECX) {
    case 0: goto L_1012a91f;
    case 1: goto L_1012a90c;
    case 2: goto L_1012a904;
    case 3: goto L_1012a8fc;
    case 4: goto L_1012a8f4;
    case 5: goto L_1012a8ec;
    case 6: goto L_1012a8e4;
    case 7: goto L_1012a8dc;
    default: x86_unimpl("switch@0x1012a83c out of table"); return;
  }
  /* 1012a843 nop  */
  /* nop */
L_1012a850:;
  /* 1012a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a86e jb 0x1012a83c */
  if (C.cf) goto L_1012a83c;
  /* 1012a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a872 jmp dword ptr [edx*4 + 0x1012a928] */
  switch (EDX) {
    case 0: goto L_1012a938;
    case 1: goto L_1012a940;
    case 2: goto L_1012a94c;
    case 3: goto L_1012a960;
    default: x86_unimpl("switch@0x1012a872 out of table"); return;
  }
  /* 1012a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012a87c:;
  /* 1012a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a894 jb 0x1012a83c */
  if (C.cf) goto L_1012a83c;
  /* 1012a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a898 jmp dword ptr [edx*4 + 0x1012a928] */
  switch (EDX) {
    case 0: goto L_1012a938;
    case 1: goto L_1012a940;
    case 2: goto L_1012a94c;
    case 3: goto L_1012a960;
    default: x86_unimpl("switch@0x1012a898 out of table"); return;
  }
  /* 1012a89f nop  */
  /* nop */
L_1012a8a0:;
  /* 1012a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a8ae jb 0x1012a83c */
  if (C.cf) goto L_1012a83c;
  /* 1012a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a8b2 jmp dword ptr [edx*4 + 0x1012a928] */
  switch (EDX) {
    case 0: goto L_1012a938;
    case 1: goto L_1012a940;
    case 2: goto L_1012a94c;
    case 3: goto L_1012a960;
    default: x86_unimpl("switch@0x1012a8b2 out of table"); return;
  }
  /* 1012a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012a8dc:;
  /* 1012a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1012a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1012a8e4:;
  /* 1012a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1012a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1012a8ec:;
  /* 1012a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1012a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1012a8f4:;
  /* 1012a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1012a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1012a8fc:;
  /* 1012a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1012a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1012a904:;
  /* 1012a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1012a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1012a90c:;
  /* 1012a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1012a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1012a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1012a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1012a91f:;
  /* 1012a91f jmp dword ptr [edx*4 + 0x1012a928] */
  switch (EDX) {
    case 0: goto L_1012a938;
    case 1: goto L_1012a940;
    case 2: goto L_1012a94c;
    case 3: goto L_1012a960;
    default: x86_unimpl("switch@0x1012a91f out of table"); return;
  }
  /* 1012a926 mov edi, edi */
  EDI = (EDI);
L_1012a938:;
  /* 1012a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a93b pop esi */
  ESI = (pop32());
  /* 1012a93c pop edi */
  EDI = (pop32());
  /* 1012a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a93e ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012a93f nop  */
  /* nop */
L_1012a940:;
  /* 1012a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a947 pop esi */
  ESI = (pop32());
  /* 1012a948 pop edi */
  EDI = (pop32());
  /* 1012a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a94a ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012a94b nop  */
  /* nop */
L_1012a94c:;
  /* 1012a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a959 pop esi */
  ESI = (pop32());
  /* 1012a95a pop edi */
  EDI = (pop32());
  /* 1012a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a95c ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012a960:;
  /* 1012a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012a973 pop esi */
  ESI = (pop32());
  /* 1012a974 pop edi */
  EDI = (pop32());
  /* 1012a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012a976 ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012a977 nop  */
  /* nop */
L_1012a978:;
  /* 1012a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1012a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1012a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1012a986 jne 0x1012a9ac */
  if (!C.zf) goto L_1012a9ac;
  /* 1012a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1012a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a991 jb 0x1012a9a0 */
  if (C.cf) goto L_1012a9a0;
  /* 1012a993 std  */
  C.df=1;
  /* 1012a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a996 cld  */
  C.df=0;
  /* 1012a997 jmp dword ptr [edx*4 + 0x1012aac0] */
  switch (EDX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012a997 out of table"); return;
  }
  /* 1012a99e mov edi, edi */
  EDI = (EDI);
L_1012a9a0:;
  /* 1012a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012a9a2 jmp dword ptr [ecx*4 + 0x1012aa70] */
  switch (ECX) {
    case 0: goto L_1012aab7;
    default: x86_unimpl("switch@0x1012a9a2 out of table"); return;
  }
  /* 1012a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012a9ac:;
  /* 1012a9ac mov eax, edi */
  EAX = (EDI);
  /* 1012a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1012a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a9b6 jb 0x1012a9c4 */
  if (C.cf) goto L_1012a9c4;
  /* 1012a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1012a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012a9bd jmp dword ptr [eax*4 + 0x1012a9c8] */
  switch (EAX) {
    case 1: goto L_1012a9d8;
    case 2: goto L_1012a9f8;
    case 3: goto L_1012aa20;
    default: x86_unimpl("switch@0x1012a9bd out of table"); return;
  }
L_1012a9c4:;
  /* 1012a9c4 jmp dword ptr [ecx*4 + 0x1012aac0] */
  switch (ECX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012a9c4 out of table"); return;
  }
  /* 1012a9cb nop  */
  /* nop */
L_1012a9d8:;
  /* 1012a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1012a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1012a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012a9e8 jb 0x1012a9a0 */
  if (C.cf) goto L_1012a9a0;
  /* 1012a9ea std  */
  C.df=1;
  /* 1012a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012a9ed cld  */
  C.df=0;
  /* 1012a9ee jmp dword ptr [edx*4 + 0x1012aac0] */
  switch (EDX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012a9ee out of table"); return;
  }
  /* 1012a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012a9f8:;
  /* 1012a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1012aa00:;
  /* 1012aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012aa12 jb 0x1012a9a0 */
  if (C.cf) goto L_1012a9a0;
  /* 1012aa14 std  */
  C.df=1;
  /* 1012aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012aa17 cld  */
  C.df=0;
  /* 1012aa18 jmp dword ptr [edx*4 + 0x1012aac0] */
  switch (EDX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012aa18 out of table"); return;
  }
  /* 1012aa1f nop  */
  /* nop */
L_1012aa20:;
  /* 1012aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1012aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012aa40 jb 0x1012a9a0 */
  if (C.cf) goto L_1012a9a0;
  /* 1012aa46 std  */
  C.df=1;
  /* 1012aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1012aa49 cld  */
  C.df=0;
  /* 1012aa4a jmp dword ptr [edx*4 + 0x1012aac0] */
  switch (EDX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012aa4a out of table"); return;
  }
  /* 1012aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1012aa54 je 0x1012aa00 */
  if (C.zf) goto L_1012aa00;
  /* 1012aa56 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa58 jl 0x1012aa04 */
  if ((C.sf!=C.of)) goto L_1012aa04;
  /* 1012aa5a adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa5c test byte ptr [edx - 0x5573efee], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573efee)))&(C.c.b.h); fl_logic(_r,8); }
  /* 1012aa62 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1012aa65 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012aa66 adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa68 pushfd  */
  x86_unimpl("pushfd @ 0x1012aa68");
  /* 1012aa69 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012aa6a adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1012aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1012aa6e adc dl, byte ptr [eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1012aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1012aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1012aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1012aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1012aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1012aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1012aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1012aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1012aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1012aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1012aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1012aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1012aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1012aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1012aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1012aab7:;
  /* 1012aab7 jmp dword ptr [edx*4 + 0x1012aac0] */
  switch (EDX) {
    case 0: goto L_1012aad0;
    case 1: goto L_1012aad8;
    case 2: goto L_1012aae8;
    case 3: goto L_1012aafc;
    default: x86_unimpl("switch@0x1012aab7 out of table"); return;
  }
  /* 1012aabe mov edi, edi */
  EDI = (EDI);
L_1012aad0:;
  /* 1012aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012aad3 pop esi */
  ESI = (pop32());
  /* 1012aad4 pop edi */
  EDI = (pop32());
  /* 1012aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012aad6 ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012aad7 nop  */
  /* nop */
L_1012aad8:;
  /* 1012aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1012aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012aae1 pop esi */
  ESI = (pop32());
  /* 1012aae2 pop edi */
  EDI = (pop32());
  /* 1012aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012aae4 ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012aae8:;
  /* 1012aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1012aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012aaf7 pop esi */
  ESI = (pop32());
  /* 1012aaf8 pop edi */
  EDI = (pop32());
  /* 1012aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012aafa ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
  /* 1012aafb nop  */
  /* nop */
L_1012aafc:;
  /* 1012aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1012aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1012ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1012ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1012ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1012ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012ab11 pop esi */
  ESI = (pop32());
  /* 1012ab12 pop edi */
  EDI = (pop32());
  /* 1012ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012ab14 ret  */
  ESPCHK(0x1012a7e0u, _esp0);
  ESP += 4; return;
L_1012aa04: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1012aa04 (unresolved jump table)"); return;
}

/* FUN_1000ab15 @ 0x1012ab15 (23 bytes, 7 insns) */
void f_1012ab15(void) {
  FTRACE(0x1012ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1012ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1012ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1012ab23 call 0x1012ab2c */
  push32(0x1012ab28u); f_1012ab2c();
  /* 1012ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ab2b ret  */
  ESPCHK(0x1012ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1012ab2c (517 bytes, 195 insns) */
void f_1012ab2c(void) {
  FTRACE(0x1012ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1012ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1012ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1012ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1012ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1012ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1012ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1012ab44:;
  /* 1012ab44 cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ab4b jle 0x1012ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1012ab5c;
  /* 1012ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1012ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1012ab53 call 0x101293cb */
  push32(0x1012ab58u); f_101293cb();
  /* 1012ab58 pop ecx */
  ECX = (pop32());
  /* 1012ab59 pop ecx */
  ECX = (pop32());
  /* 1012ab5a jmp 0x1012ab6b */
  goto L_1012ab6b;
L_1012ab5c:;
  /* 1012ab5c mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1012ab6b:;
  /* 1012ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ab6d je 0x1012ab74 */
  if (C.zf) goto L_1012ab74;
  /* 1012ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1012ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012ab72 jmp 0x1012ab44 */
  goto L_1012ab44;
L_1012ab74:;
  /* 1012ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1012ab7a jne 0x1012ab82 */
  if (!C.zf) goto L_1012ab82;
  /* 1012ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1012ab80 jmp 0x1012ab87 */
  goto L_1012ab87;
L_1012ab82:;
  /* 1012ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ab85 jne 0x1012ab8d */
  if (!C.zf) goto L_1012ab8d;
L_1012ab87:;
  /* 1012ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1012ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1012ab8d:;
  /* 1012ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ab92 jl 0x1012ad21 */
  if ((C.sf!=C.of)) goto L_1012ad21;
  /* 1012ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ab9b je 0x1012ad21 */
  if (C.zf) goto L_1012ad21;
  /* 1012aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012aba4 jg 0x1012ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012ad21;
  /* 1012abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1012abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012abae pop ecx */
  ECX = (pop32());
  /* 1012abaf jne 0x1012abd5 */
  if (!C.zf) goto L_1012abd5;
  /* 1012abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abb4 je 0x1012abbf */
  if (C.zf) goto L_1012abbf;
  /* 1012abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1012abbd jmp 0x1012abf1 */
  goto L_1012abf1;
L_1012abbf:;
  /* 1012abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abc3 je 0x1012abd2 */
  if (C.zf) goto L_1012abd2;
  /* 1012abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abc7 je 0x1012abd2 */
  if (C.zf) goto L_1012abd2;
  /* 1012abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1012abd0 jmp 0x1012abf1 */
  goto L_1012abf1;
L_1012abd2:;
  /* 1012abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1012abd5:;
  /* 1012abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012abd8 jne 0x1012abf1 */
  if (!C.zf) goto L_1012abf1;
  /* 1012abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abdd jne 0x1012abf1 */
  if (!C.zf) goto L_1012abf1;
  /* 1012abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abe3 je 0x1012abe9 */
  if (C.zf) goto L_1012abe9;
  /* 1012abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012abe7 jne 0x1012abf1 */
  if (!C.zf) goto L_1012abf1;
L_1012abe9:;
  /* 1012abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1012abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1012abf1:;
  /* 1012abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1012abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1012abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1012ac01:;
  /* 1012ac01 cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1012ac0b jle 0x1012ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1012ac19;
  /* 1012ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1012ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1012ac10 call 0x101293cb */
  push32(0x1012ac15u); f_101293cb();
  /* 1012ac15 pop ecx */
  ECX = (pop32());
  /* 1012ac16 pop ecx */
  ECX = (pop32());
  /* 1012ac17 jmp 0x1012ac24 */
  goto L_1012ac24;
L_1012ac19:;
  /* 1012ac19 mov eax, dword ptr [0x101309f0] */
  EAX = (r32((uint32_t)(0x101309f0)));
  /* 1012ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1012ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1012ac24:;
  /* 1012ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ac26 je 0x1012ac30 */
  if (C.zf) goto L_1012ac30;
  /* 1012ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ac2e jmp 0x1012ac62 */
  goto L_1012ac62;
L_1012ac30:;
  /* 1012ac30 cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ac37 jle 0x1012ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1012ac44;
  /* 1012ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1012ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1012ac3b call 0x101293cb */
  push32(0x1012ac40u); f_101293cb();
  /* 1012ac40 pop ecx */
  ECX = (pop32());
  /* 1012ac41 pop ecx */
  ECX = (pop32());
  /* 1012ac42 jmp 0x1012ac4f */
  goto L_1012ac4f;
L_1012ac44:;
  /* 1012ac44 mov eax, dword ptr [0x101309f0] */
  EAX = (r32((uint32_t)(0x101309f0)));
  /* 1012ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1012ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1012ac4f:;
  /* 1012ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ac51 je 0x1012ac9d */
  if (C.zf) goto L_1012ac9d;
  /* 1012ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1012ac57 call 0x1012d108 */
  push32(0x1012ac5cu); f_1012d108();
  /* 1012ac5c pop ecx */
  ECX = (pop32());
  /* 1012ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1012ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1012ac62:;
  /* 1012ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ac65 jae 0x1012ac9d */
  if (!C.cf) goto L_1012ac9d;
  /* 1012ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1012ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1012ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ac71 jb 0x1012ac87 */
  if (C.cf) goto L_1012ac87;
  /* 1012ac73 jne 0x1012ac81 */
  if (!C.zf) goto L_1012ac81;
  /* 1012ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1012ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ac7f jbe 0x1012ac87 */
  if ((C.cf||C.zf)) goto L_1012ac87;
L_1012ac81:;
  /* 1012ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1012ac85 jmp 0x1012ac90 */
  goto L_1012ac90;
L_1012ac87:;
  /* 1012ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1012ac90:;
  /* 1012ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1012ac98 jmp 0x1012ac01 */
  goto L_1012ac01;
L_1012ac9d:;
  /* 1012ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1012aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1012aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1012aca8 jne 0x1012acba */
  if (!C.zf) goto L_1012acba;
  /* 1012acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012acac je 0x1012acb4 */
  if (C.zf) goto L_1012acb4;
  /* 1012acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1012acb4:;
  /* 1012acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012acb8 jmp 0x1012ad05 */
  goto L_1012ad05;
L_1012acba:;
  /* 1012acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1012acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1012acc1 jne 0x1012acde */
  if (!C.zf) goto L_1012acde;
  /* 1012acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1012acc5 jne 0x1012ad05 */
  if (!C.zf) goto L_1012ad05;
  /* 1012acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1012acca je 0x1012acd5 */
  if (C.zf) goto L_1012acd5;
  /* 1012accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012acd3 ja 0x1012acde */
  if ((!C.cf&&!C.zf)) goto L_1012acde;
L_1012acd5:;
  /* 1012acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012acd7 jne 0x1012ad05 */
  if (!C.zf) goto L_1012ad05;
  /* 1012acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012acdc jbe 0x1012ad05 */
  if ((C.cf||C.zf)) goto L_1012ad05;
L_1012acde:;
  /* 1012acde call 0x1012bf71 */
  push32(0x1012ace3u); f_1012bf71();
  /* 1012ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1012ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1012aced je 0x1012acf5 */
  if (C.zf) goto L_1012acf5;
  /* 1012acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012acf3 jmp 0x1012ad05 */
  goto L_1012ad05;
L_1012acf5:;
  /* 1012acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1012acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1012acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1012acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1012ad05:;
  /* 1012ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012ad07 je 0x1012ad0e */
  if (C.zf) goto L_1012ad0e;
  /* 1012ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1012ad0e:;
  /* 1012ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1012ad12 je 0x1012ad1c */
  if (C.zf) goto L_1012ad1c;
  /* 1012ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1012ad1c:;
  /* 1012ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012ad1f jmp 0x1012ad2c */
  goto L_1012ad2c;
L_1012ad21:;
  /* 1012ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ad26 je 0x1012ad2a */
  if (C.zf) goto L_1012ad2a;
  /* 1012ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1012ad2a:;
  /* 1012ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012ad2c:;
  /* 1012ad2c pop edi */
  EDI = (pop32());
  /* 1012ad2d pop esi */
  ESI = (pop32());
  /* 1012ad2e pop ebx */
  EBX = (pop32());
  /* 1012ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012ad30 ret  */
  ESPCHK(0x1012ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1012ad50 (193 bytes, 90 insns) */
void f_1012ad50(void) {
  FTRACE(0x1012ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1012ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1012ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1012ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1012ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1012ad66 je 0x1012ad7b */
  if (C.zf) goto L_1012ad7b;
L_1012ad68:;
  /* 1012ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1012ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ad6d je 0x1012ad40 */
  if (C.zf) { jmp_ind(0x1012ad40u); return; }
  /* 1012ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1012ad71 je 0x1012adc4 */
  if (C.zf) goto L_1012adc4;
  /* 1012ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1012ad79 jne 0x1012ad68 */
  if (!C.zf) goto L_1012ad68;
L_1012ad7b:;
  /* 1012ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1012ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1012ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1012ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1012ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1012ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1012ad86:;
  /* 1012ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1012ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1012ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1012ad8f mov esi, edi */
  ESI = (EDI);
  /* 1012ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1012ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1012ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1012ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1012ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1012adaa jne 0x1012adc8 */
  if (!C.zf) goto L_1012adc8;
  /* 1012adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1012adb1 je 0x1012ad86 */
  if (C.zf) goto L_1012ad86;
  /* 1012adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1012adb8 jne 0x1012adc2 */
  if (!C.zf) goto L_1012adc2;
  /* 1012adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1012adc0 jne 0x1012ad86 */
  if (!C.zf) goto L_1012ad86;
L_1012adc2:;
  /* 1012adc2 pop esi */
  ESI = (pop32());
  /* 1012adc3 pop edi */
  EDI = (pop32());
L_1012adc4:;
  /* 1012adc4 pop ebx */
  EBX = (pop32());
  /* 1012adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012adc7 ret  */
  ESPCHK(0x1012ad50u, _esp0);
  ESP += 4; return;
L_1012adc8:;
  /* 1012adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1012adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012adcd je 0x1012ae05 */
  if (C.zf) goto L_1012ae05;
  /* 1012adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012add1 je 0x1012adc2 */
  if (C.zf) goto L_1012adc2;
  /* 1012add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012add5 je 0x1012adfe */
  if (C.zf) goto L_1012adfe;
  /* 1012add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1012add9 je 0x1012adc2 */
  if (C.zf) goto L_1012adc2;
  /* 1012addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1012adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ade0 je 0x1012adf7 */
  if (C.zf) goto L_1012adf7;
  /* 1012ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012ade4 je 0x1012adc2 */
  if (C.zf) goto L_1012adc2;
  /* 1012ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ade8 je 0x1012adf0 */
  if (C.zf) goto L_1012adf0;
  /* 1012adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1012adec je 0x1012adc2 */
  if (C.zf) goto L_1012adc2;
  /* 1012adee jmp 0x1012ad86 */
  goto L_1012ad86;
L_1012adf0:;
  /* 1012adf0 pop esi */
  ESI = (pop32());
  /* 1012adf1 pop edi */
  EDI = (pop32());
  /* 1012adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1012adf5 pop ebx */
  EBX = (pop32());
  /* 1012adf6 ret  */
  ESPCHK(0x1012ad50u, _esp0);
  ESP += 4; return;
L_1012adf7:;
  /* 1012adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1012adfa pop esi */
  ESI = (pop32());
  /* 1012adfb pop edi */
  EDI = (pop32());
  /* 1012adfc pop ebx */
  EBX = (pop32());
  /* 1012adfd ret  */
  ESPCHK(0x1012ad50u, _esp0);
  ESP += 4; return;
L_1012adfe:;
  /* 1012adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1012ae01 pop esi */
  ESI = (pop32());
  /* 1012ae02 pop edi */
  EDI = (pop32());
  /* 1012ae03 pop ebx */
  EBX = (pop32());
  /* 1012ae04 ret  */
  ESPCHK(0x1012ad50u, _esp0);
  ESP += 4; return;
L_1012ae05:;
  /* 1012ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1012ae08 pop esi */
  ESI = (pop32());
  /* 1012ae09 pop edi */
  EDI = (pop32());
  /* 1012ae0a pop ebx */
  EBX = (pop32());
  /* 1012ae0b ret  */
  ESPCHK(0x1012ad50u, _esp0);
  ESP += 4; return;
  /* 1012ae0c int3  */
  x86_unimpl("int3 @ 0x1012ae0c");
  /* 1012ae0d int3  */
  x86_unimpl("int3 @ 0x1012ae0d");
  /* 1012ae0e int3  */
  x86_unimpl("int3 @ 0x1012ae0e");
  /* 1012ae0f int3  */
  x86_unimpl("int3 @ 0x1012ae0f");
}

/* _strstr @ 0x1012ae10 (128 bytes, 66 insns) */
void f_1012ae10(void) {
  FTRACE(0x1012ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1012ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1012ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1012ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1012ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1012ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012ae1f je 0x1012ae8a */
  if (C.zf) goto L_1012ae8a;
  /* 1012ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1012ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1012ae26 je 0x1012ae77 */
  if (C.zf) goto L_1012ae77;
L_1012ae28:;
  /* 1012ae28 mov esi, edi */
  ESI = (EDI);
  /* 1012ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1012ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1012ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ae33 je 0x1012ae4a */
  if (C.zf) goto L_1012ae4a;
  /* 1012ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012ae37 je 0x1012ae44 */
  if (C.zf) goto L_1012ae44;
L_1012ae39:;
  /* 1012ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1012ae3c:;
  /* 1012ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ae3e je 0x1012ae4a */
  if (C.zf) goto L_1012ae4a;
  /* 1012ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012ae42 jne 0x1012ae39 */
  if (!C.zf) goto L_1012ae39;
L_1012ae44:;
  /* 1012ae44 pop esi */
  ESI = (pop32());
  /* 1012ae45 pop ebx */
  EBX = (pop32());
  /* 1012ae46 pop edi */
  EDI = (pop32());
  /* 1012ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012ae49 ret  */
  ESPCHK(0x1012ae10u, _esp0);
  ESP += 4; return;
L_1012ae4a:;
  /* 1012ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ae4f jne 0x1012ae3c */
  if (!C.zf) goto L_1012ae3c;
  /* 1012ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1012ae54:;
  /* 1012ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1012ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1012ae59 je 0x1012ae83 */
  if (C.zf) goto L_1012ae83;
  /* 1012ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ae62 jne 0x1012ae28 */
  if (!C.zf) goto L_1012ae28;
  /* 1012ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1012ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012ae69 je 0x1012ae83 */
  if (C.zf) goto L_1012ae83;
  /* 1012ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1012ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ae73 je 0x1012ae54 */
  if (C.zf) goto L_1012ae54;
  /* 1012ae75 jmp 0x1012ae28 */
  goto L_1012ae28;
L_1012ae77:;
  /* 1012ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012ae79 pop esi */
  ESI = (pop32());
  /* 1012ae7a pop ebx */
  EBX = (pop32());
  /* 1012ae7b pop edi */
  EDI = (pop32());
  /* 1012ae7c mov al, dl */
  AL = (DL);
  /* 1012ae7e jmp 0x1012ad56 */
  jmp_ind(0x1012ad56u); return;
L_1012ae83:;
  /* 1012ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1012ae86 pop esi */
  ESI = (pop32());
  /* 1012ae87 pop ebx */
  EBX = (pop32());
  /* 1012ae88 pop edi */
  EDI = (pop32());
  /* 1012ae89 ret  */
  ESPCHK(0x1012ae10u, _esp0);
  ESP += 4; return;
L_1012ae8a:;
  /* 1012ae8a mov eax, edi */
  EAX = (EDI);
  /* 1012ae8c pop esi */
  ESI = (pop32());
  /* 1012ae8d pop ebx */
  EBX = (pop32());
  /* 1012ae8e pop edi */
  EDI = (pop32());
  /* 1012ae8f ret  */
  ESPCHK(0x1012ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1012ae90 (56 bytes, 31 insns) */
void f_1012ae90(void) {
  FTRACE(0x1012ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1012ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1012ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1012ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1012ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1012ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012ae99 jecxz 0x1012aec1 */
  x86_unimpl("jecxz @ 0x1012ae99");
  /* 1012ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1012ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012aea0 mov esi, edi */
  ESI = (EDI);
  /* 1012aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1012aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012aeaa mov edi, esi */
  EDI = (ESI);
  /* 1012aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1012aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1012aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012aeb9 ja 0x1012aebf */
  if ((!C.cf&&!C.zf)) goto L_1012aebf;
  /* 1012aebb je 0x1012aec1 */
  if (C.zf) goto L_1012aec1;
  /* 1012aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1012aebf:;
  /* 1012aebf not ecx */
  ECX = (~(ECX));
L_1012aec1:;
  /* 1012aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1012aec3 pop ebx */
  EBX = (pop32());
  /* 1012aec4 pop esi */
  ESI = (pop32());
  /* 1012aec5 pop edi */
  EDI = (pop32());
  /* 1012aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012aec7 ret  */
  ESPCHK(0x1012ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1012aed0 (47 bytes, 17 insns) */
void f_1012aed0(void) {
  FTRACE(0x1012aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1012aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1012aeda jb 0x1012aef0 */
  if (C.cf) goto L_1012aef0;
L_1012aedc:;
  /* 1012aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1012aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012aeee jae 0x1012aedc */
  if (!C.cf) goto L_1012aedc;
L_1012aef0:;
  /* 1012aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012aef2 mov eax, esp */
  EAX = (ESP);
  /* 1012aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1012aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1012aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1012aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1012aefd push eax */
  push32((uint32_t)(EAX));
  /* 1012aefe ret  */
  ESPCHK(0x1012aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1012aeff (72 bytes, 17 insns) */
void f_1012aeff(void) {
  FTRACE(0x1012aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1012af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012af06 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012af0c call dword ptr [0x1012e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e098))), 0x1012af12u);
  /* 1012af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012af14 mov dword ptr [0x101369ec], eax */
  w32((uint32_t)(0x101369ec), (EAX));
  /* 1012af19 jne 0x1012af1c */
  if (!C.zf) goto L_1012af1c;
  /* 1012af1b ret  */
  ESPCHK(0x1012aeffu, _esp0);
  ESP += 4; return;
L_1012af1c:;
  /* 1012af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012af20 and dword ptr [0x101369e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101369e4)))&(0x0u); w32((uint32_t)(0x101369e4), (_r)); fl_logic(_r,32); }
  /* 1012af27 and dword ptr [0x101369e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101369e8)))&(0x0u); w32((uint32_t)(0x101369e8), (_r)); fl_logic(_r,32); }
  /* 1012af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1012af30 mov dword ptr [0x101369e0], eax */
  w32((uint32_t)(0x101369e0), (EAX));
  /* 1012af35 mov dword ptr [0x101369f0], ecx */
  w32((uint32_t)(0x101369f0), (ECX));
  /* 1012af3b mov dword ptr [0x101369d8], 0x10 */
  w32((uint32_t)(0x101369d8), (0x10u));
  /* 1012af45 pop eax */
  EAX = (pop32());
  /* 1012af46 ret  */
  ESPCHK(0x1012aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1012af47 (43 bytes, 14 insns) */
void f_1012af47(void) {
  FTRACE(0x1012af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012af47 mov eax, dword ptr [0x101369e8] */
  EAX = (r32((uint32_t)(0x101369e8)));
  /* 1012af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1012af4f mov eax, dword ptr [0x101369ec] */
  EAX = (r32((uint32_t)(0x101369ec)));
  /* 1012af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1012af57:;
  /* 1012af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012af59 jae 0x1012af6f */
  if (!C.cf) goto L_1012af6f;
  /* 1012af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012af68 jb 0x1012af71 */
  if (C.cf) goto L_1012af71;
  /* 1012af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012af6d jmp 0x1012af57 */
  goto L_1012af57;
L_1012af6f:;
  /* 1012af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012af71:;
  /* 1012af71 ret  */
  ESPCHK(0x1012af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1012af72 (809 bytes, 265 insns) */
void f_1012af72(void) {
  FTRACE(0x1012af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1012af73 mov ebp, esp */
  EBP = (ESP);
  /* 1012af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1012af7c push esi */
  push32((uint32_t)(ESI));
  /* 1012af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1012af83 push edi */
  push32((uint32_t)(EDI));
  /* 1012af84 mov edi, esi */
  EDI = (ESI);
  /* 1012af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1012af8f mov ecx, edi */
  ECX = (EDI);
  /* 1012af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1012af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1012afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1012afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1012afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1012afaa jne 0x1012b296 */
  if (!C.zf) goto L_1012b296;
  /* 1012afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1012afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1012afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1012afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1012afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1012afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1012afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1012afc8 jne 0x1012b048 */
  if (!C.zf) goto L_1012b048;
  /* 1012afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1012afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012afd1 jbe 0x1012afd6 */
  if ((C.cf||C.zf)) goto L_1012afd6;
  /* 1012afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1012afd5 pop edx */
  EDX = (pop32());
L_1012afd6:;
  /* 1012afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1012afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012afdc jne 0x1012b02a */
  if (!C.zf) goto L_1012b02a;
  /* 1012afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012afe1 jae 0x1012b001 */
  if (!C.cf) goto L_1012b001;
  /* 1012afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1012afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1012aff0 not ebx */
  EBX = (~(EBX));
  /* 1012aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1012aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1012aff8 jne 0x1012b022 */
  if (!C.zf) goto L_1012b022;
  /* 1012affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1012afff jmp 0x1012b022 */
  goto L_1012b022;
L_1012b001:;
  /* 1012b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1012b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1012b00f not ebx */
  EBX = (~(EBX));
  /* 1012b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1012b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1012b01a jne 0x1012b022 */
  if (!C.zf) goto L_1012b022;
  /* 1012b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1012b022:;
  /* 1012b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b028 jmp 0x1012b02d */
  goto L_1012b02d;
L_1012b02a:;
  /* 1012b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1012b02d:;
  /* 1012b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1012b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1012b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1012b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1012b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1012b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1012b048:;
  /* 1012b048 mov edx, ecx */
  EDX = (ECX);
  /* 1012b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1012b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b051 jbe 0x1012b056 */
  if ((C.cf||C.zf)) goto L_1012b056;
  /* 1012b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1012b055 pop edx */
  EDX = (pop32());
L_1012b056:;
  /* 1012b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1012b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1012b05f jne 0x1012b0f9 */
  if (!C.zf) goto L_1012b0f9;
  /* 1012b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1012b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1012b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1012b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1012b074 pop esi */
  ESI = (pop32());
  /* 1012b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b077 jbe 0x1012b07b */
  if ((C.cf||C.zf)) goto L_1012b07b;
  /* 1012b079 mov ebx, esi */
  EBX = (ESI);
L_1012b07b:;
  /* 1012b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b07e mov edx, ecx */
  EDX = (ECX);
  /* 1012b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1012b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1012b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b089 jbe 0x1012b08d */
  if ((C.cf||C.zf)) goto L_1012b08d;
  /* 1012b08b mov edx, esi */
  EDX = (ESI);
L_1012b08d:;
  /* 1012b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b08f je 0x1012b0f4 */
  if (C.zf) goto L_1012b0f4;
  /* 1012b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1012b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b09a jne 0x1012b0dc */
  if (!C.zf) goto L_1012b0dc;
  /* 1012b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b09f jae 0x1012b0bd */
  if (!C.cf) goto L_1012b0bd;
  /* 1012b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1012b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1012b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1012b0aa not esi */
  ESI = (~(ESI));
  /* 1012b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1012b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1012b0b4 jne 0x1012b0dc */
  if (!C.zf) goto L_1012b0dc;
  /* 1012b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1012b0bb jmp 0x1012b0dc */
  goto L_1012b0dc;
L_1012b0bd:;
  /* 1012b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1012b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1012b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1012b0c7 not esi */
  ESI = (~(ESI));
  /* 1012b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1012b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1012b0d4 jne 0x1012b0dc */
  if (!C.zf) goto L_1012b0dc;
  /* 1012b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1012b0dc:;
  /* 1012b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1012b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1012b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1012b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1012b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1012b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1012b0f4:;
  /* 1012b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012b0f7 jmp 0x1012b0fc */
  goto L_1012b0fc;
L_1012b0f9:;
  /* 1012b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1012b0fc:;
  /* 1012b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b100 jne 0x1012b10a */
  if (!C.zf) goto L_1012b10a;
  /* 1012b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b104 je 0x1012b18b */
  if (C.zf) goto L_1012b18b;
L_1012b10a:;
  /* 1012b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1012b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1012b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1012b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1012b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1012b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1012b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b129 jne 0x1012b18b */
  if (!C.zf) goto L_1012b18b;
  /* 1012b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1012b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1012b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1012b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1012b13b jae 0x1012b162 */
  if (!C.cf) goto L_1012b162;
  /* 1012b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012b141 jne 0x1012b151 */
  if (!C.zf) goto L_1012b151;
  /* 1012b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b148 mov ecx, edx */
  ECX = (EDX);
  /* 1012b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1012b151:;
  /* 1012b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b156 mov ecx, edx */
  ECX = (EDX);
  /* 1012b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1012b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012b160 jmp 0x1012b18b */
  goto L_1012b18b;
L_1012b162:;
  /* 1012b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012b166 jne 0x1012b178 */
  if (!C.zf) goto L_1012b178;
  /* 1012b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1012b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1012b178:;
  /* 1012b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1012b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1012b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1012b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1012b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1012b18b:;
  /* 1012b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1012b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1012b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1012b199 jne 0x1012b296 */
  if (!C.zf) goto L_1012b296;
  /* 1012b19f mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b1a6 je 0x1012b288 */
  if (C.zf) goto L_1012b288;
  /* 1012b1ac mov ecx, dword ptr [0x101369dc] */
  ECX = (r32((uint32_t)(0x101369dc)));
  /* 1012b1b2 mov esi, dword ptr [0x1012e07c] */
  ESI = (r32((uint32_t)(0x1012e07c)));
  /* 1012b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1012b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1012b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1012b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1012b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1012b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1012b1ccu);
  /* 1012b1cc mov ecx, dword ptr [0x101369dc] */
  ECX = (r32((uint32_t)(0x101369dc)));
  /* 1012b1d2 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1012b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1012b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1012b1e1 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b1e6 mov ecx, dword ptr [0x101369dc] */
  ECX = (r32((uint32_t)(0x101369dc)));
  /* 1012b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1012b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1012b1f7 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1012b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1012b202 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1012b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012b20e jne 0x1012b219 */
  if (!C.zf) goto L_1012b219;
  /* 1012b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012b214 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
L_1012b219:;
  /* 1012b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b21d jne 0x1012b288 */
  if (!C.zf) goto L_1012b288;
  /* 1012b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1012b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1012b225 call esi */
  call_ind((uint32_t)(ESI), 0x1012b227u);
  /* 1012b227 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1012b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b231 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b237 call dword ptr [0x1012e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e080))), 0x1012b23du);
  /* 1012b23d mov eax, dword ptr [0x101369e8] */
  EAX = (r32((uint32_t)(0x101369e8)));
  /* 1012b242 mov edx, dword ptr [0x101369ec] */
  EDX = (r32((uint32_t)(0x101369ec)));
  /* 1012b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1012b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1012b24e mov ecx, eax */
  ECX = (EAX);
  /* 1012b250 mov eax, dword ptr [0x101369e4] */
  EAX = (r32((uint32_t)(0x101369e4)));
  /* 1012b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1012b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1012b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1012b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1012b260 push eax */
  push32((uint32_t)(EAX));
  /* 1012b261 call 0x10129c40 */
  push32(0x1012b266u); f_10129c40();
  /* 1012b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b26c dec dword ptr [0x101369e8] */
  { uint32_t _r=(r32((uint32_t)(0x101369e8)))-1; w32((uint32_t)(0x101369e8), (_r)); fl_dec(_r,32); }
  /* 1012b272 cmp eax, dword ptr [0x101369e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101369e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b278 jbe 0x1012b27e */
  if ((C.cf||C.zf)) goto L_1012b27e;
  /* 1012b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1012b27e:;
  /* 1012b27e mov eax, dword ptr [0x101369ec] */
  EAX = (r32((uint32_t)(0x101369ec)));
  /* 1012b283 mov dword ptr [0x101369e0], eax */
  w32((uint32_t)(0x101369e0), (EAX));
L_1012b288:;
  /* 1012b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b28b mov dword ptr [0x101369dc], edi */
  w32((uint32_t)(0x101369dc), (EDI));
  /* 1012b291 mov dword ptr [0x101369e4], eax */
  w32((uint32_t)(0x101369e4), (EAX));
L_1012b296:;
  /* 1012b296 pop edi */
  EDI = (pop32());
  /* 1012b297 pop esi */
  ESI = (pop32());
  /* 1012b298 pop ebx */
  EBX = (pop32());
  /* 1012b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012b29a ret  */
  ESPCHK(0x1012af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1012b29b (777 bytes, 275 insns) */
void f_1012b29b(void) {
  FTRACE(0x1012b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1012b29c mov ebp, esp */
  EBP = (ESP);
  /* 1012b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b2a1 mov eax, dword ptr [0x101369e8] */
  EAX = (r32((uint32_t)(0x101369e8)));
  /* 1012b2a6 mov edx, dword ptr [0x101369ec] */
  EDX = (r32((uint32_t)(0x101369ec)));
  /* 1012b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1012b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1012b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1012b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1012b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1012b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1012b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1012b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1012b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1012b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1012b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b2cb jge 0x1012b2db */
  if ((C.sf==C.of)) goto L_1012b2db;
  /* 1012b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1012b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1012b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1012b2d9 jmp 0x1012b2eb */
  goto L_1012b2eb;
L_1012b2db:;
  /* 1012b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1012b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1012b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1012b2eb:;
  /* 1012b2eb mov eax, dword ptr [0x101369e0] */
  EAX = (r32((uint32_t)(0x101369e0)));
  /* 1012b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1012b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b2f7 jae 0x1012b312 */
  if (!C.cf) goto L_1012b312;
L_1012b2f9:;
  /* 1012b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1012b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1012b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1012b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1012b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1012b305 jne 0x1012b312 */
  if (!C.zf) goto L_1012b312;
  /* 1012b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b310 jb 0x1012b2f9 */
  if (C.cf) goto L_1012b2f9;
L_1012b312:;
  /* 1012b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b315 jne 0x1012b390 */
  if (!C.zf) goto L_1012b390;
  /* 1012b317 mov ebx, edx */
  EBX = (EDX);
L_1012b319:;
  /* 1012b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b31e jae 0x1012b335 */
  if (!C.cf) goto L_1012b335;
  /* 1012b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1012b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1012b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1012b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1012b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1012b32c jne 0x1012b333 */
  if (!C.zf) goto L_1012b333;
  /* 1012b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b331 jmp 0x1012b319 */
  goto L_1012b319;
L_1012b333:;
  /* 1012b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1012b335:;
  /* 1012b335 jne 0x1012b390 */
  if (!C.zf) goto L_1012b390;
L_1012b337:;
  /* 1012b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b33a jae 0x1012b34d */
  if (!C.cf) goto L_1012b34d;
  /* 1012b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b340 jne 0x1012b34a */
  if (!C.zf) goto L_1012b34a;
  /* 1012b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b348 jmp 0x1012b337 */
  goto L_1012b337;
L_1012b34a:;
  /* 1012b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1012b34d:;
  /* 1012b34d jne 0x1012b375 */
  if (!C.zf) goto L_1012b375;
  /* 1012b34f mov ebx, edx */
  EBX = (EDX);
L_1012b351:;
  /* 1012b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b356 jae 0x1012b365 */
  if (!C.cf) goto L_1012b365;
  /* 1012b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b35c jne 0x1012b363 */
  if (!C.zf) goto L_1012b363;
  /* 1012b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b361 jmp 0x1012b351 */
  goto L_1012b351;
L_1012b363:;
  /* 1012b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1012b365:;
  /* 1012b365 jne 0x1012b375 */
  if (!C.zf) goto L_1012b375;
  /* 1012b367 call 0x1012b5a4 */
  push32(0x1012b36cu); f_1012b5a4();
  /* 1012b36c mov ebx, eax */
  EBX = (EAX);
  /* 1012b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012b373 je 0x1012b389 */
  if (C.zf) goto L_1012b389;
L_1012b375:;
  /* 1012b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1012b376 call 0x1012b655 */
  push32(0x1012b37bu); f_1012b655();
  /* 1012b37b pop ecx */
  ECX = (pop32());
  /* 1012b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1012b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1012b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1012b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b387 jne 0x1012b390 */
  if (!C.zf) goto L_1012b390;
L_1012b389:;
  /* 1012b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012b38b jmp 0x1012b59f */
  goto L_1012b59f;
L_1012b390:;
  /* 1012b390 mov dword ptr [0x101369e0], ebx */
  w32((uint32_t)(0x101369e0), (EBX));
  /* 1012b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1012b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1012b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1012b3a1 je 0x1012b3b7 */
  if (C.zf) goto L_1012b3b7;
  /* 1012b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1012b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1012b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1012b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1012b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1012b3b5 jne 0x1012b3ee */
  if (!C.zf) goto L_1012b3ee;
L_1012b3b7:;
  /* 1012b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1012b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1012b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1012b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1012b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1012b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1012b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1012b3d2 jne 0x1012b3eb */
  if (!C.zf) goto L_1012b3eb;
L_1012b3d4:;
  /* 1012b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1012b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1012b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1012b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1012b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1012b3e9 je 0x1012b3d4 */
  if (C.zf) goto L_1012b3d4;
L_1012b3eb:;
  /* 1012b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1012b3ee:;
  /* 1012b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1012b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1012b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1012b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1012b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1012b408 jne 0x1012b417 */
  if (!C.zf) goto L_1012b417;
  /* 1012b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1012b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1012b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1012b416 pop edi */
  EDI = (pop32());
L_1012b417:;
  /* 1012b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012b419 jl 0x1012b420 */
  if ((C.sf!=C.of)) goto L_1012b420;
  /* 1012b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1012b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012b41e jmp 0x1012b417 */
  goto L_1012b417;
L_1012b420:;
  /* 1012b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1012b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1012b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b42c mov esi, ecx */
  ESI = (ECX);
  /* 1012b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1012b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1012b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1012b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b438 jle 0x1012b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1012b43d;
  /* 1012b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1012b43c pop esi */
  ESI = (pop32());
L_1012b43d:;
  /* 1012b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b43f je 0x1012b552 */
  if (C.zf) goto L_1012b552;
  /* 1012b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b44b jne 0x1012b4ae */
  if (!C.zf) goto L_1012b4ae;
  /* 1012b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b450 jge 0x1012b47d */
  if ((C.sf==C.of)) goto L_1012b47d;
  /* 1012b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b457 mov ecx, edi */
  ECX = (EDI);
  /* 1012b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1012b462 not ebx */
  EBX = (~(EBX));
  /* 1012b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1012b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1012b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1012b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1012b471 jne 0x1012b4ab */
  if (!C.zf) goto L_1012b4ab;
  /* 1012b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1012b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1012b47b jmp 0x1012b4ae */
  goto L_1012b4ae;
L_1012b47d:;
  /* 1012b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1012b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1012b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1012b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1012b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1012b495 not ebx */
  EBX = (~(EBX));
  /* 1012b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1012b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1012b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1012b49e jne 0x1012b4ab */
  if (!C.zf) goto L_1012b4ab;
  /* 1012b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1012b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012b4a9 jmp 0x1012b4ae */
  goto L_1012b4ae;
L_1012b4ab:;
  /* 1012b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1012b4ae:;
  /* 1012b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1012b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1012b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1012b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1012b4c4 je 0x1012b55e */
  if (C.zf) goto L_1012b55e;
  /* 1012b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1012b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1012b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1012b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1012b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1012b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1012b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1012b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b4e9 jne 0x1012b54f */
  if (!C.zf) goto L_1012b54f;
  /* 1012b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1012b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1012b4f5 jge 0x1012b520 */
  if ((C.sf==C.of)) goto L_1012b520;
  /* 1012b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1012b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1012b501 jne 0x1012b50e */
  if (!C.zf) goto L_1012b50e;
  /* 1012b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1012b508 mov ecx, esi */
  ECX = (ESI);
  /* 1012b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1012b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1012b50e:;
  /* 1012b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1012b513 mov ecx, esi */
  ECX = (ESI);
  /* 1012b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1012b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1012b51e jmp 0x1012b54f */
  goto L_1012b54f;
L_1012b520:;
  /* 1012b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1012b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1012b52a jne 0x1012b539 */
  if (!C.zf) goto L_1012b539;
  /* 1012b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1012b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1012b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1012b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1012b539:;
  /* 1012b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1012b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1012b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1012b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1012b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1012b54f:;
  /* 1012b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1012b552:;
  /* 1012b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012b554 je 0x1012b561 */
  if (C.zf) goto L_1012b561;
  /* 1012b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1012b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1012b55c jmp 0x1012b561 */
  goto L_1012b561;
L_1012b55e:;
  /* 1012b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1012b561:;
  /* 1012b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1012b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1012b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1012b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1012b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1012b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1012b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1012b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1012b57b jne 0x1012b597 */
  if (!C.zf) goto L_1012b597;
  /* 1012b57d cmp ebx, dword ptr [0x101369e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101369e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b583 jne 0x1012b597 */
  if (!C.zf) goto L_1012b597;
  /* 1012b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b588 cmp ecx, dword ptr [0x101369dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x101369dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b58e jne 0x1012b597 */
  if (!C.zf) goto L_1012b597;
  /* 1012b590 and dword ptr [0x101369e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x101369e4)))&(0x0u); w32((uint32_t)(0x101369e4), (_r)); fl_logic(_r,32); }
L_1012b597:;
  /* 1012b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1012b59f:;
  /* 1012b59f pop edi */
  EDI = (pop32());
  /* 1012b5a0 pop esi */
  ESI = (pop32());
  /* 1012b5a1 pop ebx */
  EBX = (pop32());
  /* 1012b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012b5a3 ret  */
  ESPCHK(0x1012b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1012b5a4 (177 bytes, 53 insns) */
void f_1012b5a4(void) {
  FTRACE(0x1012b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b5a4 mov eax, dword ptr [0x101369e8] */
  EAX = (r32((uint32_t)(0x101369e8)));
  /* 1012b5a9 mov ecx, dword ptr [0x101369d8] */
  ECX = (r32((uint32_t)(0x101369d8)));
  /* 1012b5af push esi */
  push32((uint32_t)(ESI));
  /* 1012b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1012b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b5b5 jne 0x1012b5e7 */
  if (!C.zf) goto L_1012b5e7;
  /* 1012b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1012b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1012b5be push eax */
  push32((uint32_t)(EAX));
  /* 1012b5bf push dword ptr [0x101369ec] */
  push32((uint32_t)(r32((uint32_t)(0x101369ec))));
  /* 1012b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1012b5c6 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b5cc call dword ptr [0x1012e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0ac))), 0x1012b5d2u);
  /* 1012b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b5d4 je 0x1012b637 */
  if (C.zf) goto L_1012b637;
  /* 1012b5d6 add dword ptr [0x101369d8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x101369d8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x101369d8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012b5dd mov dword ptr [0x101369ec], eax */
  w32((uint32_t)(0x101369ec), (EAX));
  /* 1012b5e2 mov eax, dword ptr [0x101369e8] */
  EAX = (r32((uint32_t)(0x101369e8)));
L_1012b5e7:;
  /* 1012b5e7 mov ecx, dword ptr [0x101369ec] */
  ECX = (r32((uint32_t)(0x101369ec)));
  /* 1012b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1012b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1012b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1012b5f7 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1012b600 call dword ptr [0x1012e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e098))), 0x1012b606u);
  /* 1012b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1012b60b je 0x1012b637 */
  if (C.zf) goto L_1012b637;
  /* 1012b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1012b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1012b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1012b619 push edi */
  push32((uint32_t)(EDI));
  /* 1012b61a call dword ptr [0x1012e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0a8))), 0x1012b620u);
  /* 1012b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1012b625 jne 0x1012b63b */
  if (!C.zf) goto L_1012b63b;
  /* 1012b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1012b62a push edi */
  push32((uint32_t)(EDI));
  /* 1012b62b push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b631 call dword ptr [0x1012e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e080))), 0x1012b637u);
L_1012b637:;
  /* 1012b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012b639 jmp 0x1012b652 */
  goto L_1012b652;
L_1012b63b:;
  /* 1012b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1012b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1012b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1012b644 inc dword ptr [0x101369e8] */
  { uint32_t _r=(r32((uint32_t)(0x101369e8)))+1; w32((uint32_t)(0x101369e8), (_r)); fl_inc(_r,32); }
  /* 1012b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1012b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012b650 mov eax, esi */
  EAX = (ESI);
L_1012b652:;
  /* 1012b652 pop edi */
  EDI = (pop32());
  /* 1012b653 pop esi */
  ESI = (pop32());
  /* 1012b654 ret  */
  ESPCHK(0x1012b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1012b655 (251 bytes, 85 insns) */
void f_1012b655(void) {
  FTRACE(0x1012b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1012b656 mov ebp, esp */
  EBP = (ESP);
  /* 1012b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1012b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1012b65d push esi */
  push32((uint32_t)(ESI));
  /* 1012b65e push edi */
  push32((uint32_t)(EDI));
  /* 1012b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1012b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1012b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1012b667:;
  /* 1012b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b669 jl 0x1012b670 */
  if ((C.sf!=C.of)) goto L_1012b670;
  /* 1012b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1012b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012b66e jmp 0x1012b667 */
  goto L_1012b667;
L_1012b670:;
  /* 1012b670 mov eax, ebx */
  EAX = (EBX);
  /* 1012b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1012b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012b67a pop edx */
  EDX = (pop32());
  /* 1012b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1012b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1012b685:;
  /* 1012b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1012b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1012b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012b68f jne 0x1012b685 */
  if (!C.zf) goto L_1012b685;
  /* 1012b691 mov edi, ebx */
  EDI = (EBX);
  /* 1012b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1012b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1012b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1012b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1012b6a6 call dword ptr [0x1012e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0a8))), 0x1012b6acu);
  /* 1012b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b6ae jne 0x1012b6b8 */
  if (!C.zf) goto L_1012b6b8;
  /* 1012b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012b6b3 jmp 0x1012b74b */
  goto L_1012b74b;
L_1012b6b8:;
  /* 1012b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1012b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b6c0 ja 0x1012b6fe */
  if ((!C.cf&&!C.zf)) goto L_1012b6fe;
  /* 1012b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1012b6c5:;
  /* 1012b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1012b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1012b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1012b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1012b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1012b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1012b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1012b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b6fc jbe 0x1012b6c5 */
  if ((C.cf||C.zf)) goto L_1012b6c5;
L_1012b6fe:;
  /* 1012b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1012b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012b70b pop edi */
  EDI = (pop32());
  /* 1012b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1012b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1012b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1012b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1012b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1012b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1012b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1012b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1012b72a mov cl, al */
  CL = (AL);
  /* 1012b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1012b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1012b736 jne 0x1012b73b */
  if (!C.zf) goto L_1012b73b;
  /* 1012b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1012b73b:;
  /* 1012b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1012b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1012b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1012b744 not edx */
  EDX = (~(EDX));
  /* 1012b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1012b749 mov eax, ebx */
  EAX = (EBX);
L_1012b74b:;
  /* 1012b74b pop edi */
  EDI = (pop32());
  /* 1012b74c pop esi */
  ESI = (pop32());
  /* 1012b74d pop ebx */
  EBX = (pop32());
  /* 1012b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012b74f ret  */
  ESPCHK(0x1012b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1012b750 (324 bytes, 102 insns) */
void f_1012b750(void) {
  FTRACE(0x1012b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b750 cmp dword ptr [0x10130e90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10130e90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1012b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1012b759 push esi */
  push32((uint32_t)(ESI));
  /* 1012b75a push edi */
  push32((uint32_t)(EDI));
  /* 1012b75b jne 0x1012b764 */
  if (!C.zf) goto L_1012b764;
  /* 1012b75d mov esi, 0x10130e80 */
  ESI = (0x10130e80u);
  /* 1012b762 jmp 0x1012b781 */
  goto L_1012b781;
L_1012b764:;
  /* 1012b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1012b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b76b push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b771 call dword ptr [0x1012e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e098))), 0x1012b777u);
  /* 1012b777 mov esi, eax */
  ESI = (EAX);
  /* 1012b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012b77b je 0x1012b88d */
  if (C.zf) goto L_1012b88d;
L_1012b781:;
  /* 1012b781 mov ebp, dword ptr [0x1012e0a8] */
  EBP = (r32((uint32_t)(0x1012e0a8)));
  /* 1012b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1012b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1012b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1012b797u);
  /* 1012b797 mov edi, eax */
  EDI = (EAX);
  /* 1012b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012b79b je 0x1012b876 */
  if (C.zf) goto L_1012b876;
  /* 1012b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1012b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1012b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1012b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1012b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1012b7b1u);
  /* 1012b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b7b3 je 0x1012b868 */
  if (C.zf) goto L_1012b868;
  /* 1012b7b9 mov eax, 0x10130e80 */
  EAX = (0x10130e80u);
  /* 1012b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b7c0 jne 0x1012b7e0 */
  if (!C.zf) goto L_1012b7e0;
  /* 1012b7c2 cmp dword ptr [0x10130e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10130e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b7c9 jne 0x1012b7d0 */
  if (!C.zf) goto L_1012b7d0;
  /* 1012b7cb mov dword ptr [0x10130e80], eax */
  w32((uint32_t)(0x10130e80), (EAX));
L_1012b7d0:;
  /* 1012b7d0 cmp dword ptr [0x10130e84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10130e84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b7d7 jne 0x1012b7f5 */
  if (!C.zf) goto L_1012b7f5;
  /* 1012b7d9 mov dword ptr [0x10130e84], eax */
  w32((uint32_t)(0x10130e84), (EAX));
  /* 1012b7de jmp 0x1012b7f5 */
  goto L_1012b7f5;
L_1012b7e0:;
  /* 1012b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1012b7e2 mov eax, dword ptr [0x10130e84] */
  EAX = (r32((uint32_t)(0x10130e84)));
  /* 1012b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1012b7ea mov dword ptr [0x10130e84], esi */
  w32((uint32_t)(0x10130e84), (ESI));
  /* 1012b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1012b7f5:;
  /* 1012b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1012b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1012b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1012b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1012b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1012b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1012b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1012b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1012b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1012b817:;
  /* 1012b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1012b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1012b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1012b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1012b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1012b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1012b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b832 jl 0x1012b817 */
  if ((C.sf!=C.of)) goto L_1012b817;
  /* 1012b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1012b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b837 push edi */
  push32((uint32_t)(EDI));
  /* 1012b838 call 0x10129be0 */
  push32(0x1012b83du); f_10129be0();
  /* 1012b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012b840:;
  /* 1012b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1012b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b847 jae 0x1012b864 */
  if (!C.cf) goto L_1012b864;
  /* 1012b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1012b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1012b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1012b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1012b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b862 jmp 0x1012b840 */
  goto L_1012b840;
L_1012b864:;
  /* 1012b864 mov eax, esi */
  EAX = (ESI);
  /* 1012b866 jmp 0x1012b88f */
  goto L_1012b88f;
L_1012b868:;
  /* 1012b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1012b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b86f push edi */
  push32((uint32_t)(EDI));
  /* 1012b870 call dword ptr [0x1012e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e07c))), 0x1012b876u);
L_1012b876:;
  /* 1012b876 cmp esi, 0x10130e80 */
  { uint32_t _a=(ESI),_b=(0x10130e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b87c je 0x1012b88d */
  if (C.zf) goto L_1012b88d;
  /* 1012b87e push esi */
  push32((uint32_t)(ESI));
  /* 1012b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b881 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b887 call dword ptr [0x1012e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e080))), 0x1012b88du);
L_1012b88d:;
  /* 1012b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012b88f:;
  /* 1012b88f pop edi */
  EDI = (pop32());
  /* 1012b890 pop esi */
  ESI = (pop32());
  /* 1012b891 pop ebp */
  EBP = (pop32());
  /* 1012b892 pop ebx */
  EBX = (pop32());
  /* 1012b893 ret  */
  ESPCHK(0x1012b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1012b894 (86 bytes, 27 insns) */
void f_1012b894(void) {
  FTRACE(0x1012b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b894 push esi */
  push32((uint32_t)(ESI));
  /* 1012b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1012b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1012b8a3 call dword ptr [0x1012e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e07c))), 0x1012b8a9u);
  /* 1012b8a9 cmp dword ptr [0x10132ea0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10132ea0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b8af jne 0x1012b8b9 */
  if (!C.zf) goto L_1012b8b9;
  /* 1012b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b8b4 mov dword ptr [0x10132ea0], eax */
  w32((uint32_t)(0x10132ea0), (EAX));
L_1012b8b9:;
  /* 1012b8b9 cmp esi, 0x10130e80 */
  { uint32_t _a=(ESI),_b=(0x10130e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b8bf je 0x1012b8e1 */
  if (C.zf) goto L_1012b8e1;
  /* 1012b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1012b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1012b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1012b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1012b8d3 push dword ptr [0x10137c44] */
  push32((uint32_t)(r32((uint32_t)(0x10137c44))));
  /* 1012b8d9 call dword ptr [0x1012e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e080))), 0x1012b8dfu);
  /* 1012b8df pop esi */
  ESI = (pop32());
  /* 1012b8e0 ret  */
  ESPCHK(0x1012b894u, _esp0);
  ESP += 4; return;
L_1012b8e1:;
  /* 1012b8e1 or dword ptr [0x10130e90], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10130e90)))|(0xffffffffu); w32((uint32_t)(0x10130e90), (_r)); fl_logic(_r,32); }
  /* 1012b8e8 pop esi */
  ESI = (pop32());
  /* 1012b8e9 ret  */
  ESPCHK(0x1012b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1012b8ea (194 bytes, 66 insns) */
void f_1012b8ea(void) {
  FTRACE(0x1012b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1012b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1012b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1012b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1012b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1012b8f0 mov esi, dword ptr [0x10130e84] */
  ESI = (r32((uint32_t)(0x10130e84)));
  /* 1012b8f6 push edi */
  push32((uint32_t)(EDI));
L_1012b8f7:;
  /* 1012b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b8fb je 0x1012b995 */
  if (C.zf) goto L_1012b995;
  /* 1012b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1012b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1012b910:;
  /* 1012b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b916 jne 0x1012b951 */
  if (!C.zf) goto L_1012b951;
  /* 1012b918 mov eax, ebx */
  EAX = (EBX);
  /* 1012b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1012b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1012b927 push eax */
  push32((uint32_t)(EAX));
  /* 1012b928 call dword ptr [0x1012e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e07c))), 0x1012b92eu);
  /* 1012b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b930 je 0x1012b951 */
  if (C.zf) goto L_1012b951;
  /* 1012b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1012b935 dec dword ptr [0x10136834] */
  { uint32_t _r=(r32((uint32_t)(0x10136834)))-1; w32((uint32_t)(0x10136834), (_r)); fl_dec(_r,32); }
  /* 1012b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1012b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012b940 je 0x1012b946 */
  if (C.zf) goto L_1012b946;
  /* 1012b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b944 jbe 0x1012b949 */
  if ((C.cf||C.zf)) goto L_1012b949;
L_1012b946:;
  /* 1012b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1012b949:;
  /* 1012b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1012b94f je 0x1012b95e */
  if (C.zf) goto L_1012b95e;
L_1012b951:;
  /* 1012b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012b95c jge 0x1012b910 */
  if ((C.sf==C.of)) goto L_1012b910;
L_1012b95e:;
  /* 1012b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b962 mov ecx, esi */
  ECX = (ESI);
  /* 1012b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1012b967 je 0x1012b995 */
  if (C.zf) goto L_1012b995;
  /* 1012b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b96d jne 0x1012b995 */
  if (!C.zf) goto L_1012b995;
  /* 1012b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1012b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1012b974 pop edx */
  EDX = (pop32());
L_1012b975:;
  /* 1012b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b978 jne 0x1012b986 */
  if (!C.zf) goto L_1012b986;
  /* 1012b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b984 jl 0x1012b975 */
  if ((C.sf!=C.of)) goto L_1012b975;
L_1012b986:;
  /* 1012b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b98c jne 0x1012b995 */
  if (!C.zf) goto L_1012b995;
  /* 1012b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1012b98f call 0x1012b894 */
  push32(0x1012b994u); f_1012b894();
  /* 1012b994 pop ecx */
  ECX = (pop32());
L_1012b995:;
  /* 1012b995 cmp esi, dword ptr [0x10130e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10130e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b99b je 0x1012b9a7 */
  if (C.zf) goto L_1012b9a7;
  /* 1012b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b9a1 jg 0x1012b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012b8f7;
L_1012b9a7:;
  /* 1012b9a7 pop edi */
  EDI = (pop32());
  /* 1012b9a8 pop esi */
  ESI = (pop32());
  /* 1012b9a9 pop ebx */
  EBX = (pop32());
  /* 1012b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012b9ab ret  */
  ESPCHK(0x1012b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1012b9ac (87 bytes, 34 insns) */
void f_1012b9ac(void) {
  FTRACE(0x1012b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012b9b0 mov edx, 0x10130e80 */
  EDX = (0x10130e80u);
  /* 1012b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1012b9b6 mov ecx, edx */
  ECX = (EDX);
L_1012b9b8:;
  /* 1012b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b9bb jbe 0x1012b9c2 */
  if ((C.cf||C.zf)) goto L_1012b9c2;
  /* 1012b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b9c0 jb 0x1012b9ca */
  if (C.cf) goto L_1012b9ca;
L_1012b9c2:;
  /* 1012b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1012b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b9c6 je 0x1012b9ff */
  if (C.zf) goto L_1012b9ff;
  /* 1012b9c8 jmp 0x1012b9b8 */
  goto L_1012b9b8;
L_1012b9ca:;
  /* 1012b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1012b9cc jne 0x1012b9ff */
  if (!C.zf) goto L_1012b9ff;
  /* 1012b9ce mov esi, eax */
  ESI = (EAX);
  /* 1012b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1012b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1012b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012b9dd jb 0x1012b9ff */
  if (C.cf) goto L_1012b9ff;
  /* 1012b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1012b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1012b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1012b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1012b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1012b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1012b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012b9f6 pop esi */
  ESI = (pop32());
  /* 1012b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1012b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1012b9fe ret  */
  ESPCHK(0x1012b9acu, _esp0);
  ESP += 4; return;
L_1012b9ff:;
  /* 1012b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012ba01 pop esi */
  ESI = (pop32());
  /* 1012ba02 ret  */
  ESPCHK(0x1012b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1012ba03 (69 bytes, 19 insns) */
void f_1012ba03(void) {
  FTRACE(0x1012ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1012ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1012ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1012ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1012ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1012ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1012ba2e jne 0x1012ba47 */
  if (!C.zf) goto L_1012ba47;
  /* 1012ba30 inc dword ptr [0x10136834] */
  { uint32_t _r=(r32((uint32_t)(0x10136834)))+1; w32((uint32_t)(0x10136834), (_r)); fl_inc(_r,32); }
  /* 1012ba36 cmp dword ptr [0x10136834], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10136834))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba3d jne 0x1012ba47 */
  if (!C.zf) goto L_1012ba47;
  /* 1012ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1012ba41 call 0x1012b8ea */
  push32(0x1012ba46u); f_1012b8ea();
  /* 1012ba46 pop ecx */
  ECX = (pop32());
L_1012ba47:;
  /* 1012ba47 ret  */
  ESPCHK(0x1012ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1012ba48 (520 bytes, 180 insns) */
void f_1012ba48(void) {
  FTRACE(0x1012ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1012ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1012ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1012ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1012ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1012ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1012ba4f mov esi, dword ptr [0x10132ea0] */
  ESI = (r32((uint32_t)(0x10132ea0)));
  /* 1012ba55 push edi */
  push32((uint32_t)(EDI));
L_1012ba56:;
  /* 1012ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1012ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba5c je 0x1012bb01 */
  if (C.zf) goto L_1012bb01;
  /* 1012ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1012ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1012ba6b mov eax, edi */
  EAX = (EDI);
  /* 1012ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1012ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1012ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1012ba7f jae 0x1012babb */
  if (!C.cf) goto L_1012babb;
L_1012ba81:;
  /* 1012ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1012ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba88 jl 0x1012baa4 */
  if ((C.sf!=C.of)) goto L_1012baa4;
  /* 1012ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ba8d jbe 0x1012baa4 */
  if ((C.cf||C.zf)) goto L_1012baa4;
  /* 1012ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1012ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1012ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1012ba92 call 0x1012bc50 */
  push32(0x1012ba97u); f_1012bc50();
  /* 1012ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012ba9c jne 0x1012bb13 */
  if (!C.zf) goto L_1012bb13;
  /* 1012ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1012baa4:;
  /* 1012baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1012baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1012bab7 jb 0x1012ba81 */
  if (C.cf) goto L_1012ba81;
  /* 1012bab9 jmp 0x1012babe */
  goto L_1012babe;
L_1012babb:;
  /* 1012babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1012babe:;
  /* 1012babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1012bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1012bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1012bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1012baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1012bacf jae 0x1012bb04 */
  if (!C.cf) goto L_1012bb04;
L_1012bad1:;
  /* 1012bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bad5 jl 0x1012baf0 */
  if ((C.sf!=C.of)) goto L_1012baf0;
  /* 1012bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bada jbe 0x1012baf0 */
  if ((C.cf||C.zf)) goto L_1012baf0;
  /* 1012badc push ebx */
  push32((uint32_t)(EBX));
  /* 1012badd push eax */
  push32((uint32_t)(EAX));
  /* 1012bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1012bae1 call 0x1012bc50 */
  push32(0x1012bae6u); f_1012bc50();
  /* 1012bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012baeb jne 0x1012bb13 */
  if (!C.zf) goto L_1012bb13;
  /* 1012baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1012baf0:;
  /* 1012baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bafd jb 0x1012bad1 */
  if (C.cf) goto L_1012bad1;
  /* 1012baff jmp 0x1012bb04 */
  goto L_1012bb04;
L_1012bb01:;
  /* 1012bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1012bb04:;
  /* 1012bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1012bb06 cmp esi, dword ptr [0x10132ea0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10132ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb0c je 0x1012bb23 */
  if (C.zf) goto L_1012bb23;
  /* 1012bb0e jmp 0x1012ba56 */
  goto L_1012ba56;
L_1012bb13:;
  /* 1012bb13 mov dword ptr [0x10132ea0], esi */
  w32((uint32_t)(0x10132ea0), (ESI));
  /* 1012bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1012bb1e jmp 0x1012bc4b */
  goto L_1012bc4b;
L_1012bb23:;
  /* 1012bb23 mov eax, 0x10130e80 */
  EAX = (0x10130e80u);
  /* 1012bb28 mov edi, eax */
  EDI = (EAX);
L_1012bb2a:;
  /* 1012bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb2e je 0x1012bb36 */
  if (C.zf) goto L_1012bb36;
  /* 1012bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb34 jne 0x1012bb42 */
  if (!C.zf) goto L_1012bb42;
L_1012bb36:;
  /* 1012bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1012bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb3a je 0x1012bc17 */
  if (C.zf) goto L_1012bc17;
  /* 1012bb40 jmp 0x1012bb2a */
  goto L_1012bb2a;
L_1012bb42:;
  /* 1012bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1012bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1012bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1012bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1012bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1012bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb5e jne 0x1012bb71 */
  if (!C.zf) goto L_1012bb71;
L_1012bb60:;
  /* 1012bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb64 jge 0x1012bb71 */
  if ((C.sf==C.of)) goto L_1012bb71;
  /* 1012bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb6f je 0x1012bb60 */
  if (C.zf) goto L_1012bb60;
L_1012bb71:;
  /* 1012bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1012bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1012bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1012bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1012bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1012bb83 call dword ptr [0x1012e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0a8))), 0x1012bb89u);
  /* 1012bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bb8b jne 0x1012bc49 */
  if (!C.zf) goto L_1012bc49;
  /* 1012bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1012bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1012bb97 call 0x10129be0 */
  push32(0x1012bb9cu); f_10129be0();
  /* 1012bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1012bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1012bba6 jle 0x1012bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1012bbd8;
  /* 1012bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1012bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1012bbae:;
  /* 1012bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1012bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1012bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1012bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1012bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1012bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1012bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1012bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1012bbd6 jne 0x1012bbae */
  if (!C.zf) goto L_1012bbae;
L_1012bbd8:;
  /* 1012bbd8 mov dword ptr [0x10132ea0], edi */
  w32((uint32_t)(0x10132ea0), (EDI));
  /* 1012bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1012bbe4:;
  /* 1012bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bbe6 jae 0x1012bbf4 */
  if (!C.cf) goto L_1012bbf4;
  /* 1012bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bbeb je 0x1012bbf2 */
  if (C.zf) goto L_1012bbf2;
  /* 1012bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bbf0 jmp 0x1012bbe4 */
  goto L_1012bbe4;
L_1012bbf2:;
  /* 1012bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1012bbf4:;
  /* 1012bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1012bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1012bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1012bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1012bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1012bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1012bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1012bc15 jmp 0x1012bc4b */
  goto L_1012bc4b;
L_1012bc17:;
  /* 1012bc17 call 0x1012b750 */
  push32(0x1012bc1cu); f_1012b750();
  /* 1012bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012bc1e je 0x1012bc49 */
  if (C.zf) goto L_1012bc49;
  /* 1012bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1012bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1012bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1012bc2a mov dword ptr [0x10132ea0], eax */
  w32((uint32_t)(0x10132ea0), (EAX));
  /* 1012bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1012bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1012bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1012bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1012bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1012bc47 jmp 0x1012bc4b */
  goto L_1012bc4b;
L_1012bc49:;
  /* 1012bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012bc4b:;
  /* 1012bc4b pop edi */
  EDI = (pop32());
  /* 1012bc4c pop esi */
  ESI = (pop32());
  /* 1012bc4d pop ebx */
  EBX = (pop32());
  /* 1012bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012bc4f ret  */
  ESPCHK(0x1012ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1012bc50 (292 bytes, 125 insns) */
void f_1012bc50(void) {
  FTRACE(0x1012bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1012bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1012bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1012bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1012bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1012bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1012bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1012bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1012bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1012bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1012bc6d mov eax, edi */
  EAX = (EDI);
  /* 1012bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1012bc72 jb 0x1012bc95 */
  if (C.cf) goto L_1012bc95;
  /* 1012bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1012bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1012bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bc7b jae 0x1012bc84 */
  if (!C.cf) goto L_1012bc84;
  /* 1012bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bc82 jmp 0x1012bc8d */
  goto L_1012bc8d;
L_1012bc84:;
  /* 1012bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1012bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1012bc8d:;
  /* 1012bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1012bc90 jmp 0x1012bd63 */
  goto L_1012bd63;
L_1012bc95:;
  /* 1012bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012bc9a je 0x1012bc9e */
  if (C.zf) goto L_1012bc9e;
  /* 1012bc9c mov eax, esi */
  EAX = (ESI);
L_1012bc9e:;
  /* 1012bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1012bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bca3 jae 0x1012bce8 */
  if (!C.cf) goto L_1012bce8;
L_1012bca5:;
  /* 1012bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1012bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1012bca9 jne 0x1012bcdb */
  if (!C.zf) goto L_1012bcdb;
  /* 1012bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1012bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1012bcb0 pop esi */
  ESI = (pop32());
L_1012bcb1:;
  /* 1012bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012bcb4 jne 0x1012bcba */
  if (!C.zf) goto L_1012bcba;
  /* 1012bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012bcb8 jmp 0x1012bcb1 */
  goto L_1012bcb1;
L_1012bcba:;
  /* 1012bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bcbc jae 0x1012bd0c */
  if (!C.cf) goto L_1012bd0c;
  /* 1012bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bcc1 jne 0x1012bcc8 */
  if (!C.zf) goto L_1012bcc8;
  /* 1012bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1012bcc6 jmp 0x1012bcd4 */
  goto L_1012bcd4;
L_1012bcc8:;
  /* 1012bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bcce jb 0x1012bd6d */
  if (C.cf) goto L_1012bd6d;
L_1012bcd4:;
  /* 1012bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1012bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1012bcd9 jmp 0x1012bce0 */
  goto L_1012bce0;
L_1012bcdb:;
  /* 1012bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1012bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1012bce0:;
  /* 1012bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1012bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bce6 jb 0x1012bca5 */
  if (C.cf) goto L_1012bca5;
L_1012bce8:;
  /* 1012bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1012bceb:;
  /* 1012bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bced jae 0x1012bd6d */
  if (!C.cf) goto L_1012bd6d;
  /* 1012bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1012bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bcf5 jae 0x1012bd6d */
  if (!C.cf) goto L_1012bd6d;
  /* 1012bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012bcfb jne 0x1012bd3d */
  if (!C.zf) goto L_1012bd3d;
  /* 1012bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1012bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1012bd02 pop eax */
  EAX = (pop32());
L_1012bd03:;
  /* 1012bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012bd06 jne 0x1012bd2d */
  if (!C.zf) goto L_1012bd2d;
  /* 1012bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012bd0a jmp 0x1012bd03 */
  goto L_1012bd03;
L_1012bd0c:;
  /* 1012bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1012bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd12 jae 0x1012bd1d */
  if (!C.cf) goto L_1012bd1d;
  /* 1012bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1012bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1012bd1b jmp 0x1012bd26 */
  goto L_1012bd26;
L_1012bd1d:;
  /* 1012bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1012bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1012bd26:;
  /* 1012bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1012bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bd2b jmp 0x1012bd63 */
  goto L_1012bd63;
L_1012bd2d:;
  /* 1012bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd2f jae 0x1012bd44 */
  if (!C.cf) goto L_1012bd44;
  /* 1012bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd37 jb 0x1012bd6d */
  if (C.cf) goto L_1012bd6d;
  /* 1012bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1012bd3b jmp 0x1012bceb */
  goto L_1012bceb;
L_1012bd3d:;
  /* 1012bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1012bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bd42 jmp 0x1012bceb */
  goto L_1012bceb;
L_1012bd44:;
  /* 1012bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1012bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd4a jae 0x1012bd55 */
  if (!C.cf) goto L_1012bd55;
  /* 1012bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1012bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1012bd53 jmp 0x1012bd5e */
  goto L_1012bd5e;
L_1012bd55:;
  /* 1012bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1012bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1012bd5e:;
  /* 1012bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1012bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1012bd63:;
  /* 1012bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1012bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bd6b jmp 0x1012bd6f */
  goto L_1012bd6f;
L_1012bd6d:;
  /* 1012bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012bd6f:;
  /* 1012bd6f pop edi */
  EDI = (pop32());
  /* 1012bd70 pop esi */
  ESI = (pop32());
  /* 1012bd71 pop ebx */
  EBX = (pop32());
  /* 1012bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012bd73 ret  */
  ESPCHK(0x1012bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1012bd74 (137 bytes, 50 insns) */
void f_1012bd74(void) {
  FTRACE(0x1012bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1012bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012bd77 cmp dword ptr [0x10136838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10136838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1012bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1012bd7f jne 0x1012bdc3 */
  if (!C.zf) goto L_1012bdc3;
  /* 1012bd81 push 0x1012e548 */
  push32((uint32_t)(0x1012e548u));
  /* 1012bd86 call dword ptr [0x1012e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b0))), 0x1012bd8cu);
  /* 1012bd8c mov edi, eax */
  EDI = (EAX);
  /* 1012bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bd90 je 0x1012bdf9 */
  if (C.zf) goto L_1012bdf9;
  /* 1012bd92 mov esi, dword ptr [0x1012e088] */
  ESI = (r32((uint32_t)(0x1012e088)));
  /* 1012bd98 push 0x1012e53c */
  push32((uint32_t)(0x1012e53cu));
  /* 1012bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1012bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1012bda0u);
  /* 1012bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012bda2 mov dword ptr [0x10136838], eax */
  w32((uint32_t)(0x10136838), (EAX));
  /* 1012bda7 je 0x1012bdf9 */
  if (C.zf) goto L_1012bdf9;
  /* 1012bda9 push 0x1012e52c */
  push32((uint32_t)(0x1012e52cu));
  /* 1012bdae push edi */
  push32((uint32_t)(EDI));
  /* 1012bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1012bdb1u);
  /* 1012bdb1 push 0x1012e518 */
  push32((uint32_t)(0x1012e518u));
  /* 1012bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1012bdb7 mov dword ptr [0x1013683c], eax */
  w32((uint32_t)(0x1013683c), (EAX));
  /* 1012bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1012bdbeu);
  /* 1012bdbe mov dword ptr [0x10136840], eax */
  w32((uint32_t)(0x10136840), (EAX));
L_1012bdc3:;
  /* 1012bdc3 mov eax, dword ptr [0x1013683c] */
  EAX = (r32((uint32_t)(0x1013683c)));
  /* 1012bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012bdca je 0x1012bde2 */
  if (C.zf) goto L_1012bde2;
  /* 1012bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1012bdceu);
  /* 1012bdce mov ebx, eax */
  EBX = (EAX);
  /* 1012bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012bdd2 je 0x1012bde2 */
  if (C.zf) goto L_1012bde2;
  /* 1012bdd4 mov eax, dword ptr [0x10136840] */
  EAX = (r32((uint32_t)(0x10136840)));
  /* 1012bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012bddb je 0x1012bde2 */
  if (C.zf) goto L_1012bde2;
  /* 1012bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1012bdde call eax */
  call_ind((uint32_t)(EAX), 0x1012bde0u);
  /* 1012bde0 mov ebx, eax */
  EBX = (EAX);
L_1012bde2:;
  /* 1012bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1012bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1012bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1012bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1012bdef call dword ptr [0x10136838] */
  call_ind((uint32_t)(r32((uint32_t)(0x10136838))), 0x1012bdf5u);
L_1012bdf5:;
  /* 1012bdf5 pop edi */
  EDI = (pop32());
  /* 1012bdf6 pop esi */
  ESI = (pop32());
  /* 1012bdf7 pop ebx */
  EBX = (pop32());
  /* 1012bdf8 ret  */
  ESPCHK(0x1012bd74u, _esp0);
  ESP += 4; return;
L_1012bdf9:;
  /* 1012bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012bdfb jmp 0x1012bdf5 */
  goto L_1012bdf5;
}

/* _strncpy @ 0x1012be00 (254 bytes, 109 insns) */
void f_1012be00(void) {
  FTRACE(0x1012be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1012be04 push edi */
  push32((uint32_t)(EDI));
  /* 1012be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012be07 je 0x1012be83 */
  if (C.zf) goto L_1012be83;
  /* 1012be09 push esi */
  push32((uint32_t)(ESI));
  /* 1012be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1012be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1012be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1012be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1012be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1012be1b jne 0x1012be24 */
  if (!C.zf) goto L_1012be24;
  /* 1012be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012be20 jne 0x1012be91 */
  if (!C.zf) goto L_1012be91;
  /* 1012be22 jmp 0x1012be45 */
  goto L_1012be45;
L_1012be24:;
  /* 1012be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012be2b je 0x1012be52 */
  if (C.zf) goto L_1012be52;
  /* 1012be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012be2f je 0x1012be5a */
  if (C.zf) goto L_1012be5a;
  /* 1012be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1012be37 jne 0x1012be24 */
  if (!C.zf) goto L_1012be24;
  /* 1012be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1012be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012be3e jne 0x1012be91 */
  if (!C.zf) goto L_1012be91;
L_1012be40:;
  /* 1012be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1012be43 je 0x1012be52 */
  if (C.zf) goto L_1012be52;
L_1012be45:;
  /* 1012be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1012be4d je 0x1012be7e */
  if (C.zf) goto L_1012be7e;
  /* 1012be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1012be50 jne 0x1012be45 */
  if (!C.zf) goto L_1012be45;
L_1012be52:;
  /* 1012be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012be56 pop ebx */
  EBX = (pop32());
  /* 1012be57 pop esi */
  ESI = (pop32());
  /* 1012be58 pop edi */
  EDI = (pop32());
  /* 1012be59 ret  */
  ESPCHK(0x1012be00u, _esp0);
  ESP += 4; return;
L_1012be5a:;
  /* 1012be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1012be60 je 0x1012be74 */
  if (C.zf) goto L_1012be74;
L_1012be62:;
  /* 1012be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012be66 je 0x1012bef6 */
  if (C.zf) goto L_1012bef6;
  /* 1012be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1012be72 jne 0x1012be62 */
  if (!C.zf) goto L_1012be62;
L_1012be74:;
  /* 1012be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1012be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1012be79 jne 0x1012bee7 */
  if (!C.zf) goto L_1012bee7;
L_1012be7b:;
  /* 1012be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1012be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1012be7e:;
  /* 1012be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1012be7f jne 0x1012be7b */
  if (!C.zf) goto L_1012be7b;
  /* 1012be81 pop ebx */
  EBX = (pop32());
  /* 1012be82 pop esi */
  ESI = (pop32());
L_1012be83:;
  /* 1012be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012be87 pop edi */
  EDI = (pop32());
  /* 1012be88 ret  */
  ESPCHK(0x1012be00u, _esp0);
  ESP += 4; return;
L_1012be89:;
  /* 1012be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1012be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012be8f je 0x1012be40 */
  if (C.zf) goto L_1012be40;
L_1012be91:;
  /* 1012be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1012be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1012be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1012be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1012bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1012bea9 je 0x1012be89 */
  if (C.zf) goto L_1012be89;
  /* 1012beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1012bead je 0x1012bedb */
  if (C.zf) goto L_1012bedb;
  /* 1012beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1012beb1 je 0x1012bed1 */
  if (C.zf) goto L_1012bed1;
  /* 1012beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1012beb9 je 0x1012bec7 */
  if (C.zf) goto L_1012bec7;
  /* 1012bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1012bec1 jne 0x1012be89 */
  if (!C.zf) goto L_1012be89;
  /* 1012bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1012bec5 jmp 0x1012bedf */
  goto L_1012bedf;
L_1012bec7:;
  /* 1012bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1012becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1012becf jmp 0x1012bedf */
  goto L_1012bedf;
L_1012bed1:;
  /* 1012bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1012bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1012bed9 jmp 0x1012bedf */
  goto L_1012bedf;
L_1012bedb:;
  /* 1012bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1012bedf:;
  /* 1012bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012bee5 je 0x1012bef1 */
  if (C.zf) goto L_1012bef1;
L_1012bee7:;
  /* 1012bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012bee9:;
  /* 1012bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1012beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012beef jne 0x1012bee9 */
  if (!C.zf) goto L_1012bee9;
L_1012bef1:;
  /* 1012bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1012bef4 jne 0x1012be7b */
  if (!C.zf) goto L_1012be7b;
L_1012bef6:;
  /* 1012bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012befa pop ebx */
  EBX = (pop32());
  /* 1012befb pop esi */
  ESI = (pop32());
  /* 1012befc pop edi */
  EDI = (pop32());
  /* 1012befd ret  */
  ESPCHK(0x1012be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1012befe (115 bytes, 37 insns) */
void f_1012befe(void) {
  FTRACE(0x1012befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012befe push esi */
  push32((uint32_t)(ESI));
  /* 1012beff call 0x1012bf7a */
  push32(0x1012bf04u); f_1012bf7a();
  /* 1012bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012bf0c mov eax, 0x10132eb0 */
  EAX = (0x10132eb0u);
L_1012bf11:;
  /* 1012bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf13 je 0x1012bf37 */
  if (C.zf) goto L_1012bf37;
  /* 1012bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012bf19 cmp eax, 0x10133018 */
  { uint32_t _a=(EAX),_b=(0x10133018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf1e jl 0x1012bf11 */
  if ((C.sf!=C.of)) goto L_1012bf11;
  /* 1012bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf23 jb 0x1012bf47 */
  if (C.cf) goto L_1012bf47;
  /* 1012bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf28 ja 0x1012bf47 */
  if ((!C.cf&&!C.zf)) goto L_1012bf47;
  /* 1012bf2a call 0x1012bf71 */
  push32(0x1012bf2fu); f_1012bf71();
  /* 1012bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1012bf35 pop esi */
  ESI = (pop32());
  /* 1012bf36 ret  */
  ESPCHK(0x1012befeu, _esp0);
  ESP += 4; return;
L_1012bf37:;
  /* 1012bf37 call 0x1012bf71 */
  push32(0x1012bf3cu); f_1012bf71();
  /* 1012bf3c mov ecx, dword ptr [esi*8 + 0x10132eb4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10132eb4)));
  /* 1012bf43 pop esi */
  ESI = (pop32());
  /* 1012bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012bf46 ret  */
  ESPCHK(0x1012befeu, _esp0);
  ESP += 4; return;
L_1012bf47:;
  /* 1012bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf4d jb 0x1012bf64 */
  if (C.cf) goto L_1012bf64;
  /* 1012bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf55 ja 0x1012bf64 */
  if ((!C.cf&&!C.zf)) goto L_1012bf64;
  /* 1012bf57 call 0x1012bf71 */
  push32(0x1012bf5cu); f_1012bf71();
  /* 1012bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1012bf62 pop esi */
  ESI = (pop32());
  /* 1012bf63 ret  */
  ESPCHK(0x1012befeu, _esp0);
  ESP += 4; return;
L_1012bf64:;
  /* 1012bf64 call 0x1012bf71 */
  push32(0x1012bf69u); f_1012bf71();
  /* 1012bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1012bf6f pop esi */
  ESI = (pop32());
  /* 1012bf70 ret  */
  ESPCHK(0x1012befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1012bf71 (9 bytes, 3 insns) */
void f_1012bf71(void) {
  FTRACE(0x1012bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012bf71 call 0x10128048 */
  push32(0x1012bf76u); f_10128048();
  /* 1012bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bf79 ret  */
  ESPCHK(0x1012bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1012bf7a (9 bytes, 3 insns) */
void f_1012bf7a(void) {
  FTRACE(0x1012bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012bf7a call 0x10128048 */
  push32(0x1012bf7fu); f_10128048();
  /* 1012bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bf82 ret  */
  ESPCHK(0x1012bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1012bf83 (127 bytes, 48 insns) */
void f_1012bf83(void) {
  FTRACE(0x1012bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1012bf88 cmp ecx, dword ptr [0x10137d60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1012bf8f jae 0x1012bfe9 */
  if (!C.cf) goto L_1012bfe9;
  /* 1012bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1012bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1012bf96 lea edi, [eax*4 + 0x10137c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10137c60));
  /* 1012bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1012bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1012bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1012bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1012bfb0 je 0x1012bfe9 */
  if (C.zf) goto L_1012bfe9;
  /* 1012bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bfb5 je 0x1012bfe9 */
  if (C.zf) goto L_1012bfe9;
  /* 1012bfb7 cmp dword ptr [0x10136674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10136674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012bfbe jne 0x1012bfdf */
  if (!C.zf) goto L_1012bfdf;
  /* 1012bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012bfc4 je 0x1012bfd6 */
  if (C.zf) goto L_1012bfd6;
  /* 1012bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012bfc7 je 0x1012bfd1 */
  if (C.zf) goto L_1012bfd1;
  /* 1012bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012bfca jne 0x1012bfdf */
  if (!C.zf) goto L_1012bfdf;
  /* 1012bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1012bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1012bfcf jmp 0x1012bfd9 */
  goto L_1012bfd9;
L_1012bfd1:;
  /* 1012bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1012bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1012bfd4 jmp 0x1012bfd9 */
  goto L_1012bfd9;
L_1012bfd6:;
  /* 1012bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1012bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1012bfd9:;
  /* 1012bfd9 call dword ptr [0x1012e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b4))), 0x1012bfdfu);
L_1012bfdf:;
  /* 1012bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1012bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012bfe7 jmp 0x1012bfff */
  goto L_1012bfff;
L_1012bfe9:;
  /* 1012bfe9 call 0x1012bf71 */
  push32(0x1012bfeeu); f_1012bf71();
  /* 1012bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1012bff4 call 0x1012bf7a */
  push32(0x1012bff9u); f_1012bf7a();
  /* 1012bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1012bfff:;
  /* 1012bfff pop edi */
  EDI = (pop32());
  /* 1012c000 pop esi */
  ESI = (pop32());
  /* 1012c001 ret  */
  ESPCHK(0x1012bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1012c002 (66 bytes, 19 insns) */
void f_1012c002(void) {
  FTRACE(0x1012c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c006 cmp eax, dword ptr [0x10137d60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c00c jae 0x1012c02d */
  if (!C.cf) goto L_1012c02d;
  /* 1012c00e mov ecx, eax */
  ECX = (EAX);
  /* 1012c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1012c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1012c019 mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 1012c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1012c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1012c028 je 0x1012c02d */
  if (C.zf) goto L_1012c02d;
  /* 1012c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1012c02c ret  */
  ESPCHK(0x1012c002u, _esp0);
  ESP += 4; return;
L_1012c02d:;
  /* 1012c02d call 0x1012bf71 */
  push32(0x1012c032u); f_1012bf71();
  /* 1012c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1012c038 call 0x1012bf7a */
  push32(0x1012c03du); f_1012bf7a();
  /* 1012c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012c043 ret  */
  ESPCHK(0x1012c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1012c044 (95 bytes, 34 insns) */
void f_1012c044(void) {
  FTRACE(0x1012c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c049 mov ecx, eax */
  ECX = (EAX);
  /* 1012c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1012c051 push esi */
  push32((uint32_t)(ESI));
  /* 1012c052 push edi */
  push32((uint32_t)(EDI));
  /* 1012c053 mov esi, dword ptr [ecx*4 + 0x10137c60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 1012c05a lea ebx, [ecx*4 + 0x10137c60] */
  EBX = ((uint32_t)(ECX*4 + 0x10137c60));
  /* 1012c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1012c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1012c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c06d jne 0x1012c092 */
  if (!C.zf) goto L_1012c092;
  /* 1012c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1012c071 call 0x1012a013 */
  push32(0x1012c076u); f_1012a013();
  /* 1012c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c07a pop ecx */
  ECX = (pop32());
  /* 1012c07b jne 0x1012c08a */
  if (!C.zf) goto L_1012c08a;
  /* 1012c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1012c080 push eax */
  push32((uint32_t)(EAX));
  /* 1012c081 call dword ptr [0x1012e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e094))), 0x1012c087u);
  /* 1012c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1012c08a:;
  /* 1012c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1012c08c call 0x1012a074 */
  push32(0x1012c091u); f_1012a074();
  /* 1012c091 pop ecx */
  ECX = (pop32());
L_1012c092:;
  /* 1012c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1012c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1012c098 push eax */
  push32((uint32_t)(EAX));
  /* 1012c099 call dword ptr [0x1012e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e00c))), 0x1012c09fu);
  /* 1012c09f pop edi */
  EDI = (pop32());
  /* 1012c0a0 pop esi */
  ESI = (pop32());
  /* 1012c0a1 pop ebx */
  EBX = (pop32());
  /* 1012c0a2 ret  */
  ESPCHK(0x1012c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1012c0a3 (34 bytes, 10 insns) */
void f_1012c0a3(void) {
  FTRACE(0x1012c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1012c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1012c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1012c0b2 mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 1012c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1012c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1012c0be call dword ptr [0x1012e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e008))), 0x1012c0c4u);
  /* 1012c0c4 ret  */
  ESPCHK(0x1012c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1012c146 (46 bytes, 22 insns) */
void f_1012c146(void) {
  FTRACE(0x1012c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c146 push esi */
  push32((uint32_t)(ESI));
  /* 1012c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012c14b push esi */
  push32((uint32_t)(ESI));
  /* 1012c14c call 0x1012c174 */
  push32(0x1012c151u); f_1012c174();
  /* 1012c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c153 pop ecx */
  ECX = (pop32());
  /* 1012c154 je 0x1012c15b */
  if (C.zf) goto L_1012c15b;
  /* 1012c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012c159 pop esi */
  ESI = (pop32());
  /* 1012c15a ret  */
  ESPCHK(0x1012c146u, _esp0);
  ESP += 4; return;
L_1012c15b:;
  /* 1012c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1012c15f je 0x1012c170 */
  if (C.zf) goto L_1012c170;
  /* 1012c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1012c164 call 0x1012d2c0 */
  push32(0x1012c169u); f_1012d2c0();
  /* 1012c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012c16b pop ecx */
  ECX = (pop32());
  /* 1012c16c pop esi */
  ESI = (pop32());
  /* 1012c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c16f ret  */
  ESPCHK(0x1012c146u, _esp0);
  ESP += 4; return;
L_1012c170:;
  /* 1012c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012c172 pop esi */
  ESI = (pop32());
  /* 1012c173 ret  */
  ESPCHK(0x1012c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1012c174 (92 bytes, 40 insns) */
void f_1012c174(void) {
  FTRACE(0x1012c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c175 push esi */
  push32((uint32_t)(ESI));
  /* 1012c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1012c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012c17c push edi */
  push32((uint32_t)(EDI));
  /* 1012c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1012c180 mov ecx, eax */
  ECX = (EAX);
  /* 1012c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1012c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c188 jne 0x1012c1c1 */
  if (!C.zf) goto L_1012c1c1;
  /* 1012c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1012c18e je 0x1012c1c1 */
  if (C.zf) goto L_1012c1c1;
  /* 1012c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1012c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1012c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012c199 jle 0x1012c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1012c1c1;
  /* 1012c19b push edi */
  push32((uint32_t)(EDI));
  /* 1012c19c push eax */
  push32((uint32_t)(EAX));
  /* 1012c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1012c1a0 call 0x10128c75 */
  push32(0x1012c1a5u); f_10128c75();
  /* 1012c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c1aa jne 0x1012c1ba */
  if (!C.zf) goto L_1012c1ba;
  /* 1012c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1012c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1012c1b1 je 0x1012c1c1 */
  if (C.zf) goto L_1012c1c1;
  /* 1012c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1012c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1012c1b8 jmp 0x1012c1c1 */
  goto L_1012c1c1;
L_1012c1ba:;
  /* 1012c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1012c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1012c1c1:;
  /* 1012c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1012c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1012c1ca pop edi */
  EDI = (pop32());
  /* 1012c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1012c1cd pop esi */
  ESI = (pop32());
  /* 1012c1ce pop ebx */
  EBX = (pop32());
  /* 1012c1cf ret  */
  ESPCHK(0x1012c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1012c1d9 (164 bytes, 66 insns) */
void f_1012c1d9(void) {
  FTRACE(0x1012c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c1da push esi */
  push32((uint32_t)(ESI));
  /* 1012c1db push edi */
  push32((uint32_t)(EDI));
  /* 1012c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1012c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012c1e2 call 0x1012a013 */
  push32(0x1012c1e7u); f_1012a013();
  /* 1012c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012c1e9 pop ecx */
  ECX = (pop32());
  /* 1012c1ea cmp dword ptr [0x10137c40], esi */
  { uint32_t _a=(r32((uint32_t)(0x10137c40))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c1f0 jle 0x1012c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1012c266;
L_1012c1f2:;
  /* 1012c1f2 mov eax, dword ptr [0x10136c28] */
  EAX = (r32((uint32_t)(0x10136c28)));
  /* 1012c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1012c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c1fc je 0x1012c25d */
  if (C.zf) goto L_1012c25d;
  /* 1012c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1012c202 je 0x1012c25d */
  if (C.zf) goto L_1012c25d;
  /* 1012c204 push eax */
  push32((uint32_t)(EAX));
  /* 1012c205 push esi */
  push32((uint32_t)(ESI));
  /* 1012c206 call 0x10128fbd */
  push32(0x1012c20bu); f_10128fbd();
  /* 1012c20b mov eax, dword ptr [0x10136c28] */
  EAX = (r32((uint32_t)(0x10136c28)));
  /* 1012c210 pop ecx */
  ECX = (pop32());
  /* 1012c211 pop ecx */
  ECX = (pop32());
  /* 1012c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1012c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1012c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1012c21b je 0x1012c24d */
  if (C.zf) goto L_1012c24d;
  /* 1012c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c222 jne 0x1012c233 */
  if (!C.zf) goto L_1012c233;
  /* 1012c224 push eax */
  push32((uint32_t)(EAX));
  /* 1012c225 call 0x1012c146 */
  push32(0x1012c22au); f_1012c146();
  /* 1012c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c22d pop ecx */
  ECX = (pop32());
  /* 1012c22e je 0x1012c24d */
  if (C.zf) goto L_1012c24d;
  /* 1012c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1012c231 jmp 0x1012c24d */
  goto L_1012c24d;
L_1012c233:;
  /* 1012c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c238 jne 0x1012c24d */
  if (!C.zf) goto L_1012c24d;
  /* 1012c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1012c23d je 0x1012c24d */
  if (C.zf) goto L_1012c24d;
  /* 1012c23f push eax */
  push32((uint32_t)(EAX));
  /* 1012c240 call 0x1012c146 */
  push32(0x1012c245u); f_1012c146();
  /* 1012c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c248 pop ecx */
  ECX = (pop32());
  /* 1012c249 jne 0x1012c24d */
  if (!C.zf) goto L_1012c24d;
  /* 1012c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1012c24d:;
  /* 1012c24d mov eax, dword ptr [0x10136c28] */
  EAX = (r32((uint32_t)(0x10136c28)));
  /* 1012c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1012c255 push esi */
  push32((uint32_t)(ESI));
  /* 1012c256 call 0x1012900f */
  push32(0x1012c25bu); f_1012900f();
  /* 1012c25b pop ecx */
  ECX = (pop32());
  /* 1012c25c pop ecx */
  ECX = (pop32());
L_1012c25d:;
  /* 1012c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012c25e cmp esi, dword ptr [0x10137c40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10137c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c264 jl 0x1012c1f2 */
  if ((C.sf!=C.of)) goto L_1012c1f2;
L_1012c266:;
  /* 1012c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012c268 call 0x1012a074 */
  push32(0x1012c26du); f_1012a074();
  /* 1012c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c272 pop ecx */
  ECX = (pop32());
  /* 1012c273 mov eax, ebx */
  EAX = (EBX);
  /* 1012c275 je 0x1012c279 */
  if (C.zf) goto L_1012c279;
  /* 1012c277 mov eax, edi */
  EAX = (EDI);
L_1012c279:;
  /* 1012c279 pop edi */
  EDI = (pop32());
  /* 1012c27a pop esi */
  ESI = (pop32());
  /* 1012c27b pop ebx */
  EBX = (pop32());
  /* 1012c27c ret  */
  ESPCHK(0x1012c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1012c27d (318 bytes, 123 insns) */
void f_1012c27d(void) {
  FTRACE(0x1012c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1012c27e mov ebp, esp */
  EBP = (ESP);
  /* 1012c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1012c282 push 0x1012e560 */
  push32((uint32_t)(0x1012e560u));
  /* 1012c287 push 0x1012d030 */
  push32((uint32_t)(0x1012d030u));
  /* 1012c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1012c292 push eax */
  push32((uint32_t)(EAX));
  /* 1012c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1012c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1012c29e push esi */
  push32((uint32_t)(ESI));
  /* 1012c29f push edi */
  push32((uint32_t)(EDI));
  /* 1012c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1012c2a3 mov eax, dword ptr [0x10136884] */
  EAX = (r32((uint32_t)(0x10136884)));
  /* 1012c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c2ac jne 0x1012c2ec */
  if (!C.zf) goto L_1012c2ec;
  /* 1012c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1012c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1012c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c2b4 pop esi */
  ESI = (pop32());
  /* 1012c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1012c2b6 push 0x1012e558 */
  push32((uint32_t)(0x1012e558u));
  /* 1012c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1012c2bc call dword ptr [0x1012e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c0))), 0x1012c2c2u);
  /* 1012c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c2c4 je 0x1012c2ca */
  if (C.zf) goto L_1012c2ca;
  /* 1012c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1012c2c8 jmp 0x1012c2e7 */
  goto L_1012c2e7;
L_1012c2ca:;
  /* 1012c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1012c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1012c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1012c2cf push 0x1012e554 */
  push32((uint32_t)(0x1012e554u));
  /* 1012c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1012c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c2d6 call dword ptr [0x1012e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0bc))), 0x1012c2dcu);
  /* 1012c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c2de je 0x1012c3b2 */
  if (C.zf) goto L_1012c3b2;
  /* 1012c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012c2e6 pop eax */
  EAX = (pop32());
L_1012c2e7:;
  /* 1012c2e7 mov dword ptr [0x10136884], eax */
  w32((uint32_t)(0x10136884), (EAX));
L_1012c2ec:;
  /* 1012c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c2ef jne 0x1012c315 */
  if (!C.zf) goto L_1012c315;
  /* 1012c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1012c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c2f6 jne 0x1012c2fd */
  if (!C.zf) goto L_1012c2fd;
  /* 1012c2f8 mov eax, dword ptr [0x10136858] */
  EAX = (r32((uint32_t)(0x10136858)));
L_1012c2fd:;
  /* 1012c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c309 push eax */
  push32((uint32_t)(EAX));
  /* 1012c30a call dword ptr [0x1012e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0bc))), 0x1012c310u);
  /* 1012c310 jmp 0x1012c3b4 */
  goto L_1012c3b4;
L_1012c315:;
  /* 1012c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c318 jne 0x1012c3b2 */
  if (!C.zf) goto L_1012c3b2;
  /* 1012c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c321 jne 0x1012c32b */
  if (!C.zf) goto L_1012c32b;
  /* 1012c323 mov eax, dword ptr [0x10136868] */
  EAX = (r32((uint32_t)(0x10136868)));
  /* 1012c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1012c32b:;
  /* 1012c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1012c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1012c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1012c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1012c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012c33e push eax */
  push32((uint32_t)(EAX));
  /* 1012c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1012c342 call dword ptr [0x1012e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b8))), 0x1012c348u);
  /* 1012c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1012c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c34d je 0x1012c3b2 */
  if (C.zf) goto L_1012c3b2;
  /* 1012c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1012c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1012c355 mov eax, edi */
  EAX = (EDI);
  /* 1012c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1012c35c call 0x1012aed0 */
  push32(0x1012c361u); f_1012aed0();
  /* 1012c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1012c364 mov esi, esp */
  ESI = (ESP);
  /* 1012c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1012c369 push edi */
  push32((uint32_t)(EDI));
  /* 1012c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1012c36b push esi */
  push32((uint32_t)(ESI));
  /* 1012c36c call 0x10129be0 */
  push32(0x1012c371u); f_10129be0();
  /* 1012c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c374 jmp 0x1012c381 */
  goto L_1012c381;
  /* 1012c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c378 pop eax */
  EAX = (pop32());
  /* 1012c379 ret  */
  ESPCHK(0x1012c27du, _esp0);
  ESP += 4; return;
  /* 1012c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1012c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1012c381:;
  /* 1012c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c387 je 0x1012c3b2 */
  if (C.zf) goto L_1012c3b2;
  /* 1012c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1012c38c push esi */
  push32((uint32_t)(ESI));
  /* 1012c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1012c398 call dword ptr [0x1012e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b8))), 0x1012c39eu);
  /* 1012c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c3a0 je 0x1012c3b2 */
  if (C.zf) goto L_1012c3b2;
  /* 1012c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1012c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1012c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c3aa call dword ptr [0x1012e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c0))), 0x1012c3b0u);
  /* 1012c3b0 jmp 0x1012c3b4 */
  goto L_1012c3b4;
L_1012c3b2:;
  /* 1012c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012c3b4:;
  /* 1012c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1012c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1012c3c1 pop edi */
  EDI = (pop32());
  /* 1012c3c2 pop esi */
  ESI = (pop32());
  /* 1012c3c3 pop ebx */
  EBX = (pop32());
  /* 1012c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012c3c5 ret  */
  ESPCHK(0x1012c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1012c3c6 (511 bytes, 193 insns) */
void f_1012c3c6(void) {
  FTRACE(0x1012c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1012c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1012c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1012c3cb push 0x1012e570 */
  push32((uint32_t)(0x1012e570u));
  /* 1012c3d0 push 0x1012d030 */
  push32((uint32_t)(0x1012d030u));
  /* 1012c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1012c3db push eax */
  push32((uint32_t)(EAX));
  /* 1012c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1012c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1012c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1012c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1012c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012c3ee cmp dword ptr [0x10136888], edi */
  { uint32_t _a=(r32((uint32_t)(0x10136888))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c3f4 jne 0x1012c43c */
  if (!C.zf) goto L_1012c43c;
  /* 1012c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1012c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1012c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c3fa pop ebx */
  EBX = (pop32());
  /* 1012c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1012c3fc push 0x1012e558 */
  push32((uint32_t)(0x1012e558u));
  /* 1012c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1012c406 push esi */
  push32((uint32_t)(ESI));
  /* 1012c407 push edi */
  push32((uint32_t)(EDI));
  /* 1012c408 call dword ptr [0x1012e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c8))), 0x1012c40eu);
  /* 1012c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c410 je 0x1012c41a */
  if (C.zf) goto L_1012c41a;
  /* 1012c412 mov dword ptr [0x10136888], ebx */
  w32((uint32_t)(0x10136888), (EBX));
  /* 1012c418 jmp 0x1012c43c */
  goto L_1012c43c;
L_1012c41a:;
  /* 1012c41a push edi */
  push32((uint32_t)(EDI));
  /* 1012c41b push edi */
  push32((uint32_t)(EDI));
  /* 1012c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1012c41d push 0x1012e554 */
  push32((uint32_t)(0x1012e554u));
  /* 1012c422 push esi */
  push32((uint32_t)(ESI));
  /* 1012c423 push edi */
  push32((uint32_t)(EDI));
  /* 1012c424 call dword ptr [0x1012e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c4))), 0x1012c42au);
  /* 1012c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c42c je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c432 mov dword ptr [0x10136888], 2 */
  w32((uint32_t)(0x10136888), (0x2u));
L_1012c43c:;
  /* 1012c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c43f jle 0x1012c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1012c451;
  /* 1012c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c447 call 0x1012c5ea */
  push32(0x1012c44cu); f_1012c5ea();
  /* 1012c44c pop ecx */
  ECX = (pop32());
  /* 1012c44d pop ecx */
  ECX = (pop32());
  /* 1012c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1012c451:;
  /* 1012c451 mov eax, dword ptr [0x10136888] */
  EAX = (r32((uint32_t)(0x10136888)));
  /* 1012c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c459 jne 0x1012c478 */
  if (!C.zf) goto L_1012c478;
  /* 1012c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1012c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1012c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c46d call dword ptr [0x1012e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c4))), 0x1012c473u);
  /* 1012c473 jmp 0x1012c556 */
  goto L_1012c556;
L_1012c478:;
  /* 1012c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c47b jne 0x1012c554 */
  if (!C.zf) goto L_1012c554;
  /* 1012c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c484 jne 0x1012c48e */
  if (!C.zf) goto L_1012c48e;
  /* 1012c486 mov eax, dword ptr [0x10136868] */
  EAX = (r32((uint32_t)(0x10136868)));
  /* 1012c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1012c48e:;
  /* 1012c48e push edi */
  push32((uint32_t)(EDI));
  /* 1012c48f push edi */
  push32((uint32_t)(EDI));
  /* 1012c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1012c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1012c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1012c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1012c4a5 call dword ptr [0x1012e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b8))), 0x1012c4abu);
  /* 1012c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1012c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1012c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c4b2 je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1012c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1012c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1012c4c3 call 0x1012aed0 */
  push32(0x1012c4c8u); f_1012aed0();
  /* 1012c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1012c4cb mov eax, esp */
  EAX = (ESP);
  /* 1012c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1012c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012c4d4 jmp 0x1012c4e9 */
  goto L_1012c4e9;
  /* 1012c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c4d8 pop eax */
  EAX = (pop32());
  /* 1012c4d9 ret  */
  ESPCHK(0x1012c3c6u, _esp0);
  ESP += 4; return;
  /* 1012c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1012c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1012c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1012c4e9:;
  /* 1012c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c4ec je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1012c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1012c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1012c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1012c4fd call dword ptr [0x1012e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0b8))), 0x1012c503u);
  /* 1012c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c505 je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c507 push edi */
  push32((uint32_t)(EDI));
  /* 1012c508 push edi */
  push32((uint32_t)(EDI));
  /* 1012c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1012c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c513 call dword ptr [0x1012e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c8))), 0x1012c519u);
  /* 1012c519 mov esi, eax */
  ESI = (EAX);
  /* 1012c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1012c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c520 je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1012c526 je 0x1012c568 */
  if (C.zf) goto L_1012c568;
  /* 1012c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c52b je 0x1012c5e3 */
  if (C.zf) goto L_1012c5e3;
  /* 1012c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c534 jg 0x1012c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012c554;
  /* 1012c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1012c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1012c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1012c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1012c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c546 call dword ptr [0x1012e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c8))), 0x1012c54cu);
  /* 1012c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c54e jne 0x1012c5e3 */
  if (!C.zf) goto L_1012c5e3;
L_1012c554:;
  /* 1012c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012c556:;
  /* 1012c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1012c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1012c563 pop edi */
  EDI = (pop32());
  /* 1012c564 pop esi */
  ESI = (pop32());
  /* 1012c565 pop ebx */
  EBX = (pop32());
  /* 1012c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012c567 ret  */
  ESPCHK(0x1012c3c6u, _esp0);
  ESP += 4; return;
L_1012c568:;
  /* 1012c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1012c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1012c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1012c577 call 0x1012aed0 */
  push32(0x1012c57cu); f_1012aed0();
  /* 1012c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1012c57f mov ebx, esp */
  EBX = (ESP);
  /* 1012c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1012c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012c588 jmp 0x1012c59c */
  goto L_1012c59c;
  /* 1012c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c58c pop eax */
  EAX = (pop32());
  /* 1012c58d ret  */
  ESPCHK(0x1012c3c6u, _esp0);
  ESP += 4; return;
  /* 1012c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1012c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1012c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1012c59c:;
  /* 1012c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c59e je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1012c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1012c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1012c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1012c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012c5ae call dword ptr [0x1012e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0c8))), 0x1012c5b4u);
  /* 1012c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c5b6 je 0x1012c554 */
  if (C.zf) goto L_1012c554;
  /* 1012c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1012c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1012c5bd jne 0x1012c5c3 */
  if (!C.zf) goto L_1012c5c3;
  /* 1012c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1012c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1012c5c1 jmp 0x1012c5c9 */
  goto L_1012c5c9;
L_1012c5c3:;
  /* 1012c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1012c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1012c5c9:;
  /* 1012c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1012c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1012c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1012c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1012c5d3 call dword ptr [0x1012e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e060))), 0x1012c5d9u);
  /* 1012c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1012c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c5dd je 0x1012c554 */
  if (C.zf) goto L_1012c554;
L_1012c5e3:;
  /* 1012c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1012c5e5 jmp 0x1012c556 */
  goto L_1012c556;
}

/* FUN_1000c5ea @ 0x1012c5ea (43 bytes, 20 insns) */
void f_1012c5ea(void) {
  FTRACE(0x1012c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1012c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1012c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1012c5f8 je 0x1012c607 */
  if (C.zf) goto L_1012c607;
L_1012c5fa:;
  /* 1012c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c5fd je 0x1012c607 */
  if (C.zf) goto L_1012c607;
  /* 1012c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012c600 mov esi, ecx */
  ESI = (ECX);
  /* 1012c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012c605 jne 0x1012c5fa */
  if (!C.zf) goto L_1012c5fa;
L_1012c607:;
  /* 1012c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c60a pop esi */
  ESI = (pop32());
  /* 1012c60b jne 0x1012c612 */
  if (!C.zf) goto L_1012c612;
  /* 1012c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c611 ret  */
  ESPCHK(0x1012c5eau, _esp0);
  ESP += 4; return;
L_1012c612:;
  /* 1012c612 mov eax, edx */
  EAX = (EDX);
  /* 1012c614 ret  */
  ESPCHK(0x1012c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1012c615 (33 bytes, 15 insns) */
void f_1012c615(void) {
  FTRACE(0x1012c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c619 push esi */
  push32((uint32_t)(ESI));
  /* 1012c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1012c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1012c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c625 jb 0x1012c62b */
  if (C.cf) goto L_1012c62b;
  /* 1012c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c629 jae 0x1012c62e */
  if (!C.cf) goto L_1012c62e;
L_1012c62b:;
  /* 1012c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c62d pop eax */
  EAX = (pop32());
L_1012c62e:;
  /* 1012c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012c632 pop esi */
  ESI = (pop32());
  /* 1012c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1012c635 ret  */
  ESPCHK(0x1012c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1012c636 (94 bytes, 38 insns) */
void f_1012c636(void) {
  FTRACE(0x1012c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c636 push esi */
  push32((uint32_t)(ESI));
  /* 1012c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012c63b push edi */
  push32((uint32_t)(EDI));
  /* 1012c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1012c640 push esi */
  push32((uint32_t)(ESI));
  /* 1012c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1012c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1012c645 call 0x1012c615 */
  push32(0x1012c64au); f_1012c615();
  /* 1012c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c64f je 0x1012c668 */
  if (C.zf) goto L_1012c668;
  /* 1012c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1012c654 push eax */
  push32((uint32_t)(EAX));
  /* 1012c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1012c659 call 0x1012c615 */
  push32(0x1012c65eu); f_1012c615();
  /* 1012c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c663 je 0x1012c668 */
  if (C.zf) goto L_1012c668;
  /* 1012c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1012c668:;
  /* 1012c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1012c66b push eax */
  push32((uint32_t)(EAX));
  /* 1012c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1012c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1012c671 call 0x1012c615 */
  push32(0x1012c676u); f_1012c615();
  /* 1012c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c67b je 0x1012c680 */
  if (C.zf) goto L_1012c680;
  /* 1012c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1012c680:;
  /* 1012c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1012c683 push eax */
  push32((uint32_t)(EAX));
  /* 1012c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1012c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1012c689 call 0x1012c615 */
  push32(0x1012c68eu); f_1012c615();
  /* 1012c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c691 pop edi */
  EDI = (pop32());
  /* 1012c692 pop esi */
  ESI = (pop32());
  /* 1012c693 ret  */
  ESPCHK(0x1012c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1012c694 (46 bytes, 21 insns) */
void f_1012c694(void) {
  FTRACE(0x1012c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c698 push esi */
  push32((uint32_t)(ESI));
  /* 1012c699 push edi */
  push32((uint32_t)(EDI));
  /* 1012c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1012c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1012c69f mov ecx, esi */
  ECX = (ESI);
  /* 1012c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1012c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1012c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1012c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1012c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1012c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1012c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1012c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1012c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1012c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1012c6bc pop edi */
  EDI = (pop32());
  /* 1012c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1012c6c0 pop esi */
  ESI = (pop32());
  /* 1012c6c1 ret  */
  ESPCHK(0x1012c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1012c6c2 (45 bytes, 21 insns) */
void f_1012c6c2(void) {
  FTRACE(0x1012c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1012c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1012c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1012c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1012c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1012c6ce mov esi, edx */
  ESI = (EDX);
  /* 1012c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1012c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1012c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1012c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1012c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1012c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1012c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1012c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1012c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1012c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1012c6e7 pop edi */
  EDI = (pop32());
  /* 1012c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1012c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1012c6ed pop esi */
  ESI = (pop32());
  /* 1012c6ee ret  */
  ESPCHK(0x1012c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1012c6ef (199 bytes, 76 insns) */
void f_1012c6ef(void) {
  FTRACE(0x1012c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1012c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1012c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c700 push esi */
  push32((uint32_t)(ESI));
  /* 1012c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1012c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1012c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1012c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1012c710 jbe 0x1012c763 */
  if ((C.cf||C.zf)) goto L_1012c763;
  /* 1012c712 push edi */
  push32((uint32_t)(EDI));
  /* 1012c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1012c716:;
  /* 1012c716 mov esi, ebx */
  ESI = (EBX);
  /* 1012c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1012c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1012c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012c71f call 0x1012c694 */
  push32(0x1012c724u); f_1012c694();
  /* 1012c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c725 call 0x1012c694 */
  push32(0x1012c72au); f_1012c694();
  /* 1012c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012c72d push eax */
  push32((uint32_t)(EAX));
  /* 1012c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1012c72f call 0x1012c636 */
  push32(0x1012c734u); f_1012c636();
  /* 1012c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1012c735 call 0x1012c694 */
  push32(0x1012c73au); f_1012c694();
  /* 1012c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1012c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1012c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1012c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1012c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012c74e push eax */
  push32((uint32_t)(EAX));
  /* 1012c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1012c750 call 0x1012c636 */
  push32(0x1012c755u); f_1012c636();
  /* 1012c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1012c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1012c75e jne 0x1012c716 */
  if (!C.zf) goto L_1012c716;
  /* 1012c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012c762 pop edi */
  EDI = (pop32());
L_1012c763:;
  /* 1012c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c766 jne 0x1012c790 */
  if (!C.zf) goto L_1012c790;
  /* 1012c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1012c76b mov eax, ecx */
  EAX = (ECX);
  /* 1012c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1012c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1012c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1012c775 mov esi, eax */
  ESI = (EAX);
  /* 1012c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1012c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1012c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1012c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1012c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1012c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1012c78e jmp 0x1012c763 */
  goto L_1012c763;
L_1012c790:;
  /* 1012c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1012c795:;
  /* 1012c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1012c798 jne 0x1012c7aa */
  if (!C.zf) goto L_1012c7aa;
  /* 1012c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1012c79b call 0x1012c694 */
  push32(0x1012c7a0u); f_1012c694();
  /* 1012c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012c7a7 pop ecx */
  ECX = (pop32());
  /* 1012c7a8 jmp 0x1012c795 */
  goto L_1012c795;
L_1012c7aa:;
  /* 1012c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1012c7ae pop esi */
  ESI = (pop32());
  /* 1012c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1012c7b3 pop ebx */
  EBX = (pop32());
  /* 1012c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012c7b5 ret  */
  ESPCHK(0x1012c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1012c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1012c7b6(void) {
  FTRACE(0x1012c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1012c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1012c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1012c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1012c7be push edi */
  push32((uint32_t)(EDI));
  /* 1012c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1012c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1012c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1012c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012c7cc pop edx */
  EDX = (pop32());
  /* 1012c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1012c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1012c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1012c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1012c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1012c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1012c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1012c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1012c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1012c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1012c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1012c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1012c7f1:;
  /* 1012c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1012c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c7f6 je 0x1012c807 */
  if (C.zf) goto L_1012c807;
  /* 1012c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c7fb je 0x1012c807 */
  if (C.zf) goto L_1012c807;
  /* 1012c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c800 je 0x1012c807 */
  if (C.zf) goto L_1012c807;
  /* 1012c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c805 jne 0x1012c80a */
  if (!C.zf) goto L_1012c80a;
L_1012c807:;
  /* 1012c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012c808 jmp 0x1012c7f1 */
  goto L_1012c7f1;
L_1012c80a:;
  /* 1012c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1012c80c pop esi */
  ESI = (pop32());
L_1012c80d:;
  /* 1012c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c813 ja 0x1012ca90 */
  if ((!C.cf&&!C.zf)) goto L_1012ca90;
  /* 1012c819 jmp dword ptr [eax*4 + 0x1012cc57] */
  switch (EAX) {
    case 0: goto L_1012c820;
    case 1: goto L_1012c86f;
    case 2: goto L_1012c8c6;
    case 3: goto L_1012c8f0;
    case 4: goto L_1012c94b;
    case 5: goto L_1012c9c2;
    case 6: goto L_1012c9f8;
    case 7: goto L_1012ca42;
    case 8: goto L_1012ca21;
    case 9: goto L_1012caa6;
    case 10: goto L_1012ca90;
    case 11: goto L_1012ca5c;
    default: x86_unimpl("switch@0x1012c819 out of table"); return;
  }
L_1012c820:;
  /* 1012c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c823 jl 0x1012c831 */
  if ((C.sf!=C.of)) goto L_1012c831;
  /* 1012c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c828 jg 0x1012c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012c831;
L_1012c82a:;
  /* 1012c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1012c82c jmp 0x1012ca4e */
  goto L_1012ca4e;
L_1012c831:;
  /* 1012c831 cmp bl, byte ptr [0x10130c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10130c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c837 jne 0x1012c840 */
  if (!C.zf) goto L_1012c840;
L_1012c839:;
  /* 1012c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1012c83b jmp 0x1012ca86 */
  goto L_1012ca86;
L_1012c840:;
  /* 1012c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c846 je 0x1012c866 */
  if (C.zf) goto L_1012c866;
  /* 1012c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012c84a je 0x1012c85a */
  if (C.zf) goto L_1012c85a;
  /* 1012c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012c84f jne 0x1012cb29 */
  if (!C.zf) goto L_1012cb29;
  /* 1012c855 jmp 0x1012c8e9 */
  goto L_1012c8e9;
L_1012c85a:;
  /* 1012c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1012c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1012c863 pop eax */
  EAX = (pop32());
  /* 1012c864 jmp 0x1012c80d */
  goto L_1012c80d;
L_1012c866:;
  /* 1012c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1012c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1012c86c pop eax */
  EAX = (pop32());
  /* 1012c86d jmp 0x1012c80d */
  goto L_1012c80d;
L_1012c86f:;
  /* 1012c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1012c875 jl 0x1012c87c */
  if ((C.sf!=C.of)) goto L_1012c87c;
  /* 1012c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c87a jle 0x1012c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1012c82a;
L_1012c87c:;
  /* 1012c87c cmp bl, byte ptr [0x10130c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10130c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c882 je 0x1012c944 */
  if (C.zf) goto L_1012c944;
  /* 1012c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c88b je 0x1012c8be */
  if (C.zf) goto L_1012c8be;
  /* 1012c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c890 je 0x1012c8be */
  if (C.zf) goto L_1012c8be;
  /* 1012c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c895 je 0x1012c8e9 */
  if (C.zf) goto L_1012c8e9;
L_1012c897:;
  /* 1012c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c89a jle 0x1012cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1012cb29;
  /* 1012c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8a3 jle 0x1012c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1012c8b7;
  /* 1012c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8a8 jle 0x1012cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1012cb29;
  /* 1012c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8b1 jg 0x1012cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012cb29;
L_1012c8b7:;
  /* 1012c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1012c8b9 jmp 0x1012ca86 */
  goto L_1012ca86;
L_1012c8be:;
  /* 1012c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1012c8c1 jmp 0x1012ca86 */
  goto L_1012ca86;
L_1012c8c6:;
  /* 1012c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8c9 jl 0x1012c8d4 */
  if ((C.sf!=C.of)) goto L_1012c8d4;
  /* 1012c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8ce jle 0x1012c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1012c82a;
L_1012c8d4:;
  /* 1012c8d4 cmp bl, byte ptr [0x10130c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10130c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8da je 0x1012c839 */
  if (C.zf) goto L_1012c839;
  /* 1012c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c8e3 jne 0x1012ca9e */
  if (!C.zf) goto L_1012ca9e;
L_1012c8e9:;
  /* 1012c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1012c8eb jmp 0x1012c80d */
  goto L_1012c80d;
L_1012c8f0:;
  /* 1012c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1012c8f3:;
  /* 1012c8f3 cmp dword ptr [0x10130c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c8f9 jle 0x1012c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1012c90c;
  /* 1012c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1012c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1012c900 call 0x101293cb */
  push32(0x1012c905u); f_101293cb();
  /* 1012c905 pop ecx */
  ECX = (pop32());
  /* 1012c906 pop ecx */
  ECX = (pop32());
  /* 1012c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c909 pop edx */
  EDX = (pop32());
  /* 1012c90a jmp 0x1012c91a */
  goto L_1012c91a;
L_1012c90c:;
  /* 1012c90c mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1012c91a:;
  /* 1012c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c91c je 0x1012c93c */
  if (C.zf) goto L_1012c93c;
  /* 1012c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c922 jae 0x1012c934 */
  if (!C.cf) goto L_1012c934;
  /* 1012c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1012c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1012c932 jmp 0x1012c937 */
  goto L_1012c937;
L_1012c934:;
  /* 1012c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1012c937:;
  /* 1012c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012c93a jmp 0x1012c8f3 */
  goto L_1012c8f3;
L_1012c93c:;
  /* 1012c93c cmp bl, byte ptr [0x10130c04] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10130c04))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c942 jne 0x1012c9ab */
  if (!C.zf) goto L_1012c9ab;
L_1012c944:;
  /* 1012c944 mov eax, esi */
  EAX = (ESI);
  /* 1012c946 jmp 0x1012c80d */
  goto L_1012c80d;
L_1012c94b:;
  /* 1012c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1012c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1012c955 jne 0x1012c964 */
  if (!C.zf) goto L_1012c964;
L_1012c957:;
  /* 1012c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c95a jne 0x1012c964 */
  if (!C.zf) goto L_1012c964;
  /* 1012c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1012c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012c962 jmp 0x1012c957 */
  goto L_1012c957;
L_1012c964:;
  /* 1012c964 cmp dword ptr [0x10130c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c96a jle 0x1012c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1012c97d;
  /* 1012c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c96f push esi */
  push32((uint32_t)(ESI));
  /* 1012c970 push eax */
  push32((uint32_t)(EAX));
  /* 1012c971 call 0x101293cb */
  push32(0x1012c976u); f_101293cb();
  /* 1012c976 pop ecx */
  ECX = (pop32());
  /* 1012c977 pop ecx */
  ECX = (pop32());
  /* 1012c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c97a pop edx */
  EDX = (pop32());
  /* 1012c97b jmp 0x1012c98b */
  goto L_1012c98b;
L_1012c97d:;
  /* 1012c97d mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1012c98b:;
  /* 1012c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c98d je 0x1012c9ab */
  if (C.zf) goto L_1012c9ab;
  /* 1012c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c993 jae 0x1012c9a6 */
  if (!C.cf) goto L_1012c9a6;
  /* 1012c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1012c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1012c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1012c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1012c9a6:;
  /* 1012c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012c9a9 jmp 0x1012c964 */
  goto L_1012c964;
L_1012c9ab:;
  /* 1012c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c9ae je 0x1012c8be */
  if (C.zf) goto L_1012c8be;
  /* 1012c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c9b7 je 0x1012c8be */
  if (C.zf) goto L_1012c8be;
  /* 1012c9bd jmp 0x1012c897 */
  goto L_1012c897;
L_1012c9c2:;
  /* 1012c9c2 cmp dword ptr [0x10130c00], edx */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1012c9cb jle 0x1012c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1012c9de;
  /* 1012c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1012c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1012c9d2 call 0x101293cb */
  push32(0x1012c9d7u); f_101293cb();
  /* 1012c9d7 pop ecx */
  ECX = (pop32());
  /* 1012c9d8 pop ecx */
  ECX = (pop32());
  /* 1012c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012c9db pop edx */
  EDX = (pop32());
  /* 1012c9dc jmp 0x1012c9ec */
  goto L_1012c9ec;
L_1012c9de:;
  /* 1012c9de mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1012c9ec:;
  /* 1012c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012c9ee je 0x1012ca9e */
  if (C.zf) goto L_1012ca9e;
  /* 1012c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1012c9f6 jmp 0x1012ca4f */
  goto L_1012ca4f;
L_1012c9f8:;
  /* 1012c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1012c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1012ca01 jl 0x1012ca08 */
  if ((C.sf!=C.of)) goto L_1012ca08;
  /* 1012ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca06 jle 0x1012ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1012ca4c;
L_1012ca08:;
  /* 1012ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ca0e je 0x1012ca84 */
  if (C.zf) goto L_1012ca84;
  /* 1012ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ca12 je 0x1012ca78 */
  if (C.zf) goto L_1012ca78;
  /* 1012ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ca17 jne 0x1012cb2c */
  if (!C.zf) goto L_1012cb2c;
L_1012ca1d:;
  /* 1012ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1012ca1f jmp 0x1012ca86 */
  goto L_1012ca86;
L_1012ca21:;
  /* 1012ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1012ca24:;
  /* 1012ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca27 jne 0x1012ca2e */
  if (!C.zf) goto L_1012ca2e;
  /* 1012ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012ca2c jmp 0x1012ca24 */
  goto L_1012ca24;
L_1012ca2e:;
  /* 1012ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca31 jl 0x1012cb29 */
  if ((C.sf!=C.of)) goto L_1012cb29;
  /* 1012ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca3a jg 0x1012cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012cb29;
  /* 1012ca40 jmp 0x1012ca4c */
  goto L_1012ca4c;
L_1012ca42:;
  /* 1012ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca45 jl 0x1012ca55 */
  if ((C.sf!=C.of)) goto L_1012ca55;
  /* 1012ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca4a jg 0x1012ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012ca55;
L_1012ca4c:;
  /* 1012ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1012ca4e:;
  /* 1012ca4e pop eax */
  EAX = (pop32());
L_1012ca4f:;
  /* 1012ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012ca50 jmp 0x1012c80d */
  goto L_1012c80d;
L_1012ca55:;
  /* 1012ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012ca58 jne 0x1012ca9e */
  if (!C.zf) goto L_1012ca9e;
  /* 1012ca5a jmp 0x1012ca1d */
  goto L_1012ca1d;
L_1012ca5c:;
  /* 1012ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ca60 je 0x1012ca8c */
  if (C.zf) goto L_1012ca8c;
  /* 1012ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1012ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1012ca6e je 0x1012ca84 */
  if (C.zf) goto L_1012ca84;
  /* 1012ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ca72 jne 0x1012cb2c */
  if (!C.zf) goto L_1012cb2c;
L_1012ca78:;
  /* 1012ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1012ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1012ca7e pop eax */
  EAX = (pop32());
  /* 1012ca7f jmp 0x1012c80d */
  goto L_1012c80d;
L_1012ca84:;
  /* 1012ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1012ca86:;
  /* 1012ca86 pop eax */
  EAX = (pop32());
  /* 1012ca87 jmp 0x1012c80d */
  goto L_1012c80d;
L_1012ca8c:;
  /* 1012ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1012ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012ca8f pop eax */
  EAX = (pop32());
L_1012ca90:;
  /* 1012ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ca93 je 0x1012cb2e */
  if (C.zf) goto L_1012cb2e;
  /* 1012ca99 jmp 0x1012c80d */
  goto L_1012c80d;
L_1012ca9e:;
  /* 1012ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1012caa1 jmp 0x1012cb2e */
  goto L_1012cb2e;
L_1012caa6:;
  /* 1012caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1012caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1012caaf:;
  /* 1012caaf cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cab6 jle 0x1012cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1012cac7;
  /* 1012cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1012cabd push eax */
  push32((uint32_t)(EAX));
  /* 1012cabe call 0x101293cb */
  push32(0x1012cac3u); f_101293cb();
  /* 1012cac3 pop ecx */
  ECX = (pop32());
  /* 1012cac4 pop ecx */
  ECX = (pop32());
  /* 1012cac5 jmp 0x1012cad6 */
  goto L_1012cad6;
L_1012cac7:;
  /* 1012cac7 mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1012cad6:;
  /* 1012cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012cad8 je 0x1012caf6 */
  if (C.zf) goto L_1012caf6;
  /* 1012cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1012cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1012cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1012cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012caea jg 0x1012caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012caf1;
  /* 1012caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012caef jmp 0x1012caaf */
  goto L_1012caaf;
L_1012caf1:;
  /* 1012caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1012caf6:;
  /* 1012caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1012caf9:;
  /* 1012caf9 cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb00 jle 0x1012cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1012cb11;
  /* 1012cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1012cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1012cb08 call 0x101293cb */
  push32(0x1012cb0du); f_101293cb();
  /* 1012cb0d pop ecx */
  ECX = (pop32());
  /* 1012cb0e pop ecx */
  ECX = (pop32());
  /* 1012cb0f jmp 0x1012cb20 */
  goto L_1012cb20;
L_1012cb11:;
  /* 1012cb11 mov ecx, dword ptr [0x101309f0] */
  ECX = (r32((uint32_t)(0x101309f0)));
  /* 1012cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1012cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1012cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1012cb20:;
  /* 1012cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012cb22 je 0x1012cb29 */
  if (C.zf) goto L_1012cb29;
  /* 1012cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012cb27 jmp 0x1012caf9 */
  goto L_1012caf9;
L_1012cb29:;
  /* 1012cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1012cb2a jmp 0x1012cb2e */
  goto L_1012cb2e;
L_1012cb2c:;
  /* 1012cb2c mov edi, ecx */
  EDI = (ECX);
L_1012cb2e:;
  /* 1012cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1012cb37 je 0x1012cc16 */
  if (C.zf) goto L_1012cc16;
  /* 1012cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1012cb3f pop eax */
  EAX = (pop32());
  /* 1012cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb43 jbe 0x1012cb5a */
  if ((C.cf||C.zf)) goto L_1012cb5a;
  /* 1012cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012cb49 jl 0x1012cb4e */
  if ((C.sf!=C.of)) goto L_1012cb4e;
  /* 1012cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1012cb4e:;
  /* 1012cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1012cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1012cb58 jmp 0x1012cb5d */
  goto L_1012cb5d;
L_1012cb5a:;
  /* 1012cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1012cb5d:;
  /* 1012cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb61 jbe 0x1012cc0c */
  if ((C.cf||C.zf)) goto L_1012cc0c;
L_1012cb67:;
  /* 1012cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012cb6b jne 0x1012cb75 */
  if (!C.zf) goto L_1012cb75;
  /* 1012cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1012cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1012cb73 jmp 0x1012cb67 */
  goto L_1012cb67;
L_1012cb75:;
  /* 1012cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1012cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1012cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1012cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1012cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1012cb80 call 0x1012c6ef */
  push32(0x1012cb85u); f_1012c6ef();
  /* 1012cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1012cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb90 jge 0x1012cb94 */
  if ((C.sf==C.of)) goto L_1012cb94;
  /* 1012cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1012cb94:;
  /* 1012cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cb9a jne 0x1012cb9f */
  if (!C.zf) goto L_1012cb9f;
  /* 1012cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1012cb9f:;
  /* 1012cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cba2 jne 0x1012cba7 */
  if (!C.zf) goto L_1012cba7;
  /* 1012cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1012cba7:;
  /* 1012cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cbac jle 0x1012cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1012cbde;
  /* 1012cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1012cbb5:;
  /* 1012cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1012cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1012cbc1:;
  /* 1012cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cbc5 je 0x1012cc27 */
  if (C.zf) goto L_1012cc27;
  /* 1012cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1012cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1012cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1012cbdc jmp 0x1012cc3c */
  goto L_1012cc3c;
L_1012cbde:;
  /* 1012cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cbe3 jge 0x1012cbee */
  if ((C.sf==C.of)) goto L_1012cbee;
  /* 1012cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1012cbec jmp 0x1012cbb5 */
  goto L_1012cbb5;
L_1012cbee:;
  /* 1012cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1012cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1012cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1012cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1012cbf6 call 0x1012d68a */
  push32(0x1012cbfbu); f_1012d68a();
  /* 1012cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1012cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1012cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1012cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1012cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cc0a jmp 0x1012cbc1 */
  goto L_1012cbc1;
L_1012cc0c:;
  /* 1012cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012cc14 jmp 0x1012cbc1 */
  goto L_1012cbc1;
L_1012cc16:;
  /* 1012cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1012cc25 jmp 0x1012cc3c */
  goto L_1012cc3c;
L_1012cc27:;
  /* 1012cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cc2b je 0x1012cc3c */
  if (C.zf) goto L_1012cc3c;
  /* 1012cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1012cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1012cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1012cc3c:;
  /* 1012cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1012cc42 pop edi */
  EDI = (pop32());
  /* 1012cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1012cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1012cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1012cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1012cc50 pop esi */
  ESI = (pop32());
  /* 1012cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1012cc54 pop ebx */
  EBX = (pop32());
  /* 1012cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012cc56 ret  */
  ESPCHK(0x1012c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1012cc87 (659 bytes, 232 insns) */
void f_1012cc87(void) {
  FTRACE(0x1012cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1012cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1012cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1012cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1012cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1012cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1012cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1012cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1012cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1012cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1012cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1012cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1012ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1012ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1012ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1012ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1012ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1012ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1012ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1012ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1012cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1012ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1012ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1012ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1012ccdf mov edx, eax */
  EDX = (EAX);
  /* 1012cce1 je 0x1012cce9 */
  if (C.zf) goto L_1012cce9;
  /* 1012cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1012cce7 jmp 0x1012cced */
  goto L_1012cced;
L_1012cce9:;
  /* 1012cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1012cced:;
  /* 1012cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1012ccf3 jne 0x1012cd13 */
  if (!C.zf) goto L_1012cd13;
  /* 1012ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012ccf7 jne 0x1012cd13 */
  if (!C.zf) goto L_1012cd13;
  /* 1012ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ccfc jne 0x1012cd13 */
  if (!C.zf) goto L_1012cd13;
L_1012ccfe:;
  /* 1012ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1012cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1012cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1012cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1012cd0e jmp 0x1012cf11 */
  goto L_1012cf11;
L_1012cd13:;
  /* 1012cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012cd16 jne 0x1012cd92 */
  if (!C.zf) goto L_1012cd92;
  /* 1012cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1012cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1012cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd24 jne 0x1012cd2c */
  if (!C.zf) goto L_1012cd2c;
  /* 1012cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd2a je 0x1012cd3b */
  if (C.zf) goto L_1012cd3b;
L_1012cd2c:;
  /* 1012cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1012cd32 jne 0x1012cd3b */
  if (!C.zf) goto L_1012cd3b;
  /* 1012cd34 push 0x1012e5a0 */
  push32((uint32_t)(0x1012e5a0u));
  /* 1012cd39 jmp 0x1012cd81 */
  goto L_1012cd81;
L_1012cd3b:;
  /* 1012cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1012cd3e je 0x1012cd55 */
  if (C.zf) goto L_1012cd55;
  /* 1012cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd46 jne 0x1012cd55 */
  if (!C.zf) goto L_1012cd55;
  /* 1012cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd4c jne 0x1012cd7c */
  if (!C.zf) goto L_1012cd7c;
  /* 1012cd4e push 0x1012e598 */
  push32((uint32_t)(0x1012e598u));
  /* 1012cd53 jmp 0x1012cd64 */
  goto L_1012cd64;
L_1012cd55:;
  /* 1012cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd57 jne 0x1012cd7c */
  if (!C.zf) goto L_1012cd7c;
  /* 1012cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cd5d jne 0x1012cd7c */
  if (!C.zf) goto L_1012cd7c;
  /* 1012cd5f push 0x1012e590 */
  push32((uint32_t)(0x1012e590u));
L_1012cd64:;
  /* 1012cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1012cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1012cd68 call 0x10129af0 */
  push32(0x1012cd6du); f_10129af0();
  /* 1012cd6d pop ecx */
  ECX = (pop32());
  /* 1012cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1012cd72 pop ecx */
  ECX = (pop32());
L_1012cd73:;
  /* 1012cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1012cd77 jmp 0x1012ceea */
  goto L_1012ceea;
L_1012cd7c:;
  /* 1012cd7c push 0x1012e588 */
  push32((uint32_t)(0x1012e588u));
L_1012cd81:;
  /* 1012cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1012cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1012cd85 call 0x10129af0 */
  push32(0x1012cd8au); f_10129af0();
  /* 1012cd8a pop ecx */
  ECX = (pop32());
  /* 1012cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1012cd8f pop ecx */
  ECX = (pop32());
  /* 1012cd90 jmp 0x1012cd73 */
  goto L_1012cd73;
L_1012cd92:;
  /* 1012cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1012cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1012cd97 mov esi, eax */
  ESI = (EAX);
  /* 1012cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1012cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1012cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1012cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1012cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1012cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1012cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1012cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1012cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1012cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1012cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1012cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012cdce push eax */
  push32((uint32_t)(EAX));
  /* 1012cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1012cdd3 call 0x1012d68a */
  push32(0x1012cdd8u); f_1012d68a();
  /* 1012cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012cde1 jb 0x1012cdf3 */
  if (C.cf) goto L_1012cdf3;
  /* 1012cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1012cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1012cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1012cdec call 0x1012d46a */
  push32(0x1012cdf1u); f_1012d46a();
  /* 1012cdf1 pop ecx */
  ECX = (pop32());
  /* 1012cdf2 pop ecx */
  ECX = (pop32());
L_1012cdf3:;
  /* 1012cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1012cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1012cdfa je 0x1012ce0d */
  if (C.zf) goto L_1012ce0d;
  /* 1012cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1012cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1012ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012ce06 jg 0x1012ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012ce10;
  /* 1012ce08 jmp 0x1012ccfe */
  goto L_1012ccfe;
L_1012ce0d:;
  /* 1012ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1012ce10:;
  /* 1012ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ce13 jle 0x1012ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1012ce18;
  /* 1012ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1012ce17 pop edi */
  EDI = (pop32());
L_1012ce18:;
  /* 1012ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1012ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1012ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1012ce2e:;
  /* 1012ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1012ce32 call 0x1012c694 */
  push32(0x1012ce37u); f_1012c694();
  /* 1012ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1012ce3a pop ecx */
  ECX = (pop32());
  /* 1012ce3b jne 0x1012ce2e */
  if (!C.zf) goto L_1012ce2e;
  /* 1012ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012ce3f jge 0x1012ce58 */
  if ((C.sf==C.of)) goto L_1012ce58;
  /* 1012ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1012ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1012ce49 jle 0x1012ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1012ce58;
L_1012ce4b:;
  /* 1012ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1012ce4f call 0x1012c6c2 */
  push32(0x1012ce54u); f_1012c6c2();
  /* 1012ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1012ce55 pop ecx */
  ECX = (pop32());
  /* 1012ce56 jne 0x1012ce4b */
  if (!C.zf) goto L_1012ce4b;
L_1012ce58:;
  /* 1012ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1012ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1012ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1012ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1012ce63 jle 0x1012ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1012ceb5;
  /* 1012ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1012ce68:;
  /* 1012ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1012ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1012ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1012ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012ce75 call 0x1012c694 */
  push32(0x1012ce7au); f_1012c694();
  /* 1012ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1012ce7e call 0x1012c694 */
  push32(0x1012ce83u); f_1012c694();
  /* 1012ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1012ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1012ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1012ce8b call 0x1012c636 */
  push32(0x1012ce90u); f_1012c636();
  /* 1012ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1012ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1012ce94 call 0x1012c694 */
  push32(0x1012ce99u); f_1012c694();
  /* 1012ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1012ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1012ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1012cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1012ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1012ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1012ceb0 jne 0x1012ce68 */
  if (!C.zf) goto L_1012ce68;
  /* 1012ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1012ceb5:;
  /* 1012ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1012ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1012cec0 jl 0x1012cef2 */
  if ((C.sf!=C.of)) goto L_1012cef2;
L_1012cec2:;
  /* 1012cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cec4 jb 0x1012ced5 */
  if (C.cf) goto L_1012ced5;
  /* 1012cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012cec9 jne 0x1012ced1 */
  if (!C.zf) goto L_1012ced1;
  /* 1012cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1012cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012cecf jmp 0x1012cec2 */
  goto L_1012cec2;
L_1012ced1:;
  /* 1012ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012ced3 jae 0x1012ced9 */
  if (!C.cf) goto L_1012ced9;
L_1012ced5:;
  /* 1012ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1012ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1012ced9:;
  /* 1012ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1012cedb:;
  /* 1012cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1012cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1012cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1012ceea:;
  /* 1012ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1012ceed:;
  /* 1012ceed pop edi */
  EDI = (pop32());
  /* 1012ceee pop esi */
  ESI = (pop32());
  /* 1012ceef pop ebx */
  EBX = (pop32());
  /* 1012cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012cef1 ret  */
  ESPCHK(0x1012cc87u, _esp0);
  ESP += 4; return;
L_1012cef2:;
  /* 1012cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cef4 jb 0x1012cf02 */
  if (C.cf) goto L_1012cf02;
  /* 1012cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012cef9 jne 0x1012cefe */
  if (!C.zf) goto L_1012cefe;
  /* 1012cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1012cefc jmp 0x1012cef2 */
  goto L_1012cef2;
L_1012cefe:;
  /* 1012cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cf00 jae 0x1012cedb */
  if (!C.cf) goto L_1012cedb;
L_1012cf02:;
  /* 1012cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1012cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1012cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1012cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1012cf11:;
  /* 1012cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1012cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012cf17 pop eax */
  EAX = (pop32());
  /* 1012cf18 jmp 0x1012ceed */
  goto L_1012ceed;
}

/* FUN_1000cf1a @ 0x1012cf1a (27 bytes, 13 insns) */
void f_1012cf1a(void) {
  FTRACE(0x1012cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012cf1a mov eax, dword ptr [0x1013688c] */
  EAX = (r32((uint32_t)(0x1013688c)));
  /* 1012cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012cf21 je 0x1012cf32 */
  if (C.zf) goto L_1012cf32;
  /* 1012cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1012cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1012cf29u);
  /* 1012cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012cf2b pop ecx */
  ECX = (pop32());
  /* 1012cf2c je 0x1012cf32 */
  if (C.zf) goto L_1012cf32;
  /* 1012cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1012cf30 pop eax */
  EAX = (pop32());
  /* 1012cf31 ret  */
  ESPCHK(0x1012cf1au, _esp0);
  ESP += 4; return;
L_1012cf32:;
  /* 1012cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012cf34 ret  */
  ESPCHK(0x1012cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1012cf38 (32 bytes, 18 insns) */
void f_1012cf38(void) {
  FTRACE(0x1012cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1012cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1012cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1012cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1012cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1012cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1012cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1012cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012cf43 push 0x1012cf50 */
  push32((uint32_t)(0x1012cf50u));
  /* 1012cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012cf4b call 0x1012da34 */
  push32(0x1012cf50u); f_1012da34();
  /* 1012cf50 pop ebp */
  EBP = (pop32());
  /* 1012cf51 pop edi */
  EDI = (pop32());
  /* 1012cf52 pop esi */
  ESI = (pop32());
  /* 1012cf53 pop ebx */
  EBX = (pop32());
  /* 1012cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1012cf56 pop ebp */
  EBP = (pop32());
  /* 1012cf57 ret  */
  ESPCHK(0x1012cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1012cf7a (104 bytes, 33 insns) */
void f_1012cf7a(void) {
  FTRACE(0x1012cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1012cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1012cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1012cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1012cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1012cf84 push 0x1012cf58 */
  push32((uint32_t)(0x1012cf58u));
  /* 1012cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1012cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1012cf97:;
  /* 1012cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1012cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1012cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1012cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cfa4 je 0x1012cfd4 */
  if (C.zf) goto L_1012cfd4;
  /* 1012cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cfaa je 0x1012cfd4 */
  if (C.zf) goto L_1012cfd4;
  /* 1012cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1012cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1012cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1012cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1012cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012cfbe jne 0x1012cfd2 */
  if (!C.zf) goto L_1012cfd2;
  /* 1012cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1012cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1012cfc9 call 0x1012d00e */
  push32(0x1012cfceu); f_1012d00e();
  /* 1012cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1012cfd2u);
L_1012cfd2:;
  /* 1012cfd2 jmp 0x1012cf97 */
  goto L_1012cf97;
L_1012cfd4:;
  /* 1012cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1012cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012cfde pop edi */
  EDI = (pop32());
  /* 1012cfdf pop esi */
  ESI = (pop32());
  /* 1012cfe0 pop ebx */
  EBX = (pop32());
  /* 1012cfe1 ret  */
  ESPCHK(0x1012cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1012d00e (24 bytes, 10 insns) */
void f_1012d00e(void) {
  FTRACE(0x1012d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1012d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1012d010 mov ebx, 0x10133124 */
  EBX = (0x10133124u);
  /* 1012d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1012d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1012d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1012d021 pop ecx */
  ECX = (pop32());
  /* 1012d022 pop ebx */
  EBX = (pop32());
  /* 1012d023 ret 4 */
  ESPCHK(0x1012d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1012d0ed (27 bytes, 11 insns) */
void f_1012d0ed(void) {
  FTRACE(0x1012d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1012d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1012d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1012d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1012d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1012d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1012d0fc call 0x1012cf7a */
  push32(0x1012d101u); f_1012cf7a();
  /* 1012d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d104 pop ebp */
  EBP = (pop32());
  /* 1012d105 ret 4 */
  ESPCHK(0x1012d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1012d108 (111 bytes, 44 insns) */
void f_1012d108(void) {
  FTRACE(0x1012d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012d10b cmp dword ptr [0x10136858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10136858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d111 jne 0x1012d126 */
  if (!C.zf) goto L_1012d126;
  /* 1012d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d11a jl 0x1012d175 */
  if ((C.sf!=C.of)) goto L_1012d175;
  /* 1012d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d11f jg 0x1012d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d175;
  /* 1012d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d124 pop ebx */
  EBX = (pop32());
  /* 1012d125 ret  */
  ESPCHK(0x1012d108u, _esp0);
  ESP += 4; return;
L_1012d126:;
  /* 1012d126 push esi */
  push32((uint32_t)(ESI));
  /* 1012d127 mov esi, 0x101369d4 */
  ESI = (0x101369d4u);
  /* 1012d12c push edi */
  push32((uint32_t)(EDI));
  /* 1012d12d push esi */
  push32((uint32_t)(ESI));
  /* 1012d12e call dword ptr [0x1012e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e090))), 0x1012d134u);
  /* 1012d134 cmp dword ptr [0x101369d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101369d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d13a mov edi, dword ptr [0x1012e08c] */
  EDI = (r32((uint32_t)(0x1012e08c)));
  /* 1012d140 je 0x1012d150 */
  if (C.zf) goto L_1012d150;
  /* 1012d142 push esi */
  push32((uint32_t)(ESI));
  /* 1012d143 call edi */
  call_ind((uint32_t)(EDI), 0x1012d145u);
  /* 1012d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d147 call 0x1012a013 */
  push32(0x1012d14cu); f_1012a013();
  /* 1012d14c pop ecx */
  ECX = (pop32());
  /* 1012d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1012d14f pop ebx */
  EBX = (pop32());
L_1012d150:;
  /* 1012d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1012d154 call 0x1012d177 */
  push32(0x1012d159u); f_1012d177();
  /* 1012d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1012d15b pop ecx */
  ECX = (pop32());
  /* 1012d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1012d160 je 0x1012d16c */
  if (C.zf) goto L_1012d16c;
  /* 1012d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d164 call 0x1012a074 */
  push32(0x1012d169u); f_1012a074();
  /* 1012d169 pop ecx */
  ECX = (pop32());
  /* 1012d16a jmp 0x1012d16f */
  goto L_1012d16f;
L_1012d16c:;
  /* 1012d16c push esi */
  push32((uint32_t)(ESI));
  /* 1012d16d call edi */
  call_ind((uint32_t)(EDI), 0x1012d16fu);
L_1012d16f:;
  /* 1012d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1012d173 pop edi */
  EDI = (pop32());
  /* 1012d174 pop esi */
  ESI = (pop32());
L_1012d175:;
  /* 1012d175 pop ebx */
  EBX = (pop32());
  /* 1012d176 ret  */
  ESPCHK(0x1012d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1012d177 (204 bytes, 71 insns) */
void f_1012d177(void) {
  FTRACE(0x1012d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1012d178 mov ebp, esp */
  EBP = (ESP);
  /* 1012d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1012d17b cmp dword ptr [0x10136858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10136858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d183 jne 0x1012d1a2 */
  if (!C.zf) goto L_1012d1a2;
  /* 1012d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d18b jl 0x1012d240 */
  if ((C.sf!=C.of)) goto L_1012d240;
  /* 1012d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d194 jg 0x1012d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d240;
  /* 1012d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d19d jmp 0x1012d240 */
  goto L_1012d240;
L_1012d1a2:;
  /* 1012d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d1ab jge 0x1012d1d5 */
  if ((C.sf==C.of)) goto L_1012d1d5;
  /* 1012d1ad cmp dword ptr [0x10130c00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10130c00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d1b4 jle 0x1012d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1012d1c2;
  /* 1012d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d1b9 call 0x101293cb */
  push32(0x1012d1beu); f_101293cb();
  /* 1012d1be pop ecx */
  ECX = (pop32());
  /* 1012d1bf pop ecx */
  ECX = (pop32());
  /* 1012d1c0 jmp 0x1012d1cd */
  goto L_1012d1cd;
L_1012d1c2:;
  /* 1012d1c2 mov eax, dword ptr [0x101309f0] */
  EAX = (r32((uint32_t)(0x101309f0)));
  /* 1012d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1012d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1012d1cd:;
  /* 1012d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d1cf jne 0x1012d1d5 */
  if (!C.zf) goto L_1012d1d5;
L_1012d1d1:;
  /* 1012d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1012d1d3 jmp 0x1012d240 */
  goto L_1012d240;
L_1012d1d5:;
  /* 1012d1d5 mov edx, dword ptr [0x101309f0] */
  EDX = (r32((uint32_t)(0x101309f0)));
  /* 1012d1db mov eax, ebx */
  EAX = (EBX);
  /* 1012d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1012d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1012d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1012d1e8 je 0x1012d1f8 */
  if (C.zf) goto L_1012d1f8;
  /* 1012d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1012d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1012d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1012d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1012d1f6 jmp 0x1012d201 */
  goto L_1012d201;
L_1012d1f8:;
  /* 1012d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1012d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1012d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1012d201:;
  /* 1012d201 pop eax */
  EAX = (pop32());
  /* 1012d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1012d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1012d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1012d20c push eax */
  push32((uint32_t)(EAX));
  /* 1012d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1012d210 push eax */
  push32((uint32_t)(EAX));
  /* 1012d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1012d216 push dword ptr [0x10136858] */
  push32((uint32_t)(r32((uint32_t)(0x10136858))));
  /* 1012d21c call 0x1012c3c6 */
  push32(0x1012d221u); f_1012c3c6();
  /* 1012d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d226 je 0x1012d1d1 */
  if (C.zf) goto L_1012d1d1;
  /* 1012d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d22b jne 0x1012d233 */
  if (!C.zf) goto L_1012d233;
  /* 1012d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1012d231 jmp 0x1012d240 */
  goto L_1012d240;
L_1012d233:;
  /* 1012d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1012d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1012d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1012d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1012d240:;
  /* 1012d240 pop ebx */
  EBX = (pop32());
  /* 1012d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d242 ret  */
  ESPCHK(0x1012d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1012d243 (49 bytes, 20 insns) */
void f_1012d243(void) {
  FTRACE(0x1012d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d243 push esi */
  push32((uint32_t)(ESI));
  /* 1012d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d248 push edi */
  push32((uint32_t)(EDI));
  /* 1012d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1012d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1012d250 je 0x1012d258 */
  if (C.zf) goto L_1012d258;
  /* 1012d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1012d256 jmp 0x1012d26f */
  goto L_1012d26f;
L_1012d258:;
  /* 1012d258 push esi */
  push32((uint32_t)(ESI));
  /* 1012d259 call 0x10128f8e */
  push32(0x1012d25eu); f_10128f8e();
  /* 1012d25e push esi */
  push32((uint32_t)(ESI));
  /* 1012d25f call 0x1012d274 */
  push32(0x1012d264u); f_1012d274();
  /* 1012d264 push esi */
  push32((uint32_t)(ESI));
  /* 1012d265 mov edi, eax */
  EDI = (EAX);
  /* 1012d267 call 0x10128fe0 */
  push32(0x1012d26cu); f_10128fe0();
  /* 1012d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012d26f:;
  /* 1012d26f mov eax, edi */
  EAX = (EDI);
  /* 1012d271 pop edi */
  EDI = (pop32());
  /* 1012d272 pop esi */
  ESI = (pop32());
  /* 1012d273 ret  */
  ESPCHK(0x1012d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1012d274 (76 bytes, 30 insns) */
void f_1012d274(void) {
  FTRACE(0x1012d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d274 push esi */
  push32((uint32_t)(ESI));
  /* 1012d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d279 push edi */
  push32((uint32_t)(EDI));
  /* 1012d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1012d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1012d281 je 0x1012d2b7 */
  if (C.zf) goto L_1012d2b7;
  /* 1012d283 push esi */
  push32((uint32_t)(ESI));
  /* 1012d284 call 0x1012c174 */
  push32(0x1012d289u); f_1012c174();
  /* 1012d289 push esi */
  push32((uint32_t)(ESI));
  /* 1012d28a mov edi, eax */
  EDI = (EAX);
  /* 1012d28c call 0x1012d7e6 */
  push32(0x1012d291u); f_1012d7e6();
  /* 1012d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1012d294 call 0x1012d706 */
  push32(0x1012d299u); f_1012d706();
  /* 1012d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d29e jge 0x1012d2a5 */
  if ((C.sf==C.of)) goto L_1012d2a5;
  /* 1012d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1012d2a3 jmp 0x1012d2b7 */
  goto L_1012d2b7;
L_1012d2a5:;
  /* 1012d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1012d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d2aa je 0x1012d2b7 */
  if (C.zf) goto L_1012d2b7;
  /* 1012d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1012d2ad call 0x1012a1c6 */
  push32(0x1012d2b2u); f_1012a1c6();
  /* 1012d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1012d2b6 pop ecx */
  ECX = (pop32());
L_1012d2b7:;
  /* 1012d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1012d2bb mov eax, edi */
  EAX = (EDI);
  /* 1012d2bd pop edi */
  EDI = (pop32());
  /* 1012d2be pop esi */
  ESI = (pop32());
  /* 1012d2bf ret  */
  ESPCHK(0x1012d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1012d2c0 (147 bytes, 52 insns) */
void f_1012d2c0(void) {
  FTRACE(0x1012d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d2c5 cmp ebx, dword ptr [0x10137d60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1012d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1012d2cd jae 0x1012d341 */
  if (!C.cf) goto L_1012d341;
  /* 1012d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1012d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1012d2d4 lea edi, [eax*4 + 0x10137c60] */
  EDI = ((uint32_t)(EAX*4 + 0x10137c60));
  /* 1012d2db mov eax, ebx */
  EAX = (EBX);
  /* 1012d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1012d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1012d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1012d2ed je 0x1012d341 */
  if (C.zf) goto L_1012d341;
  /* 1012d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1012d2f0 call 0x1012c044 */
  push32(0x1012d2f5u); f_1012c044();
  /* 1012d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1012d2f7 pop ecx */
  ECX = (pop32());
  /* 1012d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1012d2fd je 0x1012d328 */
  if (C.zf) goto L_1012d328;
  /* 1012d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1012d300 call 0x1012c002 */
  push32(0x1012d305u); f_1012c002();
  /* 1012d305 pop ecx */
  ECX = (pop32());
  /* 1012d306 push eax */
  push32((uint32_t)(EAX));
  /* 1012d307 call dword ptr [0x1012e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0d0))), 0x1012d30du);
  /* 1012d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d30f jne 0x1012d31b */
  if (!C.zf) goto L_1012d31b;
  /* 1012d311 call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x1012d317u);
  /* 1012d317 mov esi, eax */
  ESI = (EAX);
  /* 1012d319 jmp 0x1012d31d */
  goto L_1012d31d;
L_1012d31b:;
  /* 1012d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1012d31d:;
  /* 1012d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1012d31f je 0x1012d336 */
  if (C.zf) goto L_1012d336;
  /* 1012d321 call 0x1012bf7a */
  push32(0x1012d326u); f_1012bf7a();
  /* 1012d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1012d328:;
  /* 1012d328 call 0x1012bf71 */
  push32(0x1012d32du); f_1012bf71();
  /* 1012d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1012d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1012d336:;
  /* 1012d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d337 call 0x1012c0a3 */
  push32(0x1012d33cu); f_1012c0a3();
  /* 1012d33c pop ecx */
  ECX = (pop32());
  /* 1012d33d mov eax, esi */
  EAX = (ESI);
  /* 1012d33f jmp 0x1012d34f */
  goto L_1012d34f;
L_1012d341:;
  /* 1012d341 call 0x1012bf71 */
  push32(0x1012d346u); f_1012bf71();
  /* 1012d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1012d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1012d34f:;
  /* 1012d34f pop edi */
  EDI = (pop32());
  /* 1012d350 pop esi */
  ESI = (pop32());
  /* 1012d351 pop ebx */
  EBX = (pop32());
  /* 1012d352 ret  */
  ESPCHK(0x1012d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1012d3f0 (62 bytes, 35 insns) */
void f_1012d3f0(void) {
  FTRACE(0x1012d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1012d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1012d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1012d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1012d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1012d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1012d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1012d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1012d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1012d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1012d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1012d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012d404:;
  /* 1012d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1012d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d408 je 0x1012d411 */
  if (C.zf) goto L_1012d411;
  /* 1012d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1012d40b");
  /* 1012d40f jmp 0x1012d404 */
  goto L_1012d404;
L_1012d411:;
  /* 1012d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1012d417 nop  */
  /* nop */
L_1012d418:;
  /* 1012d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1012d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d41d je 0x1012d426 */
  if (C.zf) goto L_1012d426;
  /* 1012d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1012d420");
  /* 1012d424 jae 0x1012d418 */
  if (!C.cf) goto L_1012d418;
L_1012d426:;
  /* 1012d426 mov eax, ecx */
  EAX = (ECX);
  /* 1012d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d42b pop esi */
  ESI = (pop32());
  /* 1012d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d42d ret  */
  ESPCHK(0x1012d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1012d430 (58 bytes, 32 insns) */
void f_1012d430(void) {
  FTRACE(0x1012d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1012d431 mov ebp, esp */
  EBP = (ESP);
  /* 1012d433 push esi */
  push32((uint32_t)(ESI));
  /* 1012d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d436 push eax */
  push32((uint32_t)(EAX));
  /* 1012d437 push eax */
  push32((uint32_t)(EAX));
  /* 1012d438 push eax */
  push32((uint32_t)(EAX));
  /* 1012d439 push eax */
  push32((uint32_t)(EAX));
  /* 1012d43a push eax */
  push32((uint32_t)(EAX));
  /* 1012d43b push eax */
  push32((uint32_t)(EAX));
  /* 1012d43c push eax */
  push32((uint32_t)(EAX));
  /* 1012d43d push eax */
  push32((uint32_t)(EAX));
  /* 1012d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012d444:;
  /* 1012d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1012d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d448 je 0x1012d451 */
  if (C.zf) goto L_1012d451;
  /* 1012d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1012d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1012d44b");
  /* 1012d44f jmp 0x1012d444 */
  goto L_1012d444;
L_1012d451:;
  /* 1012d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1012d454:;
  /* 1012d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d458 je 0x1012d464 */
  if (C.zf) goto L_1012d464;
  /* 1012d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1012d45b");
  /* 1012d45f jae 0x1012d454 */
  if (!C.cf) goto L_1012d454;
  /* 1012d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1012d464:;
  /* 1012d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d467 pop esi */
  ESI = (pop32());
  /* 1012d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d469 ret  */
  ESPCHK(0x1012d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1012d46a (544 bytes, 177 insns) */
void f_1012d46a(void) {
  FTRACE(0x1012d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1012d46b mov ebp, esp */
  EBP = (ESP);
  /* 1012d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d474 push esi */
  push32((uint32_t)(ESI));
  /* 1012d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1012d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d47e push edi */
  push32((uint32_t)(EDI));
  /* 1012d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1012d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1012d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1012d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1012d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1012d48f mov edi, ecx */
  EDI = (ECX);
  /* 1012d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1012d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1012d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1012d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1012d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1012d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1012d4ac jae 0x1012d66a */
  if (!C.cf) goto L_1012d66a;
  /* 1012d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d4b7 jae 0x1012d66a */
  if (!C.cf) goto L_1012d66a;
  /* 1012d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d4c2 ja 0x1012d66a */
  if ((!C.cf&&!C.zf)) goto L_1012d66a;
  /* 1012d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d4cd ja 0x1012d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1012d4d3;
  /* 1012d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d4d1 jmp 0x1012d50d */
  goto L_1012d50d;
L_1012d4d3:;
  /* 1012d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1012d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1012d4db jne 0x1012d4f5 */
  if (!C.zf) goto L_1012d4f5;
  /* 1012d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1012d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1012d4e3 jne 0x1012d4f5 */
  if (!C.zf) goto L_1012d4f5;
  /* 1012d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d4ea jne 0x1012d4f7 */
  if (!C.zf) goto L_1012d4f7;
  /* 1012d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d4ee jne 0x1012d4f7 */
  if (!C.zf) goto L_1012d4f7;
  /* 1012d4f0 jmp 0x1012d664 */
  goto L_1012d664;
L_1012d4f5:;
  /* 1012d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012d4f7:;
  /* 1012d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d4fa jne 0x1012d51a */
  if (!C.zf) goto L_1012d51a;
  /* 1012d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1012d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1012d502 jne 0x1012d51a */
  if (!C.zf) goto L_1012d51a;
  /* 1012d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d507 jne 0x1012d51a */
  if (!C.zf) goto L_1012d51a;
  /* 1012d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d50b jne 0x1012d51a */
  if (!C.zf) goto L_1012d51a;
L_1012d50d:;
  /* 1012d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1012d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1012d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1012d515 jmp 0x1012d685 */
  goto L_1012d685;
L_1012d51a:;
  /* 1012d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1012d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1012d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1012d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1012d52a:;
  /* 1012d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1012d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d533 jle 0x1012d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1012d57e;
  /* 1012d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1012d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1012d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1012d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1012d546:;
  /* 1012d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1012d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1012d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1012d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1012d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1012d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1012d55c push eax */
  push32((uint32_t)(EAX));
  /* 1012d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1012d55f call 0x1012c615 */
  push32(0x1012d564u); f_1012c615();
  /* 1012d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d569 je 0x1012d571 */
  if (C.zf) goto L_1012d571;
  /* 1012d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1012d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1012d571:;
  /* 1012d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1012d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1012d57c jne 0x1012d546 */
  if (!C.zf) goto L_1012d546;
L_1012d57e:;
  /* 1012d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1012d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1012d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d58c jg 0x1012d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d52a;
  /* 1012d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d59a jle 0x1012d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1012d5c1;
L_1012d59c:;
  /* 1012d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1012d5a0 jne 0x1012d5ba */
  if (!C.zf) goto L_1012d5ba;
  /* 1012d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1012d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1012d5a6 call 0x1012c694 */
  push32(0x1012d5abu); f_1012c694();
  /* 1012d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d5b2 pop ecx */
  ECX = (pop32());
  /* 1012d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d5b8 jg 0x1012d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d59c;
L_1012d5ba:;
  /* 1012d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d5bf jg 0x1012d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d5fa;
L_1012d5c1:;
  /* 1012d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d5cd jge 0x1012d5fa */
  if ((C.sf==C.of)) goto L_1012d5fa;
  /* 1012d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1012d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1012d5d8 mov ebx, eax */
  EBX = (EAX);
L_1012d5da:;
  /* 1012d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1012d5de je 0x1012d5e3 */
  if (C.zf) goto L_1012d5e3;
  /* 1012d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1012d5e3:;
  /* 1012d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1012d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1012d5e7 call 0x1012c6c2 */
  push32(0x1012d5ecu); f_1012c6c2();
  /* 1012d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1012d5ed pop ecx */
  ECX = (pop32());
  /* 1012d5ee jne 0x1012d5da */
  if (!C.zf) goto L_1012d5da;
  /* 1012d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d5f4 je 0x1012d5fa */
  if (C.zf) goto L_1012d5fa;
  /* 1012d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1012d5fa:;
  /* 1012d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d600 ja 0x1012d611 */
  if ((!C.cf&&!C.zf)) goto L_1012d611;
  /* 1012d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1012d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d60f jne 0x1012d646 */
  if (!C.zf) goto L_1012d646;
L_1012d611:;
  /* 1012d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d615 jne 0x1012d643 */
  if (!C.zf) goto L_1012d643;
  /* 1012d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1012d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d61f jne 0x1012d63e */
  if (!C.zf) goto L_1012d63e;
  /* 1012d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1012d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d62b jne 0x1012d638 */
  if (!C.zf) goto L_1012d638;
  /* 1012d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1012d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1012d636 jmp 0x1012d646 */
  goto L_1012d646;
L_1012d638:;
  /* 1012d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1012d63c jmp 0x1012d646 */
  goto L_1012d646;
L_1012d63e:;
  /* 1012d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1012d641 jmp 0x1012d646 */
  goto L_1012d646;
L_1012d643:;
  /* 1012d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1012d646:;
  /* 1012d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d64d jae 0x1012d66a */
  if (!C.cf) goto L_1012d66a;
  /* 1012d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1012d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1012d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1012d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1012d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1012d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1012d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1012d664:;
  /* 1012d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1012d668 jmp 0x1012d685 */
  goto L_1012d685;
L_1012d66a:;
  /* 1012d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1012d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1012d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1012d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1012d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1012d685:;
  /* 1012d685 pop edi */
  EDI = (pop32());
  /* 1012d686 pop esi */
  ESI = (pop32());
  /* 1012d687 pop ebx */
  EBX = (pop32());
  /* 1012d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d689 ret  */
  ESPCHK(0x1012d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1012d68a (124 bytes, 52 insns) */
void f_1012d68a(void) {
  FTRACE(0x1012d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1012d68b mov ebp, esp */
  EBP = (ESP);
  /* 1012d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d691 mov ebx, 0x10133240 */
  EBX = (0x10133240u);
  /* 1012d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d69e je 0x1012d703 */
  if (C.zf) goto L_1012d703;
  /* 1012d6a0 jge 0x1012d6b2 */
  if ((C.sf==C.of)) goto L_1012d6b2;
  /* 1012d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d6a5 mov ebx, 0x101333a0 */
  EBX = (0x101333a0u);
  /* 1012d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1012d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1012d6b2:;
  /* 1012d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d6b5 jne 0x1012d6bd */
  if (!C.zf) goto L_1012d6bd;
  /* 1012d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1012d6bd:;
  /* 1012d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d6c0 je 0x1012d703 */
  if (C.zf) goto L_1012d703;
  /* 1012d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1012d6c3 push edi */
  push32((uint32_t)(EDI));
L_1012d6c4:;
  /* 1012d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1012d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1012d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d6d3 je 0x1012d6fc */
  if (C.zf) goto L_1012d6fc;
  /* 1012d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1012d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1012d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1012d6e1 jb 0x1012d6ef */
  if (C.cf) goto L_1012d6ef;
  /* 1012d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1012d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1012d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1012d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1012d6ef:;
  /* 1012d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1012d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1012d6f3 call 0x1012d46a */
  push32(0x1012d6f8u); f_1012d46a();
  /* 1012d6f8 pop ecx */
  ECX = (pop32());
  /* 1012d6f9 pop ecx */
  ECX = (pop32());
  /* 1012d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1012d6fc:;
  /* 1012d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d6ff jne 0x1012d6c4 */
  if (!C.zf) goto L_1012d6c4;
  /* 1012d701 pop edi */
  EDI = (pop32());
  /* 1012d702 pop esi */
  ESI = (pop32());
L_1012d703:;
  /* 1012d703 pop ebx */
  EBX = (pop32());
  /* 1012d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d705 ret  */
  ESPCHK(0x1012d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1012d706 (93 bytes, 32 insns) */
void f_1012d706(void) {
  FTRACE(0x1012d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d706 push esi */
  push32((uint32_t)(ESI));
  /* 1012d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d70b cmp esi, dword ptr [0x10137d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10137d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d711 jae 0x1012d74b */
  if (!C.cf) goto L_1012d74b;
  /* 1012d713 mov ecx, esi */
  ECX = (ESI);
  /* 1012d715 mov eax, esi */
  EAX = (ESI);
  /* 1012d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1012d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1012d71d mov ecx, dword ptr [ecx*4 + 0x10137c60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10137c60)));
  /* 1012d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1012d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1012d72c je 0x1012d74b */
  if (C.zf) goto L_1012d74b;
  /* 1012d72e push edi */
  push32((uint32_t)(EDI));
  /* 1012d72f push esi */
  push32((uint32_t)(ESI));
  /* 1012d730 call 0x1012c044 */
  push32(0x1012d735u); f_1012c044();
  /* 1012d735 push esi */
  push32((uint32_t)(ESI));
  /* 1012d736 call 0x1012d763 */
  push32(0x1012d73bu); f_1012d763();
  /* 1012d73b push esi */
  push32((uint32_t)(ESI));
  /* 1012d73c mov edi, eax */
  EDI = (EAX);
  /* 1012d73e call 0x1012c0a3 */
  push32(0x1012d743u); f_1012c0a3();
  /* 1012d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d746 mov eax, edi */
  EAX = (EDI);
  /* 1012d748 pop edi */
  EDI = (pop32());
  /* 1012d749 pop esi */
  ESI = (pop32());
  /* 1012d74a ret  */
  ESPCHK(0x1012d706u, _esp0);
  ESP += 4; return;
L_1012d74b:;
  /* 1012d74b call 0x1012bf71 */
  push32(0x1012d750u); f_1012bf71();
  /* 1012d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1012d756 call 0x1012bf7a */
  push32(0x1012d75bu); f_1012bf7a();
  /* 1012d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1012d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012d761 pop esi */
  ESI = (pop32());
  /* 1012d762 ret  */
  ESPCHK(0x1012d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1012d763 (131 bytes, 52 insns) */
void f_1012d763(void) {
  FTRACE(0x1012d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d763 push esi */
  push32((uint32_t)(ESI));
  /* 1012d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d768 push edi */
  push32((uint32_t)(EDI));
  /* 1012d769 push esi */
  push32((uint32_t)(ESI));
  /* 1012d76a call 0x1012c002 */
  push32(0x1012d76fu); f_1012c002();
  /* 1012d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d772 pop ecx */
  ECX = (pop32());
  /* 1012d773 je 0x1012d7b1 */
  if (C.zf) goto L_1012d7b1;
  /* 1012d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d778 je 0x1012d77f */
  if (C.zf) goto L_1012d77f;
  /* 1012d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d77d jne 0x1012d795 */
  if (!C.zf) goto L_1012d795;
L_1012d77f:;
  /* 1012d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1012d781 call 0x1012c002 */
  push32(0x1012d786u); f_1012c002();
  /* 1012d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1012d788 mov edi, eax */
  EDI = (EAX);
  /* 1012d78a call 0x1012c002 */
  push32(0x1012d78fu); f_1012c002();
  /* 1012d78f pop ecx */
  ECX = (pop32());
  /* 1012d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d792 pop ecx */
  ECX = (pop32());
  /* 1012d793 je 0x1012d7b1 */
  if (C.zf) goto L_1012d7b1;
L_1012d795:;
  /* 1012d795 push esi */
  push32((uint32_t)(ESI));
  /* 1012d796 call 0x1012c002 */
  push32(0x1012d79bu); f_1012c002();
  /* 1012d79b pop ecx */
  ECX = (pop32());
  /* 1012d79c push eax */
  push32((uint32_t)(EAX));
  /* 1012d79d call dword ptr [0x1012e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e0d4))), 0x1012d7a3u);
  /* 1012d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1012d7a5 jne 0x1012d7b1 */
  if (!C.zf) goto L_1012d7b1;
  /* 1012d7a7 call dword ptr [0x1012e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1012e03c))), 0x1012d7adu);
  /* 1012d7ad mov edi, eax */
  EDI = (EAX);
  /* 1012d7af jmp 0x1012d7b3 */
  goto L_1012d7b3;
L_1012d7b1:;
  /* 1012d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1012d7b3:;
  /* 1012d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1012d7b4 call 0x1012bf83 */
  push32(0x1012d7b9u); f_1012bf83();
  /* 1012d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1012d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1012d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1012d7c1 pop ecx */
  ECX = (pop32());
  /* 1012d7c2 mov eax, dword ptr [eax*4 + 0x10137c60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10137c60)));
  /* 1012d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1012d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1012d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1012d7d3 je 0x1012d7e1 */
  if (C.zf) goto L_1012d7e1;
  /* 1012d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1012d7d6 call 0x1012befe */
  push32(0x1012d7dbu); f_1012befe();
  /* 1012d7db pop ecx */
  ECX = (pop32());
  /* 1012d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1012d7df jmp 0x1012d7e3 */
  goto L_1012d7e3;
L_1012d7e1:;
  /* 1012d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1012d7e3:;
  /* 1012d7e3 pop edi */
  EDI = (pop32());
  /* 1012d7e4 pop esi */
  ESI = (pop32());
  /* 1012d7e5 ret  */
  ESPCHK(0x1012d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1012d7e6 (43 bytes, 17 insns) */
void f_1012d7e6(void) {
  FTRACE(0x1012d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1012d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1012d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1012d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1012d7f0 je 0x1012d80f */
  if (C.zf) goto L_1012d80f;
  /* 1012d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1012d7f4 je 0x1012d80f */
  if (C.zf) goto L_1012d80f;
  /* 1012d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1012d7f9 call 0x1012a1c6 */
  push32(0x1012d7feu); f_1012a1c6();
  /* 1012d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1012d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d806 pop ecx */
  ECX = (pop32());
  /* 1012d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1012d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1012d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1012d80f:;
  /* 1012d80f pop esi */
  ESI = (pop32());
  /* 1012d810 ret  */
  ESPCHK(0x1012d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1012d820 (208 bytes, 85 insns) */
void f_1012d820(void) {
  FTRACE(0x1012d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1012d821 mov ebp, esp */
  EBP = (ESP);
  /* 1012d823 push edi */
  push32((uint32_t)(EDI));
  /* 1012d824 push esi */
  push32((uint32_t)(ESI));
  /* 1012d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d82c lea eax, [0x10136850] */
  EAX = ((uint32_t)(0x10136850));
  /* 1012d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d836 jne 0x1012d873 */
  if (!C.zf) goto L_1012d873;
  /* 1012d838 mov al, 0xff */
  AL = (0xffu);
  /* 1012d83a mov edi, edi */
  EDI = (EDI);
L_1012d83c:;
  /* 1012d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d83e je 0x1012d86e */
  if (C.zf) goto L_1012d86e;
  /* 1012d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1012d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d848 je 0x1012d83c */
  if (C.zf) goto L_1012d83c;
  /* 1012d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1012d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1012d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1012d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1012d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d868 je 0x1012d83c */
  if (C.zf) goto L_1012d83c;
  /* 1012d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1012d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1012d86e:;
  /* 1012d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1012d871 jmp 0x1012d8eb */
  goto L_1012d8eb;
L_1012d873:;
  /* 1012d873 lock inc dword ptr [0x101369d4] */
  x86_unimpl("lock inc @ 0x1012d873");
  /* 1012d87a cmp dword ptr [0x101369d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101369d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d881 jg 0x1012d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d887;
  /* 1012d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012d885 jmp 0x1012d89c */
  goto L_1012d89c;
L_1012d887:;
  /* 1012d887 lock dec dword ptr [0x101369d4] */
  x86_unimpl("lock dec @ 0x1012d887");
  /* 1012d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d890 call 0x1012a013 */
  push32(0x1012d895u); f_1012a013();
  /* 1012d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1012d89c:;
  /* 1012d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1012d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012d8a3 nop  */
  /* nop */
L_1012d8a4:;
  /* 1012d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d8a6 je 0x1012d8cf */
  if (C.zf) goto L_1012d8cf;
  /* 1012d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d8b0 je 0x1012d8a4 */
  if (C.zf) goto L_1012d8a4;
  /* 1012d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1012d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d8b4 call 0x101294af */
  push32(0x1012d8b9u); f_101294af();
  /* 1012d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1012d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d8be call 0x101294af */
  push32(0x1012d8c3u); f_101294af();
  /* 1012d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d8c8 je 0x1012d8a4 */
  if (C.zf) goto L_1012d8a4;
  /* 1012d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1012d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1012d8cf:;
  /* 1012d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1012d8d1 pop eax */
  EAX = (pop32());
  /* 1012d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d8d4 jne 0x1012d8df */
  if (!C.zf) goto L_1012d8df;
  /* 1012d8d6 lock dec dword ptr [0x101369d4] */
  x86_unimpl("lock dec @ 0x1012d8d6");
  /* 1012d8dd jmp 0x1012d8e9 */
  goto L_1012d8e9;
L_1012d8df:;
  /* 1012d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d8e1 call 0x1012a074 */
  push32(0x1012d8e6u); f_1012a074();
  /* 1012d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1012d8e9:;
  /* 1012d8e9 mov eax, ebx */
  EAX = (EBX);
L_1012d8eb:;
  /* 1012d8eb pop ebx */
  EBX = (pop32());
  /* 1012d8ec pop esi */
  ESI = (pop32());
  /* 1012d8ed pop edi */
  EDI = (pop32());
  /* 1012d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d8ef ret  */
  ESPCHK(0x1012d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1012d8f0 (257 bytes, 103 insns) */
void f_1012d8f0(void) {
  FTRACE(0x1012d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1012d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1012d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1012d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1012d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1012d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012d8fb je 0x1012d9ea */
  if (C.zf) goto L_1012d9ea;
  /* 1012d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1012d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1012d907 lea eax, [0x10136850] */
  EAX = ((uint32_t)(0x10136850));
  /* 1012d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d911 jne 0x1012d961 */
  if (!C.zf) goto L_1012d961;
  /* 1012d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1012d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1012d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1012d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1012d91c:;
  /* 1012d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1012d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1012d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1012d922 je 0x1012d945 */
  if (C.zf) goto L_1012d945;
  /* 1012d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1012d926 je 0x1012d945 */
  if (C.zf) goto L_1012d945;
  /* 1012d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d92c jb 0x1012d934 */
  if (C.cf) goto L_1012d934;
  /* 1012d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d930 ja 0x1012d934 */
  if ((!C.cf&&!C.zf)) goto L_1012d934;
  /* 1012d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1012d934:;
  /* 1012d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d936 jb 0x1012d93e */
  if (C.cf) goto L_1012d93e;
  /* 1012d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d93a ja 0x1012d93e */
  if ((!C.cf&&!C.zf)) goto L_1012d93e;
  /* 1012d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1012d93e:;
  /* 1012d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d940 jne 0x1012d94f */
  if (!C.zf) goto L_1012d94f;
  /* 1012d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012d943 jne 0x1012d91c */
  if (!C.zf) goto L_1012d91c;
L_1012d945:;
  /* 1012d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1012d949 je 0x1012d9ea */
  if (C.zf) goto L_1012d9ea;
L_1012d94f:;
  /* 1012d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1012d954 jb 0x1012d9ea */
  if (C.cf) goto L_1012d9ea;
  /* 1012d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1012d95c jmp 0x1012d9ea */
  goto L_1012d9ea;
L_1012d961:;
  /* 1012d961 lock inc dword ptr [0x101369d4] */
  x86_unimpl("lock inc @ 0x1012d961");
  /* 1012d968 cmp dword ptr [0x101369d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101369d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d96f jg 0x1012d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1012d975;
  /* 1012d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1012d973 jmp 0x1012d98e */
  goto L_1012d98e;
L_1012d975:;
  /* 1012d975 lock dec dword ptr [0x101369d4] */
  x86_unimpl("lock dec @ 0x1012d975");
  /* 1012d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1012d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d980 call 0x1012a013 */
  push32(0x1012d985u); f_1012a013();
  /* 1012d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1012d98c mov ecx, ebx */
  ECX = (EBX);
L_1012d98e:;
  /* 1012d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012d992 mov edi, edi */
  EDI = (EDI);
L_1012d994:;
  /* 1012d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1012d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1012d99a je 0x1012d9bf */
  if (C.zf) goto L_1012d9bf;
  /* 1012d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1012d99e je 0x1012d9bf */
  if (C.zf) goto L_1012d9bf;
  /* 1012d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1012d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1012d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1012d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1012d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1012d9a5 call 0x101294af */
  push32(0x1012d9aau); f_101294af();
  /* 1012d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1012d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d9af call 0x101294af */
  push32(0x1012d9b4u); f_101294af();
  /* 1012d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d9b7 pop ecx */
  ECX = (pop32());
  /* 1012d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d9ba jne 0x1012d9c5 */
  if (!C.zf) goto L_1012d9c5;
  /* 1012d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1012d9bd jne 0x1012d994 */
  if (!C.zf) goto L_1012d994;
L_1012d9bf:;
  /* 1012d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1012d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1012d9c3 je 0x1012d9ce */
  if (C.zf) goto L_1012d9ce;
L_1012d9c5:;
  /* 1012d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1012d9ca jb 0x1012d9ce */
  if (C.cf) goto L_1012d9ce;
  /* 1012d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1012d9ce:;
  /* 1012d9ce pop eax */
  EAX = (pop32());
  /* 1012d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1012d9d1 jne 0x1012d9dc */
  if (!C.zf) goto L_1012d9dc;
  /* 1012d9d3 lock dec dword ptr [0x101369d4] */
  x86_unimpl("lock dec @ 0x1012d9d3");
  /* 1012d9da jmp 0x1012d9ea */
  goto L_1012d9ea;
L_1012d9dc:;
  /* 1012d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1012d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1012d9e0 call 0x1012a074 */
  push32(0x1012d9e5u); f_1012a074();
  /* 1012d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1012d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1012d9ea:;
  /* 1012d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1012d9ec pop ebx */
  EBX = (pop32());
  /* 1012d9ed pop esi */
  ESI = (pop32());
  /* 1012d9ee pop edi */
  EDI = (pop32());
  /* 1012d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1012d9f0 ret  */
  ESPCHK(0x1012d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1012da34 (6 bytes, 1 insns) */
void f_1012da34(void) {
  FTRACE(0x1012da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1012da34 jmp dword ptr [0x1012e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1012e0cc)))); return;
}

