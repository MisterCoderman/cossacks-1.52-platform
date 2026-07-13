#include "recomp.h"

/* FUN_100080fd @ 0x11b180fd (103 bytes, 49 insns) */
void f_11b180fd(void) {
  FTRACE(0x11b180fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b180fd push edi */
  push32((uint32_t)(EDI));
  /* 11b180fe mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b18102 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b18104 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b18106 jne 0x11b1810c */
  if (!C.zf) goto L_11b1810c;
  /* 11b18108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1810a pop edi */
  EDI = (pop32());
  /* 11b1810b ret  */
  ESPCHK(0x11b180fdu, _esp0);
  ESP += 4; return;
L_11b1810c:;
  /* 11b1810c cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1810f lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11b18112 je 0x11b1811e */
  if (C.zf) goto L_11b1811e;
L_11b18114:;
  /* 11b18114 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b18116 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b18117 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1811a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b1811c jne 0x11b18114 */
  if (!C.zf) goto L_11b18114;
L_11b1811e:;
  /* 11b1811e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1811f push ebp */
  push32((uint32_t)(EBP));
  /* 11b18120 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11b18127 push esi */
  push32((uint32_t)(ESI));
  /* 11b18128 push eax */
  push32((uint32_t)(EAX));
  /* 11b18129 call 0x11b14de1 */
  push32(0x11b1812eu); f_11b14de1();
  /* 11b1812e mov esi, eax */
  ESI = (EAX);
  /* 11b18130 pop ecx */
  ECX = (pop32());
  /* 11b18131 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b18133 mov ebp, esi */
  EBP = (ESI);
  /* 11b18135 jne 0x11b1813f */
  if (!C.zf) goto L_11b1813f;
  /* 11b18137 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b18139 call 0x11b13701 */
  push32(0x11b1813eu); f_11b13701();
  /* 11b1813e pop ecx */
  ECX = (pop32());
L_11b1813f:;
  /* 11b1813f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11b18141 mov ebx, edi */
  EBX = (EDI);
L_11b18143:;
  /* 11b18143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18145 je 0x11b1815a */
  if (C.zf) goto L_11b1815a;
  /* 11b18147 push eax */
  push32((uint32_t)(EAX));
  /* 11b18148 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1814b call 0x11b185b0 */
  push32(0x11b18150u); f_11b185b0();
  /* 11b18150 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b18152 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11b18154 pop ecx */
  ECX = (pop32());
  /* 11b18155 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18158 jmp 0x11b18143 */
  goto L_11b18143;
L_11b1815a:;
  /* 11b1815a and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b1815d mov eax, ebp */
  EAX = (EBP);
  /* 11b1815f pop esi */
  ESI = (pop32());
  /* 11b18160 pop ebp */
  EBP = (pop32());
  /* 11b18161 pop ebx */
  EBX = (pop32());
  /* 11b18162 pop edi */
  EDI = (pop32());
  /* 11b18163 ret  */
  ESPCHK(0x11b180fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x11b18170 (62 bytes, 35 insns) */
void f_11b18170(void) {
  FTRACE(0x11b18170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b18170 push ebp */
  push32((uint32_t)(EBP));
  /* 11b18171 mov ebp, esp */
  EBP = (ESP);
  /* 11b18173 push esi */
  push32((uint32_t)(ESI));
  /* 11b18174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18176 push eax */
  push32((uint32_t)(EAX));
  /* 11b18177 push eax */
  push32((uint32_t)(EAX));
  /* 11b18178 push eax */
  push32((uint32_t)(EAX));
  /* 11b18179 push eax */
  push32((uint32_t)(EAX));
  /* 11b1817a push eax */
  push32((uint32_t)(EAX));
  /* 11b1817b push eax */
  push32((uint32_t)(EAX));
  /* 11b1817c push eax */
  push32((uint32_t)(EAX));
  /* 11b1817d push eax */
  push32((uint32_t)(EAX));
  /* 11b1817e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b18181 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b18184:;
  /* 11b18184 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b18186 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b18188 je 0x11b18191 */
  if (C.zf) goto L_11b18191;
  /* 11b1818a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b1818b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b1818b");
  /* 11b1818f jmp 0x11b18184 */
  goto L_11b18184;
L_11b18191:;
  /* 11b18191 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b18194 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b18197 nop  */
  /* nop */
L_11b18198:;
  /* 11b18198 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b18199 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b1819b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b1819d je 0x11b181a6 */
  if (C.zf) goto L_11b181a6;
  /* 11b1819f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b181a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b181a0");
  /* 11b181a4 jae 0x11b18198 */
  if (!C.cf) goto L_11b18198;
L_11b181a6:;
  /* 11b181a6 mov eax, ecx */
  EAX = (ECX);
  /* 11b181a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b181ab pop esi */
  ESI = (pop32());
  /* 11b181ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b181ad ret  */
  ESPCHK(0x11b18170u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x11b181b0 (58 bytes, 32 insns) */
void f_11b181b0(void) {
  FTRACE(0x11b181b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b181b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b181b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b181b3 push esi */
  push32((uint32_t)(ESI));
  /* 11b181b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b181b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b181b7 push eax */
  push32((uint32_t)(EAX));
  /* 11b181b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b181b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b181ba push eax */
  push32((uint32_t)(EAX));
  /* 11b181bb push eax */
  push32((uint32_t)(EAX));
  /* 11b181bc push eax */
  push32((uint32_t)(EAX));
  /* 11b181bd push eax */
  push32((uint32_t)(EAX));
  /* 11b181be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b181c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b181c4:;
  /* 11b181c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b181c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b181c8 je 0x11b181d1 */
  if (C.zf) goto L_11b181d1;
  /* 11b181ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b181cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11b181cb");
  /* 11b181cf jmp 0x11b181c4 */
  goto L_11b181c4;
L_11b181d1:;
  /* 11b181d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11b181d4:;
  /* 11b181d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b181d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b181d8 je 0x11b181e4 */
  if (C.zf) goto L_11b181e4;
  /* 11b181da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b181db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11b181db");
  /* 11b181df jae 0x11b181d4 */
  if (!C.cf) goto L_11b181d4;
  /* 11b181e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11b181e4:;
  /* 11b181e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b181e7 pop esi */
  ESI = (pop32());
  /* 11b181e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b181e9 ret  */
  ESPCHK(0x11b181b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081ea @ 0x11b181ea (781 bytes, 277 insns) */
void f_11b181ea(void) {
  FTRACE(0x11b181eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b181ea push ebp */
  push32((uint32_t)(EBP));
  /* 11b181eb mov ebp, esp */
  EBP = (ESP);
  /* 11b181ed push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b181ef push 0x11b195e8 */
  push32((uint32_t)(0x11b195e8u));
  /* 11b181f4 push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b181f9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b181ff push eax */
  push32((uint32_t)(EAX));
  /* 11b18200 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b18207 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1820a push ebx */
  push32((uint32_t)(EBX));
  /* 11b1820b push esi */
  push32((uint32_t)(ESI));
  /* 11b1820c push edi */
  push32((uint32_t)(EDI));
  /* 11b1820d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b18210 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b18212 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18214 jne 0x11b18224 */
  if (!C.zf) goto L_11b18224;
  /* 11b18216 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b18219 call 0x11b14de1 */
  push32(0x11b1821eu); f_11b14de1();
  /* 11b1821e pop ecx */
  ECX = (pop32());
  /* 11b1821f jmp 0x11b1850a */
  jmp_ind(0x11b1850au); return;
L_11b18224:;
  /* 11b18224 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b18227 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18229 jne 0x11b18237 */
  if (!C.zf) goto L_11b18237;
  /* 11b1822b push ebx */
  push32((uint32_t)(EBX));
  /* 11b1822c call 0x11b14736 */
  push32(0x11b18231u); f_11b14736();
  /* 11b18231 pop ecx */
  ECX = (pop32());
  /* 11b18232 jmp 0x11b18508 */
  jmp_ind(0x11b18508u); return;
L_11b18237:;
  /* 11b18237 mov eax, dword ptr [0x11b1f06c] */
  EAX = (r32((uint32_t)(0x11b1f06c)));
  /* 11b1823c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1823f jne 0x11b1837e */
  if (!C.zf) goto L_11b1837e;
L_11b18245:;
  /* 11b18245 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11b18248 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1824b ja 0x11b18342 */
  if ((!C.cf&&!C.zf)) goto L_11b18342;
  /* 11b18251 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b18253 call 0x11b146c0 */
  push32(0x11b18258u); f_11b146c0();
  /* 11b18258 pop ecx */
  ECX = (pop32());
  /* 11b18259 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b1825c push ebx */
  push32((uint32_t)(EBX));
  /* 11b1825d call 0x11b15be7 */
  push32(0x11b18262u); f_11b15be7();
  /* 11b18262 pop ecx */
  ECX = (pop32());
  /* 11b18263 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b18266 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18268 je 0x11b18312 */
  if (C.zf) goto L_11b18312;
  /* 11b1826e cmp esi, dword ptr [0x11b1ee44] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1ee44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18274 ja 0x11b182c2 */
  if ((!C.cf&&!C.zf)) goto L_11b182c2;
  /* 11b18276 push esi */
  push32((uint32_t)(ESI));
  /* 11b18277 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18278 push eax */
  push32((uint32_t)(EAX));
  /* 11b18279 call 0x11b163f0 */
  push32(0x11b1827eu); f_11b163f0();
  /* 11b1827e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18283 je 0x11b1828a */
  if (C.zf) goto L_11b1828a;
  /* 11b18285 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11b18288 jmp 0x11b182c2 */
  goto L_11b182c2;
L_11b1828a:;
  /* 11b1828a push esi */
  push32((uint32_t)(ESI));
  /* 11b1828b call 0x11b15f3b */
  push32(0x11b18290u); f_11b15f3b();
  /* 11b18290 pop ecx */
  ECX = (pop32());
  /* 11b18291 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b18294 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18296 je 0x11b182c2 */
  if (C.zf) goto L_11b182c2;
  /* 11b18298 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11b1829b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b1829c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b1829f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b182a1 jb 0x11b182a5 */
  if (C.cf) goto L_11b182a5;
  /* 11b182a3 mov eax, esi */
  EAX = (ESI);
L_11b182a5:;
  /* 11b182a5 push eax */
  push32((uint32_t)(EAX));
  /* 11b182a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b182a7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b182aa call 0x11b15480 */
  push32(0x11b182afu); f_11b15480();
  /* 11b182af push ebx */
  push32((uint32_t)(EBX));
  /* 11b182b0 call 0x11b15be7 */
  push32(0x11b182b5u); f_11b15be7();
  /* 11b182b5 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b182b8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b182b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b182ba call 0x11b15c12 */
  push32(0x11b182bfu); f_11b15c12();
  /* 11b182bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b182c2:;
  /* 11b182c2 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b182c5 jne 0x11b18312 */
  if (!C.zf) goto L_11b18312;
  /* 11b182c7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b182c9 jne 0x11b182d1 */
  if (!C.zf) goto L_11b182d1;
  /* 11b182cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b182cd pop esi */
  ESI = (pop32());
  /* 11b182ce mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11b182d1:;
  /* 11b182d1 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b182d4 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b182d7 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b182da push esi */
  push32((uint32_t)(ESI));
  /* 11b182db push edi */
  push32((uint32_t)(EDI));
  /* 11b182dc push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b182e2 call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b182e8u);
  /* 11b182e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b182eb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b182ed je 0x11b18312 */
  if (C.zf) goto L_11b18312;
  /* 11b182ef mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11b182f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b182f3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b182f6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b182f8 jb 0x11b182fc */
  if (C.cf) goto L_11b182fc;
  /* 11b182fa mov eax, esi */
  EAX = (ESI);
L_11b182fc:;
  /* 11b182fc push eax */
  push32((uint32_t)(EAX));
  /* 11b182fd push ebx */
  push32((uint32_t)(EBX));
  /* 11b182fe push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b18301 call 0x11b15480 */
  push32(0x11b18306u); f_11b15480();
  /* 11b18306 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18307 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11b1830a call 0x11b15c12 */
  push32(0x11b1830fu); f_11b15c12();
  /* 11b1830f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b18312:;
  /* 11b18312 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b18316 call 0x11b18375 */
  push32(0x11b1831bu); f_11b18375();
  /* 11b1831b cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1831e jne 0x11b18342 */
  if (!C.zf) goto L_11b18342;
  /* 11b18320 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18322 jne 0x11b18327 */
  if (!C.zf) goto L_11b18327;
  /* 11b18324 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b18326 pop esi */
  ESI = (pop32());
L_11b18327:;
  /* 11b18327 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1832a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b1832d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b18330 push esi */
  push32((uint32_t)(ESI));
  /* 11b18331 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18332 push edi */
  push32((uint32_t)(EDI));
  /* 11b18333 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b18339 call dword ptr [0x11b1903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1903c))), 0x11b1833fu);
  /* 11b1833f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b18342:;
  /* 11b18342 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b18345 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18347 jne 0x11b1850a */
  if (!C.zf) { jmp_ind(0x11b1850au); return; }
  /* 11b1834d cmp dword ptr [0x11b1ed6c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed6c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18353 je 0x11b1850a */
  if (C.zf) { jmp_ind(0x11b1850au); return; }
  /* 11b18359 push esi */
  push32((uint32_t)(ESI));
  /* 11b1835a call 0x11b16f3e */
  push32(0x11b1835fu); f_11b16f3e();
  /* 11b1835f pop ecx */
  ECX = (pop32());
  /* 11b18360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18362 jne 0x11b18245 */
  if (!C.zf) goto L_11b18245;
  /* 11b18368 jmp 0x11b18508 */
  jmp_ind(0x11b18508u); return;
  /* 11b1836d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b18370 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b18373 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b18375 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b18377 call 0x11b14721 */
  push32(0x11b1837cu); f_11b14721();
  /* 11b1837c pop ecx */
  ECX = (pop32());
  /* 11b1837d ret  */
  ESPCHK(0x11b181eau, _esp0);
  ESP += 4; return;
L_11b1837e:;
  /* 11b1837e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18381 jne 0x11b184ce */
  if (!C.zf) goto L_11b184ce;
  /* 11b18387 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1838a ja 0x11b1839e */
  if ((!C.cf&&!C.zf)) goto L_11b1839e;
  /* 11b1838c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1838e jbe 0x11b18398 */
  if ((C.cf||C.zf)) goto L_11b18398;
  /* 11b18390 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18393 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b18396 jmp 0x11b1839b */
  goto L_11b1839b;
L_11b18398:;
  /* 11b18398 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b1839a pop esi */
  ESI = (pop32());
L_11b1839b:;
  /* 11b1839b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11b1839e:;
  /* 11b1839e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11b183a1 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b183a4 ja 0x11b1849d */
  if ((!C.cf&&!C.zf)) goto L_11b1849d;
  /* 11b183aa push 9 */
  push32((uint32_t)(0x9u));
  /* 11b183ac call 0x11b146c0 */
  push32(0x11b183b1u); f_11b146c0();
  /* 11b183b1 pop ecx */
  ECX = (pop32());
  /* 11b183b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b183b9 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11b183bc push eax */
  push32((uint32_t)(EAX));
  /* 11b183bd lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b183c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b183c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11b183c2 call 0x11b16942 */
  push32(0x11b183c7u); f_11b16942();
  /* 11b183c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b183ca mov edi, eax */
  EDI = (EAX);
  /* 11b183cc mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11b183cf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b183d1 je 0x11b18481 */
  if (C.zf) goto L_11b18481;
  /* 11b183d7 cmp esi, dword ptr [0x11b1d9a4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1d9a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b183dd jae 0x11b1843b */
  if (!C.cf) goto L_11b1843b;
  /* 11b183df mov ebx, esi */
  EBX = (ESI);
  /* 11b183e1 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11b183e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b183e5 push edi */
  push32((uint32_t)(EDI));
  /* 11b183e6 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11b183e9 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11b183ec call 0x11b16d0a */
  push32(0x11b183f1u); f_11b16d0a();
  /* 11b183f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b183f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b183f6 je 0x11b18400 */
  if (C.zf) goto L_11b18400;
  /* 11b183f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b183fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b183fe jmp 0x11b18438 */
  goto L_11b18438;
L_11b18400:;
  /* 11b18400 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18401 call 0x11b169de */
  push32(0x11b18406u); f_11b169de();
  /* 11b18406 pop ecx */
  ECX = (pop32());
  /* 11b18407 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b1840a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1840c je 0x11b18438 */
  if (C.zf) goto L_11b18438;
  /* 11b1840e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b18411 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b18414 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11b18417 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18419 jb 0x11b1841d */
  if (C.cf) goto L_11b1841d;
  /* 11b1841b mov eax, esi */
  EAX = (ESI);
L_11b1841d:;
  /* 11b1841d push eax */
  push32((uint32_t)(EAX));
  /* 11b1841e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b18421 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b18424 call 0x11b15480 */
  push32(0x11b18429u); f_11b15480();
  /* 11b18429 push edi */
  push32((uint32_t)(EDI));
  /* 11b1842a push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11b1842d push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11b18430 call 0x11b16999 */
  push32(0x11b18435u); f_11b16999();
  /* 11b18435 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b18438:;
  /* 11b18438 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b1843b:;
  /* 11b1843b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1843f jne 0x11b18494 */
  if (!C.zf) goto L_11b18494;
  /* 11b18441 push esi */
  push32((uint32_t)(ESI));
  /* 11b18442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b18444 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1844a call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b18450u);
  /* 11b18450 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b18453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18455 je 0x11b18494 */
  if (C.zf) goto L_11b18494;
  /* 11b18457 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b1845a shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b1845d mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11b18460 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18462 jb 0x11b18466 */
  if (C.cf) goto L_11b18466;
  /* 11b18464 mov eax, esi */
  EAX = (ESI);
L_11b18466:;
  /* 11b18466 push eax */
  push32((uint32_t)(EAX));
  /* 11b18467 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18468 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b1846b call 0x11b15480 */
  push32(0x11b18470u); f_11b15480();
  /* 11b18470 push edi */
  push32((uint32_t)(EDI));
  /* 11b18471 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11b18474 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11b18477 call 0x11b16999 */
  push32(0x11b1847cu); f_11b16999();
  /* 11b1847c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1847f jmp 0x11b18494 */
  goto L_11b18494;
L_11b18481:;
  /* 11b18481 push esi */
  push32((uint32_t)(ESI));
  /* 11b18482 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18483 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b18485 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1848b call dword ptr [0x11b1903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1903c))), 0x11b18491u);
  /* 11b18491 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b18494:;
  /* 11b18494 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b18498 call 0x11b184c3 */
  push32(0x11b1849du); f_11b184c3();
L_11b1849d:;
  /* 11b1849d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b184a0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b184a2 jne 0x11b1850a */
  if (!C.zf) { jmp_ind(0x11b1850au); return; }
  /* 11b184a4 cmp dword ptr [0x11b1ed6c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed6c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b184aa je 0x11b1850a */
  if (C.zf) { jmp_ind(0x11b1850au); return; }
  /* 11b184ac push esi */
  push32((uint32_t)(ESI));
  /* 11b184ad call 0x11b16f3e */
  push32(0x11b184b2u); f_11b16f3e();
  /* 11b184b2 pop ecx */
  ECX = (pop32());
  /* 11b184b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b184b5 jne 0x11b1839e */
  if (!C.zf) goto L_11b1839e;
  /* 11b184bb jmp 0x11b18508 */
  jmp_ind(0x11b18508u); return;
  /* 11b184bd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b184c0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b184c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b184c5 call 0x11b14721 */
  push32(0x11b184cau); f_11b14721();
  /* 11b184ca pop ecx */
  ECX = (pop32());
  /* 11b184cb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b184cd ret  */
  ESPCHK(0x11b181eau, _esp0);
  ESP += 4; return;
L_11b184ce:;
  /* 11b184ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b184d0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b184d3 ja 0x11b184f1 */
  if ((!C.cf&&!C.zf)) goto L_11b184f1;
  /* 11b184d5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b184d7 jne 0x11b184dc */
  if (!C.zf) goto L_11b184dc;
  /* 11b184d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b184db pop esi */
  ESI = (pop32());
L_11b184dc:;
  /* 11b184dc add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b184df and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b184e2 push esi */
  push32((uint32_t)(ESI));
  /* 11b184e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b184e4 push edi */
  push32((uint32_t)(EDI));
  /* 11b184e5 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b184eb call dword ptr [0x11b1903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1903c))), 0x11b184f1u);
L_11b184f1:;
  /* 11b184f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b184f3 jne 0x11b1850a */
  if (!C.zf) { jmp_ind(0x11b1850au); return; }
}

/* FUN_10008375 @ 0x11b18375 (9 bytes, 4 insns) */
void f_11b18375(void) {
  FTRACE(0x11b18375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b18375 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b18377 call 0x11b14721 */
  push32(0x11b1837cu); f_11b14721();
  /* 11b1837c pop ecx */
  ECX = (pop32());
  /* 11b1837d ret  */
  ESPCHK(0x11b18375u, _esp0);
  ESP += 4; return;
}

/* FUN_100084c3 @ 0x11b184c3 (11 bytes, 5 insns) */
void f_11b184c3(void) {
  FTRACE(0x11b184c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b184c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b184c5 call 0x11b14721 */
  push32(0x11b184cau); f_11b14721();
  /* 11b184ca pop ecx */
  ECX = (pop32());
  /* 11b184cb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b184cd ret  */
  ESPCHK(0x11b184c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008519 @ 0x11b18519 (151 bytes, 62 insns) */
void f_11b18519(void) {
  FTRACE(0x11b18519u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b18519 push ebp */
  push32((uint32_t)(EBP));
  /* 11b1851a mov ebp, esp */
  EBP = (ESP);
  /* 11b1851c cmp dword ptr [0x11b1ee5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18523 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18524 push esi */
  push32((uint32_t)(ESI));
  /* 11b18525 jne 0x11b18536 */
  if (!C.zf) goto L_11b18536;
  /* 11b18527 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b1852a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b1852d call 0x11b159f0 */
  push32(0x11b18532u); f_11b159f0();
  /* 11b18532 pop ecx */
  ECX = (pop32());
  /* 11b18533 pop ecx */
  ECX = (pop32());
  /* 11b18534 jmp 0x11b185ac */
  goto L_11b185ac;
L_11b18536:;
  /* 11b18536 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b18538 call 0x11b146c0 */
  push32(0x11b1853du); f_11b146c0();
  /* 11b1853d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b18540 pop ecx */
  ECX = (pop32());
L_11b18541:;
  /* 11b18541 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11b18545 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11b18548 je 0x11b18594 */
  if (C.zf) goto L_11b18594;
  /* 11b1854a movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b1854d test byte ptr [eax + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))&(0x4u); fl_logic(_r,8); }
  /* 11b18554 je 0x11b18570 */
  if (C.zf) goto L_11b18570;
  /* 11b18556 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b18559 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b1855a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b1855c je 0x11b1857b */
  if (C.zf) goto L_11b1857b;
  /* 11b1855e movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11b18561 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b18564 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b18567 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b18569 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1856c je 0x11b18587 */
  if (C.zf) goto L_11b18587;
  /* 11b1856e jmp 0x11b18578 */
  goto L_11b18578;
L_11b18570:;
  /* 11b18570 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11b18573 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18576 je 0x11b18594 */
  if (C.zf) goto L_11b18594;
L_11b18578:;
  /* 11b18578 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b18579 jmp 0x11b18541 */
  goto L_11b18541;
L_11b1857b:;
  /* 11b1857b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b1857d call 0x11b14721 */
  push32(0x11b18582u); f_11b14721();
  /* 11b18582 pop ecx */
  ECX = (pop32());
  /* 11b18583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18585 jmp 0x11b185ac */
  goto L_11b185ac;
L_11b18587:;
  /* 11b18587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b18589 call 0x11b14721 */
  push32(0x11b1858eu); f_11b14721();
  /* 11b1858e pop ecx */
  ECX = (pop32());
  /* 11b1858f lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11b18592 jmp 0x11b185ac */
  goto L_11b185ac;
L_11b18594:;
  /* 11b18594 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b18596 call 0x11b14721 */
  push32(0x11b1859bu); f_11b14721();
  /* 11b1859b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b1859e pop ecx */
  ECX = (pop32());
  /* 11b1859f movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11b185a2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b185a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b185a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b185a8 not eax */
  EAX = (~(EAX));
  /* 11b185aa and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b185ac:;
  /* 11b185ac pop esi */
  ESI = (pop32());
  /* 11b185ad pop ebx */
  EBX = (pop32());
  /* 11b185ae pop ebp */
  EBP = (pop32());
  /* 11b185af ret  */
  ESPCHK(0x11b18519u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x11b185b0 (43 bytes, 23 insns) */
void f_11b185b0(void) {
  FTRACE(0x11b185b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b185b0 push esi */
  push32((uint32_t)(ESI));
  /* 11b185b1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b185b5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b185b7 je 0x11b185d7 */
  if (C.zf) goto L_11b185d7;
  /* 11b185b9 push esi */
  push32((uint32_t)(ESI));
  /* 11b185ba call 0x11b15010 */
  push32(0x11b185bfu); f_11b15010();
  /* 11b185bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b185c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b185c1 call 0x11b14de1 */
  push32(0x11b185c6u); f_11b14de1();
  /* 11b185c6 pop ecx */
  ECX = (pop32());
  /* 11b185c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b185c9 pop ecx */
  ECX = (pop32());
  /* 11b185ca je 0x11b185d7 */
  if (C.zf) goto L_11b185d7;
  /* 11b185cc push esi */
  push32((uint32_t)(ESI));
  /* 11b185cd push eax */
  push32((uint32_t)(EAX));
  /* 11b185ce call 0x11b14f20 */
  push32(0x11b185d3u); f_11b14f20();
  /* 11b185d3 pop ecx */
  ECX = (pop32());
  /* 11b185d4 pop ecx */
  ECX = (pop32());
  /* 11b185d5 pop esi */
  ESI = (pop32());
  /* 11b185d6 ret  */
  ESPCHK(0x11b185b0u, _esp0);
  ESP += 4; return;
L_11b185d7:;
  /* 11b185d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b185d9 pop esi */
  ESI = (pop32());
  /* 11b185da ret  */
  ESPCHK(0x11b185b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x11b185e0 (208 bytes, 85 insns) */
void f_11b185e0(void) {
  FTRACE(0x11b185e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b185e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b185e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b185e3 push edi */
  push32((uint32_t)(EDI));
  /* 11b185e4 push esi */
  push32((uint32_t)(ESI));
  /* 11b185e5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b185e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b185e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b185ec lea eax, [0x11b1ed70] */
  EAX = ((uint32_t)(0x11b1ed70));
  /* 11b185f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b185f6 jne 0x11b18633 */
  if (!C.zf) goto L_11b18633;
  /* 11b185f8 mov al, 0xff */
  AL = (0xffu);
  /* 11b185fa mov edi, edi */
  EDI = (EDI);
L_11b185fc:;
  /* 11b185fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b185fe je 0x11b1862e */
  if (C.zf) goto L_11b1862e;
  /* 11b18600 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b18602 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b18603 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11b18605 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b18606 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18608 je 0x11b185fc */
  if (C.zf) goto L_11b185fc;
  /* 11b1860a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b1860c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1860e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b18610 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b18613 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b18615 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b18617 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11b18619 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b1861b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1861d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b1861f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b18622 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b18624 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b18626 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18628 je 0x11b185fc */
  if (C.zf) goto L_11b185fc;
  /* 11b1862a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b1862c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11b1862e:;
  /* 11b1862e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11b18631 jmp 0x11b186ab */
  goto L_11b186ab;
L_11b18633:;
  /* 11b18633 lock inc dword ptr [0x11b1ee28] */
  x86_unimpl("lock inc @ 0x11b18633");
  /* 11b1863a cmp dword ptr [0x11b1ee24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18641 jg 0x11b18647 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b18647;
  /* 11b18643 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b18645 jmp 0x11b1865c */
  goto L_11b1865c;
L_11b18647:;
  /* 11b18647 lock dec dword ptr [0x11b1ee28] */
  x86_unimpl("lock dec @ 0x11b18647");
  /* 11b1864e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b18650 call 0x11b146c0 */
  push32(0x11b18655u); f_11b146c0();
  /* 11b18655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11b1865c:;
  /* 11b1865c mov eax, 0xff */
  EAX = (0xffu);
  /* 11b18661 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b18663 nop  */
  /* nop */
L_11b18664:;
  /* 11b18664 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b18666 je 0x11b1868f */
  if (C.zf) goto L_11b1868f;
  /* 11b18668 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b1866a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b1866b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b1866d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b1866e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18670 je 0x11b18664 */
  if (C.zf) goto L_11b18664;
  /* 11b18672 push eax */
  push32((uint32_t)(EAX));
  /* 11b18673 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18674 call 0x11b188a5 */
  push32(0x11b18679u); f_11b188a5();
  /* 11b18679 mov ebx, eax */
  EBX = (EAX);
  /* 11b1867b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1867e call 0x11b188a5 */
  push32(0x11b18683u); f_11b188a5();
  /* 11b18683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18686 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18688 je 0x11b18664 */
  if (C.zf) goto L_11b18664;
  /* 11b1868a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1868c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b1868f:;
  /* 11b1868f mov ebx, eax */
  EBX = (EAX);
  /* 11b18691 pop eax */
  EAX = (pop32());
  /* 11b18692 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18694 jne 0x11b1869f */
  if (!C.zf) goto L_11b1869f;
  /* 11b18696 lock dec dword ptr [0x11b1ee28] */
  x86_unimpl("lock dec @ 0x11b18696");
  /* 11b1869d jmp 0x11b186a9 */
  goto L_11b186a9;
L_11b1869f:;
  /* 11b1869f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b186a1 call 0x11b14721 */
  push32(0x11b186a6u); f_11b14721();
  /* 11b186a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b186a9:;
  /* 11b186a9 mov eax, ebx */
  EAX = (EBX);
L_11b186ab:;
  /* 11b186ab pop ebx */
  EBX = (pop32());
  /* 11b186ac pop esi */
  ESI = (pop32());
  /* 11b186ad pop edi */
  EDI = (pop32());
  /* 11b186ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b186af ret  */
  ESPCHK(0x11b185e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086b0 @ 0x11b186b0 (257 bytes, 103 insns) */
void f_11b186b0(void) {
  FTRACE(0x11b186b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b186b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b186b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b186b3 push edi */
  push32((uint32_t)(EDI));
  /* 11b186b4 push esi */
  push32((uint32_t)(ESI));
  /* 11b186b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b186b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b186b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b186bb je 0x11b187aa */
  if (C.zf) goto L_11b187aa;
  /* 11b186c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b186c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b186c7 lea eax, [0x11b1ed70] */
  EAX = ((uint32_t)(0x11b1ed70));
  /* 11b186cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b186d1 jne 0x11b18721 */
  if (!C.zf) goto L_11b18721;
  /* 11b186d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11b186d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11b186d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11b186d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b186dc:;
  /* 11b186dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11b186de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b186e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b186e2 je 0x11b18705 */
  if (C.zf) goto L_11b18705;
  /* 11b186e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b186e6 je 0x11b18705 */
  if (C.zf) goto L_11b18705;
  /* 11b186e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b186e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b186ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b186ec jb 0x11b186f4 */
  if (C.cf) goto L_11b186f4;
  /* 11b186ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b186f0 ja 0x11b186f4 */
  if ((!C.cf&&!C.zf)) goto L_11b186f4;
  /* 11b186f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11b186f4:;
  /* 11b186f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b186f6 jb 0x11b186fe */
  if (C.cf) goto L_11b186fe;
  /* 11b186f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b186fa ja 0x11b186fe */
  if ((!C.cf&&!C.zf)) goto L_11b186fe;
  /* 11b186fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11b186fe:;
  /* 11b186fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18700 jne 0x11b1870f */
  if (!C.zf) goto L_11b1870f;
  /* 11b18702 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b18703 jne 0x11b186dc */
  if (!C.zf) goto L_11b186dc;
L_11b18705:;
  /* 11b18705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b18707 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b18709 je 0x11b187aa */
  if (C.zf) goto L_11b187aa;
L_11b1870f:;
  /* 11b1870f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b18714 jb 0x11b187aa */
  if (C.cf) goto L_11b187aa;
  /* 11b1871a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b1871c jmp 0x11b187aa */
  goto L_11b187aa;
L_11b18721:;
  /* 11b18721 lock inc dword ptr [0x11b1ee28] */
  x86_unimpl("lock inc @ 0x11b18721");
  /* 11b18728 cmp dword ptr [0x11b1ee24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1872f jg 0x11b18735 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b18735;
  /* 11b18731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b18733 jmp 0x11b1874e */
  goto L_11b1874e;
L_11b18735:;
  /* 11b18735 lock dec dword ptr [0x11b1ee28] */
  x86_unimpl("lock dec @ 0x11b18735");
  /* 11b1873c mov ebx, ecx */
  EBX = (ECX);
  /* 11b1873e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b18740 call 0x11b146c0 */
  push32(0x11b18745u); f_11b146c0();
  /* 11b18745 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11b1874c mov ecx, ebx */
  ECX = (EBX);
L_11b1874e:;
  /* 11b1874e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18750 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b18752 mov edi, edi */
  EDI = (EDI);
L_11b18754:;
  /* 11b18754 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b18756 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18758 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b1875a je 0x11b1877f */
  if (C.zf) goto L_11b1877f;
  /* 11b1875c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b1875e je 0x11b1877f */
  if (C.zf) goto L_11b1877f;
  /* 11b18760 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b18761 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b18762 push ecx */
  push32((uint32_t)(ECX));
  /* 11b18763 push eax */
  push32((uint32_t)(EAX));
  /* 11b18764 push ebx */
  push32((uint32_t)(EBX));
  /* 11b18765 call 0x11b188a5 */
  push32(0x11b1876au); f_11b188a5();
  /* 11b1876a mov ebx, eax */
  EBX = (EAX);
  /* 11b1876c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1876f call 0x11b188a5 */
  push32(0x11b18774u); f_11b188a5();
  /* 11b18774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18777 pop ecx */
  ECX = (pop32());
  /* 11b18778 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1877a jne 0x11b18785 */
  if (!C.zf) goto L_11b18785;
  /* 11b1877c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b1877d jne 0x11b18754 */
  if (!C.zf) goto L_11b18754;
L_11b1877f:;
  /* 11b1877f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b18781 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18783 je 0x11b1878e */
  if (C.zf) goto L_11b1878e;
L_11b18785:;
  /* 11b18785 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11b1878a jb 0x11b1878e */
  if (C.cf) goto L_11b1878e;
  /* 11b1878c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11b1878e:;
  /* 11b1878e pop eax */
  EAX = (pop32());
  /* 11b1878f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b18791 jne 0x11b1879c */
  if (!C.zf) goto L_11b1879c;
  /* 11b18793 lock dec dword ptr [0x11b1ee28] */
  x86_unimpl("lock dec @ 0x11b18793");
  /* 11b1879a jmp 0x11b187aa */
  goto L_11b187aa;
L_11b1879c:;
  /* 11b1879c mov ebx, ecx */
  EBX = (ECX);
  /* 11b1879e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b187a0 call 0x11b14721 */
  push32(0x11b187a5u); f_11b14721();
  /* 11b187a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b187a8 mov ecx, ebx */
  ECX = (EBX);
L_11b187aa:;
  /* 11b187aa mov eax, ecx */
  EAX = (ECX);
  /* 11b187ac pop ebx */
  EBX = (pop32());
  /* 11b187ad pop esi */
  ESI = (pop32());
  /* 11b187ae pop edi */
  EDI = (pop32());
  /* 11b187af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b187b0 ret  */
  ESPCHK(0x11b186b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a5 @ 0x11b188a5 (203 bytes, 78 insns) */
void f_11b188a5(void) {
  FTRACE(0x11b188a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b188a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b188a6 mov ebp, esp */
  EBP = (ESP);
  /* 11b188a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b188a9 cmp dword ptr [0x11b1ed78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b188b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b188b1 push esi */
  push32((uint32_t)(ESI));
  /* 11b188b2 push edi */
  push32((uint32_t)(EDI));
  /* 11b188b3 jne 0x11b188d2 */
  if (!C.zf) goto L_11b188d2;
  /* 11b188b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b188b8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b188bb jl 0x11b1896b */
  if ((C.sf!=C.of)) goto L_11b1896b;
  /* 11b188c1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b188c4 jg 0x11b1896b */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1896b;
  /* 11b188ca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b188cd jmp 0x11b1896b */
  goto L_11b1896b;
L_11b188d2:;
  /* 11b188d2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b188d5 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11b188da push 1 */
  push32((uint32_t)(0x1u));
  /* 11b188dc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b188de pop esi */
  ESI = (pop32());
  /* 11b188df jge 0x11b18906 */
  if ((C.sf==C.of)) goto L_11b18906;
  /* 11b188e1 cmp dword ptr [0x11b1dd34], esi */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b188e7 jle 0x11b188f4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b188f4;
  /* 11b188e9 push esi */
  push32((uint32_t)(ESI));
  /* 11b188ea push ebx */
  push32((uint32_t)(EBX));
  /* 11b188eb call 0x11b177fd */
  push32(0x11b188f0u); f_11b177fd();
  /* 11b188f0 pop ecx */
  ECX = (pop32());
  /* 11b188f1 pop ecx */
  ECX = (pop32());
  /* 11b188f2 jmp 0x11b188fe */
  goto L_11b188fe;
L_11b188f4:;
  /* 11b188f4 mov eax, dword ptr [0x11b1db28] */
  EAX = (r32((uint32_t)(0x11b1db28)));
  /* 11b188f9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11b188fc and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11b188fe:;
  /* 11b188fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18900 jne 0x11b18906 */
  if (!C.zf) goto L_11b18906;
L_11b18902:;
  /* 11b18902 mov eax, ebx */
  EAX = (EBX);
  /* 11b18904 jmp 0x11b1896b */
  goto L_11b1896b;
L_11b18906:;
  /* 11b18906 mov edx, dword ptr [0x11b1db28] */
  EDX = (r32((uint32_t)(0x11b1db28)));
  /* 11b1890c mov eax, ebx */
  EAX = (EBX);
  /* 11b1890e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b18911 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11b18914 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b18919 je 0x11b1892a */
  if (C.zf) goto L_11b1892a;
  /* 11b1891b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11b1891f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b18921 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11b18924 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11b18927 pop eax */
  EAX = (pop32());
  /* 11b18928 jmp 0x11b18933 */
  goto L_11b18933;
L_11b1892a:;
  /* 11b1892a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11b1892e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11b18931 mov eax, esi */
  EAX = (ESI);
L_11b18933:;
  /* 11b18933 push esi */
  push32((uint32_t)(ESI));
  /* 11b18934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b18936 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b18939 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b1893b push ecx */
  push32((uint32_t)(ECX));
  /* 11b1893c push eax */
  push32((uint32_t)(EAX));
  /* 11b1893d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b18940 push eax */
  push32((uint32_t)(EAX));
  /* 11b18941 push edi */
  push32((uint32_t)(EDI));
  /* 11b18942 push dword ptr [0x11b1ed78] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed78))));
  /* 11b18948 call 0x11b17321 */
  push32(0x11b1894du); f_11b17321();
  /* 11b1894d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18952 je 0x11b18902 */
  if (C.zf) goto L_11b18902;
  /* 11b18954 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18956 jne 0x11b1895e */
  if (!C.zf) goto L_11b1895e;
  /* 11b18958 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b1895c jmp 0x11b1896b */
  goto L_11b1896b;
L_11b1895e:;
  /* 11b1895e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11b18962 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b18966 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b18969 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11b1896b:;
  /* 11b1896b pop edi */
  EDI = (pop32());
  /* 11b1896c pop esi */
  ESI = (pop32());
  /* 11b1896d pop ebx */
  EBX = (pop32());
  /* 11b1896e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b1896f ret  */
  ESPCHK(0x11b188a5u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11b18970 (6 bytes, 1 insns) */
void f_11b18970(void) {
  FTRACE(0x11b18970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b18970 jmp dword ptr [0x11b19038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b19038)))); return;
}

