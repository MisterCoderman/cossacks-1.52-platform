#include "recomp.h"

/* FUN_1000502c @ 0x11c6502c (9 bytes, 4 insns) */
void f_11c6502c(void) {
  FTRACE(0x11c6502cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6502c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6502e call 0x11c66ae7 */
  push32(0x11c65033u); f_11c66ae7();
  /* 11c65033 pop ecx */
  ECX = (pop32());
  /* 11c65034 ret  */
  ESPCHK(0x11c6502cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000508b @ 0x11c6508b (9 bytes, 4 insns) */
void f_11c6508b(void) {
  FTRACE(0x11c6508bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6508b push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6508d call 0x11c66ae7 */
  push32(0x11c65092u); f_11c66ae7();
  /* 11c65092 pop ecx */
  ECX = (pop32());
  /* 11c65093 ret  */
  ESPCHK(0x11c6508bu, _esp0);
  ESP += 4; return;
}

/* FUN_100050c1 @ 0x11c650c1 (444 bytes, 150 insns) */
void f_11c650c1(void) {
  FTRACE(0x11c650c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c650c1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c650c2 mov ebp, esp */
  EBP = (ESP);
  /* 11c650c4 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c650c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c650c8 push esi */
  push32((uint32_t)(ESI));
  /* 11c650c9 push edi */
  push32((uint32_t)(EDI));
  /* 11c650ca push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c650cf call 0x11c64f87 */
  push32(0x11c650d4u); f_11c64f87();
  /* 11c650d4 mov esi, eax */
  ESI = (EAX);
  /* 11c650d6 pop ecx */
  ECX = (pop32());
  /* 11c650d7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c650d9 jne 0x11c650e3 */
  if (!C.zf) goto L_11c650e3;
  /* 11c650db push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c650dd call 0x11c6432c */
  push32(0x11c650e2u); f_11c6432c();
  /* 11c650e2 pop ecx */
  ECX = (pop32());
L_11c650e3:;
  /* 11c650e3 mov dword ptr [0x11c88e60], esi */
  w32((uint32_t)(0x11c88e60), (ESI));
  /* 11c650e9 mov dword ptr [0x11c88f60], 0x20 */
  w32((uint32_t)(0x11c88f60), (0x20u));
  /* 11c650f3 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11c650f9:;
  /* 11c650f9 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c650fb jae 0x11c6511b */
  if (!C.cf) goto L_11c6511b;
  /* 11c650fd and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c65101 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c65104 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c65108 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11c6510c mov eax, dword ptr [0x11c88e60] */
  EAX = (r32((uint32_t)(0x11c88e60)));
  /* 11c65111 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65114 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65119 jmp 0x11c650f9 */
  goto L_11c650f9;
L_11c6511b:;
  /* 11c6511b lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11c6511e push eax */
  push32((uint32_t)(EAX));
  /* 11c6511f call dword ptr [0x11c6e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0b0))), 0x11c65125u);
  /* 11c65125 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6512a je 0x11c65201 */
  if (C.zf) goto L_11c65201;
  /* 11c65130 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c65133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65135 je 0x11c65201 */
  if (C.zf) goto L_11c65201;
  /* 11c6513b mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11c6513d lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11c65140 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11c65143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c65146 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11c6514b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6514d jl 0x11c65151 */
  if ((C.sf!=C.of)) goto L_11c65151;
  /* 11c6514f mov edi, eax */
  EDI = (EAX);
L_11c65151:;
  /* 11c65151 cmp dword ptr [0x11c88f60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c88f60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65157 jge 0x11c651af */
  if ((C.sf==C.of)) goto L_11c651af;
  /* 11c65159 mov esi, 0x11c88e64 */
  ESI = (0x11c88e64u);
L_11c6515e:;
  /* 11c6515e push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c65163 call 0x11c64f87 */
  push32(0x11c65168u); f_11c64f87();
  /* 11c65168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6516a pop ecx */
  ECX = (pop32());
  /* 11c6516b je 0x11c651a9 */
  if (C.zf) goto L_11c651a9;
  /* 11c6516d add dword ptr [0x11c88f60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c88f60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11c88f60), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c65174 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c65176 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11c6517c:;
  /* 11c6517c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6517e jae 0x11c6519c */
  if (!C.cf) goto L_11c6519c;
  /* 11c65180 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c65184 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c65187 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c6518b mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11c6518f mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c65191 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65194 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6519a jmp 0x11c6517c */
  goto L_11c6517c;
L_11c6519c:;
  /* 11c6519c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6519f cmp dword ptr [0x11c88f60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c88f60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c651a5 jl 0x11c6515e */
  if ((C.sf!=C.of)) goto L_11c6515e;
  /* 11c651a7 jmp 0x11c651af */
  goto L_11c651af;
L_11c651a9:;
  /* 11c651a9 mov edi, dword ptr [0x11c88f60] */
  EDI = (r32((uint32_t)(0x11c88f60)));
L_11c651af:;
  /* 11c651af xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c651b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c651b3 jle 0x11c65201 */
  if ((C.zf||C.sf!=C.of)) goto L_11c65201;
L_11c651b5:;
  /* 11c651b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c651b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c651ba cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c651bd je 0x11c651f7 */
  if (C.zf) goto L_11c651f7;
  /* 11c651bf mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11c651c1 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c651c3 je 0x11c651f7 */
  if (C.zf) goto L_11c651f7;
  /* 11c651c5 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c651c7 jne 0x11c651d4 */
  if (!C.zf) goto L_11c651d4;
  /* 11c651c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c651ca call dword ptr [0x11c6e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0b4))), 0x11c651d0u);
  /* 11c651d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c651d2 je 0x11c651f7 */
  if (C.zf) goto L_11c651f7;
L_11c651d4:;
  /* 11c651d4 mov ecx, esi */
  ECX = (ESI);
  /* 11c651d6 mov eax, esi */
  EAX = (ESI);
  /* 11c651d8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c651db and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c651de mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c651e5 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c651e8 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c651eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c651ee mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c651f0 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c651f2 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11c651f4 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11c651f7:;
  /* 11c651f7 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c651fb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c651fc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c651fd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c651ff jl 0x11c651b5 */
  if ((C.sf!=C.of)) goto L_11c651b5;
L_11c65201:;
  /* 11c65201 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c65203:;
  /* 11c65203 mov ecx, dword ptr [0x11c88e60] */
  ECX = (r32((uint32_t)(0x11c88e60)));
  /* 11c65209 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11c6520c cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65210 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c65213 jne 0x11c65262 */
  if (!C.zf) goto L_11c65262;
  /* 11c65215 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c65217 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11c6521b jne 0x11c65222 */
  if (!C.zf) goto L_11c65222;
  /* 11c6521d push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11c6521f pop eax */
  EAX = (pop32());
  /* 11c65220 jmp 0x11c6522c */
  goto L_11c6522c;
L_11c65222:;
  /* 11c65222 mov eax, ebx */
  EAX = (EBX);
  /* 11c65224 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c65225 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c65227 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65229 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c6522c:;
  /* 11c6522c push eax */
  push32((uint32_t)(EAX));
  /* 11c6522d call dword ptr [0x11c6e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0b8))), 0x11c65233u);
  /* 11c65233 mov edi, eax */
  EDI = (EAX);
  /* 11c65235 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65238 je 0x11c65251 */
  if (C.zf) goto L_11c65251;
  /* 11c6523a push edi */
  push32((uint32_t)(EDI));
  /* 11c6523b call dword ptr [0x11c6e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0b4))), 0x11c65241u);
  /* 11c65241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65243 je 0x11c65251 */
  if (C.zf) goto L_11c65251;
  /* 11c65245 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6524a mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c6524c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6524f jne 0x11c65257 */
  if (!C.zf) goto L_11c65257;
L_11c65251:;
  /* 11c65251 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c65255 jmp 0x11c65266 */
  goto L_11c65266;
L_11c65257:;
  /* 11c65257 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6525a jne 0x11c65266 */
  if (!C.zf) goto L_11c65266;
  /* 11c6525c or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c65260 jmp 0x11c65266 */
  goto L_11c65266;
L_11c65262:;
  /* 11c65262 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11c65266:;
  /* 11c65266 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c65267 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6526a jl 0x11c65203 */
  if ((C.sf!=C.of)) goto L_11c65203;
  /* 11c6526c push dword ptr [0x11c88f60] */
  push32((uint32_t)(r32((uint32_t)(0x11c88f60))));
  /* 11c65272 call dword ptr [0x11c6e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0bc))), 0x11c65278u);
  /* 11c65278 pop edi */
  EDI = (pop32());
  /* 11c65279 pop esi */
  ESI = (pop32());
  /* 11c6527a pop ebx */
  EBX = (pop32());
  /* 11c6527b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6527c ret  */
  ESPCHK(0x11c650c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000527d @ 0x11c6527d (84 bytes, 33 insns) */
void f_11c6527d(void) {
  FTRACE(0x11c6527du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6527d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6527e push esi */
  push32((uint32_t)(ESI));
  /* 11c6527f push edi */
  push32((uint32_t)(EDI));
  /* 11c65280 mov esi, 0x11c88e60 */
  ESI = (0x11c88e60u);
L_11c65285:;
  /* 11c65285 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c65287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65289 je 0x11c652c2 */
  if (C.zf) goto L_11c652c2;
  /* 11c6528b mov edi, eax */
  EDI = (EAX);
  /* 11c6528d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65292 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65294 jae 0x11c652b7 */
  if (!C.cf) goto L_11c652b7;
  /* 11c65296 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11c65299:;
  /* 11c65299 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6529d je 0x11c652a6 */
  if (C.zf) goto L_11c652a6;
  /* 11c6529f push ebx */
  push32((uint32_t)(EBX));
  /* 11c652a0 call dword ptr [0x11c6e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0ac))), 0x11c652a6u);
L_11c652a6:;
  /* 11c652a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c652a8 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c652ab add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c652b0 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c652b3 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c652b5 jb 0x11c65299 */
  if (C.cf) goto L_11c65299;
L_11c652b7:;
  /* 11c652b7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c652b9 call 0x11c66afc */
  push32(0x11c652beu); f_11c66afc();
  /* 11c652be and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c652c1 pop ecx */
  ECX = (pop32());
L_11c652c2:;
  /* 11c652c2 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c652c5 cmp esi, 0x11c88f60 */
  { uint32_t _a=(ESI),_b=(0x11c88f60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c652cb jl 0x11c65285 */
  if ((C.sf!=C.of)) goto L_11c65285;
  /* 11c652cd pop edi */
  EDI = (pop32());
  /* 11c652ce pop esi */
  ESI = (pop32());
  /* 11c652cf pop ebx */
  EBX = (pop32());
  /* 11c652d0 ret  */
  ESPCHK(0x11c6527du, _esp0);
  ESP += 4; return;
}

/* FUN_100052d1 @ 0x11c652d1 (185 bytes, 71 insns) */
void f_11c652d1(void) {
  FTRACE(0x11c652d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c652d1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c652d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c652d4 cmp dword ptr [0x11c88f68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c88f68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c652da push esi */
  push32((uint32_t)(ESI));
  /* 11c652db push edi */
  push32((uint32_t)(EDI));
  /* 11c652dc jne 0x11c652e3 */
  if (!C.zf) goto L_11c652e3;
  /* 11c652de call 0x11c691cd */
  push32(0x11c652e3u); f_11c691cd();
L_11c652e3:;
  /* 11c652e3 mov esi, dword ptr [0x11c87834] */
  ESI = (r32((uint32_t)(0x11c87834)));
  /* 11c652e9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c652eb:;
  /* 11c652eb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c652ed cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c652ef je 0x11c65303 */
  if (C.zf) goto L_11c65303;
  /* 11c652f1 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c652f3 je 0x11c652f6 */
  if (C.zf) goto L_11c652f6;
  /* 11c652f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c652f6:;
  /* 11c652f6 push esi */
  push32((uint32_t)(ESI));
  /* 11c652f7 call 0x11c66830 */
  push32(0x11c652fcu); f_11c66830();
  /* 11c652fc pop ecx */
  ECX = (pop32());
  /* 11c652fd lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11c65301 jmp 0x11c652eb */
  goto L_11c652eb;
L_11c65303:;
  /* 11c65303 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11c6530a push eax */
  push32((uint32_t)(EAX));
  /* 11c6530b call 0x11c64f87 */
  push32(0x11c65310u); f_11c64f87();
  /* 11c65310 mov esi, eax */
  ESI = (EAX);
  /* 11c65312 pop ecx */
  ECX = (pop32());
  /* 11c65313 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65315 mov dword ptr [0x11c87864], esi */
  w32((uint32_t)(0x11c87864), (ESI));
  /* 11c6531b jne 0x11c65325 */
  if (!C.zf) goto L_11c65325;
  /* 11c6531d push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6531f call 0x11c6432c */
  push32(0x11c65324u); f_11c6432c();
  /* 11c65324 pop ecx */
  ECX = (pop32());
L_11c65325:;
  /* 11c65325 mov edi, dword ptr [0x11c87834] */
  EDI = (r32((uint32_t)(0x11c87834)));
  /* 11c6532b cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6532d je 0x11c65368 */
  if (C.zf) goto L_11c65368;
  /* 11c6532f push ebp */
  push32((uint32_t)(EBP));
L_11c65330:;
  /* 11c65330 push edi */
  push32((uint32_t)(EDI));
  /* 11c65331 call 0x11c66830 */
  push32(0x11c65336u); f_11c66830();
  /* 11c65336 mov ebp, eax */
  EBP = (EAX);
  /* 11c65338 pop ecx */
  ECX = (pop32());
  /* 11c65339 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c6533a cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6533d je 0x11c65361 */
  if (C.zf) goto L_11c65361;
  /* 11c6533f push ebp */
  push32((uint32_t)(EBP));
  /* 11c65340 call 0x11c64f87 */
  push32(0x11c65345u); f_11c64f87();
  /* 11c65345 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65347 pop ecx */
  ECX = (pop32());
  /* 11c65348 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6534a jne 0x11c65354 */
  if (!C.zf) goto L_11c65354;
  /* 11c6534c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6534e call 0x11c6432c */
  push32(0x11c65353u); f_11c6432c();
  /* 11c65353 pop ecx */
  ECX = (pop32());
L_11c65354:;
  /* 11c65354 push edi */
  push32((uint32_t)(EDI));
  /* 11c65355 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c65357 call 0x11c663a0 */
  push32(0x11c6535cu); f_11c663a0();
  /* 11c6535c pop ecx */
  ECX = (pop32());
  /* 11c6535d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65360 pop ecx */
  ECX = (pop32());
L_11c65361:;
  /* 11c65361 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65363 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65365 jne 0x11c65330 */
  if (!C.zf) goto L_11c65330;
  /* 11c65367 pop ebp */
  EBP = (pop32());
L_11c65368:;
  /* 11c65368 push dword ptr [0x11c87834] */
  push32((uint32_t)(r32((uint32_t)(0x11c87834))));
  /* 11c6536e call 0x11c66afc */
  push32(0x11c65373u); f_11c66afc();
  /* 11c65373 pop ecx */
  ECX = (pop32());
  /* 11c65374 mov dword ptr [0x11c87834], ebx */
  w32((uint32_t)(0x11c87834), (EBX));
  /* 11c6537a mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11c6537c pop edi */
  EDI = (pop32());
  /* 11c6537d pop esi */
  ESI = (pop32());
  /* 11c6537e mov dword ptr [0x11c88f64], 1 */
  w32((uint32_t)(0x11c88f64), (0x1u));
  /* 11c65388 pop ebx */
  EBX = (pop32());
  /* 11c65389 ret  */
  ESPCHK(0x11c652d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000538a @ 0x11c6538a (153 bytes, 62 insns) */
void f_11c6538a(void) {
  FTRACE(0x11c6538au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6538a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6538b mov ebp, esp */
  EBP = (ESP);
  /* 11c6538d push ecx */
  push32((uint32_t)(ECX));
  /* 11c6538e push ecx */
  push32((uint32_t)(ECX));
  /* 11c6538f push ebx */
  push32((uint32_t)(EBX));
  /* 11c65390 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c65392 cmp dword ptr [0x11c88f68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c88f68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65398 push esi */
  push32((uint32_t)(ESI));
  /* 11c65399 push edi */
  push32((uint32_t)(EDI));
  /* 11c6539a jne 0x11c653a1 */
  if (!C.zf) goto L_11c653a1;
  /* 11c6539c call 0x11c691cd */
  push32(0x11c653a1u); f_11c691cd();
L_11c653a1:;
  /* 11c653a1 mov esi, 0x11c87888 */
  ESI = (0x11c87888u);
  /* 11c653a6 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c653ab push esi */
  push32((uint32_t)(ESI));
  /* 11c653ac push ebx */
  push32((uint32_t)(EBX));
  /* 11c653ad call dword ptr [0x11c6e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0a8))), 0x11c653b3u);
  /* 11c653b3 mov eax, dword ptr [0x11c88f74] */
  EAX = (r32((uint32_t)(0x11c88f74)));
  /* 11c653b8 mov dword ptr [0x11c87874], esi */
  w32((uint32_t)(0x11c87874), (ESI));
  /* 11c653be mov edi, esi */
  EDI = (ESI);
  /* 11c653c0 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c653c2 je 0x11c653c6 */
  if (C.zf) goto L_11c653c6;
  /* 11c653c4 mov edi, eax */
  EDI = (EAX);
L_11c653c6:;
  /* 11c653c6 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c653c9 push eax */
  push32((uint32_t)(EAX));
  /* 11c653ca lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c653cd push eax */
  push32((uint32_t)(EAX));
  /* 11c653ce push ebx */
  push32((uint32_t)(EBX));
  /* 11c653cf push ebx */
  push32((uint32_t)(EBX));
  /* 11c653d0 push edi */
  push32((uint32_t)(EDI));
  /* 11c653d1 call 0x11c65423 */
  push32(0x11c653d6u); f_11c65423();
  /* 11c653d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c653d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c653dc lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c653df push eax */
  push32((uint32_t)(EAX));
  /* 11c653e0 call 0x11c64f87 */
  push32(0x11c653e5u); f_11c64f87();
  /* 11c653e5 mov esi, eax */
  ESI = (EAX);
  /* 11c653e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c653ea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c653ec jne 0x11c653f6 */
  if (!C.zf) goto L_11c653f6;
  /* 11c653ee push 8 */
  push32((uint32_t)(0x8u));
  /* 11c653f0 call 0x11c6432c */
  push32(0x11c653f5u); f_11c6432c();
  /* 11c653f5 pop ecx */
  ECX = (pop32());
L_11c653f6:;
  /* 11c653f6 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c653f9 push eax */
  push32((uint32_t)(EAX));
  /* 11c653fa lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c653fd push eax */
  push32((uint32_t)(EAX));
  /* 11c653fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c65401 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11c65404 push eax */
  push32((uint32_t)(EAX));
  /* 11c65405 push esi */
  push32((uint32_t)(ESI));
  /* 11c65406 push edi */
  push32((uint32_t)(EDI));
  /* 11c65407 call 0x11c65423 */
  push32(0x11c6540cu); f_11c65423();
  /* 11c6540c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6540f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65412 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c65413 mov dword ptr [0x11c8785c], esi */
  w32((uint32_t)(0x11c8785c), (ESI));
  /* 11c65419 pop edi */
  EDI = (pop32());
  /* 11c6541a pop esi */
  ESI = (pop32());
  /* 11c6541b mov dword ptr [0x11c87858], eax */
  w32((uint32_t)(0x11c87858), (EAX));
  /* 11c65420 pop ebx */
  EBX = (pop32());
  /* 11c65421 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65422 ret  */
  ESPCHK(0x11c6538au, _esp0);
  ESP += 4; return;
}

/* FUN_10005423 @ 0x11c65423 (436 bytes, 187 insns) */
void f_11c65423(void) {
  FTRACE(0x11c65423u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65423 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65424 mov ebp, esp */
  EBP = (ESP);
  /* 11c65426 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c65429 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6542c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6542d push esi */
  push32((uint32_t)(ESI));
  /* 11c6542e and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c65431 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c65434 push edi */
  push32((uint32_t)(EDI));
  /* 11c65435 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65438 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11c6543e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65441 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c65443 je 0x11c6544d */
  if (C.zf) goto L_11c6544d;
  /* 11c65445 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c65447 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6544a mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c6544d:;
  /* 11c6544d cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65450 jne 0x11c65496 */
  if (!C.zf) goto L_11c65496;
L_11c65452:;
  /* 11c65452 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c65455 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65456 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65459 je 0x11c65484 */
  if (C.zf) goto L_11c65484;
  /* 11c6545b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c6545d je 0x11c65484 */
  if (C.zf) goto L_11c65484;
  /* 11c6545f movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c65462 test byte ptr [edx + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c87d01)))&(0x4u); fl_logic(_r,8); }
  /* 11c65469 je 0x11c65477 */
  if (C.zf) goto L_11c65477;
  /* 11c6546b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c6546d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6546f je 0x11c65477 */
  if (C.zf) goto L_11c65477;
  /* 11c65471 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c65473 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c65475 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c65476 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c65477:;
  /* 11c65477 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c65479 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6547b je 0x11c65452 */
  if (C.zf) goto L_11c65452;
  /* 11c6547d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c6547f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c65481 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c65482 jmp 0x11c65452 */
  goto L_11c65452;
L_11c65484:;
  /* 11c65484 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c65486 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c65488 je 0x11c6548e */
  if (C.zf) goto L_11c6548e;
  /* 11c6548a and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c6548d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c6548e:;
  /* 11c6548e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65491 jne 0x11c654d9 */
  if (!C.zf) goto L_11c654d9;
  /* 11c65493 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65494 jmp 0x11c654d9 */
  goto L_11c654d9;
L_11c65496:;
  /* 11c65496 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c65498 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6549a je 0x11c654a1 */
  if (C.zf) goto L_11c654a1;
  /* 11c6549c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c6549e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c654a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c654a1:;
  /* 11c654a1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c654a3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c654a4 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c654a7 test byte ptr [ebx + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c87d01)))&(0x4u); fl_logic(_r,8); }
  /* 11c654ae je 0x11c654bc */
  if (C.zf) goto L_11c654bc;
  /* 11c654b0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c654b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c654b4 je 0x11c654bb */
  if (C.zf) goto L_11c654bb;
  /* 11c654b6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c654b8 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11c654ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c654bb:;
  /* 11c654bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c654bc:;
  /* 11c654bc cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654bf je 0x11c654ca */
  if (C.zf) goto L_11c654ca;
  /* 11c654c1 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c654c3 je 0x11c654ce */
  if (C.zf) goto L_11c654ce;
  /* 11c654c5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654c8 jne 0x11c65496 */
  if (!C.zf) goto L_11c65496;
L_11c654ca:;
  /* 11c654ca test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c654cc jne 0x11c654d1 */
  if (!C.zf) goto L_11c654d1;
L_11c654ce:;
  /* 11c654ce dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c654cf jmp 0x11c654d9 */
  goto L_11c654d9;
L_11c654d1:;
  /* 11c654d1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c654d3 je 0x11c654d9 */
  if (C.zf) goto L_11c654d9;
  /* 11c654d5 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11c654d9:;
  /* 11c654d9 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11c654dd:;
  /* 11c654dd cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654e0 je 0x11c655c6 */
  if (C.zf) goto L_11c655c6;
L_11c654e6:;
  /* 11c654e6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c654e8 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654eb je 0x11c654f2 */
  if (C.zf) goto L_11c654f2;
  /* 11c654ed cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654f0 jne 0x11c654f5 */
  if (!C.zf) goto L_11c654f5;
L_11c654f2:;
  /* 11c654f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c654f3 jmp 0x11c654e6 */
  goto L_11c654e6;
L_11c654f5:;
  /* 11c654f5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c654f8 je 0x11c655c6 */
  if (C.zf) goto L_11c655c6;
  /* 11c654fe test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c65500 je 0x11c6550a */
  if (C.zf) goto L_11c6550a;
  /* 11c65502 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c65504 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65507 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c6550a:;
  /* 11c6550a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6550d inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11c6550f:;
  /* 11c6550f mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11c65516 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c65518:;
  /* 11c65518 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6551b jne 0x11c65521 */
  if (!C.zf) goto L_11c65521;
  /* 11c6551d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6551e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c6551f jmp 0x11c65518 */
  goto L_11c65518;
L_11c65521:;
  /* 11c65521 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65524 jne 0x11c65552 */
  if (!C.zf) goto L_11c65552;
  /* 11c65526 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c65529 jne 0x11c65550 */
  if (!C.zf) goto L_11c65550;
  /* 11c6552b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6552d cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65530 je 0x11c6553f */
  if (C.zf) goto L_11c6553f;
  /* 11c65532 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65536 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11c65539 jne 0x11c6553f */
  if (!C.zf) goto L_11c6553f;
  /* 11c6553b mov eax, edx */
  EAX = (EDX);
  /* 11c6553d jmp 0x11c65542 */
  goto L_11c65542;
L_11c6553f:;
  /* 11c6553f mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11c65542:;
  /* 11c65542 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65545 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c65547 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6554a sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11c6554d mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11c65550:;
  /* 11c65550 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11c65552:;
  /* 11c65552 mov edx, ebx */
  EDX = (EBX);
  /* 11c65554 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c65555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c65557 je 0x11c65567 */
  if (C.zf) goto L_11c65567;
  /* 11c65559 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c6555a:;
  /* 11c6555a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6555c je 0x11c65562 */
  if (C.zf) goto L_11c65562;
  /* 11c6555e mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11c65561 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c65562:;
  /* 11c65562 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c65564 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c65565 jne 0x11c6555a */
  if (!C.zf) goto L_11c6555a;
L_11c65567:;
  /* 11c65567 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c65569 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c6556b je 0x11c655b7 */
  if (C.zf) goto L_11c655b7;
  /* 11c6556d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65571 jne 0x11c6557d */
  if (!C.zf) goto L_11c6557d;
  /* 11c65573 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65576 je 0x11c655b7 */
  if (C.zf) goto L_11c655b7;
  /* 11c65578 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6557b je 0x11c655b7 */
  if (C.zf) goto L_11c655b7;
L_11c6557d:;
  /* 11c6557d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65581 je 0x11c655b1 */
  if (C.zf) goto L_11c655b1;
  /* 11c65583 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c65585 je 0x11c655a0 */
  if (C.zf) goto L_11c655a0;
  /* 11c65587 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c6558a test byte ptr [ebx + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c87d01)))&(0x4u); fl_logic(_r,8); }
  /* 11c65591 je 0x11c65599 */
  if (C.zf) goto L_11c65599;
  /* 11c65593 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c65595 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c65596 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65597 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c65599:;
  /* 11c65599 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c6559b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c6559d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6559e jmp 0x11c655af */
  goto L_11c655af;
L_11c655a0:;
  /* 11c655a0 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c655a3 test byte ptr [edx + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c87d01)))&(0x4u); fl_logic(_r,8); }
  /* 11c655aa je 0x11c655af */
  if (C.zf) goto L_11c655af;
  /* 11c655ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c655ad inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c655af:;
  /* 11c655af inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c655b1:;
  /* 11c655b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c655b2 jmp 0x11c6550f */
  goto L_11c6550f;
L_11c655b7:;
  /* 11c655b7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c655b9 je 0x11c655bf */
  if (C.zf) goto L_11c655bf;
  /* 11c655bb and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c655be inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c655bf:;
  /* 11c655bf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c655c1 jmp 0x11c654dd */
  goto L_11c654dd;
L_11c655c6:;
  /* 11c655c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c655c8 je 0x11c655cd */
  if (C.zf) goto L_11c655cd;
  /* 11c655ca and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c655cd:;
  /* 11c655cd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c655d0 pop edi */
  EDI = (pop32());
  /* 11c655d1 pop esi */
  ESI = (pop32());
  /* 11c655d2 pop ebx */
  EBX = (pop32());
  /* 11c655d3 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11c655d5 pop ebp */
  EBP = (pop32());
  /* 11c655d6 ret  */
  ESPCHK(0x11c65423u, _esp0);
  ESP += 4; return;
}

/* FUN_100055d7 @ 0x11c655d7 (306 bytes, 132 insns) */
void f_11c655d7(void) {
  FTRACE(0x11c655d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c655d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c655d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c655d9 mov eax, dword ptr [0x11c8798c] */
  EAX = (r32((uint32_t)(0x11c8798c)));
  /* 11c655de push ebx */
  push32((uint32_t)(EBX));
  /* 11c655df push ebp */
  push32((uint32_t)(EBP));
  /* 11c655e0 mov ebp, dword ptr [0x11c6e094] */
  EBP = (r32((uint32_t)(0x11c6e094)));
  /* 11c655e6 push esi */
  push32((uint32_t)(ESI));
  /* 11c655e7 push edi */
  push32((uint32_t)(EDI));
  /* 11c655e8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c655ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c655ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c655ee cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c655f0 jne 0x11c65625 */
  if (!C.zf) goto L_11c65625;
  /* 11c655f2 call ebp */
  call_ind((uint32_t)(EBP), 0x11c655f4u);
  /* 11c655f4 mov esi, eax */
  ESI = (EAX);
  /* 11c655f6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c655f8 je 0x11c65606 */
  if (C.zf) goto L_11c65606;
  /* 11c655fa mov dword ptr [0x11c8798c], 1 */
  w32((uint32_t)(0x11c8798c), (0x1u));
  /* 11c65604 jmp 0x11c6562e */
  goto L_11c6562e;
L_11c65606:;
  /* 11c65606 call dword ptr [0x11c6e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e098))), 0x11c6560cu);
  /* 11c6560c mov edi, eax */
  EDI = (EAX);
  /* 11c6560e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65610 je 0x11c65700 */
  if (C.zf) goto L_11c65700;
  /* 11c65616 mov dword ptr [0x11c8798c], 2 */
  w32((uint32_t)(0x11c8798c), (0x2u));
  /* 11c65620 jmp 0x11c656b4 */
  goto L_11c656b4;
L_11c65625:;
  /* 11c65625 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65628 jne 0x11c656af */
  if (!C.zf) goto L_11c656af;
L_11c6562e:;
  /* 11c6562e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65630 jne 0x11c6563e */
  if (!C.zf) goto L_11c6563e;
  /* 11c65632 call ebp */
  call_ind((uint32_t)(EBP), 0x11c65634u);
  /* 11c65634 mov esi, eax */
  ESI = (EAX);
  /* 11c65636 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65638 je 0x11c65700 */
  if (C.zf) goto L_11c65700;
L_11c6563e:;
  /* 11c6563e cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c65641 mov eax, esi */
  EAX = (ESI);
  /* 11c65643 je 0x11c65653 */
  if (C.zf) goto L_11c65653;
L_11c65645:;
  /* 11c65645 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65646 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65647 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6564a jne 0x11c65645 */
  if (!C.zf) goto L_11c65645;
  /* 11c6564c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6564d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6564e cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c65651 jne 0x11c65645 */
  if (!C.zf) goto L_11c65645;
L_11c65653:;
  /* 11c65653 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65655 mov edi, dword ptr [0x11c6e09c] */
  EDI = (r32((uint32_t)(0x11c6e09c)));
  /* 11c6565b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c6565d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6565e push ebx */
  push32((uint32_t)(EBX));
  /* 11c6565f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65660 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65661 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65662 push eax */
  push32((uint32_t)(EAX));
  /* 11c65663 push esi */
  push32((uint32_t)(ESI));
  /* 11c65664 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65665 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65666 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11c6566a call edi */
  call_ind((uint32_t)(EDI), 0x11c6566cu);
  /* 11c6566c mov ebp, eax */
  EBP = (EAX);
  /* 11c6566e cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65670 je 0x11c656a4 */
  if (C.zf) goto L_11c656a4;
  /* 11c65672 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65673 call 0x11c64f87 */
  push32(0x11c65678u); f_11c64f87();
  /* 11c65678 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6567a pop ecx */
  ECX = (pop32());
  /* 11c6567b mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c6567f je 0x11c656a4 */
  if (C.zf) goto L_11c656a4;
  /* 11c65681 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65682 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65683 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65684 push eax */
  push32((uint32_t)(EAX));
  /* 11c65685 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11c65689 push esi */
  push32((uint32_t)(ESI));
  /* 11c6568a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6568b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6568c call edi */
  call_ind((uint32_t)(EDI), 0x11c6568eu);
  /* 11c6568e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65690 jne 0x11c656a0 */
  if (!C.zf) goto L_11c656a0;
  /* 11c65692 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c65696 call 0x11c66afc */
  push32(0x11c6569bu); f_11c66afc();
  /* 11c6569b pop ecx */
  ECX = (pop32());
  /* 11c6569c mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11c656a0:;
  /* 11c656a0 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11c656a4:;
  /* 11c656a4 push esi */
  push32((uint32_t)(ESI));
  /* 11c656a5 call dword ptr [0x11c6e0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0a0))), 0x11c656abu);
  /* 11c656ab mov eax, ebx */
  EAX = (EBX);
  /* 11c656ad jmp 0x11c65702 */
  goto L_11c65702;
L_11c656af:;
  /* 11c656af cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c656b2 jne 0x11c65700 */
  if (!C.zf) goto L_11c65700;
L_11c656b4:;
  /* 11c656b4 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c656b6 jne 0x11c656c4 */
  if (!C.zf) goto L_11c656c4;
  /* 11c656b8 call dword ptr [0x11c6e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e098))), 0x11c656beu);
  /* 11c656be mov edi, eax */
  EDI = (EAX);
  /* 11c656c0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c656c2 je 0x11c65700 */
  if (C.zf) goto L_11c65700;
L_11c656c4:;
  /* 11c656c4 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c656c6 mov eax, edi */
  EAX = (EDI);
  /* 11c656c8 je 0x11c656d4 */
  if (C.zf) goto L_11c656d4;
L_11c656ca:;
  /* 11c656ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c656cb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c656cd jne 0x11c656ca */
  if (!C.zf) goto L_11c656ca;
  /* 11c656cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c656d0 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c656d2 jne 0x11c656ca */
  if (!C.zf) goto L_11c656ca;
L_11c656d4:;
  /* 11c656d4 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c656d6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c656d7 mov ebp, eax */
  EBP = (EAX);
  /* 11c656d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c656da call 0x11c64f87 */
  push32(0x11c656dfu); f_11c64f87();
  /* 11c656df mov esi, eax */
  ESI = (EAX);
  /* 11c656e1 pop ecx */
  ECX = (pop32());
  /* 11c656e2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c656e4 jne 0x11c656ea */
  if (!C.zf) goto L_11c656ea;
  /* 11c656e6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c656e8 jmp 0x11c656f5 */
  goto L_11c656f5;
L_11c656ea:;
  /* 11c656ea push ebp */
  push32((uint32_t)(EBP));
  /* 11c656eb push edi */
  push32((uint32_t)(EDI));
  /* 11c656ec push esi */
  push32((uint32_t)(ESI));
  /* 11c656ed call 0x11c683e0 */
  push32(0x11c656f2u); f_11c683e0();
  /* 11c656f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c656f5:;
  /* 11c656f5 push edi */
  push32((uint32_t)(EDI));
  /* 11c656f6 call dword ptr [0x11c6e0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0a4))), 0x11c656fcu);
  /* 11c656fc mov eax, esi */
  EAX = (ESI);
  /* 11c656fe jmp 0x11c65702 */
  goto L_11c65702;
L_11c65700:;
  /* 11c65700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c65702:;
  /* 11c65702 pop edi */
  EDI = (pop32());
  /* 11c65703 pop esi */
  ESI = (pop32());
  /* 11c65704 pop ebp */
  EBP = (pop32());
  /* 11c65705 pop ebx */
  EBX = (pop32());
  /* 11c65706 pop ecx */
  ECX = (pop32());
  /* 11c65707 pop ecx */
  ECX = (pop32());
  /* 11c65708 ret  */
  ESPCHK(0x11c655d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005709 @ 0x11c65709 (45 bytes, 17 insns) */
void f_11c65709(void) {
  FTRACE(0x11c65709u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65709 push esi */
  push32((uint32_t)(ESI));
  /* 11c6570a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6570e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65710 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c65713 call dword ptr [0x11c6e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e004))), 0x11c65719u);
  /* 11c65719 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6571e jne 0x11c65734 */
  if (!C.zf) goto L_11c65734;
  /* 11c65720 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11c65723 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c65725 je 0x11c65734 */
  if (C.zf) goto L_11c65734;
  /* 11c65727 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65729 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11c6572c mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11c6572e mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11c65731 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11c65734:;
  /* 11c65734 pop esi */
  ESI = (pop32());
  /* 11c65735 ret  */
  ESPCHK(0x11c65709u, _esp0);
  ESP += 4; return;
}

/* FUN_10005736 @ 0x11c65736 (328 bytes, 115 insns) */
void f_11c65736(void) {
  FTRACE(0x11c65736u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65736 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65737 mov ebp, esp */
  EBP = (ESP);
  /* 11c65739 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11c6573e call 0x11c695a0 */
  push32(0x11c65743u); f_11c695a0();
  /* 11c65743 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11c65749 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6574a push eax */
  push32((uint32_t)(EAX));
  /* 11c6574b mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11c65755 call dword ptr [0x11c6e08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e08c))), 0x11c6575bu);
  /* 11c6575b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6575d je 0x11c65779 */
  if (C.zf) goto L_11c65779;
  /* 11c6575f cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65766 jne 0x11c65779 */
  if (!C.zf) goto L_11c65779;
  /* 11c65768 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6576f jb 0x11c65779 */
  if (C.cf) goto L_11c65779;
  /* 11c65771 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65773 pop eax */
  EAX = (pop32());
  /* 11c65774 jmp 0x11c6587b */
  goto L_11c6587b;
L_11c65779:;
  /* 11c65779 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c6577f push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11c65784 push eax */
  push32((uint32_t)(EAX));
  /* 11c65785 push 0x11c6e32c */
  push32((uint32_t)(0x11c6e32cu));
  /* 11c6578a call dword ptr [0x11c6e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e090))), 0x11c65790u);
  /* 11c65790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65792 je 0x11c65868 */
  if (C.zf) goto L_11c65868;
  /* 11c65798 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6579a lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11c657a0 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c657a6 je 0x11c657bb */
  if (C.zf) goto L_11c657bb;
L_11c657a8:;
  /* 11c657a8 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c657aa cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c657ac jl 0x11c657b6 */
  if ((C.sf!=C.of)) goto L_11c657b6;
  /* 11c657ae cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c657b0 jg 0x11c657b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c657b6;
  /* 11c657b2 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c657b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c657b6:;
  /* 11c657b6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c657b7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c657b9 jne 0x11c657a8 */
  if (!C.zf) goto L_11c657a8;
L_11c657bb:;
  /* 11c657bb lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c657c1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11c657c3 push eax */
  push32((uint32_t)(EAX));
  /* 11c657c4 push 0x11c6e314 */
  push32((uint32_t)(0x11c6e314u));
  /* 11c657c9 call 0x11c69560 */
  push32(0x11c657ceu); f_11c69560();
  /* 11c657ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c657d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c657d3 jne 0x11c657dd */
  if (!C.zf) goto L_11c657dd;
  /* 11c657d5 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c657db jmp 0x11c65826 */
  goto L_11c65826;
L_11c657dd:;
  /* 11c657dd lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c657e3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c657e8 push eax */
  push32((uint32_t)(EAX));
  /* 11c657e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c657ea call dword ptr [0x11c6e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0a8))), 0x11c657f0u);
  /* 11c657f0 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c657f6 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11c657fc je 0x11c65811 */
  if (C.zf) goto L_11c65811;
L_11c657fe:;
  /* 11c657fe mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c65800 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65802 jl 0x11c6580c */
  if ((C.sf!=C.of)) goto L_11c6580c;
  /* 11c65804 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65806 jg 0x11c6580c */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6580c;
  /* 11c65808 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6580a mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11c6580c:;
  /* 11c6580c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6580d cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6580f jne 0x11c657fe */
  if (!C.zf) goto L_11c657fe;
L_11c65811:;
  /* 11c65811 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11c65817 push eax */
  push32((uint32_t)(EAX));
  /* 11c65818 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11c6581e push eax */
  push32((uint32_t)(EAX));
  /* 11c6581f call 0x11c694e0 */
  push32(0x11c65824u); f_11c694e0();
  /* 11c65824 pop ecx */
  ECX = (pop32());
  /* 11c65825 pop ecx */
  ECX = (pop32());
L_11c65826:;
  /* 11c65826 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65828 je 0x11c65868 */
  if (C.zf) goto L_11c65868;
  /* 11c6582a push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11c6582c push eax */
  push32((uint32_t)(EAX));
  /* 11c6582d call 0x11c69420 */
  push32(0x11c65832u); f_11c69420();
  /* 11c65832 pop ecx */
  ECX = (pop32());
  /* 11c65833 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65835 pop ecx */
  ECX = (pop32());
  /* 11c65836 je 0x11c65868 */
  if (C.zf) goto L_11c65868;
  /* 11c65838 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65839 mov ecx, eax */
  ECX = (EAX);
  /* 11c6583b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6583d je 0x11c6584d */
  if (C.zf) goto L_11c6584d;
L_11c6583f:;
  /* 11c6583f cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65842 jne 0x11c65848 */
  if (!C.zf) goto L_11c65848;
  /* 11c65844 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11c65846 jmp 0x11c65849 */
  goto L_11c65849;
L_11c65848:;
  /* 11c65848 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11c65849:;
  /* 11c65849 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6584b jne 0x11c6583f */
  if (!C.zf) goto L_11c6583f;
L_11c6584d:;
  /* 11c6584d push 0xa */
  push32((uint32_t)(0xau));
  /* 11c6584f push ebx */
  push32((uint32_t)(EBX));
  /* 11c65850 push eax */
  push32((uint32_t)(EAX));
  /* 11c65851 call 0x11c691e9 */
  push32(0x11c65856u); f_11c691e9();
  /* 11c65856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65859 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6585c je 0x11c6587b */
  if (C.zf) goto L_11c6587b;
  /* 11c6585e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65861 je 0x11c6587b */
  if (C.zf) goto L_11c6587b;
  /* 11c65863 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65866 je 0x11c6587b */
  if (C.zf) goto L_11c6587b;
L_11c65868:;
  /* 11c65868 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c6586b push eax */
  push32((uint32_t)(EAX));
  /* 11c6586c call 0x11c65709 */
  push32(0x11c65871u); f_11c65709();
  /* 11c65871 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c65875 pop ecx */
  ECX = (pop32());
  /* 11c65876 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65878 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c6587b:;
  /* 11c6587b pop ebx */
  EBX = (pop32());
  /* 11c6587c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6587d ret  */
  ESPCHK(0x11c65736u, _esp0);
  ESP += 4; return;
}

/* FUN_1000587e @ 0x11c6587e (93 bytes, 30 insns) */
void f_11c6587e(void) {
  FTRACE(0x11c6587eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6587e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65882 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65886 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c6588b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c6588e push eax */
  push32((uint32_t)(EAX));
  /* 11c6588f call dword ptr [0x11c6e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e084))), 0x11c65895u);
  /* 11c65895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65897 mov dword ptr [0x11c88e40], eax */
  w32((uint32_t)(0x11c88e40), (EAX));
  /* 11c6589c je 0x11c658d4 */
  if (C.zf) goto L_11c658d4;
  /* 11c6589e call 0x11c65736 */
  push32(0x11c658a3u); f_11c65736();
  /* 11c658a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c658a6 mov dword ptr [0x11c88e44], eax */
  w32((uint32_t)(0x11c88e44), (EAX));
  /* 11c658ab jne 0x11c658ba */
  if (!C.zf) goto L_11c658ba;
  /* 11c658ad push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11c658b2 call 0x11c671a7 */
  push32(0x11c658b7u); f_11c671a7();
  /* 11c658b7 pop ecx */
  ECX = (pop32());
  /* 11c658b8 jmp 0x11c658c4 */
  goto L_11c658c4;
L_11c658ba:;
  /* 11c658ba cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c658bd jne 0x11c658d7 */
  if (!C.zf) goto L_11c658d7;
  /* 11c658bf call 0x11c67cee */
  push32(0x11c658c4u); f_11c67cee();
L_11c658c4:;
  /* 11c658c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c658c6 jne 0x11c658d7 */
  if (!C.zf) goto L_11c658d7;
  /* 11c658c8 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c658ce call dword ptr [0x11c6e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e088))), 0x11c658d4u);
L_11c658d4:;
  /* 11c658d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c658d6 ret  */
  ESPCHK(0x11c6587eu, _esp0);
  ESP += 4; return;
L_11c658d7:;
  /* 11c658d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c658d9 pop eax */
  EAX = (pop32());
  /* 11c658da ret  */
  ESPCHK(0x11c6587eu, _esp0);
  ESP += 4; return;
}

/* FUN_100058db @ 0x11c658db (168 bytes, 56 insns) */
void f_11c658db(void) {
  FTRACE(0x11c658dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c658db mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c658e0 push esi */
  push32((uint32_t)(ESI));
  /* 11c658e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c658e4 push edi */
  push32((uint32_t)(EDI));
  /* 11c658e5 jne 0x11c6594d */
  if (!C.zf) goto L_11c6594d;
  /* 11c658e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c658e8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c658ea cmp dword ptr [0x11c88e34], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c88e34))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c658f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c658f1 mov ebp, dword ptr [0x11c6e07c] */
  EBP = (r32((uint32_t)(0x11c6e07c)));
  /* 11c658f7 jle 0x11c65939 */
  if ((C.zf||C.sf!=C.of)) goto L_11c65939;
  /* 11c658f9 mov eax, dword ptr [0x11c88e38] */
  EAX = (r32((uint32_t)(0x11c88e38)));
  /* 11c658fe mov edi, dword ptr [0x11c6e080] */
  EDI = (r32((uint32_t)(0x11c6e080)));
  /* 11c65904 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11c65907:;
  /* 11c65907 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c6590c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c65911 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c65913 call edi */
  call_ind((uint32_t)(EDI), 0x11c65915u);
  /* 11c65915 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c6591a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6591c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c6591e call edi */
  call_ind((uint32_t)(EDI), 0x11c65920u);
  /* 11c65920 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11c65923 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65925 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c6592b call ebp */
  call_ind((uint32_t)(EBP), 0x11c6592du);
  /* 11c6592d add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65930 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c65931 cmp ebx, dword ptr [0x11c88e34] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c88e34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65937 jl 0x11c65907 */
  if ((C.sf!=C.of)) goto L_11c65907;
L_11c65939:;
  /* 11c65939 push dword ptr [0x11c88e38] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e38))));
  /* 11c6593f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65941 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c65947 call ebp */
  call_ind((uint32_t)(EBP), 0x11c65949u);
  /* 11c65949 pop ebp */
  EBP = (pop32());
  /* 11c6594a pop ebx */
  EBX = (pop32());
  /* 11c6594b jmp 0x11c65974 */
  goto L_11c65974;
L_11c6594d:;
  /* 11c6594d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65950 jne 0x11c65974 */
  if (!C.zf) goto L_11c65974;
  /* 11c65952 mov edi, 0x11c70c18 */
  EDI = (0x11c70c18u);
  /* 11c65957 mov esi, edi */
  ESI = (EDI);
L_11c65959:;
  /* 11c65959 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6595c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6595e je 0x11c6596e */
  if (C.zf) goto L_11c6596e;
  /* 11c65960 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c65965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65967 push eax */
  push32((uint32_t)(EAX));
  /* 11c65968 call dword ptr [0x11c6e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e080))), 0x11c6596eu);
L_11c6596e:;
  /* 11c6596e mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c65970 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65972 jne 0x11c65959 */
  if (!C.zf) goto L_11c65959;
L_11c65974:;
  /* 11c65974 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c6597a call dword ptr [0x11c6e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e088))), 0x11c65980u);
  /* 11c65980 pop edi */
  EDI = (pop32());
  /* 11c65981 pop esi */
  ESI = (pop32());
  /* 11c65982 ret  */
  ESPCHK(0x11c658dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10005983 @ 0x11c65983 (57 bytes, 18 insns) */
void f_11c65983(void) {
  FTRACE(0x11c65983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65983 mov eax, dword ptr [0x11c8783c] */
  EAX = (r32((uint32_t)(0x11c8783c)));
  /* 11c65988 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6598b je 0x11c6599a */
  if (C.zf) goto L_11c6599a;
  /* 11c6598d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6598f jne 0x11c659bb */
  if (!C.zf) goto L_11c659bb;
  /* 11c65991 cmp dword ptr [0x11c87840], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c87840))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65998 jne 0x11c659bb */
  if (!C.zf) goto L_11c659bb;
L_11c6599a:;
  /* 11c6599a push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11c6599f call 0x11c659bc */
  push32(0x11c659a4u); f_11c659bc();
  /* 11c659a4 mov eax, dword ptr [0x11c87990] */
  EAX = (r32((uint32_t)(0x11c87990)));
  /* 11c659a9 pop ecx */
  ECX = (pop32());
  /* 11c659aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c659ac je 0x11c659b0 */
  if (C.zf) goto L_11c659b0;
  /* 11c659ae call eax */
  call_ind((uint32_t)(EAX), 0x11c659b0u);
L_11c659b0:;
  /* 11c659b0 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c659b5 call 0x11c659bc */
  push32(0x11c659bau); f_11c659bc();
  /* 11c659ba pop ecx */
  ECX = (pop32());
L_11c659bb:;
  /* 11c659bb ret  */
  ESPCHK(0x11c65983u, _esp0);
  ESP += 4; return;
}

/* FUN_100059bc @ 0x11c659bc (339 bytes, 100 insns) */
void f_11c659bc(void) {
  FTRACE(0x11c659bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c659bc push ebp */
  push32((uint32_t)(EBP));
  /* 11c659bd mov ebp, esp */
  EBP = (ESP);
  /* 11c659bf sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c659c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c659c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c659ca mov eax, 0x11c706d0 */
  EAX = (0x11c706d0u);
L_11c659cf:;
  /* 11c659cf cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c659d1 je 0x11c659de */
  if (C.zf) goto L_11c659de;
  /* 11c659d3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c659d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c659d7 cmp eax, 0x11c70760 */
  { uint32_t _a=(EAX),_b=(0x11c70760u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c659dc jl 0x11c659cf */
  if ((C.sf!=C.of)) goto L_11c659cf;
L_11c659de:;
  /* 11c659de push esi */
  push32((uint32_t)(ESI));
  /* 11c659df mov esi, ecx */
  ESI = (ECX);
  /* 11c659e1 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c659e4 cmp edx, dword ptr [esi + 0x11c706d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11c706d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c659ea jne 0x11c65b0c */
  if (!C.zf) goto L_11c65b0c;
  /* 11c659f0 mov eax, dword ptr [0x11c8783c] */
  EAX = (r32((uint32_t)(0x11c8783c)));
  /* 11c659f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c659f8 je 0x11c65ae6 */
  if (C.zf) goto L_11c65ae6;
  /* 11c659fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65a00 jne 0x11c65a0f */
  if (!C.zf) goto L_11c65a0f;
  /* 11c65a02 cmp dword ptr [0x11c87840], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c87840))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65a09 je 0x11c65ae6 */
  if (C.zf) goto L_11c65ae6;
L_11c65a0f:;
  /* 11c65a0f cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65a15 je 0x11c65b0c */
  if (C.zf) goto L_11c65b0c;
  /* 11c65a1b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a21 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c65a26 push eax */
  push32((uint32_t)(EAX));
  /* 11c65a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65a29 call dword ptr [0x11c6e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0a8))), 0x11c65a2fu);
  /* 11c65a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65a31 jne 0x11c65a46 */
  if (!C.zf) goto L_11c65a46;
  /* 11c65a33 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a39 push 0x11c6e61c */
  push32((uint32_t)(0x11c6e61cu));
  /* 11c65a3e push eax */
  push32((uint32_t)(EAX));
  /* 11c65a3f call 0x11c663a0 */
  push32(0x11c65a44u); f_11c663a0();
  /* 11c65a44 pop ecx */
  ECX = (pop32());
  /* 11c65a45 pop ecx */
  ECX = (pop32());
L_11c65a46:;
  /* 11c65a46 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a4c push edi */
  push32((uint32_t)(EDI));
  /* 11c65a4d push eax */
  push32((uint32_t)(EAX));
  /* 11c65a4e lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a54 call 0x11c66830 */
  push32(0x11c65a59u); f_11c66830();
  /* 11c65a59 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65a5a pop ecx */
  ECX = (pop32());
  /* 11c65a5b cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65a5e jbe 0x11c65a89 */
  if ((C.cf||C.zf)) goto L_11c65a89;
  /* 11c65a60 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a66 push eax */
  push32((uint32_t)(EAX));
  /* 11c65a67 call 0x11c66830 */
  push32(0x11c65a6cu); f_11c66830();
  /* 11c65a6c mov edi, eax */
  EDI = (EAX);
  /* 11c65a6e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c65a74 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65a77 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c65a79 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65a7b push 0x11c6e618 */
  push32((uint32_t)(0x11c6e618u));
  /* 11c65a80 push edi */
  push32((uint32_t)(EDI));
  /* 11c65a81 call 0x11c69660 */
  push32(0x11c65a86u); f_11c69660();
  /* 11c65a86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c65a89:;
  /* 11c65a89 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c65a8f push 0x11c6e5fc */
  push32((uint32_t)(0x11c6e5fcu));
  /* 11c65a94 push eax */
  push32((uint32_t)(EAX));
  /* 11c65a95 call 0x11c663a0 */
  push32(0x11c65a9au); f_11c663a0();
  /* 11c65a9a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c65aa0 push edi */
  push32((uint32_t)(EDI));
  /* 11c65aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11c65aa2 call 0x11c663b0 */
  push32(0x11c65aa7u); f_11c663b0();
  /* 11c65aa7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c65aad push 0x11c6e5f8 */
  push32((uint32_t)(0x11c6e5f8u));
  /* 11c65ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11c65ab3 call 0x11c663b0 */
  push32(0x11c65ab8u); f_11c663b0();
  /* 11c65ab8 push dword ptr [esi + 0x11c706d4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11c706d4))));
  /* 11c65abe lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c65ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11c65ac5 call 0x11c663b0 */
  push32(0x11c65acau); f_11c663b0();
  /* 11c65aca push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11c65acf lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c65ad5 push 0x11c6e5d0 */
  push32((uint32_t)(0x11c6e5d0u));
  /* 11c65ada push eax */
  push32((uint32_t)(EAX));
  /* 11c65adb call 0x11c695cf */
  push32(0x11c65ae0u); f_11c695cf();
  /* 11c65ae0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65ae3 pop edi */
  EDI = (pop32());
  /* 11c65ae4 jmp 0x11c65b0c */
  goto L_11c65b0c;
L_11c65ae6:;
  /* 11c65ae6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c65ae9 lea esi, [esi + 0x11c706d4] */
  ESI = ((uint32_t)(ESI + 0x11c706d4));
  /* 11c65aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65af1 push eax */
  push32((uint32_t)(EAX));
  /* 11c65af2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c65af4 call 0x11c66830 */
  push32(0x11c65af9u); f_11c66830();
  /* 11c65af9 pop ecx */
  ECX = (pop32());
  /* 11c65afa push eax */
  push32((uint32_t)(EAX));
  /* 11c65afb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c65afd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c65aff call dword ptr [0x11c6e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0b8))), 0x11c65b05u);
  /* 11c65b05 push eax */
  push32((uint32_t)(EAX));
  /* 11c65b06 call dword ptr [0x11c6e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e078))), 0x11c65b0cu);
L_11c65b0c:;
  /* 11c65b0c pop esi */
  ESI = (pop32());
  /* 11c65b0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65b0e ret  */
  ESPCHK(0x11c659bcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b0f @ 0x11c65b0f (53 bytes, 25 insns) */
void f_11c65b0f(void) {
  FTRACE(0x11c65b0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65b0f push ebp */
  push32((uint32_t)(EBP));
  /* 11c65b10 mov ebp, esp */
  EBP = (ESP);
  /* 11c65b12 push ecx */
  push32((uint32_t)(ECX));
  /* 11c65b13 push esi */
  push32((uint32_t)(ESI));
  /* 11c65b14 wait  */
  /* wait (no observable integer/reg state) */
  /* 11c65b15 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11c65b18 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c65b1b call 0x11c65b5a */
  push32(0x11c65b20u); f_11c65b5a();
  /* 11c65b20 mov esi, eax */
  ESI = (EAX);
  /* 11c65b22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65b25 not eax */
  EAX = (~(EAX));
  /* 11c65b27 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11c65b29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65b2c and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c65b2f or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11c65b31 push esi */
  push32((uint32_t)(ESI));
  /* 11c65b32 call 0x11c65bec */
  push32(0x11c65b37u); f_11c65bec();
  /* 11c65b37 pop ecx */
  ECX = (pop32());
  /* 11c65b38 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c65b3b pop ecx */
  ECX = (pop32());
  /* 11c65b3c fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11c65b3f mov eax, esi */
  EAX = (ESI);
  /* 11c65b41 pop esi */
  ESI = (pop32());
  /* 11c65b42 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65b43 ret  */
  ESPCHK(0x11c65b0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b44 @ 0x11c65b44 (22 bytes, 8 insns) */
void f_11c65b44(void) {
  FTRACE(0x11c65b44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65b44 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65b48 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c65b4d push eax */
  push32((uint32_t)(EAX));
  /* 11c65b4e push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c65b52 call 0x11c65b0f */
  push32(0x11c65b57u); f_11c65b0f();
  /* 11c65b57 pop ecx */
  ECX = (pop32());
  /* 11c65b58 pop ecx */
  ECX = (pop32());
  /* 11c65b59 ret  */
  ESPCHK(0x11c65b44u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b5a @ 0x11c65b5a (146 bytes, 58 insns) */
void f_11c65b5a(void) {
  FTRACE(0x11c65b5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65b5a push ebx */
  push32((uint32_t)(EBX));
  /* 11c65b5b mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65b61 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65b62 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c65b65 push edi */
  push32((uint32_t)(EDI));
  /* 11c65b66 je 0x11c65b6b */
  if (C.zf) goto L_11c65b6b;
  /* 11c65b68 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c65b6a pop eax */
  EAX = (pop32());
L_11c65b6b:;
  /* 11c65b6b test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11c65b6e je 0x11c65b72 */
  if (C.zf) goto L_11c65b72;
  /* 11c65b70 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11c65b72:;
  /* 11c65b72 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11c65b75 je 0x11c65b79 */
  if (C.zf) goto L_11c65b79;
  /* 11c65b77 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11c65b79:;
  /* 11c65b79 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11c65b7c je 0x11c65b80 */
  if (C.zf) goto L_11c65b80;
  /* 11c65b7e or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11c65b80:;
  /* 11c65b80 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11c65b83 je 0x11c65b87 */
  if (C.zf) goto L_11c65b87;
  /* 11c65b85 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11c65b87:;
  /* 11c65b87 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c65b8a je 0x11c65b91 */
  if (C.zf) goto L_11c65b91;
  /* 11c65b8c or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11c65b91:;
  /* 11c65b91 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c65b94 push esi */
  push32((uint32_t)(ESI));
  /* 11c65b95 mov edx, ecx */
  EDX = (ECX);
  /* 11c65b97 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11c65b9c mov edi, 0x300 */
  EDI = (0x300u);
  /* 11c65ba1 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c65ba3 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11c65ba8 je 0x11c65bc9 */
  if (C.zf) goto L_11c65bc9;
  /* 11c65baa cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65bb0 je 0x11c65bc6 */
  if (C.zf) goto L_11c65bc6;
  /* 11c65bb2 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65bb8 je 0x11c65bc2 */
  if (C.zf) goto L_11c65bc2;
  /* 11c65bba cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65bbc jne 0x11c65bc9 */
  if (!C.zf) goto L_11c65bc9;
  /* 11c65bbe or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11c65bc0 jmp 0x11c65bc9 */
  goto L_11c65bc9;
L_11c65bc2:;
  /* 11c65bc2 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11c65bc4 jmp 0x11c65bc9 */
  goto L_11c65bc9;
L_11c65bc6:;
  /* 11c65bc6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11c65bc9:;
  /* 11c65bc9 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c65bcb pop esi */
  ESI = (pop32());
  /* 11c65bcc je 0x11c65bd9 */
  if (C.zf) goto L_11c65bd9;
  /* 11c65bce cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65bd0 jne 0x11c65bde */
  if (!C.zf) goto L_11c65bde;
  /* 11c65bd2 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11c65bd7 jmp 0x11c65bde */
  goto L_11c65bde;
L_11c65bd9:;
  /* 11c65bd9 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11c65bde:;
  /* 11c65bde pop edi */
  EDI = (pop32());
  /* 11c65bdf pop ebp */
  EBP = (pop32());
  /* 11c65be0 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11c65be3 pop ebx */
  EBX = (pop32());
  /* 11c65be4 je 0x11c65beb */
  if (C.zf) goto L_11c65beb;
  /* 11c65be6 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11c65beb:;
  /* 11c65beb ret  */
  ESPCHK(0x11c65b5au, _esp0);
  ESP += 4; return;
}

/* FUN_10005bec @ 0x11c65bec (137 bytes, 53 insns) */
void f_11c65bec(void) {
  FTRACE(0x11c65becu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65bec push ebx */
  push32((uint32_t)(EBX));
  /* 11c65bed mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65bf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65bf3 push esi */
  push32((uint32_t)(ESI));
  /* 11c65bf4 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11c65bf7 je 0x11c65bfc */
  if (C.zf) goto L_11c65bfc;
  /* 11c65bf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65bfb pop eax */
  EAX = (pop32());
L_11c65bfc:;
  /* 11c65bfc test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11c65bff je 0x11c65c03 */
  if (C.zf) goto L_11c65c03;
  /* 11c65c01 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11c65c03:;
  /* 11c65c03 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11c65c06 je 0x11c65c0a */
  if (C.zf) goto L_11c65c0a;
  /* 11c65c08 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11c65c0a:;
  /* 11c65c0a test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c65c0d je 0x11c65c11 */
  if (C.zf) goto L_11c65c11;
  /* 11c65c0f or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11c65c11:;
  /* 11c65c11 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c65c14 je 0x11c65c18 */
  if (C.zf) goto L_11c65c18;
  /* 11c65c16 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11c65c18:;
  /* 11c65c18 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11c65c1e je 0x11c65c22 */
  if (C.zf) goto L_11c65c22;
  /* 11c65c20 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11c65c22:;
  /* 11c65c22 mov ecx, ebx */
  ECX = (EBX);
  /* 11c65c24 mov edx, 0x300 */
  EDX = (0x300u);
  /* 11c65c29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c65c2b mov esi, 0x200 */
  ESI = (0x200u);
  /* 11c65c30 je 0x11c65c4f */
  if (C.zf) goto L_11c65c4f;
  /* 11c65c32 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65c38 je 0x11c65c4c */
  if (C.zf) goto L_11c65c4c;
  /* 11c65c3a cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65c3c je 0x11c65c47 */
  if (C.zf) goto L_11c65c47;
  /* 11c65c3e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65c40 jne 0x11c65c4f */
  if (!C.zf) goto L_11c65c4f;
  /* 11c65c42 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11c65c45 jmp 0x11c65c4f */
  goto L_11c65c4f;
L_11c65c47:;
  /* 11c65c47 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11c65c4a jmp 0x11c65c4f */
  goto L_11c65c4f;
L_11c65c4c:;
  /* 11c65c4c or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11c65c4f:;
  /* 11c65c4f mov ecx, ebx */
  ECX = (EBX);
  /* 11c65c51 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c65c57 je 0x11c65c65 */
  if (C.zf) goto L_11c65c65;
  /* 11c65c59 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65c5f jne 0x11c65c67 */
  if (!C.zf) goto L_11c65c67;
  /* 11c65c61 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c65c63 jmp 0x11c65c67 */
  goto L_11c65c67;
L_11c65c65:;
  /* 11c65c65 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11c65c67:;
  /* 11c65c67 pop esi */
  ESI = (pop32());
  /* 11c65c68 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11c65c6e pop ebx */
  EBX = (pop32());
  /* 11c65c6f je 0x11c65c74 */
  if (C.zf) goto L_11c65c74;
  /* 11c65c71 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11c65c74:;
  /* 11c65c74 ret  */
  ESPCHK(0x11c65becu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c75 @ 0x11c65c75 (117 bytes, 46 insns) */
void f_11c65c75(void) {
  FTRACE(0x11c65c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65c75 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65c76 mov ebp, esp */
  EBP = (ESP);
  /* 11c65c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11c65c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65c7c lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c65c7f cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65c85 ja 0x11c65c93 */
  if ((!C.cf&&!C.zf)) goto L_11c65c93;
  /* 11c65c87 mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c65c8d movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11c65c91 jmp 0x11c65ce5 */
  goto L_11c65ce5;
L_11c65c93:;
  /* 11c65c93 mov ecx, eax */
  ECX = (EAX);
  /* 11c65c95 push esi */
  push32((uint32_t)(ESI));
  /* 11c65c96 mov esi, dword ptr [0x11c7076c] */
  ESI = (r32((uint32_t)(0x11c7076c)));
  /* 11c65c9c sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c65c9f movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11c65ca2 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c65ca7 pop esi */
  ESI = (pop32());
  /* 11c65ca8 je 0x11c65cb8 */
  if (C.zf) goto L_11c65cb8;
  /* 11c65caa and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11c65cae mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11c65cb1 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11c65cb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c65cb6 jmp 0x11c65cc1 */
  goto L_11c65cc1;
L_11c65cb8:;
  /* 11c65cb8 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11c65cbc mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11c65cbf push 1 */
  push32((uint32_t)(0x1u));
L_11c65cc1:;
  /* 11c65cc1 pop eax */
  EAX = (pop32());
  /* 11c65cc2 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11c65cc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65ccb push ecx */
  push32((uint32_t)(ECX));
  /* 11c65ccc push eax */
  push32((uint32_t)(EAX));
  /* 11c65ccd lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c65cd0 push eax */
  push32((uint32_t)(EAX));
  /* 11c65cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65cd3 call 0x11c6991d */
  push32(0x11c65cd8u); f_11c6991d();
  /* 11c65cd8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65cdd jne 0x11c65ce1 */
  if (!C.zf) goto L_11c65ce1;
  /* 11c65cdf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65ce0 ret  */
  ESPCHK(0x11c65c75u, _esp0);
  ESP += 4; return;
L_11c65ce1:;
  /* 11c65ce1 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11c65ce5:;
  /* 11c65ce5 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c65ce8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65ce9 ret  */
  ESPCHK(0x11c65c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cea @ 0x11c65cea (111 bytes, 44 insns) */
void f_11c65cea(void) {
  FTRACE(0x11c65ceau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65cea push ebx */
  push32((uint32_t)(EBX));
  /* 11c65ceb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c65ced cmp dword ptr [0x11c87b00], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87b00))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65cf3 jne 0x11c65d08 */
  if (!C.zf) goto L_11c65d08;
  /* 11c65cf5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65cf9 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65cfc jl 0x11c65d57 */
  if ((C.sf!=C.of)) goto L_11c65d57;
  /* 11c65cfe cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d01 jg 0x11c65d57 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c65d57;
  /* 11c65d03 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65d06 pop ebx */
  EBX = (pop32());
  /* 11c65d07 ret  */
  ESPCHK(0x11c65ceau, _esp0);
  ESP += 4; return;
L_11c65d08:;
  /* 11c65d08 push esi */
  push32((uint32_t)(ESI));
  /* 11c65d09 mov esi, 0x11c87be8 */
  ESI = (0x11c87be8u);
  /* 11c65d0e push edi */
  push32((uint32_t)(EDI));
  /* 11c65d0f push esi */
  push32((uint32_t)(ESI));
  /* 11c65d10 call dword ptr [0x11c6e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e070))), 0x11c65d16u);
  /* 11c65d16 cmp dword ptr [0x11c87be4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87be4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d1c mov edi, dword ptr [0x11c6e074] */
  EDI = (r32((uint32_t)(0x11c6e074)));
  /* 11c65d22 je 0x11c65d32 */
  if (C.zf) goto L_11c65d32;
  /* 11c65d24 push esi */
  push32((uint32_t)(ESI));
  /* 11c65d25 call edi */
  call_ind((uint32_t)(EDI), 0x11c65d27u);
  /* 11c65d27 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c65d29 call 0x11c66a86 */
  push32(0x11c65d2eu); f_11c66a86();
  /* 11c65d2e pop ecx */
  ECX = (pop32());
  /* 11c65d2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65d31 pop ebx */
  EBX = (pop32());
L_11c65d32:;
  /* 11c65d32 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c65d36 call 0x11c65d59 */
  push32(0x11c65d3bu); f_11c65d59();
  /* 11c65d3b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c65d3d pop ecx */
  ECX = (pop32());
  /* 11c65d3e mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c65d42 je 0x11c65d4e */
  if (C.zf) goto L_11c65d4e;
  /* 11c65d44 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c65d46 call 0x11c66ae7 */
  push32(0x11c65d4bu); f_11c66ae7();
  /* 11c65d4b pop ecx */
  ECX = (pop32());
  /* 11c65d4c jmp 0x11c65d51 */
  goto L_11c65d51;
L_11c65d4e:;
  /* 11c65d4e push esi */
  push32((uint32_t)(ESI));
  /* 11c65d4f call edi */
  call_ind((uint32_t)(EDI), 0x11c65d51u);
L_11c65d51:;
  /* 11c65d51 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c65d55 pop edi */
  EDI = (pop32());
  /* 11c65d56 pop esi */
  ESI = (pop32());
L_11c65d57:;
  /* 11c65d57 pop ebx */
  EBX = (pop32());
  /* 11c65d58 ret  */
  ESPCHK(0x11c65ceau, _esp0);
  ESP += 4; return;
}

/* FUN_10005d59 @ 0x11c65d59 (203 bytes, 78 insns) */
void f_11c65d59(void) {
  FTRACE(0x11c65d59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65d59 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65d5a mov ebp, esp */
  EBP = (ESP);
  /* 11c65d5c push ecx */
  push32((uint32_t)(ECX));
  /* 11c65d5d cmp dword ptr [0x11c87b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d64 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65d65 push esi */
  push32((uint32_t)(ESI));
  /* 11c65d66 push edi */
  push32((uint32_t)(EDI));
  /* 11c65d67 jne 0x11c65d86 */
  if (!C.zf) goto L_11c65d86;
  /* 11c65d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65d6c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d6f jl 0x11c65e1f */
  if ((C.sf!=C.of)) goto L_11c65e1f;
  /* 11c65d75 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d78 jg 0x11c65e1f */
  if ((!C.zf&&C.sf==C.of)) goto L_11c65e1f;
  /* 11c65d7e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65d81 jmp 0x11c65e1f */
  goto L_11c65e1f;
L_11c65d86:;
  /* 11c65d86 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65d89 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11c65d8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65d90 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d92 pop esi */
  ESI = (pop32());
  /* 11c65d93 jge 0x11c65dba */
  if ((C.sf==C.of)) goto L_11c65dba;
  /* 11c65d95 cmp dword ptr [0x11c70760], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65d9b jle 0x11c65da8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c65da8;
  /* 11c65d9d push esi */
  push32((uint32_t)(ESI));
  /* 11c65d9e push ebx */
  push32((uint32_t)(EBX));
  /* 11c65d9f call 0x11c65c75 */
  push32(0x11c65da4u); f_11c65c75();
  /* 11c65da4 pop ecx */
  ECX = (pop32());
  /* 11c65da5 pop ecx */
  ECX = (pop32());
  /* 11c65da6 jmp 0x11c65db2 */
  goto L_11c65db2;
L_11c65da8:;
  /* 11c65da8 mov eax, dword ptr [0x11c7076c] */
  EAX = (r32((uint32_t)(0x11c7076c)));
  /* 11c65dad mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c65db0 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c65db2:;
  /* 11c65db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65db4 jne 0x11c65dba */
  if (!C.zf) goto L_11c65dba;
L_11c65db6:;
  /* 11c65db6 mov eax, ebx */
  EAX = (EBX);
  /* 11c65db8 jmp 0x11c65e1f */
  goto L_11c65e1f;
L_11c65dba:;
  /* 11c65dba mov edx, dword ptr [0x11c7076c] */
  EDX = (r32((uint32_t)(0x11c7076c)));
  /* 11c65dc0 mov eax, ebx */
  EAX = (EBX);
  /* 11c65dc2 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c65dc5 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c65dc8 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c65dcd je 0x11c65dde */
  if (C.zf) goto L_11c65dde;
  /* 11c65dcf and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c65dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c65dd5 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c65dd8 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c65ddb pop eax */
  EAX = (pop32());
  /* 11c65ddc jmp 0x11c65de7 */
  goto L_11c65de7;
L_11c65dde:;
  /* 11c65dde and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c65de2 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c65de5 mov eax, esi */
  EAX = (ESI);
L_11c65de7:;
  /* 11c65de7 push esi */
  push32((uint32_t)(ESI));
  /* 11c65de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c65dea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c65ded push 3 */
  push32((uint32_t)(0x3u));
  /* 11c65def push ecx */
  push32((uint32_t)(ECX));
  /* 11c65df0 push eax */
  push32((uint32_t)(EAX));
  /* 11c65df1 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c65df4 push eax */
  push32((uint32_t)(EAX));
  /* 11c65df5 push edi */
  push32((uint32_t)(EDI));
  /* 11c65df6 push dword ptr [0x11c87b00] */
  push32((uint32_t)(r32((uint32_t)(0x11c87b00))));
  /* 11c65dfc call 0x11c69a66 */
  push32(0x11c65e01u); f_11c69a66();
  /* 11c65e01 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65e06 je 0x11c65db6 */
  if (C.zf) goto L_11c65db6;
  /* 11c65e08 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65e0a jne 0x11c65e12 */
  if (!C.zf) goto L_11c65e12;
  /* 11c65e0c movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c65e10 jmp 0x11c65e1f */
  goto L_11c65e1f;
L_11c65e12:;
  /* 11c65e12 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c65e16 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c65e1a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c65e1d or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c65e1f:;
  /* 11c65e1f pop edi */
  EDI = (pop32());
  /* 11c65e20 pop esi */
  ESI = (pop32());
  /* 11c65e21 pop ebx */
  EBX = (pop32());
  /* 11c65e22 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65e23 ret  */
  ESPCHK(0x11c65d59u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e24 @ 0x11c65e24 (73 bytes, 36 insns) */
void f_11c65e24(void) {
  FTRACE(0x11c65e24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65e24 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65e28 push esi */
  push32((uint32_t)(ESI));
  /* 11c65e29 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c65e2b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65e2c pop ecx */
  ECX = (pop32());
  /* 11c65e2d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65e2f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c65e31 mov esi, eax */
  ESI = (EAX);
  /* 11c65e33 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c65e37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65e38 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65e3a pop ecx */
  ECX = (pop32());
  /* 11c65e3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65e3f sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65e41 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c65e44 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c65e46 not edx */
  EDX = (~(EDX));
  /* 11c65e48 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11c65e4b jne 0x11c65e69 */
  if (!C.zf) goto L_11c65e69;
  /* 11c65e4d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c65e4e cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65e51 jge 0x11c65e64 */
  if ((C.sf==C.of)) goto L_11c65e64;
  /* 11c65e53 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11c65e56:;
  /* 11c65e56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65e59 jne 0x11c65e69 */
  if (!C.zf) goto L_11c65e69;
  /* 11c65e5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c65e5c add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65e5f cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65e62 jl 0x11c65e56 */
  if ((C.sf!=C.of)) goto L_11c65e56;
L_11c65e64:;
  /* 11c65e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65e66 pop eax */
  EAX = (pop32());
  /* 11c65e67 pop esi */
  ESI = (pop32());
  /* 11c65e68 ret  */
  ESPCHK(0x11c65e24u, _esp0);
  ESP += 4; return;
L_11c65e69:;
  /* 11c65e69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65e6b pop esi */
  ESI = (pop32());
  /* 11c65e6c ret  */
  ESPCHK(0x11c65e24u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e6d @ 0x11c65e6d (86 bytes, 43 insns) */
void f_11c65e6d(void) {
  FTRACE(0x11c65e6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65e6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65e71 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65e72 push esi */
  push32((uint32_t)(ESI));
  /* 11c65e73 push edi */
  push32((uint32_t)(EDI));
  /* 11c65e74 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c65e76 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c65e7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65e7b pop ecx */
  ECX = (pop32());
  /* 11c65e7c idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65e7e mov esi, eax */
  ESI = (EAX);
  /* 11c65e80 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c65e84 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65e85 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65e87 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11c65e8a push edi */
  push32((uint32_t)(EDI));
  /* 11c65e8b push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c65e8d pop ecx */
  ECX = (pop32());
  /* 11c65e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65e90 pop eax */
  EAX = (pop32());
  /* 11c65e91 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65e93 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c65e95 push eax */
  push32((uint32_t)(EAX));
  /* 11c65e96 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c65e98 call 0x11c69cb5 */
  push32(0x11c65e9du); f_11c69cb5();
  /* 11c65e9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65ea0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c65ea1 js 0x11c65ebf */
  if (C.sf) goto L_11c65ebf;
  /* 11c65ea3 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11c65ea6:;
  /* 11c65ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65ea8 je 0x11c65ebf */
  if (C.zf) goto L_11c65ebf;
  /* 11c65eaa push edi */
  push32((uint32_t)(EDI));
  /* 11c65eab push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65ead push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c65eaf call 0x11c69cb5 */
  push32(0x11c65eb4u); f_11c69cb5();
  /* 11c65eb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65eb7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c65eb8 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65ebb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c65ebd jge 0x11c65ea6 */
  if ((C.sf==C.of)) goto L_11c65ea6;
L_11c65ebf:;
  /* 11c65ebf pop edi */
  EDI = (pop32());
  /* 11c65ec0 pop esi */
  ESI = (pop32());
  /* 11c65ec1 pop ebx */
  EBX = (pop32());
  /* 11c65ec2 ret  */
  ESPCHK(0x11c65e6du, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec3 @ 0x11c65ec3 (140 bytes, 71 insns) */
void f_11c65ec3(void) {
  FTRACE(0x11c65ec3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65ec3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65ec4 mov ebp, esp */
  EBP = (ESP);
  /* 11c65ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c65ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c65ec8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65ecb push ebx */
  push32((uint32_t)(EBX));
  /* 11c65ecc push esi */
  push32((uint32_t)(ESI));
  /* 11c65ecd push edi */
  push32((uint32_t)(EDI));
  /* 11c65ece lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11c65ed1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c65ed3 pop ecx */
  ECX = (pop32());
  /* 11c65ed4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c65ed8 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11c65edb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c65edd mov eax, ebx */
  EAX = (EBX);
  /* 11c65edf pop esi */
  ESI = (pop32());
  /* 11c65ee0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65ee1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65ee3 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c65ee5 mov ecx, eax */
  ECX = (EAX);
  /* 11c65ee7 mov eax, ebx */
  EAX = (EBX);
  /* 11c65ee9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65eea idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65eec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65eef pop esi */
  ESI = (pop32());
  /* 11c65ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65ef2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c65ef5 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c65ef8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c65efb sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65efd pop edx */
  EDX = (pop32());
  /* 11c65efe mov ecx, esi */
  ECX = (ESI);
  /* 11c65f00 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c65f02 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11c65f04 je 0x11c65f27 */
  if (C.zf) goto L_11c65f27;
  /* 11c65f06 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c65f07 push ebx */
  push32((uint32_t)(EBX));
  /* 11c65f08 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c65f0b call 0x11c65e24 */
  push32(0x11c65f10u); f_11c65e24();
  /* 11c65f10 pop ecx */
  ECX = (pop32());
  /* 11c65f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c65f13 pop ecx */
  ECX = (pop32());
  /* 11c65f14 jne 0x11c65f24 */
  if (!C.zf) goto L_11c65f24;
  /* 11c65f16 push edi */
  push32((uint32_t)(EDI));
  /* 11c65f17 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c65f1a call 0x11c65e6d */
  push32(0x11c65f1fu); f_11c65e6d();
  /* 11c65f1f pop ecx */
  ECX = (pop32());
  /* 11c65f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c65f23 pop ecx */
  ECX = (pop32());
L_11c65f24:;
  /* 11c65f24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c65f27:;
  /* 11c65f27 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c65f2a mov ecx, esi */
  ECX = (ESI);
  /* 11c65f2c shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c65f2e push 3 */
  push32((uint32_t)(0x3u));
  /* 11c65f30 pop ecx */
  ECX = (pop32());
  /* 11c65f31 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c65f33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c65f36 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c65f37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65f39 jge 0x11c65f47 */
  if ((C.sf==C.of)) goto L_11c65f47;
  /* 11c65f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65f3e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65f40 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c65f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65f45 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11c65f47:;
  /* 11c65f47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c65f4a pop edi */
  EDI = (pop32());
  /* 11c65f4b pop esi */
  ESI = (pop32());
  /* 11c65f4c pop ebx */
  EBX = (pop32());
  /* 11c65f4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c65f4e ret  */
  ESPCHK(0x11c65ec3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f4f @ 0x11c65f4f (27 bytes, 13 insns) */
void f_11c65f4f(void) {
  FTRACE(0x11c65f4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65f4f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65f53 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c65f57 push esi */
  push32((uint32_t)(ESI));
  /* 11c65f58 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c65f5a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65f5c pop edx */
  EDX = (pop32());
L_11c65f5d:;
  /* 11c65f5d mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11c65f5f mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11c65f62 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65f65 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c65f66 jne 0x11c65f5d */
  if (!C.zf) goto L_11c65f5d;
  /* 11c65f68 pop esi */
  ESI = (pop32());
  /* 11c65f69 ret  */
  ESPCHK(0x11c65f4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f6a @ 0x11c65f6a (12 bytes, 8 insns) */
void f_11c65f6a(void) {
  FTRACE(0x11c65f6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65f6a push edi */
  push32((uint32_t)(EDI));
  /* 11c65f6b mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c65f6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65f71 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c65f72 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c65f73 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c65f74 pop edi */
  EDI = (pop32());
  /* 11c65f75 ret  */
  ESPCHK(0x11c65f6au, _esp0);
  ESP += 4; return;
}

/* FUN_10005f76 @ 0x11c65f76 (27 bytes, 13 insns) */
void f_11c65f76(void) {
  FTRACE(0x11c65f76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65f76 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c65f7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11c65f7c:;
  /* 11c65f7c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65f7f jne 0x11c65f8e */
  if (!C.zf) goto L_11c65f8e;
  /* 11c65f81 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c65f82 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65f85 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65f88 jl 0x11c65f7c */
  if ((C.sf!=C.of)) goto L_11c65f7c;
  /* 11c65f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c65f8c pop eax */
  EAX = (pop32());
  /* 11c65f8d ret  */
  ESPCHK(0x11c65f76u, _esp0);
  ESP += 4; return;
L_11c65f8e:;
  /* 11c65f8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c65f90 ret  */
  ESPCHK(0x11c65f76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f91 @ 0x11c65f91 (141 bytes, 64 insns) */
void f_11c65f91(void) {
  FTRACE(0x11c65f91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c65f91 push ebp */
  push32((uint32_t)(EBP));
  /* 11c65f92 mov ebp, esp */
  EBP = (ESP);
  /* 11c65f94 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65f97 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65f9a push ebx */
  push32((uint32_t)(EBX));
  /* 11c65f9b push esi */
  push32((uint32_t)(ESI));
  /* 11c65f9c push edi */
  push32((uint32_t)(EDI));
  /* 11c65f9d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c65f9f mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c65fa2 pop ebx */
  EBX = (pop32());
  /* 11c65fa3 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c65fa6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65fa7 mov ecx, ebx */
  ECX = (EBX);
  /* 11c65fa9 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11c65fb0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65fb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c65fb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c65fb8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c65fb9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c65fbb and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c65fbf mov ecx, edx */
  ECX = (EDX);
  /* 11c65fc1 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c65fc3 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c65fc5 not esi */
  ESI = (~(ESI));
L_11c65fc7:;
  /* 11c65fc7 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c65fc9 mov ecx, eax */
  ECX = (EAX);
  /* 11c65fcb and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c65fcd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c65fd0 mov ecx, edx */
  ECX = (EDX);
  /* 11c65fd2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c65fd4 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c65fd7 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c65fd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c65fdc mov ecx, ebx */
  ECX = (EBX);
  /* 11c65fde add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c65fe1 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c65fe3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c65fe6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c65fe9 jne 0x11c65fc7 */
  if (!C.zf) goto L_11c65fc7;
  /* 11c65feb mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c65fee push 2 */
  push32((uint32_t)(0x2u));
  /* 11c65ff0 pop ebx */
  EBX = (pop32());
  /* 11c65ff1 mov esi, edi */
  ESI = (EDI);
  /* 11c65ff3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c65ff5 pop ecx */
  ECX = (pop32());
  /* 11c65ff6 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11c65ff9:;
  /* 11c65ff9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c65ffb jl 0x11c6600c */
  if ((C.sf!=C.of)) goto L_11c6600c;
  /* 11c65ffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66000 mov eax, ecx */
  EAX = (ECX);
  /* 11c66002 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66004 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11c66007 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11c6600a jmp 0x11c66013 */
  goto L_11c66013;
L_11c6600c:;
  /* 11c6600c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6600f and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11c66013:;
  /* 11c66013 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c66014 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66017 jns 0x11c65ff9 */
  if (!C.sf) goto L_11c65ff9;
  /* 11c66019 pop edi */
  EDI = (pop32());
  /* 11c6601a pop esi */
  ESI = (pop32());
  /* 11c6601b pop ebx */
  EBX = (pop32());
  /* 11c6601c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6601d ret  */
  ESPCHK(0x11c65f91u, _esp0);
  ESP += 4; return;
}

/* FUN_1000601e @ 0x11c6601e (364 bytes, 138 insns) */
void f_11c6601e(void) {
  FTRACE(0x11c6601eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6601e push ebp */
  push32((uint32_t)(EBP));
  /* 11c6601f mov ebp, esp */
  EBP = (ESP);
  /* 11c66021 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66027 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66028 push esi */
  push32((uint32_t)(ESI));
  /* 11c66029 push edi */
  push32((uint32_t)(EDI));
  /* 11c6602a movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11c6602e mov ebx, ecx */
  EBX = (ECX);
  /* 11c66030 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c66036 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c66039 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11c6603c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c6603f mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11c66042 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11c66045 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c66048 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11c6604e sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66054 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c66057 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c6605a cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66060 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c66063 jne 0x11c6608b */
  if (!C.zf) goto L_11c6608b;
  /* 11c66065 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c66068 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6606a push eax */
  push32((uint32_t)(EAX));
  /* 11c6606b call 0x11c65f76 */
  push32(0x11c66070u); f_11c65f76();
  /* 11c66070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66072 pop ecx */
  ECX = (pop32());
  /* 11c66073 jne 0x11c6614a */
  if (!C.zf) goto L_11c6614a;
  /* 11c66079 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6607c push eax */
  push32((uint32_t)(EAX));
  /* 11c6607d call 0x11c65f6a */
  push32(0x11c66082u); f_11c65f6a();
  /* 11c66082 pop ecx */
  ECX = (pop32());
L_11c66083:;
  /* 11c66083 push 2 */
  push32((uint32_t)(0x2u));
L_11c66085:;
  /* 11c66085 pop eax */
  EAX = (pop32());
  /* 11c66086 jmp 0x11c6614c */
  goto L_11c6614c;
L_11c6608b:;
  /* 11c6608b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6608e push eax */
  push32((uint32_t)(EAX));
  /* 11c6608f lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c66092 push eax */
  push32((uint32_t)(EAX));
  /* 11c66093 call 0x11c65f4f */
  push32(0x11c66098u); f_11c65f4f();
  /* 11c66098 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c6609b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6609e push eax */
  push32((uint32_t)(EAX));
  /* 11c6609f call 0x11c65ec3 */
  push32(0x11c660a4u); f_11c65ec3();
  /* 11c660a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c660a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c660a9 je 0x11c660ac */
  if (C.zf) goto L_11c660ac;
  /* 11c660ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c660ac:;
  /* 11c660ac mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c660af mov ecx, eax */
  ECX = (EAX);
  /* 11c660b1 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c660b4 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c660b6 jge 0x11c660c4 */
  if ((C.sf==C.of)) goto L_11c660c4;
  /* 11c660b8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c660bb push eax */
  push32((uint32_t)(EAX));
  /* 11c660bc call 0x11c65f6a */
  push32(0x11c660c1u); f_11c65f6a();
  /* 11c660c1 pop ecx */
  ECX = (pop32());
  /* 11c660c2 jmp 0x11c66100 */
  goto L_11c66100;
L_11c660c4:;
  /* 11c660c4 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c660c6 jg 0x11c66107 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c66107;
  /* 11c660c8 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c660ca mov esi, eax */
  ESI = (EAX);
  /* 11c660cc lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c660cf push eax */
  push32((uint32_t)(EAX));
  /* 11c660d0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c660d3 push eax */
  push32((uint32_t)(EAX));
  /* 11c660d4 call 0x11c65f4f */
  push32(0x11c660d9u); f_11c65f4f();
  /* 11c660d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c660dc push esi */
  push32((uint32_t)(ESI));
  /* 11c660dd push eax */
  push32((uint32_t)(EAX));
  /* 11c660de call 0x11c65f91 */
  push32(0x11c660e3u); f_11c65f91();
  /* 11c660e3 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c660e6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c660e9 push eax */
  push32((uint32_t)(EAX));
  /* 11c660ea call 0x11c65ec3 */
  push32(0x11c660efu); f_11c65ec3();
  /* 11c660ef mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11c660f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c660f3 push eax */
  push32((uint32_t)(EAX));
  /* 11c660f4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c660f7 push eax */
  push32((uint32_t)(EAX));
  /* 11c660f8 call 0x11c65f91 */
  push32(0x11c660fdu); f_11c65f91();
  /* 11c660fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c66100:;
  /* 11c66100 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c66102 jmp 0x11c66083 */
  goto L_11c66083;
L_11c66107:;
  /* 11c66107 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66109 jl 0x11c66133 */
  if ((C.sf!=C.of)) goto L_11c66133;
  /* 11c6610b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6610e push eax */
  push32((uint32_t)(EAX));
  /* 11c6610f call 0x11c65f6a */
  push32(0x11c66114u); f_11c65f6a();
  /* 11c66114 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11c66117 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11c6611b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6611e push eax */
  push32((uint32_t)(EAX));
  /* 11c6611f call 0x11c65f91 */
  push32(0x11c66124u); f_11c65f91();
  /* 11c66124 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11c66127 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6612a add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6612c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6612e jmp 0x11c66085 */
  goto L_11c66085;
L_11c66133:;
  /* 11c66133 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11c66136 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11c66139 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11c6613d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c66140 push eax */
  push32((uint32_t)(EAX));
  /* 11c66141 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66143 call 0x11c65f91 */
  push32(0x11c66148u); f_11c65f91();
  /* 11c66148 pop ecx */
  ECX = (pop32());
  /* 11c66149 pop ecx */
  ECX = (pop32());
L_11c6614a:;
  /* 11c6614a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6614c:;
  /* 11c6614c push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c6614e pop ecx */
  ECX = (pop32());
  /* 11c6614f sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66152 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11c66155 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c66157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6615a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6615c sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6615e and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c66164 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c66166 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c66169 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6616c jne 0x11c6617b */
  if (!C.zf) goto L_11c6617b;
  /* 11c6616e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c66171 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c66174 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c66177 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c66179 jmp 0x11c66185 */
  goto L_11c66185;
L_11c6617b:;
  /* 11c6617b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6617e jne 0x11c66185 */
  if (!C.zf) goto L_11c66185;
  /* 11c66180 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c66183 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11c66185:;
  /* 11c66185 pop edi */
  EDI = (pop32());
  /* 11c66186 pop esi */
  ESI = (pop32());
  /* 11c66187 pop ebx */
  EBX = (pop32());
  /* 11c66188 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c66189 ret  */
  ESPCHK(0x11c6601eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000618a @ 0x11c6618a (22 bytes, 6 insns) */
void f_11c6618a(void) {
  FTRACE(0x11c6618au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6618a push 0x11c70978 */
  push32((uint32_t)(0x11c70978u));
  /* 11c6618f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c66193 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c66197 call 0x11c6601e */
  push32(0x11c6619cu); f_11c6601e();
  /* 11c6619c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6619f ret  */
  ESPCHK(0x11c6618au, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x11c661a0 (22 bytes, 6 insns) */
void f_11c661a0(void) {
  FTRACE(0x11c661a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c661a0 push 0x11c70990 */
  push32((uint32_t)(0x11c70990u));
  /* 11c661a5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c661a9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c661ad call 0x11c6601e */
  push32(0x11c661b2u); f_11c6601e();
  /* 11c661b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c661b5 ret  */
  ESPCHK(0x11c661a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b6 @ 0x11c661b6 (45 bytes, 21 insns) */
void f_11c661b6(void) {
  FTRACE(0x11c661b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c661b6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c661b7 mov ebp, esp */
  EBP = (ESP);
  /* 11c661b9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c661bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c661be push eax */
  push32((uint32_t)(EAX));
  /* 11c661bf push eax */
  push32((uint32_t)(EAX));
  /* 11c661c0 push eax */
  push32((uint32_t)(EAX));
  /* 11c661c1 push eax */
  push32((uint32_t)(EAX));
  /* 11c661c2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c661c5 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11c661c8 push eax */
  push32((uint32_t)(EAX));
  /* 11c661c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c661cc push eax */
  push32((uint32_t)(EAX));
  /* 11c661cd call 0x11c69e56 */
  push32(0x11c661d2u); f_11c69e56();
  /* 11c661d2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c661d5 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c661d8 push eax */
  push32((uint32_t)(EAX));
  /* 11c661d9 call 0x11c6618a */
  push32(0x11c661deu); f_11c6618a();
  /* 11c661de add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c661e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c661e2 ret  */
  ESPCHK(0x11c661b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e3 @ 0x11c661e3 (45 bytes, 21 insns) */
void f_11c661e3(void) {
  FTRACE(0x11c661e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c661e3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c661e4 mov ebp, esp */
  EBP = (ESP);
  /* 11c661e6 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c661e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c661eb push eax */
  push32((uint32_t)(EAX));
  /* 11c661ec push eax */
  push32((uint32_t)(EAX));
  /* 11c661ed push eax */
  push32((uint32_t)(EAX));
  /* 11c661ee push eax */
  push32((uint32_t)(EAX));
  /* 11c661ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c661f2 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11c661f5 push eax */
  push32((uint32_t)(EAX));
  /* 11c661f6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c661f9 push eax */
  push32((uint32_t)(EAX));
  /* 11c661fa call 0x11c69e56 */
  push32(0x11c661ffu); f_11c69e56();
  /* 11c661ff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c66202 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c66205 push eax */
  push32((uint32_t)(EAX));
  /* 11c66206 call 0x11c661a0 */
  push32(0x11c6620bu); f_11c661a0();
  /* 11c6620b add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6620e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6620f ret  */
  ESPCHK(0x11c661e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x11c66210 (119 bytes, 57 insns) */
void f_11c66210(void) {
  FTRACE(0x11c66210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66210 push ebp */
  push32((uint32_t)(EBP));
  /* 11c66211 mov ebp, esp */
  EBP = (ESP);
  /* 11c66213 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c66216 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66217 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6621a push esi */
  push32((uint32_t)(ESI));
  /* 11c6621b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6621e mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11c66221 push edi */
  push32((uint32_t)(EDI));
  /* 11c66222 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11c66225 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11c66228 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6622a mov eax, edi */
  EAX = (EDI);
  /* 11c6622c jle 0x11c6624d */
  if ((C.zf||C.sf!=C.of)) goto L_11c6624d;
  /* 11c6622e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c66231 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c66233:;
  /* 11c66233 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c66235 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c66237 je 0x11c6623f */
  if (C.zf) goto L_11c6623f;
  /* 11c66239 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11c6623c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6623d jmp 0x11c66242 */
  goto L_11c66242;
L_11c6623f:;
  /* 11c6623f push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11c66241 pop edx */
  EDX = (pop32());
L_11c66242:;
  /* 11c66242 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c66244 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c66245 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11c66248 jne 0x11c66233 */
  if (!C.zf) goto L_11c66233;
  /* 11c6624a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11c6624d:;
  /* 11c6624d and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c66250 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c66252 jl 0x11c66266 */
  if ((C.sf!=C.of)) goto L_11c66266;
  /* 11c66254 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66257 jl 0x11c66266 */
  if ((C.sf!=C.of)) goto L_11c66266;
L_11c66259:;
  /* 11c66259 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6625a cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6625d jne 0x11c66264 */
  if (!C.zf) goto L_11c66264;
  /* 11c6625f mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c66262 jmp 0x11c66259 */
  goto L_11c66259;
L_11c66264:;
  /* 11c66264 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11c66266:;
  /* 11c66266 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66269 jne 0x11c66270 */
  if (!C.zf) goto L_11c66270;
  /* 11c6626b inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11c6626e jmp 0x11c66282 */
  goto L_11c66282;
L_11c66270:;
  /* 11c66270 push edi */
  push32((uint32_t)(EDI));
  /* 11c66271 call 0x11c66830 */
  push32(0x11c66276u); f_11c66830();
  /* 11c66276 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c66277 push eax */
  push32((uint32_t)(EAX));
  /* 11c66278 push edi */
  push32((uint32_t)(EDI));
  /* 11c66279 push esi */
  push32((uint32_t)(ESI));
  /* 11c6627a call 0x11c664f0 */
  push32(0x11c6627fu); f_11c664f0();
  /* 11c6627f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c66282:;
  /* 11c66282 pop edi */
  EDI = (pop32());
  /* 11c66283 pop esi */
  ESI = (pop32());
  /* 11c66284 pop ebx */
  EBX = (pop32());
  /* 11c66285 pop ebp */
  EBP = (pop32());
  /* 11c66286 ret  */
  ESPCHK(0x11c66210u, _esp0);
  ESP += 4; return;
}

/* FUN_10006287 @ 0x11c66287 (92 bytes, 41 insns) */
void f_11c66287(void) {
  FTRACE(0x11c66287u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66287 push ebp */
  push32((uint32_t)(EBP));
  /* 11c66288 mov ebp, esp */
  EBP = (ESP);
  /* 11c6628a sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6628d push esi */
  push32((uint32_t)(ESI));
  /* 11c6628e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c66291 push edi */
  push32((uint32_t)(EDI));
  /* 11c66292 push eax */
  push32((uint32_t)(EAX));
  /* 11c66293 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c66296 push eax */
  push32((uint32_t)(EAX));
  /* 11c66297 call 0x11c662e3 */
  push32(0x11c6629cu); f_11c662e3();
  /* 11c6629c pop ecx */
  ECX = (pop32());
  /* 11c6629d lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c662a0 pop ecx */
  ECX = (pop32());
  /* 11c662a1 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11c662a4 push eax */
  push32((uint32_t)(EAX));
  /* 11c662a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c662a7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c662a9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c662ac mov edi, esp */
  EDI = (ESP);
  /* 11c662ae movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c662af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c662b0 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11c662b2 call 0x11c6a327 */
  push32(0x11c662b7u); f_11c6a327();
  /* 11c662b7 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c662ba mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c662bd mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c662c0 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11c662c4 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c662c6 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11c662ca mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c662cd lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c662d0 push eax */
  push32((uint32_t)(EAX));
  /* 11c662d1 push edi */
  push32((uint32_t)(EDI));
  /* 11c662d2 call 0x11c663a0 */
  push32(0x11c662d7u); f_11c663a0();
  /* 11c662d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c662da mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11c662dd mov eax, esi */
  EAX = (ESI);
  /* 11c662df pop edi */
  EDI = (pop32());
  /* 11c662e0 pop esi */
  ESI = (pop32());
  /* 11c662e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c662e2 ret  */
  ESPCHK(0x11c66287u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e3 @ 0x11c662e3 (182 bytes, 70 insns) */
void f_11c662e3(void) {
  FTRACE(0x11c662e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c662e3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c662e4 mov ebp, esp */
  EBP = (ESP);
  /* 11c662e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c662e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c662ea push ebx */
  push32((uint32_t)(EBX));
  /* 11c662eb push esi */
  push32((uint32_t)(ESI));
  /* 11c662ec push edi */
  push32((uint32_t)(EDI));
  /* 11c662ed mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11c662f1 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11c662f6 mov ecx, eax */
  ECX = (EAX);
  /* 11c662f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11c662fd shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c66300 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c66302 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c66305 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c66308 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11c6630a movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11c6630d mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c66312 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c66317 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c66319 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c6631c je 0x11c66331 */
  if (C.zf) goto L_11c66331;
  /* 11c6631e cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66320 je 0x11c6632a */
  if (C.zf) goto L_11c6632a;
  /* 11c66322 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11c66328 jmp 0x11c66352 */
  goto L_11c66352;
L_11c6632a:;
  /* 11c6632a mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11c6632f jmp 0x11c66352 */
  goto L_11c66352;
L_11c66331:;
  /* 11c66331 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c66333 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66335 jne 0x11c66349 */
  if (!C.zf) goto L_11c66349;
  /* 11c66337 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66339 jne 0x11c66349 */
  if (!C.zf) goto L_11c66349;
  /* 11c6633b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6633e mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11c66341 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11c66343 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11c66347 jmp 0x11c66394 */
  goto L_11c66394;
L_11c66349:;
  /* 11c66349 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11c6634f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c66352:;
  /* 11c66352 mov ecx, edx */
  ECX = (EDX);
  /* 11c66354 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11c66357 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11c6635a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6635c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6635f or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11c66362 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11c66365 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c66368 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11c6636a:;
  /* 11c6636a test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11c6636c jne 0x11c6638b */
  if (!C.zf) goto L_11c6638b;
  /* 11c6636e mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c66370 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66372 mov ebx, edx */
  EBX = (EDX);
  /* 11c66374 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11c66377 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11c66379 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11c6637c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c6637e mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11c66381 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66387 mov ecx, ebx */
  ECX = (EBX);
  /* 11c66389 jmp 0x11c6636a */
  goto L_11c6636a;
L_11c6638b:;
  /* 11c6638b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6638e or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c66390 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11c66394:;
  /* 11c66394 pop edi */
  EDI = (pop32());
  /* 11c66395 pop esi */
  ESI = (pop32());
  /* 11c66396 pop ebx */
  EBX = (pop32());
  /* 11c66397 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c66398 ret  */
  ESPCHK(0x11c662e3u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x11c663a0 (7 bytes, 3 insns) */
void f_11c663a0(void) {
  FTRACE(0x11c663a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c663a0 push edi */
  push32((uint32_t)(EDI));
  /* 11c663a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c663a5 jmp 0x11c66411 */
  jmp_ind(0x11c66411u); return;
}

/* FUN_100063b0 @ 0x11c663b0 (224 bytes, 84 insns) */
void f_11c663b0(void) {
  FTRACE(0x11c663b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c663b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c663b4 push edi */
  push32((uint32_t)(EDI));
  /* 11c663b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c663bb je 0x11c663cc */
  if (C.zf) goto L_11c663cc;
L_11c663bd:;
  /* 11c663bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c663bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c663c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c663c2 je 0x11c663ff */
  if (C.zf) goto L_11c663ff;
  /* 11c663c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c663ca jne 0x11c663bd */
  if (!C.zf) goto L_11c663bd;
L_11c663cc:;
  /* 11c663cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c663ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c663d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c663d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c663d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c663da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c663dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c663e2 je 0x11c663cc */
  if (C.zf) goto L_11c663cc;
  /* 11c663e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c663e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c663e9 je 0x11c6640e */
  if (C.zf) goto L_11c6640e;
  /* 11c663eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c663ed je 0x11c66409 */
  if (C.zf) goto L_11c66409;
  /* 11c663ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c663f4 je 0x11c66404 */
  if (C.zf) goto L_11c66404;
  /* 11c663f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c663fb je 0x11c663ff */
  if (C.zf) goto L_11c663ff;
  /* 11c663fd jmp 0x11c663cc */
  goto L_11c663cc;
L_11c663ff:;
  /* 11c663ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11c66402 jmp 0x11c66411 */
  goto L_11c66411;
L_11c66404:;
  /* 11c66404 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11c66407 jmp 0x11c66411 */
  goto L_11c66411;
L_11c66409:;
  /* 11c66409 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11c6640c jmp 0x11c66411 */
  goto L_11c66411;
L_11c6640e:;
  /* 11c6640e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11c66411:;
  /* 11c66411 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c66415 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c6641b je 0x11c66436 */
  if (C.zf) goto L_11c66436;
L_11c6641d:;
  /* 11c6641d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c6641f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c66420 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c66422 je 0x11c66488 */
  if (C.zf) goto L_11c66488;
  /* 11c66424 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c66426 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c66427 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c6642d jne 0x11c6641d */
  if (!C.zf) goto L_11c6641d;
  /* 11c6642f jmp 0x11c66436 */
  goto L_11c66436;
L_11c66431:;
  /* 11c66431 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c66433 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c66436:;
  /* 11c66436 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c6643b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6643d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6643f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c66442 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c66444 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11c66446 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66449 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c6644e je 0x11c66431 */
  if (C.zf) goto L_11c66431;
  /* 11c66450 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c66452 je 0x11c66488 */
  if (C.zf) goto L_11c66488;
  /* 11c66454 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c66456 je 0x11c6647f */
  if (C.zf) goto L_11c6647f;
  /* 11c66458 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c6645e je 0x11c66472 */
  if (C.zf) goto L_11c66472;
  /* 11c66460 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c66466 je 0x11c6646a */
  if (C.zf) goto L_11c6646a;
  /* 11c66468 jmp 0x11c66431 */
  goto L_11c66431;
L_11c6646a:;
  /* 11c6646a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c6646c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c66470 pop edi */
  EDI = (pop32());
  /* 11c66471 ret  */
  ESPCHK(0x11c663b0u, _esp0);
  ESP += 4; return;
L_11c66472:;
  /* 11c66472 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c66475 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c66479 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11c6647d pop edi */
  EDI = (pop32());
  /* 11c6647e ret  */
  ESPCHK(0x11c663b0u, _esp0);
  ESP += 4; return;
L_11c6647f:;
  /* 11c6647f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c66482 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c66486 pop edi */
  EDI = (pop32());
  /* 11c66487 ret  */
  ESPCHK(0x11c663b0u, _esp0);
  ESP += 4; return;
L_11c66488:;
  /* 11c66488 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c6648a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6648e pop edi */
  EDI = (pop32());
  /* 11c6648f ret  */
  ESPCHK(0x11c663b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11c66490 (88 bytes, 40 insns) */
void f_11c66490(void) {
  FTRACE(0x11c66490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66490 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c66494 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c66498 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c6649a je 0x11c664e3 */
  if (C.zf) goto L_11c664e3;
  /* 11c6649c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6649e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c664a2 push edi */
  push32((uint32_t)(EDI));
  /* 11c664a3 mov edi, ecx */
  EDI = (ECX);
  /* 11c664a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c664a8 jb 0x11c664d7 */
  if (C.cf) goto L_11c664d7;
  /* 11c664aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c664ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c664af je 0x11c664b9 */
  if (C.zf) goto L_11c664b9;
  /* 11c664b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11c664b3:;
  /* 11c664b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c664b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c664b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c664b7 jne 0x11c664b3 */
  if (!C.zf) goto L_11c664b3;
L_11c664b9:;
  /* 11c664b9 mov ecx, eax */
  ECX = (EAX);
  /* 11c664bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c664be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c664c0 mov ecx, eax */
  ECX = (EAX);
  /* 11c664c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c664c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c664c7 mov ecx, edx */
  ECX = (EDX);
  /* 11c664c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c664cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c664cf je 0x11c664d7 */
  if (C.zf) goto L_11c664d7;
  /* 11c664d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c664d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c664d5 je 0x11c664dd */
  if (C.zf) goto L_11c664dd;
L_11c664d7:;
  /* 11c664d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c664d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c664da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c664db jne 0x11c664d7 */
  if (!C.zf) goto L_11c664d7;
L_11c664dd:;
  /* 11c664dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c664e1 pop edi */
  EDI = (pop32());
  /* 11c664e2 ret  */
  ESPCHK(0x11c66490u, _esp0);
  ESP += 4; return;
L_11c664e3:;
  /* 11c664e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c664e7 ret  */
  ESPCHK(0x11c66490u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x11c664f0 (664 bytes, 255 insns) [15 switch table(s)] */
void f_11c664f0(void) {
  FTRACE(0x11c664f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c664f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c664f1 mov ebp, esp */
  EBP = (ESP);
  /* 11c664f3 push edi */
  push32((uint32_t)(EDI));
  /* 11c664f4 push esi */
  push32((uint32_t)(ESI));
  /* 11c664f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c664f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c664fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c664fe mov eax, ecx */
  EAX = (ECX);
  /* 11c66500 mov edx, ecx */
  EDX = (ECX);
  /* 11c66502 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66504 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66506 jbe 0x11c66510 */
  if ((C.cf||C.zf)) goto L_11c66510;
  /* 11c66508 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6650a jb 0x11c66688 */
  if (C.cf) goto L_11c66688;
L_11c66510:;
  /* 11c66510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c66516 jne 0x11c6652c */
  if (!C.zf) goto L_11c6652c;
  /* 11c66518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c6651b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c6651e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66521 jb 0x11c6654c */
  if (C.cf) goto L_11c6654c;
  /* 11c66523 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c66525 jmp dword ptr [edx*4 + 0x11c66638] */
  switch (EDX) {
    case 0: goto L_11c66648;
    case 1: goto L_11c66650;
    case 2: goto L_11c6665c;
    case 3: goto L_11c66670;
    default: x86_unimpl("switch@0x11c66525 out of table"); return;
  }
L_11c6652c:;
  /* 11c6652c mov eax, edi */
  EAX = (EDI);
  /* 11c6652e mov edx, 3 */
  EDX = (0x3u);
  /* 11c66533 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66536 jb 0x11c66544 */
  if (C.cf) goto L_11c66544;
  /* 11c66538 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6653b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6653d jmp dword ptr [eax*4 + 0x11c66550] */
  switch (EAX) {
    case 1: goto L_11c66560;
    case 2: goto L_11c6658c;
    case 3: goto L_11c665b0;
    default: x86_unimpl("switch@0x11c6653d out of table"); return;
  }
L_11c66544:;
  /* 11c66544 jmp dword ptr [ecx*4 + 0x11c66648] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c66648)))); return;
  /* 11c6654b nop  */
  /* nop */
L_11c6654c:;
  /* 11c6654c jmp dword ptr [ecx*4 + 0x11c665cc] */
  switch (ECX) {
    case 0: goto L_11c6662f;
    case 1: goto L_11c6661c;
    case 2: goto L_11c66614;
    case 3: goto L_11c6660c;
    case 4: goto L_11c66604;
    case 5: goto L_11c665fc;
    case 6: goto L_11c665f4;
    case 7: goto L_11c665ec;
    default: x86_unimpl("switch@0x11c6654c out of table"); return;
  }
  /* 11c66553 nop  */
  /* nop */
L_11c66560:;
  /* 11c66560 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c66562 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66564 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c66566 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c66569 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6656c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6656f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c66572 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c66575 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66578 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6657b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6657e jb 0x11c6654c */
  if (C.cf) goto L_11c6654c;
  /* 11c66580 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c66582 jmp dword ptr [edx*4 + 0x11c66638] */
  switch (EDX) {
    case 0: goto L_11c66648;
    case 1: goto L_11c66650;
    case 2: goto L_11c6665c;
    case 3: goto L_11c66670;
    default: x86_unimpl("switch@0x11c66582 out of table"); return;
  }
  /* 11c66589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c6658c:;
  /* 11c6658c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6658e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66590 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c66592 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c66595 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c66598 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6659b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6659e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c665a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c665a4 jb 0x11c6654c */
  if (C.cf) goto L_11c6654c;
  /* 11c665a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c665a8 jmp dword ptr [edx*4 + 0x11c66638] */
  switch (EDX) {
    case 0: goto L_11c66648;
    case 1: goto L_11c66650;
    case 2: goto L_11c6665c;
    case 3: goto L_11c66670;
    default: x86_unimpl("switch@0x11c665a8 out of table"); return;
  }
  /* 11c665af nop  */
  /* nop */
L_11c665b0:;
  /* 11c665b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c665b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c665b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c665b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c665b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c665ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c665bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c665be jb 0x11c6654c */
  if (C.cf) goto L_11c6654c;
  /* 11c665c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c665c2 jmp dword ptr [edx*4 + 0x11c66638] */
  switch (EDX) {
    case 0: goto L_11c66648;
    case 1: goto L_11c66650;
    case 2: goto L_11c6665c;
    case 3: goto L_11c66670;
    default: x86_unimpl("switch@0x11c665c2 out of table"); return;
  }
  /* 11c665c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c665ec:;
  /* 11c665ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c665f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c665f4:;
  /* 11c665f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c665f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c665fc:;
  /* 11c665fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c66600 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c66604:;
  /* 11c66604 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c66608 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c6660c:;
  /* 11c6660c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c66610 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c66614:;
  /* 11c66614 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c66618 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c6661c:;
  /* 11c6661c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c66620 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c66624 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c6662b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6662d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c6662f:;
  /* 11c6662f jmp dword ptr [edx*4 + 0x11c66638] */
  switch (EDX) {
    case 0: goto L_11c66648;
    case 1: goto L_11c66650;
    case 2: goto L_11c6665c;
    case 3: goto L_11c66670;
    default: x86_unimpl("switch@0x11c6662f out of table"); return;
  }
  /* 11c66636 mov edi, edi */
  EDI = (EDI);
L_11c66648:;
  /* 11c66648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6664b pop esi */
  ESI = (pop32());
  /* 11c6664c pop edi */
  EDI = (pop32());
  /* 11c6664d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6664e ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c6664f nop  */
  /* nop */
L_11c66650:;
  /* 11c66650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c66654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66657 pop esi */
  ESI = (pop32());
  /* 11c66658 pop edi */
  EDI = (pop32());
  /* 11c66659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6665a ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c6665b nop  */
  /* nop */
L_11c6665c:;
  /* 11c6665c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6665e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c66660 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c66663 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c66666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66669 pop esi */
  ESI = (pop32());
  /* 11c6666a pop edi */
  EDI = (pop32());
  /* 11c6666b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6666c ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c6666d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c66670:;
  /* 11c66670 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66672 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c66674 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c66677 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6667a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6667d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c66680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66683 pop esi */
  ESI = (pop32());
  /* 11c66684 pop edi */
  EDI = (pop32());
  /* 11c66685 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c66686 ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c66687 nop  */
  /* nop */
L_11c66688:;
  /* 11c66688 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c6668c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c66690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c66696 jne 0x11c666bc */
  if (!C.zf) goto L_11c666bc;
  /* 11c66698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c6669b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c6669e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c666a1 jb 0x11c666b0 */
  if (C.cf) goto L_11c666b0;
  /* 11c666a3 std  */
  C.df=1;
  /* 11c666a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c666a6 cld  */
  C.df=0;
  /* 11c666a7 jmp dword ptr [edx*4 + 0x11c667d0] */
  switch (EDX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c666a7 out of table"); return;
  }
  /* 11c666ae mov edi, edi */
  EDI = (EDI);
L_11c666b0:;
  /* 11c666b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c666b2 jmp dword ptr [ecx*4 + 0x11c66780] */
  switch (ECX) {
    case 0: goto L_11c667c7;
    default: x86_unimpl("switch@0x11c666b2 out of table"); return;
  }
  /* 11c666b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c666bc:;
  /* 11c666bc mov eax, edi */
  EAX = (EDI);
  /* 11c666be mov edx, 3 */
  EDX = (0x3u);
  /* 11c666c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c666c6 jb 0x11c666d4 */
  if (C.cf) goto L_11c666d4;
  /* 11c666c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c666cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c666cd jmp dword ptr [eax*4 + 0x11c666d8] */
  switch (EAX) {
    case 1: goto L_11c666e8;
    case 2: goto L_11c66708;
    case 3: goto L_11c66730;
    default: x86_unimpl("switch@0x11c666cd out of table"); return;
  }
L_11c666d4:;
  /* 11c666d4 jmp dword ptr [ecx*4 + 0x11c667d0] */
  switch (ECX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c666d4 out of table"); return;
  }
  /* 11c666db nop  */
  /* nop */
L_11c666e8:;
  /* 11c666e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c666eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c666ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c666f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c666f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c666f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c666f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c666f8 jb 0x11c666b0 */
  if (C.cf) goto L_11c666b0;
  /* 11c666fa std  */
  C.df=1;
  /* 11c666fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c666fd cld  */
  C.df=0;
  /* 11c666fe jmp dword ptr [edx*4 + 0x11c667d0] */
  switch (EDX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c666fe out of table"); return;
  }
  /* 11c66705 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c66708:;
  /* 11c66708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c6670b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6670d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c66710 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c66713 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c66716 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c66719 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6671c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6671f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66722 jb 0x11c666b0 */
  if (C.cf) goto L_11c666b0;
  /* 11c66724 std  */
  C.df=1;
  /* 11c66725 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c66727 cld  */
  C.df=0;
  /* 11c66728 jmp dword ptr [edx*4 + 0x11c667d0] */
  switch (EDX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c66728 out of table"); return;
  }
  /* 11c6672f nop  */
  /* nop */
L_11c66730:;
  /* 11c66730 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c66733 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c66735 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c66738 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6673b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c6673e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c66741 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c66744 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c66747 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6674a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6674d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66750 jb 0x11c666b0 */
  if (C.cf) goto L_11c666b0;
  /* 11c66756 std  */
  C.df=1;
  /* 11c66757 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c66759 cld  */
  C.df=0;
  /* 11c6675a jmp dword ptr [edx*4 + 0x11c667d0] */
  switch (EDX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c6675a out of table"); return;
  }
  /* 11c66761 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c66764 test byte ptr [edi - 0x3a], ah */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x3a)))&(AH); fl_logic(_r,8); }
  /* 11c66767 adc dword ptr [edi + 0x679411c6], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x679411c6))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x679411c6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6676f adc dword ptr [edi + 0x67a411c6], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x67a411c6))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x67a411c6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c66777 adc dword ptr [edi + 0x67b411c6], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x67b411c6))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + 0x67b411c6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c66784 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c66788 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c6678c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c66790 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c66794 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c66798 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c6679c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c667a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c667a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c667a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c667ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c667b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c667b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c667b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c667bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c667c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c667c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c667c7:;
  /* 11c667c7 jmp dword ptr [edx*4 + 0x11c667d0] */
  switch (EDX) {
    case 0: goto L_11c667e0;
    case 1: goto L_11c667e8;
    case 2: goto L_11c667f8;
    case 3: goto L_11c6680c;
    default: x86_unimpl("switch@0x11c667c7 out of table"); return;
  }
  /* 11c667ce mov edi, edi */
  EDI = (EDI);
L_11c667e0:;
  /* 11c667e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c667e3 pop esi */
  ESI = (pop32());
  /* 11c667e4 pop edi */
  EDI = (pop32());
  /* 11c667e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c667e6 ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c667e7 nop  */
  /* nop */
L_11c667e8:;
  /* 11c667e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c667eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c667ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c667f1 pop esi */
  ESI = (pop32());
  /* 11c667f2 pop edi */
  EDI = (pop32());
  /* 11c667f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c667f4 ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c667f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c667f8:;
  /* 11c667f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c667fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c667fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c66801 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c66804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66807 pop esi */
  ESI = (pop32());
  /* 11c66808 pop edi */
  EDI = (pop32());
  /* 11c66809 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6680a ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
  /* 11c6680b nop  */
  /* nop */
L_11c6680c:;
  /* 11c6680c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c6680f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c66812 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c66815 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c66818 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c6681b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6681e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66821 pop esi */
  ESI = (pop32());
  /* 11c66822 pop edi */
  EDI = (pop32());
  /* 11c66823 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c66824 ret  */
  ESPCHK(0x11c664f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11c66830 (123 bytes, 44 insns) */
void f_11c66830(void) {
  FTRACE(0x11c66830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66830 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c66834 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c6683a je 0x11c66850 */
  if (C.zf) goto L_11c66850;
L_11c6683c:;
  /* 11c6683c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c6683e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6683f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c66841 je 0x11c66883 */
  if (C.zf) goto L_11c66883;
  /* 11c66843 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c66849 jne 0x11c6683c */
  if (!C.zf) goto L_11c6683c;
  /* 11c6684b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c66850:;
  /* 11c66850 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c66852 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c66857 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66859 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6685c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6685e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66861 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c66866 je 0x11c66850 */
  if (C.zf) goto L_11c66850;
  /* 11c66868 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c6686b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6686d je 0x11c668a1 */
  if (C.zf) goto L_11c668a1;
  /* 11c6686f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c66871 je 0x11c66897 */
  if (C.zf) goto L_11c66897;
  /* 11c66873 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c66878 je 0x11c6688d */
  if (C.zf) goto L_11c6688d;
  /* 11c6687a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c6687f je 0x11c66883 */
  if (C.zf) goto L_11c66883;
  /* 11c66881 jmp 0x11c66850 */
  goto L_11c66850;
L_11c66883:;
  /* 11c66883 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11c66886 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6688a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6688c ret  */
  ESPCHK(0x11c66830u, _esp0);
  ESP += 4; return;
L_11c6688d:;
  /* 11c6688d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11c66890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c66894 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66896 ret  */
  ESPCHK(0x11c66830u, _esp0);
  ESP += 4; return;
L_11c66897:;
  /* 11c66897 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11c6689a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6689e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c668a0 ret  */
  ESPCHK(0x11c66830u, _esp0);
  ESP += 4; return;
L_11c668a1:;
  /* 11c668a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11c668a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c668a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c668aa ret  */
  ESPCHK(0x11c66830u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b4 @ 0x11c668b4 (289 bytes, 98 insns) */
void f_11c668b4(void) {
  FTRACE(0x11c668b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c668b4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c668b5 mov ebp, esp */
  EBP = (ESP);
  /* 11c668b7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c668b9 push 0x11c6e638 */
  push32((uint32_t)(0x11c6e638u));
  /* 11c668be push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c668c3 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c668c9 push eax */
  push32((uint32_t)(EAX));
  /* 11c668ca mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c668d1 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c668d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c668d5 push esi */
  push32((uint32_t)(ESI));
  /* 11c668d6 push edi */
  push32((uint32_t)(EDI));
  /* 11c668d7 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c668da imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c668de mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c668e1 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c668e4 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c668e7 ja 0x11c668fd */
  if ((!C.cf&&!C.zf)) goto L_11c668fd;
  /* 11c668e9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c668eb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c668ed jne 0x11c668f2 */
  if (!C.zf) goto L_11c668f2;
  /* 11c668ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11c668f1 pop esi */
  ESI = (pop32());
L_11c668f2:;
  /* 11c668f2 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c668f5 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c668f8 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c668fb jmp 0x11c668ff */
  goto L_11c668ff;
L_11c668fd:;
  /* 11c668fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c668ff:;
  /* 11c668ff mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c66902 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66905 ja 0x11c669b3 */
  if ((!C.cf&&!C.zf)) goto L_11c669b3;
  /* 11c6690b mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c66910 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66913 jne 0x11c66956 */
  if (!C.zf) goto L_11c66956;
  /* 11c66915 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c66918 cmp edi, dword ptr [0x11c88e3c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11c88e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6691e ja 0x11c6699c */
  if ((!C.cf&&!C.zf)) goto L_11c6699c;
  /* 11c66920 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66922 call 0x11c66a86 */
  push32(0x11c66927u); f_11c66a86();
  /* 11c66927 pop ecx */
  ECX = (pop32());
  /* 11c66928 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c6692b push edi */
  push32((uint32_t)(EDI));
  /* 11c6692c call 0x11c67543 */
  push32(0x11c66931u); f_11c67543();
  /* 11c66931 pop ecx */
  ECX = (pop32());
  /* 11c66932 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c66935 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c66939 call 0x11c6694d */
  push32(0x11c6693eu); f_11c6694d();
  /* 11c6693e cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66941 je 0x11c669a1 */
  if (C.zf) goto L_11c669a1;
  /* 11c66943 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c66946 jmp 0x11c66990 */
  goto L_11c66990;
  /* 11c66948 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6694a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6694d push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6694f call 0x11c66ae7 */
  push32(0x11c66954u); f_11c66ae7();
  /* 11c66954 pop ecx */
  ECX = (pop32());
  /* 11c66955 ret  */
  ESPCHK(0x11c668b4u, _esp0);
  ESP += 4; return;
L_11c66956:;
  /* 11c66956 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66959 jne 0x11c6699c */
  if (!C.zf) goto L_11c6699c;
  /* 11c6695b cmp esi, dword ptr [0x11c72c3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c72c3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66961 ja 0x11c6699c */
  if ((!C.cf&&!C.zf)) goto L_11c6699c;
  /* 11c66963 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66965 call 0x11c66a86 */
  push32(0x11c6696au); f_11c66a86();
  /* 11c6696a pop ecx */
  ECX = (pop32());
  /* 11c6696b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c66972 mov eax, esi */
  EAX = (ESI);
  /* 11c66974 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c66977 push eax */
  push32((uint32_t)(EAX));
  /* 11c66978 call 0x11c67fe6 */
  push32(0x11c6697du); f_11c67fe6();
  /* 11c6697d pop ecx */
  ECX = (pop32());
  /* 11c6697e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c66981 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c66985 call 0x11c669d6 */
  push32(0x11c6698au); f_11c669d6();
  /* 11c6698a cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6698d je 0x11c669a1 */
  if (C.zf) goto L_11c669a1;
  /* 11c6698f push esi */
  push32((uint32_t)(ESI));
L_11c66990:;
  /* 11c66990 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66991 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c66994 call 0x11c66490 */
  push32(0x11c66999u); f_11c66490();
  /* 11c66999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6699c:;
  /* 11c6699c cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6699f jne 0x11c669df */
  if (!C.zf) { jmp_ind(0x11c669dfu); return; }
L_11c669a1:;
  /* 11c669a1 push esi */
  push32((uint32_t)(ESI));
  /* 11c669a2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c669a4 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c669aa call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c669b0u);
  /* 11c669b0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11c669b3:;
  /* 11c669b3 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c669b6 jne 0x11c669df */
  if (!C.zf) { jmp_ind(0x11c669dfu); return; }
  /* 11c669b8 cmp dword ptr [0x11c87abc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87abc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c669be je 0x11c669df */
  if (C.zf) { jmp_ind(0x11c669dfu); return; }
  /* 11c669c0 push esi */
  push32((uint32_t)(ESI));
  /* 11c669c1 call 0x11c683bb */
  push32(0x11c669c6u); f_11c683bb();
  /* 11c669c6 pop ecx */
  ECX = (pop32());
  /* 11c669c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c669c9 jne 0x11c668ff */
  if (!C.zf) goto L_11c668ff;
  /* 11c669cf jmp 0x11c669e2 */
  jmp_ind(0x11c669e2u); return;
  /* 11c669d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000694d @ 0x11c6694d (9 bytes, 4 insns) */
void f_11c6694d(void) {
  FTRACE(0x11c6694du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6694d push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6694f call 0x11c66ae7 */
  push32(0x11c66954u); f_11c66ae7();
  /* 11c66954 pop ecx */
  ECX = (pop32());
  /* 11c66955 ret  */
  ESPCHK(0x11c6694du, _esp0);
  ESP += 4; return;
}

/* FUN_100069d6 @ 0x11c669d6 (9 bytes, 4 insns) */
void f_11c669d6(void) {
  FTRACE(0x11c669d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c669d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c669d8 call 0x11c66ae7 */
  push32(0x11c669ddu); f_11c66ae7();
  /* 11c669dd pop ecx */
  ECX = (pop32());
  /* 11c669de ret  */
  ESPCHK(0x11c669d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f1 @ 0x11c669f1 (41 bytes, 12 insns) */
void f_11c669f1(void) {
  FTRACE(0x11c669f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c669f1 push esi */
  push32((uint32_t)(ESI));
  /* 11c669f2 mov esi, dword ptr [0x11c6e06c] */
  ESI = (r32((uint32_t)(0x11c6e06c)));
  /* 11c669f8 push dword ptr [0x11c709f4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709f4))));
  /* 11c669fe call esi */
  call_ind((uint32_t)(ESI), 0x11c66a00u);
  /* 11c66a00 push dword ptr [0x11c709e4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709e4))));
  /* 11c66a06 call esi */
  call_ind((uint32_t)(ESI), 0x11c66a08u);
  /* 11c66a08 push dword ptr [0x11c709d4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709d4))));
  /* 11c66a0e call esi */
  call_ind((uint32_t)(ESI), 0x11c66a10u);
  /* 11c66a10 push dword ptr [0x11c709b4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709b4))));
  /* 11c66a16 call esi */
  call_ind((uint32_t)(ESI), 0x11c66a18u);
  /* 11c66a18 pop esi */
  ESI = (pop32());
  /* 11c66a19 ret  */
  ESPCHK(0x11c669f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a1a @ 0x11c66a1a (108 bytes, 34 insns) */
void f_11c66a1a(void) {
  FTRACE(0x11c66a1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66a1a push esi */
  push32((uint32_t)(ESI));
  /* 11c66a1b push edi */
  push32((uint32_t)(EDI));
  /* 11c66a1c mov edi, dword ptr [0x11c6e0ac] */
  EDI = (r32((uint32_t)(0x11c6e0ac)));
  /* 11c66a22 mov esi, 0x11c709b0 */
  ESI = (0x11c709b0u);
L_11c66a27:;
  /* 11c66a27 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c66a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66a2b je 0x11c66a58 */
  if (C.zf) goto L_11c66a58;
  /* 11c66a2d cmp esi, 0x11c709f4 */
  { uint32_t _a=(ESI),_b=(0x11c709f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a33 je 0x11c66a58 */
  if (C.zf) goto L_11c66a58;
  /* 11c66a35 cmp esi, 0x11c709e4 */
  { uint32_t _a=(ESI),_b=(0x11c709e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a3b je 0x11c66a58 */
  if (C.zf) goto L_11c66a58;
  /* 11c66a3d cmp esi, 0x11c709d4 */
  { uint32_t _a=(ESI),_b=(0x11c709d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a43 je 0x11c66a58 */
  if (C.zf) goto L_11c66a58;
  /* 11c66a45 cmp esi, 0x11c709b4 */
  { uint32_t _a=(ESI),_b=(0x11c709b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a4b je 0x11c66a58 */
  if (C.zf) goto L_11c66a58;
  /* 11c66a4d push eax */
  push32((uint32_t)(EAX));
  /* 11c66a4e call edi */
  call_ind((uint32_t)(EDI), 0x11c66a50u);
  /* 11c66a50 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c66a52 call 0x11c66afc */
  push32(0x11c66a57u); f_11c66afc();
  /* 11c66a57 pop ecx */
  ECX = (pop32());
L_11c66a58:;
  /* 11c66a58 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66a5b cmp esi, 0x11c70a70 */
  { uint32_t _a=(ESI),_b=(0x11c70a70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a61 jl 0x11c66a27 */
  if ((C.sf!=C.of)) goto L_11c66a27;
  /* 11c66a63 push dword ptr [0x11c709d4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709d4))));
  /* 11c66a69 call edi */
  call_ind((uint32_t)(EDI), 0x11c66a6bu);
  /* 11c66a6b push dword ptr [0x11c709e4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709e4))));
  /* 11c66a71 call edi */
  call_ind((uint32_t)(EDI), 0x11c66a73u);
  /* 11c66a73 push dword ptr [0x11c709f4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709f4))));
  /* 11c66a79 call edi */
  call_ind((uint32_t)(EDI), 0x11c66a7bu);
  /* 11c66a7b push dword ptr [0x11c709b4] */
  push32((uint32_t)(r32((uint32_t)(0x11c709b4))));
  /* 11c66a81 call edi */
  call_ind((uint32_t)(EDI), 0x11c66a83u);
  /* 11c66a83 pop edi */
  EDI = (pop32());
  /* 11c66a84 pop esi */
  ESI = (pop32());
  /* 11c66a85 ret  */
  ESPCHK(0x11c66a1au, _esp0);
  ESP += 4; return;
}

/* FUN_10006a86 @ 0x11c66a86 (97 bytes, 37 insns) */
void f_11c66a86(void) {
  FTRACE(0x11c66a86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66a86 push ebp */
  push32((uint32_t)(EBP));
  /* 11c66a87 mov ebp, esp */
  EBP = (ESP);
  /* 11c66a89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66a8c push esi */
  push32((uint32_t)(ESI));
  /* 11c66a8d cmp dword ptr [eax*4 + 0x11c709b0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c709b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66a95 lea esi, [eax*4 + 0x11c709b0] */
  ESI = ((uint32_t)(EAX*4 + 0x11c709b0));
  /* 11c66a9c jne 0x11c66adc */
  if (!C.zf) goto L_11c66adc;
  /* 11c66a9e push edi */
  push32((uint32_t)(EDI));
  /* 11c66a9f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c66aa1 call 0x11c64f87 */
  push32(0x11c66aa6u); f_11c64f87();
  /* 11c66aa6 mov edi, eax */
  EDI = (EAX);
  /* 11c66aa8 pop ecx */
  ECX = (pop32());
  /* 11c66aa9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c66aab jne 0x11c66ab5 */
  if (!C.zf) goto L_11c66ab5;
  /* 11c66aad push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c66aaf call 0x11c6432c */
  push32(0x11c66ab4u); f_11c6432c();
  /* 11c66ab4 pop ecx */
  ECX = (pop32());
L_11c66ab5:;
  /* 11c66ab5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c66ab7 call 0x11c66a86 */
  push32(0x11c66abcu); f_11c66a86();
  /* 11c66abc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66abf pop ecx */
  ECX = (pop32());
  /* 11c66ac0 push edi */
  push32((uint32_t)(EDI));
  /* 11c66ac1 jne 0x11c66acd */
  if (!C.zf) goto L_11c66acd;
  /* 11c66ac3 call dword ptr [0x11c6e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e06c))), 0x11c66ac9u);
  /* 11c66ac9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c66acb jmp 0x11c66ad3 */
  goto L_11c66ad3;
L_11c66acd:;
  /* 11c66acd call 0x11c66afc */
  push32(0x11c66ad2u); f_11c66afc();
  /* 11c66ad2 pop ecx */
  ECX = (pop32());
L_11c66ad3:;
  /* 11c66ad3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c66ad5 call 0x11c66ae7 */
  push32(0x11c66adau); f_11c66ae7();
  /* 11c66ada pop ecx */
  ECX = (pop32());
  /* 11c66adb pop edi */
  EDI = (pop32());
L_11c66adc:;
  /* 11c66adc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c66ade call dword ptr [0x11c6e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e068))), 0x11c66ae4u);
  /* 11c66ae4 pop esi */
  ESI = (pop32());
  /* 11c66ae5 pop ebp */
  EBP = (pop32());
  /* 11c66ae6 ret  */
  ESPCHK(0x11c66a86u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae7 @ 0x11c66ae7 (21 bytes, 7 insns) */
void f_11c66ae7(void) {
  FTRACE(0x11c66ae7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66ae7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c66ae8 mov ebp, esp */
  EBP = (ESP);
  /* 11c66aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66aed push dword ptr [eax*4 + 0x11c709b0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11c709b0))));
  /* 11c66af4 call dword ptr [0x11c6e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e064))), 0x11c66afau);
  /* 11c66afa pop ebp */
  EBP = (pop32());
  /* 11c66afb ret  */
  ESPCHK(0x11c66ae7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006afc @ 0x11c66afc (215 bytes, 75 insns) */
void f_11c66afc(void) {
  FTRACE(0x11c66afcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66afc push ebp */
  push32((uint32_t)(EBP));
  /* 11c66afd mov ebp, esp */
  EBP = (ESP);
  /* 11c66aff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c66b01 push 0x11c6e650 */
  push32((uint32_t)(0x11c6e650u));
  /* 11c66b06 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c66b0b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c66b11 push eax */
  push32((uint32_t)(EAX));
  /* 11c66b12 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c66b19 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66b1c push ebx */
  push32((uint32_t)(EBX));
  /* 11c66b1d push esi */
  push32((uint32_t)(ESI));
  /* 11c66b1e push edi */
  push32((uint32_t)(EDI));
  /* 11c66b1f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c66b22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c66b24 je 0x11c66bd6 */
  if (C.zf) { jmp_ind(0x11c66bd6u); return; }
  /* 11c66b2a mov eax, dword ptr [0x11c88e44] */
  EAX = (r32((uint32_t)(0x11c88e44)));
  /* 11c66b2f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66b32 jne 0x11c66b6f */
  if (!C.zf) goto L_11c66b6f;
  /* 11c66b34 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66b36 call 0x11c66a86 */
  push32(0x11c66b3bu); f_11c66a86();
  /* 11c66b3b pop ecx */
  ECX = (pop32());
  /* 11c66b3c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c66b40 push esi */
  push32((uint32_t)(ESI));
  /* 11c66b41 call 0x11c671ef */
  push32(0x11c66b46u); f_11c671ef();
  /* 11c66b46 pop ecx */
  ECX = (pop32());
  /* 11c66b47 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c66b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66b4c je 0x11c66b57 */
  if (C.zf) goto L_11c66b57;
  /* 11c66b4e push esi */
  push32((uint32_t)(ESI));
  /* 11c66b4f push eax */
  push32((uint32_t)(EAX));
  /* 11c66b50 call 0x11c6721a */
  push32(0x11c66b55u); f_11c6721a();
  /* 11c66b55 pop ecx */
  ECX = (pop32());
  /* 11c66b56 pop ecx */
  ECX = (pop32());
L_11c66b57:;
  /* 11c66b57 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c66b5b call 0x11c66b66 */
  push32(0x11c66b60u); f_11c66b66();
  /* 11c66b60 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66b64 jmp 0x11c66bb7 */
  goto L_11c66bb7;
  /* 11c66b66 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66b68 call 0x11c66ae7 */
  push32(0x11c66b6du); f_11c66ae7();
  /* 11c66b6d pop ecx */
  ECX = (pop32());
  /* 11c66b6e ret  */
  ESPCHK(0x11c66afcu, _esp0);
  ESP += 4; return;
L_11c66b6f:;
  /* 11c66b6f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66b72 jne 0x11c66bc7 */
  if (!C.zf) goto L_11c66bc7;
  /* 11c66b74 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66b76 call 0x11c66a86 */
  push32(0x11c66b7bu); f_11c66a86();
  /* 11c66b7b pop ecx */
  ECX = (pop32());
  /* 11c66b7c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c66b83 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c66b86 push eax */
  push32((uint32_t)(EAX));
  /* 11c66b87 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c66b8a push eax */
  push32((uint32_t)(EAX));
  /* 11c66b8b push esi */
  push32((uint32_t)(ESI));
  /* 11c66b8c call 0x11c67f4a */
  push32(0x11c66b91u); f_11c67f4a();
  /* 11c66b91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66b94 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c66b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66b99 je 0x11c66baa */
  if (C.zf) goto L_11c66baa;
  /* 11c66b9b push eax */
  push32((uint32_t)(EAX));
  /* 11c66b9c push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c66b9f push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11c66ba2 call 0x11c67fa1 */
  push32(0x11c66ba7u); f_11c67fa1();
  /* 11c66ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c66baa:;
  /* 11c66baa or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c66bae call 0x11c66bbe */
  push32(0x11c66bb3u); f_11c66bbe();
  /* 11c66bb3 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c66bb7:;
  /* 11c66bb7 jne 0x11c66bd6 */
  if (!C.zf) { jmp_ind(0x11c66bd6u); return; }
  /* 11c66bb9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c66bbc jmp 0x11c66bc8 */
  goto L_11c66bc8;
  /* 11c66bbe push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66bc0 call 0x11c66ae7 */
  push32(0x11c66bc5u); f_11c66ae7();
  /* 11c66bc5 pop ecx */
  ECX = (pop32());
  /* 11c66bc6 ret  */
  ESPCHK(0x11c66afcu, _esp0);
  ESP += 4; return;
L_11c66bc7:;
  /* 11c66bc7 push esi */
  push32((uint32_t)(ESI));
L_11c66bc8:;
  /* 11c66bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c66bca push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
}

/* FUN_10006b66 @ 0x11c66b66 (9 bytes, 4 insns) */
void f_11c66b66(void) {
  FTRACE(0x11c66b66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66b66 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66b68 call 0x11c66ae7 */
  push32(0x11c66b6du); f_11c66ae7();
  /* 11c66b6d pop ecx */
  ECX = (pop32());
  /* 11c66b6e ret  */
  ESPCHK(0x11c66b66u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bbe @ 0x11c66bbe (9 bytes, 4 insns) */
void f_11c66bbe(void) {
  FTRACE(0x11c66bbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66bbe push 9 */
  push32((uint32_t)(0x9u));
  /* 11c66bc0 call 0x11c66ae7 */
  push32(0x11c66bc5u); f_11c66ae7();
  /* 11c66bc5 pop ecx */
  ECX = (pop32());
  /* 11c66bc6 ret  */
  ESPCHK(0x11c66bbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10006be5 @ 0x11c66be5 (46 bytes, 13 insns) */
void f_11c66be5(void) {
  FTRACE(0x11c66be5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66be5 cmp dword ptr [0x11c87ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66bec jne 0x11c66c12 */
  if (!C.zf) goto L_11c66c12;
  /* 11c66bee push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c66bf0 call 0x11c66a86 */
  push32(0x11c66bf5u); f_11c66a86();
  /* 11c66bf5 cmp dword ptr [0x11c87ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66bfc pop ecx */
  ECX = (pop32());
  /* 11c66bfd jne 0x11c66c0a */
  if (!C.zf) goto L_11c66c0a;
  /* 11c66bff call 0x11c66c13 */
  push32(0x11c66c04u); f_11c66c13();
  /* 11c66c04 inc dword ptr [0x11c87ab0] */
  { uint32_t _r=(r32((uint32_t)(0x11c87ab0)))+1; w32((uint32_t)(0x11c87ab0), (_r)); fl_inc(_r,32); }
L_11c66c0a:;
  /* 11c66c0a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c66c0c call 0x11c66ae7 */
  push32(0x11c66c11u); f_11c66ae7();
  /* 11c66c11 pop ecx */
  ECX = (pop32());
L_11c66c12:;
  /* 11c66c12 ret  */
  ESPCHK(0x11c66be5u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c13 @ 0x11c66c13 (647 bytes, 207 insns) */
void f_11c66c13(void) {
  FTRACE(0x11c66c13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66c13 push ebp */
  push32((uint32_t)(EBP));
  /* 11c66c14 mov ebp, esp */
  EBP = (ESP);
  /* 11c66c16 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66c17 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66c18 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66c19 push esi */
  push32((uint32_t)(ESI));
  /* 11c66c1a push edi */
  push32((uint32_t)(EDI));
  /* 11c66c1b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11c66c1d pop edi */
  EDI = (pop32());
  /* 11c66c1e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c66c20 push edi */
  push32((uint32_t)(EDI));
  /* 11c66c21 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11c66c24 call 0x11c66a86 */
  push32(0x11c66c29u); f_11c66a86();
  /* 11c66c29 or dword ptr [0x11c70ba0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c70ba0)))|(0xffffffffu); w32((uint32_t)(0x11c70ba0), (_r)); fl_logic(_r,32); }
  /* 11c66c30 or dword ptr [0x11c70b90], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c70b90)))|(0xffffffffu); w32((uint32_t)(0x11c70b90), (_r)); fl_logic(_r,32); }
  /* 11c66c37 mov dword ptr [0x11c879f8], ebx */
  w32((uint32_t)(0x11c879f8), (EBX));
  /* 11c66c3d mov dword ptr [esp], 0x11c6e6a8 */
  w32((uint32_t)(ESP), (0x11c6e6a8u));
  /* 11c66c44 call 0x11c6a6d4 */
  push32(0x11c66c49u); f_11c6a6d4();
  /* 11c66c49 mov esi, eax */
  ESI = (EAX);
  /* 11c66c4b pop ecx */
  ECX = (pop32());
  /* 11c66c4c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66c4e jne 0x11c66d51 */
  if (!C.zf) goto L_11c66d51;
  /* 11c66c54 push edi */
  push32((uint32_t)(EDI));
  /* 11c66c55 call 0x11c66ae7 */
  push32(0x11c66c5au); f_11c66ae7();
  /* 11c66c5a mov dword ptr [esp], 0x11c87a00 */
  w32((uint32_t)(ESP), (0x11c87a00u));
  /* 11c66c61 call dword ptr [0x11c6e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0d4))), 0x11c66c67u);
  /* 11c66c67 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66c6a je 0x11c66e95 */
  if (C.zf) goto L_11c66e95;
  /* 11c66c70 mov eax, dword ptr [0x11c87a00] */
  EAX = (r32((uint32_t)(0x11c87a00)));
  /* 11c66c75 mov ecx, dword ptr [0x11c87a54] */
  ECX = (r32((uint32_t)(0x11c87a54)));
  /* 11c66c7b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c66c7e cmp word ptr [0x11c87a46], bx */
  { uint32_t _a=(r16((uint32_t)(0x11c87a46))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c66c85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c66c87 pop edx */
  EDX = (pop32());
  /* 11c66c88 mov dword ptr [0x11c70af8], eax */
  w32((uint32_t)(0x11c70af8), (EAX));
  /* 11c66c8d mov dword ptr [0x11c879f8], edx */
  w32((uint32_t)(0x11c879f8), (EDX));
  /* 11c66c93 je 0x11c66ca1 */
  if (C.zf) goto L_11c66ca1;
  /* 11c66c95 mov esi, ecx */
  ESI = (ECX);
  /* 11c66c97 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c66c9a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66c9c mov dword ptr [0x11c70af8], eax */
  w32((uint32_t)(0x11c70af8), (EAX));
L_11c66ca1:;
  /* 11c66ca1 cmp word ptr [0x11c87a9a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11c87a9a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c66ca8 je 0x11c66cc5 */
  if (C.zf) goto L_11c66cc5;
  /* 11c66caa mov eax, dword ptr [0x11c87aa8] */
  EAX = (r32((uint32_t)(0x11c87aa8)));
  /* 11c66caf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66cb1 je 0x11c66cc5 */
  if (C.zf) goto L_11c66cc5;
  /* 11c66cb3 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c66cb5 mov dword ptr [0x11c70afc], edx */
  w32((uint32_t)(0x11c70afc), (EDX));
  /* 11c66cbb imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c66cbe mov dword ptr [0x11c70b00], eax */
  w32((uint32_t)(0x11c70b00), (EAX));
  /* 11c66cc3 jmp 0x11c66cd1 */
  goto L_11c66cd1;
L_11c66cc5:;
  /* 11c66cc5 mov dword ptr [0x11c70afc], ebx */
  w32((uint32_t)(0x11c70afc), (EBX));
  /* 11c66ccb mov dword ptr [0x11c70b00], ebx */
  w32((uint32_t)(0x11c70b00), (EBX));
L_11c66cd1:;
  /* 11c66cd1 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c66cd4 mov esi, dword ptr [0x11c6e09c] */
  ESI = (r32((uint32_t)(0x11c6e09c)));
  /* 11c66cda push eax */
  push32((uint32_t)(EAX));
  /* 11c66cdb push ebx */
  push32((uint32_t)(EBX));
  /* 11c66cdc push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c66cde mov edi, 0x220 */
  EDI = (0x220u);
  /* 11c66ce3 push dword ptr [0x11c70b84] */
  push32((uint32_t)(r32((uint32_t)(0x11c70b84))));
  /* 11c66ce9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c66ceb push 0x11c87a04 */
  push32((uint32_t)(0x11c87a04u));
  /* 11c66cf0 push edi */
  push32((uint32_t)(EDI));
  /* 11c66cf1 push dword ptr [0x11c87b10] */
  push32((uint32_t)(r32((uint32_t)(0x11c87b10))));
  /* 11c66cf7 call esi */
  call_ind((uint32_t)(ESI), 0x11c66cf9u);
  /* 11c66cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66cfb je 0x11c66d0d */
  if (C.zf) goto L_11c66d0d;
  /* 11c66cfd cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66d00 jne 0x11c66d0d */
  if (!C.zf) goto L_11c66d0d;
  /* 11c66d02 mov eax, dword ptr [0x11c70b84] */
  EAX = (r32((uint32_t)(0x11c70b84)));
  /* 11c66d07 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11c66d0b jmp 0x11c66d15 */
  goto L_11c66d15;
L_11c66d0d:;
  /* 11c66d0d mov eax, dword ptr [0x11c70b84] */
  EAX = (r32((uint32_t)(0x11c70b84)));
  /* 11c66d12 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11c66d15:;
  /* 11c66d15 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c66d18 push eax */
  push32((uint32_t)(EAX));
  /* 11c66d19 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66d1a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c66d1c push dword ptr [0x11c70b88] */
  push32((uint32_t)(r32((uint32_t)(0x11c70b88))));
  /* 11c66d22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c66d24 push 0x11c87a58 */
  push32((uint32_t)(0x11c87a58u));
  /* 11c66d29 push edi */
  push32((uint32_t)(EDI));
  /* 11c66d2a push dword ptr [0x11c87b10] */
  push32((uint32_t)(r32((uint32_t)(0x11c87b10))));
  /* 11c66d30 call esi */
  call_ind((uint32_t)(ESI), 0x11c66d32u);
  /* 11c66d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66d34 je 0x11c66e84 */
  if (C.zf) goto L_11c66e84;
  /* 11c66d3a cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66d3d jne 0x11c66e84 */
  if (!C.zf) goto L_11c66e84;
  /* 11c66d43 mov eax, dword ptr [0x11c70b88] */
  EAX = (r32((uint32_t)(0x11c70b88)));
  /* 11c66d48 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11c66d4c jmp 0x11c66e95 */
  goto L_11c66e95;
L_11c66d51:;
  /* 11c66d51 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66d54 je 0x11c66e8e */
  if (C.zf) goto L_11c66e8e;
  /* 11c66d5a mov eax, dword ptr [0x11c87aac] */
  EAX = (r32((uint32_t)(0x11c87aac)));
  /* 11c66d5f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66d61 je 0x11c66d74 */
  if (C.zf) goto L_11c66d74;
  /* 11c66d63 push eax */
  push32((uint32_t)(EAX));
  /* 11c66d64 push esi */
  push32((uint32_t)(ESI));
  /* 11c66d65 call 0x11c6a650 */
  push32(0x11c66d6au); f_11c6a650();
  /* 11c66d6a pop ecx */
  ECX = (pop32());
  /* 11c66d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66d6d pop ecx */
  ECX = (pop32());
  /* 11c66d6e je 0x11c66e8e */
  if (C.zf) goto L_11c66e8e;
L_11c66d74:;
  /* 11c66d74 push dword ptr [0x11c87aac] */
  push32((uint32_t)(r32((uint32_t)(0x11c87aac))));
  /* 11c66d7a call 0x11c66afc */
  push32(0x11c66d7fu); f_11c66afc();
  /* 11c66d7f push esi */
  push32((uint32_t)(ESI));
  /* 11c66d80 call 0x11c66830 */
  push32(0x11c66d85u); f_11c66830();
  /* 11c66d85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c66d86 push eax */
  push32((uint32_t)(EAX));
  /* 11c66d87 call 0x11c64f87 */
  push32(0x11c66d8cu); f_11c64f87();
  /* 11c66d8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66d8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66d91 mov dword ptr [0x11c87aac], eax */
  w32((uint32_t)(0x11c87aac), (EAX));
  /* 11c66d96 je 0x11c66e8e */
  if (C.zf) goto L_11c66e8e;
  /* 11c66d9c push esi */
  push32((uint32_t)(ESI));
  /* 11c66d9d push eax */
  push32((uint32_t)(EAX));
  /* 11c66d9e call 0x11c663a0 */
  push32(0x11c66da3u); f_11c663a0();
  /* 11c66da3 push edi */
  push32((uint32_t)(EDI));
  /* 11c66da4 call 0x11c66ae7 */
  push32(0x11c66da9u); f_11c66ae7();
  /* 11c66da9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c66dab push esi */
  push32((uint32_t)(ESI));
  /* 11c66dac push dword ptr [0x11c70b84] */
  push32((uint32_t)(r32((uint32_t)(0x11c70b84))));
  /* 11c66db2 call 0x11c69660 */
  push32(0x11c66db7u); f_11c69660();
  /* 11c66db7 mov eax, dword ptr [0x11c70b84] */
  EAX = (r32((uint32_t)(0x11c70b84)));
  /* 11c66dbc add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66dbf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66dc2 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11c66dc6 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66dc9 jne 0x11c66dd3 */
  if (!C.zf) goto L_11c66dd3;
  /* 11c66dcb mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11c66dd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c66dd3:;
  /* 11c66dd3 push esi */
  push32((uint32_t)(ESI));
  /* 11c66dd4 call 0x11c6a5ba */
  push32(0x11c66dd9u); f_11c6a5ba();
  /* 11c66dd9 pop ecx */
  ECX = (pop32());
  /* 11c66dda mov bl, 0x30 */
  BL = (0x30u);
  /* 11c66ddc mov ecx, eax */
  ECX = (EAX);
  /* 11c66dde imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c66de4 mov dword ptr [0x11c70af8], ecx */
  w32((uint32_t)(0x11c70af8), (ECX));
L_11c66dea:;
  /* 11c66dea mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66dec cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66dee je 0x11c66df8 */
  if (C.zf) goto L_11c66df8;
  /* 11c66df0 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66df2 jl 0x11c66dfb */
  if ((C.sf!=C.of)) goto L_11c66dfb;
  /* 11c66df4 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66df6 jg 0x11c66dfb */
  if ((!C.zf&&C.sf==C.of)) goto L_11c66dfb;
L_11c66df8:;
  /* 11c66df8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c66df9 jmp 0x11c66dea */
  goto L_11c66dea;
L_11c66dfb:;
  /* 11c66dfb cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66dfe jne 0x11c66e4e */
  if (!C.zf) goto L_11c66e4e;
  /* 11c66e00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c66e01 push esi */
  push32((uint32_t)(ESI));
  /* 11c66e02 call 0x11c6a5ba */
  push32(0x11c66e07u); f_11c6a5ba();
  /* 11c66e07 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c66e0a pop ecx */
  ECX = (pop32());
  /* 11c66e0b mov ecx, dword ptr [0x11c70af8] */
  ECX = (r32((uint32_t)(0x11c70af8)));
  /* 11c66e11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66e13 mov dword ptr [0x11c70af8], ecx */
  w32((uint32_t)(0x11c70af8), (ECX));
L_11c66e19:;
  /* 11c66e19 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66e1b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66e1d jl 0x11c66e26 */
  if ((C.sf!=C.of)) goto L_11c66e26;
  /* 11c66e1f cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66e21 jg 0x11c66e26 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c66e26;
  /* 11c66e23 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c66e24 jmp 0x11c66e19 */
  goto L_11c66e19;
L_11c66e26:;
  /* 11c66e26 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66e29 jne 0x11c66e4e */
  if (!C.zf) goto L_11c66e4e;
  /* 11c66e2b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c66e2c push esi */
  push32((uint32_t)(ESI));
  /* 11c66e2d call 0x11c6a5ba */
  push32(0x11c66e32u); f_11c6a5ba();
  /* 11c66e32 pop ecx */
  ECX = (pop32());
  /* 11c66e33 mov ecx, dword ptr [0x11c70af8] */
  ECX = (r32((uint32_t)(0x11c70af8)));
  /* 11c66e39 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66e3b mov dword ptr [0x11c70af8], ecx */
  w32((uint32_t)(0x11c70af8), (ECX));
L_11c66e41:;
  /* 11c66e41 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c66e43 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66e45 jl 0x11c66e4e */
  if ((C.sf!=C.of)) goto L_11c66e4e;
  /* 11c66e47 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c66e49 jg 0x11c66e4e */
  if ((!C.zf&&C.sf==C.of)) goto L_11c66e4e;
  /* 11c66e4b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c66e4c jmp 0x11c66e41 */
  goto L_11c66e41;
L_11c66e4e:;
  /* 11c66e4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66e52 je 0x11c66e5c */
  if (C.zf) goto L_11c66e5c;
  /* 11c66e54 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c66e56 mov dword ptr [0x11c70af8], ecx */
  w32((uint32_t)(0x11c70af8), (ECX));
L_11c66e5c:;
  /* 11c66e5c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c66e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c66e61 mov dword ptr [0x11c70afc], eax */
  w32((uint32_t)(0x11c70afc), (EAX));
  /* 11c66e66 je 0x11c66e84 */
  if (C.zf) goto L_11c66e84;
  /* 11c66e68 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c66e6a push esi */
  push32((uint32_t)(ESI));
  /* 11c66e6b push dword ptr [0x11c70b88] */
  push32((uint32_t)(r32((uint32_t)(0x11c70b88))));
  /* 11c66e71 call 0x11c69660 */
  push32(0x11c66e76u); f_11c69660();
  /* 11c66e76 mov eax, dword ptr [0x11c70b88] */
  EAX = (r32((uint32_t)(0x11c70b88)));
  /* 11c66e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66e7e and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11c66e82 jmp 0x11c66e95 */
  goto L_11c66e95;
L_11c66e84:;
  /* 11c66e84 mov eax, dword ptr [0x11c70b88] */
  EAX = (r32((uint32_t)(0x11c70b88)));
  /* 11c66e89 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c66e8c jmp 0x11c66e95 */
  goto L_11c66e95;
L_11c66e8e:;
  /* 11c66e8e push edi */
  push32((uint32_t)(EDI));
  /* 11c66e8f call 0x11c66ae7 */
  push32(0x11c66e94u); f_11c66ae7();
  /* 11c66e94 pop ecx */
  ECX = (pop32());
L_11c66e95:;
  /* 11c66e95 pop edi */
  EDI = (pop32());
  /* 11c66e96 pop esi */
  ESI = (pop32());
  /* 11c66e97 pop ebx */
  EBX = (pop32());
  /* 11c66e98 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c66e99 ret  */
  ESPCHK(0x11c66c13u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e9a @ 0x11c66e9a (33 bytes, 12 insns) */
void f_11c66e9a(void) {
  FTRACE(0x11c66e9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66e9a push esi */
  push32((uint32_t)(ESI));
  /* 11c66e9b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c66e9d call 0x11c66a86 */
  push32(0x11c66ea2u); f_11c66a86();
  /* 11c66ea2 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c66ea6 call 0x11c66ebb */
  push32(0x11c66eabu); f_11c66ebb();
  /* 11c66eab push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c66ead mov esi, eax */
  ESI = (EAX);
  /* 11c66eaf call 0x11c66ae7 */
  push32(0x11c66eb4u); f_11c66ae7();
  /* 11c66eb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66eb7 mov eax, esi */
  EAX = (ESI);
  /* 11c66eb9 pop esi */
  ESI = (pop32());
  /* 11c66eba ret  */
  ESPCHK(0x11c66e9au, _esp0);
  ESP += 4; return;
}

/* FUN_10006ebb @ 0x11c66ebb (428 bytes, 149 insns) */
void f_11c66ebb(void) {
  FTRACE(0x11c66ebbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c66ebb push ebx */
  push32((uint32_t)(EBX));
  /* 11c66ebc push esi */
  push32((uint32_t)(ESI));
  /* 11c66ebd push edi */
  push32((uint32_t)(EDI));
  /* 11c66ebe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c66ec0 cmp dword ptr [0x11c70afc], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c70afc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66ec6 jne 0x11c66ecf */
  if (!C.zf) goto L_11c66ecf;
L_11c66ec8:;
  /* 11c66ec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c66eca jmp 0x11c6701b */
  goto L_11c6701b;
L_11c66ecf:;
  /* 11c66ecf mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c66ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c66ed5 pop ebx */
  EBX = (pop32());
  /* 11c66ed6 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c66ed9 cmp eax, dword ptr [0x11c70b90] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c70b90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66edf jne 0x11c66eed */
  if (!C.zf) goto L_11c66eed;
  /* 11c66ee1 cmp eax, dword ptr [0x11c70ba0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c70ba0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66ee7 je 0x11c66fef */
  if (C.zf) goto L_11c66fef;
L_11c66eed:;
  /* 11c66eed cmp dword ptr [0x11c879f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c879f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66ef3 je 0x11c66fc5 */
  if (C.zf) goto L_11c66fc5;
  /* 11c66ef9 movzx ecx, word ptr [0x11c87aa6] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87aa6))));
  /* 11c66f00 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f01 cmp word ptr [0x11c87a98], di */
  { uint32_t _a=(r16((uint32_t)(0x11c87a98))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c66f08 movzx ecx, word ptr [0x11c87aa4] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87aa4))));
  /* 11c66f0f push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f10 movzx ecx, word ptr [0x11c87aa2] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87aa2))));
  /* 11c66f17 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f18 movzx ecx, word ptr [0x11c87aa0] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87aa0))));
  /* 11c66f1f push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f20 jne 0x11c66f3f */
  if (!C.zf) goto L_11c66f3f;
  /* 11c66f22 movzx ecx, word ptr [0x11c87a9c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87a9c))));
  /* 11c66f29 push edi */
  push32((uint32_t)(EDI));
  /* 11c66f2a push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f2b movzx ecx, word ptr [0x11c87a9e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87a9e))));
  /* 11c66f32 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f33 movzx ecx, word ptr [0x11c87a9a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87a9a))));
  /* 11c66f3a push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f3b push eax */
  push32((uint32_t)(EAX));
  /* 11c66f3c push ebx */
  push32((uint32_t)(EBX));
  /* 11c66f3d jmp 0x11c66f53 */
  goto L_11c66f53;
L_11c66f3f:;
  /* 11c66f3f movzx ecx, word ptr [0x11c87a9e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87a9e))));
  /* 11c66f46 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f47 push edi */
  push32((uint32_t)(EDI));
  /* 11c66f48 movzx ecx, word ptr [0x11c87a9a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c87a9a))));
  /* 11c66f4f push edi */
  push32((uint32_t)(EDI));
  /* 11c66f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11c66f51 push eax */
  push32((uint32_t)(EAX));
  /* 11c66f52 push edi */
  push32((uint32_t)(EDI));
L_11c66f53:;
  /* 11c66f53 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66f54 call 0x11c67067 */
  push32(0x11c66f59u); f_11c67067();
  /* 11c66f59 movzx eax, word ptr [0x11c87a52] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a52))));
  /* 11c66f60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66f63 cmp word ptr [0x11c87a44], di */
  { uint32_t _a=(r16((uint32_t)(0x11c87a44))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c66f6a push eax */
  push32((uint32_t)(EAX));
  /* 11c66f6b movzx eax, word ptr [0x11c87a50] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a50))));
  /* 11c66f72 push eax */
  push32((uint32_t)(EAX));
  /* 11c66f73 movzx eax, word ptr [0x11c87a4e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a4e))));
  /* 11c66f7a push eax */
  push32((uint32_t)(EAX));
  /* 11c66f7b movzx eax, word ptr [0x11c87a4c] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a4c))));
  /* 11c66f82 push eax */
  push32((uint32_t)(EAX));
  /* 11c66f83 jne 0x11c66fad */
  if (!C.zf) goto L_11c66fad;
  /* 11c66f85 movzx eax, word ptr [0x11c87a48] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a48))));
  /* 11c66f8c push edi */
  push32((uint32_t)(EDI));
  /* 11c66f8d push eax */
  push32((uint32_t)(EAX));
  /* 11c66f8e movzx eax, word ptr [0x11c87a4a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a4a))));
  /* 11c66f95 push eax */
  push32((uint32_t)(EAX));
  /* 11c66f96 movzx eax, word ptr [0x11c87a46] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a46))));
  /* 11c66f9d push eax */
  push32((uint32_t)(EAX));
  /* 11c66f9e push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c66fa1 push ebx */
  push32((uint32_t)(EBX));
L_11c66fa2:;
  /* 11c66fa2 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fa3 call 0x11c67067 */
  push32(0x11c66fa8u); f_11c67067();
  /* 11c66fa8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c66fab jmp 0x11c66fef */
  goto L_11c66fef;
L_11c66fad:;
  /* 11c66fad movzx eax, word ptr [0x11c87a4a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a4a))));
  /* 11c66fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11c66fb5 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fb6 movzx eax, word ptr [0x11c87a46] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c87a46))));
  /* 11c66fbd push edi */
  push32((uint32_t)(EDI));
  /* 11c66fbe push eax */
  push32((uint32_t)(EAX));
  /* 11c66fbf push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c66fc2 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fc3 jmp 0x11c66fa2 */
  goto L_11c66fa2;
L_11c66fc5:;
  /* 11c66fc5 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fc6 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fc7 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c66fca push edi */
  push32((uint32_t)(EDI));
  /* 11c66fcb push edi */
  push32((uint32_t)(EDI));
  /* 11c66fcc push ebx */
  push32((uint32_t)(EBX));
  /* 11c66fcd push 4 */
  push32((uint32_t)(0x4u));
  /* 11c66fcf push eax */
  push32((uint32_t)(EAX));
  /* 11c66fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66fd1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66fd2 call 0x11c67067 */
  push32(0x11c66fd7u); f_11c67067();
  /* 11c66fd7 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fd8 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fd9 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fda push 2 */
  push32((uint32_t)(0x2u));
  /* 11c66fdc push edi */
  push32((uint32_t)(EDI));
  /* 11c66fdd push edi */
  push32((uint32_t)(EDI));
  /* 11c66fde push 5 */
  push32((uint32_t)(0x5u));
  /* 11c66fe0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c66fe2 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c66fe5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c66fe6 push edi */
  push32((uint32_t)(EDI));
  /* 11c66fe7 call 0x11c67067 */
  push32(0x11c66fecu); f_11c67067();
  /* 11c66fec add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c66fef:;
  /* 11c66fef mov edx, dword ptr [0x11c70b94] */
  EDX = (r32((uint32_t)(0x11c70b94)));
  /* 11c66ff5 mov eax, dword ptr [0x11c70ba4] */
  EAX = (r32((uint32_t)(0x11c70ba4)));
  /* 11c66ffa mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c66ffd cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c66fff jge 0x11c6701f */
  if ((C.sf==C.of)) goto L_11c6701f;
  /* 11c67001 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67003 jl 0x11c66ec8 */
  if ((C.sf!=C.of)) goto L_11c66ec8;
  /* 11c67009 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6700b jg 0x11c66ec8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c66ec8;
  /* 11c67011 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67013 jle 0x11c67033 */
  if ((C.zf||C.sf!=C.of)) goto L_11c67033;
  /* 11c67015 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67017 jge 0x11c67033 */
  if ((C.sf==C.of)) goto L_11c67033;
L_11c67019:;
  /* 11c67019 mov eax, ebx */
  EAX = (EBX);
L_11c6701b:;
  /* 11c6701b pop edi */
  EDI = (pop32());
  /* 11c6701c pop esi */
  ESI = (pop32());
  /* 11c6701d pop ebx */
  EBX = (pop32());
  /* 11c6701e ret  */
  ESPCHK(0x11c66ebbu, _esp0);
  ESP += 4; return;
L_11c6701f:;
  /* 11c6701f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67021 jl 0x11c67019 */
  if ((C.sf!=C.of)) goto L_11c67019;
  /* 11c67023 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67025 jg 0x11c67019 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c67019;
  /* 11c67027 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67029 jle 0x11c67033 */
  if ((C.zf||C.sf!=C.of)) goto L_11c67033;
  /* 11c6702b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6702d jl 0x11c66ec8 */
  if ((C.sf!=C.of)) goto L_11c66ec8;
L_11c67033:;
  /* 11c67033 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c67036 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67039 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6703c imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6703f add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67041 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67047 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67049 jne 0x11c6705a */
  if (!C.zf) goto L_11c6705a;
  /* 11c6704b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6704d cmp eax, dword ptr [0x11c70b98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c70b98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67053 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11c67056:;
  /* 11c67056 mov eax, ecx */
  EAX = (ECX);
  /* 11c67058 jmp 0x11c6701b */
  goto L_11c6701b;
L_11c6705a:;
  /* 11c6705a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6705c cmp eax, dword ptr [0x11c70ba8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c70ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67062 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11c67065 jmp 0x11c67056 */
  goto L_11c67056;
}

/* FUN_10007067 @ 0x11c67067 (320 bytes, 101 insns) */
void f_11c67067(void) {
  FTRACE(0x11c67067u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67067 push ebp */
  push32((uint32_t)(EBP));
  /* 11c67068 mov ebp, esp */
  EBP = (ESP);
  /* 11c6706a cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6706e push ebx */
  push32((uint32_t)(EBX));
  /* 11c6706f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67072 push esi */
  push32((uint32_t)(ESI));
  /* 11c67073 jne 0x11c67102 */
  if (!C.zf) goto L_11c67102;
  /* 11c67079 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6707c mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11c6707f and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11c67083 mov esi, eax */
  ESI = (EAX);
  /* 11c67085 jne 0x11c67092 */
  if (!C.zf) goto L_11c67092;
  /* 11c67087 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c6708a mov eax, dword ptr [esi + 0x11c70ba8] */
  EAX = (r32((uint32_t)(ESI + 0x11c70ba8)));
  /* 11c67090 jmp 0x11c6709b */
  goto L_11c6709b;
L_11c67092:;
  /* 11c67092 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c67095 mov eax, dword ptr [esi + 0x11c70bdc] */
  EAX = (r32((uint32_t)(ESI + 0x11c70bdc)));
L_11c6709b:;
  /* 11c6709b mov edx, ebx */
  EDX = (EBX);
  /* 11c6709d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c670a0 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c670a6 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11c670a9 push edi */
  push32((uint32_t)(EDI));
  /* 11c670aa sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c670ad mov edi, ecx */
  EDI = (ECX);
  /* 11c670af push 7 */
  push32((uint32_t)(0x7u));
  /* 11c670b1 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c670b3 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11c670ba pop edi */
  EDI = (pop32());
  /* 11c670bb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c670bc idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c670be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c670c1 pop edi */
  EDI = (pop32());
  /* 11c670c2 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c670c5 jg 0x11c670d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c670d5;
  /* 11c670c7 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c670ca sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c670cc add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c670cf lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11c670d3 jmp 0x11c670df */
  goto L_11c670df;
L_11c670d5:;
  /* 11c670d5 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c670d8 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c670da add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c670dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c670df:;
  /* 11c670df cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c670e3 jne 0x11c6711d */
  if (!C.zf) goto L_11c6711d;
  /* 11c670e5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c670e9 jne 0x11c670f3 */
  if (!C.zf) goto L_11c670f3;
  /* 11c670eb mov esi, dword ptr [esi + 0x11c70bac] */
  ESI = (r32((uint32_t)(ESI + 0x11c70bac)));
  /* 11c670f1 jmp 0x11c670f9 */
  goto L_11c670f9;
L_11c670f3:;
  /* 11c670f3 mov esi, dword ptr [esi + 0x11c70be0] */
  ESI = (r32((uint32_t)(ESI + 0x11c70be0)));
L_11c670f9:;
  /* 11c670f9 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c670fb jle 0x11c6711d */
  if ((C.zf||C.sf!=C.of)) goto L_11c6711d;
  /* 11c670fd sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67100 jmp 0x11c6711d */
  goto L_11c6711d;
L_11c67102:;
  /* 11c67102 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c67105 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11c67108 jne 0x11c67113 */
  if (!C.zf) goto L_11c67113;
  /* 11c6710a mov ecx, dword ptr [eax*4 + 0x11c70ba8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c70ba8)));
  /* 11c67111 jmp 0x11c6711a */
  goto L_11c6711a;
L_11c67113:;
  /* 11c67113 mov ecx, dword ptr [eax*4 + 0x11c70bdc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c70bdc)));
L_11c6711a:;
  /* 11c6711a add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c6711d:;
  /* 11c6711d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67121 jne 0x11c6714e */
  if (!C.zf) goto L_11c6714e;
  /* 11c67123 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c67126 mov dword ptr [0x11c70b94], ecx */
  w32((uint32_t)(0x11c70b94), (ECX));
  /* 11c6712c imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6712f add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67132 mov dword ptr [0x11c70b90], ebx */
  w32((uint32_t)(0x11c70b90), (EBX));
  /* 11c67138 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6713b add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6713e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67144 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67147 mov dword ptr [0x11c70b98], eax */
  w32((uint32_t)(0x11c70b98), (EAX));
  /* 11c6714c jmp 0x11c671a3 */
  goto L_11c671a3;
L_11c6714e:;
  /* 11c6714e mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c67151 mov dword ptr [0x11c70ba4], ecx */
  w32((uint32_t)(0x11c70ba4), (ECX));
  /* 11c67157 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6715a add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6715d imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67160 add eax, dword ptr [0x11c70b00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c70b00))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67166 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67169 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6716f add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67172 mov dword ptr [0x11c70ba8], eax */
  w32((uint32_t)(0x11c70ba8), (EAX));
  /* 11c67177 jns 0x11c67186 */
  if (!C.sf) goto L_11c67186;
  /* 11c67179 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6717e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6717f mov dword ptr [0x11c70ba8], eax */
  w32((uint32_t)(0x11c70ba8), (EAX));
  /* 11c67184 jmp 0x11c67197 */
  goto L_11c67197;
L_11c67186:;
  /* 11c67186 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11c6718b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6718d jl 0x11c6719d */
  if ((C.sf!=C.of)) goto L_11c6719d;
  /* 11c6718f sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67191 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c67192 mov dword ptr [0x11c70ba8], eax */
  w32((uint32_t)(0x11c70ba8), (EAX));
L_11c67197:;
  /* 11c67197 mov dword ptr [0x11c70ba4], ecx */
  w32((uint32_t)(0x11c70ba4), (ECX));
L_11c6719d:;
  /* 11c6719d mov dword ptr [0x11c70ba0], ebx */
  w32((uint32_t)(0x11c70ba0), (EBX));
L_11c671a3:;
  /* 11c671a3 pop esi */
  ESI = (pop32());
  /* 11c671a4 pop ebx */
  EBX = (pop32());
  /* 11c671a5 pop ebp */
  EBP = (pop32());
  /* 11c671a6 ret  */
  ESPCHK(0x11c67067u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a7 @ 0x11c671a7 (72 bytes, 17 insns) */
void f_11c671a7(void) {
  FTRACE(0x11c671a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c671a7 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11c671ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11c671ae push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c671b4 call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c671bau);
  /* 11c671ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c671bc mov dword ptr [0x11c88e38], eax */
  w32((uint32_t)(0x11c88e38), (EAX));
  /* 11c671c1 jne 0x11c671c4 */
  if (!C.zf) goto L_11c671c4;
  /* 11c671c3 ret  */
  ESPCHK(0x11c671a7u, _esp0);
  ESP += 4; return;
L_11c671c4:;
  /* 11c671c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c671c8 and dword ptr [0x11c88e30], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c88e30)))&(0x0u); w32((uint32_t)(0x11c88e30), (_r)); fl_logic(_r,32); }
  /* 11c671cf and dword ptr [0x11c88e34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c88e34)))&(0x0u); w32((uint32_t)(0x11c88e34), (_r)); fl_logic(_r,32); }
  /* 11c671d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c671d8 mov dword ptr [0x11c88e2c], eax */
  w32((uint32_t)(0x11c88e2c), (EAX));
  /* 11c671dd mov dword ptr [0x11c88e3c], ecx */
  w32((uint32_t)(0x11c88e3c), (ECX));
  /* 11c671e3 mov dword ptr [0x11c88e24], 0x10 */
  w32((uint32_t)(0x11c88e24), (0x10u));
  /* 11c671ed pop eax */
  EAX = (pop32());
  /* 11c671ee ret  */
  ESPCHK(0x11c671a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100071ef @ 0x11c671ef (43 bytes, 14 insns) */
void f_11c671ef(void) {
  FTRACE(0x11c671efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c671ef mov eax, dword ptr [0x11c88e34] */
  EAX = (r32((uint32_t)(0x11c88e34)));
  /* 11c671f4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c671f7 mov eax, dword ptr [0x11c88e38] */
  EAX = (r32((uint32_t)(0x11c88e38)));
  /* 11c671fc lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11c671ff:;
  /* 11c671ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67201 jae 0x11c67217 */
  if (!C.cf) goto L_11c67217;
  /* 11c67203 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c67207 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6720a cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67210 jb 0x11c67219 */
  if (C.cf) goto L_11c67219;
  /* 11c67212 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67215 jmp 0x11c671ff */
  goto L_11c671ff;
L_11c67217:;
  /* 11c67217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c67219:;
  /* 11c67219 ret  */
  ESPCHK(0x11c671efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000721a @ 0x11c6721a (809 bytes, 265 insns) */
void f_11c6721a(void) {
  FTRACE(0x11c6721au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6721a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6721b mov ebp, esp */
  EBP = (ESP);
  /* 11c6721d sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67223 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67224 push esi */
  push32((uint32_t)(ESI));
  /* 11c67225 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67228 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c6722b push edi */
  push32((uint32_t)(EDI));
  /* 11c6722c mov edi, esi */
  EDI = (ESI);
  /* 11c6722e add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67231 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67234 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c67237 mov ecx, edi */
  ECX = (EDI);
  /* 11c67239 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6723f lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c67246 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c67249 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c6724b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6724c test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11c6724f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c67252 jne 0x11c6753e */
  if (!C.zf) goto L_11c6753e;
  /* 11c67258 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11c6725b lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11c6725e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11c67261 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11c67264 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c67267 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6726a test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c6726d mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11c67270 jne 0x11c672f0 */
  if (!C.zf) goto L_11c672f0;
  /* 11c67272 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c67275 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c67276 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67279 jbe 0x11c6727e */
  if ((C.cf||C.zf)) goto L_11c6727e;
  /* 11c6727b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c6727d pop edx */
  EDX = (pop32());
L_11c6727e:;
  /* 11c6727e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c67281 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67284 jne 0x11c672d2 */
  if (!C.zf) goto L_11c672d2;
  /* 11c67286 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67289 jae 0x11c672a9 */
  if (!C.cf) goto L_11c672a9;
  /* 11c6728b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67290 mov ecx, edx */
  ECX = (EDX);
  /* 11c67292 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67294 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c67298 not ebx */
  EBX = (~(EBX));
  /* 11c6729a and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c6729e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c672a0 jne 0x11c672ca */
  if (!C.zf) goto L_11c672ca;
  /* 11c672a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c672a5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c672a7 jmp 0x11c672ca */
  goto L_11c672ca;
L_11c672a9:;
  /* 11c672a9 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c672ac mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c672b1 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c672b3 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c672b7 not ebx */
  EBX = (~(EBX));
  /* 11c672b9 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c672c0 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c672c2 jne 0x11c672ca */
  if (!C.zf) goto L_11c672ca;
  /* 11c672c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c672c7 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c672ca:;
  /* 11c672ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c672cd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c672d0 jmp 0x11c672d5 */
  goto L_11c672d5;
L_11c672d2:;
  /* 11c672d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11c672d5:;
  /* 11c672d5 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11c672d8 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c672db add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c672de mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11c672e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c672e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c672e7 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c672ea mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c672ed mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11c672f0:;
  /* 11c672f0 mov edx, ecx */
  EDX = (ECX);
  /* 11c672f2 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c672f5 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c672f6 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c672f9 jbe 0x11c672fe */
  if ((C.cf||C.zf)) goto L_11c672fe;
  /* 11c672fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c672fd pop edx */
  EDX = (pop32());
L_11c672fe:;
  /* 11c672fe mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c67301 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11c67304 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11c67307 jne 0x11c673a1 */
  if (!C.zf) goto L_11c673a1;
  /* 11c6730d sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67310 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c67313 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11c67316 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67318 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c6731b dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6731c pop esi */
  ESI = (pop32());
  /* 11c6731d cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6731f jbe 0x11c67323 */
  if ((C.cf||C.zf)) goto L_11c67323;
  /* 11c67321 mov ebx, esi */
  EBX = (ESI);
L_11c67323:;
  /* 11c67323 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67326 mov edx, ecx */
  EDX = (ECX);
  /* 11c67328 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c6732b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c6732e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c6732f cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67331 jbe 0x11c67335 */
  if ((C.cf||C.zf)) goto L_11c67335;
  /* 11c67333 mov edx, esi */
  EDX = (ESI);
L_11c67335:;
  /* 11c67335 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67337 je 0x11c6739c */
  if (C.zf) goto L_11c6739c;
  /* 11c67339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6733c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c6733f cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67342 jne 0x11c67384 */
  if (!C.zf) goto L_11c67384;
  /* 11c67344 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67347 jae 0x11c67365 */
  if (!C.cf) goto L_11c67365;
  /* 11c67349 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c6734e mov ecx, ebx */
  ECX = (EBX);
  /* 11c67350 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c67352 not esi */
  ESI = (~(ESI));
  /* 11c67354 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c67358 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c6735c jne 0x11c67384 */
  if (!C.zf) goto L_11c67384;
  /* 11c6735e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67361 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c67363 jmp 0x11c67384 */
  goto L_11c67384;
L_11c67365:;
  /* 11c67365 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11c67368 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c6736d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c6736f not esi */
  ESI = (~(ESI));
  /* 11c67371 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c67378 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c6737c jne 0x11c67384 */
  if (!C.zf) goto L_11c67384;
  /* 11c6737e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67381 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67384:;
  /* 11c67384 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67387 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11c6738a mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c6738d mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11c67390 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67393 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c67396 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c67399 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11c6739c:;
  /* 11c6739c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6739f jmp 0x11c673a4 */
  goto L_11c673a4;
L_11c673a1:;
  /* 11c673a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c673a4:;
  /* 11c673a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c673a8 jne 0x11c673b2 */
  if (!C.zf) goto L_11c673b2;
  /* 11c673aa cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c673ac je 0x11c67433 */
  if (C.zf) goto L_11c67433;
L_11c673b2:;
  /* 11c673b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c673b5 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11c673b9 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11c673bc mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11c673bf mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11c673c2 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c673c5 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c673c8 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11c673cb mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c673ce cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c673d1 jne 0x11c67433 */
  if (!C.zf) goto L_11c67433;
  /* 11c673d3 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11c673d7 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c673da mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c673dd inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c673df mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11c673e3 jae 0x11c6740a */
  if (!C.cf) goto L_11c6740a;
  /* 11c673e5 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c673e9 jne 0x11c673f9 */
  if (!C.zf) goto L_11c673f9;
  /* 11c673eb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c673f0 mov ecx, edx */
  ECX = (EDX);
  /* 11c673f2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c673f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c673f7 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c673f9:;
  /* 11c673f9 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c673fe mov ecx, edx */
  ECX = (EDX);
  /* 11c67400 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67402 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11c67406 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c67408 jmp 0x11c67433 */
  goto L_11c67433;
L_11c6740a:;
  /* 11c6740a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6740e jne 0x11c67420 */
  if (!C.zf) goto L_11c67420;
  /* 11c67410 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c67413 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67418 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c6741a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6741d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67420:;
  /* 11c67420 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c67423 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c67428 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c6742a lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11c67431 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c67433:;
  /* 11c67433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67436 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c67438 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11c6743c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6743f dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11c67441 jne 0x11c6753e */
  if (!C.zf) goto L_11c6753e;
  /* 11c67447 mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c6744c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6744e je 0x11c67530 */
  if (C.zf) goto L_11c67530;
  /* 11c67454 mov ecx, dword ptr [0x11c88e28] */
  ECX = (r32((uint32_t)(0x11c88e28)));
  /* 11c6745a mov esi, dword ptr [0x11c6e080] */
  ESI = (r32((uint32_t)(0x11c6e080)));
  /* 11c67460 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11c67463 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67466 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11c6746b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c67470 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67471 push ecx */
  push32((uint32_t)(ECX));
  /* 11c67472 call esi */
  call_ind((uint32_t)(ESI), 0x11c67474u);
  /* 11c67474 mov ecx, dword ptr [0x11c88e28] */
  ECX = (r32((uint32_t)(0x11c88e28)));
  /* 11c6747a mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c6747f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c67484 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c67486 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c67489 mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c6748e mov ecx, dword ptr [0x11c88e28] */
  ECX = (r32((uint32_t)(0x11c88e28)));
  /* 11c67494 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c67497 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c6749f mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c674a4 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c674a7 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11c674aa mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c674af mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c674b2 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c674b6 jne 0x11c674c1 */
  if (!C.zf) goto L_11c674c1;
  /* 11c674b8 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c674bc mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
L_11c674c1:;
  /* 11c674c1 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c674c5 jne 0x11c67530 */
  if (!C.zf) goto L_11c67530;
  /* 11c674c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c674c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c674ca push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c674cd call esi */
  call_ind((uint32_t)(ESI), 0x11c674cfu);
  /* 11c674cf mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c674d4 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c674d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c674d9 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c674df call dword ptr [0x11c6e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e07c))), 0x11c674e5u);
  /* 11c674e5 mov eax, dword ptr [0x11c88e34] */
  EAX = (r32((uint32_t)(0x11c88e34)));
  /* 11c674ea mov edx, dword ptr [0x11c88e38] */
  EDX = (r32((uint32_t)(0x11c88e38)));
  /* 11c674f0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c674f3 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c674f6 mov ecx, eax */
  ECX = (EAX);
  /* 11c674f8 mov eax, dword ptr [0x11c88e30] */
  EAX = (r32((uint32_t)(0x11c88e30)));
  /* 11c674fd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c674ff lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11c67503 push ecx */
  push32((uint32_t)(ECX));
  /* 11c67504 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11c67507 push ecx */
  push32((uint32_t)(ECX));
  /* 11c67508 push eax */
  push32((uint32_t)(EAX));
  /* 11c67509 call 0x11c664f0 */
  push32(0x11c6750eu); f_11c664f0();
  /* 11c6750e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67514 dec dword ptr [0x11c88e34] */
  { uint32_t _r=(r32((uint32_t)(0x11c88e34)))-1; w32((uint32_t)(0x11c88e34), (_r)); fl_dec(_r,32); }
  /* 11c6751a cmp eax, dword ptr [0x11c88e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c88e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67520 jbe 0x11c67526 */
  if ((C.cf||C.zf)) goto L_11c67526;
  /* 11c67522 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11c67526:;
  /* 11c67526 mov eax, dword ptr [0x11c88e38] */
  EAX = (r32((uint32_t)(0x11c88e38)));
  /* 11c6752b mov dword ptr [0x11c88e2c], eax */
  w32((uint32_t)(0x11c88e2c), (EAX));
L_11c67530:;
  /* 11c67530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67533 mov dword ptr [0x11c88e28], edi */
  w32((uint32_t)(0x11c88e28), (EDI));
  /* 11c67539 mov dword ptr [0x11c88e30], eax */
  w32((uint32_t)(0x11c88e30), (EAX));
L_11c6753e:;
  /* 11c6753e pop edi */
  EDI = (pop32());
  /* 11c6753f pop esi */
  ESI = (pop32());
  /* 11c67540 pop ebx */
  EBX = (pop32());
  /* 11c67541 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c67542 ret  */
  ESPCHK(0x11c6721au, _esp0);
  ESP += 4; return;
}

/* FUN_10007543 @ 0x11c67543 (777 bytes, 275 insns) */
void f_11c67543(void) {
  FTRACE(0x11c67543u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67543 push ebp */
  push32((uint32_t)(EBP));
  /* 11c67544 mov ebp, esp */
  EBP = (ESP);
  /* 11c67546 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67549 mov eax, dword ptr [0x11c88e34] */
  EAX = (r32((uint32_t)(0x11c88e34)));
  /* 11c6754e mov edx, dword ptr [0x11c88e38] */
  EDX = (r32((uint32_t)(0x11c88e38)));
  /* 11c67554 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67555 push esi */
  push32((uint32_t)(ESI));
  /* 11c67556 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c67559 push edi */
  push32((uint32_t)(EDI));
  /* 11c6755a lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c6755d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67560 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c67563 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11c67566 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11c67569 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c6756c sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c6756f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c67570 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67573 jge 0x11c67583 */
  if ((C.sf==C.of)) goto L_11c67583;
  /* 11c67575 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c67578 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c6757a or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c6757e mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c67581 jmp 0x11c67593 */
  goto L_11c67593;
L_11c67583:;
  /* 11c67583 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67586 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c67589 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6758b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c6758d mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c67590 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c67593:;
  /* 11c67593 mov eax, dword ptr [0x11c88e2c] */
  EAX = (r32((uint32_t)(0x11c88e2c)));
  /* 11c67598 mov ebx, eax */
  EBX = (EAX);
  /* 11c6759a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6759c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c6759f jae 0x11c675ba */
  if (!C.cf) goto L_11c675ba;
L_11c675a1:;
  /* 11c675a1 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c675a4 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c675a6 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c675a9 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c675ab or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c675ad jne 0x11c675ba */
  if (!C.zf) goto L_11c675ba;
  /* 11c675af add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c675b2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675b5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c675b8 jb 0x11c675a1 */
  if (C.cf) goto L_11c675a1;
L_11c675ba:;
  /* 11c675ba cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675bd jne 0x11c67638 */
  if (!C.zf) goto L_11c67638;
  /* 11c675bf mov ebx, edx */
  EBX = (EDX);
L_11c675c1:;
  /* 11c675c1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675c3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c675c6 jae 0x11c675dd */
  if (!C.cf) goto L_11c675dd;
  /* 11c675c8 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c675cb mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c675cd and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c675d0 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c675d2 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c675d4 jne 0x11c675db */
  if (!C.zf) goto L_11c675db;
  /* 11c675d6 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c675d9 jmp 0x11c675c1 */
  goto L_11c675c1;
L_11c675db:;
  /* 11c675db cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c675dd:;
  /* 11c675dd jne 0x11c67638 */
  if (!C.zf) goto L_11c67638;
L_11c675df:;
  /* 11c675df cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675e2 jae 0x11c675f5 */
  if (!C.cf) goto L_11c675f5;
  /* 11c675e4 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675e8 jne 0x11c675f2 */
  if (!C.zf) goto L_11c675f2;
  /* 11c675ea add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c675ed mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c675f0 jmp 0x11c675df */
  goto L_11c675df;
L_11c675f2:;
  /* 11c675f2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c675f5:;
  /* 11c675f5 jne 0x11c6761d */
  if (!C.zf) goto L_11c6761d;
  /* 11c675f7 mov ebx, edx */
  EBX = (EDX);
L_11c675f9:;
  /* 11c675f9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c675fb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c675fe jae 0x11c6760d */
  if (!C.cf) goto L_11c6760d;
  /* 11c67600 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67604 jne 0x11c6760b */
  if (!C.zf) goto L_11c6760b;
  /* 11c67606 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67609 jmp 0x11c675f9 */
  goto L_11c675f9;
L_11c6760b:;
  /* 11c6760b cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c6760d:;
  /* 11c6760d jne 0x11c6761d */
  if (!C.zf) goto L_11c6761d;
  /* 11c6760f call 0x11c6784c */
  push32(0x11c67614u); f_11c6784c();
  /* 11c67614 mov ebx, eax */
  EBX = (EAX);
  /* 11c67616 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c67618 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c6761b je 0x11c67631 */
  if (C.zf) goto L_11c67631;
L_11c6761d:;
  /* 11c6761d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6761e call 0x11c678fd */
  push32(0x11c67623u); f_11c678fd();
  /* 11c67623 pop ecx */
  ECX = (pop32());
  /* 11c67624 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c67627 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c67629 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c6762c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6762f jne 0x11c67638 */
  if (!C.zf) goto L_11c67638;
L_11c67631:;
  /* 11c67631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c67633 jmp 0x11c67847 */
  goto L_11c67847;
L_11c67638:;
  /* 11c67638 mov dword ptr [0x11c88e2c], ebx */
  w32((uint32_t)(0x11c88e2c), (EBX));
  /* 11c6763e mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c67641 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c67643 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67646 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11c67649 je 0x11c6765f */
  if (C.zf) goto L_11c6765f;
  /* 11c6764b mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c67652 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c67656 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c67659 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6765b or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c6765d jne 0x11c67696 */
  if (!C.zf) goto L_11c67696;
L_11c6765f:;
  /* 11c6765f mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11c67665 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11c67668 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c6766b and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c6766e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c67672 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11c67675 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c67677 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6767a jne 0x11c67693 */
  if (!C.zf) goto L_11c67693;
L_11c6767c:;
  /* 11c6767c mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11c67682 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c67685 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c67688 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6768b mov edi, esi */
  EDI = (ESI);
  /* 11c6768d and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11c6768f or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11c67691 je 0x11c6767c */
  if (C.zf) goto L_11c6767c;
L_11c67693:;
  /* 11c67693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11c67696:;
  /* 11c67696 mov ecx, edx */
  ECX = (EDX);
  /* 11c67698 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6769a imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c676a0 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c676a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c676aa mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c676ae and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c676b0 jne 0x11c676bf */
  if (!C.zf) goto L_11c676bf;
  /* 11c676b2 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c676b9 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c676bb and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c676be pop edi */
  EDI = (pop32());
L_11c676bf:;
  /* 11c676bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c676c1 jl 0x11c676c8 */
  if ((C.sf!=C.of)) goto L_11c676c8;
  /* 11c676c3 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c676c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c676c6 jmp 0x11c676bf */
  goto L_11c676bf;
L_11c676c8:;
  /* 11c676c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c676cb mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11c676cf mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c676d1 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c676d4 mov esi, ecx */
  ESI = (ECX);
  /* 11c676d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c676d9 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c676dc dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c676dd cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c676e0 jle 0x11c676e5 */
  if ((C.zf||C.sf!=C.of)) goto L_11c676e5;
  /* 11c676e2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c676e4 pop esi */
  ESI = (pop32());
L_11c676e5:;
  /* 11c676e5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c676e7 je 0x11c677fa */
  if (C.zf) goto L_11c677fa;
  /* 11c676ed mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c676f0 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c676f3 jne 0x11c67756 */
  if (!C.zf) goto L_11c67756;
  /* 11c676f5 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c676f8 jge 0x11c67725 */
  if ((C.sf==C.of)) goto L_11c67725;
  /* 11c676fa mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c676ff mov ecx, edi */
  ECX = (EDI);
  /* 11c67701 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67706 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c6770a not ebx */
  EBX = (~(EBX));
  /* 11c6770c mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c6770f and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11c67713 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11c67717 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c67719 jne 0x11c67753 */
  if (!C.zf) goto L_11c67753;
  /* 11c6771b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6771e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c67721 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11c67723 jmp 0x11c67756 */
  goto L_11c67756;
L_11c67725:;
  /* 11c67725 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c67728 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c6772d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c6772f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67732 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c67736 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c6773d not ebx */
  EBX = (~(EBX));
  /* 11c6773f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c67741 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c67743 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c67746 jne 0x11c67753 */
  if (!C.zf) goto L_11c67753;
  /* 11c67748 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6774b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6774e and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c67751 jmp 0x11c67756 */
  goto L_11c67756;
L_11c67753:;
  /* 11c67753 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c67756:;
  /* 11c67756 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c67759 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11c6775c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67760 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11c67763 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c67766 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11c67769 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c6776c je 0x11c67806 */
  if (C.zf) goto L_11c67806;
  /* 11c67772 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c67775 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c67779 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c6777c mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11c6777f mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11c67782 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c67785 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c67788 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11c6778b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c6778e cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67791 jne 0x11c677f7 */
  if (!C.zf) goto L_11c677f7;
  /* 11c67793 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c67797 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6779a mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11c6779d jge 0x11c677c8 */
  if ((C.sf==C.of)) goto L_11c677c8;
  /* 11c6779f inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c677a1 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c677a5 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c677a9 jne 0x11c677b6 */
  if (!C.zf) goto L_11c677b6;
  /* 11c677ab mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c677b0 mov ecx, esi */
  ECX = (ESI);
  /* 11c677b2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c677b4 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11c677b6:;
  /* 11c677b6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c677bb mov ecx, esi */
  ECX = (ESI);
  /* 11c677bd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c677bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c677c2 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c677c6 jmp 0x11c677f7 */
  goto L_11c677f7;
L_11c677c8:;
  /* 11c677c8 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c677ca cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c677ce mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c677d2 jne 0x11c677e1 */
  if (!C.zf) goto L_11c677e1;
  /* 11c677d4 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c677d7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c677dc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c677de or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11c677e1:;
  /* 11c677e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c677e4 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c677eb lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c677ee mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c677f3 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c677f5 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c677f7:;
  /* 11c677f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c677fa:;
  /* 11c677fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c677fc je 0x11c67809 */
  if (C.zf) goto L_11c67809;
  /* 11c677fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c67800 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11c67804 jmp 0x11c67809 */
  goto L_11c67809;
L_11c67806:;
  /* 11c67806 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c67809:;
  /* 11c67809 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6780c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6780e lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c67811 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c67813 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11c67817 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6781a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c6781c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6781e lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11c67821 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c67823 jne 0x11c6783f */
  if (!C.zf) goto L_11c6783f;
  /* 11c67825 cmp ebx, dword ptr [0x11c88e30] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c88e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6782b jne 0x11c6783f */
  if (!C.zf) goto L_11c6783f;
  /* 11c6782d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67830 cmp ecx, dword ptr [0x11c88e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c88e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67836 jne 0x11c6783f */
  if (!C.zf) goto L_11c6783f;
  /* 11c67838 and dword ptr [0x11c88e30], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c88e30)))&(0x0u); w32((uint32_t)(0x11c88e30), (_r)); fl_logic(_r,32); }
L_11c6783f:;
  /* 11c6783f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67842 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c67844 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11c67847:;
  /* 11c67847 pop edi */
  EDI = (pop32());
  /* 11c67848 pop esi */
  ESI = (pop32());
  /* 11c67849 pop ebx */
  EBX = (pop32());
  /* 11c6784a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6784b ret  */
  ESPCHK(0x11c67543u, _esp0);
  ESP += 4; return;
}

/* FUN_1000784c @ 0x11c6784c (177 bytes, 53 insns) */
void f_11c6784c(void) {
  FTRACE(0x11c6784cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6784c mov eax, dword ptr [0x11c88e34] */
  EAX = (r32((uint32_t)(0x11c88e34)));
  /* 11c67851 mov ecx, dword ptr [0x11c88e24] */
  ECX = (r32((uint32_t)(0x11c88e24)));
  /* 11c67857 push esi */
  push32((uint32_t)(ESI));
  /* 11c67858 push edi */
  push32((uint32_t)(EDI));
  /* 11c67859 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6785b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6785d jne 0x11c6788f */
  if (!C.zf) goto L_11c6788f;
  /* 11c6785f lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11c67863 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c67866 push eax */
  push32((uint32_t)(EAX));
  /* 11c67867 push dword ptr [0x11c88e38] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e38))));
  /* 11c6786d push edi */
  push32((uint32_t)(EDI));
  /* 11c6786e push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c67874 call dword ptr [0x11c6e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c8))), 0x11c6787au);
  /* 11c6787a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6787c je 0x11c678df */
  if (C.zf) goto L_11c678df;
  /* 11c6787e add dword ptr [0x11c88e24], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11c88e24))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11c88e24), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c67885 mov dword ptr [0x11c88e38], eax */
  w32((uint32_t)(0x11c88e38), (EAX));
  /* 11c6788a mov eax, dword ptr [0x11c88e34] */
  EAX = (r32((uint32_t)(0x11c88e34)));
L_11c6788f:;
  /* 11c6788f mov ecx, dword ptr [0x11c88e38] */
  ECX = (r32((uint32_t)(0x11c88e38)));
  /* 11c67895 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11c6789a push 8 */
  push32((uint32_t)(0x8u));
  /* 11c6789c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c6789f push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c678a5 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c678a8 call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c678aeu);
  /* 11c678ae cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c678b0 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c678b3 je 0x11c678df */
  if (C.zf) goto L_11c678df;
  /* 11c678b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c678b7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c678bc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c678c1 push edi */
  push32((uint32_t)(EDI));
  /* 11c678c2 call dword ptr [0x11c6e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e060))), 0x11c678c8u);
  /* 11c678c8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c678ca mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c678cd jne 0x11c678e3 */
  if (!C.zf) goto L_11c678e3;
  /* 11c678cf push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c678d2 push edi */
  push32((uint32_t)(EDI));
  /* 11c678d3 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c678d9 call dword ptr [0x11c6e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e07c))), 0x11c678dfu);
L_11c678df:;
  /* 11c678df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c678e1 jmp 0x11c678fa */
  goto L_11c678fa;
L_11c678e3:;
  /* 11c678e3 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c678e7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c678e9 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c678ec inc dword ptr [0x11c88e34] */
  { uint32_t _r=(r32((uint32_t)(0x11c88e34)))+1; w32((uint32_t)(0x11c88e34), (_r)); fl_inc(_r,32); }
  /* 11c678f2 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c678f5 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c678f8 mov eax, esi */
  EAX = (ESI);
L_11c678fa:;
  /* 11c678fa pop edi */
  EDI = (pop32());
  /* 11c678fb pop esi */
  ESI = (pop32());
  /* 11c678fc ret  */
  ESPCHK(0x11c6784cu, _esp0);
  ESP += 4; return;
}

/* FUN_100078fd @ 0x11c678fd (251 bytes, 85 insns) */
void f_11c678fd(void) {
  FTRACE(0x11c678fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c678fd push ebp */
  push32((uint32_t)(EBP));
  /* 11c678fe mov ebp, esp */
  EBP = (ESP);
  /* 11c67900 push ecx */
  push32((uint32_t)(ECX));
  /* 11c67901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67904 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67905 push esi */
  push32((uint32_t)(ESI));
  /* 11c67906 push edi */
  push32((uint32_t)(EDI));
  /* 11c67907 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11c6790a mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c6790d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c6790f:;
  /* 11c6790f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c67911 jl 0x11c67918 */
  if ((C.sf!=C.of)) goto L_11c67918;
  /* 11c67913 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c67915 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c67916 jmp 0x11c6790f */
  goto L_11c6790f;
L_11c67918:;
  /* 11c67918 mov eax, ebx */
  EAX = (EBX);
  /* 11c6791a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c6791c imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67922 pop edx */
  EDX = (pop32());
  /* 11c67923 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11c6792a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c6792d:;
  /* 11c6792d mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11c67930 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11c67933 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67936 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c67937 jne 0x11c6792d */
  if (!C.zf) goto L_11c6792d;
  /* 11c67939 mov edi, ebx */
  EDI = (EBX);
  /* 11c6793b push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6793d shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c67940 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67943 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c67948 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c6794d push edi */
  push32((uint32_t)(EDI));
  /* 11c6794e call dword ptr [0x11c6e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e060))), 0x11c67954u);
  /* 11c67954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c67956 jne 0x11c67960 */
  if (!C.zf) goto L_11c67960;
  /* 11c67958 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6795b jmp 0x11c679f3 */
  goto L_11c679f3;
L_11c67960:;
  /* 11c67960 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11c67966 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67968 ja 0x11c679a6 */
  if ((!C.cf&&!C.zf)) goto L_11c679a6;
  /* 11c6796a lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11c6796d:;
  /* 11c6796d or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c67971 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11c67978 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11c6797e mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11c67985 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c67987 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11c6798d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c67990 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11c6799a add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6799f lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11c679a2 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c679a4 jbe 0x11c6796d */
  if ((C.cf||C.zf)) goto L_11c6796d;
L_11c679a6:;
  /* 11c679a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c679a9 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11c679ac add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c679b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c679b3 pop edi */
  EDI = (pop32());
  /* 11c679b4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c679b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11c679ba lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11c679bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c679c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c679c3 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c679c8 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11c679cf mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11c679d2 mov cl, al */
  CL = (AL);
  /* 11c679d4 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c679d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c679d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c679db mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11c679de jne 0x11c679e3 */
  if (!C.zf) goto L_11c679e3;
  /* 11c679e0 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11c679e3:;
  /* 11c679e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c679e8 mov ecx, ebx */
  ECX = (EBX);
  /* 11c679ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c679ec not edx */
  EDX = (~(EDX));
  /* 11c679ee and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c679f1 mov eax, ebx */
  EAX = (EBX);
L_11c679f3:;
  /* 11c679f3 pop edi */
  EDI = (pop32());
  /* 11c679f4 pop esi */
  ESI = (pop32());
  /* 11c679f5 pop ebx */
  EBX = (pop32());
  /* 11c679f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c679f7 ret  */
  ESPCHK(0x11c678fdu, _esp0);
  ESP += 4; return;
}

/* FUN_100079f8 @ 0x11c679f8 (758 bytes, 259 insns) */
void f_11c679f8(void) {
  FTRACE(0x11c679f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c679f8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c679f9 mov ebp, esp */
  EBP = (ESP);
  /* 11c679fb sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c679fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67a01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67a04 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67a05 push esi */
  push32((uint32_t)(ESI));
  /* 11c67a06 push edi */
  push32((uint32_t)(EDI));
  /* 11c67a07 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67a0a mov edx, edi */
  EDX = (EDI);
  /* 11c67a0c lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11c67a0f sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67a12 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c67a15 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c67a18 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11c67a1b mov ecx, edx */
  ECX = (EDX);
  /* 11c67a1d imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c67a23 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c67a2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c67a2d mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11c67a30 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c67a31 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67a33 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c67a36 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11c67a3a lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c67a3e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c67a41 jle 0x11c67ba6 */
  if ((C.zf||C.sf!=C.of)) goto L_11c67ba6;
  /* 11c67a47 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c67a4a jne 0x11c67b9f */
  if (!C.zf) goto L_11c67b9f;
  /* 11c67a50 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67a52 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67a54 jg 0x11c67b9f */
  if ((!C.zf&&C.sf==C.of)) goto L_11c67b9f;
  /* 11c67a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67a5d sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c67a60 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c67a61 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67a64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c67a67 jbe 0x11c67a6f */
  if ((C.cf||C.zf)) goto L_11c67a6f;
  /* 11c67a69 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67a6b pop ecx */
  ECX = (pop32());
  /* 11c67a6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11c67a6f:;
  /* 11c67a6f mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67a72 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67a75 jne 0x11c67abf */
  if (!C.zf) goto L_11c67abf;
  /* 11c67a77 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67a7a jae 0x11c67a9b */
  if (!C.cf) goto L_11c67a9b;
  /* 11c67a7c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67a81 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67a83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c67a86 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c67a8a not ebx */
  EBX = (~(EBX));
  /* 11c67a8c and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c67a90 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c67a92 jne 0x11c67abf */
  if (!C.zf) goto L_11c67abf;
  /* 11c67a94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67a97 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c67a99 jmp 0x11c67abf */
  goto L_11c67abf;
L_11c67a9b:;
  /* 11c67a9b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67a9e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67aa3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67aa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c67aa8 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c67aac not ebx */
  EBX = (~(EBX));
  /* 11c67aae and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c67ab5 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c67ab7 jne 0x11c67abf */
  if (!C.zf) goto L_11c67abf;
  /* 11c67ab9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67abc and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67abf:;
  /* 11c67abf mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c67ac2 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67ac5 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c67ac8 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67acb mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11c67ace mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c67ad1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67ad4 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67ad6 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c67ad9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67add jle 0x11c67b8d */
  if ((C.zf||C.sf!=C.of)) goto L_11c67b8d;
  /* 11c67ae3 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67ae6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67ae9 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11c67aec dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c67aed lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c67af1 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67af4 jbe 0x11c67af9 */
  if ((C.cf||C.zf)) goto L_11c67af9;
  /* 11c67af6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67af8 pop edi */
  EDI = (pop32());
L_11c67af9:;
  /* 11c67af9 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c67afc lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11c67aff mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11c67b02 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c67b05 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c67b08 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67b0b mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11c67b0e mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11c67b11 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c67b14 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c67b17 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c67b1a cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67b1d jne 0x11c67b7b */
  if (!C.zf) goto L_11c67b7b;
  /* 11c67b1f mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11c67b23 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67b26 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11c67b29 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c67b2b mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11c67b2f jae 0x11c67b52 */
  if (!C.cf) goto L_11c67b52;
  /* 11c67b31 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c67b35 jne 0x11c67b45 */
  if (!C.zf) goto L_11c67b45;
  /* 11c67b37 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67b3c mov ecx, edi */
  ECX = (EDI);
  /* 11c67b3e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67b43 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c67b45:;
  /* 11c67b45 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11c67b49 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c67b4e mov ecx, edi */
  ECX = (EDI);
  /* 11c67b50 jmp 0x11c67b77 */
  goto L_11c67b77;
L_11c67b52:;
  /* 11c67b52 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c67b56 jne 0x11c67b68 */
  if (!C.zf) goto L_11c67b68;
  /* 11c67b58 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c67b5b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67b60 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67b65 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67b68:;
  /* 11c67b68 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11c67b6f lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c67b72 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11c67b77:;
  /* 11c67b77 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c67b79 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c67b7b:;
  /* 11c67b7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67b7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67b81 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11c67b85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c67b87 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11c67b8b jmp 0x11c67b90 */
  goto L_11c67b90;
L_11c67b8d:;
  /* 11c67b8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11c67b90:;
  /* 11c67b90 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11c67b93 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11c67b96 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11c67b9a jmp 0x11c67ce6 */
  goto L_11c67ce6;
L_11c67b9f:;
  /* 11c67b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c67ba1 jmp 0x11c67ce9 */
  goto L_11c67ce9;
L_11c67ba6:;
  /* 11c67ba6 jge 0x11c67ce6 */
  if ((C.sf==C.of)) goto L_11c67ce6;
  /* 11c67bac mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c67baf sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c67bb2 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c67bb5 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11c67bb8 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11c67bbc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67bbf mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11c67bc2 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c67bc5 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c67bc6 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11c67bc9 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67bcc jbe 0x11c67bd1 */
  if ((C.cf||C.zf)) goto L_11c67bd1;
  /* 11c67bce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67bd0 pop esi */
  ESI = (pop32());
L_11c67bd1:;
  /* 11c67bd1 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c67bd5 jne 0x11c67c60 */
  if (!C.zf) goto L_11c67c60;
  /* 11c67bdb mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c67bde sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c67be1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c67be2 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67be5 jbe 0x11c67bea */
  if ((C.cf||C.zf)) goto L_11c67bea;
  /* 11c67be7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67be9 pop esi */
  ESI = (pop32());
L_11c67bea:;
  /* 11c67bea mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67bed cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67bf0 jne 0x11c67c39 */
  if (!C.zf) goto L_11c67c39;
  /* 11c67bf2 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67bf5 jae 0x11c67c15 */
  if (!C.cf) goto L_11c67c15;
  /* 11c67bf7 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67bfc mov ecx, esi */
  ECX = (ESI);
  /* 11c67bfe shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67c00 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11c67c04 not ebx */
  EBX = (~(EBX));
  /* 11c67c06 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c67c0a dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11c67c0c jne 0x11c67c36 */
  if (!C.zf) goto L_11c67c36;
  /* 11c67c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67c11 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c67c13 jmp 0x11c67c36 */
  goto L_11c67c36;
L_11c67c15:;
  /* 11c67c15 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c67c18 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c67c1d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c67c1f lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11c67c23 not ebx */
  EBX = (~(EBX));
  /* 11c67c25 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c67c2c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c67c2e jne 0x11c67c36 */
  if (!C.zf) goto L_11c67c36;
  /* 11c67c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67c33 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67c36:;
  /* 11c67c36 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11c67c39:;
  /* 11c67c39 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c67c3c mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67c3f mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c67c42 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c67c45 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11c67c48 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11c67c4b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67c4e add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67c51 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11c67c54 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c67c57 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c67c58 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67c5b jbe 0x11c67c60 */
  if ((C.cf||C.zf)) goto L_11c67c60;
  /* 11c67c5d push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c67c5f pop esi */
  ESI = (pop32());
L_11c67c60:;
  /* 11c67c60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c67c63 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c67c67 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c67c6a mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11c67c6d mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c67c70 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c67c73 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c67c76 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11c67c79 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c67c7c cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67c7f jne 0x11c67cdd */
  if (!C.zf) goto L_11c67cdd;
  /* 11c67c81 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c67c85 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67c88 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c67c8b inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c67c8d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c67c91 jae 0x11c67cb4 */
  if (!C.cf) goto L_11c67cb4;
  /* 11c67c93 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c67c97 jne 0x11c67ca7 */
  if (!C.zf) goto L_11c67ca7;
  /* 11c67c99 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c67c9e mov ecx, esi */
  ECX = (ESI);
  /* 11c67ca0 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c67ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67ca5 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c67ca7:;
  /* 11c67ca7 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11c67cab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c67cb0 mov ecx, esi */
  ECX = (ESI);
  /* 11c67cb2 jmp 0x11c67cd9 */
  goto L_11c67cd9;
L_11c67cb4:;
  /* 11c67cb4 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c67cb8 jne 0x11c67cca */
  if (!C.zf) goto L_11c67cca;
  /* 11c67cba lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c67cbd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c67cc2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c67cc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c67cc7 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c67cca:;
  /* 11c67cca lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11c67cd1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c67cd4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11c67cd9:;
  /* 11c67cd9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c67cdb or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c67cdd:;
  /* 11c67cdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c67ce0 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c67ce2 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11c67ce6:;
  /* 11c67ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c67ce8 pop eax */
  EAX = (pop32());
L_11c67ce9:;
  /* 11c67ce9 pop edi */
  EDI = (pop32());
  /* 11c67cea pop esi */
  ESI = (pop32());
  /* 11c67ceb pop ebx */
  EBX = (pop32());
  /* 11c67cec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c67ced ret  */
  ESPCHK(0x11c679f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cee @ 0x11c67cee (324 bytes, 102 insns) */
void f_11c67cee(void) {
  FTRACE(0x11c67ceeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67cee cmp dword ptr [0x11c70c28], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70c28))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67cf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67cf6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c67cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11c67cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11c67cf9 jne 0x11c67d02 */
  if (!C.zf) goto L_11c67d02;
  /* 11c67cfb mov esi, 0x11c70c18 */
  ESI = (0x11c70c18u);
  /* 11c67d00 jmp 0x11c67d1f */
  goto L_11c67d1f;
L_11c67d02:;
  /* 11c67d02 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11c67d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67d09 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c67d0f call dword ptr [0x11c6e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0c4))), 0x11c67d15u);
  /* 11c67d15 mov esi, eax */
  ESI = (EAX);
  /* 11c67d17 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c67d19 je 0x11c67e2b */
  if (C.zf) goto L_11c67e2b;
L_11c67d1f:;
  /* 11c67d1f mov ebp, dword ptr [0x11c6e060] */
  EBP = (r32((uint32_t)(0x11c6e060)));
  /* 11c67d25 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c67d27 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c67d2c push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11c67d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67d33 call ebp */
  call_ind((uint32_t)(EBP), 0x11c67d35u);
  /* 11c67d35 mov edi, eax */
  EDI = (EAX);
  /* 11c67d37 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c67d39 je 0x11c67e14 */
  if (C.zf) goto L_11c67e14;
  /* 11c67d3f push 4 */
  push32((uint32_t)(0x4u));
  /* 11c67d41 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11c67d46 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c67d4b push ebx */
  push32((uint32_t)(EBX));
  /* 11c67d4c push edi */
  push32((uint32_t)(EDI));
  /* 11c67d4d call ebp */
  call_ind((uint32_t)(EBP), 0x11c67d4fu);
  /* 11c67d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c67d51 je 0x11c67e06 */
  if (C.zf) goto L_11c67e06;
  /* 11c67d57 mov eax, 0x11c70c18 */
  EAX = (0x11c70c18u);
  /* 11c67d5c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67d5e jne 0x11c67d7e */
  if (!C.zf) goto L_11c67d7e;
  /* 11c67d60 cmp dword ptr [0x11c70c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c70c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67d67 jne 0x11c67d6e */
  if (!C.zf) goto L_11c67d6e;
  /* 11c67d69 mov dword ptr [0x11c70c18], eax */
  w32((uint32_t)(0x11c70c18), (EAX));
L_11c67d6e:;
  /* 11c67d6e cmp dword ptr [0x11c70c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c70c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67d75 jne 0x11c67d93 */
  if (!C.zf) goto L_11c67d93;
  /* 11c67d77 mov dword ptr [0x11c70c1c], eax */
  w32((uint32_t)(0x11c70c1c), (EAX));
  /* 11c67d7c jmp 0x11c67d93 */
  goto L_11c67d93;
L_11c67d7e:;
  /* 11c67d7e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c67d80 mov eax, dword ptr [0x11c70c1c] */
  EAX = (r32((uint32_t)(0x11c70c1c)));
  /* 11c67d85 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c67d88 mov dword ptr [0x11c70c1c], esi */
  w32((uint32_t)(0x11c70c1c), (ESI));
  /* 11c67d8e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c67d91 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11c67d93:;
  /* 11c67d93 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11c67d99 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11c67d9f mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c67da2 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11c67da5 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11c67da8 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11c67dab mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c67dae xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c67db0 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11c67db5:;
  /* 11c67db5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c67db7 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67dba setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11c67dbd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c67dbe and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c67dc0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c67dc1 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c67dc2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c67dc4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c67dc7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67dca cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67dd0 jl 0x11c67db5 */
  if ((C.sf!=C.of)) goto L_11c67db5;
  /* 11c67dd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c67dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11c67dd6 call 0x11c66490 */
  push32(0x11c67ddbu); f_11c66490();
  /* 11c67ddb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c67dde:;
  /* 11c67dde mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c67de1 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67de3 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67de5 jae 0x11c67e02 */
  if (!C.cf) goto L_11c67e02;
  /* 11c67de7 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11c67dee lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c67df1 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c67df3 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11c67dfa add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67e00 jmp 0x11c67dde */
  goto L_11c67dde;
L_11c67e02:;
  /* 11c67e02 mov eax, esi */
  EAX = (ESI);
  /* 11c67e04 jmp 0x11c67e2d */
  goto L_11c67e2d;
L_11c67e06:;
  /* 11c67e06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c67e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67e0d push edi */
  push32((uint32_t)(EDI));
  /* 11c67e0e call dword ptr [0x11c6e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e080))), 0x11c67e14u);
L_11c67e14:;
  /* 11c67e14 cmp esi, 0x11c70c18 */
  { uint32_t _a=(ESI),_b=(0x11c70c18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67e1a je 0x11c67e2b */
  if (C.zf) goto L_11c67e2b;
  /* 11c67e1c push esi */
  push32((uint32_t)(ESI));
  /* 11c67e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67e1f push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c67e25 call dword ptr [0x11c6e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e07c))), 0x11c67e2bu);
L_11c67e2b:;
  /* 11c67e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c67e2d:;
  /* 11c67e2d pop edi */
  EDI = (pop32());
  /* 11c67e2e pop esi */
  ESI = (pop32());
  /* 11c67e2f pop ebp */
  EBP = (pop32());
  /* 11c67e30 pop ebx */
  EBX = (pop32());
  /* 11c67e31 ret  */
  ESPCHK(0x11c67ceeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007e32 @ 0x11c67e32 (86 bytes, 27 insns) */
void f_11c67e32(void) {
  FTRACE(0x11c67e32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67e32 push esi */
  push32((uint32_t)(ESI));
  /* 11c67e33 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c67e37 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c67e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67e3e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c67e41 call dword ptr [0x11c6e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e080))), 0x11c67e47u);
  /* 11c67e47 cmp dword ptr [0x11c72c38], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c72c38))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67e4d jne 0x11c67e57 */
  if (!C.zf) goto L_11c67e57;
  /* 11c67e4f mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c67e52 mov dword ptr [0x11c72c38], eax */
  w32((uint32_t)(0x11c72c38), (EAX));
L_11c67e57:;
  /* 11c67e57 cmp esi, 0x11c70c18 */
  { uint32_t _a=(ESI),_b=(0x11c70c18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67e5d je 0x11c67e7f */
  if (C.zf) goto L_11c67e7f;
  /* 11c67e5f mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c67e62 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c67e64 push esi */
  push32((uint32_t)(ESI));
  /* 11c67e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c67e67 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c67e69 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c67e6b mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c67e6e mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c67e71 push dword ptr [0x11c88e40] */
  push32((uint32_t)(r32((uint32_t)(0x11c88e40))));
  /* 11c67e77 call dword ptr [0x11c6e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e07c))), 0x11c67e7du);
  /* 11c67e7d pop esi */
  ESI = (pop32());
  /* 11c67e7e ret  */
  ESPCHK(0x11c67e32u, _esp0);
  ESP += 4; return;
L_11c67e7f:;
  /* 11c67e7f or dword ptr [0x11c70c28], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c70c28)))|(0xffffffffu); w32((uint32_t)(0x11c70c28), (_r)); fl_logic(_r,32); }
  /* 11c67e86 pop esi */
  ESI = (pop32());
  /* 11c67e87 ret  */
  ESPCHK(0x11c67e32u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e88 @ 0x11c67e88 (194 bytes, 66 insns) */
void f_11c67e88(void) {
  FTRACE(0x11c67e88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67e88 push ebp */
  push32((uint32_t)(EBP));
  /* 11c67e89 mov ebp, esp */
  EBP = (ESP);
  /* 11c67e8b push ecx */
  push32((uint32_t)(ECX));
  /* 11c67e8c push ebx */
  push32((uint32_t)(EBX));
  /* 11c67e8d push esi */
  push32((uint32_t)(ESI));
  /* 11c67e8e mov esi, dword ptr [0x11c70c1c] */
  ESI = (r32((uint32_t)(0x11c70c1c)));
  /* 11c67e94 push edi */
  push32((uint32_t)(EDI));
L_11c67e95:;
  /* 11c67e95 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67e99 je 0x11c67f33 */
  if (C.zf) goto L_11c67f33;
  /* 11c67e9f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c67ea3 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11c67ea9 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11c67eae:;
  /* 11c67eae cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67eb4 jne 0x11c67eef */
  if (!C.zf) goto L_11c67eef;
  /* 11c67eb6 mov eax, ebx */
  EAX = (EBX);
  /* 11c67eb8 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c67ebd add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67ec0 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c67ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11c67ec6 call dword ptr [0x11c6e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e080))), 0x11c67eccu);
  /* 11c67ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c67ece je 0x11c67eef */
  if (C.zf) goto L_11c67eef;
  /* 11c67ed0 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11c67ed3 dec dword ptr [0x11c87ab4] */
  { uint32_t _r=(r32((uint32_t)(0x11c87ab4)))-1; w32((uint32_t)(0x11c87ab4), (_r)); fl_dec(_r,32); }
  /* 11c67ed9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c67edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c67ede je 0x11c67ee4 */
  if (C.zf) goto L_11c67ee4;
  /* 11c67ee0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67ee2 jbe 0x11c67ee7 */
  if ((C.cf||C.zf)) goto L_11c67ee7;
L_11c67ee4:;
  /* 11c67ee4 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11c67ee7:;
  /* 11c67ee7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c67eea dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11c67eed je 0x11c67efc */
  if (C.zf) goto L_11c67efc;
L_11c67eef:;
  /* 11c67eef sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67ef5 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67ef8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c67efa jge 0x11c67eae */
  if ((C.sf==C.of)) goto L_11c67eae;
L_11c67efc:;
  /* 11c67efc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f00 mov ecx, esi */
  ECX = (ESI);
  /* 11c67f02 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c67f05 je 0x11c67f33 */
  if (C.zf) goto L_11c67f33;
  /* 11c67f07 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f0b jne 0x11c67f33 */
  if (!C.zf) goto L_11c67f33;
  /* 11c67f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c67f0f lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11c67f12 pop edx */
  EDX = (pop32());
L_11c67f13:;
  /* 11c67f13 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f16 jne 0x11c67f24 */
  if (!C.zf) goto L_11c67f24;
  /* 11c67f18 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c67f19 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c67f1c cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f22 jl 0x11c67f13 */
  if ((C.sf!=C.of)) goto L_11c67f13;
L_11c67f24:;
  /* 11c67f24 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f2a jne 0x11c67f33 */
  if (!C.zf) goto L_11c67f33;
  /* 11c67f2c push ecx */
  push32((uint32_t)(ECX));
  /* 11c67f2d call 0x11c67e32 */
  push32(0x11c67f32u); f_11c67e32();
  /* 11c67f32 pop ecx */
  ECX = (pop32());
L_11c67f33:;
  /* 11c67f33 cmp esi, dword ptr [0x11c70c1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c70c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f39 je 0x11c67f45 */
  if (C.zf) goto L_11c67f45;
  /* 11c67f3b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f3f jg 0x11c67e95 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c67e95;
L_11c67f45:;
  /* 11c67f45 pop edi */
  EDI = (pop32());
  /* 11c67f46 pop esi */
  ESI = (pop32());
  /* 11c67f47 pop ebx */
  EBX = (pop32());
  /* 11c67f48 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c67f49 ret  */
  ESPCHK(0x11c67e88u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f4a @ 0x11c67f4a (87 bytes, 34 insns) */
void f_11c67f4a(void) {
  FTRACE(0x11c67f4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67f4a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c67f4e mov edx, 0x11c70c18 */
  EDX = (0x11c70c18u);
  /* 11c67f53 push esi */
  push32((uint32_t)(ESI));
  /* 11c67f54 mov ecx, edx */
  ECX = (EDX);
L_11c67f56:;
  /* 11c67f56 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f59 jbe 0x11c67f60 */
  if ((C.cf||C.zf)) goto L_11c67f60;
  /* 11c67f5b cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f5e jb 0x11c67f68 */
  if (C.cf) goto L_11c67f68;
L_11c67f60:;
  /* 11c67f60 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c67f62 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f64 je 0x11c67f9d */
  if (C.zf) goto L_11c67f9d;
  /* 11c67f66 jmp 0x11c67f56 */
  goto L_11c67f56;
L_11c67f68:;
  /* 11c67f68 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11c67f6a jne 0x11c67f9d */
  if (!C.zf) goto L_11c67f9d;
  /* 11c67f6c mov esi, eax */
  ESI = (EAX);
  /* 11c67f6e mov edx, 0x100 */
  EDX = (0x100u);
  /* 11c67f73 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c67f79 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67f7b jb 0x11c67f9d */
  if (C.cf) goto L_11c67f9d;
  /* 11c67f7d mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c67f81 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c67f83 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c67f87 mov ecx, eax */
  ECX = (EAX);
  /* 11c67f89 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11c67f8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67f90 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c67f92 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67f94 pop esi */
  ESI = (pop32());
  /* 11c67f95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c67f98 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11c67f9c ret  */
  ESPCHK(0x11c67f4au, _esp0);
  ESP += 4; return;
L_11c67f9d:;
  /* 11c67f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c67f9f pop esi */
  ESI = (pop32());
  /* 11c67fa0 ret  */
  ESPCHK(0x11c67f4au, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa1 @ 0x11c67fa1 (69 bytes, 19 insns) */
void f_11c67fa1(void) {
  FTRACE(0x11c67fa1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67fa1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c67fa5 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c67fa9 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c67fac sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11c67faf lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11c67fb3 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c67fb7 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c67fba add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c67fbc and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11c67fbf cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67fc5 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11c67fcc jne 0x11c67fe5 */
  if (!C.zf) goto L_11c67fe5;
  /* 11c67fce inc dword ptr [0x11c87ab4] */
  { uint32_t _r=(r32((uint32_t)(0x11c87ab4)))+1; w32((uint32_t)(0x11c87ab4), (_r)); fl_inc(_r,32); }
  /* 11c67fd4 cmp dword ptr [0x11c87ab4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c87ab4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67fdb jne 0x11c67fe5 */
  if (!C.zf) goto L_11c67fe5;
  /* 11c67fdd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c67fdf call 0x11c67e88 */
  push32(0x11c67fe4u); f_11c67e88();
  /* 11c67fe4 pop ecx */
  ECX = (pop32());
L_11c67fe5:;
  /* 11c67fe5 ret  */
  ESPCHK(0x11c67fa1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe6 @ 0x11c67fe6 (520 bytes, 180 insns) */
void f_11c67fe6(void) {
  FTRACE(0x11c67fe6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c67fe6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c67fe7 mov ebp, esp */
  EBP = (ESP);
  /* 11c67fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c67fea push ecx */
  push32((uint32_t)(ECX));
  /* 11c67feb push ebx */
  push32((uint32_t)(EBX));
  /* 11c67fec push esi */
  push32((uint32_t)(ESI));
  /* 11c67fed mov esi, dword ptr [0x11c72c38] */
  ESI = (r32((uint32_t)(0x11c72c38)));
  /* 11c67ff3 push edi */
  push32((uint32_t)(EDI));
L_11c67ff4:;
  /* 11c67ff4 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c67ff7 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c67ffa je 0x11c6809f */
  if (C.zf) goto L_11c6809f;
  /* 11c68000 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11c68003 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c68009 mov eax, edi */
  EAX = (EDI);
  /* 11c6800b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6800d sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68010 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11c68013 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c68016 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68018 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6801a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6801d jae 0x11c68059 */
  if (!C.cf) goto L_11c68059;
L_11c6801f:;
  /* 11c6801f mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11c68021 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68024 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68026 jl 0x11c68042 */
  if ((C.sf!=C.of)) goto L_11c68042;
  /* 11c68028 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6802b jbe 0x11c68042 */
  if ((C.cf||C.zf)) goto L_11c68042;
  /* 11c6802d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6802e push ecx */
  push32((uint32_t)(ECX));
  /* 11c6802f push eax */
  push32((uint32_t)(EAX));
  /* 11c68030 call 0x11c681ee */
  push32(0x11c68035u); f_11c681ee();
  /* 11c68035 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6803a jne 0x11c680b1 */
  if (!C.zf) goto L_11c680b1;
  /* 11c6803c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6803f mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c68042:;
  /* 11c68042 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68045 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c6804b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68050 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c68055 jb 0x11c6801f */
  if (C.cf) goto L_11c6801f;
  /* 11c68057 jmp 0x11c6805c */
  goto L_11c6805c;
L_11c68059:;
  /* 11c68059 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c6805c:;
  /* 11c6805c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c6805f mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c68062 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11c68065 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c68068 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6806a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c6806d jae 0x11c680a2 */
  if (!C.cf) goto L_11c680a2;
L_11c6806f:;
  /* 11c6806f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c68071 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68073 jl 0x11c6808e */
  if ((C.sf!=C.of)) goto L_11c6808e;
  /* 11c68075 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68078 jbe 0x11c6808e */
  if ((C.cf||C.zf)) goto L_11c6808e;
  /* 11c6807a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6807b push eax */
  push32((uint32_t)(EAX));
  /* 11c6807c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c6807f call 0x11c681ee */
  push32(0x11c68084u); f_11c681ee();
  /* 11c68084 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c68089 jne 0x11c680b1 */
  if (!C.zf) goto L_11c680b1;
  /* 11c6808b mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c6808e:;
  /* 11c6808e add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c68095 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68098 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6809b jb 0x11c6806f */
  if (C.cf) goto L_11c6806f;
  /* 11c6809d jmp 0x11c680a2 */
  goto L_11c680a2;
L_11c6809f:;
  /* 11c6809f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c680a2:;
  /* 11c680a2 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c680a4 cmp esi, dword ptr [0x11c72c38] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c72c38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c680aa je 0x11c680c1 */
  if (C.zf) goto L_11c680c1;
  /* 11c680ac jmp 0x11c67ff4 */
  goto L_11c67ff4;
L_11c680b1:;
  /* 11c680b1 mov dword ptr [0x11c72c38], esi */
  w32((uint32_t)(0x11c72c38), (ESI));
  /* 11c680b7 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c680b9 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11c680bc jmp 0x11c681e9 */
  goto L_11c681e9;
L_11c680c1:;
  /* 11c680c1 mov eax, 0x11c70c18 */
  EAX = (0x11c70c18u);
  /* 11c680c6 mov edi, eax */
  EDI = (EAX);
L_11c680c8:;
  /* 11c680c8 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c680cc je 0x11c680d4 */
  if (C.zf) goto L_11c680d4;
  /* 11c680ce cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c680d2 jne 0x11c680e0 */
  if (!C.zf) goto L_11c680e0;
L_11c680d4:;
  /* 11c680d4 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11c680d6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c680d8 je 0x11c681b5 */
  if (C.zf) goto L_11c681b5;
  /* 11c680de jmp 0x11c680c8 */
  goto L_11c680c8;
L_11c680e0:;
  /* 11c680e0 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11c680e3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c680e7 mov esi, ebx */
  ESI = (EBX);
  /* 11c680e9 mov eax, ebx */
  EAX = (EBX);
  /* 11c680eb sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c680ed sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c680f0 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c680f3 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11c680f6 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c680f9 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c680fc jne 0x11c6810f */
  if (!C.zf) goto L_11c6810f;
L_11c680fe:;
  /* 11c680fe cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68102 jge 0x11c6810f */
  if ((C.sf==C.of)) goto L_11c6810f;
  /* 11c68104 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68107 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6810a cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6810d je 0x11c680fe */
  if (C.zf) goto L_11c680fe;
L_11c6810f:;
  /* 11c6810f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68112 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c68114 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c68117 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c6811c push eax */
  push32((uint32_t)(EAX));
  /* 11c6811d push esi */
  push32((uint32_t)(ESI));
  /* 11c6811e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c68121 call dword ptr [0x11c6e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e060))), 0x11c68127u);
  /* 11c68127 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68129 jne 0x11c681e7 */
  if (!C.zf) goto L_11c681e7;
  /* 11c6812f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c68131 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11c68134 push esi */
  push32((uint32_t)(ESI));
  /* 11c68135 call 0x11c66490 */
  push32(0x11c6813au); f_11c66490();
  /* 11c6813a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6813d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c68142 mov ecx, ebx */
  ECX = (EBX);
  /* 11c68144 jle 0x11c68176 */
  if ((C.zf||C.sf!=C.of)) goto L_11c68176;
  /* 11c68146 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c68149 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11c6814c:;
  /* 11c6814c or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11c68153 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11c68156 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11c68159 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c6815e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c68160 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c68162 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11c68169 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6816e add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68171 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c68174 jne 0x11c6814c */
  if (!C.zf) goto L_11c6814c;
L_11c68176:;
  /* 11c68176 mov dword ptr [0x11c72c38], edi */
  w32((uint32_t)(0x11c72c38), (EDI));
  /* 11c6817c lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11c68182:;
  /* 11c68182 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68184 jae 0x11c68192 */
  if (!C.cf) goto L_11c68192;
  /* 11c68186 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68189 je 0x11c68190 */
  if (C.zf) goto L_11c68190;
  /* 11c6818b add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6818e jmp 0x11c68182 */
  goto L_11c68182;
L_11c68190:;
  /* 11c68190 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c68192:;
  /* 11c68192 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68194 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11c68196 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11c68199 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6819c mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11c6819f mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11c681a2 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c681a4 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c681a7 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11c681ab lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11c681b1 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c681b3 jmp 0x11c681e9 */
  goto L_11c681e9;
L_11c681b5:;
  /* 11c681b5 call 0x11c67cee */
  push32(0x11c681bau); f_11c67cee();
  /* 11c681ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c681bc je 0x11c681e7 */
  if (C.zf) goto L_11c681e7;
  /* 11c681be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c681c1 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11c681c4 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11c681c8 mov dword ptr [0x11c72c38], eax */
  w32((uint32_t)(0x11c72c38), (EAX));
  /* 11c681cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c681cf mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c681d4 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c681d6 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c681d9 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11c681dc sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c681df lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11c681e5 jmp 0x11c681e9 */
  goto L_11c681e9;
L_11c681e7:;
  /* 11c681e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c681e9:;
  /* 11c681e9 pop edi */
  EDI = (pop32());
  /* 11c681ea pop esi */
  ESI = (pop32());
  /* 11c681eb pop ebx */
  EBX = (pop32());
  /* 11c681ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c681ed ret  */
  ESPCHK(0x11c67fe6u, _esp0);
  ESP += 4; return;
}

/* FUN_100081ee @ 0x11c681ee (292 bytes, 125 insns) */
void f_11c681ee(void) {
  FTRACE(0x11c681eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c681ee push ebp */
  push32((uint32_t)(EBP));
  /* 11c681ef mov ebp, esp */
  EBP = (ESP);
  /* 11c681f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11c681f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c681f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c681f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c681f9 push esi */
  push32((uint32_t)(ESI));
  /* 11c681fa mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c681fd push edi */
  push32((uint32_t)(EDI));
  /* 11c681fe mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11c68200 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11c68206 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68208 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c6820b mov eax, edi */
  EAX = (EDI);
  /* 11c6820d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c68210 jb 0x11c68233 */
  if (C.cf) goto L_11c68233;
  /* 11c68212 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11c68215 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c68217 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68219 jae 0x11c68222 */
  if (!C.cf) goto L_11c68222;
  /* 11c6821b add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6821d sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c68220 jmp 0x11c6822b */
  goto L_11c6822b;
L_11c68222:;
  /* 11c68222 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c68226 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c68229 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c6822b:;
  /* 11c6822b lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c6822e jmp 0x11c68301 */
  goto L_11c68301;
L_11c68233:;
  /* 11c68233 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68235 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68238 je 0x11c6823c */
  if (C.zf) goto L_11c6823c;
  /* 11c6823a mov eax, esi */
  EAX = (ESI);
L_11c6823c:;
  /* 11c6823c lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c6823f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68241 jae 0x11c68286 */
  if (!C.cf) goto L_11c68286;
L_11c68243:;
  /* 11c68243 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c68245 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11c68247 jne 0x11c68279 */
  if (!C.zf) goto L_11c68279;
  /* 11c68249 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6824b lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11c6824e pop esi */
  ESI = (pop32());
L_11c6824f:;
  /* 11c6824f cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68252 jne 0x11c68258 */
  if (!C.zf) goto L_11c68258;
  /* 11c68254 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c68255 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c68256 jmp 0x11c6824f */
  goto L_11c6824f;
L_11c68258:;
  /* 11c68258 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6825a jae 0x11c682aa */
  if (!C.cf) goto L_11c682aa;
  /* 11c6825c cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6825f jne 0x11c68266 */
  if (!C.zf) goto L_11c68266;
  /* 11c68261 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c68264 jmp 0x11c68272 */
  goto L_11c68272;
L_11c68266:;
  /* 11c68266 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c68269 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6826c jb 0x11c6830b */
  if (C.cf) goto L_11c6830b;
L_11c68272:;
  /* 11c68272 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68275 mov eax, ebx */
  EAX = (EBX);
  /* 11c68277 jmp 0x11c6827e */
  goto L_11c6827e;
L_11c68279:;
  /* 11c68279 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c6827c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c6827e:;
  /* 11c6827e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c68281 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68284 jb 0x11c68243 */
  if (C.cf) goto L_11c68243;
L_11c68286:;
  /* 11c68286 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11c68289:;
  /* 11c68289 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6828b jae 0x11c6830b */
  if (!C.cf) goto L_11c6830b;
  /* 11c6828d lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11c68290 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68293 jae 0x11c6830b */
  if (!C.cf) goto L_11c6830b;
  /* 11c68295 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c68297 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c68299 jne 0x11c682db */
  if (!C.zf) goto L_11c682db;
  /* 11c6829b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6829d lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11c682a0 pop eax */
  EAX = (pop32());
L_11c682a1:;
  /* 11c682a1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c682a4 jne 0x11c682cb */
  if (!C.zf) goto L_11c682cb;
  /* 11c682a6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c682a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c682a8 jmp 0x11c682a1 */
  goto L_11c682a1;
L_11c682aa:;
  /* 11c682aa lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11c682ad cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c682b0 jae 0x11c682bb */
  if (!C.cf) goto L_11c682bb;
  /* 11c682b2 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c682b4 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c682b6 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c682b9 jmp 0x11c682c4 */
  goto L_11c682c4;
L_11c682bb:;
  /* 11c682bb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c682bf lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11c682c2 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11c682c4:;
  /* 11c682c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c682c6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c682c9 jmp 0x11c68301 */
  goto L_11c68301;
L_11c682cb:;
  /* 11c682cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c682cd jae 0x11c682e2 */
  if (!C.cf) goto L_11c682e2;
  /* 11c682cf sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c682d2 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c682d5 jb 0x11c6830b */
  if (C.cf) goto L_11c6830b;
  /* 11c682d7 mov esi, ebx */
  ESI = (EBX);
  /* 11c682d9 jmp 0x11c68289 */
  goto L_11c68289;
L_11c682db:;
  /* 11c682db movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c682de add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c682e0 jmp 0x11c68289 */
  goto L_11c68289;
L_11c682e2:;
  /* 11c682e2 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11c682e5 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c682e8 jae 0x11c682f3 */
  if (!C.cf) goto L_11c682f3;
  /* 11c682ea sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c682ec mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c682ee mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c682f1 jmp 0x11c682fc */
  goto L_11c682fc;
L_11c682f3:;
  /* 11c682f3 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c682f7 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c682fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c682fc:;
  /* 11c682fc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c682fe lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11c68301:;
  /* 11c68301 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c68304 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c68307 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68309 jmp 0x11c6830d */
  goto L_11c6830d;
L_11c6830b:;
  /* 11c6830b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6830d:;
  /* 11c6830d pop edi */
  EDI = (pop32());
  /* 11c6830e pop esi */
  ESI = (pop32());
  /* 11c6830f pop ebx */
  EBX = (pop32());
  /* 11c68310 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c68311 ret  */
  ESPCHK(0x11c681eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008312 @ 0x11c68312 (169 bytes, 69 insns) */
void f_11c68312(void) {
  FTRACE(0x11c68312u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68312 push ebp */
  push32((uint32_t)(EBP));
  /* 11c68313 mov ebp, esp */
  EBP = (ESP);
  /* 11c68315 push ecx */
  push32((uint32_t)(ECX));
  /* 11c68316 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c68319 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6831a mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6831d push esi */
  push32((uint32_t)(ESI));
  /* 11c6831e movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c68321 push edi */
  push32((uint32_t)(EDI));
  /* 11c68322 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68325 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c68329 mov eax, ebx */
  EAX = (EBX);
  /* 11c6832b sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6832e sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c68331 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68334 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11c68338 jbe 0x11c6834c */
  if ((C.cf||C.zf)) goto L_11c6834c;
  /* 11c6833a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6833d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6833f mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11c68341 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c68343 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11c6834a jmp 0x11c683ac */
  goto L_11c683ac;
L_11c6834c:;
  /* 11c6834c jae 0x11c683b3 */
  if (!C.cf) goto L_11c683b3;
  /* 11c6834e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c68351 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11c68354 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11c6835a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6835c jb 0x11c683b3 */
  if (C.cf) goto L_11c683b3;
  /* 11c6835e lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11c68361:;
  /* 11c68361 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68363 jae 0x11c6836f */
  if (!C.cf) goto L_11c6836f;
  /* 11c68365 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68368 jne 0x11c6836d */
  if (!C.zf) goto L_11c6836d;
  /* 11c6836a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6836b jmp 0x11c68361 */
  goto L_11c68361;
L_11c6836d:;
  /* 11c6836d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c6836f:;
  /* 11c6836f jne 0x11c683b3 */
  if (!C.zf) goto L_11c683b3;
  /* 11c68371 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11c68374 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11c68376 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c68378 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6837a ja 0x11c683a7 */
  if ((!C.cf&&!C.zf)) goto L_11c683a7;
  /* 11c6837c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6837e jbe 0x11c683a7 */
  if ((C.cf||C.zf)) goto L_11c683a7;
  /* 11c68380 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11c68386 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68388 jae 0x11c6839e */
  if (!C.cf) goto L_11c6839e;
  /* 11c6838a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6838c mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11c6838e cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68390 jne 0x11c68399 */
  if (!C.zf) goto L_11c68399;
L_11c68392:;
  /* 11c68392 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c68393 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68397 je 0x11c68392 */
  if (C.zf) goto L_11c68392;
L_11c68399:;
  /* 11c68399 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c6839c jmp 0x11c683a7 */
  goto L_11c683a7;
L_11c6839e:;
  /* 11c6839e and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c683a2 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11c683a5 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11c683a7:;
  /* 11c683a7 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c683aa add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11c683ac:;
  /* 11c683ac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11c683b3:;
  /* 11c683b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c683b6 pop edi */
  EDI = (pop32());
  /* 11c683b7 pop esi */
  ESI = (pop32());
  /* 11c683b8 pop ebx */
  EBX = (pop32());
  /* 11c683b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c683ba ret  */
  ESPCHK(0x11c68312u, _esp0);
  ESP += 4; return;
}

/* FUN_100083bb @ 0x11c683bb (27 bytes, 13 insns) */
void f_11c683bb(void) {
  FTRACE(0x11c683bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c683bb mov eax, dword ptr [0x11c87ab8] */
  EAX = (r32((uint32_t)(0x11c87ab8)));
  /* 11c683c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c683c2 je 0x11c683d3 */
  if (C.zf) goto L_11c683d3;
  /* 11c683c4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c683c8 call eax */
  call_ind((uint32_t)(EAX), 0x11c683cau);
  /* 11c683ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c683cc pop ecx */
  ECX = (pop32());
  /* 11c683cd je 0x11c683d3 */
  if (C.zf) goto L_11c683d3;
  /* 11c683cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c683d1 pop eax */
  EAX = (pop32());
  /* 11c683d2 ret  */
  ESPCHK(0x11c683bbu, _esp0);
  ESP += 4; return;
L_11c683d3:;
  /* 11c683d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c683d5 ret  */
  ESPCHK(0x11c683bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x11c683e0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_11c683e0(void) {
  FTRACE(0x11c683e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c683e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c683e1 mov ebp, esp */
  EBP = (ESP);
  /* 11c683e3 push edi */
  push32((uint32_t)(EDI));
  /* 11c683e4 push esi */
  push32((uint32_t)(ESI));
  /* 11c683e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c683e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c683eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c683ee mov eax, ecx */
  EAX = (ECX);
  /* 11c683f0 mov edx, ecx */
  EDX = (ECX);
  /* 11c683f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c683f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c683f6 jbe 0x11c68400 */
  if ((C.cf||C.zf)) goto L_11c68400;
  /* 11c683f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c683fa jb 0x11c68578 */
  if (C.cf) goto L_11c68578;
L_11c68400:;
  /* 11c68400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c68406 jne 0x11c6841c */
  if (!C.zf) goto L_11c6841c;
  /* 11c68408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c6840b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c6840e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68411 jb 0x11c6843c */
  if (C.cf) goto L_11c6843c;
  /* 11c68413 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68415 jmp dword ptr [edx*4 + 0x11c68528] */
  switch (EDX) {
    case 0: goto L_11c68538;
    case 1: goto L_11c68540;
    case 2: goto L_11c6854c;
    case 3: goto L_11c68560;
    default: x86_unimpl("switch@0x11c68415 out of table"); return;
  }
L_11c6841c:;
  /* 11c6841c mov eax, edi */
  EAX = (EDI);
  /* 11c6841e mov edx, 3 */
  EDX = (0x3u);
  /* 11c68423 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68426 jb 0x11c68434 */
  if (C.cf) goto L_11c68434;
  /* 11c68428 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6842b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6842d jmp dword ptr [eax*4 + 0x11c68440] */
  switch (EAX) {
    case 1: goto L_11c68450;
    case 2: goto L_11c6847c;
    case 3: goto L_11c684a0;
    default: x86_unimpl("switch@0x11c6842d out of table"); return;
  }
L_11c68434:;
  /* 11c68434 jmp dword ptr [ecx*4 + 0x11c68538] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c68538)))); return;
  /* 11c6843b nop  */
  /* nop */
L_11c6843c:;
  /* 11c6843c jmp dword ptr [ecx*4 + 0x11c684bc] */
  switch (ECX) {
    case 0: goto L_11c6851f;
    case 1: goto L_11c6850c;
    case 2: goto L_11c68504;
    case 3: goto L_11c684fc;
    case 4: goto L_11c684f4;
    case 5: goto L_11c684ec;
    case 6: goto L_11c684e4;
    case 7: goto L_11c684dc;
    default: x86_unimpl("switch@0x11c6843c out of table"); return;
  }
  /* 11c68443 nop  */
  /* nop */
L_11c68450:;
  /* 11c68450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c68452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c68454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c68456 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c68459 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6845c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6845f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c68462 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c68465 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68468 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6846b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6846e jb 0x11c6843c */
  if (C.cf) goto L_11c6843c;
  /* 11c68470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68472 jmp dword ptr [edx*4 + 0x11c68528] */
  switch (EDX) {
    case 0: goto L_11c68538;
    case 1: goto L_11c68540;
    case 2: goto L_11c6854c;
    case 3: goto L_11c68560;
    default: x86_unimpl("switch@0x11c68472 out of table"); return;
  }
  /* 11c68479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c6847c:;
  /* 11c6847c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6847e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c68480 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c68482 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c68485 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c68488 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6848b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6848e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68491 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68494 jb 0x11c6843c */
  if (C.cf) goto L_11c6843c;
  /* 11c68496 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68498 jmp dword ptr [edx*4 + 0x11c68528] */
  switch (EDX) {
    case 0: goto L_11c68538;
    case 1: goto L_11c68540;
    case 2: goto L_11c6854c;
    case 3: goto L_11c68560;
    default: x86_unimpl("switch@0x11c68498 out of table"); return;
  }
  /* 11c6849f nop  */
  /* nop */
L_11c684a0:;
  /* 11c684a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c684a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c684a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c684a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c684a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c684aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c684ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c684ae jb 0x11c6843c */
  if (C.cf) goto L_11c6843c;
  /* 11c684b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c684b2 jmp dword ptr [edx*4 + 0x11c68528] */
  switch (EDX) {
    case 0: goto L_11c68538;
    case 1: goto L_11c68540;
    case 2: goto L_11c6854c;
    case 3: goto L_11c68560;
    default: x86_unimpl("switch@0x11c684b2 out of table"); return;
  }
  /* 11c684b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c684dc:;
  /* 11c684dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c684e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c684e4:;
  /* 11c684e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c684e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c684ec:;
  /* 11c684ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c684f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c684f4:;
  /* 11c684f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c684f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c684fc:;
  /* 11c684fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c68500 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c68504:;
  /* 11c68504 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c68508 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c6850c:;
  /* 11c6850c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c68510 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c68514 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c6851b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6851d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c6851f:;
  /* 11c6851f jmp dword ptr [edx*4 + 0x11c68528] */
  switch (EDX) {
    case 0: goto L_11c68538;
    case 1: goto L_11c68540;
    case 2: goto L_11c6854c;
    case 3: goto L_11c68560;
    default: x86_unimpl("switch@0x11c6851f out of table"); return;
  }
  /* 11c68526 mov edi, edi */
  EDI = (EDI);
L_11c68538:;
  /* 11c68538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6853b pop esi */
  ESI = (pop32());
  /* 11c6853c pop edi */
  EDI = (pop32());
  /* 11c6853d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6853e ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c6853f nop  */
  /* nop */
L_11c68540:;
  /* 11c68540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c68542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c68544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68547 pop esi */
  ESI = (pop32());
  /* 11c68548 pop edi */
  EDI = (pop32());
  /* 11c68549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6854a ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c6854b nop  */
  /* nop */
L_11c6854c:;
  /* 11c6854c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6854e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c68550 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c68553 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c68556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68559 pop esi */
  ESI = (pop32());
  /* 11c6855a pop edi */
  EDI = (pop32());
  /* 11c6855b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6855c ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c6855d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c68560:;
  /* 11c68560 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c68562 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c68564 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c68567 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6856a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6856d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c68570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68573 pop esi */
  ESI = (pop32());
  /* 11c68574 pop edi */
  EDI = (pop32());
  /* 11c68575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c68576 ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c68577 nop  */
  /* nop */
L_11c68578:;
  /* 11c68578 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c6857c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c68580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c68586 jne 0x11c685ac */
  if (!C.zf) goto L_11c685ac;
  /* 11c68588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c6858b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c6858e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68591 jb 0x11c685a0 */
  if (C.cf) goto L_11c685a0;
  /* 11c68593 std  */
  C.df=1;
  /* 11c68594 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68596 cld  */
  C.df=0;
  /* 11c68597 jmp dword ptr [edx*4 + 0x11c686c0] */
  switch (EDX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c68597 out of table"); return;
  }
  /* 11c6859e mov edi, edi */
  EDI = (EDI);
L_11c685a0:;
  /* 11c685a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c685a2 jmp dword ptr [ecx*4 + 0x11c68670] */
  switch (ECX) {
    case 0: goto L_11c686b7;
    default: x86_unimpl("switch@0x11c685a2 out of table"); return;
  }
  /* 11c685a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c685ac:;
  /* 11c685ac mov eax, edi */
  EAX = (EDI);
  /* 11c685ae mov edx, 3 */
  EDX = (0x3u);
  /* 11c685b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c685b6 jb 0x11c685c4 */
  if (C.cf) goto L_11c685c4;
  /* 11c685b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c685bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c685bd jmp dword ptr [eax*4 + 0x11c685c8] */
  switch (EAX) {
    case 1: goto L_11c685d8;
    case 2: goto L_11c685f8;
    case 3: goto L_11c68620;
    default: x86_unimpl("switch@0x11c685bd out of table"); return;
  }
L_11c685c4:;
  /* 11c685c4 jmp dword ptr [ecx*4 + 0x11c686c0] */
  switch (ECX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c685c4 out of table"); return;
  }
  /* 11c685cb nop  */
  /* nop */
L_11c685d8:;
  /* 11c685d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c685db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c685dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c685e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c685e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c685e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c685e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c685e8 jb 0x11c685a0 */
  if (C.cf) goto L_11c685a0;
  /* 11c685ea std  */
  C.df=1;
  /* 11c685eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c685ed cld  */
  C.df=0;
  /* 11c685ee jmp dword ptr [edx*4 + 0x11c686c0] */
  switch (EDX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c685ee out of table"); return;
  }
  /* 11c685f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c685f8:;
  /* 11c685f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c685fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c685fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c68600 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c68603 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c68606 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c68609 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6860c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6860f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68612 jb 0x11c685a0 */
  if (C.cf) goto L_11c685a0;
  /* 11c68614 std  */
  C.df=1;
  /* 11c68615 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68617 cld  */
  C.df=0;
  /* 11c68618 jmp dword ptr [edx*4 + 0x11c686c0] */
  switch (EDX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c68618 out of table"); return;
  }
  /* 11c6861f nop  */
  /* nop */
L_11c68620:;
  /* 11c68620 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c68623 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c68625 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c68628 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c6862b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c6862e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c68631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c68634 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c68637 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6863a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6863d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68640 jb 0x11c685a0 */
  if (C.cf) goto L_11c685a0;
  /* 11c68646 std  */
  C.df=1;
  /* 11c68647 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c68649 cld  */
  C.df=0;
  /* 11c6864a jmp dword ptr [edx*4 + 0x11c686c0] */
  switch (EDX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c6864a out of table"); return;
  }
  /* 11c68651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c68654 je 0x11c685dc */
  if (C.zf) goto L_11c685dc;
  /* 11c68657 adc dword ptr [esi + eax*4 - 0x3a], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4 + -0x3a))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4 + -0x3a), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6865b adc dword ptr [esi + eax*4 - 0x7973ee3a], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4 + -0x7973ee3a))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4 + -0x7973ee3a), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c68663 adc dword ptr [esi + eax*4 - 0x7963ee3a], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + EAX*4 + -0x7963ee3a))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EAX*4 + -0x7963ee3a), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6866c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11c6866d xchg dh, al */
  { uint32_t _t=(C.d.b.h); C.d.b.h = (AL); AL = (_t); }
  /* 11c68674 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c68678 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c6867c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c68680 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c68684 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c68688 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c6868c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c68690 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c68694 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c68698 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c6869c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c686a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c686a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c686a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c686ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c686b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c686b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c686b7:;
  /* 11c686b7 jmp dword ptr [edx*4 + 0x11c686c0] */
  switch (EDX) {
    case 0: goto L_11c686d0;
    case 1: goto L_11c686d8;
    case 2: goto L_11c686e8;
    case 3: goto L_11c686fc;
    default: x86_unimpl("switch@0x11c686b7 out of table"); return;
  }
  /* 11c686be mov edi, edi */
  EDI = (EDI);
L_11c686d0:;
  /* 11c686d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c686d3 pop esi */
  ESI = (pop32());
  /* 11c686d4 pop edi */
  EDI = (pop32());
  /* 11c686d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c686d6 ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c686d7 nop  */
  /* nop */
L_11c686d8:;
  /* 11c686d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c686db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c686de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c686e1 pop esi */
  ESI = (pop32());
  /* 11c686e2 pop edi */
  EDI = (pop32());
  /* 11c686e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c686e4 ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c686e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c686e8:;
  /* 11c686e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c686eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c686ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c686f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c686f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c686f7 pop esi */
  ESI = (pop32());
  /* 11c686f8 pop edi */
  EDI = (pop32());
  /* 11c686f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c686fa ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
  /* 11c686fb nop  */
  /* nop */
L_11c686fc:;
  /* 11c686fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c686ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c68702 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c68705 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c68708 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c6870b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c6870e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68711 pop esi */
  ESI = (pop32());
  /* 11c68712 pop edi */
  EDI = (pop32());
  /* 11c68713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c68714 ret  */
  ESPCHK(0x11c683e0u, _esp0);
  ESP += 4; return;
L_11c685dc: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11c685dc (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11c68718 (32 bytes, 18 insns) */
void f_11c68718(void) {
  FTRACE(0x11c68718u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68718 push ebp */
  push32((uint32_t)(EBP));
  /* 11c68719 mov ebp, esp */
  EBP = (ESP);
  /* 11c6871b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6871c push esi */
  push32((uint32_t)(ESI));
  /* 11c6871d push edi */
  push32((uint32_t)(EDI));
  /* 11c6871e push ebp */
  push32((uint32_t)(EBP));
  /* 11c6871f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c68721 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c68723 push 0x11c68730 */
  push32((uint32_t)(0x11c68730u));
  /* 11c68728 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6872b call 0x11c6c448 */
  push32(0x11c68730u); f_11c6c448();
  /* 11c68730 pop ebp */
  EBP = (pop32());
  /* 11c68731 pop edi */
  EDI = (pop32());
  /* 11c68732 pop esi */
  ESI = (pop32());
  /* 11c68733 pop ebx */
  EBX = (pop32());
  /* 11c68734 mov esp, ebp */
  ESP = (EBP);
  /* 11c68736 pop ebp */
  EBP = (pop32());
  /* 11c68737 ret  */
  ESPCHK(0x11c68718u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11c6875a (104 bytes, 33 insns) */
void f_11c6875a(void) {
  FTRACE(0x11c6875au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6875a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6875b push esi */
  push32((uint32_t)(ESI));
  /* 11c6875c push edi */
  push32((uint32_t)(EDI));
  /* 11c6875d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c68761 push eax */
  push32((uint32_t)(EAX));
  /* 11c68762 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11c68764 push 0x11c68738 */
  push32((uint32_t)(0x11c68738u));
  /* 11c68769 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11c68770 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11c68777:;
  /* 11c68777 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c6877b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c6877e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11c68781 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68784 je 0x11c687b4 */
  if (C.zf) goto L_11c687b4;
  /* 11c68786 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6878a je 0x11c687b4 */
  if (C.zf) goto L_11c687b4;
  /* 11c6878c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11c6878f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11c68792 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11c68796 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11c68799 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6879e jne 0x11c687b2 */
  if (!C.zf) goto L_11c687b2;
  /* 11c687a0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11c687a5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11c687a9 call 0x11c687ee */
  push32(0x11c687aeu); f_11c687ee();
  /* 11c687ae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11c687b2u);
L_11c687b2:;
  /* 11c687b2 jmp 0x11c68777 */
  goto L_11c68777;
L_11c687b4:;
  /* 11c687b4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11c687bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c687be pop edi */
  EDI = (pop32());
  /* 11c687bf pop esi */
  ESI = (pop32());
  /* 11c687c0 pop ebx */
  EBX = (pop32());
  /* 11c687c1 ret  */
  ESPCHK(0x11c6875au, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11c687c2 (35 bytes, 10 insns) */
void f_11c687c2(void) {
  FTRACE(0x11c687c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c687c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c687c4 mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11c687cb cmp dword ptr [ecx + 4], 0x11c68738 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11c68738u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c687d2 jne 0x11c687e4 */
  if (!C.zf) goto L_11c687e4;
  /* 11c687d4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11c687d7 mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11c687da cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c687dd jne 0x11c687e4 */
  if (!C.zf) goto L_11c687e4;
  /* 11c687df mov eax, 1 */
  EAX = (0x1u);
L_11c687e4:;
  /* 11c687e4 ret  */
  ESPCHK(0x11c687c2u, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11c687e5 (9 bytes, 4 insns) */
void f_11c687e5(void) {
  FTRACE(0x11c687e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c687e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c687e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c687e7 mov ebx, 0x11c72c40 */
  EBX = (0x11c72c40u);
  /* 11c687ec jmp 0x11c687f8 */
  jmp_ind(0x11c687f8u); return;
}

/* FUN_100087ee @ 0x11c687ee (24 bytes, 10 insns) */
void f_11c687ee(void) {
  FTRACE(0x11c687eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c687ee push ebx */
  push32((uint32_t)(EBX));
  /* 11c687ef push ecx */
  push32((uint32_t)(ECX));
  /* 11c687f0 mov ebx, 0x11c72c40 */
  EBX = (0x11c72c40u);
  /* 11c687f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c687f8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c687fb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c687fe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11c68801 pop ecx */
  ECX = (pop32());
  /* 11c68802 pop ebx */
  EBX = (pop32());
  /* 11c68803 ret 4 */
  ESPCHK(0x11c687eeu, _esp0);
  ESP += 8; return;
}

/* FUN_100088cd @ 0x11c688cd (27 bytes, 11 insns) */
void f_11c688cd(void) {
  FTRACE(0x11c688cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c688cd push ebp */
  push32((uint32_t)(EBP));
  /* 11c688ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c688d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11c688d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c688d7 push eax */
  push32((uint32_t)(EAX));
  /* 11c688d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11c688db push eax */
  push32((uint32_t)(EAX));
  /* 11c688dc call 0x11c6875a */
  push32(0x11c688e1u); f_11c6875a();
  /* 11c688e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c688e4 pop ebp */
  EBP = (pop32());
  /* 11c688e5 ret 4 */
  ESPCHK(0x11c688cdu, _esp0);
  ESP += 8; return;
}

/* FUN_100088e8 @ 0x11c688e8 (101 bytes, 34 insns) */
void f_11c688e8(void) {
  FTRACE(0x11c688e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c688e8 push esi */
  push32((uint32_t)(ESI));
  /* 11c688e9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c688ed cmp esi, dword ptr [0x11c88f60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c688f3 jae 0x11c68935 */
  if (!C.cf) goto L_11c68935;
  /* 11c688f5 mov ecx, esi */
  ECX = (ESI);
  /* 11c688f7 mov eax, esi */
  EAX = (ESI);
  /* 11c688f9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c688fc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c688ff mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c68906 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c68909 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6890e je 0x11c68935 */
  if (C.zf) goto L_11c68935;
  /* 11c68910 push edi */
  push32((uint32_t)(EDI));
  /* 11c68911 push esi */
  push32((uint32_t)(ESI));
  /* 11c68912 call 0x11c6a897 */
  push32(0x11c68917u); f_11c6a897();
  /* 11c68917 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c6891b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c6891f push esi */
  push32((uint32_t)(ESI));
  /* 11c68920 call 0x11c6894d */
  push32(0x11c68925u); f_11c6894d();
  /* 11c68925 push esi */
  push32((uint32_t)(ESI));
  /* 11c68926 mov edi, eax */
  EDI = (EAX);
  /* 11c68928 call 0x11c6a8f6 */
  push32(0x11c6892du); f_11c6a8f6();
  /* 11c6892d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68930 mov eax, edi */
  EAX = (EDI);
  /* 11c68932 pop edi */
  EDI = (pop32());
  /* 11c68933 pop esi */
  ESI = (pop32());
  /* 11c68934 ret  */
  ESPCHK(0x11c688e8u, _esp0);
  ESP += 4; return;
L_11c68935:;
  /* 11c68935 call 0x11c6a7c4 */
  push32(0x11c6893au); f_11c6a7c4();
  /* 11c6893a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c68940 call 0x11c6a7cd */
  push32(0x11c68945u); f_11c6a7cd();
  /* 11c68945 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c68948 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6894b pop esi */
  ESI = (pop32());
  /* 11c6894c ret  */
  ESPCHK(0x11c688e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000894d @ 0x11c6894d (115 bytes, 41 insns) */
void f_11c6894d(void) {
  FTRACE(0x11c6894du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6894d push esi */
  push32((uint32_t)(ESI));
  /* 11c6894e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c68952 push edi */
  push32((uint32_t)(EDI));
  /* 11c68953 push esi */
  push32((uint32_t)(ESI));
  /* 11c68954 call 0x11c6a855 */
  push32(0x11c68959u); f_11c6a855();
  /* 11c68959 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6895c pop ecx */
  ECX = (pop32());
  /* 11c6895d jne 0x11c6896c */
  if (!C.zf) goto L_11c6896c;
  /* 11c6895f call 0x11c6a7c4 */
  push32(0x11c68964u); f_11c6a7c4();
  /* 11c68964 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6896a jmp 0x11c68999 */
  goto L_11c68999;
L_11c6896c:;
  /* 11c6896c push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c68970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c68972 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c68976 push eax */
  push32((uint32_t)(EAX));
  /* 11c68977 call dword ptr [0x11c6e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e054))), 0x11c6897du);
  /* 11c6897d mov edi, eax */
  EDI = (EAX);
  /* 11c6897f cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68982 jne 0x11c6898c */
  if (!C.zf) goto L_11c6898c;
  /* 11c68984 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6898au);
  /* 11c6898a jmp 0x11c6898e */
  goto L_11c6898e;
L_11c6898c:;
  /* 11c6898c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6898e:;
  /* 11c6898e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c68990 je 0x11c6899e */
  if (C.zf) goto L_11c6899e;
  /* 11c68992 push eax */
  push32((uint32_t)(EAX));
  /* 11c68993 call 0x11c6a751 */
  push32(0x11c68998u); f_11c6a751();
  /* 11c68998 pop ecx */
  ECX = (pop32());
L_11c68999:;
  /* 11c68999 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6899c jmp 0x11c689bd */
  goto L_11c689bd;
L_11c6899e:;
  /* 11c6899e mov ecx, esi */
  ECX = (ESI);
  /* 11c689a0 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11c689a3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c689a6 mov eax, esi */
  EAX = (ESI);
  /* 11c689a8 mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c689af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c689b2 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c689b7 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11c689bb mov eax, edi */
  EAX = (EDI);
L_11c689bd:;
  /* 11c689bd pop edi */
  EDI = (pop32());
  /* 11c689be pop esi */
  ESI = (pop32());
  /* 11c689bf ret  */
  ESPCHK(0x11c6894du, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x11c689c0 (101 bytes, 34 insns) */
void f_11c689c0(void) {
  FTRACE(0x11c689c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c689c0 push esi */
  push32((uint32_t)(ESI));
  /* 11c689c1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c689c5 cmp esi, dword ptr [0x11c88f60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c689cb jae 0x11c68a0d */
  if (!C.cf) goto L_11c68a0d;
  /* 11c689cd mov ecx, esi */
  ECX = (ESI);
  /* 11c689cf mov eax, esi */
  EAX = (ESI);
  /* 11c689d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c689d4 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c689d7 mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c689de lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c689e1 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c689e6 je 0x11c68a0d */
  if (C.zf) goto L_11c68a0d;
  /* 11c689e8 push edi */
  push32((uint32_t)(EDI));
  /* 11c689e9 push esi */
  push32((uint32_t)(ESI));
  /* 11c689ea call 0x11c6a897 */
  push32(0x11c689efu); f_11c6a897();
  /* 11c689ef push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c689f3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c689f7 push esi */
  push32((uint32_t)(ESI));
  /* 11c689f8 call 0x11c68a25 */
  push32(0x11c689fdu); f_11c68a25();
  /* 11c689fd push esi */
  push32((uint32_t)(ESI));
  /* 11c689fe mov edi, eax */
  EDI = (EAX);
  /* 11c68a00 call 0x11c6a8f6 */
  push32(0x11c68a05u); f_11c6a8f6();
  /* 11c68a05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68a08 mov eax, edi */
  EAX = (EDI);
  /* 11c68a0a pop edi */
  EDI = (pop32());
  /* 11c68a0b pop esi */
  ESI = (pop32());
  /* 11c68a0c ret  */
  ESPCHK(0x11c689c0u, _esp0);
  ESP += 4; return;
L_11c68a0d:;
  /* 11c68a0d call 0x11c6a7c4 */
  push32(0x11c68a12u); f_11c6a7c4();
  /* 11c68a12 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c68a18 call 0x11c6a7cd */
  push32(0x11c68a1du); f_11c6a7cd();
  /* 11c68a1d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c68a20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c68a23 pop esi */
  ESI = (pop32());
  /* 11c68a24 ret  */
  ESPCHK(0x11c689c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a25 @ 0x11c68a25 (395 bytes, 135 insns) */
void f_11c68a25(void) {
  FTRACE(0x11c68a25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68a25 push ebp */
  push32((uint32_t)(EBP));
  /* 11c68a26 mov ebp, esp */
  EBP = (ESP);
  /* 11c68a28 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68a2e push ebx */
  push32((uint32_t)(EBX));
  /* 11c68a2f push esi */
  push32((uint32_t)(ESI));
  /* 11c68a30 push edi */
  push32((uint32_t)(EDI));
  /* 11c68a31 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c68a33 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68a36 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11c68a39 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c68a3c jne 0x11c68a45 */
  if (!C.zf) goto L_11c68a45;
L_11c68a3e:;
  /* 11c68a3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c68a40 jmp 0x11c68bab */
  goto L_11c68bab;
L_11c68a45:;
  /* 11c68a45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68a48 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c68a4b lea ebx, [eax*4 + 0x11c88e60] */
  EBX = ((uint32_t)(EAX*4 + 0x11c88e60));
  /* 11c68a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68a55 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c68a58 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c68a5b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c68a5d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c68a60 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11c68a65 je 0x11c68a75 */
  if (C.zf) goto L_11c68a75;
  /* 11c68a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c68a69 push edi */
  push32((uint32_t)(EDI));
  /* 11c68a6a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c68a6d call 0x11c6894d */
  push32(0x11c68a72u); f_11c6894d();
  /* 11c68a72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c68a75:;
  /* 11c68a75 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c68a77 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68a79 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11c68a7d je 0x11c68b44 */
  if (C.zf) goto L_11c68b44;
  /* 11c68a83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c68a86 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68a89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c68a8c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11c68a8f jbe 0x11c68b7f */
  if ((C.cf||C.zf)) goto L_11c68b7f;
L_11c68a95:;
  /* 11c68a95 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11c68a9b:;
  /* 11c68a9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68a9e sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68aa1 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68aa4 jae 0x11c68acf */
  if (!C.cf) goto L_11c68acf;
  /* 11c68aa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68aa9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c68aac mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c68aae cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68ab1 jne 0x11c68aba */
  if (!C.zf) goto L_11c68aba;
  /* 11c68ab3 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11c68ab6 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11c68ab9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c68aba:;
  /* 11c68aba mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c68abc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c68abd mov ecx, eax */
  ECX = (EAX);
  /* 11c68abf lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11c68ac5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68ac7 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68acd jl 0x11c68a9b */
  if ((C.sf!=C.of)) goto L_11c68a9b;
L_11c68acf:;
  /* 11c68acf mov edi, eax */
  EDI = (EAX);
  /* 11c68ad1 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11c68ad7 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68ad9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c68adc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c68ade push eax */
  push32((uint32_t)(EAX));
  /* 11c68adf lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11c68ae5 push edi */
  push32((uint32_t)(EDI));
  /* 11c68ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11c68ae7 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c68ae9 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c68aec call dword ptr [0x11c6e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e078))), 0x11c68af2u);
  /* 11c68af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c68af4 je 0x11c68b39 */
  if (C.zf) goto L_11c68b39;
  /* 11c68af6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c68af9 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c68afc cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68afe jl 0x11c68b0b */
  if ((C.sf!=C.of)) goto L_11c68b0b;
  /* 11c68b00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68b03 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68b06 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68b09 jb 0x11c68a95 */
  if (C.cf) goto L_11c68a95;
L_11c68b0b:;
  /* 11c68b0b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c68b0d:;
  /* 11c68b0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c68b10 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68b12 jne 0x11c68ba8 */
  if (!C.zf) goto L_11c68ba8;
  /* 11c68b18 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68b1b je 0x11c68b7f */
  if (C.zf) goto L_11c68b7f;
  /* 11c68b1d push 5 */
  push32((uint32_t)(0x5u));
  /* 11c68b1f pop esi */
  ESI = (pop32());
  /* 11c68b20 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68b23 jne 0x11c68b71 */
  if (!C.zf) goto L_11c68b71;
  /* 11c68b25 call 0x11c6a7c4 */
  push32(0x11c68b2au); f_11c6a7c4();
  /* 11c68b2a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c68b30 call 0x11c6a7cd */
  push32(0x11c68b35u); f_11c6a7cd();
  /* 11c68b35 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c68b37 jmp 0x11c68b7a */
  goto L_11c68b7a;
L_11c68b39:;
  /* 11c68b39 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c68b3fu);
  /* 11c68b3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c68b42 jmp 0x11c68b0b */
  goto L_11c68b0b;
L_11c68b44:;
  /* 11c68b44 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11c68b47 push edi */
  push32((uint32_t)(EDI));
  /* 11c68b48 push ecx */
  push32((uint32_t)(ECX));
  /* 11c68b49 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c68b4c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c68b4f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c68b51 call dword ptr [0x11c6e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e078))), 0x11c68b57u);
  /* 11c68b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c68b59 je 0x11c68b66 */
  if (C.zf) goto L_11c68b66;
  /* 11c68b5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c68b5e mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11c68b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c68b64 jmp 0x11c68b0d */
  goto L_11c68b0d;
L_11c68b66:;
  /* 11c68b66 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c68b6cu);
  /* 11c68b6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c68b6f jmp 0x11c68b0d */
  goto L_11c68b0d;
L_11c68b71:;
  /* 11c68b71 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c68b74 call 0x11c6a751 */
  push32(0x11c68b79u); f_11c6a751();
  /* 11c68b79 pop ecx */
  ECX = (pop32());
L_11c68b7a:;
  /* 11c68b7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c68b7d jmp 0x11c68bab */
  goto L_11c68bab;
L_11c68b7f:;
  /* 11c68b7f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c68b81 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11c68b86 je 0x11c68b94 */
  if (C.zf) goto L_11c68b94;
  /* 11c68b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c68b8b cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68b8e je 0x11c68a3e */
  if (C.zf) goto L_11c68a3e;
L_11c68b94:;
  /* 11c68b94 call 0x11c6a7c4 */
  push32(0x11c68b99u); f_11c6a7c4();
  /* 11c68b99 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11c68b9f call 0x11c6a7cd */
  push32(0x11c68ba4u); f_11c6a7cd();
  /* 11c68ba4 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c68ba6 jmp 0x11c68b7a */
  goto L_11c68b7a;
L_11c68ba8:;
  /* 11c68ba8 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c68bab:;
  /* 11c68bab pop edi */
  EDI = (pop32());
  /* 11c68bac pop esi */
  ESI = (pop32());
  /* 11c68bad pop ebx */
  EBX = (pop32());
  /* 11c68bae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c68baf ret  */
  ESPCHK(0x11c68a25u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c6c @ 0x11c68c6c (47 bytes, 17 insns) */
void f_11c68c6c(void) {
  FTRACE(0x11c68c6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68c6c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68c70 mov ecx, 0x11c72c50 */
  ECX = (0x11c72c50u);
  /* 11c68c75 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68c77 jb 0x11c68c90 */
  if (C.cf) goto L_11c68c90;
  /* 11c68c79 cmp eax, 0x11c72eb0 */
  { uint32_t _a=(EAX),_b=(0x11c72eb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68c7e ja 0x11c68c90 */
  if ((!C.cf&&!C.zf)) goto L_11c68c90;
  /* 11c68c80 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68c82 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c68c85 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68c88 push eax */
  push32((uint32_t)(EAX));
  /* 11c68c89 call 0x11c66a86 */
  push32(0x11c68c8eu); f_11c66a86();
  /* 11c68c8e pop ecx */
  ECX = (pop32());
  /* 11c68c8f ret  */
  ESPCHK(0x11c68c6cu, _esp0);
  ESP += 4; return;
L_11c68c90:;
  /* 11c68c90 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68c93 push eax */
  push32((uint32_t)(EAX));
  /* 11c68c94 call dword ptr [0x11c6e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e068))), 0x11c68c9au);
  /* 11c68c9a ret  */
  ESPCHK(0x11c68c6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c9b @ 0x11c68c9b (35 bytes, 13 insns) */
void f_11c68c9b(void) {
  FTRACE(0x11c68c9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68c9b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68c9f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68ca2 jge 0x11c68caf */
  if ((C.sf==C.of)) goto L_11c68caf;
  /* 11c68ca4 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68ca7 push eax */
  push32((uint32_t)(EAX));
  /* 11c68ca8 call 0x11c66a86 */
  push32(0x11c68cadu); f_11c66a86();
  /* 11c68cad pop ecx */
  ECX = (pop32());
  /* 11c68cae ret  */
  ESPCHK(0x11c68c9bu, _esp0);
  ESP += 4; return;
L_11c68caf:;
  /* 11c68caf mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c68cb3 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11c68cb7 call dword ptr [0x11c6e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e068))), 0x11c68cbdu);
  /* 11c68cbd ret  */
  ESPCHK(0x11c68c9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10008cbe @ 0x11c68cbe (47 bytes, 17 insns) */
void f_11c68cbe(void) {
  FTRACE(0x11c68cbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68cbe mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68cc2 mov ecx, 0x11c72c50 */
  ECX = (0x11c72c50u);
  /* 11c68cc7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68cc9 jb 0x11c68ce2 */
  if (C.cf) goto L_11c68ce2;
  /* 11c68ccb cmp eax, 0x11c72eb0 */
  { uint32_t _a=(EAX),_b=(0x11c72eb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68cd0 ja 0x11c68ce2 */
  if ((!C.cf&&!C.zf)) goto L_11c68ce2;
  /* 11c68cd2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68cd4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c68cd7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68cda push eax */
  push32((uint32_t)(EAX));
  /* 11c68cdb call 0x11c66ae7 */
  push32(0x11c68ce0u); f_11c66ae7();
  /* 11c68ce0 pop ecx */
  ECX = (pop32());
  /* 11c68ce1 ret  */
  ESPCHK(0x11c68cbeu, _esp0);
  ESP += 4; return;
L_11c68ce2:;
  /* 11c68ce2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11c68ce6 call dword ptr [0x11c6e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e064))), 0x11c68cecu);
  /* 11c68cec ret  */
  ESPCHK(0x11c68cbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ced @ 0x11c68ced (35 bytes, 13 insns) */
void f_11c68ced(void) {
  FTRACE(0x11c68cedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68ced mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68cf1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68cf4 jge 0x11c68d01 */
  if ((C.sf==C.of)) goto L_11c68d01;
  /* 11c68cf6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11c68cfa call 0x11c66ae7 */
  push32(0x11c68cffu); f_11c66ae7();
  /* 11c68cff pop ecx */
  ECX = (pop32());
  /* 11c68d00 ret  */
  ESPCHK(0x11c68cedu, _esp0);
  ESP += 4; return;
L_11c68d01:;
  /* 11c68d01 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c68d05 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68d08 push eax */
  push32((uint32_t)(EAX));
  /* 11c68d09 call dword ptr [0x11c6e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e064))), 0x11c68d0fu);
  /* 11c68d0f ret  */
  ESPCHK(0x11c68cedu, _esp0);
  ESP += 4; return;
}

/* FUN_10008df5 @ 0x11c68df5 (429 bytes, 143 insns) */
void f_11c68df5(void) {
  FTRACE(0x11c68df5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68df5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c68df6 mov ebp, esp */
  EBP = (ESP);
  /* 11c68df8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68dfb push ebx */
  push32((uint32_t)(EBX));
  /* 11c68dfc push esi */
  push32((uint32_t)(ESI));
  /* 11c68dfd push edi */
  push32((uint32_t)(EDI));
  /* 11c68dfe push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c68e00 call 0x11c66a86 */
  push32(0x11c68e05u); f_11c66a86();
  /* 11c68e05 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c68e08 call 0x11c68fa2 */
  push32(0x11c68e0du); f_11c68fa2();
  /* 11c68e0d mov ebx, eax */
  EBX = (EAX);
  /* 11c68e0f pop ecx */
  ECX = (pop32());
  /* 11c68e10 cmp ebx, dword ptr [0x11c87bec] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c87bec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e16 pop ecx */
  ECX = (pop32());
  /* 11c68e17 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c68e1a jne 0x11c68e23 */
  if (!C.zf) goto L_11c68e23;
L_11c68e1c:;
  /* 11c68e1c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c68e1e jmp 0x11c68f93 */
  goto L_11c68f93;
L_11c68e23:;
  /* 11c68e23 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c68e25 je 0x11c68f81 */
  if (C.zf) goto L_11c68f81;
  /* 11c68e2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c68e2d mov eax, 0x11c72ed8 */
  EAX = (0x11c72ed8u);
L_11c68e32:;
  /* 11c68e32 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e34 je 0x11c68eaa */
  if (C.zf) goto L_11c68eaa;
  /* 11c68e36 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68e39 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c68e3a cmp eax, 0x11c72fc8 */
  { uint32_t _a=(EAX),_b=(0x11c72fc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e3f jl 0x11c68e32 */
  if ((C.sf!=C.of)) goto L_11c68e32;
  /* 11c68e41 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c68e44 push eax */
  push32((uint32_t)(EAX));
  /* 11c68e45 push ebx */
  push32((uint32_t)(EBX));
  /* 11c68e46 call dword ptr [0x11c6e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e050))), 0x11c68e4cu);
  /* 11c68e4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c68e4e pop esi */
  ESI = (pop32());
  /* 11c68e4f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e51 jne 0x11c68f78 */
  if (!C.zf) goto L_11c68f78;
  /* 11c68e57 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c68e59 and dword ptr [0x11c87e04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c87e04)))&(0x0u); w32((uint32_t)(0x11c87e04), (_r)); fl_logic(_r,32); }
  /* 11c68e60 pop ecx */
  ECX = (pop32());
  /* 11c68e61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c68e63 mov edi, 0x11c87d00 */
  EDI = (0x11c87d00u);
  /* 11c68e68 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e6b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c68e6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c68e6e mov dword ptr [0x11c87bec], ebx */
  w32((uint32_t)(0x11c87bec), (EBX));
  /* 11c68e74 jbe 0x11c68f65 */
  if ((C.cf||C.zf)) goto L_11c68f65;
  /* 11c68e7a cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68e7e je 0x11c68f40 */
  if (C.zf) goto L_11c68f40;
  /* 11c68e84 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11c68e87:;
  /* 11c68e87 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c68e89 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c68e8b je 0x11c68f40 */
  if (C.zf) goto L_11c68f40;
  /* 11c68e91 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11c68e95 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11c68e98:;
  /* 11c68e98 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68e9a ja 0x11c68f34 */
  if ((!C.cf&&!C.zf)) goto L_11c68f34;
  /* 11c68ea0 or byte ptr [eax + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x4u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c68ea7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c68ea8 jmp 0x11c68e98 */
  goto L_11c68e98;
L_11c68eaa:;
  /* 11c68eaa and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c68eae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c68eb0 pop ecx */
  ECX = (pop32());
  /* 11c68eb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c68eb3 mov edi, 0x11c87d00 */
  EDI = (0x11c87d00u);
  /* 11c68eb8 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11c68ebb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c68ebd shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c68ec0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c68ec1 lea ebx, [esi + 0x11c72ee8] */
  EBX = ((uint32_t)(ESI + 0x11c72ee8));
L_11c68ec7:;
  /* 11c68ec7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68eca mov ecx, ebx */
  ECX = (EBX);
  /* 11c68ecc je 0x11c68efa */
  if (C.zf) goto L_11c68efa;
L_11c68ece:;
  /* 11c68ece mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11c68ed1 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c68ed3 je 0x11c68efa */
  if (C.zf) goto L_11c68efa;
  /* 11c68ed5 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c68ed8 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11c68edb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68edd ja 0x11c68ef3 */
  if ((!C.cf&&!C.zf)) goto L_11c68ef3;
  /* 11c68edf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c68ee2 mov dl, byte ptr [edx + 0x11c72ed0] */
  DL = (r8((uint32_t)(EDX + 0x11c72ed0)));
L_11c68ee8:;
  /* 11c68ee8 or byte ptr [eax + 0x11c87d01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(DL); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c68eee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c68eef cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68ef1 jbe 0x11c68ee8 */
  if ((C.cf||C.zf)) goto L_11c68ee8;
L_11c68ef3:;
  /* 11c68ef3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c68ef4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c68ef5 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68ef8 jne 0x11c68ece */
  if (!C.zf) goto L_11c68ece;
L_11c68efa:;
  /* 11c68efa inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c68efd add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c68f00 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68f04 jb 0x11c68ec7 */
  if (C.cf) goto L_11c68ec7;
  /* 11c68f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c68f09 mov dword ptr [0x11c87bfc], 1 */
  w32((uint32_t)(0x11c87bfc), (0x1u));
  /* 11c68f13 push eax */
  push32((uint32_t)(EAX));
  /* 11c68f14 mov dword ptr [0x11c87bec], eax */
  w32((uint32_t)(0x11c87bec), (EAX));
  /* 11c68f19 call 0x11c68fec */
  push32(0x11c68f1eu); f_11c68fec();
  /* 11c68f1e lea esi, [esi + 0x11c72edc] */
  ESI = ((uint32_t)(ESI + 0x11c72edc));
  /* 11c68f24 mov edi, 0x11c87bf0 */
  EDI = (0x11c87bf0u);
  /* 11c68f29 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c68f2a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c68f2b pop ecx */
  ECX = (pop32());
  /* 11c68f2c mov dword ptr [0x11c87e04], eax */
  w32((uint32_t)(0x11c87e04), (EAX));
  /* 11c68f31 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c68f32 jmp 0x11c68f86 */
  goto L_11c68f86;
L_11c68f34:;
  /* 11c68f34 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c68f35 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c68f36 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c68f3a jne 0x11c68e87 */
  if (!C.zf) goto L_11c68e87;
L_11c68f40:;
  /* 11c68f40 mov eax, esi */
  EAX = (ESI);
L_11c68f42:;
  /* 11c68f42 or byte ptr [eax + 0x11c87d01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x8u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c68f49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c68f4a cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68f4f jb 0x11c68f42 */
  if (C.cf) goto L_11c68f42;
  /* 11c68f51 push ebx */
  push32((uint32_t)(EBX));
  /* 11c68f52 call 0x11c68fec */
  push32(0x11c68f57u); f_11c68fec();
  /* 11c68f57 pop ecx */
  ECX = (pop32());
  /* 11c68f58 mov dword ptr [0x11c87e04], eax */
  w32((uint32_t)(0x11c87e04), (EAX));
  /* 11c68f5d mov dword ptr [0x11c87bfc], esi */
  w32((uint32_t)(0x11c87bfc), (ESI));
  /* 11c68f63 jmp 0x11c68f6c */
  goto L_11c68f6c;
L_11c68f65:;
  /* 11c68f65 and dword ptr [0x11c87bfc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c87bfc)))&(0x0u); w32((uint32_t)(0x11c87bfc), (_r)); fl_logic(_r,32); }
L_11c68f6c:;
  /* 11c68f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c68f6e mov edi, 0x11c87bf0 */
  EDI = (0x11c87bf0u);
  /* 11c68f73 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c68f74 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c68f75 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c68f76 jmp 0x11c68f86 */
  goto L_11c68f86;
L_11c68f78:;
  /* 11c68f78 cmp dword ptr [0x11c87ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68f7f je 0x11c68f90 */
  if (C.zf) goto L_11c68f90;
L_11c68f81:;
  /* 11c68f81 call 0x11c6901f */
  push32(0x11c68f86u); f_11c6901f();
L_11c68f86:;
  /* 11c68f86 call 0x11c69048 */
  push32(0x11c68f8bu); f_11c69048();
  /* 11c68f8b jmp 0x11c68e1c */
  goto L_11c68e1c;
L_11c68f90:;
  /* 11c68f90 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c68f93:;
  /* 11c68f93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c68f95 call 0x11c66ae7 */
  push32(0x11c68f9au); f_11c66ae7();
  /* 11c68f9a pop ecx */
  ECX = (pop32());
  /* 11c68f9b mov eax, esi */
  EAX = (ESI);
  /* 11c68f9d pop edi */
  EDI = (pop32());
  /* 11c68f9e pop esi */
  ESI = (pop32());
  /* 11c68f9f pop ebx */
  EBX = (pop32());
  /* 11c68fa0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c68fa1 ret  */
  ESPCHK(0x11c68df5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa2 @ 0x11c68fa2 (74 bytes, 15 insns) */
void f_11c68fa2(void) {
  FTRACE(0x11c68fa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68fa2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68fa6 and dword ptr [0x11c87ac4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c87ac4)))&(0x0u); w32((uint32_t)(0x11c87ac4), (_r)); fl_logic(_r,32); }
  /* 11c68fad cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68fb0 jne 0x11c68fc2 */
  if (!C.zf) goto L_11c68fc2;
  /* 11c68fb2 mov dword ptr [0x11c87ac4], 1 */
  w32((uint32_t)(0x11c87ac4), (0x1u));
  /* 11c68fbc jmp dword ptr [0x11c6e048] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c6e048)))); return;
L_11c68fc2:;
  /* 11c68fc2 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68fc5 jne 0x11c68fd7 */
  if (!C.zf) goto L_11c68fd7;
  /* 11c68fc7 mov dword ptr [0x11c87ac4], 1 */
  w32((uint32_t)(0x11c87ac4), (0x1u));
  /* 11c68fd1 jmp dword ptr [0x11c6e04c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c6e04c)))); return;
L_11c68fd7:;
  /* 11c68fd7 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c68fda jne 0x11c68feb */
  if (!C.zf) goto L_11c68feb;
  /* 11c68fdc mov eax, dword ptr [0x11c87b10] */
  EAX = (r32((uint32_t)(0x11c87b10)));
  /* 11c68fe1 mov dword ptr [0x11c87ac4], 1 */
  w32((uint32_t)(0x11c87ac4), (0x1u));
L_11c68feb:;
  /* 11c68feb ret  */
  ESPCHK(0x11c68fa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fec @ 0x11c68fec (51 bytes, 19 insns) */
void f_11c68fec(void) {
  FTRACE(0x11c68fecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c68fec mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c68ff0 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68ff5 je 0x11c69019 */
  if (C.zf) goto L_11c69019;
  /* 11c68ff7 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68ffa je 0x11c69013 */
  if (C.zf) goto L_11c69013;
  /* 11c68ffc sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c68fff je 0x11c6900d */
  if (C.zf) goto L_11c6900d;
  /* 11c69001 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c69002 je 0x11c69007 */
  if (C.zf) goto L_11c69007;
  /* 11c69004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69006 ret  */
  ESPCHK(0x11c68fecu, _esp0);
  ESP += 4; return;
L_11c69007:;
  /* 11c69007 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11c6900c ret  */
  ESPCHK(0x11c68fecu, _esp0);
  ESP += 4; return;
L_11c6900d:;
  /* 11c6900d mov eax, 0x412 */
  EAX = (0x412u);
  /* 11c69012 ret  */
  ESPCHK(0x11c68fecu, _esp0);
  ESP += 4; return;
L_11c69013:;
  /* 11c69013 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11c69018 ret  */
  ESPCHK(0x11c68fecu, _esp0);
  ESP += 4; return;
L_11c69019:;
  /* 11c69019 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11c6901e ret  */
  ESPCHK(0x11c68fecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000901f @ 0x11c6901f (41 bytes, 17 insns) */
void f_11c6901f(void) {
  FTRACE(0x11c6901fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6901f push edi */
  push32((uint32_t)(EDI));
  /* 11c69020 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c69022 pop ecx */
  ECX = (pop32());
  /* 11c69023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69025 mov edi, 0x11c87d00 */
  EDI = (0x11c87d00u);
  /* 11c6902a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c6902c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c6902d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6902f mov edi, 0x11c87bf0 */
  EDI = (0x11c87bf0u);
  /* 11c69034 mov dword ptr [0x11c87bec], eax */
  w32((uint32_t)(0x11c87bec), (EAX));
  /* 11c69039 mov dword ptr [0x11c87bfc], eax */
  w32((uint32_t)(0x11c87bfc), (EAX));
  /* 11c6903e mov dword ptr [0x11c87e04], eax */
  w32((uint32_t)(0x11c87e04), (EAX));
  /* 11c69043 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c69044 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c69045 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c69046 pop edi */
  EDI = (pop32());
  /* 11c69047 ret  */
  ESPCHK(0x11c6901fu, _esp0);
  ESP += 4; return;
}

/* FUN_10009048 @ 0x11c69048 (389 bytes, 124 insns) */
void f_11c69048(void) {
  FTRACE(0x11c69048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69048 push ebp */
  push32((uint32_t)(EBP));
  /* 11c69049 mov ebp, esp */
  EBP = (ESP);
  /* 11c6904b sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69051 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c69054 push esi */
  push32((uint32_t)(ESI));
  /* 11c69055 push eax */
  push32((uint32_t)(EAX));
  /* 11c69056 push dword ptr [0x11c87bec] */
  push32((uint32_t)(r32((uint32_t)(0x11c87bec))));
  /* 11c6905c call dword ptr [0x11c6e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e050))), 0x11c69062u);
  /* 11c69062 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69065 jne 0x11c69181 */
  if (!C.zf) goto L_11c69181;
  /* 11c6906b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6906d mov esi, 0x100 */
  ESI = (0x100u);
L_11c69072:;
  /* 11c69072 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11c69079 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6907a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6907c jb 0x11c69072 */
  if (C.cf) goto L_11c69072;
  /* 11c6907e mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11c69081 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11c69088 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6908a je 0x11c690c3 */
  if (C.zf) goto L_11c690c3;
  /* 11c6908c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6908d push edi */
  push32((uint32_t)(EDI));
  /* 11c6908e lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11c69091:;
  /* 11c69091 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c69094 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c69097 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69099 ja 0x11c690b8 */
  if ((!C.cf&&!C.zf)) goto L_11c690b8;
  /* 11c6909b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6909d lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11c690a4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c690a5 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11c690aa mov ebx, ecx */
  EBX = (ECX);
  /* 11c690ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c690af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c690b1 mov ecx, ebx */
  ECX = (EBX);
  /* 11c690b3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c690b6 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11c690b8:;
  /* 11c690b8 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c690b9 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c690ba mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11c690bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c690bf jne 0x11c69091 */
  if (!C.zf) goto L_11c69091;
  /* 11c690c1 pop edi */
  EDI = (pop32());
  /* 11c690c2 pop ebx */
  EBX = (pop32());
L_11c690c3:;
  /* 11c690c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c690c5 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11c690cb push dword ptr [0x11c87e04] */
  push32((uint32_t)(r32((uint32_t)(0x11c87e04))));
  /* 11c690d1 push dword ptr [0x11c87bec] */
  push32((uint32_t)(r32((uint32_t)(0x11c87bec))));
  /* 11c690d7 push eax */
  push32((uint32_t)(EAX));
  /* 11c690d8 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c690de push esi */
  push32((uint32_t)(ESI));
  /* 11c690df push eax */
  push32((uint32_t)(EAX));
  /* 11c690e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c690e2 call 0x11c6991d */
  push32(0x11c690e7u); f_11c6991d();
  /* 11c690e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c690e9 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11c690ef push dword ptr [0x11c87bec] */
  push32((uint32_t)(r32((uint32_t)(0x11c87bec))));
  /* 11c690f5 push esi */
  push32((uint32_t)(ESI));
  /* 11c690f6 push eax */
  push32((uint32_t)(EAX));
  /* 11c690f7 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c690fd push esi */
  push32((uint32_t)(ESI));
  /* 11c690fe push eax */
  push32((uint32_t)(EAX));
  /* 11c690ff push esi */
  push32((uint32_t)(ESI));
  /* 11c69100 push dword ptr [0x11c87e04] */
  push32((uint32_t)(r32((uint32_t)(0x11c87e04))));
  /* 11c69106 call 0x11c69a66 */
  push32(0x11c6910bu); f_11c69a66();
  /* 11c6910b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6910d lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11c69113 push dword ptr [0x11c87bec] */
  push32((uint32_t)(r32((uint32_t)(0x11c87bec))));
  /* 11c69119 push esi */
  push32((uint32_t)(ESI));
  /* 11c6911a push eax */
  push32((uint32_t)(EAX));
  /* 11c6911b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c69121 push esi */
  push32((uint32_t)(ESI));
  /* 11c69122 push eax */
  push32((uint32_t)(EAX));
  /* 11c69123 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c69128 push dword ptr [0x11c87e04] */
  push32((uint32_t)(r32((uint32_t)(0x11c87e04))));
  /* 11c6912e call 0x11c69a66 */
  push32(0x11c69133u); f_11c69a66();
  /* 11c69133 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69138 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11c6913e:;
  /* 11c6913e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11c69141 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c69144 je 0x11c6915c */
  if (C.zf) goto L_11c6915c;
  /* 11c69146 or byte ptr [eax + 0x11c87d01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x10u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c6914d mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11c69154:;
  /* 11c69154 mov byte ptr [eax + 0x11c87c00], dl */
  w8((uint32_t)(EAX + 0x11c87c00), (DL));
  /* 11c6915a jmp 0x11c69178 */
  goto L_11c69178;
L_11c6915c:;
  /* 11c6915c test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11c6915f je 0x11c69171 */
  if (C.zf) goto L_11c69171;
  /* 11c69161 or byte ptr [eax + 0x11c87d01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x20u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c69168 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11c6916f jmp 0x11c69154 */
  goto L_11c69154;
L_11c69171:;
  /* 11c69171 and byte ptr [eax + 0x11c87c00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87c00)))&(0x0u); w8((uint32_t)(EAX + 0x11c87c00), (_r)); fl_logic(_r,8); }
L_11c69178:;
  /* 11c69178 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c69179 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6917a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6917b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6917d jb 0x11c6913e */
  if (C.cf) goto L_11c6913e;
  /* 11c6917f jmp 0x11c691ca */
  goto L_11c691ca;
L_11c69181:;
  /* 11c69181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69183 mov esi, 0x100 */
  ESI = (0x100u);
L_11c69188:;
  /* 11c69188 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6918b jb 0x11c691a6 */
  if (C.cf) goto L_11c691a6;
  /* 11c6918d cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69190 ja 0x11c691a6 */
  if ((!C.cf&&!C.zf)) goto L_11c691a6;
  /* 11c69192 or byte ptr [eax + 0x11c87d01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x10u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c69199 mov cl, al */
  CL = (AL);
  /* 11c6919b add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11c6919e:;
  /* 11c6919e mov byte ptr [eax + 0x11c87c00], cl */
  w8((uint32_t)(EAX + 0x11c87c00), (CL));
  /* 11c691a4 jmp 0x11c691c5 */
  goto L_11c691c5;
L_11c691a6:;
  /* 11c691a6 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c691a9 jb 0x11c691be */
  if (C.cf) goto L_11c691be;
  /* 11c691ab cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c691ae ja 0x11c691be */
  if ((!C.cf&&!C.zf)) goto L_11c691be;
  /* 11c691b0 or byte ptr [eax + 0x11c87d01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))|(0x20u); w8((uint32_t)(EAX + 0x11c87d01), (_r)); fl_logic(_r,8); }
  /* 11c691b7 mov cl, al */
  CL = (AL);
  /* 11c691b9 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c691bc jmp 0x11c6919e */
  goto L_11c6919e;
L_11c691be:;
  /* 11c691be and byte ptr [eax + 0x11c87c00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87c00)))&(0x0u); w8((uint32_t)(EAX + 0x11c87c00), (_r)); fl_logic(_r,8); }
L_11c691c5:;
  /* 11c691c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c691c6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c691c8 jb 0x11c69188 */
  if (C.cf) goto L_11c69188;
L_11c691ca:;
  /* 11c691ca pop esi */
  ESI = (pop32());
  /* 11c691cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c691cc ret  */
  ESPCHK(0x11c69048u, _esp0);
  ESP += 4; return;
}

/* FUN_100091cd @ 0x11c691cd (28 bytes, 7 insns) */
void f_11c691cd(void) {
  FTRACE(0x11c691cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c691cd cmp dword ptr [0x11c88f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c88f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c691d4 jne 0x11c691e8 */
  if (!C.zf) goto L_11c691e8;
  /* 11c691d6 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11c691d8 call 0x11c68df5 */
  push32(0x11c691ddu); f_11c68df5();
  /* 11c691dd pop ecx */
  ECX = (pop32());
  /* 11c691de mov dword ptr [0x11c88f68], 1 */
  w32((uint32_t)(0x11c88f68), (0x1u));
L_11c691e8:;
  /* 11c691e8 ret  */
  ESPCHK(0x11c691cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100091e9 @ 0x11c691e9 (23 bytes, 7 insns) */
void f_11c691e9(void) {
  FTRACE(0x11c691e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c691e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c691eb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c691ef push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c691f3 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c691f7 call 0x11c69200 */
  push32(0x11c691fcu); f_11c69200();
  /* 11c691fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c691ff ret  */
  ESPCHK(0x11c691e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x11c69200 (517 bytes, 195 insns) */
void f_11c69200(void) {
  FTRACE(0x11c69200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69200 push ebp */
  push32((uint32_t)(EBP));
  /* 11c69201 mov ebp, esp */
  EBP = (ESP);
  /* 11c69203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69206 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69207 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c6920b push esi */
  push32((uint32_t)(ESI));
  /* 11c6920c push edi */
  push32((uint32_t)(EDI));
  /* 11c6920d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c69210 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c69212 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11c69215 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c69218:;
  /* 11c69218 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6921f jle 0x11c69230 */
  if ((C.zf||C.sf!=C.of)) goto L_11c69230;
  /* 11c69221 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c69224 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c69226 push eax */
  push32((uint32_t)(EAX));
  /* 11c69227 call 0x11c65c75 */
  push32(0x11c6922cu); f_11c65c75();
  /* 11c6922c pop ecx */
  ECX = (pop32());
  /* 11c6922d pop ecx */
  ECX = (pop32());
  /* 11c6922e jmp 0x11c6923f */
  goto L_11c6923f;
L_11c69230:;
  /* 11c69230 mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c69236 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c69239 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6923c and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11c6923f:;
  /* 11c6923f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69241 je 0x11c69248 */
  if (C.zf) goto L_11c69248;
  /* 11c69243 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c69245 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c69246 jmp 0x11c69218 */
  goto L_11c69218;
L_11c69248:;
  /* 11c69248 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6924b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c6924e jne 0x11c69256 */
  if (!C.zf) goto L_11c69256;
  /* 11c69250 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c69254 jmp 0x11c6925b */
  goto L_11c6925b;
L_11c69256:;
  /* 11c69256 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69259 jne 0x11c69261 */
  if (!C.zf) goto L_11c69261;
L_11c6925b:;
  /* 11c6925b mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c6925d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6925e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c69261:;
  /* 11c69261 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c69264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69266 jl 0x11c693f5 */
  if ((C.sf!=C.of)) goto L_11c693f5;
  /* 11c6926c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6926f je 0x11c693f5 */
  if (C.zf) goto L_11c693f5;
  /* 11c69275 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69278 jg 0x11c693f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c693f5;
  /* 11c6927e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c69280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69282 pop ecx */
  ECX = (pop32());
  /* 11c69283 jne 0x11c692a9 */
  if (!C.zf) goto L_11c692a9;
  /* 11c69285 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69288 je 0x11c69293 */
  if (C.zf) goto L_11c69293;
  /* 11c6928a mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11c69291 jmp 0x11c692c5 */
  goto L_11c692c5;
L_11c69293:;
  /* 11c69293 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c69295 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69297 je 0x11c692a6 */
  if (C.zf) goto L_11c692a6;
  /* 11c69299 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6929b je 0x11c692a6 */
  if (C.zf) goto L_11c692a6;
  /* 11c6929d mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11c692a4 jmp 0x11c692c5 */
  goto L_11c692c5;
L_11c692a6:;
  /* 11c692a6 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11c692a9:;
  /* 11c692a9 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c692ac jne 0x11c692c5 */
  if (!C.zf) goto L_11c692c5;
  /* 11c692ae cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c692b1 jne 0x11c692c5 */
  if (!C.zf) goto L_11c692c5;
  /* 11c692b3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c692b5 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c692b7 je 0x11c692bd */
  if (C.zf) goto L_11c692bd;
  /* 11c692b9 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c692bb jne 0x11c692c5 */
  if (!C.zf) goto L_11c692c5;
L_11c692bd:;
  /* 11c692bd mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c692c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c692c1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c692c2 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c692c5:;
  /* 11c692c5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c692c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c692ca div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c692cd mov edi, 0x103 */
  EDI = (0x103u);
  /* 11c692d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11c692d5:;
  /* 11c692d5 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c692dc movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c692df jle 0x11c692ed */
  if ((C.zf||C.sf!=C.of)) goto L_11c692ed;
  /* 11c692e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c692e3 push esi */
  push32((uint32_t)(ESI));
  /* 11c692e4 call 0x11c65c75 */
  push32(0x11c692e9u); f_11c65c75();
  /* 11c692e9 pop ecx */
  ECX = (pop32());
  /* 11c692ea pop ecx */
  ECX = (pop32());
  /* 11c692eb jmp 0x11c692f8 */
  goto L_11c692f8;
L_11c692ed:;
  /* 11c692ed mov eax, dword ptr [0x11c7076c] */
  EAX = (r32((uint32_t)(0x11c7076c)));
  /* 11c692f2 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11c692f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c692f8:;
  /* 11c692f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c692fa je 0x11c69304 */
  if (C.zf) goto L_11c69304;
  /* 11c692fc movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c692ff sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69302 jmp 0x11c69336 */
  goto L_11c69336;
L_11c69304:;
  /* 11c69304 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6930b jle 0x11c69318 */
  if ((C.zf||C.sf!=C.of)) goto L_11c69318;
  /* 11c6930d push edi */
  push32((uint32_t)(EDI));
  /* 11c6930e push esi */
  push32((uint32_t)(ESI));
  /* 11c6930f call 0x11c65c75 */
  push32(0x11c69314u); f_11c65c75();
  /* 11c69314 pop ecx */
  ECX = (pop32());
  /* 11c69315 pop ecx */
  ECX = (pop32());
  /* 11c69316 jmp 0x11c69323 */
  goto L_11c69323;
L_11c69318:;
  /* 11c69318 mov eax, dword ptr [0x11c7076c] */
  EAX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6931d mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11c69321 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11c69323:;
  /* 11c69323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69325 je 0x11c69371 */
  if (C.zf) goto L_11c69371;
  /* 11c69327 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c6932a push eax */
  push32((uint32_t)(EAX));
  /* 11c6932b call 0x11c6aad0 */
  push32(0x11c69330u); f_11c6aad0();
  /* 11c69330 pop ecx */
  ECX = (pop32());
  /* 11c69331 mov ecx, eax */
  ECX = (EAX);
  /* 11c69333 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11c69336:;
  /* 11c69336 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69339 jae 0x11c69371 */
  if (!C.cf) goto L_11c69371;
  /* 11c6933b mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6933e or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c69342 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69345 jb 0x11c6935b */
  if (C.cf) goto L_11c6935b;
  /* 11c69347 jne 0x11c69355 */
  if (!C.zf) goto L_11c69355;
  /* 11c69349 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6934c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6934e div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c69351 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69353 jbe 0x11c6935b */
  if ((C.cf||C.zf)) goto L_11c6935b;
L_11c69355:;
  /* 11c69355 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c69359 jmp 0x11c69364 */
  goto L_11c69364;
L_11c6935b:;
  /* 11c6935b imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6935f add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69361 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11c69364:;
  /* 11c69364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c69367 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6936a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c6936c jmp 0x11c692d5 */
  goto L_11c692d5;
L_11c69371:;
  /* 11c69371 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c69374 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c69377 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6937a test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c6937c jne 0x11c6938e */
  if (!C.zf) goto L_11c6938e;
  /* 11c6937e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c69380 je 0x11c69388 */
  if (C.zf) goto L_11c69388;
  /* 11c69382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c69385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c69388:;
  /* 11c69388 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c6938c jmp 0x11c693d9 */
  goto L_11c693d9;
L_11c6938e:;
  /* 11c6938e test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11c69390 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11c69395 jne 0x11c693b2 */
  if (!C.zf) goto L_11c693b2;
  /* 11c69397 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c69399 jne 0x11c693d9 */
  if (!C.zf) goto L_11c693d9;
  /* 11c6939b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6939e je 0x11c693a9 */
  if (C.zf) goto L_11c693a9;
  /* 11c693a0 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c693a7 ja 0x11c693b2 */
  if ((!C.cf&&!C.zf)) goto L_11c693b2;
L_11c693a9:;
  /* 11c693a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c693ab jne 0x11c693d9 */
  if (!C.zf) goto L_11c693d9;
  /* 11c693ad cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c693b0 jbe 0x11c693d9 */
  if ((C.cf||C.zf)) goto L_11c693d9;
L_11c693b2:;
  /* 11c693b2 call 0x11c6a7c4 */
  push32(0x11c693b7u); f_11c6a7c4();
  /* 11c693b7 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11c693bb mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11c693c1 je 0x11c693c9 */
  if (C.zf) goto L_11c693c9;
  /* 11c693c3 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c693c7 jmp 0x11c693d9 */
  goto L_11c693d9;
L_11c693c9:;
  /* 11c693c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c693cc and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11c693ce neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11c693d0 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c693d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c693d4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c693d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c693d9:;
  /* 11c693d9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c693db je 0x11c693e2 */
  if (C.zf) goto L_11c693e2;
  /* 11c693dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c693e0 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11c693e2:;
  /* 11c693e2 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11c693e6 je 0x11c693f0 */
  if (C.zf) goto L_11c693f0;
  /* 11c693e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c693eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c693ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c693f0:;
  /* 11c693f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c693f3 jmp 0x11c69400 */
  goto L_11c69400;
L_11c693f5:;
  /* 11c693f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c693f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c693fa je 0x11c693fe */
  if (C.zf) goto L_11c693fe;
  /* 11c693fc mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11c693fe:;
  /* 11c693fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c69400:;
  /* 11c69400 pop edi */
  EDI = (pop32());
  /* 11c69401 pop esi */
  ESI = (pop32());
  /* 11c69402 pop ebx */
  EBX = (pop32());
  /* 11c69403 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c69404 ret  */
  ESPCHK(0x11c69200u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11c69420 (193 bytes, 90 insns) */
void f_11c69420(void) {
  FTRACE(0x11c69420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69422 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c69426 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69427 mov ebx, eax */
  EBX = (EAX);
  /* 11c69429 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c6942c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c69430 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c69436 je 0x11c6944b */
  if (C.zf) goto L_11c6944b;
L_11c69438:;
  /* 11c69438 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11c6943a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c6943b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6943d je 0x11c69410 */
  if (C.zf) { jmp_ind(0x11c69410u); return; }
  /* 11c6943f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c69441 je 0x11c69494 */
  if (C.zf) goto L_11c69494;
  /* 11c69443 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c69449 jne 0x11c69438 */
  if (!C.zf) goto L_11c69438;
L_11c6944b:;
  /* 11c6944b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6944d push edi */
  push32((uint32_t)(EDI));
  /* 11c6944e mov eax, ebx */
  EAX = (EBX);
  /* 11c69450 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11c69453 push esi */
  push32((uint32_t)(ESI));
  /* 11c69454 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11c69456:;
  /* 11c69456 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c69458 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11c6945d mov eax, ecx */
  EAX = (ECX);
  /* 11c6945f mov esi, edi */
  ESI = (EDI);
  /* 11c69461 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11c69463 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69465 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69467 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c6946a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6946d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c6946f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c69471 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69474 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11c6947a jne 0x11c69498 */
  if (!C.zf) goto L_11c69498;
  /* 11c6947c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c69481 je 0x11c69456 */
  if (C.zf) goto L_11c69456;
  /* 11c69483 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c69488 jne 0x11c69492 */
  if (!C.zf) goto L_11c69492;
  /* 11c6948a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11c69490 jne 0x11c69456 */
  if (!C.zf) goto L_11c69456;
L_11c69492:;
  /* 11c69492 pop esi */
  ESI = (pop32());
  /* 11c69493 pop edi */
  EDI = (pop32());
L_11c69494:;
  /* 11c69494 pop ebx */
  EBX = (pop32());
  /* 11c69495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69497 ret  */
  ESPCHK(0x11c69420u, _esp0);
  ESP += 4; return;
L_11c69498:;
  /* 11c69498 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11c6949b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6949d je 0x11c694d5 */
  if (C.zf) goto L_11c694d5;
  /* 11c6949f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c694a1 je 0x11c69492 */
  if (C.zf) goto L_11c69492;
  /* 11c694a3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c694a5 je 0x11c694ce */
  if (C.zf) goto L_11c694ce;
  /* 11c694a7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c694a9 je 0x11c69492 */
  if (C.zf) goto L_11c69492;
  /* 11c694ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c694ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c694b0 je 0x11c694c7 */
  if (C.zf) goto L_11c694c7;
  /* 11c694b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c694b4 je 0x11c69492 */
  if (C.zf) goto L_11c69492;
  /* 11c694b6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c694b8 je 0x11c694c0 */
  if (C.zf) goto L_11c694c0;
  /* 11c694ba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c694bc je 0x11c69492 */
  if (C.zf) goto L_11c69492;
  /* 11c694be jmp 0x11c69456 */
  goto L_11c69456;
L_11c694c0:;
  /* 11c694c0 pop esi */
  ESI = (pop32());
  /* 11c694c1 pop edi */
  EDI = (pop32());
  /* 11c694c2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11c694c5 pop ebx */
  EBX = (pop32());
  /* 11c694c6 ret  */
  ESPCHK(0x11c69420u, _esp0);
  ESP += 4; return;
L_11c694c7:;
  /* 11c694c7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11c694ca pop esi */
  ESI = (pop32());
  /* 11c694cb pop edi */
  EDI = (pop32());
  /* 11c694cc pop ebx */
  EBX = (pop32());
  /* 11c694cd ret  */
  ESPCHK(0x11c69420u, _esp0);
  ESP += 4; return;
L_11c694ce:;
  /* 11c694ce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11c694d1 pop esi */
  ESI = (pop32());
  /* 11c694d2 pop edi */
  EDI = (pop32());
  /* 11c694d3 pop ebx */
  EBX = (pop32());
  /* 11c694d4 ret  */
  ESPCHK(0x11c69420u, _esp0);
  ESP += 4; return;
L_11c694d5:;
  /* 11c694d5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11c694d8 pop esi */
  ESI = (pop32());
  /* 11c694d9 pop edi */
  EDI = (pop32());
  /* 11c694da pop ebx */
  EBX = (pop32());
  /* 11c694db ret  */
  ESPCHK(0x11c69420u, _esp0);
  ESP += 4; return;
  /* 11c694dc int3  */
  x86_unimpl("int3 @ 0x11c694dc");
  /* 11c694dd int3  */
  x86_unimpl("int3 @ 0x11c694dd");
  /* 11c694de int3  */
  x86_unimpl("int3 @ 0x11c694de");
  /* 11c694df int3  */
  x86_unimpl("int3 @ 0x11c694df");
}

/* _strstr @ 0x11c694e0 (128 bytes, 66 insns) */
void f_11c694e0(void) {
  FTRACE(0x11c694e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c694e0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c694e4 push edi */
  push32((uint32_t)(EDI));
  /* 11c694e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c694e6 push esi */
  push32((uint32_t)(ESI));
  /* 11c694e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c694e9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c694ed test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c694ef je 0x11c6955a */
  if (C.zf) goto L_11c6955a;
  /* 11c694f1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11c694f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c694f6 je 0x11c69547 */
  if (C.zf) goto L_11c69547;
L_11c694f8:;
  /* 11c694f8 mov esi, edi */
  ESI = (EDI);
  /* 11c694fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c694fe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c69500 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c69501 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69503 je 0x11c6951a */
  if (C.zf) goto L_11c6951a;
  /* 11c69505 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c69507 je 0x11c69514 */
  if (C.zf) goto L_11c69514;
L_11c69509:;
  /* 11c69509 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6950b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c6950c:;
  /* 11c6950c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6950e je 0x11c6951a */
  if (C.zf) goto L_11c6951a;
  /* 11c69510 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c69512 jne 0x11c69509 */
  if (!C.zf) goto L_11c69509;
L_11c69514:;
  /* 11c69514 pop esi */
  ESI = (pop32());
  /* 11c69515 pop ebx */
  EBX = (pop32());
  /* 11c69516 pop edi */
  EDI = (pop32());
  /* 11c69517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69519 ret  */
  ESPCHK(0x11c694e0u, _esp0);
  ESP += 4; return;
L_11c6951a:;
  /* 11c6951a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6951c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6951d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6951f jne 0x11c6950c */
  if (!C.zf) goto L_11c6950c;
  /* 11c69521 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11c69524:;
  /* 11c69524 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11c69527 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c69529 je 0x11c69553 */
  if (C.zf) goto L_11c69553;
  /* 11c6952b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6952d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69530 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69532 jne 0x11c694f8 */
  if (!C.zf) goto L_11c694f8;
  /* 11c69534 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11c69537 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c69539 je 0x11c69553 */
  if (C.zf) goto L_11c69553;
  /* 11c6953b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11c6953e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69541 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69543 je 0x11c69524 */
  if (C.zf) goto L_11c69524;
  /* 11c69545 jmp 0x11c694f8 */
  goto L_11c694f8;
L_11c69547:;
  /* 11c69547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69549 pop esi */
  ESI = (pop32());
  /* 11c6954a pop ebx */
  EBX = (pop32());
  /* 11c6954b pop edi */
  EDI = (pop32());
  /* 11c6954c mov al, dl */
  AL = (DL);
  /* 11c6954e jmp 0x11c69426 */
  jmp_ind(0x11c69426u); return;
L_11c69553:;
  /* 11c69553 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11c69556 pop esi */
  ESI = (pop32());
  /* 11c69557 pop ebx */
  EBX = (pop32());
  /* 11c69558 pop edi */
  EDI = (pop32());
  /* 11c69559 ret  */
  ESPCHK(0x11c694e0u, _esp0);
  ESP += 4; return;
L_11c6955a:;
  /* 11c6955a mov eax, edi */
  EAX = (EDI);
  /* 11c6955c pop esi */
  ESI = (pop32());
  /* 11c6955d pop ebx */
  EBX = (pop32());
  /* 11c6955e pop edi */
  EDI = (pop32());
  /* 11c6955f ret  */
  ESPCHK(0x11c694e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11c69560 (56 bytes, 31 insns) */
void f_11c69560(void) {
  FTRACE(0x11c69560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69560 push ebp */
  push32((uint32_t)(EBP));
  /* 11c69561 mov ebp, esp */
  EBP = (ESP);
  /* 11c69563 push edi */
  push32((uint32_t)(EDI));
  /* 11c69564 push esi */
  push32((uint32_t)(ESI));
  /* 11c69565 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69566 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c69569 jecxz 0x11c69591 */
  x86_unimpl("jecxz @ 0x11c69569");
  /* 11c6956b mov ebx, ecx */
  EBX = (ECX);
  /* 11c6956d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c69570 mov esi, edi */
  ESI = (EDI);
  /* 11c69572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69574 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11c69576 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c69578 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6957a mov edi, esi */
  EDI = (ESI);
  /* 11c6957c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6957f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11c69581 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11c69584 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c69586 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69589 ja 0x11c6958f */
  if ((!C.cf&&!C.zf)) goto L_11c6958f;
  /* 11c6958b je 0x11c69591 */
  if (C.zf) goto L_11c69591;
  /* 11c6958d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6958e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11c6958f:;
  /* 11c6958f not ecx */
  ECX = (~(ECX));
L_11c69591:;
  /* 11c69591 mov eax, ecx */
  EAX = (ECX);
  /* 11c69593 pop ebx */
  EBX = (pop32());
  /* 11c69594 pop esi */
  ESI = (pop32());
  /* 11c69595 pop edi */
  EDI = (pop32());
  /* 11c69596 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c69597 ret  */
  ESPCHK(0x11c69560u, _esp0);
  ESP += 4; return;
}

/* FUN_100095a0 @ 0x11c695a0 (47 bytes, 17 insns) */
void f_11c695a0(void) {
  FTRACE(0x11c695a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c695a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c695a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c695a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11c695aa jb 0x11c695c0 */
  if (C.cf) goto L_11c695c0;
L_11c695ac:;
  /* 11c695ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c695b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c695b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c695b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c695be jae 0x11c695ac */
  if (!C.cf) goto L_11c695ac;
L_11c695c0:;
  /* 11c695c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c695c2 mov eax, esp */
  EAX = (ESP);
  /* 11c695c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c695c6 mov esp, ecx */
  ESP = (ECX);
  /* 11c695c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c695ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c695cd push eax */
  push32((uint32_t)(EAX));
  /* 11c695ce ret  */
  ESPCHK(0x11c695a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095cf @ 0x11c695cf (137 bytes, 50 insns) */
void f_11c695cf(void) {
  FTRACE(0x11c695cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c695cf push ebx */
  push32((uint32_t)(EBX));
  /* 11c695d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c695d2 cmp dword ptr [0x11c87ac8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87ac8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c695d8 push esi */
  push32((uint32_t)(ESI));
  /* 11c695d9 push edi */
  push32((uint32_t)(EDI));
  /* 11c695da jne 0x11c6961e */
  if (!C.zf) goto L_11c6961e;
  /* 11c695dc push 0x11c6e6dc */
  push32((uint32_t)(0x11c6e6dcu));
  /* 11c695e1 call dword ptr [0x11c6e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e044))), 0x11c695e7u);
  /* 11c695e7 mov edi, eax */
  EDI = (EAX);
  /* 11c695e9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c695eb je 0x11c69654 */
  if (C.zf) goto L_11c69654;
  /* 11c695ed mov esi, dword ptr [0x11c6e0e8] */
  ESI = (r32((uint32_t)(0x11c6e0e8)));
  /* 11c695f3 push 0x11c6e6d0 */
  push32((uint32_t)(0x11c6e6d0u));
  /* 11c695f8 push edi */
  push32((uint32_t)(EDI));
  /* 11c695f9 call esi */
  call_ind((uint32_t)(ESI), 0x11c695fbu);
  /* 11c695fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c695fd mov dword ptr [0x11c87ac8], eax */
  w32((uint32_t)(0x11c87ac8), (EAX));
  /* 11c69602 je 0x11c69654 */
  if (C.zf) goto L_11c69654;
  /* 11c69604 push 0x11c6e6c0 */
  push32((uint32_t)(0x11c6e6c0u));
  /* 11c69609 push edi */
  push32((uint32_t)(EDI));
  /* 11c6960a call esi */
  call_ind((uint32_t)(ESI), 0x11c6960cu);
  /* 11c6960c push 0x11c6e6ac */
  push32((uint32_t)(0x11c6e6acu));
  /* 11c69611 push edi */
  push32((uint32_t)(EDI));
  /* 11c69612 mov dword ptr [0x11c87acc], eax */
  w32((uint32_t)(0x11c87acc), (EAX));
  /* 11c69617 call esi */
  call_ind((uint32_t)(ESI), 0x11c69619u);
  /* 11c69619 mov dword ptr [0x11c87ad0], eax */
  w32((uint32_t)(0x11c87ad0), (EAX));
L_11c6961e:;
  /* 11c6961e mov eax, dword ptr [0x11c87acc] */
  EAX = (r32((uint32_t)(0x11c87acc)));
  /* 11c69623 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69625 je 0x11c6963d */
  if (C.zf) goto L_11c6963d;
  /* 11c69627 call eax */
  call_ind((uint32_t)(EAX), 0x11c69629u);
  /* 11c69629 mov ebx, eax */
  EBX = (EAX);
  /* 11c6962b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6962d je 0x11c6963d */
  if (C.zf) goto L_11c6963d;
  /* 11c6962f mov eax, dword ptr [0x11c87ad0] */
  EAX = (r32((uint32_t)(0x11c87ad0)));
  /* 11c69634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69636 je 0x11c6963d */
  if (C.zf) goto L_11c6963d;
  /* 11c69638 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69639 call eax */
  call_ind((uint32_t)(EAX), 0x11c6963bu);
  /* 11c6963b mov ebx, eax */
  EBX = (EAX);
L_11c6963d:;
  /* 11c6963d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c69641 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c69645 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c69649 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6964a call dword ptr [0x11c87ac8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c87ac8))), 0x11c69650u);
L_11c69650:;
  /* 11c69650 pop edi */
  EDI = (pop32());
  /* 11c69651 pop esi */
  ESI = (pop32());
  /* 11c69652 pop ebx */
  EBX = (pop32());
  /* 11c69653 ret  */
  ESPCHK(0x11c695cfu, _esp0);
  ESP += 4; return;
L_11c69654:;
  /* 11c69654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69656 jmp 0x11c69650 */
  goto L_11c69650;
}

/* _strncpy @ 0x11c69660 (254 bytes, 109 insns) */
void f_11c69660(void) {
  FTRACE(0x11c69660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69660 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c69664 push edi */
  push32((uint32_t)(EDI));
  /* 11c69665 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c69667 je 0x11c696e3 */
  if (C.zf) goto L_11c696e3;
  /* 11c69669 push esi */
  push32((uint32_t)(ESI));
  /* 11c6966a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6966b mov ebx, ecx */
  EBX = (ECX);
  /* 11c6966d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c69671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c69677 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6967b jne 0x11c69684 */
  if (!C.zf) goto L_11c69684;
  /* 11c6967d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c69680 jne 0x11c696f1 */
  if (!C.zf) goto L_11c696f1;
  /* 11c69682 jmp 0x11c696a5 */
  goto L_11c696a5;
L_11c69684:;
  /* 11c69684 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c69686 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c69687 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c69689 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6968a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6968b je 0x11c696b2 */
  if (C.zf) goto L_11c696b2;
  /* 11c6968d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6968f je 0x11c696ba */
  if (C.zf) goto L_11c696ba;
  /* 11c69691 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c69697 jne 0x11c69684 */
  if (!C.zf) goto L_11c69684;
  /* 11c69699 mov ebx, ecx */
  EBX = (ECX);
  /* 11c6969b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c6969e jne 0x11c696f1 */
  if (!C.zf) goto L_11c696f1;
L_11c696a0:;
  /* 11c696a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c696a3 je 0x11c696b2 */
  if (C.zf) goto L_11c696b2;
L_11c696a5:;
  /* 11c696a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c696a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c696a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c696aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c696ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c696ad je 0x11c696de */
  if (C.zf) goto L_11c696de;
  /* 11c696af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c696b0 jne 0x11c696a5 */
  if (!C.zf) goto L_11c696a5;
L_11c696b2:;
  /* 11c696b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c696b6 pop ebx */
  EBX = (pop32());
  /* 11c696b7 pop esi */
  ESI = (pop32());
  /* 11c696b8 pop edi */
  EDI = (pop32());
  /* 11c696b9 ret  */
  ESPCHK(0x11c69660u, _esp0);
  ESP += 4; return;
L_11c696ba:;
  /* 11c696ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c696c0 je 0x11c696d4 */
  if (C.zf) goto L_11c696d4;
L_11c696c2:;
  /* 11c696c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c696c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c696c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c696c6 je 0x11c69756 */
  if (C.zf) goto L_11c69756;
  /* 11c696cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c696d2 jne 0x11c696c2 */
  if (!C.zf) goto L_11c696c2;
L_11c696d4:;
  /* 11c696d4 mov ebx, ecx */
  EBX = (ECX);
  /* 11c696d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c696d9 jne 0x11c69747 */
  if (!C.zf) goto L_11c69747;
L_11c696db:;
  /* 11c696db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c696dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c696de:;
  /* 11c696de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c696df jne 0x11c696db */
  if (!C.zf) goto L_11c696db;
  /* 11c696e1 pop ebx */
  EBX = (pop32());
  /* 11c696e2 pop esi */
  ESI = (pop32());
L_11c696e3:;
  /* 11c696e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c696e7 pop edi */
  EDI = (pop32());
  /* 11c696e8 ret  */
  ESPCHK(0x11c69660u, _esp0);
  ESP += 4; return;
L_11c696e9:;
  /* 11c696e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c696eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c696ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c696ef je 0x11c696a0 */
  if (C.zf) goto L_11c696a0;
L_11c696f1:;
  /* 11c696f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c696f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c696f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c696fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c696fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c696ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c69701 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69704 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c69709 je 0x11c696e9 */
  if (C.zf) goto L_11c696e9;
  /* 11c6970b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c6970d je 0x11c6973b */
  if (C.zf) goto L_11c6973b;
  /* 11c6970f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c69711 je 0x11c69731 */
  if (C.zf) goto L_11c69731;
  /* 11c69713 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c69719 je 0x11c69727 */
  if (C.zf) goto L_11c69727;
  /* 11c6971b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c69721 jne 0x11c696e9 */
  if (!C.zf) goto L_11c696e9;
  /* 11c69723 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c69725 jmp 0x11c6973f */
  goto L_11c6973f;
L_11c69727:;
  /* 11c69727 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c6972d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c6972f jmp 0x11c6973f */
  goto L_11c6973f;
L_11c69731:;
  /* 11c69731 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c69737 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c69739 jmp 0x11c6973f */
  goto L_11c6973f;
L_11c6973b:;
  /* 11c6973b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6973d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11c6973f:;
  /* 11c6973f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69744 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c69745 je 0x11c69751 */
  if (C.zf) goto L_11c69751;
L_11c69747:;
  /* 11c69747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c69749:;
  /* 11c69749 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c6974b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6974e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6974f jne 0x11c69749 */
  if (!C.zf) goto L_11c69749;
L_11c69751:;
  /* 11c69751 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c69754 jne 0x11c696db */
  if (!C.zf) goto L_11c696db;
L_11c69756:;
  /* 11c69756 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6975a pop ebx */
  EBX = (pop32());
  /* 11c6975b pop esi */
  ESI = (pop32());
  /* 11c6975c pop edi */
  EDI = (pop32());
  /* 11c6975d ret  */
  ESPCHK(0x11c69660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000975e @ 0x11c6975e (386 bytes, 138 insns) */
void f_11c6975e(void) {
  FTRACE(0x11c6975eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6975e push ebp */
  push32((uint32_t)(EBP));
  /* 11c6975f mov ebp, esp */
  EBP = (ESP);
  /* 11c69761 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c69767 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6976b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6976c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6976d push esi */
  push32((uint32_t)(ESI));
  /* 11c6976e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6976f push edi */
  push32((uint32_t)(EDI));
  /* 11c69770 je 0x11c697d9 */
  if (C.zf) goto L_11c697d9;
  /* 11c69772 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c69773 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c69774 je 0x11c697bc */
  if (C.zf) goto L_11c697bc;
  /* 11c69776 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69779 je 0x11c697bc */
  if (C.zf) goto L_11c697bc;
  /* 11c6977b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6977e je 0x11c697bc */
  if (C.zf) goto L_11c697bc;
  /* 11c69780 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69783 je 0x11c697af */
  if (C.zf) goto L_11c697af;
  /* 11c69785 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69788 je 0x11c697a2 */
  if (C.zf) goto L_11c697a2;
  /* 11c6978a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6978b je 0x11c69795 */
  if (C.zf) goto L_11c69795;
  /* 11c6978d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c69790 jmp 0x11c698db */
  goto L_11c698db;
L_11c69795:;
  /* 11c69795 mov ebx, dword ptr [0x11c87adc] */
  EBX = (r32((uint32_t)(0x11c87adc)));
  /* 11c6979b mov edi, 0x11c87adc */
  EDI = (0x11c87adcu);
  /* 11c697a0 jmp 0x11c697e4 */
  goto L_11c697e4;
L_11c697a2:;
  /* 11c697a2 mov ebx, dword ptr [0x11c87ad8] */
  EBX = (r32((uint32_t)(0x11c87ad8)));
  /* 11c697a8 mov edi, 0x11c87ad8 */
  EDI = (0x11c87ad8u);
  /* 11c697ad jmp 0x11c697e4 */
  goto L_11c697e4;
L_11c697af:;
  /* 11c697af mov ebx, dword ptr [0x11c87ae0] */
  EBX = (r32((uint32_t)(0x11c87ae0)));
  /* 11c697b5 mov edi, 0x11c87ae0 */
  EDI = (0x11c87ae0u);
  /* 11c697ba jmp 0x11c697e4 */
  goto L_11c697e4;
L_11c697bc:;
  /* 11c697bc call 0x11c64883 */
  push32(0x11c697c1u); f_11c64883();
  /* 11c697c1 mov esi, eax */
  ESI = (EAX);
  /* 11c697c3 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 11c697c6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c697c9 call 0x11c698e0 */
  push32(0x11c697ceu); f_11c698e0();
  /* 11c697ce mov edi, eax */
  EDI = (EAX);
  /* 11c697d0 pop ecx */
  ECX = (pop32());
  /* 11c697d1 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c697d4 pop ecx */
  ECX = (pop32());
  /* 11c697d5 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 11c697d7 jmp 0x11c697f6 */
  goto L_11c697f6;
L_11c697d9:;
  /* 11c697d9 mov ebx, dword ptr [0x11c87ad4] */
  EBX = (r32((uint32_t)(0x11c87ad4)));
  /* 11c697df mov edi, 0x11c87ad4 */
  EDI = (0x11c87ad4u);
L_11c697e4:;
  /* 11c697e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c697e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c697ed call 0x11c66a86 */
  push32(0x11c697f2u); f_11c66a86();
  /* 11c697f2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c697f5 pop ecx */
  ECX = (pop32());
L_11c697f6:;
  /* 11c697f6 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c697f9 jne 0x11c69811 */
  if (!C.zf) goto L_11c69811;
  /* 11c697fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c697ff je 0x11c698d9 */
  if (C.zf) goto L_11c698d9;
  /* 11c69805 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69806 call 0x11c66ae7 */
  push32(0x11c6980bu); f_11c66ae7();
  /* 11c6980b pop ecx */
  ECX = (pop32());
  /* 11c6980c jmp 0x11c698d9 */
  goto L_11c698d9;
L_11c69811:;
  /* 11c69811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c69813 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69815 jne 0x11c6982b */
  if (!C.zf) goto L_11c6982b;
  /* 11c69817 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6981a je 0x11c69824 */
  if (C.zf) goto L_11c69824;
  /* 11c6981c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6981e call 0x11c66ae7 */
  push32(0x11c69823u); f_11c66ae7();
  /* 11c69823 pop ecx */
  ECX = (pop32());
L_11c69824:;
  /* 11c69824 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c69826 call 0x11c64a79 */
  push32(0x11c6982bu); f_11c64a79();
L_11c6982b:;
  /* 11c6982b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6982e cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69831 je 0x11c6983d */
  if (C.zf) goto L_11c6983d;
  /* 11c69833 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69836 je 0x11c6983d */
  if (C.zf) goto L_11c6983d;
  /* 11c69838 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6983b jne 0x11c69858 */
  if (!C.zf) goto L_11c69858;
L_11c6983d:;
  /* 11c6983d mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 11c69840 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69843 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c69846 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 11c69849 jne 0x11c69894 */
  if (!C.zf) goto L_11c69894;
  /* 11c6984b mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c6984e mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 11c69855 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11c69858:;
  /* 11c69858 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6985b jne 0x11c69894 */
  if (!C.zf) goto L_11c69894;
  /* 11c6985d mov ecx, dword ptr [0x11c70ae8] */
  ECX = (r32((uint32_t)(0x11c70ae8)));
  /* 11c69863 mov eax, dword ptr [0x11c70aec] */
  EAX = (r32((uint32_t)(0x11c70aec)));
  /* 11c69868 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6986a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6986c jge 0x11c69896 */
  if ((C.sf==C.of)) goto L_11c69896;
  /* 11c6986e lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11c69871 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_11c69874:;
  /* 11c69874 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c69877 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6987a and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6987f mov edx, dword ptr [0x11c70ae8] */
  EDX = (r32((uint32_t)(0x11c70ae8)));
  /* 11c69885 mov edi, dword ptr [0x11c70aec] */
  EDI = (r32((uint32_t)(0x11c70aec)));
  /* 11c6988b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6988c add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6988e cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69890 jl 0x11c69874 */
  if ((C.sf!=C.of)) goto L_11c69874;
  /* 11c69892 jmp 0x11c69896 */
  goto L_11c69896;
L_11c69894:;
  /* 11c69894 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_11c69896:;
  /* 11c69896 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6989a je 0x11c698a4 */
  if (C.zf) goto L_11c698a4;
  /* 11c6989c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6989e call 0x11c66ae7 */
  push32(0x11c698a3u); f_11c66ae7();
  /* 11c698a3 pop ecx */
  ECX = (pop32());
L_11c698a4:;
  /* 11c698a4 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c698a8 jne 0x11c698b5 */
  if (!C.zf) goto L_11c698b5;
  /* 11c698aa push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 11c698ad push 8 */
  push32((uint32_t)(0x8u));
  /* 11c698af call ebx */
  call_ind((uint32_t)(EBX), 0x11c698b1u);
  /* 11c698b1 pop ecx */
  ECX = (pop32());
  /* 11c698b2 pop ecx */
  ECX = (pop32());
  /* 11c698b3 jmp 0x11c698c7 */
  goto L_11c698c7;
L_11c698b5:;
  /* 11c698b5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c698b8 call ebx */
  call_ind((uint32_t)(EBX), 0x11c698bau);
  /* 11c698ba cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c698be pop ecx */
  ECX = (pop32());
  /* 11c698bf je 0x11c698c7 */
  if (C.zf) goto L_11c698c7;
  /* 11c698c1 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c698c5 jne 0x11c698d9 */
  if (!C.zf) goto L_11c698d9;
L_11c698c7:;
  /* 11c698c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c698ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c698ce mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 11c698d1 jne 0x11c698d9 */
  if (!C.zf) goto L_11c698d9;
  /* 11c698d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c698d6 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_11c698d9:;
  /* 11c698d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c698db:;
  /* 11c698db pop edi */
  EDI = (pop32());
  /* 11c698dc pop esi */
  ESI = (pop32());
  /* 11c698dd pop ebx */
  EBX = (pop32());
  /* 11c698de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c698df ret  */
  ESPCHK(0x11c6975eu, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x11c698e0 (61 bytes, 25 insns) */
void f_11c698e0(void) {
  FTRACE(0x11c698e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c698e0 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c698e4 mov ecx, dword ptr [0x11c70af4] */
  ECX = (r32((uint32_t)(0x11c70af4)));
  /* 11c698ea push esi */
  push32((uint32_t)(ESI));
  /* 11c698eb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c698ef cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c698f2 push edi */
  push32((uint32_t)(EDI));
  /* 11c698f3 mov eax, edx */
  EAX = (EDX);
  /* 11c698f5 je 0x11c69909 */
  if (C.zf) goto L_11c69909;
  /* 11c698f7 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 11c698fa lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_11c698fd:;
  /* 11c698fd add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69900 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69902 jae 0x11c69909 */
  if (!C.cf) goto L_11c69909;
  /* 11c69904 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69907 jne 0x11c698fd */
  if (!C.zf) goto L_11c698fd;
L_11c69909:;
  /* 11c69909 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11c6990c lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 11c6990f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69911 jae 0x11c69918 */
  if (!C.cf) goto L_11c69918;
  /* 11c69913 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69916 je 0x11c6991a */
  if (C.zf) goto L_11c6991a;
L_11c69918:;
  /* 11c69918 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6991a:;
  /* 11c6991a pop edi */
  EDI = (pop32());
  /* 11c6991b pop esi */
  ESI = (pop32());
  /* 11c6991c ret  */
  ESPCHK(0x11c698e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000991d @ 0x11c6991d (318 bytes, 123 insns) */
void f_11c6991d(void) {
  FTRACE(0x11c6991du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6991d push ebp */
  push32((uint32_t)(EBP));
  /* 11c6991e mov ebp, esp */
  EBP = (ESP);
  /* 11c69920 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c69922 push 0x11c6e6f0 */
  push32((uint32_t)(0x11c6e6f0u));
  /* 11c69927 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6992c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c69932 push eax */
  push32((uint32_t)(EAX));
  /* 11c69933 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6993a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6993d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6993e push esi */
  push32((uint32_t)(ESI));
  /* 11c6993f push edi */
  push32((uint32_t)(EDI));
  /* 11c69940 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c69943 mov eax, dword ptr [0x11c87ae8] */
  EAX = (r32((uint32_t)(0x11c87ae8)));
  /* 11c69948 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6994a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6994c jne 0x11c6998c */
  if (!C.zf) goto L_11c6998c;
  /* 11c6994e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c69951 push eax */
  push32((uint32_t)(EAX));
  /* 11c69952 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69954 pop esi */
  ESI = (pop32());
  /* 11c69955 push esi */
  push32((uint32_t)(ESI));
  /* 11c69956 push 0x11c6e6ec */
  push32((uint32_t)(0x11c6e6ecu));
  /* 11c6995b push esi */
  push32((uint32_t)(ESI));
  /* 11c6995c call dword ptr [0x11c6e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e038))), 0x11c69962u);
  /* 11c69962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69964 je 0x11c6996a */
  if (C.zf) goto L_11c6996a;
  /* 11c69966 mov eax, esi */
  EAX = (ESI);
  /* 11c69968 jmp 0x11c69987 */
  goto L_11c69987;
L_11c6996a:;
  /* 11c6996a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c6996d push eax */
  push32((uint32_t)(EAX));
  /* 11c6996e push esi */
  push32((uint32_t)(ESI));
  /* 11c6996f push 0x11c6e6e8 */
  push32((uint32_t)(0x11c6e6e8u));
  /* 11c69974 push esi */
  push32((uint32_t)(ESI));
  /* 11c69975 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69976 call dword ptr [0x11c6e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e03c))), 0x11c6997cu);
  /* 11c6997c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6997e je 0x11c69a52 */
  if (C.zf) goto L_11c69a52;
  /* 11c69984 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c69986 pop eax */
  EAX = (pop32());
L_11c69987:;
  /* 11c69987 mov dword ptr [0x11c87ae8], eax */
  w32((uint32_t)(0x11c87ae8), (EAX));
L_11c6998c:;
  /* 11c6998c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6998f jne 0x11c699b5 */
  if (!C.zf) goto L_11c699b5;
  /* 11c69991 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c69994 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69996 jne 0x11c6999d */
  if (!C.zf) goto L_11c6999d;
  /* 11c69998 mov eax, dword ptr [0x11c87b00] */
  EAX = (r32((uint32_t)(0x11c87b00)));
L_11c6999d:;
  /* 11c6999d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c699a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c699a3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c699a6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c699a9 push eax */
  push32((uint32_t)(EAX));
  /* 11c699aa call dword ptr [0x11c6e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e03c))), 0x11c699b0u);
  /* 11c699b0 jmp 0x11c69a54 */
  goto L_11c69a54;
L_11c699b5:;
  /* 11c699b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c699b8 jne 0x11c69a52 */
  if (!C.zf) goto L_11c69a52;
  /* 11c699be cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c699c1 jne 0x11c699cb */
  if (!C.zf) goto L_11c699cb;
  /* 11c699c3 mov eax, dword ptr [0x11c87b10] */
  EAX = (r32((uint32_t)(0x11c87b10)));
  /* 11c699c8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11c699cb:;
  /* 11c699cb push ebx */
  push32((uint32_t)(EBX));
  /* 11c699cc push ebx */
  push32((uint32_t)(EBX));
  /* 11c699cd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c699d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c699d3 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c699d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c699d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c699da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c699dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c699de push eax */
  push32((uint32_t)(EAX));
  /* 11c699df push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c699e2 call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c699e8u);
  /* 11c699e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c699eb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c699ed je 0x11c69a52 */
  if (C.zf) goto L_11c69a52;
  /* 11c699ef mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c699f2 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11c699f5 mov eax, edi */
  EAX = (EDI);
  /* 11c699f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c699fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c699fc call 0x11c695a0 */
  push32(0x11c69a01u); f_11c695a0();
  /* 11c69a01 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c69a04 mov esi, esp */
  ESI = (ESP);
  /* 11c69a06 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11c69a09 push edi */
  push32((uint32_t)(EDI));
  /* 11c69a0a push ebx */
  push32((uint32_t)(EBX));
  /* 11c69a0b push esi */
  push32((uint32_t)(ESI));
  /* 11c69a0c call 0x11c66490 */
  push32(0x11c69a11u); f_11c66490();
  /* 11c69a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69a14 jmp 0x11c69a21 */
  goto L_11c69a21;
  /* 11c69a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69a18 pop eax */
  EAX = (pop32());
  /* 11c69a19 ret  */
  ESPCHK(0x11c6991du, _esp0);
  ESP += 4; return;
  /* 11c69a1a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c69a1d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c69a1f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c69a21:;
  /* 11c69a21 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c69a25 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69a27 je 0x11c69a52 */
  if (C.zf) goto L_11c69a52;
  /* 11c69a29 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c69a2c push esi */
  push32((uint32_t)(ESI));
  /* 11c69a2d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c69a30 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c69a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69a35 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c69a38 call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c69a3eu);
  /* 11c69a3e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69a40 je 0x11c69a52 */
  if (C.zf) goto L_11c69a52;
  /* 11c69a42 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c69a45 push eax */
  push32((uint32_t)(EAX));
  /* 11c69a46 push esi */
  push32((uint32_t)(ESI));
  /* 11c69a47 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c69a4a call dword ptr [0x11c6e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e038))), 0x11c69a50u);
  /* 11c69a50 jmp 0x11c69a54 */
  goto L_11c69a54;
L_11c69a52:;
  /* 11c69a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c69a54:;
  /* 11c69a54 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11c69a57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c69a5a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c69a61 pop edi */
  EDI = (pop32());
  /* 11c69a62 pop esi */
  ESI = (pop32());
  /* 11c69a63 pop ebx */
  EBX = (pop32());
  /* 11c69a64 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c69a65 ret  */
  ESPCHK(0x11c6991du, _esp0);
  ESP += 4; return;
}

/* FUN_10009a66 @ 0x11c69a66 (511 bytes, 193 insns) */
void f_11c69a66(void) {
  FTRACE(0x11c69a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69a66 push ebp */
  push32((uint32_t)(EBP));
  /* 11c69a67 mov ebp, esp */
  EBP = (ESP);
  /* 11c69a69 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c69a6b push 0x11c6e700 */
  push32((uint32_t)(0x11c6e700u));
  /* 11c69a70 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c69a75 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c69a7b push eax */
  push32((uint32_t)(EAX));
  /* 11c69a7c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c69a83 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69a86 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69a87 push esi */
  push32((uint32_t)(ESI));
  /* 11c69a88 push edi */
  push32((uint32_t)(EDI));
  /* 11c69a89 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c69a8c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c69a8e cmp dword ptr [0x11c87b18], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c87b18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69a94 jne 0x11c69adc */
  if (!C.zf) goto L_11c69adc;
  /* 11c69a96 push edi */
  push32((uint32_t)(EDI));
  /* 11c69a97 push edi */
  push32((uint32_t)(EDI));
  /* 11c69a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69a9a pop ebx */
  EBX = (pop32());
  /* 11c69a9b push ebx */
  push32((uint32_t)(EBX));
  /* 11c69a9c push 0x11c6e6ec */
  push32((uint32_t)(0x11c6e6ecu));
  /* 11c69aa1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11c69aa6 push esi */
  push32((uint32_t)(ESI));
  /* 11c69aa7 push edi */
  push32((uint32_t)(EDI));
  /* 11c69aa8 call dword ptr [0x11c6e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e030))), 0x11c69aaeu);
  /* 11c69aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69ab0 je 0x11c69aba */
  if (C.zf) goto L_11c69aba;
  /* 11c69ab2 mov dword ptr [0x11c87b18], ebx */
  w32((uint32_t)(0x11c87b18), (EBX));
  /* 11c69ab8 jmp 0x11c69adc */
  goto L_11c69adc;
L_11c69aba:;
  /* 11c69aba push edi */
  push32((uint32_t)(EDI));
  /* 11c69abb push edi */
  push32((uint32_t)(EDI));
  /* 11c69abc push ebx */
  push32((uint32_t)(EBX));
  /* 11c69abd push 0x11c6e6e8 */
  push32((uint32_t)(0x11c6e6e8u));
  /* 11c69ac2 push esi */
  push32((uint32_t)(ESI));
  /* 11c69ac3 push edi */
  push32((uint32_t)(EDI));
  /* 11c69ac4 call dword ptr [0x11c6e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e034))), 0x11c69acau);
  /* 11c69aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69acc je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69ad2 mov dword ptr [0x11c87b18], 2 */
  w32((uint32_t)(0x11c87b18), (0x2u));
L_11c69adc:;
  /* 11c69adc cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69adf jle 0x11c69af1 */
  if ((C.zf||C.sf!=C.of)) goto L_11c69af1;
  /* 11c69ae1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c69ae4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c69ae7 call 0x11c69c8a */
  push32(0x11c69aecu); f_11c69c8a();
  /* 11c69aec pop ecx */
  ECX = (pop32());
  /* 11c69aed pop ecx */
  ECX = (pop32());
  /* 11c69aee mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11c69af1:;
  /* 11c69af1 mov eax, dword ptr [0x11c87b18] */
  EAX = (r32((uint32_t)(0x11c87b18)));
  /* 11c69af6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69af9 jne 0x11c69b18 */
  if (!C.zf) goto L_11c69b18;
  /* 11c69afb push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c69afe push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c69b01 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c69b04 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c69b07 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c69b0a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c69b0d call dword ptr [0x11c6e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e034))), 0x11c69b13u);
  /* 11c69b13 jmp 0x11c69bf6 */
  goto L_11c69bf6;
L_11c69b18:;
  /* 11c69b18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69b1b jne 0x11c69bf4 */
  if (!C.zf) goto L_11c69bf4;
  /* 11c69b21 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69b24 jne 0x11c69b2e */
  if (!C.zf) goto L_11c69b2e;
  /* 11c69b26 mov eax, dword ptr [0x11c87b10] */
  EAX = (r32((uint32_t)(0x11c87b10)));
  /* 11c69b2b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c69b2e:;
  /* 11c69b2e push edi */
  push32((uint32_t)(EDI));
  /* 11c69b2f push edi */
  push32((uint32_t)(EDI));
  /* 11c69b30 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c69b33 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c69b36 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c69b39 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c69b3b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69b3d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c69b40 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c69b41 push eax */
  push32((uint32_t)(EAX));
  /* 11c69b42 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c69b45 call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c69b4bu);
  /* 11c69b4b mov ebx, eax */
  EBX = (EAX);
  /* 11c69b4d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11c69b50 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69b52 je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69b58 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c69b5b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11c69b5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69b61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c69b63 call 0x11c695a0 */
  push32(0x11c69b68u); f_11c695a0();
  /* 11c69b68 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c69b6b mov eax, esp */
  EAX = (ESP);
  /* 11c69b6d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c69b70 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c69b74 jmp 0x11c69b89 */
  goto L_11c69b89;
  /* 11c69b76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69b78 pop eax */
  EAX = (pop32());
  /* 11c69b79 ret  */
  ESPCHK(0x11c69a66u, _esp0);
  ESP += 4; return;
  /* 11c69b7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c69b7d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c69b7f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c69b82 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c69b86 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11c69b89:;
  /* 11c69b89 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69b8c je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69b8e push ebx */
  push32((uint32_t)(EBX));
  /* 11c69b8f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c69b92 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c69b95 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c69b98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69b9a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c69b9d call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c69ba3u);
  /* 11c69ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69ba5 je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69ba7 push edi */
  push32((uint32_t)(EDI));
  /* 11c69ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11c69ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69baa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c69bad push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c69bb0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c69bb3 call dword ptr [0x11c6e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e030))), 0x11c69bb9u);
  /* 11c69bb9 mov esi, eax */
  ESI = (EAX);
  /* 11c69bbb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11c69bbe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69bc0 je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69bc2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11c69bc6 je 0x11c69c08 */
  if (C.zf) goto L_11c69c08;
  /* 11c69bc8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69bcb je 0x11c69c83 */
  if (C.zf) goto L_11c69c83;
  /* 11c69bd1 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69bd4 jg 0x11c69bf4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c69bf4;
  /* 11c69bd6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c69bd9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c69bdc push ebx */
  push32((uint32_t)(EBX));
  /* 11c69bdd push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c69be0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c69be3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c69be6 call dword ptr [0x11c6e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e030))), 0x11c69becu);
  /* 11c69bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69bee jne 0x11c69c83 */
  if (!C.zf) goto L_11c69c83;
L_11c69bf4:;
  /* 11c69bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c69bf6:;
  /* 11c69bf6 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11c69bf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c69bfc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c69c03 pop edi */
  EDI = (pop32());
  /* 11c69c04 pop esi */
  ESI = (pop32());
  /* 11c69c05 pop ebx */
  EBX = (pop32());
  /* 11c69c06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c69c07 ret  */
  ESPCHK(0x11c69a66u, _esp0);
  ESP += 4; return;
L_11c69c08:;
  /* 11c69c08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c69c0f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c69c12 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69c15 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c69c17 call 0x11c695a0 */
  push32(0x11c69c1cu); f_11c695a0();
  /* 11c69c1c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c69c1f mov ebx, esp */
  EBX = (ESP);
  /* 11c69c21 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c69c24 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c69c28 jmp 0x11c69c3c */
  goto L_11c69c3c;
  /* 11c69c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69c2c pop eax */
  EAX = (pop32());
  /* 11c69c2d ret  */
  ESPCHK(0x11c69a66u, _esp0);
  ESP += 4; return;
  /* 11c69c2e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c69c31 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c69c33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c69c35 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c69c39 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11c69c3c:;
  /* 11c69c3c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69c3e je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69c40 push esi */
  push32((uint32_t)(ESI));
  /* 11c69c41 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69c42 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c69c45 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c69c48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c69c4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c69c4e call dword ptr [0x11c6e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e030))), 0x11c69c54u);
  /* 11c69c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69c56 je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
  /* 11c69c58 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69c5b push edi */
  push32((uint32_t)(EDI));
  /* 11c69c5c push edi */
  push32((uint32_t)(EDI));
  /* 11c69c5d jne 0x11c69c63 */
  if (!C.zf) goto L_11c69c63;
  /* 11c69c5f push edi */
  push32((uint32_t)(EDI));
  /* 11c69c60 push edi */
  push32((uint32_t)(EDI));
  /* 11c69c61 jmp 0x11c69c69 */
  goto L_11c69c69;
L_11c69c63:;
  /* 11c69c63 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c69c66 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11c69c69:;
  /* 11c69c69 push esi */
  push32((uint32_t)(ESI));
  /* 11c69c6a push ebx */
  push32((uint32_t)(EBX));
  /* 11c69c6b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11c69c70 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c69c73 call dword ptr [0x11c6e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e09c))), 0x11c69c79u);
  /* 11c69c79 mov esi, eax */
  ESI = (EAX);
  /* 11c69c7b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69c7d je 0x11c69bf4 */
  if (C.zf) goto L_11c69bf4;
L_11c69c83:;
  /* 11c69c83 mov eax, esi */
  EAX = (ESI);
  /* 11c69c85 jmp 0x11c69bf6 */
  goto L_11c69bf6;
}

/* FUN_10009c8a @ 0x11c69c8a (43 bytes, 20 insns) */
void f_11c69c8a(void) {
  FTRACE(0x11c69c8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69c8a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c69c8e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c69c92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c69c94 push esi */
  push32((uint32_t)(ESI));
  /* 11c69c95 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11c69c98 je 0x11c69ca7 */
  if (C.zf) goto L_11c69ca7;
L_11c69c9a:;
  /* 11c69c9a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69c9d je 0x11c69ca7 */
  if (C.zf) goto L_11c69ca7;
  /* 11c69c9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c69ca0 mov esi, ecx */
  ESI = (ECX);
  /* 11c69ca2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c69ca3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c69ca5 jne 0x11c69c9a */
  if (!C.zf) goto L_11c69c9a;
L_11c69ca7:;
  /* 11c69ca7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69caa pop esi */
  ESI = (pop32());
  /* 11c69cab jne 0x11c69cb2 */
  if (!C.zf) goto L_11c69cb2;
  /* 11c69cad sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69cb1 ret  */
  ESPCHK(0x11c69c8au, _esp0);
  ESP += 4; return;
L_11c69cb2:;
  /* 11c69cb2 mov eax, edx */
  EAX = (EDX);
  /* 11c69cb4 ret  */
  ESPCHK(0x11c69c8au, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb5 @ 0x11c69cb5 (33 bytes, 15 insns) */
void f_11c69cb5(void) {
  FTRACE(0x11c69cb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69cb5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c69cb9 push esi */
  push32((uint32_t)(ESI));
  /* 11c69cba mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c69cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69cc0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11c69cc3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69cc5 jb 0x11c69ccb */
  if (C.cf) goto L_11c69ccb;
  /* 11c69cc7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69cc9 jae 0x11c69cce */
  if (!C.cf) goto L_11c69cce;
L_11c69ccb:;
  /* 11c69ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69ccd pop eax */
  EAX = (pop32());
L_11c69cce:;
  /* 11c69cce mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c69cd2 pop esi */
  ESI = (pop32());
  /* 11c69cd3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c69cd5 ret  */
  ESPCHK(0x11c69cb5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11c69cd6 (94 bytes, 38 insns) */
void f_11c69cd6(void) {
  FTRACE(0x11c69cd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69cd6 push esi */
  push32((uint32_t)(ESI));
  /* 11c69cd7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c69cdb push edi */
  push32((uint32_t)(EDI));
  /* 11c69cdc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c69ce0 push esi */
  push32((uint32_t)(ESI));
  /* 11c69ce1 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c69ce3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c69ce5 call 0x11c69cb5 */
  push32(0x11c69ceau); f_11c69cb5();
  /* 11c69cea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69cef je 0x11c69d08 */
  if (C.zf) goto L_11c69d08;
  /* 11c69cf1 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c69cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11c69cf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69cf7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c69cf9 call 0x11c69cb5 */
  push32(0x11c69cfeu); f_11c69cb5();
  /* 11c69cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69d03 je 0x11c69d08 */
  if (C.zf) goto L_11c69d08;
  /* 11c69d05 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c69d08:;
  /* 11c69d08 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c69d0b push eax */
  push32((uint32_t)(EAX));
  /* 11c69d0c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11c69d0f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c69d11 call 0x11c69cb5 */
  push32(0x11c69d16u); f_11c69cb5();
  /* 11c69d16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69d1b je 0x11c69d20 */
  if (C.zf) goto L_11c69d20;
  /* 11c69d1d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c69d20:;
  /* 11c69d20 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c69d23 push eax */
  push32((uint32_t)(EAX));
  /* 11c69d24 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c69d27 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c69d29 call 0x11c69cb5 */
  push32(0x11c69d2eu); f_11c69cb5();
  /* 11c69d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69d31 pop edi */
  EDI = (pop32());
  /* 11c69d32 pop esi */
  ESI = (pop32());
  /* 11c69d33 ret  */
  ESPCHK(0x11c69cd6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d34 @ 0x11c69d34 (46 bytes, 21 insns) */
void f_11c69d34(void) {
  FTRACE(0x11c69d34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69d34 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c69d38 push esi */
  push32((uint32_t)(ESI));
  /* 11c69d39 push edi */
  push32((uint32_t)(EDI));
  /* 11c69d3a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11c69d3c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11c69d3f mov ecx, esi */
  ECX = (ESI);
  /* 11c69d41 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69d43 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c69d45 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11c69d48 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11c69d4b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c69d4d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c69d50 mov edx, edi */
  EDX = (EDI);
  /* 11c69d52 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11c69d55 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11c69d58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c69d5a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c69d5c pop edi */
  EDI = (pop32());
  /* 11c69d5d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c69d60 pop esi */
  ESI = (pop32());
  /* 11c69d61 ret  */
  ESPCHK(0x11c69d34u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d62 @ 0x11c69d62 (45 bytes, 21 insns) */
void f_11c69d62(void) {
  FTRACE(0x11c69d62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69d62 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c69d66 push esi */
  push32((uint32_t)(ESI));
  /* 11c69d67 push edi */
  push32((uint32_t)(EDI));
  /* 11c69d68 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c69d6b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c69d6e mov esi, edx */
  ESI = (EDX);
  /* 11c69d70 mov edi, ecx */
  EDI = (ECX);
  /* 11c69d72 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11c69d75 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c69d77 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c69d79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c69d7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c69d7e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11c69d81 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c69d83 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11c69d85 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c69d87 pop edi */
  EDI = (pop32());
  /* 11c69d88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11c69d8b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c69d8d pop esi */
  ESI = (pop32());
  /* 11c69d8e ret  */
  ESPCHK(0x11c69d62u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d8f @ 0x11c69d8f (199 bytes, 76 insns) */
void f_11c69d8f(void) {
  FTRACE(0x11c69d8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69d8f push ebp */
  push32((uint32_t)(EBP));
  /* 11c69d90 mov ebp, esp */
  EBP = (ESP);
  /* 11c69d92 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69d95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c69d98 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69d99 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c69d9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c69d9e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69da0 push esi */
  push32((uint32_t)(ESI));
  /* 11c69da1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11c69da8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11c69daa mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11c69dad mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11c69db0 jbe 0x11c69e03 */
  if ((C.cf||C.zf)) goto L_11c69e03;
  /* 11c69db2 push edi */
  push32((uint32_t)(EDI));
  /* 11c69db3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11c69db6:;
  /* 11c69db6 mov esi, ebx */
  ESI = (EBX);
  /* 11c69db8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11c69dbb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c69dbc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c69dbd push ebx */
  push32((uint32_t)(EBX));
  /* 11c69dbe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c69dbf call 0x11c69d34 */
  push32(0x11c69dc4u); f_11c69d34();
  /* 11c69dc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69dc5 call 0x11c69d34 */
  push32(0x11c69dcau); f_11c69d34();
  /* 11c69dca lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c69dcd push eax */
  push32((uint32_t)(EAX));
  /* 11c69dce push ebx */
  push32((uint32_t)(EBX));
  /* 11c69dcf call 0x11c69cd6 */
  push32(0x11c69dd4u); f_11c69cd6();
  /* 11c69dd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c69dd5 call 0x11c69d34 */
  push32(0x11c69ddau); f_11c69d34();
  /* 11c69dda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c69ddd and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11c69de1 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c69de5 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11c69de8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c69deb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c69dee push eax */
  push32((uint32_t)(EAX));
  /* 11c69def push ebx */
  push32((uint32_t)(EBX));
  /* 11c69df0 call 0x11c69cd6 */
  push32(0x11c69df5u); f_11c69cd6();
  /* 11c69df5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c69df8 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c69dfb dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11c69dfe jne 0x11c69db6 */
  if (!C.zf) goto L_11c69db6;
  /* 11c69e00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c69e02 pop edi */
  EDI = (pop32());
L_11c69e03:;
  /* 11c69e03 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69e06 jne 0x11c69e30 */
  if (!C.zf) goto L_11c69e30;
  /* 11c69e08 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c69e0b mov eax, ecx */
  EAX = (ECX);
  /* 11c69e0d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c69e10 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11c69e13 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c69e15 mov esi, eax */
  ESI = (EAX);
  /* 11c69e17 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11c69e1a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11c69e1d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c69e1f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c69e22 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c69e29 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11c69e2c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c69e2e jmp 0x11c69e03 */
  goto L_11c69e03;
L_11c69e30:;
  /* 11c69e30 mov esi, 0x8000 */
  ESI = (0x8000u);
L_11c69e35:;
  /* 11c69e35 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11c69e38 jne 0x11c69e4a */
  if (!C.zf) goto L_11c69e4a;
  /* 11c69e3a push ebx */
  push32((uint32_t)(EBX));
  /* 11c69e3b call 0x11c69d34 */
  push32(0x11c69e40u); f_11c69d34();
  /* 11c69e40 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c69e47 pop ecx */
  ECX = (pop32());
  /* 11c69e48 jmp 0x11c69e35 */
  goto L_11c69e35;
L_11c69e4a:;
  /* 11c69e4a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11c69e4e pop esi */
  ESI = (pop32());
  /* 11c69e4f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11c69e53 pop ebx */
  EBX = (pop32());
  /* 11c69e54 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c69e55 ret  */
  ESPCHK(0x11c69d8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10009e56 @ 0x11c69e56 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11c69e56(void) {
  FTRACE(0x11c69e56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c69e56 push ebp */
  push32((uint32_t)(EBP));
  /* 11c69e57 mov ebp, esp */
  EBP = (ESP);
  /* 11c69e59 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69e5c push ebx */
  push32((uint32_t)(EBX));
  /* 11c69e5d push esi */
  push32((uint32_t)(ESI));
  /* 11c69e5e push edi */
  push32((uint32_t)(EDI));
  /* 11c69e5f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c69e62 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11c69e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69e67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c69e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c69e6c pop edx */
  EDX = (pop32());
  /* 11c69e6d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c69e70 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11c69e73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c69e76 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c69e79 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c69e7c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c69e7f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c69e82 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11c69e85 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c69e88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c69e8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c69e8e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11c69e91:;
  /* 11c69e91 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c69e93 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69e96 je 0x11c69ea7 */
  if (C.zf) goto L_11c69ea7;
  /* 11c69e98 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69e9b je 0x11c69ea7 */
  if (C.zf) goto L_11c69ea7;
  /* 11c69e9d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ea0 je 0x11c69ea7 */
  if (C.zf) goto L_11c69ea7;
  /* 11c69ea2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ea5 jne 0x11c69eaa */
  if (!C.zf) goto L_11c69eaa;
L_11c69ea7:;
  /* 11c69ea7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c69ea8 jmp 0x11c69e91 */
  goto L_11c69e91;
L_11c69eaa:;
  /* 11c69eaa push 4 */
  push32((uint32_t)(0x4u));
  /* 11c69eac pop esi */
  ESI = (pop32());
L_11c69ead:;
  /* 11c69ead mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c69eaf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c69eb0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69eb3 ja 0x11c6a130 */
  if ((!C.cf&&!C.zf)) goto L_11c6a130;
  /* 11c69eb9 jmp dword ptr [eax*4 + 0x11c6a2f7] */
  switch (EAX) {
    case 0: goto L_11c69ec0;
    case 1: goto L_11c69f0f;
    case 2: goto L_11c69f66;
    case 3: goto L_11c69f90;
    case 4: goto L_11c69feb;
    case 5: goto L_11c6a062;
    case 6: goto L_11c6a098;
    case 7: goto L_11c6a0e2;
    case 8: goto L_11c6a0c1;
    case 9: goto L_11c6a146;
    case 10: goto L_11c6a130;
    case 11: goto L_11c6a0fc;
    default: x86_unimpl("switch@0x11c69eb9 out of table"); return;
  }
L_11c69ec0:;
  /* 11c69ec0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ec3 jl 0x11c69ed1 */
  if ((C.sf!=C.of)) goto L_11c69ed1;
  /* 11c69ec5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ec8 jg 0x11c69ed1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c69ed1;
L_11c69eca:;
  /* 11c69eca push 3 */
  push32((uint32_t)(0x3u));
  /* 11c69ecc jmp 0x11c6a0ee */
  goto L_11c6a0ee;
L_11c69ed1:;
  /* 11c69ed1 cmp bl, byte ptr [0x11c70764] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c70764))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ed7 jne 0x11c69ee0 */
  if (!C.zf) goto L_11c69ee0;
L_11c69ed9:;
  /* 11c69ed9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c69edb jmp 0x11c6a126 */
  goto L_11c6a126;
L_11c69ee0:;
  /* 11c69ee0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c69ee3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69ee6 je 0x11c69f06 */
  if (C.zf) goto L_11c69f06;
  /* 11c69ee8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c69ee9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c69eea je 0x11c69efa */
  if (C.zf) goto L_11c69efa;
  /* 11c69eec sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c69eef jne 0x11c6a1c9 */
  if (!C.zf) goto L_11c6a1c9;
  /* 11c69ef5 jmp 0x11c69f89 */
  goto L_11c69f89;
L_11c69efa:;
  /* 11c69efa push 2 */
  push32((uint32_t)(0x2u));
  /* 11c69efc mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11c69f03 pop eax */
  EAX = (pop32());
  /* 11c69f04 jmp 0x11c69ead */
  goto L_11c69ead;
L_11c69f06:;
  /* 11c69f06 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11c69f0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11c69f0c pop eax */
  EAX = (pop32());
  /* 11c69f0d jmp 0x11c69ead */
  goto L_11c69ead;
L_11c69f0f:;
  /* 11c69f0f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11c69f15 jl 0x11c69f1c */
  if ((C.sf!=C.of)) goto L_11c69f1c;
  /* 11c69f17 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f1a jle 0x11c69eca */
  if ((C.zf||C.sf!=C.of)) goto L_11c69eca;
L_11c69f1c:;
  /* 11c69f1c cmp bl, byte ptr [0x11c70764] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c70764))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f22 je 0x11c69fe4 */
  if (C.zf) goto L_11c69fe4;
  /* 11c69f28 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f2b je 0x11c69f5e */
  if (C.zf) goto L_11c69f5e;
  /* 11c69f2d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f30 je 0x11c69f5e */
  if (C.zf) goto L_11c69f5e;
  /* 11c69f32 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f35 je 0x11c69f89 */
  if (C.zf) goto L_11c69f89;
L_11c69f37:;
  /* 11c69f37 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f3a jle 0x11c6a1c9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a1c9;
  /* 11c69f40 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f43 jle 0x11c69f57 */
  if ((C.zf||C.sf!=C.of)) goto L_11c69f57;
  /* 11c69f45 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f48 jle 0x11c6a1c9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a1c9;
  /* 11c69f4e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f51 jg 0x11c6a1c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6a1c9;
L_11c69f57:;
  /* 11c69f57 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c69f59 jmp 0x11c6a126 */
  goto L_11c6a126;
L_11c69f5e:;
  /* 11c69f5e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c69f5f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c69f61 jmp 0x11c6a126 */
  goto L_11c6a126;
L_11c69f66:;
  /* 11c69f66 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f69 jl 0x11c69f74 */
  if ((C.sf!=C.of)) goto L_11c69f74;
  /* 11c69f6b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f6e jle 0x11c69eca */
  if ((C.zf||C.sf!=C.of)) goto L_11c69eca;
L_11c69f74:;
  /* 11c69f74 cmp bl, byte ptr [0x11c70764] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c70764))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f7a je 0x11c69ed9 */
  if (C.zf) goto L_11c69ed9;
  /* 11c69f80 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69f83 jne 0x11c6a13e */
  if (!C.zf) goto L_11c6a13e;
L_11c69f89:;
  /* 11c69f89 mov eax, edx */
  EAX = (EDX);
  /* 11c69f8b jmp 0x11c69ead */
  goto L_11c69ead;
L_11c69f90:;
  /* 11c69f90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11c69f93:;
  /* 11c69f93 cmp dword ptr [0x11c70760], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69f99 jle 0x11c69fac */
  if ((C.zf||C.sf!=C.of)) goto L_11c69fac;
  /* 11c69f9b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c69f9e push esi */
  push32((uint32_t)(ESI));
  /* 11c69f9f push eax */
  push32((uint32_t)(EAX));
  /* 11c69fa0 call 0x11c65c75 */
  push32(0x11c69fa5u); f_11c65c75();
  /* 11c69fa5 pop ecx */
  ECX = (pop32());
  /* 11c69fa6 pop ecx */
  ECX = (pop32());
  /* 11c69fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c69fa9 pop edx */
  EDX = (pop32());
  /* 11c69faa jmp 0x11c69fba */
  goto L_11c69fba;
L_11c69fac:;
  /* 11c69fac mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c69fb2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c69fb5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c69fb8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c69fba:;
  /* 11c69fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c69fbc je 0x11c69fdc */
  if (C.zf) goto L_11c69fdc;
  /* 11c69fbe cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69fc2 jae 0x11c69fd4 */
  if (!C.cf) goto L_11c69fd4;
  /* 11c69fc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c69fc7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c69fca sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c69fcd inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11c69fd0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11c69fd2 jmp 0x11c69fd7 */
  goto L_11c69fd7;
L_11c69fd4:;
  /* 11c69fd4 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11c69fd7:;
  /* 11c69fd7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c69fd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c69fda jmp 0x11c69f93 */
  goto L_11c69f93;
L_11c69fdc:;
  /* 11c69fdc cmp bl, byte ptr [0x11c70764] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c70764))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69fe2 jne 0x11c6a04b */
  if (!C.zf) goto L_11c6a04b;
L_11c69fe4:;
  /* 11c69fe4 mov eax, esi */
  EAX = (ESI);
  /* 11c69fe6 jmp 0x11c69ead */
  goto L_11c69ead;
L_11c69feb:;
  /* 11c69feb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c69fef mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11c69ff2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11c69ff5 jne 0x11c6a004 */
  if (!C.zf) goto L_11c6a004;
L_11c69ff7:;
  /* 11c69ff7 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c69ffa jne 0x11c6a004 */
  if (!C.zf) goto L_11c6a004;
  /* 11c69ffc dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c69fff mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6a001 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a002 jmp 0x11c69ff7 */
  goto L_11c69ff7;
L_11c6a004:;
  /* 11c6a004 cmp dword ptr [0x11c70760], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a00a jle 0x11c6a01d */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a01d;
  /* 11c6a00c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a00f push esi */
  push32((uint32_t)(ESI));
  /* 11c6a010 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a011 call 0x11c65c75 */
  push32(0x11c6a016u); f_11c65c75();
  /* 11c6a016 pop ecx */
  ECX = (pop32());
  /* 11c6a017 pop ecx */
  ECX = (pop32());
  /* 11c6a018 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6a01a pop edx */
  EDX = (pop32());
  /* 11c6a01b jmp 0x11c6a02b */
  goto L_11c6a02b;
L_11c6a01d:;
  /* 11c6a01d mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a023 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a026 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6a029 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c6a02b:;
  /* 11c6a02b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a02d je 0x11c6a04b */
  if (C.zf) goto L_11c6a04b;
  /* 11c6a02f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a033 jae 0x11c6a046 */
  if (!C.cf) goto L_11c6a046;
  /* 11c6a035 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6a038 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6a03b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6a03e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11c6a041 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c6a044 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11c6a046:;
  /* 11c6a046 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6a048 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a049 jmp 0x11c6a004 */
  goto L_11c6a004;
L_11c6a04b:;
  /* 11c6a04b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a04e je 0x11c69f5e */
  if (C.zf) goto L_11c69f5e;
  /* 11c6a054 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a057 je 0x11c69f5e */
  if (C.zf) goto L_11c69f5e;
  /* 11c6a05d jmp 0x11c69f37 */
  goto L_11c69f37;
L_11c6a062:;
  /* 11c6a062 cmp dword ptr [0x11c70760], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a068 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11c6a06b jle 0x11c6a07e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a07e;
  /* 11c6a06d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a070 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a071 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a072 call 0x11c65c75 */
  push32(0x11c6a077u); f_11c65c75();
  /* 11c6a077 pop ecx */
  ECX = (pop32());
  /* 11c6a078 pop ecx */
  ECX = (pop32());
  /* 11c6a079 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6a07b pop edx */
  EDX = (pop32());
  /* 11c6a07c jmp 0x11c6a08c */
  goto L_11c6a08c;
L_11c6a07e:;
  /* 11c6a07e mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a084 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a087 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6a08a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c6a08c:;
  /* 11c6a08c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a08e je 0x11c6a13e */
  if (C.zf) goto L_11c6a13e;
  /* 11c6a094 mov eax, esi */
  EAX = (ESI);
  /* 11c6a096 jmp 0x11c6a0ef */
  goto L_11c6a0ef;
L_11c6a098:;
  /* 11c6a098 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11c6a09b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a09e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c6a0a1 jl 0x11c6a0a8 */
  if ((C.sf!=C.of)) goto L_11c6a0a8;
  /* 11c6a0a3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0a6 jle 0x11c6a0ec */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a0ec;
L_11c6a0a8:;
  /* 11c6a0a8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c6a0ab sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a0ae je 0x11c6a124 */
  if (C.zf) goto L_11c6a124;
  /* 11c6a0b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a0b1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a0b2 je 0x11c6a118 */
  if (C.zf) goto L_11c6a118;
  /* 11c6a0b4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a0b7 jne 0x11c6a1cc */
  if (!C.zf) goto L_11c6a1cc;
L_11c6a0bd:;
  /* 11c6a0bd push 8 */
  push32((uint32_t)(0x8u));
  /* 11c6a0bf jmp 0x11c6a126 */
  goto L_11c6a126;
L_11c6a0c1:;
  /* 11c6a0c1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11c6a0c4:;
  /* 11c6a0c4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0c7 jne 0x11c6a0ce */
  if (!C.zf) goto L_11c6a0ce;
  /* 11c6a0c9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6a0cb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a0cc jmp 0x11c6a0c4 */
  goto L_11c6a0c4;
L_11c6a0ce:;
  /* 11c6a0ce cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0d1 jl 0x11c6a1c9 */
  if ((C.sf!=C.of)) goto L_11c6a1c9;
  /* 11c6a0d7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0da jg 0x11c6a1c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6a1c9;
  /* 11c6a0e0 jmp 0x11c6a0ec */
  goto L_11c6a0ec;
L_11c6a0e2:;
  /* 11c6a0e2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0e5 jl 0x11c6a0f5 */
  if ((C.sf!=C.of)) goto L_11c6a0f5;
  /* 11c6a0e7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0ea jg 0x11c6a0f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6a0f5;
L_11c6a0ec:;
  /* 11c6a0ec push 9 */
  push32((uint32_t)(0x9u));
L_11c6a0ee:;
  /* 11c6a0ee pop eax */
  EAX = (pop32());
L_11c6a0ef:;
  /* 11c6a0ef dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c6a0f0 jmp 0x11c69ead */
  goto L_11c69ead;
L_11c6a0f5:;
  /* 11c6a0f5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a0f8 jne 0x11c6a13e */
  if (!C.zf) goto L_11c6a13e;
  /* 11c6a0fa jmp 0x11c6a0bd */
  goto L_11c6a0bd;
L_11c6a0fc:;
  /* 11c6a0fc cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a100 je 0x11c6a12c */
  if (C.zf) goto L_11c6a12c;
  /* 11c6a102 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c6a105 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11c6a108 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a10b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c6a10e je 0x11c6a124 */
  if (C.zf) goto L_11c6a124;
  /* 11c6a110 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a111 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a112 jne 0x11c6a1cc */
  if (!C.zf) goto L_11c6a1cc;
L_11c6a118:;
  /* 11c6a118 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11c6a11c push 7 */
  push32((uint32_t)(0x7u));
  /* 11c6a11e pop eax */
  EAX = (pop32());
  /* 11c6a11f jmp 0x11c69ead */
  goto L_11c69ead;
L_11c6a124:;
  /* 11c6a124 push 7 */
  push32((uint32_t)(0x7u));
L_11c6a126:;
  /* 11c6a126 pop eax */
  EAX = (pop32());
  /* 11c6a127 jmp 0x11c69ead */
  goto L_11c69ead;
L_11c6a12c:;
  /* 11c6a12c push 0xa */
  push32((uint32_t)(0xau));
  /* 11c6a12e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c6a12f pop eax */
  EAX = (pop32());
L_11c6a130:;
  /* 11c6a130 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a133 je 0x11c6a1ce */
  if (C.zf) goto L_11c6a1ce;
  /* 11c6a139 jmp 0x11c69ead */
  goto L_11c69ead;
L_11c6a13e:;
  /* 11c6a13e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6a141 jmp 0x11c6a1ce */
  goto L_11c6a1ce;
L_11c6a146:;
  /* 11c6a146 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11c6a14d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c6a14f:;
  /* 11c6a14f cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a156 jle 0x11c6a167 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a167;
  /* 11c6a158 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a15b push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6a15d push eax */
  push32((uint32_t)(EAX));
  /* 11c6a15e call 0x11c65c75 */
  push32(0x11c6a163u); f_11c65c75();
  /* 11c6a163 pop ecx */
  ECX = (pop32());
  /* 11c6a164 pop ecx */
  ECX = (pop32());
  /* 11c6a165 jmp 0x11c6a176 */
  goto L_11c6a176;
L_11c6a167:;
  /* 11c6a167 mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a16d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a170 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6a173 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c6a176:;
  /* 11c6a176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a178 je 0x11c6a196 */
  if (C.zf) goto L_11c6a196;
  /* 11c6a17a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c6a17d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c6a180 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11c6a184 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a18a jg 0x11c6a191 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6a191;
  /* 11c6a18c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6a18e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a18f jmp 0x11c6a14f */
  goto L_11c6a14f;
L_11c6a191:;
  /* 11c6a191 mov esi, 0x1451 */
  ESI = (0x1451u);
L_11c6a196:;
  /* 11c6a196 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11c6a199:;
  /* 11c6a199 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a1a0 jle 0x11c6a1b1 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a1b1;
  /* 11c6a1a2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a1a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6a1a7 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a1a8 call 0x11c65c75 */
  push32(0x11c6a1adu); f_11c65c75();
  /* 11c6a1ad pop ecx */
  ECX = (pop32());
  /* 11c6a1ae pop ecx */
  ECX = (pop32());
  /* 11c6a1af jmp 0x11c6a1c0 */
  goto L_11c6a1c0;
L_11c6a1b1:;
  /* 11c6a1b1 mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a1b7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6a1ba mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6a1bd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c6a1c0:;
  /* 11c6a1c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a1c2 je 0x11c6a1c9 */
  if (C.zf) goto L_11c6a1c9;
  /* 11c6a1c4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6a1c6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a1c7 jmp 0x11c6a199 */
  goto L_11c6a199;
L_11c6a1c9:;
  /* 11c6a1c9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c6a1ca jmp 0x11c6a1ce */
  goto L_11c6a1ce;
L_11c6a1cc:;
  /* 11c6a1cc mov edi, ecx */
  EDI = (ECX);
L_11c6a1ce:;
  /* 11c6a1ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6a1d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a1d5 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c6a1d7 je 0x11c6a2b6 */
  if (C.zf) goto L_11c6a2b6;
  /* 11c6a1dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c6a1df pop eax */
  EAX = (pop32());
  /* 11c6a1e0 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a1e3 jbe 0x11c6a1fa */
  if ((C.cf||C.zf)) goto L_11c6a1fa;
  /* 11c6a1e5 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a1e9 jl 0x11c6a1ee */
  if ((C.sf!=C.of)) goto L_11c6a1ee;
  /* 11c6a1eb inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11c6a1ee:;
  /* 11c6a1ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6a1f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6a1f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a1f5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11c6a1f8 jmp 0x11c6a1fd */
  goto L_11c6a1fd;
L_11c6a1fa:;
  /* 11c6a1fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11c6a1fd:;
  /* 11c6a1fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a201 jbe 0x11c6a2ac */
  if ((C.cf||C.zf)) goto L_11c6a2ac;
L_11c6a207:;
  /* 11c6a207 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a208 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a20b jne 0x11c6a215 */
  if (!C.zf) goto L_11c6a215;
  /* 11c6a20d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c6a210 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11c6a213 jmp 0x11c6a207 */
  goto L_11c6a207;
L_11c6a215:;
  /* 11c6a215 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11c6a218 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a219 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11c6a21c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c6a21f push eax */
  push32((uint32_t)(EAX));
  /* 11c6a220 call 0x11c69d8f */
  push32(0x11c6a225u); f_11c69d8f();
  /* 11c6a225 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c6a228 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6a22a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a22d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a230 jge 0x11c6a234 */
  if ((C.sf==C.of)) goto L_11c6a234;
  /* 11c6a232 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c6a234:;
  /* 11c6a234 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a237 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a23a jne 0x11c6a23f */
  if (!C.zf) goto L_11c6a23f;
  /* 11c6a23c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c6a23f:;
  /* 11c6a23f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a242 jne 0x11c6a247 */
  if (!C.zf) goto L_11c6a247;
  /* 11c6a244 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c6a247:;
  /* 11c6a247 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a24c jle 0x11c6a27e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a27e;
  /* 11c6a24e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11c6a255:;
  /* 11c6a255 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6a258 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6a25b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6a25e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11c6a261:;
  /* 11c6a261 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a265 je 0x11c6a2c7 */
  if (C.zf) goto L_11c6a2c7;
  /* 11c6a267 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6a269 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11c6a26e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c6a273 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6a275 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11c6a27c jmp 0x11c6a2dc */
  goto L_11c6a2dc;
L_11c6a27e:;
  /* 11c6a27e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a283 jge 0x11c6a28e */
  if ((C.sf==C.of)) goto L_11c6a28e;
  /* 11c6a285 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11c6a28c jmp 0x11c6a255 */
  goto L_11c6a255;
L_11c6a28e:;
  /* 11c6a28e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6a291 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a292 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11c6a295 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a296 call 0x11c6aeaa */
  push32(0x11c6a29bu); f_11c6aeaa();
  /* 11c6a29b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11c6a29e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11c6a2a1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11c6a2a4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11c6a2a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a2aa jmp 0x11c6a261 */
  goto L_11c6a261;
L_11c6a2ac:;
  /* 11c6a2ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6a2ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a2b0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6a2b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6a2b4 jmp 0x11c6a261 */
  goto L_11c6a261;
L_11c6a2b6:;
  /* 11c6a2b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6a2b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a2ba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6a2bc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6a2be mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11c6a2c5 jmp 0x11c6a2dc */
  goto L_11c6a2dc;
L_11c6a2c7:;
  /* 11c6a2c7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a2cb je 0x11c6a2dc */
  if (C.zf) goto L_11c6a2dc;
  /* 11c6a2cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c6a2cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a2d1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6a2d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6a2d5 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11c6a2dc:;
  /* 11c6a2dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6a2df or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a2e2 pop edi */
  EDI = (pop32());
  /* 11c6a2e3 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11c6a2e6 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11c6a2e9 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11c6a2ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6a2f0 pop esi */
  ESI = (pop32());
  /* 11c6a2f1 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11c6a2f4 pop ebx */
  EBX = (pop32());
  /* 11c6a2f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6a2f6 ret  */
  ESPCHK(0x11c69e56u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a327 @ 0x11c6a327 (659 bytes, 232 insns) */
void f_11c6a327(void) {
  FTRACE(0x11c6a327u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a327 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6a328 mov ebp, esp */
  EBP = (ESP);
  /* 11c6a32a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a32d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6a330 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a331 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c6a334 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a335 mov ecx, eax */
  ECX = (EAX);
  /* 11c6a337 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11c6a33c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c6a342 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a344 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11c6a347 push edi */
  push32((uint32_t)(EDI));
  /* 11c6a348 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11c6a34c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11c6a350 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11c6a354 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11c6a358 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11c6a35c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11c6a360 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11c6a364 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11c6a368 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11c6a36c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11c6a370 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11c6a374 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11c6a378 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c6a37f mov edx, eax */
  EDX = (EAX);
  /* 11c6a381 je 0x11c6a389 */
  if (C.zf) goto L_11c6a389;
  /* 11c6a383 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11c6a387 jmp 0x11c6a38d */
  goto L_11c6a38d;
L_11c6a389:;
  /* 11c6a389 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11c6a38d:;
  /* 11c6a38d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6a390 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11c6a393 jne 0x11c6a3b3 */
  if (!C.zf) goto L_11c6a3b3;
  /* 11c6a395 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6a397 jne 0x11c6a3b3 */
  if (!C.zf) goto L_11c6a3b3;
  /* 11c6a399 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a39c jne 0x11c6a3b3 */
  if (!C.zf) goto L_11c6a3b3;
L_11c6a39e:;
  /* 11c6a39e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11c6a3a2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11c6a3a6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11c6a3aa mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11c6a3ae jmp 0x11c6a5b1 */
  goto L_11c6a5b1;
L_11c6a3b3:;
  /* 11c6a3b3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6a3b6 jne 0x11c6a432 */
  if (!C.zf) goto L_11c6a432;
  /* 11c6a3b8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11c6a3bd mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11c6a3c2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3c4 jne 0x11c6a3cc */
  if (!C.zf) goto L_11c6a3cc;
  /* 11c6a3c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3ca je 0x11c6a3db */
  if (C.zf) goto L_11c6a3db;
L_11c6a3cc:;
  /* 11c6a3cc test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11c6a3d2 jne 0x11c6a3db */
  if (!C.zf) goto L_11c6a3db;
  /* 11c6a3d4 push 0x11c6e730 */
  push32((uint32_t)(0x11c6e730u));
  /* 11c6a3d9 jmp 0x11c6a421 */
  goto L_11c6a421;
L_11c6a3db:;
  /* 11c6a3db test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11c6a3de je 0x11c6a3f5 */
  if (C.zf) goto L_11c6a3f5;
  /* 11c6a3e0 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3e6 jne 0x11c6a3f5 */
  if (!C.zf) goto L_11c6a3f5;
  /* 11c6a3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3ec jne 0x11c6a41c */
  if (!C.zf) goto L_11c6a41c;
  /* 11c6a3ee push 0x11c6e728 */
  push32((uint32_t)(0x11c6e728u));
  /* 11c6a3f3 jmp 0x11c6a404 */
  goto L_11c6a404;
L_11c6a3f5:;
  /* 11c6a3f5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3f7 jne 0x11c6a41c */
  if (!C.zf) goto L_11c6a41c;
  /* 11c6a3f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a3fd jne 0x11c6a41c */
  if (!C.zf) goto L_11c6a41c;
  /* 11c6a3ff push 0x11c6e720 */
  push32((uint32_t)(0x11c6e720u));
L_11c6a404:;
  /* 11c6a404 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c6a407 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a408 call 0x11c663a0 */
  push32(0x11c6a40du); f_11c663a0();
  /* 11c6a40d pop ecx */
  ECX = (pop32());
  /* 11c6a40e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11c6a412 pop ecx */
  ECX = (pop32());
L_11c6a413:;
  /* 11c6a413 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6a417 jmp 0x11c6a58a */
  goto L_11c6a58a;
L_11c6a41c:;
  /* 11c6a41c push 0x11c6e718 */
  push32((uint32_t)(0x11c6e718u));
L_11c6a421:;
  /* 11c6a421 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c6a424 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a425 call 0x11c663a0 */
  push32(0x11c6a42au); f_11c663a0();
  /* 11c6a42a pop ecx */
  ECX = (pop32());
  /* 11c6a42b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11c6a42f pop ecx */
  ECX = (pop32());
  /* 11c6a430 jmp 0x11c6a413 */
  goto L_11c6a413;
L_11c6a432:;
  /* 11c6a432 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11c6a435 mov ecx, edi */
  ECX = (EDI);
  /* 11c6a437 mov esi, eax */
  ESI = (EAX);
  /* 11c6a439 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11c6a43c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6a442 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11c6a445 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11c6a44a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6a44c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11c6a44f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11c6a453 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6a456 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11c6a459 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11c6a460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6a463 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11c6a466 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11c6a469 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11c6a46c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6a46e push eax */
  push32((uint32_t)(EAX));
  /* 11c6a46f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a472 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a473 call 0x11c6aeaa */
  push32(0x11c6a478u); f_11c6aeaa();
  /* 11c6a478 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a47b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6a481 jb 0x11c6a493 */
  if (C.cf) goto L_11c6a493;
  /* 11c6a483 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c6a486 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6a487 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a488 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a48b push eax */
  push32((uint32_t)(EAX));
  /* 11c6a48c call 0x11c6ac8a */
  push32(0x11c6a491u); f_11c6ac8a();
  /* 11c6a491 pop ecx */
  ECX = (pop32());
  /* 11c6a492 pop ecx */
  ECX = (pop32());
L_11c6a493:;
  /* 11c6a493 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11c6a497 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11c6a49a je 0x11c6a4ad */
  if (C.zf) goto L_11c6a4ad;
  /* 11c6a49c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6a49f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11c6a4a2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a4a4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6a4a6 jg 0x11c6a4b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6a4b0;
  /* 11c6a4a8 jmp 0x11c6a39e */
  goto L_11c6a39e;
L_11c6a4ad:;
  /* 11c6a4ad mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11c6a4b0:;
  /* 11c6a4b0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a4b3 jle 0x11c6a4b8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a4b8;
  /* 11c6a4b5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11c6a4b7 pop edi */
  EDI = (pop32());
L_11c6a4b8:;
  /* 11c6a4b8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11c6a4bc sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a4c2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11c6a4c7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11c6a4ce:;
  /* 11c6a4ce lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a4d1 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a4d2 call 0x11c69d34 */
  push32(0x11c6a4d7u); f_11c69d34();
  /* 11c6a4d7 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11c6a4da pop ecx */
  ECX = (pop32());
  /* 11c6a4db jne 0x11c6a4ce */
  if (!C.zf) goto L_11c6a4ce;
  /* 11c6a4dd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6a4df jge 0x11c6a4f8 */
  if ((C.sf==C.of)) goto L_11c6a4f8;
  /* 11c6a4e1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6a4e3 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c6a4e9 jle 0x11c6a4f8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a4f8;
L_11c6a4eb:;
  /* 11c6a4eb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a4ee push eax */
  push32((uint32_t)(EAX));
  /* 11c6a4ef call 0x11c69d62 */
  push32(0x11c6a4f4u); f_11c69d62();
  /* 11c6a4f4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c6a4f5 pop ecx */
  ECX = (pop32());
  /* 11c6a4f6 jne 0x11c6a4eb */
  if (!C.zf) goto L_11c6a4eb;
L_11c6a4f8:;
  /* 11c6a4f8 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11c6a4fb lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c6a4fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6a500 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11c6a503 jle 0x11c6a555 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a555;
  /* 11c6a505 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11c6a508:;
  /* 11c6a508 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11c6a50b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11c6a50e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6a50f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6a510 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a513 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a514 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6a515 call 0x11c69d34 */
  push32(0x11c6a51au); f_11c69d34();
  /* 11c6a51a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a51d push eax */
  push32((uint32_t)(EAX));
  /* 11c6a51e call 0x11c69d34 */
  push32(0x11c6a523u); f_11c69d34();
  /* 11c6a523 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c6a526 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a527 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a52a push eax */
  push32((uint32_t)(EAX));
  /* 11c6a52b call 0x11c69cd6 */
  push32(0x11c6a530u); f_11c69cd6();
  /* 11c6a530 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c6a533 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a534 call 0x11c69d34 */
  push32(0x11c6a539u); f_11c69d34();
  /* 11c6a539 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11c6a53c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c6a53f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11c6a543 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a546 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c6a548 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c6a54b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11c6a54e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11c6a550 jne 0x11c6a508 */
  if (!C.zf) goto L_11c6a508;
  /* 11c6a552 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11c6a555:;
  /* 11c6a555 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11c6a558 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a559 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a55a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a55d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11c6a560 jl 0x11c6a592 */
  if ((C.sf!=C.of)) goto L_11c6a592;
L_11c6a562:;
  /* 11c6a562 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a564 jb 0x11c6a575 */
  if (C.cf) goto L_11c6a575;
  /* 11c6a566 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a569 jne 0x11c6a571 */
  if (!C.zf) goto L_11c6a571;
  /* 11c6a56b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c6a56e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a56f jmp 0x11c6a562 */
  goto L_11c6a562;
L_11c6a571:;
  /* 11c6a571 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a573 jae 0x11c6a579 */
  if (!C.cf) goto L_11c6a579;
L_11c6a575:;
  /* 11c6a575 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6a576 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11c6a579:;
  /* 11c6a579 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11c6a57b:;
  /* 11c6a57b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6a57d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6a57f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11c6a582 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11c6a585 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11c6a58a:;
  /* 11c6a58a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11c6a58d:;
  /* 11c6a58d pop edi */
  EDI = (pop32());
  /* 11c6a58e pop esi */
  ESI = (pop32());
  /* 11c6a58f pop ebx */
  EBX = (pop32());
  /* 11c6a590 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6a591 ret  */
  ESPCHK(0x11c6a327u, _esp0);
  ESP += 4; return;
L_11c6a592:;
  /* 11c6a592 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a594 jb 0x11c6a5a2 */
  if (C.cf) goto L_11c6a5a2;
  /* 11c6a596 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a599 jne 0x11c6a59e */
  if (!C.zf) goto L_11c6a59e;
  /* 11c6a59b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6a59c jmp 0x11c6a592 */
  goto L_11c6a592;
L_11c6a59e:;
  /* 11c6a59e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a5a0 jae 0x11c6a57b */
  if (!C.cf) goto L_11c6a57b;
L_11c6a5a2:;
  /* 11c6a5a2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11c6a5a6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11c6a5aa mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11c6a5ae mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11c6a5b1:;
  /* 11c6a5b1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11c6a5b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6a5b7 pop eax */
  EAX = (pop32());
  /* 11c6a5b8 jmp 0x11c6a58d */
  goto L_11c6a58d;
}

/* FUN_1000a5ba @ 0x11c6a5ba (139 bytes, 59 insns) */
void f_11c6a5ba(void) {
  FTRACE(0x11c6a5bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a5ba push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a5bb push ebp */
  push32((uint32_t)(EBP));
  /* 11c6a5bc push esi */
  push32((uint32_t)(ESI));
  /* 11c6a5bd push edi */
  push32((uint32_t)(EDI));
  /* 11c6a5be mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11c6a5c2:;
  /* 11c6a5c2 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a5c9 jle 0x11c6a5da */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a5da;
  /* 11c6a5cb movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6a5ce push 8 */
  push32((uint32_t)(0x8u));
  /* 11c6a5d0 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a5d1 call 0x11c65c75 */
  push32(0x11c6a5d6u); f_11c65c75();
  /* 11c6a5d6 pop ecx */
  ECX = (pop32());
  /* 11c6a5d7 pop ecx */
  ECX = (pop32());
  /* 11c6a5d8 jmp 0x11c6a5e9 */
  goto L_11c6a5e9;
L_11c6a5da:;
  /* 11c6a5da movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6a5dd mov ecx, dword ptr [0x11c7076c] */
  ECX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a5e3 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c6a5e6 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11c6a5e9:;
  /* 11c6a5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a5eb je 0x11c6a5f0 */
  if (C.zf) goto L_11c6a5f0;
  /* 11c6a5ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a5ee jmp 0x11c6a5c2 */
  goto L_11c6a5c2;
L_11c6a5f0:;
  /* 11c6a5f0 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6a5f3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a5f4 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a5f7 mov ebp, esi */
  EBP = (ESI);
  /* 11c6a5f9 je 0x11c6a600 */
  if (C.zf) goto L_11c6a600;
  /* 11c6a5fb cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a5fe jne 0x11c6a604 */
  if (!C.zf) goto L_11c6a604;
L_11c6a600:;
  /* 11c6a600 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6a603 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c6a604:;
  /* 11c6a604 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c6a606:;
  /* 11c6a606 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a60d jle 0x11c6a61b */
  if ((C.zf||C.sf!=C.of)) goto L_11c6a61b;
  /* 11c6a60f push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6a611 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a612 call 0x11c65c75 */
  push32(0x11c6a617u); f_11c65c75();
  /* 11c6a617 pop ecx */
  ECX = (pop32());
  /* 11c6a618 pop ecx */
  ECX = (pop32());
  /* 11c6a619 jmp 0x11c6a626 */
  goto L_11c6a626;
L_11c6a61b:;
  /* 11c6a61b mov eax, dword ptr [0x11c7076c] */
  EAX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6a620 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11c6a623 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c6a626:;
  /* 11c6a626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a628 je 0x11c6a637 */
  if (C.zf) goto L_11c6a637;
  /* 11c6a62a lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11c6a62d lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11c6a631 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6a634 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6a635 jmp 0x11c6a606 */
  goto L_11c6a606;
L_11c6a637:;
  /* 11c6a637 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a63a mov eax, ebx */
  EAX = (EBX);
  /* 11c6a63c jne 0x11c6a640 */
  if (!C.zf) goto L_11c6a640;
  /* 11c6a63e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c6a640:;
  /* 11c6a640 pop edi */
  EDI = (pop32());
  /* 11c6a641 pop esi */
  ESI = (pop32());
  /* 11c6a642 pop ebp */
  EBP = (pop32());
  /* 11c6a643 pop ebx */
  EBX = (pop32());
  /* 11c6a644 ret  */
  ESPCHK(0x11c6a5bau, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11c6a650 (129 bytes, 56 insns) */
void f_11c6a650(void) {
  FTRACE(0x11c6a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a650 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6a654 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6a658 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c6a65e jne 0x11c6a69c */
  if (!C.zf) goto L_11c6a69c;
L_11c6a660:;
  /* 11c6a660 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11c6a662 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a664 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a666 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6a668 je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a66a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a66d jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a66f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c6a671 je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a673 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c6a676 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a679 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a67b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6a67d je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a67f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a682 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a684 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a687 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a68a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c6a68c jne 0x11c6a660 */
  if (!C.zf) goto L_11c6a660;
  /* 11c6a68e mov edi, edi */
  EDI = (EDI);
L_11c6a690:;
  /* 11c6a690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a692 ret  */
  ESPCHK(0x11c6a650u, _esp0);
  ESP += 4; return;
  /* 11c6a693 nop  */
  /* nop */
L_11c6a694:;
  /* 11c6a694 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a696 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c6a698 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6a699 ret  */
  ESPCHK(0x11c6a650u, _esp0);
  ESP += 4; return;
  /* 11c6a69a mov edi, edi */
  EDI = (EDI);
L_11c6a69c:;
  /* 11c6a69c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11c6a6a2 je 0x11c6a6b8 */
  if (C.zf) goto L_11c6a6b8;
  /* 11c6a6a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c6a6a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c6a6a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a6a9 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a6ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6a6ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6a6ae je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a6b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11c6a6b6 je 0x11c6a660 */
  if (C.zf) goto L_11c6a660;
L_11c6a6b8:;
  /* 11c6a6b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11c6a6bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a6be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a6c0 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a6c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6a6c4 je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a6c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a6c9 jne 0x11c6a694 */
  if (!C.zf) goto L_11c6a694;
  /* 11c6a6cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c6a6cd je 0x11c6a690 */
  if (C.zf) goto L_11c6a690;
  /* 11c6a6cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a6d2 jmp 0x11c6a660 */
  goto L_11c6a660;
}

/* FUN_1000a6d4 @ 0x11c6a6d4 (125 bytes, 51 insns) */
void f_11c6a6d4(void) {
  FTRACE(0x11c6a6d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a6d4 cmp dword ptr [0x11c88f64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c88f64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a6db push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a6dc push esi */
  push32((uint32_t)(ESI));
  /* 11c6a6dd mov esi, dword ptr [0x11c87864] */
  ESI = (r32((uint32_t)(0x11c87864)));
  /* 11c6a6e3 push edi */
  push32((uint32_t)(EDI));
  /* 11c6a6e4 je 0x11c6a74b */
  if (C.zf) goto L_11c6a74b;
  /* 11c6a6e6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6a6e8 jne 0x11c6a705 */
  if (!C.zf) goto L_11c6a705;
  /* 11c6a6ea cmp dword ptr [0x11c8786c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c8786c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a6f0 je 0x11c6a74b */
  if (C.zf) goto L_11c6a74b;
  /* 11c6a6f2 call 0x11c6afa3 */
  push32(0x11c6a6f7u); f_11c6afa3();
  /* 11c6a6f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a6f9 jne 0x11c6a74b */
  if (!C.zf) goto L_11c6a74b;
  /* 11c6a6fb mov esi, dword ptr [0x11c87864] */
  ESI = (r32((uint32_t)(0x11c87864)));
  /* 11c6a701 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6a703 je 0x11c6a74b */
  if (C.zf) goto L_11c6a74b;
L_11c6a705:;
  /* 11c6a705 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6a709 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6a70b je 0x11c6a74b */
  if (C.zf) goto L_11c6a74b;
  /* 11c6a70d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a70e call 0x11c66830 */
  push32(0x11c6a713u); f_11c66830();
  /* 11c6a713 pop ecx */
  ECX = (pop32());
  /* 11c6a714 mov edi, eax */
  EDI = (EAX);
L_11c6a716:;
  /* 11c6a716 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6a718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a71a je 0x11c6a74b */
  if (C.zf) goto L_11c6a74b;
  /* 11c6a71c push eax */
  push32((uint32_t)(EAX));
  /* 11c6a71d call 0x11c66830 */
  push32(0x11c6a722u); f_11c66830();
  /* 11c6a722 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a724 pop ecx */
  ECX = (pop32());
  /* 11c6a725 jbe 0x11c6a73e */
  if ((C.cf||C.zf)) goto L_11c6a73e;
  /* 11c6a727 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6a729 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a72d jne 0x11c6a73e */
  if (!C.zf) goto L_11c6a73e;
  /* 11c6a72f push edi */
  push32((uint32_t)(EDI));
  /* 11c6a730 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a731 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a732 call 0x11c6af64 */
  push32(0x11c6a737u); f_11c6af64();
  /* 11c6a737 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a73a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a73c je 0x11c6a743 */
  if (C.zf) goto L_11c6a743;
L_11c6a73e:;
  /* 11c6a73e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a741 jmp 0x11c6a716 */
  goto L_11c6a716;
L_11c6a743:;
  /* 11c6a743 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6a745 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11c6a749 jmp 0x11c6a74d */
  goto L_11c6a74d;
L_11c6a74b:;
  /* 11c6a74b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6a74d:;
  /* 11c6a74d pop edi */
  EDI = (pop32());
  /* 11c6a74e pop esi */
  ESI = (pop32());
  /* 11c6a74f pop ebx */
  EBX = (pop32());
  /* 11c6a750 ret  */
  ESPCHK(0x11c6a6d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a751 @ 0x11c6a751 (115 bytes, 37 insns) */
void f_11c6a751(void) {
  FTRACE(0x11c6a751u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a751 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a752 call 0x11c6a7cd */
  push32(0x11c6a757u); f_11c6a7cd();
  /* 11c6a757 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6a75b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6a75d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c6a75f mov eax, 0x11c730e0 */
  EAX = (0x11c730e0u);
L_11c6a764:;
  /* 11c6a764 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a766 je 0x11c6a78a */
  if (C.zf) goto L_11c6a78a;
  /* 11c6a768 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a76b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6a76c cmp eax, 0x11c73248 */
  { uint32_t _a=(EAX),_b=(0x11c73248u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a771 jl 0x11c6a764 */
  if ((C.sf!=C.of)) goto L_11c6a764;
  /* 11c6a773 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a776 jb 0x11c6a79a */
  if (C.cf) goto L_11c6a79a;
  /* 11c6a778 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a77b ja 0x11c6a79a */
  if ((!C.cf&&!C.zf)) goto L_11c6a79a;
  /* 11c6a77d call 0x11c6a7c4 */
  push32(0x11c6a782u); f_11c6a7c4();
  /* 11c6a782 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11c6a788 pop esi */
  ESI = (pop32());
  /* 11c6a789 ret  */
  ESPCHK(0x11c6a751u, _esp0);
  ESP += 4; return;
L_11c6a78a:;
  /* 11c6a78a call 0x11c6a7c4 */
  push32(0x11c6a78fu); f_11c6a7c4();
  /* 11c6a78f mov ecx, dword ptr [esi*8 + 0x11c730e4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11c730e4)));
  /* 11c6a796 pop esi */
  ESI = (pop32());
  /* 11c6a797 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c6a799 ret  */
  ESPCHK(0x11c6a751u, _esp0);
  ESP += 4; return;
L_11c6a79a:;
  /* 11c6a79a cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a7a0 jb 0x11c6a7b7 */
  if (C.cf) goto L_11c6a7b7;
  /* 11c6a7a2 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a7a8 ja 0x11c6a7b7 */
  if ((!C.cf&&!C.zf)) goto L_11c6a7b7;
  /* 11c6a7aa call 0x11c6a7c4 */
  push32(0x11c6a7afu); f_11c6a7c4();
  /* 11c6a7af mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11c6a7b5 pop esi */
  ESI = (pop32());
  /* 11c6a7b6 ret  */
  ESPCHK(0x11c6a751u, _esp0);
  ESP += 4; return;
L_11c6a7b7:;
  /* 11c6a7b7 call 0x11c6a7c4 */
  push32(0x11c6a7bcu); f_11c6a7c4();
  /* 11c6a7bc mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11c6a7c2 pop esi */
  ESI = (pop32());
  /* 11c6a7c3 ret  */
  ESPCHK(0x11c6a751u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c4 @ 0x11c6a7c4 (9 bytes, 3 insns) */
void f_11c6a7c4(void) {
  FTRACE(0x11c6a7c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a7c4 call 0x11c64883 */
  push32(0x11c6a7c9u); f_11c64883();
  /* 11c6a7c9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a7cc ret  */
  ESPCHK(0x11c6a7c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7cd @ 0x11c6a7cd (9 bytes, 3 insns) */
void f_11c6a7cd(void) {
  FTRACE(0x11c6a7cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a7cd call 0x11c64883 */
  push32(0x11c6a7d2u); f_11c64883();
  /* 11c6a7d2 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a7d5 ret  */
  ESPCHK(0x11c6a7cdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d6 @ 0x11c6a7d6 (127 bytes, 48 insns) */
void f_11c6a7d6(void) {
  FTRACE(0x11c6a7d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a7d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6a7da push esi */
  push32((uint32_t)(ESI));
  /* 11c6a7db cmp ecx, dword ptr [0x11c88f60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a7e1 push edi */
  push32((uint32_t)(EDI));
  /* 11c6a7e2 jae 0x11c6a83c */
  if (!C.cf) goto L_11c6a83c;
  /* 11c6a7e4 mov eax, ecx */
  EAX = (ECX);
  /* 11c6a7e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c6a7e9 lea edi, [eax*4 + 0x11c88e60] */
  EDI = ((uint32_t)(EAX*4 + 0x11c88e60));
  /* 11c6a7f0 mov eax, ecx */
  EAX = (ECX);
  /* 11c6a7f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a7f5 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c6a7f8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6a7fa shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c6a7fd add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a7ff test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6a803 je 0x11c6a83c */
  if (C.zf) goto L_11c6a83c;
  /* 11c6a805 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a808 je 0x11c6a83c */
  if (C.zf) goto L_11c6a83c;
  /* 11c6a80a cmp dword ptr [0x11c87840], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c87840))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a811 jne 0x11c6a832 */
  if (!C.zf) goto L_11c6a832;
  /* 11c6a813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a815 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a817 je 0x11c6a829 */
  if (C.zf) goto L_11c6a829;
  /* 11c6a819 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6a81a je 0x11c6a824 */
  if (C.zf) goto L_11c6a824;
  /* 11c6a81c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6a81d jne 0x11c6a832 */
  if (!C.zf) goto L_11c6a832;
  /* 11c6a81f push eax */
  push32((uint32_t)(EAX));
  /* 11c6a820 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c6a822 jmp 0x11c6a82c */
  goto L_11c6a82c;
L_11c6a824:;
  /* 11c6a824 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a825 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11c6a827 jmp 0x11c6a82c */
  goto L_11c6a82c;
L_11c6a829:;
  /* 11c6a829 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a82a push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11c6a82c:;
  /* 11c6a82c call dword ptr [0x11c6e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e02c))), 0x11c6a832u);
L_11c6a832:;
  /* 11c6a832 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6a834 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11c6a838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a83a jmp 0x11c6a852 */
  goto L_11c6a852;
L_11c6a83c:;
  /* 11c6a83c call 0x11c6a7c4 */
  push32(0x11c6a841u); f_11c6a7c4();
  /* 11c6a841 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6a847 call 0x11c6a7cd */
  push32(0x11c6a84cu); f_11c6a7cd();
  /* 11c6a84c and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c6a84f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c6a852:;
  /* 11c6a852 pop edi */
  EDI = (pop32());
  /* 11c6a853 pop esi */
  ESI = (pop32());
  /* 11c6a854 ret  */
  ESPCHK(0x11c6a7d6u, _esp0);
  ESP += 4; return;
}

