#include "recomp.h"

/* FUN_10005e93 @ 0x11e85e93 (9 bytes, 4 insns) */
void f_11e85e93(void) {
  FTRACE(0x11e85e93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85e93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85e95 call 0x11e83f68 */
  push32(0x11e85e9au); f_11e83f68();
  /* 11e85e9a pop ecx */
  ECX = (pop32());
  /* 11e85e9b ret  */
  ESPCHK(0x11e85e93u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ef2 @ 0x11e85ef2 (9 bytes, 4 insns) */
void f_11e85ef2(void) {
  FTRACE(0x11e85ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85ef2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85ef4 call 0x11e83f68 */
  push32(0x11e85ef9u); f_11e83f68();
  /* 11e85ef9 pop ecx */
  ECX = (pop32());
  /* 11e85efa ret  */
  ESPCHK(0x11e85ef2u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11e85f30 (123 bytes, 44 insns) */
void f_11e85f30(void) {
  FTRACE(0x11e85f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85f30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85f34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e85f3a je 0x11e85f50 */
  if (C.zf) goto L_11e85f50;
L_11e85f3c:;
  /* 11e85f3c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e85f3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e85f3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e85f41 je 0x11e85f83 */
  if (C.zf) goto L_11e85f83;
  /* 11e85f43 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e85f49 jne 0x11e85f3c */
  if (!C.zf) goto L_11e85f3c;
  /* 11e85f4b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e85f50:;
  /* 11e85f50 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e85f52 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e85f57 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85f59 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85f5c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e85f5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85f61 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e85f66 je 0x11e85f50 */
  if (C.zf) goto L_11e85f50;
  /* 11e85f68 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e85f6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e85f6d je 0x11e85fa1 */
  if (C.zf) goto L_11e85fa1;
  /* 11e85f6f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e85f71 je 0x11e85f97 */
  if (C.zf) goto L_11e85f97;
  /* 11e85f73 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e85f78 je 0x11e85f8d */
  if (C.zf) goto L_11e85f8d;
  /* 11e85f7a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e85f7f je 0x11e85f83 */
  if (C.zf) goto L_11e85f83;
  /* 11e85f81 jmp 0x11e85f50 */
  goto L_11e85f50;
L_11e85f83:;
  /* 11e85f83 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11e85f86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85f8a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85f8c ret  */
  ESPCHK(0x11e85f30u, _esp0);
  ESP += 4; return;
L_11e85f8d:;
  /* 11e85f8d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11e85f90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85f94 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85f96 ret  */
  ESPCHK(0x11e85f30u, _esp0);
  ESP += 4; return;
L_11e85f97:;
  /* 11e85f97 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11e85f9a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85f9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85fa0 ret  */
  ESPCHK(0x11e85f30u, _esp0);
  ESP += 4; return;
L_11e85fa1:;
  /* 11e85fa1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11e85fa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85fa8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85faa ret  */
  ESPCHK(0x11e85f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006095 @ 0x11e86095 (53 bytes, 25 insns) */
void f_11e86095(void) {
  FTRACE(0x11e86095u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86095 push ebp */
  push32((uint32_t)(EBP));
  /* 11e86096 mov ebp, esp */
  EBP = (ESP);
  /* 11e86098 push ecx */
  push32((uint32_t)(ECX));
  /* 11e86099 push esi */
  push32((uint32_t)(ESI));
  /* 11e8609a wait  */
  /* wait (no observable integer/reg state) */
  /* 11e8609b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11e8609e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11e860a1 call 0x11e860e0 */
  push32(0x11e860a6u); f_11e860e0();
  /* 11e860a6 mov esi, eax */
  ESI = (EAX);
  /* 11e860a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e860ab not eax */
  EAX = (~(EAX));
  /* 11e860ad and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11e860af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e860b2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e860b5 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11e860b7 push esi */
  push32((uint32_t)(ESI));
  /* 11e860b8 call 0x11e86172 */
  push32(0x11e860bdu); f_11e86172();
  /* 11e860bd pop ecx */
  ECX = (pop32());
  /* 11e860be mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e860c1 pop ecx */
  ECX = (pop32());
  /* 11e860c2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11e860c5 mov eax, esi */
  EAX = (ESI);
  /* 11e860c7 pop esi */
  ESI = (pop32());
  /* 11e860c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e860c9 ret  */
  ESPCHK(0x11e86095u, _esp0);
  ESP += 4; return;
}

/* FUN_100060ca @ 0x11e860ca (22 bytes, 8 insns) */
void f_11e860ca(void) {
  FTRACE(0x11e860cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e860ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e860ce and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e860d3 push eax */
  push32((uint32_t)(EAX));
  /* 11e860d4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11e860d8 call 0x11e86095 */
  push32(0x11e860ddu); f_11e86095();
  /* 11e860dd pop ecx */
  ECX = (pop32());
  /* 11e860de pop ecx */
  ECX = (pop32());
  /* 11e860df ret  */
  ESPCHK(0x11e860cau, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x11e860e0 (146 bytes, 58 insns) */
void f_11e860e0(void) {
  FTRACE(0x11e860e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e860e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e860e1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e860e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e860e7 push ebp */
  push32((uint32_t)(EBP));
  /* 11e860e8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11e860eb push edi */
  push32((uint32_t)(EDI));
  /* 11e860ec je 0x11e860f1 */
  if (C.zf) goto L_11e860f1;
  /* 11e860ee push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e860f0 pop eax */
  EAX = (pop32());
L_11e860f1:;
  /* 11e860f1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11e860f4 je 0x11e860f8 */
  if (C.zf) goto L_11e860f8;
  /* 11e860f6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11e860f8:;
  /* 11e860f8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11e860fb je 0x11e860ff */
  if (C.zf) goto L_11e860ff;
  /* 11e860fd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11e860ff:;
  /* 11e860ff test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11e86102 je 0x11e86106 */
  if (C.zf) goto L_11e86106;
  /* 11e86104 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11e86106:;
  /* 11e86106 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11e86109 je 0x11e8610d */
  if (C.zf) goto L_11e8610d;
  /* 11e8610b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11e8610d:;
  /* 11e8610d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11e86110 je 0x11e86117 */
  if (C.zf) goto L_11e86117;
  /* 11e86112 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11e86117:;
  /* 11e86117 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11e8611a push esi */
  push32((uint32_t)(ESI));
  /* 11e8611b mov edx, ecx */
  EDX = (ECX);
  /* 11e8611d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11e86122 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11e86127 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11e86129 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11e8612e je 0x11e8614f */
  if (C.zf) goto L_11e8614f;
  /* 11e86130 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86136 je 0x11e8614c */
  if (C.zf) goto L_11e8614c;
  /* 11e86138 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8613e je 0x11e86148 */
  if (C.zf) goto L_11e86148;
  /* 11e86140 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86142 jne 0x11e8614f */
  if (!C.zf) goto L_11e8614f;
  /* 11e86144 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11e86146 jmp 0x11e8614f */
  goto L_11e8614f;
L_11e86148:;
  /* 11e86148 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11e8614a jmp 0x11e8614f */
  goto L_11e8614f;
L_11e8614c:;
  /* 11e8614c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11e8614f:;
  /* 11e8614f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e86151 pop esi */
  ESI = (pop32());
  /* 11e86152 je 0x11e8615f */
  if (C.zf) goto L_11e8615f;
  /* 11e86154 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86156 jne 0x11e86164 */
  if (!C.zf) goto L_11e86164;
  /* 11e86158 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e8615d jmp 0x11e86164 */
  goto L_11e86164;
L_11e8615f:;
  /* 11e8615f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11e86164:;
  /* 11e86164 pop edi */
  EDI = (pop32());
  /* 11e86165 pop ebp */
  EBP = (pop32());
  /* 11e86166 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11e86169 pop ebx */
  EBX = (pop32());
  /* 11e8616a je 0x11e86171 */
  if (C.zf) goto L_11e86171;
  /* 11e8616c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11e86171:;
  /* 11e86171 ret  */
  ESPCHK(0x11e860e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006172 @ 0x11e86172 (137 bytes, 53 insns) */
void f_11e86172(void) {
  FTRACE(0x11e86172u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86172 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86173 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e86177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86179 push esi */
  push32((uint32_t)(ESI));
  /* 11e8617a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11e8617d je 0x11e86182 */
  if (C.zf) goto L_11e86182;
  /* 11e8617f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86181 pop eax */
  EAX = (pop32());
L_11e86182:;
  /* 11e86182 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11e86185 je 0x11e86189 */
  if (C.zf) goto L_11e86189;
  /* 11e86187 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11e86189:;
  /* 11e86189 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11e8618c je 0x11e86190 */
  if (C.zf) goto L_11e86190;
  /* 11e8618e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11e86190:;
  /* 11e86190 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11e86193 je 0x11e86197 */
  if (C.zf) goto L_11e86197;
  /* 11e86195 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11e86197:;
  /* 11e86197 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11e8619a je 0x11e8619e */
  if (C.zf) goto L_11e8619e;
  /* 11e8619c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11e8619e:;
  /* 11e8619e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11e861a4 je 0x11e861a8 */
  if (C.zf) goto L_11e861a8;
  /* 11e861a6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11e861a8:;
  /* 11e861a8 mov ecx, ebx */
  ECX = (EBX);
  /* 11e861aa mov edx, 0x300 */
  EDX = (0x300u);
  /* 11e861af and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e861b1 mov esi, 0x200 */
  ESI = (0x200u);
  /* 11e861b6 je 0x11e861d5 */
  if (C.zf) goto L_11e861d5;
  /* 11e861b8 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e861be je 0x11e861d2 */
  if (C.zf) goto L_11e861d2;
  /* 11e861c0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e861c2 je 0x11e861cd */
  if (C.zf) goto L_11e861cd;
  /* 11e861c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e861c6 jne 0x11e861d5 */
  if (!C.zf) goto L_11e861d5;
  /* 11e861c8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11e861cb jmp 0x11e861d5 */
  goto L_11e861d5;
L_11e861cd:;
  /* 11e861cd or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11e861d0 jmp 0x11e861d5 */
  goto L_11e861d5;
L_11e861d2:;
  /* 11e861d2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11e861d5:;
  /* 11e861d5 mov ecx, ebx */
  ECX = (EBX);
  /* 11e861d7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e861dd je 0x11e861eb */
  if (C.zf) goto L_11e861eb;
  /* 11e861df cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e861e5 jne 0x11e861ed */
  if (!C.zf) goto L_11e861ed;
  /* 11e861e7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e861e9 jmp 0x11e861ed */
  goto L_11e861ed;
L_11e861eb:;
  /* 11e861eb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11e861ed:;
  /* 11e861ed pop esi */
  ESI = (pop32());
  /* 11e861ee test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11e861f4 pop ebx */
  EBX = (pop32());
  /* 11e861f5 je 0x11e861fa */
  if (C.zf) goto L_11e861fa;
  /* 11e861f7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11e861fa:;
  /* 11e861fa ret  */
  ESPCHK(0x11e86172u, _esp0);
  ESP += 4; return;
}

/* FUN_100061fb @ 0x11e861fb (117 bytes, 46 insns) */
void f_11e861fb(void) {
  FTRACE(0x11e861fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e861fb push ebp */
  push32((uint32_t)(EBP));
  /* 11e861fc mov ebp, esp */
  EBP = (ESP);
  /* 11e861fe push ecx */
  push32((uint32_t)(ECX));
  /* 11e861ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86202 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11e86205 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8620b ja 0x11e86219 */
  if ((!C.cf&&!C.zf)) goto L_11e86219;
  /* 11e8620d mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e86213 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11e86217 jmp 0x11e8626b */
  goto L_11e8626b;
L_11e86219:;
  /* 11e86219 mov ecx, eax */
  ECX = (EAX);
  /* 11e8621b push esi */
  push32((uint32_t)(ESI));
  /* 11e8621c mov esi, dword ptr [0x11e8ecd0] */
  ESI = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e86222 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e86225 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11e86228 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11e8622d pop esi */
  ESI = (pop32());
  /* 11e8622e je 0x11e8623e */
  if (C.zf) goto L_11e8623e;
  /* 11e86230 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11e86234 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11e86237 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11e8623a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e8623c jmp 0x11e86247 */
  goto L_11e86247;
L_11e8623e:;
  /* 11e8623e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11e86242 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11e86245 push 1 */
  push32((uint32_t)(0x1u));
L_11e86247:;
  /* 11e86247 pop eax */
  EAX = (pop32());
  /* 11e86248 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11e8624b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8624d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8624f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e86251 push ecx */
  push32((uint32_t)(ECX));
  /* 11e86252 push eax */
  push32((uint32_t)(EAX));
  /* 11e86253 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e86256 push eax */
  push32((uint32_t)(EAX));
  /* 11e86257 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86259 call 0x11e87c84 */
  push32(0x11e8625eu); f_11e87c84();
  /* 11e8625e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e86263 jne 0x11e86267 */
  if (!C.zf) goto L_11e86267;
  /* 11e86265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86266 ret  */
  ESPCHK(0x11e861fbu, _esp0);
  ESP += 4; return;
L_11e86267:;
  /* 11e86267 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11e8626b:;
  /* 11e8626b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e8626e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8626f ret  */
  ESPCHK(0x11e861fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x11e86270 (111 bytes, 44 insns) */
void f_11e86270(void) {
  FTRACE(0x11e86270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86270 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86271 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e86273 cmp dword ptr [0x11e8fa8c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa8c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86279 jne 0x11e8628e */
  if (!C.zf) goto L_11e8628e;
  /* 11e8627b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e8627f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86282 jl 0x11e862dd */
  if ((C.sf!=C.of)) goto L_11e862dd;
  /* 11e86284 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86287 jg 0x11e862dd */
  if ((!C.zf&&C.sf==C.of)) goto L_11e862dd;
  /* 11e86289 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8628c pop ebx */
  EBX = (pop32());
  /* 11e8628d ret  */
  ESPCHK(0x11e86270u, _esp0);
  ESP += 4; return;
L_11e8628e:;
  /* 11e8628e push esi */
  push32((uint32_t)(ESI));
  /* 11e8628f mov esi, 0x11e8fb54 */
  ESI = (0x11e8fb54u);
  /* 11e86294 push edi */
  push32((uint32_t)(EDI));
  /* 11e86295 push esi */
  push32((uint32_t)(ESI));
  /* 11e86296 call dword ptr [0x11e8a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a03c))), 0x11e8629cu);
  /* 11e8629c cmp dword ptr [0x11e8fb50], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb50))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e862a2 mov edi, dword ptr [0x11e8a040] */
  EDI = (r32((uint32_t)(0x11e8a040)));
  /* 11e862a8 je 0x11e862b8 */
  if (C.zf) goto L_11e862b8;
  /* 11e862aa push esi */
  push32((uint32_t)(ESI));
  /* 11e862ab call edi */
  call_ind((uint32_t)(EDI), 0x11e862adu);
  /* 11e862ad push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e862af call 0x11e83f07 */
  push32(0x11e862b4u); f_11e83f07();
  /* 11e862b4 pop ecx */
  ECX = (pop32());
  /* 11e862b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e862b7 pop ebx */
  EBX = (pop32());
L_11e862b8:;
  /* 11e862b8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e862bc call 0x11e862df */
  push32(0x11e862c1u); f_11e862df();
  /* 11e862c1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e862c3 pop ecx */
  ECX = (pop32());
  /* 11e862c4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11e862c8 je 0x11e862d4 */
  if (C.zf) goto L_11e862d4;
  /* 11e862ca push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e862cc call 0x11e83f68 */
  push32(0x11e862d1u); f_11e83f68();
  /* 11e862d1 pop ecx */
  ECX = (pop32());
  /* 11e862d2 jmp 0x11e862d7 */
  goto L_11e862d7;
L_11e862d4:;
  /* 11e862d4 push esi */
  push32((uint32_t)(ESI));
  /* 11e862d5 call edi */
  call_ind((uint32_t)(EDI), 0x11e862d7u);
L_11e862d7:;
  /* 11e862d7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e862db pop edi */
  EDI = (pop32());
  /* 11e862dc pop esi */
  ESI = (pop32());
L_11e862dd:;
  /* 11e862dd pop ebx */
  EBX = (pop32());
  /* 11e862de ret  */
  ESPCHK(0x11e86270u, _esp0);
  ESP += 4; return;
}

/* FUN_100062df @ 0x11e862df (203 bytes, 78 insns) */
void f_11e862df(void) {
  FTRACE(0x11e862dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e862df push ebp */
  push32((uint32_t)(EBP));
  /* 11e862e0 mov ebp, esp */
  EBP = (ESP);
  /* 11e862e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e862e3 cmp dword ptr [0x11e8fa8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e862ea push ebx */
  push32((uint32_t)(EBX));
  /* 11e862eb push esi */
  push32((uint32_t)(ESI));
  /* 11e862ec push edi */
  push32((uint32_t)(EDI));
  /* 11e862ed jne 0x11e8630c */
  if (!C.zf) goto L_11e8630c;
  /* 11e862ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e862f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e862f5 jl 0x11e863a5 */
  if ((C.sf!=C.of)) goto L_11e863a5;
  /* 11e862fb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e862fe jg 0x11e863a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e863a5;
  /* 11e86304 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86307 jmp 0x11e863a5 */
  goto L_11e863a5;
L_11e8630c:;
  /* 11e8630c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8630f mov edi, 0x100 */
  EDI = (0x100u);
  /* 11e86314 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86316 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86318 pop esi */
  ESI = (pop32());
  /* 11e86319 jge 0x11e86340 */
  if ((C.sf==C.of)) goto L_11e86340;
  /* 11e8631b cmp dword ptr [0x11e8eee0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86321 jle 0x11e8632e */
  if ((C.zf||C.sf!=C.of)) goto L_11e8632e;
  /* 11e86323 push esi */
  push32((uint32_t)(ESI));
  /* 11e86324 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86325 call 0x11e861fb */
  push32(0x11e8632au); f_11e861fb();
  /* 11e8632a pop ecx */
  ECX = (pop32());
  /* 11e8632b pop ecx */
  ECX = (pop32());
  /* 11e8632c jmp 0x11e86338 */
  goto L_11e86338;
L_11e8632e:;
  /* 11e8632e mov eax, dword ptr [0x11e8ecd0] */
  EAX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e86333 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11e86336 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11e86338:;
  /* 11e86338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8633a jne 0x11e86340 */
  if (!C.zf) goto L_11e86340;
L_11e8633c:;
  /* 11e8633c mov eax, ebx */
  EAX = (EBX);
  /* 11e8633e jmp 0x11e863a5 */
  goto L_11e863a5;
L_11e86340:;
  /* 11e86340 mov edx, dword ptr [0x11e8ecd0] */
  EDX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e86346 mov eax, ebx */
  EAX = (EBX);
  /* 11e86348 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e8634b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11e8634e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11e86353 je 0x11e86364 */
  if (C.zf) goto L_11e86364;
  /* 11e86355 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11e86359 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e8635b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11e8635e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11e86361 pop eax */
  EAX = (pop32());
  /* 11e86362 jmp 0x11e8636d */
  goto L_11e8636d;
L_11e86364:;
  /* 11e86364 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11e86368 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11e8636b mov eax, esi */
  EAX = (ESI);
L_11e8636d:;
  /* 11e8636d push esi */
  push32((uint32_t)(ESI));
  /* 11e8636e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e86370 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11e86373 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e86375 push ecx */
  push32((uint32_t)(ECX));
  /* 11e86376 push eax */
  push32((uint32_t)(EAX));
  /* 11e86377 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e8637a push eax */
  push32((uint32_t)(EAX));
  /* 11e8637b push edi */
  push32((uint32_t)(EDI));
  /* 11e8637c push dword ptr [0x11e8fa8c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa8c))));
  /* 11e86382 call 0x11e87dcd */
  push32(0x11e86387u); f_11e87dcd();
  /* 11e86387 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8638a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8638c je 0x11e8633c */
  if (C.zf) goto L_11e8633c;
  /* 11e8638e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86390 jne 0x11e86398 */
  if (!C.zf) goto L_11e86398;
  /* 11e86392 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e86396 jmp 0x11e863a5 */
  goto L_11e863a5;
L_11e86398:;
  /* 11e86398 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11e8639c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e863a0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e863a3 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11e863a5:;
  /* 11e863a5 pop edi */
  EDI = (pop32());
  /* 11e863a6 pop esi */
  ESI = (pop32());
  /* 11e863a7 pop ebx */
  EBX = (pop32());
  /* 11e863a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e863a9 ret  */
  ESPCHK(0x11e862dfu, _esp0);
  ESP += 4; return;
}

/* FUN_100063aa @ 0x11e863aa (73 bytes, 36 insns) */
void f_11e863aa(void) {
  FTRACE(0x11e863aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e863aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e863ae push esi */
  push32((uint32_t)(ESI));
  /* 11e863af push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e863b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e863b2 pop ecx */
  ECX = (pop32());
  /* 11e863b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e863b5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e863b7 mov esi, eax */
  ESI = (EAX);
  /* 11e863b9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e863bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e863be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e863c0 pop ecx */
  ECX = (pop32());
  /* 11e863c1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e863c5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e863c7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e863ca shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e863cc not edx */
  EDX = (~(EDX));
  /* 11e863ce test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11e863d1 jne 0x11e863ef */
  if (!C.zf) goto L_11e863ef;
  /* 11e863d3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e863d4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e863d7 jge 0x11e863ea */
  if ((C.sf==C.of)) goto L_11e863ea;
  /* 11e863d9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11e863dc:;
  /* 11e863dc cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e863df jne 0x11e863ef */
  if (!C.zf) goto L_11e863ef;
  /* 11e863e1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e863e2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e863e5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e863e8 jl 0x11e863dc */
  if ((C.sf!=C.of)) goto L_11e863dc;
L_11e863ea:;
  /* 11e863ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11e863ec pop eax */
  EAX = (pop32());
  /* 11e863ed pop esi */
  ESI = (pop32());
  /* 11e863ee ret  */
  ESPCHK(0x11e863aau, _esp0);
  ESP += 4; return;
L_11e863ef:;
  /* 11e863ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e863f1 pop esi */
  ESI = (pop32());
  /* 11e863f2 ret  */
  ESPCHK(0x11e863aau, _esp0);
  ESP += 4; return;
}

/* FUN_100063f3 @ 0x11e863f3 (86 bytes, 43 insns) */
void f_11e863f3(void) {
  FTRACE(0x11e863f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e863f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e863f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11e863f8 push esi */
  push32((uint32_t)(ESI));
  /* 11e863f9 push edi */
  push32((uint32_t)(EDI));
  /* 11e863fa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e863fc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e86400 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e86401 pop ecx */
  ECX = (pop32());
  /* 11e86402 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e86404 mov esi, eax */
  ESI = (EAX);
  /* 11e86406 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e8640a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e8640b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e8640d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11e86410 push edi */
  push32((uint32_t)(EDI));
  /* 11e86411 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e86413 pop ecx */
  ECX = (pop32());
  /* 11e86414 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86416 pop eax */
  EAX = (pop32());
  /* 11e86417 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86419 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e8641b push eax */
  push32((uint32_t)(EAX));
  /* 11e8641c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11e8641e call 0x11e87ff1 */
  push32(0x11e86423u); f_11e87ff1();
  /* 11e86423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86426 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e86427 js 0x11e86445 */
  if (C.sf) goto L_11e86445;
  /* 11e86429 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11e8642c:;
  /* 11e8642c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8642e je 0x11e86445 */
  if (C.zf) goto L_11e86445;
  /* 11e86430 push edi */
  push32((uint32_t)(EDI));
  /* 11e86431 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86433 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11e86435 call 0x11e87ff1 */
  push32(0x11e8643au); f_11e87ff1();
  /* 11e8643a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8643d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e8643e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86441 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e86443 jge 0x11e8642c */
  if ((C.sf==C.of)) goto L_11e8642c;
L_11e86445:;
  /* 11e86445 pop edi */
  EDI = (pop32());
  /* 11e86446 pop esi */
  ESI = (pop32());
  /* 11e86447 pop ebx */
  EBX = (pop32());
  /* 11e86448 ret  */
  ESPCHK(0x11e863f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006449 @ 0x11e86449 (140 bytes, 71 insns) */
void f_11e86449(void) {
  FTRACE(0x11e86449u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86449 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8644a mov ebp, esp */
  EBP = (ESP);
  /* 11e8644c push ecx */
  push32((uint32_t)(ECX));
  /* 11e8644d push ecx */
  push32((uint32_t)(ECX));
  /* 11e8644e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86451 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86452 push esi */
  push32((uint32_t)(ESI));
  /* 11e86453 push edi */
  push32((uint32_t)(EDI));
  /* 11e86454 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11e86457 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e86459 pop ecx */
  ECX = (pop32());
  /* 11e8645a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e8645e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11e86461 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e86463 mov eax, ebx */
  EAX = (EBX);
  /* 11e86465 pop esi */
  ESI = (pop32());
  /* 11e86466 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e86467 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e86469 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e8646b mov ecx, eax */
  ECX = (EAX);
  /* 11e8646d mov eax, ebx */
  EAX = (EBX);
  /* 11e8646f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e86470 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e86472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86475 pop esi */
  ESI = (pop32());
  /* 11e86476 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86478 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e8647b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11e8647e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e86481 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86483 pop edx */
  EDX = (pop32());
  /* 11e86484 mov ecx, esi */
  ECX = (ESI);
  /* 11e86486 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e86488 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11e8648a je 0x11e864ad */
  if (C.zf) goto L_11e864ad;
  /* 11e8648c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e8648d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8648e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e86491 call 0x11e863aa */
  push32(0x11e86496u); f_11e863aa();
  /* 11e86496 pop ecx */
  ECX = (pop32());
  /* 11e86497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e86499 pop ecx */
  ECX = (pop32());
  /* 11e8649a jne 0x11e864aa */
  if (!C.zf) goto L_11e864aa;
  /* 11e8649c push edi */
  push32((uint32_t)(EDI));
  /* 11e8649d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e864a0 call 0x11e863f3 */
  push32(0x11e864a5u); f_11e863f3();
  /* 11e864a5 pop ecx */
  ECX = (pop32());
  /* 11e864a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e864a9 pop ecx */
  ECX = (pop32());
L_11e864aa:;
  /* 11e864aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e864ad:;
  /* 11e864ad or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e864b0 mov ecx, esi */
  ECX = (ESI);
  /* 11e864b2 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e864b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e864b6 pop ecx */
  ECX = (pop32());
  /* 11e864b7 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e864b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e864bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e864bd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e864bf jge 0x11e864cd */
  if ((C.sf==C.of)) goto L_11e864cd;
  /* 11e864c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e864c4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e864c6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11e864c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e864cb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11e864cd:;
  /* 11e864cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e864d0 pop edi */
  EDI = (pop32());
  /* 11e864d1 pop esi */
  ESI = (pop32());
  /* 11e864d2 pop ebx */
  EBX = (pop32());
  /* 11e864d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e864d4 ret  */
  ESPCHK(0x11e86449u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d5 @ 0x11e864d5 (27 bytes, 13 insns) */
void f_11e864d5(void) {
  FTRACE(0x11e864d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e864d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e864d9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e864dd push esi */
  push32((uint32_t)(ESI));
  /* 11e864de push 3 */
  push32((uint32_t)(0x3u));
  /* 11e864e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e864e2 pop edx */
  EDX = (pop32());
L_11e864e3:;
  /* 11e864e3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11e864e5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11e864e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e864eb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e864ec jne 0x11e864e3 */
  if (!C.zf) goto L_11e864e3;
  /* 11e864ee pop esi */
  ESI = (pop32());
  /* 11e864ef ret  */
  ESPCHK(0x11e864d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x11e864f0 (12 bytes, 8 insns) */
void f_11e864f0(void) {
  FTRACE(0x11e864f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e864f0 push edi */
  push32((uint32_t)(EDI));
  /* 11e864f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e864f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e864f7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e864f8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e864f9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e864fa pop edi */
  EDI = (pop32());
  /* 11e864fb ret  */
  ESPCHK(0x11e864f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064fc @ 0x11e864fc (27 bytes, 13 insns) */
void f_11e864fc(void) {
  FTRACE(0x11e864fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e864fc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86500 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11e86502:;
  /* 11e86502 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86505 jne 0x11e86514 */
  if (!C.zf) goto L_11e86514;
  /* 11e86507 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86508 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8650b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8650e jl 0x11e86502 */
  if ((C.sf!=C.of)) goto L_11e86502;
  /* 11e86510 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86512 pop eax */
  EAX = (pop32());
  /* 11e86513 ret  */
  ESPCHK(0x11e864fcu, _esp0);
  ESP += 4; return;
L_11e86514:;
  /* 11e86514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86516 ret  */
  ESPCHK(0x11e864fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006517 @ 0x11e86517 (141 bytes, 64 insns) */
void f_11e86517(void) {
  FTRACE(0x11e86517u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86517 push ebp */
  push32((uint32_t)(EBP));
  /* 11e86518 mov ebp, esp */
  EBP = (ESP);
  /* 11e8651a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8651d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86520 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86521 push esi */
  push32((uint32_t)(ESI));
  /* 11e86522 push edi */
  push32((uint32_t)(EDI));
  /* 11e86523 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e86525 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86528 pop ebx */
  EBX = (pop32());
  /* 11e86529 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11e8652c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e8652d mov ecx, ebx */
  ECX = (EBX);
  /* 11e8652f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11e86536 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e86538 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e8653b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8653e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e8653f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e86541 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11e86545 mov ecx, edx */
  ECX = (EDX);
  /* 11e86547 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e86549 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8654b not esi */
  ESI = (~(ESI));
L_11e8654d:;
  /* 11e8654d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e8654f mov ecx, eax */
  ECX = (EAX);
  /* 11e86551 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11e86553 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e86556 mov ecx, edx */
  ECX = (EDX);
  /* 11e86558 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e8655a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e8655d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11e8655f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e86562 mov ecx, ebx */
  ECX = (EBX);
  /* 11e86564 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86567 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e86569 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11e8656c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e8656f jne 0x11e8654d */
  if (!C.zf) goto L_11e8654d;
  /* 11e86571 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11e86574 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e86576 pop ebx */
  EBX = (pop32());
  /* 11e86577 mov esi, edi */
  ESI = (EDI);
  /* 11e86579 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8657b pop ecx */
  ECX = (pop32());
  /* 11e8657c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11e8657f:;
  /* 11e8657f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86581 jl 0x11e86592 */
  if ((C.sf!=C.of)) goto L_11e86592;
  /* 11e86583 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86586 mov eax, ecx */
  EAX = (ECX);
  /* 11e86588 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8658a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11e8658d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11e86590 jmp 0x11e86599 */
  goto L_11e86599;
L_11e86592:;
  /* 11e86592 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86595 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11e86599:;
  /* 11e86599 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e8659a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8659d jns 0x11e8657f */
  if (!C.sf) goto L_11e8657f;
  /* 11e8659f pop edi */
  EDI = (pop32());
  /* 11e865a0 pop esi */
  ESI = (pop32());
  /* 11e865a1 pop ebx */
  EBX = (pop32());
  /* 11e865a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e865a3 ret  */
  ESPCHK(0x11e86517u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a4 @ 0x11e865a4 (364 bytes, 138 insns) */
void f_11e865a4(void) {
  FTRACE(0x11e865a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e865a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11e865a5 mov ebp, esp */
  EBP = (ESP);
  /* 11e865a7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e865aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e865ad push ebx */
  push32((uint32_t)(EBX));
  /* 11e865ae push esi */
  push32((uint32_t)(ESI));
  /* 11e865af push edi */
  push32((uint32_t)(EDI));
  /* 11e865b0 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11e865b4 mov ebx, ecx */
  EBX = (ECX);
  /* 11e865b6 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e865bc mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e865bf mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11e865c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e865c5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11e865c8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11e865cb mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e865ce and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11e865d4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e865da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e865dd shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e865e0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e865e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e865e9 jne 0x11e86611 */
  if (!C.zf) goto L_11e86611;
  /* 11e865eb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e865ee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e865f0 push eax */
  push32((uint32_t)(EAX));
  /* 11e865f1 call 0x11e864fc */
  push32(0x11e865f6u); f_11e864fc();
  /* 11e865f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e865f8 pop ecx */
  ECX = (pop32());
  /* 11e865f9 jne 0x11e866d0 */
  if (!C.zf) goto L_11e866d0;
  /* 11e865ff lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86602 push eax */
  push32((uint32_t)(EAX));
  /* 11e86603 call 0x11e864f0 */
  push32(0x11e86608u); f_11e864f0();
  /* 11e86608 pop ecx */
  ECX = (pop32());
L_11e86609:;
  /* 11e86609 push 2 */
  push32((uint32_t)(0x2u));
L_11e8660b:;
  /* 11e8660b pop eax */
  EAX = (pop32());
  /* 11e8660c jmp 0x11e866d2 */
  goto L_11e866d2;
L_11e86611:;
  /* 11e86611 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86614 push eax */
  push32((uint32_t)(EAX));
  /* 11e86615 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e86618 push eax */
  push32((uint32_t)(EAX));
  /* 11e86619 call 0x11e864d5 */
  push32(0x11e8661eu); f_11e864d5();
  /* 11e8661e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11e86621 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86624 push eax */
  push32((uint32_t)(EAX));
  /* 11e86625 call 0x11e86449 */
  push32(0x11e8662au); f_11e86449();
  /* 11e8662a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8662d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8662f je 0x11e86632 */
  if (C.zf) goto L_11e86632;
  /* 11e86631 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11e86632:;
  /* 11e86632 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e86635 mov ecx, eax */
  ECX = (EAX);
  /* 11e86637 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8663a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8663c jge 0x11e8664a */
  if ((C.sf==C.of)) goto L_11e8664a;
  /* 11e8663e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86641 push eax */
  push32((uint32_t)(EAX));
  /* 11e86642 call 0x11e864f0 */
  push32(0x11e86647u); f_11e864f0();
  /* 11e86647 pop ecx */
  ECX = (pop32());
  /* 11e86648 jmp 0x11e86686 */
  goto L_11e86686;
L_11e8664a:;
  /* 11e8664a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8664c jg 0x11e8668d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e8668d;
  /* 11e8664e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86650 mov esi, eax */
  ESI = (EAX);
  /* 11e86652 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e86655 push eax */
  push32((uint32_t)(EAX));
  /* 11e86656 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86659 push eax */
  push32((uint32_t)(EAX));
  /* 11e8665a call 0x11e864d5 */
  push32(0x11e8665fu); f_11e864d5();
  /* 11e8665f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86662 push esi */
  push32((uint32_t)(ESI));
  /* 11e86663 push eax */
  push32((uint32_t)(EAX));
  /* 11e86664 call 0x11e86517 */
  push32(0x11e86669u); f_11e86517();
  /* 11e86669 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11e8666c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8666f push eax */
  push32((uint32_t)(EAX));
  /* 11e86670 call 0x11e86449 */
  push32(0x11e86675u); f_11e86449();
  /* 11e86675 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11e86678 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e86679 push eax */
  push32((uint32_t)(EAX));
  /* 11e8667a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8667d push eax */
  push32((uint32_t)(EAX));
  /* 11e8667e call 0x11e86517 */
  push32(0x11e86683u); f_11e86517();
  /* 11e86683 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e86686:;
  /* 11e86686 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e86688 jmp 0x11e86609 */
  goto L_11e86609;
L_11e8668d:;
  /* 11e8668d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8668f jl 0x11e866b9 */
  if ((C.sf!=C.of)) goto L_11e866b9;
  /* 11e86691 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86694 push eax */
  push32((uint32_t)(EAX));
  /* 11e86695 call 0x11e864f0 */
  push32(0x11e8669au); f_11e864f0();
  /* 11e8669a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11e8669d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11e866a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e866a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e866a5 call 0x11e86517 */
  push32(0x11e866aau); f_11e86517();
  /* 11e866aa mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11e866ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e866b0 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e866b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e866b4 jmp 0x11e8660b */
  goto L_11e8660b;
L_11e866b9:;
  /* 11e866b9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11e866bc mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11e866bf and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11e866c3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e866c6 push eax */
  push32((uint32_t)(EAX));
  /* 11e866c7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e866c9 call 0x11e86517 */
  push32(0x11e866ceu); f_11e86517();
  /* 11e866ce pop ecx */
  ECX = (pop32());
  /* 11e866cf pop ecx */
  ECX = (pop32());
L_11e866d0:;
  /* 11e866d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e866d2:;
  /* 11e866d2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e866d4 pop ecx */
  ECX = (pop32());
  /* 11e866d5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e866d8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11e866db shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e866dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e866e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e866e2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e866e4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e866ea or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11e866ec or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11e866ef cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e866f2 jne 0x11e86701 */
  if (!C.zf) goto L_11e86701;
  /* 11e866f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e866f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e866fa mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11e866fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e866ff jmp 0x11e8670b */
  goto L_11e8670b;
L_11e86701:;
  /* 11e86701 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86704 jne 0x11e8670b */
  if (!C.zf) goto L_11e8670b;
  /* 11e86706 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86709 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11e8670b:;
  /* 11e8670b pop edi */
  EDI = (pop32());
  /* 11e8670c pop esi */
  ESI = (pop32());
  /* 11e8670d pop ebx */
  EBX = (pop32());
  /* 11e8670e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8670f ret  */
  ESPCHK(0x11e865a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x11e86710 (22 bytes, 6 insns) */
void f_11e86710(void) {
  FTRACE(0x11e86710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86710 push 0x11e8eef0 */
  push32((uint32_t)(0x11e8eef0u));
  /* 11e86715 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e86719 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e8671d call 0x11e865a4 */
  push32(0x11e86722u); f_11e865a4();
  /* 11e86722 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86725 ret  */
  ESPCHK(0x11e86710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006726 @ 0x11e86726 (22 bytes, 6 insns) */
void f_11e86726(void) {
  FTRACE(0x11e86726u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86726 push 0x11e8ef08 */
  push32((uint32_t)(0x11e8ef08u));
  /* 11e8672b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e8672f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e86733 call 0x11e865a4 */
  push32(0x11e86738u); f_11e865a4();
  /* 11e86738 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8673b ret  */
  ESPCHK(0x11e86726u, _esp0);
  ESP += 4; return;
}

/* FUN_1000673c @ 0x11e8673c (45 bytes, 21 insns) */
void f_11e8673c(void) {
  FTRACE(0x11e8673cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8673c push ebp */
  push32((uint32_t)(EBP));
  /* 11e8673d mov ebp, esp */
  EBP = (ESP);
  /* 11e8673f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86744 push eax */
  push32((uint32_t)(EAX));
  /* 11e86745 push eax */
  push32((uint32_t)(EAX));
  /* 11e86746 push eax */
  push32((uint32_t)(EAX));
  /* 11e86747 push eax */
  push32((uint32_t)(EAX));
  /* 11e86748 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e8674b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11e8674e push eax */
  push32((uint32_t)(EAX));
  /* 11e8674f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e86752 push eax */
  push32((uint32_t)(EAX));
  /* 11e86753 call 0x11e88192 */
  push32(0x11e86758u); f_11e88192();
  /* 11e86758 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e8675b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8675e push eax */
  push32((uint32_t)(EAX));
  /* 11e8675f call 0x11e86710 */
  push32(0x11e86764u); f_11e86710();
  /* 11e86764 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86767 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86768 ret  */
  ESPCHK(0x11e8673cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006769 @ 0x11e86769 (45 bytes, 21 insns) */
void f_11e86769(void) {
  FTRACE(0x11e86769u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86769 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8676a mov ebp, esp */
  EBP = (ESP);
  /* 11e8676c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8676f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86771 push eax */
  push32((uint32_t)(EAX));
  /* 11e86772 push eax */
  push32((uint32_t)(EAX));
  /* 11e86773 push eax */
  push32((uint32_t)(EAX));
  /* 11e86774 push eax */
  push32((uint32_t)(EAX));
  /* 11e86775 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e86778 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11e8677b push eax */
  push32((uint32_t)(EAX));
  /* 11e8677c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8677f push eax */
  push32((uint32_t)(EAX));
  /* 11e86780 call 0x11e88192 */
  push32(0x11e86785u); f_11e88192();
  /* 11e86785 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e86788 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8678b push eax */
  push32((uint32_t)(EAX));
  /* 11e8678c call 0x11e86726 */
  push32(0x11e86791u); f_11e86726();
  /* 11e86791 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86794 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86795 ret  */
  ESPCHK(0x11e86769u, _esp0);
  ESP += 4; return;
}

/* FUN_10006796 @ 0x11e86796 (119 bytes, 57 insns) */
void f_11e86796(void) {
  FTRACE(0x11e86796u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86796 push ebp */
  push32((uint32_t)(EBP));
  /* 11e86797 mov ebp, esp */
  EBP = (ESP);
  /* 11e86799 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8679c push ebx */
  push32((uint32_t)(EBX));
  /* 11e8679d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e867a0 push esi */
  push32((uint32_t)(ESI));
  /* 11e867a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e867a4 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e867a7 push edi */
  push32((uint32_t)(EDI));
  /* 11e867a8 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11e867ab mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11e867ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e867b0 mov eax, edi */
  EAX = (EDI);
  /* 11e867b2 jle 0x11e867d3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e867d3;
  /* 11e867b4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e867b7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e867b9:;
  /* 11e867b9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e867bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e867bd je 0x11e867c5 */
  if (C.zf) goto L_11e867c5;
  /* 11e867bf movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11e867c2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e867c3 jmp 0x11e867c8 */
  goto L_11e867c8;
L_11e867c5:;
  /* 11e867c5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e867c7 pop edx */
  EDX = (pop32());
L_11e867c8:;
  /* 11e867c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e867ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e867cb dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11e867ce jne 0x11e867b9 */
  if (!C.zf) goto L_11e867b9;
  /* 11e867d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11e867d3:;
  /* 11e867d3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11e867d6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e867d8 jl 0x11e867ec */
  if ((C.sf!=C.of)) goto L_11e867ec;
  /* 11e867da cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e867dd jl 0x11e867ec */
  if ((C.sf!=C.of)) goto L_11e867ec;
L_11e867df:;
  /* 11e867df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e867e0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e867e3 jne 0x11e867ea */
  if (!C.zf) goto L_11e867ea;
  /* 11e867e5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11e867e8 jmp 0x11e867df */
  goto L_11e867df;
L_11e867ea:;
  /* 11e867ea inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11e867ec:;
  /* 11e867ec cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e867ef jne 0x11e867f6 */
  if (!C.zf) goto L_11e867f6;
  /* 11e867f1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11e867f4 jmp 0x11e86808 */
  goto L_11e86808;
L_11e867f6:;
  /* 11e867f6 push edi */
  push32((uint32_t)(EDI));
  /* 11e867f7 call 0x11e85f30 */
  push32(0x11e867fcu); f_11e85f30();
  /* 11e867fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e867fd push eax */
  push32((uint32_t)(EAX));
  /* 11e867fe push edi */
  push32((uint32_t)(EDI));
  /* 11e867ff push esi */
  push32((uint32_t)(ESI));
  /* 11e86800 call 0x11e86a70 */
  push32(0x11e86805u); f_11e86a70();
  /* 11e86805 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e86808:;
  /* 11e86808 pop edi */
  EDI = (pop32());
  /* 11e86809 pop esi */
  ESI = (pop32());
  /* 11e8680a pop ebx */
  EBX = (pop32());
  /* 11e8680b pop ebp */
  EBP = (pop32());
  /* 11e8680c ret  */
  ESPCHK(0x11e86796u, _esp0);
  ESP += 4; return;
}

/* FUN_1000680d @ 0x11e8680d (92 bytes, 41 insns) */
void f_11e8680d(void) {
  FTRACE(0x11e8680du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8680d push ebp */
  push32((uint32_t)(EBP));
  /* 11e8680e mov ebp, esp */
  EBP = (ESP);
  /* 11e86810 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86813 push esi */
  push32((uint32_t)(ESI));
  /* 11e86814 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e86817 push edi */
  push32((uint32_t)(EDI));
  /* 11e86818 push eax */
  push32((uint32_t)(EAX));
  /* 11e86819 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e8681c push eax */
  push32((uint32_t)(EAX));
  /* 11e8681d call 0x11e86869 */
  push32(0x11e86822u); f_11e86869();
  /* 11e86822 pop ecx */
  ECX = (pop32());
  /* 11e86823 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11e86826 pop ecx */
  ECX = (pop32());
  /* 11e86827 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11e8682a push eax */
  push32((uint32_t)(EAX));
  /* 11e8682b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8682d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e8682f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86832 mov edi, esp */
  EDI = (ESP);
  /* 11e86834 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e86835 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e86836 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11e86838 call 0x11e88663 */
  push32(0x11e8683du); f_11e88663();
  /* 11e8683d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e86840 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e86843 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11e86846 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11e8684a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e8684c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11e86850 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11e86853 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11e86856 push eax */
  push32((uint32_t)(EAX));
  /* 11e86857 push edi */
  push32((uint32_t)(EDI));
  /* 11e86858 call 0x11e86920 */
  push32(0x11e8685du); f_11e86920();
  /* 11e8685d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86860 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11e86863 mov eax, esi */
  EAX = (ESI);
  /* 11e86865 pop edi */
  EDI = (pop32());
  /* 11e86866 pop esi */
  ESI = (pop32());
  /* 11e86867 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86868 ret  */
  ESPCHK(0x11e8680du, _esp0);
  ESP += 4; return;
}

/* FUN_10006869 @ 0x11e86869 (182 bytes, 70 insns) */
void f_11e86869(void) {
  FTRACE(0x11e86869u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86869 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8686a mov ebp, esp */
  EBP = (ESP);
  /* 11e8686c push ecx */
  push32((uint32_t)(ECX));
  /* 11e8686d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86870 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86871 push esi */
  push32((uint32_t)(ESI));
  /* 11e86872 push edi */
  push32((uint32_t)(EDI));
  /* 11e86873 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11e86877 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11e8687c mov ecx, eax */
  ECX = (EAX);
  /* 11e8687e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e86883 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e86886 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e86888 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e8688b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e8688e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11e86890 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11e86893 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11e86898 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e8689d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e8689f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11e868a2 je 0x11e868b7 */
  if (C.zf) goto L_11e868b7;
  /* 11e868a4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e868a6 je 0x11e868b0 */
  if (C.zf) goto L_11e868b0;
  /* 11e868a8 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11e868ae jmp 0x11e868d8 */
  goto L_11e868d8;
L_11e868b0:;
  /* 11e868b0 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11e868b5 jmp 0x11e868d8 */
  goto L_11e868d8;
L_11e868b7:;
  /* 11e868b7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e868b9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e868bb jne 0x11e868cf */
  if (!C.zf) goto L_11e868cf;
  /* 11e868bd cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e868bf jne 0x11e868cf */
  if (!C.zf) goto L_11e868cf;
  /* 11e868c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e868c4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11e868c7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11e868c9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11e868cd jmp 0x11e8691a */
  goto L_11e8691a;
L_11e868cf:;
  /* 11e868cf lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11e868d5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11e868d8:;
  /* 11e868d8 mov ecx, edx */
  ECX = (EDX);
  /* 11e868da shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11e868dd shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11e868e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e868e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e868e5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11e868e8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11e868eb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e868ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e868f0:;
  /* 11e868f0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11e868f2 jne 0x11e86911 */
  if (!C.zf) goto L_11e86911;
  /* 11e868f4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11e868f6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e868f8 mov ebx, edx */
  EBX = (EDX);
  /* 11e868fa shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11e868fd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11e868ff lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11e86902 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e86904 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11e86907 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8690d mov ecx, ebx */
  ECX = (EBX);
  /* 11e8690f jmp 0x11e868f0 */
  goto L_11e868f0;
L_11e86911:;
  /* 11e86911 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86914 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e86916 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11e8691a:;
  /* 11e8691a pop edi */
  EDI = (pop32());
  /* 11e8691b pop esi */
  ESI = (pop32());
  /* 11e8691c pop ebx */
  EBX = (pop32());
  /* 11e8691d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8691e ret  */
  ESPCHK(0x11e86869u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x11e86920 (7 bytes, 3 insns) */
void f_11e86920(void) {
  FTRACE(0x11e86920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86920 push edi */
  push32((uint32_t)(EDI));
  /* 11e86921 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e86925 jmp 0x11e86991 */
  jmp_ind(0x11e86991u); return;
}

/* FUN_10006930 @ 0x11e86930 (224 bytes, 84 insns) */
void f_11e86930(void) {
  FTRACE(0x11e86930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86930 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86934 push edi */
  push32((uint32_t)(EDI));
  /* 11e86935 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e8693b je 0x11e8694c */
  if (C.zf) goto L_11e8694c;
L_11e8693d:;
  /* 11e8693d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e8693f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86940 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e86942 je 0x11e8697f */
  if (C.zf) goto L_11e8697f;
  /* 11e86944 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e8694a jne 0x11e8693d */
  if (!C.zf) goto L_11e8693d;
L_11e8694c:;
  /* 11e8694c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e8694e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e86953 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86955 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e86958 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e8695a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8695d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e86962 je 0x11e8694c */
  if (C.zf) goto L_11e8694c;
  /* 11e86964 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e86967 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e86969 je 0x11e8698e */
  if (C.zf) goto L_11e8698e;
  /* 11e8696b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e8696d je 0x11e86989 */
  if (C.zf) goto L_11e86989;
  /* 11e8696f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e86974 je 0x11e86984 */
  if (C.zf) goto L_11e86984;
  /* 11e86976 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e8697b je 0x11e8697f */
  if (C.zf) goto L_11e8697f;
  /* 11e8697d jmp 0x11e8694c */
  goto L_11e8694c;
L_11e8697f:;
  /* 11e8697f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11e86982 jmp 0x11e86991 */
  goto L_11e86991;
L_11e86984:;
  /* 11e86984 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11e86987 jmp 0x11e86991 */
  goto L_11e86991;
L_11e86989:;
  /* 11e86989 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11e8698c jmp 0x11e86991 */
  goto L_11e86991;
L_11e8698e:;
  /* 11e8698e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11e86991:;
  /* 11e86991 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e86995 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e8699b je 0x11e869b6 */
  if (C.zf) goto L_11e869b6;
L_11e8699d:;
  /* 11e8699d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e8699f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e869a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e869a2 je 0x11e86a08 */
  if (C.zf) goto L_11e86a08;
  /* 11e869a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11e869a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e869a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11e869ad jne 0x11e8699d */
  if (!C.zf) goto L_11e8699d;
  /* 11e869af jmp 0x11e869b6 */
  goto L_11e869b6;
L_11e869b1:;
  /* 11e869b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e869b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e869b6:;
  /* 11e869b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e869bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e869bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e869bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e869c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e869c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e869c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e869c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e869ce je 0x11e869b1 */
  if (C.zf) goto L_11e869b1;
  /* 11e869d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e869d2 je 0x11e86a08 */
  if (C.zf) goto L_11e86a08;
  /* 11e869d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11e869d6 je 0x11e869ff */
  if (C.zf) goto L_11e869ff;
  /* 11e869d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e869de je 0x11e869f2 */
  if (C.zf) goto L_11e869f2;
  /* 11e869e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e869e6 je 0x11e869ea */
  if (C.zf) goto L_11e869ea;
  /* 11e869e8 jmp 0x11e869b1 */
  goto L_11e869b1;
L_11e869ea:;
  /* 11e869ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e869ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e869f0 pop edi */
  EDI = (pop32());
  /* 11e869f1 ret  */
  ESPCHK(0x11e86930u, _esp0);
  ESP += 4; return;
L_11e869f2:;
  /* 11e869f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11e869f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e869f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11e869fd pop edi */
  EDI = (pop32());
  /* 11e869fe ret  */
  ESPCHK(0x11e86930u, _esp0);
  ESP += 4; return;
L_11e869ff:;
  /* 11e869ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11e86a02 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e86a06 pop edi */
  EDI = (pop32());
  /* 11e86a07 ret  */
  ESPCHK(0x11e86930u, _esp0);
  ESP += 4; return;
L_11e86a08:;
  /* 11e86a08 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11e86a0a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e86a0e pop edi */
  EDI = (pop32());
  /* 11e86a0f ret  */
  ESPCHK(0x11e86930u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11e86a10 (88 bytes, 40 insns) */
void f_11e86a10(void) {
  FTRACE(0x11e86a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86a10 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e86a14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e86a1a je 0x11e86a63 */
  if (C.zf) goto L_11e86a63;
  /* 11e86a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86a1e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e86a22 push edi */
  push32((uint32_t)(EDI));
  /* 11e86a23 mov edi, ecx */
  EDI = (ECX);
  /* 11e86a25 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86a28 jb 0x11e86a57 */
  if (C.cf) goto L_11e86a57;
  /* 11e86a2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e86a2c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e86a2f je 0x11e86a39 */
  if (C.zf) goto L_11e86a39;
  /* 11e86a31 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11e86a33:;
  /* 11e86a33 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86a35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e86a36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e86a37 jne 0x11e86a33 */
  if (!C.zf) goto L_11e86a33;
L_11e86a39:;
  /* 11e86a39 mov ecx, eax */
  ECX = (EAX);
  /* 11e86a3b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e86a3e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86a40 mov ecx, eax */
  ECX = (EAX);
  /* 11e86a42 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e86a45 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86a47 mov ecx, edx */
  ECX = (EDX);
  /* 11e86a49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e86a4c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86a4f je 0x11e86a57 */
  if (C.zf) goto L_11e86a57;
  /* 11e86a51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e86a53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e86a55 je 0x11e86a5d */
  if (C.zf) goto L_11e86a5d;
L_11e86a57:;
  /* 11e86a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e86a5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e86a5b jne 0x11e86a57 */
  if (!C.zf) goto L_11e86a57;
L_11e86a5d:;
  /* 11e86a5d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e86a61 pop edi */
  EDI = (pop32());
  /* 11e86a62 ret  */
  ESPCHK(0x11e86a10u, _esp0);
  ESP += 4; return;
L_11e86a63:;
  /* 11e86a63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86a67 ret  */
  ESPCHK(0x11e86a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x11e86a70 (664 bytes, 256 insns) [15 switch table(s)] */
void f_11e86a70(void) {
  FTRACE(0x11e86a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e86a71 mov ebp, esp */
  EBP = (ESP);
  /* 11e86a73 push edi */
  push32((uint32_t)(EDI));
  /* 11e86a74 push esi */
  push32((uint32_t)(ESI));
  /* 11e86a75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e86a78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e86a7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86a7e mov eax, ecx */
  EAX = (ECX);
  /* 11e86a80 mov edx, ecx */
  EDX = (ECX);
  /* 11e86a82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86a84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86a86 jbe 0x11e86a90 */
  if ((C.cf||C.zf)) goto L_11e86a90;
  /* 11e86a88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86a8a jb 0x11e86c08 */
  if (C.cf) goto L_11e86c08;
L_11e86a90:;
  /* 11e86a90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e86a96 jne 0x11e86aac */
  if (!C.zf) goto L_11e86aac;
  /* 11e86a98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86a9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e86a9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86aa1 jb 0x11e86acc */
  if (C.cf) goto L_11e86acc;
  /* 11e86aa3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86aa5 jmp dword ptr [edx*4 + 0x11e86bb8] */
  switch (EDX) {
    case 0: goto L_11e86bc8;
    case 1: goto L_11e86bd0;
    case 2: goto L_11e86bdc;
    case 3: goto L_11e86bf0;
    default: x86_unimpl("switch@0x11e86aa5 out of table"); return;
  }
L_11e86aac:;
  /* 11e86aac mov eax, edi */
  EAX = (EDI);
  /* 11e86aae mov edx, 3 */
  EDX = (0x3u);
  /* 11e86ab3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86ab6 jb 0x11e86ac4 */
  if (C.cf) goto L_11e86ac4;
  /* 11e86ab8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e86abb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86abd jmp dword ptr [eax*4 + 0x11e86ad0] */
  switch (EAX) {
    case 1: goto L_11e86ae0;
    case 2: goto L_11e86b0c;
    case 3: goto L_11e86b30;
    default: x86_unimpl("switch@0x11e86abd out of table"); return;
  }
L_11e86ac4:;
  /* 11e86ac4 jmp dword ptr [ecx*4 + 0x11e86bc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e86bc8)))); return;
  /* 11e86acb nop  */
  /* nop */
L_11e86acc:;
  /* 11e86acc jmp dword ptr [ecx*4 + 0x11e86b4c] */
  switch (ECX) {
    case 0: goto L_11e86baf;
    case 1: goto L_11e86b9c;
    case 2: goto L_11e86b94;
    case 3: goto L_11e86b8c;
    case 4: goto L_11e86b84;
    case 5: goto L_11e86b7c;
    case 6: goto L_11e86b74;
    case 7: goto L_11e86b6c;
    default: x86_unimpl("switch@0x11e86acc out of table"); return;
  }
  /* 11e86ad3 nop  */
  /* nop */
L_11e86ae0:;
  /* 11e86ae0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86ae2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86ae4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86ae6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86ae9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86aec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86aef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86af2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86af5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86af8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86afb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86afe jb 0x11e86acc */
  if (C.cf) goto L_11e86acc;
  /* 11e86b00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86b02 jmp dword ptr [edx*4 + 0x11e86bb8] */
  switch (EDX) {
    case 0: goto L_11e86bc8;
    case 1: goto L_11e86bd0;
    case 2: goto L_11e86bdc;
    case 3: goto L_11e86bf0;
    default: x86_unimpl("switch@0x11e86b02 out of table"); return;
  }
  /* 11e86b09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86b0c:;
  /* 11e86b0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86b0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86b10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86b12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86b15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86b18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86b1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86b1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86b21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86b24 jb 0x11e86acc */
  if (C.cf) goto L_11e86acc;
  /* 11e86b26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86b28 jmp dword ptr [edx*4 + 0x11e86bb8] */
  switch (EDX) {
    case 0: goto L_11e86bc8;
    case 1: goto L_11e86bd0;
    case 2: goto L_11e86bdc;
    case 3: goto L_11e86bf0;
    default: x86_unimpl("switch@0x11e86b28 out of table"); return;
  }
  /* 11e86b2f nop  */
  /* nop */
L_11e86b30:;
  /* 11e86b30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86b32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86b34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86b36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e86b37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86b3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e86b3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86b3e jb 0x11e86acc */
  if (C.cf) goto L_11e86acc;
  /* 11e86b40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86b42 jmp dword ptr [edx*4 + 0x11e86bb8] */
  switch (EDX) {
    case 0: goto L_11e86bc8;
    case 1: goto L_11e86bd0;
    case 2: goto L_11e86bdc;
    case 3: goto L_11e86bf0;
    default: x86_unimpl("switch@0x11e86b42 out of table"); return;
  }
  /* 11e86b49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86b6c:;
  /* 11e86b6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e86b70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e86b74:;
  /* 11e86b74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e86b78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e86b7c:;
  /* 11e86b7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e86b80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e86b84:;
  /* 11e86b84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e86b88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e86b8c:;
  /* 11e86b8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e86b90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e86b94:;
  /* 11e86b94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e86b98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e86b9c:;
  /* 11e86b9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e86ba0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e86ba4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e86bab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86bad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e86baf:;
  /* 11e86baf jmp dword ptr [edx*4 + 0x11e86bb8] */
  switch (EDX) {
    case 0: goto L_11e86bc8;
    case 1: goto L_11e86bd0;
    case 2: goto L_11e86bdc;
    case 3: goto L_11e86bf0;
    default: x86_unimpl("switch@0x11e86baf out of table"); return;
  }
  /* 11e86bb6 mov edi, edi */
  EDI = (EDI);
L_11e86bc8:;
  /* 11e86bc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86bcb pop esi */
  ESI = (pop32());
  /* 11e86bcc pop edi */
  EDI = (pop32());
  /* 11e86bcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86bce ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86bcf nop  */
  /* nop */
L_11e86bd0:;
  /* 11e86bd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86bd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86bd7 pop esi */
  ESI = (pop32());
  /* 11e86bd8 pop edi */
  EDI = (pop32());
  /* 11e86bd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86bda ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86bdb nop  */
  /* nop */
L_11e86bdc:;
  /* 11e86bdc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86bde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86be0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86be3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86be9 pop esi */
  ESI = (pop32());
  /* 11e86bea pop edi */
  EDI = (pop32());
  /* 11e86beb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86bec ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86bed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86bf0:;
  /* 11e86bf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e86bf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e86bf4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86bf7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86bfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86bfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86c03 pop esi */
  ESI = (pop32());
  /* 11e86c04 pop edi */
  EDI = (pop32());
  /* 11e86c05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86c06 ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86c07 nop  */
  /* nop */
L_11e86c08:;
  /* 11e86c08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e86c0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e86c10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e86c16 jne 0x11e86c3c */
  if (!C.zf) goto L_11e86c3c;
  /* 11e86c18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86c1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e86c1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86c21 jb 0x11e86c30 */
  if (C.cf) goto L_11e86c30;
  /* 11e86c23 std  */
  C.df=1;
  /* 11e86c24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86c26 cld  */
  C.df=0;
  /* 11e86c27 jmp dword ptr [edx*4 + 0x11e86d50] */
  switch (EDX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86c27 out of table"); return;
  }
  /* 11e86c2e mov edi, edi */
  EDI = (EDI);
L_11e86c30:;
  /* 11e86c30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e86c32 jmp dword ptr [ecx*4 + 0x11e86d00] */
  switch (ECX) {
    case 0: goto L_11e86d47;
    default: x86_unimpl("switch@0x11e86c32 out of table"); return;
  }
  /* 11e86c39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86c3c:;
  /* 11e86c3c mov eax, edi */
  EAX = (EDI);
  /* 11e86c3e mov edx, 3 */
  EDX = (0x3u);
  /* 11e86c43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86c46 jb 0x11e86c54 */
  if (C.cf) goto L_11e86c54;
  /* 11e86c48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e86c4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86c4d jmp dword ptr [eax*4 + 0x11e86c58] */
  switch (EAX) {
    case 1: goto L_11e86c68;
    case 2: goto L_11e86c88;
    case 3: goto L_11e86cb0;
    default: x86_unimpl("switch@0x11e86c4d out of table"); return;
  }
L_11e86c54:;
  /* 11e86c54 jmp dword ptr [ecx*4 + 0x11e86d50] */
  switch (ECX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86c54 out of table"); return;
  }
  /* 11e86c5b nop  */
  /* nop */
L_11e86c68:;
  /* 11e86c68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86c6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86c6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86c70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e86c71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86c74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e86c75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86c78 jb 0x11e86c30 */
  if (C.cf) goto L_11e86c30;
  /* 11e86c7a std  */
  C.df=1;
  /* 11e86c7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86c7d cld  */
  C.df=0;
  /* 11e86c7e jmp dword ptr [edx*4 + 0x11e86d50] */
  switch (EDX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86c7e out of table"); return;
  }
  /* 11e86c85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86c88:;
  /* 11e86c88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86c8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86c8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86c90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86c93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86c96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86c99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86c9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86c9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86ca2 jb 0x11e86c30 */
  if (C.cf) goto L_11e86c30;
  /* 11e86ca4 std  */
  C.df=1;
  /* 11e86ca5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86ca7 cld  */
  C.df=0;
  /* 11e86ca8 jmp dword ptr [edx*4 + 0x11e86d50] */
  switch (EDX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86ca8 out of table"); return;
  }
  /* 11e86caf nop  */
  /* nop */
L_11e86cb0:;
  /* 11e86cb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86cb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86cb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86cb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86cbb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86cbe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86cc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e86cc4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86cc7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86cca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86ccd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86cd0 jb 0x11e86c30 */
  if (C.cf) goto L_11e86c30;
  /* 11e86cd6 std  */
  C.df=1;
  /* 11e86cd7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e86cd9 cld  */
  C.df=0;
  /* 11e86cda jmp dword ptr [edx*4 + 0x11e86d50] */
  switch (EDX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86cda out of table"); return;
  }
  /* 11e86ce1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e86ce4 add al, 0x6d */
  { uint32_t _a=(AL),_b=(0x6du),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e86ce6 call 0xfa5578fc */
  call_ind(0xfa5578fcu, 0x11e86cebu);
  /* 11e86ceb adc dword ptr [ebp*2 + 0x6d1c11e8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP*2 + 0x6d1c11e8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBP*2 + 0x6d1c11e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e86cf2 call 0xfa559108 */
  call_ind(0xfa559108u, 0x11e86cf7u);
  /* 11e86cf7 adc dword ptr [ebp*2 + 0x6d3411e8], ebp */
  { uint32_t _a=(r32((uint32_t)(EBP*2 + 0x6d3411e8))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EBP*2 + 0x6d3411e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e86d04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e86d08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e86d0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e86d10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e86d14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e86d18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e86d1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e86d20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e86d24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e86d28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e86d2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e86d30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e86d34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e86d38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e86d3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e86d43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86d45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e86d47:;
  /* 11e86d47 jmp dword ptr [edx*4 + 0x11e86d50] */
  switch (EDX) {
    case 0: goto L_11e86d60;
    case 1: goto L_11e86d68;
    case 2: goto L_11e86d78;
    case 3: goto L_11e86d8c;
    default: x86_unimpl("switch@0x11e86d47 out of table"); return;
  }
  /* 11e86d4e mov edi, edi */
  EDI = (EDI);
L_11e86d60:;
  /* 11e86d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86d63 pop esi */
  ESI = (pop32());
  /* 11e86d64 pop edi */
  EDI = (pop32());
  /* 11e86d65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86d66 ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86d67 nop  */
  /* nop */
L_11e86d68:;
  /* 11e86d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86d6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86d71 pop esi */
  ESI = (pop32());
  /* 11e86d72 pop edi */
  EDI = (pop32());
  /* 11e86d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86d74 ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86d75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e86d78:;
  /* 11e86d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86d7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86d7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86d81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86d87 pop esi */
  ESI = (pop32());
  /* 11e86d88 pop edi */
  EDI = (pop32());
  /* 11e86d89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86d8a ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
  /* 11e86d8b nop  */
  /* nop */
L_11e86d8c:;
  /* 11e86d8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e86d8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e86d92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e86d95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e86d98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e86d9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e86d9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86da1 pop esi */
  ESI = (pop32());
  /* 11e86da2 pop edi */
  EDI = (pop32());
  /* 11e86da3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86da4 ret  */
  ESPCHK(0x11e86a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dae @ 0x11e86dae (429 bytes, 143 insns) */
void f_11e86dae(void) {
  FTRACE(0x11e86daeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86dae push ebp */
  push32((uint32_t)(EBP));
  /* 11e86daf mov ebp, esp */
  EBP = (ESP);
  /* 11e86db1 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86db4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e86db5 push esi */
  push32((uint32_t)(ESI));
  /* 11e86db6 push edi */
  push32((uint32_t)(EDI));
  /* 11e86db7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e86db9 call 0x11e83f07 */
  push32(0x11e86dbeu); f_11e83f07();
  /* 11e86dbe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e86dc1 call 0x11e86f5b */
  push32(0x11e86dc6u); f_11e86f5b();
  /* 11e86dc6 mov ebx, eax */
  EBX = (EAX);
  /* 11e86dc8 pop ecx */
  ECX = (pop32());
  /* 11e86dc9 cmp ebx, dword ptr [0x11e8fb58] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11e8fb58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86dcf pop ecx */
  ECX = (pop32());
  /* 11e86dd0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e86dd3 jne 0x11e86ddc */
  if (!C.zf) goto L_11e86ddc;
L_11e86dd5:;
  /* 11e86dd5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e86dd7 jmp 0x11e86f4c */
  goto L_11e86f4c;
L_11e86ddc:;
  /* 11e86ddc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e86dde je 0x11e86f3a */
  if (C.zf) goto L_11e86f3a;
  /* 11e86de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e86de6 mov eax, 0x11e8ef28 */
  EAX = (0x11e8ef28u);
L_11e86deb:;
  /* 11e86deb cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86ded je 0x11e86e63 */
  if (C.zf) goto L_11e86e63;
  /* 11e86def add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86df2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e86df3 cmp eax, 0x11e8f018 */
  { uint32_t _a=(EAX),_b=(0x11e8f018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86df8 jl 0x11e86deb */
  if ((C.sf!=C.of)) goto L_11e86deb;
  /* 11e86dfa lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e86dfd push eax */
  push32((uint32_t)(EAX));
  /* 11e86dfe push ebx */
  push32((uint32_t)(EBX));
  /* 11e86dff call dword ptr [0x11e8a038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a038))), 0x11e86e05u);
  /* 11e86e05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e86e07 pop esi */
  ESI = (pop32());
  /* 11e86e08 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86e0a jne 0x11e86f31 */
  if (!C.zf) goto L_11e86f31;
  /* 11e86e10 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e86e12 and dword ptr [0x11e8fd84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd84)))&(0x0u); w32((uint32_t)(0x11e8fd84), (_r)); fl_logic(_r,32); }
  /* 11e86e19 pop ecx */
  ECX = (pop32());
  /* 11e86e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86e1c mov edi, 0x11e8fc80 */
  EDI = (0x11e8fc80u);
  /* 11e86e21 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86e24 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e86e26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11e86e27 mov dword ptr [0x11e8fb58], ebx */
  w32((uint32_t)(0x11e8fb58), (EBX));
  /* 11e86e2d jbe 0x11e86f1e */
  if ((C.cf||C.zf)) goto L_11e86f1e;
  /* 11e86e33 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e86e37 je 0x11e86ef9 */
  if (C.zf) goto L_11e86ef9;
  /* 11e86e3d lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11e86e40:;
  /* 11e86e40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e86e42 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e86e44 je 0x11e86ef9 */
  if (C.zf) goto L_11e86ef9;
  /* 11e86e4a movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11e86e4e movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11e86e51:;
  /* 11e86e51 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86e53 ja 0x11e86eed */
  if ((!C.cf&&!C.zf)) goto L_11e86eed;
  /* 11e86e59 or byte ptr [eax + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x4u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e86e60 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e86e61 jmp 0x11e86e51 */
  goto L_11e86e51;
L_11e86e63:;
  /* 11e86e63 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e86e67 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e86e69 pop ecx */
  ECX = (pop32());
  /* 11e86e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86e6c mov edi, 0x11e8fc80 */
  EDI = (0x11e8fc80u);
  /* 11e86e71 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11e86e74 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e86e76 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11e86e79 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11e86e7a lea ebx, [esi + 0x11e8ef38] */
  EBX = ((uint32_t)(ESI + 0x11e8ef38));
L_11e86e80:;
  /* 11e86e80 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e86e83 mov ecx, ebx */
  ECX = (EBX);
  /* 11e86e85 je 0x11e86eb3 */
  if (C.zf) goto L_11e86eb3;
L_11e86e87:;
  /* 11e86e87 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e86e8a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e86e8c je 0x11e86eb3 */
  if (C.zf) goto L_11e86eb3;
  /* 11e86e8e movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11e86e91 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11e86e94 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86e96 ja 0x11e86eac */
  if ((!C.cf&&!C.zf)) goto L_11e86eac;
  /* 11e86e98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e86e9b mov dl, byte ptr [edx + 0x11e8ef20] */
  DL = (r8((uint32_t)(EDX + 0x11e8ef20)));
L_11e86ea1:;
  /* 11e86ea1 or byte ptr [eax + 0x11e8fc81], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(DL); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e86ea7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e86ea8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86eaa jbe 0x11e86ea1 */
  if ((C.cf||C.zf)) goto L_11e86ea1;
L_11e86eac:;
  /* 11e86eac inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86ead inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86eae cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e86eb1 jne 0x11e86e87 */
  if (!C.zf) goto L_11e86e87;
L_11e86eb3:;
  /* 11e86eb3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e86eb6 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e86eb9 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86ebd jb 0x11e86e80 */
  if (C.cf) goto L_11e86e80;
  /* 11e86ebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e86ec2 mov dword ptr [0x11e8fb6c], 1 */
  w32((uint32_t)(0x11e8fb6c), (0x1u));
  /* 11e86ecc push eax */
  push32((uint32_t)(EAX));
  /* 11e86ecd mov dword ptr [0x11e8fb58], eax */
  w32((uint32_t)(0x11e8fb58), (EAX));
  /* 11e86ed2 call 0x11e86fa5 */
  push32(0x11e86ed7u); f_11e86fa5();
  /* 11e86ed7 lea esi, [esi + 0x11e8ef2c] */
  ESI = ((uint32_t)(ESI + 0x11e8ef2c));
  /* 11e86edd mov edi, 0x11e8fb60 */
  EDI = (0x11e8fb60u);
  /* 11e86ee2 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e86ee3 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e86ee4 pop ecx */
  ECX = (pop32());
  /* 11e86ee5 mov dword ptr [0x11e8fd84], eax */
  w32((uint32_t)(0x11e8fd84), (EAX));
  /* 11e86eea movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e86eeb jmp 0x11e86f3f */
  goto L_11e86f3f;
L_11e86eed:;
  /* 11e86eed inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86eee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e86eef cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e86ef3 jne 0x11e86e40 */
  if (!C.zf) goto L_11e86e40;
L_11e86ef9:;
  /* 11e86ef9 mov eax, esi */
  EAX = (ESI);
L_11e86efb:;
  /* 11e86efb or byte ptr [eax + 0x11e8fc81], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x8u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e86f02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e86f03 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86f08 jb 0x11e86efb */
  if (C.cf) goto L_11e86efb;
  /* 11e86f0a push ebx */
  push32((uint32_t)(EBX));
  /* 11e86f0b call 0x11e86fa5 */
  push32(0x11e86f10u); f_11e86fa5();
  /* 11e86f10 pop ecx */
  ECX = (pop32());
  /* 11e86f11 mov dword ptr [0x11e8fd84], eax */
  w32((uint32_t)(0x11e8fd84), (EAX));
  /* 11e86f16 mov dword ptr [0x11e8fb6c], esi */
  w32((uint32_t)(0x11e8fb6c), (ESI));
  /* 11e86f1c jmp 0x11e86f25 */
  goto L_11e86f25;
L_11e86f1e:;
  /* 11e86f1e and dword ptr [0x11e8fb6c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fb6c)))&(0x0u); w32((uint32_t)(0x11e8fb6c), (_r)); fl_logic(_r,32); }
L_11e86f25:;
  /* 11e86f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86f27 mov edi, 0x11e8fb60 */
  EDI = (0x11e8fb60u);
  /* 11e86f2c stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86f2d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86f2e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86f2f jmp 0x11e86f3f */
  goto L_11e86f3f;
L_11e86f31:;
  /* 11e86f31 cmp dword ptr [0x11e8fa6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86f38 je 0x11e86f49 */
  if (C.zf) goto L_11e86f49;
L_11e86f3a:;
  /* 11e86f3a call 0x11e86fd8 */
  push32(0x11e86f3fu); f_11e86fd8();
L_11e86f3f:;
  /* 11e86f3f call 0x11e87001 */
  push32(0x11e86f44u); f_11e87001();
  /* 11e86f44 jmp 0x11e86dd5 */
  goto L_11e86dd5;
L_11e86f49:;
  /* 11e86f49 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11e86f4c:;
  /* 11e86f4c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e86f4e call 0x11e83f68 */
  push32(0x11e86f53u); f_11e83f68();
  /* 11e86f53 pop ecx */
  ECX = (pop32());
  /* 11e86f54 mov eax, esi */
  EAX = (ESI);
  /* 11e86f56 pop edi */
  EDI = (pop32());
  /* 11e86f57 pop esi */
  ESI = (pop32());
  /* 11e86f58 pop ebx */
  EBX = (pop32());
  /* 11e86f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e86f5a ret  */
  ESPCHK(0x11e86daeu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f5b @ 0x11e86f5b (74 bytes, 15 insns) */
void f_11e86f5b(void) {
  FTRACE(0x11e86f5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86f5b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86f5f and dword ptr [0x11e8fa6c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fa6c)))&(0x0u); w32((uint32_t)(0x11e8fa6c), (_r)); fl_logic(_r,32); }
  /* 11e86f66 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86f69 jne 0x11e86f7b */
  if (!C.zf) goto L_11e86f7b;
  /* 11e86f6b mov dword ptr [0x11e8fa6c], 1 */
  w32((uint32_t)(0x11e8fa6c), (0x1u));
  /* 11e86f75 jmp dword ptr [0x11e8a030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e8a030)))); return;
L_11e86f7b:;
  /* 11e86f7b cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86f7e jne 0x11e86f90 */
  if (!C.zf) goto L_11e86f90;
  /* 11e86f80 mov dword ptr [0x11e8fa6c], 1 */
  w32((uint32_t)(0x11e8fa6c), (0x1u));
  /* 11e86f8a jmp dword ptr [0x11e8a034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e8a034)))); return;
L_11e86f90:;
  /* 11e86f90 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e86f93 jne 0x11e86fa4 */
  if (!C.zf) goto L_11e86fa4;
  /* 11e86f95 mov eax, dword ptr [0x11e8fa9c] */
  EAX = (r32((uint32_t)(0x11e8fa9c)));
  /* 11e86f9a mov dword ptr [0x11e8fa6c], 1 */
  w32((uint32_t)(0x11e8fa6c), (0x1u));
L_11e86fa4:;
  /* 11e86fa4 ret  */
  ESPCHK(0x11e86f5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa5 @ 0x11e86fa5 (51 bytes, 19 insns) */
void f_11e86fa5(void) {
  FTRACE(0x11e86fa5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86fa5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e86fa9 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86fae je 0x11e86fd2 */
  if (C.zf) goto L_11e86fd2;
  /* 11e86fb0 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86fb3 je 0x11e86fcc */
  if (C.zf) goto L_11e86fcc;
  /* 11e86fb5 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e86fb8 je 0x11e86fc6 */
  if (C.zf) goto L_11e86fc6;
  /* 11e86fba dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e86fbb je 0x11e86fc0 */
  if (C.zf) goto L_11e86fc0;
  /* 11e86fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86fbf ret  */
  ESPCHK(0x11e86fa5u, _esp0);
  ESP += 4; return;
L_11e86fc0:;
  /* 11e86fc0 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11e86fc5 ret  */
  ESPCHK(0x11e86fa5u, _esp0);
  ESP += 4; return;
L_11e86fc6:;
  /* 11e86fc6 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11e86fcb ret  */
  ESPCHK(0x11e86fa5u, _esp0);
  ESP += 4; return;
L_11e86fcc:;
  /* 11e86fcc mov eax, 0x804 */
  EAX = (0x804u);
  /* 11e86fd1 ret  */
  ESPCHK(0x11e86fa5u, _esp0);
  ESP += 4; return;
L_11e86fd2:;
  /* 11e86fd2 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11e86fd7 ret  */
  ESPCHK(0x11e86fa5u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd8 @ 0x11e86fd8 (41 bytes, 17 insns) */
void f_11e86fd8(void) {
  FTRACE(0x11e86fd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e86fd8 push edi */
  push32((uint32_t)(EDI));
  /* 11e86fd9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e86fdb pop ecx */
  ECX = (pop32());
  /* 11e86fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86fde mov edi, 0x11e8fc80 */
  EDI = (0x11e8fc80u);
  /* 11e86fe3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e86fe5 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11e86fe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e86fe8 mov edi, 0x11e8fb60 */
  EDI = (0x11e8fb60u);
  /* 11e86fed mov dword ptr [0x11e8fb58], eax */
  w32((uint32_t)(0x11e8fb58), (EAX));
  /* 11e86ff2 mov dword ptr [0x11e8fb6c], eax */
  w32((uint32_t)(0x11e8fb6c), (EAX));
  /* 11e86ff7 mov dword ptr [0x11e8fd84], eax */
  w32((uint32_t)(0x11e8fd84), (EAX));
  /* 11e86ffc stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86ffd stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86ffe stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11e86fff pop edi */
  EDI = (pop32());
  /* 11e87000 ret  */
  ESPCHK(0x11e86fd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007001 @ 0x11e87001 (389 bytes, 124 insns) */
void f_11e87001(void) {
  FTRACE(0x11e87001u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87001 push ebp */
  push32((uint32_t)(EBP));
  /* 11e87002 mov ebp, esp */
  EBP = (ESP);
  /* 11e87004 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8700a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11e8700d push esi */
  push32((uint32_t)(ESI));
  /* 11e8700e push eax */
  push32((uint32_t)(EAX));
  /* 11e8700f push dword ptr [0x11e8fb58] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fb58))));
  /* 11e87015 call dword ptr [0x11e8a038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a038))), 0x11e8701bu);
  /* 11e8701b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8701e jne 0x11e8713a */
  if (!C.zf) goto L_11e8713a;
  /* 11e87024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87026 mov esi, 0x100 */
  ESI = (0x100u);
L_11e8702b:;
  /* 11e8702b mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11e87032 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e87033 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87035 jb 0x11e8702b */
  if (C.cf) goto L_11e8702b;
  /* 11e87037 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11e8703a mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11e87041 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e87043 je 0x11e8707c */
  if (C.zf) goto L_11e8707c;
  /* 11e87045 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87046 push edi */
  push32((uint32_t)(EDI));
  /* 11e87047 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11e8704a:;
  /* 11e8704a movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11e8704d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11e87050 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87052 ja 0x11e87071 */
  if ((!C.cf&&!C.zf)) goto L_11e87071;
  /* 11e87054 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87056 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11e8705d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e8705e mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11e87063 mov ebx, ecx */
  EBX = (ECX);
  /* 11e87065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e87068 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11e8706a mov ecx, ebx */
  ECX = (EBX);
  /* 11e8706c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e8706f rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11e87071:;
  /* 11e87071 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e87072 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e87073 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11e87076 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e87078 jne 0x11e8704a */
  if (!C.zf) goto L_11e8704a;
  /* 11e8707a pop edi */
  EDI = (pop32());
  /* 11e8707b pop ebx */
  EBX = (pop32());
L_11e8707c:;
  /* 11e8707c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8707e lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11e87084 push dword ptr [0x11e8fd84] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd84))));
  /* 11e8708a push dword ptr [0x11e8fb58] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fb58))));
  /* 11e87090 push eax */
  push32((uint32_t)(EAX));
  /* 11e87091 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11e87097 push esi */
  push32((uint32_t)(ESI));
  /* 11e87098 push eax */
  push32((uint32_t)(EAX));
  /* 11e87099 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8709b call 0x11e87c84 */
  push32(0x11e870a0u); f_11e87c84();
  /* 11e870a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e870a2 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11e870a8 push dword ptr [0x11e8fb58] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fb58))));
  /* 11e870ae push esi */
  push32((uint32_t)(ESI));
  /* 11e870af push eax */
  push32((uint32_t)(EAX));
  /* 11e870b0 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11e870b6 push esi */
  push32((uint32_t)(ESI));
  /* 11e870b7 push eax */
  push32((uint32_t)(EAX));
  /* 11e870b8 push esi */
  push32((uint32_t)(ESI));
  /* 11e870b9 push dword ptr [0x11e8fd84] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd84))));
  /* 11e870bf call 0x11e87dcd */
  push32(0x11e870c4u); f_11e87dcd();
  /* 11e870c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e870c6 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11e870cc push dword ptr [0x11e8fb58] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fb58))));
  /* 11e870d2 push esi */
  push32((uint32_t)(ESI));
  /* 11e870d3 push eax */
  push32((uint32_t)(EAX));
  /* 11e870d4 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11e870da push esi */
  push32((uint32_t)(ESI));
  /* 11e870db push eax */
  push32((uint32_t)(EAX));
  /* 11e870dc push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11e870e1 push dword ptr [0x11e8fd84] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd84))));
  /* 11e870e7 call 0x11e87dcd */
  push32(0x11e870ecu); f_11e87dcd();
  /* 11e870ec add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e870ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e870f1 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11e870f7:;
  /* 11e870f7 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11e870fa test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11e870fd je 0x11e87115 */
  if (C.zf) goto L_11e87115;
  /* 11e870ff or byte ptr [eax + 0x11e8fc81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x10u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e87106 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11e8710d:;
  /* 11e8710d mov byte ptr [eax + 0x11e8fb80], dl */
  w8((uint32_t)(EAX + 0x11e8fb80), (DL));
  /* 11e87113 jmp 0x11e87131 */
  goto L_11e87131;
L_11e87115:;
  /* 11e87115 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11e87118 je 0x11e8712a */
  if (C.zf) goto L_11e8712a;
  /* 11e8711a or byte ptr [eax + 0x11e8fc81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x20u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e87121 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11e87128 jmp 0x11e8710d */
  goto L_11e8710d;
L_11e8712a:;
  /* 11e8712a and byte ptr [eax + 0x11e8fb80], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fb80)))&(0x0u); w8((uint32_t)(EAX + 0x11e8fb80), (_r)); fl_logic(_r,8); }
L_11e87131:;
  /* 11e87131 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e87132 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e87133 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e87134 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87136 jb 0x11e870f7 */
  if (C.cf) goto L_11e870f7;
  /* 11e87138 jmp 0x11e87183 */
  goto L_11e87183;
L_11e8713a:;
  /* 11e8713a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e8713c mov esi, 0x100 */
  ESI = (0x100u);
L_11e87141:;
  /* 11e87141 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87144 jb 0x11e8715f */
  if (C.cf) goto L_11e8715f;
  /* 11e87146 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87149 ja 0x11e8715f */
  if ((!C.cf&&!C.zf)) goto L_11e8715f;
  /* 11e8714b or byte ptr [eax + 0x11e8fc81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x10u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e87152 mov cl, al */
  CL = (AL);
  /* 11e87154 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11e87157:;
  /* 11e87157 mov byte ptr [eax + 0x11e8fb80], cl */
  w8((uint32_t)(EAX + 0x11e8fb80), (CL));
  /* 11e8715d jmp 0x11e8717e */
  goto L_11e8717e;
L_11e8715f:;
  /* 11e8715f cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87162 jb 0x11e87177 */
  if (C.cf) goto L_11e87177;
  /* 11e87164 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87167 ja 0x11e87177 */
  if ((!C.cf&&!C.zf)) goto L_11e87177;
  /* 11e87169 or byte ptr [eax + 0x11e8fc81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))|(0x20u); w8((uint32_t)(EAX + 0x11e8fc81), (_r)); fl_logic(_r,8); }
  /* 11e87170 mov cl, al */
  CL = (AL);
  /* 11e87172 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e87175 jmp 0x11e87157 */
  goto L_11e87157;
L_11e87177:;
  /* 11e87177 and byte ptr [eax + 0x11e8fb80], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fb80)))&(0x0u); w8((uint32_t)(EAX + 0x11e8fb80), (_r)); fl_logic(_r,8); }
L_11e8717e:;
  /* 11e8717e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8717f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87181 jb 0x11e87141 */
  if (C.cf) goto L_11e87141;
L_11e87183:;
  /* 11e87183 pop esi */
  ESI = (pop32());
  /* 11e87184 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87185 ret  */
  ESPCHK(0x11e87001u, _esp0);
  ESP += 4; return;
}

/* FUN_10007186 @ 0x11e87186 (28 bytes, 7 insns) */
void f_11e87186(void) {
  FTRACE(0x11e87186u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87186 cmp dword ptr [0x11e8fec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8718d jne 0x11e871a1 */
  if (!C.zf) goto L_11e871a1;
  /* 11e8718f push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11e87191 call 0x11e86dae */
  push32(0x11e87196u); f_11e86dae();
  /* 11e87196 pop ecx */
  ECX = (pop32());
  /* 11e87197 mov dword ptr [0x11e8fec8], 1 */
  w32((uint32_t)(0x11e8fec8), (0x1u));
L_11e871a1:;
  /* 11e871a1 ret  */
  ESPCHK(0x11e87186u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x11e871b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11e871b0(void) {
  FTRACE(0x11e871b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e871b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e871b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e871b3 push edi */
  push32((uint32_t)(EDI));
  /* 11e871b4 push esi */
  push32((uint32_t)(ESI));
  /* 11e871b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e871b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e871bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e871be mov eax, ecx */
  EAX = (ECX);
  /* 11e871c0 mov edx, ecx */
  EDX = (ECX);
  /* 11e871c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e871c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e871c6 jbe 0x11e871d0 */
  if ((C.cf||C.zf)) goto L_11e871d0;
  /* 11e871c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e871ca jb 0x11e87348 */
  if (C.cf) goto L_11e87348;
L_11e871d0:;
  /* 11e871d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e871d6 jne 0x11e871ec */
  if (!C.zf) goto L_11e871ec;
  /* 11e871d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e871db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e871de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e871e1 jb 0x11e8720c */
  if (C.cf) goto L_11e8720c;
  /* 11e871e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e871e5 jmp dword ptr [edx*4 + 0x11e872f8] */
  switch (EDX) {
    case 0: goto L_11e87308;
    case 1: goto L_11e87310;
    case 2: goto L_11e8731c;
    case 3: goto L_11e87330;
    default: x86_unimpl("switch@0x11e871e5 out of table"); return;
  }
L_11e871ec:;
  /* 11e871ec mov eax, edi */
  EAX = (EDI);
  /* 11e871ee mov edx, 3 */
  EDX = (0x3u);
  /* 11e871f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e871f6 jb 0x11e87204 */
  if (C.cf) goto L_11e87204;
  /* 11e871f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e871fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e871fd jmp dword ptr [eax*4 + 0x11e87210] */
  switch (EAX) {
    case 1: goto L_11e87220;
    case 2: goto L_11e8724c;
    case 3: goto L_11e87270;
    default: x86_unimpl("switch@0x11e871fd out of table"); return;
  }
L_11e87204:;
  /* 11e87204 jmp dword ptr [ecx*4 + 0x11e87308] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e87308)))); return;
  /* 11e8720b nop  */
  /* nop */
L_11e8720c:;
  /* 11e8720c jmp dword ptr [ecx*4 + 0x11e8728c] */
  switch (ECX) {
    case 0: goto L_11e872ef;
    case 1: goto L_11e872dc;
    case 2: goto L_11e872d4;
    case 3: goto L_11e872cc;
    case 4: goto L_11e872c4;
    case 5: goto L_11e872bc;
    case 6: goto L_11e872b4;
    case 7: goto L_11e872ac;
    default: x86_unimpl("switch@0x11e8720c out of table"); return;
  }
  /* 11e87213 nop  */
  /* nop */
L_11e87220:;
  /* 11e87220 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e87222 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87224 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87226 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e87229 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e8722c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e8722f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e87232 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e87235 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87238 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8723b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8723e jb 0x11e8720c */
  if (C.cf) goto L_11e8720c;
  /* 11e87240 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e87242 jmp dword ptr [edx*4 + 0x11e872f8] */
  switch (EDX) {
    case 0: goto L_11e87308;
    case 1: goto L_11e87310;
    case 2: goto L_11e8731c;
    case 3: goto L_11e87330;
    default: x86_unimpl("switch@0x11e87242 out of table"); return;
  }
  /* 11e87249 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e8724c:;
  /* 11e8724c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e8724e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87250 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87252 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e87255 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e87258 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e8725b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8725e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87261 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87264 jb 0x11e8720c */
  if (C.cf) goto L_11e8720c;
  /* 11e87266 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e87268 jmp dword ptr [edx*4 + 0x11e872f8] */
  switch (EDX) {
    case 0: goto L_11e87308;
    case 1: goto L_11e87310;
    case 2: goto L_11e8731c;
    case 3: goto L_11e87330;
    default: x86_unimpl("switch@0x11e87268 out of table"); return;
  }
  /* 11e8726f nop  */
  /* nop */
L_11e87270:;
  /* 11e87270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e87272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87276 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e87277 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e8727a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8727b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8727e jb 0x11e8720c */
  if (C.cf) goto L_11e8720c;
  /* 11e87280 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e87282 jmp dword ptr [edx*4 + 0x11e872f8] */
  switch (EDX) {
    case 0: goto L_11e87308;
    case 1: goto L_11e87310;
    case 2: goto L_11e8731c;
    case 3: goto L_11e87330;
    default: x86_unimpl("switch@0x11e87282 out of table"); return;
  }
  /* 11e87289 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e872ac:;
  /* 11e872ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e872b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e872b4:;
  /* 11e872b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e872b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e872bc:;
  /* 11e872bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e872c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e872c4:;
  /* 11e872c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e872c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e872cc:;
  /* 11e872cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e872d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e872d4:;
  /* 11e872d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e872d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e872dc:;
  /* 11e872dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e872e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e872e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e872eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e872ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e872ef:;
  /* 11e872ef jmp dword ptr [edx*4 + 0x11e872f8] */
  switch (EDX) {
    case 0: goto L_11e87308;
    case 1: goto L_11e87310;
    case 2: goto L_11e8731c;
    case 3: goto L_11e87330;
    default: x86_unimpl("switch@0x11e872ef out of table"); return;
  }
  /* 11e872f6 mov edi, edi */
  EDI = (EDI);
L_11e87308:;
  /* 11e87308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8730b pop esi */
  ESI = (pop32());
  /* 11e8730c pop edi */
  EDI = (pop32());
  /* 11e8730d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8730e ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e8730f nop  */
  /* nop */
L_11e87310:;
  /* 11e87310 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e87317 pop esi */
  ESI = (pop32());
  /* 11e87318 pop edi */
  EDI = (pop32());
  /* 11e87319 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8731a ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e8731b nop  */
  /* nop */
L_11e8731c:;
  /* 11e8731c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e8731e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87320 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e87323 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e87326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e87329 pop esi */
  ESI = (pop32());
  /* 11e8732a pop edi */
  EDI = (pop32());
  /* 11e8732b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8732c ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e8732d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e87330:;
  /* 11e87330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87332 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87334 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e87337 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e8733a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e8733d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e87340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e87343 pop esi */
  ESI = (pop32());
  /* 11e87344 pop edi */
  EDI = (pop32());
  /* 11e87345 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87346 ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e87347 nop  */
  /* nop */
L_11e87348:;
  /* 11e87348 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e8734c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e87350 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e87356 jne 0x11e8737c */
  if (!C.zf) goto L_11e8737c;
  /* 11e87358 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e8735b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e8735e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87361 jb 0x11e87370 */
  if (C.cf) goto L_11e87370;
  /* 11e87363 std  */
  C.df=1;
  /* 11e87364 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e87366 cld  */
  C.df=0;
  /* 11e87367 jmp dword ptr [edx*4 + 0x11e87490] */
  switch (EDX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e87367 out of table"); return;
  }
  /* 11e8736e mov edi, edi */
  EDI = (EDI);
L_11e87370:;
  /* 11e87370 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e87372 jmp dword ptr [ecx*4 + 0x11e87440] */
  switch (ECX) {
    case 0: goto L_11e87487;
    default: x86_unimpl("switch@0x11e87372 out of table"); return;
  }
  /* 11e87379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e8737c:;
  /* 11e8737c mov eax, edi */
  EAX = (EDI);
  /* 11e8737e mov edx, 3 */
  EDX = (0x3u);
  /* 11e87383 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87386 jb 0x11e87394 */
  if (C.cf) goto L_11e87394;
  /* 11e87388 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e8738b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8738d jmp dword ptr [eax*4 + 0x11e87398] */
  switch (EAX) {
    case 1: goto L_11e873a8;
    case 2: goto L_11e873c8;
    case 3: goto L_11e873f0;
    default: x86_unimpl("switch@0x11e8738d out of table"); return;
  }
L_11e87394:;
  /* 11e87394 jmp dword ptr [ecx*4 + 0x11e87490] */
  switch (ECX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e87394 out of table"); return;
  }
  /* 11e8739b nop  */
  /* nop */
L_11e873a8:;
  /* 11e873a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e873ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e873ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e873b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e873b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e873b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e873b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e873b8 jb 0x11e87370 */
  if (C.cf) goto L_11e87370;
  /* 11e873ba std  */
  C.df=1;
  /* 11e873bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e873bd cld  */
  C.df=0;
  /* 11e873be jmp dword ptr [edx*4 + 0x11e87490] */
  switch (EDX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e873be out of table"); return;
  }
  /* 11e873c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e873c8:;
  /* 11e873c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e873cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e873cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e873d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e873d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e873d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e873d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e873dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e873df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e873e2 jb 0x11e87370 */
  if (C.cf) goto L_11e87370;
  /* 11e873e4 std  */
  C.df=1;
  /* 11e873e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e873e7 cld  */
  C.df=0;
  /* 11e873e8 jmp dword ptr [edx*4 + 0x11e87490] */
  switch (EDX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e873e8 out of table"); return;
  }
  /* 11e873ef nop  */
  /* nop */
L_11e873f0:;
  /* 11e873f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e873f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e873f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e873f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e873fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e873fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e87401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e87404 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e87407 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8740a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8740d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87410 jb 0x11e87370 */
  if (C.cf) goto L_11e87370;
  /* 11e87416 std  */
  C.df=1;
  /* 11e87417 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e87419 cld  */
  C.df=0;
  /* 11e8741a jmp dword ptr [edx*4 + 0x11e87490] */
  switch (EDX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e8741a out of table"); return;
  }
  /* 11e87421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e87424 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11e87425 je 0x11e8740f */
  if (C.zf) goto L_11e8740f;
  /* 11e87427 adc dword ptr [esp + esi*2 - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e8742b adc dword ptr [esp + esi*2 - 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e8742f adc dword ptr [esp + esi*2 - 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e87433 adc dword ptr [esp + esi*2 - 0x18], esp */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e87437 adc dword ptr [esp + esi*2 - 0x18], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e8743b adc dword ptr [esp + esi*2 - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*2 + -0x18))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*2 + -0x18), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e87444 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e87448 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e8744c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e87450 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e87454 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e87458 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e8745c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e87460 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e87464 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e87468 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e8746c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e87470 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e87474 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e87478 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e8747c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e87483 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87485 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e87487:;
  /* 11e87487 jmp dword ptr [edx*4 + 0x11e87490] */
  switch (EDX) {
    case 0: goto L_11e874a0;
    case 1: goto L_11e874a8;
    case 2: goto L_11e874b8;
    case 3: goto L_11e874cc;
    default: x86_unimpl("switch@0x11e87487 out of table"); return;
  }
  /* 11e8748e mov edi, edi */
  EDI = (EDI);
L_11e874a0:;
  /* 11e874a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e874a3 pop esi */
  ESI = (pop32());
  /* 11e874a4 pop edi */
  EDI = (pop32());
  /* 11e874a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e874a6 ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e874a7 nop  */
  /* nop */
L_11e874a8:;
  /* 11e874a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e874ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e874ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e874b1 pop esi */
  ESI = (pop32());
  /* 11e874b2 pop edi */
  EDI = (pop32());
  /* 11e874b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e874b4 ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e874b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e874b8:;
  /* 11e874b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e874bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e874be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e874c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e874c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e874c7 pop esi */
  ESI = (pop32());
  /* 11e874c8 pop edi */
  EDI = (pop32());
  /* 11e874c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e874ca ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
  /* 11e874cb nop  */
  /* nop */
L_11e874cc:;
  /* 11e874cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e874cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e874d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e874d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e874d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e874db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e874de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e874e1 pop esi */
  ESI = (pop32());
  /* 11e874e2 pop edi */
  EDI = (pop32());
  /* 11e874e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e874e4 ret  */
  ESPCHK(0x11e871b0u, _esp0);
  ESP += 4; return;
L_11e8740f: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11e8740f (unresolved jump table)"); return;
}

/* FUN_100074e5 @ 0x11e874e5 (23 bytes, 7 insns) */
void f_11e874e5(void) {
  FTRACE(0x11e874e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e874e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e874e7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e874eb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e874ef push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e874f3 call 0x11e874fc */
  push32(0x11e874f8u); f_11e874fc();
  /* 11e874f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e874fb ret  */
  ESPCHK(0x11e874e5u, _esp0);
  ESP += 4; return;
}

/* FUN_100074fc @ 0x11e874fc (517 bytes, 195 insns) */
void f_11e874fc(void) {
  FTRACE(0x11e874fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e874fc push ebp */
  push32((uint32_t)(EBP));
  /* 11e874fd mov ebp, esp */
  EBP = (ESP);
  /* 11e874ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87502 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87503 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e87507 push esi */
  push32((uint32_t)(ESI));
  /* 11e87508 push edi */
  push32((uint32_t)(EDI));
  /* 11e87509 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8750c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e8750e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11e87511 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11e87514:;
  /* 11e87514 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8751b jle 0x11e8752c */
  if ((C.zf||C.sf!=C.of)) goto L_11e8752c;
  /* 11e8751d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e87520 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e87522 push eax */
  push32((uint32_t)(EAX));
  /* 11e87523 call 0x11e861fb */
  push32(0x11e87528u); f_11e861fb();
  /* 11e87528 pop ecx */
  ECX = (pop32());
  /* 11e87529 pop ecx */
  ECX = (pop32());
  /* 11e8752a jmp 0x11e8753b */
  goto L_11e8753b;
L_11e8752c:;
  /* 11e8752c mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e87532 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e87535 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e87538 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11e8753b:;
  /* 11e8753b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8753d je 0x11e87544 */
  if (C.zf) goto L_11e87544;
  /* 11e8753f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11e87541 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e87542 jmp 0x11e87514 */
  goto L_11e87514;
L_11e87544:;
  /* 11e87544 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87547 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11e8754a jne 0x11e87552 */
  if (!C.zf) goto L_11e87552;
  /* 11e8754c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11e87550 jmp 0x11e87557 */
  goto L_11e87557;
L_11e87552:;
  /* 11e87552 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87555 jne 0x11e8755d */
  if (!C.zf) goto L_11e8755d;
L_11e87557:;
  /* 11e87557 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11e87559 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e8755a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11e8755d:;
  /* 11e8755d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e87560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87562 jl 0x11e876f1 */
  if ((C.sf!=C.of)) goto L_11e876f1;
  /* 11e87568 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8756b je 0x11e876f1 */
  if (C.zf) goto L_11e876f1;
  /* 11e87571 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87574 jg 0x11e876f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e876f1;
  /* 11e8757a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e8757c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8757e pop ecx */
  ECX = (pop32());
  /* 11e8757f jne 0x11e875a5 */
  if (!C.zf) goto L_11e875a5;
  /* 11e87581 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87584 je 0x11e8758f */
  if (C.zf) goto L_11e8758f;
  /* 11e87586 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11e8758d jmp 0x11e875c1 */
  goto L_11e875c1;
L_11e8758f:;
  /* 11e8758f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87591 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87593 je 0x11e875a2 */
  if (C.zf) goto L_11e875a2;
  /* 11e87595 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87597 je 0x11e875a2 */
  if (C.zf) goto L_11e875a2;
  /* 11e87599 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11e875a0 jmp 0x11e875c1 */
  goto L_11e875c1;
L_11e875a2:;
  /* 11e875a2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11e875a5:;
  /* 11e875a5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e875a8 jne 0x11e875c1 */
  if (!C.zf) goto L_11e875c1;
  /* 11e875aa cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e875ad jne 0x11e875c1 */
  if (!C.zf) goto L_11e875c1;
  /* 11e875af mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e875b1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e875b3 je 0x11e875b9 */
  if (C.zf) goto L_11e875b9;
  /* 11e875b5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e875b7 jne 0x11e875c1 */
  if (!C.zf) goto L_11e875c1;
L_11e875b9:;
  /* 11e875b9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e875bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e875bd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e875be mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11e875c1:;
  /* 11e875c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e875c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e875c6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e875c9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11e875ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e875d1:;
  /* 11e875d1 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e875d8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11e875db jle 0x11e875e9 */
  if ((C.zf||C.sf!=C.of)) goto L_11e875e9;
  /* 11e875dd push 4 */
  push32((uint32_t)(0x4u));
  /* 11e875df push esi */
  push32((uint32_t)(ESI));
  /* 11e875e0 call 0x11e861fb */
  push32(0x11e875e5u); f_11e861fb();
  /* 11e875e5 pop ecx */
  ECX = (pop32());
  /* 11e875e6 pop ecx */
  ECX = (pop32());
  /* 11e875e7 jmp 0x11e875f4 */
  goto L_11e875f4;
L_11e875e9:;
  /* 11e875e9 mov eax, dword ptr [0x11e8ecd0] */
  EAX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e875ee mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11e875f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11e875f4:;
  /* 11e875f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e875f6 je 0x11e87600 */
  if (C.zf) goto L_11e87600;
  /* 11e875f8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e875fb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e875fe jmp 0x11e87632 */
  goto L_11e87632;
L_11e87600:;
  /* 11e87600 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87607 jle 0x11e87614 */
  if ((C.zf||C.sf!=C.of)) goto L_11e87614;
  /* 11e87609 push edi */
  push32((uint32_t)(EDI));
  /* 11e8760a push esi */
  push32((uint32_t)(ESI));
  /* 11e8760b call 0x11e861fb */
  push32(0x11e87610u); f_11e861fb();
  /* 11e87610 pop ecx */
  ECX = (pop32());
  /* 11e87611 pop ecx */
  ECX = (pop32());
  /* 11e87612 jmp 0x11e8761f */
  goto L_11e8761f;
L_11e87614:;
  /* 11e87614 mov eax, dword ptr [0x11e8ecd0] */
  EAX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e87619 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11e8761d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11e8761f:;
  /* 11e8761f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87621 je 0x11e8766d */
  if (C.zf) goto L_11e8766d;
  /* 11e87623 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e87626 push eax */
  push32((uint32_t)(EAX));
  /* 11e87627 call 0x11e888f6 */
  push32(0x11e8762cu); f_11e888f6();
  /* 11e8762c pop ecx */
  ECX = (pop32());
  /* 11e8762d mov ecx, eax */
  ECX = (EAX);
  /* 11e8762f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11e87632:;
  /* 11e87632 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87635 jae 0x11e8766d */
  if (!C.cf) goto L_11e8766d;
  /* 11e87637 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11e8763a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11e8763e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87641 jb 0x11e87657 */
  if (C.cf) goto L_11e87657;
  /* 11e87643 jne 0x11e87651 */
  if (!C.zf) goto L_11e87651;
  /* 11e87645 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e87648 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e8764a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e8764d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8764f jbe 0x11e87657 */
  if ((C.cf||C.zf)) goto L_11e87657;
L_11e87651:;
  /* 11e87651 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11e87655 jmp 0x11e87660 */
  goto L_11e87660;
L_11e87657:;
  /* 11e87657 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8765b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8765d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11e87660:;
  /* 11e87660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e87663 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e87666 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11e87668 jmp 0x11e875d1 */
  goto L_11e875d1;
L_11e8766d:;
  /* 11e8766d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e87670 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11e87673 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e87676 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11e87678 jne 0x11e8768a */
  if (!C.zf) goto L_11e8768a;
  /* 11e8767a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e8767c je 0x11e87684 */
  if (C.zf) goto L_11e87684;
  /* 11e8767e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e87681 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e87684:;
  /* 11e87684 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e87688 jmp 0x11e876d5 */
  goto L_11e876d5;
L_11e8768a:;
  /* 11e8768a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11e8768c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11e87691 jne 0x11e876ae */
  if (!C.zf) goto L_11e876ae;
  /* 11e87693 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11e87695 jne 0x11e876d5 */
  if (!C.zf) goto L_11e876d5;
  /* 11e87697 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11e8769a je 0x11e876a5 */
  if (C.zf) goto L_11e876a5;
  /* 11e8769c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e876a3 ja 0x11e876ae */
  if ((!C.cf&&!C.zf)) goto L_11e876ae;
L_11e876a5:;
  /* 11e876a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e876a7 jne 0x11e876d5 */
  if (!C.zf) goto L_11e876d5;
  /* 11e876a9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e876ac jbe 0x11e876d5 */
  if ((C.cf||C.zf)) goto L_11e876d5;
L_11e876ae:;
  /* 11e876ae call 0x11e85a17 */
  push32(0x11e876b3u); f_11e85a17();
  /* 11e876b3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11e876b7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11e876bd je 0x11e876c5 */
  if (C.zf) goto L_11e876c5;
  /* 11e876bf or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e876c3 jmp 0x11e876d5 */
  goto L_11e876d5;
L_11e876c5:;
  /* 11e876c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e876c8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11e876ca neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11e876cc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e876ce neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e876d0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e876d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e876d5:;
  /* 11e876d5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e876d7 je 0x11e876de */
  if (C.zf) goto L_11e876de;
  /* 11e876d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e876dc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11e876de:;
  /* 11e876de test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11e876e2 je 0x11e876ec */
  if (C.zf) goto L_11e876ec;
  /* 11e876e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e876e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e876e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e876ec:;
  /* 11e876ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e876ef jmp 0x11e876fc */
  goto L_11e876fc;
L_11e876f1:;
  /* 11e876f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e876f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e876f6 je 0x11e876fa */
  if (C.zf) goto L_11e876fa;
  /* 11e876f8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11e876fa:;
  /* 11e876fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e876fc:;
  /* 11e876fc pop edi */
  EDI = (pop32());
  /* 11e876fd pop esi */
  ESI = (pop32());
  /* 11e876fe pop ebx */
  EBX = (pop32());
  /* 11e876ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87700 ret  */
  ESPCHK(0x11e874fcu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11e87720 (193 bytes, 90 insns) */
void f_11e87720(void) {
  FTRACE(0x11e87720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87722 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e87726 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87727 mov ebx, eax */
  EBX = (EAX);
  /* 11e87729 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e8772c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e87730 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e87736 je 0x11e8774b */
  if (C.zf) goto L_11e8774b;
L_11e87738:;
  /* 11e87738 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11e8773a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e8773b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8773d je 0x11e87710 */
  if (C.zf) { jmp_ind(0x11e87710u); return; }
  /* 11e8773f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11e87741 je 0x11e87794 */
  if (C.zf) goto L_11e87794;
  /* 11e87743 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e87749 jne 0x11e87738 */
  if (!C.zf) goto L_11e87738;
L_11e8774b:;
  /* 11e8774b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11e8774d push edi */
  push32((uint32_t)(EDI));
  /* 11e8774e mov eax, ebx */
  EAX = (EBX);
  /* 11e87750 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11e87753 push esi */
  push32((uint32_t)(ESI));
  /* 11e87754 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11e87756:;
  /* 11e87756 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e87758 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11e8775d mov eax, ecx */
  EAX = (ECX);
  /* 11e8775f mov esi, edi */
  ESI = (EDI);
  /* 11e87761 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11e87763 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87765 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87767 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e8776a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e8776d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e8776f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e87771 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87774 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e8777a jne 0x11e87798 */
  if (!C.zf) goto L_11e87798;
  /* 11e8777c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e87781 je 0x11e87756 */
  if (C.zf) goto L_11e87756;
  /* 11e87783 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e87788 jne 0x11e87792 */
  if (!C.zf) goto L_11e87792;
  /* 11e8778a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11e87790 jne 0x11e87756 */
  if (!C.zf) goto L_11e87756;
L_11e87792:;
  /* 11e87792 pop esi */
  ESI = (pop32());
  /* 11e87793 pop edi */
  EDI = (pop32());
L_11e87794:;
  /* 11e87794 pop ebx */
  EBX = (pop32());
  /* 11e87795 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87797 ret  */
  ESPCHK(0x11e87720u, _esp0);
  ESP += 4; return;
L_11e87798:;
  /* 11e87798 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11e8779b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8779d je 0x11e877d5 */
  if (C.zf) goto L_11e877d5;
  /* 11e8779f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e877a1 je 0x11e87792 */
  if (C.zf) goto L_11e87792;
  /* 11e877a3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e877a5 je 0x11e877ce */
  if (C.zf) goto L_11e877ce;
  /* 11e877a7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e877a9 je 0x11e87792 */
  if (C.zf) goto L_11e87792;
  /* 11e877ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e877ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e877b0 je 0x11e877c7 */
  if (C.zf) goto L_11e877c7;
  /* 11e877b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e877b4 je 0x11e87792 */
  if (C.zf) goto L_11e87792;
  /* 11e877b6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e877b8 je 0x11e877c0 */
  if (C.zf) goto L_11e877c0;
  /* 11e877ba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e877bc je 0x11e87792 */
  if (C.zf) goto L_11e87792;
  /* 11e877be jmp 0x11e87756 */
  goto L_11e87756;
L_11e877c0:;
  /* 11e877c0 pop esi */
  ESI = (pop32());
  /* 11e877c1 pop edi */
  EDI = (pop32());
  /* 11e877c2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11e877c5 pop ebx */
  EBX = (pop32());
  /* 11e877c6 ret  */
  ESPCHK(0x11e87720u, _esp0);
  ESP += 4; return;
L_11e877c7:;
  /* 11e877c7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11e877ca pop esi */
  ESI = (pop32());
  /* 11e877cb pop edi */
  EDI = (pop32());
  /* 11e877cc pop ebx */
  EBX = (pop32());
  /* 11e877cd ret  */
  ESPCHK(0x11e87720u, _esp0);
  ESP += 4; return;
L_11e877ce:;
  /* 11e877ce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11e877d1 pop esi */
  ESI = (pop32());
  /* 11e877d2 pop edi */
  EDI = (pop32());
  /* 11e877d3 pop ebx */
  EBX = (pop32());
  /* 11e877d4 ret  */
  ESPCHK(0x11e87720u, _esp0);
  ESP += 4; return;
L_11e877d5:;
  /* 11e877d5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11e877d8 pop esi */
  ESI = (pop32());
  /* 11e877d9 pop edi */
  EDI = (pop32());
  /* 11e877da pop ebx */
  EBX = (pop32());
  /* 11e877db ret  */
  ESPCHK(0x11e87720u, _esp0);
  ESP += 4; return;
  /* 11e877dc int3  */
  x86_unimpl("int3 @ 0x11e877dc");
  /* 11e877dd int3  */
  x86_unimpl("int3 @ 0x11e877dd");
  /* 11e877de int3  */
  x86_unimpl("int3 @ 0x11e877de");
  /* 11e877df int3  */
  x86_unimpl("int3 @ 0x11e877df");
}

/* _strstr @ 0x11e877e0 (128 bytes, 66 insns) */
void f_11e877e0(void) {
  FTRACE(0x11e877e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e877e0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e877e4 push edi */
  push32((uint32_t)(EDI));
  /* 11e877e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e877e6 push esi */
  push32((uint32_t)(ESI));
  /* 11e877e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e877e9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e877ed test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e877ef je 0x11e8785a */
  if (C.zf) goto L_11e8785a;
  /* 11e877f1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11e877f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11e877f6 je 0x11e87847 */
  if (C.zf) goto L_11e87847;
L_11e877f8:;
  /* 11e877f8 mov esi, edi */
  ESI = (EDI);
  /* 11e877fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e877fe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11e87800 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e87801 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87803 je 0x11e8781a */
  if (C.zf) goto L_11e8781a;
  /* 11e87805 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e87807 je 0x11e87814 */
  if (C.zf) goto L_11e87814;
L_11e87809:;
  /* 11e87809 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e8780b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e8780c:;
  /* 11e8780c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8780e je 0x11e8781a */
  if (C.zf) goto L_11e8781a;
  /* 11e87810 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e87812 jne 0x11e87809 */
  if (!C.zf) goto L_11e87809;
L_11e87814:;
  /* 11e87814 pop esi */
  ESI = (pop32());
  /* 11e87815 pop ebx */
  EBX = (pop32());
  /* 11e87816 pop edi */
  EDI = (pop32());
  /* 11e87817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87819 ret  */
  ESPCHK(0x11e877e0u, _esp0);
  ESP += 4; return;
L_11e8781a:;
  /* 11e8781a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e8781c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e8781d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8781f jne 0x11e8780c */
  if (!C.zf) goto L_11e8780c;
  /* 11e87821 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11e87824:;
  /* 11e87824 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11e87827 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e87829 je 0x11e87853 */
  if (C.zf) goto L_11e87853;
  /* 11e8782b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e8782d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87830 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87832 jne 0x11e877f8 */
  if (!C.zf) goto L_11e877f8;
  /* 11e87834 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11e87837 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e87839 je 0x11e87853 */
  if (C.zf) goto L_11e87853;
  /* 11e8783b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11e8783e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87841 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87843 je 0x11e87824 */
  if (C.zf) goto L_11e87824;
  /* 11e87845 jmp 0x11e877f8 */
  goto L_11e877f8;
L_11e87847:;
  /* 11e87847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87849 pop esi */
  ESI = (pop32());
  /* 11e8784a pop ebx */
  EBX = (pop32());
  /* 11e8784b pop edi */
  EDI = (pop32());
  /* 11e8784c mov al, dl */
  AL = (DL);
  /* 11e8784e jmp 0x11e87726 */
  jmp_ind(0x11e87726u); return;
L_11e87853:;
  /* 11e87853 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11e87856 pop esi */
  ESI = (pop32());
  /* 11e87857 pop ebx */
  EBX = (pop32());
  /* 11e87858 pop edi */
  EDI = (pop32());
  /* 11e87859 ret  */
  ESPCHK(0x11e877e0u, _esp0);
  ESP += 4; return;
L_11e8785a:;
  /* 11e8785a mov eax, edi */
  EAX = (EDI);
  /* 11e8785c pop esi */
  ESI = (pop32());
  /* 11e8785d pop ebx */
  EBX = (pop32());
  /* 11e8785e pop edi */
  EDI = (pop32());
  /* 11e8785f ret  */
  ESPCHK(0x11e877e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11e87860 (56 bytes, 31 insns) */
void f_11e87860(void) {
  FTRACE(0x11e87860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87860 push ebp */
  push32((uint32_t)(EBP));
  /* 11e87861 mov ebp, esp */
  EBP = (ESP);
  /* 11e87863 push edi */
  push32((uint32_t)(EDI));
  /* 11e87864 push esi */
  push32((uint32_t)(ESI));
  /* 11e87865 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e87869 jecxz 0x11e87891 */
  x86_unimpl("jecxz @ 0x11e87869");
  /* 11e8786b mov ebx, ecx */
  EBX = (ECX);
  /* 11e8786d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e87870 mov esi, edi */
  ESI = (EDI);
  /* 11e87872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87874 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11e87876 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e87878 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8787a mov edi, esi */
  EDI = (ESI);
  /* 11e8787c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8787f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11e87881 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11e87884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e87886 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87889 ja 0x11e8788f */
  if ((!C.cf&&!C.zf)) goto L_11e8788f;
  /* 11e8788b je 0x11e87891 */
  if (C.zf) goto L_11e87891;
  /* 11e8788d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e8788e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11e8788f:;
  /* 11e8788f not ecx */
  ECX = (~(ECX));
L_11e87891:;
  /* 11e87891 mov eax, ecx */
  EAX = (ECX);
  /* 11e87893 pop ebx */
  EBX = (pop32());
  /* 11e87894 pop esi */
  ESI = (pop32());
  /* 11e87895 pop edi */
  EDI = (pop32());
  /* 11e87896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87897 ret  */
  ESPCHK(0x11e87860u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x11e878a0 (47 bytes, 17 insns) */
void f_11e878a0(void) {
  FTRACE(0x11e878a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e878a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e878a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e878a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11e878aa jb 0x11e878c0 */
  if (C.cf) goto L_11e878c0;
L_11e878ac:;
  /* 11e878ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e878b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e878b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11e878b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e878be jae 0x11e878ac */
  if (!C.cf) goto L_11e878ac;
L_11e878c0:;
  /* 11e878c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e878c2 mov eax, esp */
  EAX = (ESP);
  /* 11e878c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11e878c6 mov esp, ecx */
  ESP = (ECX);
  /* 11e878c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e878ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e878cd push eax */
  push32((uint32_t)(EAX));
  /* 11e878ce ret  */
  ESPCHK(0x11e878a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078cf @ 0x11e878cf (137 bytes, 50 insns) */
void f_11e878cf(void) {
  FTRACE(0x11e878cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e878cf push ebx */
  push32((uint32_t)(EBX));
  /* 11e878d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e878d2 cmp dword ptr [0x11e8fa70], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa70))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e878d8 push esi */
  push32((uint32_t)(ESI));
  /* 11e878d9 push edi */
  push32((uint32_t)(EDI));
  /* 11e878da jne 0x11e8791e */
  if (!C.zf) goto L_11e8791e;
  /* 11e878dc push 0x11e8a638 */
  push32((uint32_t)(0x11e8a638u));
  /* 11e878e1 call dword ptr [0x11e8a02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a02c))), 0x11e878e7u);
  /* 11e878e7 mov edi, eax */
  EDI = (EAX);
  /* 11e878e9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e878eb je 0x11e87954 */
  if (C.zf) goto L_11e87954;
  /* 11e878ed mov esi, dword ptr [0x11e8a000] */
  ESI = (r32((uint32_t)(0x11e8a000)));
  /* 11e878f3 push 0x11e8a62c */
  push32((uint32_t)(0x11e8a62cu));
  /* 11e878f8 push edi */
  push32((uint32_t)(EDI));
  /* 11e878f9 call esi */
  call_ind((uint32_t)(ESI), 0x11e878fbu);
  /* 11e878fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e878fd mov dword ptr [0x11e8fa70], eax */
  w32((uint32_t)(0x11e8fa70), (EAX));
  /* 11e87902 je 0x11e87954 */
  if (C.zf) goto L_11e87954;
  /* 11e87904 push 0x11e8a61c */
  push32((uint32_t)(0x11e8a61cu));
  /* 11e87909 push edi */
  push32((uint32_t)(EDI));
  /* 11e8790a call esi */
  call_ind((uint32_t)(ESI), 0x11e8790cu);
  /* 11e8790c push 0x11e8a608 */
  push32((uint32_t)(0x11e8a608u));
  /* 11e87911 push edi */
  push32((uint32_t)(EDI));
  /* 11e87912 mov dword ptr [0x11e8fa74], eax */
  w32((uint32_t)(0x11e8fa74), (EAX));
  /* 11e87917 call esi */
  call_ind((uint32_t)(ESI), 0x11e87919u);
  /* 11e87919 mov dword ptr [0x11e8fa78], eax */
  w32((uint32_t)(0x11e8fa78), (EAX));
L_11e8791e:;
  /* 11e8791e mov eax, dword ptr [0x11e8fa74] */
  EAX = (r32((uint32_t)(0x11e8fa74)));
  /* 11e87923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87925 je 0x11e8793d */
  if (C.zf) goto L_11e8793d;
  /* 11e87927 call eax */
  call_ind((uint32_t)(EAX), 0x11e87929u);
  /* 11e87929 mov ebx, eax */
  EBX = (EAX);
  /* 11e8792b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e8792d je 0x11e8793d */
  if (C.zf) goto L_11e8793d;
  /* 11e8792f mov eax, dword ptr [0x11e8fa78] */
  EAX = (r32((uint32_t)(0x11e8fa78)));
  /* 11e87934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87936 je 0x11e8793d */
  if (C.zf) goto L_11e8793d;
  /* 11e87938 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87939 call eax */
  call_ind((uint32_t)(EAX), 0x11e8793bu);
  /* 11e8793b mov ebx, eax */
  EBX = (EAX);
L_11e8793d:;
  /* 11e8793d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e87941 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e87945 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e87949 push ebx */
  push32((uint32_t)(EBX));
  /* 11e8794a call dword ptr [0x11e8fa70] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8fa70))), 0x11e87950u);
L_11e87950:;
  /* 11e87950 pop edi */
  EDI = (pop32());
  /* 11e87951 pop esi */
  ESI = (pop32());
  /* 11e87952 pop ebx */
  EBX = (pop32());
  /* 11e87953 ret  */
  ESPCHK(0x11e878cfu, _esp0);
  ESP += 4; return;
L_11e87954:;
  /* 11e87954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87956 jmp 0x11e87950 */
  goto L_11e87950;
}

/* _strncpy @ 0x11e87960 (254 bytes, 109 insns) */
void f_11e87960(void) {
  FTRACE(0x11e87960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87960 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e87964 push edi */
  push32((uint32_t)(EDI));
  /* 11e87965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e87967 je 0x11e879e3 */
  if (C.zf) goto L_11e879e3;
  /* 11e87969 push esi */
  push32((uint32_t)(ESI));
  /* 11e8796a push ebx */
  push32((uint32_t)(EBX));
  /* 11e8796b mov ebx, ecx */
  EBX = (ECX);
  /* 11e8796d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e87971 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11e87977 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e8797b jne 0x11e87984 */
  if (!C.zf) goto L_11e87984;
  /* 11e8797d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e87980 jne 0x11e879f1 */
  if (!C.zf) goto L_11e879f1;
  /* 11e87982 jmp 0x11e879a5 */
  goto L_11e879a5;
L_11e87984:;
  /* 11e87984 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e87986 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e87987 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e87989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8798a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e8798b je 0x11e879b2 */
  if (C.zf) goto L_11e879b2;
  /* 11e8798d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e8798f je 0x11e879ba */
  if (C.zf) goto L_11e879ba;
  /* 11e87991 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11e87997 jne 0x11e87984 */
  if (!C.zf) goto L_11e87984;
  /* 11e87999 mov ebx, ecx */
  EBX = (ECX);
  /* 11e8799b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e8799e jne 0x11e879f1 */
  if (!C.zf) goto L_11e879f1;
L_11e879a0:;
  /* 11e879a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11e879a3 je 0x11e879b2 */
  if (C.zf) goto L_11e879b2;
L_11e879a5:;
  /* 11e879a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e879a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e879a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e879aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e879ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e879ad je 0x11e879de */
  if (C.zf) goto L_11e879de;
  /* 11e879af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e879b0 jne 0x11e879a5 */
  if (!C.zf) goto L_11e879a5;
L_11e879b2:;
  /* 11e879b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e879b6 pop ebx */
  EBX = (pop32());
  /* 11e879b7 pop esi */
  ESI = (pop32());
  /* 11e879b8 pop edi */
  EDI = (pop32());
  /* 11e879b9 ret  */
  ESPCHK(0x11e87960u, _esp0);
  ESP += 4; return;
L_11e879ba:;
  /* 11e879ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e879c0 je 0x11e879d4 */
  if (C.zf) goto L_11e879d4;
L_11e879c2:;
  /* 11e879c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e879c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e879c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e879c6 je 0x11e87a56 */
  if (C.zf) goto L_11e87a56;
  /* 11e879cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e879d2 jne 0x11e879c2 */
  if (!C.zf) goto L_11e879c2;
L_11e879d4:;
  /* 11e879d4 mov ebx, ecx */
  EBX = (ECX);
  /* 11e879d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e879d9 jne 0x11e87a47 */
  if (!C.zf) goto L_11e87a47;
L_11e879db:;
  /* 11e879db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e879dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11e879de:;
  /* 11e879de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e879df jne 0x11e879db */
  if (!C.zf) goto L_11e879db;
  /* 11e879e1 pop ebx */
  EBX = (pop32());
  /* 11e879e2 pop esi */
  ESI = (pop32());
L_11e879e3:;
  /* 11e879e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e879e7 pop edi */
  EDI = (pop32());
  /* 11e879e8 ret  */
  ESPCHK(0x11e87960u, _esp0);
  ESP += 4; return;
L_11e879e9:;
  /* 11e879e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e879eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e879ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e879ef je 0x11e879a0 */
  if (C.zf) goto L_11e879a0;
L_11e879f1:;
  /* 11e879f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11e879f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e879f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e879fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e879fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e879ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11e87a01 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87a04 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11e87a09 je 0x11e879e9 */
  if (C.zf) goto L_11e879e9;
  /* 11e87a0b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e87a0d je 0x11e87a3b */
  if (C.zf) goto L_11e87a3b;
  /* 11e87a0f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11e87a11 je 0x11e87a31 */
  if (C.zf) goto L_11e87a31;
  /* 11e87a13 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11e87a19 je 0x11e87a27 */
  if (C.zf) goto L_11e87a27;
  /* 11e87a1b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11e87a21 jne 0x11e879e9 */
  if (!C.zf) goto L_11e879e9;
  /* 11e87a23 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e87a25 jmp 0x11e87a3f */
  goto L_11e87a3f;
L_11e87a27:;
  /* 11e87a27 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e87a2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e87a2f jmp 0x11e87a3f */
  goto L_11e87a3f;
L_11e87a31:;
  /* 11e87a31 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e87a37 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11e87a39 jmp 0x11e87a3f */
  goto L_11e87a3f;
L_11e87a3b:;
  /* 11e87a3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e87a3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11e87a3f:;
  /* 11e87a3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87a42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87a44 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e87a45 je 0x11e87a51 */
  if (C.zf) goto L_11e87a51;
L_11e87a47:;
  /* 11e87a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e87a49:;
  /* 11e87a49 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11e87a4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87a4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e87a4f jne 0x11e87a49 */
  if (!C.zf) goto L_11e87a49;
L_11e87a51:;
  /* 11e87a51 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11e87a54 jne 0x11e879db */
  if (!C.zf) goto L_11e879db;
L_11e87a56:;
  /* 11e87a56 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e87a5a pop ebx */
  EBX = (pop32());
  /* 11e87a5b pop esi */
  ESI = (pop32());
  /* 11e87a5c pop edi */
  EDI = (pop32());
  /* 11e87a5d ret  */
  ESPCHK(0x11e87960u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a5e @ 0x11e87a5e (27 bytes, 13 insns) */
void f_11e87a5e(void) {
  FTRACE(0x11e87a5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87a5e mov eax, dword ptr [0x11e8fa7c] */
  EAX = (r32((uint32_t)(0x11e8fa7c)));
  /* 11e87a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87a65 je 0x11e87a76 */
  if (C.zf) goto L_11e87a76;
  /* 11e87a67 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11e87a6b call eax */
  call_ind((uint32_t)(EAX), 0x11e87a6du);
  /* 11e87a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87a6f pop ecx */
  ECX = (pop32());
  /* 11e87a70 je 0x11e87a76 */
  if (C.zf) goto L_11e87a76;
  /* 11e87a72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87a74 pop eax */
  EAX = (pop32());
  /* 11e87a75 ret  */
  ESPCHK(0x11e87a5eu, _esp0);
  ESP += 4; return;
L_11e87a76:;
  /* 11e87a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87a78 ret  */
  ESPCHK(0x11e87a5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a79 @ 0x11e87a79 (139 bytes, 59 insns) */
void f_11e87a79(void) {
  FTRACE(0x11e87a79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87a79 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87a7a push ebp */
  push32((uint32_t)(EBP));
  /* 11e87a7b push esi */
  push32((uint32_t)(ESI));
  /* 11e87a7c push edi */
  push32((uint32_t)(EDI));
  /* 11e87a7d mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11e87a81:;
  /* 11e87a81 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87a88 jle 0x11e87a99 */
  if ((C.zf||C.sf!=C.of)) goto L_11e87a99;
  /* 11e87a8a movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e87a8d push 8 */
  push32((uint32_t)(0x8u));
  /* 11e87a8f push eax */
  push32((uint32_t)(EAX));
  /* 11e87a90 call 0x11e861fb */
  push32(0x11e87a95u); f_11e861fb();
  /* 11e87a95 pop ecx */
  ECX = (pop32());
  /* 11e87a96 pop ecx */
  ECX = (pop32());
  /* 11e87a97 jmp 0x11e87aa8 */
  goto L_11e87aa8;
L_11e87a99:;
  /* 11e87a99 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e87a9c mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e87aa2 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e87aa5 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11e87aa8:;
  /* 11e87aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87aaa je 0x11e87aaf */
  if (C.zf) goto L_11e87aaf;
  /* 11e87aac inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e87aad jmp 0x11e87a81 */
  goto L_11e87a81;
L_11e87aaf:;
  /* 11e87aaf movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e87ab2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e87ab3 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87ab6 mov ebp, esi */
  EBP = (ESI);
  /* 11e87ab8 je 0x11e87abf */
  if (C.zf) goto L_11e87abf;
  /* 11e87aba cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87abd jne 0x11e87ac3 */
  if (!C.zf) goto L_11e87ac3;
L_11e87abf:;
  /* 11e87abf movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e87ac2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11e87ac3:;
  /* 11e87ac3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e87ac5:;
  /* 11e87ac5 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87acc jle 0x11e87ada */
  if ((C.zf||C.sf!=C.of)) goto L_11e87ada;
  /* 11e87ace push 4 */
  push32((uint32_t)(0x4u));
  /* 11e87ad0 push esi */
  push32((uint32_t)(ESI));
  /* 11e87ad1 call 0x11e861fb */
  push32(0x11e87ad6u); f_11e861fb();
  /* 11e87ad6 pop ecx */
  ECX = (pop32());
  /* 11e87ad7 pop ecx */
  ECX = (pop32());
  /* 11e87ad8 jmp 0x11e87ae5 */
  goto L_11e87ae5;
L_11e87ada:;
  /* 11e87ada mov eax, dword ptr [0x11e8ecd0] */
  EAX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e87adf mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11e87ae2 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11e87ae5:;
  /* 11e87ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87ae7 je 0x11e87af6 */
  if (C.zf) goto L_11e87af6;
  /* 11e87ae9 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11e87aec lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11e87af0 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e87af3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e87af4 jmp 0x11e87ac5 */
  goto L_11e87ac5;
L_11e87af6:;
  /* 11e87af6 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87af9 mov eax, ebx */
  EAX = (EBX);
  /* 11e87afb jne 0x11e87aff */
  if (!C.zf) goto L_11e87aff;
  /* 11e87afd neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e87aff:;
  /* 11e87aff pop edi */
  EDI = (pop32());
  /* 11e87b00 pop esi */
  ESI = (pop32());
  /* 11e87b01 pop ebp */
  EBP = (pop32());
  /* 11e87b02 pop ebx */
  EBX = (pop32());
  /* 11e87b03 ret  */
  ESPCHK(0x11e87a79u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11e87b10 (129 bytes, 56 insns) */
void f_11e87b10(void) {
  FTRACE(0x11e87b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87b10 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e87b14 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e87b18 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e87b1e jne 0x11e87b5c */
  if (!C.zf) goto L_11e87b5c;
L_11e87b20:;
  /* 11e87b20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e87b22 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b24 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e87b28 je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b2a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b2d jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b2f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e87b31 je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b33 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e87b36 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b39 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e87b3d je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b3f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b42 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b44 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87b47 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87b4a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e87b4c jne 0x11e87b20 */
  if (!C.zf) goto L_11e87b20;
  /* 11e87b4e mov edi, edi */
  EDI = (EDI);
L_11e87b50:;
  /* 11e87b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87b52 ret  */
  ESPCHK(0x11e87b10u, _esp0);
  ESP += 4; return;
  /* 11e87b53 nop  */
  /* nop */
L_11e87b54:;
  /* 11e87b54 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87b56 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e87b58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e87b59 ret  */
  ESPCHK(0x11e87b10u, _esp0);
  ESP += 4; return;
  /* 11e87b5a mov edi, edi */
  EDI = (EDI);
L_11e87b5c:;
  /* 11e87b5c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11e87b62 je 0x11e87b78 */
  if (C.zf) goto L_11e87b78;
  /* 11e87b64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e87b66 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e87b67 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b69 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b6b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e87b6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e87b6e je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b70 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11e87b76 je 0x11e87b20 */
  if (C.zf) goto L_11e87b20;
L_11e87b78:;
  /* 11e87b78 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e87b7b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87b7e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b80 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b82 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e87b84 je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b86 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87b89 jne 0x11e87b54 */
  if (!C.zf) goto L_11e87b54;
  /* 11e87b8b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e87b8d je 0x11e87b50 */
  if (C.zf) goto L_11e87b50;
  /* 11e87b8f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87b92 jmp 0x11e87b20 */
  goto L_11e87b20;
}

/* FUN_10007b94 @ 0x11e87b94 (125 bytes, 51 insns) */
void f_11e87b94(void) {
  FTRACE(0x11e87b94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87b94 cmp dword ptr [0x11e8fec4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87b9b push ebx */
  push32((uint32_t)(EBX));
  /* 11e87b9c push esi */
  push32((uint32_t)(ESI));
  /* 11e87b9d mov esi, dword ptr [0x11e8f818] */
  ESI = (r32((uint32_t)(0x11e8f818)));
  /* 11e87ba3 push edi */
  push32((uint32_t)(EDI));
  /* 11e87ba4 je 0x11e87c0b */
  if (C.zf) goto L_11e87c0b;
  /* 11e87ba6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e87ba8 jne 0x11e87bc5 */
  if (!C.zf) goto L_11e87bc5;
  /* 11e87baa cmp dword ptr [0x11e8f820], esi */
  { uint32_t _a=(r32((uint32_t)(0x11e8f820))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87bb0 je 0x11e87c0b */
  if (C.zf) goto L_11e87c0b;
  /* 11e87bb2 call 0x11e88ab3 */
  push32(0x11e87bb7u); f_11e88ab3();
  /* 11e87bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87bb9 jne 0x11e87c0b */
  if (!C.zf) goto L_11e87c0b;
  /* 11e87bbb mov esi, dword ptr [0x11e8f818] */
  ESI = (r32((uint32_t)(0x11e8f818)));
  /* 11e87bc1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e87bc3 je 0x11e87c0b */
  if (C.zf) goto L_11e87c0b;
L_11e87bc5:;
  /* 11e87bc5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e87bc9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e87bcb je 0x11e87c0b */
  if (C.zf) goto L_11e87c0b;
  /* 11e87bcd push ebx */
  push32((uint32_t)(EBX));
  /* 11e87bce call 0x11e85f30 */
  push32(0x11e87bd3u); f_11e85f30();
  /* 11e87bd3 pop ecx */
  ECX = (pop32());
  /* 11e87bd4 mov edi, eax */
  EDI = (EAX);
L_11e87bd6:;
  /* 11e87bd6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e87bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87bda je 0x11e87c0b */
  if (C.zf) goto L_11e87c0b;
  /* 11e87bdc push eax */
  push32((uint32_t)(EAX));
  /* 11e87bdd call 0x11e85f30 */
  push32(0x11e87be2u); f_11e85f30();
  /* 11e87be2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87be4 pop ecx */
  ECX = (pop32());
  /* 11e87be5 jbe 0x11e87bfe */
  if ((C.cf||C.zf)) goto L_11e87bfe;
  /* 11e87be7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e87be9 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e87bed jne 0x11e87bfe */
  if (!C.zf) goto L_11e87bfe;
  /* 11e87bef push edi */
  push32((uint32_t)(EDI));
  /* 11e87bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11e87bf2 call 0x11e88a74 */
  push32(0x11e87bf7u); f_11e88a74();
  /* 11e87bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87bfc je 0x11e87c03 */
  if (C.zf) goto L_11e87c03;
L_11e87bfe:;
  /* 11e87bfe add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87c01 jmp 0x11e87bd6 */
  goto L_11e87bd6;
L_11e87c03:;
  /* 11e87c03 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e87c05 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11e87c09 jmp 0x11e87c0d */
  goto L_11e87c0d;
L_11e87c0b:;
  /* 11e87c0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e87c0d:;
  /* 11e87c0d pop edi */
  EDI = (pop32());
  /* 11e87c0e pop esi */
  ESI = (pop32());
  /* 11e87c0f pop ebx */
  EBX = (pop32());
  /* 11e87c10 ret  */
  ESPCHK(0x11e87b94u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c11 @ 0x11e87c11 (115 bytes, 41 insns) */
void f_11e87c11(void) {
  FTRACE(0x11e87c11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87c11 push esi */
  push32((uint32_t)(ESI));
  /* 11e87c12 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e87c16 push edi */
  push32((uint32_t)(EDI));
  /* 11e87c17 push esi */
  push32((uint32_t)(ESI));
  /* 11e87c18 call 0x11e85aa8 */
  push32(0x11e87c1du); f_11e85aa8();
  /* 11e87c1d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87c20 pop ecx */
  ECX = (pop32());
  /* 11e87c21 jne 0x11e87c30 */
  if (!C.zf) goto L_11e87c30;
  /* 11e87c23 call 0x11e85a17 */
  push32(0x11e87c28u); f_11e85a17();
  /* 11e87c28 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e87c2e jmp 0x11e87c5d */
  goto L_11e87c5d;
L_11e87c30:;
  /* 11e87c30 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11e87c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e87c36 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e87c3a push eax */
  push32((uint32_t)(EAX));
  /* 11e87c3b call dword ptr [0x11e8a028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a028))), 0x11e87c41u);
  /* 11e87c41 mov edi, eax */
  EDI = (EAX);
  /* 11e87c43 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87c46 jne 0x11e87c50 */
  if (!C.zf) goto L_11e87c50;
  /* 11e87c48 call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e87c4eu);
  /* 11e87c4e jmp 0x11e87c52 */
  goto L_11e87c52;
L_11e87c50:;
  /* 11e87c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e87c52:;
  /* 11e87c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87c54 je 0x11e87c62 */
  if (C.zf) goto L_11e87c62;
  /* 11e87c56 push eax */
  push32((uint32_t)(EAX));
  /* 11e87c57 call 0x11e859a4 */
  push32(0x11e87c5cu); f_11e859a4();
  /* 11e87c5c pop ecx */
  ECX = (pop32());
L_11e87c5d:;
  /* 11e87c5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e87c60 jmp 0x11e87c81 */
  goto L_11e87c81;
L_11e87c62:;
  /* 11e87c62 mov ecx, esi */
  ECX = (ESI);
  /* 11e87c64 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11e87c67 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e87c6a mov eax, esi */
  EAX = (ESI);
  /* 11e87c6c mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e87c73 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e87c76 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e87c7b lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11e87c7f mov eax, edi */
  EAX = (EDI);
L_11e87c81:;
  /* 11e87c81 pop edi */
  EDI = (pop32());
  /* 11e87c82 pop esi */
  ESI = (pop32());
  /* 11e87c83 ret  */
  ESPCHK(0x11e87c11u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c84 @ 0x11e87c84 (318 bytes, 123 insns) */
void f_11e87c84(void) {
  FTRACE(0x11e87c84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87c84 push ebp */
  push32((uint32_t)(EBP));
  /* 11e87c85 mov ebp, esp */
  EBP = (ESP);
  /* 11e87c87 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e87c89 push 0x11e8a650 */
  push32((uint32_t)(0x11e8a650u));
  /* 11e87c8e push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e87c93 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e87c99 push eax */
  push32((uint32_t)(EAX));
  /* 11e87c9a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e87ca1 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87ca4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87ca5 push esi */
  push32((uint32_t)(ESI));
  /* 11e87ca6 push edi */
  push32((uint32_t)(EDI));
  /* 11e87ca7 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e87caa mov eax, dword ptr [0x11e8fac8] */
  EAX = (r32((uint32_t)(0x11e8fac8)));
  /* 11e87caf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e87cb1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87cb3 jne 0x11e87cf3 */
  if (!C.zf) goto L_11e87cf3;
  /* 11e87cb5 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e87cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11e87cb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87cbb pop esi */
  ESI = (pop32());
  /* 11e87cbc push esi */
  push32((uint32_t)(ESI));
  /* 11e87cbd push 0x11e8a648 */
  push32((uint32_t)(0x11e8a648u));
  /* 11e87cc2 push esi */
  push32((uint32_t)(ESI));
  /* 11e87cc3 call dword ptr [0x11e8a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a01c))), 0x11e87cc9u);
  /* 11e87cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87ccb je 0x11e87cd1 */
  if (C.zf) goto L_11e87cd1;
  /* 11e87ccd mov eax, esi */
  EAX = (ESI);
  /* 11e87ccf jmp 0x11e87cee */
  goto L_11e87cee;
L_11e87cd1:;
  /* 11e87cd1 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e87cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11e87cd5 push esi */
  push32((uint32_t)(ESI));
  /* 11e87cd6 push 0x11e8a644 */
  push32((uint32_t)(0x11e8a644u));
  /* 11e87cdb push esi */
  push32((uint32_t)(ESI));
  /* 11e87cdc push ebx */
  push32((uint32_t)(EBX));
  /* 11e87cdd call dword ptr [0x11e8a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a020))), 0x11e87ce3u);
  /* 11e87ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87ce5 je 0x11e87db9 */
  if (C.zf) goto L_11e87db9;
  /* 11e87ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 11e87ced pop eax */
  EAX = (pop32());
L_11e87cee:;
  /* 11e87cee mov dword ptr [0x11e8fac8], eax */
  w32((uint32_t)(0x11e8fac8), (EAX));
L_11e87cf3:;
  /* 11e87cf3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87cf6 jne 0x11e87d1c */
  if (!C.zf) goto L_11e87d1c;
  /* 11e87cf8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e87cfb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87cfd jne 0x11e87d04 */
  if (!C.zf) goto L_11e87d04;
  /* 11e87cff mov eax, dword ptr [0x11e8fa8c] */
  EAX = (r32((uint32_t)(0x11e8fa8c)));
L_11e87d04:;
  /* 11e87d04 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87d07 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87d0a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87d0d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87d10 push eax */
  push32((uint32_t)(EAX));
  /* 11e87d11 call dword ptr [0x11e8a020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a020))), 0x11e87d17u);
  /* 11e87d17 jmp 0x11e87dbb */
  goto L_11e87dbb;
L_11e87d1c:;
  /* 11e87d1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87d1f jne 0x11e87db9 */
  if (!C.zf) goto L_11e87db9;
  /* 11e87d25 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87d28 jne 0x11e87d32 */
  if (!C.zf) goto L_11e87d32;
  /* 11e87d2a mov eax, dword ptr [0x11e8fa9c] */
  EAX = (r32((uint32_t)(0x11e8fa9c)));
  /* 11e87d2f mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11e87d32:;
  /* 11e87d32 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87d33 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87d34 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87d37 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87d3a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e87d3d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e87d3f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87d41 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e87d44 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e87d45 push eax */
  push32((uint32_t)(EAX));
  /* 11e87d46 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e87d49 call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e87d4fu);
  /* 11e87d4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e87d52 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87d54 je 0x11e87db9 */
  if (C.zf) goto L_11e87db9;
  /* 11e87d56 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11e87d59 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11e87d5c mov eax, edi */
  EAX = (EDI);
  /* 11e87d5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87d61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e87d63 call 0x11e878a0 */
  push32(0x11e87d68u); f_11e878a0();
  /* 11e87d68 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e87d6b mov esi, esp */
  ESI = (ESP);
  /* 11e87d6d mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11e87d70 push edi */
  push32((uint32_t)(EDI));
  /* 11e87d71 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87d72 push esi */
  push32((uint32_t)(ESI));
  /* 11e87d73 call 0x11e86a10 */
  push32(0x11e87d78u); f_11e86a10();
  /* 11e87d78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87d7b jmp 0x11e87d88 */
  goto L_11e87d88;
  /* 11e87d7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87d7f pop eax */
  EAX = (pop32());
  /* 11e87d80 ret  */
  ESPCHK(0x11e87c84u, _esp0);
  ESP += 4; return;
  /* 11e87d81 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e87d84 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e87d86 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11e87d88:;
  /* 11e87d88 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e87d8c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87d8e je 0x11e87db9 */
  if (C.zf) goto L_11e87db9;
  /* 11e87d90 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11e87d93 push esi */
  push32((uint32_t)(ESI));
  /* 11e87d94 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87d97 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87d9c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e87d9f call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e87da5u);
  /* 11e87da5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87da7 je 0x11e87db9 */
  if (C.zf) goto L_11e87db9;
  /* 11e87da9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87dac push eax */
  push32((uint32_t)(EAX));
  /* 11e87dad push esi */
  push32((uint32_t)(ESI));
  /* 11e87dae push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87db1 call dword ptr [0x11e8a01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a01c))), 0x11e87db7u);
  /* 11e87db7 jmp 0x11e87dbb */
  goto L_11e87dbb;
L_11e87db9:;
  /* 11e87db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e87dbb:;
  /* 11e87dbb lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11e87dbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e87dc1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e87dc8 pop edi */
  EDI = (pop32());
  /* 11e87dc9 pop esi */
  ESI = (pop32());
  /* 11e87dca pop ebx */
  EBX = (pop32());
  /* 11e87dcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87dcc ret  */
  ESPCHK(0x11e87c84u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dcd @ 0x11e87dcd (511 bytes, 193 insns) */
void f_11e87dcd(void) {
  FTRACE(0x11e87dcdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87dcd push ebp */
  push32((uint32_t)(EBP));
  /* 11e87dce mov ebp, esp */
  EBP = (ESP);
  /* 11e87dd0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e87dd2 push 0x11e8a660 */
  push32((uint32_t)(0x11e8a660u));
  /* 11e87dd7 push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e87ddc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e87de2 push eax */
  push32((uint32_t)(EAX));
  /* 11e87de3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e87dea sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87ded push ebx */
  push32((uint32_t)(EBX));
  /* 11e87dee push esi */
  push32((uint32_t)(ESI));
  /* 11e87def push edi */
  push32((uint32_t)(EDI));
  /* 11e87df0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e87df3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e87df5 cmp dword ptr [0x11e8facc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8facc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87dfb jne 0x11e87e43 */
  if (!C.zf) goto L_11e87e43;
  /* 11e87dfd push edi */
  push32((uint32_t)(EDI));
  /* 11e87dfe push edi */
  push32((uint32_t)(EDI));
  /* 11e87dff push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87e01 pop ebx */
  EBX = (pop32());
  /* 11e87e02 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87e03 push 0x11e8a648 */
  push32((uint32_t)(0x11e8a648u));
  /* 11e87e08 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11e87e0d push esi */
  push32((uint32_t)(ESI));
  /* 11e87e0e push edi */
  push32((uint32_t)(EDI));
  /* 11e87e0f call dword ptr [0x11e8a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a014))), 0x11e87e15u);
  /* 11e87e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87e17 je 0x11e87e21 */
  if (C.zf) goto L_11e87e21;
  /* 11e87e19 mov dword ptr [0x11e8facc], ebx */
  w32((uint32_t)(0x11e8facc), (EBX));
  /* 11e87e1f jmp 0x11e87e43 */
  goto L_11e87e43;
L_11e87e21:;
  /* 11e87e21 push edi */
  push32((uint32_t)(EDI));
  /* 11e87e22 push edi */
  push32((uint32_t)(EDI));
  /* 11e87e23 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87e24 push 0x11e8a644 */
  push32((uint32_t)(0x11e8a644u));
  /* 11e87e29 push esi */
  push32((uint32_t)(ESI));
  /* 11e87e2a push edi */
  push32((uint32_t)(EDI));
  /* 11e87e2b call dword ptr [0x11e8a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a018))), 0x11e87e31u);
  /* 11e87e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87e33 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87e39 mov dword ptr [0x11e8facc], 2 */
  w32((uint32_t)(0x11e8facc), (0x2u));
L_11e87e43:;
  /* 11e87e43 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87e46 jle 0x11e87e58 */
  if ((C.zf||C.sf!=C.of)) goto L_11e87e58;
  /* 11e87e48 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87e4b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87e4e call 0x11e890c3 */
  push32(0x11e87e53u); f_11e890c3();
  /* 11e87e53 pop ecx */
  ECX = (pop32());
  /* 11e87e54 pop ecx */
  ECX = (pop32());
  /* 11e87e55 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11e87e58:;
  /* 11e87e58 mov eax, dword ptr [0x11e8facc] */
  EAX = (r32((uint32_t)(0x11e8facc)));
  /* 11e87e5d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87e60 jne 0x11e87e7f */
  if (!C.zf) goto L_11e87e7f;
  /* 11e87e62 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e87e65 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e87e68 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87e6b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87e6e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87e71 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87e74 call dword ptr [0x11e8a018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a018))), 0x11e87e7au);
  /* 11e87e7a jmp 0x11e87f5d */
  goto L_11e87f5d;
L_11e87e7f:;
  /* 11e87e7f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87e82 jne 0x11e87f5b */
  if (!C.zf) goto L_11e87f5b;
  /* 11e87e88 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87e8b jne 0x11e87e95 */
  if (!C.zf) goto L_11e87e95;
  /* 11e87e8d mov eax, dword ptr [0x11e8fa9c] */
  EAX = (r32((uint32_t)(0x11e8fa9c)));
  /* 11e87e92 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11e87e95:;
  /* 11e87e95 push edi */
  push32((uint32_t)(EDI));
  /* 11e87e96 push edi */
  push32((uint32_t)(EDI));
  /* 11e87e97 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87e9a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87e9d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e87ea0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e87ea2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e87ea4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e87ea7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e87ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11e87ea9 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e87eac call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e87eb2u);
  /* 11e87eb2 mov ebx, eax */
  EBX = (EAX);
  /* 11e87eb4 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11e87eb7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87eb9 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87ebf mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e87ec2 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11e87ec5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87ec8 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e87eca call 0x11e878a0 */
  push32(0x11e87ecfu); f_11e878a0();
  /* 11e87ecf mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e87ed2 mov eax, esp */
  EAX = (ESP);
  /* 11e87ed4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e87ed7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e87edb jmp 0x11e87ef0 */
  goto L_11e87ef0;
  /* 11e87edd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87edf pop eax */
  EAX = (pop32());
  /* 11e87ee0 ret  */
  ESPCHK(0x11e87dcdu, _esp0);
  ESP += 4; return;
  /* 11e87ee1 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e87ee4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e87ee6 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11e87ee9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e87eed mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11e87ef0:;
  /* 11e87ef0 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87ef3 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87ef5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87ef6 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e87ef9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e87efc push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e87eff push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87f01 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e87f04 call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e87f0au);
  /* 11e87f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87f0c je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87f0e push edi */
  push32((uint32_t)(EDI));
  /* 11e87f0f push edi */
  push32((uint32_t)(EDI));
  /* 11e87f10 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87f11 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e87f14 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87f17 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87f1a call dword ptr [0x11e8a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a014))), 0x11e87f20u);
  /* 11e87f20 mov esi, eax */
  ESI = (EAX);
  /* 11e87f22 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11e87f25 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87f27 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87f29 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11e87f2d je 0x11e87f6f */
  if (C.zf) goto L_11e87f6f;
  /* 11e87f2f cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87f32 je 0x11e87fea */
  if (C.zf) goto L_11e87fea;
  /* 11e87f38 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87f3b jg 0x11e87f5b */
  if ((!C.zf&&C.sf==C.of)) goto L_11e87f5b;
  /* 11e87f3d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e87f40 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e87f43 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87f44 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e87f47 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87f4a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87f4d call dword ptr [0x11e8a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a014))), 0x11e87f53u);
  /* 11e87f53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87f55 jne 0x11e87fea */
  if (!C.zf) goto L_11e87fea;
L_11e87f5b:;
  /* 11e87f5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e87f5d:;
  /* 11e87f5d lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11e87f60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e87f63 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e87f6a pop edi */
  EDI = (pop32());
  /* 11e87f6b pop esi */
  ESI = (pop32());
  /* 11e87f6c pop ebx */
  EBX = (pop32());
  /* 11e87f6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e87f6e ret  */
  ESPCHK(0x11e87dcdu, _esp0);
  ESP += 4; return;
L_11e87f6f:;
  /* 11e87f6f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e87f76 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11e87f79 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e87f7c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e87f7e call 0x11e878a0 */
  push32(0x11e87f83u); f_11e878a0();
  /* 11e87f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e87f86 mov ebx, esp */
  EBX = (ESP);
  /* 11e87f88 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11e87f8b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e87f8f jmp 0x11e87fa3 */
  goto L_11e87fa3;
  /* 11e87f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e87f93 pop eax */
  EAX = (pop32());
  /* 11e87f94 ret  */
  ESPCHK(0x11e87dcdu, _esp0);
  ESP += 4; return;
  /* 11e87f95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e87f98 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e87f9a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e87f9c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e87fa0 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11e87fa3:;
  /* 11e87fa3 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87fa5 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11e87fa8 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87fa9 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11e87fac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e87faf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e87fb2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e87fb5 call dword ptr [0x11e8a014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a014))), 0x11e87fbbu);
  /* 11e87fbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e87fbd je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
  /* 11e87fbf cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87fc2 push edi */
  push32((uint32_t)(EDI));
  /* 11e87fc3 push edi */
  push32((uint32_t)(EDI));
  /* 11e87fc4 jne 0x11e87fca */
  if (!C.zf) goto L_11e87fca;
  /* 11e87fc6 push edi */
  push32((uint32_t)(EDI));
  /* 11e87fc7 push edi */
  push32((uint32_t)(EDI));
  /* 11e87fc8 jmp 0x11e87fd0 */
  goto L_11e87fd0;
L_11e87fca:;
  /* 11e87fca push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e87fcd push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11e87fd0:;
  /* 11e87fd0 push esi */
  push32((uint32_t)(ESI));
  /* 11e87fd1 push ebx */
  push32((uint32_t)(EBX));
  /* 11e87fd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e87fd7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e87fda call dword ptr [0x11e8a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0dc))), 0x11e87fe0u);
  /* 11e87fe0 mov esi, eax */
  ESI = (EAX);
  /* 11e87fe2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e87fe4 je 0x11e87f5b */
  if (C.zf) goto L_11e87f5b;
L_11e87fea:;
  /* 11e87fea mov eax, esi */
  EAX = (ESI);
  /* 11e87fec jmp 0x11e87f5d */
  goto L_11e87f5d;
}

/* FUN_10007ff1 @ 0x11e87ff1 (33 bytes, 15 insns) */
void f_11e87ff1(void) {
  FTRACE(0x11e87ff1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e87ff1 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e87ff5 push esi */
  push32((uint32_t)(ESI));
  /* 11e87ff6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11e87ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e87ffc lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11e87fff cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88001 jb 0x11e88007 */
  if (C.cf) goto L_11e88007;
  /* 11e88003 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88005 jae 0x11e8800a */
  if (!C.cf) goto L_11e8800a;
L_11e88007:;
  /* 11e88007 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88009 pop eax */
  EAX = (pop32());
L_11e8800a:;
  /* 11e8800a mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e8800e pop esi */
  ESI = (pop32());
  /* 11e8800f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e88011 ret  */
  ESPCHK(0x11e87ff1u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11e88012 (94 bytes, 38 insns) */
void f_11e88012(void) {
  FTRACE(0x11e88012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88012 push esi */
  push32((uint32_t)(ESI));
  /* 11e88013 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e88017 push edi */
  push32((uint32_t)(EDI));
  /* 11e88018 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e8801c push esi */
  push32((uint32_t)(ESI));
  /* 11e8801d push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11e8801f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e88021 call 0x11e87ff1 */
  push32(0x11e88026u); f_11e87ff1();
  /* 11e88026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8802b je 0x11e88044 */
  if (C.zf) goto L_11e88044;
  /* 11e8802d lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11e88030 push eax */
  push32((uint32_t)(EAX));
  /* 11e88031 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88033 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11e88035 call 0x11e87ff1 */
  push32(0x11e8803au); f_11e87ff1();
  /* 11e8803a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8803d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8803f je 0x11e88044 */
  if (C.zf) goto L_11e88044;
  /* 11e88041 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11e88044:;
  /* 11e88044 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11e88047 push eax */
  push32((uint32_t)(EAX));
  /* 11e88048 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11e8804b push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11e8804d call 0x11e87ff1 */
  push32(0x11e88052u); f_11e87ff1();
  /* 11e88052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88057 je 0x11e8805c */
  if (C.zf) goto L_11e8805c;
  /* 11e88059 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11e8805c:;
  /* 11e8805c lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11e8805f push eax */
  push32((uint32_t)(EAX));
  /* 11e88060 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11e88063 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11e88065 call 0x11e87ff1 */
  push32(0x11e8806au); f_11e87ff1();
  /* 11e8806a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8806d pop edi */
  EDI = (pop32());
  /* 11e8806e pop esi */
  ESI = (pop32());
  /* 11e8806f ret  */
  ESPCHK(0x11e88012u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x11e88070 (46 bytes, 21 insns) */
void f_11e88070(void) {
  FTRACE(0x11e88070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88070 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e88074 push esi */
  push32((uint32_t)(ESI));
  /* 11e88075 push edi */
  push32((uint32_t)(EDI));
  /* 11e88076 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11e88078 mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11e8807b mov ecx, esi */
  ECX = (ESI);
  /* 11e8807d add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8807f mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11e88081 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11e88084 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11e88087 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11e88089 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e8808c mov edx, edi */
  EDX = (EDI);
  /* 11e8808e mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11e88091 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11e88094 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e88096 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e88098 pop edi */
  EDI = (pop32());
  /* 11e88099 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e8809c pop esi */
  ESI = (pop32());
  /* 11e8809d ret  */
  ESPCHK(0x11e88070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000809e @ 0x11e8809e (45 bytes, 21 insns) */
void f_11e8809e(void) {
  FTRACE(0x11e8809eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8809e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e880a2 push esi */
  push32((uint32_t)(ESI));
  /* 11e880a3 push edi */
  push32((uint32_t)(EDI));
  /* 11e880a4 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e880a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e880aa mov esi, edx */
  ESI = (EDX);
  /* 11e880ac mov edi, ecx */
  EDI = (ECX);
  /* 11e880ae shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11e880b1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e880b3 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11e880b5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e880b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e880ba shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11e880bd shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e880bf shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e880c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e880c3 pop edi */
  EDI = (pop32());
  /* 11e880c4 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e880c7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e880c9 pop esi */
  ESI = (pop32());
  /* 11e880ca ret  */
  ESPCHK(0x11e8809eu, _esp0);
  ESP += 4; return;
}

/* FUN_100080cb @ 0x11e880cb (199 bytes, 76 insns) */
void f_11e880cb(void) {
  FTRACE(0x11e880cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e880cb push ebp */
  push32((uint32_t)(EBP));
  /* 11e880cc mov ebp, esp */
  EBP = (ESP);
  /* 11e880ce sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e880d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e880d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e880d5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e880d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e880da cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e880dc push esi */
  push32((uint32_t)(ESI));
  /* 11e880dd mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11e880e4 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11e880e6 mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11e880e9 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11e880ec jbe 0x11e8813f */
  if ((C.cf||C.zf)) goto L_11e8813f;
  /* 11e880ee push edi */
  push32((uint32_t)(EDI));
  /* 11e880ef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e880f2:;
  /* 11e880f2 mov esi, ebx */
  ESI = (EBX);
  /* 11e880f4 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11e880f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e880f8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e880f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11e880fa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e880fb call 0x11e88070 */
  push32(0x11e88100u); f_11e88070();
  /* 11e88100 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88101 call 0x11e88070 */
  push32(0x11e88106u); f_11e88070();
  /* 11e88106 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e88109 push eax */
  push32((uint32_t)(EAX));
  /* 11e8810a push ebx */
  push32((uint32_t)(EBX));
  /* 11e8810b call 0x11e88012 */
  push32(0x11e88110u); f_11e88012();
  /* 11e88110 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88111 call 0x11e88070 */
  push32(0x11e88116u); f_11e88070();
  /* 11e88116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88119 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11e8811d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e88121 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e88124 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e88127 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8812a push eax */
  push32((uint32_t)(EAX));
  /* 11e8812b push ebx */
  push32((uint32_t)(EBX));
  /* 11e8812c call 0x11e88012 */
  push32(0x11e88131u); f_11e88012();
  /* 11e88131 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88134 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11e88137 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11e8813a jne 0x11e880f2 */
  if (!C.zf) goto L_11e880f2;
  /* 11e8813c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e8813e pop edi */
  EDI = (pop32());
L_11e8813f:;
  /* 11e8813f cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88142 jne 0x11e8816c */
  if (!C.zf) goto L_11e8816c;
  /* 11e88144 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e88147 mov eax, ecx */
  EAX = (ECX);
  /* 11e88149 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e8814c mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11e8814f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e88151 mov esi, eax */
  ESI = (EAX);
  /* 11e88153 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11e88156 shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11e88159 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11e8815b shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e8815e add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88165 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11e88168 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11e8816a jmp 0x11e8813f */
  goto L_11e8813f;
L_11e8816c:;
  /* 11e8816c mov esi, 0x8000 */
  ESI = (0x8000u);
L_11e88171:;
  /* 11e88171 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11e88174 jne 0x11e88186 */
  if (!C.zf) goto L_11e88186;
  /* 11e88176 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88177 call 0x11e88070 */
  push32(0x11e8817cu); f_11e88070();
  /* 11e8817c add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88183 pop ecx */
  ECX = (pop32());
  /* 11e88184 jmp 0x11e88171 */
  goto L_11e88171;
L_11e88186:;
  /* 11e88186 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e8818a pop esi */
  ESI = (pop32());
  /* 11e8818b mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11e8818f pop ebx */
  EBX = (pop32());
  /* 11e88190 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88191 ret  */
  ESPCHK(0x11e880cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10008192 @ 0x11e88192 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11e88192(void) {
  FTRACE(0x11e88192u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88192 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88193 mov ebp, esp */
  EBP = (ESP);
  /* 11e88195 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88198 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88199 push esi */
  push32((uint32_t)(ESI));
  /* 11e8819a push edi */
  push32((uint32_t)(EDI));
  /* 11e8819b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8819e lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11e881a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e881a3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e881a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e881a8 pop edx */
  EDX = (pop32());
  /* 11e881a9 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e881ac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e881af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e881b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e881b5 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e881b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e881bb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e881be mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e881c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e881c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e881c7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e881ca mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11e881cd:;
  /* 11e881cd mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11e881cf cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e881d2 je 0x11e881e3 */
  if (C.zf) goto L_11e881e3;
  /* 11e881d4 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e881d7 je 0x11e881e3 */
  if (C.zf) goto L_11e881e3;
  /* 11e881d9 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e881dc je 0x11e881e3 */
  if (C.zf) goto L_11e881e3;
  /* 11e881de cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e881e1 jne 0x11e881e6 */
  if (!C.zf) goto L_11e881e6;
L_11e881e3:;
  /* 11e881e3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e881e4 jmp 0x11e881cd */
  goto L_11e881cd;
L_11e881e6:;
  /* 11e881e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e881e8 pop esi */
  ESI = (pop32());
L_11e881e9:;
  /* 11e881e9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e881eb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e881ec cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e881ef ja 0x11e8846c */
  if ((!C.cf&&!C.zf)) goto L_11e8846c;
  /* 11e881f5 jmp dword ptr [eax*4 + 0x11e88633] */
  switch (EAX) {
    case 0: goto L_11e881fc;
    case 1: goto L_11e8824b;
    case 2: goto L_11e882a2;
    case 3: goto L_11e882cc;
    case 4: goto L_11e88327;
    case 5: goto L_11e8839e;
    case 6: goto L_11e883d4;
    case 7: goto L_11e8841e;
    case 8: goto L_11e883fd;
    case 9: goto L_11e88482;
    case 10: goto L_11e8846c;
    case 11: goto L_11e88438;
    default: x86_unimpl("switch@0x11e881f5 out of table"); return;
  }
L_11e881fc:;
  /* 11e881fc cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e881ff jl 0x11e8820d */
  if ((C.sf!=C.of)) goto L_11e8820d;
  /* 11e88201 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88204 jg 0x11e8820d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e8820d;
L_11e88206:;
  /* 11e88206 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e88208 jmp 0x11e8842a */
  goto L_11e8842a;
L_11e8820d:;
  /* 11e8820d cmp bl, byte ptr [0x11e8eee4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11e8eee4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88213 jne 0x11e8821c */
  if (!C.zf) goto L_11e8821c;
L_11e88215:;
  /* 11e88215 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e88217 jmp 0x11e88462 */
  goto L_11e88462;
L_11e8821c:;
  /* 11e8821c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e8821f sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88222 je 0x11e88242 */
  if (C.zf) goto L_11e88242;
  /* 11e88224 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88225 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88226 je 0x11e88236 */
  if (C.zf) goto L_11e88236;
  /* 11e88228 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8822b jne 0x11e88505 */
  if (!C.zf) goto L_11e88505;
  /* 11e88231 jmp 0x11e882c5 */
  goto L_11e882c5;
L_11e88236:;
  /* 11e88236 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e88238 mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11e8823f pop eax */
  EAX = (pop32());
  /* 11e88240 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e88242:;
  /* 11e88242 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11e88246 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e88248 pop eax */
  EAX = (pop32());
  /* 11e88249 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e8824b:;
  /* 11e8824b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8824e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e88251 jl 0x11e88258 */
  if ((C.sf!=C.of)) goto L_11e88258;
  /* 11e88253 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88256 jle 0x11e88206 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88206;
L_11e88258:;
  /* 11e88258 cmp bl, byte ptr [0x11e8eee4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11e8eee4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8825e je 0x11e88320 */
  if (C.zf) goto L_11e88320;
  /* 11e88264 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88267 je 0x11e8829a */
  if (C.zf) goto L_11e8829a;
  /* 11e88269 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8826c je 0x11e8829a */
  if (C.zf) goto L_11e8829a;
  /* 11e8826e cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88271 je 0x11e882c5 */
  if (C.zf) goto L_11e882c5;
L_11e88273:;
  /* 11e88273 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88276 jle 0x11e88505 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88505;
  /* 11e8827c cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8827f jle 0x11e88293 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88293;
  /* 11e88281 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88284 jle 0x11e88505 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88505;
  /* 11e8828a cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8828d jg 0x11e88505 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88505;
L_11e88293:;
  /* 11e88293 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e88295 jmp 0x11e88462 */
  goto L_11e88462;
L_11e8829a:;
  /* 11e8829a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e8829b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e8829d jmp 0x11e88462 */
  goto L_11e88462;
L_11e882a2:;
  /* 11e882a2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e882a5 jl 0x11e882b0 */
  if ((C.sf!=C.of)) goto L_11e882b0;
  /* 11e882a7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e882aa jle 0x11e88206 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88206;
L_11e882b0:;
  /* 11e882b0 cmp bl, byte ptr [0x11e8eee4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11e8eee4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e882b6 je 0x11e88215 */
  if (C.zf) goto L_11e88215;
  /* 11e882bc cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e882bf jne 0x11e8847a */
  if (!C.zf) goto L_11e8847a;
L_11e882c5:;
  /* 11e882c5 mov eax, edx */
  EAX = (EDX);
  /* 11e882c7 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e882cc:;
  /* 11e882cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e882cf:;
  /* 11e882cf cmp dword ptr [0x11e8eee0], edx */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e882d5 jle 0x11e882e8 */
  if ((C.zf||C.sf!=C.of)) goto L_11e882e8;
  /* 11e882d7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e882da push esi */
  push32((uint32_t)(ESI));
  /* 11e882db push eax */
  push32((uint32_t)(EAX));
  /* 11e882dc call 0x11e861fb */
  push32(0x11e882e1u); f_11e861fb();
  /* 11e882e1 pop ecx */
  ECX = (pop32());
  /* 11e882e2 pop ecx */
  ECX = (pop32());
  /* 11e882e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e882e5 pop edx */
  EDX = (pop32());
  /* 11e882e6 jmp 0x11e882f6 */
  goto L_11e882f6;
L_11e882e8:;
  /* 11e882e8 mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e882ee movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e882f1 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e882f4 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11e882f6:;
  /* 11e882f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e882f8 je 0x11e88318 */
  if (C.zf) goto L_11e88318;
  /* 11e882fa cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e882fe jae 0x11e88310 */
  if (!C.cf) goto L_11e88310;
  /* 11e88300 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e88303 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e88306 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e88309 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11e8830c mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11e8830e jmp 0x11e88313 */
  goto L_11e88313;
L_11e88310:;
  /* 11e88310 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11e88313:;
  /* 11e88313 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e88315 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e88316 jmp 0x11e882cf */
  goto L_11e882cf;
L_11e88318:;
  /* 11e88318 cmp bl, byte ptr [0x11e8eee4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11e8eee4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8831e jne 0x11e88387 */
  if (!C.zf) goto L_11e88387;
L_11e88320:;
  /* 11e88320 mov eax, esi */
  EAX = (ESI);
  /* 11e88322 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e88327:;
  /* 11e88327 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8832b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e8832e mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e88331 jne 0x11e88340 */
  if (!C.zf) goto L_11e88340;
L_11e88333:;
  /* 11e88333 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88336 jne 0x11e88340 */
  if (!C.zf) goto L_11e88340;
  /* 11e88338 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11e8833b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e8833d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8833e jmp 0x11e88333 */
  goto L_11e88333;
L_11e88340:;
  /* 11e88340 cmp dword ptr [0x11e8eee0], edx */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88346 jle 0x11e88359 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88359;
  /* 11e88348 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e8834b push esi */
  push32((uint32_t)(ESI));
  /* 11e8834c push eax */
  push32((uint32_t)(EAX));
  /* 11e8834d call 0x11e861fb */
  push32(0x11e88352u); f_11e861fb();
  /* 11e88352 pop ecx */
  ECX = (pop32());
  /* 11e88353 pop ecx */
  ECX = (pop32());
  /* 11e88354 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88356 pop edx */
  EDX = (pop32());
  /* 11e88357 jmp 0x11e88367 */
  goto L_11e88367;
L_11e88359:;
  /* 11e88359 mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e8835f movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e88362 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e88365 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11e88367:;
  /* 11e88367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88369 je 0x11e88387 */
  if (C.zf) goto L_11e88387;
  /* 11e8836b cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8836f jae 0x11e88382 */
  if (!C.cf) goto L_11e88382;
  /* 11e88371 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e88374 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e88377 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e8837a inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11e8837d dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11e88380 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11e88382:;
  /* 11e88382 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e88384 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e88385 jmp 0x11e88340 */
  goto L_11e88340;
L_11e88387:;
  /* 11e88387 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8838a je 0x11e8829a */
  if (C.zf) goto L_11e8829a;
  /* 11e88390 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88393 je 0x11e8829a */
  if (C.zf) goto L_11e8829a;
  /* 11e88399 jmp 0x11e88273 */
  goto L_11e88273;
L_11e8839e:;
  /* 11e8839e cmp dword ptr [0x11e8eee0], edx */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e883a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e883a7 jle 0x11e883ba */
  if ((C.zf||C.sf!=C.of)) goto L_11e883ba;
  /* 11e883a9 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e883ac push esi */
  push32((uint32_t)(ESI));
  /* 11e883ad push eax */
  push32((uint32_t)(EAX));
  /* 11e883ae call 0x11e861fb */
  push32(0x11e883b3u); f_11e861fb();
  /* 11e883b3 pop ecx */
  ECX = (pop32());
  /* 11e883b4 pop ecx */
  ECX = (pop32());
  /* 11e883b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e883b7 pop edx */
  EDX = (pop32());
  /* 11e883b8 jmp 0x11e883c8 */
  goto L_11e883c8;
L_11e883ba:;
  /* 11e883ba mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e883c0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e883c3 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e883c6 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11e883c8:;
  /* 11e883c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e883ca je 0x11e8847a */
  if (C.zf) goto L_11e8847a;
  /* 11e883d0 mov eax, esi */
  EAX = (ESI);
  /* 11e883d2 jmp 0x11e8842b */
  goto L_11e8842b;
L_11e883d4:;
  /* 11e883d4 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11e883d7 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e883da mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e883dd jl 0x11e883e4 */
  if ((C.sf!=C.of)) goto L_11e883e4;
  /* 11e883df cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e883e2 jle 0x11e88428 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88428;
L_11e883e4:;
  /* 11e883e4 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e883e7 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e883ea je 0x11e88460 */
  if (C.zf) goto L_11e88460;
  /* 11e883ec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e883ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e883ee je 0x11e88454 */
  if (C.zf) goto L_11e88454;
  /* 11e883f0 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e883f3 jne 0x11e88508 */
  if (!C.zf) goto L_11e88508;
L_11e883f9:;
  /* 11e883f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e883fb jmp 0x11e88462 */
  goto L_11e88462;
L_11e883fd:;
  /* 11e883fd mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e88400:;
  /* 11e88400 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88403 jne 0x11e8840a */
  if (!C.zf) goto L_11e8840a;
  /* 11e88405 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e88407 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e88408 jmp 0x11e88400 */
  goto L_11e88400;
L_11e8840a:;
  /* 11e8840a cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8840d jl 0x11e88505 */
  if ((C.sf!=C.of)) goto L_11e88505;
  /* 11e88413 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88416 jg 0x11e88505 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88505;
  /* 11e8841c jmp 0x11e88428 */
  goto L_11e88428;
L_11e8841e:;
  /* 11e8841e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88421 jl 0x11e88431 */
  if ((C.sf!=C.of)) goto L_11e88431;
  /* 11e88423 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88426 jg 0x11e88431 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88431;
L_11e88428:;
  /* 11e88428 push 9 */
  push32((uint32_t)(0x9u));
L_11e8842a:;
  /* 11e8842a pop eax */
  EAX = (pop32());
L_11e8842b:;
  /* 11e8842b dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e8842c jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e88431:;
  /* 11e88431 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88434 jne 0x11e8847a */
  if (!C.zf) goto L_11e8847a;
  /* 11e88436 jmp 0x11e883f9 */
  goto L_11e883f9;
L_11e88438:;
  /* 11e88438 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8843c je 0x11e88468 */
  if (C.zf) goto L_11e88468;
  /* 11e8843e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e88441 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11e88444 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88447 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e8844a je 0x11e88460 */
  if (C.zf) goto L_11e88460;
  /* 11e8844c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e8844d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e8844e jne 0x11e88508 */
  if (!C.zf) goto L_11e88508;
L_11e88454:;
  /* 11e88454 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11e88458 push 7 */
  push32((uint32_t)(0x7u));
  /* 11e8845a pop eax */
  EAX = (pop32());
  /* 11e8845b jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e88460:;
  /* 11e88460 push 7 */
  push32((uint32_t)(0x7u));
L_11e88462:;
  /* 11e88462 pop eax */
  EAX = (pop32());
  /* 11e88463 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e88468:;
  /* 11e88468 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e8846a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e8846b pop eax */
  EAX = (pop32());
L_11e8846c:;
  /* 11e8846c cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8846f je 0x11e8850a */
  if (C.zf) goto L_11e8850a;
  /* 11e88475 jmp 0x11e881e9 */
  goto L_11e881e9;
L_11e8847a:;
  /* 11e8847a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8847d jmp 0x11e8850a */
  goto L_11e8850a;
L_11e88482:;
  /* 11e88482 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11e88489 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11e8848b:;
  /* 11e8848b cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88492 jle 0x11e884a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e884a3;
  /* 11e88494 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e88497 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e88499 push eax */
  push32((uint32_t)(EAX));
  /* 11e8849a call 0x11e861fb */
  push32(0x11e8849fu); f_11e861fb();
  /* 11e8849f pop ecx */
  ECX = (pop32());
  /* 11e884a0 pop ecx */
  ECX = (pop32());
  /* 11e884a1 jmp 0x11e884b2 */
  goto L_11e884b2;
L_11e884a3:;
  /* 11e884a3 mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e884a9 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e884ac mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e884af and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11e884b2:;
  /* 11e884b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e884b4 je 0x11e884d2 */
  if (C.zf) goto L_11e884d2;
  /* 11e884b6 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11e884b9 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11e884bc lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11e884c0 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e884c6 jg 0x11e884cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11e884cd;
  /* 11e884c8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e884ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e884cb jmp 0x11e8848b */
  goto L_11e8848b;
L_11e884cd:;
  /* 11e884cd mov esi, 0x1451 */
  ESI = (0x1451u);
L_11e884d2:;
  /* 11e884d2 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11e884d5:;
  /* 11e884d5 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e884dc jle 0x11e884ed */
  if ((C.zf||C.sf!=C.of)) goto L_11e884ed;
  /* 11e884de movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e884e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e884e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e884e4 call 0x11e861fb */
  push32(0x11e884e9u); f_11e861fb();
  /* 11e884e9 pop ecx */
  ECX = (pop32());
  /* 11e884ea pop ecx */
  ECX = (pop32());
  /* 11e884eb jmp 0x11e884fc */
  goto L_11e884fc;
L_11e884ed:;
  /* 11e884ed mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e884f3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e884f6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e884f9 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11e884fc:;
  /* 11e884fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e884fe je 0x11e88505 */
  if (C.zf) goto L_11e88505;
  /* 11e88500 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e88502 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e88503 jmp 0x11e884d5 */
  goto L_11e884d5;
L_11e88505:;
  /* 11e88505 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e88506 jmp 0x11e8850a */
  goto L_11e8850a;
L_11e88508:;
  /* 11e88508 mov edi, ecx */
  EDI = (ECX);
L_11e8850a:;
  /* 11e8850a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8850d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88511 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11e88513 je 0x11e885f2 */
  if (C.zf) goto L_11e885f2;
  /* 11e88519 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11e8851b pop eax */
  EAX = (pop32());
  /* 11e8851c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8851f jbe 0x11e88536 */
  if ((C.cf||C.zf)) goto L_11e88536;
  /* 11e88521 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88525 jl 0x11e8852a */
  if ((C.sf!=C.of)) goto L_11e8852a;
  /* 11e88527 inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11e8852a:;
  /* 11e8852a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e8852d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e88530 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88531 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11e88534 jmp 0x11e88539 */
  goto L_11e88539;
L_11e88536:;
  /* 11e88536 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11e88539:;
  /* 11e88539 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8853d jbe 0x11e885e8 */
  if ((C.cf||C.zf)) goto L_11e885e8;
L_11e88543:;
  /* 11e88543 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88544 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88547 jne 0x11e88551 */
  if (!C.zf) goto L_11e88551;
  /* 11e88549 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11e8854c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11e8854f jmp 0x11e88543 */
  goto L_11e88543;
L_11e88551:;
  /* 11e88551 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11e88554 push eax */
  push32((uint32_t)(EAX));
  /* 11e88555 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11e88558 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11e8855b push eax */
  push32((uint32_t)(EAX));
  /* 11e8855c call 0x11e880cb */
  push32(0x11e88561u); f_11e880cb();
  /* 11e88561 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e88564 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e88566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88569 cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8856c jge 0x11e88570 */
  if ((C.sf==C.of)) goto L_11e88570;
  /* 11e8856e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e88570:;
  /* 11e88570 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88573 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88576 jne 0x11e8857b */
  if (!C.zf) goto L_11e8857b;
  /* 11e88578 add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e8857b:;
  /* 11e8857b cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8857e jne 0x11e88583 */
  if (!C.zf) goto L_11e88583;
  /* 11e88580 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e88583:;
  /* 11e88583 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88588 jle 0x11e885ba */
  if ((C.zf||C.sf!=C.of)) goto L_11e885ba;
  /* 11e8858a mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11e88591:;
  /* 11e88591 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e88594 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e88597 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8859a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11e8859d:;
  /* 11e8859d cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e885a1 je 0x11e88603 */
  if (C.zf) goto L_11e88603;
  /* 11e885a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e885a5 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11e885aa mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11e885af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e885b1 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11e885b8 jmp 0x11e88618 */
  goto L_11e88618;
L_11e885ba:;
  /* 11e885ba cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e885bf jge 0x11e885ca */
  if ((C.sf==C.of)) goto L_11e885ca;
  /* 11e885c1 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11e885c8 jmp 0x11e88591 */
  goto L_11e88591;
L_11e885ca:;
  /* 11e885ca push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e885cd push eax */
  push32((uint32_t)(EAX));
  /* 11e885ce lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11e885d1 push eax */
  push32((uint32_t)(EAX));
  /* 11e885d2 call 0x11e88dca */
  push32(0x11e885d7u); f_11e88dca();
  /* 11e885d7 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e885da mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11e885dd mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11e885e0 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11e885e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e885e6 jmp 0x11e8859d */
  goto L_11e8859d;
L_11e885e8:;
  /* 11e885e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e885ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e885ec xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e885ee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e885f0 jmp 0x11e8859d */
  goto L_11e8859d;
L_11e885f2:;
  /* 11e885f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e885f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e885f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e885f8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e885fa mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11e88601 jmp 0x11e88618 */
  goto L_11e88618;
L_11e88603:;
  /* 11e88603 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88607 je 0x11e88618 */
  if (C.zf) goto L_11e88618;
  /* 11e88609 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e8860b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e8860d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e8860f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e88611 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11e88618:;
  /* 11e88618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8861b or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11e8861e pop edi */
  EDI = (pop32());
  /* 11e8861f mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11e88622 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11e88625 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11e88629 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e8862c pop esi */
  ESI = (pop32());
  /* 11e8862d mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11e88630 pop ebx */
  EBX = (pop32());
  /* 11e88631 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88632 ret  */
  ESPCHK(0x11e88192u, _esp0);
  ESP += 4; return;
}

/* FUN_10008663 @ 0x11e88663 (659 bytes, 232 insns) */
void f_11e88663(void) {
  FTRACE(0x11e88663u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88663 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88664 mov ebp, esp */
  EBP = (ESP);
  /* 11e88666 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8866c push ebx */
  push32((uint32_t)(EBX));
  /* 11e8866d mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e88670 push esi */
  push32((uint32_t)(ESI));
  /* 11e88671 mov ecx, eax */
  ECX = (EAX);
  /* 11e88673 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11e88678 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e8867e and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e88680 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11e88683 push edi */
  push32((uint32_t)(EDI));
  /* 11e88684 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11e88688 mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11e8868c mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11e88690 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11e88694 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11e88698 mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11e8869c mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11e886a0 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11e886a4 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11e886a8 mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11e886ac mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11e886b0 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11e886b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e886bb mov edx, eax */
  EDX = (EAX);
  /* 11e886bd je 0x11e886c5 */
  if (C.zf) goto L_11e886c5;
  /* 11e886bf mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11e886c3 jmp 0x11e886c9 */
  goto L_11e886c9;
L_11e886c5:;
  /* 11e886c5 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11e886c9:;
  /* 11e886c9 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e886cc test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11e886cf jne 0x11e886ef */
  if (!C.zf) goto L_11e886ef;
  /* 11e886d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e886d3 jne 0x11e886ef */
  if (!C.zf) goto L_11e886ef;
  /* 11e886d5 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e886d8 jne 0x11e886ef */
  if (!C.zf) goto L_11e886ef;
L_11e886da:;
  /* 11e886da and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11e886de mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11e886e2 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11e886e6 mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11e886ea jmp 0x11e888ed */
  goto L_11e888ed;
L_11e886ef:;
  /* 11e886ef cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e886f2 jne 0x11e8876e */
  if (!C.zf) goto L_11e8876e;
  /* 11e886f4 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11e886f9 mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11e886fe cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88700 jne 0x11e88708 */
  if (!C.zf) goto L_11e88708;
  /* 11e88702 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88706 je 0x11e88717 */
  if (C.zf) goto L_11e88717;
L_11e88708:;
  /* 11e88708 test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11e8870e jne 0x11e88717 */
  if (!C.zf) goto L_11e88717;
  /* 11e88710 push 0x11e8a690 */
  push32((uint32_t)(0x11e8a690u));
  /* 11e88715 jmp 0x11e8875d */
  goto L_11e8875d;
L_11e88717:;
  /* 11e88717 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11e8871a je 0x11e88731 */
  if (C.zf) goto L_11e88731;
  /* 11e8871c cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88722 jne 0x11e88731 */
  if (!C.zf) goto L_11e88731;
  /* 11e88724 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88728 jne 0x11e88758 */
  if (!C.zf) goto L_11e88758;
  /* 11e8872a push 0x11e8a688 */
  push32((uint32_t)(0x11e8a688u));
  /* 11e8872f jmp 0x11e88740 */
  goto L_11e88740;
L_11e88731:;
  /* 11e88731 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88733 jne 0x11e88758 */
  if (!C.zf) goto L_11e88758;
  /* 11e88735 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88739 jne 0x11e88758 */
  if (!C.zf) goto L_11e88758;
  /* 11e8873b push 0x11e8a680 */
  push32((uint32_t)(0x11e8a680u));
L_11e88740:;
  /* 11e88740 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11e88743 push eax */
  push32((uint32_t)(EAX));
  /* 11e88744 call 0x11e86920 */
  push32(0x11e88749u); f_11e86920();
  /* 11e88749 pop ecx */
  ECX = (pop32());
  /* 11e8874a mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11e8874e pop ecx */
  ECX = (pop32());
L_11e8874f:;
  /* 11e8874f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e88753 jmp 0x11e888c6 */
  goto L_11e888c6;
L_11e88758:;
  /* 11e88758 push 0x11e8a678 */
  push32((uint32_t)(0x11e8a678u));
L_11e8875d:;
  /* 11e8875d lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11e88760 push eax */
  push32((uint32_t)(EAX));
  /* 11e88761 call 0x11e86920 */
  push32(0x11e88766u); f_11e86920();
  /* 11e88766 pop ecx */
  ECX = (pop32());
  /* 11e88767 mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11e8876b pop ecx */
  ECX = (pop32());
  /* 11e8876c jmp 0x11e8874f */
  goto L_11e8874f;
L_11e8876e:;
  /* 11e8876e movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11e88771 mov ecx, edi */
  ECX = (EDI);
  /* 11e88773 mov esi, eax */
  ESI = (EAX);
  /* 11e88775 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11e88778 imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8877e shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11e88781 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11e88786 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88788 lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11e8878b mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11e8878f imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e88792 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11e88795 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11e8879c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8879f sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11e887a2 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11e887a5 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11e887a8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e887aa push eax */
  push32((uint32_t)(EAX));
  /* 11e887ab lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e887ae push eax */
  push32((uint32_t)(EAX));
  /* 11e887af call 0x11e88dca */
  push32(0x11e887b4u); f_11e88dca();
  /* 11e887b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e887b7 cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e887bd jb 0x11e887cf */
  if (C.cf) goto L_11e887cf;
  /* 11e887bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e887c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e887c3 push eax */
  push32((uint32_t)(EAX));
  /* 11e887c4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e887c7 push eax */
  push32((uint32_t)(EAX));
  /* 11e887c8 call 0x11e88baa */
  push32(0x11e887cdu); f_11e88baa();
  /* 11e887cd pop ecx */
  ECX = (pop32());
  /* 11e887ce pop ecx */
  ECX = (pop32());
L_11e887cf:;
  /* 11e887cf test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11e887d3 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11e887d6 je 0x11e887e9 */
  if (C.zf) goto L_11e887e9;
  /* 11e887d8 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e887db movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11e887de add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e887e0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e887e2 jg 0x11e887ec */
  if ((!C.zf&&C.sf==C.of)) goto L_11e887ec;
  /* 11e887e4 jmp 0x11e886da */
  goto L_11e886da;
L_11e887e9:;
  /* 11e887e9 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11e887ec:;
  /* 11e887ec cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e887ef jle 0x11e887f4 */
  if ((C.zf||C.sf!=C.of)) goto L_11e887f4;
  /* 11e887f1 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11e887f3 pop edi */
  EDI = (pop32());
L_11e887f4:;
  /* 11e887f4 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11e887f8 sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e887fe and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11e88803 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11e8880a:;
  /* 11e8880a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8880d push eax */
  push32((uint32_t)(EAX));
  /* 11e8880e call 0x11e88070 */
  push32(0x11e88813u); f_11e88070();
  /* 11e88813 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11e88816 pop ecx */
  ECX = (pop32());
  /* 11e88817 jne 0x11e8880a */
  if (!C.zf) goto L_11e8880a;
  /* 11e88819 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e8881b jge 0x11e88834 */
  if ((C.sf==C.of)) goto L_11e88834;
  /* 11e8881d neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11e8881f and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11e88825 jle 0x11e88834 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88834;
L_11e88827:;
  /* 11e88827 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8882a push eax */
  push32((uint32_t)(EAX));
  /* 11e8882b call 0x11e8809e */
  push32(0x11e88830u); f_11e8809e();
  /* 11e88830 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e88831 pop ecx */
  ECX = (pop32());
  /* 11e88832 jne 0x11e88827 */
  if (!C.zf) goto L_11e88827;
L_11e88834:;
  /* 11e88834 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11e88837 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11e8883a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e8883c mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11e8883f jle 0x11e88891 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88891;
  /* 11e88841 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11e88844:;
  /* 11e88844 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11e88847 lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11e8884a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e8884b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e8884c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8884f push eax */
  push32((uint32_t)(EAX));
  /* 11e88850 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e88851 call 0x11e88070 */
  push32(0x11e88856u); f_11e88070();
  /* 11e88856 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e88859 push eax */
  push32((uint32_t)(EAX));
  /* 11e8885a call 0x11e88070 */
  push32(0x11e8885fu); f_11e88070();
  /* 11e8885f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e88862 push eax */
  push32((uint32_t)(EAX));
  /* 11e88863 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e88866 push eax */
  push32((uint32_t)(EAX));
  /* 11e88867 call 0x11e88012 */
  push32(0x11e8886cu); f_11e88012();
  /* 11e8886c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8886f push eax */
  push32((uint32_t)(EAX));
  /* 11e88870 call 0x11e88070 */
  push32(0x11e88875u); f_11e88070();
  /* 11e88875 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11e88878 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e8887b and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11e8887f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88882 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e88884 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11e88887 dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11e8888a mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e8888c jne 0x11e88844 */
  if (!C.zf) goto L_11e88844;
  /* 11e8888e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11e88891:;
  /* 11e88891 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11e88894 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88895 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e88896 cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88899 lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11e8889c jl 0x11e888ce */
  if ((C.sf!=C.of)) goto L_11e888ce;
L_11e8889e:;
  /* 11e8889e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e888a0 jb 0x11e888b1 */
  if (C.cf) goto L_11e888b1;
  /* 11e888a2 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e888a5 jne 0x11e888ad */
  if (!C.zf) goto L_11e888ad;
  /* 11e888a7 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11e888aa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e888ab jmp 0x11e8889e */
  goto L_11e8889e;
L_11e888ad:;
  /* 11e888ad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e888af jae 0x11e888b5 */
  if (!C.cf) goto L_11e888b5;
L_11e888b1:;
  /* 11e888b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e888b2 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11e888b5:;
  /* 11e888b5 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11e888b7:;
  /* 11e888b7 sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e888b9 sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e888bb mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11e888be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11e888c1 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11e888c6:;
  /* 11e888c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e888c9:;
  /* 11e888c9 pop edi */
  EDI = (pop32());
  /* 11e888ca pop esi */
  ESI = (pop32());
  /* 11e888cb pop ebx */
  EBX = (pop32());
  /* 11e888cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e888cd ret  */
  ESPCHK(0x11e88663u, _esp0);
  ESP += 4; return;
L_11e888ce:;
  /* 11e888ce cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e888d0 jb 0x11e888de */
  if (C.cf) goto L_11e888de;
  /* 11e888d2 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e888d5 jne 0x11e888da */
  if (!C.zf) goto L_11e888da;
  /* 11e888d7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e888d8 jmp 0x11e888ce */
  goto L_11e888ce;
L_11e888da:;
  /* 11e888da cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e888dc jae 0x11e888b7 */
  if (!C.cf) goto L_11e888b7;
L_11e888de:;
  /* 11e888de and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11e888e2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11e888e6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11e888ea mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11e888ed:;
  /* 11e888ed and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11e888f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e888f3 pop eax */
  EAX = (pop32());
  /* 11e888f4 jmp 0x11e888c9 */
  goto L_11e888c9;
}

/* FUN_100088f6 @ 0x11e888f6 (111 bytes, 44 insns) */
void f_11e888f6(void) {
  FTRACE(0x11e888f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e888f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e888f7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e888f9 cmp dword ptr [0x11e8fa8c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa8c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e888ff jne 0x11e88914 */
  if (!C.zf) goto L_11e88914;
  /* 11e88901 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e88905 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88908 jl 0x11e88963 */
  if ((C.sf!=C.of)) goto L_11e88963;
  /* 11e8890a cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8890d jg 0x11e88963 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88963;
  /* 11e8890f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88912 pop ebx */
  EBX = (pop32());
  /* 11e88913 ret  */
  ESPCHK(0x11e888f6u, _esp0);
  ESP += 4; return;
L_11e88914:;
  /* 11e88914 push esi */
  push32((uint32_t)(ESI));
  /* 11e88915 mov esi, 0x11e8fb54 */
  ESI = (0x11e8fb54u);
  /* 11e8891a push edi */
  push32((uint32_t)(EDI));
  /* 11e8891b push esi */
  push32((uint32_t)(ESI));
  /* 11e8891c call dword ptr [0x11e8a03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a03c))), 0x11e88922u);
  /* 11e88922 cmp dword ptr [0x11e8fb50], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb50))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88928 mov edi, dword ptr [0x11e8a040] */
  EDI = (r32((uint32_t)(0x11e8a040)));
  /* 11e8892e je 0x11e8893e */
  if (C.zf) goto L_11e8893e;
  /* 11e88930 push esi */
  push32((uint32_t)(ESI));
  /* 11e88931 call edi */
  call_ind((uint32_t)(EDI), 0x11e88933u);
  /* 11e88933 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e88935 call 0x11e83f07 */
  push32(0x11e8893au); f_11e83f07();
  /* 11e8893a pop ecx */
  ECX = (pop32());
  /* 11e8893b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8893d pop ebx */
  EBX = (pop32());
L_11e8893e:;
  /* 11e8893e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e88942 call 0x11e88965 */
  push32(0x11e88947u); f_11e88965();
  /* 11e88947 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e88949 pop ecx */
  ECX = (pop32());
  /* 11e8894a mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11e8894e je 0x11e8895a */
  if (C.zf) goto L_11e8895a;
  /* 11e88950 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e88952 call 0x11e83f68 */
  push32(0x11e88957u); f_11e83f68();
  /* 11e88957 pop ecx */
  ECX = (pop32());
  /* 11e88958 jmp 0x11e8895d */
  goto L_11e8895d;
L_11e8895a:;
  /* 11e8895a push esi */
  push32((uint32_t)(ESI));
  /* 11e8895b call edi */
  call_ind((uint32_t)(EDI), 0x11e8895du);
L_11e8895d:;
  /* 11e8895d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e88961 pop edi */
  EDI = (pop32());
  /* 11e88962 pop esi */
  ESI = (pop32());
L_11e88963:;
  /* 11e88963 pop ebx */
  EBX = (pop32());
  /* 11e88964 ret  */
  ESPCHK(0x11e888f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10008965 @ 0x11e88965 (204 bytes, 71 insns) */
void f_11e88965(void) {
  FTRACE(0x11e88965u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88965 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88966 mov ebp, esp */
  EBP = (ESP);
  /* 11e88968 push ecx */
  push32((uint32_t)(ECX));
  /* 11e88969 cmp dword ptr [0x11e8fa8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88970 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88971 jne 0x11e88990 */
  if (!C.zf) goto L_11e88990;
  /* 11e88973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88976 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88979 jl 0x11e88a2e */
  if ((C.sf!=C.of)) goto L_11e88a2e;
  /* 11e8897f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88982 jg 0x11e88a2e */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88a2e;
  /* 11e88988 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8898b jmp 0x11e88a2e */
  goto L_11e88a2e;
L_11e88990:;
  /* 11e88990 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88993 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88999 jge 0x11e889c3 */
  if ((C.sf==C.of)) goto L_11e889c3;
  /* 11e8899b cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e889a2 jle 0x11e889b0 */
  if ((C.zf||C.sf!=C.of)) goto L_11e889b0;
  /* 11e889a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e889a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e889a7 call 0x11e861fb */
  push32(0x11e889acu); f_11e861fb();
  /* 11e889ac pop ecx */
  ECX = (pop32());
  /* 11e889ad pop ecx */
  ECX = (pop32());
  /* 11e889ae jmp 0x11e889bb */
  goto L_11e889bb;
L_11e889b0:;
  /* 11e889b0 mov eax, dword ptr [0x11e8ecd0] */
  EAX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e889b5 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11e889b8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11e889bb:;
  /* 11e889bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e889bd jne 0x11e889c3 */
  if (!C.zf) goto L_11e889c3;
L_11e889bf:;
  /* 11e889bf mov eax, ebx */
  EAX = (EBX);
  /* 11e889c1 jmp 0x11e88a2e */
  goto L_11e88a2e;
L_11e889c3:;
  /* 11e889c3 mov edx, dword ptr [0x11e8ecd0] */
  EDX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e889c9 mov eax, ebx */
  EAX = (EBX);
  /* 11e889cb sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e889ce movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11e889d1 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11e889d6 je 0x11e889e6 */
  if (C.zf) goto L_11e889e6;
  /* 11e889d8 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11e889dc mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11e889df mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11e889e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e889e4 jmp 0x11e889ef */
  goto L_11e889ef;
L_11e889e6:;
  /* 11e889e6 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11e889ea mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11e889ed push 1 */
  push32((uint32_t)(0x1u));
L_11e889ef:;
  /* 11e889ef pop eax */
  EAX = (pop32());
  /* 11e889f0 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11e889f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e889f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e889f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e889f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e889fa push eax */
  push32((uint32_t)(EAX));
  /* 11e889fb lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e889fe push eax */
  push32((uint32_t)(EAX));
  /* 11e889ff push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11e88a04 push dword ptr [0x11e8fa8c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa8c))));
  /* 11e88a0a call 0x11e87dcd */
  push32(0x11e88a0fu); f_11e87dcd();
  /* 11e88a0f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88a14 je 0x11e889bf */
  if (C.zf) goto L_11e889bf;
  /* 11e88a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88a19 jne 0x11e88a21 */
  if (!C.zf) goto L_11e88a21;
  /* 11e88a1b movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e88a1f jmp 0x11e88a2e */
  goto L_11e88a2e;
L_11e88a21:;
  /* 11e88a21 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11e88a25 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e88a29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e88a2c or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11e88a2e:;
  /* 11e88a2e pop ebx */
  EBX = (pop32());
  /* 11e88a2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88a30 ret  */
  ESPCHK(0x11e88965u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11e88a74 (63 bytes, 24 insns) */
void f_11e88a74(void) {
  FTRACE(0x11e88a74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88a74 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88a75 mov ebp, esp */
  EBP = (ESP);
  /* 11e88a77 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88a7b jne 0x11e88a81 */
  if (!C.zf) goto L_11e88a81;
  /* 11e88a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88a7f pop ebp */
  EBP = (pop32());
  /* 11e88a80 ret  */
  ESPCHK(0x11e88a74u, _esp0);
  ESP += 4; return;
L_11e88a81:;
  /* 11e88a81 push dword ptr [0x11e8fb58] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fb58))));
  /* 11e88a87 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e88a8a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e88a8d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e88a90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e88a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88a95 push dword ptr [0x11e8fd84] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd84))));
  /* 11e88a9b call 0x11e88e46 */
  push32(0x11e88aa0u); f_11e88e46();
  /* 11e88aa0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88aa5 jne 0x11e88aae */
  if (!C.zf) goto L_11e88aae;
  /* 11e88aa7 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11e88aac pop ebp */
  EBP = (pop32());
  /* 11e88aad ret  */
  ESPCHK(0x11e88a74u, _esp0);
  ESP += 4; return;
L_11e88aae:;
  /* 11e88aae add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88ab1 pop ebp */
  EBP = (pop32());
  /* 11e88ab2 ret  */
  ESPCHK(0x11e88a74u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab3 @ 0x11e88ab3 (110 bytes, 58 insns) */
void f_11e88ab3(void) {
  FTRACE(0x11e88ab3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e88ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88ab5 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11e88ab7 mov esi, dword ptr [0x11e8f820] */
  ESI = (r32((uint32_t)(0x11e8f820)));
  /* 11e88abd push edi */
  push32((uint32_t)(EDI));
  /* 11e88abe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e88ac0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e88ac2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88ac4 je 0x11e88b14 */
  if (C.zf) goto L_11e88b14;
  /* 11e88ac6 mov ebx, dword ptr [0x11e8a0dc] */
  EBX = (r32((uint32_t)(0x11e8a0dc)));
L_11e88acc:;
  /* 11e88acc push edi */
  push32((uint32_t)(EDI));
  /* 11e88acd push edi */
  push32((uint32_t)(EDI));
  /* 11e88ace push edi */
  push32((uint32_t)(EDI));
  /* 11e88acf push edi */
  push32((uint32_t)(EDI));
  /* 11e88ad0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e88ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11e88ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11e88ad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88ad6 call ebx */
  call_ind((uint32_t)(EBX), 0x11e88ad8u);
  /* 11e88ad8 mov ebp, eax */
  EBP = (EAX);
  /* 11e88ada cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88adc je 0x11e88b1c */
  if (C.zf) goto L_11e88b1c;
  /* 11e88ade push ebp */
  push32((uint32_t)(EBP));
  /* 11e88adf call 0x11e85dee */
  push32(0x11e88ae4u); f_11e85dee();
  /* 11e88ae4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88ae6 pop ecx */
  ECX = (pop32());
  /* 11e88ae7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11e88aeb je 0x11e88b1c */
  if (C.zf) goto L_11e88b1c;
  /* 11e88aed push edi */
  push32((uint32_t)(EDI));
  /* 11e88aee push edi */
  push32((uint32_t)(EDI));
  /* 11e88aef push ebp */
  push32((uint32_t)(EBP));
  /* 11e88af0 push eax */
  push32((uint32_t)(EAX));
  /* 11e88af1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e88af3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e88af5 push edi */
  push32((uint32_t)(EDI));
  /* 11e88af6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88af8 call ebx */
  call_ind((uint32_t)(EBX), 0x11e88afau);
  /* 11e88afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88afc je 0x11e88b1c */
  if (C.zf) goto L_11e88b1c;
  /* 11e88afe push edi */
  push32((uint32_t)(EDI));
  /* 11e88aff push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11e88b03 call 0x11e890ee */
  push32(0x11e88b08u); f_11e890ee();
  /* 11e88b08 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e88b0b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88b0e pop ecx */
  ECX = (pop32());
  /* 11e88b0f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88b11 pop ecx */
  ECX = (pop32());
  /* 11e88b12 jne 0x11e88acc */
  if (!C.zf) goto L_11e88acc;
L_11e88b14:;
  /* 11e88b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e88b16:;
  /* 11e88b16 pop edi */
  EDI = (pop32());
  /* 11e88b17 pop esi */
  ESI = (pop32());
  /* 11e88b18 pop ebp */
  EBP = (pop32());
  /* 11e88b19 pop ebx */
  EBX = (pop32());
  /* 11e88b1a pop ecx */
  ECX = (pop32());
  /* 11e88b1b ret  */
  ESPCHK(0x11e88ab3u, _esp0);
  ESP += 4; return;
L_11e88b1c:;
  /* 11e88b1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e88b1f jmp 0x11e88b16 */
  goto L_11e88b16;
}

/* FUN_10008b30 @ 0x11e88b30 (62 bytes, 35 insns) */
void f_11e88b30(void) {
  FTRACE(0x11e88b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88b31 mov ebp, esp */
  EBP = (ESP);
  /* 11e88b33 push esi */
  push32((uint32_t)(ESI));
  /* 11e88b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88b36 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b37 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b38 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b39 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b3a push eax */
  push32((uint32_t)(EAX));
  /* 11e88b3b push eax */
  push32((uint32_t)(EAX));
  /* 11e88b3c push eax */
  push32((uint32_t)(EAX));
  /* 11e88b3d push eax */
  push32((uint32_t)(EAX));
  /* 11e88b3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88b41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e88b44:;
  /* 11e88b44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e88b46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e88b48 je 0x11e88b51 */
  if (C.zf) goto L_11e88b51;
  /* 11e88b4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e88b4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e88b4b");
  /* 11e88b4f jmp 0x11e88b44 */
  goto L_11e88b44;
L_11e88b51:;
  /* 11e88b51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88b54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e88b57 nop  */
  /* nop */
L_11e88b58:;
  /* 11e88b58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e88b59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e88b5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e88b5d je 0x11e88b66 */
  if (C.zf) goto L_11e88b66;
  /* 11e88b5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e88b60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e88b60");
  /* 11e88b64 jae 0x11e88b58 */
  if (!C.cf) goto L_11e88b58;
L_11e88b66:;
  /* 11e88b66 mov eax, ecx */
  EAX = (ECX);
  /* 11e88b68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88b6b pop esi */
  ESI = (pop32());
  /* 11e88b6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88b6d ret  */
  ESPCHK(0x11e88b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b70 @ 0x11e88b70 (58 bytes, 32 insns) */
void f_11e88b70(void) {
  FTRACE(0x11e88b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88b71 mov ebp, esp */
  EBP = (ESP);
  /* 11e88b73 push esi */
  push32((uint32_t)(ESI));
  /* 11e88b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88b76 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b77 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b78 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b79 push eax */
  push32((uint32_t)(EAX));
  /* 11e88b7a push eax */
  push32((uint32_t)(EAX));
  /* 11e88b7b push eax */
  push32((uint32_t)(EAX));
  /* 11e88b7c push eax */
  push32((uint32_t)(EAX));
  /* 11e88b7d push eax */
  push32((uint32_t)(EAX));
  /* 11e88b7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88b81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e88b84:;
  /* 11e88b84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e88b86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e88b88 je 0x11e88b91 */
  if (C.zf) goto L_11e88b91;
  /* 11e88b8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e88b8b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e88b8b");
  /* 11e88b8f jmp 0x11e88b84 */
  goto L_11e88b84;
L_11e88b91:;
  /* 11e88b91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11e88b94:;
  /* 11e88b94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e88b96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e88b98 je 0x11e88ba4 */
  if (C.zf) goto L_11e88ba4;
  /* 11e88b9a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e88b9b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e88b9b");
  /* 11e88b9f jae 0x11e88b94 */
  if (!C.cf) goto L_11e88b94;
  /* 11e88ba1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11e88ba4:;
  /* 11e88ba4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88ba7 pop esi */
  ESI = (pop32());
  /* 11e88ba8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88ba9 ret  */
  ESPCHK(0x11e88b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008baa @ 0x11e88baa (544 bytes, 177 insns) */
void f_11e88baa(void) {
  FTRACE(0x11e88baau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88baa push ebp */
  push32((uint32_t)(EBP));
  /* 11e88bab mov ebp, esp */
  EBP = (ESP);
  /* 11e88bad sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88bb1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88bb4 push esi */
  push32((uint32_t)(ESI));
  /* 11e88bb5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88bb8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11e88bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88bbe push edi */
  push32((uint32_t)(EDI));
  /* 11e88bbf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e88bc2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e88bc5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e88bc8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e88bcb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11e88bcf mov edi, ecx */
  EDI = (ECX);
  /* 11e88bd1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11e88bd6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11e88bd8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88bda and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e88bdc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11e88be2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88be6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11e88be9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e88bec jae 0x11e88daa */
  if (!C.cf) goto L_11e88daa;
  /* 11e88bf2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88bf7 jae 0x11e88daa */
  if (!C.cf) goto L_11e88daa;
  /* 11e88bfd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88c02 ja 0x11e88daa */
  if ((!C.cf&&!C.zf)) goto L_11e88daa;
  /* 11e88c08 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88c0d ja 0x11e88c13 */
  if ((!C.cf&&!C.zf)) goto L_11e88c13;
  /* 11e88c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88c11 jmp 0x11e88c4d */
  goto L_11e88c4d;
L_11e88c13:;
  /* 11e88c13 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11e88c16 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11e88c1b jne 0x11e88c35 */
  if (!C.zf) goto L_11e88c35;
  /* 11e88c1d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11e88c20 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11e88c23 jne 0x11e88c35 */
  if (!C.zf) goto L_11e88c35;
  /* 11e88c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e88c27 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88c2a jne 0x11e88c37 */
  if (!C.zf) goto L_11e88c37;
  /* 11e88c2c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88c2e jne 0x11e88c37 */
  if (!C.zf) goto L_11e88c37;
  /* 11e88c30 jmp 0x11e88da4 */
  goto L_11e88da4;
L_11e88c35:;
  /* 11e88c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e88c37:;
  /* 11e88c37 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88c3a jne 0x11e88c5a */
  if (!C.zf) goto L_11e88c5a;
  /* 11e88c3c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11e88c3f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11e88c42 jne 0x11e88c5a */
  if (!C.zf) goto L_11e88c5a;
  /* 11e88c44 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88c47 jne 0x11e88c5a */
  if (!C.zf) goto L_11e88c5a;
  /* 11e88c49 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88c4b jne 0x11e88c5a */
  if (!C.zf) goto L_11e88c5a;
L_11e88c4d:;
  /* 11e88c4d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11e88c50 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11e88c53 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e88c55 jmp 0x11e88dc5 */
  goto L_11e88dc5;
L_11e88c5a:;
  /* 11e88c5a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e88c5d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e88c60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e88c63 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11e88c6a:;
  /* 11e88c6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e88c6d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88c6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88c73 jle 0x11e88cbe */
  if ((C.zf||C.sf!=C.of)) goto L_11e88cbe;
  /* 11e88c75 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88c77 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11e88c7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e88c7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88c80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e88c83 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e88c86:;
  /* 11e88c86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e88c89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e88c8c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11e88c8f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11e88c92 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e88c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e88c98 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11e88c9c push eax */
  push32((uint32_t)(EAX));
  /* 11e88c9d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11e88c9f call 0x11e87ff1 */
  push32(0x11e88ca4u); f_11e87ff1();
  /* 11e88ca4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88ca9 je 0x11e88cb1 */
  if (C.zf) goto L_11e88cb1;
  /* 11e88cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e88cae inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11e88cb1:;
  /* 11e88cb1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88cb5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e88cb9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11e88cbc jne 0x11e88c86 */
  if (!C.zf) goto L_11e88c86;
L_11e88cbe:;
  /* 11e88cbe add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88cc2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11e88cc5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11e88cc8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88ccc jg 0x11e88c6a */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88c6a;
  /* 11e88cce add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88cd5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88cda jle 0x11e88d01 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88d01;
L_11e88cdc:;
  /* 11e88cdc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11e88ce0 jne 0x11e88cfa */
  if (!C.zf) goto L_11e88cfa;
  /* 11e88ce2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11e88ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11e88ce6 call 0x11e88070 */
  push32(0x11e88cebu); f_11e88070();
  /* 11e88ceb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88cf2 pop ecx */
  ECX = (pop32());
  /* 11e88cf3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88cf8 jg 0x11e88cdc */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88cdc;
L_11e88cfa:;
  /* 11e88cfa cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88cff jg 0x11e88d3a */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88d3a;
L_11e88d01:;
  /* 11e88d01 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88d08 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88d0d jge 0x11e88d3a */
  if ((C.sf==C.of)) goto L_11e88d3a;
  /* 11e88d0f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11e88d13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e88d15 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e88d18 mov ebx, eax */
  EBX = (EAX);
L_11e88d1a:;
  /* 11e88d1a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11e88d1e je 0x11e88d23 */
  if (C.zf) goto L_11e88d23;
  /* 11e88d20 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11e88d23:;
  /* 11e88d23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11e88d26 push eax */
  push32((uint32_t)(EAX));
  /* 11e88d27 call 0x11e8809e */
  push32(0x11e88d2cu); f_11e8809e();
  /* 11e88d2c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e88d2d pop ecx */
  ECX = (pop32());
  /* 11e88d2e jne 0x11e88d1a */
  if (!C.zf) goto L_11e88d1a;
  /* 11e88d30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88d34 je 0x11e88d3a */
  if (C.zf) goto L_11e88d3a;
  /* 11e88d36 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11e88d3a:;
  /* 11e88d3a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88d40 ja 0x11e88d51 */
  if ((!C.cf&&!C.zf)) goto L_11e88d51;
  /* 11e88d42 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e88d45 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e88d4a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88d4f jne 0x11e88d86 */
  if (!C.zf) goto L_11e88d86;
L_11e88d51:;
  /* 11e88d51 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88d55 jne 0x11e88d83 */
  if (!C.zf) goto L_11e88d83;
  /* 11e88d57 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11e88d5b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88d5f jne 0x11e88d7e */
  if (!C.zf) goto L_11e88d7e;
  /* 11e88d61 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11e88d65 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88d6b jne 0x11e88d78 */
  if (!C.zf) goto L_11e88d78;
  /* 11e88d6d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11e88d70 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11e88d76 jmp 0x11e88d86 */
  goto L_11e88d86;
L_11e88d78:;
  /* 11e88d78 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11e88d7c jmp 0x11e88d86 */
  goto L_11e88d86;
L_11e88d7e:;
  /* 11e88d7e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11e88d81 jmp 0x11e88d86 */
  goto L_11e88d86;
L_11e88d83:;
  /* 11e88d83 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11e88d86:;
  /* 11e88d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88d89 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88d8d jae 0x11e88daa */
  if (!C.cf) goto L_11e88daa;
  /* 11e88d8f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11e88d93 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11e88d95 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11e88d98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e88d9b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11e88d9e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e88da1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11e88da4:;
  /* 11e88da4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11e88da8 jmp 0x11e88dc5 */
  goto L_11e88dc5;
L_11e88daa:;
  /* 11e88daa neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11e88dad sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88daf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e88db3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11e88db9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88dbf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11e88dc2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11e88dc5:;
  /* 11e88dc5 pop edi */
  EDI = (pop32());
  /* 11e88dc6 pop esi */
  ESI = (pop32());
  /* 11e88dc7 pop ebx */
  EBX = (pop32());
  /* 11e88dc8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88dc9 ret  */
  ESPCHK(0x11e88baau, _esp0);
  ESP += 4; return;
}

/* FUN_10008dca @ 0x11e88dca (124 bytes, 52 insns) */
void f_11e88dca(void) {
  FTRACE(0x11e88dcau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88dca push ebp */
  push32((uint32_t)(EBP));
  /* 11e88dcb mov ebp, esp */
  EBP = (ESP);
  /* 11e88dcd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88dd1 mov ebx, 0x11e8f230 */
  EBX = (0x11e8f230u);
  /* 11e88dd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e88dd8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88ddb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88dde je 0x11e88e43 */
  if (C.zf) goto L_11e88e43;
  /* 11e88de0 jge 0x11e88df2 */
  if ((C.sf==C.of)) goto L_11e88df2;
  /* 11e88de2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88de5 mov ebx, 0x11e8f390 */
  EBX = (0x11e8f390u);
  /* 11e88dea neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e88dec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e88def sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11e88df2:;
  /* 11e88df2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88df5 jne 0x11e88dfd */
  if (!C.zf) goto L_11e88dfd;
  /* 11e88df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e88dfa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11e88dfd:;
  /* 11e88dfd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88e00 je 0x11e88e43 */
  if (C.zf) goto L_11e88e43;
  /* 11e88e02 push esi */
  push32((uint32_t)(ESI));
  /* 11e88e03 push edi */
  push32((uint32_t)(EDI));
L_11e88e04:;
  /* 11e88e04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e88e07 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88e0a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11e88e0e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11e88e11 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88e13 je 0x11e88e3c */
  if (C.zf) goto L_11e88e3c;
  /* 11e88e15 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11e88e18 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e88e1e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11e88e21 jb 0x11e88e2f */
  if (C.cf) goto L_11e88e2f;
  /* 11e88e23 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11e88e26 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e88e27 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e88e28 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e88e29 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11e88e2c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11e88e2f:;
  /* 11e88e2f push esi */
  push32((uint32_t)(ESI));
  /* 11e88e30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e88e33 call 0x11e88baa */
  push32(0x11e88e38u); f_11e88baa();
  /* 11e88e38 pop ecx */
  ECX = (pop32());
  /* 11e88e39 pop ecx */
  ECX = (pop32());
  /* 11e88e3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11e88e3c:;
  /* 11e88e3c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88e3f jne 0x11e88e04 */
  if (!C.zf) goto L_11e88e04;
  /* 11e88e41 pop edi */
  EDI = (pop32());
  /* 11e88e42 pop esi */
  ESI = (pop32());
L_11e88e43:;
  /* 11e88e43 pop ebx */
  EBX = (pop32());
  /* 11e88e44 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e88e45 ret  */
  ESPCHK(0x11e88dcau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e46 @ 0x11e88e46 (597 bytes, 239 insns) */
void f_11e88e46(void) {
  FTRACE(0x11e88e46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e88e46 push ebp */
  push32((uint32_t)(EBP));
  /* 11e88e47 mov ebp, esp */
  EBP = (ESP);
  /* 11e88e49 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e88e4b push 0x11e8a698 */
  push32((uint32_t)(0x11e8a698u));
  /* 11e88e50 push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e88e55 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e88e5b push eax */
  push32((uint32_t)(EAX));
  /* 11e88e5c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e88e63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e88e66 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88e67 push esi */
  push32((uint32_t)(ESI));
  /* 11e88e68 push edi */
  push32((uint32_t)(EDI));
  /* 11e88e69 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e88e6c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e88e6e cmp dword ptr [0x11e8fb34], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb34))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88e76 pop edi */
  EDI = (pop32());
  /* 11e88e77 jne 0x11e88eb9 */
  if (!C.zf) goto L_11e88eb9;
  /* 11e88e79 push edi */
  push32((uint32_t)(EDI));
  /* 11e88e7a mov eax, 0x11e8a648 */
  EAX = (0x11e8a648u);
  /* 11e88e7f push eax */
  push32((uint32_t)(EAX));
  /* 11e88e80 push edi */
  push32((uint32_t)(EDI));
  /* 11e88e81 push eax */
  push32((uint32_t)(EAX));
  /* 11e88e82 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88e83 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88e84 call dword ptr [0x11e8a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a00c))), 0x11e88e8au);
  /* 11e88e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88e8c je 0x11e88e96 */
  if (C.zf) goto L_11e88e96;
  /* 11e88e8e mov dword ptr [0x11e8fb34], edi */
  w32((uint32_t)(0x11e8fb34), (EDI));
  /* 11e88e94 jmp 0x11e88eb9 */
  goto L_11e88eb9;
L_11e88e96:;
  /* 11e88e96 push edi */
  push32((uint32_t)(EDI));
  /* 11e88e97 mov eax, 0x11e8a644 */
  EAX = (0x11e8a644u);
  /* 11e88e9c push eax */
  push32((uint32_t)(EAX));
  /* 11e88e9d push edi */
  push32((uint32_t)(EDI));
  /* 11e88e9e push eax */
  push32((uint32_t)(EAX));
  /* 11e88e9f push ebx */
  push32((uint32_t)(EBX));
  /* 11e88ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88ea1 call dword ptr [0x11e8a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a010))), 0x11e88ea7u);
  /* 11e88ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88ea9 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e88eaf mov dword ptr [0x11e8fb34], 2 */
  w32((uint32_t)(0x11e8fb34), (0x2u));
L_11e88eb9:;
  /* 11e88eb9 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e88ebc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88ebe jle 0x11e88ed0 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88ed0;
  /* 11e88ec0 push esi */
  push32((uint32_t)(ESI));
  /* 11e88ec1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e88ec4 call 0x11e890c3 */
  push32(0x11e88ec9u); f_11e890c3();
  /* 11e88ec9 pop ecx */
  ECX = (pop32());
  /* 11e88eca pop ecx */
  ECX = (pop32());
  /* 11e88ecb mov esi, eax */
  ESI = (EAX);
  /* 11e88ecd mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11e88ed0:;
  /* 11e88ed0 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88ed3 jle 0x11e88ee5 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88ee5;
  /* 11e88ed5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e88ed8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e88edb call 0x11e890c3 */
  push32(0x11e88ee0u); f_11e890c3();
  /* 11e88ee0 pop ecx */
  ECX = (pop32());
  /* 11e88ee1 pop ecx */
  ECX = (pop32());
  /* 11e88ee2 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11e88ee5:;
  /* 11e88ee5 mov eax, dword ptr [0x11e8fb34] */
  EAX = (r32((uint32_t)(0x11e8fb34)));
  /* 11e88eea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88eed jne 0x11e88f0a */
  if (!C.zf) goto L_11e88f0a;
  /* 11e88eef push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e88ef2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e88ef5 push esi */
  push32((uint32_t)(ESI));
  /* 11e88ef6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e88ef9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e88efc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e88eff call dword ptr [0x11e8a010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a010))), 0x11e88f05u);
  /* 11e88f05 jmp 0x11e890b1 */
  goto L_11e890b1;
L_11e88f0a:;
  /* 11e88f0a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f0c jne 0x11e890af */
  if (!C.zf) goto L_11e890af;
  /* 11e88f12 cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f15 jne 0x11e88f1f */
  if (!C.zf) goto L_11e88f1f;
  /* 11e88f17 mov eax, dword ptr [0x11e8fa9c] */
  EAX = (r32((uint32_t)(0x11e8fa9c)));
  /* 11e88f1c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11e88f1f:;
  /* 11e88f1f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f21 je 0x11e88f2c */
  if (C.zf) goto L_11e88f2c;
  /* 11e88f23 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f26 jne 0x11e88fc4 */
  if (!C.zf) goto L_11e88fc4;
L_11e88f2c:;
  /* 11e88f2c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f2f jne 0x11e88f39 */
  if (!C.zf) goto L_11e88f39;
L_11e88f31:;
  /* 11e88f31 push 2 */
  push32((uint32_t)(0x2u));
L_11e88f33:;
  /* 11e88f33 pop eax */
  EAX = (pop32());
  /* 11e88f34 jmp 0x11e890b1 */
  goto L_11e890b1;
L_11e88f39:;
  /* 11e88f39 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f3c jle 0x11e88f45 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88f45;
L_11e88f3e:;
  /* 11e88f3e mov eax, edi */
  EAX = (EDI);
  /* 11e88f40 jmp 0x11e890b1 */
  goto L_11e890b1;
L_11e88f45:;
  /* 11e88f45 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f47 jg 0x11e88f8a */
  if ((!C.zf&&C.sf==C.of)) goto L_11e88f8a;
  /* 11e88f49 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11e88f4c push eax */
  push32((uint32_t)(EAX));
  /* 11e88f4d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e88f50 call dword ptr [0x11e8a038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a038))), 0x11e88f56u);
  /* 11e88f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e88f58 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e88f5e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f60 jle 0x11e88f8e */
  if ((C.zf||C.sf!=C.of)) goto L_11e88f8e;
  /* 11e88f62 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f66 jb 0x11e88f8a */
  if (C.cf) goto L_11e88f8a;
  /* 11e88f68 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11e88f6b cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f6e je 0x11e88f8a */
  if (C.zf) goto L_11e88f8a;
L_11e88f70:;
  /* 11e88f70 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e88f73 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f75 je 0x11e88f8a */
  if (C.zf) goto L_11e88f8a;
  /* 11e88f77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e88f7a mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11e88f7c cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f7e jb 0x11e88f84 */
  if (C.cf) goto L_11e88f84;
  /* 11e88f80 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f82 jbe 0x11e88f31 */
  if ((C.cf||C.zf)) goto L_11e88f31;
L_11e88f84:;
  /* 11e88f84 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e88f85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e88f86 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f88 jne 0x11e88f70 */
  if (!C.zf) goto L_11e88f70;
L_11e88f8a:;
  /* 11e88f8a push 3 */
  push32((uint32_t)(0x3u));
  /* 11e88f8c jmp 0x11e88f33 */
  goto L_11e88f33;
L_11e88f8e:;
  /* 11e88f8e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f91 jle 0x11e88fc4 */
  if ((C.zf||C.sf!=C.of)) goto L_11e88fc4;
  /* 11e88f93 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88f97 jb 0x11e88f3e */
  if (C.cf) goto L_11e88f3e;
  /* 11e88f99 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11e88f9c cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88f9f je 0x11e88f3e */
  if (C.zf) goto L_11e88f3e;
L_11e88fa1:;
  /* 11e88fa1 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e88fa4 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88fa6 je 0x11e88f3e */
  if (C.zf) goto L_11e88f3e;
  /* 11e88fa8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e88fab mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11e88fad cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88faf jb 0x11e88fb9 */
  if (C.cf) goto L_11e88fb9;
  /* 11e88fb1 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88fb3 jbe 0x11e88f31 */
  if ((C.cf||C.zf)) goto L_11e88f31;
L_11e88fb9:;
  /* 11e88fb9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e88fba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e88fbb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e88fbd jne 0x11e88fa1 */
  if (!C.zf) goto L_11e88fa1;
  /* 11e88fbf jmp 0x11e88f3e */
  goto L_11e88f3e;
L_11e88fc4:;
  /* 11e88fc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e88fc6 push esi */
  push32((uint32_t)(ESI));
  /* 11e88fc7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e88fca push 9 */
  push32((uint32_t)(0x9u));
  /* 11e88fcc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e88fcf call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e88fd5u);
  /* 11e88fd5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e88fd8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e88fda je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e88fe0 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11e88fe3 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88fe5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e88fe8 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e88fea call 0x11e878a0 */
  push32(0x11e88fefu); f_11e878a0();
  /* 11e88fef mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e88ff2 mov eax, esp */
  EAX = (ESP);
  /* 11e88ff4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e88ff7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e88ffb jmp 0x11e89013 */
  goto L_11e89013;
  /* 11e88ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e88fff pop eax */
  EAX = (pop32());
  /* 11e89000 ret  */
  ESPCHK(0x11e88e46u, _esp0);
  ESP += 4; return;
  /* 11e89001 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e89004 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e89006 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11e89009 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e8900d mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e89010 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e89012 pop edi */
  EDI = (pop32());
L_11e89013:;
  /* 11e89013 cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89016 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e8901c push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11e8901f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e89022 push esi */
  push32((uint32_t)(ESI));
  /* 11e89023 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e89026 push edi */
  push32((uint32_t)(EDI));
  /* 11e89027 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e8902a mov esi, dword ptr [0x11e8a024] */
  ESI = (r32((uint32_t)(0x11e8a024)));
  /* 11e89030 call esi */
  call_ind((uint32_t)(ESI), 0x11e89032u);
  /* 11e89032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89034 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e89036 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89037 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89038 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e8903b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e8903e push 9 */
  push32((uint32_t)(0x9u));
  /* 11e89040 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e89043 call esi */
  call_ind((uint32_t)(ESI), 0x11e89045u);
  /* 11e89045 mov esi, eax */
  ESI = (EAX);
  /* 11e89047 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11e8904a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8904c je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e8904e mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e89051 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11e89054 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89057 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e89059 call 0x11e878a0 */
  push32(0x11e8905eu); f_11e878a0();
  /* 11e8905e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e89061 mov edi, esp */
  EDI = (ESP);
  /* 11e89063 mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11e89066 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e8906a jmp 0x11e8907e */
  goto L_11e8907e;
  /* 11e8906c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8906e pop eax */
  EAX = (pop32());
  /* 11e8906f ret  */
  ESPCHK(0x11e88e46u, _esp0);
  ESP += 4; return;
  /* 11e89070 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e89073 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e89075 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e89077 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e8907b mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11e8907e:;
  /* 11e8907e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89080 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e89082 push esi */
  push32((uint32_t)(ESI));
  /* 11e89083 push edi */
  push32((uint32_t)(EDI));
  /* 11e89084 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11e89087 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e8908a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8908c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11e8908f call dword ptr [0x11e8a024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a024))), 0x11e89095u);
  /* 11e89095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89097 je 0x11e890af */
  if (C.zf) goto L_11e890af;
  /* 11e89099 push esi */
  push32((uint32_t)(ESI));
  /* 11e8909a push edi */
  push32((uint32_t)(EDI));
  /* 11e8909b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11e8909e push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e890a1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e890a4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e890a7 call dword ptr [0x11e8a00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a00c))), 0x11e890adu);
  /* 11e890ad jmp 0x11e890b1 */
  goto L_11e890b1;
L_11e890af:;
  /* 11e890af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e890b1:;
  /* 11e890b1 lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11e890b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e890b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e890be pop edi */
  EDI = (pop32());
  /* 11e890bf pop esi */
  ESI = (pop32());
  /* 11e890c0 pop ebx */
  EBX = (pop32());
  /* 11e890c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e890c2 ret  */
  ESPCHK(0x11e88e46u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c3 @ 0x11e890c3 (43 bytes, 20 insns) */
void f_11e890c3(void) {
  FTRACE(0x11e890c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e890c3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e890c7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e890cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e890cd push esi */
  push32((uint32_t)(ESI));
  /* 11e890ce lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11e890d1 je 0x11e890e0 */
  if (C.zf) goto L_11e890e0;
L_11e890d3:;
  /* 11e890d3 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e890d6 je 0x11e890e0 */
  if (C.zf) goto L_11e890e0;
  /* 11e890d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e890d9 mov esi, ecx */
  ESI = (ECX);
  /* 11e890db dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e890dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e890de jne 0x11e890d3 */
  if (!C.zf) goto L_11e890d3;
L_11e890e0:;
  /* 11e890e0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e890e3 pop esi */
  ESI = (pop32());
  /* 11e890e4 jne 0x11e890eb */
  if (!C.zf) goto L_11e890eb;
  /* 11e890e6 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e890ea ret  */
  ESPCHK(0x11e890c3u, _esp0);
  ESP += 4; return;
L_11e890eb:;
  /* 11e890eb mov eax, edx */
  EAX = (EDX);
  /* 11e890ed ret  */
  ESPCHK(0x11e890c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100090ee @ 0x11e890ee (391 bytes, 155 insns) */
void f_11e890ee(void) {
  FTRACE(0x11e890eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e890ee push ebp */
  push32((uint32_t)(EBP));
  /* 11e890ef mov ebp, esp */
  EBP = (ESP);
  /* 11e890f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e890f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e890f3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e890f4 push esi */
  push32((uint32_t)(ESI));
  /* 11e890f5 push edi */
  push32((uint32_t)(EDI));
  /* 11e890f6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e890f8 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e890fb je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e890fd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e890ff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e89102 call 0x11e89840 */
  push32(0x11e89107u); f_11e89840();
  /* 11e89107 mov esi, eax */
  ESI = (EAX);
  /* 11e89109 pop ecx */
  ECX = (pop32());
  /* 11e8910a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8910c pop ecx */
  ECX = (pop32());
  /* 11e8910d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11e89110 je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e89112 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89115 je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e89117 mov eax, dword ptr [0x11e8f818] */
  EAX = (r32((uint32_t)(0x11e8f818)));
  /* 11e8911c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e8911e cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89121 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11e89124 cmp eax, dword ptr [0x11e8f81c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8f81c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8912a jne 0x11e89138 */
  if (!C.zf) goto L_11e89138;
  /* 11e8912c push eax */
  push32((uint32_t)(EAX));
  /* 11e8912d call 0x11e892cd */
  push32(0x11e89132u); f_11e892cd();
  /* 11e89132 pop ecx */
  ECX = (pop32());
  /* 11e89133 mov dword ptr [0x11e8f818], eax */
  w32((uint32_t)(0x11e8f818), (EAX));
L_11e89138:;
  /* 11e89138 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8913a jne 0x11e89190 */
  if (!C.zf) goto L_11e89190;
  /* 11e8913c cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8913f je 0x11e8915a */
  if (C.zf) goto L_11e8915a;
  /* 11e89141 cmp dword ptr [0x11e8f820], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8f820))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89147 je 0x11e8915a */
  if (C.zf) goto L_11e8915a;
  /* 11e89149 call 0x11e88ab3 */
  push32(0x11e8914eu); f_11e88ab3();
  /* 11e8914e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89150 je 0x11e89190 */
  if (C.zf) goto L_11e89190;
L_11e89152:;
  /* 11e89152 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e89155:;
  /* 11e89155 pop edi */
  EDI = (pop32());
  /* 11e89156 pop esi */
  ESI = (pop32());
  /* 11e89157 pop ebx */
  EBX = (pop32());
  /* 11e89158 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e89159 ret  */
  ESPCHK(0x11e890eeu, _esp0);
  ESP += 4; return;
L_11e8915a:;
  /* 11e8915a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8915c jne 0x11e8926e */
  if (!C.zf) goto L_11e8926e;
  /* 11e89162 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e89164 call 0x11e85dee */
  push32(0x11e89169u); f_11e85dee();
  /* 11e89169 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8916b pop ecx */
  ECX = (pop32());
  /* 11e8916c mov dword ptr [0x11e8f818], eax */
  w32((uint32_t)(0x11e8f818), (EAX));
  /* 11e89171 je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e89173 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11e89175 cmp dword ptr [0x11e8f820], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8f820))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8917b jne 0x11e89190 */
  if (!C.zf) goto L_11e89190;
  /* 11e8917d push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8917f call 0x11e85dee */
  push32(0x11e89184u); f_11e85dee();
  /* 11e89184 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89186 pop ecx */
  ECX = (pop32());
  /* 11e89187 mov dword ptr [0x11e8f820], eax */
  w32((uint32_t)(0x11e8f820), (EAX));
  /* 11e8918c je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e8918e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11e89190:;
  /* 11e89190 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e89193 mov edi, dword ptr [0x11e8f818] */
  EDI = (r32((uint32_t)(0x11e8f818)));
  /* 11e89199 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e8919c push esi */
  push32((uint32_t)(ESI));
  /* 11e8919d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e891a0 call 0x11e89275 */
  push32(0x11e891a5u); f_11e89275();
  /* 11e891a5 mov esi, eax */
  ESI = (EAX);
  /* 11e891a7 pop ecx */
  ECX = (pop32());
  /* 11e891a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e891aa pop ecx */
  ECX = (pop32());
  /* 11e891ab jl 0x11e891f0 */
  if ((C.sf!=C.of)) goto L_11e891f0;
  /* 11e891ad cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e891b0 je 0x11e891f0 */
  if (C.zf) goto L_11e891f0;
  /* 11e891b2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e891b4 je 0x11e891e8 */
  if (C.zf) goto L_11e891e8;
  /* 11e891b6 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11e891b9 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11e891bc call 0x11e829ff */
  push32(0x11e891c1u); f_11e829ff();
  /* 11e891c1 pop ecx */
  ECX = (pop32());
L_11e891c2:;
  /* 11e891c2 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e891c5 je 0x11e891d2 */
  if (C.zf) goto L_11e891d2;
  /* 11e891c7 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e891ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e891cb mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11e891cd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e891d0 jmp 0x11e891c2 */
  goto L_11e891c2;
L_11e891d2:;
  /* 11e891d2 mov eax, esi */
  EAX = (ESI);
  /* 11e891d4 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e891d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e891d8 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11e891db call 0x11e89511 */
  push32(0x11e891e0u); f_11e89511();
  /* 11e891e0 pop ecx */
  ECX = (pop32());
  /* 11e891e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e891e3 pop ecx */
  ECX = (pop32());
  /* 11e891e4 je 0x11e89222 */
  if (C.zf) goto L_11e89222;
  /* 11e891e6 jmp 0x11e8921d */
  goto L_11e8921d;
L_11e891e8:;
  /* 11e891e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e891eb mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11e891ee jmp 0x11e89222 */
  goto L_11e89222;
L_11e891f0:;
  /* 11e891f0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e891f2 jne 0x11e8926e */
  if (!C.zf) goto L_11e8926e;
  /* 11e891f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e891f6 jge 0x11e891fa */
  if ((C.sf==C.of)) goto L_11e891fa;
  /* 11e891f8 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11e891fa:;
  /* 11e891fa lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11e89201 push eax */
  push32((uint32_t)(EAX));
  /* 11e89202 push edi */
  push32((uint32_t)(EDI));
  /* 11e89203 call 0x11e89511 */
  push32(0x11e89208u); f_11e89511();
  /* 11e89208 pop ecx */
  ECX = (pop32());
  /* 11e89209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8920b pop ecx */
  ECX = (pop32());
  /* 11e8920c je 0x11e89152 */
  if (C.zf) goto L_11e89152;
  /* 11e89212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e89215 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11e89218 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11e8921d:;
  /* 11e8921d mov dword ptr [0x11e8f818], eax */
  w32((uint32_t)(0x11e8f818), (EAX));
L_11e89222:;
  /* 11e89222 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89226 je 0x11e8926e */
  if (C.zf) goto L_11e8926e;
  /* 11e89228 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e8922b call 0x11e85f30 */
  push32(0x11e89230u); f_11e85f30();
  /* 11e89230 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e89231 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e89232 push eax */
  push32((uint32_t)(EAX));
  /* 11e89233 call 0x11e85dee */
  push32(0x11e89238u); f_11e85dee();
  /* 11e89238 mov esi, eax */
  ESI = (EAX);
  /* 11e8923a pop ecx */
  ECX = (pop32());
  /* 11e8923b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e8923d pop ecx */
  ECX = (pop32());
  /* 11e8923e je 0x11e8926e */
  if (C.zf) goto L_11e8926e;
  /* 11e89240 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e89243 push esi */
  push32((uint32_t)(ESI));
  /* 11e89244 call 0x11e86920 */
  push32(0x11e89249u); f_11e86920();
  /* 11e89249 mov eax, esi */
  EAX = (ESI);
  /* 11e8924b pop ecx */
  ECX = (pop32());
  /* 11e8924c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8924f pop ecx */
  ECX = (pop32());
  /* 11e89250 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89253 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11e89256 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e89257 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e89259 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8925b not ebx */
  EBX = (~(EBX));
  /* 11e8925d and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11e8925f push ebx */
  push32((uint32_t)(EBX));
  /* 11e89260 push esi */
  push32((uint32_t)(ESI));
  /* 11e89261 call dword ptr [0x11e8a008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a008))), 0x11e89267u);
  /* 11e89267 push esi */
  push32((uint32_t)(ESI));
  /* 11e89268 call 0x11e829ff */
  push32(0x11e8926du); f_11e829ff();
  /* 11e8926d pop ecx */
  ECX = (pop32());
L_11e8926e:;
  /* 11e8926e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e89270 jmp 0x11e89155 */
  goto L_11e89155;
}

/* FUN_10009275 @ 0x11e89275 (88 bytes, 35 insns) */
void f_11e89275(void) {
  FTRACE(0x11e89275u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89275 push esi */
  push32((uint32_t)(ESI));
  /* 11e89276 mov esi, dword ptr [0x11e8f818] */
  ESI = (r32((uint32_t)(0x11e8f818)));
  /* 11e8927c push edi */
  push32((uint32_t)(EDI));
  /* 11e8927d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e8927f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89281 je 0x11e892b0 */
  if (C.zf) goto L_11e892b0;
  /* 11e89283 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11e89287:;
  /* 11e89287 push edi */
  push32((uint32_t)(EDI));
  /* 11e89288 push eax */
  push32((uint32_t)(EAX));
  /* 11e89289 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11e8928d call 0x11e88a74 */
  push32(0x11e89292u); f_11e88a74();
  /* 11e89292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89297 jne 0x11e892a6 */
  if (!C.zf) goto L_11e892a6;
  /* 11e89299 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e8929b mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11e8929e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e892a0 je 0x11e892c0 */
  if (C.zf) goto L_11e892c0;
  /* 11e892a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e892a4 je 0x11e892c0 */
  if (C.zf) goto L_11e892c0;
L_11e892a6:;
  /* 11e892a6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e892a9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e892ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e892ae jne 0x11e89287 */
  if (!C.zf) goto L_11e89287;
L_11e892b0:;
  /* 11e892b0 mov eax, esi */
  EAX = (ESI);
  /* 11e892b2 sub eax, dword ptr [0x11e8f818] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8f818))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e892b8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e892bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e892bd:;
  /* 11e892bd pop edi */
  EDI = (pop32());
  /* 11e892be pop esi */
  ESI = (pop32());
  /* 11e892bf ret  */
  ESPCHK(0x11e89275u, _esp0);
  ESP += 4; return;
L_11e892c0:;
  /* 11e892c0 mov eax, esi */
  EAX = (ESI);
  /* 11e892c2 sub eax, dword ptr [0x11e8f818] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8f818))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e892c8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e892cb jmp 0x11e892bd */
  goto L_11e892bd;
}

/* FUN_100092cd @ 0x11e892cd (103 bytes, 49 insns) */
void f_11e892cd(void) {
  FTRACE(0x11e892cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e892cd push edi */
  push32((uint32_t)(EDI));
  /* 11e892ce mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e892d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e892d4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e892d6 jne 0x11e892dc */
  if (!C.zf) goto L_11e892dc;
  /* 11e892d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e892da pop edi */
  EDI = (pop32());
  /* 11e892db ret  */
  ESPCHK(0x11e892cdu, _esp0);
  ESP += 4; return;
L_11e892dc:;
  /* 11e892dc cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e892df lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11e892e2 je 0x11e892ee */
  if (C.zf) goto L_11e892ee;
L_11e892e4:;
  /* 11e892e4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11e892e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e892e7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e892ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e892ec jne 0x11e892e4 */
  if (!C.zf) goto L_11e892e4;
L_11e892ee:;
  /* 11e892ee push ebx */
  push32((uint32_t)(EBX));
  /* 11e892ef push ebp */
  push32((uint32_t)(EBP));
  /* 11e892f0 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11e892f7 push esi */
  push32((uint32_t)(ESI));
  /* 11e892f8 push eax */
  push32((uint32_t)(EAX));
  /* 11e892f9 call 0x11e85dee */
  push32(0x11e892feu); f_11e85dee();
  /* 11e892fe mov esi, eax */
  ESI = (EAX);
  /* 11e89300 pop ecx */
  ECX = (pop32());
  /* 11e89301 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e89303 mov ebp, esi */
  EBP = (ESI);
  /* 11e89305 jne 0x11e8930f */
  if (!C.zf) goto L_11e8930f;
  /* 11e89307 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e89309 call 0x11e8261e */
  push32(0x11e8930eu); f_11e8261e();
  /* 11e8930e pop ecx */
  ECX = (pop32());
L_11e8930f:;
  /* 11e8930f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e89311 mov ebx, edi */
  EBX = (EDI);
L_11e89313:;
  /* 11e89313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89315 je 0x11e8932a */
  if (C.zf) goto L_11e8932a;
  /* 11e89317 push eax */
  push32((uint32_t)(EAX));
  /* 11e89318 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8931b call 0x11e898d7 */
  push32(0x11e89320u); f_11e898d7();
  /* 11e89320 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e89322 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e89324 pop ecx */
  ECX = (pop32());
  /* 11e89325 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89328 jmp 0x11e89313 */
  goto L_11e89313;
L_11e8932a:;
  /* 11e8932a and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11e8932d mov eax, ebp */
  EAX = (EBP);
  /* 11e8932f pop esi */
  ESI = (pop32());
  /* 11e89330 pop ebp */
  EBP = (pop32());
  /* 11e89331 pop ebx */
  EBX = (pop32());
  /* 11e89332 pop edi */
  EDI = (pop32());
  /* 11e89333 ret  */
  ESPCHK(0x11e892cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x11e89340 (208 bytes, 85 insns) */
void f_11e89340(void) {
  FTRACE(0x11e89340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89340 push ebp */
  push32((uint32_t)(EBP));
  /* 11e89341 mov ebp, esp */
  EBP = (ESP);
  /* 11e89343 push edi */
  push32((uint32_t)(EDI));
  /* 11e89344 push esi */
  push32((uint32_t)(ESI));
  /* 11e89345 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89346 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e89349 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8934c lea eax, [0x11e8fa84] */
  EAX = ((uint32_t)(0x11e8fa84));
  /* 11e89352 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89356 jne 0x11e89393 */
  if (!C.zf) goto L_11e89393;
  /* 11e89358 mov al, 0xff */
  AL = (0xffu);
  /* 11e8935a mov edi, edi */
  EDI = (EDI);
L_11e8935c:;
  /* 11e8935c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e8935e je 0x11e8938e */
  if (C.zf) goto L_11e8938e;
  /* 11e89360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e89362 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e89363 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11e89365 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e89366 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89368 je 0x11e8935c */
  if (C.zf) goto L_11e8935c;
  /* 11e8936a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e8936c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8936e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e89370 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e89373 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e89375 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e89377 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11e89379 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e8937b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8937d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e8937f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e89382 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e89384 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e89386 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89388 je 0x11e8935c */
  if (C.zf) goto L_11e8935c;
  /* 11e8938a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e8938c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11e8938e:;
  /* 11e8938e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11e89391 jmp 0x11e8940b */
  goto L_11e8940b;
L_11e89393:;
  /* 11e89393 lock inc dword ptr [0x11e8fb54] */
  x86_unimpl("lock inc @ 0x11e89393");
  /* 11e8939a cmp dword ptr [0x11e8fb50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e893a1 jg 0x11e893a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e893a7;
  /* 11e893a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e893a5 jmp 0x11e893bc */
  goto L_11e893bc;
L_11e893a7:;
  /* 11e893a7 lock dec dword ptr [0x11e8fb54] */
  x86_unimpl("lock dec @ 0x11e893a7");
  /* 11e893ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e893b0 call 0x11e83f07 */
  push32(0x11e893b5u); f_11e83f07();
  /* 11e893b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11e893bc:;
  /* 11e893bc mov eax, 0xff */
  EAX = (0xffu);
  /* 11e893c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e893c3 nop  */
  /* nop */
L_11e893c4:;
  /* 11e893c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e893c6 je 0x11e893ef */
  if (C.zf) goto L_11e893ef;
  /* 11e893c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e893ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e893cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e893cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e893ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e893d0 je 0x11e893c4 */
  if (C.zf) goto L_11e893c4;
  /* 11e893d2 push eax */
  push32((uint32_t)(EAX));
  /* 11e893d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e893d4 call 0x11e862df */
  push32(0x11e893d9u); f_11e862df();
  /* 11e893d9 mov ebx, eax */
  EBX = (EAX);
  /* 11e893db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e893de call 0x11e862df */
  push32(0x11e893e3u); f_11e862df();
  /* 11e893e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e893e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e893e8 je 0x11e893c4 */
  if (C.zf) goto L_11e893c4;
  /* 11e893ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e893ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e893ef:;
  /* 11e893ef mov ebx, eax */
  EBX = (EAX);
  /* 11e893f1 pop eax */
  EAX = (pop32());
  /* 11e893f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e893f4 jne 0x11e893ff */
  if (!C.zf) goto L_11e893ff;
  /* 11e893f6 lock dec dword ptr [0x11e8fb54] */
  x86_unimpl("lock dec @ 0x11e893f6");
  /* 11e893fd jmp 0x11e89409 */
  goto L_11e89409;
L_11e893ff:;
  /* 11e893ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e89401 call 0x11e83f68 */
  push32(0x11e89406u); f_11e83f68();
  /* 11e89406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e89409:;
  /* 11e89409 mov eax, ebx */
  EAX = (EBX);
L_11e8940b:;
  /* 11e8940b pop ebx */
  EBX = (pop32());
  /* 11e8940c pop esi */
  ESI = (pop32());
  /* 11e8940d pop edi */
  EDI = (pop32());
  /* 11e8940e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8940f ret  */
  ESPCHK(0x11e89340u, _esp0);
  ESP += 4; return;
}

/* FUN_10009410 @ 0x11e89410 (257 bytes, 103 insns) */
void f_11e89410(void) {
  FTRACE(0x11e89410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89410 push ebp */
  push32((uint32_t)(EBP));
  /* 11e89411 mov ebp, esp */
  EBP = (ESP);
  /* 11e89413 push edi */
  push32((uint32_t)(EDI));
  /* 11e89414 push esi */
  push32((uint32_t)(ESI));
  /* 11e89415 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e89419 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e8941b je 0x11e8950a */
  if (C.zf) goto L_11e8950a;
  /* 11e89421 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e89424 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e89427 lea eax, [0x11e8fa84] */
  EAX = ((uint32_t)(0x11e8fa84));
  /* 11e8942d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89431 jne 0x11e89481 */
  if (!C.zf) goto L_11e89481;
  /* 11e89433 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11e89435 mov bl, 0x5a */
  BL = (0x5au);
  /* 11e89437 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11e89439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e8943c:;
  /* 11e8943c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11e8943e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e89440 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11e89442 je 0x11e89465 */
  if (C.zf) goto L_11e89465;
  /* 11e89444 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e89446 je 0x11e89465 */
  if (C.zf) goto L_11e89465;
  /* 11e89448 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e89449 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8944a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8944c jb 0x11e89454 */
  if (C.cf) goto L_11e89454;
  /* 11e8944e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89450 ja 0x11e89454 */
  if ((!C.cf&&!C.zf)) goto L_11e89454;
  /* 11e89452 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11e89454:;
  /* 11e89454 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89456 jb 0x11e8945e */
  if (C.cf) goto L_11e8945e;
  /* 11e89458 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8945a ja 0x11e8945e */
  if ((!C.cf&&!C.zf)) goto L_11e8945e;
  /* 11e8945c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11e8945e:;
  /* 11e8945e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89460 jne 0x11e8946f */
  if (!C.zf) goto L_11e8946f;
  /* 11e89462 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e89463 jne 0x11e8943c */
  if (!C.zf) goto L_11e8943c;
L_11e89465:;
  /* 11e89465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e89467 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e89469 je 0x11e8950a */
  if (C.zf) goto L_11e8950a;
L_11e8946f:;
  /* 11e8946f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e89474 jb 0x11e8950a */
  if (C.cf) goto L_11e8950a;
  /* 11e8947a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e8947c jmp 0x11e8950a */
  goto L_11e8950a;
L_11e89481:;
  /* 11e89481 lock inc dword ptr [0x11e8fb54] */
  x86_unimpl("lock inc @ 0x11e89481");
  /* 11e89488 cmp dword ptr [0x11e8fb50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8948f jg 0x11e89495 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e89495;
  /* 11e89491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e89493 jmp 0x11e894ae */
  goto L_11e894ae;
L_11e89495:;
  /* 11e89495 lock dec dword ptr [0x11e8fb54] */
  x86_unimpl("lock dec @ 0x11e89495");
  /* 11e8949c mov ebx, ecx */
  EBX = (ECX);
  /* 11e8949e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e894a0 call 0x11e83f07 */
  push32(0x11e894a5u); f_11e83f07();
  /* 11e894a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11e894ac mov ecx, ebx */
  ECX = (EBX);
L_11e894ae:;
  /* 11e894ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e894b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e894b2 mov edi, edi */
  EDI = (EDI);
L_11e894b4:;
  /* 11e894b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e894b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e894b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e894ba je 0x11e894df */
  if (C.zf) goto L_11e894df;
  /* 11e894bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e894be je 0x11e894df */
  if (C.zf) goto L_11e894df;
  /* 11e894c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e894c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e894c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e894c3 push eax */
  push32((uint32_t)(EAX));
  /* 11e894c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e894c5 call 0x11e862df */
  push32(0x11e894cau); f_11e862df();
  /* 11e894ca mov ebx, eax */
  EBX = (EAX);
  /* 11e894cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e894cf call 0x11e862df */
  push32(0x11e894d4u); f_11e862df();
  /* 11e894d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e894d7 pop ecx */
  ECX = (pop32());
  /* 11e894d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e894da jne 0x11e894e5 */
  if (!C.zf) goto L_11e894e5;
  /* 11e894dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e894dd jne 0x11e894b4 */
  if (!C.zf) goto L_11e894b4;
L_11e894df:;
  /* 11e894df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e894e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e894e3 je 0x11e894ee */
  if (C.zf) goto L_11e894ee;
L_11e894e5:;
  /* 11e894e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e894ea jb 0x11e894ee */
  if (C.cf) goto L_11e894ee;
  /* 11e894ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11e894ee:;
  /* 11e894ee pop eax */
  EAX = (pop32());
  /* 11e894ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e894f1 jne 0x11e894fc */
  if (!C.zf) goto L_11e894fc;
  /* 11e894f3 lock dec dword ptr [0x11e8fb54] */
  x86_unimpl("lock dec @ 0x11e894f3");
  /* 11e894fa jmp 0x11e8950a */
  goto L_11e8950a;
L_11e894fc:;
  /* 11e894fc mov ebx, ecx */
  EBX = (ECX);
  /* 11e894fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e89500 call 0x11e83f68 */
  push32(0x11e89505u); f_11e83f68();
  /* 11e89505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89508 mov ecx, ebx */
  ECX = (EBX);
L_11e8950a:;
  /* 11e8950a mov eax, ecx */
  EAX = (ECX);
  /* 11e8950c pop ebx */
  EBX = (pop32());
  /* 11e8950d pop esi */
  ESI = (pop32());
  /* 11e8950e pop edi */
  EDI = (pop32());
  /* 11e8950f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e89510 ret  */
  ESPCHK(0x11e89410u, _esp0);
  ESP += 4; return;
}

/* FUN_10009511 @ 0x11e89511 (781 bytes, 277 insns) */
void f_11e89511(void) {
  FTRACE(0x11e89511u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89511 push ebp */
  push32((uint32_t)(EBP));
  /* 11e89512 mov ebp, esp */
  EBP = (ESP);
  /* 11e89514 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e89516 push 0x11e8a7d8 */
  push32((uint32_t)(0x11e8a7d8u));
  /* 11e8951b push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e89520 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e89526 push eax */
  push32((uint32_t)(EAX));
  /* 11e89527 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e8952e sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e89531 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89532 push esi */
  push32((uint32_t)(ESI));
  /* 11e89533 push edi */
  push32((uint32_t)(EDI));
  /* 11e89534 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e89537 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e89539 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8953b jne 0x11e8954b */
  if (!C.zf) goto L_11e8954b;
  /* 11e8953d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e89540 call 0x11e85dee */
  push32(0x11e89545u); f_11e85dee();
  /* 11e89545 pop ecx */
  ECX = (pop32());
  /* 11e89546 jmp 0x11e89831 */
  jmp_ind(0x11e89831u); return;
L_11e8954b:;
  /* 11e8954b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8954e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89550 jne 0x11e8955e */
  if (!C.zf) goto L_11e8955e;
  /* 11e89552 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89553 call 0x11e829ff */
  push32(0x11e89558u); f_11e829ff();
  /* 11e89558 pop ecx */
  ECX = (pop32());
  /* 11e89559 jmp 0x11e8982f */
  jmp_ind(0x11e8982fu); return;
L_11e8955e:;
  /* 11e8955e mov eax, dword ptr [0x11e8fda8] */
  EAX = (r32((uint32_t)(0x11e8fda8)));
  /* 11e89563 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89566 jne 0x11e896a5 */
  if (!C.zf) goto L_11e896a5;
L_11e8956c:;
  /* 11e8956c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11e8956f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89572 ja 0x11e89669 */
  if ((!C.cf&&!C.zf)) goto L_11e89669;
  /* 11e89578 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e8957a call 0x11e83f07 */
  push32(0x11e8957fu); f_11e83f07();
  /* 11e8957f pop ecx */
  ECX = (pop32());
  /* 11e89580 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e89583 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89584 call 0x11e84608 */
  push32(0x11e89589u); f_11e84608();
  /* 11e89589 pop ecx */
  ECX = (pop32());
  /* 11e8958a mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e8958d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8958f je 0x11e89639 */
  if (C.zf) goto L_11e89639;
  /* 11e89595 cmp esi, dword ptr [0x11e8fda0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8959b ja 0x11e895e9 */
  if ((!C.cf&&!C.zf)) goto L_11e895e9;
  /* 11e8959d push esi */
  push32((uint32_t)(ESI));
  /* 11e8959e push ebx */
  push32((uint32_t)(EBX));
  /* 11e8959f push eax */
  push32((uint32_t)(EAX));
  /* 11e895a0 call 0x11e84e11 */
  push32(0x11e895a5u); f_11e84e11();
  /* 11e895a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e895a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e895aa je 0x11e895b1 */
  if (C.zf) goto L_11e895b1;
  /* 11e895ac mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11e895af jmp 0x11e895e9 */
  goto L_11e895e9;
L_11e895b1:;
  /* 11e895b1 push esi */
  push32((uint32_t)(ESI));
  /* 11e895b2 call 0x11e8495c */
  push32(0x11e895b7u); f_11e8495c();
  /* 11e895b7 pop ecx */
  ECX = (pop32());
  /* 11e895b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e895bb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e895bd je 0x11e895e9 */
  if (C.zf) goto L_11e895e9;
  /* 11e895bf mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11e895c2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e895c3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e895c6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e895c8 jb 0x11e895cc */
  if (C.cf) goto L_11e895cc;
  /* 11e895ca mov eax, esi */
  EAX = (ESI);
L_11e895cc:;
  /* 11e895cc push eax */
  push32((uint32_t)(EAX));
  /* 11e895cd push ebx */
  push32((uint32_t)(EBX));
  /* 11e895ce push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e895d1 call 0x11e871b0 */
  push32(0x11e895d6u); f_11e871b0();
  /* 11e895d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e895d7 call 0x11e84608 */
  push32(0x11e895dcu); f_11e84608();
  /* 11e895dc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e895df push ebx */
  push32((uint32_t)(EBX));
  /* 11e895e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e895e1 call 0x11e84633 */
  push32(0x11e895e6u); f_11e84633();
  /* 11e895e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e895e9:;
  /* 11e895e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e895ec jne 0x11e89639 */
  if (!C.zf) goto L_11e89639;
  /* 11e895ee cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e895f0 jne 0x11e895f8 */
  if (!C.zf) goto L_11e895f8;
  /* 11e895f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e895f4 pop esi */
  ESI = (pop32());
  /* 11e895f5 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11e895f8:;
  /* 11e895f8 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e895fb and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e895fe mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11e89601 push esi */
  push32((uint32_t)(ESI));
  /* 11e89602 push edi */
  push32((uint32_t)(EDI));
  /* 11e89603 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e89609 call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e8960fu);
  /* 11e8960f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e89612 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89614 je 0x11e89639 */
  if (C.zf) goto L_11e89639;
  /* 11e89616 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11e89619 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e8961a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e8961d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8961f jb 0x11e89623 */
  if (C.cf) goto L_11e89623;
  /* 11e89621 mov eax, esi */
  EAX = (ESI);
L_11e89623:;
  /* 11e89623 push eax */
  push32((uint32_t)(EAX));
  /* 11e89624 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89625 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e89628 call 0x11e871b0 */
  push32(0x11e8962du); f_11e871b0();
  /* 11e8962d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8962e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11e89631 call 0x11e84633 */
  push32(0x11e89636u); f_11e84633();
  /* 11e89636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e89639:;
  /* 11e89639 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e8963d call 0x11e8969c */
  push32(0x11e89642u); f_11e8969c();
  /* 11e89642 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89645 jne 0x11e89669 */
  if (!C.zf) goto L_11e89669;
  /* 11e89647 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89649 jne 0x11e8964e */
  if (!C.zf) goto L_11e8964e;
  /* 11e8964b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8964d pop esi */
  ESI = (pop32());
L_11e8964e:;
  /* 11e8964e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89651 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e89654 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11e89657 push esi */
  push32((uint32_t)(ESI));
  /* 11e89658 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89659 push edi */
  push32((uint32_t)(EDI));
  /* 11e8965a push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e89660 call dword ptr [0x11e8a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a050))), 0x11e89666u);
  /* 11e89666 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e89669:;
  /* 11e89669 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e8966c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8966e jne 0x11e89831 */
  if (!C.zf) { jmp_ind(0x11e89831u); return; }
  /* 11e89674 cmp dword ptr [0x11e8fa80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8967a je 0x11e89831 */
  if (C.zf) { jmp_ind(0x11e89831u); return; }
  /* 11e89680 push esi */
  push32((uint32_t)(ESI));
  /* 11e89681 call 0x11e87a5e */
  push32(0x11e89686u); f_11e87a5e();
  /* 11e89686 pop ecx */
  ECX = (pop32());
  /* 11e89687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89689 jne 0x11e8956c */
  if (!C.zf) goto L_11e8956c;
  /* 11e8968f jmp 0x11e8982f */
  jmp_ind(0x11e8982fu); return;
  /* 11e89694 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e89697 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8969a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e8969c push 9 */
  push32((uint32_t)(0x9u));
  /* 11e8969e call 0x11e83f68 */
  push32(0x11e896a3u); f_11e83f68();
  /* 11e896a3 pop ecx */
  ECX = (pop32());
  /* 11e896a4 ret  */
  ESPCHK(0x11e89511u, _esp0);
  ESP += 4; return;
L_11e896a5:;
  /* 11e896a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e896a8 jne 0x11e897f5 */
  if (!C.zf) goto L_11e897f5;
  /* 11e896ae cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e896b1 ja 0x11e896c5 */
  if ((!C.cf&&!C.zf)) goto L_11e896c5;
  /* 11e896b3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e896b5 jbe 0x11e896bf */
  if ((C.cf||C.zf)) goto L_11e896bf;
  /* 11e896b7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e896ba and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e896bd jmp 0x11e896c2 */
  goto L_11e896c2;
L_11e896bf:;
  /* 11e896bf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e896c1 pop esi */
  ESI = (pop32());
L_11e896c2:;
  /* 11e896c2 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11e896c5:;
  /* 11e896c5 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11e896c8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e896cb ja 0x11e897c4 */
  if ((!C.cf&&!C.zf)) goto L_11e897c4;
  /* 11e896d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e896d3 call 0x11e83f07 */
  push32(0x11e896d8u); f_11e83f07();
  /* 11e896d8 pop ecx */
  ECX = (pop32());
  /* 11e896d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e896e0 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11e896e3 push eax */
  push32((uint32_t)(EAX));
  /* 11e896e4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e896e7 push eax */
  push32((uint32_t)(EAX));
  /* 11e896e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11e896e9 call 0x11e85363 */
  push32(0x11e896eeu); f_11e85363();
  /* 11e896ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e896f1 mov edi, eax */
  EDI = (EAX);
  /* 11e896f3 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11e896f6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e896f8 je 0x11e897a8 */
  if (C.zf) goto L_11e897a8;
  /* 11e896fe cmp esi, dword ptr [0x11e8eb54] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8eb54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89704 jae 0x11e89762 */
  if (!C.cf) goto L_11e89762;
  /* 11e89706 mov ebx, esi */
  EBX = (ESI);
  /* 11e89708 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11e8970b push ebx */
  push32((uint32_t)(EBX));
  /* 11e8970c push edi */
  push32((uint32_t)(EDI));
  /* 11e8970d push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11e89710 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11e89713 call 0x11e8572b */
  push32(0x11e89718u); f_11e8572b();
  /* 11e89718 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8971b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8971d je 0x11e89727 */
  if (C.zf) goto L_11e89727;
  /* 11e8971f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e89722 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e89725 jmp 0x11e8975f */
  goto L_11e8975f;
L_11e89727:;
  /* 11e89727 push ebx */
  push32((uint32_t)(EBX));
  /* 11e89728 call 0x11e853ff */
  push32(0x11e8972du); f_11e853ff();
  /* 11e8972d pop ecx */
  ECX = (pop32());
  /* 11e8972e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e89731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e89733 je 0x11e8975f */
  if (C.zf) goto L_11e8975f;
  /* 11e89735 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e89738 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e8973b mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11e8973e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89740 jb 0x11e89744 */
  if (C.cf) goto L_11e89744;
  /* 11e89742 mov eax, esi */
  EAX = (ESI);
L_11e89744:;
  /* 11e89744 push eax */
  push32((uint32_t)(EAX));
  /* 11e89745 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e89748 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e8974b call 0x11e871b0 */
  push32(0x11e89750u); f_11e871b0();
  /* 11e89750 push edi */
  push32((uint32_t)(EDI));
  /* 11e89751 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11e89754 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11e89757 call 0x11e853ba */
  push32(0x11e8975cu); f_11e853ba();
  /* 11e8975c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e8975f:;
  /* 11e8975f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e89762:;
  /* 11e89762 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89766 jne 0x11e897bb */
  if (!C.zf) goto L_11e897bb;
  /* 11e89768 push esi */
  push32((uint32_t)(ESI));
  /* 11e89769 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8976b push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e89771 call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e89777u);
  /* 11e89777 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e8977a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8977c je 0x11e897bb */
  if (C.zf) goto L_11e897bb;
  /* 11e8977e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11e89781 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e89784 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11e89787 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89789 jb 0x11e8978d */
  if (C.cf) goto L_11e8978d;
  /* 11e8978b mov eax, esi */
  EAX = (ESI);
L_11e8978d:;
  /* 11e8978d push eax */
  push32((uint32_t)(EAX));
  /* 11e8978e push ebx */
  push32((uint32_t)(EBX));
  /* 11e8978f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11e89792 call 0x11e871b0 */
  push32(0x11e89797u); f_11e871b0();
  /* 11e89797 push edi */
  push32((uint32_t)(EDI));
  /* 11e89798 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11e8979b push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11e8979e call 0x11e853ba */
  push32(0x11e897a3u); f_11e853ba();
  /* 11e897a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e897a6 jmp 0x11e897bb */
  goto L_11e897bb;
L_11e897a8:;
  /* 11e897a8 push esi */
  push32((uint32_t)(ESI));
  /* 11e897a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11e897aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11e897ac push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e897b2 call dword ptr [0x11e8a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a050))), 0x11e897b8u);
  /* 11e897b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e897bb:;
  /* 11e897bb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e897bf call 0x11e897ea */
  push32(0x11e897c4u); f_11e897ea();
L_11e897c4:;
  /* 11e897c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e897c7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e897c9 jne 0x11e89831 */
  if (!C.zf) { jmp_ind(0x11e89831u); return; }
  /* 11e897cb cmp dword ptr [0x11e8fa80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e897d1 je 0x11e89831 */
  if (C.zf) { jmp_ind(0x11e89831u); return; }
  /* 11e897d3 push esi */
  push32((uint32_t)(ESI));
  /* 11e897d4 call 0x11e87a5e */
  push32(0x11e897d9u); f_11e87a5e();
  /* 11e897d9 pop ecx */
  ECX = (pop32());
  /* 11e897da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e897dc jne 0x11e896c5 */
  if (!C.zf) goto L_11e896c5;
  /* 11e897e2 jmp 0x11e8982f */
  jmp_ind(0x11e8982fu); return;
  /* 11e897e4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e897e7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e897ea push 9 */
  push32((uint32_t)(0x9u));
  /* 11e897ec call 0x11e83f68 */
  push32(0x11e897f1u); f_11e83f68();
  /* 11e897f1 pop ecx */
  ECX = (pop32());
  /* 11e897f2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e897f4 ret  */
  ESPCHK(0x11e89511u, _esp0);
  ESP += 4; return;
L_11e897f5:;
  /* 11e897f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e897f7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e897fa ja 0x11e89818 */
  if ((!C.cf&&!C.zf)) goto L_11e89818;
  /* 11e897fc cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e897fe jne 0x11e89803 */
  if (!C.zf) goto L_11e89803;
  /* 11e89800 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e89802 pop esi */
  ESI = (pop32());
L_11e89803:;
  /* 11e89803 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e89806 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e89809 push esi */
  push32((uint32_t)(ESI));
  /* 11e8980a push ebx */
  push32((uint32_t)(EBX));
  /* 11e8980b push edi */
  push32((uint32_t)(EDI));
  /* 11e8980c push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e89812 call dword ptr [0x11e8a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a050))), 0x11e89818u);
L_11e89818:;
  /* 11e89818 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8981a jne 0x11e89831 */
  if (!C.zf) { jmp_ind(0x11e89831u); return; }
}

/* FUN_1000969c @ 0x11e8969c (9 bytes, 4 insns) */
void f_11e8969c(void) {
  FTRACE(0x11e8969cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8969c push 9 */
  push32((uint32_t)(0x9u));
  /* 11e8969e call 0x11e83f68 */
  push32(0x11e896a3u); f_11e83f68();
  /* 11e896a3 pop ecx */
  ECX = (pop32());
  /* 11e896a4 ret  */
  ESPCHK(0x11e8969cu, _esp0);
  ESP += 4; return;
}

/* FUN_100097ea @ 0x11e897ea (11 bytes, 5 insns) */
void f_11e897ea(void) {
  FTRACE(0x11e897eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e897ea push 9 */
  push32((uint32_t)(0x9u));
  /* 11e897ec call 0x11e83f68 */
  push32(0x11e897f1u); f_11e83f68();
  /* 11e897f1 pop ecx */
  ECX = (pop32());
  /* 11e897f2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e897f4 ret  */
  ESPCHK(0x11e897eau, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x11e89840 (151 bytes, 62 insns) */
void f_11e89840(void) {
  FTRACE(0x11e89840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89840 push ebp */
  push32((uint32_t)(EBP));
  /* 11e89841 mov ebp, esp */
  EBP = (ESP);
  /* 11e89843 cmp dword ptr [0x11e8fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8984a push ebx */
  push32((uint32_t)(EBX));
  /* 11e8984b push esi */
  push32((uint32_t)(ESI));
  /* 11e8984c jne 0x11e8985d */
  if (!C.zf) goto L_11e8985d;
  /* 11e8984e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e89851 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e89854 call 0x11e87720 */
  push32(0x11e89859u); f_11e87720();
  /* 11e89859 pop ecx */
  ECX = (pop32());
  /* 11e8985a pop ecx */
  ECX = (pop32());
  /* 11e8985b jmp 0x11e898d3 */
  goto L_11e898d3;
L_11e8985d:;
  /* 11e8985d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e8985f call 0x11e83f07 */
  push32(0x11e89864u); f_11e83f07();
  /* 11e89864 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e89867 pop ecx */
  ECX = (pop32());
L_11e89868:;
  /* 11e89868 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11e8986c test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11e8986f je 0x11e898bb */
  if (C.zf) goto L_11e898bb;
  /* 11e89871 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11e89874 test byte ptr [eax + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11e8fc81)))&(0x4u); fl_logic(_r,8); }
  /* 11e8987b je 0x11e89897 */
  if (C.zf) goto L_11e89897;
  /* 11e8987d mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e89880 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e89881 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e89883 je 0x11e898a2 */
  if (C.zf) goto L_11e898a2;
  /* 11e89885 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11e89888 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11e8988b shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e8988e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e89890 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e89893 je 0x11e898ae */
  if (C.zf) goto L_11e898ae;
  /* 11e89895 jmp 0x11e8989f */
  goto L_11e8989f;
L_11e89897:;
  /* 11e89897 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11e8989a cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8989d je 0x11e898bb */
  if (C.zf) goto L_11e898bb;
L_11e8989f:;
  /* 11e8989f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e898a0 jmp 0x11e89868 */
  goto L_11e89868;
L_11e898a2:;
  /* 11e898a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e898a4 call 0x11e83f68 */
  push32(0x11e898a9u); f_11e83f68();
  /* 11e898a9 pop ecx */
  ECX = (pop32());
  /* 11e898aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e898ac jmp 0x11e898d3 */
  goto L_11e898d3;
L_11e898ae:;
  /* 11e898ae push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e898b0 call 0x11e83f68 */
  push32(0x11e898b5u); f_11e83f68();
  /* 11e898b5 pop ecx */
  ECX = (pop32());
  /* 11e898b6 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11e898b9 jmp 0x11e898d3 */
  goto L_11e898d3;
L_11e898bb:;
  /* 11e898bb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e898bd call 0x11e83f68 */
  push32(0x11e898c2u); f_11e83f68();
  /* 11e898c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e898c5 pop ecx */
  ECX = (pop32());
  /* 11e898c6 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11e898c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e898cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e898cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e898cf not eax */
  EAX = (~(EAX));
  /* 11e898d1 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11e898d3:;
  /* 11e898d3 pop esi */
  ESI = (pop32());
  /* 11e898d4 pop ebx */
  EBX = (pop32());
  /* 11e898d5 pop ebp */
  EBP = (pop32());
  /* 11e898d6 ret  */
  ESPCHK(0x11e89840u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d7 @ 0x11e898d7 (43 bytes, 23 insns) */
void f_11e898d7(void) {
  FTRACE(0x11e898d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e898d7 push esi */
  push32((uint32_t)(ESI));
  /* 11e898d8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e898dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e898de je 0x11e898fe */
  if (C.zf) goto L_11e898fe;
  /* 11e898e0 push esi */
  push32((uint32_t)(ESI));
  /* 11e898e1 call 0x11e85f30 */
  push32(0x11e898e6u); f_11e85f30();
  /* 11e898e6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e898e7 push eax */
  push32((uint32_t)(EAX));
  /* 11e898e8 call 0x11e85dee */
  push32(0x11e898edu); f_11e85dee();
  /* 11e898ed pop ecx */
  ECX = (pop32());
  /* 11e898ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e898f0 pop ecx */
  ECX = (pop32());
  /* 11e898f1 je 0x11e898fe */
  if (C.zf) goto L_11e898fe;
  /* 11e898f3 push esi */
  push32((uint32_t)(ESI));
  /* 11e898f4 push eax */
  push32((uint32_t)(EAX));
  /* 11e898f5 call 0x11e86920 */
  push32(0x11e898fau); f_11e86920();
  /* 11e898fa pop ecx */
  ECX = (pop32());
  /* 11e898fb pop ecx */
  ECX = (pop32());
  /* 11e898fc pop esi */
  ESI = (pop32());
  /* 11e898fd ret  */
  ESPCHK(0x11e898d7u, _esp0);
  ESP += 4; return;
L_11e898fe:;
  /* 11e898fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e89900 pop esi */
  ESI = (pop32());
  /* 11e89901 ret  */
  ESPCHK(0x11e898d7u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11e89902 (6 bytes, 1 insns) */
void f_11e89902(void) {
  FTRACE(0x11e89902u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e89902 jmp dword ptr [0x11e8a04c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e8a04c)))); return;
}

