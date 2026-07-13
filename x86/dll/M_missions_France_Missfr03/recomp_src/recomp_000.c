#include "recomp.h"

/* OnInit @ 0x10621005 (5 bytes, 1 insns) */
void f_10621005(void) {
  FTRACE(0x10621005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621005 jmp 0x10621090 */
  f_10621090(); return;
}

/* thunk_FUN_10001520 @ 0x1062100a (5 bytes, 1 insns) */
void f_1062100a(void) {
  FTRACE(0x1062100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062100a jmp 0x10621520 */
  f_10621520(); return;
}

/* thunk_FUN_10001030 @ 0x1062100f (5 bytes, 1 insns) */
void f_1062100f(void) {
  FTRACE(0x1062100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1062100f jmp 0x10621030 */
  f_10621030(); return;
}

/* ProcessScenary @ 0x10621014 (5 bytes, 1 insns) */
void f_10621014(void) {
  FTRACE(0x10621014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621014 jmp 0x10621150 */
  f_10621150(); return;
}

/* FUN_10001030 @ 0x10621030 (67 bytes, 26 insns) */
void f_10621030(void) {
  FTRACE(0x10621030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621030 push ebp */
  push32((uint32_t)(EBP));
  /* 10621031 mov ebp, esp */
  EBP = (ESP);
  /* 10621033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10621036 push ebx */
  push32((uint32_t)(EBX));
  /* 10621037 push esi */
  push32((uint32_t)(ESI));
  /* 10621038 push edi */
  push32((uint32_t)(EDI));
  /* 10621039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1062103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10621041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10621046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10621048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621052 je 0x10621056 */
  if (C.zf) goto L_10621056;
  /* 10621054 jmp 0x1062105b */
  goto L_1062105b;
L_10621056:;
  /* 10621056 call 0x10621005 */
  push32(0x1062105bu); f_10621005();
L_1062105b:;
  /* 1062105b mov eax, 1 */
  EAX = (0x1u);
  /* 10621060 pop edi */
  EDI = (pop32());
  /* 10621061 pop esi */
  ESI = (pop32());
  /* 10621062 pop ebx */
  EBX = (pop32());
  /* 10621063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621068 call 0x106215d0 */
  push32(0x1062106du); f_106215d0();
  /* 1062106d mov esp, ebp */
  ESP = (EBP);
  /* 1062106f pop ebp */
  EBP = (pop32());
  /* 10621070 ret 0xc */
  ESPCHK(0x10621030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10621090 (144 bytes, 47 insns) */
void f_10621090(void) {
  FTRACE(0x10621090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621090 push ebp */
  push32((uint32_t)(EBP));
  /* 10621091 mov ebp, esp */
  EBP = (ESP);
  /* 10621093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10621096 push ebx */
  push32((uint32_t)(EBX));
  /* 10621097 push esi */
  push32((uint32_t)(ESI));
  /* 10621098 push edi */
  push32((uint32_t)(EDI));
  /* 10621099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1062109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106210a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106210a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106210a8 mov esi, esp */
  ESI = (ESP);
  /* 106210aa push 0x10649040 */
  push32((uint32_t)(0x10649040u));
  /* 106210af push 0x1064e3e8 */
  push32((uint32_t)(0x1064e3e8u));
  /* 106210b4 call dword ptr [0x106503d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503d8))), 0x106210bau);
  /* 106210ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106210bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106210bf call 0x106215d0 */
  push32(0x106210c4u); f_106215d0();
  /* 106210c4 mov esi, esp */
  ESI = (ESP);
  /* 106210c6 push 0x10649028 */
  push32((uint32_t)(0x10649028u));
  /* 106210cb push 0x1064e3e0 */
  push32((uint32_t)(0x1064e3e0u));
  /* 106210d0 call dword ptr [0x106503d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503d8))), 0x106210d6u);
  /* 106210d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106210d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106210db call 0x106215d0 */
  push32(0x106210e0u); f_106215d0();
  /* 106210e0 mov esi, esp */
  ESI = (ESP);
  /* 106210e2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106210e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106210e6 call dword ptr [0x106503dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503dc))), 0x106210ecu);
  /* 106210ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106210ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106210f1 call 0x106215d0 */
  push32(0x106210f6u); f_106215d0();
  /* 106210f6 mov esi, esp */
  ESI = (ESP);
  /* 106210f8 push 0x1064901c */
  push32((uint32_t)(0x1064901cu));
  /* 106210fd push 1 */
  push32((uint32_t)(0x1u));
  /* 106210ff call dword ptr [0x106503d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503d4))), 0x10621105u);
  /* 10621105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062110a call 0x106215d0 */
  push32(0x1062110fu); f_106215d0();
  /* 1062110f pop edi */
  EDI = (pop32());
  /* 10621110 pop esi */
  ESI = (pop32());
  /* 10621111 pop ebx */
  EBX = (pop32());
  /* 10621112 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621115 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621117 call 0x106215d0 */
  push32(0x1062111cu); f_106215d0();
  /* 1062111c mov esp, ebp */
  ESP = (EBP);
  /* 1062111e pop ebp */
  EBP = (pop32());
  /* 1062111f ret  */
  ESPCHK(0x10621090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001150 @ 0x10621150 (779 bytes, 240 insns) */
void f_10621150(void) {
  FTRACE(0x10621150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621150 push ebp */
  push32((uint32_t)(EBP));
  /* 10621151 mov ebp, esp */
  EBP = (ESP);
  /* 10621153 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10621156 push ebx */
  push32((uint32_t)(EBX));
  /* 10621157 push esi */
  push32((uint32_t)(ESI));
  /* 10621158 push edi */
  push32((uint32_t)(EDI));
  /* 10621159 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1062115c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10621161 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10621166 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10621168 mov esi, esp */
  ESI = (ESP);
  /* 1062116a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062116c call dword ptr [0x106503b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b4))), 0x10621172u);
  /* 10621172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621177 call 0x106215d0 */
  push32(0x1062117cu); f_106215d0();
  /* 1062117c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621183 je 0x1062132b */
  if (C.zf) goto L_1062132b;
  /* 10621189 mov esi, esp */
  ESI = (ESP);
  /* 1062118b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062118d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062118f call dword ptr [0x106503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b8))), 0x10621195u);
  /* 10621195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621198 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062119a call 0x106215d0 */
  push32(0x1062119fu); f_106215d0();
  /* 1062119f mov esi, esp */
  ESI = (ESP);
  /* 106211a1 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 106211a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 106211a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106211aa call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106211b0u);
  /* 106211b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106211b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106211b5 call 0x106215d0 */
  push32(0x106211bau); f_106215d0();
  /* 106211ba mov esi, esp */
  ESI = (ESP);
  /* 106211bc push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 106211c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106211c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106211c5 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106211cbu);
  /* 106211cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106211ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106211d0 call 0x106215d0 */
  push32(0x106211d5u); f_106215d0();
  /* 106211d5 mov esi, esp */
  ESI = (ESP);
  /* 106211d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106211d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106211db push 0 */
  push32((uint32_t)(0x0u));
  /* 106211dd call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106211e3u);
  /* 106211e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106211e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106211e8 call 0x106215d0 */
  push32(0x106211edu); f_106215d0();
  /* 106211ed mov esi, esp */
  ESI = (ESP);
  /* 106211ef push 0 */
  push32((uint32_t)(0x0u));
  /* 106211f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106211f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106211f5 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106211fbu);
  /* 106211fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106211fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621200 call 0x106215d0 */
  push32(0x10621205u); f_106215d0();
  /* 10621205 mov esi, esp */
  ESI = (ESP);
  /* 10621207 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1062120c push 5 */
  push32((uint32_t)(0x5u));
  /* 1062120e push 0 */
  push32((uint32_t)(0x0u));
  /* 10621210 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x10621216u);
  /* 10621216 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062121b call 0x106215d0 */
  push32(0x10621220u); f_106215d0();
  /* 10621220 mov esi, esp */
  ESI = (ESP);
  /* 10621222 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10621227 push 4 */
  push32((uint32_t)(0x4u));
  /* 10621229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062122b call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x10621231u);
  /* 10621231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621236 call 0x106215d0 */
  push32(0x1062123bu); f_106215d0();
  /* 1062123b mov esi, esp */
  ESI = (ESP);
  /* 1062123d push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10621242 push 3 */
  push32((uint32_t)(0x3u));
  /* 10621244 push 1 */
  push32((uint32_t)(0x1u));
  /* 10621246 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x1062124cu);
  /* 1062124c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062124f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621251 call 0x106215d0 */
  push32(0x10621256u); f_106215d0();
  /* 10621256 mov esi, esp */
  ESI = (ESP);
  /* 10621258 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1062125d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062125f push 1 */
  push32((uint32_t)(0x1u));
  /* 10621261 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x10621267u);
  /* 10621267 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062126a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062126c call 0x106215d0 */
  push32(0x10621271u); f_106215d0();
  /* 10621271 mov esi, esp */
  ESI = (ESP);
  /* 10621273 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10621278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062127a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062127c call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x10621282u);
  /* 10621282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621287 call 0x106215d0 */
  push32(0x1062128cu); f_106215d0();
  /* 1062128c mov esi, esp */
  ESI = (ESP);
  /* 1062128e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10621293 push 2 */
  push32((uint32_t)(0x2u));
  /* 10621295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10621297 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x1062129du);
  /* 1062129d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106212a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106212a2 call 0x106215d0 */
  push32(0x106212a7u); f_106215d0();
  /* 106212a7 mov esi, esp */
  ESI = (ESP);
  /* 106212a9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106212ae push 5 */
  push32((uint32_t)(0x5u));
  /* 106212b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106212b2 call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106212b8u);
  /* 106212b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106212bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106212bd call 0x106215d0 */
  push32(0x106212c2u); f_106215d0();
  /* 106212c2 mov esi, esp */
  ESI = (ESP);
  /* 106212c4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 106212c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 106212cb push 1 */
  push32((uint32_t)(0x1u));
  /* 106212cd call dword ptr [0x106503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b0))), 0x106212d3u);
  /* 106212d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106212d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106212d8 call 0x106215d0 */
  push32(0x106212ddu); f_106215d0();
  /* 106212dd mov esi, esp */
  ESI = (ESP);
  /* 106212df push 2 */
  push32((uint32_t)(0x2u));
  /* 106212e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106212e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106212e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106212e7 push 0x10649070 */
  push32((uint32_t)(0x10649070u));
  /* 106212ec push 1 */
  push32((uint32_t)(0x1u));
  /* 106212ee call dword ptr [0x106503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503c0))), 0x106212f4u);
  /* 106212f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106212f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106212f9 call 0x106215d0 */
  push32(0x106212feu); f_106215d0();
  /* 106212fe mov esi, esp */
  ESI = (ESP);
  /* 10621300 push 0x10649068 */
  push32((uint32_t)(0x10649068u));
  /* 10621305 call dword ptr [0x106503c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503c4))), 0x1062130bu);
  /* 1062130b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062130e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621310 call 0x106215d0 */
  push32(0x10621315u); f_106215d0();
  /* 10621315 mov esi, esp */
  ESI = (ESP);
  /* 10621317 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10621319 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062131b call dword ptr [0x106503bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503bc))), 0x10621321u);
  /* 10621321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621326 call 0x106215d0 */
  push32(0x1062132bu); f_106215d0();
L_1062132b:;
  /* 1062132b mov esi, esp */
  ESI = (ESP);
  /* 1062132d push 1 */
  push32((uint32_t)(0x1u));
  /* 1062132f call dword ptr [0x106503cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503cc))), 0x10621335u);
  /* 10621335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062133a call 0x106215d0 */
  push32(0x1062133fu); f_106215d0();
  /* 1062133f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621346 je 0x1062144a */
  if (C.zf) goto L_1062144a;
  /* 1062134c mov esi, esp */
  ESI = (ESP);
  /* 1062134e push 2 */
  push32((uint32_t)(0x2u));
  /* 10621350 call dword ptr [0x106503b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b4))), 0x10621356u);
  /* 10621356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062135b call 0x106215d0 */
  push32(0x10621360u); f_106215d0();
  /* 10621360 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621367 je 0x106213cb */
  if (C.zf) goto L_106213cb;
  /* 10621369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062136b push 0x1064e3e8 */
  push32((uint32_t)(0x1064e3e8u));
  /* 10621370 call 0x1062100a */
  push32(0x10621375u); f_1062100a();
  /* 10621375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062137a jne 0x106213cb */
  if (!C.zf) goto L_106213cb;
  /* 1062137c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062137e push 0x1064e3e0 */
  push32((uint32_t)(0x1064e3e0u));
  /* 10621383 call 0x1062100a */
  push32(0x10621388u); f_1062100a();
  /* 10621388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062138b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062138d jne 0x106213cb */
  if (!C.zf) goto L_106213cb;
  /* 1062138f mov esi, esp */
  ESI = (ESP);
  /* 10621391 push 0 */
  push32((uint32_t)(0x0u));
  /* 10621393 push 2 */
  push32((uint32_t)(0x2u));
  /* 10621395 call dword ptr [0x106503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b8))), 0x1062139bu);
  /* 1062139b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062139e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106213a0 call 0x106215d0 */
  push32(0x106213a5u); f_106215d0();
  /* 106213a5 mov esi, esp */
  ESI = (ESP);
  /* 106213a7 push 0x10649060 */
  push32((uint32_t)(0x10649060u));
  /* 106213ac call dword ptr [0x106503c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503c4))), 0x106213b2u);
  /* 106213b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106213b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106213b7 call 0x106215d0 */
  push32(0x106213bcu); f_106215d0();
  /* 106213bc mov esi, esp */
  ESI = (ESP);
  /* 106213be call dword ptr [0x106503d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503d0))), 0x106213c4u);
  /* 106213c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106213c6 call 0x106215d0 */
  push32(0x106213cbu); f_106215d0();
L_106213cb:;
  /* 106213cb mov esi, esp */
  ESI = (ESP);
  /* 106213cd push 3 */
  push32((uint32_t)(0x3u));
  /* 106213cf call dword ptr [0x106503b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b4))), 0x106213d5u);
  /* 106213d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106213d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106213da call 0x106215d0 */
  push32(0x106213dfu); f_106215d0();
  /* 106213df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106213e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106213e6 je 0x1062144a */
  if (C.zf) goto L_1062144a;
  /* 106213e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 106213ea push 0x1064e3e8 */
  push32((uint32_t)(0x1064e3e8u));
  /* 106213ef call 0x1062100a */
  push32(0x106213f4u); f_1062100a();
  /* 106213f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106213f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106213f9 jne 0x1062144a */
  if (!C.zf) goto L_1062144a;
  /* 106213fb push 1 */
  push32((uint32_t)(0x1u));
  /* 106213fd push 0x1064e3e0 */
  push32((uint32_t)(0x1064e3e0u));
  /* 10621402 call 0x1062100a */
  push32(0x10621407u); f_1062100a();
  /* 10621407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062140a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062140c jne 0x1062144a */
  if (!C.zf) goto L_1062144a;
  /* 1062140e mov esi, esp */
  ESI = (ESP);
  /* 10621410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10621412 push 3 */
  push32((uint32_t)(0x3u));
  /* 10621414 call dword ptr [0x106503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503b8))), 0x1062141au);
  /* 1062141a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062141d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062141f call 0x106215d0 */
  push32(0x10621424u); f_106215d0();
  /* 10621424 mov esi, esp */
  ESI = (ESP);
  /* 10621426 push 0x10649058 */
  push32((uint32_t)(0x10649058u));
  /* 1062142b call dword ptr [0x106503c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503c4))), 0x10621431u);
  /* 10621431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621436 call 0x106215d0 */
  push32(0x1062143bu); f_106215d0();
  /* 1062143b mov esi, esp */
  ESI = (ESP);
  /* 1062143d call dword ptr [0x106503c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503c8))), 0x10621443u);
  /* 10621443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621445 call 0x106215d0 */
  push32(0x1062144au); f_106215d0();
L_1062144a:;
  /* 1062144a pop edi */
  EDI = (pop32());
  /* 1062144b pop esi */
  ESI = (pop32());
  /* 1062144c pop ebx */
  EBX = (pop32());
  /* 1062144d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621450 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621452 call 0x106215d0 */
  push32(0x10621457u); f_106215d0();
  /* 10621457 mov esp, ebp */
  ESP = (EBP);
  /* 10621459 pop ebp */
  EBP = (pop32());
  /* 1062145a ret  */
  ESPCHK(0x10621150u, _esp0);
  ESP += 4; return;
}

/* FUN_10001520 @ 0x10621520 (67 bytes, 28 insns) */
void f_10621520(void) {
  FTRACE(0x10621520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621520 push ebp */
  push32((uint32_t)(EBP));
  /* 10621521 mov ebp, esp */
  EBP = (ESP);
  /* 10621523 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10621526 push ebx */
  push32((uint32_t)(EBX));
  /* 10621527 push esi */
  push32((uint32_t)(ESI));
  /* 10621528 push edi */
  push32((uint32_t)(EDI));
  /* 10621529 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1062152c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10621531 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10621536 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10621538 mov esi, esp */
  ESI = (ESP);
  /* 1062153a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1062153d push eax */
  push32((uint32_t)(EAX));
  /* 1062153e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621541 push ecx */
  push32((uint32_t)(ECX));
  /* 10621542 call dword ptr [0x106503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106503ac))), 0x10621548u);
  /* 10621548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062154b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062154d call 0x106215d0 */
  push32(0x10621552u); f_106215d0();
  /* 10621552 pop edi */
  EDI = (pop32());
  /* 10621553 pop esi */
  ESI = (pop32());
  /* 10621554 pop ebx */
  EBX = (pop32());
  /* 10621555 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621558 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062155a call 0x106215d0 */
  push32(0x1062155fu); f_106215d0();
  /* 1062155f mov esp, ebp */
  ESP = (EBP);
  /* 10621561 pop ebp */
  EBP = (pop32());
  /* 10621562 ret  */
  ESPCHK(0x10621520u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x106215d0 (56 bytes, 28 insns) */
void f_106215d0(void) {
  FTRACE(0x106215d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106215d0 jne 0x106215d3 */
  if (!C.zf) goto L_106215d3;
  /* 106215d2 ret  */
  ESPCHK(0x106215d0u, _esp0);
  ESP += 4; return;
L_106215d3:;
  /* 106215d3 push ebp */
  push32((uint32_t)(EBP));
  /* 106215d4 mov ebp, esp */
  EBP = (ESP);
  /* 106215d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106215d9 push eax */
  push32((uint32_t)(EAX));
  /* 106215da push edx */
  push32((uint32_t)(EDX));
  /* 106215db push ebx */
  push32((uint32_t)(EBX));
  /* 106215dc push esi */
  push32((uint32_t)(ESI));
  /* 106215dd push edi */
  push32((uint32_t)(EDI));
  /* 106215de push 0x10649090 */
  push32((uint32_t)(0x10649090u));
  /* 106215e3 push 0x1064908c */
  push32((uint32_t)(0x1064908cu));
  /* 106215e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106215ea push 0x1064907c */
  push32((uint32_t)(0x1064907cu));
  /* 106215ef push 1 */
  push32((uint32_t)(0x1u));
  /* 106215f1 call 0x106219a0 */
  push32(0x106215f6u); f_106219a0();
  /* 106215f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106215f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106215fc jne 0x106215ff */
  if (!C.zf) goto L_106215ff;
  /* 106215fe int3  */
  x86_unimpl("int3 @ 0x106215fe");
L_106215ff:;
  /* 106215ff pop edi */
  EDI = (pop32());
  /* 10621600 pop esi */
  ESI = (pop32());
  /* 10621601 pop ebx */
  EBX = (pop32());
  /* 10621602 pop edx */
  EDX = (pop32());
  /* 10621603 pop eax */
  EAX = (pop32());
  /* 10621604 mov esp, ebp */
  ESP = (EBP);
  /* 10621606 pop ebp */
  EBP = (pop32());
  /* 10621607 ret  */
  ESPCHK(0x106215d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001610 @ 0x10621610 (313 bytes, 78 insns) */
void f_10621610(void) {
  FTRACE(0x10621610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621610 push ebp */
  push32((uint32_t)(EBP));
  /* 10621611 mov ebp, esp */
  EBP = (ESP);
  /* 10621613 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621617 jne 0x106216d7 */
  if (!C.zf) goto L_106216d7;
  /* 1062161d call dword ptr [0x10650260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650260))), 0x10621623u);
  /* 10621623 mov dword ptr [0x1064e414], eax */
  w32((uint32_t)(0x1064e414), (EAX));
  /* 10621628 push 1 */
  push32((uint32_t)(0x1u));
  /* 1062162a call 0x106250d0 */
  push32(0x1062162fu); f_106250d0();
  /* 1062162f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621634 jne 0x1062163d */
  if (!C.zf) goto L_1062163d;
  /* 10621636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10621638 jmp 0x10621745 */
  goto L_10621745;
L_1062163d:;
  /* 1062163d mov eax, dword ptr [0x1064e414] */
  EAX = (r32((uint32_t)(0x1064e414)));
  /* 10621642 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10621645 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062164a mov dword ptr [0x1064e420], eax */
  w32((uint32_t)(0x1064e420), (EAX));
  /* 1062164f mov ecx, dword ptr [0x1064e414] */
  ECX = (r32((uint32_t)(0x1064e414)));
  /* 10621655 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062165b mov dword ptr [0x1064e41c], ecx */
  w32((uint32_t)(0x1064e41c), (ECX));
  /* 10621661 mov edx, dword ptr [0x1064e41c] */
  EDX = (r32((uint32_t)(0x1064e41c)));
  /* 10621667 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1062166a add edx, dword ptr [0x1064e420] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064e420))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10621670 mov dword ptr [0x1064e418], edx */
  w32((uint32_t)(0x1064e418), (EDX));
  /* 10621676 mov eax, dword ptr [0x1064e414] */
  EAX = (r32((uint32_t)(0x1064e414)));
  /* 1062167b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1062167e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621683 mov dword ptr [0x1064e414], eax */
  w32((uint32_t)(0x1064e414), (EAX));
  /* 10621688 call 0x10622240 */
  push32(0x1062168du); f_10622240();
  /* 1062168d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062168f jne 0x1062169d */
  if (!C.zf) goto L_1062169d;
  /* 10621691 call 0x10625120 */
  push32(0x10621696u); f_10625120();
  /* 10621696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10621698 jmp 0x10621745 */
  goto L_10621745;
L_1062169d:;
  /* 1062169d call dword ptr [0x1065025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065025c))), 0x106216a3u);
  /* 106216a3 mov dword ptr [0x1064ff4c], eax */
  w32((uint32_t)(0x1064ff4c), (EAX));
  /* 106216a8 call 0x10624eb0 */
  push32(0x106216adu); f_10624eb0();
  /* 106216ad mov dword ptr [0x1064e3fc], eax */
  w32((uint32_t)(0x1064e3fc), (EAX));
  /* 106216b2 call 0x106224f0 */
  push32(0x106216b7u); f_106224f0();
  /* 106216b7 call 0x106249a0 */
  push32(0x106216bcu); f_106249a0();
  /* 106216bc call 0x10624850 */
  push32(0x106216c1u); f_10624850();
  /* 106216c1 call 0x10622040 */
  push32(0x106216c6u); f_10622040();
  /* 106216c6 mov ecx, dword ptr [0x1064e3f8] */
  ECX = (r32((uint32_t)(0x1064e3f8)));
  /* 106216cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106216cf mov dword ptr [0x1064e3f8], ecx */
  w32((uint32_t)(0x1064e3f8), (ECX));
  /* 106216d5 jmp 0x10621740 */
  goto L_10621740;
L_106216d7:;
  /* 106216d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106216db jne 0x10621730 */
  if (!C.zf) goto L_10621730;
  /* 106216dd cmp dword ptr [0x1064e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106216e4 jle 0x1062172a */
  if ((C.zf||C.sf!=C.of)) goto L_1062172a;
  /* 106216e6 mov edx, dword ptr [0x1064e3f8] */
  EDX = (r32((uint32_t)(0x1064e3f8)));
  /* 106216ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106216ef mov dword ptr [0x1064e3f8], edx */
  w32((uint32_t)(0x1064e3f8), (EDX));
  /* 106216f5 cmp dword ptr [0x1064e44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106216fc jne 0x10621703 */
  if (!C.zf) goto L_10621703;
  /* 106216fe call 0x106220c0 */
  push32(0x10621703u); f_106220c0();
L_10621703:;
  /* 10621703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10621705 call 0x10623df0 */
  push32(0x1062170au); f_10623df0();
  /* 1062170a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062170d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10621710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621712 je 0x10621719 */
  if (C.zf) goto L_10621719;
  /* 10621714 call 0x10624700 */
  push32(0x10621719u); f_10624700();
L_10621719:;
  /* 10621719 call 0x10622820 */
  push32(0x1062171eu); f_10622820();
  /* 1062171e call 0x106222d0 */
  push32(0x10621723u); f_106222d0();
  /* 10621723 call 0x10625120 */
  push32(0x10621728u); f_10625120();
  /* 10621728 jmp 0x1062172e */
  goto L_1062172e;
L_1062172a:;
  /* 1062172a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062172c jmp 0x10621745 */
  goto L_10621745;
L_1062172e:;
  /* 1062172e jmp 0x10621740 */
  goto L_10621740;
L_10621730:;
  /* 10621730 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621734 jne 0x10621740 */
  if (!C.zf) goto L_10621740;
  /* 10621736 push 0 */
  push32((uint32_t)(0x0u));
  /* 10621738 call 0x106223c0 */
  push32(0x1062173du); f_106223c0();
  /* 1062173d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621740:;
  /* 10621740 mov eax, 1 */
  EAX = (0x1u);
L_10621745:;
  /* 10621745 pop ebp */
  EBP = (pop32());
  /* 10621746 ret 0xc */
  ESPCHK(0x10621610u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10621750 (243 bytes, 86 insns) */
void f_10621750(void) {
  FTRACE(0x10621750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621750 push ebp */
  push32((uint32_t)(EBP));
  /* 10621751 mov ebp, esp */
  EBP = (ESP);
  /* 10621753 push ecx */
  push32((uint32_t)(ECX));
  /* 10621754 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1062175b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062175f jne 0x10621771 */
  if (!C.zf) goto L_10621771;
  /* 10621761 cmp dword ptr [0x1064e3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621768 jne 0x10621771 */
  if (!C.zf) goto L_10621771;
  /* 1062176a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062176c jmp 0x1062183d */
  goto L_1062183d;
L_10621771:;
  /* 10621771 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621775 je 0x1062177d */
  if (C.zf) goto L_1062177d;
  /* 10621777 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062177b jne 0x106217bf */
  if (!C.zf) goto L_106217bf;
L_1062177d:;
  /* 1062177d cmp dword ptr [0x1064ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621784 je 0x1062179b */
  if (C.zf) goto L_1062179b;
  /* 10621786 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621789 push eax */
  push32((uint32_t)(EAX));
  /* 1062178a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062178d push ecx */
  push32((uint32_t)(ECX));
  /* 1062178e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621791 push edx */
  push32((uint32_t)(EDX));
  /* 10621792 call dword ptr [0x1064ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064ff5c))), 0x10621798u);
  /* 10621798 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062179b:;
  /* 1062179b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062179f je 0x106217b5 */
  if (C.zf) goto L_106217b5;
  /* 106217a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106217a4 push eax */
  push32((uint32_t)(EAX));
  /* 106217a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106217a8 push ecx */
  push32((uint32_t)(ECX));
  /* 106217a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106217ac push edx */
  push32((uint32_t)(EDX));
  /* 106217ad call 0x10621610 */
  push32(0x106217b2u); f_10621610();
  /* 106217b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106217b5:;
  /* 106217b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106217b9 jne 0x106217bf */
  if (!C.zf) goto L_106217bf;
  /* 106217bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106217bd jmp 0x1062183d */
  goto L_1062183d;
L_106217bf:;
  /* 106217bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106217c2 push eax */
  push32((uint32_t)(EAX));
  /* 106217c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106217c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106217c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106217ca push edx */
  push32((uint32_t)(EDX));
  /* 106217cb call 0x1062100f */
  push32(0x106217d0u); f_1062100f();
  /* 106217d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106217d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106217d7 jne 0x106217ee */
  if (!C.zf) goto L_106217ee;
  /* 106217d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106217dd jne 0x106217ee */
  if (!C.zf) goto L_106217ee;
  /* 106217df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106217e2 push eax */
  push32((uint32_t)(EAX));
  /* 106217e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106217e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106217e8 push ecx */
  push32((uint32_t)(ECX));
  /* 106217e9 call 0x10621610 */
  push32(0x106217eeu); f_10621610();
L_106217ee:;
  /* 106217ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106217f2 je 0x106217fa */
  if (C.zf) goto L_106217fa;
  /* 106217f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106217f8 jne 0x1062183a */
  if (!C.zf) goto L_1062183a;
L_106217fa:;
  /* 106217fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106217fd push edx */
  push32((uint32_t)(EDX));
  /* 106217fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621801 push eax */
  push32((uint32_t)(EAX));
  /* 10621802 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621805 push ecx */
  push32((uint32_t)(ECX));
  /* 10621806 call 0x10621610 */
  push32(0x1062180bu); f_10621610();
  /* 1062180b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062180d jne 0x10621816 */
  if (!C.zf) goto L_10621816;
  /* 1062180f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10621816:;
  /* 10621816 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062181a je 0x1062183a */
  if (C.zf) goto L_1062183a;
  /* 1062181c cmp dword ptr [0x1064ff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621823 je 0x1062183a */
  if (C.zf) goto L_1062183a;
  /* 10621825 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621828 push edx */
  push32((uint32_t)(EDX));
  /* 10621829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062182c push eax */
  push32((uint32_t)(EAX));
  /* 1062182d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621830 push ecx */
  push32((uint32_t)(ECX));
  /* 10621831 call dword ptr [0x1064ff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064ff5c))), 0x10621837u);
  /* 10621837 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062183a:;
  /* 1062183a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062183d:;
  /* 1062183d mov esp, ebp */
  ESP = (EBP);
  /* 1062183f pop ebp */
  EBP = (pop32());
  /* 10621840 ret 0xc */
  ESPCHK(0x10621750u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10621850 (58 bytes, 18 insns) */
void f_10621850(void) {
  FTRACE(0x10621850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621850 push ebp */
  push32((uint32_t)(EBP));
  /* 10621851 mov ebp, esp */
  EBP = (ESP);
  /* 10621853 cmp dword ptr [0x1064e404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062185a je 0x1062186e */
  if (C.zf) goto L_1062186e;
  /* 1062185c cmp dword ptr [0x1064e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621863 jne 0x10621873 */
  if (!C.zf) goto L_10621873;
  /* 10621865 cmp dword ptr [0x1064e408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062186c jne 0x10621873 */
  if (!C.zf) goto L_10621873;
L_1062186e:;
  /* 1062186e call 0x106251c0 */
  push32(0x10621873u); f_106251c0();
L_10621873:;
  /* 10621873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621876 push eax */
  push32((uint32_t)(EAX));
  /* 10621877 call 0x10625210 */
  push32(0x1062187cu); f_10625210();
  /* 1062187c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062187f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10621884 call dword ptr [0x1064ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064ca30))), 0x1062188au);
  /* 1062188a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062188d pop ebp */
  EBP = (pop32());
  /* 1062188e ret  */
  ESPCHK(0x10621850u, _esp0);
  ESP += 4; return;
}

/* FUN_10001890 @ 0x10621890 (11 bytes, 5 insns) */
void f_10621890(void) {
  FTRACE(0x10621890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621890 push ebp */
  push32((uint32_t)(EBP));
  /* 10621891 mov ebp, esp */
  EBP = (ESP);
  /* 10621893 call dword ptr [0x10650264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650264))), 0x10621899u);
  /* 10621899 pop ebp */
  EBP = (pop32());
  /* 1062189a ret  */
  ESPCHK(0x10621890u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x106218a0 (87 bytes, 30 insns) */
void f_106218a0(void) {
  FTRACE(0x106218a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106218a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106218a1 mov ebp, esp */
  EBP = (ESP);
  /* 106218a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106218a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106218a8 jl 0x106218b0 */
  if ((C.sf!=C.of)) goto L_106218b0;
  /* 106218aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106218ae jl 0x106218b5 */
  if ((C.sf!=C.of)) goto L_106218b5;
L_106218b0:;
  /* 106218b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106218b3 jmp 0x106218f3 */
  goto L_106218f3;
L_106218b5:;
  /* 106218b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106218b9 jne 0x106218c7 */
  if (!C.zf) goto L_106218c7;
  /* 106218bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106218be mov eax, dword ptr [eax*4 + 0x1064ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1064ca38)));
  /* 106218c5 jmp 0x106218f3 */
  goto L_106218f3;
L_106218c7:;
  /* 106218c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106218ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 106218cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106218cf je 0x106218d6 */
  if (C.zf) goto L_106218d6;
  /* 106218d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106218d4 jmp 0x106218f3 */
  goto L_106218f3;
L_106218d6:;
  /* 106218d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106218d9 mov eax, dword ptr [edx*4 + 0x1064ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064ca38)));
  /* 106218e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106218e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106218e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106218e9 mov dword ptr [ecx*4 + 0x1064ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1064ca38), (EDX));
  /* 106218f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106218f3:;
  /* 106218f3 mov esp, ebp */
  ESP = (EBP);
  /* 106218f5 pop ebp */
  EBP = (pop32());
  /* 106218f6 ret  */
  ESPCHK(0x106218a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10621900 (126 bytes, 38 insns) */
void f_10621900(void) {
  FTRACE(0x10621900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621900 push ebp */
  push32((uint32_t)(EBP));
  /* 10621901 mov ebp, esp */
  EBP = (ESP);
  /* 10621903 push ecx */
  push32((uint32_t)(ECX));
  /* 10621904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621908 jl 0x10621910 */
  if ((C.sf!=C.of)) goto L_10621910;
  /* 1062190a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062190e jl 0x10621917 */
  if ((C.sf!=C.of)) goto L_10621917;
L_10621910:;
  /* 10621910 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10621915 jmp 0x1062197a */
  goto L_1062197a;
L_10621917:;
  /* 10621917 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062191b jne 0x10621929 */
  if (!C.zf) goto L_10621929;
  /* 1062191d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621920 mov eax, dword ptr [eax*4 + 0x1064ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1064ca44)));
  /* 10621927 jmp 0x1062197a */
  goto L_1062197a;
L_10621929:;
  /* 10621929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062192c mov edx, dword ptr [ecx*4 + 0x1064ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca44)));
  /* 10621933 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10621936 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062193a jne 0x10621950 */
  if (!C.zf) goto L_10621950;
  /* 1062193c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1062193e call dword ptr [0x10650268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650268))), 0x10621944u);
  /* 10621944 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621947 mov dword ptr [ecx*4 + 0x1064ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1064ca44), (EAX));
  /* 1062194e jmp 0x10621977 */
  goto L_10621977;
L_10621950:;
  /* 10621950 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621954 jne 0x1062196a */
  if (!C.zf) goto L_1062196a;
  /* 10621956 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10621958 call dword ptr [0x10650268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650268))), 0x1062195eu);
  /* 1062195e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621961 mov dword ptr [edx*4 + 0x1064ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1064ca44), (EAX));
  /* 10621968 jmp 0x10621977 */
  goto L_10621977;
L_1062196a:;
  /* 1062196a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062196d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621970 mov dword ptr [eax*4 + 0x1064ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1064ca44), (ECX));
L_10621977:;
  /* 10621977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1062197a:;
  /* 1062197a mov esp, ebp */
  ESP = (EBP);
  /* 1062197c pop ebp */
  EBP = (pop32());
  /* 1062197d ret  */
  ESPCHK(0x10621900u, _esp0);
  ESP += 4; return;
}

/* FUN_10001980 @ 0x10621980 (28 bytes, 11 insns) */
void f_10621980(void) {
  FTRACE(0x10621980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621980 push ebp */
  push32((uint32_t)(EBP));
  /* 10621981 mov ebp, esp */
  EBP = (ESP);
  /* 10621983 push ecx */
  push32((uint32_t)(ECX));
  /* 10621984 mov eax, dword ptr [0x1064ff40] */
  EAX = (r32((uint32_t)(0x1064ff40)));
  /* 10621989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062198c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062198f mov dword ptr [0x1064ff40], ecx */
  w32((uint32_t)(0x1064ff40), (ECX));
  /* 10621995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621998 mov esp, ebp */
  ESP = (EBP);
  /* 1062199a pop ebp */
  EBP = (pop32());
  /* 1062199b ret  */
  ESPCHK(0x10621980u, _esp0);
  ESP += 4; return;
}

/* FUN_100019a0 @ 0x106219a0 (912 bytes, 248 insns) */
void f_106219a0(void) {
  FTRACE(0x106219a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106219a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106219a1 mov ebp, esp */
  EBP = (ESP);
  /* 106219a3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 106219a8 call 0x10625a80 */
  push32(0x106219adu); f_10625a80();
  /* 106219ad push edi */
  push32((uint32_t)(EDI));
  /* 106219ae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 106219b5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106219ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106219bc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 106219c2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106219c4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106219c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106219c7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 106219ce mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106219d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106219d5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 106219db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106219dd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106219df stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106219e0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 106219e7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106219ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106219ee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 106219f4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106219f6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106219f8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106219f9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 106219fc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10621a02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a06 jl 0x10621a0e */
  if ((C.sf!=C.of)) goto L_10621a0e;
  /* 10621a08 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a0c jl 0x10621a16 */
  if ((C.sf!=C.of)) goto L_10621a16;
L_10621a0e:;
  /* 10621a0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621a11 jmp 0x10621d2b */
  goto L_10621d2b;
L_10621a16:;
  /* 10621a16 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a1a jne 0x10621ac0 */
  if (!C.zf) goto L_10621ac0;
  /* 10621a20 push 0x1064ca34 */
  push32((uint32_t)(0x1064ca34u));
  /* 10621a25 call dword ptr [0x10650280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650280))), 0x10621a2bu);
  /* 10621a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621a2d jle 0x10621ac0 */
  if ((C.zf||C.sf!=C.of)) goto L_10621ac0;
  /* 10621a33 cmp dword ptr [0x1064e40c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e40c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a3a jne 0x10621a7e */
  if (!C.zf) goto L_10621a7e;
  /* 10621a3c push 0x10649238 */
  push32((uint32_t)(0x10649238u));
  /* 10621a41 call dword ptr [0x1065027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065027c))), 0x10621a47u);
  /* 10621a47 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10621a4d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a54 je 0x10621a76 */
  if (C.zf) goto L_10621a76;
  /* 10621a56 push 0x1064922c */
  push32((uint32_t)(0x1064922cu));
  /* 10621a5b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10621a61 push ecx */
  push32((uint32_t)(ECX));
  /* 10621a62 call dword ptr [0x10650278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650278))), 0x10621a68u);
  /* 10621a68 mov dword ptr [0x1064e40c], eax */
  w32((uint32_t)(0x1064e40c), (EAX));
  /* 10621a6d cmp dword ptr [0x1064e40c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e40c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621a74 jne 0x10621a7e */
  if (!C.zf) goto L_10621a7e;
L_10621a76:;
  /* 10621a76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621a79 jmp 0x10621d2b */
  goto L_10621d2b;
L_10621a7e:;
  /* 10621a7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621a81 push edx */
  push32((uint32_t)(EDX));
  /* 10621a82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621a85 push eax */
  push32((uint32_t)(EAX));
  /* 10621a86 push 0x106491f8 */
  push32((uint32_t)(0x106491f8u));
  /* 10621a8b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10621a91 push ecx */
  push32((uint32_t)(ECX));
  /* 10621a92 call dword ptr [0x1064e40c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e40c))), 0x10621a98u);
  /* 10621a98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621a9b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10621aa1 push edx */
  push32((uint32_t)(EDX));
  /* 10621aa2 call dword ptr [0x10650274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650274))), 0x10621aa8u);
  /* 10621aa8 push 0x1064ca34 */
  push32((uint32_t)(0x1064ca34u));
  /* 10621aad call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x10621ab3u);
  /* 10621ab3 call 0x10621890 */
  push32(0x10621ab8u); f_10621890();
  /* 10621ab8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10621abb jmp 0x10621d2b */
  goto L_10621d2b;
L_10621ac0:;
  /* 10621ac0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621ac4 je 0x10621afd */
  if (C.zf) goto L_10621afd;
  /* 10621ac6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10621acc push eax */
  push32((uint32_t)(EAX));
  /* 10621acd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10621ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 10621ad1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10621ad6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10621adc push edx */
  push32((uint32_t)(EDX));
  /* 10621add call 0x10625980 */
  push32(0x10621ae2u); f_10625980();
  /* 10621ae2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621ae7 jge 0x10621afd */
  if ((C.sf==C.of)) goto L_10621afd;
  /* 10621ae9 push 0x106491cc */
  push32((uint32_t)(0x106491ccu));
  /* 10621aee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10621af4 push eax */
  push32((uint32_t)(EAX));
  /* 10621af5 call 0x10625890 */
  push32(0x10621afau); f_10625890();
  /* 10621afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621afd:;
  /* 10621afd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621b01 jne 0x10621b35 */
  if (!C.zf) goto L_10621b35;
  /* 10621b03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621b07 je 0x10621b15 */
  if (C.zf) goto L_10621b15;
  /* 10621b09 mov dword ptr [ebp - 0x3028], 0x106491b8 */
  w32((uint32_t)(EBP + -0x3028), (0x106491b8u));
  /* 10621b13 jmp 0x10621b1f */
  goto L_10621b1f;
L_10621b15:;
  /* 10621b15 mov dword ptr [ebp - 0x3028], 0x106491a4 */
  w32((uint32_t)(EBP + -0x3028), (0x106491a4u));
L_10621b1f:;
  /* 10621b1f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10621b25 push ecx */
  push32((uint32_t)(ECX));
  /* 10621b26 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10621b2c push edx */
  push32((uint32_t)(EDX));
  /* 10621b2d call 0x10625890 */
  push32(0x10621b32u); f_10625890();
  /* 10621b32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621b35:;
  /* 10621b35 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10621b3b push eax */
  push32((uint32_t)(EAX));
  /* 10621b3c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10621b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10621b43 call 0x106258a0 */
  push32(0x10621b48u); f_106258a0();
  /* 10621b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621b4b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621b4f jne 0x10621b8a */
  if (!C.zf) goto L_10621b8a;
  /* 10621b51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621b54 mov eax, dword ptr [edx*4 + 0x1064ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064ca38)));
  /* 10621b5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10621b5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621b60 je 0x10621b76 */
  if (C.zf) goto L_10621b76;
  /* 10621b62 push 0x106491a0 */
  push32((uint32_t)(0x106491a0u));
  /* 10621b67 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10621b6d push ecx */
  push32((uint32_t)(ECX));
  /* 10621b6e call 0x106258a0 */
  push32(0x10621b73u); f_106258a0();
  /* 10621b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621b76:;
  /* 10621b76 push 0x1064919c */
  push32((uint32_t)(0x1064919cu));
  /* 10621b7b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10621b81 push edx */
  push32((uint32_t)(EDX));
  /* 10621b82 call 0x106258a0 */
  push32(0x10621b87u); f_106258a0();
  /* 10621b87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621b8a:;
  /* 10621b8a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621b8e je 0x10621bd2 */
  if (C.zf) goto L_10621bd2;
  /* 10621b90 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10621b96 push eax */
  push32((uint32_t)(EAX));
  /* 10621b97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621b9a push ecx */
  push32((uint32_t)(ECX));
  /* 10621b9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621b9e push edx */
  push32((uint32_t)(EDX));
  /* 10621b9f push 0x10649190 */
  push32((uint32_t)(0x10649190u));
  /* 10621ba4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10621ba9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10621baf push eax */
  push32((uint32_t)(EAX));
  /* 10621bb0 call 0x10625790 */
  push32(0x10621bb5u); f_10625790();
  /* 10621bb5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621bba jge 0x10621bd0 */
  if ((C.sf==C.of)) goto L_10621bd0;
  /* 10621bbc push 0x106491cc */
  push32((uint32_t)(0x106491ccu));
  /* 10621bc1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10621bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10621bc8 call 0x10625890 */
  push32(0x10621bcdu); f_10625890();
  /* 10621bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621bd0:;
  /* 10621bd0 jmp 0x10621be8 */
  goto L_10621be8;
L_10621bd2:;
  /* 10621bd2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10621bd8 push edx */
  push32((uint32_t)(EDX));
  /* 10621bd9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10621bdf push eax */
  push32((uint32_t)(EAX));
  /* 10621be0 call 0x10625890 */
  push32(0x10621be5u); f_10625890();
  /* 10621be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621be8:;
  /* 10621be8 cmp dword ptr [0x1064ff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621bef je 0x10621c2c */
  if (C.zf) goto L_10621c2c;
  /* 10621bf1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10621bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10621bf8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10621bfe push edx */
  push32((uint32_t)(EDX));
  /* 10621bff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c02 push eax */
  push32((uint32_t)(EAX));
  /* 10621c03 call dword ptr [0x1064ff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064ff40))), 0x10621c09u);
  /* 10621c09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621c0e je 0x10621c2c */
  if (C.zf) goto L_10621c2c;
  /* 10621c10 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621c14 jne 0x10621c21 */
  if (!C.zf) goto L_10621c21;
  /* 10621c16 push 0x1064ca34 */
  push32((uint32_t)(0x1064ca34u));
  /* 10621c1b call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x10621c21u);
L_10621c21:;
  /* 10621c21 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10621c27 jmp 0x10621d2b */
  goto L_10621d2b;
L_10621c2c:;
  /* 10621c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c2f mov edx, dword ptr [ecx*4 + 0x1064ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca38)));
  /* 10621c36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10621c39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10621c3b je 0x10621c7b */
  if (C.zf) goto L_10621c7b;
  /* 10621c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c40 cmp dword ptr [eax*4 + 0x1064ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1064ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621c48 je 0x10621c7b */
  if (C.zf) goto L_10621c7b;
  /* 10621c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10621c4c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10621c52 push ecx */
  push32((uint32_t)(ECX));
  /* 10621c53 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10621c59 push edx */
  push32((uint32_t)(EDX));
  /* 10621c5a call 0x10625710 */
  push32(0x10621c5fu); f_10625710();
  /* 10621c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621c62 push eax */
  push32((uint32_t)(EAX));
  /* 10621c63 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10621c69 push eax */
  push32((uint32_t)(EAX));
  /* 10621c6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c6d mov edx, dword ptr [ecx*4 + 0x1064ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca44)));
  /* 10621c74 push edx */
  push32((uint32_t)(EDX));
  /* 10621c75 call dword ptr [0x1065026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065026c))), 0x10621c7bu);
L_10621c7b:;
  /* 10621c7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c7e mov ecx, dword ptr [eax*4 + 0x1064ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064ca38)));
  /* 10621c85 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10621c88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10621c8a je 0x10621c99 */
  if (C.zf) goto L_10621c99;
  /* 10621c8c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10621c92 push edx */
  push32((uint32_t)(EDX));
  /* 10621c93 call dword ptr [0x10650274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650274))), 0x10621c99u);
L_10621c99:;
  /* 10621c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621c9c mov ecx, dword ptr [eax*4 + 0x1064ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064ca38)));
  /* 10621ca3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10621ca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10621ca8 je 0x10621d18 */
  if (C.zf) goto L_10621d18;
  /* 10621caa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621cae je 0x10621ccd */
  if (C.zf) goto L_10621ccd;
  /* 10621cb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10621cb2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10621cb8 push edx */
  push32((uint32_t)(EDX));
  /* 10621cb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621cbc push eax */
  push32((uint32_t)(EAX));
  /* 10621cbd call 0x10625420 */
  push32(0x10621cc2u); f_10625420();
  /* 10621cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621cc5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10621ccb jmp 0x10621cd7 */
  goto L_10621cd7;
L_10621ccd:;
  /* 10621ccd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10621cd7:;
  /* 10621cd7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10621cdd push ecx */
  push32((uint32_t)(ECX));
  /* 10621cde mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10621ce1 push edx */
  push32((uint32_t)(EDX));
  /* 10621ce2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10621ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10621ce9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621cec push ecx */
  push32((uint32_t)(ECX));
  /* 10621ced mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621cf0 push edx */
  push32((uint32_t)(EDX));
  /* 10621cf1 call 0x10621d30 */
  push32(0x10621cf6u); f_10621d30();
  /* 10621cf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621cf9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10621cff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621d03 jne 0x10621d10 */
  if (!C.zf) goto L_10621d10;
  /* 10621d05 push 0x1064ca34 */
  push32((uint32_t)(0x1064ca34u));
  /* 10621d0a call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x10621d10u);
L_10621d10:;
  /* 10621d10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10621d16 jmp 0x10621d2b */
  goto L_10621d2b;
L_10621d18:;
  /* 10621d18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621d1c jne 0x10621d29 */
  if (!C.zf) goto L_10621d29;
  /* 10621d1e push 0x1064ca34 */
  push32((uint32_t)(0x1064ca34u));
  /* 10621d23 call dword ptr [0x10650270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650270))), 0x10621d29u);
L_10621d29:;
  /* 10621d29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10621d2b:;
  /* 10621d2b pop edi */
  EDI = (pop32());
  /* 10621d2c mov esp, ebp */
  ESP = (EBP);
  /* 10621d2e pop ebp */
  EBP = (pop32());
  /* 10621d2f ret  */
  ESPCHK(0x106219a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d30 @ 0x10621d30 (780 bytes, 197 insns) */
void f_10621d30(void) {
  FTRACE(0x10621d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10621d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10621d31 mov ebp, esp */
  EBP = (ESP);
  /* 10621d33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10621d38 call 0x10625a80 */
  push32(0x10621d3du); f_10625a80();
L_10621d3d:;
  /* 10621d3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621d41 jne 0x10621d68 */
  if (!C.zf) goto L_10621d68;
  /* 10621d43 push 0x10649388 */
  push32((uint32_t)(0x10649388u));
  /* 10621d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10621d4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10621d4f push 0x1064937c */
  push32((uint32_t)(0x1064937cu));
  /* 10621d54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10621d56 call 0x106219a0 */
  push32(0x10621d5bu); f_106219a0();
  /* 10621d5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621d5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621d61 jne 0x10621d68 */
  if (!C.zf) goto L_10621d68;
  /* 10621d63 call 0x10621890 */
  push32(0x10621d68u); f_10621890();
L_10621d68:;
  /* 10621d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10621d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621d6c jne 0x10621d3d */
  if (!C.zf) goto L_10621d3d;
  /* 10621d6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10621d73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10621d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10621d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10621d7c call dword ptr [0x10650284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650284))), 0x10621d82u);
  /* 10621d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621d84 jne 0x10621d9a */
  if (!C.zf) goto L_10621d9a;
  /* 10621d86 push 0x10649364 */
  push32((uint32_t)(0x10649364u));
  /* 10621d8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10621d91 push edx */
  push32((uint32_t)(EDX));
  /* 10621d92 call 0x10625890 */
  push32(0x10621d97u); f_10625890();
  /* 10621d97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621d9a:;
  /* 10621d9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10621da0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10621da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621da6 push ecx */
  push32((uint32_t)(ECX));
  /* 10621da7 call 0x10625710 */
  push32(0x10621dacu); f_10625710();
  /* 10621dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621daf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621db2 jbe 0x10621ddd */
  if ((C.cf||C.zf)) goto L_10621ddd;
  /* 10621db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621db7 push edx */
  push32((uint32_t)(EDX));
  /* 10621db8 call 0x10625710 */
  push32(0x10621dbdu); f_10625710();
  /* 10621dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621dc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621dc3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10621dc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10621dca push 3 */
  push32((uint32_t)(0x3u));
  /* 10621dcc push 0x10649360 */
  push32((uint32_t)(0x10649360u));
  /* 10621dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10621dd5 call 0x10626100 */
  push32(0x10621ddau); f_10626100();
  /* 10621dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621ddd:;
  /* 10621ddd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10621de0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10621de6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621ded je 0x10621e38 */
  if (C.zf) goto L_10621e38;
  /* 10621def mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10621df5 push edx */
  push32((uint32_t)(EDX));
  /* 10621df6 call 0x10625710 */
  push32(0x10621dfbu); f_10625710();
  /* 10621dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621dfe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621e01 jbe 0x10621e38 */
  if ((C.cf||C.zf)) goto L_10621e38;
  /* 10621e03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10621e09 push eax */
  push32((uint32_t)(EAX));
  /* 10621e0a call 0x10625710 */
  push32(0x10621e0fu); f_10625710();
  /* 10621e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621e12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10621e18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10621e1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10621e22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10621e24 push 0x10649360 */
  push32((uint32_t)(0x10649360u));
  /* 10621e29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10621e2f push eax */
  push32((uint32_t)(EAX));
  /* 10621e30 call 0x10626100 */
  push32(0x10621e35u); f_10626100();
  /* 10621e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621e38:;
  /* 10621e38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621e3c jne 0x10621e4a */
  if (!C.zf) goto L_10621e4a;
  /* 10621e3e mov dword ptr [ebp - 0x1114], 0x106492ec */
  w32((uint32_t)(EBP + -0x1114), (0x106492ecu));
  /* 10621e48 jmp 0x10621e54 */
  goto L_10621e54;
L_10621e4a:;
  /* 10621e4a mov dword ptr [ebp - 0x1114], 0x1064908c */
  w32((uint32_t)(EBP + -0x1114), (0x1064908cu));
L_10621e54:;
  /* 10621e54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10621e57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10621e5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10621e5c je 0x10621e69 */
  if (C.zf) goto L_10621e69;
  /* 10621e5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10621e61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10621e67 jmp 0x10621e73 */
  goto L_10621e73;
L_10621e69:;
  /* 10621e69 mov dword ptr [ebp - 0x1118], 0x1064908c */
  w32((uint32_t)(EBP + -0x1118), (0x1064908cu));
L_10621e73:;
  /* 10621e73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10621e76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10621e79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10621e7b je 0x10621e8f */
  if (C.zf) goto L_10621e8f;
  /* 10621e7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621e81 jne 0x10621e8f */
  if (!C.zf) goto L_10621e8f;
  /* 10621e83 mov dword ptr [ebp - 0x111c], 0x106492dc */
  w32((uint32_t)(EBP + -0x111c), (0x106492dcu));
  /* 10621e8d jmp 0x10621e99 */
  goto L_10621e99;
L_10621e8f:;
  /* 10621e8f mov dword ptr [ebp - 0x111c], 0x1064908c */
  w32((uint32_t)(EBP + -0x111c), (0x1064908cu));
L_10621e99:;
  /* 10621e99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10621e9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10621e9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10621ea1 je 0x10621eaf */
  if (C.zf) goto L_10621eaf;
  /* 10621ea3 mov dword ptr [ebp - 0x1120], 0x106492d8 */
  w32((uint32_t)(EBP + -0x1120), (0x106492d8u));
  /* 10621ead jmp 0x10621eb9 */
  goto L_10621eb9;
L_10621eaf:;
  /* 10621eaf mov dword ptr [ebp - 0x1120], 0x1064908c */
  w32((uint32_t)(EBP + -0x1120), (0x1064908cu));
L_10621eb9:;
  /* 10621eb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621ebd je 0x10621eca */
  if (C.zf) goto L_10621eca;
  /* 10621ebf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10621ec2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10621ec8 jmp 0x10621ed4 */
  goto L_10621ed4;
L_10621eca:;
  /* 10621eca mov dword ptr [ebp - 0x1124], 0x1064908c */
  w32((uint32_t)(EBP + -0x1124), (0x1064908cu));
L_10621ed4:;
  /* 10621ed4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621ed8 je 0x10621ee6 */
  if (C.zf) goto L_10621ee6;
  /* 10621eda mov dword ptr [ebp - 0x1128], 0x106492d0 */
  w32((uint32_t)(EBP + -0x1128), (0x106492d0u));
  /* 10621ee4 jmp 0x10621ef0 */
  goto L_10621ef0;
L_10621ee6:;
  /* 10621ee6 mov dword ptr [ebp - 0x1128], 0x1064908c */
  w32((uint32_t)(EBP + -0x1128), (0x1064908cu));
L_10621ef0:;
  /* 10621ef0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621ef4 je 0x10621f01 */
  if (C.zf) goto L_10621f01;
  /* 10621ef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10621ef9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10621eff jmp 0x10621f0b */
  goto L_10621f0b;
L_10621f01:;
  /* 10621f01 mov dword ptr [ebp - 0x112c], 0x1064908c */
  w32((uint32_t)(EBP + -0x112c), (0x1064908cu));
L_10621f0b:;
  /* 10621f0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621f0f je 0x10621f1d */
  if (C.zf) goto L_10621f1d;
  /* 10621f11 mov dword ptr [ebp - 0x1130], 0x106492c8 */
  w32((uint32_t)(EBP + -0x1130), (0x106492c8u));
  /* 10621f1b jmp 0x10621f27 */
  goto L_10621f27;
L_10621f1d:;
  /* 10621f1d mov dword ptr [ebp - 0x1130], 0x1064908c */
  w32((uint32_t)(EBP + -0x1130), (0x1064908cu));
L_10621f27:;
  /* 10621f27 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621f2e je 0x10621f3e */
  if (C.zf) goto L_10621f3e;
  /* 10621f30 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10621f36 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10621f3c jmp 0x10621f48 */
  goto L_10621f48;
L_10621f3e:;
  /* 10621f3e mov dword ptr [ebp - 0x1134], 0x1064908c */
  w32((uint32_t)(EBP + -0x1134), (0x1064908cu));
L_10621f48:;
  /* 10621f48 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10621f4f je 0x10621f5d */
  if (C.zf) goto L_10621f5d;
  /* 10621f51 mov dword ptr [ebp - 0x1138], 0x106492bc */
  w32((uint32_t)(EBP + -0x1138), (0x106492bcu));
  /* 10621f5b jmp 0x10621f67 */
  goto L_10621f67;
L_10621f5d:;
  /* 10621f5d mov dword ptr [ebp - 0x1138], 0x1064908c */
  w32((uint32_t)(EBP + -0x1138), (0x1064908cu));
L_10621f67:;
  /* 10621f67 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10621f6d push edx */
  push32((uint32_t)(EDX));
  /* 10621f6e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10621f74 push eax */
  push32((uint32_t)(EAX));
  /* 10621f75 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10621f7b push ecx */
  push32((uint32_t)(ECX));
  /* 10621f7c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10621f82 push edx */
  push32((uint32_t)(EDX));
  /* 10621f83 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10621f89 push eax */
  push32((uint32_t)(EAX));
  /* 10621f8a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10621f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10621f91 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10621f97 push edx */
  push32((uint32_t)(EDX));
  /* 10621f98 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10621f9e push eax */
  push32((uint32_t)(EAX));
  /* 10621f9f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10621fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10621fa6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10621fac push edx */
  push32((uint32_t)(EDX));
  /* 10621fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10621fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10621fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10621fb4 mov edx, dword ptr [ecx*4 + 0x1064ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca50)));
  /* 10621fbb push edx */
  push32((uint32_t)(EDX));
  /* 10621fbc push 0x10649268 */
  push32((uint32_t)(0x10649268u));
  /* 10621fc1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10621fc6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10621fcc push eax */
  push32((uint32_t)(EAX));
  /* 10621fcd call 0x10625790 */
  push32(0x10621fd2u); f_10625790();
  /* 10621fd2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10621fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10621fd7 jge 0x10621fed */
  if ((C.sf==C.of)) goto L_10621fed;
  /* 10621fd9 push 0x106491cc */
  push32((uint32_t)(0x106491ccu));
  /* 10621fde lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10621fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10621fe5 call 0x10625890 */
  push32(0x10621feau); f_10625890();
  /* 10621fea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10621fed:;
  /* 10621fed push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10621ff2 push 0x10649244 */
  push32((uint32_t)(0x10649244u));
  /* 10621ff7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10621ffd push edx */
  push32((uint32_t)(EDX));
  /* 10621ffe call 0x10626040 */
  push32(0x10622003u); f_10626040();
  /* 10622003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622006 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1062200c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622013 jne 0x10622026 */
  if (!C.zf) goto L_10622026;
  /* 10622015 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10622017 call 0x10625d80 */
  push32(0x1062201cu); f_10625d80();
  /* 1062201c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062201f push 3 */
  push32((uint32_t)(0x3u));
  /* 10622021 call 0x106220a0 */
  push32(0x10622026u); f_106220a0();
L_10622026:;
  /* 10622026 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062202d jne 0x10622036 */
  if (!C.zf) goto L_10622036;
  /* 1062202f mov eax, 1 */
  EAX = (0x1u);
  /* 10622034 jmp 0x10622038 */
  goto L_10622038;
L_10622036:;
  /* 10622036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10622038:;
  /* 10622038 mov esp, ebp */
  ESP = (EBP);
  /* 1062203a pop ebp */
  EBP = (pop32());
  /* 1062203b ret  */
  ESPCHK(0x10621d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002040 @ 0x10622040 (56 bytes, 15 insns) */
void f_10622040(void) {
  FTRACE(0x10622040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622040 push ebp */
  push32((uint32_t)(EBP));
  /* 10622041 mov ebp, esp */
  EBP = (ESP);
  /* 10622043 cmp dword ptr [0x1064ff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062204a je 0x10622052 */
  if (C.zf) goto L_10622052;
  /* 1062204c call dword ptr [0x1064ff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064ff3c))), 0x10622052u);
L_10622052:;
  /* 10622052 push 0x1064c418 */
  push32((uint32_t)(0x1064c418u));
  /* 10622057 push 0x1064c208 */
  push32((uint32_t)(0x1064c208u));
  /* 1062205c call 0x10622210 */
  push32(0x10622061u); f_10622210();
  /* 10622061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622064 push 0x1064c104 */
  push32((uint32_t)(0x1064c104u));
  /* 10622069 push 0x1064c000 */
  push32((uint32_t)(0x1064c000u));
  /* 1062206e call 0x10622210 */
  push32(0x10622073u); f_10622210();
  /* 10622073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622076 pop ebp */
  EBP = (pop32());
  /* 10622077 ret  */
  ESPCHK(0x10622040u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x10622080 (21 bytes, 10 insns) */
void f_10622080(void) {
  FTRACE(0x10622080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622080 push ebp */
  push32((uint32_t)(EBP));
  /* 10622081 mov ebp, esp */
  EBP = (ESP);
  /* 10622083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062208a push eax */
  push32((uint32_t)(EAX));
  /* 1062208b call 0x10622100 */
  push32(0x10622090u); f_10622100();
  /* 10622090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622093 pop ebp */
  EBP = (pop32());
  /* 10622094 ret  */
  ESPCHK(0x10622080u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x106220a0 (21 bytes, 10 insns) */
void f_106220a0(void) {
  FTRACE(0x106220a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106220a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106220a1 mov ebp, esp */
  EBP = (ESP);
  /* 106220a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106220a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106220a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106220aa push eax */
  push32((uint32_t)(EAX));
  /* 106220ab call 0x10622100 */
  push32(0x106220b0u); f_10622100();
  /* 106220b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106220b3 pop ebp */
  EBP = (pop32());
  /* 106220b4 ret  */
  ESPCHK(0x106220a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020c0 @ 0x106220c0 (19 bytes, 9 insns) */
void f_106220c0(void) {
  FTRACE(0x106220c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106220c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106220c1 mov ebp, esp */
  EBP = (ESP);
  /* 106220c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106220c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106220c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106220c9 call 0x10622100 */
  push32(0x106220ceu); f_10622100();
  /* 106220ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106220d1 pop ebp */
  EBP = (pop32());
  /* 106220d2 ret  */
  ESPCHK(0x106220c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x106220e0 (19 bytes, 9 insns) */
void f_106220e0(void) {
  FTRACE(0x106220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106220e1 mov ebp, esp */
  EBP = (ESP);
  /* 106220e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106220e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106220e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106220e9 call 0x10622100 */
  push32(0x106220eeu); f_10622100();
  /* 106220ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106220f1 pop ebp */
  EBP = (pop32());
  /* 106220f2 ret  */
  ESPCHK(0x106220e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x10622100 (227 bytes, 61 insns) */
void f_10622100(void) {
  FTRACE(0x10622100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622100 push ebp */
  push32((uint32_t)(EBP));
  /* 10622101 mov ebp, esp */
  EBP = (ESP);
  /* 10622103 push ecx */
  push32((uint32_t)(ECX));
  /* 10622104 call 0x106221f0 */
  push32(0x10622109u); f_106221f0();
  /* 10622109 cmp dword ptr [0x1064e450], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e450))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622110 jne 0x10622123 */
  if (!C.zf) goto L_10622123;
  /* 10622112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622115 push eax */
  push32((uint32_t)(EAX));
  /* 10622116 call dword ptr [0x10650290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650290))), 0x1062211cu);
  /* 1062211c push eax */
  push32((uint32_t)(EAX));
  /* 1062211d call dword ptr [0x1065028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065028c))), 0x10622123u);
L_10622123:;
  /* 10622123 mov dword ptr [0x1064e44c], 1 */
  w32((uint32_t)(0x1064e44c), (0x1u));
  /* 1062212d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10622130 mov byte ptr [0x1064e448], cl */
  w8((uint32_t)(0x1064e448), (CL));
  /* 10622136 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062213a jne 0x10622183 */
  if (!C.zf) goto L_10622183;
  /* 1062213c cmp dword ptr [0x1064ff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622143 je 0x10622171 */
  if (C.zf) goto L_10622171;
  /* 10622145 mov edx, dword ptr [0x1064ff34] */
  EDX = (r32((uint32_t)(0x1064ff34)));
  /* 1062214b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1062214e:;
  /* 1062214e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622151 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622154 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622157 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062215a cmp ecx, dword ptr [0x1064ff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064ff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622160 jb 0x10622171 */
  if (C.cf) goto L_10622171;
  /* 10622162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622165 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622168 je 0x1062216f */
  if (C.zf) goto L_1062216f;
  /* 1062216a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062216d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1062216fu);
L_1062216f:;
  /* 1062216f jmp 0x1062214e */
  goto L_1062214e;
L_10622171:;
  /* 10622171 push 0x1064c724 */
  push32((uint32_t)(0x1064c724u));
  /* 10622176 push 0x1064c51c */
  push32((uint32_t)(0x1064c51cu));
  /* 1062217b call 0x10622210 */
  push32(0x10622180u); f_10622210();
  /* 10622180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622183:;
  /* 10622183 push 0x1064c92c */
  push32((uint32_t)(0x1064c92cu));
  /* 10622188 push 0x1064c828 */
  push32((uint32_t)(0x1064c828u));
  /* 1062218d call 0x10622210 */
  push32(0x10622192u); f_10622210();
  /* 10622192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622195 cmp dword ptr [0x1064e454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062219c jne 0x106221be */
  if (!C.zf) goto L_106221be;
  /* 1062219e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106221a0 call 0x10623df0 */
  push32(0x106221a5u); f_10623df0();
  /* 106221a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106221a8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106221ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106221ad je 0x106221be */
  if (C.zf) goto L_106221be;
  /* 106221af mov dword ptr [0x1064e454], 1 */
  w32((uint32_t)(0x1064e454), (0x1u));
  /* 106221b9 call 0x10624700 */
  push32(0x106221beu); f_10624700();
L_106221be:;
  /* 106221be cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106221c2 je 0x106221cb */
  if (C.zf) goto L_106221cb;
  /* 106221c4 call 0x10622200 */
  push32(0x106221c9u); f_10622200();
  /* 106221c9 jmp 0x106221df */
  goto L_106221df;
L_106221cb:;
  /* 106221cb mov dword ptr [0x1064e450], 1 */
  w32((uint32_t)(0x1064e450), (0x1u));
  /* 106221d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106221d8 push ecx */
  push32((uint32_t)(ECX));
  /* 106221d9 call dword ptr [0x10650288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650288))), 0x106221dfu);
L_106221df:;
  /* 106221df mov esp, ebp */
  ESP = (EBP);
  /* 106221e1 pop ebp */
  EBP = (pop32());
  /* 106221e2 ret  */
  ESPCHK(0x10622100u, _esp0);
  ESP += 4; return;
}

/* FUN_100021f0 @ 0x106221f0 (15 bytes, 7 insns) */
void f_106221f0(void) {
  FTRACE(0x106221f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106221f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106221f1 mov ebp, esp */
  EBP = (ESP);
  /* 106221f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 106221f5 call 0x106262e0 */
  push32(0x106221fau); f_106262e0();
  /* 106221fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106221fd pop ebp */
  EBP = (pop32());
  /* 106221fe ret  */
  ESPCHK(0x106221f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x10622200 (15 bytes, 7 insns) */
void f_10622200(void) {
  FTRACE(0x10622200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622200 push ebp */
  push32((uint32_t)(EBP));
  /* 10622201 mov ebp, esp */
  EBP = (ESP);
  /* 10622203 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10622205 call 0x10626380 */
  push32(0x1062220au); f_10626380();
  /* 1062220a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062220d pop ebp */
  EBP = (pop32());
  /* 1062220e ret  */
  ESPCHK(0x10622200u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10622210 (37 bytes, 16 insns) */
void f_10622210(void) {
  FTRACE(0x10622210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622210 push ebp */
  push32((uint32_t)(EBP));
  /* 10622211 mov ebp, esp */
  EBP = (ESP);
L_10622213:;
  /* 10622213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622216 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622219 jae 0x10622233 */
  if (!C.cf) goto L_10622233;
  /* 1062221b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062221e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622221 je 0x10622228 */
  if (C.zf) goto L_10622228;
  /* 10622223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622226 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10622228u);
L_10622228:;
  /* 10622228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062222b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062222e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10622231 jmp 0x10622213 */
  goto L_10622213;
L_10622233:;
  /* 10622233 pop ebp */
  EBP = (pop32());
  /* 10622234 ret  */
  ESPCHK(0x10622210u, _esp0);
  ESP += 4; return;
}

/* FUN_10002240 @ 0x10622240 (130 bytes, 42 insns) */
void f_10622240(void) {
  FTRACE(0x10622240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622240 push ebp */
  push32((uint32_t)(EBP));
  /* 10622241 mov ebp, esp */
  EBP = (ESP);
  /* 10622243 push ecx */
  push32((uint32_t)(ECX));
  /* 10622244 call 0x10626200 */
  push32(0x10622249u); f_10626200();
  /* 10622249 call dword ptr [0x1065029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065029c))), 0x1062224fu);
  /* 1062224f mov dword ptr [0x1064ca5c], eax */
  w32((uint32_t)(0x1064ca5c), (EAX));
  /* 10622254 cmp dword ptr [0x1064ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1064ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062225b jne 0x10622261 */
  if (!C.zf) goto L_10622261;
  /* 1062225d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062225f jmp 0x106222be */
  goto L_106222be;
L_10622261:;
  /* 10622261 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10622263 push 0x106493a0 */
  push32((uint32_t)(0x106493a0u));
  /* 10622268 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062226a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1062226c push 1 */
  push32((uint32_t)(0x1u));
  /* 1062226e call 0x10622cf0 */
  push32(0x10622273u); f_10622cf0();
  /* 10622273 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622276 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622279 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062227d je 0x10622294 */
  if (C.zf) goto L_10622294;
  /* 1062227f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622282 push eax */
  push32((uint32_t)(EAX));
  /* 10622283 mov ecx, dword ptr [0x1064ca5c] */
  ECX = (r32((uint32_t)(0x1064ca5c)));
  /* 10622289 push ecx */
  push32((uint32_t)(ECX));
  /* 1062228a call dword ptr [0x10650298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650298))), 0x10622290u);
  /* 10622290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622292 jne 0x10622298 */
  if (!C.zf) goto L_10622298;
L_10622294:;
  /* 10622294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622296 jmp 0x106222be */
  goto L_106222be;
L_10622298:;
  /* 10622298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062229b push edx */
  push32((uint32_t)(EDX));
  /* 1062229c call 0x10622300 */
  push32(0x106222a1u); f_10622300();
  /* 106222a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106222a4 call dword ptr [0x10650294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650294))), 0x106222aau);
  /* 106222aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106222ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106222af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106222b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 106222b9 mov eax, 1 */
  EAX = (0x1u);
L_106222be:;
  /* 106222be mov esp, ebp */
  ESP = (EBP);
  /* 106222c0 pop ebp */
  EBP = (pop32());
  /* 106222c1 ret  */
  ESPCHK(0x10622240u, _esp0);
  ESP += 4; return;
}

/* FUN_100022d0 @ 0x106222d0 (41 bytes, 11 insns) */
void f_106222d0(void) {
  FTRACE(0x106222d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106222d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106222d1 mov ebp, esp */
  EBP = (ESP);
  /* 106222d3 call 0x10626240 */
  push32(0x106222d8u); f_10626240();
  /* 106222d8 cmp dword ptr [0x1064ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1064ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106222df je 0x106222f7 */
  if (C.zf) goto L_106222f7;
  /* 106222e1 mov eax, dword ptr [0x1064ca5c] */
  EAX = (r32((uint32_t)(0x1064ca5c)));
  /* 106222e6 push eax */
  push32((uint32_t)(EAX));
  /* 106222e7 call dword ptr [0x106502a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502a0))), 0x106222edu);
  /* 106222ed mov dword ptr [0x1064ca5c], 0xffffffff */
  w32((uint32_t)(0x1064ca5c), (0xffffffffu));
L_106222f7:;
  /* 106222f7 pop ebp */
  EBP = (pop32());
  /* 106222f8 ret  */
  ESPCHK(0x106222d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002300 @ 0x10622300 (25 bytes, 8 insns) */
void f_10622300(void) {
  FTRACE(0x10622300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622300 push ebp */
  push32((uint32_t)(EBP));
  /* 10622301 mov ebp, esp */
  EBP = (ESP);
  /* 10622303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622306 mov dword ptr [eax + 0x50], 0x1064cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1064cc00u));
  /* 1062230d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622310 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10622317 pop ebp */
  EBP = (pop32());
  /* 10622318 ret  */
  ESPCHK(0x10622300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x10622320 (152 bytes, 48 insns) */
void f_10622320(void) {
  FTRACE(0x10622320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622320 push ebp */
  push32((uint32_t)(EBP));
  /* 10622321 mov ebp, esp */
  EBP = (ESP);
  /* 10622323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622326 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x1062232cu);
  /* 1062232c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062232f mov eax, dword ptr [0x1064ca5c] */
  EAX = (r32((uint32_t)(0x1064ca5c)));
  /* 10622334 push eax */
  push32((uint32_t)(EAX));
  /* 10622335 call dword ptr [0x106502a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502a8))), 0x1062233bu);
  /* 1062233b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062233e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622342 jne 0x106223a7 */
  if (!C.zf) goto L_106223a7;
  /* 10622344 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10622349 push 0x106493a0 */
  push32((uint32_t)(0x106493a0u));
  /* 1062234e push 2 */
  push32((uint32_t)(0x2u));
  /* 10622350 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10622352 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622354 call 0x10622cf0 */
  push32(0x10622359u); f_10622cf0();
  /* 10622359 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062235c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062235f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622363 je 0x1062239d */
  if (C.zf) goto L_1062239d;
  /* 10622365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622368 push ecx */
  push32((uint32_t)(ECX));
  /* 10622369 mov edx, dword ptr [0x1064ca5c] */
  EDX = (r32((uint32_t)(0x1064ca5c)));
  /* 1062236f push edx */
  push32((uint32_t)(EDX));
  /* 10622370 call dword ptr [0x10650298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650298))), 0x10622376u);
  /* 10622376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622378 je 0x1062239d */
  if (C.zf) goto L_1062239d;
  /* 1062237a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062237d push eax */
  push32((uint32_t)(EAX));
  /* 1062237e call 0x10622300 */
  push32(0x10622383u); f_10622300();
  /* 10622383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622386 call dword ptr [0x10650294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650294))), 0x1062238cu);
  /* 1062238c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062238f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10622391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622394 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1062239b jmp 0x106223a7 */
  goto L_106223a7;
L_1062239d:;
  /* 1062239d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1062239f call 0x10621850 */
  push32(0x106223a4u); f_10621850();
  /* 106223a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106223a7:;
  /* 106223a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106223aa push eax */
  push32((uint32_t)(EAX));
  /* 106223ab call dword ptr [0x106502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502a4))), 0x106223b1u);
  /* 106223b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106223b4 mov esp, ebp */
  ESP = (EBP);
  /* 106223b6 pop ebp */
  EBP = (pop32());
  /* 106223b7 ret  */
  ESPCHK(0x10622320u, _esp0);
  ESP += 4; return;
}

/* FUN_100023c0 @ 0x106223c0 (263 bytes, 86 insns) */
void f_106223c0(void) {
  FTRACE(0x106223c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106223c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106223c1 mov ebp, esp */
  EBP = (ESP);
  /* 106223c3 cmp dword ptr [0x1064ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1064ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106223ca je 0x106224c5 */
  if (C.zf) goto L_106224c5;
  /* 106223d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106223d4 jne 0x106223e5 */
  if (!C.zf) goto L_106223e5;
  /* 106223d6 mov eax, dword ptr [0x1064ca5c] */
  EAX = (r32((uint32_t)(0x1064ca5c)));
  /* 106223db push eax */
  push32((uint32_t)(EAX));
  /* 106223dc call dword ptr [0x106502a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502a8))), 0x106223e2u);
  /* 106223e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106223e5:;
  /* 106223e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106223e9 je 0x106224b6 */
  if (C.zf) goto L_106224b6;
  /* 106223ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106223f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106223f6 je 0x10622409 */
  if (C.zf) goto L_10622409;
  /* 106223f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106223fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106223fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10622400 push eax */
  push32((uint32_t)(EAX));
  /* 10622401 call 0x10623370 */
  push32(0x10622406u); f_10623370();
  /* 10622406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622409:;
  /* 10622409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062240c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622410 je 0x10622423 */
  if (C.zf) goto L_10622423;
  /* 10622412 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622414 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622417 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1062241a push eax */
  push32((uint32_t)(EAX));
  /* 1062241b call 0x10623370 */
  push32(0x10622420u); f_10623370();
  /* 10622420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622423:;
  /* 10622423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622426 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062242a je 0x1062243d */
  if (C.zf) goto L_1062243d;
  /* 1062242c push 2 */
  push32((uint32_t)(0x2u));
  /* 1062242e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622431 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10622434 push eax */
  push32((uint32_t)(EAX));
  /* 10622435 call 0x10623370 */
  push32(0x1062243au); f_10623370();
  /* 1062243a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062243d:;
  /* 1062243d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622440 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622444 je 0x10622457 */
  if (C.zf) goto L_10622457;
  /* 10622446 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062244b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1062244e push eax */
  push32((uint32_t)(EAX));
  /* 1062244f call 0x10623370 */
  push32(0x10622454u); f_10623370();
  /* 10622454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622457:;
  /* 10622457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062245a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062245e je 0x10622471 */
  if (C.zf) goto L_10622471;
  /* 10622460 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622462 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622465 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10622468 push eax */
  push32((uint32_t)(EAX));
  /* 10622469 call 0x10623370 */
  push32(0x1062246eu); f_10623370();
  /* 1062246e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622471:;
  /* 10622471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622474 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622478 je 0x1062248b */
  if (C.zf) goto L_1062248b;
  /* 1062247a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062247c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062247f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10622482 push eax */
  push32((uint32_t)(EAX));
  /* 10622483 call 0x10623370 */
  push32(0x10622488u); f_10623370();
  /* 10622488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062248b:;
  /* 1062248b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062248e cmp dword ptr [ecx + 0x50], 0x1064cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1064cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622495 je 0x106224a8 */
  if (C.zf) goto L_106224a8;
  /* 10622497 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062249c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1062249f push eax */
  push32((uint32_t)(EAX));
  /* 106224a0 call 0x10623370 */
  push32(0x106224a5u); f_10623370();
  /* 106224a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106224a8:;
  /* 106224a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106224aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106224ad push ecx */
  push32((uint32_t)(ECX));
  /* 106224ae call 0x10623370 */
  push32(0x106224b3u); f_10623370();
  /* 106224b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106224b6:;
  /* 106224b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106224b8 mov edx, dword ptr [0x1064ca5c] */
  EDX = (r32((uint32_t)(0x1064ca5c)));
  /* 106224be push edx */
  push32((uint32_t)(EDX));
  /* 106224bf call dword ptr [0x10650298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650298))), 0x106224c5u);
L_106224c5:;
  /* 106224c5 pop ebp */
  EBP = (pop32());
  /* 106224c6 ret  */
  ESPCHK(0x106223c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024d0 @ 0x106224d0 (11 bytes, 5 insns) */
void f_106224d0(void) {
  FTRACE(0x106224d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106224d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106224d1 mov ebp, esp */
  EBP = (ESP);
  /* 106224d3 call dword ptr [0x10650294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650294))), 0x106224d9u);
  /* 106224d9 pop ebp */
  EBP = (pop32());
  /* 106224da ret  */
  ESPCHK(0x106224d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024e0 @ 0x106224e0 (11 bytes, 5 insns) */
void f_106224e0(void) {
  FTRACE(0x106224e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106224e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106224e1 mov ebp, esp */
  EBP = (ESP);
  /* 106224e3 call dword ptr [0x106502b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502b0))), 0x106224e9u);
  /* 106224e9 pop ebp */
  EBP = (pop32());
  /* 106224ea ret  */
  ESPCHK(0x106224e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024f0 @ 0x106224f0 (804 bytes, 236 insns) */
void f_106224f0(void) {
  FTRACE(0x106224f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106224f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106224f1 mov ebp, esp */
  EBP = (ESP);
  /* 106224f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106224f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 106224fb push 0x106493ac */
  push32((uint32_t)(0x106493acu));
  /* 10622500 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622502 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10622507 call 0x106228e0 */
  push32(0x1062250cu); f_106228e0();
  /* 1062250c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062250f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10622512 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622516 jne 0x10622522 */
  if (!C.zf) goto L_10622522;
  /* 10622518 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1062251a call 0x10621850 */
  push32(0x1062251fu); f_10621850();
  /* 1062251f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10622522:;
  /* 10622522 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622525 mov dword ptr [0x1064fde0], eax */
  w32((uint32_t)(0x1064fde0), (EAX));
  /* 1062252a mov dword ptr [0x1064ff1c], 0x20 */
  w32((uint32_t)(0x1064ff1c), (0x20u));
  /* 10622534 jmp 0x1062253f */
  goto L_1062253f;
L_10622536:;
  /* 10622536 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622539 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062253c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1062253f:;
  /* 1062253f mov edx, dword ptr [0x1064fde0] */
  EDX = (r32((uint32_t)(0x1064fde0)));
  /* 10622545 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062254b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062254e jae 0x10622573 */
  if (!C.cf) goto L_10622573;
  /* 10622550 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622553 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10622557 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062255a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10622560 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622563 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10622567 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062256a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10622571 jmp 0x10622536 */
  goto L_10622536;
L_10622573:;
  /* 10622573 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10622576 push ecx */
  push32((uint32_t)(ECX));
  /* 10622577 call dword ptr [0x106502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502bc))), 0x1062257du);
  /* 1062257d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10622580 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10622586 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622588 je 0x10622715 */
  if (C.zf) goto L_10622715;
  /* 1062258e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622592 je 0x10622715 */
  if (C.zf) goto L_10622715;
  /* 10622598 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062259b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1062259d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 106225a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106225a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106225a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106225a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106225ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106225af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 106225b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106225b9 jge 0x106225c3 */
  if ((C.sf==C.of)) goto L_106225c3;
  /* 106225bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 106225be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 106225c1 jmp 0x106225ca */
  goto L_106225ca;
L_106225c3:;
  /* 106225c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_106225ca:;
  /* 106225ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 106225cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106225d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 106225d7 jmp 0x106225e2 */
  goto L_106225e2;
L_106225d9:;
  /* 106225d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106225dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106225df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_106225e2:;
  /* 106225e2 mov ecx, dword ptr [0x1064ff1c] */
  ECX = (r32((uint32_t)(0x1064ff1c)));
  /* 106225e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106225eb jge 0x10622682 */
  if ((C.sf==C.of)) goto L_10622682;
  /* 106225f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106225f6 push 0x106493ac */
  push32((uint32_t)(0x106493acu));
  /* 106225fb push 2 */
  push32((uint32_t)(0x2u));
  /* 106225fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10622602 call 0x106228e0 */
  push32(0x10622607u); f_106228e0();
  /* 10622607 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062260a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1062260d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622611 jne 0x1062261e */
  if (!C.zf) goto L_1062261e;
  /* 10622613 mov edx, dword ptr [0x1064ff1c] */
  EDX = (r32((uint32_t)(0x1064ff1c)));
  /* 10622619 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1062261c jmp 0x10622682 */
  goto L_10622682;
L_1062261e:;
  /* 1062261e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10622621 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622624 mov dword ptr [eax*4 + 0x1064fde0], ecx */
  w32((uint32_t)(EAX*4 + 0x1064fde0), (ECX));
  /* 1062262b mov edx, dword ptr [0x1064ff1c] */
  EDX = (r32((uint32_t)(0x1064ff1c)));
  /* 10622631 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622634 mov dword ptr [0x1064ff1c], edx */
  w32((uint32_t)(0x1064ff1c), (EDX));
  /* 1062263a jmp 0x10622645 */
  goto L_10622645;
L_1062263c:;
  /* 1062263c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062263f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622642 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10622645:;
  /* 10622645 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10622648 mov edx, dword ptr [ecx*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064fde0)));
  /* 1062264f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622655 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622658 jae 0x1062267d */
  if (!C.cf) goto L_1062267d;
  /* 1062265a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062265d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10622661 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622664 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1062266a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062266d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10622671 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622674 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1062267b jmp 0x1062263c */
  goto L_1062263c;
L_1062267d:;
  /* 1062267d jmp 0x106225d9 */
  goto L_106225d9;
L_10622682:;
  /* 10622682 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10622689 jmp 0x106226a6 */
  goto L_106226a6;
L_1062268b:;
  /* 1062268b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1062268e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622691 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10622694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622697 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062269a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062269d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 106226a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106226a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_106226a6:;
  /* 106226a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106226a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106226ac jge 0x10622715 */
  if ((C.sf==C.of)) goto L_10622715;
  /* 106226ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 106226b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106226b4 je 0x10622710 */
  if (C.zf) goto L_10622710;
  /* 106226b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106226b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106226bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106226bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106226c1 je 0x10622710 */
  if (C.zf) goto L_10622710;
  /* 106226c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106226c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106226c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 106226cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106226ce jne 0x106226e0 */
  if (!C.zf) goto L_106226e0;
  /* 106226d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106226d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106226d5 push edx */
  push32((uint32_t)(EDX));
  /* 106226d6 call dword ptr [0x106502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502b8))), 0x106226dcu);
  /* 106226dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106226de je 0x10622710 */
  if (C.zf) goto L_10622710;
L_106226e0:;
  /* 106226e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106226e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106226e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106226e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106226ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106226ef mov edx, dword ptr [eax*4 + 0x1064fde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 106226f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106226f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106226fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106226fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10622701 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10622703 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10622705 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622708 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062270b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062270d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10622710:;
  /* 10622710 jmp 0x1062268b */
  goto L_1062268b;
L_10622715:;
  /* 10622715 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1062271c jmp 0x10622727 */
  goto L_10622727;
L_1062271e:;
  /* 1062271e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10622721 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622724 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10622727:;
  /* 10622727 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062272b jge 0x10622804 */
  if ((C.sf==C.of)) goto L_10622804;
  /* 10622731 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10622734 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10622737 mov edx, dword ptr [0x1064fde0] */
  EDX = (r32((uint32_t)(0x1064fde0)));
  /* 1062273d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062273f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10622742 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622745 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622748 jne 0x106227f0 */
  if (!C.zf) goto L_106227f0;
  /* 1062274e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10622751 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10622755 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622759 jne 0x10622764 */
  if (!C.zf) goto L_10622764;
  /* 1062275b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10622762 jmp 0x10622774 */
  goto L_10622774;
L_10622764:;
  /* 10622764 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10622767 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062276a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062276c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062276e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622771 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10622774:;
  /* 10622774 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10622777 push eax */
  push32((uint32_t)(EAX));
  /* 10622778 call dword ptr [0x10650268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650268))), 0x1062277eu);
  /* 1062277e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10622781 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622785 je 0x106227df */
  if (C.zf) goto L_106227df;
  /* 10622787 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1062278a push ecx */
  push32((uint32_t)(ECX));
  /* 1062278b call dword ptr [0x106502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502b8))), 0x10622791u);
  /* 10622791 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10622794 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622798 je 0x106227df */
  if (C.zf) goto L_106227df;
  /* 1062279a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062279d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106227a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106227a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 106227a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106227ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106227ae jne 0x106227c0 */
  if (!C.zf) goto L_106227c0;
  /* 106227b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106227b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 106227b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 106227be jmp 0x106227dd */
  goto L_106227dd;
L_106227c0:;
  /* 106227c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 106227c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106227c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106227cc jne 0x106227dd */
  if (!C.zf) goto L_106227dd;
  /* 106227ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106227d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 106227d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106227dd:;
  /* 106227dd jmp 0x106227ee */
  goto L_106227ee;
L_106227df:;
  /* 106227df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106227e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106227e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106227ee:;
  /* 106227ee jmp 0x106227ff */
  goto L_106227ff;
L_106227f0:;
  /* 106227f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106227f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 106227f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106227fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106227ff:;
  /* 106227ff jmp 0x1062271e */
  goto L_1062271e;
L_10622804:;
  /* 10622804 mov eax, dword ptr [0x1064ff1c] */
  EAX = (r32((uint32_t)(0x1064ff1c)));
  /* 10622809 push eax */
  push32((uint32_t)(EAX));
  /* 1062280a call dword ptr [0x106502b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502b4))), 0x10622810u);
  /* 10622810 mov esp, ebp */
  ESP = (EBP);
  /* 10622812 pop ebp */
  EBP = (pop32());
  /* 10622813 ret  */
  ESPCHK(0x106224f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10622820 (155 bytes, 45 insns) */
void f_10622820(void) {
  FTRACE(0x10622820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622820 push ebp */
  push32((uint32_t)(EBP));
  /* 10622821 mov ebp, esp */
  EBP = (ESP);
  /* 10622823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622826 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062282d jmp 0x10622838 */
  goto L_10622838;
L_1062282f:;
  /* 1062282f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622832 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622835 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10622838:;
  /* 10622838 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062283c jge 0x106228b7 */
  if ((C.sf==C.of)) goto L_106228b7;
  /* 1062283e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622841 cmp dword ptr [ecx*4 + 0x1064fde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1064fde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622849 je 0x106228b2 */
  if (C.zf) goto L_106228b2;
  /* 1062284b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062284e mov eax, dword ptr [edx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 10622855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622858 jmp 0x10622863 */
  goto L_10622863;
L_1062285a:;
  /* 1062285a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062285d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622860 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10622863:;
  /* 10622863 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622866 mov eax, dword ptr [edx*4 + 0x1064fde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064fde0)));
  /* 1062286d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622872 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622875 jae 0x1062288f */
  if (!C.cf) goto L_1062288f;
  /* 10622877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062287a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062287e je 0x1062288d */
  if (C.zf) goto L_1062288d;
  /* 10622880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622883 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622886 push edx */
  push32((uint32_t)(EDX));
  /* 10622887 call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x1062288du);
L_1062288d:;
  /* 1062288d jmp 0x1062285a */
  goto L_1062285a;
L_1062288f:;
  /* 1062288f push 2 */
  push32((uint32_t)(0x2u));
  /* 10622891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622894 mov ecx, dword ptr [eax*4 + 0x1064fde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064fde0)));
  /* 1062289b push ecx */
  push32((uint32_t)(ECX));
  /* 1062289c call 0x10623370 */
  push32(0x106228a1u); f_10623370();
  /* 106228a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106228a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106228a7 mov dword ptr [edx*4 + 0x1064fde0], 0 */
  w32((uint32_t)(EDX*4 + 0x1064fde0), (0x0u));
L_106228b2:;
  /* 106228b2 jmp 0x1062282f */
  goto L_1062282f;
L_106228b7:;
  /* 106228b7 mov esp, ebp */
  ESP = (EBP);
  /* 106228b9 pop ebp */
  EBP = (pop32());
  /* 106228ba ret  */
  ESPCHK(0x10622820u, _esp0);
  ESP += 4; return;
}

/* FUN_100028c0 @ 0x106228c0 (29 bytes, 13 insns) */
void f_106228c0(void) {
  FTRACE(0x106228c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106228c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106228c1 mov ebp, esp */
  EBP = (ESP);
  /* 106228c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106228c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106228c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106228c9 mov eax, dword ptr [0x1064e5f8] */
  EAX = (r32((uint32_t)(0x1064e5f8)));
  /* 106228ce push eax */
  push32((uint32_t)(EAX));
  /* 106228cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106228d2 push ecx */
  push32((uint32_t)(ECX));
  /* 106228d3 call 0x10622930 */
  push32(0x106228d8u); f_10622930();
  /* 106228d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106228db pop ebp */
  EBP = (pop32());
  /* 106228dc ret  */
  ESPCHK(0x106228c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e0 @ 0x106228e0 (35 bytes, 16 insns) */
void f_106228e0(void) {
  FTRACE(0x106228e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106228e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106228e1 mov ebp, esp */
  EBP = (ESP);
  /* 106228e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106228e6 push eax */
  push32((uint32_t)(EAX));
  /* 106228e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106228ea push ecx */
  push32((uint32_t)(ECX));
  /* 106228eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106228ee push edx */
  push32((uint32_t)(EDX));
  /* 106228ef mov eax, dword ptr [0x1064e5f8] */
  EAX = (r32((uint32_t)(0x1064e5f8)));
  /* 106228f4 push eax */
  push32((uint32_t)(EAX));
  /* 106228f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106228f8 push ecx */
  push32((uint32_t)(ECX));
  /* 106228f9 call 0x10622930 */
  push32(0x106228feu); f_10622930();
  /* 106228fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622901 pop ebp */
  EBP = (pop32());
  /* 10622902 ret  */
  ESPCHK(0x106228e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002910 @ 0x10622910 (27 bytes, 13 insns) */
void f_10622910(void) {
  FTRACE(0x10622910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622910 push ebp */
  push32((uint32_t)(EBP));
  /* 10622911 mov ebp, esp */
  EBP = (ESP);
  /* 10622913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622917 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622919 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062291c push eax */
  push32((uint32_t)(EAX));
  /* 1062291d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622920 push ecx */
  push32((uint32_t)(ECX));
  /* 10622921 call 0x10622930 */
  push32(0x10622926u); f_10622930();
  /* 10622926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622929 pop ebp */
  EBP = (pop32());
  /* 1062292a ret  */
  ESPCHK(0x10622910u, _esp0);
  ESP += 4; return;
}

/* FUN_10002930 @ 0x10622930 (94 bytes, 38 insns) */
void f_10622930(void) {
  FTRACE(0x10622930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622930 push ebp */
  push32((uint32_t)(EBP));
  /* 10622931 mov ebp, esp */
  EBP = (ESP);
  /* 10622933 push ecx */
  push32((uint32_t)(ECX));
L_10622934:;
  /* 10622934 push 9 */
  push32((uint32_t)(0x9u));
  /* 10622936 call 0x106262e0 */
  push32(0x1062293bu); f_106262e0();
  /* 1062293b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062293e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622941 push eax */
  push32((uint32_t)(EAX));
  /* 10622942 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622945 push ecx */
  push32((uint32_t)(ECX));
  /* 10622946 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622949 push edx */
  push32((uint32_t)(EDX));
  /* 1062294a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062294d push eax */
  push32((uint32_t)(EAX));
  /* 1062294e call 0x106229b0 */
  push32(0x10622953u); f_106229b0();
  /* 10622953 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622956 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622959 push 9 */
  push32((uint32_t)(0x9u));
  /* 1062295b call 0x10626380 */
  push32(0x10622960u); f_10626380();
  /* 10622960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622963 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622967 jne 0x1062296f */
  if (!C.zf) goto L_1062296f;
  /* 10622969 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062296d jne 0x10622974 */
  if (!C.zf) goto L_10622974;
L_1062296f:;
  /* 1062296f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622972 jmp 0x1062298a */
  goto L_1062298a;
L_10622974:;
  /* 10622974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622977 push ecx */
  push32((uint32_t)(ECX));
  /* 10622978 call 0x10626620 */
  push32(0x1062297du); f_10626620();
  /* 1062297d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622982 jne 0x10622988 */
  if (!C.zf) goto L_10622988;
  /* 10622984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622986 jmp 0x1062298a */
  goto L_1062298a;
L_10622988:;
  /* 10622988 jmp 0x10622934 */
  goto L_10622934;
L_1062298a:;
  /* 1062298a mov esp, ebp */
  ESP = (EBP);
  /* 1062298c pop ebp */
  EBP = (pop32());
  /* 1062298d ret  */
  ESPCHK(0x10622930u, _esp0);
  ESP += 4; return;
}

/* FUN_10002990 @ 0x10622990 (23 bytes, 11 insns) */
void f_10622990(void) {
  FTRACE(0x10622990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622990 push ebp */
  push32((uint32_t)(EBP));
  /* 10622991 mov ebp, esp */
  EBP = (ESP);
  /* 10622993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622997 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062299c push eax */
  push32((uint32_t)(EAX));
  /* 1062299d call 0x106229b0 */
  push32(0x106229a2u); f_106229b0();
  /* 106229a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106229a5 pop ebp */
  EBP = (pop32());
  /* 106229a6 ret  */
  ESPCHK(0x10622990u, _esp0);
  ESP += 4; return;
}

/* FUN_100029b0 @ 0x106229b0 (787 bytes, 254 insns) */
void f_106229b0(void) {
  FTRACE(0x106229b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106229b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106229b1 mov ebp, esp */
  EBP = (ESP);
  /* 106229b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106229b6 push ebx */
  push32((uint32_t)(EBX));
  /* 106229b7 push esi */
  push32((uint32_t)(ESI));
  /* 106229b8 push edi */
  push32((uint32_t)(EDI));
  /* 106229b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106229c0 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 106229c5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106229c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106229ca je 0x106229fc */
  if (C.zf) goto L_106229fc;
L_106229cc:;
  /* 106229cc call 0x10623a80 */
  push32(0x106229d1u); f_10623a80();
  /* 106229d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106229d3 jne 0x106229f6 */
  if (!C.zf) goto L_106229f6;
  /* 106229d5 push 0x106494a0 */
  push32((uint32_t)(0x106494a0u));
  /* 106229da push 0 */
  push32((uint32_t)(0x0u));
  /* 106229dc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 106229e1 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106229e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 106229e8 call 0x106219a0 */
  push32(0x106229edu); f_106219a0();
  /* 106229ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106229f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106229f3 jne 0x106229f6 */
  if (!C.zf) goto L_106229f6;
  /* 106229f5 int3  */
  x86_unimpl("int3 @ 0x106229f5");
L_106229f6:;
  /* 106229f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106229f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106229fa jne 0x106229cc */
  if (!C.zf) goto L_106229cc;
L_106229fc:;
  /* 106229fc mov edx, dword ptr [0x1064ca88] */
  EDX = (r32((uint32_t)(0x1064ca88)));
  /* 10622a02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10622a05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622a08 cmp eax, dword ptr [0x1064ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622a0e jne 0x10622a11 */
  if (!C.zf) goto L_10622a11;
  /* 10622a10 int3  */
  x86_unimpl("int3 @ 0x10622a10");
L_10622a11:;
  /* 10622a11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622a14 push ecx */
  push32((uint32_t)(ECX));
  /* 10622a15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622a18 push edx */
  push32((uint32_t)(EDX));
  /* 10622a19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622a1c push eax */
  push32((uint32_t)(EAX));
  /* 10622a1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10622a21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622a24 push edx */
  push32((uint32_t)(EDX));
  /* 10622a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622a29 call dword ptr [0x1064cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064cc90))), 0x10622a2fu);
  /* 10622a2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622a34 jne 0x10622a94 */
  if (!C.zf) goto L_10622a94;
  /* 10622a36 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622a3a je 0x10622a67 */
  if (C.zf) goto L_10622a67;
L_10622a3c:;
  /* 10622a3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622a3f push eax */
  push32((uint32_t)(EAX));
  /* 10622a40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10622a44 push 0x1064945c */
  push32((uint32_t)(0x1064945cu));
  /* 10622a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a51 call 0x106219a0 */
  push32(0x10622a56u); f_106219a0();
  /* 10622a56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622a5c jne 0x10622a5f */
  if (!C.zf) goto L_10622a5f;
  /* 10622a5e int3  */
  x86_unimpl("int3 @ 0x10622a5e");
L_10622a5f:;
  /* 10622a5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10622a61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622a63 jne 0x10622a3c */
  if (!C.zf) goto L_10622a3c;
  /* 10622a65 jmp 0x10622a8d */
  goto L_10622a8d;
L_10622a67:;
  /* 10622a67 push 0x10649438 */
  push32((uint32_t)(0x10649438u));
  /* 10622a6c push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10622a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622a79 call 0x106219a0 */
  push32(0x10622a7eu); f_106219a0();
  /* 10622a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622a84 jne 0x10622a87 */
  if (!C.zf) goto L_10622a87;
  /* 10622a86 int3  */
  x86_unimpl("int3 @ 0x10622a86");
L_10622a87:;
  /* 10622a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622a8b jne 0x10622a67 */
  if (!C.zf) goto L_10622a67;
L_10622a8d:;
  /* 10622a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622a8f jmp 0x10622cbc */
  goto L_10622cbc;
L_10622a94:;
  /* 10622a94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622a97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10622a9d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622aa0 je 0x10622ab6 */
  if (C.zf) goto L_10622ab6;
  /* 10622aa2 mov edx, dword ptr [0x1064ca84] */
  EDX = (r32((uint32_t)(0x1064ca84)));
  /* 10622aa8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10622aab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622aad jne 0x10622ab6 */
  if (!C.zf) goto L_10622ab6;
  /* 10622aaf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10622ab6:;
  /* 10622ab6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622aba ja 0x10622ac7 */
  if ((!C.cf&&!C.zf)) goto L_10622ac7;
  /* 10622abc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622abf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622ac2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ac5 jbe 0x10622af3 */
  if ((C.cf||C.zf)) goto L_10622af3;
L_10622ac7:;
  /* 10622ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622aca push ecx */
  push32((uint32_t)(ECX));
  /* 10622acb push 0x10649410 */
  push32((uint32_t)(0x10649410u));
  /* 10622ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622ad8 call 0x106219a0 */
  push32(0x10622addu); f_106219a0();
  /* 10622add add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ae3 jne 0x10622ae6 */
  if (!C.zf) goto L_10622ae6;
  /* 10622ae5 int3  */
  x86_unimpl("int3 @ 0x10622ae5");
L_10622ae6:;
  /* 10622ae6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10622ae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622aea jne 0x10622ac7 */
  if (!C.zf) goto L_10622ac7;
  /* 10622aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622aee jmp 0x10622cbc */
  goto L_10622cbc;
L_10622af3:;
  /* 10622af3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622af6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10622afb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622afe je 0x10622b40 */
  if (C.zf) goto L_10622b40;
  /* 10622b00 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b04 je 0x10622b40 */
  if (C.zf) goto L_10622b40;
  /* 10622b06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622b09 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10622b0f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b12 je 0x10622b40 */
  if (C.zf) goto L_10622b40;
  /* 10622b14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b18 je 0x10622b40 */
  if (C.zf) goto L_10622b40;
L_10622b1a:;
  /* 10622b1a push 0x106493dc */
  push32((uint32_t)(0x106493dcu));
  /* 10622b1f push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10622b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10622b2c call 0x106219a0 */
  push32(0x10622b31u); f_106219a0();
  /* 10622b31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b37 jne 0x10622b3a */
  if (!C.zf) goto L_10622b3a;
  /* 10622b39 int3  */
  x86_unimpl("int3 @ 0x10622b39");
L_10622b3a:;
  /* 10622b3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10622b3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622b3e jne 0x10622b1a */
  if (!C.zf) goto L_10622b1a;
L_10622b40:;
  /* 10622b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622b43 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622b46 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10622b49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10622b4c push ecx */
  push32((uint32_t)(ECX));
  /* 10622b4d call 0x10626730 */
  push32(0x10622b52u); f_10626730();
  /* 10622b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622b55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622b58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b5c jne 0x10622b65 */
  if (!C.zf) goto L_10622b65;
  /* 10622b5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622b60 jmp 0x10622cbc */
  goto L_10622cbc;
L_10622b65:;
  /* 10622b65 mov edx, dword ptr [0x1064ca88] */
  EDX = (r32((uint32_t)(0x1064ca88)));
  /* 10622b6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622b6e mov dword ptr [0x1064ca88], edx */
  w32((uint32_t)(0x1064ca88), (EDX));
  /* 10622b74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622b78 je 0x10622bc3 */
  if (C.zf) goto L_10622bc3;
  /* 10622b7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622b7d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10622b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622b86 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10622b8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622b90 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10622b97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622b9a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10622ba1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622ba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622ba7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10622baa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622bad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10622bb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622bb7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10622bbe jmp 0x10622c63 */
  goto L_10622c63;
L_10622bc3:;
  /* 10622bc3 mov edx, dword ptr [0x1064e45c] */
  EDX = (r32((uint32_t)(0x1064e45c)));
  /* 10622bc9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622bcc mov dword ptr [0x1064e45c], edx */
  w32((uint32_t)(0x1064e45c), (EDX));
  /* 10622bd2 mov eax, dword ptr [0x1064e464] */
  EAX = (r32((uint32_t)(0x1064e464)));
  /* 10622bd7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622bda mov dword ptr [0x1064e464], eax */
  w32((uint32_t)(0x1064e464), (EAX));
  /* 10622bdf mov ecx, dword ptr [0x1064e464] */
  ECX = (r32((uint32_t)(0x1064e464)));
  /* 10622be5 cmp ecx, dword ptr [0x1064e468] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064e468))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622beb jbe 0x10622bf9 */
  if ((C.cf||C.zf)) goto L_10622bf9;
  /* 10622bed mov edx, dword ptr [0x1064e464] */
  EDX = (r32((uint32_t)(0x1064e464)));
  /* 10622bf3 mov dword ptr [0x1064e468], edx */
  w32((uint32_t)(0x1064e468), (EDX));
L_10622bf9:;
  /* 10622bf9 cmp dword ptr [0x1064e460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622c00 je 0x10622c0f */
  if (C.zf) goto L_10622c0f;
  /* 10622c02 mov eax, dword ptr [0x1064e460] */
  EAX = (r32((uint32_t)(0x1064e460)));
  /* 10622c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10622c0d jmp 0x10622c18 */
  goto L_10622c18;
L_10622c0f:;
  /* 10622c0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c12 mov dword ptr [0x1064e458], edx */
  w32((uint32_t)(0x1064e458), (EDX));
L_10622c18:;
  /* 10622c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c1b mov ecx, dword ptr [0x1064e460] */
  ECX = (r32((uint32_t)(0x1064e460)));
  /* 10622c21 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10622c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c26 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10622c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622c33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10622c36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622c3c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10622c3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622c45 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10622c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622c4e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10622c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622c57 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10622c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c5d mov dword ptr [0x1064e460], ecx */
  w32((uint32_t)(0x1064e460), (ECX));
L_10622c63:;
  /* 10622c63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10622c65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10622c67 mov dl, byte ptr [0x1064ca90] */
  DL = (r8((uint32_t)(0x1064ca90)));
  /* 10622c6d push edx */
  push32((uint32_t)(EDX));
  /* 10622c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c71 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622c74 push eax */
  push32((uint32_t)(EAX));
  /* 10622c75 call 0x10626650 */
  push32(0x10622c7au); f_10626650();
  /* 10622c7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622c7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10622c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10622c81 mov cl, byte ptr [0x1064ca90] */
  CL = (r8((uint32_t)(0x1064ca90)));
  /* 10622c87 push ecx */
  push32((uint32_t)(ECX));
  /* 10622c88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622c8e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10622c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10622c93 call 0x10626650 */
  push32(0x10622c98u); f_10626650();
  /* 10622c98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622c9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622c9e push edx */
  push32((uint32_t)(EDX));
  /* 10622c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622ca1 mov al, byte ptr [0x1064ca92] */
  AL = (r8((uint32_t)(0x1064ca92)));
  /* 10622ca6 push eax */
  push32((uint32_t)(EAX));
  /* 10622ca7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622caa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622cad push ecx */
  push32((uint32_t)(ECX));
  /* 10622cae call 0x10626650 */
  push32(0x10622cb3u); f_10626650();
  /* 10622cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622cb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622cb9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10622cbc:;
  /* 10622cbc pop edi */
  EDI = (pop32());
  /* 10622cbd pop esi */
  ESI = (pop32());
  /* 10622cbe pop ebx */
  EBX = (pop32());
  /* 10622cbf mov esp, ebp */
  ESP = (EBP);
  /* 10622cc1 pop ebp */
  EBP = (pop32());
  /* 10622cc2 ret  */
  ESPCHK(0x106229b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cd0 @ 0x10622cd0 (27 bytes, 13 insns) */
void f_10622cd0(void) {
  FTRACE(0x10622cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10622cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10622cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622cd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622cdc push eax */
  push32((uint32_t)(EAX));
  /* 10622cdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 10622ce1 call 0x10622cf0 */
  push32(0x10622ce6u); f_10622cf0();
  /* 10622ce6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622ce9 pop ebp */
  EBP = (pop32());
  /* 10622cea ret  */
  ESPCHK(0x10622cd0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10622cf0 (96 bytes, 37 insns) */
void f_10622cf0(void) {
  FTRACE(0x10622cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10622cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10622cf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622cf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622cf9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10622cfd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10622d00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622d03 push ecx */
  push32((uint32_t)(ECX));
  /* 10622d04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622d07 push edx */
  push32((uint32_t)(EDX));
  /* 10622d08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622d0b push eax */
  push32((uint32_t)(EAX));
  /* 10622d0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10622d10 call 0x106228e0 */
  push32(0x10622d15u); f_106228e0();
  /* 10622d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10622d1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622d1f je 0x10622d49 */
  if (C.zf) goto L_10622d49;
  /* 10622d21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622d24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10622d27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10622d2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10622d30:;
  /* 10622d30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10622d33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622d36 jae 0x10622d49 */
  if (!C.cf) goto L_10622d49;
  /* 10622d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10622d3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10622d3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10622d41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10622d47 jmp 0x10622d30 */
  goto L_10622d30;
L_10622d49:;
  /* 10622d49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622d4c mov esp, ebp */
  ESP = (EBP);
  /* 10622d4e pop ebp */
  EBP = (pop32());
  /* 10622d4f ret  */
  ESPCHK(0x10622cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d50 @ 0x10622d50 (27 bytes, 13 insns) */
void f_10622d50(void) {
  FTRACE(0x10622d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10622d51 mov ebp, esp */
  EBP = (ESP);
  /* 10622d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622d59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622d5c push eax */
  push32((uint32_t)(EAX));
  /* 10622d5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10622d61 call 0x10622d70 */
  push32(0x10622d66u); f_10622d70();
  /* 10622d66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d69 pop ebp */
  EBP = (pop32());
  /* 10622d6a ret  */
  ESPCHK(0x10622d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x10622d70 (64 bytes, 27 insns) */
void f_10622d70(void) {
  FTRACE(0x10622d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10622d71 mov ebp, esp */
  EBP = (ESP);
  /* 10622d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10622d74 push 9 */
  push32((uint32_t)(0x9u));
  /* 10622d76 call 0x106262e0 */
  push32(0x10622d7bu); f_106262e0();
  /* 10622d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10622d80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622d83 push eax */
  push32((uint32_t)(EAX));
  /* 10622d84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622d87 push ecx */
  push32((uint32_t)(ECX));
  /* 10622d88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622d8b push edx */
  push32((uint32_t)(EDX));
  /* 10622d8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622d8f push eax */
  push32((uint32_t)(EAX));
  /* 10622d90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10622d94 call 0x10622db0 */
  push32(0x10622d99u); f_10622db0();
  /* 10622d99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622d9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10622d9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10622da1 call 0x10626380 */
  push32(0x10622da6u); f_10626380();
  /* 10622da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10622dac mov esp, ebp */
  ESP = (EBP);
  /* 10622dae pop ebp */
  EBP = (pop32());
  /* 10622daf ret  */
  ESPCHK(0x10622d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x10622db0 (1297 bytes, 431 insns) */
void f_10622db0(void) {
  FTRACE(0x10622db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10622db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10622db1 mov ebp, esp */
  EBP = (ESP);
  /* 10622db3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622db6 push ebx */
  push32((uint32_t)(EBX));
  /* 10622db7 push esi */
  push32((uint32_t)(ESI));
  /* 10622db8 push edi */
  push32((uint32_t)(EDI));
  /* 10622db9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10622dc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622dc4 jne 0x10622de3 */
  if (!C.zf) goto L_10622de3;
  /* 10622dc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10622dca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622dcd push ecx */
  push32((uint32_t)(ECX));
  /* 10622dce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622dd1 push edx */
  push32((uint32_t)(EDX));
  /* 10622dd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622dd5 push eax */
  push32((uint32_t)(EAX));
  /* 10622dd6 call 0x106228e0 */
  push32(0x10622ddbu); f_106228e0();
  /* 10622ddb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622dde jmp 0x106232ba */
  goto L_106232ba;
L_10622de3:;
  /* 10622de3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622de7 je 0x10622e06 */
  if (C.zf) goto L_10622e06;
  /* 10622de9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ded jne 0x10622e06 */
  if (!C.zf) goto L_10622e06;
  /* 10622def mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622df2 push ecx */
  push32((uint32_t)(ECX));
  /* 10622df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622df6 push edx */
  push32((uint32_t)(EDX));
  /* 10622df7 call 0x10623370 */
  push32(0x10622dfcu); f_10623370();
  /* 10622dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622dff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622e01 jmp 0x106232ba */
  goto L_106232ba;
L_10622e06:;
  /* 10622e06 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 10622e0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10622e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622e10 je 0x10622e42 */
  if (C.zf) goto L_10622e42;
L_10622e12:;
  /* 10622e12 call 0x10623a80 */
  push32(0x10622e17u); f_10623a80();
  /* 10622e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622e19 jne 0x10622e3c */
  if (!C.zf) goto L_10622e3c;
  /* 10622e1b push 0x106494a0 */
  push32((uint32_t)(0x106494a0u));
  /* 10622e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622e22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10622e27 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10622e2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10622e2e call 0x106219a0 */
  push32(0x10622e33u); f_106219a0();
  /* 10622e33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622e36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622e39 jne 0x10622e3c */
  if (!C.zf) goto L_10622e3c;
  /* 10622e3b int3  */
  x86_unimpl("int3 @ 0x10622e3b");
L_10622e3c:;
  /* 10622e3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10622e3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10622e40 jne 0x10622e12 */
  if (!C.zf) goto L_10622e12;
L_10622e42:;
  /* 10622e42 mov edx, dword ptr [0x1064ca88] */
  EDX = (r32((uint32_t)(0x1064ca88)));
  /* 10622e48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10622e4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10622e4e cmp eax, dword ptr [0x1064ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622e54 jne 0x10622e57 */
  if (!C.zf) goto L_10622e57;
  /* 10622e56 int3  */
  x86_unimpl("int3 @ 0x10622e56");
L_10622e57:;
  /* 10622e57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622e5a push ecx */
  push32((uint32_t)(ECX));
  /* 10622e5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622e5e push edx */
  push32((uint32_t)(EDX));
  /* 10622e5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10622e62 push eax */
  push32((uint32_t)(EAX));
  /* 10622e63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622e66 push ecx */
  push32((uint32_t)(ECX));
  /* 10622e67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622e6a push edx */
  push32((uint32_t)(EDX));
  /* 10622e6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622e6e push eax */
  push32((uint32_t)(EAX));
  /* 10622e6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10622e71 call dword ptr [0x1064cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064cc90))), 0x10622e77u);
  /* 10622e77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622e7c jne 0x10622edc */
  if (!C.zf) goto L_10622edc;
  /* 10622e7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622e82 je 0x10622eaf */
  if (C.zf) goto L_10622eaf;
L_10622e84:;
  /* 10622e84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10622e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10622e88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10622e8b push edx */
  push32((uint32_t)(EDX));
  /* 10622e8c push 0x1064961c */
  push32((uint32_t)(0x1064961cu));
  /* 10622e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622e99 call 0x106219a0 */
  push32(0x10622e9eu); f_106219a0();
  /* 10622e9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622ea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ea4 jne 0x10622ea7 */
  if (!C.zf) goto L_10622ea7;
  /* 10622ea6 int3  */
  x86_unimpl("int3 @ 0x10622ea6");
L_10622ea7:;
  /* 10622ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622eab jne 0x10622e84 */
  if (!C.zf) goto L_10622e84;
  /* 10622ead jmp 0x10622ed5 */
  goto L_10622ed5;
L_10622eaf:;
  /* 10622eaf push 0x106495f8 */
  push32((uint32_t)(0x106495f8u));
  /* 10622eb4 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10622eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ec1 call 0x106219a0 */
  push32(0x10622ec6u); f_106219a0();
  /* 10622ec6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622ec9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ecc jne 0x10622ecf */
  if (!C.zf) goto L_10622ecf;
  /* 10622ece int3  */
  x86_unimpl("int3 @ 0x10622ece");
L_10622ecf:;
  /* 10622ecf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10622ed1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10622ed3 jne 0x10622eaf */
  if (!C.zf) goto L_10622eaf;
L_10622ed5:;
  /* 10622ed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622ed7 jmp 0x106232ba */
  goto L_106232ba;
L_10622edc:;
  /* 10622edc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ee0 jbe 0x10622f0e */
  if ((C.cf||C.zf)) goto L_10622f0e;
L_10622ee2:;
  /* 10622ee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10622ee5 push edx */
  push32((uint32_t)(EDX));
  /* 10622ee6 push 0x106495c8 */
  push32((uint32_t)(0x106495c8u));
  /* 10622eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10622eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10622eef push 0 */
  push32((uint32_t)(0x0u));
  /* 10622ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622ef3 call 0x106219a0 */
  push32(0x10622ef8u); f_106219a0();
  /* 10622ef8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622efb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622efe jne 0x10622f01 */
  if (!C.zf) goto L_10622f01;
  /* 10622f00 int3  */
  x86_unimpl("int3 @ 0x10622f00");
L_10622f01:;
  /* 10622f01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622f05 jne 0x10622ee2 */
  if (!C.zf) goto L_10622ee2;
  /* 10622f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622f09 jmp 0x106232ba */
  goto L_106232ba;
L_10622f0e:;
  /* 10622f0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f12 je 0x10622f56 */
  if (C.zf) goto L_10622f56;
  /* 10622f14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622f17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10622f1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f20 je 0x10622f56 */
  if (C.zf) goto L_10622f56;
  /* 10622f22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622f25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10622f2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f2e je 0x10622f56 */
  if (C.zf) goto L_10622f56;
L_10622f30:;
  /* 10622f30 push 0x106493dc */
  push32((uint32_t)(0x106493dcu));
  /* 10622f35 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10622f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10622f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10622f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10622f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10622f42 call 0x106219a0 */
  push32(0x10622f47u); f_106219a0();
  /* 10622f47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622f4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f4d jne 0x10622f50 */
  if (!C.zf) goto L_10622f50;
  /* 10622f4f int3  */
  x86_unimpl("int3 @ 0x10622f4f");
L_10622f50:;
  /* 10622f50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10622f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622f54 jne 0x10622f30 */
  if (!C.zf) goto L_10622f30;
L_10622f56:;
  /* 10622f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622f59 push ecx */
  push32((uint32_t)(ECX));
  /* 10622f5a call 0x10623ee0 */
  push32(0x10622f5fu); f_10623ee0();
  /* 10622f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10622f64 jne 0x10622f87 */
  if (!C.zf) goto L_10622f87;
  /* 10622f66 push 0x106495a4 */
  push32((uint32_t)(0x106495a4u));
  /* 10622f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10622f6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10622f72 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10622f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622f79 call 0x106219a0 */
  push32(0x10622f7eu); f_106219a0();
  /* 10622f7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f84 jne 0x10622f87 */
  if (!C.zf) goto L_10622f87;
  /* 10622f86 int3  */
  x86_unimpl("int3 @ 0x10622f86");
L_10622f87:;
  /* 10622f87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10622f89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10622f8b jne 0x10622f56 */
  if (!C.zf) goto L_10622f56;
  /* 10622f8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10622f90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10622f93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10622f96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622f99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622f9d jne 0x10622fa6 */
  if (!C.zf) goto L_10622fa6;
  /* 10622f9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10622fa6:;
  /* 10622fa6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622faa je 0x10622fea */
  if (C.zf) goto L_10622fea;
L_10622fac:;
  /* 10622fac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622faf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622fb6 jne 0x10622fc1 */
  if (!C.zf) goto L_10622fc1;
  /* 10622fb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622fbb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622fbf je 0x10622fe2 */
  if (C.zf) goto L_10622fe2;
L_10622fc1:;
  /* 10622fc1 push 0x1064955c */
  push32((uint32_t)(0x1064955cu));
  /* 10622fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10622fc8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10622fcd push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10622fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10622fd4 call 0x106219a0 */
  push32(0x10622fd9u); f_106219a0();
  /* 10622fd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10622fdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622fdf jne 0x10622fe2 */
  if (!C.zf) goto L_10622fe2;
  /* 10622fe1 int3  */
  x86_unimpl("int3 @ 0x10622fe1");
L_10622fe2:;
  /* 10622fe2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10622fe4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10622fe6 jne 0x10622fac */
  if (!C.zf) goto L_10622fac;
  /* 10622fe8 jmp 0x1062304e */
  goto L_1062304e;
L_10622fea:;
  /* 10622fea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10622fed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10622ff0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10622ff5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10622ff8 jne 0x1062300f */
  if (!C.zf) goto L_1062300f;
  /* 10622ffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10622ffd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623003 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623006 jne 0x1062300f */
  if (!C.zf) goto L_1062300f;
  /* 10623008 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1062300f:;
  /* 1062300f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623012 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623015 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062301a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062301d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623023 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623025 je 0x10623048 */
  if (C.zf) goto L_10623048;
  /* 10623027 push 0x10649520 */
  push32((uint32_t)(0x10649520u));
  /* 1062302c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062302e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10623033 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10623038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062303a call 0x106219a0 */
  push32(0x1062303fu); f_106219a0();
  /* 1062303f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623042 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623045 jne 0x10623048 */
  if (!C.zf) goto L_10623048;
  /* 10623047 int3  */
  x86_unimpl("int3 @ 0x10623047");
L_10623048:;
  /* 10623048 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062304a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062304c jne 0x1062300f */
  if (!C.zf) goto L_1062300f;
L_1062304e:;
  /* 1062304e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623052 je 0x10623079 */
  if (C.zf) goto L_10623079;
  /* 10623054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623057 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062305a push eax */
  push32((uint32_t)(EAX));
  /* 1062305b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062305e push ecx */
  push32((uint32_t)(ECX));
  /* 1062305f call 0x10626860 */
  push32(0x10623064u); f_10626860();
  /* 10623064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623067 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062306a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062306e jne 0x10623077 */
  if (!C.zf) goto L_10623077;
  /* 10623070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623072 jmp 0x106232ba */
  goto L_106232ba;
L_10623077:;
  /* 10623077 jmp 0x1062309c */
  goto L_1062309c;
L_10623079:;
  /* 10623079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062307c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062307f push edx */
  push32((uint32_t)(EDX));
  /* 10623080 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623083 push eax */
  push32((uint32_t)(EAX));
  /* 10623084 call 0x106267b0 */
  push32(0x10623089u); f_106267b0();
  /* 10623089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062308c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062308f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623093 jne 0x1062309c */
  if (!C.zf) goto L_1062309c;
  /* 10623095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623097 jmp 0x106232ba */
  goto L_106232ba;
L_1062309c:;
  /* 1062309c mov ecx, dword ptr [0x1064ca88] */
  ECX = (r32((uint32_t)(0x1064ca88)));
  /* 106230a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106230a5 mov dword ptr [0x1064ca88], ecx */
  w32((uint32_t)(0x1064ca88), (ECX));
  /* 106230ab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106230af jne 0x10623107 */
  if (!C.zf) goto L_10623107;
  /* 106230b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106230b4 mov eax, dword ptr [0x1064e45c] */
  EAX = (r32((uint32_t)(0x1064e45c)));
  /* 106230b9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106230bc mov dword ptr [0x1064e45c], eax */
  w32((uint32_t)(0x1064e45c), (EAX));
  /* 106230c1 mov ecx, dword ptr [0x1064e45c] */
  ECX = (r32((uint32_t)(0x1064e45c)));
  /* 106230c7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106230ca mov dword ptr [0x1064e45c], ecx */
  w32((uint32_t)(0x1064e45c), (ECX));
  /* 106230d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106230d3 mov eax, dword ptr [0x1064e464] */
  EAX = (r32((uint32_t)(0x1064e464)));
  /* 106230d8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106230db mov dword ptr [0x1064e464], eax */
  w32((uint32_t)(0x1064e464), (EAX));
  /* 106230e0 mov ecx, dword ptr [0x1064e464] */
  ECX = (r32((uint32_t)(0x1064e464)));
  /* 106230e6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106230e9 mov dword ptr [0x1064e464], ecx */
  w32((uint32_t)(0x1064e464), (ECX));
  /* 106230ef mov edx, dword ptr [0x1064e464] */
  EDX = (r32((uint32_t)(0x1064e464)));
  /* 106230f5 cmp edx, dword ptr [0x1064e468] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064e468))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106230fb jbe 0x10623107 */
  if ((C.cf||C.zf)) goto L_10623107;
  /* 106230fd mov eax, dword ptr [0x1064e464] */
  EAX = (r32((uint32_t)(0x1064e464)));
  /* 10623102 mov dword ptr [0x1064e468], eax */
  w32((uint32_t)(0x1064e468), (EAX));
L_10623107:;
  /* 10623107 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062310a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062310d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10623110 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623113 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623116 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623119 jbe 0x1062313f */
  if ((C.cf||C.zf)) goto L_1062313f;
  /* 1062311b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062311e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623121 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623124 push edx */
  push32((uint32_t)(EDX));
  /* 10623125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623127 mov al, byte ptr [0x1064ca92] */
  AL = (r8((uint32_t)(0x1064ca92)));
  /* 1062312c push eax */
  push32((uint32_t)(EAX));
  /* 1062312d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623133 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623136 push edx */
  push32((uint32_t)(EDX));
  /* 10623137 call 0x10626650 */
  push32(0x1062313cu); f_10626650();
  /* 1062313c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062313f:;
  /* 1062313f push 4 */
  push32((uint32_t)(0x4u));
  /* 10623141 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623143 mov al, byte ptr [0x1064ca90] */
  AL = (r8((uint32_t)(0x1064ca90)));
  /* 10623148 push eax */
  push32((uint32_t)(EAX));
  /* 10623149 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062314c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062314f push ecx */
  push32((uint32_t)(ECX));
  /* 10623150 call 0x10626650 */
  push32(0x10623155u); f_10626650();
  /* 10623155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623158 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062315c jne 0x10623179 */
  if (!C.zf) goto L_10623179;
  /* 1062315e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623161 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10623164 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10623167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062316a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062316d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10623170 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623173 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10623176 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10623179:;
  /* 10623179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062317c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062317f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10623182:;
  /* 10623182 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623186 jne 0x106231b7 */
  if (!C.zf) goto L_106231b7;
  /* 10623188 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062318c jne 0x10623196 */
  if (!C.zf) goto L_10623196;
  /* 1062318e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623191 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623194 je 0x106231b7 */
  if (C.zf) goto L_106231b7;
L_10623196:;
  /* 10623196 push 0x106494ec */
  push32((uint32_t)(0x106494ecu));
  /* 1062319b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062319d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 106231a2 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106231a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106231a9 call 0x106219a0 */
  push32(0x106231aeu); f_106219a0();
  /* 106231ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106231b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106231b4 jne 0x106231b7 */
  if (!C.zf) goto L_106231b7;
  /* 106231b6 int3  */
  x86_unimpl("int3 @ 0x106231b6");
L_106231b7:;
  /* 106231b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106231b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106231bb jne 0x10623182 */
  if (!C.zf) goto L_10623182;
  /* 106231bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106231c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106231c3 je 0x106231cb */
  if (C.zf) goto L_106231cb;
  /* 106231c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106231c9 je 0x106231d3 */
  if (C.zf) goto L_106231d3;
L_106231cb:;
  /* 106231cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106231ce jmp 0x106232ba */
  goto L_106232ba;
L_106231d3:;
  /* 106231d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106231d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106231d9 je 0x106231eb */
  if (C.zf) goto L_106231eb;
  /* 106231db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106231de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106231e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106231e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106231e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106231e9 jmp 0x10623227 */
  goto L_10623227;
L_106231eb:;
  /* 106231eb mov eax, dword ptr [0x1064e458] */
  EAX = (r32((uint32_t)(0x1064e458)));
  /* 106231f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106231f3 je 0x10623216 */
  if (C.zf) goto L_10623216;
  /* 106231f5 push 0x106494d0 */
  push32((uint32_t)(0x106494d0u));
  /* 106231fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106231fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10623201 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10623206 push 2 */
  push32((uint32_t)(0x2u));
  /* 10623208 call 0x106219a0 */
  push32(0x1062320du); f_106219a0();
  /* 1062320d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623213 jne 0x10623216 */
  if (!C.zf) goto L_10623216;
  /* 10623215 int3  */
  x86_unimpl("int3 @ 0x10623215");
L_10623216:;
  /* 10623216 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10623218 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062321a jne 0x106231eb */
  if (!C.zf) goto L_106231eb;
  /* 1062321c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062321f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10623222 mov dword ptr [0x1064e458], eax */
  w32((uint32_t)(0x1064e458), (EAX));
L_10623227:;
  /* 10623227 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062322a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062322e je 0x1062323f */
  if (C.zf) goto L_1062323f;
  /* 10623230 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623233 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10623236 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623239 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062323b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1062323d jmp 0x1062327a */
  goto L_1062327a;
L_1062323f:;
  /* 1062323f mov eax, dword ptr [0x1064e460] */
  EAX = (r32((uint32_t)(0x1064e460)));
  /* 10623244 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623247 je 0x1062326a */
  if (C.zf) goto L_1062326a;
  /* 10623249 push 0x106494b4 */
  push32((uint32_t)(0x106494b4u));
  /* 1062324e push 0 */
  push32((uint32_t)(0x0u));
  /* 10623250 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10623255 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 1062325a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062325c call 0x106219a0 */
  push32(0x10623261u); f_106219a0();
  /* 10623261 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623264 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623267 jne 0x1062326a */
  if (!C.zf) goto L_1062326a;
  /* 10623269 int3  */
  x86_unimpl("int3 @ 0x10623269");
L_1062326a:;
  /* 1062326a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062326c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062326e jne 0x1062323f */
  if (!C.zf) goto L_1062323f;
  /* 10623270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623273 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10623275 mov dword ptr [0x1064e460], eax */
  w32((uint32_t)(0x1064e460), (EAX));
L_1062327a:;
  /* 1062327a cmp dword ptr [0x1064e460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623281 je 0x10623291 */
  if (C.zf) goto L_10623291;
  /* 10623283 mov ecx, dword ptr [0x1064e460] */
  ECX = (r32((uint32_t)(0x1064e460)));
  /* 10623289 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062328c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1062328f jmp 0x10623299 */
  goto L_10623299;
L_10623291:;
  /* 10623291 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623294 mov dword ptr [0x1064e458], eax */
  w32((uint32_t)(0x1064e458), (EAX));
L_10623299:;
  /* 10623299 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062329c mov edx, dword ptr [0x1064e460] */
  EDX = (r32((uint32_t)(0x1064e460)));
  /* 106232a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106232a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106232a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 106232ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106232b1 mov dword ptr [0x1064e460], ecx */
  w32((uint32_t)(0x1064e460), (ECX));
  /* 106232b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106232ba:;
  /* 106232ba pop edi */
  EDI = (pop32());
  /* 106232bb pop esi */
  ESI = (pop32());
  /* 106232bc pop ebx */
  EBX = (pop32());
  /* 106232bd mov esp, ebp */
  ESP = (EBP);
  /* 106232bf pop ebp */
  EBP = (pop32());
  /* 106232c0 ret  */
  ESPCHK(0x10622db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x106232d0 (27 bytes, 13 insns) */
void f_106232d0(void) {
  FTRACE(0x106232d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106232d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106232d1 mov ebp, esp */
  EBP = (ESP);
  /* 106232d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106232d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106232d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106232d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106232dc push eax */
  push32((uint32_t)(EAX));
  /* 106232dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106232e0 push ecx */
  push32((uint32_t)(ECX));
  /* 106232e1 call 0x106232f0 */
  push32(0x106232e6u); f_106232f0();
  /* 106232e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106232e9 pop ebp */
  EBP = (pop32());
  /* 106232ea ret  */
  ESPCHK(0x106232d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x106232f0 (64 bytes, 27 insns) */
void f_106232f0(void) {
  FTRACE(0x106232f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106232f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106232f1 mov ebp, esp */
  EBP = (ESP);
  /* 106232f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106232f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 106232f6 call 0x106262e0 */
  push32(0x106232fbu); f_106262e0();
  /* 106232fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106232fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10623300 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10623303 push eax */
  push32((uint32_t)(EAX));
  /* 10623304 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10623307 push ecx */
  push32((uint32_t)(ECX));
  /* 10623308 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062330b push edx */
  push32((uint32_t)(EDX));
  /* 1062330c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062330f push eax */
  push32((uint32_t)(EAX));
  /* 10623310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623313 push ecx */
  push32((uint32_t)(ECX));
  /* 10623314 call 0x10622db0 */
  push32(0x10623319u); f_10622db0();
  /* 10623319 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062331c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062331f push 9 */
  push32((uint32_t)(0x9u));
  /* 10623321 call 0x10626380 */
  push32(0x10623326u); f_10626380();
  /* 10623326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062332c mov esp, ebp */
  ESP = (EBP);
  /* 1062332e pop ebp */
  EBP = (pop32());
  /* 1062332f ret  */
  ESPCHK(0x106232f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x10623330 (19 bytes, 9 insns) */
void f_10623330(void) {
  FTRACE(0x10623330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623330 push ebp */
  push32((uint32_t)(EBP));
  /* 10623331 mov ebp, esp */
  EBP = (ESP);
  /* 10623333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10623335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623338 push eax */
  push32((uint32_t)(EAX));
  /* 10623339 call 0x10623370 */
  push32(0x1062333eu); f_10623370();
  /* 1062333e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623341 pop ebp */
  EBP = (pop32());
  /* 10623342 ret  */
  ESPCHK(0x10623330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x10623350 (19 bytes, 9 insns) */
void f_10623350(void) {
  FTRACE(0x10623350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623350 push ebp */
  push32((uint32_t)(EBP));
  /* 10623351 mov ebp, esp */
  EBP = (ESP);
  /* 10623353 push 1 */
  push32((uint32_t)(0x1u));
  /* 10623355 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623358 push eax */
  push32((uint32_t)(EAX));
  /* 10623359 call 0x106233a0 */
  push32(0x1062335eu); f_106233a0();
  /* 1062335e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623361 pop ebp */
  EBP = (pop32());
  /* 10623362 ret  */
  ESPCHK(0x10623350u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x10623370 (41 bytes, 16 insns) */
void f_10623370(void) {
  FTRACE(0x10623370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623370 push ebp */
  push32((uint32_t)(EBP));
  /* 10623371 mov ebp, esp */
  EBP = (ESP);
  /* 10623373 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623375 call 0x106262e0 */
  push32(0x1062337au); f_106262e0();
  /* 1062337a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062337d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623380 push eax */
  push32((uint32_t)(EAX));
  /* 10623381 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623384 push ecx */
  push32((uint32_t)(ECX));
  /* 10623385 call 0x106233a0 */
  push32(0x1062338au); f_106233a0();
  /* 1062338a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062338d push 9 */
  push32((uint32_t)(0x9u));
  /* 1062338f call 0x10626380 */
  push32(0x10623394u); f_10626380();
  /* 10623394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623397 pop ebp */
  EBP = (pop32());
  /* 10623398 ret  */
  ESPCHK(0x10623370u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x106233a0 (1004 bytes, 342 insns) */
void f_106233a0(void) {
  FTRACE(0x106233a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106233a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106233a1 mov ebp, esp */
  EBP = (ESP);
  /* 106233a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106233a4 push ebx */
  push32((uint32_t)(EBX));
  /* 106233a5 push esi */
  push32((uint32_t)(ESI));
  /* 106233a6 push edi */
  push32((uint32_t)(EDI));
  /* 106233a7 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 106233ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106233af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106233b1 je 0x106233e3 */
  if (C.zf) goto L_106233e3;
L_106233b3:;
  /* 106233b3 call 0x10623a80 */
  push32(0x106233b8u); f_10623a80();
  /* 106233b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106233ba jne 0x106233dd */
  if (!C.zf) goto L_106233dd;
  /* 106233bc push 0x106494a0 */
  push32((uint32_t)(0x106494a0u));
  /* 106233c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106233c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 106233c8 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106233cd push 2 */
  push32((uint32_t)(0x2u));
  /* 106233cf call 0x106219a0 */
  push32(0x106233d4u); f_106219a0();
  /* 106233d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106233d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106233da jne 0x106233dd */
  if (!C.zf) goto L_106233dd;
  /* 106233dc int3  */
  x86_unimpl("int3 @ 0x106233dc");
L_106233dd:;
  /* 106233dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106233df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106233e1 jne 0x106233b3 */
  if (!C.zf) goto L_106233b3;
L_106233e3:;
  /* 106233e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106233e7 jne 0x106233ee */
  if (!C.zf) goto L_106233ee;
  /* 106233e9 jmp 0x10623785 */
  goto L_10623785;
L_106233ee:;
  /* 106233ee push 0 */
  push32((uint32_t)(0x0u));
  /* 106233f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106233f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106233f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106233f7 push edx */
  push32((uint32_t)(EDX));
  /* 106233f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106233fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106233fd push eax */
  push32((uint32_t)(EAX));
  /* 106233fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10623400 call dword ptr [0x1064cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064cc90))), 0x10623406u);
  /* 10623406 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062340b jne 0x10623438 */
  if (!C.zf) goto L_10623438;
L_1062340d:;
  /* 1062340d push 0x10649764 */
  push32((uint32_t)(0x10649764u));
  /* 10623412 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623417 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062341b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062341d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062341f call 0x106219a0 */
  push32(0x10623424u); f_106219a0();
  /* 10623424 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623427 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062342a jne 0x1062342d */
  if (!C.zf) goto L_1062342d;
  /* 1062342c int3  */
  x86_unimpl("int3 @ 0x1062342c");
L_1062342d:;
  /* 1062342d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062342f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623431 jne 0x1062340d */
  if (!C.zf) goto L_1062340d;
  /* 10623433 jmp 0x10623785 */
  goto L_10623785;
L_10623438:;
  /* 10623438 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062343b push edx */
  push32((uint32_t)(EDX));
  /* 1062343c call 0x10623ee0 */
  push32(0x10623441u); f_10623ee0();
  /* 10623441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623446 jne 0x10623469 */
  if (!C.zf) goto L_10623469;
  /* 10623448 push 0x106495a4 */
  push32((uint32_t)(0x106495a4u));
  /* 1062344d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062344f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10623454 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10623459 push 2 */
  push32((uint32_t)(0x2u));
  /* 1062345b call 0x106219a0 */
  push32(0x10623460u); f_106219a0();
  /* 10623460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623463 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623466 jne 0x10623469 */
  if (!C.zf) goto L_10623469;
  /* 10623468 int3  */
  x86_unimpl("int3 @ 0x10623468");
L_10623469:;
  /* 10623469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062346b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062346d jne 0x10623438 */
  if (!C.zf) goto L_10623438;
  /* 1062346f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623472 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623475 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10623478:;
  /* 10623478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062347b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1062347e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623483 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623486 je 0x106234cb */
  if (C.zf) goto L_106234cb;
  /* 10623488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062348b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062348f je 0x106234cb */
  if (C.zf) goto L_106234cb;
  /* 10623491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623494 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623497 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062349c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062349f je 0x106234cb */
  if (C.zf) goto L_106234cb;
  /* 106234a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106234a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106234a8 je 0x106234cb */
  if (C.zf) goto L_106234cb;
  /* 106234aa push 0x1064973c */
  push32((uint32_t)(0x1064973cu));
  /* 106234af push 0 */
  push32((uint32_t)(0x0u));
  /* 106234b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 106234b6 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106234bb push 2 */
  push32((uint32_t)(0x2u));
  /* 106234bd call 0x106219a0 */
  push32(0x106234c2u); f_106219a0();
  /* 106234c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106234c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106234c8 jne 0x106234cb */
  if (!C.zf) goto L_106234cb;
  /* 106234ca int3  */
  x86_unimpl("int3 @ 0x106234ca");
L_106234cb:;
  /* 106234cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106234cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106234cf jne 0x10623478 */
  if (!C.zf) goto L_10623478;
  /* 106234d1 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 106234d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106234d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106234db jne 0x106235a6 */
  if (!C.zf) goto L_106235a6;
  /* 106234e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 106234e3 mov cl, byte ptr [0x1064ca90] */
  CL = (r8((uint32_t)(0x1064ca90)));
  /* 106234e9 push ecx */
  push32((uint32_t)(ECX));
  /* 106234ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106234ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106234f0 push edx */
  push32((uint32_t)(EDX));
  /* 106234f1 call 0x106239f0 */
  push32(0x106234f6u); f_106239f0();
  /* 106234f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106234f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106234fb jne 0x10623540 */
  if (!C.zf) goto L_10623540;
L_106234fd:;
  /* 106234fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623500 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623503 push eax */
  push32((uint32_t)(EAX));
  /* 10623504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623507 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1062350a push edx */
  push32((uint32_t)(EDX));
  /* 1062350b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062350e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10623511 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623517 mov edx, dword ptr [ecx*4 + 0x1064ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca94)));
  /* 1062351e push edx */
  push32((uint32_t)(EDX));
  /* 1062351f push 0x10649710 */
  push32((uint32_t)(0x10649710u));
  /* 10623524 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623526 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623528 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062352a push 1 */
  push32((uint32_t)(0x1u));
  /* 1062352c call 0x106219a0 */
  push32(0x10623531u); f_106219a0();
  /* 10623531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623534 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623537 jne 0x1062353a */
  if (!C.zf) goto L_1062353a;
  /* 10623539 int3  */
  x86_unimpl("int3 @ 0x10623539");
L_1062353a:;
  /* 1062353a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062353c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062353e jne 0x106234fd */
  if (!C.zf) goto L_106234fd;
L_10623540:;
  /* 10623540 push 4 */
  push32((uint32_t)(0x4u));
  /* 10623542 mov cl, byte ptr [0x1064ca90] */
  CL = (r8((uint32_t)(0x1064ca90)));
  /* 10623548 push ecx */
  push32((uint32_t)(ECX));
  /* 10623549 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062354c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062354f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623552 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10623556 push edx */
  push32((uint32_t)(EDX));
  /* 10623557 call 0x106239f0 */
  push32(0x1062355cu); f_106239f0();
  /* 1062355c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062355f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623561 jne 0x106235a6 */
  if (!C.zf) goto L_106235a6;
L_10623563:;
  /* 10623563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623566 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623569 push eax */
  push32((uint32_t)(EAX));
  /* 1062356a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062356d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10623570 push edx */
  push32((uint32_t)(EDX));
  /* 10623571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623574 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10623577 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062357d mov edx, dword ptr [ecx*4 + 0x1064ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca94)));
  /* 10623584 push edx */
  push32((uint32_t)(EDX));
  /* 10623585 push 0x106496e4 */
  push32((uint32_t)(0x106496e4u));
  /* 1062358a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062358c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062358e push 0 */
  push32((uint32_t)(0x0u));
  /* 10623590 push 1 */
  push32((uint32_t)(0x1u));
  /* 10623592 call 0x106219a0 */
  push32(0x10623597u); f_106219a0();
  /* 10623597 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062359a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062359d jne 0x106235a0 */
  if (!C.zf) goto L_106235a0;
  /* 1062359f int3  */
  x86_unimpl("int3 @ 0x1062359f");
L_106235a0:;
  /* 106235a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106235a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106235a4 jne 0x10623563 */
  if (!C.zf) goto L_10623563;
L_106235a6:;
  /* 106235a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106235a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106235ad jne 0x1062361b */
  if (!C.zf) goto L_1062361b;
L_106235af:;
  /* 106235af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106235b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106235b9 jne 0x106235c4 */
  if (!C.zf) goto L_106235c4;
  /* 106235bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106235be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106235c2 je 0x106235e5 */
  if (C.zf) goto L_106235e5;
L_106235c4:;
  /* 106235c4 push 0x106496a4 */
  push32((uint32_t)(0x106496a4u));
  /* 106235c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106235cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 106235d0 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106235d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106235d7 call 0x106219a0 */
  push32(0x106235dcu); f_106219a0();
  /* 106235dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106235df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106235e2 jne 0x106235e5 */
  if (!C.zf) goto L_106235e5;
  /* 106235e4 int3  */
  x86_unimpl("int3 @ 0x106235e4");
L_106235e5:;
  /* 106235e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106235e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106235e9 jne 0x106235af */
  if (!C.zf) goto L_106235af;
  /* 106235eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106235ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106235f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106235f4 push eax */
  push32((uint32_t)(EAX));
  /* 106235f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106235f7 mov cl, byte ptr [0x1064ca91] */
  CL = (r8((uint32_t)(0x1064ca91)));
  /* 106235fd push ecx */
  push32((uint32_t)(ECX));
  /* 106235fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623601 push edx */
  push32((uint32_t)(EDX));
  /* 10623602 call 0x10626650 */
  push32(0x10623607u); f_10626650();
  /* 10623607 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062360a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062360d push eax */
  push32((uint32_t)(EAX));
  /* 1062360e call 0x10626a50 */
  push32(0x10623613u); f_10626a50();
  /* 10623613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623616 jmp 0x10623785 */
  goto L_10623785;
L_1062361b:;
  /* 1062361b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062361e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623622 jne 0x10623631 */
  if (!C.zf) goto L_10623631;
  /* 10623624 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623628 jne 0x10623631 */
  if (!C.zf) goto L_10623631;
  /* 1062362a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10623631:;
  /* 10623631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623634 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623637 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062363a je 0x1062365d */
  if (C.zf) goto L_1062365d;
  /* 1062363c push 0x10649684 */
  push32((uint32_t)(0x10649684u));
  /* 10623641 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623643 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10623648 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 1062364d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062364f call 0x106219a0 */
  push32(0x10623654u); f_106219a0();
  /* 10623654 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062365a jne 0x1062365d */
  if (!C.zf) goto L_1062365d;
  /* 1062365c int3  */
  x86_unimpl("int3 @ 0x1062365c");
L_1062365d:;
  /* 1062365d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062365f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623661 jne 0x10623631 */
  if (!C.zf) goto L_10623631;
  /* 10623663 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623666 mov eax, dword ptr [0x1064e464] */
  EAX = (r32((uint32_t)(0x1064e464)));
  /* 1062366b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062366e mov dword ptr [0x1064e464], eax */
  w32((uint32_t)(0x1064e464), (EAX));
  /* 10623673 mov ecx, dword ptr [0x1064ca84] */
  ECX = (r32((uint32_t)(0x1064ca84)));
  /* 10623679 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1062367c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062367e jne 0x1062375c */
  if (!C.zf) goto L_1062375c;
  /* 10623684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623687 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062368a je 0x1062369c */
  if (C.zf) goto L_1062369c;
  /* 1062368c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062368f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10623691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623694 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10623697 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1062369a jmp 0x106236da */
  goto L_106236da;
L_1062369c:;
  /* 1062369c mov ecx, dword ptr [0x1064e458] */
  ECX = (r32((uint32_t)(0x1064e458)));
  /* 106236a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106236a5 je 0x106236c8 */
  if (C.zf) goto L_106236c8;
  /* 106236a7 push 0x1064966c */
  push32((uint32_t)(0x1064966cu));
  /* 106236ac push 0 */
  push32((uint32_t)(0x0u));
  /* 106236ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 106236b3 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106236b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106236ba call 0x106219a0 */
  push32(0x106236bfu); f_106219a0();
  /* 106236bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106236c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106236c5 jne 0x106236c8 */
  if (!C.zf) goto L_106236c8;
  /* 106236c7 int3  */
  x86_unimpl("int3 @ 0x106236c7");
L_106236c8:;
  /* 106236c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106236ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106236cc jne 0x1062369c */
  if (!C.zf) goto L_1062369c;
  /* 106236ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106236d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106236d4 mov dword ptr [0x1064e458], ecx */
  w32((uint32_t)(0x1064e458), (ECX));
L_106236da:;
  /* 106236da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106236dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106236e1 je 0x106236f2 */
  if (C.zf) goto L_106236f2;
  /* 106236e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106236e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106236e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106236ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106236ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106236f0 jmp 0x1062372f */
  goto L_1062372f;
L_106236f2:;
  /* 106236f2 mov ecx, dword ptr [0x1064e460] */
  ECX = (r32((uint32_t)(0x1064e460)));
  /* 106236f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106236fb je 0x1062371e */
  if (C.zf) goto L_1062371e;
  /* 106236fd push 0x10649654 */
  push32((uint32_t)(0x10649654u));
  /* 10623702 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623704 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10623709 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 1062370e push 2 */
  push32((uint32_t)(0x2u));
  /* 10623710 call 0x106219a0 */
  push32(0x10623715u); f_106219a0();
  /* 10623715 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623718 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062371b jne 0x1062371e */
  if (!C.zf) goto L_1062371e;
  /* 1062371d int3  */
  x86_unimpl("int3 @ 0x1062371d");
L_1062371e:;
  /* 1062371e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623722 jne 0x106236f2 */
  if (!C.zf) goto L_106236f2;
  /* 10623724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623727 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10623729 mov dword ptr [0x1064e460], ecx */
  w32((uint32_t)(0x1064e460), (ECX));
L_1062372f:;
  /* 1062372f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623732 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10623735 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623738 push eax */
  push32((uint32_t)(EAX));
  /* 10623739 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062373b mov cl, byte ptr [0x1064ca91] */
  CL = (r8((uint32_t)(0x1064ca91)));
  /* 10623741 push ecx */
  push32((uint32_t)(ECX));
  /* 10623742 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623745 push edx */
  push32((uint32_t)(EDX));
  /* 10623746 call 0x10626650 */
  push32(0x1062374bu); f_10626650();
  /* 1062374b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062374e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623751 push eax */
  push32((uint32_t)(EAX));
  /* 10623752 call 0x10626a50 */
  push32(0x10623757u); f_10626a50();
  /* 10623757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062375a jmp 0x10623785 */
  goto L_10623785;
L_1062375c:;
  /* 1062375c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062375f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10623766 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623769 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062376c push eax */
  push32((uint32_t)(EAX));
  /* 1062376d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062376f mov cl, byte ptr [0x1064ca91] */
  CL = (r8((uint32_t)(0x1064ca91)));
  /* 10623775 push ecx */
  push32((uint32_t)(ECX));
  /* 10623776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623779 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062377c push edx */
  push32((uint32_t)(EDX));
  /* 1062377d call 0x10626650 */
  push32(0x10623782u); f_10626650();
  /* 10623782 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10623785:;
  /* 10623785 pop edi */
  EDI = (pop32());
  /* 10623786 pop esi */
  ESI = (pop32());
  /* 10623787 pop ebx */
  EBX = (pop32());
  /* 10623788 mov esp, ebp */
  ESP = (EBP);
  /* 1062378a pop ebp */
  EBP = (pop32());
  /* 1062378b ret  */
  ESPCHK(0x106233a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x10623790 (19 bytes, 9 insns) */
void f_10623790(void) {
  FTRACE(0x10623790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623790 push ebp */
  push32((uint32_t)(EBP));
  /* 10623791 mov ebp, esp */
  EBP = (ESP);
  /* 10623793 push 1 */
  push32((uint32_t)(0x1u));
  /* 10623795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623798 push eax */
  push32((uint32_t)(EAX));
  /* 10623799 call 0x106237b0 */
  push32(0x1062379eu); f_106237b0();
  /* 1062379e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106237a1 pop ebp */
  EBP = (pop32());
  /* 106237a2 ret  */
  ESPCHK(0x10623790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b0 @ 0x106237b0 (342 bytes, 119 insns) */
void f_106237b0(void) {
  FTRACE(0x106237b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106237b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106237b1 mov ebp, esp */
  EBP = (ESP);
  /* 106237b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106237b6 push ebx */
  push32((uint32_t)(EBX));
  /* 106237b7 push esi */
  push32((uint32_t)(ESI));
  /* 106237b8 push edi */
  push32((uint32_t)(EDI));
  /* 106237b9 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 106237be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106237c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106237c3 je 0x106237f5 */
  if (C.zf) goto L_106237f5;
L_106237c5:;
  /* 106237c5 call 0x10623a80 */
  push32(0x106237cau); f_10623a80();
  /* 106237ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106237cc jne 0x106237ef */
  if (!C.zf) goto L_106237ef;
  /* 106237ce push 0x106494a0 */
  push32((uint32_t)(0x106494a0u));
  /* 106237d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106237d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 106237da push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106237df push 2 */
  push32((uint32_t)(0x2u));
  /* 106237e1 call 0x106219a0 */
  push32(0x106237e6u); f_106219a0();
  /* 106237e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106237e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106237ec jne 0x106237ef */
  if (!C.zf) goto L_106237ef;
  /* 106237ee int3  */
  x86_unimpl("int3 @ 0x106237ee");
L_106237ef:;
  /* 106237ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106237f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106237f3 jne 0x106237c5 */
  if (!C.zf) goto L_106237c5;
L_106237f5:;
  /* 106237f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 106237f7 call 0x106262e0 */
  push32(0x106237fcu); f_106262e0();
  /* 106237fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106237ff:;
  /* 106237ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623802 push edx */
  push32((uint32_t)(EDX));
  /* 10623803 call 0x10623ee0 */
  push32(0x10623808u); f_10623ee0();
  /* 10623808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062380b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062380d jne 0x10623830 */
  if (!C.zf) goto L_10623830;
  /* 1062380f push 0x106495a4 */
  push32((uint32_t)(0x106495a4u));
  /* 10623814 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623816 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1062381b push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10623820 push 2 */
  push32((uint32_t)(0x2u));
  /* 10623822 call 0x106219a0 */
  push32(0x10623827u); f_106219a0();
  /* 10623827 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062382a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062382d jne 0x10623830 */
  if (!C.zf) goto L_10623830;
  /* 1062382f int3  */
  x86_unimpl("int3 @ 0x1062382f");
L_10623830:;
  /* 10623830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623834 jne 0x106237ff */
  if (!C.zf) goto L_106237ff;
  /* 10623836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623839 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062383c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1062383f:;
  /* 1062383f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623842 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623845 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062384a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062384d je 0x10623892 */
  if (C.zf) goto L_10623892;
  /* 1062384f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623852 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623856 je 0x10623892 */
  if (C.zf) goto L_10623892;
  /* 10623858 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062385b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1062385e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623863 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623866 je 0x10623892 */
  if (C.zf) goto L_10623892;
  /* 10623868 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062386b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062386f je 0x10623892 */
  if (C.zf) goto L_10623892;
  /* 10623871 push 0x1064973c */
  push32((uint32_t)(0x1064973cu));
  /* 10623876 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623878 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1062387d push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 10623882 push 2 */
  push32((uint32_t)(0x2u));
  /* 10623884 call 0x106219a0 */
  push32(0x10623889u); f_106219a0();
  /* 10623889 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062388c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062388f jne 0x10623892 */
  if (!C.zf) goto L_10623892;
  /* 10623891 int3  */
  x86_unimpl("int3 @ 0x10623891");
L_10623892:;
  /* 10623892 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623894 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623896 jne 0x1062383f */
  if (!C.zf) goto L_1062383f;
  /* 10623898 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062389b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062389f jne 0x106238ae */
  if (!C.zf) goto L_106238ae;
  /* 106238a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106238a5 jne 0x106238ae */
  if (!C.zf) goto L_106238ae;
  /* 106238a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106238ae:;
  /* 106238ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106238b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106238b5 je 0x106238e9 */
  if (C.zf) goto L_106238e9;
L_106238b7:;
  /* 106238b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106238ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106238bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106238c0 je 0x106238e3 */
  if (C.zf) goto L_106238e3;
  /* 106238c2 push 0x10649684 */
  push32((uint32_t)(0x10649684u));
  /* 106238c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106238c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 106238ce push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 106238d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106238d5 call 0x106219a0 */
  push32(0x106238dau); f_106219a0();
  /* 106238da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106238dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106238e0 jne 0x106238e3 */
  if (!C.zf) goto L_106238e3;
  /* 106238e2 int3  */
  x86_unimpl("int3 @ 0x106238e2");
L_106238e3:;
  /* 106238e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106238e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106238e7 jne 0x106238b7 */
  if (!C.zf) goto L_106238b7;
L_106238e9:;
  /* 106238e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106238ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106238ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106238f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106238f4 call 0x10626380 */
  push32(0x106238f9u); f_10626380();
  /* 106238f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106238fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106238ff pop edi */
  EDI = (pop32());
  /* 10623900 pop esi */
  ESI = (pop32());
  /* 10623901 pop ebx */
  EBX = (pop32());
  /* 10623902 mov esp, ebp */
  ESP = (EBP);
  /* 10623904 pop ebp */
  EBP = (pop32());
  /* 10623905 ret  */
  ESPCHK(0x106237b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x10623910 (28 bytes, 11 insns) */
void f_10623910(void) {
  FTRACE(0x10623910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623910 push ebp */
  push32((uint32_t)(EBP));
  /* 10623911 mov ebp, esp */
  EBP = (ESP);
  /* 10623913 push ecx */
  push32((uint32_t)(ECX));
  /* 10623914 mov eax, dword ptr [0x1064ca8c] */
  EAX = (r32((uint32_t)(0x1064ca8c)));
  /* 10623919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062391c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062391f mov dword ptr [0x1064ca8c], ecx */
  w32((uint32_t)(0x1064ca8c), (ECX));
  /* 10623925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623928 mov esp, ebp */
  ESP = (EBP);
  /* 1062392a pop ebp */
  EBP = (pop32());
  /* 1062392b ret  */
  ESPCHK(0x10623910u, _esp0);
  ESP += 4; return;
}

/* FUN_10003930 @ 0x10623930 (157 bytes, 59 insns) */
void f_10623930(void) {
  FTRACE(0x10623930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623930 push ebp */
  push32((uint32_t)(EBP));
  /* 10623931 mov ebp, esp */
  EBP = (ESP);
  /* 10623933 push ecx */
  push32((uint32_t)(ECX));
  /* 10623934 push ebx */
  push32((uint32_t)(EBX));
  /* 10623935 push esi */
  push32((uint32_t)(ESI));
  /* 10623936 push edi */
  push32((uint32_t)(EDI));
  /* 10623937 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623939 call 0x106262e0 */
  push32(0x1062393eu); f_106262e0();
  /* 1062393e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623944 push eax */
  push32((uint32_t)(EAX));
  /* 10623945 call 0x10623ee0 */
  push32(0x1062394au); f_10623ee0();
  /* 1062394a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062394d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062394f je 0x106239bc */
  if (C.zf) goto L_106239bc;
  /* 10623951 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623954 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623957 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062395a:;
  /* 1062395a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062395d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623960 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623965 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623968 je 0x106239ad */
  if (C.zf) goto L_106239ad;
  /* 1062396a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062396d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623971 je 0x106239ad */
  if (C.zf) goto L_106239ad;
  /* 10623973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623976 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623979 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062397e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623981 je 0x106239ad */
  if (C.zf) goto L_106239ad;
  /* 10623983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623986 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062398a je 0x106239ad */
  if (C.zf) goto L_106239ad;
  /* 1062398c push 0x1064973c */
  push32((uint32_t)(0x1064973cu));
  /* 10623991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623993 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10623998 push 0x10649494 */
  push32((uint32_t)(0x10649494u));
  /* 1062399d push 2 */
  push32((uint32_t)(0x2u));
  /* 1062399f call 0x106219a0 */
  push32(0x106239a4u); f_106219a0();
  /* 106239a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106239a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106239aa jne 0x106239ad */
  if (!C.zf) goto L_106239ad;
  /* 106239ac int3  */
  x86_unimpl("int3 @ 0x106239ac");
L_106239ad:;
  /* 106239ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106239af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106239b1 jne 0x1062395a */
  if (!C.zf) goto L_1062395a;
  /* 106239b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106239b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106239b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_106239bc:;
  /* 106239bc push 9 */
  push32((uint32_t)(0x9u));
  /* 106239be call 0x10626380 */
  push32(0x106239c3u); f_10626380();
  /* 106239c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106239c6 pop edi */
  EDI = (pop32());
  /* 106239c7 pop esi */
  ESI = (pop32());
  /* 106239c8 pop ebx */
  EBX = (pop32());
  /* 106239c9 mov esp, ebp */
  ESP = (EBP);
  /* 106239cb pop ebp */
  EBP = (pop32());
  /* 106239cc ret  */
  ESPCHK(0x10623930u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x106239d0 (28 bytes, 11 insns) */
void f_106239d0(void) {
  FTRACE(0x106239d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106239d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106239d1 mov ebp, esp */
  EBP = (ESP);
  /* 106239d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106239d4 mov eax, dword ptr [0x1064cc90] */
  EAX = (r32((uint32_t)(0x1064cc90)));
  /* 106239d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106239dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106239df mov dword ptr [0x1064cc90], ecx */
  w32((uint32_t)(0x1064cc90), (ECX));
  /* 106239e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106239e8 mov esp, ebp */
  ESP = (EBP);
  /* 106239ea pop ebp */
  EBP = (pop32());
  /* 106239eb ret  */
  ESPCHK(0x106239d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f0 @ 0x106239f0 (136 bytes, 55 insns) */
void f_106239f0(void) {
  FTRACE(0x106239f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106239f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106239f1 mov ebp, esp */
  EBP = (ESP);
  /* 106239f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106239f4 push ebx */
  push32((uint32_t)(EBX));
  /* 106239f5 push esi */
  push32((uint32_t)(ESI));
  /* 106239f6 push edi */
  push32((uint32_t)(EDI));
  /* 106239f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106239fe:;
  /* 106239fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10623a01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10623a04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623a07 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10623a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623a0c je 0x10623a6e */
  if (C.zf) goto L_10623a6e;
  /* 10623a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623a13 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10623a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623a18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623a21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623a24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10623a27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623a29 je 0x10623a6c */
  if (C.zf) goto L_10623a6c;
L_10623a2b:;
  /* 10623a2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623a2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623a33 push eax */
  push32((uint32_t)(EAX));
  /* 10623a34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623a37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623a39 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10623a3c push edx */
  push32((uint32_t)(EDX));
  /* 10623a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623a40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623a43 push eax */
  push32((uint32_t)(EAX));
  /* 10623a44 push 0x10649780 */
  push32((uint32_t)(0x10649780u));
  /* 10623a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10623a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10623a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10623a51 call 0x106219a0 */
  push32(0x10623a56u); f_106219a0();
  /* 10623a56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623a5c jne 0x10623a5f */
  if (!C.zf) goto L_10623a5f;
  /* 10623a5e int3  */
  x86_unimpl("int3 @ 0x10623a5e");
L_10623a5f:;
  /* 10623a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10623a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623a63 jne 0x10623a2b */
  if (!C.zf) goto L_10623a2b;
  /* 10623a65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10623a6c:;
  /* 10623a6c jmp 0x106239fe */
  goto L_106239fe;
L_10623a6e:;
  /* 10623a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623a71 pop edi */
  EDI = (pop32());
  /* 10623a72 pop esi */
  ESI = (pop32());
  /* 10623a73 pop ebx */
  EBX = (pop32());
  /* 10623a74 mov esp, ebp */
  ESP = (EBP);
  /* 10623a76 pop ebp */
  EBP = (pop32());
  /* 10623a77 ret  */
  ESPCHK(0x106239f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a80 @ 0x10623a80 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10623a80(void) {
  FTRACE(0x10623a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10623a81 mov ebp, esp */
  EBP = (ESP);
  /* 10623a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623a86 push ebx */
  push32((uint32_t)(EBX));
  /* 10623a87 push esi */
  push32((uint32_t)(ESI));
  /* 10623a88 push edi */
  push32((uint32_t)(EDI));
  /* 10623a89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10623a90 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 10623a95 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10623a98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623a9a jne 0x10623aa6 */
  if (!C.zf) goto L_10623aa6;
  /* 10623a9c mov eax, 1 */
  EAX = (0x1u);
  /* 10623aa1 jmp 0x10623dd8 */
  goto L_10623dd8;
L_10623aa6:;
  /* 10623aa6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623aa8 call 0x106262e0 */
  push32(0x10623aadu); f_106262e0();
  /* 10623aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623ab0 call 0x10626ac0 */
  push32(0x10623ab5u); f_10626ac0();
  /* 10623ab5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10623ab8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623abc je 0x10623bc9 */
  if (C.zf) goto L_10623bc9;
  /* 10623ac2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623ac6 je 0x10623bc9 */
  if (C.zf) goto L_10623bc9;
  /* 10623acc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10623acf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10623ad2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10623ad5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623ad8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10623adb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623adf ja 0x10623b92 */
  if ((!C.cf&&!C.zf)) goto L_10623b92;
  /* 10623ae5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10623ae8 jmp dword ptr [eax*4 + 0x10623ddf] */
  switch (EAX) {
    case 0: goto L_10623b6a;
    case 1: goto L_10623b42;
    case 2: goto L_10623b1a;
    case 3: goto L_10623aef;
    default: x86_unimpl("switch@0x10623ae8 out of table"); return;
  }
L_10623aef:;
  /* 10623aef push 0x106498d4 */
  push32((uint32_t)(0x106498d4u));
  /* 10623af4 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623afb push 0 */
  push32((uint32_t)(0x0u));
  /* 10623afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10623aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b01 call 0x106219a0 */
  push32(0x10623b06u); f_106219a0();
  /* 10623b06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623b09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623b0c jne 0x10623b0f */
  if (!C.zf) goto L_10623b0f;
  /* 10623b0e int3  */
  x86_unimpl("int3 @ 0x10623b0e");
L_10623b0f:;
  /* 10623b0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10623b11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623b13 jne 0x10623aef */
  if (!C.zf) goto L_10623aef;
  /* 10623b15 jmp 0x10623bb8 */
  goto L_10623bb8;
L_10623b1a:;
  /* 10623b1a push 0x106498b0 */
  push32((uint32_t)(0x106498b0u));
  /* 10623b1f push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b2c call 0x106219a0 */
  push32(0x10623b31u); f_106219a0();
  /* 10623b31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623b37 jne 0x10623b3a */
  if (!C.zf) goto L_10623b3a;
  /* 10623b39 int3  */
  x86_unimpl("int3 @ 0x10623b39");
L_10623b3a:;
  /* 10623b3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623b3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623b3e jne 0x10623b1a */
  if (!C.zf) goto L_10623b1a;
  /* 10623b40 jmp 0x10623bb8 */
  goto L_10623bb8;
L_10623b42:;
  /* 10623b42 push 0x1064988c */
  push32((uint32_t)(0x1064988cu));
  /* 10623b47 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b54 call 0x106219a0 */
  push32(0x10623b59u); f_106219a0();
  /* 10623b59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623b5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623b5f jne 0x10623b62 */
  if (!C.zf) goto L_10623b62;
  /* 10623b61 int3  */
  x86_unimpl("int3 @ 0x10623b61");
L_10623b62:;
  /* 10623b62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623b66 jne 0x10623b42 */
  if (!C.zf) goto L_10623b42;
  /* 10623b68 jmp 0x10623bb8 */
  goto L_10623bb8;
L_10623b6a:;
  /* 10623b6a push 0x10649868 */
  push32((uint32_t)(0x10649868u));
  /* 10623b6f push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b7c call 0x106219a0 */
  push32(0x10623b81u); f_106219a0();
  /* 10623b81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623b84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623b87 jne 0x10623b8a */
  if (!C.zf) goto L_10623b8a;
  /* 10623b89 int3  */
  x86_unimpl("int3 @ 0x10623b89");
L_10623b8a:;
  /* 10623b8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10623b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623b8e jne 0x10623b6a */
  if (!C.zf) goto L_10623b6a;
  /* 10623b90 jmp 0x10623bb8 */
  goto L_10623bb8;
L_10623b92:;
  /* 10623b92 push 0x1064983c */
  push32((uint32_t)(0x1064983cu));
  /* 10623b97 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10623b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10623b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10623ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623ba4 call 0x106219a0 */
  push32(0x10623ba9u); f_106219a0();
  /* 10623ba9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623bac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623baf jne 0x10623bb2 */
  if (!C.zf) goto L_10623bb2;
  /* 10623bb1 int3  */
  x86_unimpl("int3 @ 0x10623bb1");
L_10623bb2:;
  /* 10623bb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623bb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623bb6 jne 0x10623b92 */
  if (!C.zf) goto L_10623b92;
L_10623bb8:;
  /* 10623bb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623bba call 0x10626380 */
  push32(0x10623bbfu); f_10626380();
  /* 10623bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623bc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623bc4 jmp 0x10623dd8 */
  goto L_10623dd8;
L_10623bc9:;
  /* 10623bc9 mov eax, dword ptr [0x1064e460] */
  EAX = (r32((uint32_t)(0x1064e460)));
  /* 10623bce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10623bd1 jmp 0x10623bdb */
  goto L_10623bdb;
L_10623bd3:;
  /* 10623bd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623bd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10623bd8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10623bdb:;
  /* 10623bdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623bdf je 0x10623dcb */
  if (C.zf) goto L_10623dcb;
  /* 10623be5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10623bec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623bef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10623bf2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623bf8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623bfb je 0x10623c20 */
  if (C.zf) goto L_10623c20;
  /* 10623bfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623c04 je 0x10623c20 */
  if (C.zf) goto L_10623c20;
  /* 10623c06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10623c0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623c12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623c15 je 0x10623c20 */
  if (C.zf) goto L_10623c20;
  /* 10623c17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623c1e jne 0x10623c38 */
  if (!C.zf) goto L_10623c38;
L_10623c20:;
  /* 10623c20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10623c26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10623c2c mov edx, dword ptr [ecx*4 + 0x1064ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca94)));
  /* 10623c33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10623c36 jmp 0x10623c3f */
  goto L_10623c3f;
L_10623c38:;
  /* 10623c38 mov dword ptr [ebp - 0x14], 0x10649834 */
  w32((uint32_t)(EBP + -0x14), (0x10649834u));
L_10623c3f:;
  /* 10623c3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10623c41 mov al, byte ptr [0x1064ca90] */
  AL = (r8((uint32_t)(0x1064ca90)));
  /* 10623c46 push eax */
  push32((uint32_t)(EAX));
  /* 10623c47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623c4d push ecx */
  push32((uint32_t)(ECX));
  /* 10623c4e call 0x106239f0 */
  push32(0x10623c53u); f_106239f0();
  /* 10623c53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623c58 jne 0x10623c94 */
  if (!C.zf) goto L_10623c94;
L_10623c5a:;
  /* 10623c5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623c60 push edx */
  push32((uint32_t)(EDX));
  /* 10623c61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623c64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10623c67 push ecx */
  push32((uint32_t)(ECX));
  /* 10623c68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10623c6b push edx */
  push32((uint32_t)(EDX));
  /* 10623c6c push 0x10649710 */
  push32((uint32_t)(0x10649710u));
  /* 10623c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623c79 call 0x106219a0 */
  push32(0x10623c7eu); f_106219a0();
  /* 10623c7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623c84 jne 0x10623c87 */
  if (!C.zf) goto L_10623c87;
  /* 10623c86 int3  */
  x86_unimpl("int3 @ 0x10623c86");
L_10623c87:;
  /* 10623c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623c89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623c8b jne 0x10623c5a */
  if (!C.zf) goto L_10623c5a;
  /* 10623c8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10623c94:;
  /* 10623c94 push 4 */
  push32((uint32_t)(0x4u));
  /* 10623c96 mov cl, byte ptr [0x1064ca90] */
  CL = (r8((uint32_t)(0x1064ca90)));
  /* 10623c9c push ecx */
  push32((uint32_t)(ECX));
  /* 10623c9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623ca0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10623ca3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623ca6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10623caa push edx */
  push32((uint32_t)(EDX));
  /* 10623cab call 0x106239f0 */
  push32(0x10623cb0u); f_106239f0();
  /* 10623cb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623cb5 jne 0x10623cf1 */
  if (!C.zf) goto L_10623cf1;
L_10623cb7:;
  /* 10623cb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623cba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623cbd push eax */
  push32((uint32_t)(EAX));
  /* 10623cbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623cc1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10623cc4 push edx */
  push32((uint32_t)(EDX));
  /* 10623cc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10623cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10623cc9 push 0x106496e4 */
  push32((uint32_t)(0x106496e4u));
  /* 10623cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10623cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623cd6 call 0x106219a0 */
  push32(0x10623cdbu); f_106219a0();
  /* 10623cdb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623cde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623ce1 jne 0x10623ce4 */
  if (!C.zf) goto L_10623ce4;
  /* 10623ce3 int3  */
  x86_unimpl("int3 @ 0x10623ce3");
L_10623ce4:;
  /* 10623ce4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10623ce6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623ce8 jne 0x10623cb7 */
  if (!C.zf) goto L_10623cb7;
  /* 10623cea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10623cf1:;
  /* 10623cf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623cf4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623cf8 jne 0x10623d4a */
  if (!C.zf) goto L_10623d4a;
  /* 10623cfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623cfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10623d00 push ecx */
  push32((uint32_t)(ECX));
  /* 10623d01 mov dl, byte ptr [0x1064ca91] */
  DL = (r8((uint32_t)(0x1064ca91)));
  /* 10623d07 push edx */
  push32((uint32_t)(EDX));
  /* 10623d08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d0e push eax */
  push32((uint32_t)(EAX));
  /* 10623d0f call 0x106239f0 */
  push32(0x10623d14u); f_106239f0();
  /* 10623d14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623d19 jne 0x10623d4a */
  if (!C.zf) goto L_10623d4a;
L_10623d1b:;
  /* 10623d1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d21 push ecx */
  push32((uint32_t)(ECX));
  /* 10623d22 push 0x10649808 */
  push32((uint32_t)(0x10649808u));
  /* 10623d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d2f call 0x106219a0 */
  push32(0x10623d34u); f_106219a0();
  /* 10623d34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623d3a jne 0x10623d3d */
  if (!C.zf) goto L_10623d3d;
  /* 10623d3c int3  */
  x86_unimpl("int3 @ 0x10623d3c");
L_10623d3d:;
  /* 10623d3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623d3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623d41 jne 0x10623d1b */
  if (!C.zf) goto L_10623d1b;
  /* 10623d43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10623d4a:;
  /* 10623d4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623d4e jne 0x10623dc6 */
  if (!C.zf) goto L_10623dc6;
  /* 10623d50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623d57 je 0x10623d8c */
  if (C.zf) goto L_10623d8c;
L_10623d59:;
  /* 10623d59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10623d5f push edx */
  push32((uint32_t)(EDX));
  /* 10623d60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10623d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10623d67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10623d6a push edx */
  push32((uint32_t)(EDX));
  /* 10623d6b push 0x106497e8 */
  push32((uint32_t)(0x106497e8u));
  /* 10623d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623d78 call 0x106219a0 */
  push32(0x10623d7du); f_106219a0();
  /* 10623d7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623d83 jne 0x10623d86 */
  if (!C.zf) goto L_10623d86;
  /* 10623d85 int3  */
  x86_unimpl("int3 @ 0x10623d85");
L_10623d86:;
  /* 10623d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623d8a jne 0x10623d59 */
  if (!C.zf) goto L_10623d59;
L_10623d8c:;
  /* 10623d8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10623d92 push edx */
  push32((uint32_t)(EDX));
  /* 10623d93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10623d96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623d99 push eax */
  push32((uint32_t)(EAX));
  /* 10623d9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10623d9d push ecx */
  push32((uint32_t)(ECX));
  /* 10623d9e push 0x106497bc */
  push32((uint32_t)(0x106497bcu));
  /* 10623da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623dab call 0x106219a0 */
  push32(0x10623db0u); f_106219a0();
  /* 10623db0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623db3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623db6 jne 0x10623db9 */
  if (!C.zf) goto L_10623db9;
  /* 10623db8 int3  */
  x86_unimpl("int3 @ 0x10623db8");
L_10623db9:;
  /* 10623db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10623dbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10623dbd jne 0x10623d8c */
  if (!C.zf) goto L_10623d8c;
  /* 10623dbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10623dc6:;
  /* 10623dc6 jmp 0x10623bd3 */
  goto L_10623bd3;
L_10623dcb:;
  /* 10623dcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10623dcd call 0x10626380 */
  push32(0x10623dd2u); f_10626380();
  /* 10623dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10623dd8:;
  /* 10623dd8 pop edi */
  EDI = (pop32());
  /* 10623dd9 pop esi */
  ESI = (pop32());
  /* 10623dda pop ebx */
  EBX = (pop32());
  /* 10623ddb mov esp, ebp */
  ESP = (EBP);
  /* 10623ddd pop ebp */
  EBP = (pop32());
  /* 10623dde ret  */
  ESPCHK(0x10623a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x10623df0 (34 bytes, 13 insns) */
void f_10623df0(void) {
  FTRACE(0x10623df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10623df1 mov ebp, esp */
  EBP = (ESP);
  /* 10623df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10623df4 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 10623df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10623dfc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623e00 je 0x10623e0b */
  if (C.zf) goto L_10623e0b;
  /* 10623e02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623e05 mov dword ptr [0x1064ca84], ecx */
  w32((uint32_t)(0x1064ca84), (ECX));
L_10623e0b:;
  /* 10623e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623e0e mov esp, ebp */
  ESP = (EBP);
  /* 10623e10 pop ebp */
  EBP = (pop32());
  /* 10623e11 ret  */
  ESPCHK(0x10623df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e20 @ 0x10623e20 (103 bytes, 38 insns) */
void f_10623e20(void) {
  FTRACE(0x10623e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10623e21 mov ebp, esp */
  EBP = (ESP);
  /* 10623e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10623e24 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 10623e29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10623e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623e2e jne 0x10623e32 */
  if (!C.zf) goto L_10623e32;
  /* 10623e30 jmp 0x10623e83 */
  goto L_10623e83;
L_10623e32:;
  /* 10623e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623e34 call 0x106262e0 */
  push32(0x10623e39u); f_106262e0();
  /* 10623e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623e3c mov ecx, dword ptr [0x1064e460] */
  ECX = (r32((uint32_t)(0x1064e460)));
  /* 10623e42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10623e45 jmp 0x10623e4f */
  goto L_10623e4f;
L_10623e47:;
  /* 10623e47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623e4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10623e4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10623e4f:;
  /* 10623e4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623e53 je 0x10623e79 */
  if (C.zf) goto L_10623e79;
  /* 10623e55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623e58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10623e5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10623e61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623e64 jne 0x10623e77 */
  if (!C.zf) goto L_10623e77;
  /* 10623e66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623e69 push eax */
  push32((uint32_t)(EAX));
  /* 10623e6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623e6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10623e70 push ecx */
  push32((uint32_t)(ECX));
  /* 10623e71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10623e74u);
  /* 10623e74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10623e77:;
  /* 10623e77 jmp 0x10623e47 */
  goto L_10623e47;
L_10623e79:;
  /* 10623e79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10623e7b call 0x10626380 */
  push32(0x10623e80u); f_10626380();
  /* 10623e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10623e83:;
  /* 10623e83 mov esp, ebp */
  ESP = (EBP);
  /* 10623e85 pop ebp */
  EBP = (pop32());
  /* 10623e86 ret  */
  ESPCHK(0x10623e20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10623e90 (75 bytes, 28 insns) */
void f_10623e90(void) {
  FTRACE(0x10623e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10623e91 mov ebp, esp */
  EBP = (ESP);
  /* 10623e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10623e94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623e98 je 0x10623ecd */
  if (C.zf) goto L_10623ecd;
  /* 10623e9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623e9d push eax */
  push32((uint32_t)(EAX));
  /* 10623e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 10623ea2 call dword ptr [0x106502c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c8))), 0x10623ea8u);
  /* 10623ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623eaa jne 0x10623ecd */
  if (!C.zf) goto L_10623ecd;
  /* 10623eac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623eb0 je 0x10623ec4 */
  if (C.zf) goto L_10623ec4;
  /* 10623eb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623eb5 push edx */
  push32((uint32_t)(EDX));
  /* 10623eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10623eba call dword ptr [0x106502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c4))), 0x10623ec0u);
  /* 10623ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623ec2 jne 0x10623ecd */
  if (!C.zf) goto L_10623ecd;
L_10623ec4:;
  /* 10623ec4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10623ecb jmp 0x10623ed4 */
  goto L_10623ed4;
L_10623ecd:;
  /* 10623ecd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10623ed4:;
  /* 10623ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623ed7 mov esp, ebp */
  ESP = (EBP);
  /* 10623ed9 pop ebp */
  EBP = (pop32());
  /* 10623eda ret  */
  ESPCHK(0x10623e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee0 @ 0x10623ee0 (134 bytes, 50 insns) */
void f_10623ee0(void) {
  FTRACE(0x10623ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10623ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10623ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10623ee4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623ee8 jne 0x10623eee */
  if (!C.zf) goto L_10623eee;
  /* 10623eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623eec jmp 0x10623f62 */
  goto L_10623f62;
L_10623eee:;
  /* 10623eee push 1 */
  push32((uint32_t)(0x1u));
  /* 10623ef0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10623ef2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623ef5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10623ef9 call 0x10623e90 */
  push32(0x10623efeu); f_10623e90();
  /* 10623efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623f03 jne 0x10623f09 */
  if (!C.zf) goto L_10623f09;
  /* 10623f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623f07 jmp 0x10623f62 */
  goto L_10623f62;
L_10623f09:;
  /* 10623f09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623f0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623f0f push ecx */
  push32((uint32_t)(ECX));
  /* 10623f10 call 0x10626be0 */
  push32(0x10623f15u); f_10626be0();
  /* 10623f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623f18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10623f1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623f1f je 0x10623f36 */
  if (C.zf) goto L_10623f36;
  /* 10623f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623f24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623f27 push edx */
  push32((uint32_t)(EDX));
  /* 10623f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623f2b push eax */
  push32((uint32_t)(EAX));
  /* 10623f2c call 0x10626c40 */
  push32(0x10623f31u); f_10626c40();
  /* 10623f31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623f34 jmp 0x10623f62 */
  goto L_10623f62;
L_10623f36:;
  /* 10623f36 mov ecx, dword ptr [0x1064e414] */
  ECX = (r32((uint32_t)(0x1064e414)));
  /* 10623f3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10623f42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10623f44 je 0x10623f4d */
  if (C.zf) goto L_10623f4d;
  /* 10623f46 mov eax, 1 */
  EAX = (0x1u);
  /* 10623f4b jmp 0x10623f62 */
  goto L_10623f62;
L_10623f4d:;
  /* 10623f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623f50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623f53 push edx */
  push32((uint32_t)(EDX));
  /* 10623f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10623f56 mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 10623f5b push eax */
  push32((uint32_t)(EAX));
  /* 10623f5c call dword ptr [0x106502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502cc))), 0x10623f62u);
L_10623f62:;
  /* 10623f62 mov esp, ebp */
  ESP = (EBP);
  /* 10623f64 pop ebp */
  EBP = (pop32());
  /* 10623f65 ret  */
  ESPCHK(0x10623ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x10623f70 (227 bytes, 80 insns) */
void f_10623f70(void) {
  FTRACE(0x10623f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10623f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10623f71 mov ebp, esp */
  EBP = (ESP);
  /* 10623f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10623f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623f77 push eax */
  push32((uint32_t)(EAX));
  /* 10623f78 call 0x10623ee0 */
  push32(0x10623f7du); f_10623ee0();
  /* 10623f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623f80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623f82 jne 0x10623f8b */
  if (!C.zf) goto L_10623f8b;
  /* 10623f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10623f86 jmp 0x1062404f */
  goto L_1062404f;
L_10623f8b:;
  /* 10623f8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10623f8d call 0x106262e0 */
  push32(0x10623f92u); f_106262e0();
  /* 10623f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623f95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623f98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10623f9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10623f9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623fa1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623fa4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623fa9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623fac je 0x10623fd0 */
  if (C.zf) goto L_10623fd0;
  /* 10623fae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623fb1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623fb5 je 0x10623fd0 */
  if (C.zf) goto L_10623fd0;
  /* 10623fb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623fba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10623fbd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10623fc2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623fc5 je 0x10623fd0 */
  if (C.zf) goto L_10623fd0;
  /* 10623fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623fca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623fce jne 0x10624043 */
  if (!C.zf) goto L_10624043;
L_10623fd0:;
  /* 10623fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10623fd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10623fd5 push edx */
  push32((uint32_t)(EDX));
  /* 10623fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10623fd9 push eax */
  push32((uint32_t)(EAX));
  /* 10623fda call 0x10623e90 */
  push32(0x10623fdfu); f_10623e90();
  /* 10623fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10623fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10623fe4 je 0x10624043 */
  if (C.zf) goto L_10624043;
  /* 10623fe6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623fe9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10623fec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623fef jne 0x10624043 */
  if (!C.zf) goto L_10624043;
  /* 10623ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10623ff4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10623ff7 cmp ecx, dword ptr [0x1064ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10623ffd jg 0x10624043 */
  if ((!C.zf&&C.sf==C.of)) goto L_10624043;
  /* 10623fff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624003 je 0x10624010 */
  if (C.zf) goto L_10624010;
  /* 10624005 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062400b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1062400e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10624010:;
  /* 10624010 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624014 je 0x10624021 */
  if (C.zf) goto L_10624021;
  /* 10624016 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062401c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1062401f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10624021:;
  /* 10624021 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624025 je 0x10624032 */
  if (C.zf) goto L_10624032;
  /* 10624027 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1062402a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062402d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10624030 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10624032:;
  /* 10624032 push 9 */
  push32((uint32_t)(0x9u));
  /* 10624034 call 0x10626380 */
  push32(0x10624039u); f_10626380();
  /* 10624039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062403c mov eax, 1 */
  EAX = (0x1u);
  /* 10624041 jmp 0x1062404f */
  goto L_1062404f;
L_10624043:;
  /* 10624043 push 9 */
  push32((uint32_t)(0x9u));
  /* 10624045 call 0x10626380 */
  push32(0x1062404au); f_10626380();
  /* 1062404a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062404d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062404f:;
  /* 1062404f mov esp, ebp */
  ESP = (EBP);
  /* 10624051 pop ebp */
  EBP = (pop32());
  /* 10624052 ret  */
  ESPCHK(0x10623f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x10624060 (28 bytes, 11 insns) */
void f_10624060(void) {
  FTRACE(0x10624060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624060 push ebp */
  push32((uint32_t)(EBP));
  /* 10624061 mov ebp, esp */
  EBP = (ESP);
  /* 10624063 push ecx */
  push32((uint32_t)(ECX));
  /* 10624064 mov eax, dword ptr [0x1064fdb8] */
  EAX = (r32((uint32_t)(0x1064fdb8)));
  /* 10624069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062406c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062406f mov dword ptr [0x1064fdb8], ecx */
  w32((uint32_t)(0x1064fdb8), (ECX));
  /* 10624075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624078 mov esp, ebp */
  ESP = (EBP);
  /* 1062407a pop ebp */
  EBP = (pop32());
  /* 1062407b ret  */
  ESPCHK(0x10624060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x10624080 (362 bytes, 116 insns) */
void f_10624080(void) {
  FTRACE(0x10624080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624080 push ebp */
  push32((uint32_t)(EBP));
  /* 10624081 mov ebp, esp */
  EBP = (ESP);
  /* 10624083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624086 push ebx */
  push32((uint32_t)(EBX));
  /* 10624087 push esi */
  push32((uint32_t)(ESI));
  /* 10624088 push edi */
  push32((uint32_t)(EDI));
  /* 10624089 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062408d jne 0x106240ba */
  if (!C.zf) goto L_106240ba;
L_1062408f:;
  /* 1062408f push 0x1064991c */
  push32((uint32_t)(0x1064991cu));
  /* 10624094 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10624099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062409b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062409d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062409f push 0 */
  push32((uint32_t)(0x0u));
  /* 106240a1 call 0x106219a0 */
  push32(0x106240a6u); f_106219a0();
  /* 106240a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106240a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106240ac jne 0x106240af */
  if (!C.zf) goto L_106240af;
  /* 106240ae int3  */
  x86_unimpl("int3 @ 0x106240ae");
L_106240af:;
  /* 106240af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106240b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106240b3 jne 0x1062408f */
  if (!C.zf) goto L_1062408f;
  /* 106240b5 jmp 0x106241e3 */
  goto L_106241e3;
L_106240ba:;
  /* 106240ba push 9 */
  push32((uint32_t)(0x9u));
  /* 106240bc call 0x106262e0 */
  push32(0x106240c1u); f_106262e0();
  /* 106240c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106240c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106240c7 mov edx, dword ptr [0x1064e460] */
  EDX = (r32((uint32_t)(0x1064e460)));
  /* 106240cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106240cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106240d6 jmp 0x106240e1 */
  goto L_106240e1;
L_106240d8:;
  /* 106240d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106240db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106240de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106240e1:;
  /* 106240e1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106240e5 jge 0x10624105 */
  if ((C.sf==C.of)) goto L_10624105;
  /* 106240e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106240ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106240ed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 106240f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106240f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106240fb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10624103 jmp 0x106240d8 */
  goto L_106240d8;
L_10624105:;
  /* 10624105 mov edx, dword ptr [0x1064e460] */
  EDX = (r32((uint32_t)(0x1064e460)));
  /* 1062410b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1062410e jmp 0x10624118 */
  goto L_10624118;
L_10624110:;
  /* 10624110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624113 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624115 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10624118:;
  /* 10624118 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062411c je 0x106241c1 */
  if (C.zf) goto L_106241c1;
  /* 10624122 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624125 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10624128 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062412d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062412f jl 0x10624197 */
  if ((C.sf!=C.of)) goto L_10624197;
  /* 10624131 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624134 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10624137 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062413d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624140 jge 0x10624197 */
  if ((C.sf==C.of)) goto L_10624197;
  /* 10624142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624145 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10624148 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1062414e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624151 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10624155 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624158 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062415b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1062415e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10624164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624167 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1062416b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062416e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10624171 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10624176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624179 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1062417d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624180 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624186 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10624189 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062418e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624191 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10624195 jmp 0x106241bc */
  goto L_106241bc;
L_10624197:;
  /* 10624197 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062419a push edx */
  push32((uint32_t)(EDX));
  /* 1062419b push 0x106498f8 */
  push32((uint32_t)(0x106498f8u));
  /* 106241a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106241a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106241a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106241a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106241a8 call 0x106219a0 */
  push32(0x106241adu); f_106219a0();
  /* 106241ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106241b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106241b3 jne 0x106241b6 */
  if (!C.zf) goto L_106241b6;
  /* 106241b5 int3  */
  x86_unimpl("int3 @ 0x106241b5");
L_106241b6:;
  /* 106241b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106241b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106241ba jne 0x10624197 */
  if (!C.zf) goto L_10624197;
L_106241bc:;
  /* 106241bc jmp 0x10624110 */
  goto L_10624110;
L_106241c1:;
  /* 106241c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106241c4 mov edx, dword ptr [0x1064e468] */
  EDX = (r32((uint32_t)(0x1064e468)));
  /* 106241ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 106241cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106241d0 mov ecx, dword ptr [0x1064e45c] */
  ECX = (r32((uint32_t)(0x1064e45c)));
  /* 106241d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 106241d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 106241db call 0x10626380 */
  push32(0x106241e0u); f_10626380();
  /* 106241e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106241e3:;
  /* 106241e3 pop edi */
  EDI = (pop32());
  /* 106241e4 pop esi */
  ESI = (pop32());
  /* 106241e5 pop ebx */
  EBX = (pop32());
  /* 106241e6 mov esp, ebp */
  ESP = (EBP);
  /* 106241e8 pop ebp */
  EBP = (pop32());
  /* 106241e9 ret  */
  ESPCHK(0x10624080u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x106241f0 (291 bytes, 95 insns) */
void f_106241f0(void) {
  FTRACE(0x106241f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106241f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106241f1 mov ebp, esp */
  EBP = (ESP);
  /* 106241f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106241f6 push ebx */
  push32((uint32_t)(EBX));
  /* 106241f7 push esi */
  push32((uint32_t)(ESI));
  /* 106241f8 push edi */
  push32((uint32_t)(EDI));
  /* 106241f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10624200 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624204 je 0x10624212 */
  if (C.zf) goto L_10624212;
  /* 10624206 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062420a je 0x10624212 */
  if (C.zf) goto L_10624212;
  /* 1062420c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624210 jne 0x10624240 */
  if (!C.zf) goto L_10624240;
L_10624212:;
  /* 10624212 push 0x10649944 */
  push32((uint32_t)(0x10649944u));
  /* 10624217 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 1062421c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062421e push 0 */
  push32((uint32_t)(0x0u));
  /* 10624220 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624222 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624224 call 0x106219a0 */
  push32(0x10624229u); f_106219a0();
  /* 10624229 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062422c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062422f jne 0x10624232 */
  if (!C.zf) goto L_10624232;
  /* 10624231 int3  */
  x86_unimpl("int3 @ 0x10624231");
L_10624232:;
  /* 10624232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624236 jne 0x10624212 */
  if (!C.zf) goto L_10624212;
  /* 10624238 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062423b jmp 0x1062430c */
  goto L_1062430c;
L_10624240:;
  /* 10624240 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10624247 jmp 0x10624252 */
  goto L_10624252;
L_10624249:;
  /* 10624249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062424c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062424f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10624252:;
  /* 10624252 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624256 jge 0x106242dc */
  if ((C.sf==C.of)) goto L_106242dc;
  /* 1062425c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062425f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624265 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10624268 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1062426c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624276 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1062427a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062427d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624280 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624283 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10624286 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1062428a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062428e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624291 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624294 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10624298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062429b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062429e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106242a3 jne 0x106242b2 */
  if (!C.zf) goto L_106242b2;
  /* 106242a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106242a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106242ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106242b0 je 0x106242d7 */
  if (C.zf) goto L_106242d7;
L_106242b2:;
  /* 106242b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106242b6 je 0x106242d7 */
  if (C.zf) goto L_106242d7;
  /* 106242b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106242bc jne 0x106242d0 */
  if (!C.zf) goto L_106242d0;
  /* 106242be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106242c2 jne 0x106242d7 */
  if (!C.zf) goto L_106242d7;
  /* 106242c4 mov eax, dword ptr [0x1064ca84] */
  EAX = (r32((uint32_t)(0x1064ca84)));
  /* 106242c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 106242cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106242ce je 0x106242d7 */
  if (C.zf) goto L_106242d7;
L_106242d0:;
  /* 106242d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_106242d7:;
  /* 106242d7 jmp 0x10624249 */
  goto L_10624249;
L_106242dc:;
  /* 106242dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106242df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106242e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106242e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106242e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106242eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 106242ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106242f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106242f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 106242f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106242fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106242fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10624300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624303 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10624309 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1062430c:;
  /* 1062430c pop edi */
  EDI = (pop32());
  /* 1062430d pop esi */
  ESI = (pop32());
  /* 1062430e pop ebx */
  EBX = (pop32());
  /* 1062430f mov esp, ebp */
  ESP = (EBP);
  /* 10624311 pop ebp */
  EBP = (pop32());
  /* 10624312 ret  */
  ESPCHK(0x106241f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004320 @ 0x10624320 (697 bytes, 253 insns) */
void f_10624320(void) {
  FTRACE(0x10624320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624320 push ebp */
  push32((uint32_t)(EBP));
  /* 10624321 mov ebp, esp */
  EBP = (ESP);
  /* 10624323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624326 push ebx */
  push32((uint32_t)(EBX));
  /* 10624327 push esi */
  push32((uint32_t)(ESI));
  /* 10624328 push edi */
  push32((uint32_t)(EDI));
  /* 10624329 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10624330 push 9 */
  push32((uint32_t)(0x9u));
  /* 10624332 call 0x106262e0 */
  push32(0x10624337u); f_106262e0();
  /* 10624337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062433a:;
  /* 1062433a push 0x10649a3c */
  push32((uint32_t)(0x10649a3cu));
  /* 1062433f push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 10624344 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624346 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062434a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062434c call 0x106219a0 */
  push32(0x10624351u); f_106219a0();
  /* 10624351 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624354 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624357 jne 0x1062435a */
  if (!C.zf) goto L_1062435a;
  /* 10624359 int3  */
  x86_unimpl("int3 @ 0x10624359");
L_1062435a:;
  /* 1062435a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062435c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062435e jne 0x1062433a */
  if (!C.zf) goto L_1062433a;
  /* 10624360 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624364 je 0x1062436e */
  if (C.zf) goto L_1062436e;
  /* 10624366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624369 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062436b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1062436e:;
  /* 1062436e mov eax, dword ptr [0x1064e460] */
  EAX = (r32((uint32_t)(0x1064e460)));
  /* 10624373 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10624376 jmp 0x10624380 */
  goto L_10624380;
L_10624378:;
  /* 10624378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062437b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062437d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10624380:;
  /* 10624380 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624384 je 0x106245a2 */
  if (C.zf) goto L_106245a2;
  /* 1062438a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062438d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624390 je 0x106245a2 */
  if (C.zf) goto L_106245a2;
  /* 10624396 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624399 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1062439c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106243a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106243a5 je 0x106243d4 */
  if (C.zf) goto L_106243d4;
  /* 106243a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106243aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106243ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106243b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106243b5 je 0x106243d4 */
  if (C.zf) goto L_106243d4;
  /* 106243b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106243ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106243bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106243c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106243c5 jne 0x106243d9 */
  if (!C.zf) goto L_106243d9;
  /* 106243c7 mov ecx, dword ptr [0x1064ca84] */
  ECX = (r32((uint32_t)(0x1064ca84)));
  /* 106243cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106243d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106243d2 jne 0x106243d9 */
  if (!C.zf) goto L_106243d9;
L_106243d4:;
  /* 106243d4 jmp 0x1062459d */
  goto L_1062459d;
L_106243d9:;
  /* 106243d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106243dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106243e0 je 0x10624452 */
  if (C.zf) goto L_10624452;
  /* 106243e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106243e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106243e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106243e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106243ec push ecx */
  push32((uint32_t)(ECX));
  /* 106243ed call 0x10623e90 */
  push32(0x106243f2u); f_10623e90();
  /* 106243f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106243f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106243f7 jne 0x10624423 */
  if (!C.zf) goto L_10624423;
L_106243f9:;
  /* 106243f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106243fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106243ff push eax */
  push32((uint32_t)(EAX));
  /* 10624400 push 0x10649a28 */
  push32((uint32_t)(0x10649a28u));
  /* 10624405 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062440b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062440d call 0x106219a0 */
  push32(0x10624412u); f_106219a0();
  /* 10624412 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624415 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624418 jne 0x1062441b */
  if (!C.zf) goto L_1062441b;
  /* 1062441a int3  */
  x86_unimpl("int3 @ 0x1062441a");
L_1062441b:;
  /* 1062441b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062441d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062441f jne 0x106243f9 */
  if (!C.zf) goto L_106243f9;
  /* 10624421 jmp 0x10624452 */
  goto L_10624452;
L_10624423:;
  /* 10624423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624426 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10624429 push eax */
  push32((uint32_t)(EAX));
  /* 1062442a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062442d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10624430 push edx */
  push32((uint32_t)(EDX));
  /* 10624431 push 0x10649a1c */
  push32((uint32_t)(0x10649a1cu));
  /* 10624436 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624438 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062443a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062443c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062443e call 0x106219a0 */
  push32(0x10624443u); f_106219a0();
  /* 10624443 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624446 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624449 jne 0x1062444c */
  if (!C.zf) goto L_1062444c;
  /* 1062444b int3  */
  x86_unimpl("int3 @ 0x1062444b");
L_1062444c:;
  /* 1062444c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062444e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624450 jne 0x10624423 */
  if (!C.zf) goto L_10624423;
L_10624452:;
  /* 10624452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624455 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10624458 push edx */
  push32((uint32_t)(EDX));
  /* 10624459 push 0x10649a14 */
  push32((uint32_t)(0x10649a14u));
  /* 1062445e push 0 */
  push32((uint32_t)(0x0u));
  /* 10624460 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624464 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624466 call 0x106219a0 */
  push32(0x1062446bu); f_106219a0();
  /* 1062446b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062446e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624471 jne 0x10624474 */
  if (!C.zf) goto L_10624474;
  /* 10624473 int3  */
  x86_unimpl("int3 @ 0x10624473");
L_10624474:;
  /* 10624474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624478 jne 0x10624452 */
  if (!C.zf) goto L_10624452;
  /* 1062447a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062447d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10624480 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10624486 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624489 jne 0x106244fc */
  if (!C.zf) goto L_106244fc;
L_1062448b:;
  /* 1062448b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062448e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10624491 push ecx */
  push32((uint32_t)(ECX));
  /* 10624492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624495 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10624498 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1062449b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106244a0 push eax */
  push32((uint32_t)(EAX));
  /* 106244a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106244a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106244a7 push ecx */
  push32((uint32_t)(ECX));
  /* 106244a8 push 0x106499e0 */
  push32((uint32_t)(0x106499e0u));
  /* 106244ad push 0 */
  push32((uint32_t)(0x0u));
  /* 106244af push 0 */
  push32((uint32_t)(0x0u));
  /* 106244b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106244b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106244b5 call 0x106219a0 */
  push32(0x106244bau); f_106219a0();
  /* 106244ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106244bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106244c0 jne 0x106244c3 */
  if (!C.zf) goto L_106244c3;
  /* 106244c2 int3  */
  x86_unimpl("int3 @ 0x106244c2");
L_106244c3:;
  /* 106244c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106244c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106244c7 jne 0x1062448b */
  if (!C.zf) goto L_1062448b;
  /* 106244c9 cmp dword ptr [0x1064fdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106244d0 je 0x106244eb */
  if (C.zf) goto L_106244eb;
  /* 106244d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106244d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106244d8 push ecx */
  push32((uint32_t)(ECX));
  /* 106244d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106244dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106244df push edx */
  push32((uint32_t)(EDX));
  /* 106244e0 call dword ptr [0x1064fdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064fdb8))), 0x106244e6u);
  /* 106244e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106244e9 jmp 0x106244f7 */
  goto L_106244f7;
L_106244eb:;
  /* 106244eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106244ee push eax */
  push32((uint32_t)(EAX));
  /* 106244ef call 0x106245e0 */
  push32(0x106244f4u); f_106245e0();
  /* 106244f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106244f7:;
  /* 106244f7 jmp 0x1062459d */
  goto L_1062459d;
L_106244fc:;
  /* 106244fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106244ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624503 jne 0x10624542 */
  if (!C.zf) goto L_10624542;
L_10624505:;
  /* 10624505 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624508 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062450b push eax */
  push32((uint32_t)(EAX));
  /* 1062450c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062450f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624512 push ecx */
  push32((uint32_t)(ECX));
  /* 10624513 push 0x106499b8 */
  push32((uint32_t)(0x106499b8u));
  /* 10624518 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062451a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062451c push 0 */
  push32((uint32_t)(0x0u));
  /* 1062451e push 0 */
  push32((uint32_t)(0x0u));
  /* 10624520 call 0x106219a0 */
  push32(0x10624525u); f_106219a0();
  /* 10624525 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624528 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062452b jne 0x1062452e */
  if (!C.zf) goto L_1062452e;
  /* 1062452d int3  */
  x86_unimpl("int3 @ 0x1062452d");
L_1062452e:;
  /* 1062452e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624532 jne 0x10624505 */
  if (!C.zf) goto L_10624505;
  /* 10624534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624537 push eax */
  push32((uint32_t)(EAX));
  /* 10624538 call 0x106245e0 */
  push32(0x1062453du); f_106245e0();
  /* 1062453d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624540 jmp 0x1062459d */
  goto L_1062459d;
L_10624542:;
  /* 10624542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624545 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10624548 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062454e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624551 jne 0x1062459d */
  if (!C.zf) goto L_1062459d;
L_10624553:;
  /* 10624553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624556 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10624559 push ecx */
  push32((uint32_t)(ECX));
  /* 1062455a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062455d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10624560 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10624563 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10624568 push eax */
  push32((uint32_t)(EAX));
  /* 10624569 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062456c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062456f push ecx */
  push32((uint32_t)(ECX));
  /* 10624570 push 0x10649984 */
  push32((uint32_t)(0x10649984u));
  /* 10624575 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624577 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062457b push 0 */
  push32((uint32_t)(0x0u));
  /* 1062457d call 0x106219a0 */
  push32(0x10624582u); f_106219a0();
  /* 10624582 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624585 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624588 jne 0x1062458b */
  if (!C.zf) goto L_1062458b;
  /* 1062458a int3  */
  x86_unimpl("int3 @ 0x1062458a");
L_1062458b:;
  /* 1062458b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1062458d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062458f jne 0x10624553 */
  if (!C.zf) goto L_10624553;
  /* 10624591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624594 push eax */
  push32((uint32_t)(EAX));
  /* 10624595 call 0x106245e0 */
  push32(0x1062459au); f_106245e0();
  /* 1062459a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062459d:;
  /* 1062459d jmp 0x10624378 */
  goto L_10624378;
L_106245a2:;
  /* 106245a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106245a4 call 0x10626380 */
  push32(0x106245a9u); f_10626380();
  /* 106245a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106245ac:;
  /* 106245ac push 0x1064996c */
  push32((uint32_t)(0x1064996cu));
  /* 106245b1 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 106245b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106245b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106245ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106245bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106245be call 0x106219a0 */
  push32(0x106245c3u); f_106219a0();
  /* 106245c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106245c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106245c9 jne 0x106245cc */
  if (!C.zf) goto L_106245cc;
  /* 106245cb int3  */
  x86_unimpl("int3 @ 0x106245cb");
L_106245cc:;
  /* 106245cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106245ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106245d0 jne 0x106245ac */
  if (!C.zf) goto L_106245ac;
  /* 106245d2 pop edi */
  EDI = (pop32());
  /* 106245d3 pop esi */
  ESI = (pop32());
  /* 106245d4 pop ebx */
  EBX = (pop32());
  /* 106245d5 mov esp, ebp */
  ESP = (EBP);
  /* 106245d7 pop ebp */
  EBP = (pop32());
  /* 106245d8 ret  */
  ESPCHK(0x10624320u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e0 @ 0x106245e0 (276 bytes, 89 insns) */
void f_106245e0(void) {
  FTRACE(0x106245e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106245e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106245e1 mov ebp, esp */
  EBP = (ESP);
  /* 106245e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106245e6 push ebx */
  push32((uint32_t)(EBX));
  /* 106245e7 push esi */
  push32((uint32_t)(ESI));
  /* 106245e8 push edi */
  push32((uint32_t)(EDI));
  /* 106245e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 106245f0 jmp 0x106245fb */
  goto L_106245fb;
L_106245f2:;
  /* 106245f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106245f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106245f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_106245fb:;
  /* 106245fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106245fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624602 jge 0x1062460f */
  if ((C.sf==C.of)) goto L_1062460f;
  /* 10624604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624607 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1062460a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1062460d jmp 0x10624616 */
  goto L_10624616;
L_1062460f:;
  /* 1062460f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10624616:;
  /* 10624616 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10624619 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062461c jge 0x106246bc */
  if ((C.sf==C.of)) goto L_106246bc;
  /* 10624622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624625 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624628 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1062462b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1062462e cmp dword ptr [0x1064cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624635 jle 0x10624653 */
  if ((C.zf||C.sf!=C.of)) goto L_10624653;
  /* 10624637 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1062463c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1062463f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10624645 push ecx */
  push32((uint32_t)(ECX));
  /* 10624646 call 0x106288f0 */
  push32(0x1062464bu); f_106288f0();
  /* 1062464b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062464e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10624651 jmp 0x10624670 */
  goto L_10624670;
L_10624653:;
  /* 10624653 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10624656 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062465c mov eax, dword ptr [0x1064cc98] */
  EAX = (r32((uint32_t)(0x1064cc98)));
  /* 10624661 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10624663 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10624667 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1062466d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10624670:;
  /* 10624670 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624674 je 0x10624684 */
  if (C.zf) goto L_10624684;
  /* 10624676 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10624679 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062467f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10624682 jmp 0x1062468b */
  goto L_1062468b;
L_10624684:;
  /* 10624684 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1062468b:;
  /* 1062468b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1062468e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10624691 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10624695 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10624698 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062469e push edx */
  push32((uint32_t)(EDX));
  /* 1062469f push 0x10649a60 */
  push32((uint32_t)(0x10649a60u));
  /* 106246a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106246a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106246aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 106246ae push ecx */
  push32((uint32_t)(ECX));
  /* 106246af call 0x106287f0 */
  push32(0x106246b4u); f_106287f0();
  /* 106246b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106246b7 jmp 0x106245f2 */
  goto L_106245f2;
L_106246bc:;
  /* 106246bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106246bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_106246c4:;
  /* 106246c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106246c7 push eax */
  push32((uint32_t)(EAX));
  /* 106246c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 106246cb push ecx */
  push32((uint32_t)(ECX));
  /* 106246cc push 0x10649a50 */
  push32((uint32_t)(0x10649a50u));
  /* 106246d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106246d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106246d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106246d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106246d9 call 0x106219a0 */
  push32(0x106246deu); f_106219a0();
  /* 106246de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106246e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106246e4 jne 0x106246e7 */
  if (!C.zf) goto L_106246e7;
  /* 106246e6 int3  */
  x86_unimpl("int3 @ 0x106246e6");
L_106246e7:;
  /* 106246e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106246e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106246eb jne 0x106246c4 */
  if (!C.zf) goto L_106246c4;
  /* 106246ed pop edi */
  EDI = (pop32());
  /* 106246ee pop esi */
  ESI = (pop32());
  /* 106246ef pop ebx */
  EBX = (pop32());
  /* 106246f0 mov esp, ebp */
  ESP = (EBP);
  /* 106246f2 pop ebp */
  EBP = (pop32());
  /* 106246f3 ret  */
  ESPCHK(0x106245e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004700 @ 0x10624700 (116 bytes, 46 insns) */
void f_10624700(void) {
  FTRACE(0x10624700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624700 push ebp */
  push32((uint32_t)(EBP));
  /* 10624701 mov ebp, esp */
  EBP = (ESP);
  /* 10624703 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624706 push ebx */
  push32((uint32_t)(EBX));
  /* 10624707 push esi */
  push32((uint32_t)(ESI));
  /* 10624708 push edi */
  push32((uint32_t)(EDI));
  /* 10624709 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1062470c push eax */
  push32((uint32_t)(EAX));
  /* 1062470d call 0x10624080 */
  push32(0x10624712u); f_10624080();
  /* 10624712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624715 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624719 jne 0x10624734 */
  if (!C.zf) goto L_10624734;
  /* 1062471b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062471f jne 0x10624734 */
  if (!C.zf) goto L_10624734;
  /* 10624721 mov ecx, dword ptr [0x1064ca84] */
  ECX = (r32((uint32_t)(0x1064ca84)));
  /* 10624727 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1062472a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1062472c je 0x1062476b */
  if (C.zf) goto L_1062476b;
  /* 1062472e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624732 je 0x1062476b */
  if (C.zf) goto L_1062476b;
L_10624734:;
  /* 10624734 push 0x10649a68 */
  push32((uint32_t)(0x10649a68u));
  /* 10624739 push 0x10649434 */
  push32((uint32_t)(0x10649434u));
  /* 1062473e push 0 */
  push32((uint32_t)(0x0u));
  /* 10624740 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624742 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624746 call 0x106219a0 */
  push32(0x1062474bu); f_106219a0();
  /* 1062474b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062474e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624751 jne 0x10624754 */
  if (!C.zf) goto L_10624754;
  /* 10624753 int3  */
  x86_unimpl("int3 @ 0x10624753");
L_10624754:;
  /* 10624754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624756 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624758 jne 0x10624734 */
  if (!C.zf) goto L_10624734;
  /* 1062475a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062475c call 0x10624320 */
  push32(0x10624761u); f_10624320();
  /* 10624761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624764 mov eax, 1 */
  EAX = (0x1u);
  /* 10624769 jmp 0x1062476d */
  goto L_1062476d;
L_1062476b:;
  /* 1062476b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062476d:;
  /* 1062476d pop edi */
  EDI = (pop32());
  /* 1062476e pop esi */
  ESI = (pop32());
  /* 1062476f pop ebx */
  EBX = (pop32());
  /* 10624770 mov esp, ebp */
  ESP = (EBP);
  /* 10624772 pop ebp */
  EBP = (pop32());
  /* 10624773 ret  */
  ESPCHK(0x10624700u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x10624780 (197 bytes, 79 insns) */
void f_10624780(void) {
  FTRACE(0x10624780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624780 push ebp */
  push32((uint32_t)(EBP));
  /* 10624781 mov ebp, esp */
  EBP = (ESP);
  /* 10624783 push ecx */
  push32((uint32_t)(ECX));
  /* 10624784 push ebx */
  push32((uint32_t)(EBX));
  /* 10624785 push esi */
  push32((uint32_t)(ESI));
  /* 10624786 push edi */
  push32((uint32_t)(EDI));
  /* 10624787 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062478b jne 0x10624792 */
  if (!C.zf) goto L_10624792;
  /* 1062478d jmp 0x1062483e */
  goto L_1062483e;
L_10624792:;
  /* 10624792 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10624799 jmp 0x106247a4 */
  goto L_106247a4;
L_1062479b:;
  /* 1062479b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062479e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106247a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106247a4:;
  /* 106247a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106247a8 jge 0x106247ee */
  if ((C.sf==C.of)) goto L_106247ee;
L_106247aa:;
  /* 106247aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106247ad mov edx, dword ptr [ecx*4 + 0x1064ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064ca94)));
  /* 106247b4 push edx */
  push32((uint32_t)(EDX));
  /* 106247b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106247b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106247bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 106247bf push edx */
  push32((uint32_t)(EDX));
  /* 106247c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106247c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106247c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 106247ca push edx */
  push32((uint32_t)(EDX));
  /* 106247cb push 0x10649ac4 */
  push32((uint32_t)(0x10649ac4u));
  /* 106247d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106247d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106247d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106247d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106247d8 call 0x106219a0 */
  push32(0x106247ddu); f_106219a0();
  /* 106247dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106247e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106247e3 jne 0x106247e6 */
  if (!C.zf) goto L_106247e6;
  /* 106247e5 int3  */
  x86_unimpl("int3 @ 0x106247e5");
L_106247e6:;
  /* 106247e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106247e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106247ea jne 0x106247aa */
  if (!C.zf) goto L_106247aa;
  /* 106247ec jmp 0x1062479b */
  goto L_1062479b;
L_106247ee:;
  /* 106247ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106247f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106247f4 push edx */
  push32((uint32_t)(EDX));
  /* 106247f5 push 0x10649aa0 */
  push32((uint32_t)(0x10649aa0u));
  /* 106247fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106247fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106247fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10624800 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624802 call 0x106219a0 */
  push32(0x10624807u); f_106219a0();
  /* 10624807 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062480a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062480d jne 0x10624810 */
  if (!C.zf) goto L_10624810;
  /* 1062480f int3  */
  x86_unimpl("int3 @ 0x1062480f");
L_10624810:;
  /* 10624810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624814 jne 0x106247ee */
  if (!C.zf) goto L_106247ee;
L_10624816:;
  /* 10624816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624819 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1062481c push edx */
  push32((uint32_t)(EDX));
  /* 1062481d push 0x10649a80 */
  push32((uint32_t)(0x10649a80u));
  /* 10624822 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624826 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1062482a call 0x106219a0 */
  push32(0x1062482fu); f_106219a0();
  /* 1062482f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624832 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624835 jne 0x10624838 */
  if (!C.zf) goto L_10624838;
  /* 10624837 int3  */
  x86_unimpl("int3 @ 0x10624837");
L_10624838:;
  /* 10624838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062483a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062483c jne 0x10624816 */
  if (!C.zf) goto L_10624816;
L_1062483e:;
  /* 1062483e pop edi */
  EDI = (pop32());
  /* 1062483f pop esi */
  ESI = (pop32());
  /* 10624840 pop ebx */
  EBX = (pop32());
  /* 10624841 mov esp, ebp */
  ESP = (EBP);
  /* 10624843 pop ebp */
  EBP = (pop32());
  /* 10624844 ret  */
  ESPCHK(0x10624780u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x10624850 (329 bytes, 102 insns) */
void f_10624850(void) {
  FTRACE(0x10624850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624850 push ebp */
  push32((uint32_t)(EBP));
  /* 10624851 mov ebp, esp */
  EBP = (ESP);
  /* 10624853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624856 cmp dword ptr [0x1064ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062485d jne 0x10624864 */
  if (!C.zf) goto L_10624864;
  /* 1062485f call 0x10629190 */
  push32(0x10624864u); f_10629190();
L_10624864:;
  /* 10624864 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062486b mov eax, dword ptr [0x1064e3fc] */
  EAX = (r32((uint32_t)(0x1064e3fc)));
  /* 10624870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10624873:;
  /* 10624873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624876 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10624879 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062487b je 0x106248a9 */
  if (C.zf) goto L_106248a9;
  /* 1062487d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624880 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624883 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624886 je 0x10624891 */
  if (C.zf) goto L_10624891;
  /* 10624888 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062488b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062488e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10624891:;
  /* 10624891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624894 push eax */
  push32((uint32_t)(EAX));
  /* 10624895 call 0x10625710 */
  push32(0x1062489au); f_10625710();
  /* 1062489a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062489d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106248a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106248a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106248a7 jmp 0x10624873 */
  goto L_10624873;
L_106248a9:;
  /* 106248a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 106248ab push 0x10649ae4 */
  push32((uint32_t)(0x10649ae4u));
  /* 106248b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106248b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106248b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 106248bc push ecx */
  push32((uint32_t)(ECX));
  /* 106248bd call 0x106228e0 */
  push32(0x106248c2u); f_106228e0();
  /* 106248c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106248c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106248c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106248cb mov dword ptr [0x1064e430], edx */
  w32((uint32_t)(0x1064e430), (EDX));
  /* 106248d1 cmp dword ptr [0x1064e430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106248d8 jne 0x106248e4 */
  if (!C.zf) goto L_106248e4;
  /* 106248da push 9 */
  push32((uint32_t)(0x9u));
  /* 106248dc call 0x10621850 */
  push32(0x106248e1u); f_10621850();
  /* 106248e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106248e4:;
  /* 106248e4 mov eax, dword ptr [0x1064e3fc] */
  EAX = (r32((uint32_t)(0x1064e3fc)));
  /* 106248e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106248ec jmp 0x106248f7 */
  goto L_106248f7;
L_106248ee:;
  /* 106248ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106248f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106248f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106248f7:;
  /* 106248f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106248fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106248fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106248ff je 0x10624967 */
  if (C.zf) goto L_10624967;
  /* 10624901 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624904 push ecx */
  push32((uint32_t)(ECX));
  /* 10624905 call 0x10625710 */
  push32(0x1062490au); f_10625710();
  /* 1062490a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062490d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624910 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10624913 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624916 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10624919 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062491c je 0x10624965 */
  if (C.zf) goto L_10624965;
  /* 1062491e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10624920 push 0x10649ae4 */
  push32((uint32_t)(0x10649ae4u));
  /* 10624925 push 2 */
  push32((uint32_t)(0x2u));
  /* 10624927 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062492a push ecx */
  push32((uint32_t)(ECX));
  /* 1062492b call 0x106228e0 */
  push32(0x10624930u); f_106228e0();
  /* 10624930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624933 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624936 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10624938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062493b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062493e jne 0x1062494a */
  if (!C.zf) goto L_1062494a;
  /* 10624940 push 9 */
  push32((uint32_t)(0x9u));
  /* 10624942 call 0x10621850 */
  push32(0x10624947u); f_10621850();
  /* 10624947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062494a:;
  /* 1062494a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062494d push ecx */
  push32((uint32_t)(ECX));
  /* 1062494e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624951 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10624953 push eax */
  push32((uint32_t)(EAX));
  /* 10624954 call 0x10625890 */
  push32(0x10624959u); f_10625890();
  /* 10624959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062495c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062495f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624962 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10624965:;
  /* 10624965 jmp 0x106248ee */
  goto L_106248ee;
L_10624967:;
  /* 10624967 push 2 */
  push32((uint32_t)(0x2u));
  /* 10624969 mov edx, dword ptr [0x1064e3fc] */
  EDX = (r32((uint32_t)(0x1064e3fc)));
  /* 1062496f push edx */
  push32((uint32_t)(EDX));
  /* 10624970 call 0x10623370 */
  push32(0x10624975u); f_10623370();
  /* 10624975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624978 mov dword ptr [0x1064e3fc], 0 */
  w32((uint32_t)(0x1064e3fc), (0x0u));
  /* 10624982 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624985 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1062498b mov dword ptr [0x1064ff20], 1 */
  w32((uint32_t)(0x1064ff20), (0x1u));
  /* 10624995 mov esp, ebp */
  ESP = (EBP);
  /* 10624997 pop ebp */
  EBP = (pop32());
  /* 10624998 ret  */
  ESPCHK(0x10624850u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x106249a0 (216 bytes, 69 insns) */
void f_106249a0(void) {
  FTRACE(0x106249a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106249a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106249a1 mov ebp, esp */
  EBP = (ESP);
  /* 106249a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106249a6 cmp dword ptr [0x1064ff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064ff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106249ad jne 0x106249b4 */
  if (!C.zf) goto L_106249b4;
  /* 106249af call 0x10629190 */
  push32(0x106249b4u); f_10629190();
L_106249b4:;
  /* 106249b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106249b9 push 0x1064e46c */
  push32((uint32_t)(0x1064e46cu));
  /* 106249be push 0 */
  push32((uint32_t)(0x0u));
  /* 106249c0 call dword ptr [0x10650284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650284))), 0x106249c6u);
  /* 106249c6 mov dword ptr [0x1064e440], 0x1064e46c */
  w32((uint32_t)(0x1064e440), (0x1064e46cu));
  /* 106249d0 mov eax, dword ptr [0x1064ff4c] */
  EAX = (r32((uint32_t)(0x1064ff4c)));
  /* 106249d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106249d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106249da jne 0x106249e7 */
  if (!C.zf) goto L_106249e7;
  /* 106249dc mov edx, dword ptr [0x1064e440] */
  EDX = (r32((uint32_t)(0x1064e440)));
  /* 106249e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106249e5 jmp 0x106249ef */
  goto L_106249ef;
L_106249e7:;
  /* 106249e7 mov eax, dword ptr [0x1064ff4c] */
  EAX = (r32((uint32_t)(0x1064ff4c)));
  /* 106249ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106249ef:;
  /* 106249ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106249f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106249f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106249f8 push edx */
  push32((uint32_t)(EDX));
  /* 106249f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106249fc push eax */
  push32((uint32_t)(EAX));
  /* 106249fd push 0 */
  push32((uint32_t)(0x0u));
  /* 106249ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10624a01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624a04 push ecx */
  push32((uint32_t)(ECX));
  /* 10624a05 call 0x10624a80 */
  push32(0x10624a0au); f_10624a80();
  /* 10624a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624a0d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10624a12 push 0x10649af0 */
  push32((uint32_t)(0x10649af0u));
  /* 10624a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10624a19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624a1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624a1f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10624a22 push ecx */
  push32((uint32_t)(ECX));
  /* 10624a23 call 0x106228e0 */
  push32(0x10624a28u); f_106228e0();
  /* 10624a28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10624a2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624a32 jne 0x10624a3e */
  if (!C.zf) goto L_10624a3e;
  /* 10624a34 push 8 */
  push32((uint32_t)(0x8u));
  /* 10624a36 call 0x10621850 */
  push32(0x10624a3bu); f_10621850();
  /* 10624a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10624a3e:;
  /* 10624a3e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10624a41 push edx */
  push32((uint32_t)(EDX));
  /* 10624a42 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10624a45 push eax */
  push32((uint32_t)(EAX));
  /* 10624a46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624a49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624a4c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10624a4f push eax */
  push32((uint32_t)(EAX));
  /* 10624a50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10624a54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624a57 push edx */
  push32((uint32_t)(EDX));
  /* 10624a58 call 0x10624a80 */
  push32(0x10624a5du); f_10624a80();
  /* 10624a5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624a60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624a63 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624a66 mov dword ptr [0x1064e424], eax */
  w32((uint32_t)(0x1064e424), (EAX));
  /* 10624a6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624a6e mov dword ptr [0x1064e428], ecx */
  w32((uint32_t)(0x1064e428), (ECX));
  /* 10624a74 mov esp, ebp */
  ESP = (EBP);
  /* 10624a76 pop ebp */
  EBP = (pop32());
  /* 10624a77 ret  */
  ESPCHK(0x106249a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x10624a80 (1060 bytes, 360 insns) */
void f_10624a80(void) {
  FTRACE(0x10624a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10624a81 mov ebp, esp */
  EBP = (ESP);
  /* 10624a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624a86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624a89 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10624a8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624a92 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10624a98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10624a9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10624a9e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624aa2 je 0x10624ab5 */
  if (C.zf) goto L_10624ab5;
  /* 10624aa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624aa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624aaa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10624aac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624aaf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624ab2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10624ab5:;
  /* 10624ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624ab8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624abb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624abe jne 0x10624b8d */
  if (!C.zf) goto L_10624b8d;
L_10624ac4:;
  /* 10624ac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624ac7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624aca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10624acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624ad0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624ad3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624ad6 je 0x10624b52 */
  if (C.zf) goto L_10624b52;
  /* 10624ad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624adb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10624ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624ae0 je 0x10624b52 */
  if (C.zf) goto L_10624b52;
  /* 10624ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624ae5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624ae7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10624ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624aeb mov al, byte ptr [edx + 0x1064fc81] */
  AL = (r8((uint32_t)(EDX + 0x1064fc81)));
  /* 10624af1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10624af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624af6 je 0x10624b27 */
  if (C.zf) goto L_10624b27;
  /* 10624af8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624afb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10624afd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10624b05 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624b09 je 0x10624b27 */
  if (C.zf) goto L_10624b27;
  /* 10624b0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624b11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10624b13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10624b15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10624b1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624b21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10624b27:;
  /* 10624b27 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624b2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10624b34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624b38 je 0x10624b4d */
  if (C.zf) goto L_10624b4d;
  /* 10624b3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624b40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10624b42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10624b44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b4a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10624b4d:;
  /* 10624b4d jmp 0x10624ac4 */
  goto L_10624ac4;
L_10624b52:;
  /* 10624b52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10624b57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b5a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b5d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10624b5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624b63 je 0x10624b74 */
  if (C.zf) goto L_10624b74;
  /* 10624b65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b68 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10624b6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624b6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b71 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10624b74:;
  /* 10624b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624b77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624b7a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624b7d jne 0x10624b88 */
  if (!C.zf) goto L_10624b88;
  /* 10624b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624b82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10624b88:;
  /* 10624b88 jmp 0x10624c5c */
  goto L_10624c5c;
L_10624b8d:;
  /* 10624b8d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624b95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624b98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10624b9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624b9e je 0x10624bb3 */
  if (C.zf) goto L_10624bb3;
  /* 10624ba0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624ba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10624ba8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10624baa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624bad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624bb0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10624bb3:;
  /* 10624bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624bb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10624bb8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10624bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624bbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624bc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10624bc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624bc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10624bcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624bcf mov dl, byte ptr [ecx + 0x1064fc81] */
  DL = (r8((uint32_t)(ECX + 0x1064fc81)));
  /* 10624bd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10624bd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624bda je 0x10624c0b */
  if (C.zf) goto L_10624c0b;
  /* 10624bdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624bdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624be4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624be7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10624be9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624bed je 0x10624c02 */
  if (C.zf) goto L_10624c02;
  /* 10624bef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624bf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624bf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10624bf7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10624bf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624bfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624bff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10624c02:;
  /* 10624c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624c08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10624c0b:;
  /* 10624c0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624c0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10624c14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624c17 je 0x10624c37 */
  if (C.zf) goto L_10624c37;
  /* 10624c19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624c1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10624c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624c23 je 0x10624c37 */
  if (C.zf) goto L_10624c37;
  /* 10624c25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624c28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10624c2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624c31 jne 0x10624b8d */
  if (!C.zf) goto L_10624b8d;
L_10624c37:;
  /* 10624c37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10624c3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10624c40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624c42 jne 0x10624c4f */
  if (!C.zf) goto L_10624c4f;
  /* 10624c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624c4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10624c4d jmp 0x10624c5c */
  goto L_10624c5c;
L_10624c4f:;
  /* 10624c4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624c53 je 0x10624c5c */
  if (C.zf) goto L_10624c5c;
  /* 10624c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624c58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10624c5c:;
  /* 10624c5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10624c63:;
  /* 10624c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10624c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624c6b je 0x10624c8e */
  if (C.zf) goto L_10624c8e;
L_10624c6d:;
  /* 10624c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10624c73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624c76 je 0x10624c83 */
  if (C.zf) goto L_10624c83;
  /* 10624c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624c7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624c81 jne 0x10624c8e */
  if (!C.zf) goto L_10624c8e;
L_10624c83:;
  /* 10624c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624c89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10624c8c jmp 0x10624c6d */
  goto L_10624c6d;
L_10624c8e:;
  /* 10624c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624c91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624c94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10624c96 jne 0x10624c9d */
  if (!C.zf) goto L_10624c9d;
  /* 10624c98 jmp 0x10624e7b */
  goto L_10624e7b;
L_10624c9d:;
  /* 10624c9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624ca1 je 0x10624cb4 */
  if (C.zf) goto L_10624cb4;
  /* 10624ca3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624ca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624ca9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10624cab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624cae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624cb1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10624cb4:;
  /* 10624cb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624cb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10624cb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624cbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624cbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10624cc1:;
  /* 10624cc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10624cc8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10624ccf:;
  /* 10624ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624cd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10624cd5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624cd8 jne 0x10624cee */
  if (!C.zf) goto L_10624cee;
  /* 10624cda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624cdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624ce0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10624ce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624ce6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624ce9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10624cec jmp 0x10624ccf */
  goto L_10624ccf;
L_10624cee:;
  /* 10624cee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624cf1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624cf4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624cf7 jne 0x10624d4a */
  if (!C.zf) goto L_10624d4a;
  /* 10624cf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624cfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624cfe mov ecx, 2 */
  ECX = (0x2u);
  /* 10624d03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10624d05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624d07 jne 0x10624d42 */
  if (!C.zf) goto L_10624d42;
  /* 10624d09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d0d je 0x10624d2f */
  if (C.zf) goto L_10624d2f;
  /* 10624d0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624d12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10624d16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d19 jne 0x10624d26 */
  if (!C.zf) goto L_10624d26;
  /* 10624d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624d1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624d21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10624d24 jmp 0x10624d2d */
  goto L_10624d2d;
L_10624d26:;
  /* 10624d26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10624d2d:;
  /* 10624d2d jmp 0x10624d36 */
  goto L_10624d36;
L_10624d2f:;
  /* 10624d2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10624d36:;
  /* 10624d36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624d38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10624d3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10624d42:;
  /* 10624d42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624d45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10624d47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10624d4a:;
  /* 10624d4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624d4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624d50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624d53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10624d56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10624d58 je 0x10624d7e */
  if (C.zf) goto L_10624d7e;
  /* 10624d5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d5e je 0x10624d6f */
  if (C.zf) goto L_10624d6f;
  /* 10624d60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624d63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10624d66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624d69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624d6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10624d6f:;
  /* 10624d6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624d72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10624d74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624d77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624d7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10624d7c jmp 0x10624d4a */
  goto L_10624d4a;
L_10624d7e:;
  /* 10624d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624d81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10624d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624d86 je 0x10624da4 */
  if (C.zf) goto L_10624da4;
  /* 10624d88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d8c jne 0x10624da9 */
  if (!C.zf) goto L_10624da9;
  /* 10624d8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624d91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10624d94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624d97 je 0x10624da4 */
  if (C.zf) goto L_10624da4;
  /* 10624d99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624d9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10624d9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624da2 jne 0x10624da9 */
  if (!C.zf) goto L_10624da9;
L_10624da4:;
  /* 10624da4 jmp 0x10624e54 */
  goto L_10624e54;
L_10624da9:;
  /* 10624da9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624dad je 0x10624e46 */
  if (C.zf) goto L_10624e46;
  /* 10624db3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624db7 je 0x10624e0d */
  if (C.zf) goto L_10624e0d;
  /* 10624db9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624dbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10624dc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10624dc2 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10624dc8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10624dcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10624dcd je 0x10624df8 */
  if (C.zf) goto L_10624df8;
  /* 10624dcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624dd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10624dd7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10624dd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624ddc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624ddf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10624de2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624de5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624de8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10624deb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624dee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10624df0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624df3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624df6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10624df8:;
  /* 10624df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624dfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624dfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10624e00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10624e02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10624e0b jmp 0x10624e39 */
  goto L_10624e39;
L_10624e0d:;
  /* 10624e0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624e12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10624e14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10624e16 mov cl, byte ptr [eax + 0x1064fc81] */
  CL = (r8((uint32_t)(EAX + 0x1064fc81)));
  /* 10624e1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10624e1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10624e21 je 0x10624e39 */
  if (C.zf) goto L_10624e39;
  /* 10624e23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624e26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10624e2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624e31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10624e39:;
  /* 10624e39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624e3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10624e46:;
  /* 10624e46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624e49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10624e4f jmp 0x10624cc1 */
  goto L_10624cc1;
L_10624e54:;
  /* 10624e54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624e58 je 0x10624e69 */
  if (C.zf) goto L_10624e69;
  /* 10624e5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624e5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10624e60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10624e63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10624e69:;
  /* 10624e69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10624e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10624e74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10624e76 jmp 0x10624c63 */
  goto L_10624c63;
L_10624e7b:;
  /* 10624e7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624e7f je 0x10624e93 */
  if (C.zf) goto L_10624e93;
  /* 10624e81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624e84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10624e8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10624e8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10624e93:;
  /* 10624e93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624e96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10624e98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624e9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10624e9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10624ea0 mov esp, ebp */
  ESP = (EBP);
  /* 10624ea2 pop ebp */
  EBP = (pop32());
  /* 10624ea3 ret  */
  ESPCHK(0x10624a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb0 @ 0x10624eb0 (537 bytes, 173 insns) */
void f_10624eb0(void) {
  FTRACE(0x10624eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10624eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10624eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10624eb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624eb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10624ebd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10624ec4 cmp dword ptr [0x1064e570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624ecb jne 0x10624f0a */
  if (!C.zf) goto L_10624f0a;
  /* 10624ecd call dword ptr [0x106502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502e0))), 0x10624ed3u);
  /* 10624ed3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10624ed6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624eda je 0x10624ee8 */
  if (C.zf) goto L_10624ee8;
  /* 10624edc mov dword ptr [0x1064e570], 1 */
  w32((uint32_t)(0x1064e570), (0x1u));
  /* 10624ee6 jmp 0x10624f0a */
  goto L_10624f0a;
L_10624ee8:;
  /* 10624ee8 call dword ptr [0x106502dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502dc))), 0x10624eeeu);
  /* 10624eee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10624ef1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624ef5 je 0x10624f03 */
  if (C.zf) goto L_10624f03;
  /* 10624ef7 mov dword ptr [0x1064e570], 2 */
  w32((uint32_t)(0x1064e570), (0x2u));
  /* 10624f01 jmp 0x10624f0a */
  goto L_10624f0a;
L_10624f03:;
  /* 10624f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624f05 jmp 0x106250c5 */
  goto L_106250c5;
L_10624f0a:;
  /* 10624f0a cmp dword ptr [0x1064e570], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e570))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624f11 jne 0x1062500e */
  if (!C.zf) goto L_1062500e;
  /* 10624f17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624f1b jne 0x10624f33 */
  if (!C.zf) goto L_10624f33;
  /* 10624f1d call dword ptr [0x106502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502e0))), 0x10624f23u);
  /* 10624f23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10624f26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624f2a jne 0x10624f33 */
  if (!C.zf) goto L_10624f33;
  /* 10624f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624f2e jmp 0x106250c5 */
  goto L_106250c5;
L_10624f33:;
  /* 10624f33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10624f36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10624f39:;
  /* 10624f39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624f3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624f3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10624f41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624f43 je 0x10624f65 */
  if (C.zf) goto L_10624f65;
  /* 10624f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624f48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624f4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10624f4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624f51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10624f53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10624f56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10624f58 jne 0x10624f63 */
  if (!C.zf) goto L_10624f63;
  /* 10624f5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624f5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624f60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10624f63:;
  /* 10624f63 jmp 0x10624f39 */
  goto L_10624f39;
L_10624f65:;
  /* 10624f65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10624f68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10624f6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10624f6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10624f70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10624f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624f7e push edx */
  push32((uint32_t)(EDX));
  /* 10624f7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10624f82 push eax */
  push32((uint32_t)(EAX));
  /* 10624f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624f87 call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10624f8du);
  /* 10624f8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10624f90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624f94 je 0x10624fb4 */
  if (C.zf) goto L_10624fb4;
  /* 10624f96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10624f98 push 0x10649afc */
  push32((uint32_t)(0x10649afcu));
  /* 10624f9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10624f9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10624fa3 call 0x106228e0 */
  push32(0x10624fa8u); f_106228e0();
  /* 10624fa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624fab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10624fae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10624fb2 jne 0x10624fc5 */
  if (!C.zf) goto L_10624fc5;
L_10624fb4:;
  /* 10624fb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10624fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10624fb8 call dword ptr [0x1065022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065022c))), 0x10624fbeu);
  /* 10624fbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10624fc0 jmp 0x106250c5 */
  goto L_106250c5;
L_10624fc5:;
  /* 10624fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624fc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10624fcc push eax */
  push32((uint32_t)(EAX));
  /* 10624fcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10624fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10624fd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10624fd4 push edx */
  push32((uint32_t)(EDX));
  /* 10624fd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10624fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10624fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10624fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10624fdd call dword ptr [0x106502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d8))), 0x10624fe3u);
  /* 10624fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10624fe5 jne 0x10624ffc */
  if (!C.zf) goto L_10624ffc;
  /* 10624fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10624fe9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10624fec push ecx */
  push32((uint32_t)(ECX));
  /* 10624fed call 0x10623370 */
  push32(0x10624ff2u); f_10623370();
  /* 10624ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10624ff5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10624ffc:;
  /* 10624ffc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10624fff push edx */
  push32((uint32_t)(EDX));
  /* 10625000 call dword ptr [0x1065022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065022c))), 0x10625006u);
  /* 10625006 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625009 jmp 0x106250c5 */
  goto L_106250c5;
L_1062500e:;
  /* 1062500e cmp dword ptr [0x1064e570], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1064e570))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625015 jne 0x106250c3 */
  if (!C.zf) goto L_106250c3;
  /* 1062501b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062501f jne 0x10625037 */
  if (!C.zf) goto L_10625037;
  /* 10625021 call dword ptr [0x106502dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502dc))), 0x10625027u);
  /* 10625027 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1062502a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062502e jne 0x10625037 */
  if (!C.zf) goto L_10625037;
  /* 10625030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10625032 jmp 0x106250c5 */
  goto L_106250c5;
L_10625037:;
  /* 10625037 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1062503a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1062503d:;
  /* 1062503d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625040 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10625043 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10625045 je 0x10625065 */
  if (C.zf) goto L_10625065;
  /* 10625047 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062504a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062504d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625053 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10625056 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10625058 jne 0x10625063 */
  if (!C.zf) goto L_10625063;
  /* 1062505a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062505d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625060 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10625063:;
  /* 10625063 jmp 0x1062503d */
  goto L_1062503d;
L_10625065:;
  /* 10625065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625068 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062506b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062506e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10625071 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10625076 push 0x10649afc */
  push32((uint32_t)(0x10649afcu));
  /* 1062507b push 2 */
  push32((uint32_t)(0x2u));
  /* 1062507d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10625080 push edx */
  push32((uint32_t)(EDX));
  /* 10625081 call 0x106228e0 */
  push32(0x10625086u); f_106228e0();
  /* 10625086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625089 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1062508c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625090 jne 0x106250a0 */
  if (!C.zf) goto L_106250a0;
  /* 10625092 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625095 push eax */
  push32((uint32_t)(EAX));
  /* 10625096 call dword ptr [0x10650228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650228))), 0x1062509cu);
  /* 1062509c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062509e jmp 0x106250c5 */
  goto L_106250c5;
L_106250a0:;
  /* 106250a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106250a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106250a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106250a7 push edx */
  push32((uint32_t)(EDX));
  /* 106250a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106250ab push eax */
  push32((uint32_t)(EAX));
  /* 106250ac call 0x106291c0 */
  push32(0x106250b1u); f_106291c0();
  /* 106250b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106250b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106250b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106250b8 call dword ptr [0x10650228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650228))), 0x106250beu);
  /* 106250be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106250c1 jmp 0x106250c5 */
  goto L_106250c5;
L_106250c3:;
  /* 106250c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106250c5:;
  /* 106250c5 mov esp, ebp */
  ESP = (EBP);
  /* 106250c7 pop ebp */
  EBP = (pop32());
  /* 106250c8 ret  */
  ESPCHK(0x10624eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050d0 @ 0x106250d0 (77 bytes, 25 insns) */
void f_106250d0(void) {
  FTRACE(0x106250d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106250d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106250d1 mov ebp, esp */
  EBP = (ESP);
  /* 106250d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106250d5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106250da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106250dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106250e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 106250e3 push eax */
  push32((uint32_t)(EAX));
  /* 106250e4 call dword ptr [0x106502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502e8))), 0x106250eau);
  /* 106250ea mov dword ptr [0x1064fdac], eax */
  w32((uint32_t)(0x1064fdac), (EAX));
  /* 106250ef cmp dword ptr [0x1064fdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064fdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106250f6 jne 0x106250fc */
  if (!C.zf) goto L_106250fc;
  /* 106250f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106250fa jmp 0x1062511b */
  goto L_1062511b;
L_106250fc:;
  /* 106250fc call 0x10626b80 */
  push32(0x10625101u); f_10626b80();
  /* 10625101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10625103 jne 0x10625116 */
  if (!C.zf) goto L_10625116;
  /* 10625105 mov ecx, dword ptr [0x1064fdac] */
  ECX = (r32((uint32_t)(0x1064fdac)));
  /* 1062510b push ecx */
  push32((uint32_t)(ECX));
  /* 1062510c call dword ptr [0x106502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502e4))), 0x10625112u);
  /* 10625112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10625114 jmp 0x1062511b */
  goto L_1062511b;
L_10625116:;
  /* 10625116 mov eax, 1 */
  EAX = (0x1u);
L_1062511b:;
  /* 1062511b pop ebp */
  EBP = (pop32());
  /* 1062511c ret  */
  ESPCHK(0x106250d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x10625120 (156 bytes, 48 insns) */
void f_10625120(void) {
  FTRACE(0x10625120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625120 push ebp */
  push32((uint32_t)(EBP));
  /* 10625121 mov ebp, esp */
  EBP = (ESP);
  /* 10625123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625126 mov eax, dword ptr [0x1064fda8] */
  EAX = (r32((uint32_t)(0x1064fda8)));
  /* 1062512b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1062512e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10625135 jmp 0x10625140 */
  goto L_10625140;
L_10625137:;
  /* 10625137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062513a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062513d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10625140:;
  /* 10625140 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625143 cmp edx, dword ptr [0x1064fda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064fda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625149 jge 0x10625196 */
  if ((C.sf==C.of)) goto L_10625196;
  /* 1062514b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10625150 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10625155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625158 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1062515b push ecx */
  push32((uint32_t)(ECX));
  /* 1062515c call dword ptr [0x106502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f0))), 0x10625162u);
  /* 10625162 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10625167 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625169 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062516c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1062516f push eax */
  push32((uint32_t)(EAX));
  /* 10625170 call dword ptr [0x106502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f0))), 0x10625176u);
  /* 10625176 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625179 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1062517c push edx */
  push32((uint32_t)(EDX));
  /* 1062517d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062517f mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 10625184 push eax */
  push32((uint32_t)(EAX));
  /* 10625185 call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x1062518bu);
  /* 1062518b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062518e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625191 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10625194 jmp 0x10625137 */
  goto L_10625137;
L_10625196:;
  /* 10625196 mov edx, dword ptr [0x1064fda8] */
  EDX = (r32((uint32_t)(0x1064fda8)));
  /* 1062519c push edx */
  push32((uint32_t)(EDX));
  /* 1062519d push 0 */
  push32((uint32_t)(0x0u));
  /* 1062519f mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 106251a4 push eax */
  push32((uint32_t)(EAX));
  /* 106251a5 call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x106251abu);
  /* 106251ab mov ecx, dword ptr [0x1064fdac] */
  ECX = (r32((uint32_t)(0x1064fdac)));
  /* 106251b1 push ecx */
  push32((uint32_t)(ECX));
  /* 106251b2 call dword ptr [0x106502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502e4))), 0x106251b8u);
  /* 106251b8 mov esp, ebp */
  ESP = (EBP);
  /* 106251ba pop ebp */
  EBP = (pop32());
  /* 106251bb ret  */
  ESPCHK(0x10625120u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x106251c0 (73 bytes, 19 insns) */
void f_106251c0(void) {
  FTRACE(0x106251c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106251c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106251c1 mov ebp, esp */
  EBP = (ESP);
  /* 106251c3 cmp dword ptr [0x1064e404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106251ca je 0x106251de */
  if (C.zf) goto L_106251de;
  /* 106251cc cmp dword ptr [0x1064e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106251d3 jne 0x10625207 */
  if (!C.zf) goto L_10625207;
  /* 106251d5 cmp dword ptr [0x1064e408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106251dc jne 0x10625207 */
  if (!C.zf) goto L_10625207;
L_106251de:;
  /* 106251de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 106251e3 call 0x10625210 */
  push32(0x106251e8u); f_10625210();
  /* 106251e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106251eb cmp dword ptr [0x1064e574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106251f2 je 0x106251fa */
  if (C.zf) goto L_106251fa;
  /* 106251f4 call dword ptr [0x1064e574] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e574))), 0x106251fau);
L_106251fa:;
  /* 106251fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 106251ff call 0x10625210 */
  push32(0x10625204u); f_10625210();
  /* 10625204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625207:;
  /* 10625207 pop ebp */
  EBP = (pop32());
  /* 10625208 ret  */
  ESPCHK(0x106251c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x10625210 (447 bytes, 131 insns) */
void f_10625210(void) {
  FTRACE(0x10625210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625210 push ebp */
  push32((uint32_t)(EBP));
  /* 10625211 mov ebp, esp */
  EBP = (ESP);
  /* 10625213 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625219 push ebx */
  push32((uint32_t)(EBX));
  /* 1062521a push esi */
  push32((uint32_t)(ESI));
  /* 1062521b push edi */
  push32((uint32_t)(EDI));
  /* 1062521c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10625223 jmp 0x1062522e */
  goto L_1062522e;
L_10625225:;
  /* 10625225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625228 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062522b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1062522e:;
  /* 1062522e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625232 jae 0x10625247 */
  if (!C.cf) goto L_10625247;
  /* 10625234 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062523a cmp edx, dword ptr [ecx*8 + 0x1064cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1064cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625241 jne 0x10625245 */
  if (!C.zf) goto L_10625245;
  /* 10625243 jmp 0x10625247 */
  goto L_10625247;
L_10625245:;
  /* 10625245 jmp 0x10625225 */
  goto L_10625225;
L_10625247:;
  /* 10625247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062524a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062524d cmp ecx, dword ptr [eax*8 + 0x1064cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1064cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625254 jne 0x106253c8 */
  if (!C.zf) goto L_106253c8;
  /* 1062525a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625261 je 0x10625284 */
  if (C.zf) goto L_10625284;
  /* 10625263 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625266 mov eax, dword ptr [edx*8 + 0x1064cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1064cab4)));
  /* 1062526d push eax */
  push32((uint32_t)(EAX));
  /* 1062526e push 0 */
  push32((uint32_t)(0x0u));
  /* 10625270 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625274 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625276 call 0x106219a0 */
  push32(0x1062527bu); f_106219a0();
  /* 1062527b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062527e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625281 jne 0x10625284 */
  if (!C.zf) goto L_10625284;
  /* 10625283 int3  */
  x86_unimpl("int3 @ 0x10625283");
L_10625284:;
  /* 10625284 cmp dword ptr [0x1064e404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062528b je 0x1062529f */
  if (C.zf) goto L_1062529f;
  /* 1062528d cmp dword ptr [0x1064e404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625294 jne 0x106252d8 */
  if (!C.zf) goto L_106252d8;
  /* 10625296 cmp dword ptr [0x1064e408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1064e408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062529d jne 0x106252d8 */
  if (!C.zf) goto L_106252d8;
L_1062529f:;
  /* 1062529f push 0 */
  push32((uint32_t)(0x0u));
  /* 106252a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 106252a4 push ecx */
  push32((uint32_t)(ECX));
  /* 106252a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106252a8 mov eax, dword ptr [edx*8 + 0x1064cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1064cab4)));
  /* 106252af push eax */
  push32((uint32_t)(EAX));
  /* 106252b0 call 0x10625710 */
  push32(0x106252b5u); f_10625710();
  /* 106252b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106252b8 push eax */
  push32((uint32_t)(EAX));
  /* 106252b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106252bc mov edx, dword ptr [ecx*8 + 0x1064cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1064cab4)));
  /* 106252c3 push edx */
  push32((uint32_t)(EDX));
  /* 106252c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106252c6 call dword ptr [0x10650268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650268))), 0x106252ccu);
  /* 106252cc push eax */
  push32((uint32_t)(EAX));
  /* 106252cd call dword ptr [0x1065026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065026c))), 0x106252d3u);
  /* 106252d3 jmp 0x106253c8 */
  goto L_106253c8;
L_106252d8:;
  /* 106252d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106252df je 0x106253c8 */
  if (C.zf) goto L_106253c8;
  /* 106252e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106252ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 106252f0 push eax */
  push32((uint32_t)(EAX));
  /* 106252f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106252f3 call dword ptr [0x10650284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650284))), 0x106252f9u);
  /* 106252f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106252fb jne 0x10625311 */
  if (!C.zf) goto L_10625311;
  /* 106252fd push 0x10649364 */
  push32((uint32_t)(0x10649364u));
  /* 10625302 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10625308 push ecx */
  push32((uint32_t)(ECX));
  /* 10625309 call 0x10625890 */
  push32(0x1062530eu); f_10625890();
  /* 1062530e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625311:;
  /* 10625311 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10625317 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1062531a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062531d push eax */
  push32((uint32_t)(EAX));
  /* 1062531e call 0x10625710 */
  push32(0x10625323u); f_10625710();
  /* 10625323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625326 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625329 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062532c jbe 0x1062535a */
  if ((C.cf||C.zf)) goto L_1062535a;
  /* 1062532e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10625334 push ecx */
  push32((uint32_t)(ECX));
  /* 10625335 call 0x10625710 */
  push32(0x1062533au); f_10625710();
  /* 1062533a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062533d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625340 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10625344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625347 push 3 */
  push32((uint32_t)(0x3u));
  /* 10625349 push 0x10649360 */
  push32((uint32_t)(0x10649360u));
  /* 1062534e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625351 push ecx */
  push32((uint32_t)(ECX));
  /* 10625352 call 0x10626100 */
  push32(0x10625357u); f_10626100();
  /* 10625357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062535a:;
  /* 1062535a push 0x10649db8 */
  push32((uint32_t)(0x10649db8u));
  /* 1062535f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10625365 push edx */
  push32((uint32_t)(EDX));
  /* 10625366 call 0x10625890 */
  push32(0x1062536bu); f_10625890();
  /* 1062536b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062536e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625371 push eax */
  push32((uint32_t)(EAX));
  /* 10625372 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10625378 push ecx */
  push32((uint32_t)(ECX));
  /* 10625379 call 0x106258a0 */
  push32(0x1062537eu); f_106258a0();
  /* 1062537e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625381 push 0x106492d8 */
  push32((uint32_t)(0x106492d8u));
  /* 10625386 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1062538c push edx */
  push32((uint32_t)(EDX));
  /* 1062538d call 0x106258a0 */
  push32(0x10625392u); f_106258a0();
  /* 10625392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625398 mov ecx, dword ptr [eax*8 + 0x1064cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1064cab4)));
  /* 1062539f push ecx */
  push32((uint32_t)(ECX));
  /* 106253a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106253a6 push edx */
  push32((uint32_t)(EDX));
  /* 106253a7 call 0x106258a0 */
  push32(0x106253acu); f_106258a0();
  /* 106253ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106253af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 106253b4 push 0x10649d90 */
  push32((uint32_t)(0x10649d90u));
  /* 106253b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 106253bf push eax */
  push32((uint32_t)(EAX));
  /* 106253c0 call 0x10626040 */
  push32(0x106253c5u); f_10626040();
  /* 106253c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106253c8:;
  /* 106253c8 pop edi */
  EDI = (pop32());
  /* 106253c9 pop esi */
  ESI = (pop32());
  /* 106253ca pop ebx */
  EBX = (pop32());
  /* 106253cb mov esp, ebp */
  ESP = (EBP);
  /* 106253cd pop ebp */
  EBP = (pop32());
  /* 106253ce ret  */
  ESPCHK(0x10625210u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x106253d0 (80 bytes, 27 insns) */
void f_106253d0(void) {
  FTRACE(0x106253d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106253d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106253d1 mov ebp, esp */
  EBP = (ESP);
  /* 106253d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106253d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106253db jmp 0x106253e6 */
  goto L_106253e6;
L_106253dd:;
  /* 106253dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106253e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106253e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106253e6:;
  /* 106253e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106253ea jae 0x106253ff */
  if (!C.cf) goto L_106253ff;
  /* 106253ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106253ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106253f2 cmp edx, dword ptr [ecx*8 + 0x1064cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1064cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106253f9 jne 0x106253fd */
  if (!C.zf) goto L_106253fd;
  /* 106253fb jmp 0x106253ff */
  goto L_106253ff;
L_106253fd:;
  /* 106253fd jmp 0x106253dd */
  goto L_106253dd;
L_106253ff:;
  /* 106253ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625405 cmp ecx, dword ptr [eax*8 + 0x1064cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1064cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062540c jne 0x1062541a */
  if (!C.zf) goto L_1062541a;
  /* 1062540e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625411 mov eax, dword ptr [edx*8 + 0x1064cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1064cab4)));
  /* 10625418 jmp 0x1062541c */
  goto L_1062541c;
L_1062541a:;
  /* 1062541a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1062541c:;
  /* 1062541c mov esp, ebp */
  ESP = (EBP);
  /* 1062541e pop ebp */
  EBP = (pop32());
  /* 1062541f ret  */
  ESPCHK(0x106253d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10625420 (66 bytes, 28 insns) */
void f_10625420(void) {
  FTRACE(0x10625420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625420 push ebp */
  push32((uint32_t)(EBP));
  /* 10625421 mov ebp, esp */
  EBP = (ESP);
  /* 10625423 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625427 jne 0x10625447 */
  if (!C.zf) goto L_10625447;
  /* 10625429 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062542d jge 0x10625447 */
  if ((C.sf==C.of)) goto L_10625447;
  /* 1062542f push 1 */
  push32((uint32_t)(0x1u));
  /* 10625431 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10625434 push eax */
  push32((uint32_t)(EAX));
  /* 10625435 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625438 push ecx */
  push32((uint32_t)(ECX));
  /* 10625439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062543c push edx */
  push32((uint32_t)(EDX));
  /* 1062543d call 0x10625470 */
  push32(0x10625442u); f_10625470();
  /* 10625442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625445 jmp 0x1062545d */
  goto L_1062545d;
L_10625447:;
  /* 10625447 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625449 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062544c push eax */
  push32((uint32_t)(EAX));
  /* 1062544d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625450 push ecx */
  push32((uint32_t)(ECX));
  /* 10625451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625454 push edx */
  push32((uint32_t)(EDX));
  /* 10625455 call 0x10625470 */
  push32(0x1062545au); f_10625470();
  /* 1062545a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062545d:;
  /* 1062545d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625460 pop ebp */
  EBP = (pop32());
  /* 10625461 ret  */
  ESPCHK(0x10625420u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10625470 (194 bytes, 71 insns) */
void f_10625470(void) {
  FTRACE(0x10625470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625470 push ebp */
  push32((uint32_t)(EBP));
  /* 10625471 mov ebp, esp */
  EBP = (ESP);
  /* 10625473 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625476 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062547c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625480 je 0x10625499 */
  if (C.zf) goto L_10625499;
  /* 10625482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625485 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10625488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062548b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062548e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10625491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625494 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10625496 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10625499:;
  /* 10625499 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062549c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1062549f:;
  /* 1062549f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106254a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106254a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106254a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106254aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106254ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106254af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106254b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106254b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106254b9 jbe 0x106254d1 */
  if ((C.cf||C.zf)) goto L_106254d1;
  /* 106254bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106254be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106254c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106254c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106254cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106254cf jmp 0x106254e5 */
  goto L_106254e5;
L_106254d1:;
  /* 106254d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106254d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106254d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106254dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106254e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106254e5:;
  /* 106254e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106254e9 ja 0x1062549f */
  if ((!C.cf&&!C.zf)) goto L_1062549f;
  /* 106254eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106254f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106254f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106254fa:;
  /* 106254fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106254fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106254ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10625502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625505 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625508 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062550a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1062550c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062550f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10625512 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10625514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625517 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062551a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1062551d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625523 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10625526 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625529 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062552c jb 0x106254fa */
  if (C.cf) goto L_106254fa;
  /* 1062552e mov esp, ebp */
  ESP = (EBP);
  /* 10625530 pop ebp */
  EBP = (pop32());
  /* 10625531 ret  */
  ESPCHK(0x10625470u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10625540 (63 bytes, 24 insns) */
void f_10625540(void) {
  FTRACE(0x10625540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625540 push ebp */
  push32((uint32_t)(EBP));
  /* 10625541 mov ebp, esp */
  EBP = (ESP);
  /* 10625543 push ecx */
  push32((uint32_t)(ECX));
  /* 10625544 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625548 jne 0x10625559 */
  if (!C.zf) goto L_10625559;
  /* 1062554a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062554e jge 0x10625559 */
  if ((C.sf==C.of)) goto L_10625559;
  /* 10625550 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10625557 jmp 0x10625560 */
  goto L_10625560;
L_10625559:;
  /* 10625559 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10625560:;
  /* 10625560 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625563 push eax */
  push32((uint32_t)(EAX));
  /* 10625564 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10625567 push ecx */
  push32((uint32_t)(ECX));
  /* 10625568 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062556b push edx */
  push32((uint32_t)(EDX));
  /* 1062556c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062556f push eax */
  push32((uint32_t)(EAX));
  /* 10625570 call 0x10625470 */
  push32(0x10625575u); f_10625470();
  /* 10625575 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625578 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062557b mov esp, ebp */
  ESP = (EBP);
  /* 1062557d pop ebp */
  EBP = (pop32());
  /* 1062557e ret  */
  ESPCHK(0x10625540u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10625580 (30 bytes, 14 insns) */
void f_10625580(void) {
  FTRACE(0x10625580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625580 push ebp */
  push32((uint32_t)(EBP));
  /* 10625581 mov ebp, esp */
  EBP = (ESP);
  /* 10625583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625585 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10625588 push eax */
  push32((uint32_t)(EAX));
  /* 10625589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062558c push ecx */
  push32((uint32_t)(ECX));
  /* 1062558d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625590 push edx */
  push32((uint32_t)(EDX));
  /* 10625591 call 0x10625470 */
  push32(0x10625596u); f_10625470();
  /* 10625596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625599 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062559c pop ebp */
  EBP = (pop32());
  /* 1062559d ret  */
  ESPCHK(0x10625580u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x106255a0 (72 bytes, 28 insns) */
void f_106255a0(void) {
  FTRACE(0x106255a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106255a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106255a1 mov ebp, esp */
  EBP = (ESP);
  /* 106255a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106255a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106255a8 jne 0x106255c1 */
  if (!C.zf) goto L_106255c1;
  /* 106255aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106255ae jg 0x106255c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_106255c1;
  /* 106255b0 jl 0x106255b8 */
  if ((C.sf!=C.of)) goto L_106255b8;
  /* 106255b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106255b6 jae 0x106255c1 */
  if (!C.cf) goto L_106255c1;
L_106255b8:;
  /* 106255b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106255bf jmp 0x106255c8 */
  goto L_106255c8;
L_106255c1:;
  /* 106255c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106255c8:;
  /* 106255c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106255cb push eax */
  push32((uint32_t)(EAX));
  /* 106255cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106255cf push ecx */
  push32((uint32_t)(ECX));
  /* 106255d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106255d3 push edx */
  push32((uint32_t)(EDX));
  /* 106255d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106255d7 push eax */
  push32((uint32_t)(EAX));
  /* 106255d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106255db push ecx */
  push32((uint32_t)(ECX));
  /* 106255dc call 0x106255f0 */
  push32(0x106255e1u); f_106255f0();
  /* 106255e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106255e4 mov esp, ebp */
  ESP = (EBP);
  /* 106255e6 pop ebp */
  EBP = (pop32());
  /* 106255e7 ret  */
  ESPCHK(0x106255a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x106255f0 (242 bytes, 91 insns) */
void f_106255f0(void) {
  FTRACE(0x106255f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106255f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106255f1 mov ebp, esp */
  EBP = (ESP);
  /* 106255f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106255f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106255f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106255fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625600 je 0x10625624 */
  if (C.zf) goto L_10625624;
  /* 10625602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625605 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10625608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062560b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062560e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10625611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625614 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10625616 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625619 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062561c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062561e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10625621 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10625624:;
  /* 10625624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625627 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1062562a:;
  /* 1062562a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1062562d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1062562f push ecx */
  push32((uint32_t)(ECX));
  /* 10625630 push eax */
  push32((uint32_t)(EAX));
  /* 10625631 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625634 push edx */
  push32((uint32_t)(EDX));
  /* 10625635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625638 push eax */
  push32((uint32_t)(EAX));
  /* 10625639 call 0x10629570 */
  push32(0x1062563eu); f_10629570();
  /* 1062563e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625641 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10625644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10625646 push edx */
  push32((uint32_t)(EDX));
  /* 10625647 push ecx */
  push32((uint32_t)(ECX));
  /* 10625648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062564b push eax */
  push32((uint32_t)(EAX));
  /* 1062564c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062564f push ecx */
  push32((uint32_t)(ECX));
  /* 10625650 call 0x10629500 */
  push32(0x10625655u); f_10629500();
  /* 10625655 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10625658 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1062565b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062565f jbe 0x10625677 */
  if ((C.cf||C.zf)) goto L_10625677;
  /* 10625661 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625664 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062566a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1062566c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062566f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625672 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10625675 jmp 0x1062568b */
  goto L_1062568b;
L_10625677:;
  /* 10625677 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1062567a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062567d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625680 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10625682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625685 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625688 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1062568b:;
  /* 1062568b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062568f ja 0x1062562a */
  if ((!C.cf&&!C.zf)) goto L_1062562a;
  /* 10625691 jb 0x10625699 */
  if (C.cf) goto L_10625699;
  /* 10625693 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625697 ja 0x1062562a */
  if ((!C.cf&&!C.zf)) goto L_1062562a;
L_10625699:;
  /* 10625699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062569c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1062569f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106256a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106256a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106256a8:;
  /* 106256a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106256ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106256ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106256b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106256b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106256b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106256b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106256ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106256bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106256c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106256c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106256c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106256c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106256cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106256ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106256d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106256d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106256d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106256da jb 0x106256a8 */
  if (C.cf) goto L_106256a8;
  /* 106256dc mov esp, ebp */
  ESP = (EBP);
  /* 106256de pop ebp */
  EBP = (pop32());
  /* 106256df ret 0x14 */
  ESPCHK(0x106255f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x106256f0 (31 bytes, 15 insns) */
void f_106256f0(void) {
  FTRACE(0x106256f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106256f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106256f1 mov ebp, esp */
  EBP = (ESP);
  /* 106256f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106256f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106256f8 push eax */
  push32((uint32_t)(EAX));
  /* 106256f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106256fc push ecx */
  push32((uint32_t)(ECX));
  /* 106256fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625700 push edx */
  push32((uint32_t)(EDX));
  /* 10625701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625704 push eax */
  push32((uint32_t)(EAX));
  /* 10625705 call 0x106255f0 */
  push32(0x1062570au); f_106255f0();
  /* 1062570a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1062570d pop ebp */
  EBP = (pop32());
  /* 1062570e ret  */
  ESPCHK(0x106256f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10625710 (123 bytes, 44 insns) */
void f_10625710(void) {
  FTRACE(0x10625710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625710 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10625714 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1062571a je 0x10625730 */
  if (C.zf) goto L_10625730;
L_1062571c:;
  /* 1062571c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1062571e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1062571f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10625721 je 0x10625763 */
  if (C.zf) goto L_10625763;
  /* 10625723 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10625729 jne 0x1062571c */
  if (!C.zf) goto L_1062571c;
  /* 1062572b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10625730:;
  /* 10625730 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10625732 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10625737 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625739 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062573c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1062573e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625741 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10625746 je 0x10625730 */
  if (C.zf) goto L_10625730;
  /* 10625748 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1062574b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1062574d je 0x10625781 */
  if (C.zf) goto L_10625781;
  /* 1062574f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10625751 je 0x10625777 */
  if (C.zf) goto L_10625777;
  /* 10625753 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10625758 je 0x1062576d */
  if (C.zf) goto L_1062576d;
  /* 1062575a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1062575f je 0x10625763 */
  if (C.zf) goto L_10625763;
  /* 10625761 jmp 0x10625730 */
  goto L_10625730;
L_10625763:;
  /* 10625763 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10625766 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1062576a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062576c ret  */
  ESPCHK(0x10625710u, _esp0);
  ESP += 4; return;
L_1062576d:;
  /* 1062576d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10625770 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10625774 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625776 ret  */
  ESPCHK(0x10625710u, _esp0);
  ESP += 4; return;
L_10625777:;
  /* 10625777 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1062577a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1062577e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625780 ret  */
  ESPCHK(0x10625710u, _esp0);
  ESP += 4; return;
L_10625781:;
  /* 10625781 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10625784 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10625788 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062578a ret  */
  ESPCHK(0x10625710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x10625790 (249 bytes, 93 insns) */
void f_10625790(void) {
  FTRACE(0x10625790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625790 push ebp */
  push32((uint32_t)(EBP));
  /* 10625791 mov ebp, esp */
  EBP = (ESP);
  /* 10625793 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625796 push ebx */
  push32((uint32_t)(EBX));
  /* 10625797 push esi */
  push32((uint32_t)(ESI));
  /* 10625798 push edi */
  push32((uint32_t)(EDI));
  /* 10625799 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1062579c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1062579f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 106257a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106257a5:;
  /* 106257a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106257a9 jne 0x106257c9 */
  if (!C.zf) goto L_106257c9;
  /* 106257ab push 0x10649df0 */
  push32((uint32_t)(0x10649df0u));
  /* 106257b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106257b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106257b4 push 0x10649de4 */
  push32((uint32_t)(0x10649de4u));
  /* 106257b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106257bb call 0x106219a0 */
  push32(0x106257c0u); f_106219a0();
  /* 106257c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106257c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106257c6 jne 0x106257c9 */
  if (!C.zf) goto L_106257c9;
  /* 106257c8 int3  */
  x86_unimpl("int3 @ 0x106257c8");
L_106257c9:;
  /* 106257c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106257cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106257cd jne 0x106257a5 */
  if (!C.zf) goto L_106257a5;
L_106257cf:;
  /* 106257cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106257d3 jne 0x106257f3 */
  if (!C.zf) goto L_106257f3;
  /* 106257d5 push 0x10649dd4 */
  push32((uint32_t)(0x10649dd4u));
  /* 106257da push 0 */
  push32((uint32_t)(0x0u));
  /* 106257dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106257de push 0x10649de4 */
  push32((uint32_t)(0x10649de4u));
  /* 106257e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106257e5 call 0x106219a0 */
  push32(0x106257eau); f_106219a0();
  /* 106257ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106257ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106257f0 jne 0x106257f3 */
  if (!C.zf) goto L_106257f3;
  /* 106257f2 int3  */
  x86_unimpl("int3 @ 0x106257f2");
L_106257f3:;
  /* 106257f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106257f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106257f7 jne 0x106257cf */
  if (!C.zf) goto L_106257cf;
  /* 106257f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106257fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10625803 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625809 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1062580c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062580f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625812 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10625814 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625817 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062581a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1062581d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10625820 push edx */
  push32((uint32_t)(EDX));
  /* 10625821 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10625824 push eax */
  push32((uint32_t)(EAX));
  /* 10625825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625828 push ecx */
  push32((uint32_t)(ECX));
  /* 10625829 call 0x10629870 */
  push32(0x1062582eu); f_10629870();
  /* 1062582e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625831 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10625834 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625837 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1062583a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1062583d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625840 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10625843 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625846 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062584a jl 0x1062586e */
  if ((C.sf!=C.of)) goto L_1062586e;
  /* 1062584c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062584f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10625851 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10625854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10625856 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1062585c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1062585f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625862 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10625864 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625867 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1062586a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1062586c jmp 0x1062587f */
  goto L_1062587f;
L_1062586e:;
  /* 1062586e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625871 push eax */
  push32((uint32_t)(EAX));
  /* 10625872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10625874 call 0x106295f0 */
  push32(0x10625879u); f_106295f0();
  /* 10625879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062587c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1062587f:;
  /* 1062587f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10625882 pop edi */
  EDI = (pop32());
  /* 10625883 pop esi */
  ESI = (pop32());
  /* 10625884 pop ebx */
  EBX = (pop32());
  /* 10625885 mov esp, ebp */
  ESP = (EBP);
  /* 10625887 pop ebp */
  EBP = (pop32());
  /* 10625888 ret  */
  ESPCHK(0x10625790u, _esp0);
  ESP += 4; return;
}

/* FUN_10005890 @ 0x10625890 (7 bytes, 3 insns) */
void f_10625890(void) {
  FTRACE(0x10625890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625890 push edi */
  push32((uint32_t)(EDI));
  /* 10625891 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10625895 jmp 0x10625901 */
  jmp_ind(0x10625901u); return;
}

/* FUN_100058a0 @ 0x106258a0 (224 bytes, 84 insns) */
void f_106258a0(void) {
  FTRACE(0x106258a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106258a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106258a4 push edi */
  push32((uint32_t)(EDI));
  /* 106258a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106258ab je 0x106258bc */
  if (C.zf) goto L_106258bc;
L_106258ad:;
  /* 106258ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106258af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106258b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106258b2 je 0x106258ef */
  if (C.zf) goto L_106258ef;
  /* 106258b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106258ba jne 0x106258ad */
  if (!C.zf) goto L_106258ad;
L_106258bc:;
  /* 106258bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106258be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106258c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106258c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106258c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106258ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106258cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106258d2 je 0x106258bc */
  if (C.zf) goto L_106258bc;
  /* 106258d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106258d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106258d9 je 0x106258fe */
  if (C.zf) goto L_106258fe;
  /* 106258db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106258dd je 0x106258f9 */
  if (C.zf) goto L_106258f9;
  /* 106258df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106258e4 je 0x106258f4 */
  if (C.zf) goto L_106258f4;
  /* 106258e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106258eb je 0x106258ef */
  if (C.zf) goto L_106258ef;
  /* 106258ed jmp 0x106258bc */
  goto L_106258bc;
L_106258ef:;
  /* 106258ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 106258f2 jmp 0x10625901 */
  goto L_10625901;
L_106258f4:;
  /* 106258f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 106258f7 jmp 0x10625901 */
  goto L_10625901;
L_106258f9:;
  /* 106258f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 106258fc jmp 0x10625901 */
  goto L_10625901;
L_106258fe:;
  /* 106258fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10625901:;
  /* 10625901 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10625905 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1062590b je 0x10625926 */
  if (C.zf) goto L_10625926;
L_1062590d:;
  /* 1062590d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1062590f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10625910 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10625912 je 0x10625978 */
  if (C.zf) goto L_10625978;
  /* 10625914 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10625916 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10625917 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1062591d jne 0x1062590d */
  if (!C.zf) goto L_1062590d;
  /* 1062591f jmp 0x10625926 */
  goto L_10625926;
L_10625921:;
  /* 10625921 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10625923 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10625926:;
  /* 10625926 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1062592b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1062592d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062592f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10625932 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10625934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625936 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625939 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1062593e je 0x10625921 */
  if (C.zf) goto L_10625921;
  /* 10625940 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10625942 je 0x10625978 */
  if (C.zf) goto L_10625978;
  /* 10625944 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10625946 je 0x1062596f */
  if (C.zf) goto L_1062596f;
  /* 10625948 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1062594e je 0x10625962 */
  if (C.zf) goto L_10625962;
  /* 10625950 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10625956 je 0x1062595a */
  if (C.zf) goto L_1062595a;
  /* 10625958 jmp 0x10625921 */
  goto L_10625921;
L_1062595a:;
  /* 1062595a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1062595c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10625960 pop edi */
  EDI = (pop32());
  /* 10625961 ret  */
  ESPCHK(0x106258a0u, _esp0);
  ESP += 4; return;
L_10625962:;
  /* 10625962 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10625965 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10625969 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1062596d pop edi */
  EDI = (pop32());
  /* 1062596e ret  */
  ESPCHK(0x106258a0u, _esp0);
  ESP += 4; return;
L_1062596f:;
  /* 1062596f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10625972 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10625976 pop edi */
  EDI = (pop32());
  /* 10625977 ret  */
  ESPCHK(0x106258a0u, _esp0);
  ESP += 4; return;
L_10625978:;
  /* 10625978 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1062597a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1062597e pop edi */
  EDI = (pop32());
  /* 1062597f ret  */
  ESPCHK(0x106258a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x10625980 (243 bytes, 91 insns) */
void f_10625980(void) {
  FTRACE(0x10625980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625980 push ebp */
  push32((uint32_t)(EBP));
  /* 10625981 mov ebp, esp */
  EBP = (ESP);
  /* 10625983 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625986 push ebx */
  push32((uint32_t)(EBX));
  /* 10625987 push esi */
  push32((uint32_t)(ESI));
  /* 10625988 push edi */
  push32((uint32_t)(EDI));
  /* 10625989 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1062598c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1062598f:;
  /* 1062598f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625993 jne 0x106259b3 */
  if (!C.zf) goto L_106259b3;
  /* 10625995 push 0x10649df0 */
  push32((uint32_t)(0x10649df0u));
  /* 1062599a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062599c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1062599e push 0x10649e00 */
  push32((uint32_t)(0x10649e00u));
  /* 106259a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106259a5 call 0x106219a0 */
  push32(0x106259aau); f_106219a0();
  /* 106259aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106259ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106259b0 jne 0x106259b3 */
  if (!C.zf) goto L_106259b3;
  /* 106259b2 int3  */
  x86_unimpl("int3 @ 0x106259b2");
L_106259b3:;
  /* 106259b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106259b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106259b7 jne 0x1062598f */
  if (!C.zf) goto L_1062598f;
L_106259b9:;
  /* 106259b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106259bd jne 0x106259dd */
  if (!C.zf) goto L_106259dd;
  /* 106259bf push 0x10649dd4 */
  push32((uint32_t)(0x10649dd4u));
  /* 106259c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106259c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 106259c8 push 0x10649e00 */
  push32((uint32_t)(0x10649e00u));
  /* 106259cd push 2 */
  push32((uint32_t)(0x2u));
  /* 106259cf call 0x106219a0 */
  push32(0x106259d4u); f_106219a0();
  /* 106259d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106259d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106259da jne 0x106259dd */
  if (!C.zf) goto L_106259dd;
  /* 106259dc int3  */
  x86_unimpl("int3 @ 0x106259dc");
L_106259dd:;
  /* 106259dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106259df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106259e1 jne 0x106259b9 */
  if (!C.zf) goto L_106259b9;
  /* 106259e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106259e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 106259ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106259f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106259f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106259f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106259f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106259fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106259fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625a04 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10625a07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10625a0a push ecx */
  push32((uint32_t)(ECX));
  /* 10625a0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10625a0e push edx */
  push32((uint32_t)(EDX));
  /* 10625a0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a12 push eax */
  push32((uint32_t)(EAX));
  /* 10625a13 call 0x10629870 */
  push32(0x10625a18u); f_10629870();
  /* 10625a18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625a1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10625a1e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a21 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10625a24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625a27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10625a2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a30 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625a34 jl 0x10625a58 */
  if ((C.sf!=C.of)) goto L_10625a58;
  /* 10625a36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10625a3b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10625a3e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10625a40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10625a46 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10625a49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10625a4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625a51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10625a56 jmp 0x10625a69 */
  goto L_10625a69;
L_10625a58:;
  /* 10625a58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10625a5b push edx */
  push32((uint32_t)(EDX));
  /* 10625a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10625a5e call 0x106295f0 */
  push32(0x10625a63u); f_106295f0();
  /* 10625a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625a66 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10625a69:;
  /* 10625a69 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10625a6c pop edi */
  EDI = (pop32());
  /* 10625a6d pop esi */
  ESI = (pop32());
  /* 10625a6e pop ebx */
  EBX = (pop32());
  /* 10625a6f mov esp, ebp */
  ESP = (EBP);
  /* 10625a71 pop ebp */
  EBP = (pop32());
  /* 10625a72 ret  */
  ESPCHK(0x10625980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x10625a80 (47 bytes, 17 insns) */
void f_10625a80(void) {
  FTRACE(0x10625a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625a80 push ecx */
  push32((uint32_t)(ECX));
  /* 10625a81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625a86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10625a8a jb 0x10625aa0 */
  if (C.cf) goto L_10625aa0;
L_10625a8c:;
  /* 10625a8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625a92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625a97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10625a99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625a9e jae 0x10625a8c */
  if (!C.cf) goto L_10625a8c;
L_10625aa0:;
  /* 10625aa0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625aa2 mov eax, esp */
  EAX = (ESP);
  /* 10625aa4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10625aa6 mov esp, ecx */
  ESP = (ECX);
  /* 10625aa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10625aaa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10625aad push eax */
  push32((uint32_t)(EAX));
  /* 10625aae ret  */
  ESPCHK(0x10625a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10625ab0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10625ab0(void) {
  FTRACE(0x10625ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10625ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10625ab3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625ab6 push esi */
  push32((uint32_t)(ESI));
  /* 10625ab7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625abb je 0x10625ac3 */
  if (C.zf) goto L_10625ac3;
  /* 10625abd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ac1 jne 0x10625ac8 */
  if (!C.zf) goto L_10625ac8;
L_10625ac3:;
  /* 10625ac3 jmp 0x10625c98 */
  goto L_10625c98;
L_10625ac8:;
  /* 10625ac8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625acc je 0x10625ae4 */
  if (C.zf) goto L_10625ae4;
  /* 10625ace cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ad2 je 0x10625ae4 */
  if (C.zf) goto L_10625ae4;
  /* 10625ad4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ad8 je 0x10625ae4 */
  if (C.zf) goto L_10625ae4;
  /* 10625ada cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ade jne 0x10625bc1 */
  if (!C.zf) goto L_10625bc1;
L_10625ae4:;
  /* 10625ae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625ae6 call 0x106262e0 */
  push32(0x10625aebu); f_106262e0();
  /* 10625aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625aee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625af2 je 0x10625afa */
  if (C.zf) goto L_10625afa;
  /* 10625af4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625af8 jne 0x10625b3f */
  if (!C.zf) goto L_10625b3f;
L_10625afa:;
  /* 10625afa cmp dword ptr [0x1064e588], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e588))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625b01 jne 0x10625b3f */
  if (!C.zf) goto L_10625b3f;
  /* 10625b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625b05 push 0x10625ce0 */
  push32((uint32_t)(0x10625ce0u));
  /* 10625b0a call dword ptr [0x106502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f4))), 0x10625b10u);
  /* 10625b10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625b13 jne 0x10625b21 */
  if (!C.zf) goto L_10625b21;
  /* 10625b15 mov dword ptr [0x1064e588], 1 */
  w32((uint32_t)(0x1064e588), (0x1u));
  /* 10625b1f jmp 0x10625b3f */
  goto L_10625b3f;
L_10625b21:;
  /* 10625b21 call dword ptr [0x106502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ac))), 0x10625b27u);
  /* 10625b27 mov esi, eax */
  ESI = (EAX);
  /* 10625b29 call 0x1062a7c0 */
  push32(0x10625b2eu); f_1062a7c0();
  /* 10625b2e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10625b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625b32 call 0x10626380 */
  push32(0x10625b37u); f_10626380();
  /* 10625b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625b3a jmp 0x10625c98 */
  goto L_10625c98;
L_10625b3f:;
  /* 10625b3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625b42 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10625b45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10625b48 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625b4b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10625b4e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625b52 ja 0x10625bb2 */
  if ((!C.cf&&!C.zf)) goto L_10625bb2;
  /* 10625b54 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10625b57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10625b59 mov dl, byte ptr [eax + 0x10625cbf] */
  DL = (r8((uint32_t)(EAX + 0x10625cbf)));
  /* 10625b5f jmp dword ptr [edx*4 + 0x10625cab] */
  switch (EDX) {
    case 0: goto L_10625b66;
    case 1: goto L_10625ba0;
    case 2: goto L_10625b7a;
    case 3: goto L_10625b8d;
    case 4: goto L_10625bb2;
    default: x86_unimpl("switch@0x10625b5f out of table"); return;
  }
L_10625b66:;
  /* 10625b66 mov ecx, dword ptr [0x1064e578] */
  ECX = (r32((uint32_t)(0x1064e578)));
  /* 10625b6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10625b6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625b72 mov dword ptr [0x1064e578], edx */
  w32((uint32_t)(0x1064e578), (EDX));
  /* 10625b78 jmp 0x10625bb2 */
  goto L_10625bb2;
L_10625b7a:;
  /* 10625b7a mov eax, dword ptr [0x1064e57c] */
  EAX = (r32((uint32_t)(0x1064e57c)));
  /* 10625b7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625b82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625b85 mov dword ptr [0x1064e57c], ecx */
  w32((uint32_t)(0x1064e57c), (ECX));
  /* 10625b8b jmp 0x10625bb2 */
  goto L_10625bb2;
L_10625b8d:;
  /* 10625b8d mov edx, dword ptr [0x1064e580] */
  EDX = (r32((uint32_t)(0x1064e580)));
  /* 10625b93 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10625b96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625b99 mov dword ptr [0x1064e580], eax */
  w32((uint32_t)(0x1064e580), (EAX));
  /* 10625b9e jmp 0x10625bb2 */
  goto L_10625bb2;
L_10625ba0:;
  /* 10625ba0 mov ecx, dword ptr [0x1064e584] */
  ECX = (r32((uint32_t)(0x1064e584)));
  /* 10625ba6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10625ba9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625bac mov dword ptr [0x1064e584], edx */
  w32((uint32_t)(0x1064e584), (EDX));
L_10625bb2:;
  /* 10625bb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625bb4 call 0x10626380 */
  push32(0x10625bb9u); f_10626380();
  /* 10625bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625bbc jmp 0x10625c93 */
  goto L_10625c93;
L_10625bc1:;
  /* 10625bc1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625bc5 je 0x10625bd8 */
  if (C.zf) goto L_10625bd8;
  /* 10625bc7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625bcb je 0x10625bd8 */
  if (C.zf) goto L_10625bd8;
  /* 10625bcd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625bd1 je 0x10625bd8 */
  if (C.zf) goto L_10625bd8;
  /* 10625bd3 jmp 0x10625c98 */
  goto L_10625c98;
L_10625bd8:;
  /* 10625bd8 call 0x10622320 */
  push32(0x10625bddu); f_10622320();
  /* 10625bdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10625be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625be3 cmp dword ptr [eax + 0x50], 0x1064cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1064cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625bea jne 0x10625c35 */
  if (!C.zf) goto L_10625c35;
  /* 10625bec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10625bf1 push 0x10649e0c */
  push32((uint32_t)(0x10649e0cu));
  /* 10625bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10625bf8 mov ecx, dword ptr [0x1064cc80] */
  ECX = (r32((uint32_t)(0x1064cc80)));
  /* 10625bfe push ecx */
  push32((uint32_t)(ECX));
  /* 10625bff call 0x106228e0 */
  push32(0x10625c04u); f_106228e0();
  /* 10625c04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625c07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625c0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10625c0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625c10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625c14 je 0x10625c33 */
  if (C.zf) goto L_10625c33;
  /* 10625c16 mov ecx, dword ptr [0x1064cc80] */
  ECX = (r32((uint32_t)(0x1064cc80)));
  /* 10625c1c push ecx */
  push32((uint32_t)(ECX));
  /* 10625c1d push 0x1064cc00 */
  push32((uint32_t)(0x1064cc00u));
  /* 10625c22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625c25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10625c28 push eax */
  push32((uint32_t)(EAX));
  /* 10625c29 call 0x106291c0 */
  push32(0x10625c2eu); f_106291c0();
  /* 10625c2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625c31 jmp 0x10625c35 */
  goto L_10625c35;
L_10625c33:;
  /* 10625c33 jmp 0x10625c98 */
  goto L_10625c98;
L_10625c35:;
  /* 10625c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625c38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10625c3b push edx */
  push32((uint32_t)(EDX));
  /* 10625c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625c3f push eax */
  push32((uint32_t)(EAX));
  /* 10625c40 call 0x10625fc0 */
  push32(0x10625c45u); f_10625fc0();
  /* 10625c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625c48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10625c4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625c4f jne 0x10625c53 */
  if (!C.zf) goto L_10625c53;
  /* 10625c51 jmp 0x10625c98 */
  goto L_10625c98;
L_10625c53:;
  /* 10625c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625c56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10625c59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10625c5c:;
  /* 10625c5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625c5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10625c62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625c65 jne 0x10625c93 */
  if (!C.zf) goto L_10625c93;
  /* 10625c67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625c6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625c6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10625c70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625c73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625c76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10625c79 mov edx, dword ptr [0x1064cc84] */
  EDX = (r32((uint32_t)(0x1064cc84)));
  /* 10625c7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10625c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625c85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10625c88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625c8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625c8d jb 0x10625c91 */
  if (C.cf) goto L_10625c91;
  /* 10625c8f jmp 0x10625c93 */
  goto L_10625c93;
L_10625c91:;
  /* 10625c91 jmp 0x10625c5c */
  goto L_10625c5c;
L_10625c93:;
  /* 10625c93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625c96 jmp 0x10625ca6 */
  goto L_10625ca6;
L_10625c98:;
  /* 10625c98 call 0x1062a7b0 */
  push32(0x10625c9du); f_1062a7b0();
  /* 10625c9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10625ca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10625ca6:;
  /* 10625ca6 pop esi */
  ESI = (pop32());
  /* 10625ca7 mov esp, ebp */
  ESP = (EBP);
  /* 10625ca9 pop ebp */
  EBP = (pop32());
  /* 10625caa ret  */
  ESPCHK(0x10625ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x10625ce0 (146 bytes, 45 insns) */
void f_10625ce0(void) {
  FTRACE(0x10625ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10625ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10625ce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625ce8 call 0x106262e0 */
  push32(0x10625cedu); f_106262e0();
  /* 10625ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625cf0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625cf4 jne 0x10625d0e */
  if (!C.zf) goto L_10625d0e;
  /* 10625cf6 mov dword ptr [ebp - 8], 0x1064e578 */
  w32((uint32_t)(EBP + -0x8), (0x1064e578u));
  /* 10625cfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625d00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10625d02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10625d05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10625d0c jmp 0x10625d24 */
  goto L_10625d24;
L_10625d0e:;
  /* 10625d0e mov dword ptr [ebp - 8], 0x1064e57c */
  w32((uint32_t)(EBP + -0x8), (0x1064e57cu));
  /* 10625d15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625d18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10625d1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625d1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10625d24:;
  /* 10625d24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625d28 jne 0x10625d38 */
  if (!C.zf) goto L_10625d38;
  /* 10625d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10625d2c call 0x10626380 */
  push32(0x10625d31u); f_10626380();
  /* 10625d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10625d36 jmp 0x10625d6c */
  goto L_10625d6c;
L_10625d38:;
  /* 10625d38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625d3c je 0x10625d5d */
  if (C.zf) goto L_10625d5d;
  /* 10625d3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625d41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10625d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625d49 call 0x10626380 */
  push32(0x10625d4eu); f_10626380();
  /* 10625d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625d54 push edx */
  push32((uint32_t)(EDX));
  /* 10625d55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10625d58u);
  /* 10625d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625d5b jmp 0x10625d67 */
  goto L_10625d67;
L_10625d5d:;
  /* 10625d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10625d5f call 0x10626380 */
  push32(0x10625d64u); f_10626380();
  /* 10625d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625d67:;
  /* 10625d67 mov eax, 1 */
  EAX = (0x1u);
L_10625d6c:;
  /* 10625d6c mov esp, ebp */
  ESP = (EBP);
  /* 10625d6e pop ebp */
  EBP = (pop32());
  /* 10625d6f ret 4 */
  ESPCHK(0x10625ce0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d80 @ 0x10625d80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10625d80(void) {
  FTRACE(0x10625d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10625d81 mov ebp, esp */
  EBP = (ESP);
  /* 10625d83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625d86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10625d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625d90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10625d93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10625d96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10625d99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10625d9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625da0 ja 0x10625e4e */
  if ((!C.cf&&!C.zf)) goto L_10625e4e;
  /* 10625da6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10625da9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10625dab mov dl, byte ptr [eax + 0x10625fa2] */
  DL = (r8((uint32_t)(EAX + 0x10625fa2)));
  /* 10625db1 jmp dword ptr [edx*4 + 0x10625f8a] */
  switch (EDX) {
    case 0: goto L_10625db8;
    case 1: goto L_10625e23;
    case 2: goto L_10625e09;
    case 3: goto L_10625dd5;
    case 4: goto L_10625def;
    case 5: goto L_10625e4e;
    default: x86_unimpl("switch@0x10625db1 out of table"); return;
  }
L_10625db8:;
  /* 10625db8 mov dword ptr [ebp - 0x18], 0x1064e578 */
  w32((uint32_t)(EBP + -0x18), (0x1064e578u));
  /* 10625dbf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625dc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625dc4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10625dc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625dca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625dcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625dd0 jmp 0x10625e56 */
  goto L_10625e56;
L_10625dd5:;
  /* 10625dd5 mov dword ptr [ebp - 0x18], 0x1064e57c */
  w32((uint32_t)(EBP + -0x18), (0x1064e57cu));
  /* 10625ddc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625ddf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625de1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10625de4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625de7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625dea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625ded jmp 0x10625e56 */
  goto L_10625e56;
L_10625def:;
  /* 10625def mov dword ptr [ebp - 0x18], 0x1064e580 */
  w32((uint32_t)(EBP + -0x18), (0x1064e580u));
  /* 10625df6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625df9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625dfb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10625dfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625e01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625e04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625e07 jmp 0x10625e56 */
  goto L_10625e56;
L_10625e09:;
  /* 10625e09 mov dword ptr [ebp - 0x18], 0x1064e584 */
  w32((uint32_t)(EBP + -0x18), (0x1064e584u));
  /* 10625e10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625e13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625e15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10625e18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10625e1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625e1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10625e21 jmp 0x10625e56 */
  goto L_10625e56;
L_10625e23:;
  /* 10625e23 call 0x10622320 */
  push32(0x10625e28u); f_10622320();
  /* 10625e28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10625e2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625e2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10625e31 push edx */
  push32((uint32_t)(EDX));
  /* 10625e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625e35 push eax */
  push32((uint32_t)(EAX));
  /* 10625e36 call 0x10625fc0 */
  push32(0x10625e3bu); f_10625fc0();
  /* 10625e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625e3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625e41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10625e44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625e47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10625e49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10625e4c jmp 0x10625e56 */
  goto L_10625e56;
L_10625e4e:;
  /* 10625e4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10625e51 jmp 0x10625f86 */
  goto L_10625f86;
L_10625e56:;
  /* 10625e56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625e5a je 0x10625e66 */
  if (C.zf) goto L_10625e66;
  /* 10625e5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10625e5e call 0x106262e0 */
  push32(0x10625e63u); f_106262e0();
  /* 10625e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625e66:;
  /* 10625e66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625e6a jne 0x10625e83 */
  if (!C.zf) goto L_10625e83;
  /* 10625e6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625e70 je 0x10625e7c */
  if (C.zf) goto L_10625e7c;
  /* 10625e72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10625e74 call 0x10626380 */
  push32(0x10625e79u); f_10626380();
  /* 10625e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625e7c:;
  /* 10625e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10625e7e jmp 0x10625f86 */
  goto L_10625f86;
L_10625e83:;
  /* 10625e83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625e87 jne 0x10625ea0 */
  if (!C.zf) goto L_10625ea0;
  /* 10625e89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625e8d je 0x10625e99 */
  if (C.zf) goto L_10625e99;
  /* 10625e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10625e91 call 0x10626380 */
  push32(0x10625e96u); f_10626380();
  /* 10625e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625e99:;
  /* 10625e99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10625e9b call 0x106220a0 */
  push32(0x10625ea0u); f_106220a0();
L_10625ea0:;
  /* 10625ea0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ea4 je 0x10625eb2 */
  if (C.zf) goto L_10625eb2;
  /* 10625ea6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625eaa je 0x10625eb2 */
  if (C.zf) goto L_10625eb2;
  /* 10625eac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625eb0 jne 0x10625ede */
  if (!C.zf) goto L_10625ede;
L_10625eb2:;
  /* 10625eb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625eb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10625eb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10625ebb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625ebe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10625ec5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ec9 jne 0x10625ede */
  if (!C.zf) goto L_10625ede;
  /* 10625ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625ece mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10625ed1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10625ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625ed7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10625ede:;
  /* 10625ede cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625ee2 jne 0x10625f20 */
  if (!C.zf) goto L_10625f20;
  /* 10625ee4 mov eax, dword ptr [0x1064cc78] */
  EAX = (r32((uint32_t)(0x1064cc78)));
  /* 10625ee9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10625eec jmp 0x10625ef7 */
  goto L_10625ef7;
L_10625eee:;
  /* 10625eee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10625ef1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625ef4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10625ef7:;
  /* 10625ef7 mov edx, dword ptr [0x1064cc78] */
  EDX = (r32((uint32_t)(0x1064cc78)));
  /* 10625efd add edx, dword ptr [0x1064cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625f03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f06 jge 0x10625f1e */
  if ((C.sf==C.of)) goto L_10625f1e;
  /* 10625f08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10625f0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10625f0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625f11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10625f14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10625f1c jmp 0x10625eee */
  goto L_10625eee;
L_10625f1e:;
  /* 10625f1e jmp 0x10625f29 */
  goto L_10625f29;
L_10625f20:;
  /* 10625f20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10625f23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10625f29:;
  /* 10625f29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f2d je 0x10625f39 */
  if (C.zf) goto L_10625f39;
  /* 10625f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10625f31 call 0x10626380 */
  push32(0x10625f36u); f_10626380();
  /* 10625f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625f39:;
  /* 10625f39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f3d jne 0x10625f50 */
  if (!C.zf) goto L_10625f50;
  /* 10625f3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625f42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10625f45 push edx */
  push32((uint32_t)(EDX));
  /* 10625f46 push 8 */
  push32((uint32_t)(0x8u));
  /* 10625f48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10625f4bu);
  /* 10625f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10625f4e jmp 0x10625f5a */
  goto L_10625f5a;
L_10625f50:;
  /* 10625f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10625f53 push eax */
  push32((uint32_t)(EAX));
  /* 10625f54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10625f57u);
  /* 10625f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10625f5a:;
  /* 10625f5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f5e je 0x10625f6c */
  if (C.zf) goto L_10625f6c;
  /* 10625f60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f64 je 0x10625f6c */
  if (C.zf) goto L_10625f6c;
  /* 10625f66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f6a jne 0x10625f84 */
  if (!C.zf) goto L_10625f84;
L_10625f6c:;
  /* 10625f6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625f6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10625f72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10625f75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625f79 jne 0x10625f84 */
  if (!C.zf) goto L_10625f84;
  /* 10625f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625f7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10625f81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10625f84:;
  /* 10625f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10625f86:;
  /* 10625f86 mov esp, ebp */
  ESP = (EBP);
  /* 10625f88 pop ebp */
  EBP = (pop32());
  /* 10625f89 ret  */
  ESPCHK(0x10625d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x10625fc0 (91 bytes, 35 insns) */
void f_10625fc0(void) {
  FTRACE(0x10625fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10625fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10625fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10625fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10625fc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10625fca:;
  /* 10625fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625fcd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10625fd0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625fd3 je 0x10625ff3 */
  if (C.zf) goto L_10625ff3;
  /* 10625fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10625fd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625fdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10625fde mov ecx, dword ptr [0x1064cc84] */
  ECX = (r32((uint32_t)(0x1064cc84)));
  /* 10625fe4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10625fe7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625fea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10625fec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10625fef jae 0x10625ff3 */
  if (!C.cf) goto L_10625ff3;
  /* 10625ff1 jmp 0x10625fca */
  goto L_10625fca;
L_10625ff3:;
  /* 10625ff3 mov eax, dword ptr [0x1064cc84] */
  EAX = (r32((uint32_t)(0x1064cc84)));
  /* 10625ff8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10625ffb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10625ffe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626000 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626003 jae 0x10626015 */
  if (!C.cf) goto L_10626015;
  /* 10626005 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626008 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1062600b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062600e jne 0x10626015 */
  if (!C.zf) goto L_10626015;
  /* 10626010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626013 jmp 0x10626017 */
  goto L_10626017;
L_10626015:;
  /* 10626015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10626017:;
  /* 10626017 mov esp, ebp */
  ESP = (EBP);
  /* 10626019 pop ebp */
  EBP = (pop32());
  /* 1062601a ret  */
  ESPCHK(0x10625fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x10626020 (13 bytes, 6 insns) */
void f_10626020(void) {
  FTRACE(0x10626020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626020 push ebp */
  push32((uint32_t)(EBP));
  /* 10626021 mov ebp, esp */
  EBP = (ESP);
  /* 10626023 call 0x10622320 */
  push32(0x10626028u); f_10622320();
  /* 10626028 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062602b pop ebp */
  EBP = (pop32());
  /* 1062602c ret  */
  ESPCHK(0x10626020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006030 @ 0x10626030 (13 bytes, 6 insns) */
void f_10626030(void) {
  FTRACE(0x10626030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626030 push ebp */
  push32((uint32_t)(EBP));
  /* 10626031 mov ebp, esp */
  EBP = (ESP);
  /* 10626033 call 0x10622320 */
  push32(0x10626038u); f_10622320();
  /* 10626038 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062603b pop ebp */
  EBP = (pop32());
  /* 1062603c ret  */
  ESPCHK(0x10626030u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x10626040 (187 bytes, 54 insns) */
void f_10626040(void) {
  FTRACE(0x10626040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626040 push ebp */
  push32((uint32_t)(EBP));
  /* 10626041 mov ebp, esp */
  EBP = (ESP);
  /* 10626043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626046 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062604d cmp dword ptr [0x1064e58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626054 jne 0x106260b3 */
  if (!C.zf) goto L_106260b3;
  /* 10626056 push 0x10649238 */
  push32((uint32_t)(0x10649238u));
  /* 1062605b call dword ptr [0x1065027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1065027c))), 0x10626061u);
  /* 10626061 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10626064 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626068 je 0x10626087 */
  if (C.zf) goto L_10626087;
  /* 1062606a push 0x10649e3c */
  push32((uint32_t)(0x10649e3cu));
  /* 1062606f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626072 push eax */
  push32((uint32_t)(EAX));
  /* 10626073 call dword ptr [0x10650278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650278))), 0x10626079u);
  /* 10626079 mov dword ptr [0x1064e58c], eax */
  w32((uint32_t)(0x1064e58c), (EAX));
  /* 1062607e cmp dword ptr [0x1064e58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626085 jne 0x1062608b */
  if (!C.zf) goto L_1062608b;
L_10626087:;
  /* 10626087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626089 jmp 0x106260f7 */
  goto L_106260f7;
L_1062608b:;
  /* 1062608b push 0x10649e2c */
  push32((uint32_t)(0x10649e2cu));
  /* 10626090 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626093 push ecx */
  push32((uint32_t)(ECX));
  /* 10626094 call dword ptr [0x10650278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650278))), 0x1062609au);
  /* 1062609a mov dword ptr [0x1064e590], eax */
  w32((uint32_t)(0x1064e590), (EAX));
  /* 1062609f push 0x10649e18 */
  push32((uint32_t)(0x10649e18u));
  /* 106260a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106260a7 push edx */
  push32((uint32_t)(EDX));
  /* 106260a8 call dword ptr [0x10650278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650278))), 0x106260aeu);
  /* 106260ae mov dword ptr [0x1064e594], eax */
  w32((uint32_t)(0x1064e594), (EAX));
L_106260b3:;
  /* 106260b3 cmp dword ptr [0x1064e590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106260ba je 0x106260c5 */
  if (C.zf) goto L_106260c5;
  /* 106260bc call dword ptr [0x1064e590] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e590))), 0x106260c2u);
  /* 106260c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106260c5:;
  /* 106260c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106260c9 je 0x106260e1 */
  if (C.zf) goto L_106260e1;
  /* 106260cb cmp dword ptr [0x1064e594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106260d2 je 0x106260e1 */
  if (C.zf) goto L_106260e1;
  /* 106260d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106260d7 push eax */
  push32((uint32_t)(EAX));
  /* 106260d8 call dword ptr [0x1064e594] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e594))), 0x106260deu);
  /* 106260de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106260e1:;
  /* 106260e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106260e4 push ecx */
  push32((uint32_t)(ECX));
  /* 106260e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106260e8 push edx */
  push32((uint32_t)(EDX));
  /* 106260e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106260ec push eax */
  push32((uint32_t)(EAX));
  /* 106260ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106260f0 push ecx */
  push32((uint32_t)(ECX));
  /* 106260f1 call dword ptr [0x1064e58c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1064e58c))), 0x106260f7u);
L_106260f7:;
  /* 106260f7 mov esp, ebp */
  ESP = (EBP);
  /* 106260f9 pop ebp */
  EBP = (pop32());
  /* 106260fa ret  */
  ESPCHK(0x10626040u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10626100 (254 bytes, 109 insns) */
void f_10626100(void) {
  FTRACE(0x10626100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626100 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10626104 push edi */
  push32((uint32_t)(EDI));
  /* 10626105 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10626107 je 0x10626183 */
  if (C.zf) goto L_10626183;
  /* 10626109 push esi */
  push32((uint32_t)(ESI));
  /* 1062610a push ebx */
  push32((uint32_t)(EBX));
  /* 1062610b mov ebx, ecx */
  EBX = (ECX);
  /* 1062610d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10626111 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10626117 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1062611b jne 0x10626124 */
  if (!C.zf) goto L_10626124;
  /* 1062611d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10626120 jne 0x10626191 */
  if (!C.zf) goto L_10626191;
  /* 10626122 jmp 0x10626145 */
  goto L_10626145;
L_10626124:;
  /* 10626124 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10626126 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10626127 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10626129 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1062612a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1062612b je 0x10626152 */
  if (C.zf) goto L_10626152;
  /* 1062612d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1062612f je 0x1062615a */
  if (C.zf) goto L_1062615a;
  /* 10626131 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10626137 jne 0x10626124 */
  if (!C.zf) goto L_10626124;
  /* 10626139 mov ebx, ecx */
  EBX = (ECX);
  /* 1062613b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062613e jne 0x10626191 */
  if (!C.zf) goto L_10626191;
L_10626140:;
  /* 10626140 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10626143 je 0x10626152 */
  if (C.zf) goto L_10626152;
L_10626145:;
  /* 10626145 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10626147 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10626148 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062614a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1062614b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1062614d je 0x1062617e */
  if (C.zf) goto L_1062617e;
  /* 1062614f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10626150 jne 0x10626145 */
  if (!C.zf) goto L_10626145;
L_10626152:;
  /* 10626152 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10626156 pop ebx */
  EBX = (pop32());
  /* 10626157 pop esi */
  ESI = (pop32());
  /* 10626158 pop edi */
  EDI = (pop32());
  /* 10626159 ret  */
  ESPCHK(0x10626100u, _esp0);
  ESP += 4; return;
L_1062615a:;
  /* 1062615a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10626160 je 0x10626174 */
  if (C.zf) goto L_10626174;
L_10626162:;
  /* 10626162 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10626164 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10626165 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10626166 je 0x106261f6 */
  if (C.zf) goto L_106261f6;
  /* 1062616c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10626172 jne 0x10626162 */
  if (!C.zf) goto L_10626162;
L_10626174:;
  /* 10626174 mov ebx, ecx */
  EBX = (ECX);
  /* 10626176 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10626179 jne 0x106261e7 */
  if (!C.zf) goto L_106261e7;
L_1062617b:;
  /* 1062617b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1062617d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1062617e:;
  /* 1062617e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1062617f jne 0x1062617b */
  if (!C.zf) goto L_1062617b;
  /* 10626181 pop ebx */
  EBX = (pop32());
  /* 10626182 pop esi */
  ESI = (pop32());
L_10626183:;
  /* 10626183 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10626187 pop edi */
  EDI = (pop32());
  /* 10626188 ret  */
  ESPCHK(0x10626100u, _esp0);
  ESP += 4; return;
L_10626189:;
  /* 10626189 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1062618b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1062618e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1062618f je 0x10626140 */
  if (C.zf) goto L_10626140;
L_10626191:;
  /* 10626191 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10626196 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10626198 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062619a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062619d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1062619f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 106261a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106261a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106261a9 je 0x10626189 */
  if (C.zf) goto L_10626189;
  /* 106261ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106261ad je 0x106261db */
  if (C.zf) goto L_106261db;
  /* 106261af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 106261b1 je 0x106261d1 */
  if (C.zf) goto L_106261d1;
  /* 106261b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 106261b9 je 0x106261c7 */
  if (C.zf) goto L_106261c7;
  /* 106261bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 106261c1 jne 0x10626189 */
  if (!C.zf) goto L_10626189;
  /* 106261c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106261c5 jmp 0x106261df */
  goto L_106261df;
L_106261c7:;
  /* 106261c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106261cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106261cf jmp 0x106261df */
  goto L_106261df;
L_106261d1:;
  /* 106261d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106261d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106261d9 jmp 0x106261df */
  goto L_106261df;
L_106261db:;
  /* 106261db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106261dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_106261df:;
  /* 106261df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106261e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106261e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106261e5 je 0x106261f1 */
  if (C.zf) goto L_106261f1;
L_106261e7:;
  /* 106261e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106261e9:;
  /* 106261e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 106261eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106261ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106261ef jne 0x106261e9 */
  if (!C.zf) goto L_106261e9;
L_106261f1:;
  /* 106261f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 106261f4 jne 0x1062617b */
  if (!C.zf) goto L_1062617b;
L_106261f6:;
  /* 106261f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106261fa pop ebx */
  EBX = (pop32());
  /* 106261fb pop esi */
  ESI = (pop32());
  /* 106261fc pop edi */
  EDI = (pop32());
  /* 106261fd ret  */
  ESPCHK(0x10626100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x10626200 (55 bytes, 16 insns) */
void f_10626200(void) {
  FTRACE(0x10626200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626200 push ebp */
  push32((uint32_t)(EBP));
  /* 10626201 mov ebp, esp */
  EBP = (ESP);
  /* 10626203 mov eax, dword ptr [0x1064cb84] */
  EAX = (r32((uint32_t)(0x1064cb84)));
  /* 10626208 push eax */
  push32((uint32_t)(EAX));
  /* 10626209 call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x1062620fu);
  /* 1062620f mov ecx, dword ptr [0x1064cb74] */
  ECX = (r32((uint32_t)(0x1064cb74)));
  /* 10626215 push ecx */
  push32((uint32_t)(ECX));
  /* 10626216 call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x1062621cu);
  /* 1062621c mov edx, dword ptr [0x1064cb64] */
  EDX = (r32((uint32_t)(0x1064cb64)));
  /* 10626222 push edx */
  push32((uint32_t)(EDX));
  /* 10626223 call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x10626229u);
  /* 10626229 mov eax, dword ptr [0x1064cb44] */
  EAX = (r32((uint32_t)(0x1064cb44)));
  /* 1062622e push eax */
  push32((uint32_t)(EAX));
  /* 1062622f call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x10626235u);
  /* 10626235 pop ebp */
  EBP = (pop32());
  /* 10626236 ret  */
  ESPCHK(0x10626200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x10626240 (159 bytes, 47 insns) */
void f_10626240(void) {
  FTRACE(0x10626240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626240 push ebp */
  push32((uint32_t)(EBP));
  /* 10626241 mov ebp, esp */
  EBP = (ESP);
  /* 10626243 push ecx */
  push32((uint32_t)(ECX));
  /* 10626244 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1062624b jmp 0x10626256 */
  goto L_10626256;
L_1062624d:;
  /* 1062624d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626250 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626253 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10626256:;
  /* 10626256 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062625a jge 0x106262a9 */
  if ((C.sf==C.of)) goto L_106262a9;
  /* 1062625c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062625f cmp dword ptr [ecx*4 + 0x1064cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1064cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626267 je 0x106262a7 */
  if (C.zf) goto L_106262a7;
  /* 10626269 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062626d je 0x106262a7 */
  if (C.zf) goto L_106262a7;
  /* 1062626f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626273 je 0x106262a7 */
  if (C.zf) goto L_106262a7;
  /* 10626275 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626279 je 0x106262a7 */
  if (C.zf) goto L_106262a7;
  /* 1062627b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062627f je 0x106262a7 */
  if (C.zf) goto L_106262a7;
  /* 10626281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626284 mov eax, dword ptr [edx*4 + 0x1064cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1064cb40)));
  /* 1062628b push eax */
  push32((uint32_t)(EAX));
  /* 1062628c call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x10626292u);
  /* 10626292 push 2 */
  push32((uint32_t)(0x2u));
  /* 10626294 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626297 mov edx, dword ptr [ecx*4 + 0x1064cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1064cb40)));
  /* 1062629e push edx */
  push32((uint32_t)(EDX));
  /* 1062629f call 0x10623370 */
  push32(0x106262a4u); f_10623370();
  /* 106262a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106262a7:;
  /* 106262a7 jmp 0x1062624d */
  goto L_1062624d;
L_106262a9:;
  /* 106262a9 mov eax, dword ptr [0x1064cb64] */
  EAX = (r32((uint32_t)(0x1064cb64)));
  /* 106262ae push eax */
  push32((uint32_t)(EAX));
  /* 106262af call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x106262b5u);
  /* 106262b5 mov ecx, dword ptr [0x1064cb74] */
  ECX = (r32((uint32_t)(0x1064cb74)));
  /* 106262bb push ecx */
  push32((uint32_t)(ECX));
  /* 106262bc call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x106262c2u);
  /* 106262c2 mov edx, dword ptr [0x1064cb84] */
  EDX = (r32((uint32_t)(0x1064cb84)));
  /* 106262c8 push edx */
  push32((uint32_t)(EDX));
  /* 106262c9 call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x106262cfu);
  /* 106262cf mov eax, dword ptr [0x1064cb44] */
  EAX = (r32((uint32_t)(0x1064cb44)));
  /* 106262d4 push eax */
  push32((uint32_t)(EAX));
  /* 106262d5 call dword ptr [0x106502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502c0))), 0x106262dbu);
  /* 106262db mov esp, ebp */
  ESP = (EBP);
  /* 106262dd pop ebp */
  EBP = (pop32());
  /* 106262de ret  */
  ESPCHK(0x10626240u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e0 @ 0x106262e0 (151 bytes, 46 insns) */
void f_106262e0(void) {
  FTRACE(0x106262e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106262e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106262e1 mov ebp, esp */
  EBP = (ESP);
  /* 106262e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106262e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106262e7 cmp dword ptr [eax*4 + 0x1064cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1064cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106262ef jne 0x10626362 */
  if (!C.zf) goto L_10626362;
  /* 106262f1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 106262f6 push 0x10649e48 */
  push32((uint32_t)(0x10649e48u));
  /* 106262fb push 2 */
  push32((uint32_t)(0x2u));
  /* 106262fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 106262ff call 0x106228e0 */
  push32(0x10626304u); f_106228e0();
  /* 10626304 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626307 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062630a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062630e jne 0x1062631a */
  if (!C.zf) goto L_1062631a;
  /* 10626310 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10626312 call 0x10621850 */
  push32(0x10626317u); f_10621850();
  /* 10626317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062631a:;
  /* 1062631a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062631c call 0x106262e0 */
  push32(0x10626321u); f_106262e0();
  /* 10626321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626327 cmp dword ptr [ecx*4 + 0x1064cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1064cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062632f jne 0x1062634a */
  if (!C.zf) goto L_1062634a;
  /* 10626331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626334 push edx */
  push32((uint32_t)(EDX));
  /* 10626335 call dword ptr [0x106502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502f8))), 0x1062633bu);
  /* 1062633b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062633e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626341 mov dword ptr [eax*4 + 0x1064cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1064cb40), (ECX));
  /* 10626348 jmp 0x10626358 */
  goto L_10626358;
L_1062634a:;
  /* 1062634a push 2 */
  push32((uint32_t)(0x2u));
  /* 1062634c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062634f push edx */
  push32((uint32_t)(EDX));
  /* 10626350 call 0x10623370 */
  push32(0x10626355u); f_10623370();
  /* 10626355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10626358:;
  /* 10626358 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1062635a call 0x10626380 */
  push32(0x1062635fu); f_10626380();
  /* 1062635f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10626362:;
  /* 10626362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626365 mov ecx, dword ptr [eax*4 + 0x1064cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064cb40)));
  /* 1062636c push ecx */
  push32((uint32_t)(ECX));
  /* 1062636d call dword ptr [0x106502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502fc))), 0x10626373u);
  /* 10626373 mov esp, ebp */
  ESP = (EBP);
  /* 10626375 pop ebp */
  EBP = (pop32());
  /* 10626376 ret  */
  ESPCHK(0x106262e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006380 @ 0x10626380 (22 bytes, 8 insns) */
void f_10626380(void) {
  FTRACE(0x10626380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626380 push ebp */
  push32((uint32_t)(EBP));
  /* 10626381 mov ebp, esp */
  EBP = (ESP);
  /* 10626383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626386 mov ecx, dword ptr [eax*4 + 0x1064cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1064cb40)));
  /* 1062638d push ecx */
  push32((uint32_t)(ECX));
  /* 1062638e call dword ptr [0x10650300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650300))), 0x10626394u);
  /* 10626394 pop ebp */
  EBP = (pop32());
  /* 10626395 ret  */
  ESPCHK(0x10626380u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x106263a0 (26 bytes, 10 insns) */
void f_106263a0(void) {
  FTRACE(0x106263a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106263a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106263a1 mov ebp, esp */
  EBP = (ESP);
  /* 106263a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106263a6 push eax */
  push32((uint32_t)(EAX));
  /* 106263a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106263a9 call dword ptr [0x10650304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650304))), 0x106263afu);
  /* 106263af push 0xff */
  push32((uint32_t)(0xffu));
  /* 106263b4 call dword ptr [0x10650288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650288))), 0x106263bau);
  /* 106263ba pop ebp */
  EBP = (pop32());
  /* 106263bb ret  */
  ESPCHK(0x106263a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x106263c0 (446 bytes, 130 insns) */
void f_106263c0(void) {
  FTRACE(0x106263c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106263c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106263c1 mov ebp, esp */
  EBP = (ESP);
  /* 106263c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106263c6 call 0x10622320 */
  push32(0x106263cbu); f_10622320();
  /* 106263cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106263ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106263d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 106263d4 push ecx */
  push32((uint32_t)(ECX));
  /* 106263d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106263d8 push edx */
  push32((uint32_t)(EDX));
  /* 106263d9 call 0x10626580 */
  push32(0x106263deu); f_10626580();
  /* 106263de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106263e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106263e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106263e8 je 0x106263f3 */
  if (C.zf) goto L_106263f3;
  /* 106263ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106263ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106263f1 jne 0x10626402 */
  if (!C.zf) goto L_10626402;
L_106263f3:;
  /* 106263f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106263f6 push ecx */
  push32((uint32_t)(ECX));
  /* 106263f7 call dword ptr [0x10650308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10650308))), 0x106263fdu);
  /* 106263fd jmp 0x1062657a */
  goto L_1062657a;
L_10626402:;
  /* 10626402 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626405 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626409 jne 0x1062641f */
  if (!C.zf) goto L_1062641f;
  /* 1062640b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062640e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10626415 mov eax, 1 */
  EAX = (0x1u);
  /* 1062641a jmp 0x1062657a */
  goto L_1062657a;
L_1062641f:;
  /* 1062641f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626422 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626426 jne 0x10626430 */
  if (!C.zf) goto L_10626430;
  /* 10626428 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1062642b jmp 0x1062657a */
  goto L_1062657a;
L_10626430:;
  /* 10626430 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626433 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10626436 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10626439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062643c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1062643f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10626442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626448 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1062644b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062644e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626452 jne 0x10626557 */
  if (!C.zf) goto L_10626557;
  /* 10626458 mov eax, dword ptr [0x1064cc78] */
  EAX = (r32((uint32_t)(0x1064cc78)));
  /* 1062645d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10626460 jmp 0x1062646b */
  goto L_1062646b;
L_10626462:;
  /* 10626462 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10626465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626468 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1062646b:;
  /* 1062646b mov edx, dword ptr [0x1064cc78] */
  EDX = (r32((uint32_t)(0x1064cc78)));
  /* 10626471 add edx, dword ptr [0x1064cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1064cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626477 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062647a jge 0x10626492 */
  if ((C.sf==C.of)) goto L_10626492;
  /* 1062647c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1062647f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10626482 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626485 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10626488 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10626490 jmp 0x10626462 */
  goto L_10626462;
L_10626492:;
  /* 10626492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626495 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10626498 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1062649b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062649e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106264a4 jne 0x106264b5 */
  if (!C.zf) goto L_106264b5;
  /* 106264a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106264a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 106264b0 jmp 0x1062653d */
  goto L_1062653d;
L_106264b5:;
  /* 106264b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106264b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106264be jne 0x106264cc */
  if (!C.zf) goto L_106264cc;
  /* 106264c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106264c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 106264ca jmp 0x1062653d */
  goto L_1062653d;
L_106264cc:;
  /* 106264cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106264cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106264d5 jne 0x106264e3 */
  if (!C.zf) goto L_106264e3;
  /* 106264d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106264da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 106264e1 jmp 0x1062653d */
  goto L_1062653d;
L_106264e3:;
  /* 106264e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106264e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106264ec jne 0x106264fa */
  if (!C.zf) goto L_106264fa;
  /* 106264ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106264f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 106264f8 jmp 0x1062653d */
  goto L_1062653d;
L_106264fa:;
  /* 106264fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106264fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626503 jne 0x10626511 */
  if (!C.zf) goto L_10626511;
  /* 10626505 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626508 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1062650f jmp 0x1062653d */
  goto L_1062653d;
L_10626511:;
  /* 10626511 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626514 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062651a jne 0x10626528 */
  if (!C.zf) goto L_10626528;
  /* 1062651c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062651f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10626526 jmp 0x1062653d */
  goto L_1062653d;
L_10626528:;
  /* 10626528 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062652b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626531 jne 0x1062653d */
  if (!C.zf) goto L_1062653d;
  /* 10626533 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626536 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1062653d:;
  /* 1062653d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626540 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10626543 push edx */
  push32((uint32_t)(EDX));
  /* 10626544 push 8 */
  push32((uint32_t)(0x8u));
  /* 10626546 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10626549u);
  /* 10626549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062654c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1062654f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626552 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10626555 jmp 0x1062656e */
  goto L_1062656e;
L_10626557:;
  /* 10626557 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062655a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10626561 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10626564 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10626567 push ecx */
  push32((uint32_t)(ECX));
  /* 10626568 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1062656bu);
  /* 1062656b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1062656e:;
  /* 1062656e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626571 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10626574 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10626577 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1062657a:;
  /* 1062657a mov esp, ebp */
  ESP = (EBP);
  /* 1062657c pop ebp */
  EBP = (pop32());
  /* 1062657d ret  */
  ESPCHK(0x106263c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x10626580 (89 bytes, 35 insns) */
void f_10626580(void) {
  FTRACE(0x10626580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626580 push ebp */
  push32((uint32_t)(EBP));
  /* 10626581 mov ebp, esp */
  EBP = (ESP);
  /* 10626583 push ecx */
  push32((uint32_t)(ECX));
  /* 10626584 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626587 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1062658a:;
  /* 1062658a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062658d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1062658f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626592 je 0x106265b2 */
  if (C.zf) goto L_106265b2;
  /* 10626594 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626597 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062659a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062659d mov ecx, dword ptr [0x1064cc84] */
  ECX = (r32((uint32_t)(0x1064cc84)));
  /* 106265a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106265a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106265a9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106265ab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106265ae jae 0x106265b2 */
  if (!C.cf) goto L_106265b2;
  /* 106265b0 jmp 0x1062658a */
  goto L_1062658a;
L_106265b2:;
  /* 106265b2 mov eax, dword ptr [0x1064cc84] */
  EAX = (r32((uint32_t)(0x1064cc84)));
  /* 106265b7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106265ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106265bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106265bf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106265c2 jae 0x106265ce */
  if (!C.cf) goto L_106265ce;
  /* 106265c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106265c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106265c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106265cc je 0x106265d2 */
  if (C.zf) goto L_106265d2;
L_106265ce:;
  /* 106265ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106265d0 jmp 0x106265d5 */
  goto L_106265d5;
L_106265d2:;
  /* 106265d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106265d5:;
  /* 106265d5 mov esp, ebp */
  ESP = (EBP);
  /* 106265d7 pop ebp */
  EBP = (pop32());
  /* 106265d8 ret  */
  ESPCHK(0x10626580u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x106265e0 (48 bytes, 17 insns) */
void f_106265e0(void) {
  FTRACE(0x106265e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106265e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106265e1 mov ebp, esp */
  EBP = (ESP);
  /* 106265e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106265e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 106265e6 call 0x106262e0 */
  push32(0x106265ebu); f_106262e0();
  /* 106265eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106265ee mov eax, dword ptr [0x1064e5fc] */
  EAX = (r32((uint32_t)(0x1064e5fc)));
  /* 106265f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106265f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106265f9 mov dword ptr [0x1064e5fc], ecx */
  w32((uint32_t)(0x1064e5fc), (ECX));
  /* 106265ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10626601 call 0x10626380 */
  push32(0x10626606u); f_10626380();
  /* 10626606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062660c mov esp, ebp */
  ESP = (EBP);
  /* 1062660e pop ebp */
  EBP = (pop32());
  /* 1062660f ret  */
  ESPCHK(0x106265e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x10626610 (10 bytes, 5 insns) */
void f_10626610(void) {
  FTRACE(0x10626610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626610 push ebp */
  push32((uint32_t)(EBP));
  /* 10626611 mov ebp, esp */
  EBP = (ESP);
  /* 10626613 mov eax, dword ptr [0x1064e5fc] */
  EAX = (r32((uint32_t)(0x1064e5fc)));
  /* 10626618 pop ebp */
  EBP = (pop32());
  /* 10626619 ret  */
  ESPCHK(0x10626610u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10626620 (45 bytes, 19 insns) */
void f_10626620(void) {
  FTRACE(0x10626620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626620 push ebp */
  push32((uint32_t)(EBP));
  /* 10626621 mov ebp, esp */
  EBP = (ESP);
  /* 10626623 push ecx */
  push32((uint32_t)(ECX));
  /* 10626624 mov eax, dword ptr [0x1064e5fc] */
  EAX = (r32((uint32_t)(0x1064e5fc)));
  /* 10626629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1062662c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626630 je 0x10626640 */
  if (C.zf) goto L_10626640;
  /* 10626632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626635 push ecx */
  push32((uint32_t)(ECX));
  /* 10626636 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10626639u);
  /* 10626639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062663c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062663e jne 0x10626644 */
  if (!C.zf) goto L_10626644;
L_10626640:;
  /* 10626640 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626642 jmp 0x10626649 */
  goto L_10626649;
L_10626644:;
  /* 10626644 mov eax, 1 */
  EAX = (0x1u);
L_10626649:;
  /* 10626649 mov esp, ebp */
  ESP = (EBP);
  /* 1062664b pop ebp */
  EBP = (pop32());
  /* 1062664c ret  */
  ESPCHK(0x10626620u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10626650 (88 bytes, 40 insns) */
void f_10626650(void) {
  FTRACE(0x10626650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626650 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10626654 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10626658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1062665a je 0x106266a3 */
  if (C.zf) goto L_106266a3;
  /* 1062665c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062665e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10626662 push edi */
  push32((uint32_t)(EDI));
  /* 10626663 mov edi, ecx */
  EDI = (ECX);
  /* 10626665 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626668 jb 0x10626697 */
  if (C.cf) goto L_10626697;
  /* 1062666a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1062666c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1062666f je 0x10626679 */
  if (C.zf) goto L_10626679;
  /* 10626671 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10626673:;
  /* 10626673 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10626675 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10626676 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10626677 jne 0x10626673 */
  if (!C.zf) goto L_10626673;
L_10626679:;
  /* 10626679 mov ecx, eax */
  ECX = (EAX);
  /* 1062667b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1062667e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626680 mov ecx, eax */
  ECX = (EAX);
  /* 10626682 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10626685 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626687 mov ecx, edx */
  ECX = (EDX);
  /* 10626689 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1062668c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1062668f je 0x10626697 */
  if (C.zf) goto L_10626697;
  /* 10626691 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10626693 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10626695 je 0x1062669d */
  if (C.zf) goto L_1062669d;
L_10626697:;
  /* 10626697 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10626699 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1062669a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1062669b jne 0x10626697 */
  if (!C.zf) goto L_10626697;
L_1062669d:;
  /* 1062669d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106266a1 pop edi */
  EDI = (pop32());
  /* 106266a2 ret  */
  ESPCHK(0x10626650u, _esp0);
  ESP += 4; return;
L_106266a3:;
  /* 106266a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 106266a7 ret  */
  ESPCHK(0x10626650u, _esp0);
  ESP += 4; return;
}

/* FUN_100066b0 @ 0x106266b0 (23 bytes, 10 insns) */
void f_106266b0(void) {
  FTRACE(0x106266b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106266b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106266b1 mov ebp, esp */
  EBP = (ESP);
  /* 106266b3 mov eax, dword ptr [0x1064e5f8] */
  EAX = (r32((uint32_t)(0x1064e5f8)));
  /* 106266b8 push eax */
  push32((uint32_t)(EAX));
  /* 106266b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106266bc push ecx */
  push32((uint32_t)(ECX));
  /* 106266bd call 0x106266d0 */
  push32(0x106266c2u); f_106266d0();
  /* 106266c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106266c5 pop ebp */
  EBP = (pop32());
  /* 106266c6 ret  */
  ESPCHK(0x106266b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x106266d0 (87 bytes, 34 insns) */
void f_106266d0(void) {
  FTRACE(0x106266d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106266d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106266d1 mov ebp, esp */
  EBP = (ESP);
  /* 106266d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106266d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106266d8 jbe 0x106266de */
  if ((C.cf||C.zf)) goto L_106266de;
  /* 106266da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106266dc jmp 0x10626723 */
  goto L_10626723;
L_106266de:;
  /* 106266de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106266e2 ja 0x106266f5 */
  if ((!C.cf&&!C.zf)) goto L_106266f5;
  /* 106266e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106266e7 push eax */
  push32((uint32_t)(EAX));
  /* 106266e8 call 0x10626730 */
  push32(0x106266edu); f_10626730();
  /* 106266ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106266f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106266f3 jmp 0x106266fc */
  goto L_106266fc;
L_106266f5:;
  /* 106266f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106266fc:;
  /* 106266fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626700 jne 0x10626708 */
  if (!C.zf) goto L_10626708;
  /* 10626702 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626706 jne 0x1062670d */
  if (!C.zf) goto L_1062670d;
L_10626708:;
  /* 10626708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062670b jmp 0x10626723 */
  goto L_10626723;
L_1062670d:;
  /* 1062670d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626710 push ecx */
  push32((uint32_t)(ECX));
  /* 10626711 call 0x10626620 */
  push32(0x10626716u); f_10626620();
  /* 10626716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062671b jne 0x10626721 */
  if (!C.zf) goto L_10626721;
  /* 1062671d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1062671f jmp 0x10626723 */
  goto L_10626723;
L_10626721:;
  /* 10626721 jmp 0x106266de */
  goto L_106266de;
L_10626723:;
  /* 10626723 mov esp, ebp */
  ESP = (EBP);
  /* 10626725 pop ebp */
  EBP = (pop32());
  /* 10626726 ret  */
  ESPCHK(0x106266d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10626730 (109 bytes, 37 insns) */
void f_10626730(void) {
  FTRACE(0x10626730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626730 push ebp */
  push32((uint32_t)(EBP));
  /* 10626731 mov ebp, esp */
  EBP = (ESP);
  /* 10626733 push ecx */
  push32((uint32_t)(ECX));
  /* 10626734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626737 cmp eax, dword ptr [0x1064cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062673d ja 0x1062676d */
  if ((!C.cf&&!C.zf)) goto L_1062676d;
  /* 1062673f push 9 */
  push32((uint32_t)(0x9u));
  /* 10626741 call 0x106262e0 */
  push32(0x10626746u); f_106262e0();
  /* 10626746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062674c push ecx */
  push32((uint32_t)(ECX));
  /* 1062674d call 0x10627270 */
  push32(0x10626752u); f_10627270();
  /* 10626752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10626758 push 9 */
  push32((uint32_t)(0x9u));
  /* 1062675a call 0x10626380 */
  push32(0x1062675fu); f_10626380();
  /* 1062675f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626762 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626766 je 0x1062676d */
  if (C.zf) goto L_1062676d;
  /* 10626768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062676b jmp 0x10626799 */
  goto L_10626799;
L_1062676d:;
  /* 1062676d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626771 jne 0x1062677a */
  if (!C.zf) goto L_1062677a;
  /* 10626773 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1062677a:;
  /* 1062677a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062677d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626780 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10626783 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10626786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626789 push eax */
  push32((uint32_t)(EAX));
  /* 1062678a push 0 */
  push32((uint32_t)(0x0u));
  /* 1062678c mov ecx, dword ptr [0x1064fdac] */
  ECX = (r32((uint32_t)(0x1064fdac)));
  /* 10626792 push ecx */
  push32((uint32_t)(ECX));
  /* 10626793 call dword ptr [0x106502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d4))), 0x10626799u);
L_10626799:;
  /* 10626799 mov esp, ebp */
  ESP = (EBP);
  /* 1062679b pop ebp */
  EBP = (pop32());
  /* 1062679c ret  */
  ESPCHK(0x10626730u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x106267a0 (10 bytes, 5 insns) */
void f_106267a0(void) {
  FTRACE(0x106267a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106267a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106267a1 mov ebp, esp */
  EBP = (ESP);
  /* 106267a3 mov eax, 1 */
  EAX = (0x1u);
  /* 106267a8 pop ebp */
  EBP = (pop32());
  /* 106267a9 ret  */
  ESPCHK(0x106267a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x106267b0 (173 bytes, 59 insns) */
void f_106267b0(void) {
  FTRACE(0x106267b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106267b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106267b1 mov ebp, esp */
  EBP = (ESP);
  /* 106267b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106267b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106267ba jbe 0x106267c3 */
  if ((C.cf||C.zf)) goto L_106267c3;
  /* 106267bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106267be jmp 0x10626859 */
  goto L_10626859;
L_106267c3:;
  /* 106267c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 106267c5 call 0x106262e0 */
  push32(0x106267cau); f_106262e0();
  /* 106267ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106267cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106267d0 push eax */
  push32((uint32_t)(EAX));
  /* 106267d1 call 0x10626be0 */
  push32(0x106267d6u); f_10626be0();
  /* 106267d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106267d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106267dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106267e0 je 0x10626821 */
  if (C.zf) goto L_10626821;
  /* 106267e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106267e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106267ec cmp ecx, dword ptr [0x1064cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1064cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106267f2 ja 0x10626812 */
  if ((!C.cf&&!C.zf)) goto L_10626812;
  /* 106267f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106267f7 push edx */
  push32((uint32_t)(EDX));
  /* 106267f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106267fb push eax */
  push32((uint32_t)(EAX));
  /* 106267fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106267ff push ecx */
  push32((uint32_t)(ECX));
  /* 10626800 call 0x10627ab0 */
  push32(0x10626805u); f_10627ab0();
  /* 10626805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1062680a je 0x10626812 */
  if (C.zf) goto L_10626812;
  /* 1062680c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062680f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10626812:;
  /* 10626812 push 9 */
  push32((uint32_t)(0x9u));
  /* 10626814 call 0x10626380 */
  push32(0x10626819u); f_10626380();
  /* 10626819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062681c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1062681f jmp 0x10626859 */
  goto L_10626859;
L_10626821:;
  /* 10626821 push 9 */
  push32((uint32_t)(0x9u));
  /* 10626823 call 0x10626380 */
  push32(0x10626828u); f_10626380();
  /* 10626828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062682b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062682f jne 0x10626838 */
  if (!C.zf) goto L_10626838;
  /* 10626831 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10626838:;
  /* 10626838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062683b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1062683e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10626840 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10626843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626846 push ecx */
  push32((uint32_t)(ECX));
  /* 10626847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062684a push edx */
  push32((uint32_t)(EDX));
  /* 1062684b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1062684d mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 10626852 push eax */
  push32((uint32_t)(EAX));
  /* 10626853 call dword ptr [0x106502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d0))), 0x10626859u);
L_10626859:;
  /* 10626859 mov esp, ebp */
  ESP = (EBP);
  /* 1062685b pop ebp */
  EBP = (pop32());
  /* 1062685c ret  */
  ESPCHK(0x106267b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x10626860 (490 bytes, 165 insns) */
void f_10626860(void) {
  FTRACE(0x10626860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626860 push ebp */
  push32((uint32_t)(EBP));
  /* 10626861 mov ebp, esp */
  EBP = (ESP);
  /* 10626863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062686a jne 0x1062687d */
  if (!C.zf) goto L_1062687d;
  /* 1062686c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1062686f push eax */
  push32((uint32_t)(EAX));
  /* 10626870 call 0x106266b0 */
  push32(0x10626875u); f_106266b0();
  /* 10626875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626878 jmp 0x10626a46 */
  goto L_10626a46;
L_1062687d:;
  /* 1062687d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626881 jne 0x10626896 */
  if (!C.zf) goto L_10626896;
  /* 10626883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626886 push ecx */
  push32((uint32_t)(ECX));
  /* 10626887 call 0x10626a50 */
  push32(0x1062688cu); f_10626a50();
  /* 1062688c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1062688f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626891 jmp 0x10626a46 */
  goto L_10626a46;
L_10626896:;
  /* 10626896 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1062689d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106268a1 ja 0x10626a19 */
  if ((!C.cf&&!C.zf)) goto L_10626a19;
  /* 106268a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106268a9 call 0x106262e0 */
  push32(0x106268aeu); f_106262e0();
  /* 106268ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106268b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106268b4 push edx */
  push32((uint32_t)(EDX));
  /* 106268b5 call 0x10626be0 */
  push32(0x106268bau); f_10626be0();
  /* 106268ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106268bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106268c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106268c4 je 0x106269dc */
  if (C.zf) goto L_106269dc;
  /* 106268ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106268cd cmp eax, dword ptr [0x1064cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1064cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106268d3 ja 0x10626950 */
  if ((!C.cf&&!C.zf)) goto L_10626950;
  /* 106268d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106268d8 push ecx */
  push32((uint32_t)(ECX));
  /* 106268d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106268dc push edx */
  push32((uint32_t)(EDX));
  /* 106268dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106268e0 push eax */
  push32((uint32_t)(EAX));
  /* 106268e1 call 0x10627ab0 */
  push32(0x106268e6u); f_10627ab0();
  /* 106268e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106268e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106268eb je 0x106268f5 */
  if (C.zf) goto L_106268f5;
  /* 106268ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106268f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106268f3 jmp 0x10626950 */
  goto L_10626950;
L_106268f5:;
  /* 106268f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106268f8 push edx */
  push32((uint32_t)(EDX));
  /* 106268f9 call 0x10627270 */
  push32(0x106268feu); f_10627270();
  /* 106268fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10626904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626908 je 0x10626950 */
  if (C.zf) goto L_10626950;
  /* 1062690a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062690d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10626910 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626913 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10626916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626919 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062691c jae 0x10626926 */
  if (!C.cf) goto L_10626926;
  /* 1062691e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10626924 jmp 0x1062692c */
  goto L_1062692c;
L_10626926:;
  /* 10626926 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626929 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1062692c:;
  /* 1062692c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1062692f push edx */
  push32((uint32_t)(EDX));
  /* 10626930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626933 push eax */
  push32((uint32_t)(EAX));
  /* 10626934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626937 push ecx */
  push32((uint32_t)(ECX));
  /* 10626938 call 0x106291c0 */
  push32(0x1062693du); f_106291c0();
  /* 1062693d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626943 push edx */
  push32((uint32_t)(EDX));
  /* 10626944 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10626947 push eax */
  push32((uint32_t)(EAX));
  /* 10626948 call 0x10626ca0 */
  push32(0x1062694du); f_10626ca0();
  /* 1062694d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10626950:;
  /* 10626950 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626954 jne 0x106269d0 */
  if (!C.zf) goto L_106269d0;
  /* 10626956 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062695a jne 0x10626963 */
  if (!C.zf) goto L_10626963;
  /* 1062695c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10626963:;
  /* 10626963 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626966 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10626969 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1062696c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1062696f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626972 push edx */
  push32((uint32_t)(EDX));
  /* 10626973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10626975 mov eax, dword ptr [0x1064fdac] */
  EAX = (r32((uint32_t)(0x1064fdac)));
  /* 1062697a push eax */
  push32((uint32_t)(EAX));
  /* 1062697b call dword ptr [0x106502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d4))), 0x10626981u);
  /* 10626981 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10626984 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626988 je 0x106269d0 */
  if (C.zf) goto L_106269d0;
  /* 1062698a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1062698d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10626990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10626993 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10626996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626999 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1062699c jae 0x106269a6 */
  if (!C.cf) goto L_106269a6;
  /* 1062699e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106269a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106269a4 jmp 0x106269ac */
  goto L_106269ac;
L_106269a6:;
  /* 106269a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106269a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106269ac:;
  /* 106269ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106269af push eax */
  push32((uint32_t)(EAX));
  /* 106269b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106269b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106269b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106269b7 push edx */
  push32((uint32_t)(EDX));
  /* 106269b8 call 0x106291c0 */
  push32(0x106269bdu); f_106291c0();
  /* 106269bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106269c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106269c3 push eax */
  push32((uint32_t)(EAX));
  /* 106269c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106269c7 push ecx */
  push32((uint32_t)(ECX));
  /* 106269c8 call 0x10626ca0 */
  push32(0x106269cdu); f_10626ca0();
  /* 106269cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106269d0:;
  /* 106269d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 106269d2 call 0x10626380 */
  push32(0x106269d7u); f_10626380();
  /* 106269d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106269da jmp 0x10626a19 */
  goto L_10626a19;
L_106269dc:;
  /* 106269dc push 9 */
  push32((uint32_t)(0x9u));
  /* 106269de call 0x10626380 */
  push32(0x106269e3u); f_10626380();
  /* 106269e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106269e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106269ea jne 0x106269f3 */
  if (!C.zf) goto L_106269f3;
  /* 106269ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106269f3:;
  /* 106269f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106269f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106269f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106269fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106269ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626a02 push eax */
  push32((uint32_t)(EAX));
  /* 10626a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626a06 push ecx */
  push32((uint32_t)(ECX));
  /* 10626a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10626a09 mov edx, dword ptr [0x1064fdac] */
  EDX = (r32((uint32_t)(0x1064fdac)));
  /* 10626a0f push edx */
  push32((uint32_t)(EDX));
  /* 10626a10 call dword ptr [0x106502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502d0))), 0x10626a16u);
  /* 10626a16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10626a19:;
  /* 10626a19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626a1d jne 0x10626a28 */
  if (!C.zf) goto L_10626a28;
  /* 10626a1f cmp dword ptr [0x1064e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1064e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626a26 jne 0x10626a2d */
  if (!C.zf) goto L_10626a2d;
L_10626a28:;
  /* 10626a28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10626a2b jmp 0x10626a46 */
  goto L_10626a46;
L_10626a2d:;
  /* 10626a2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10626a30 push eax */
  push32((uint32_t)(EAX));
  /* 10626a31 call 0x10626620 */
  push32(0x10626a36u); f_10626620();
  /* 10626a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10626a3b jne 0x10626a41 */
  if (!C.zf) goto L_10626a41;
  /* 10626a3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10626a3f jmp 0x10626a46 */
  goto L_10626a46;
L_10626a41:;
  /* 10626a41 jmp 0x10626896 */
  goto L_10626896;
L_10626a46:;
  /* 10626a46 mov esp, ebp */
  ESP = (EBP);
  /* 10626a48 pop ebp */
  EBP = (pop32());
  /* 10626a49 ret  */
  ESPCHK(0x10626860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x10626a50 (104 bytes, 38 insns) */
void f_10626a50(void) {
  FTRACE(0x10626a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10626a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10626a51 mov ebp, esp */
  EBP = (ESP);
  /* 10626a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10626a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626a58 jne 0x10626a5c */
  if (!C.zf) goto L_10626a5c;
  /* 10626a5a jmp 0x10626ab4 */
  goto L_10626ab4;
L_10626a5c:;
  /* 10626a5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10626a5e call 0x106262e0 */
  push32(0x10626a63u); f_106262e0();
  /* 10626a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626a69 push eax */
  push32((uint32_t)(EAX));
  /* 10626a6a call 0x10626be0 */
  push32(0x10626a6fu); f_10626be0();
  /* 10626a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626a72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10626a75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10626a79 je 0x10626a97 */
  if (C.zf) goto L_10626a97;
  /* 10626a7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626a7e push ecx */
  push32((uint32_t)(ECX));
  /* 10626a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10626a82 push edx */
  push32((uint32_t)(EDX));
  /* 10626a83 call 0x10626ca0 */
  push32(0x10626a88u); f_10626ca0();
  /* 10626a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10626a8d call 0x10626380 */
  push32(0x10626a92u); f_10626380();
  /* 10626a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626a95 jmp 0x10626ab4 */
  goto L_10626ab4;
L_10626a97:;
  /* 10626a97 push 9 */
  push32((uint32_t)(0x9u));
  /* 10626a99 call 0x10626380 */
  push32(0x10626a9eu); f_10626380();
  /* 10626a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10626aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10626aa4 push eax */
  push32((uint32_t)(EAX));
  /* 10626aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10626aa7 mov ecx, dword ptr [0x1064fdac] */
  ECX = (r32((uint32_t)(0x1064fdac)));
  /* 10626aad push ecx */
  push32((uint32_t)(ECX));
  /* 10626aae call dword ptr [0x106502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106502ec))), 0x10626ab4u);
L_10626ab4:;
  /* 10626ab4 mov esp, ebp */
  ESP = (EBP);
  /* 10626ab6 pop ebp */
  EBP = (pop32());
  /* 10626ab7 ret  */
  ESPCHK(0x10626a50u, _esp0);
  ESP += 4; return;
}

